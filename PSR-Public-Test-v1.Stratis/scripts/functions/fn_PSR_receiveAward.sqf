params [
	["_giverOwner", -1, [0]],
	["_awardData", [], [[]]],
	["_giverName", "", [""]],
	["_giverUID", "", [""]]
];

if (_awardData isEqualTo []) exitWith {};

private _medals = profileNamespace getVariable ["ER32_PSR_Medals", []];

private _awardToStore = +_awardData;

_awardToStore pushBack _giverName;
_awardToStore pushBack _giverUID;
_awardToStore pushBack systemTimeUTC;

_medals pushBack _awardToStore;

profileNamespace setVariable ["ER32_PSR_Medals", _medals];
saveProfileNamespace;

hint format [
	"You received an award: %1",
	_awardToStore param [2, "Unknown Award"]
];