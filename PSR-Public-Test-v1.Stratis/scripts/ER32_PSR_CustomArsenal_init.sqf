["ace_arsenal_displayOpened", {
	if (profileNamespace getVariable ["ER32_PSR_training_basicMedical",false]) then {
		addItemsToArsenal = ["ACE_bloodIV", "ACE_epinephrine", "ACE_morphine"]
	};
	[
		{call ace_arsenal_fnc_addVirtualItems},
		[ace_arsenal_currentBox,addItemsToArsenal]
	] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;

