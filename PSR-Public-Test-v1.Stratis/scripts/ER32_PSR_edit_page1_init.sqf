createDialog "ER32_PersonalServiceRecord_Edit_Page1";

private _display = findDisplay 3200057;

private _textName = _display displayCtrl 1009;
private _textRank = _display displayCtrl 1010;
private _textSection = _display displayCtrl 1011;
private _textRole = _display displayCtrl 1012;
private _textId = _display displayCtrl 1013;

private _varName = name player;
private _varRank = profileNamespace getVariable  ["ER32_PSR_Rank", "Private"];
private _varSection = profileNamespace getVariable  ["ER32_PSR_Section", "N/A"];
private _varRole = profileNamespace getVariable  ["ER32_PSR_Role", "Rifleman"];
private _varId = "ER32-" + getPlayerUID player;

_textName ctrlSetText _varName;
_textRank ctrlSetText _varRank;
_textSection ctrlSetText _varSection;
_textRole ctrlSetText _varRole;
_textId ctrlSetText _varId;