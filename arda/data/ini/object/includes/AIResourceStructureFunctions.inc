    BuildCost                            = 150

    Behavior                            = CostModifierUpgrade ModuleTag_EarlyFarmDiscount
        LabelForPalantirString              = GUI:Blank
        StartsActive                        = No
        TriggeredBy                         = Upgrade_HardAIMultiPlayer Upgrade_BrutalAIMultiPlayer
        ObjectFilter                        = ANY +GondorFarm_ForAI +RohanRandomResourceStructure_AI +RohanFarmForAI +WildMineShaft_ForAI +GuldurSlaveMill_ForAI +AngmarMill_ForAI +ElvenMallornTree_ForAI +DwarvenMineShaft_ForAI +MirkwoodHuntingLodge_ForAI +MirkwoodRandomResourceStructure_AI +MordorSlaughterHouse_ForAI +MordorArmory_ForAI +IsengardFurnace_ForAI +RivendellOrchard_ForAI +HaradwaithBazaar_ForAI +MorgulSlaveMill_ForAI
        Percentage                          = 0%
        Percentage                          = 0%
        Percentage                          = 0%
        Percentage                          = 100%
    End

    Behavior                            = CostModifierUpgrade ModuleTag_NoEarlyFarmDiscount
        LabelForPalantirString              = GUI:Blank
        StartsActive                        = No
        TriggeredBy                         = Upgrade_EasyAIMultiPlayer Upgrade_MediumAIMultiPlayer
        ObjectFilter                        = ANY +GondorFarm_ForAI +RohanRandomResourceStructure_AI +RohanFarmForAI +WildMineShaft_ForAI +GuldurSlaveMill_ForAI +AngmarMill_ForAI +ElvenMallornTree_ForAI +DwarvenMineShaft_ForAI +MirkwoodHuntingLodge_ForAI +MirkwoodRandomResourceStructure_AI +MordorSlaughterHouse_ForAI +MordorArmory_ForAI +IsengardFurnace_ForAI +RivendellOrchard_ForAI +HaradwaithBazaar_ForAI +MorgulSlaveMill_ForAI
        Percentage                          = 100%
        Percentage                          = 100%
        Percentage                          = 100%
        Percentage                          = 100%
    End
    
    

    ;//////////////////
    ;// PÉNALITÉS AI //
    ;//////////////////

    Behavior                            = AttributeModifierUpgrade ModuleTag_EasyAIPenalty
        TriggeredBy				            = Upgrade_EasyAIMultiPlayer
        AttributeModifier		            = AIEasyEconomyNerf
    End

    Behavior                            = AttributeModifierUpgrade ModuleTag_MediumAIPenalty
        TriggeredBy				            = Upgrade_MediumAIMultiPlayer
        AttributeModifier		            = AIMediumEconomyNerf
    End
    


    Behavior                            = AttributeModifierUpgrade ModuleTag_MistyMountainAIPenalty
        TriggeredBy				            = Upgrade_EasyAIMultiPlayer Upgrade_WildFaction
        RequiresAllTriggers                 = Yes
        AttributeModifier		            = AIMistyMountainsPeasantNerf
    End