	;Behavior                            = AttributeModifierAuraUpdate ModuleTag_AllowDwarvenRiches
		;StartsActive	                    = No
		;BonusName		                    = SpellBookDwarvenRiches
		;TriggeredBy		                    = Upgrade_GrantDwarvenRiches
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                    = No
		;ObjectFilter	                    = ANY +DwarvenMineShaft +DwarvenMineShaft_ForAI +DwarvenMineShaftFoundation +DwarvenMineShaftForUndermine +DwarvenMineShaftForUndermineNew +DorwinionMarket +DorwinionMarketFoundation SAME_PLAYER
	;End
	
	;Behavior                            = AttributeModifierAuraUpdate ModuleTag_AllowRekindledHearths
		;StartsActive	                    = No
		;BonusName		                    = SpellBookDwarvenRiches
		;TriggeredBy		                    = Upgrade_GrantRekindledHearths
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                    = No
		;ObjectFilter	                    = ANY +EreborForge +EreborForgeFoundation SAME_PLAYER
	;End	

	;Behavior                            = AttributeModifierAuraUpdate ModuleTag_AllowBountifulHarvest
		;StartsActive	                    = No
		;BonusName		                    = SpellBookRohanHarvest
		;TriggeredBy		                    = Upgrade_GrantDwarvenRiches
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                    = No
		;ObjectFilter	                    = ANY +RohanFarm +RohanFarmForAI +RohanFarmFoundation +RohanFarmMultiplayer +RohanWindmill +RohanWindmillFoundation +RohanWindmillMultiplayer SAME_PLAYER
	;End		

	;Behavior                            = AttributeModifierAuraUpdate ModuleTag_AllowBountifulHarvestBonus
		;StartsActive	                    = No
		;BonusName		                    = RohanProductionBonus
		;TriggeredBy		                    = Upgrade_GrantDwarvenRiches
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                    = No
		;ObjectFilter	                    = ANY +RohanFarm +RohanFarmForAI +RohanFarmFoundation +RohanFarmMultiplayer +RohanWindmill +RohanWindmillFoundation +RohanWindmillMultiplayer SAME_PLAYER
	;End	

	;Behavior                            = AttributeModifierAuraUpdate ModuleTag_AllowFuelTheFires
		;StartsActive	                    = No
		;BonusName		                    = SpellBookFueltheFires
		;TriggeredBy		                    = Upgrade_GrantFueltheFires
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                    = No
		;ObjectFilter	                    = ANY +IsengardLumberMill +IsengardLumberMill_ForAI SAME_PLAYER
	;End	
	
	;Behavior                           = AttributeModifierAuraUpdate ModuleTag_AllowScavenger
		;StartsActive	                    = No
		;BonusName		                    = SpellBookScavenger
		;TriggeredBy		                = Upgrade_GrantScavenger
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                = No
		;ObjectFilter	                    = ANY WILD_EVIL_UNIT_FILTER +WildAzog +WildGoblinKing +WildShelob +Drogoth +Wyrm +SummonedDragon +SummonedDragonJH1 +WatcherHead +WatcherHittingArm +WatcherEgg +SpellBookDragonStrikeDragon +WildMountainGiant +WildMountainGiant_Summoned
	;End	
	
    ;Behavior                           = AttributeModifierAuraUpdate ModuleTag_AllowFineHaul
	    ;StartsActive	                    = No
		;BonusName		                    = SpellBookDaleFineHaul
		;TriggeredBy		                = Upgrade_GrantScavenger
		;RefreshDelay	                    = 2000
		;Range			                    = 999999
		;TargetEnemy		                = No
		;ObjectFilter	                    = ANY +DaleTavern +DaleTaverndFoundation +DaleShoremansCottage +DaleShoremansCottageFoundation SAME_PLAYER
	;End	