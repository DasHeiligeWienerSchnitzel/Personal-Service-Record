createDialog "ER32_PersonalServiceRecord_Page3";

private _display = findDisplay 3200058;
private _medals = profileNamespace getVariable ["ER32_PSR_Medals", []];

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