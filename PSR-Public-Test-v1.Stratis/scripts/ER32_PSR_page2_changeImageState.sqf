params ["_control"];

_ctrl = _control select 0;
_idc = ctrlIDC _ctrl;

private _trainingVar = switch (_idc) do {
	case 1200:	{"ER32_PSR_training_basicCombat";};
	case 1201:	{"ER32_PSR_training_advancedCombat";};
	case 1202:	{"ER32_PSR_training_advancedMedical";};
	case 1203:	{"ER32_PSR_training_advancedLeadership";};
	case 1204:	{"ER32_PSR_training_SIGINT";};
	case 1205:	{"ER32_PSR_training_JTAC";};
	case 1206:	{"ER32_PSR_training_basicMedical";};
	case 1207:	{"ER32_PSR_training_teamLeadership";};
	case 1208:	{"ER32_PSR_training_EOD";};
	case 1209:	{"ER32_PSR_training_air";};
};

private _colour = ctrlTextColor _ctrl;

private _unlocked = false;
if (_colour isEqualTo [1,1,1,1]) then {
	_unlocked = true;
}else{
	_unlocked = false;
};

//private _unlocked = profileNamespace getVariable [_trainingVar, false];

if (_unlocked) then {
	//profileNamespace setVariable [_trainingVar, false];
	_ctrl ctrlsetTextColor [0.3, 0.3, 0.3, 0.5];
	_ctrl ctrlSetActiveColor [0.3, 0.3, 0.3, 0.5];
	_ctrl ctrlSetTooltip "Complete the training to unlock this medal.";
}else{
	//profileNamespace setVariable [_trainingVar, true];
	_ctrl ctrlsetTextColor [1, 1, 1, 1];
	_ctrl ctrlSetActiveColor [1, 1, 1, 1];
	_ctrl ctrlSetTooltip "";
};