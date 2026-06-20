params ["_data", "_page", "_recordOwner", "_edit"];

player setVariable ["ER32_PSR_recordOwner", _recordOwner];

closeDialog 0;
uiSleep 0.01;

switch (_page) do {
	case 1: {
		_data params ["_varName", "_varRank", "_varSection", "_varRole", "_varId"];
		
		private _display = displayNull;
		if (_edit == true) then {
			createDialog "ER32_PersonalServiceRecord_Edit_Page1";
			_display = findDisplay 3200057;
		}else{
			createDialog "ER32_PersonalServiceRecord_Page1";
			_display = findDisplay 3200055;
		};

		private _textName = _display displayCtrl 1009;
		private _textRank = _display displayCtrl 1010;
		private _textSection = _display displayCtrl 1011;
		private _textRole = _display displayCtrl 1012;
		private _textId = _display displayCtrl 1013;

		_textName ctrlSetText _varName;
		_textRank ctrlSetText _varRank;
		_textSection ctrlSetText _varSection;
		_textRole ctrlSetText _varRole;
		_textId ctrlSetText _varId;


		//Toggle Edit Button depending on whitelist
		private _editButton = _display displayCtrl 1015;

		if (getPlayerUID player in ER32_PSR_Whitelist) then {
			_editButton ctrlShow true;
			_editButton ctrlEnable true;
		} else {
			_editButton ctrlShow false;
			_editButton ctrlEnable false;
		};
	};
	
	case 2: {
		_data params ["_trainingControlsBoolean", "_varKillCount", "_varDistanceCount", "_varPlayTimeCount", "_varMissionsPlayedCount", "_varTreatmentsDoneCount", "_varDefusedCount", "_varTrenchesCount"]; 
		
		private _display = displayNull;
		
		if (_edit == true) then {
			createDialog "ER32_PersonalServiceRecord_Edit_Page2";
			_display = findDisplay 3200059;
		}else{
			createDialog "ER32_PersonalServiceRecord_Page2";
			_display = findDisplay 3200056;
		};
		
		{
			_x params ["_idc", "_state"];
			
			private _ctrl = _display displayCtrl _idc;
			
			if (_state) then {
				_ctrl ctrlSetTextColor [1,1,1,1];
			}else{
				_ctrl ctrlSetTextColor [0.3, 0.3, 0.3, 0.5];
				_ctrl ctrlSetTooltip "Complete the training to unlock this medal.";
			};
		}forEach _trainingControlsBoolean;
		
		private _textKillCount = _display displayCtrl 1112;
		private _textDistanceCount = _display displayCtrl 1113;
		private _textPlayTimeCount = _display displayCtrl 1116;
		private _textMissionsPlayedCount = _display displayCtrl 1117;
		private _textTreatmentsDone = _display displayCtrl 1119;
		private _textDefused = _display displayCtrl 1120;
		private _textTrenchesDug = _display displayCtrl 1121;
		
		_textKillCount ctrlSetText str (_varKillCount);
		_textDistanceCount ctrlSetText str ([_varDistanceCount/1000,1] call BIS_fnc_cutDecimals) + "km";
		_textPlayTimeCount ctrlSetText str ([_varPlayTimeCount/3600,1] call BIS_fnc_cutDecimals) + "h";
		_textMissionsPlayedCount ctrlSetText str (_varMissionsPlayedCount);
		_textTreatmentsDone ctrlSetText str (_varTreatmentsDoneCount);
		_textDefused ctrlSetText str (_varDefusedCount);
		_textTrenchesDug ctrlSetText str (_varTrenchesCount);
		
		//Toggle Edit Button depending on whitelist
		private _editButton = _display displayCtrl 9015;

		if (getPlayerUID player in ER32_PSR_Whitelist) then {
			_editButton ctrlShow true;
			_editButton ctrlEnable true;
		} else {
			_editButton ctrlShow false;
			_editButton ctrlEnable false;
		};
	};
	
	case 3: {
		_data params ["_medals"];
		
		private _display = displayNull;
		
		if (_edit == true) then {
			createDialog "ER32_PersonalServiceRecord_Edit_Page3";
			_display = findDisplay 3200060;

			_display setVariable ["ER32_PSR_EditMedals", +_medals];

			[_display] call ER32_fnc_PSR_refreshEditMedals;
		} else {
			createDialog "ER32_PersonalServiceRecord_Page3";
			_display = findDisplay 3200058;
			
			private _startX = 0.04;
			private _startY = 0.15;
			private _size = 0.14;
			private _gapX = 0.14;
			private _gapY = 0.20;
			private _perRow = 3;

			{
				_x params ["_id", "_image", "_title", "_desc"];

				private _index = _forEachIndex;
				private _col = _index mod _perRow;
				private _row = floor (_index / _perRow);

				private _ctrl = _display ctrlCreate ["RscPictureKeepAspect", 2000 + _index];
				_ctrl ctrlSetPosition [
					_startX + (_col * _gapX),
					_startY + (_row * _gapY),
					_size,
					_size
				];
				_ctrl ctrlSetText _image;
				_ctrl ctrlSetTooltip format ["%1\n%2", _title, _desc];
				_ctrl ctrlCommit 0;
			} forEach _medals;


			//Toggle Edit Button depending on whitelist
			private _editButton = _display displayCtrl 9015;

			if (getPlayerUID player in ER32_PSR_Whitelist) then {
				_editButton ctrlShow true;
				_editButton ctrlEnable true;
			} else {
				_editButton ctrlShow false;
				_editButton ctrlEnable false;
			};
		};
	};
};
