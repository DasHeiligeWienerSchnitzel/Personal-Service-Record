createDialog "ER32_PSR_AwardCreator";

private _display = findDisplay 3200061;

private _imageList = _display displayCtrl 1500;

lbClear _imageList;

{
	_x params ["_name", "_path"];
	
	private _index = _imageList lbAdd _name;
	_imageList lbSetData [_index, _path];
	//_imageList lbSetPicture [_index, _path];
} forEach ER32_PSR_AwardImages;



_imageList ctrlAddEventHandler ["LBSelChanged", {
	params ["_ctrl", "_index"];
	
	private _path = _ctrl lbData _index;
	
	uiNamespace setVariable ["ER32_PSR_SelectedAwardImage", _path];
	
	private _display = ctrlParent _ctrl;
	private _previewImage = _display displayCtrl 1200;
	
	_previewImage ctrlSetText _path;
}];

_imageList lbSetCurSel 0;



private _titleEdit = _display displayCtrl 1400;

_titleEdit ctrlAddEventHandler ["EditChanged", {
	params ["_ctrl", "_text"];
	
	private _length = count _text;

	private _display = ctrlParent _ctrl;
	private _titleCounter = _display displayCtrl 1003;
	
	_titleCounter ctrlSetText format ["%1/32", _length];
	
	if(_length >= 32) then {
		_titleCounter ctrlSetTextColor [1, 0.02, 0.2, 1];
	} else {
		_titleCounter ctrlSetTextColor [1, 1, 1, 1];
	};
}];

private _descriptionEdit = _display displayCtrl 1401;

_descriptionEdit ctrlAddEventHandler ["EditChanged", {
	params ["_ctrl", "_text"];
	
	private _length = count _text;
	
	private _display = ctrlParent _ctrl;
	private _descriptionCounter = _display displayCtrl 1004;
	
	_descriptionCounter ctrlSetText format ["%1/128", _length];
	
	if(_length >= 128) then {
		_descriptionCounter ctrlSetTextColor [1, 0.02, 0.2, 1];
	} else {
		_descriptionCounter ctrlSetTextColor [1, 1, 1, 1];
	};
}];
