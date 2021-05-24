class CfgPatches
{
	class Haywards_Stronger_Tools
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Tools",
			"DZ_Weapons_Melee_Blade"
		};
	};
};
class CfgMods
{
	class Haywards_Stronger_Tools
	{
		dir="HaywardsStrongerTools";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="Haywards Stronger Tools";
		credits=""; 
		author="Lee Hayward";
		authorID="76561198040948171";  
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
					hitpoints=1000;
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
					hitpoints=1000;
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
					hitpoints=1000;
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
					hitpoints=1000;
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
					hitpoints=1000;
				};
			};
		};
	};
};

