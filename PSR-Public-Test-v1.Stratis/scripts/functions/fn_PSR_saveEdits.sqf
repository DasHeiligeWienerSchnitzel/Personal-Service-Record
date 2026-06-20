params ["_caller", "_page", "_data"];

switch (_page) do {
	case 1: {
		_data params ["_varRank", "_varSection", "_varRole"];
		
		profileNamespace setVariable ["ER32_PSR_Rank", _varRank];
		profileNamespace setVariable ["ER32_PSR_Section", _varSection];
		profileNamespace setVariable ["ER32_PSR_Role", _varRole];
	};
	
	case 2: {
		_data params ["_trainingControlsBooleans"];
		
		{
			_x params ["_trainingVar", "_unlocked"];
			
			profileNamespace setVariable [_trainingVar, _unlocked];
		}forEach _trainingControlsBooleans;
	};
	
	case 3: {
		_data params ["_medals"];

		profileNamespace setVariable ["ER32_PSR_Medals", _medals];
	};
};

[_caller, _page] call ER32_fnc_PSR_getPublicRecord;