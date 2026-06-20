private _display = findDisplay 3200062;

private _playerNearbyList = _display displayCtrl 1501;

private _selectedPlayers = [];

for "_i" from 0 to ((lbSize _playerList) - 1) do {
	if ((_playerList lbValue _i) isEqualTo 1) then {
		private _unit = objectFromNetId (_playerList lbData _i);
		
		if (!isNull _unit && (isPlayer _unit)) then {
			_selectedPlayers pushBack _unit;
		};
	};
};

if (_selectedPlayers isEqualTo []) exitWith {
	hint "No players selected!";
};

_imageList = _display displayCtrl 1500;
private _medalList = profileNamespace getVariable ["ER32_PSR_MedalList", []];
private _award = _medalList select (lbCurSel 1500);

{
	[_award] remoteExecCall ["ER32_PSR_fnc_receiveAward", _x];
} forEach _selectedPlayers;