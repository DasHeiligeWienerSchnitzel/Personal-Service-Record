//Gets the currentMissionID, savedMissionID and currentMissionTime
private _missionID = missionName;
private _savedMissionID = profileNamespace getVariable ["ER32_PSR_CurrentMissionID", ""];
private _missionTime = profileNamespace getVariable ["ER32_PSR_CurrentMissionTime", 0];

//If currentMissionID and savedMissionID is not the same it will reset everything to 0. This only happens on a new mission start.
if !(_savedMissionID isEqualTo _missionID) then {
	_missionTime = 0;
	profileNamespace setVariable ["ER32_PSR_CurrentMissionID", _missionID];
	profileNamespace setVariable ["ER32_PSR_CurrentMissionTime", 0];
	profileNamespace setVariable ["ER32_PSR_CurrentMissionCounted", false];
};

player setVariable ["ER32_PSR_CurrentMissionTime", _missionTime];

//Add Main Ace Self Interaction to add further sub action points to it
ER32_PersonalServiceRecord_main = [
	"ER32_PersonalServiceRecord_main",
	"PSR",
	"",
	{true},
	{true}
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], ER32_PersonalServiceRecord_main] call ace_interact_menu_fnc_addActionToObject;

//Action to look at own PSR Book.
ER32_PersonalServiceRecord_showSelf = [
	"ER32_PersonalServiceRecord_showSelf",
	"Open PSR",
	"",
	{
		player setVariable ["ER32_PSR_recordOwner",clientOwner];
		execVM "scripts\ER32_PSR_page1_init.sqf"
	},
	{true}
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","ER32_PersonalServiceRecord_main"], ER32_PersonalServiceRecord_showSelf] call ace_interact_menu_fnc_addActionToObject;

//Action to allow creation of new awards.
ER32_PersonalServiceRecord_createAward = [
	"ER32_PersonalServiceRecord_createAward",
	"Create New Award",
	"",
	{execVM "scripts\ER32_PSR_createAward_init.sqf"},
	{getPlayerUID player in ER32_PSR_Whitelist}
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","ER32_PersonalServiceRecord_main"], ER32_PersonalServiceRecord_createAward] call ace_interact_menu_fnc_addActionToObject;

//Action to give created awards to other players
ER32_PersonalServiceRecord_giveAward = [
	"ER32_PersonalServiceRecord_giveAward",
	"Give Award",
	"",
	{execVM "scripts\ER32_PSR_giveAward_init.sqf"},
	{getPlayerUID player in ER32_PSR_Whitelist}
] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions","ER32_PersonalServiceRecord_main"], ER32_PersonalServiceRecord_giveAward] call ace_interact_menu_fnc_addActionToObject;

//Ace Action to view others PSR Books.
ER32_PersonalServiceRecord_viewOther = [
	"ER32_PersonalServiceRecord_viewOther",
	"View PSR",
	"",
	{
		params ["_target", "_player", "_params"];
		private _recordOwner = owner _target;
		_player setVariable ["ER32_PSR_recordOwner",_recordOwner];
		[clientOwner,1] remoteExec ["ER32_fnc_PSR_getPublicRecord", _recordOwner];
	},
	{
		params ["_target", "_player", "_params"];
		
		//isPlayer _target && {_target != _player} && {alive _target}
	}
] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], ER32_PersonalServiceRecord_viewOther, true] call ace_interact_menu_fnc_addActionToClass;

//EventHandler for Killing Units
addMissionEventHandler ["EntityKilled", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	if (isNull _instigator) then {
		_instigator = _killer;
	};
	
	if (!isPlayer _instigator) exitWith {};
	
	if ((side group _instigator) isEqualTo west && (side group _unit) isEqualTo east) then
	{
		private _kills = _instigator getVariable ["ER32_PSR_KillCount",0];
		_instigator setVariable ["ER32_PSR_KillCount", _kills + 1, true];
	};
}];

//EventHandler for Treatments Succeeded
["ace_treatmentSucceded", {
	params ["_caller", "_target", "_selectionName", "_className", "_itemUser", "_usedItem", "_createLitter"];
	
	private _treatments = _caller getVariable ["ER32_PSR_TreatmentsDone", 0];
	_caller setVariable ["ER32_PSR_TreatmentsDone", _treatments + 1];
}] call CBA_fnc_addEventHandler;

//EventHandler for Explosives Defused
["ace_explosives_defuse", {
	params ["_explosive", "_unit"];
	
	private _defused = _unit getVariable ["ER32_PSR_Defused", 0];
	_unit setVariable ["ER32_PSR_Defused", _defused + 1];
}] call CBA_fnc_addEventHandler;

//EventHandler for Trenches Dug
["ace_trenches_finished", {
	params ["_unit", "_trench"];
	
	private _trenchesDug = _unit getVariable ["ER32_PSR_TrenchesDug", 0];
	_unit setVariable ["ER32_PSR_TrenchesDug", _trenchesDug + 1];
}] call CBA_fnc_addEventHandler;

//Load saved stats
_lastKillCount = profileNamespace getVariable ["ER32_PSR_KillCount", 0];
_lastDistance = profileNamespace getVariable ["ER32_PSR_Distance", 0];
_lastPlayTime = profileNamespace getVariable ["ER32_PSR_PlayTime", 0];
_lastSessions = profileNamespace getVariable ["ER32_PSR_MissionsPlayed", 0];
_lastTreatments = profileNamespace getVariable ["ER32_PSR_TreatmentsDone", 0];
_lastDefused = profileNamespace getVariable ["ER32_PSR_Defused", 0];
_lastTrenchesDug = profileNamespace getVariable ["ER32_PSR_TrenchesDug", 0];

player setVariable ["ER32_PSR_KillCount", _lastKillCount];
player setVariable ["ER32_PSR_Distance", _lastDistance];
player setVariable ["ER32_PSR_PlayTime", _lastPlayTime];
player setVariable ["ER32_PSR_MissionsPlayed", _lastSessions];
player setVariable ["ER32_PSR_TreatmentsDone", _lastTreatments];
player setVariable ["ER32_PSR_Defused", _lastDefused];
player setVariable ["ER32_PSR_TrenchesDug", _lastTrenchesDug];

// One minute loop
[] spawn {
	private _threshold = 90*60;
	while {true} do {
		sleep 60;
		
		//Count Mission As Participated
		private _alreadyCounted = profileNamespace getVariable ["ER32_PSR_CurrentMissionCounted", false];
		private _missionTime = player getVariable ["ER32_PSR_CurrentMissionTime", 0];
		
		if (!_alreadyCounted && (_missionTime >= _threshold)) then {
			private _missionsPlayed = profileNamespace getVariable ["ER32_PSR_MissionsPlayed", 0];
			
			profileNamespace setVariable ["ER32_PSR_MissionsPlayed", _missionsPlayed + 1];
			
			profileNamespace setVariable ["ER32_PSR_CurrentMissionCounted", true];
		};
		
		//Time Played
		private _time = player getVariable ["ER32_PSR_PlayTime", 0];
		player setVariable ["ER32_PSR_PlayTime", _time + 60];
		
		//Mission Time
		private _missionTime = player getVariable ["ER32_PSR_CurrentMissionTime", 0];
		_missionTime = _missionTime + 60;
		
		player setVariable ["ER32_PSR_CurrentMissionTime", _missionTime];
		profileNamespace setVariable ["ER32_PSR_CurrentMissionTime", _missionTime];

		//WRITE DESCRIPTION
		private _kills = player getVariable ["ER32_PSR_KillCount", 0];
		private _distance = player getVariable ["ER32_PSR_Distance", 0];
		private _time = player getVariable ["ER32_PSR_PlayTime", 0];
		private _treatments = player getVariable ["ER32_PSR_TreatmentsDone", 0];
		private _defused = player getVariable ["ER32_PSR_Defused", 0];
		private _trenchesDug = player getVariable ["ER32_PSR_TrenchesDug", 0];
		
		profileNamespace setVariable ["ER32_PSR_KillCount", _kills];
		profileNamespace setVariable ["ER32_PSR_Distance", _distance];
		profileNamespace setVariable ["ER32_PSR_PlayTime", _time];
		profileNamespace setVariable ["ER32_PSR_TreatmentsDone", _treatments];
		profileNamespace setVariable ["ER32_PSR_Defused", _defused];
		profileNamespace setVariable ["ER32_PSR_TrenchesDug", _trenchesDug];
		
		hint "Stats saved";
	};
};

// One second loop
[] spawn {

	private _lastPos = getPosATL player;

	while {true} do {

		sleep 1;

		private _newPos = getPosATL player;

		// 2D ground distance
		private _distance = _lastPos distance2D _newPos;

		// ignore teleport/jip spikes
		if (_distance < 100) then {

			private _total =
				player getVariable ["ER32_PSR_Distance", 0];

			player setVariable [
				"ER32_PSR_Distance",
				_total + _distance
			];
		};

		_lastPos = _newPos;
	};
};