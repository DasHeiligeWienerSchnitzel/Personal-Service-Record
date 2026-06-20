params ["_display"];

private _medals = _display getVariable ["ER32_PSR_EditMedals", []];

// Delete old dynamically created medal controls
{
	if (!isNull _x) then {
		ctrlDelete _x;
	};
} forEach (_display getVariable ["ER32_PSR_MedalControls", []]);

private _createdControls = [];

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

	private _xPos = _startX + (_col * _gapX);
	private _yPos = _startY + (_row * _gapY);

	private _pic = _display ctrlCreate ["RscPictureKeepAspect", 2000 + _index];
	_pic ctrlSetPosition [_xPos, _yPos, _size, _size];
	_pic ctrlSetText _image;
	_pic ctrlSetTooltip format ["%1\n%2", _title, _desc];
	_pic ctrlCommit 0;

	_createdControls pushBack _pic;

	private _btn = _display ctrlCreate ["RscButton", 3000 + _index];
	_btn ctrlSetPosition [
		_xPos + _size - 0.025,
		_yPos,
		0.025,
		0.025
	];

	_btn ctrlSetText "X";
	_btn ctrlSetTooltip format ["Remove %1", _title];

	_btn ctrlSetBackgroundColor [0.6, 0, 0, 0.9];
	_btn ctrlSetTextColor [1, 1, 1, 1];

	_btn setVariable ["ER32_PSR_MedalIndex", _index];

	_btn ctrlAddEventHandler ["ButtonClick", {
		params ["_ctrl"];

		private _display = ctrlParent _ctrl;
		private _removeIndex = _ctrl getVariable ["ER32_PSR_MedalIndex", -1];

		private _medals = _display getVariable ["ER32_PSR_EditMedals", []];

		if (_removeIndex >= 0 && {_removeIndex < count _medals}) then {
			_medals deleteAt _removeIndex;

			_display setVariable ["ER32_PSR_EditMedals", _medals];

			[_display] call ER32_fnc_PSR_refreshEditMedals;
		};
	}];

	_btn ctrlCommit 0;

	_createdControls pushBack _btn;

} forEach _medals;

_display setVariable ["ER32_PSR_MedalControls", _createdControls];