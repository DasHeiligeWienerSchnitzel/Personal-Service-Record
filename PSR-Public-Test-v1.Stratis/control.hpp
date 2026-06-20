class ER32_PersonalServiceRecord_Page1
{
	idd = 3200055;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class Background: RscPicture
		{
			idc = 1000;
			text = "images\background.paa";
			x = 0.424843 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.27625 * safezoneW;
			h = 0.528 * safezoneH;
		};
		class Logo: RscPicture
		{
			idc = 1001;
			text = "images\ER32_Logo.paa";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class Titel: RscText
		{
			idc = 1002;
			text = "32 Engineer Regiment"; //--- ToDo: Localize;
			x = 0.533719 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.1428125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			sizeEx = 0.04 * safezoneH;
			shadow = 0;
		};
		class Undertitel: RscText
		{
			idc = 1003;
			text = "Personal Service Record"; //--- ToDo: Localize;
			x = 0.538719 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.1428125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			sizeEx = 0.03 * safezoneH;
			shadow = 0;
		};
		class Name: RscText
		{
			idc = 1004;
			text = "Name:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Rank: RscText
		{
			idc = 1005;
			text = "Rank:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Section: RscText
		{
			idc = 1006;
			text = "Section:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Role: RscText
		{
			idc = 1007;
			text = "Role:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class ID: RscText
		{
			idc = 1008;
			text = "ID:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class NameEdit: RscText
		{
			idc = 1009;
			text = "Max Mustermann"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class RankEdit: RscText
		{
			idc = 1010;
			text = "Private"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class SectionEdit: RscText
		{
			idc = 1011;
			text = "First Section"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class RoleEdit: RscText
		{
			idc = 1012;
			text = "Rifleman"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class IDEdit: RscText
		{
			idc = 1013;
			text = "ER32-0001"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class NextPage: RscActivePicture
		{
			idc = 1090;
			text = "a3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";

			x = 0.654688 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;

			tooltip = "Next Page";
			action = "[clientOwner,2] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner',clientOwner]];";
		};
		class EditPage: RscActivePicture
		{
			idc = 1015;
			text = "a3\weapons_f_orange\reticle\data\settings_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.025 * safezoneH;

			tooltip = "Edit Page";
			action = "[clientOwner,101] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner', clientOwner]];";
		};
	};
};

class ER32_PersonalServiceRecord_Page2
{
	idd = 3200056;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class RscPicture_1210: RscPicture
		{
			idc = 1210;
			text = "images\background2.paa";
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.594 * safezoneH;
		};	
		class Training_Image_BasicCombat: RscPicture
		{
			idc = 1200;
			text = "images\BasicCombat.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_AdvancedInfantry: RscPicture
		{
			idc = 1201;
			text = "images\AdvancedCombat.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_AdvancedMedical: RscPicture
		{
			idc = 1202;
			text = "images\AdvancedMedical.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_AdvancedLeadership: RscPicture
		{
			idc = 1203;
			text = "images\PlatoonLeadership.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_SIGINT: RscPicture
		{
			idc = 1204;
			text = "images\SIGINT.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_JTAC: RscPicture
		{
			idc = 1205;
			text = "images\FAC.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_BasicMedical: RscPicture
		{
			idc = 1206;
			text = "images\BasicMedical.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_TeamLeadership: RscPicture
		{
			idc = 1207;
			text = "images\TeamLeadership.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_EOD: RscPicture
		{
			idc = 1208;
			text = "images\EOD.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class Training_Image_Air: RscPicture
		{
			idc = 1209;
			text = "images\Air.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
		};
		class RscText_1015: RscText
		{
			idc = 1015;
			text = "Training Records"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.138906 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class Training_Text_BasicCombat: RscText
		{
			idc = 1000;
			text = "Basic Combat"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedInfantry: RscText
		{
			idc = 1001;
			text = "Advanced Infantry"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.015 * safezoneH;
			shadow = 0;
		};
		class Training_Text_BasicMedical: RscText
		{
			idc = 1002;
			text = "Basic Medical"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedMedical: RscText
		{
			idc = 1003;
			text = "Advanced Medical"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.015 * safezoneH;
			shadow = 0;
		};
		class Training_Text_TeamLeadership: RscText
		{
			idc = 1004;
			text = "Team Leadership"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0155 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedLeadership: RscText
		{
			idc = 1005;
			text = "Platoon Leadership"; //--- ToDo: Localize;
			x = 0.4155 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0133 * safezoneH;
			shadow = 0;
		};
		class Training_Text_SIGINT: RscText
		{
			idc = 1006;
			text = "SIGINT"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_EOD: RscText
		{
			idc = 1007;
			text = "EOD"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_JTAC: RscText
		{
			idc = 1008;
			text = "FAC"; //--- ToDo: Localize;
			x = 0.421456 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_Air: RscText
		{
			idc = 1009;
			text = "Air"; //--- ToDo: Localize;
			x = 0.382406 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Service History"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class Text_EnemiesKilled: RscText
		{
			idc = 1012;
			text = "Enemies Killed:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_EnemiesKilled: RscText
		{
			idc = 1112;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_DistanceWalked: RscText
		{
			idc = 1013;
			text = "Distance Walked:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_DistanceWalked: RscText
		{
			idc = 1113;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_HoursPlayed: RscText
		{
			idc = 1016;
			text = "Hours played:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_HoursPlayed: RscText
		{
			idc = 1116;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_SessionsPlayed: RscText
		{
			idc = 1017;
			text = "Sessions played:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_SessionsPlayed: RscText
		{
			idc = 1117;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_DeploymentsCompleted: RscText
		{
			idc = 1018;
			text = "Deployments completed:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0900312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_DeploymentsCompleted: RscText
		{
			idc = 1118;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_TreatmentsSucceeded: RscText
		{
			idc = 1019;
			text = "Treatments Succeeded:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0900312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_TreatmentsSucceeded: RscText
		{
			idc = 1119;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_ExplosivesDefused: RscText
		{
			idc = 1020;
			text = "Explosives Defused:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_ExplosivesDefused: RscText
		{
			idc = 1120;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_TrenchesDug: RscText
		{
			idc = 1021;
			text = "Trenches Dug:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_TrenchesDug: RscText
		{
			idc = 1121;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class PreviousPage: RscActivePicture
		{
			idc = 1091;
			text = "a3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";

			x = 0.304688 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;

			tooltip = "Previous Page";
			action = "[clientOwner,1] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner',clientOwner]];";
		};
		class NextPage: RscActivePicture
		{
			idc = 1090;
			text = "a3\ui_f\data\gui\rsccommon\rschtml\arrow_right_ca.paa";

			x = 0.654688 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;

			tooltip = "Next Page";
			action = "[clientOwner,3] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner',clientOwner]];";
		};
		class EditPage: RscActivePicture
		{
			idc = 9015;
			text = "a3\weapons_f_orange\reticle\data\settings_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.025 * safezoneH;

			tooltip = "Edit Page";
			action = "[clientOwner,102] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner', clientOwner]];";
		};
	};
};

class ER32_PersonalServiceRecord_Edit_Page1
{
	idd = 3200057;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class Background: RscPicture
		{
			idc = 1000;
			text = "images\background.paa";
			x = 0.424843 * safezoneW + safezoneX;
			y = 0.236 * safezoneH + safezoneY;
			w = 0.27625 * safezoneW;
			h = 0.528 * safezoneH;
		};
		class Logo: RscPicture
		{
			idc = 1001;
			text = "images\ER32_Logo.paa";
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class Titel: RscText
		{
			idc = 1002;
			text = "32 Engineer Regiment"; //--- ToDo: Localize;
			x = 0.533719 * safezoneW + safezoneX;
			y = 0.269 * safezoneH + safezoneY;
			w = 0.1428125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			sizeEx = 0.04 * safezoneH;
			shadow = 0;
		};
		class Undertitel: RscText
		{
			idc = 1003;
			text = "Personal Service Record"; //--- ToDo: Localize;
			x = 0.538719 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.1428125 * safezoneW;
			h = 0.033 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			sizeEx = 0.03 * safezoneH;
			shadow = 0;
		};
		class Name: RscText
		{
			idc = 1004;
			text = "Name:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Rank: RscText
		{
			idc = 1005;
			text = "Rank:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Section: RscText
		{
			idc = 1006;
			text = "Section:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class Role: RscText
		{
			idc = 1007;
			text = "Role:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class ID: RscText
		{
			idc = 1008;
			text = "ID:"; //--- ToDo: Localize;
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class NameEdit: RscText
		{
			idc = 1009;
			text = "Max Mustermann"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class RankEdit: RscEdit
		{
			idc = 1010;
			text = "Private"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class SectionEdit: RscEdit
		{
			idc = 1011;
			text = "First Section"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class RoleEdit: RscEdit
		{
			idc = 1012;
			text = "Rifleman"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class IDEdit: RscText
		{
			idc = 1013;
			text = "ER32-0001"; //--- ToDo: Localize;
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
		};
		class SaveEdit: RscActivePicture
		{
			idc = 1014;
			text = "a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_save_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.027 * safezoneH;

			tooltip = "Save Edit";
			action = "[1] call ER32_fnc_PSR_getEdits;";
		};
	};
};

class ER32_PersonalServiceRecord_Page3
{
	idd = 3200058;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class RscPicture_1210: RscPicture
		{
			idc = 1210;
			text = "images\background2.paa";
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.594 * safezoneH;
		};
		class RscText_1015: RscText
		{
			idc = 1015;
			text = "Service Medals"; //--- ToDo: Localize;
			x = 0.334687 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.138906 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class PreviousPage: RscActivePicture
		{
			idc = 1091;
			text = "a3\ui_f\data\gui\rsccommon\rschtml\arrow_left_ca.paa";

			x = 0.304688 * safezoneW + safezoneX;
			y = 0.698 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;

			tooltip = "Previous Page";
			action = "[clientOwner,2] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner',clientOwner]];";
		};
		class EditPage: RscActivePicture
		{
			idc = 9015;
			text = "a3\weapons_f_orange\reticle\data\settings_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.025 * safezoneH;

			tooltip = "Edit Page";
			action = "[clientOwner,103] remoteExec ['ER32_fnc_PSR_getPublicRecord', player getVariable ['ER32_PSR_recordOwner', clientOwner]];";
		};
	};
};

class ER32_PersonalServiceRecord_Edit_Page2
{
	idd = 3200059;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class RscPicture_1210: RscPicture
		{
			idc = 1210;
			text = "images\background2.paa";
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.594 * safezoneH;
		};	
		class Training_Image_BasicCombat: RscActivePicture
		{
			idc = 1200;
			text = "images\BasicCombat.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_AdvancedInfantry: RscActivePicture
		{
			idc = 1201;
			text = "images\AdvancedCombat.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_AdvancedMedical: RscActivePicture
		{
			idc = 1202;
			text = "images\AdvancedMedical.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_AdvancedLeadership: RscActivePicture
		{
			idc = 1203;
			text = "images\PlatoonLeadership.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_SIGINT: RscActivePicture
		{
			idc = 1204;
			text = "images\SIGINT.paa";
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_JTAC: RscActivePicture
		{
			idc = 1205;
			text = "images\FAC.paa";
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_BasicMedical: RscActivePicture
		{
			idc = 1206;
			text = "images\BasicMedical.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_TeamLeadership: RscActivePicture
		{
			idc = 1207;
			text = "images\TeamLeadership.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_EOD: RscActivePicture
		{
			idc = 1208;
			text = "images\EOD.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class Training_Image_Air: RscActivePicture
		{
			idc = 1209;
			text = "images\Air.paa";
			x = 0.371094 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.077 * safezoneH;
			onButtonClick = "[_this] execVM 'scripts\ER32_PSR_page2_changeImageState.sqf'";
			color[] = {0.3, 0.3, 0.3, 0.5};
			colorActive[] = {0.3, 0.3, 0.3, 0.5};
		};
		class RscText_1015: RscText
		{
			idc = 1015;
			text = "Training Records"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.138906 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class Training_Text_BasicCombat: RscText
		{
			idc = 1000;
			text = "Basic Combat"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedInfantry: RscText
		{
			idc = 1001;
			text = "Advanced Infantry"; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.015 * safezoneH;
			shadow = 0;
		};
		class Training_Text_BasicMedical: RscText
		{
			idc = 1002;
			text = "Basic Medical"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.02 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedMedical: RscText
		{
			idc = 1003;
			text = "Advanced Medical"; //--- ToDo: Localize;
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.015 * safezoneH;
			shadow = 0;
		};
		class Training_Text_TeamLeadership: RscText
		{
			idc = 1004;
			text = "Team Leadership"; //--- ToDo: Localize;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0155 * safezoneH;
			shadow = 0;
		};
		class Training_Text_AdvancedLeadership: RscText
		{
			idc = 1005;
			text = "Advanced Leadership"; //--- ToDo: Localize;
			x = 0.4155 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.0133 * safezoneH;
			shadow = 0;
		};
		class Training_Text_SIGINT: RscText
		{
			idc = 1006;
			text = "SIGINT"; //--- ToDo: Localize;
			x = 0.324687 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_EOD: RscText
		{
			idc = 1007;
			text = "EOD"; //--- ToDo: Localize;
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_JTAC: RscText
		{
			idc = 1008;
			text = "FAC"; //--- ToDo: Localize;
			x = 0.421456 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Training_Text_Air: RscText
		{
			idc = 1009;
			text = "Air"; //--- ToDo: Localize;
			x = 0.382406 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class RscText_1011: RscText
		{
			idc = 1011;
			text = "Service History"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class Text_EnemiesKilled: RscText
		{
			idc = 1012;
			text = "Enemies Killed:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_EnemiesKilled: RscText
		{
			idc = 1112;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.302 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_DistanceWalked: RscText
		{
			idc = 1013;
			text = "Distance Walked:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_DistanceWalked: RscText
		{
			idc = 1113;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_HoursPlayed: RscText
		{
			idc = 1016;
			text = "Hours played:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_HoursPlayed: RscText
		{
			idc = 1116;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.368 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_SessionsPlayed: RscText
		{
			idc = 1017;
			text = "Sessions played:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_SessionsPlayed: RscText
		{
			idc = 1117;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0773437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_DeploymentsCompleted: RscText
		{
			idc = 1018;
			text = "Deployments completed:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0900312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_DeploymentsCompleted: RscText
		{
			idc = 1118;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_TreatmentsSucceeded: RscText
		{
			idc = 1019;
			text = "Treatments Succeeded:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0900312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_TreatmentsSucceeded: RscText
		{
			idc = 1119;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_ExplosivesDefused: RscText
		{
			idc = 1020;
			text = "Explosives Defused:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_ExplosivesDefused: RscText
		{
			idc = 1120;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.0750312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Text_TrenchesDug: RscText
		{
			idc = 1021;
			text = "Trenches Dug:"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class Value_TrenchesDug: RscText
		{
			idc = 1121;
			text = "0"; //--- ToDo: Localize;
			x = 0.654688 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			shadow = 0;
		};
		class SaveEdit: RscActivePicture
		{
			idc = 1014;
			text = "a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_save_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.027 * safezoneH;

			tooltip = "Save Edit";
			action = "[2] call ER32_fnc_PSR_getEdits;";
		};
	};
};

class ER32_PersonalServiceRecord_Edit_Page3
{
	idd = 3200060;
	movingEnable = 1;
	enableSimulation = 1;
	
	class controls
	{
		class RscPicture_1210: RscPicture
		{
			idc = 1210;
			text = "images\background2.paa";
			x = 0.149375 * safezoneW + safezoneX;
			y = 0.203 * safezoneH + safezoneY;
			w = 0.70125 * safezoneW;
			h = 0.594 * safezoneH;
		};
		class RscText_1015: RscText
		{
			idc = 1014;
			text = "Service Medals"; //--- ToDo: Localize;
			x = 0.334687 * safezoneW + safezoneX;
			y = 0.246 * safezoneH + safezoneY;
			w = 0.138906 * safezoneW;
			h = 0.044 * safezoneH;
			colorText[] = {-1,-1,-1,1};
			sizeEx = 0.05 * safezoneH;
			shadow = 0;
		};
		class SavePage: RscActivePicture
		{
			idc = 1015;
			text = "a3\ui_f\data\gui\rsc\rscdisplayarcademap\icon_save_ca.paa";

			x = 0.674688 * safezoneW + safezoneX;
			y = 0.245 * safezoneH + safezoneY;
			w = 0.02 * safezoneW;
			h = 0.025 * safezoneH;

			tooltip = "Save Page";
			action = "[3] call ER32_fnc_PSR_getEdits;";
		};
	};
};

class ER32_PSR_AwardCreator
{
	idd = 3200061;
	movingEnabled = 1;
	enableSimulation = 1;
	
	class controls
	{
		class ER32_PSR_AwardCreator_Background: RscText
		{
			idc = 1000;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.149531 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.10, 0.10, 0.09, 0.90};
		};
		class ER32_PSR_AwardCreator_ListBox_Picture: RscCombo
		{
			idc = 1500;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ER32_PSR_AwardCreator_Picture: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.324 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.088 * safezoneH;
		};
		class ER32_PSR_AwardCreator_Edit_Titel: RscEdit
		{
			idc = 1400;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.022 * safezoneH;
			maxChars = 32;
		};
		class ER32_PSR_AwardCreator_Frame_Titel: RscFrame
		{
			idc = 1800;
			text = "Titel"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.434 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ER32_PSR_AwardCreator_Edit_Description: RscEdit
		{
			idc = 1401;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.088 * safezoneH;
			style = ST_LEFT + ST_MULTI;
			lineSpacing = 1;
			maxChars = 128;
		};
		class ER32_PSR_AwardCreator_Frame_Description: RscFrame
		{
			idc = 1801;
			text = "Description"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.099 * safezoneH;
		};
		class RscCheckbox_2800: RscCheckbox
		{
			idc = 2800;
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ER32_PSR_AwardCreator_Text_Deployment: RscText
		{
			idc = 1001;
			text = "Deployment:"; //--- ToDo: Localize;
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ER32_PSR_AwardCreator_Button: RscButton
		{
			idc = 1600;
			text = "Create"; //--- ToDo: Localize;
			x = 0.530937 * safezoneW + safezoneX;
			y = 0.621 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.055 * safezoneH;
			colorBackground[] = {0.40, 0.41, 0.33, 1.00};
			action = "execVM 'scripts\ER32_PSR_createAward_finish.sqf';";
		};
		class ER32_PSR_AwardCreator_Titel_AwardCreator: RscText
		{
			idc = 1002;
			text = "Award Creator"; //--- ToDo: Localize;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ER32_PSR_AwardCreator_WordCount_Titel: RscText
		{
			idc = 1003;
			text = "0/32"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.467 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class ER32_PSR_AwardCreator_WordCount_Description: RscText
		{
			idc = 1004;
			text = "0/128"; //--- ToDo: Localize;
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};	
	};
};

class ER32_PSR_AwardGiver
{
	idd = 3200062;
	movingEnabled = 1;
	enableSimulation = 1;
	
	class controls
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.374 * safezoneH;
			colorBackground[] = {0.5,0.6,0.3,0.8};
		};
		class ER32_PSR_Picture_imageList: RscCombo
		{
			idc = 1500;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ER32_PSR_Picture: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,1)";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.357 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class ER32_PSR_PlayerListBox: RscListbox
		{
			idc = 1501;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "Give Awards"; //--- ToDo: Localize;
			x = 0.463906 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.055 * safezoneH;
			action = "execVM 'scripts\ER32_PSR_giveSelectedAwards.sqf';";
			tooltip = "Give Awards to selected players"; //--- ToDo: Localize;
		};
		class RscCheckbox_2800: RscCheckbox
		{
			idc = 2800;
			x = 0.505156 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "Select all players:"; //--- ToDo: Localize;
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.033 * safezoneH;
		};
	};
};

