private _display = findDisplay 3200061;

private _imageList = _display displayCtrl 1500;
private _titleEdit = _display displayCtrl 1400;
private _descriptionEdit = _display displayCtrl 1401;
private _deploymentCheckbox = _display displayCtrl 2800;

private _imagePath = _imageList lbData (lbCurSel _imageList);
private _titelText = ctrlText _titleEdit;
private _descriptionText = ctrlText _descriptionEdit;
private _deploymentChecked = cbChecked _deploymentCheckbox;

private _nextID = profileNamespace getVariable ["ER32_PSR_NextAwardID", 1];

profileNamespace setVariable ["ER32_PSR_NextAwardID", _nextID + 1];

_newMedal = [_nextID, _imagePath, _titelText, _descriptionText, _deploymentChecked];

_medalList = profileNamespace getVariable ["ER32_PSR_MedalList", []];

_medalList pushBack _newMedal;

profileNamespace setVariable ["ER32_PSR_MedalList", _medalList];

execVM "scripts\ER32_PSR_createAward_init.sqf"