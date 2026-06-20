params ["_caller", "_page"];
private _data = [];

private _edit = false;
if (_page >= 100) then {
	_page = _page - 100;
	_edit = true;
};


switch (_page) do {
	case 1: {
		private _varName = name player;
		private _varRank = profileNamespace getVariable  ["ER32_PSR_Rank", "Private"];
		private _varSection = profileNamespace getVariable  ["ER32_PSR_Section", "N/A"];
		private _varRole = profileNamespace getVariable  ["ER32_PSR_Role", "Rifleman"];
		private _varId = "ER32-" + getPlayerUID player;

		_data = [_varName, _varRank, _varSection, _varRole, _varId];
	};
	
	case 2: {
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
		
		private _trainingControlsBoolean = [];
		{
			_x params ["_idc", "_trainingVar"];
			private _state = profileNamespace getVariable [_trainingVar, false];
			_trainingControlsBoolean pushBack [_idc,_state];
		}forEach _trainingControls;
		
		private _varKillCount = profileNamespace getVariable  ["ER32_PSR_KillCount", 0];
		private _varDistanceCount = profileNamespace getVariable  ["ER32_PSR_Distance", 0];
		private _varPlayTimeCount = profileNamespace getVariable  ["ER32_PSR_PlayTime", 0];
		private _varMissionsPlayedCount = profileNamespace getVariable  ["ER32_PSR_MissionsPlayed", 0];
		private _varTreatmentsDoneCount = profileNamespace getVariable  ["ER32_PSR_TreatmentsDone", 0];
		private _varDefusedCount = profileNamespace getVariable  ["ER32_PSR_Defused", 0];
		private _varTrenchesCount = profileNamespace getVariable  ["ER32_PSR_TrenchesDug", 0];
		
		_data = [_trainingControlsBoolean, _varKillCount, _varDistanceCount, _varPlayTimeCount, _varMissionsPlayedCount, _varTreatmentsDoneCount, _varDefusedCount, _varTrenchesCount]; 
	};
	
	case 3: {
		private _medals = profileNamespace getVariable ["ER32_PSR_Medals", []];
		
		_data = [_medals];
	};
	
	default {
		private _varName = name player;
		private _varRank = profileNamespace getVariable  ["ER32_PSR_Rank", "Private"];
		private _varSection = profileNamespace getVariable  ["ER32_PSR_Section", "N/A"];
		private _varRole = profileNamespace getVariable  ["ER32_PSR_Role", "Rifleman"];
		private _varId = "ER32-" + getPlayerUID player;
		
		_data = [_varName, _varRank, _varSection, _varRole, _varId];
	};
};

private _recordOwner = clientOwner;
[_data, _page, _recordOwner, _edit] remoteExec ["ER32_fnc_PSR_openPublicRecord", _caller];