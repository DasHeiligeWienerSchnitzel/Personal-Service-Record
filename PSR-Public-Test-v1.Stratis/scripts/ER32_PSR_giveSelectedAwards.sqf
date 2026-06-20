private _display = findDisplay 3200062;

if (isNull _display) exitWith {
	hint "AwardGiver display not found.";
};

private _imageList = _display displayCtrl 1500;
private _playerList = _display displayCtrl 1501;

private _medalList = profileNamespace getVariable ["ER32_PSR_MedalList", []];

private _selectedMedalIndex = lbCurSel _imageList;

if (_selectedMedalIndex < 0) exitWith {
	hint "No award selected.";
};

private _medalListIndex = _imageList lbValue _selectedMedalIndex;

if (_medalListIndex < 0 || {_medalListIndex >= count _medalList}) exitWith {
	hint "Selected award could not be found.";
};

private _awardData = +(_medalList select _medalListIndex);

private _selectedPlayers = [];

for "_i" from 0 to ((lbSize _playerList) - 1) do {
	if ((_playerList lbValue _i) isEqualTo 1) then {
		private _netId = _playerList lbData _i;
		private _unit = objectFromNetId _netId;

		if (!isNull _unit && {isPlayer _unit}) then {
			_selectedPlayers pushBackUnique _unit;
		};
	};
};

if (_selectedPlayers isEqualTo []) exitWith {
	hint "No players selected.";
};

{
	private _targetOwner = owner _x;

	[
		clientOwner,
		_awardData,
		name player,
		getPlayerUID player
	] remoteExecCall ["ER32_fnc_PSR_receiveAward", _targetOwner];

} forEach _selectedPlayers;

hint format ["Award sent to %1 player(s).", count _selectedPlayers];

closeDialog 0;