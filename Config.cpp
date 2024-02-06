class CfgPatches
{
	class Steel_Is_Steel_Durability
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Tools",
			"DZ_Weapons_Melee_Blade",
			"DZ_Weapons_Muzzles",
			"DZ_Pistols",
			"DZ_Weapons_Firearms"
		};
	};
};

class CfgMods
{
	class Steel_Is_Steel_Durability
	{
		dir="SteelIsSteelDurability";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="Steel is Steel Durability";
		credits="";
		author="hashwagon";
		authorID="76561198020736624";
		version="1.0";
		extra=0;
		type="mod";
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Hammer: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={5};
		repairCosts[]={25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Pliers: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Shovel: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={5};
		repairCosts[]={25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class FieldShovel: Inventory_Base
	{
		scope=2;
		repairableWithKits[]={5};
		repairCosts[]={25};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Crowbar: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Hacksaw: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};

	class HandSaw: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
				};
			};
		};
	};

	class Hatchet: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};	

	class Wrench: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class FirefighterAxe: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class FirefighterAxe_Black: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class FirefighterAxe_Green: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Pickaxe: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class WoodAxe: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class LugWrench: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Screwdriver: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Sickle: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
				};
			};
		};
	};

	class FarmingHoe: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=800;
				};
			};
		};
	};

	class SledgeHammer: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class CanOpener: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
				};
			};
		};
	};

	class Pitchfork: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
				};
			};
		};
	};

// Guns
	class PistolSuppressor: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};

	class AK_Suppressor: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};

	class M4_Suppressor: Inventory_Base
	{
		scope=2;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};
	};
};

