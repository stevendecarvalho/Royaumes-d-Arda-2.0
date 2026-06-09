    Behavior                                = FXListDie ModuleTag_AnnounceWeLostTheRing
		DeathFX                                 = AnnounceFortressDeathLostRingFX
	End
    
	Behavior                                = CreateObjectDie ModuleTag_DropTheRing
		CreationList	                        = OCL_TheOneRing
		UpgradeRequired	                        = Upgrade_RingHero Upgrade_FortressRingHero
	End

	Behavior                                = ModelConditionUpgrade ModuleTag_ForFX
		TriggeredBy			                    = Upgrade_RingHero Upgrade_FortressRingHero
		RequiresAllTriggers	                    = Yes
		AddConditionFlags	                    = ONE_RING
	End
	
	Draw                                    = W3DScriptedModelDraw ModuleTag_RingFX
    	DefaultModelConditionState
      		Model                                   = None
    	End
		ModelConditionState                     = ONE_RING BUILD_VARIATION_TWO
			Model                                   = EXOneRing_CR
		End
		ModelConditionState                     = ONE_RING
			Model                                   = EXOneRing
		End
	End