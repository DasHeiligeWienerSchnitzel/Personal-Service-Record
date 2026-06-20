params ["_page"];

_data = [];
switch (_page) do {
	case 1: {
		private _display = findDisplay 3200057;

		_varRank = ctrlText (_display displayCtrl 1010);
		_varSection = ctrlText (_display displayCtrl 1011);
		_varRole = ctrlText (_display displayCtrl 1012);
		
		_data = [_varRank, _varSection, _varRole];
		
		
	};
	
	case 2: {
		private _display = findDisplay 3200059;
		
		private _trainingControls = [
			[1200, "ER32_PSR_training_basicCombat"],
			[1201, "ER32_PSR_training_advancedCombat"],
			[1202, "ER32_PSR_training_advancedMedical"],
			[1203, "ER32_PSR_training_advancedLeadership"],
			[1204, "ER32_PSR_training_SIGINT"],
			[1205, "ER32_PSR_training_JTAC"],
			[1206, "ER32_PSR_training_basicMedical"],
			[1207, "ER32_PSR_training_teamLeadership"],
			[1208, "ER32_PSR_training_EOD"],
			[1209, "ER32_PSR_training_air"]
		];
		
		_trainingControlsBooleans = [];
		{
			_x params ["_idc", "_trainingVar"];
			
			private _ctrl = _display displayCtrl _idc;
			private _colour = ctrlTextColor _ctrl;
			
			private _unlocked = false;
			if (_colour isEqualTo [1,1,1,1]) then {
				_unlocked = true;
			}else{
				_unlocked = false;
			};
			
			_trainingControlsBooleans pushBack [_trainingVar, _unlocked];
			
		}forEach _trainingControls;
		
		_data = [_trainingControlsBooleans];
	};
	
	case 3: {
		private _display = findDisplay 3200060;

		if (isNull _display) exitWith {
			hint "PSR Error: Edit Page 3 not found.";
		};

		private _medals = _display getVariable ["ER32_PSR_EditMedals", []];

		_data = [_medals];
	};
};

[clientOwner, _page, _data] remoteExec ["ER32_fnc_PSR_saveEdits", player getVariable ["ER32_PSR_recordOwner", clientOwner]];