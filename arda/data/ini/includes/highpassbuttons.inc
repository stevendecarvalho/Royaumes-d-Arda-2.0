;;; BUILDINGS

CommandButton Command_ConstructMirkwoodBeorningCabinHP
	Command				= DOZER_CONSTRUCT
	Object				= MirkwoodBeorningCabinHighPass
	TextLabel			= CONTROLBAR:ConstructMirkwoodBeorningCabin
	ButtonImage			= UIBeorningLodge
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipMirkwoodBeorningCabin
	Radial				= Yes
End

CommandButton Command_PorterConstructHighPassEaglesBuilding
	Command       		= DOZER_CONSTRUCT
	Object        		= HighPassEaglesBuilding ;RivendellDormitory
	TextLabel     		= CONTROLBAR:ConstructEagleMonument
	ButtonImage   		= BIRivendellDormitory
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:ToolTipConstructEagleMonument
	Radial				= Yes
End

CommandButton Command_PurchaseUpgradeHighPassEaglesBuildingLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorStableLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructHighPassEaglesBuildingLevel2Upgrade
   ButtonImage       = UpgradeGoodButton; UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildHighPassEaglesBuildingLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End
CommandButton Command_PurchaseUpgradeHighPassEaglesBuildingLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorArcheryRangeLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructHighPassEaglesBuildingLevel3Upgrade
   ButtonImage       = UpgradeGoodButton;  UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildHighPassEaglesBuildingLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

CommandButton Command_PorterConstructHighPassEncampment
	Command       		= DOZER_CONSTRUCT
	Object        		= HighPassEncampment ;RivendellDormitory
	TextLabel     		= CONTROLBAR:ConstructHighPassEncampment
	ButtonImage   		= UINoldorTent
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:ToolTipConstructHighPassEncampment
	Radial				= Yes
End

CommandButton Command_PurchaseUpgradeHighPassEncampmentLevel2
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorStableLevel2
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructHighPassEncampmentLevel2Upgrade
   ButtonImage       = UpgradeGoodButton; UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildHighPassEncampmentLevel2Upgrade
   Radial            = Yes
   InPalantir        = Yes
End
CommandButton Command_PurchaseUpgradeHighPassEncampmentLevel3
   Command           = OBJECT_UPGRADE
   Upgrade           = Upgrade_GondorStableLevel3
   Options           = CANCELABLE
   TextLabel         = CONTROLBAR:ConstructHighPassEncampmentLevel3Upgrade
   ButtonImage       = UpgradeGoodButton;  UCCommon_UpgradeStructureNew
   ButtonBorderType  = UPGRADE
   DescriptLabel     = CONTROLBAR:ToolTipBuildHighPassEncampmentLevel3Upgrade
   Radial            = Yes
   InPalantir        = Yes
End

;;;HighPassRangerHorde HighPassRanger HighPassGlaivemen HighPassGlaivemenHorde HighPassGlaivemenHordePorcupine HighPassAmbusher HighPassAmbusherHorde
;;; UNITS
CommandButton Command_ConstructHighPassGlaivemenHorde
	Command				= UNIT_BUILD
	Object				= HighPassGlaivemenHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructHighPassGlaivemenHorde
	ButtonImage			= uirivelfspear
	ButtonBorderType    = BUILD
	DescriptLabel       = CONTROLBAR:ToolTipBuildHighPassGlaivemenHorde
	Radial				= Yes
	InPalantir			= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructHighPassAmbusherHorde
	Command				= UNIT_BUILD
	Object				= HighPassAmbusherHorde ;ArnorBreelandGuardHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructHighPassAmbusherHorde
	ButtonImage			= uirivelfsword
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipBuildHighPassAmbusherHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructHighPassRangerHorde
	Command				= UNIT_BUILD
	Object				= HighPassRangerHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:ConstructHighPassRangerHorde
	ButtonImage			= uirivelfarcher
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipBuildHighPassRangerHorde
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_ConstructHighPassGwaihir
	Command				= UNIT_BUILD
	Object				= HighPassGwaihirRecruit ;HighPassGwaihir HighPassLandroval ;HighPassLesserEagleHorde
  	NeededUpgrade			= Upgrade_GondorArcheryRangeLevel3
  	Options			= CANCELABLE NEED_UPGRADE
	TextLabel			= CONTROLBAR:PurchaseHighPassGwaihir
	ButtonImage			= HIGwahir
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseHighPassGwaihir
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_GwaihirLeadership
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:LordofEagles
  ButtonImage             = HIPippinCourage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipLordofEagles
  InPalantir		  = Yes
End

CommandButton Command_GwaihirDreadVisage
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:DreadAura
  ButtonImage             = HiNazgulBreathNew
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipDreadAura
  InPalantir		  = Yes
End

CommandButton Command_ConstructHighPassLandroval
	Command				= UNIT_BUILD
	Object				= HighPassLandroval ;HighPassGwaihir HighPassLandroval ;HighPassLesserEagleHorde
  	NeededUpgrade			= Upgrade_GondorArcheryRangeLevel3
  	Options			= CANCELABLE NEED_UPGRADE
	TextLabel			= CONTROLBAR:PurchaseHighPassLandroval
	ButtonImage			= HIGwahir
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseHighPassLandroval
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_SpecialAbilityLandrovalBladeMaster
  Command                 	= SPECIAL_POWER
  SpecialPower            	= SpecialAbilityAragornBladeMaster
  TextLabel               	= CONTROLBAR:LandrovalBladeMaster
  ButtonImage             	= HIOrophinSilvanRageNew
  ButtonBorderType        	= ACTION
  DescriptLabel           	= CONTROLBAR:TooltipLandrovalBladeMaster
  InPalantir			= Yes
  AutoAbility			= Yes
  AutoDelay			= 30.0
  PresetRange			= 50.0
;  UnitSpecificSound       	= AragornVoiceBladeMaster
End

CommandButton Command_SpecialAbilityLandrovalScreech
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityScreech
  TextLabel               = CONTROLBAR:LandrovalScreech
  ButtonImage             = HiNazgulScreechNew
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:TooltipLandrovalScreech
  InPalantir			  = Yes
  AutoAbility			  = Yes
  PresetRange			  = 150
End

CommandButton Command_ConstructHighPassMeneldor
	Command				= UNIT_BUILD
	Object				= HighPassMeneldor ;HighPassGwaihir HighPassLandroval ;HighPassLesserEagleHorde
  	NeededUpgrade			= Upgrade_GondorArcheryRangeLevel3
  	Options			= CANCELABLE NEED_UPGRADE
	TextLabel			= CONTROLBAR:PurchaseHighPassMeneldor
	ButtonImage			= HIGwahir
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseHighPassMeneldor
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End

CommandButton Command_MeneldorLeadership
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:MessengerofManwe
  ButtonImage             = HIPippinCourage
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipMessengerofManwe
  InPalantir		  = Yes
End

CommandButton Command_MeneldorFakeButton1
  Command                 = SPECIAL_POWER
  SpecialPower            = SpecialAbilityFakeLeadership2
  Options				  = NONPRESSABLE
  TextLabel               = CONTROLBAR:DebilitatingGrasp
  ButtonImage             = HIAragornLeadership
  RadiusCursorType        = TrainingRadiusCursor
  ButtonBorderType        = ACTION
  DescriptLabel           = CONTROLBAR:ToolTipDebilitatingGrasp
  InPalantir		  = Yes
End

CommandButton Command_ConstructHighPassLesserEagleHorde
	Command				= UNIT_BUILD
	Object				= HighPassLesserEagle ;HighPassLesserEagleHorde
	Options				= CANCELABLE
	TextLabel			= CONTROLBAR:PurchaseHighPassEagle
	ButtonImage			= HIGwahir
	ButtonBorderType	= BUILD
	DescriptLabel		= CONTROLBAR:ToolTipPurchaseHighPassEagle
	Radial				= Yes
	InPalantir	   		= Yes
	ShowProductionCount	= Yes
End