createDialog "ER32_PSR_AwardGiver";

private _display = findDisplay 3200062;

private _imageList = _display displayCtrl 1500;
private _medalList = profileNamespace getVariable ["ER32_PSR_MedalList", []];

lbClear _imageList;

{
	_x params ["_id", "_path", "_titel", "_description", "_isDeployment"];
	
	private _index = _imageList lbAdd _titel;
	_imageList lbSetData [_index, _path];
	_imageList lbSetValue [_index, _forEachIndex];
} forEach _medalList;



_imageList ctrlAddEventHandler ["LBSelChanged", {
	params ["_ctrl", "_index"];
	
	if (_index < 0) exitWith {};
	
	private _path = _ctrl lbData _index;
	
	uiNamespace setVariable ["ER32_PSR_SelectedAwardImage", _path];
	
	private _display = ctrlParent _ctrl;
	private _previewImage = _display displayCtrl 1200;
	
	_previewImage ctrlSetText _path;
}];

if ((lbSize _imageList) > 0) then {
	_imageList lbSetCurSel 0;
};



private _playerNearbyList = _display displayCtrl 1501;
lbClear _playerNearbyList;

private _range = 50;

private _nearbyPlayers = allPlayers select {
	_x != player &&
	{alive _x} &&
	{_x distance player <= _range}
};

{
	private _index = _playerNearbyList lbAdd format ["[] %1", name _x];
	_playerNearbyList lbSetData [_index, netId _x];
	_playerNearbyList lbSetValue [_index, 0];
} forEach _nearbyPlayers;

_playerNearbyList ctrlAddEventHandler ["LBSelChanged", {
	params ["_ctrl", "_index"];
	
	if (_index < 0) exitWith {};
	
	private _netID = _ctrl lbData _index;
	private _unit = objectFromNetId _netID;
	
	if (isNull _unit) exitWith {};
	
	private _selected = _ctrl lbValue _index;
	
	if (_selected isEqualTo 0) then {
		_ctrl lbSetValue [_index, 1];
		_ctrl lbSetText [_index, format ["[X] %1", name _unit]];
	} else {
		_ctrl lbSetValue [_index, 0];
		_ctrl lbSetText [_index, format ["[] %1", name _unit]];
	};
	
	_ctrl lbSetCurSel -1;
}];

