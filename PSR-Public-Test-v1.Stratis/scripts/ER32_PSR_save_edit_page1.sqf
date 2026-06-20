private _display = findDisplay 3200057;

_varRank = ctrlText (_display displayCtrl 1010);
_varSection = ctrlText (_display displayCtrl 1011);
_varRole = ctrlText (_display displayCtrl 1012);

profileNamespace setVariable ["ER32_PSR_Rank", _varRank];
profileNamespace setVariable ["ER32_PSR_Section", _varSection];
profileNamespace setVariable ["ER32_PSR_Role", _varRole];

closeDialog 0;

//////////////////////////////////////////////////////////////////////////////////

createDialog "ER32_PersonalServiceRecord_Page1";

uiSleep 0.05;

private _display = findDisplay 3200055;

private _textName = _display displayCtrl 1009;
private _textRank = _display displayCtrl 1010;
private _textSection = _display displayCtrl 1011;
private _textRole = _display displayCtrl 1012;
private _textId = _display displayCtrl 1013;

_varName = name player;
_varRank = profileNamespace getVariable  ["ER32_PSR_Rank", "Private"];
_varSection = profileNamespace getVariable  ["ER32_PSR_Section", "N/A"];
_varRole = profileNamespace getVariable  ["ER32_PSR_Role", "Rifleman"];
_varId = "ER32-" + getPlayerUID player;

_textName ctrlSetText _varName;
_textRank ctrlSetText _varRank;
_textSection ctrlSetText _varSection;
_textRole ctrlSetText _varRole;
_textId ctrlSetText _varId;