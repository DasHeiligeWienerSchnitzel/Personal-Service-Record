createDialog "ER32_PersonalServiceRecord_Page2";

private _display = findDisplay 3200056;

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

{
    _x params ["_idc", "_trainingVar"];

    private _ctrl = _display displayCtrl _idc;
    private _unlocked = profileNamespace getVariable [_trainingVar, false];

    if (_unlocked) then {
        _ctrl ctrlSetTextColor [1, 1, 1, 1];
    } else {
        _ctrl ctrlSetTextColor [0.3, 0.3, 0.3, 0.5];
		_ctrl ctrlSetTooltip "Complete the training to unlock this medal.";
    };
} forEach _trainingControls;

//Write Stats
private _textKillCount = _display displayCtrl 1112;
private _textDistanceCount = _display displayCtrl 1113;
private _textPlayTimeCount = _display displayCtrl 1116;
private _textMissionsPlayedCount = _display displayCtrl 1117;
private _textTreatmentsDone = _display displayCtrl 1119;
private _textDefused = _display displayCtrl 1120;
private _textTrenchesDug = _display displayCtrl 1121;

_varKillCount = profileNamespace getVariable  ["ER32_PSR_KillCount", 0];
_varDistanceCount = profileNamespace getVariable  ["ER32_PSR_Distance", 0];
_varPlayTimeCount = profileNamespace getVariable  ["ER32_PSR_PlayTime", 0];
_varMissionsPlayedCount = profileNamespace getVariable  ["ER32_PSR_MissionsPlayed", 0];
_varTreatmentsDoneCount = profileNamespace getVariable  ["ER32_PSR_TreatmentsDone", 0];
_varDefusedCount = profileNamespace getVariable  ["ER32_PSR_Defused", 0];
_varTrenchesCount = profileNamespace getVariable  ["ER32_PSR_TrenchesDug", 0];

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