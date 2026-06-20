createDialog "ER32_PersonalServiceRecord_Page1";

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


//Toggle Edit Button depending on whitelist
private _editButton = _display displayCtrl 1015;

if (getPlayerUID player in ER32_PSR_Whitelist) then {
	_editButton ctrlShow true;
	_editButton ctrlEnable true;
} else {
	_editButton ctrlShow false;
	_editButton ctrlEnable false;
};