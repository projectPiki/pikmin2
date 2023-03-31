.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80481228, local
	.asciz "itemBridge"
.endobj lbl_80481228
.balign 4
.obj lbl_80481234, local
	.asciz "itemBridge.cpp"
.endobj lbl_80481234
.balign 4
.obj lbl_80481244, local
	.asciz "cellLayerindex overflow\n"
.endobj lbl_80481244
.balign 4
.obj lbl_80481260, local
	.asciz "P2Assert"
.endobj lbl_80481260
.balign 4
.obj lbl_8048126C, local # Shift-JIS
	.4byte 0x09238BB4
	.4byte 0x835E8343
	.4byte 0x83760D0A
	.byte 0
.endobj lbl_8048126C
.balign 4
.obj lbl_8048127C, local
	.asciz "user/Kando/objects/bridge"
.endobj lbl_8048127C
.balign 4
.obj lbl_80481298, local
	.asciz "/user/Abe/item/bridgeParms.txt"
.endobj lbl_80481298
.balign 4
.obj lbl_804812B8, local
	.asciz "user/Abe/item/bridgeParms.txt"
.endobj lbl_804812B8
.balign 4
.obj lbl_804812D8, local
	.asciz "Creature::Property"
.endobj lbl_804812D8
.balign 4
.obj lbl_804812EC, local
	.asciz "friction(not used)"
.endobj lbl_804812EC
.balign 4
.obj lbl_80481300, local
	.asciz "wallReflection"
.endobj lbl_80481300
.balign 4
.obj lbl_80481310, local
	.asciz "faceDirAdjust"
.endobj lbl_80481310
.balign 4
.obj lbl_80481320, local
	.asciz "bounceFactor"
.endobj lbl_80481320
.balign 4
.obj lbl_80481330, local
	.asciz "Bridge::Parms"
.endobj lbl_80481330
.balign 4
.obj lbl_80481340, local
	.asciz "user/Kando/bridge/s_bridge"
.endobj lbl_80481340
.balign 4
.obj lbl_8048135C, local
	.asciz "s_bridge.bmd"
.endobj lbl_8048135C
.balign 4
.obj lbl_8048136C, local
	.asciz "user/Kando/bridge/slope_u"
.endobj lbl_8048136C
.balign 4
.obj lbl_80481388, local
	.asciz "slope_u.bmd"
.endobj lbl_80481388
.balign 4
.obj lbl_80481394, local
	.asciz "user/Kando/bridge/l_bridge"
.endobj lbl_80481394
.balign 4
.obj lbl_804813B0, local
	.asciz "l_bridge.bmd"
.endobj lbl_804813B0
.balign 4
.obj lbl_804813C0, local
	.asciz "texts.szs"
.endobj lbl_804813C0
.balign 4
.obj lbl_804813CC, local
	.asciz "platform.bin"
.endobj lbl_804813CC
.balign 4
.obj lbl_804813DC, local
	.asciz "room%02d"
.endobj lbl_804813DC
.balign 4
.obj lbl_804813E8, local
	.asciz "hame-dokkuri vs nakamoto-kouji\n"
.endobj lbl_804813E8
.balign 4
.obj lbl_80481408, local
	.asciz "hame-dokkuri\n"
.endobj lbl_80481408
.balign 4
.obj lbl_80481418, local
	.asciz "BridgeInitArg"
.endobj lbl_80481418

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj bridgeFirstPos, local
	.float 42.5
	.float 12.5
	.float 42.5
	.float 12.5
.endobj bridgeFirstPos
.obj bridgeGrad, local
	.float 0.0
	.float 8.0
	.float 0.0
	.float 0.0
.endobj bridgeGrad
.obj __vt__Q34Game10ItemBridge13BridgeInitArg, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q34Game10ItemBridge13BridgeInitArgFv
.endobj __vt__Q34Game10ItemBridge13BridgeInitArg
.obj __vt__Q34Game10ItemBridge3Mgr, global
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12TNodeItemMgrFv
	.4byte doEntry__Q24Game12TNodeItemMgrFv
	.4byte doSetView__Q24Game12TNodeItemMgrFi
	.4byte doViewCalc__Q24Game12TNodeItemMgrFv
	.4byte doSimulation__Q24Game12TNodeItemMgrFf
	.4byte doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte initDependency__Q24Game12TNodeItemMgrFv
	.4byte killAll__Q24Game12TNodeItemMgrFv
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q34Game10ItemBridge3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game10ItemBridge3MgrFv
	.4byte "generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game10ItemBridge3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game10ItemBridge3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game10ItemBridge3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game10ItemBridge3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game10ItemBridge3MgrFv
	.4byte birth__Q34Game10ItemBridge3MgrFv
.endobj __vt__Q34Game10ItemBridge3Mgr
.obj __vt__Q34Game10ItemBridge11BridgeParms, weak
	.4byte 0
	.4byte 0
	.4byte read__Q34Game10ItemBridge11BridgeParmsFR6Stream
.endobj __vt__Q34Game10ItemBridge11BridgeParms
.obj __vt__13GenBridgeParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__13GenBridgeParm
.obj __vt__Q23efx10TBridgeSet, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TBridgeSet
.obj __vt__Q34Game10ItemBridge4Item, global
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q34Game10ItemBridge4ItemFv
	.4byte onInit__Q34Game10ItemBridge4ItemFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q34Game10ItemBridge4ItemFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q24Game8CreatureFv
	.4byte setCollisionFlick__Q24Game8CreatureFb
	.4byte isMovieActor__Q24Game8CreatureFv
	.4byte isMovieExtra__Q24Game8CreatureFv
	.4byte isMovieMotion__Q24Game8CreatureFv
	.4byte setMovieMotion__Q24Game8CreatureFb
	.4byte isBuried__Q24Game8CreatureFv
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q34Game10ItemBridge4ItemFR6Stream
	.4byte doLoad__Q34Game10ItemBridge4ItemFR6Stream
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q34Game10ItemBridge4ItemFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q34Game10ItemBridge4ItemFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q34Game10ItemBridge4ItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q34Game10ItemBridge4ItemFv
	.4byte doAI__Q34Game10ItemBridge4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q34Game10ItemBridge4ItemFv
	.4byte do_updateLOD__Q34Game10ItemBridge4ItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q34Game10ItemBridge4ItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q34Game10ItemBridge4ItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q34Game10ItemBridge4ItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game10ItemBridge4ItemFv
	.4byte update__Q34Game10ItemBridge4ItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game10ItemBridge4ItemFv
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
.endobj __vt__Q34Game10ItemBridge4Item
.obj "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>", weak
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte 0
	.4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q24Game8CreatureFv
	.4byte setCollisionFlick__Q24Game8CreatureFb
	.4byte isMovieActor__Q24Game8CreatureFv
	.4byte isMovieExtra__Q24Game8CreatureFv
	.4byte isMovieMotion__Q24Game8CreatureFv
	.4byte setMovieMotion__Q24Game8CreatureFb
	.4byte isBuried__Q24Game8CreatureFv
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8BaseItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv"
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte 0
	.4byte 0
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8BaseItemFv
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"
.obj "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"
.obj "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"
.obj "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>", weak
	.4byte 0
	.4byte 0
	.4byte getPosition__Q24Game8BaseItemFv
	.4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
	.4byte getBoundingSphere__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte collisionUpdatable__Q24Game8CreatureFv
	.4byte isPiki__Q24Game8CreatureFv
	.4byte isNavi__Q24Game8CreatureFv
	.4byte deferPikiCollision__Q24Game10CellObjectFv
	.4byte getTypeName__Q24Game8CreatureFv
	.4byte getObjType__Q24Game8CreatureFv
	.4byte constructor__Q24Game8BaseItemFv
	.4byte onInit__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q24Game8CreatureFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q24Game8BaseItemFv
	.4byte isTeki__Q24Game8CreatureFv
	.4byte isPellet__Q24Game8CreatureFv
	.4byte inWaterCallback__Q24Game8CreatureFPQ24Game8WaterBox
	.4byte outWaterCallback__Q24Game8CreatureFv
	.4byte inWater__Q24Game8CreatureFv
	.4byte getFlockMgr__Q24Game8CreatureFv
	.4byte onStartCapture__Q24Game8CreatureFv
	.4byte onUpdateCapture__Q24Game8CreatureFR7Matrixf
	.4byte onEndCapture__Q24Game8CreatureFv
	.4byte isAtari__Q24Game8CreatureFv
	.4byte setAtari__Q24Game8CreatureFb
	.4byte isAlive__Q24Game8CreatureFv
	.4byte setAlive__Q24Game8CreatureFb
	.4byte isCollisionFlick__Q24Game8CreatureFv
	.4byte setCollisionFlick__Q24Game8CreatureFb
	.4byte isMovieActor__Q24Game8CreatureFv
	.4byte isMovieExtra__Q24Game8CreatureFv
	.4byte isMovieMotion__Q24Game8CreatureFv
	.4byte setMovieMotion__Q24Game8CreatureFb
	.4byte isBuried__Q24Game8CreatureFv
	.4byte isFlying__Q24Game8CreatureFv
	.4byte isUnderground__Q24Game8CreatureFv
	.4byte isLivingThing__Q24Game8CreatureFv
	.4byte isDebugCollision__Q24Game8CreatureFv
	.4byte setDebugCollision__Q24Game8CreatureFb
	.4byte doSave__Q24Game8CreatureFR6Stream
	.4byte doLoad__Q24Game8CreatureFR6Stream
	.4byte "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q24Game8CreatureFb
	.4byte movieStartAnimation__Q24Game8BaseItemFUl
	.4byte movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
	.4byte movieSetAnimationLastFrame__Q24Game8BaseItemFv
	.4byte "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
	.4byte movieSetFaceDir__Q24Game8CreatureFf
	.4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
	.4byte getShadowParam__Q24Game8CreatureFRQ24Game11ShadowParam
	.4byte needShadow__Q24Game8CreatureFv
	.4byte getLifeGaugeParam__Q24Game8CreatureFRQ24Game14LifeGaugeParam
	.4byte getLODSphere__Q24Game8CreatureFRQ23Sys6Sphere
	.4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
	.4byte startPick__Q24Game8CreatureFv
	.4byte endPick__Q24Game8CreatureFb
	.4byte getMabiki__Q24Game8CreatureFv
	.4byte getFootmarks__Q24Game8CreatureFv
	.4byte onStickStart__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEnd__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
	.4byte isSlotFree__Q24Game8CreatureFs
	.4byte getFreeStickSlot__Q24Game8CreatureFv
	.4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
	.4byte getRandomFreeStickSlot__Q24Game8CreatureFv
	.4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
	.4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
	.4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
	.4byte "getVelocityAt__Q24Game8BaseItemFR10Vector3<f>R10Vector3<f>"
	.4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
	.4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
	.4byte getSuckPos__Q24Game8CreatureFv
	.4byte getGoalPos__Q24Game8CreatureFv
	.4byte isSuckReady__Q24Game8CreatureFv
	.4byte isSuckArriveWait__Q24Game8CreatureFv
	.4byte stimulate__Q24Game8BaseItemFRQ24Game11Interaction
	.4byte getCreatureName__Q24Game8BaseItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv"
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q24Game8BaseItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q24Game8BaseItemFv
	.4byte "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"
.obj __vt__Q34Game10ItemBridge11NormalState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4ItemPQ24Game8StateArg
	.4byte exec__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item
	.4byte cleanup__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
	.4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game10ItemBridge11NormalState
.obj __vt__Q34Game10ItemBridge5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
	.4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
.endobj __vt__Q34Game10ItemBridge5State
.obj "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"
	.4byte "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"
.endobj "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>"
.obj "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>"
.obj __vt__Q34Game10ItemBridge3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game10ItemBridge3FSMFPQ34Game10ItemBridge4Item
	.4byte "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"
	.4byte "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"
.endobj __vt__Q34Game10ItemBridge3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mgr__Q24Game10ItemBridge, global
	.skip 0x4
.endobj mgr__Q24Game10ItemBridge

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519B10, local
	.float 0.0
.endobj lbl_80519B10
.obj lbl_80519B14, local
	.float 170.0
.endobj lbl_80519B14
.obj lbl_80519B18, local
	.float 40.0
.endobj lbl_80519B18
.obj lbl_80519B1C, local
	.float 80.0
.endobj lbl_80519B1C
.obj lbl_80519B20, local
	.float 360.0
.endobj lbl_80519B20
.obj lbl_80519B24, local
	.float 1.0
.endobj lbl_80519B24
.obj lbl_80519B28, local
	.float 100.0
.endobj lbl_80519B28
.obj lbl_80519B2C, local
	.float 90.0
.endobj lbl_80519B2C
.obj lbl_80519B30, local
	.float 999.0
.endobj lbl_80519B30
.obj lbl_80519B34, local
	.float 5.0
.endobj lbl_80519B34
.obj lbl_80519B38, local
	.float 10.0
.endobj lbl_80519B38
.balign 8
.obj lbl_80519B40, local
	.8byte 0x4330000080000000
.endobj lbl_80519B40
.obj lbl_80519B48, local
	.float 20.0
.endobj lbl_80519B48
.obj lbl_80519B4C, local
	.float -20.0
.endobj lbl_80519B4C
.obj lbl_80519B50, local
	.float 150.0
.endobj lbl_80519B50
.obj lbl_80519B54, local
	.float 325.9493
.endobj lbl_80519B54
.obj lbl_80519B58, local
	.float -325.9493
.endobj lbl_80519B58
.obj lbl_80519B5C, local
	.float 75.0
.endobj lbl_80519B5C
.obj lbl_80519B60, local
	.float -100.0
.endobj lbl_80519B60
.obj lbl_80519B64, local
	.float 105.0
.endobj lbl_80519B64
.obj lbl_80519B68, local
	.float 300.0
.endobj lbl_80519B68
.obj lbl_80519B6C, local
	.float 60.0
.endobj lbl_80519B6C
.obj lbl_80519B70, local
	.float -10.0
.endobj lbl_80519B70
.obj lbl_80519B74, local
	.float -1.0
.endobj lbl_80519B74
.obj lbl_80519B78, local
	.float 128000.0
.endobj lbl_80519B78
.balign 4
.obj lbl_80519B7C, local
	.asciz "Bridge"
.endobj lbl_80519B7C
.balign 4
.obj lbl_80519B84, local
	.float 0.5
.endobj lbl_80519B84
.obj lbl_80519B88, local
	.float 0.25
.endobj lbl_80519B88
.balign 4
.obj lbl_80519B8C, local
	.asciz "accel"
.endobj lbl_80519B8C
.balign 4
.obj lbl_80519B94, local
	.float 0.1
.endobj lbl_80519B94
.obj lbl_80519B98, local
	.float 0.01
.endobj lbl_80519B98
.obj lbl_80519B9C, local
	.float 2.0
.endobj lbl_80519B9C
.obj lbl_80519BA0, local
	.float 0.3
.endobj lbl_80519BA0
.balign 4
.obj lbl_80519BA4, local # Shift-JIS
	.4byte 0x83898343
	.4byte 0x83740000
.endobj lbl_80519BA4
.balign 4
.obj lbl_80519BAC, local
	.float 40000.0
.endobj lbl_80519BAC
.balign 4
.obj lbl_80519BB0, local
	.asciz "arc.szs"
.endobj lbl_80519BB0
.balign 4
.obj lbl_80519BB8, local
	.asciz "final"
.endobj lbl_80519BB8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game10ItemBridge3FSMFPQ34Game10ItemBridge4Item, global
/* 801EDF74 001EAEB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EDF78 001EAEB8  7C 08 02 A6 */	mflr r0
/* 801EDF7C 001EAEBC  38 80 00 01 */	li r4, 1
/* 801EDF80 001EAEC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EDF84 001EAEC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EDF88 001EAEC8  7C 7F 1B 78 */	mr r31, r3
/* 801EDF8C 001EAECC  48 00 2F D9 */	bl "create__Q24Game38StateMachine<Q34Game10ItemBridge4Item>Fi"
/* 801EDF90 001EAED0  38 60 00 10 */	li r3, 0x10
/* 801EDF94 001EAED4  4B E3 5F 11 */	bl __nw__FUl
/* 801EDF98 001EAED8  7C 64 1B 79 */	or. r4, r3, r3
/* 801EDF9C 001EAEDC  41 82 00 40 */	beq .L_801EDFDC
/* 801EDFA0 001EAEE0  3C 60 80 4C */	lis r3, "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>"@ha
/* 801EDFA4 001EAEE4  3C C0 80 4C */	lis r6, "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>"@ha
/* 801EDFA8 001EAEE8  38 03 BB C0 */	addi r0, r3, "__vt__Q24Game34FSMState<Q34Game10ItemBridge4Item>"@l
/* 801EDFAC 001EAEEC  3C A0 80 4C */	lis r5, __vt__Q34Game10ItemBridge5State@ha
/* 801EDFB0 001EAEF0  90 04 00 00 */	stw r0, 0(r4)
/* 801EDFB4 001EAEF4  38 E0 00 00 */	li r7, 0
/* 801EDFB8 001EAEF8  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBridge11NormalState@ha
/* 801EDFBC 001EAEFC  38 C6 BB 8C */	addi r6, r6, "__vt__Q24Game35ItemState<Q34Game10ItemBridge4Item>"@l
/* 801EDFC0 001EAF00  90 E4 00 04 */	stw r7, 4(r4)
/* 801EDFC4 001EAF04  38 A5 BB 58 */	addi r5, r5, __vt__Q34Game10ItemBridge5State@l
/* 801EDFC8 001EAF08  38 03 BB 24 */	addi r0, r3, __vt__Q34Game10ItemBridge11NormalState@l
/* 801EDFCC 001EAF0C  90 E4 00 08 */	stw r7, 8(r4)
/* 801EDFD0 001EAF10  90 C4 00 00 */	stw r6, 0(r4)
/* 801EDFD4 001EAF14  90 A4 00 00 */	stw r5, 0(r4)
/* 801EDFD8 001EAF18  90 04 00 00 */	stw r0, 0(r4)
.L_801EDFDC:
/* 801EDFDC 001EAF1C  7F E3 FB 78 */	mr r3, r31
/* 801EDFE0 001EAF20  48 00 30 85 */	bl "registerState__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ24Game34FSMState<Q34Game10ItemBridge4Item>"
/* 801EDFE4 001EAF24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EDFE8 001EAF28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EDFEC 001EAF2C  7C 08 03 A6 */	mtlr r0
/* 801EDFF0 001EAF30  38 21 00 10 */	addi r1, r1, 0x10
/* 801EDFF4 001EAF34  4E 80 00 20 */	blr 
.endfn init__Q34Game10ItemBridge3FSMFPQ34Game10ItemBridge4Item

.fn init__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4ItemPQ24Game8StateArg, global
/* 801EDFF8 001EAF38  4E 80 00 20 */	blr 
.endfn init__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4ItemPQ24Game8StateArg

.fn exec__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item, global
/* 801EDFFC 001EAF3C  4E 80 00 20 */	blr 
.endfn exec__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item

.fn cleanup__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item, global
/* 801EE000 001EAF40  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game10ItemBridge11NormalStateFPQ34Game10ItemBridge4Item

.fn onInit__Q34Game10ItemBridge4ItemFPQ24Game15CreatureInitArg, global
/* 801EE004 001EAF44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EE008 001EAF48  7C 08 02 A6 */	mflr r0
/* 801EE00C 001EAF4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EE010 001EAF50  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801EE014 001EAF54  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801EE018 001EAF58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE01C 001EAF5C  93 C1 00 08 */	stw r30, 8(r1)
/* 801EE020 001EAF60  7C 7F 1B 78 */	mr r31, r3
/* 801EE024 001EAF64  38 00 00 00 */	li r0, 0
/* 801EE028 001EAF68  28 04 00 00 */	cmplwi r4, 0
/* 801EE02C 001EAF6C  B0 03 02 14 */	sth r0, 0x214(r3)
/* 801EE030 001EAF70  41 82 00 0C */	beq .L_801EE03C
/* 801EE034 001EAF74  A0 04 00 04 */	lhz r0, 4(r4)
/* 801EE038 001EAF78  B0 1F 02 14 */	sth r0, 0x214(r31)
.L_801EE03C:
/* 801EE03C 001EAF7C  38 60 00 14 */	li r3, 0x14
/* 801EE040 001EAF80  4B E3 5E 65 */	bl __nw__FUl
/* 801EE044 001EAF84  7C 7E 1B 79 */	or. r30, r3, r3
/* 801EE048 001EAF88  41 82 00 28 */	beq .L_801EE070
/* 801EE04C 001EAF8C  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EE050 001EAF90  A0 9F 02 14 */	lhz r4, 0x214(r31)
/* 801EE054 001EAF94  4B FD F0 FD */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801EE058 001EAF98  7C 64 1B 78 */	mr r4, r3
/* 801EE05C 001EAF9C  7F C3 F3 78 */	mr r3, r30
/* 801EE060 001EAFA0  3C A0 00 02 */	lis r5, 2
/* 801EE064 001EAFA4  38 C0 00 02 */	li r6, 2
/* 801EE068 001EAFA8  48 25 01 71 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801EE06C 001EAFAC  7C 7E 1B 78 */	mr r30, r3
.L_801EE070:
/* 801EE070 001EAFB0  93 DF 01 74 */	stw r30, 0x174(r31)
/* 801EE074 001EAFB4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EE078 001EAFB8  80 63 00 08 */	lwz r3, 8(r3)
/* 801EE07C 001EAFBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE080 001EAFC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EE084 001EAFC4  7D 89 03 A6 */	mtctr r12
/* 801EE088 001EAFC8  4E 80 04 21 */	bctrl 
/* 801EE08C 001EAFCC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EE090 001EAFD0  80 63 00 08 */	lwz r3, 8(r3)
/* 801EE094 001EAFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE098 001EAFD8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EE09C 001EAFDC  7D 89 03 A6 */	mtctr r12
/* 801EE0A0 001EAFE0  4E 80 04 21 */	bctrl 
/* 801EE0A4 001EAFE4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EE0A8 001EAFE8  80 63 00 08 */	lwz r3, 8(r3)
/* 801EE0AC 001EAFEC  4B E7 88 79 */	bl makeDL__8J3DModelFv
/* 801EE0B0 001EAFF0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801EE0B4 001EAFF4  80 63 00 08 */	lwz r3, 8(r3)
/* 801EE0B8 001EAFF8  4B E7 87 3D */	bl lock__8J3DModelFv
/* 801EE0BC 001EAFFC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801EE0C0 001EB000  7F E4 FB 78 */	mr r4, r31
/* 801EE0C4 001EB004  38 A0 00 00 */	li r5, 0
/* 801EE0C8 001EB008  38 C0 00 00 */	li r6, 0
/* 801EE0CC 001EB00C  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE0D0 001EB010  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801EE0D4 001EB014  7D 89 03 A6 */	mtctr r12
/* 801EE0D8 001EB018  4E 80 04 21 */	bctrl 
/* 801EE0DC 001EB01C  7F E3 FB 78 */	mr r3, r31
/* 801EE0E0 001EB020  38 80 00 01 */	li r4, 1
/* 801EE0E4 001EB024  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE0E8 001EB028  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801EE0EC 001EB02C  7D 89 03 A6 */	mtctr r12
/* 801EE0F0 001EB030  4E 80 04 21 */	bctrl 
/* 801EE0F4 001EB034  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EE0F8 001EB038  D0 1F 01 F4 */	stfs f0, 0x1f4(r31)
/* 801EE0FC 001EB03C  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EE100 001EB040  A0 9F 02 14 */	lhz r4, 0x214(r31)
/* 801EE104 001EB044  48 00 27 41 */	bl getBridgeInfo__Q34Game10ItemBridge3MgrFi
/* 801EE108 001EB048  80 8D 94 B8 */	lwz r4, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EE10C 001EB04C  80 03 00 00 */	lwz r0, 0(r3)
/* 801EE110 001EB050  80 64 00 90 */	lwz r3, 0x90(r4)
/* 801EE114 001EB054  C3 E3 01 00 */	lfs f31, 0x100(r3)
/* 801EE118 001EB058  90 1F 02 1C */	stw r0, 0x21c(r31)
/* 801EE11C 001EB05C  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EE120 001EB060  54 03 10 3A */	slwi r3, r0, 2
/* 801EE124 001EB064  4B E3 5E 89 */	bl __nwa__FUl
/* 801EE128 001EB068  90 7F 02 20 */	stw r3, 0x220(r31)
/* 801EE12C 001EB06C  38 A0 00 00 */	li r5, 0
/* 801EE130 001EB070  38 80 00 00 */	li r4, 0
/* 801EE134 001EB074  48 00 00 14 */	b .L_801EE148
.L_801EE138:
/* 801EE138 001EB078  80 7F 02 20 */	lwz r3, 0x220(r31)
/* 801EE13C 001EB07C  38 A5 00 01 */	addi r5, r5, 1
/* 801EE140 001EB080  7F E3 25 2E */	stfsx f31, r3, r4
/* 801EE144 001EB084  38 84 00 04 */	addi r4, r4, 4
.L_801EE148:
/* 801EE148 001EB088  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EE14C 001EB08C  7C 05 00 00 */	cmpw r5, r0
/* 801EE150 001EB090  41 80 FF E8 */	blt .L_801EE138
/* 801EE154 001EB094  38 00 00 00 */	li r0, 0
/* 801EE158 001EB098  90 1F 02 00 */	stw r0, 0x200(r31)
/* 801EE15C 001EB09C  90 1F 01 FC */	stw r0, 0x1fc(r31)
/* 801EE160 001EB0A0  98 1F 01 F8 */	stb r0, 0x1f8(r31)
/* 801EE164 001EB0A4  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801EE168 001EB0A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EE16C 001EB0AC  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801EE170 001EB0B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE174 001EB0B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EE178 001EB0B8  7C 08 03 A6 */	mtlr r0
/* 801EE17C 001EB0BC  38 21 00 20 */	addi r1, r1, 0x20
/* 801EE180 001EB0C0  4E 80 00 20 */	blr 
.endfn onInit__Q34Game10ItemBridge4ItemFPQ24Game15CreatureInitArg

.fn "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg", weak
/* 801EE184 001EB0C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE188 001EB0C8  7C 08 02 A6 */	mflr r0
/* 801EE18C 001EB0CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE190 001EB0D0  38 00 00 00 */	li r0, 0
/* 801EE194 001EB0D4  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801EE198 001EB0D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE19C 001EB0DC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801EE1A0 001EB0E0  7D 89 03 A6 */	mtctr r12
/* 801EE1A4 001EB0E4  4E 80 04 21 */	bctrl 
/* 801EE1A8 001EB0E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE1AC 001EB0EC  7C 08 03 A6 */	mtlr r0
/* 801EE1B0 001EB0F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE1B4 001EB0F4  4E 80 00 20 */	blr 
.endfn "start__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"

.fn update__Q34Game10ItemBridge4ItemFv, global
/* 801EE1B8 001EB0F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE1BC 001EB0FC  7C 08 02 A6 */	mflr r0
/* 801EE1C0 001EB100  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE1C4 001EB104  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE1C8 001EB108  7C 7F 1B 78 */	mr r31, r3
/* 801EE1CC 001EB10C  80 63 01 F0 */	lwz r3, 0x1f0(r3)
/* 801EE1D0 001EB110  2C 03 00 00 */	cmpwi r3, 0
/* 801EE1D4 001EB114  40 81 00 14 */	ble .L_801EE1E8
/* 801EE1D8 001EB118  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801EE1DC 001EB11C  7C 00 1A 14 */	add r0, r0, r3
/* 801EE1E0 001EB120  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801EE1E4 001EB124  48 00 00 2C */	b .L_801EE210
.L_801EE1E8:
/* 801EE1E8 001EB128  80 7F 01 EC */	lwz r3, 0x1ec(r31)
/* 801EE1EC 001EB12C  2C 03 00 00 */	cmpwi r3, 0
/* 801EE1F0 001EB130  40 81 00 20 */	ble .L_801EE210
/* 801EE1F4 001EB134  38 03 FF FB */	addi r0, r3, -5
/* 801EE1F8 001EB138  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801EE1FC 001EB13C  80 1F 01 EC */	lwz r0, 0x1ec(r31)
/* 801EE200 001EB140  2C 00 00 00 */	cmpwi r0, 0
/* 801EE204 001EB144  40 80 00 0C */	bge .L_801EE210
/* 801EE208 001EB148  38 00 00 00 */	li r0, 0
/* 801EE20C 001EB14C  90 1F 01 EC */	stw r0, 0x1ec(r31)
.L_801EE210:
/* 801EE210 001EB150  38 00 00 00 */	li r0, 0
/* 801EE214 001EB154  7F E3 FB 78 */	mr r3, r31
/* 801EE218 001EB158  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 801EE21C 001EB15C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE220 001EB160  81 8C 01 C8 */	lwz r12, 0x1c8(r12)
/* 801EE224 001EB164  7D 89 03 A6 */	mtctr r12
/* 801EE228 001EB168  4E 80 04 21 */	bctrl 
/* 801EE22C 001EB16C  7F E3 FB 78 */	mr r3, r31
/* 801EE230 001EB170  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE234 001EB174  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801EE238 001EB178  7D 89 03 A6 */	mtctr r12
/* 801EE23C 001EB17C  4E 80 04 21 */	bctrl 
/* 801EE240 001EB180  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EE244 001EB184  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EE248 001EB188  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801EE24C 001EB18C  7D 89 03 A6 */	mtctr r12
/* 801EE250 001EB190  4E 80 04 21 */	bctrl 
/* 801EE254 001EB194  7F E3 FB 78 */	mr r3, r31
/* 801EE258 001EB198  4B F4 DB 11 */	bl updateCell__Q24Game8CreatureFv
/* 801EE25C 001EB19C  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 801EE260 001EB1A0  2C 00 00 00 */	cmpwi r0, 0
/* 801EE264 001EB1A4  41 80 00 0C */	blt .L_801EE270
/* 801EE268 001EB1A8  2C 00 00 0A */	cmpwi r0, 0xa
/* 801EE26C 001EB1AC  40 81 00 34 */	ble .L_801EE2A0
.L_801EE270:
/* 801EE270 001EB1B0  7F E3 FB 78 */	mr r3, r31
/* 801EE274 001EB1B4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE278 001EB1B8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801EE27C 001EB1BC  7D 89 03 A6 */	mtctr r12
/* 801EE280 001EB1C0  4E 80 04 21 */	bctrl 
/* 801EE284 001EB1C4  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801EE288 001EB1C8  3C A0 80 48 */	lis r5, lbl_80481244@ha
/* 801EE28C 001EB1CC  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801EE290 001EB1D0  38 80 00 F5 */	li r4, 0xf5
/* 801EE294 001EB1D4  38 A5 12 44 */	addi r5, r5, lbl_80481244@l
/* 801EE298 001EB1D8  4C C6 31 82 */	crclr 6
/* 801EE29C 001EB1DC  4B E3 C3 A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EE2A0:
/* 801EE2A0 001EB1E0  7F E3 FB 78 */	mr r3, r31
/* 801EE2A4 001EB1E4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE2A8 001EB1E8  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 801EE2AC 001EB1EC  7D 89 03 A6 */	mtctr r12
/* 801EE2B0 001EB1F0  4E 80 04 21 */	bctrl 
/* 801EE2B4 001EB1F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE2B8 001EB1F8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE2BC 001EB1FC  7C 08 03 A6 */	mtlr r0
/* 801EE2C0 001EB200  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE2C4 001EB204  4E 80 00 20 */	blr 
.endfn update__Q34Game10ItemBridge4ItemFv

.fn getLODCylinder__Q34Game10ItemBridge4ItemFRQ23Sys8Cylinder, global
/* 801EE2C8 001EB208  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801EE2CC 001EB20C  7C 08 02 A6 */	mflr r0
/* 801EE2D0 001EB210  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801EE2D4 001EB214  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 801EE2D8 001EB218  7C 9F 23 78 */	mr r31, r4
/* 801EE2DC 001EB21C  93 C1 00 98 */	stw r30, 0x98(r1)
/* 801EE2E0 001EB220  7C 7E 1B 78 */	mr r30, r3
/* 801EE2E4 001EB224  7F C4 F3 78 */	mr r4, r30
/* 801EE2E8 001EB228  38 61 00 20 */	addi r3, r1, 0x20
/* 801EE2EC 001EB22C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EE2F0 001EB230  81 8C 00 08 */	lwz r12, 8(r12)
/* 801EE2F4 001EB234  7D 89 03 A6 */	mtctr r12
/* 801EE2F8 001EB238  4E 80 04 21 */	bctrl 
/* 801EE2FC 001EB23C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801EE300 001EB240  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801EE304 001EB244  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801EE308 001EB248  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 801EE30C 001EB24C  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801EE310 001EB250  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801EE314 001EB254  A0 1E 02 14 */	lhz r0, 0x214(r30)
/* 801EE318 001EB258  2C 00 00 01 */	cmpwi r0, 1
/* 801EE31C 001EB25C  41 82 00 38 */	beq .L_801EE354
/* 801EE320 001EB260  40 80 00 10 */	bge .L_801EE330
/* 801EE324 001EB264  2C 00 00 00 */	cmpwi r0, 0
/* 801EE328 001EB268  40 80 00 14 */	bge .L_801EE33C
/* 801EE32C 001EB26C  48 00 00 58 */	b .L_801EE384
.L_801EE330:
/* 801EE330 001EB270  2C 00 00 03 */	cmpwi r0, 3
/* 801EE334 001EB274  40 80 00 50 */	bge .L_801EE384
/* 801EE338 001EB278  48 00 00 38 */	b .L_801EE370
.L_801EE33C:
/* 801EE33C 001EB27C  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EE340 001EB280  C0 02 B7 B4 */	lfs f0, lbl_80519B14@sda21(r2)
/* 801EE344 001EB284  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 801EE348 001EB288  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801EE34C 001EB28C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801EE350 001EB290  48 00 00 34 */	b .L_801EE384
.L_801EE354:
/* 801EE354 001EB294  C0 42 B7 B0 */	lfs f2, lbl_80519B10@sda21(r2)
/* 801EE358 001EB298  C0 22 B7 B8 */	lfs f1, lbl_80519B18@sda21(r2)
/* 801EE35C 001EB29C  C0 02 B7 BC */	lfs f0, lbl_80519B1C@sda21(r2)
/* 801EE360 001EB2A0  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801EE364 001EB2A4  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801EE368 001EB2A8  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801EE36C 001EB2AC  48 00 00 18 */	b .L_801EE384
.L_801EE370:
/* 801EE370 001EB2B0  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EE374 001EB2B4  C0 02 B7 C0 */	lfs f0, lbl_80519B20@sda21(r2)
/* 801EE378 001EB2B8  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 801EE37C 001EB2BC  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801EE380 001EB2C0  D0 01 00 4C */	stfs f0, 0x4c(r1)
.L_801EE384:
/* 801EE384 001EB2C4  C0 22 B7 C4 */	lfs f1, lbl_80519B24@sda21(r2)
/* 801EE388 001EB2C8  38 61 00 5C */	addi r3, r1, 0x5c
/* 801EE38C 001EB2CC  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EE390 001EB2D0  38 81 00 38 */	addi r4, r1, 0x38
/* 801EE394 001EB2D4  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801EE398 001EB2D8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801EE39C 001EB2DC  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 801EE3A0 001EB2E0  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801EE3A4 001EB2E4  C0 3E 01 F4 */	lfs f1, 0x1f4(r30)
/* 801EE3A8 001EB2E8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 801EE3AC 001EB2EC  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 801EE3B0 001EB2F0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801EE3B4 001EB2F4  48 23 A1 FD */	bl "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801EE3B8 001EB2F8  38 61 00 5C */	addi r3, r1, 0x5c
/* 801EE3BC 001EB2FC  38 81 00 44 */	addi r4, r1, 0x44
/* 801EE3C0 001EB300  38 A1 00 08 */	addi r5, r1, 8
/* 801EE3C4 001EB304  4B EF C8 15 */	bl PSMTXMultVec
/* 801EE3C8 001EB308  C0 A1 00 08 */	lfs f5, 8(r1)
/* 801EE3CC 001EB30C  7F C4 F3 78 */	mr r4, r30
/* 801EE3D0 001EB310  C0 81 00 0C */	lfs f4, 0xc(r1)
/* 801EE3D4 001EB314  38 61 00 14 */	addi r3, r1, 0x14
/* 801EE3D8 001EB318  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801EE3DC 001EB31C  C0 41 00 58 */	lfs f2, 0x58(r1)
/* 801EE3E0 001EB320  C0 21 00 54 */	lfs f1, 0x54(r1)
/* 801EE3E4 001EB324  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801EE3E8 001EB328  EC 43 10 2A */	fadds f2, f3, f2
/* 801EE3EC 001EB32C  D0 61 00 4C */	stfs f3, 0x4c(r1)
/* 801EE3F0 001EB330  EC 24 08 2A */	fadds f1, f4, f1
/* 801EE3F4 001EB334  EC 05 00 2A */	fadds f0, f5, f0
/* 801EE3F8 001EB338  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 801EE3FC 001EB33C  D0 81 00 48 */	stfs f4, 0x48(r1)
/* 801EE400 001EB340  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 801EE404 001EB344  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801EE408 001EB348  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 801EE40C 001EB34C  48 00 0C 2D */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EE410 001EB350  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 801EE414 001EB354  7F E3 FB 78 */	mr r3, r31
/* 801EE418 001EB358  C0 42 B7 C8 */	lfs f2, lbl_80519B28@sda21(r2)
/* 801EE41C 001EB35C  38 81 00 50 */	addi r4, r1, 0x50
/* 801EE420 001EB360  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801EE424 001EB364  38 A1 00 44 */	addi r5, r1, 0x44
/* 801EE428 001EB368  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801EE42C 001EB36C  EC A3 00 B2 */	fmuls f5, f3, f2
/* 801EE430 001EB370  C0 C1 00 58 */	lfs f6, 0x58(r1)
/* 801EE434 001EB374  EC 61 00 B2 */	fmuls f3, f1, f2
/* 801EE438 001EB378  C0 81 00 54 */	lfs f4, 0x54(r1)
/* 801EE43C 001EB37C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801EE440 001EB380  C0 41 00 50 */	lfs f2, 0x50(r1)
/* 801EE444 001EB384  EC A6 28 28 */	fsubs f5, f6, f5
/* 801EE448 001EB388  C0 22 B7 CC */	lfs f1, lbl_80519B2C@sda21(r2)
/* 801EE44C 001EB38C  EC 64 18 28 */	fsubs f3, f4, f3
/* 801EE450 001EB390  EC 02 00 28 */	fsubs f0, f2, f0
/* 801EE454 001EB394  D0 A1 00 58 */	stfs f5, 0x58(r1)
/* 801EE458 001EB398  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801EE45C 001EB39C  D0 61 00 54 */	stfs f3, 0x54(r1)
/* 801EE460 001EB3A0  48 23 32 05 */	bl "set__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
/* 801EE464 001EB3A4  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801EE468 001EB3A8  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 801EE46C 001EB3AC  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 801EE470 001EB3B0  7C 08 03 A6 */	mtlr r0
/* 801EE474 001EB3B4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801EE478 001EB3B8  4E 80 00 20 */	blr 
.endfn getLODCylinder__Q34Game10ItemBridge4ItemFRQ23Sys8Cylinder

.fn do_updateLOD__Q34Game10ItemBridge4ItemFv, global
/* 801EE47C 001EB3BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EE480 001EB3C0  7C 08 02 A6 */	mflr r0
/* 801EE484 001EB3C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EE488 001EB3C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EE48C 001EB3CC  7C 7F 1B 78 */	mr r31, r3
/* 801EE490 001EB3D0  38 61 00 08 */	addi r3, r1, 8
/* 801EE494 001EB3D4  4B FE 93 75 */	bl __ct__Q24Game9AILODParmFv
/* 801EE498 001EB3D8  38 00 00 01 */	li r0, 1
/* 801EE49C 001EB3DC  7F E3 FB 78 */	mr r3, r31
/* 801EE4A0 001EB3E0  98 01 00 10 */	stb r0, 0x10(r1)
/* 801EE4A4 001EB3E4  38 81 00 08 */	addi r4, r1, 8
/* 801EE4A8 001EB3E8  4B FE 93 95 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 801EE4AC 001EB3EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EE4B0 001EB3F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EE4B4 001EB3F4  7C 08 03 A6 */	mtlr r0
/* 801EE4B8 001EB3F8  38 21 00 20 */	addi r1, r1, 0x20
/* 801EE4BC 001EB3FC  4E 80 00 20 */	blr 
.endfn do_updateLOD__Q34Game10ItemBridge4ItemFv

.fn doDirectDraw__Q34Game10ItemBridge4ItemFR8Graphics, global
/* 801EE4C0 001EB400  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game10ItemBridge4ItemFR8Graphics

.fn constructor__Q34Game10ItemBridge4ItemFv, global
/* 801EE4C4 001EB404  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE4C8 001EB408  7C 08 02 A6 */	mflr r0
/* 801EE4CC 001EB40C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE4D0 001EB410  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE4D4 001EB414  7C 7F 1B 78 */	mr r31, r3
/* 801EE4D8 001EB418  38 60 00 84 */	li r3, 0x84
/* 801EE4DC 001EB41C  4B E3 59 C9 */	bl __nw__FUl
/* 801EE4E0 001EB420  7C 60 1B 79 */	or. r0, r3, r3
/* 801EE4E4 001EB424  41 82 00 10 */	beq .L_801EE4F4
/* 801EE4E8 001EB428  7F E4 FB 78 */	mr r4, r31
/* 801EE4EC 001EB42C  48 27 31 35 */	bl __ct__Q23PSM8WorkItemFPQ24Game8BaseItem
/* 801EE4F0 001EB430  7C 60 1B 78 */	mr r0, r3
.L_801EE4F4:
/* 801EE4F4 001EB434  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801EE4F8 001EB438  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE4FC 001EB43C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE500 001EB440  7C 08 03 A6 */	mtlr r0
/* 801EE504 001EB444  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE508 001EB448  4E 80 00 20 */	blr 
.endfn constructor__Q34Game10ItemBridge4ItemFv

.fn doLoad__Q34Game10ItemBridge4ItemFR6Stream, global
/* 801EE50C 001EB44C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE510 001EB450  7C 08 02 A6 */	mflr r0
/* 801EE514 001EB454  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE518 001EB458  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE51C 001EB45C  7C 9F 23 78 */	mr r31, r4
/* 801EE520 001EB460  93 C1 00 08 */	stw r30, 8(r1)
/* 801EE524 001EB464  7C 7E 1B 78 */	mr r30, r3
/* 801EE528 001EB468  7F E3 FB 78 */	mr r3, r31
/* 801EE52C 001EB46C  48 22 65 65 */	bl readInt__6StreamFv
/* 801EE530 001EB470  90 7E 02 18 */	stw r3, 0x218(r30)
/* 801EE534 001EB474  38 A0 00 00 */	li r5, 0
/* 801EE538 001EB478  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EE53C 001EB47C  38 80 00 00 */	li r4, 0
/* 801EE540 001EB480  48 00 00 14 */	b .L_801EE554
.L_801EE544:
/* 801EE544 001EB484  80 7E 02 20 */	lwz r3, 0x220(r30)
/* 801EE548 001EB488  38 A5 00 01 */	addi r5, r5, 1
/* 801EE54C 001EB48C  7C 03 25 2E */	stfsx f0, r3, r4
/* 801EE550 001EB490  38 84 00 04 */	addi r4, r4, 4
.L_801EE554:
/* 801EE554 001EB494  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801EE558 001EB498  7C 05 00 00 */	cmpw r5, r0
/* 801EE55C 001EB49C  41 80 FF E8 */	blt .L_801EE544
/* 801EE560 001EB4A0  7F E3 FB 78 */	mr r3, r31
/* 801EE564 001EB4A4  48 22 68 49 */	bl readFloat__6StreamFv
/* 801EE568 001EB4A8  80 9E 02 18 */	lwz r4, 0x218(r30)
/* 801EE56C 001EB4AC  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801EE570 001EB4B0  7C 04 00 00 */	cmpw r4, r0
/* 801EE574 001EB4B4  41 80 00 64 */	blt .L_801EE5D8
/* 801EE578 001EB4B8  7F C3 F3 78 */	mr r3, r30
/* 801EE57C 001EB4BC  38 80 00 00 */	li r4, 0
/* 801EE580 001EB4C0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801EE584 001EB4C4  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801EE588 001EB4C8  7D 89 03 A6 */	mtctr r12
/* 801EE58C 001EB4CC  4E 80 04 21 */	bctrl 
/* 801EE590 001EB4D0  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801EE594 001EB4D4  28 03 00 00 */	cmplwi r3, 0
/* 801EE598 001EB4D8  41 82 00 4C */	beq .L_801EE5E4
/* 801EE59C 001EB4DC  80 1E 02 00 */	lwz r0, 0x200(r30)
/* 801EE5A0 001EB4E0  28 00 00 00 */	cmplwi r0, 0
/* 801EE5A4 001EB4E4  41 82 00 40 */	beq .L_801EE5E4
/* 801EE5A8 001EB4E8  38 80 00 01 */	li r4, 1
/* 801EE5AC 001EB4EC  4B F8 42 C9 */	bl setOpen__Q24Game8WayPointFb
/* 801EE5B0 001EB4F0  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 801EE5B4 001EB4F4  38 80 00 01 */	li r4, 1
/* 801EE5B8 001EB4F8  4B F8 42 BD */	bl setOpen__Q24Game8WayPointFb
/* 801EE5BC 001EB4FC  80 7E 01 FC */	lwz r3, 0x1fc(r30)
/* 801EE5C0 001EB500  38 80 00 00 */	li r4, 0
/* 801EE5C4 001EB504  4B F8 42 D9 */	bl setWater__Q24Game8WayPointFb
/* 801EE5C8 001EB508  80 7E 02 00 */	lwz r3, 0x200(r30)
/* 801EE5CC 001EB50C  38 80 00 00 */	li r4, 0
/* 801EE5D0 001EB510  4B F8 42 CD */	bl setWater__Q24Game8WayPointFb
/* 801EE5D4 001EB514  48 00 00 10 */	b .L_801EE5E4
.L_801EE5D8:
/* 801EE5D8 001EB518  80 7E 02 20 */	lwz r3, 0x220(r30)
/* 801EE5DC 001EB51C  54 80 10 3A */	slwi r0, r4, 2
/* 801EE5E0 001EB520  7C 23 05 2E */	stfsx f1, r3, r0
.L_801EE5E4:
/* 801EE5E4 001EB524  80 9E 02 18 */	lwz r4, 0x218(r30)
/* 801EE5E8 001EB528  7F C3 F3 78 */	mr r3, r30
/* 801EE5EC 001EB52C  48 00 04 09 */	bl setCurrStage__Q34Game10ItemBridge4ItemFi
/* 801EE5F0 001EB530  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE5F4 001EB534  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE5F8 001EB538  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EE5FC 001EB53C  7C 08 03 A6 */	mtlr r0
/* 801EE600 001EB540  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE604 001EB544  4E 80 00 20 */	blr 
.endfn doLoad__Q34Game10ItemBridge4ItemFR6Stream

.fn doSave__Q34Game10ItemBridge4ItemFR6Stream, global
/* 801EE608 001EB548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE60C 001EB54C  7C 08 02 A6 */	mflr r0
/* 801EE610 001EB550  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE614 001EB554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE618 001EB558  7C 9F 23 78 */	mr r31, r4
/* 801EE61C 001EB55C  93 C1 00 08 */	stw r30, 8(r1)
/* 801EE620 001EB560  7C 7E 1B 78 */	mr r30, r3
/* 801EE624 001EB564  80 83 02 18 */	lwz r4, 0x218(r3)
/* 801EE628 001EB568  7F E3 FB 78 */	mr r3, r31
/* 801EE62C 001EB56C  48 22 71 95 */	bl writeInt__6StreamFi
/* 801EE630 001EB570  80 7E 02 18 */	lwz r3, 0x218(r30)
/* 801EE634 001EB574  80 1E 02 1C */	lwz r0, 0x21c(r30)
/* 801EE638 001EB578  7C 03 00 00 */	cmpw r3, r0
/* 801EE63C 001EB57C  41 80 00 14 */	blt .L_801EE650
/* 801EE640 001EB580  C0 22 B7 D0 */	lfs f1, lbl_80519B30@sda21(r2)
/* 801EE644 001EB584  7F E3 FB 78 */	mr r3, r31
/* 801EE648 001EB588  48 22 72 01 */	bl writeFloat__6StreamFf
/* 801EE64C 001EB58C  48 00 00 18 */	b .L_801EE664
.L_801EE650:
/* 801EE650 001EB590  80 9E 02 20 */	lwz r4, 0x220(r30)
/* 801EE654 001EB594  54 60 10 3A */	slwi r0, r3, 2
/* 801EE658 001EB598  7F E3 FB 78 */	mr r3, r31
/* 801EE65C 001EB59C  7C 24 04 2E */	lfsx f1, r4, r0
/* 801EE660 001EB5A0  48 22 71 E9 */	bl writeFloat__6StreamFf
.L_801EE664:
/* 801EE664 001EB5A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE668 001EB5A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE66C 001EB5AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801EE670 001EB5B0  7C 08 03 A6 */	mtlr r0
/* 801EE674 001EB5B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE678 001EB5B8  4E 80 00 20 */	blr 
.endfn doSave__Q34Game10ItemBridge4ItemFR6Stream

.fn onSetPosition__Q34Game10ItemBridge4ItemFv, global
/* 801EE67C 001EB5BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EE680 001EB5C0  7C 08 02 A6 */	mflr r0
/* 801EE684 001EB5C4  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EE688 001EB5C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EE68C 001EB5CC  38 A1 00 08 */	addi r5, r1, 8
/* 801EE690 001EB5D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EE694 001EB5D4  7C 7F 1B 78 */	mr r31, r3
/* 801EE698 001EB5D8  38 9F 01 9C */	addi r4, r31, 0x19c
/* 801EE69C 001EB5DC  C0 23 01 F4 */	lfs f1, 0x1f4(r3)
/* 801EE6A0 001EB5E0  38 7F 01 38 */	addi r3, r31, 0x138
/* 801EE6A4 001EB5E4  D0 01 00 08 */	stfs f0, 8(r1)
/* 801EE6A8 001EB5E8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801EE6AC 001EB5EC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801EE6B0 001EB5F0  48 23 A1 D9 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801EE6B4 001EB5F4  7F E3 FB 78 */	mr r3, r31
/* 801EE6B8 001EB5F8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE6BC 001EB5FC  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801EE6C0 001EB600  7D 89 03 A6 */	mtctr r12
/* 801EE6C4 001EB604  4E 80 04 21 */	bctrl 
/* 801EE6C8 001EB608  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EE6CC 001EB60C  7F E4 FB 78 */	mr r4, r31
/* 801EE6D0 001EB610  38 BF 02 04 */	addi r5, r31, 0x204
/* 801EE6D4 001EB614  48 00 23 F5 */	bl setupPlatInstanceAttacher__Q34Game10ItemBridge3MgrFPQ34Game10ItemBridge4ItemRQ24Game20PlatInstanceAttacher
/* 801EE6D8 001EB618  38 7F 02 04 */	addi r3, r31, 0x204
/* 801EE6DC 001EB61C  38 80 00 01 */	li r4, 1
/* 801EE6E0 001EB620  4B FD 6D 21 */	bl fixCollision__Q24Game20PlatInstanceAttacherFb
/* 801EE6E4 001EB624  7F E3 FB 78 */	mr r3, r31
/* 801EE6E8 001EB628  48 00 05 99 */	bl createWayPoints__Q34Game10ItemBridge4ItemFv
/* 801EE6EC 001EB62C  7F E3 FB 78 */	mr r3, r31
/* 801EE6F0 001EB630  38 80 00 00 */	li r4, 0
/* 801EE6F4 001EB634  48 00 03 01 */	bl setCurrStage__Q34Game10ItemBridge4ItemFi
/* 801EE6F8 001EB638  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EE6FC 001EB63C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EE700 001EB640  7C 08 03 A6 */	mtlr r0
/* 801EE704 001EB644  38 21 00 20 */	addi r1, r1, 0x20
/* 801EE708 001EB648  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game10ItemBridge4ItemFv

.fn updateBoundSphere__Q34Game10ItemBridge4ItemFv, global
/* 801EE70C 001EB64C  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801EE710 001EB650  C0 02 B7 C8 */	lfs f0, lbl_80519B28@sda21(r2)
/* 801EE714 001EB654  D0 23 01 C4 */	stfs f1, 0x1c4(r3)
/* 801EE718 001EB658  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801EE71C 001EB65C  D0 23 01 C8 */	stfs f1, 0x1c8(r3)
/* 801EE720 001EB660  C0 23 01 A4 */	lfs f1, 0x1a4(r3)
/* 801EE724 001EB664  D0 23 01 CC */	stfs f1, 0x1cc(r3)
/* 801EE728 001EB668  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801EE72C 001EB66C  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q34Game10ItemBridge4ItemFv

.fn changeMaterial__Q34Game10ItemBridge4ItemFv, global
/* 801EE730 001EB670  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EE734 001EB674  7C 08 02 A6 */	mflr r0
/* 801EE738 001EB678  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EE73C 001EB67C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EE740 001EB680  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EE744 001EB684  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EE748 001EB688  93 81 00 10 */	stw r28, 0x10(r1)
/* 801EE74C 001EB68C  7C 7C 1B 78 */	mr r28, r3
/* 801EE750 001EB690  38 7C 02 04 */	addi r3, r28, 0x204
/* 801EE754 001EB694  4B FD 6D D5 */	bl setShapeVisibility__Q24Game20PlatInstanceAttacherFv
/* 801EE758 001EB698  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EE75C 001EB69C  A0 9C 02 14 */	lhz r4, 0x214(r28)
/* 801EE760 001EB6A0  48 00 20 E5 */	bl getBridgeInfo__Q34Game10ItemBridge3MgrFi
/* 801EE764 001EB6A4  7C 7F 1B 78 */	mr r31, r3
/* 801EE768 001EB6A8  80 A3 00 0C */	lwz r5, 0xc(r3)
/* 801EE76C 001EB6AC  2C 05 FF FF */	cmpwi r5, -1
/* 801EE770 001EB6B0  41 82 00 C4 */	beq .L_801EE834
/* 801EE774 001EB6B4  80 7C 02 18 */	lwz r3, 0x218(r28)
/* 801EE778 001EB6B8  80 1C 02 1C */	lwz r0, 0x21c(r28)
/* 801EE77C 001EB6BC  7C 03 00 00 */	cmpw r3, r0
/* 801EE780 001EB6C0  40 82 00 9C */	bne .L_801EE81C
/* 801EE784 001EB6C4  3B A0 00 00 */	li r29, 0
/* 801EE788 001EB6C8  3B C0 00 00 */	li r30, 0
/* 801EE78C 001EB6CC  48 00 00 64 */	b .L_801EE7F0
.L_801EE790:
/* 801EE790 001EB6D0  57 A3 0F FE */	srwi r3, r29, 0x1f
/* 801EE794 001EB6D4  57 A0 07 FE */	clrlwi r0, r29, 0x1f
/* 801EE798 001EB6D8  7C 00 1A 78 */	xor r0, r0, r3
/* 801EE79C 001EB6DC  7C 03 00 51 */	subf. r0, r3, r0
/* 801EE7A0 001EB6E0  40 82 00 28 */	bne .L_801EE7C8
/* 801EE7A4 001EB6E4  80 7C 01 74 */	lwz r3, 0x174(r28)
/* 801EE7A8 001EB6E8  38 80 00 00 */	li r4, 0
/* 801EE7AC 001EB6EC  80 BF 00 08 */	lwz r5, 8(r31)
/* 801EE7B0 001EB6F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE7B4 001EB6F4  7C A5 F2 2E */	lhzx r5, r5, r30
/* 801EE7B8 001EB6F8  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EE7BC 001EB6FC  7D 89 03 A6 */	mtctr r12
/* 801EE7C0 001EB700  4E 80 04 21 */	bctrl 
/* 801EE7C4 001EB704  48 00 00 24 */	b .L_801EE7E8
.L_801EE7C8:
/* 801EE7C8 001EB708  80 7C 01 74 */	lwz r3, 0x174(r28)
/* 801EE7CC 001EB70C  38 80 00 01 */	li r4, 1
/* 801EE7D0 001EB710  80 BF 00 08 */	lwz r5, 8(r31)
/* 801EE7D4 001EB714  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE7D8 001EB718  7C A5 F2 2E */	lhzx r5, r5, r30
/* 801EE7DC 001EB71C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EE7E0 001EB720  7D 89 03 A6 */	mtctr r12
/* 801EE7E4 001EB724  4E 80 04 21 */	bctrl 
.L_801EE7E8:
/* 801EE7E8 001EB728  3B DE 00 02 */	addi r30, r30, 2
/* 801EE7EC 001EB72C  3B BD 00 01 */	addi r29, r29, 1
.L_801EE7F0:
/* 801EE7F0 001EB730  80 1F 00 04 */	lwz r0, 4(r31)
/* 801EE7F4 001EB734  7C 1D 00 00 */	cmpw r29, r0
/* 801EE7F8 001EB738  41 80 FF 98 */	blt .L_801EE790
/* 801EE7FC 001EB73C  80 7C 01 74 */	lwz r3, 0x174(r28)
/* 801EE800 001EB740  38 80 00 01 */	li r4, 1
/* 801EE804 001EB744  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 801EE808 001EB748  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE80C 001EB74C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EE810 001EB750  7D 89 03 A6 */	mtctr r12
/* 801EE814 001EB754  4E 80 04 21 */	bctrl 
/* 801EE818 001EB758  48 00 00 1C */	b .L_801EE834
.L_801EE81C:
/* 801EE81C 001EB75C  80 7C 01 74 */	lwz r3, 0x174(r28)
/* 801EE820 001EB760  38 80 00 00 */	li r4, 0
/* 801EE824 001EB764  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE828 001EB768  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801EE82C 001EB76C  7D 89 03 A6 */	mtctr r12
/* 801EE830 001EB770  4E 80 04 21 */	bctrl 
.L_801EE834:
/* 801EE834 001EB774  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EE838 001EB778  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EE83C 001EB77C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801EE840 001EB780  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801EE844 001EB784  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801EE848 001EB788  7C 08 03 A6 */	mtlr r0
/* 801EE84C 001EB78C  38 21 00 20 */	addi r1, r1, 0x20
/* 801EE850 001EB790  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game10ItemBridge4ItemFv

.fn doAI__Q34Game10ItemBridge4ItemFv, global
/* 801EE854 001EB794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EE858 001EB798  7C 08 02 A6 */	mflr r0
/* 801EE85C 001EB79C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EE860 001EB7A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EE864 001EB7A4  7C 7F 1B 78 */	mr r31, r3
/* 801EE868 001EB7A8  7F E4 FB 78 */	mr r4, r31
/* 801EE86C 001EB7AC  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801EE870 001EB7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801EE874 001EB7B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801EE878 001EB7B8  7D 89 03 A6 */	mtctr r12
/* 801EE87C 001EB7BC  4E 80 04 21 */	bctrl 
/* 801EE880 001EB7C0  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801EE884 001EB7C4  48 04 03 BD */	bl update__Q24Game11TSoundEventFv
/* 801EE888 001EB7C8  2C 03 00 02 */	cmpwi r3, 2
/* 801EE88C 001EB7CC  41 82 00 08 */	beq .L_801EE894
/* 801EE890 001EB7D0  48 00 00 50 */	b .L_801EE8E0
.L_801EE894:
/* 801EE894 001EB7D4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EE898 001EB7D8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EE89C 001EB7DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801EE8A0 001EB7E0  7D 89 03 A6 */	mtctr r12
/* 801EE8A4 001EB7E4  4E 80 04 21 */	bctrl 
/* 801EE8A8 001EB7E8  2C 03 00 0A */	cmpwi r3, 0xa
/* 801EE8AC 001EB7EC  41 82 00 20 */	beq .L_801EE8CC
/* 801EE8B0 001EB7F0  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801EE8B4 001EB7F4  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801EE8B8 001EB7F8  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801EE8BC 001EB7FC  38 80 01 BE */	li r4, 0x1be
/* 801EE8C0 001EB800  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801EE8C4 001EB804  4C C6 31 82 */	crclr 6
/* 801EE8C8 001EB808  4B E3 BD 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EE8CC:
/* 801EE8CC 001EB80C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EE8D0 001EB810  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EE8D4 001EB814  81 8C 00 90 */	lwz r12, 0x90(r12)
/* 801EE8D8 001EB818  7D 89 03 A6 */	mtctr r12
/* 801EE8DC 001EB81C  4E 80 04 21 */	bctrl 
.L_801EE8E0:
/* 801EE8E0 001EB820  88 7F 01 F8 */	lbz r3, 0x1f8(r31)
/* 801EE8E4 001EB824  28 03 00 00 */	cmplwi r3, 0
/* 801EE8E8 001EB828  41 82 00 F8 */	beq .L_801EE9E0
/* 801EE8EC 001EB82C  38 03 FF FF */	addi r0, r3, -1
/* 801EE8F0 001EB830  98 1F 01 F8 */	stb r0, 0x1f8(r31)
/* 801EE8F4 001EB834  88 1F 01 F8 */	lbz r0, 0x1f8(r31)
/* 801EE8F8 001EB838  28 00 00 00 */	cmplwi r0, 0
/* 801EE8FC 001EB83C  40 82 00 E4 */	bne .L_801EE9E0
/* 801EE900 001EB840  80 9F 02 18 */	lwz r4, 0x218(r31)
/* 801EE904 001EB844  7F E3 FB 78 */	mr r3, r31
/* 801EE908 001EB848  38 84 00 01 */	addi r4, r4, 1
/* 801EE90C 001EB84C  48 00 00 E9 */	bl setCurrStage__Q34Game10ItemBridge4ItemFi
/* 801EE910 001EB850  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801EE914 001EB854  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EE918 001EB858  7C 03 00 00 */	cmpw r3, r0
/* 801EE91C 001EB85C  40 82 00 C4 */	bne .L_801EE9E0
/* 801EE920 001EB860  7F E3 FB 78 */	mr r3, r31
/* 801EE924 001EB864  38 80 00 00 */	li r4, 0
/* 801EE928 001EB868  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EE92C 001EB86C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801EE930 001EB870  7D 89 03 A6 */	mtctr r12
/* 801EE934 001EB874  4E 80 04 21 */	bctrl 
/* 801EE938 001EB878  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 801EE93C 001EB87C  38 80 18 1C */	li r4, 0x181c
/* 801EE940 001EB880  38 A0 00 00 */	li r5, 0
/* 801EE944 001EB884  48 14 9C ED */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 801EE948 001EB888  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EE94C 001EB88C  28 03 00 00 */	cmplwi r3, 0
/* 801EE950 001EB890  41 82 00 3C */	beq .L_801EE98C
/* 801EE954 001EB894  80 1F 02 00 */	lwz r0, 0x200(r31)
/* 801EE958 001EB898  28 00 00 00 */	cmplwi r0, 0
/* 801EE95C 001EB89C  41 82 00 30 */	beq .L_801EE98C
/* 801EE960 001EB8A0  38 80 00 01 */	li r4, 1
/* 801EE964 001EB8A4  4B F8 3F 11 */	bl setOpen__Q24Game8WayPointFb
/* 801EE968 001EB8A8  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EE96C 001EB8AC  38 80 00 01 */	li r4, 1
/* 801EE970 001EB8B0  4B F8 3F 05 */	bl setOpen__Q24Game8WayPointFb
/* 801EE974 001EB8B4  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EE978 001EB8B8  38 80 00 00 */	li r4, 0
/* 801EE97C 001EB8BC  4B F8 3F 21 */	bl setWater__Q24Game8WayPointFb
/* 801EE980 001EB8C0  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EE984 001EB8C4  38 80 00 00 */	li r4, 0
/* 801EE988 001EB8C8  4B F8 3F 15 */	bl setWater__Q24Game8WayPointFb
.L_801EE98C:
/* 801EE98C 001EB8CC  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801EE990 001EB8D0  48 04 02 A1 */	bl finish__Q24Game11TSoundEventFv
/* 801EE994 001EB8D4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EE998 001EB8D8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EE99C 001EB8DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801EE9A0 001EB8E0  7D 89 03 A6 */	mtctr r12
/* 801EE9A4 001EB8E4  4E 80 04 21 */	bctrl 
/* 801EE9A8 001EB8E8  2C 03 00 0A */	cmpwi r3, 0xa
/* 801EE9AC 001EB8EC  41 82 00 20 */	beq .L_801EE9CC
/* 801EE9B0 001EB8F0  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801EE9B4 001EB8F4  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801EE9B8 001EB8F8  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801EE9BC 001EB8FC  38 80 01 D7 */	li r4, 0x1d7
/* 801EE9C0 001EB900  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801EE9C4 001EB904  4C C6 31 82 */	crclr 6
/* 801EE9C8 001EB908  4B E3 BC 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EE9CC:
/* 801EE9CC 001EB90C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EE9D0 001EB910  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EE9D4 001EB914  81 8C 00 94 */	lwz r12, 0x94(r12)
/* 801EE9D8 001EB918  7D 89 03 A6 */	mtctr r12
/* 801EE9DC 001EB91C  4E 80 04 21 */	bctrl 
.L_801EE9E0:
/* 801EE9E0 001EB920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EE9E4 001EB924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EE9E8 001EB928  7C 08 03 A6 */	mtlr r0
/* 801EE9EC 001EB92C  38 21 00 10 */	addi r1, r1, 0x10
/* 801EE9F0 001EB930  4E 80 00 20 */	blr 
.endfn doAI__Q34Game10ItemBridge4ItemFv

.fn setCurrStage__Q34Game10ItemBridge4ItemFi, global
/* 801EE9F4 001EB934  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801EE9F8 001EB938  7C 08 02 A6 */	mflr r0
/* 801EE9FC 001EB93C  90 01 00 74 */	stw r0, 0x74(r1)
/* 801EEA00 001EB940  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801EEA04 001EB944  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801EEA08 001EB948  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 801EEA0C 001EB94C  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 801EEA10 001EB950  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 801EEA14 001EB954  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 801EEA18 001EB958  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 801EEA1C 001EB95C  7C 7D 1B 78 */	mr r29, r3
/* 801EEA20 001EB960  7C 9E 23 78 */	mr r30, r4
/* 801EEA24 001EB964  80 6D 94 B8 */	lwz r3, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EEA28 001EB968  A0 9D 02 14 */	lhz r4, 0x214(r29)
/* 801EEA2C 001EB96C  48 00 1E 19 */	bl getBridgeInfo__Q34Game10ItemBridge3MgrFi
/* 801EEA30 001EB970  7C 7F 1B 78 */	mr r31, r3
/* 801EEA34 001EB974  80 83 00 0C */	lwz r4, 0xc(r3)
/* 801EEA38 001EB978  2C 04 FF FF */	cmpwi r4, -1
/* 801EEA3C 001EB97C  41 82 01 08 */	beq .L_801EEB44
/* 801EEA40 001EB980  80 1D 02 1C */	lwz r0, 0x21c(r29)
/* 801EEA44 001EB984  7C 1E 00 00 */	cmpw r30, r0
/* 801EEA48 001EB988  40 82 00 50 */	bne .L_801EEA98
/* 801EEA4C 001EB98C  3B 80 00 00 */	li r28, 0
/* 801EEA50 001EB990  48 00 00 20 */	b .L_801EEA70
.L_801EEA54:
/* 801EEA54 001EB994  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEA58 001EB998  57 80 0B FC */	rlwinm r0, r28, 1, 0xf, 0x1e
/* 801EEA5C 001EB99C  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEA60 001EB9A0  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEA64 001EB9A4  38 80 00 00 */	li r4, 0
/* 801EEA68 001EB9A8  4B FD 69 05 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEA6C 001EB9AC  3B 9C 00 01 */	addi r28, r28, 1
.L_801EEA70:
/* 801EEA70 001EB9B0  80 1F 00 04 */	lwz r0, 4(r31)
/* 801EEA74 001EB9B4  57 83 04 3E */	clrlwi r3, r28, 0x10
/* 801EEA78 001EB9B8  7C 03 00 00 */	cmpw r3, r0
/* 801EEA7C 001EB9BC  41 80 FF D8 */	blt .L_801EEA54
/* 801EEA80 001EB9C0  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801EEA84 001EB9C4  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEA88 001EB9C8  38 80 00 01 */	li r4, 1
/* 801EEA8C 001EB9CC  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 801EEA90 001EB9D0  4B FD 68 DD */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEA94 001EB9D4  48 00 01 48 */	b .L_801EEBDC
.L_801EEA98:
/* 801EEA98 001EB9D8  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEA9C 001EB9DC  54 85 04 3E */	clrlwi r5, r4, 0x10
/* 801EEAA0 001EB9E0  38 80 00 00 */	li r4, 0
/* 801EEAA4 001EB9E4  4B FD 68 C9 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEAA8 001EB9E8  57 DC 08 3C */	slwi r28, r30, 1
/* 801EEAAC 001EB9EC  3B 60 00 00 */	li r27, 0
/* 801EEAB0 001EB9F0  48 00 00 80 */	b .L_801EEB30
.L_801EEAB4:
/* 801EEAB4 001EB9F4  7C 04 E0 00 */	cmpw r4, r28
/* 801EEAB8 001EB9F8  41 81 00 5C */	bgt .L_801EEB14
/* 801EEABC 001EB9FC  54 83 0F FE */	srwi r3, r4, 0x1f
/* 801EEAC0 001EBA00  54 80 07 FE */	clrlwi r0, r4, 0x1f
/* 801EEAC4 001EBA04  7C 00 1A 78 */	xor r0, r0, r3
/* 801EEAC8 001EBA08  7C 03 00 50 */	subf r0, r3, r0
/* 801EEACC 001EBA0C  2C 00 00 01 */	cmpwi r0, 1
/* 801EEAD0 001EBA10  41 82 00 0C */	beq .L_801EEADC
/* 801EEAD4 001EBA14  7C 04 E0 00 */	cmpw r4, r28
/* 801EEAD8 001EBA18  40 82 00 20 */	bne .L_801EEAF8
.L_801EEADC:
/* 801EEADC 001EBA1C  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEAE0 001EBA20  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEAE4 001EBA24  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEAE8 001EBA28  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEAEC 001EBA2C  38 80 00 01 */	li r4, 1
/* 801EEAF0 001EBA30  4B FD 68 7D */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEAF4 001EBA34  48 00 00 38 */	b .L_801EEB2C
.L_801EEAF8:
/* 801EEAF8 001EBA38  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEAFC 001EBA3C  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEB00 001EBA40  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEB04 001EBA44  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEB08 001EBA48  38 80 00 00 */	li r4, 0
/* 801EEB0C 001EBA4C  4B FD 68 61 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEB10 001EBA50  48 00 00 1C */	b .L_801EEB2C
.L_801EEB14:
/* 801EEB14 001EBA54  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEB18 001EBA58  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEB1C 001EBA5C  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEB20 001EBA60  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEB24 001EBA64  38 80 00 00 */	li r4, 0
/* 801EEB28 001EBA68  4B FD 68 45 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
.L_801EEB2C:
/* 801EEB2C 001EBA6C  3B 7B 00 01 */	addi r27, r27, 1
.L_801EEB30:
/* 801EEB30 001EBA70  80 1F 00 04 */	lwz r0, 4(r31)
/* 801EEB34 001EBA74  57 64 04 3E */	clrlwi r4, r27, 0x10
/* 801EEB38 001EBA78  7C 04 00 00 */	cmpw r4, r0
/* 801EEB3C 001EBA7C  41 80 FF 78 */	blt .L_801EEAB4
/* 801EEB40 001EBA80  48 00 00 9C */	b .L_801EEBDC
.L_801EEB44:
/* 801EEB44 001EBA84  57 DC 08 3C */	slwi r28, r30, 1
/* 801EEB48 001EBA88  3B 60 00 00 */	li r27, 0
/* 801EEB4C 001EBA8C  48 00 00 80 */	b .L_801EEBCC
.L_801EEB50:
/* 801EEB50 001EBA90  7C 04 E0 00 */	cmpw r4, r28
/* 801EEB54 001EBA94  41 81 00 5C */	bgt .L_801EEBB0
/* 801EEB58 001EBA98  54 83 0F FE */	srwi r3, r4, 0x1f
/* 801EEB5C 001EBA9C  54 80 07 FE */	clrlwi r0, r4, 0x1f
/* 801EEB60 001EBAA0  7C 00 1A 78 */	xor r0, r0, r3
/* 801EEB64 001EBAA4  7C 03 00 50 */	subf r0, r3, r0
/* 801EEB68 001EBAA8  2C 00 00 01 */	cmpwi r0, 1
/* 801EEB6C 001EBAAC  41 82 00 0C */	beq .L_801EEB78
/* 801EEB70 001EBAB0  7C 04 E0 00 */	cmpw r4, r28
/* 801EEB74 001EBAB4  40 82 00 20 */	bne .L_801EEB94
.L_801EEB78:
/* 801EEB78 001EBAB8  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEB7C 001EBABC  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEB80 001EBAC0  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEB84 001EBAC4  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEB88 001EBAC8  38 80 00 01 */	li r4, 1
/* 801EEB8C 001EBACC  4B FD 67 E1 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEB90 001EBAD0  48 00 00 38 */	b .L_801EEBC8
.L_801EEB94:
/* 801EEB94 001EBAD4  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEB98 001EBAD8  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEB9C 001EBADC  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEBA0 001EBAE0  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEBA4 001EBAE4  38 80 00 00 */	li r4, 0
/* 801EEBA8 001EBAE8  4B FD 67 C5 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
/* 801EEBAC 001EBAEC  48 00 00 1C */	b .L_801EEBC8
.L_801EEBB0:
/* 801EEBB0 001EBAF0  80 9F 00 08 */	lwz r4, 8(r31)
/* 801EEBB4 001EBAF4  57 60 0B FC */	rlwinm r0, r27, 1, 0xf, 0x1e
/* 801EEBB8 001EBAF8  38 7D 02 04 */	addi r3, r29, 0x204
/* 801EEBBC 001EBAFC  7C A4 02 2E */	lhzx r5, r4, r0
/* 801EEBC0 001EBB00  38 80 00 00 */	li r4, 0
/* 801EEBC4 001EBB04  4B FD 67 A9 */	bl setCollision__Q24Game20PlatInstanceAttacherFbUs
.L_801EEBC8:
/* 801EEBC8 001EBB08  3B 7B 00 01 */	addi r27, r27, 1
.L_801EEBCC:
/* 801EEBCC 001EBB0C  80 1F 00 04 */	lwz r0, 4(r31)
/* 801EEBD0 001EBB10  57 64 04 3E */	clrlwi r4, r27, 0x10
/* 801EEBD4 001EBB14  7C 04 00 00 */	cmpw r4, r0
/* 801EEBD8 001EBB18  41 80 FF 78 */	blt .L_801EEB50
.L_801EEBDC:
/* 801EEBDC 001EBB1C  93 DD 02 18 */	stw r30, 0x218(r29)
/* 801EEBE0 001EBB20  80 1D 02 18 */	lwz r0, 0x218(r29)
/* 801EEBE4 001EBB24  2C 00 FF FF */	cmpwi r0, -1
/* 801EEBE8 001EBB28  41 82 00 6C */	beq .L_801EEC54
/* 801EEBEC 001EBB2C  7F A4 EB 78 */	mr r4, r29
/* 801EEBF0 001EBB30  38 61 00 08 */	addi r3, r1, 8
/* 801EEBF4 001EBB34  48 00 04 45 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EEBF8 001EBB38  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801EEBFC 001EBB3C  7F A4 EB 78 */	mr r4, r29
/* 801EEC00 001EBB40  C0 42 B7 D4 */	lfs f2, lbl_80519B34@sda21(r2)
/* 801EEC04 001EBB44  38 61 00 14 */	addi r3, r1, 0x14
/* 801EEC08 001EBB48  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EEC0C 001EBB4C  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EEC10 001EBB50  EF C3 00 B2 */	fmuls f30, f3, f2
/* 801EEC14 001EBB54  EF E1 00 B2 */	fmuls f31, f1, f2
/* 801EEC18 001EBB58  80 BD 02 18 */	lwz r5, 0x218(r29)
/* 801EEC1C 001EBB5C  EF A0 00 B2 */	fmuls f29, f0, f2
/* 801EEC20 001EBB60  48 00 02 2D */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 801EEC24 001EBB64  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801EEC28 001EBB68  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801EEC2C 001EBB6C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801EEC30 001EBB70  EC 42 F0 28 */	fsubs f2, f2, f30
/* 801EEC34 001EBB74  80 7D 01 FC */	lwz r3, 0x1fc(r29)
/* 801EEC38 001EBB78  EC 21 F8 28 */	fsubs f1, f1, f31
/* 801EEC3C 001EBB7C  EC 00 E8 28 */	fsubs f0, f0, f29
/* 801EEC40 001EBB80  28 03 00 00 */	cmplwi r3, 0
/* 801EEC44 001EBB84  41 82 00 10 */	beq .L_801EEC54
/* 801EEC48 001EBB88  D0 03 00 4C */	stfs f0, 0x4c(r3)
/* 801EEC4C 001EBB8C  D0 23 00 50 */	stfs f1, 0x50(r3)
/* 801EEC50 001EBB90  D0 43 00 54 */	stfs f2, 0x54(r3)
.L_801EEC54:
/* 801EEC54 001EBB94  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801EEC58 001EBB98  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801EEC5C 001EBB9C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 801EEC60 001EBBA0  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 801EEC64 001EBBA4  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 801EEC68 001EBBA8  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 801EEC6C 001EBBAC  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 801EEC70 001EBBB0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801EEC74 001EBBB4  7C 08 03 A6 */	mtlr r0
/* 801EEC78 001EBBB8  38 21 00 70 */	addi r1, r1, 0x70
/* 801EEC7C 001EBBBC  4E 80 00 20 */	blr 
.endfn setCurrStage__Q34Game10ItemBridge4ItemFi

.fn createWayPoints__Q34Game10ItemBridge4ItemFv, global
/* 801EEC80 001EBBC0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 801EEC84 001EBBC4  7C 08 02 A6 */	mflr r0
/* 801EEC88 001EBBC8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 801EEC8C 001EBBCC  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 801EEC90 001EBBD0  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 801EEC94 001EBBD4  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 801EEC98 001EBBD8  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 801EEC9C 001EBBDC  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 801EECA0 001EBBE0  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 801EECA4 001EBBE4  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801EECA8 001EBBE8  7C 7F 1B 78 */	mr r31, r3
/* 801EECAC 001EBBEC  38 61 00 20 */	addi r3, r1, 0x20
/* 801EECB0 001EBBF0  7F E4 FB 78 */	mr r4, r31
/* 801EECB4 001EBBF4  48 00 02 81 */	bl getStartPos__Q34Game10ItemBridge4ItemFv
/* 801EECB8 001EBBF8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801EECBC 001EBBFC  38 00 00 00 */	li r0, 0
/* 801EECC0 001EBC00  C3 A1 00 20 */	lfs f29, 0x20(r1)
/* 801EECC4 001EBC04  C3 E1 00 24 */	lfs f31, 0x24(r1)
/* 801EECC8 001EBC08  28 03 00 00 */	cmplwi r3, 0
/* 801EECCC 001EBC0C  C3 C1 00 28 */	lfs f30, 0x28(r1)
/* 801EECD0 001EBC10  C0 02 B7 D8 */	lfs f0, lbl_80519B38@sda21(r2)
/* 801EECD4 001EBC14  D3 A1 00 44 */	stfs f29, 0x44(r1)
/* 801EECD8 001EBC18  D3 E1 00 48 */	stfs f31, 0x48(r1)
/* 801EECDC 001EBC1C  D3 C1 00 4C */	stfs f30, 0x4c(r1)
/* 801EECE0 001EBC20  90 01 00 50 */	stw r0, 0x50(r1)
/* 801EECE4 001EBC24  98 01 00 54 */	stb r0, 0x54(r1)
/* 801EECE8 001EBC28  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801EECEC 001EBC2C  41 82 00 48 */	beq .L_801EED34
/* 801EECF0 001EBC30  80 63 00 08 */	lwz r3, 8(r3)
/* 801EECF4 001EBC34  28 03 00 00 */	cmplwi r3, 0
/* 801EECF8 001EBC38  41 82 00 3C */	beq .L_801EED34
/* 801EECFC 001EBC3C  38 81 00 44 */	addi r4, r1, 0x44
/* 801EED00 001EBC40  4B F8 42 C5 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 801EED04 001EBC44  90 7F 01 FC */	stw r3, 0x1fc(r31)
/* 801EED08 001EBC48  38 80 00 01 */	li r4, 1
/* 801EED0C 001EBC4C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EED10 001EBC50  D3 A3 00 4C */	stfs f29, 0x4c(r3)
/* 801EED14 001EBC54  D3 E3 00 50 */	stfs f31, 0x50(r3)
/* 801EED18 001EBC58  D3 C3 00 54 */	stfs f30, 0x54(r3)
/* 801EED1C 001EBC5C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EED20 001EBC60  4B F8 3B A5 */	bl setBridge__Q24Game8WayPointFb
/* 801EED24 001EBC64  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EED28 001EBC68  38 80 00 00 */	li r4, 0
/* 801EED2C 001EBC6C  4B F8 3B 49 */	bl setOpen__Q24Game8WayPointFb
/* 801EED30 001EBC70  48 00 00 0C */	b .L_801EED3C
.L_801EED34:
/* 801EED34 001EBC74  38 00 00 00 */	li r0, 0
/* 801EED38 001EBC78  90 1F 01 FC */	stw r0, 0x1fc(r31)
.L_801EED3C:
/* 801EED3C 001EBC7C  80 BF 02 1C */	lwz r5, 0x21c(r31)
/* 801EED40 001EBC80  7F E4 FB 78 */	mr r4, r31
/* 801EED44 001EBC84  38 61 00 14 */	addi r3, r1, 0x14
/* 801EED48 001EBC88  38 A5 FF FF */	addi r5, r5, -1
/* 801EED4C 001EBC8C  48 00 01 01 */	bl getStagePos__Q34Game10ItemBridge4ItemFi
/* 801EED50 001EBC90  C3 C1 00 14 */	lfs f30, 0x14(r1)
/* 801EED54 001EBC94  7F E4 FB 78 */	mr r4, r31
/* 801EED58 001EBC98  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 801EED5C 001EBC9C  38 61 00 08 */	addi r3, r1, 8
/* 801EED60 001EBCA0  C3 A1 00 1C */	lfs f29, 0x1c(r1)
/* 801EED64 001EBCA4  48 00 02 D5 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EED68 001EBCA8  C0 41 00 08 */	lfs f2, 8(r1)
/* 801EED6C 001EBCAC  38 00 00 00 */	li r0, 0
/* 801EED70 001EBCB0  C0 82 B7 B8 */	lfs f4, lbl_80519B18@sda21(r2)
/* 801EED74 001EBCB4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EED78 001EBCB8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801EED7C 001EBCBC  EC 62 01 32 */	fmuls f3, f2, f4
/* 801EED80 001EBCC0  EC 41 01 32 */	fmuls f2, f1, f4
/* 801EED84 001EBCC4  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801EED88 001EBCC8  EC 20 01 32 */	fmuls f1, f0, f4
/* 801EED8C 001EBCCC  C0 02 B7 D8 */	lfs f0, lbl_80519B38@sda21(r2)
/* 801EED90 001EBCD0  EF DE 18 2A */	fadds f30, f30, f3
/* 801EED94 001EBCD4  EF FF 10 2A */	fadds f31, f31, f2
/* 801EED98 001EBCD8  EF BD 08 2A */	fadds f29, f29, f1
/* 801EED9C 001EBCDC  28 03 00 00 */	cmplwi r3, 0
/* 801EEDA0 001EBCE0  D3 C1 00 2C */	stfs f30, 0x2c(r1)
/* 801EEDA4 001EBCE4  D3 E1 00 30 */	stfs f31, 0x30(r1)
/* 801EEDA8 001EBCE8  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 801EEDAC 001EBCEC  90 01 00 38 */	stw r0, 0x38(r1)
/* 801EEDB0 001EBCF0  98 01 00 3C */	stb r0, 0x3c(r1)
/* 801EEDB4 001EBCF4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 801EEDB8 001EBCF8  41 82 00 60 */	beq .L_801EEE18
/* 801EEDBC 001EBCFC  80 63 00 08 */	lwz r3, 8(r3)
/* 801EEDC0 001EBD00  28 03 00 00 */	cmplwi r3, 0
/* 801EEDC4 001EBD04  41 82 00 54 */	beq .L_801EEE18
/* 801EEDC8 001EBD08  38 81 00 2C */	addi r4, r1, 0x2c
/* 801EEDCC 001EBD0C  4B F8 41 F9 */	bl getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
/* 801EEDD0 001EBD10  90 7F 02 00 */	stw r3, 0x200(r31)
/* 801EEDD4 001EBD14  38 80 00 01 */	li r4, 1
/* 801EEDD8 001EBD18  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EEDDC 001EBD1C  D3 C3 00 4C */	stfs f30, 0x4c(r3)
/* 801EEDE0 001EBD20  D3 E3 00 50 */	stfs f31, 0x50(r3)
/* 801EEDE4 001EBD24  D3 A3 00 54 */	stfs f29, 0x54(r3)
/* 801EEDE8 001EBD28  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EEDEC 001EBD2C  4B F8 3A D9 */	bl setBridge__Q24Game8WayPointFb
/* 801EEDF0 001EBD30  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EEDF4 001EBD34  38 80 00 00 */	li r4, 0
/* 801EEDF8 001EBD38  4B F8 3A 7D */	bl setOpen__Q24Game8WayPointFb
/* 801EEDFC 001EBD3C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EEE00 001EBD40  38 80 00 00 */	li r4, 0
/* 801EEE04 001EBD44  4B F8 3A 99 */	bl setWater__Q24Game8WayPointFb
/* 801EEE08 001EBD48  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EEE0C 001EBD4C  38 80 00 00 */	li r4, 0
/* 801EEE10 001EBD50  4B F8 3A 8D */	bl setWater__Q24Game8WayPointFb
/* 801EEE14 001EBD54  48 00 00 0C */	b .L_801EEE20
.L_801EEE18:
/* 801EEE18 001EBD58  38 00 00 00 */	li r0, 0
/* 801EEE1C 001EBD5C  90 1F 02 00 */	stw r0, 0x200(r31)
.L_801EEE20:
/* 801EEE20 001EBD60  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 801EEE24 001EBD64  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 801EEE28 001EBD68  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 801EEE2C 001EBD6C  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 801EEE30 001EBD70  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 801EEE34 001EBD74  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 801EEE38 001EBD78  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 801EEE3C 001EBD7C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801EEE40 001EBD80  7C 08 03 A6 */	mtlr r0
/* 801EEE44 001EBD84  38 21 00 A0 */	addi r1, r1, 0xa0
/* 801EEE48 001EBD88  4E 80 00 20 */	blr 
.endfn createWayPoints__Q34Game10ItemBridge4ItemFv

.fn getStagePos__Q34Game10ItemBridge4ItemFi, global
/* 801EEE4C 001EBD8C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801EEE50 001EBD90  7C 08 02 A6 */	mflr r0
/* 801EEE54 001EBD94  90 01 00 44 */	stw r0, 0x44(r1)
/* 801EEE58 001EBD98  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801EEE5C 001EBD9C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801EEE60 001EBDA0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801EEE64 001EBDA4  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801EEE68 001EBDA8  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801EEE6C 001EBDAC  7C 9E 23 78 */	mr r30, r4
/* 801EEE70 001EBDB0  7C BF 2B 78 */	mr r31, r5
/* 801EEE74 001EBDB4  7C 7D 1B 78 */	mr r29, r3
/* 801EEE78 001EBDB8  7F C3 F3 78 */	mr r3, r30
/* 801EEE7C 001EBDBC  7F E4 FB 78 */	mr r4, r31
/* 801EEE80 001EBDC0  48 00 01 55 */	bl getStageZ__Q34Game10ItemBridge4ItemFi
/* 801EEE84 001EBDC4  FF E0 08 90 */	fmr f31, f1
/* 801EEE88 001EBDC8  7F C4 F3 78 */	mr r4, r30
/* 801EEE8C 001EBDCC  38 61 00 08 */	addi r3, r1, 8
/* 801EEE90 001EBDD0  48 00 01 A9 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EEE94 001EBDD4  C0 41 00 08 */	lfs f2, 8(r1)
/* 801EEE98 001EBDD8  2C 1F 00 01 */	cmpwi r31, 1
/* 801EEE9C 001EBDDC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EEEA0 001EBDE0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801EEEA4 001EBDE4  EC 82 07 F2 */	fmuls f4, f2, f31
/* 801EEEA8 001EBDE8  C0 BE 01 9C */	lfs f5, 0x19c(r30)
/* 801EEEAC 001EBDEC  EC 41 07 F2 */	fmuls f2, f1, f31
/* 801EEEB0 001EBDF0  C0 7E 01 A0 */	lfs f3, 0x1a0(r30)
/* 801EEEB4 001EBDF4  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801EEEB8 001EBDF8  C0 3E 01 A4 */	lfs f1, 0x1a4(r30)
/* 801EEEBC 001EBDFC  EC 85 20 2A */	fadds f4, f5, f4
/* 801EEEC0 001EBE00  EC 63 10 2A */	fadds f3, f3, f2
/* 801EEEC4 001EBE04  EC A1 00 2A */	fadds f5, f1, f0
/* 801EEEC8 001EBE08  41 80 00 3C */	blt .L_801EEF04
/* 801EEECC 001EBE0C  38 1F FF FF */	addi r0, r31, -1
/* 801EEED0 001EBE10  3C 80 43 30 */	lis r4, 0x4330019C@ha
/* 801EEED4 001EBE14  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EEED8 001EBE18  A0 1E 02 14 */	lhz r0, 0x214(r30)
/* 801EEEDC 001EBE1C  90 61 00 1C */	stw r3, 0x1c(r1)
/* 801EEEE0 001EBE20  3C 60 80 4C */	lis r3, bridgeGrad@ha
/* 801EEEE4 001EBE24  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EEEE8 001EBE28  54 00 10 3A */	slwi r0, r0, 2
/* 801EEEEC 001EBE2C  90 81 00 18 */	stw r4, 0x18(r1)
/* 801EEEF0 001EBE30  38 63 B3 80 */	addi r3, r3, bridgeGrad@l
/* 801EEEF4 001EBE34  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EEEF8 001EBE38  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 801EEEFC 001EBE3C  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EEF00 001EBE40  EC 61 18 3A */	fmadds f3, f1, f0, f3
.L_801EEF04:
/* 801EEF04 001EBE44  D0 9D 00 00 */	stfs f4, 0(r29)
/* 801EEF08 001EBE48  D0 7D 00 04 */	stfs f3, 4(r29)
/* 801EEF0C 001EBE4C  D0 BD 00 08 */	stfs f5, 8(r29)
/* 801EEF10 001EBE50  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801EEF14 001EBE54  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801EEF18 001EBE58  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801EEF1C 001EBE5C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801EEF20 001EBE60  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801EEF24 001EBE64  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801EEF28 001EBE68  7C 08 03 A6 */	mtlr r0
/* 801EEF2C 001EBE6C  38 21 00 40 */	addi r1, r1, 0x40
/* 801EEF30 001EBE70  4E 80 00 20 */	blr 
.endfn getStagePos__Q34Game10ItemBridge4ItemFi

.fn getStartPos__Q34Game10ItemBridge4ItemFv, global
/* 801EEF34 001EBE74  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801EEF38 001EBE78  7C 08 02 A6 */	mflr r0
/* 801EEF3C 001EBE7C  90 01 00 54 */	stw r0, 0x54(r1)
/* 801EEF40 001EBE80  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 801EEF44 001EBE84  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 801EEF48 001EBE88  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 801EEF4C 001EBE8C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 801EEF50 001EBE90  DB A1 00 20 */	stfd f29, 0x20(r1)
/* 801EEF54 001EBE94  F3 A1 00 28 */	psq_st f29, 40(r1), 0, qr0
/* 801EEF58 001EBE98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EEF5C 001EBE9C  C3 E4 01 9C */	lfs f31, 0x4330019C@l(r4)
/* 801EEF60 001EBEA0  7C 7F 1B 78 */	mr r31, r3
/* 801EEF64 001EBEA4  C3 C4 01 A0 */	lfs f30, 0x1a0(r4)
/* 801EEF68 001EBEA8  38 61 00 08 */	addi r3, r1, 8
/* 801EEF6C 001EBEAC  C3 A4 01 A4 */	lfs f29, 0x1a4(r4)
/* 801EEF70 001EBEB0  48 00 00 C9 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EEF74 001EBEB4  C0 42 B7 E8 */	lfs f2, lbl_80519B48@sda21(r2)
/* 801EEF78 001EBEB8  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EEF7C 001EBEBC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EEF80 001EBEC0  EC 00 00 B2 */	fmuls f0, f0, f2
/* 801EEF84 001EBEC4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 801EEF88 001EBEC8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801EEF8C 001EBECC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 801EEF90 001EBED0  EC 1F 00 28 */	fsubs f0, f31, f0
/* 801EEF94 001EBED4  EC 3E 08 28 */	fsubs f1, f30, f1
/* 801EEF98 001EBED8  EC 5D 10 28 */	fsubs f2, f29, f2
/* 801EEF9C 001EBEDC  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801EEFA0 001EBEE0  D0 3F 00 04 */	stfs f1, 4(r31)
/* 801EEFA4 001EBEE4  D0 5F 00 08 */	stfs f2, 8(r31)
/* 801EEFA8 001EBEE8  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 801EEFAC 001EBEEC  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 801EEFB0 001EBEF0  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 801EEFB4 001EBEF4  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 801EEFB8 001EBEF8  E3 A1 00 28 */	psq_l f29, 40(r1), 0, qr0
/* 801EEFBC 001EBEFC  CB A1 00 20 */	lfd f29, 0x20(r1)
/* 801EEFC0 001EBF00  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801EEFC4 001EBF04  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EEFC8 001EBF08  7C 08 03 A6 */	mtlr r0
/* 801EEFCC 001EBF0C  38 21 00 50 */	addi r1, r1, 0x50
/* 801EEFD0 001EBF10  4E 80 00 20 */	blr 
.endfn getStartPos__Q34Game10ItemBridge4ItemFv

.fn getStageZ__Q34Game10ItemBridge4ItemFi, global
/* 801EEFD4 001EBF14  2C 04 00 00 */	cmpwi r4, 0
/* 801EEFD8 001EBF18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EEFDC 001EBF1C  C0 22 B7 EC */	lfs f1, lbl_80519B4C@sda21(r2)
/* 801EEFE0 001EBF20  40 81 00 40 */	ble .L_801EF020
/* 801EEFE4 001EBF24  38 04 FF FF */	addi r0, r4, -1
/* 801EEFE8 001EBF28  3C 80 43 30 */	lis r4, 0x433001F4@ha
/* 801EEFEC 001EBF2C  6C 05 80 00 */	xoris r5, r0, 0x8000
/* 801EEFF0 001EBF30  A0 03 02 14 */	lhz r0, 0x214(r3)
/* 801EEFF4 001EBF34  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801EEFF8 001EBF38  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EEFFC 001EBF3C  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EF000 001EBF40  54 00 10 3A */	slwi r0, r0, 2
/* 801EF004 001EBF44  90 81 00 08 */	stw r4, 8(r1)
/* 801EF008 001EBF48  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EF00C 001EBF4C  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EF010 001EBF50  C8 21 00 08 */	lfd f1, 8(r1)
/* 801EF014 001EBF54  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF018 001EBF58  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EF01C 001EBF5C  EC 23 00 7A */	fmadds f1, f3, f1, f0
.L_801EF020:
/* 801EF020 001EBF60  C0 02 B7 D8 */	lfs f0, lbl_80519B38@sda21(r2)
/* 801EF024 001EBF64  EC 21 00 28 */	fsubs f1, f1, f0
/* 801EF028 001EBF68  38 21 00 10 */	addi r1, r1, 0x10
/* 801EF02C 001EBF6C  4E 80 00 20 */	blr 
.endfn getStageZ__Q34Game10ItemBridge4ItemFi

.fn getStageWidth__Q34Game10ItemBridge4ItemFv, global
/* 801EF030 001EBF70  C0 22 B7 F0 */	lfs f1, lbl_80519B50@sda21(r2)
/* 801EF034 001EBF74  4E 80 00 20 */	blr 
.endfn getStageWidth__Q34Game10ItemBridge4ItemFv

.fn getBridgeZVec__Q34Game10ItemBridge4ItemFv, global
/* 801EF038 001EBF78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EF03C 001EBF7C  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF040 001EBF80  C0 64 01 F4 */	lfs f3, 0x433001F4@l(r4)
/* 801EF044 001EBF84  FC 20 18 90 */	fmr f1, f3
/* 801EF048 001EBF88  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF04C 001EBF8C  40 80 00 08 */	bge .L_801EF054
/* 801EF050 001EBF90  FC 20 18 50 */	fneg f1, f3
.L_801EF054:
/* 801EF054 001EBF94  C0 42 B7 F4 */	lfs f2, lbl_80519B54@sda21(r2)
/* 801EF058 001EBF98  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 801EF05C 001EBF9C  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF060 001EBFA0  38 A4 71 A0 */	addi r5, r4, sincosTable___5JMath@l
/* 801EF064 001EBFA4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801EF068 001EBFA8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF06C 001EBFAC  FC 00 08 1E */	fctiwz f0, f1
/* 801EF070 001EBFB0  D8 01 00 08 */	stfd f0, 8(r1)
/* 801EF074 001EBFB4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801EF078 001EBFB8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF07C 001EBFBC  7C 85 02 14 */	add r4, r5, r0
/* 801EF080 001EBFC0  C0 24 00 04 */	lfs f1, 4(r4)
/* 801EF084 001EBFC4  40 80 00 28 */	bge .L_801EF0AC
/* 801EF088 001EBFC8  C0 02 B7 F8 */	lfs f0, lbl_80519B58@sda21(r2)
/* 801EF08C 001EBFCC  EC 03 00 32 */	fmuls f0, f3, f0
/* 801EF090 001EBFD0  FC 00 00 1E */	fctiwz f0, f0
/* 801EF094 001EBFD4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801EF098 001EBFD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EF09C 001EBFDC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF0A0 001EBFE0  7C 05 04 2E */	lfsx f0, r5, r0
/* 801EF0A4 001EBFE4  FC 00 00 50 */	fneg f0, f0
/* 801EF0A8 001EBFE8  48 00 00 1C */	b .L_801EF0C4
.L_801EF0AC:
/* 801EF0AC 001EBFEC  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801EF0B0 001EBFF0  FC 00 00 1E */	fctiwz f0, f0
/* 801EF0B4 001EBFF4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801EF0B8 001EBFF8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801EF0BC 001EBFFC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF0C0 001EC000  7C 05 04 2E */	lfsx f0, r5, r0
.L_801EF0C4:
/* 801EF0C4 001EC004  D0 03 00 00 */	stfs f0, 0(r3)
/* 801EF0C8 001EC008  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF0CC 001EC00C  D0 03 00 04 */	stfs f0, 4(r3)
/* 801EF0D0 001EC010  D0 23 00 08 */	stfs f1, 8(r3)
/* 801EF0D4 001EC014  38 21 00 20 */	addi r1, r1, 0x20
/* 801EF0D8 001EC018  4E 80 00 20 */	blr 
.endfn getBridgeZVec__Q34Game10ItemBridge4ItemFv

.fn getBridgeXVec__Q34Game10ItemBridge4ItemFv, global
/* 801EF0DC 001EC01C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EF0E0 001EC020  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF0E4 001EC024  C0 64 01 F4 */	lfs f3, 0x1f4(r4)
/* 801EF0E8 001EC028  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF0EC 001EC02C  40 80 00 30 */	bge .L_801EF11C
/* 801EF0F0 001EC030  C0 02 B7 F8 */	lfs f0, lbl_80519B58@sda21(r2)
/* 801EF0F4 001EC034  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 801EF0F8 001EC038  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 801EF0FC 001EC03C  EC 03 00 32 */	fmuls f0, f3, f0
/* 801EF100 001EC040  FC 00 00 1E */	fctiwz f0, f0
/* 801EF104 001EC044  D8 01 00 08 */	stfd f0, 8(r1)
/* 801EF108 001EC048  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801EF10C 001EC04C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF110 001EC050  7C 04 04 2E */	lfsx f0, r4, r0
/* 801EF114 001EC054  FC 20 00 50 */	fneg f1, f0
/* 801EF118 001EC058  48 00 00 28 */	b .L_801EF140
.L_801EF11C:
/* 801EF11C 001EC05C  C0 02 B7 F4 */	lfs f0, lbl_80519B54@sda21(r2)
/* 801EF120 001EC060  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 801EF124 001EC064  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 801EF128 001EC068  EC 03 00 32 */	fmuls f0, f3, f0
/* 801EF12C 001EC06C  FC 00 00 1E */	fctiwz f0, f0
/* 801EF130 001EC070  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801EF134 001EC074  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EF138 001EC078  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF13C 001EC07C  7C 24 04 2E */	lfsx f1, r4, r0
.L_801EF140:
/* 801EF140 001EC080  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF144 001EC084  FC 40 08 50 */	fneg f2, f1
/* 801EF148 001EC088  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF14C 001EC08C  40 80 00 08 */	bge .L_801EF154
/* 801EF150 001EC090  FC 60 18 50 */	fneg f3, f3
.L_801EF154:
/* 801EF154 001EC094  C0 22 B7 F4 */	lfs f1, lbl_80519B54@sda21(r2)
/* 801EF158 001EC098  3C 80 80 50 */	lis r4, sincosTable___5JMath@ha
/* 801EF15C 001EC09C  38 84 71 A0 */	addi r4, r4, sincosTable___5JMath@l
/* 801EF160 001EC0A0  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF164 001EC0A4  EC 23 00 72 */	fmuls f1, f3, f1
/* 801EF168 001EC0A8  FC 20 08 1E */	fctiwz f1, f1
/* 801EF16C 001EC0AC  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 801EF170 001EC0B0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801EF174 001EC0B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF178 001EC0B8  7C 84 02 14 */	add r4, r4, r0
/* 801EF17C 001EC0BC  C0 24 00 04 */	lfs f1, 4(r4)
/* 801EF180 001EC0C0  D0 23 00 00 */	stfs f1, 0(r3)
/* 801EF184 001EC0C4  D0 03 00 04 */	stfs f0, 4(r3)
/* 801EF188 001EC0C8  D0 43 00 08 */	stfs f2, 8(r3)
/* 801EF18C 001EC0CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801EF190 001EC0D0  4E 80 00 20 */	blr 
.endfn getBridgeXVec__Q34Game10ItemBridge4ItemFv

.fn "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf", global
/* 801EF194 001EC0D4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801EF198 001EC0D8  7C 08 02 A6 */	mflr r0
/* 801EF19C 001EC0DC  90 01 00 84 */	stw r0, 0x84(r1)
/* 801EF1A0 001EC0E0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801EF1A4 001EC0E4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801EF1A8 001EC0E8  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801EF1AC 001EC0EC  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801EF1B0 001EC0F0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801EF1B4 001EC0F4  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801EF1B8 001EC0F8  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801EF1BC 001EC0FC  93 81 00 50 */	stw r28, 0x50(r1)
/* 801EF1C0 001EC100  7C 7C 1B 78 */	mr r28, r3
/* 801EF1C4 001EC104  7C 9D 23 78 */	mr r29, r4
/* 801EF1C8 001EC108  C3 E3 01 9C */	lfs f31, 0x19c(r3)
/* 801EF1CC 001EC10C  7C BE 2B 78 */	mr r30, r5
/* 801EF1D0 001EC110  C3 C3 01 A4 */	lfs f30, 0x1a4(r3)
/* 801EF1D4 001EC114  7C DF 33 78 */	mr r31, r6
/* 801EF1D8 001EC118  7F 84 E3 78 */	mr r4, r28
/* 801EF1DC 001EC11C  38 61 00 08 */	addi r3, r1, 8
/* 801EF1E0 001EC120  4B FF FE 59 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EF1E4 001EC124  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EF1E8 001EC128  C0 42 B7 E8 */	lfs f2, lbl_80519B48@sda21(r2)
/* 801EF1EC 001EC12C  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801EF1F0 001EC130  EC 80 00 B2 */	fmuls f4, f0, f2
/* 801EF1F4 001EC134  C0 1C 01 F4 */	lfs f0, 0x1f4(r28)
/* 801EF1F8 001EC138  EC 41 00 B2 */	fmuls f2, f1, f2
/* 801EF1FC 001EC13C  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EF200 001EC140  C0 7D 00 08 */	lfs f3, 8(r29)
/* 801EF204 001EC144  EC 9F 20 28 */	fsubs f4, f31, f4
/* 801EF208 001EC148  EC BE 10 28 */	fsubs f5, f30, f2
/* 801EF20C 001EC14C  C0 5D 00 00 */	lfs f2, 0(r29)
/* 801EF210 001EC150  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801EF214 001EC154  EC 82 20 28 */	fsubs f4, f2, f4
/* 801EF218 001EC158  EC A3 28 28 */	fsubs f5, f3, f5
/* 801EF21C 001EC15C  40 80 00 30 */	bge .L_801EF24C
/* 801EF220 001EC160  C0 22 B7 F8 */	lfs f1, lbl_80519B58@sda21(r2)
/* 801EF224 001EC164  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF228 001EC168  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF22C 001EC16C  EC 20 00 72 */	fmuls f1, f0, f1
/* 801EF230 001EC170  FC 20 08 1E */	fctiwz f1, f1
/* 801EF234 001EC174  D8 21 00 18 */	stfd f1, 0x18(r1)
/* 801EF238 001EC178  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801EF23C 001EC17C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF240 001EC180  7C 23 04 2E */	lfsx f1, r3, r0
/* 801EF244 001EC184  FC 40 08 50 */	fneg f2, f1
/* 801EF248 001EC188  48 00 00 28 */	b .L_801EF270
.L_801EF24C:
/* 801EF24C 001EC18C  C0 22 B7 F4 */	lfs f1, lbl_80519B54@sda21(r2)
/* 801EF250 001EC190  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF254 001EC194  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF258 001EC198  EC 20 00 72 */	fmuls f1, f0, f1
/* 801EF25C 001EC19C  FC 20 08 1E */	fctiwz f1, f1
/* 801EF260 001EC1A0  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 801EF264 001EC1A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EF268 001EC1A8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF26C 001EC1AC  7C 43 04 2E */	lfsx f2, r3, r0
.L_801EF270:
/* 801EF270 001EC1B0  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EF274 001EC1B4  FC 60 00 90 */	fmr f3, f0
/* 801EF278 001EC1B8  FC C0 10 50 */	fneg f6, f2
/* 801EF27C 001EC1BC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801EF280 001EC1C0  40 80 00 08 */	bge .L_801EF288
/* 801EF284 001EC1C4  FC 60 00 50 */	fneg f3, f0
.L_801EF288:
/* 801EF288 001EC1C8  C0 42 B7 F4 */	lfs f2, lbl_80519B54@sda21(r2)
/* 801EF28C 001EC1CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF290 001EC1D0  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EF294 001EC1D4  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF298 001EC1D8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 801EF29C 001EC1DC  38 63 00 04 */	addi r3, r3, 4
/* 801EF2A0 001EC1E0  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801EF2A4 001EC1E4  FD 00 00 90 */	fmr f8, f0
/* 801EF2A8 001EC1E8  FC 20 10 1E */	fctiwz f1, f2
/* 801EF2AC 001EC1EC  D8 21 00 28 */	stfd f1, 0x28(r1)
/* 801EF2B0 001EC1F0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801EF2B4 001EC1F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF2B8 001EC1F8  7C E3 04 2E */	lfsx f7, r3, r0
/* 801EF2BC 001EC1FC  40 80 00 08 */	bge .L_801EF2C4
/* 801EF2C0 001EC200  FD 00 00 50 */	fneg f8, f0
.L_801EF2C4:
/* 801EF2C4 001EC204  C0 62 B7 F4 */	lfs f3, lbl_80519B54@sda21(r2)
/* 801EF2C8 001EC208  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EF2CC 001EC20C  EC 48 00 F2 */	fmuls f2, f8, f3
/* 801EF2D0 001EC210  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 801EF2D4 001EC214  FC 20 10 1E */	fctiwz f1, f2
/* 801EF2D8 001EC218  D8 21 00 30 */	stfd f1, 0x30(r1)
/* 801EF2DC 001EC21C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801EF2E0 001EC220  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF2E4 001EC224  7C 43 04 2E */	lfsx f2, r3, r0
/* 801EF2E8 001EC228  40 80 00 30 */	bge .L_801EF318
/* 801EF2EC 001EC22C  C0 22 B7 F8 */	lfs f1, lbl_80519B58@sda21(r2)
/* 801EF2F0 001EC230  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF2F4 001EC234  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF2F8 001EC238  EC 00 00 72 */	fmuls f0, f0, f1
/* 801EF2FC 001EC23C  FC 00 00 1E */	fctiwz f0, f0
/* 801EF300 001EC240  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 801EF304 001EC244  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 801EF308 001EC248  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF30C 001EC24C  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF310 001EC250  FC 60 00 50 */	fneg f3, f0
/* 801EF314 001EC254  48 00 00 24 */	b .L_801EF338
.L_801EF318:
/* 801EF318 001EC258  EC 00 00 F2 */	fmuls f0, f0, f3
/* 801EF31C 001EC25C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF320 001EC260  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF324 001EC264  FC 00 00 1E */	fctiwz f0, f0
/* 801EF328 001EC268  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 801EF32C 001EC26C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801EF330 001EC270  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF334 001EC274  7C 63 04 2E */	lfsx f3, r3, r0
.L_801EF338:
/* 801EF338 001EC278  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF33C 001EC27C  EC 24 01 FA */	fmadds f1, f4, f7, f0
/* 801EF340 001EC280  EC 04 00 FA */	fmadds f0, f4, f3, f0
/* 801EF344 001EC284  EC 25 09 BA */	fmadds f1, f5, f6, f1
/* 801EF348 001EC288  EC 05 00 BA */	fmadds f0, f5, f2, f0
/* 801EF34C 001EC28C  D0 3E 00 00 */	stfs f1, 0(r30)
/* 801EF350 001EC290  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801EF354 001EC294  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801EF358 001EC298  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801EF35C 001EC29C  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801EF360 001EC2A0  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801EF364 001EC2A4  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801EF368 001EC2A8  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801EF36C 001EC2AC  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 801EF370 001EC2B0  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801EF374 001EC2B4  83 81 00 50 */	lwz r28, 0x50(r1)
/* 801EF378 001EC2B8  7C 08 03 A6 */	mtlr r0
/* 801EF37C 001EC2BC  38 21 00 80 */	addi r1, r1, 0x80
/* 801EF380 001EC2C0  4E 80 00 20 */	blr 
.endfn "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"

.fn "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>", global
/* 801EF384 001EC2C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EF388 001EC2C8  7C 08 02 A6 */	mflr r0
/* 801EF38C 001EC2CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EF390 001EC2D0  38 A1 00 0C */	addi r5, r1, 0xc
/* 801EF394 001EC2D4  38 C1 00 08 */	addi r6, r1, 8
/* 801EF398 001EC2D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EF39C 001EC2DC  7C 7F 1B 78 */	mr r31, r3
/* 801EF3A0 001EC2E0  4B FF FD F5 */	bl "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
/* 801EF3A4 001EC2E4  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801EF3A8 001EC2E8  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EF3AC 001EC2EC  7C 03 00 00 */	cmpw r3, r0
/* 801EF3B0 001EC2F0  40 82 00 0C */	bne .L_801EF3BC
/* 801EF3B4 001EC2F4  38 60 00 00 */	li r3, 0
/* 801EF3B8 001EC2F8  48 00 00 F0 */	b .L_801EF4A8
.L_801EF3BC:
/* 801EF3BC 001EC2FC  2C 03 00 00 */	cmpwi r3, 0
/* 801EF3C0 001EC300  C0 62 B7 EC */	lfs f3, lbl_80519B4C@sda21(r2)
/* 801EF3C4 001EC304  40 81 00 40 */	ble .L_801EF404
/* 801EF3C8 001EC308  38 03 FF FF */	addi r0, r3, -1
/* 801EF3CC 001EC30C  3C 80 43 30 */	lis r4, 0x4330
/* 801EF3D0 001EC310  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EF3D4 001EC314  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EF3D8 001EC318  90 61 00 14 */	stw r3, 0x14(r1)
/* 801EF3DC 001EC31C  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EF3E0 001EC320  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EF3E4 001EC324  54 00 10 3A */	slwi r0, r0, 2
/* 801EF3E8 001EC328  90 81 00 10 */	stw r4, 0x10(r1)
/* 801EF3EC 001EC32C  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EF3F0 001EC330  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EF3F4 001EC334  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EF3F8 001EC338  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF3FC 001EC33C  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EF400 001EC340  EC 63 00 7A */	fmadds f3, f3, f1, f0
.L_801EF404:
/* 801EF404 001EC344  C0 42 B7 D8 */	lfs f2, lbl_80519B38@sda21(r2)
/* 801EF408 001EC348  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EF40C 001EC34C  EC 63 10 28 */	fsubs f3, f3, f2
/* 801EF410 001EC350  EC 20 10 28 */	fsubs f1, f0, f2
/* 801EF414 001EC354  EC 02 18 2A */	fadds f0, f2, f3
/* 801EF418 001EC358  D0 21 00 08 */	stfs f1, 8(r1)
/* 801EF41C 001EC35C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF420 001EC360  40 81 00 0C */	ble .L_801EF42C
/* 801EF424 001EC364  38 60 00 00 */	li r3, 0
/* 801EF428 001EC368  48 00 00 80 */	b .L_801EF4A8
.L_801EF42C:
/* 801EF42C 001EC36C  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF430 001EC370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF434 001EC374  4C 41 13 82 */	cror 2, 1, 2
/* 801EF438 001EC378  40 82 00 34 */	bne .L_801EF46C
/* 801EF43C 001EC37C  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 801EF440 001EC380  4C 40 13 82 */	cror 2, 0, 2
/* 801EF444 001EC384  40 82 00 28 */	bne .L_801EF46C
/* 801EF448 001EC388  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EF44C 001EC38C  C0 02 B7 FC */	lfs f0, lbl_80519B5C@sda21(r2)
/* 801EF450 001EC390  FC 20 0A 10 */	fabs f1, f1
/* 801EF454 001EC394  FC 20 08 18 */	frsp f1, f1
/* 801EF458 001EC398  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF45C 001EC39C  4C 41 13 82 */	cror 2, 1, 2
/* 801EF460 001EC3A0  40 82 00 20 */	bne .L_801EF480
/* 801EF464 001EC3A4  38 60 00 00 */	li r3, 0
/* 801EF468 001EC3A8  48 00 00 40 */	b .L_801EF4A8
.L_801EF46C:
/* 801EF46C 001EC3AC  C0 02 B8 00 */	lfs f0, lbl_80519B60@sda21(r2)
/* 801EF470 001EC3B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF474 001EC3B4  40 80 00 0C */	bge .L_801EF480
/* 801EF478 001EC3B8  38 60 00 00 */	li r3, 0
/* 801EF47C 001EC3BC  48 00 00 2C */	b .L_801EF4A8
.L_801EF480:
/* 801EF480 001EC3C0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EF484 001EC3C4  C0 02 B8 04 */	lfs f0, lbl_80519B64@sda21(r2)
/* 801EF488 001EC3C8  FC 20 0A 10 */	fabs f1, f1
/* 801EF48C 001EC3CC  FC 20 08 18 */	frsp f1, f1
/* 801EF490 001EC3D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF494 001EC3D4  4C 41 13 82 */	cror 2, 1, 2
/* 801EF498 001EC3D8  40 82 00 0C */	bne .L_801EF4A4
/* 801EF49C 001EC3DC  38 60 00 00 */	li r3, 0
/* 801EF4A0 001EC3E0  48 00 00 08 */	b .L_801EF4A8
.L_801EF4A4:
/* 801EF4A4 001EC3E4  38 60 00 01 */	li r3, 1
.L_801EF4A8:
/* 801EF4A8 001EC3E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EF4AC 001EC3EC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EF4B0 001EC3F0  7C 08 03 A6 */	mtlr r0
/* 801EF4B4 001EC3F4  38 21 00 20 */	addi r1, r1, 0x20
/* 801EF4B8 001EC3F8  4E 80 00 20 */	blr 
.endfn "workable__Q34Game10ItemBridge4ItemFR10Vector3<f>"

.fn "getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3<f>", global
/* 801EF4BC 001EC3FC  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801EF4C0 001EC400  7C 08 02 A6 */	mflr r0
/* 801EF4C4 001EC404  90 01 00 84 */	stw r0, 0x84(r1)
/* 801EF4C8 001EC408  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801EF4CC 001EC40C  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801EF4D0 001EC410  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801EF4D4 001EC414  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801EF4D8 001EC418  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 801EF4DC 001EC41C  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 801EF4E0 001EC420  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801EF4E4 001EC424  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801EF4E8 001EC428  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801EF4EC 001EC42C  7C 7D 1B 78 */	mr r29, r3
/* 801EF4F0 001EC430  7C 9E 23 78 */	mr r30, r4
/* 801EF4F4 001EC434  80 63 02 18 */	lwz r3, 0x218(r3)
/* 801EF4F8 001EC438  7C BF 2B 78 */	mr r31, r5
/* 801EF4FC 001EC43C  80 1D 02 1C */	lwz r0, 0x21c(r29)
/* 801EF500 001EC440  7C 03 00 00 */	cmpw r3, r0
/* 801EF504 001EC444  40 82 00 0C */	bne .L_801EF510
/* 801EF508 001EC448  38 60 00 00 */	li r3, 0
/* 801EF50C 001EC44C  48 00 03 AC */	b .L_801EF8B8
.L_801EF510:
/* 801EF510 001EC450  C3 FD 01 9C */	lfs f31, 0x19c(r29)
/* 801EF514 001EC454  7F A4 EB 78 */	mr r4, r29
/* 801EF518 001EC458  C3 DD 01 A0 */	lfs f30, 0x1a0(r29)
/* 801EF51C 001EC45C  38 61 00 10 */	addi r3, r1, 0x10
/* 801EF520 001EC460  C3 BD 01 A4 */	lfs f29, 0x1a4(r29)
/* 801EF524 001EC464  4B FF FB 15 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EF528 001EC468  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EF52C 001EC46C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801EF530 001EC470  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801EF534 001EC474  EC 20 00 F2 */	fmuls f1, f0, f3
/* 801EF538 001EC478  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 801EF53C 001EC47C  EC A2 00 F2 */	fmuls f5, f2, f3
/* 801EF540 001EC480  C0 5E 00 04 */	lfs f2, 4(r30)
/* 801EF544 001EC484  EC 80 00 F2 */	fmuls f4, f0, f3
/* 801EF548 001EC488  C0 7E 00 08 */	lfs f3, 8(r30)
/* 801EF54C 001EC48C  EC DE 08 28 */	fsubs f6, f30, f1
/* 801EF550 001EC490  C0 3E 00 00 */	lfs f1, 0(r30)
/* 801EF554 001EC494  EC FD 20 28 */	fsubs f7, f29, f4
/* 801EF558 001EC498  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF55C 001EC49C  EC BF 28 28 */	fsubs f5, f31, f5
/* 801EF560 001EC4A0  EC 86 10 28 */	fsubs f4, f6, f2
/* 801EF564 001EC4A4  EC 67 18 28 */	fsubs f3, f7, f3
/* 801EF568 001EC4A8  EC 45 08 28 */	fsubs f2, f5, f1
/* 801EF56C 001EC4AC  EC 24 01 32 */	fmuls f1, f4, f4
/* 801EF570 001EC4B0  EC A3 00 F2 */	fmuls f5, f3, f3
/* 801EF574 001EC4B4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801EF578 001EC4B8  EC 25 08 2A */	fadds f1, f5, f1
/* 801EF57C 001EC4BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF580 001EC4C0  40 81 00 14 */	ble .L_801EF594
/* 801EF584 001EC4C4  40 81 00 14 */	ble .L_801EF598
/* 801EF588 001EC4C8  FC 00 08 34 */	frsqrte f0, f1
/* 801EF58C 001EC4CC  EC 20 00 72 */	fmuls f1, f0, f1
/* 801EF590 001EC4D0  48 00 00 08 */	b .L_801EF598
.L_801EF594:
/* 801EF594 001EC4D4  FC 20 00 90 */	fmr f1, f0
.L_801EF598:
/* 801EF598 001EC4D8  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF59C 001EC4DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF5A0 001EC4E0  40 81 00 1C */	ble .L_801EF5BC
/* 801EF5A4 001EC4E4  C0 02 B7 C4 */	lfs f0, lbl_80519B24@sda21(r2)
/* 801EF5A8 001EC4E8  EC 00 08 24 */	fdivs f0, f0, f1
/* 801EF5AC 001EC4EC  EC 42 00 32 */	fmuls f2, f2, f0
/* 801EF5B0 001EC4F0  EC 84 00 32 */	fmuls f4, f4, f0
/* 801EF5B4 001EC4F4  EC 63 00 32 */	fmuls f3, f3, f0
/* 801EF5B8 001EC4F8  48 00 00 08 */	b .L_801EF5C0
.L_801EF5BC:
/* 801EF5BC 001EC4FC  FC 20 00 90 */	fmr f1, f0
.L_801EF5C0:
/* 801EF5C0 001EC500  C0 02 B8 08 */	lfs f0, lbl_80519B68@sda21(r2)
/* 801EF5C4 001EC504  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF5C8 001EC508  4C 41 13 82 */	cror 2, 1, 2
/* 801EF5CC 001EC50C  40 82 00 14 */	bne .L_801EF5E0
/* 801EF5D0 001EC510  D0 5F 00 00 */	stfs f2, 0(r31)
/* 801EF5D4 001EC514  D0 9F 00 04 */	stfs f4, 4(r31)
/* 801EF5D8 001EC518  D0 7F 00 08 */	stfs f3, 8(r31)
/* 801EF5DC 001EC51C  48 00 02 D8 */	b .L_801EF8B4
.L_801EF5E0:
/* 801EF5E0 001EC520  7F A3 EB 78 */	mr r3, r29
/* 801EF5E4 001EC524  7F C4 F3 78 */	mr r4, r30
/* 801EF5E8 001EC528  38 A1 00 0C */	addi r5, r1, 0xc
/* 801EF5EC 001EC52C  38 C1 00 08 */	addi r6, r1, 8
/* 801EF5F0 001EC530  4B FF FB A5 */	bl "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
/* 801EF5F4 001EC534  80 7D 02 18 */	lwz r3, 0x218(r29)
/* 801EF5F8 001EC538  C0 42 B7 EC */	lfs f2, lbl_80519B4C@sda21(r2)
/* 801EF5FC 001EC53C  2C 03 00 00 */	cmpwi r3, 0
/* 801EF600 001EC540  40 81 00 40 */	ble .L_801EF640
/* 801EF604 001EC544  38 03 FF FF */	addi r0, r3, -1
/* 801EF608 001EC548  3C 80 43 30 */	lis r4, 0x4330
/* 801EF60C 001EC54C  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EF610 001EC550  A0 1D 02 14 */	lhz r0, 0x214(r29)
/* 801EF614 001EC554  90 61 00 24 */	stw r3, 0x24(r1)
/* 801EF618 001EC558  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EF61C 001EC55C  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EF620 001EC560  54 00 10 3A */	slwi r0, r0, 2
/* 801EF624 001EC564  90 81 00 20 */	stw r4, 0x20(r1)
/* 801EF628 001EC568  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EF62C 001EC56C  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EF630 001EC570  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 801EF634 001EC574  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF638 001EC578  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EF63C 001EC57C  EC 43 00 7A */	fmadds f2, f3, f1, f0
.L_801EF640:
/* 801EF640 001EC580  C0 22 B7 D8 */	lfs f1, lbl_80519B38@sda21(r2)
/* 801EF644 001EC584  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801EF648 001EC588  EC 42 08 28 */	fsubs f2, f2, f1
/* 801EF64C 001EC58C  C0 22 B7 E8 */	lfs f1, lbl_80519B48@sda21(r2)
/* 801EF650 001EC590  FC 80 02 10 */	fabs f4, f0
/* 801EF654 001EC594  C0 61 00 08 */	lfs f3, 8(r1)
/* 801EF658 001EC598  C0 02 B8 0C */	lfs f0, lbl_80519B6C@sda21(r2)
/* 801EF65C 001EC59C  EC 41 10 2A */	fadds f2, f1, f2
/* 801EF660 001EC5A0  FC 20 20 18 */	frsp f1, f4
/* 801EF664 001EC5A4  EC 43 10 28 */	fsubs f2, f3, f2
/* 801EF668 001EC5A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EF66C 001EC5AC  D0 41 00 08 */	stfs f2, 8(r1)
/* 801EF670 001EC5B0  40 80 00 D0 */	bge .L_801EF740
/* 801EF674 001EC5B4  C0 02 B8 10 */	lfs f0, lbl_80519B70@sda21(r2)
/* 801EF678 001EC5B8  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF67C 001EC5BC  4C 40 13 82 */	cror 2, 0, 2
/* 801EF680 001EC5C0  40 82 00 A0 */	bne .L_801EF720
/* 801EF684 001EC5C4  C0 7D 01 F4 */	lfs f3, 0x1f4(r29)
/* 801EF688 001EC5C8  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF68C 001EC5CC  FC 20 18 90 */	fmr f1, f3
/* 801EF690 001EC5D0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF694 001EC5D4  40 80 00 08 */	bge .L_801EF69C
/* 801EF698 001EC5D8  FC 20 18 50 */	fneg f1, f3
.L_801EF69C:
/* 801EF69C 001EC5DC  C0 42 B7 F4 */	lfs f2, lbl_80519B54@sda21(r2)
/* 801EF6A0 001EC5E0  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF6A4 001EC5E4  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF6A8 001EC5E8  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801EF6AC 001EC5EC  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801EF6B0 001EC5F0  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF6B4 001EC5F4  FC 00 08 1E */	fctiwz f0, f1
/* 801EF6B8 001EC5F8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801EF6BC 001EC5FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EF6C0 001EC600  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF6C4 001EC604  7C 64 02 14 */	add r3, r4, r0
/* 801EF6C8 001EC608  C0 23 00 04 */	lfs f1, 4(r3)
/* 801EF6CC 001EC60C  40 80 00 28 */	bge .L_801EF6F4
/* 801EF6D0 001EC610  C0 02 B7 F8 */	lfs f0, lbl_80519B58@sda21(r2)
/* 801EF6D4 001EC614  EC 03 00 32 */	fmuls f0, f3, f0
/* 801EF6D8 001EC618  FC 00 00 1E */	fctiwz f0, f0
/* 801EF6DC 001EC61C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801EF6E0 001EC620  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801EF6E4 001EC624  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF6E8 001EC628  7C 04 04 2E */	lfsx f0, r4, r0
/* 801EF6EC 001EC62C  FC 00 00 50 */	fneg f0, f0
/* 801EF6F0 001EC630  48 00 00 1C */	b .L_801EF70C
.L_801EF6F4:
/* 801EF6F4 001EC634  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801EF6F8 001EC638  FC 00 00 1E */	fctiwz f0, f0
/* 801EF6FC 001EC63C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801EF700 001EC640  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801EF704 001EC644  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF708 001EC648  7C 04 04 2E */	lfsx f0, r4, r0
.L_801EF70C:
/* 801EF70C 001EC64C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801EF710 001EC650  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF714 001EC654  D0 1F 00 04 */	stfs f0, 4(r31)
/* 801EF718 001EC658  D0 3F 00 08 */	stfs f1, 8(r31)
/* 801EF71C 001EC65C  48 00 01 98 */	b .L_801EF8B4
.L_801EF720:
/* 801EF720 001EC660  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF724 001EC664  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF728 001EC668  4C 40 13 82 */	cror 2, 0, 2
/* 801EF72C 001EC66C  40 82 00 0C */	bne .L_801EF738
/* 801EF730 001EC670  38 60 00 00 */	li r3, 0
/* 801EF734 001EC674  48 00 01 84 */	b .L_801EF8B8
.L_801EF738:
/* 801EF738 001EC678  38 60 00 00 */	li r3, 0
/* 801EF73C 001EC67C  48 00 01 7C */	b .L_801EF8B8
.L_801EF740:
/* 801EF740 001EC680  C0 02 B8 10 */	lfs f0, lbl_80519B70@sda21(r2)
/* 801EF744 001EC684  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF748 001EC688  40 81 00 A4 */	ble .L_801EF7EC
/* 801EF74C 001EC68C  C0 7D 01 F4 */	lfs f3, 0x1f4(r29)
/* 801EF750 001EC690  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF754 001EC694  FC 20 18 90 */	fmr f1, f3
/* 801EF758 001EC698  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF75C 001EC69C  40 80 00 08 */	bge .L_801EF764
/* 801EF760 001EC6A0  FC 20 18 50 */	fneg f1, f3
.L_801EF764:
/* 801EF764 001EC6A4  C0 42 B7 F4 */	lfs f2, lbl_80519B54@sda21(r2)
/* 801EF768 001EC6A8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF76C 001EC6AC  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF770 001EC6B0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 801EF774 001EC6B4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 801EF778 001EC6B8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 801EF77C 001EC6BC  FC 00 08 1E */	fctiwz f0, f1
/* 801EF780 001EC6C0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801EF784 001EC6C4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801EF788 001EC6C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF78C 001EC6CC  7C 64 02 14 */	add r3, r4, r0
/* 801EF790 001EC6D0  C0 23 00 04 */	lfs f1, 4(r3)
/* 801EF794 001EC6D4  40 80 00 28 */	bge .L_801EF7BC
/* 801EF798 001EC6D8  C0 02 B7 F8 */	lfs f0, lbl_80519B58@sda21(r2)
/* 801EF79C 001EC6DC  EC 03 00 32 */	fmuls f0, f3, f0
/* 801EF7A0 001EC6E0  FC 00 00 1E */	fctiwz f0, f0
/* 801EF7A4 001EC6E4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801EF7A8 001EC6E8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801EF7AC 001EC6EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF7B0 001EC6F0  7C 04 04 2E */	lfsx f0, r4, r0
/* 801EF7B4 001EC6F4  FC 40 00 50 */	fneg f2, f0
/* 801EF7B8 001EC6F8  48 00 00 1C */	b .L_801EF7D4
.L_801EF7BC:
/* 801EF7BC 001EC6FC  EC 03 00 B2 */	fmuls f0, f3, f2
/* 801EF7C0 001EC700  FC 00 00 1E */	fctiwz f0, f0
/* 801EF7C4 001EC704  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801EF7C8 001EC708  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EF7CC 001EC70C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF7D0 001EC710  7C 44 04 2E */	lfsx f2, r4, r0
.L_801EF7D4:
/* 801EF7D4 001EC714  C0 02 B8 14 */	lfs f0, lbl_80519B74@sda21(r2)
/* 801EF7D8 001EC718  C0 62 B7 B0 */	lfs f3, lbl_80519B10@sda21(r2)
/* 801EF7DC 001EC71C  EC 42 00 32 */	fmuls f2, f2, f0
/* 801EF7E0 001EC720  EC 63 00 32 */	fmuls f3, f3, f0
/* 801EF7E4 001EC724  EC 81 00 32 */	fmuls f4, f1, f0
/* 801EF7E8 001EC728  48 00 00 C0 */	b .L_801EF8A8
.L_801EF7EC:
/* 801EF7EC 001EC72C  C0 5D 01 F4 */	lfs f2, 0x1f4(r29)
/* 801EF7F0 001EC730  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF7F4 001EC734  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF7F8 001EC738  40 80 00 30 */	bge .L_801EF828
/* 801EF7FC 001EC73C  C0 02 B7 F8 */	lfs f0, lbl_80519B58@sda21(r2)
/* 801EF800 001EC740  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF804 001EC744  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF808 001EC748  EC 02 00 32 */	fmuls f0, f2, f0
/* 801EF80C 001EC74C  FC 00 00 1E */	fctiwz f0, f0
/* 801EF810 001EC750  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801EF814 001EC754  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801EF818 001EC758  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF81C 001EC75C  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF820 001EC760  FC 20 00 50 */	fneg f1, f0
/* 801EF824 001EC764  48 00 00 28 */	b .L_801EF84C
.L_801EF828:
/* 801EF828 001EC768  C0 02 B7 F4 */	lfs f0, lbl_80519B54@sda21(r2)
/* 801EF82C 001EC76C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF830 001EC770  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF834 001EC774  EC 02 00 32 */	fmuls f0, f2, f0
/* 801EF838 001EC778  FC 00 00 1E */	fctiwz f0, f0
/* 801EF83C 001EC77C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 801EF840 001EC780  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 801EF844 001EC784  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF848 001EC788  7C 23 04 2E */	lfsx f1, r3, r0
.L_801EF84C:
/* 801EF84C 001EC78C  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EF850 001EC790  FC 80 08 50 */	fneg f4, f1
/* 801EF854 001EC794  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF858 001EC798  40 80 00 08 */	bge .L_801EF860
/* 801EF85C 001EC79C  FC 40 10 50 */	fneg f2, f2
.L_801EF860:
/* 801EF860 001EC7A0  C0 02 B7 F4 */	lfs f0, lbl_80519B54@sda21(r2)
/* 801EF864 001EC7A4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801EF868 001EC7A8  C0 62 B7 B0 */	lfs f3, lbl_80519B10@sda21(r2)
/* 801EF86C 001EC7AC  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801EF870 001EC7B0  EC 22 00 32 */	fmuls f1, f2, f0
/* 801EF874 001EC7B4  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801EF878 001EC7B8  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 801EF87C 001EC7BC  FC 00 08 1E */	fctiwz f0, f1
/* 801EF880 001EC7C0  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 801EF884 001EC7C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EF888 001EC7C8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801EF88C 001EC7CC  7C 63 02 14 */	add r3, r3, r0
/* 801EF890 001EC7D0  C0 43 00 04 */	lfs f2, 4(r3)
/* 801EF894 001EC7D4  40 81 00 14 */	ble .L_801EF8A8
/* 801EF898 001EC7D8  C0 02 B8 14 */	lfs f0, lbl_80519B74@sda21(r2)
/* 801EF89C 001EC7DC  EC 42 00 32 */	fmuls f2, f2, f0
/* 801EF8A0 001EC7E0  EC 63 00 32 */	fmuls f3, f3, f0
/* 801EF8A4 001EC7E4  EC 84 00 32 */	fmuls f4, f4, f0
.L_801EF8A8:
/* 801EF8A8 001EC7E8  D0 5F 00 00 */	stfs f2, 0(r31)
/* 801EF8AC 001EC7EC  D0 7F 00 04 */	stfs f3, 4(r31)
/* 801EF8B0 001EC7F0  D0 9F 00 08 */	stfs f4, 8(r31)
.L_801EF8B4:
/* 801EF8B4 001EC7F4  38 60 00 01 */	li r3, 1
.L_801EF8B8:
/* 801EF8B8 001EC7F8  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801EF8BC 001EC7FC  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801EF8C0 001EC800  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801EF8C4 001EC804  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801EF8C8 001EC808  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 801EF8CC 001EC80C  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 801EF8D0 001EC810  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801EF8D4 001EC814  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801EF8D8 001EC818  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801EF8DC 001EC81C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801EF8E0 001EC820  7C 08 03 A6 */	mtlr r0
/* 801EF8E4 001EC824  38 21 00 80 */	addi r1, r1, 0x80
/* 801EF8E8 001EC828  4E 80 00 20 */	blr 
.endfn "getVectorField__Q34Game10ItemBridge4ItemFRQ23Sys6SphereR10Vector3<f>"

.fn getWorkDistance__Q34Game10ItemBridge4ItemFRQ23Sys6Sphere, global
/* 801EF8EC 001EC82C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EF8F0 001EC830  7C 08 02 A6 */	mflr r0
/* 801EF8F4 001EC834  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EF8F8 001EC838  38 A1 00 0C */	addi r5, r1, 0xc
/* 801EF8FC 001EC83C  38 C1 00 08 */	addi r6, r1, 8
/* 801EF900 001EC840  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EF904 001EC844  7C 7F 1B 78 */	mr r31, r3
/* 801EF908 001EC848  4B FF F8 8D */	bl "getBridgePos__Q34Game10ItemBridge4ItemFR10Vector3<f>RfRf"
/* 801EF90C 001EC84C  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801EF910 001EC850  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EF914 001EC854  7C 03 00 00 */	cmpw r3, r0
/* 801EF918 001EC858  40 82 00 0C */	bne .L_801EF924
/* 801EF91C 001EC85C  C0 22 B8 18 */	lfs f1, lbl_80519B78@sda21(r2)
/* 801EF920 001EC860  48 00 01 00 */	b .L_801EFA20
.L_801EF924:
/* 801EF924 001EC864  2C 03 00 00 */	cmpwi r3, 0
/* 801EF928 001EC868  C0 62 B7 EC */	lfs f3, lbl_80519B4C@sda21(r2)
/* 801EF92C 001EC86C  40 81 00 40 */	ble .L_801EF96C
/* 801EF930 001EC870  38 03 FF FF */	addi r0, r3, -1
/* 801EF934 001EC874  3C 80 43 30 */	lis r4, 0x4330
/* 801EF938 001EC878  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EF93C 001EC87C  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EF940 001EC880  90 61 00 14 */	stw r3, 0x14(r1)
/* 801EF944 001EC884  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EF948 001EC888  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EF94C 001EC88C  54 00 10 3A */	slwi r0, r0, 2
/* 801EF950 001EC890  90 81 00 10 */	stw r4, 0x10(r1)
/* 801EF954 001EC894  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EF958 001EC898  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EF95C 001EC89C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 801EF960 001EC8A0  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EF964 001EC8A4  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EF968 001EC8A8  EC 63 00 7A */	fmadds f3, f3, f1, f0
.L_801EF96C:
/* 801EF96C 001EC8AC  C0 22 B7 D8 */	lfs f1, lbl_80519B38@sda21(r2)
/* 801EF970 001EC8B0  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EF974 001EC8B4  EC 63 08 28 */	fsubs f3, f3, f1
/* 801EF978 001EC8B8  EC 40 08 28 */	fsubs f2, f0, f1
/* 801EF97C 001EC8BC  EC 01 18 2A */	fadds f0, f1, f3
/* 801EF980 001EC8C0  D0 41 00 08 */	stfs f2, 8(r1)
/* 801EF984 001EC8C4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF988 001EC8C8  40 81 00 0C */	ble .L_801EF994
/* 801EF98C 001EC8CC  C0 22 B8 18 */	lfs f1, lbl_80519B78@sda21(r2)
/* 801EF990 001EC8D0  48 00 00 90 */	b .L_801EFA20
.L_801EF994:
/* 801EF994 001EC8D4  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801EF998 001EC8D8  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 801EF99C 001EC8DC  4C 41 13 82 */	cror 2, 1, 2
/* 801EF9A0 001EC8E0  40 82 00 38 */	bne .L_801EF9D8
/* 801EF9A4 001EC8E4  FC 02 18 40 */	fcmpo cr0, f2, f3
/* 801EF9A8 001EC8E8  4C 40 13 82 */	cror 2, 0, 2
/* 801EF9AC 001EC8EC  40 82 00 2C */	bne .L_801EF9D8
/* 801EF9B0 001EC8F0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801EF9B4 001EC8F4  C0 02 B7 FC */	lfs f0, lbl_80519B5C@sda21(r2)
/* 801EF9B8 001EC8F8  FC 40 12 10 */	fabs f2, f2
/* 801EF9BC 001EC8FC  FC 40 10 18 */	frsp f2, f2
/* 801EF9C0 001EC900  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF9C4 001EC904  4C 41 13 82 */	cror 2, 1, 2
/* 801EF9C8 001EC908  40 82 00 58 */	bne .L_801EFA20
/* 801EF9CC 001EC90C  EC 22 00 28 */	fsubs f1, f2, f0
/* 801EF9D0 001EC910  48 00 00 50 */	b .L_801EFA20
/* 801EF9D4 001EC914  48 00 00 4C */	b .L_801EFA20
.L_801EF9D8:
/* 801EF9D8 001EC918  C0 02 B8 00 */	lfs f0, lbl_80519B60@sda21(r2)
/* 801EF9DC 001EC91C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801EF9E0 001EC920  40 80 00 0C */	bge .L_801EF9EC
/* 801EF9E4 001EC924  C0 22 B8 18 */	lfs f1, lbl_80519B78@sda21(r2)
/* 801EF9E8 001EC928  48 00 00 38 */	b .L_801EFA20
.L_801EF9EC:
/* 801EF9EC 001EC92C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EF9F0 001EC930  C0 02 B8 04 */	lfs f0, lbl_80519B64@sda21(r2)
/* 801EF9F4 001EC934  FC 20 0A 10 */	fabs f1, f1
/* 801EF9F8 001EC938  FC 20 08 18 */	frsp f1, f1
/* 801EF9FC 001EC93C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EFA00 001EC940  4C 41 13 82 */	cror 2, 1, 2
/* 801EFA04 001EC944  40 82 00 0C */	bne .L_801EFA10
/* 801EFA08 001EC948  C0 22 B8 18 */	lfs f1, lbl_80519B78@sda21(r2)
/* 801EFA0C 001EC94C  48 00 00 14 */	b .L_801EFA20
.L_801EFA10:
/* 801EFA10 001EC950  C0 01 00 08 */	lfs f0, 8(r1)
/* 801EFA14 001EC954  EC 00 18 28 */	fsubs f0, f0, f3
/* 801EFA18 001EC958  FC 00 02 10 */	fabs f0, f0
/* 801EFA1C 001EC95C  FC 20 00 18 */	frsp f1, f0
.L_801EFA20:
/* 801EFA20 001EC960  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801EFA24 001EC964  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801EFA28 001EC968  7C 08 03 A6 */	mtlr r0
/* 801EFA2C 001EC96C  38 21 00 20 */	addi r1, r1, 0x20
/* 801EFA30 001EC970  4E 80 00 20 */	blr 
.endfn getWorkDistance__Q34Game10ItemBridge4ItemFRQ23Sys6Sphere

.fn interactAttack__Q34Game10ItemBridge4ItemFRQ24Game14InteractAttack, global
/* 801EFA34 001EC974  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 801EFA38 001EC978  7C 08 02 A6 */	mflr r0
/* 801EFA3C 001EC97C  90 01 01 14 */	stw r0, 0x114(r1)
/* 801EFA40 001EC980  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 801EFA44 001EC984  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 801EFA48 001EC988  93 E1 00 FC */	stw r31, 0xfc(r1)
/* 801EFA4C 001EC98C  93 C1 00 F8 */	stw r30, 0xf8(r1)
/* 801EFA50 001EC990  7C 7F 1B 78 */	mr r31, r3
/* 801EFA54 001EC994  7C 9E 23 78 */	mr r30, r4
/* 801EFA58 001EC998  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801EFA5C 001EC99C  48 03 F1 8D */	bl event__Q24Game11TSoundEventFv
/* 801EFA60 001EC9A0  2C 03 00 02 */	cmpwi r3, 2
/* 801EFA64 001EC9A4  41 82 00 BC */	beq .L_801EFB20
/* 801EFA68 001EC9A8  40 80 00 10 */	bge .L_801EFA78
/* 801EFA6C 001EC9AC  2C 03 00 01 */	cmpwi r3, 1
/* 801EFA70 001EC9B0  40 80 00 14 */	bge .L_801EFA84
/* 801EFA74 001EC9B4  48 00 00 AC */	b .L_801EFB20
.L_801EFA78:
/* 801EFA78 001EC9B8  2C 03 00 04 */	cmpwi r3, 4
/* 801EFA7C 001EC9BC  40 80 00 A4 */	bge .L_801EFB20
/* 801EFA80 001EC9C0  48 00 00 54 */	b .L_801EFAD4
.L_801EFA84:
/* 801EFA84 001EC9C4  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EFA88 001EC9C8  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EFA8C 001EC9CC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801EFA90 001EC9D0  7D 89 03 A6 */	mtctr r12
/* 801EFA94 001EC9D4  4E 80 04 21 */	bctrl 
/* 801EFA98 001EC9D8  2C 03 00 0A */	cmpwi r3, 0xa
/* 801EFA9C 001EC9DC  41 82 00 20 */	beq .L_801EFABC
/* 801EFAA0 001EC9E0  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801EFAA4 001EC9E4  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801EFAA8 001EC9E8  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801EFAAC 001EC9EC  38 80 03 39 */	li r4, 0x339
/* 801EFAB0 001EC9F0  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801EFAB4 001EC9F4  4C C6 31 82 */	crclr 6
/* 801EFAB8 001EC9F8  4B E3 AB 89 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EFABC:
/* 801EFABC 001EC9FC  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EFAC0 001ECA00  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EFAC4 001ECA04  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801EFAC8 001ECA08  7D 89 03 A6 */	mtctr r12
/* 801EFACC 001ECA0C  4E 80 04 21 */	bctrl 
/* 801EFAD0 001ECA10  48 00 00 50 */	b .L_801EFB20
.L_801EFAD4:
/* 801EFAD4 001ECA14  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EFAD8 001ECA18  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EFADC 001ECA1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801EFAE0 001ECA20  7D 89 03 A6 */	mtctr r12
/* 801EFAE4 001ECA24  4E 80 04 21 */	bctrl 
/* 801EFAE8 001ECA28  2C 03 00 0A */	cmpwi r3, 0xa
/* 801EFAEC 001ECA2C  41 82 00 20 */	beq .L_801EFB0C
/* 801EFAF0 001ECA30  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801EFAF4 001ECA34  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801EFAF8 001ECA38  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801EFAFC 001ECA3C  38 80 03 40 */	li r4, 0x340
/* 801EFB00 001ECA40  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801EFB04 001ECA44  4C C6 31 82 */	crclr 6
/* 801EFB08 001ECA48  4B E3 AB 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EFB0C:
/* 801EFB0C 001ECA4C  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801EFB10 001ECA50  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801EFB14 001ECA54  81 8C 00 8C */	lwz r12, 0x8c(r12)
/* 801EFB18 001ECA58  7D 89 03 A6 */	mtctr r12
/* 801EFB1C 001ECA5C  4E 80 04 21 */	bctrl 
.L_801EFB20:
/* 801EFB20 001ECA60  88 1F 01 F8 */	lbz r0, 0x1f8(r31)
/* 801EFB24 001ECA64  28 00 00 00 */	cmplwi r0, 0
/* 801EFB28 001ECA68  41 82 00 0C */	beq .L_801EFB34
/* 801EFB2C 001ECA6C  38 60 00 01 */	li r3, 1
/* 801EFB30 001ECA70  48 00 03 2C */	b .L_801EFE5C
.L_801EFB34:
/* 801EFB34 001ECA74  80 9F 02 18 */	lwz r4, 0x218(r31)
/* 801EFB38 001ECA78  80 1F 02 1C */	lwz r0, 0x21c(r31)
/* 801EFB3C 001ECA7C  7C 04 00 00 */	cmpw r4, r0
/* 801EFB40 001ECA80  40 82 00 0C */	bne .L_801EFB4C
/* 801EFB44 001ECA84  38 60 00 00 */	li r3, 0
/* 801EFB48 001ECA88  48 00 03 14 */	b .L_801EFE5C
.L_801EFB4C:
/* 801EFB4C 001ECA8C  80 7F 02 20 */	lwz r3, 0x220(r31)
/* 801EFB50 001ECA90  54 80 10 3A */	slwi r0, r4, 2
/* 801EFB54 001ECA94  C0 3E 00 08 */	lfs f1, 8(r30)
/* 801EFB58 001ECA98  7C 43 04 2E */	lfsx f2, r3, r0
/* 801EFB5C 001ECA9C  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EFB60 001ECAA0  EC 22 08 28 */	fsubs f1, f2, f1
/* 801EFB64 001ECAA4  7C 23 05 2E */	stfsx f1, r3, r0
/* 801EFB68 001ECAA8  7C 23 04 2E */	lfsx f1, r3, r0
/* 801EFB6C 001ECAAC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EFB70 001ECAB0  4C 40 13 82 */	cror 2, 0, 2
/* 801EFB74 001ECAB4  40 82 02 E4 */	bne .L_801EFE58
/* 801EFB78 001ECAB8  83 DF 02 18 */	lwz r30, 0x218(r31)
/* 801EFB7C 001ECABC  C3 E2 B7 EC */	lfs f31, lbl_80519B4C@sda21(r2)
/* 801EFB80 001ECAC0  2C 1E 00 00 */	cmpwi r30, 0
/* 801EFB84 001ECAC4  40 81 00 40 */	ble .L_801EFBC4
/* 801EFB88 001ECAC8  38 1E FF FF */	addi r0, r30, -1
/* 801EFB8C 001ECACC  3C 80 43 30 */	lis r4, 0x4330
/* 801EFB90 001ECAD0  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EFB94 001ECAD4  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EFB98 001ECAD8  90 61 00 D4 */	stw r3, 0xd4(r1)
/* 801EFB9C 001ECADC  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EFBA0 001ECAE0  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EFBA4 001ECAE4  54 00 10 3A */	slwi r0, r0, 2
/* 801EFBA8 001ECAE8  90 81 00 D0 */	stw r4, 0xd0(r1)
/* 801EFBAC 001ECAEC  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EFBB0 001ECAF0  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EFBB4 001ECAF4  C8 21 00 D0 */	lfd f1, 0xd0(r1)
/* 801EFBB8 001ECAF8  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EFBBC 001ECAFC  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EFBC0 001ECB00  EF E3 00 7A */	fmadds f31, f3, f1, f0
.L_801EFBC4:
/* 801EFBC4 001ECB04  C0 02 B7 D8 */	lfs f0, lbl_80519B38@sda21(r2)
/* 801EFBC8 001ECB08  7F E4 FB 78 */	mr r4, r31
/* 801EFBCC 001ECB0C  38 61 00 14 */	addi r3, r1, 0x14
/* 801EFBD0 001ECB10  EF FF 00 28 */	fsubs f31, f31, f0
/* 801EFBD4 001ECB14  4B FF F4 65 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EFBD8 001ECB18  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801EFBDC 001ECB1C  2C 1E 00 01 */	cmpwi r30, 1
/* 801EFBE0 001ECB20  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801EFBE4 001ECB24  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801EFBE8 001ECB28  EC 82 07 F2 */	fmuls f4, f2, f31
/* 801EFBEC 001ECB2C  C0 BF 01 9C */	lfs f5, 0x19c(r31)
/* 801EFBF0 001ECB30  EC 41 07 F2 */	fmuls f2, f1, f31
/* 801EFBF4 001ECB34  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 801EFBF8 001ECB38  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801EFBFC 001ECB3C  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801EFC00 001ECB40  EC 85 20 2A */	fadds f4, f5, f4
/* 801EFC04 001ECB44  EC 63 10 2A */	fadds f3, f3, f2
/* 801EFC08 001ECB48  EC A1 00 2A */	fadds f5, f1, f0
/* 801EFC0C 001ECB4C  41 80 00 3C */	blt .L_801EFC48
/* 801EFC10 001ECB50  38 1E FF FF */	addi r0, r30, -1
/* 801EFC14 001ECB54  3C 80 43 30 */	lis r4, 0x4330
/* 801EFC18 001ECB58  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EFC1C 001ECB5C  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EFC20 001ECB60  90 61 00 DC */	stw r3, 0xdc(r1)
/* 801EFC24 001ECB64  3C 60 80 4C */	lis r3, bridgeGrad@ha
/* 801EFC28 001ECB68  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EFC2C 001ECB6C  54 00 10 3A */	slwi r0, r0, 2
/* 801EFC30 001ECB70  90 81 00 D8 */	stw r4, 0xd8(r1)
/* 801EFC34 001ECB74  38 63 B3 80 */	addi r3, r3, bridgeGrad@l
/* 801EFC38 001ECB78  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EFC3C 001ECB7C  C8 21 00 D8 */	lfd f1, 0xd8(r1)
/* 801EFC40 001ECB80  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EFC44 001ECB84  EC 61 18 3A */	fmadds f3, f1, f0, f3
.L_801EFC48:
/* 801EFC48 001ECB88  D0 81 00 64 */	stfs f4, 0x64(r1)
/* 801EFC4C 001ECB8C  38 61 00 A0 */	addi r3, r1, 0xa0
/* 801EFC50 001ECB90  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EFC54 001ECB94  38 81 00 64 */	addi r4, r1, 0x64
/* 801EFC58 001ECB98  D0 61 00 68 */	stfs f3, 0x68(r1)
/* 801EFC5C 001ECB9C  38 A1 00 58 */	addi r5, r1, 0x58
/* 801EFC60 001ECBA0  D0 A1 00 6C */	stfs f5, 0x6c(r1)
/* 801EFC64 001ECBA4  C0 3F 01 F4 */	lfs f1, 0x1f4(r31)
/* 801EFC68 001ECBA8  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801EFC6C 001ECBAC  D0 21 00 5C */	stfs f1, 0x5c(r1)
/* 801EFC70 001ECBB0  D0 01 00 60 */	stfs f0, 0x60(r1)
/* 801EFC74 001ECBB4  48 23 8C 15 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801EFC78 001ECBB8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801EFC7C 001ECBBC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801EFC80 001ECBC0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801EFC84 001ECBC4  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801EFC88 001ECBC8  90 01 00 48 */	stw r0, 0x48(r1)
/* 801EFC8C 001ECBCC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801EFC90 001ECBD0  3C 60 80 4C */	lis r3, __vt__Q23efx10TBridgeSet@ha
/* 801EFC94 001ECBD4  38 A1 00 A0 */	addi r5, r1, 0xa0
/* 801EFC98 001ECBD8  90 01 00 48 */	stw r0, 0x48(r1)
/* 801EFC9C 001ECBDC  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801EFCA0 001ECBE0  38 E0 00 11 */	li r7, 0x11
/* 801EFCA4 001ECBE4  38 C0 00 00 */	li r6, 0
/* 801EFCA8 001ECBE8  90 01 00 48 */	stw r0, 0x48(r1)
/* 801EFCAC 001ECBEC  38 03 B4 74 */	addi r0, r3, __vt__Q23efx10TBridgeSet@l
/* 801EFCB0 001ECBF0  38 61 00 48 */	addi r3, r1, 0x48
/* 801EFCB4 001ECBF4  38 80 00 00 */	li r4, 0
/* 801EFCB8 001ECBF8  B0 E1 00 4C */	sth r7, 0x4c(r1)
/* 801EFCBC 001ECBFC  90 C1 00 50 */	stw r6, 0x50(r1)
/* 801EFCC0 001ECC00  90 A1 00 54 */	stw r5, 0x54(r1)
/* 801EFCC4 001ECC04  90 01 00 48 */	stw r0, 0x48(r1)
/* 801EFCC8 001ECC08  48 1B F5 ED */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801EFCCC 001ECC0C  80 7F 01 F0 */	lwz r3, 0x1f0(r31)
/* 801EFCD0 001ECC10  C3 E2 B7 EC */	lfs f31, lbl_80519B4C@sda21(r2)
/* 801EFCD4 001ECC14  38 03 00 8C */	addi r0, r3, 0x8c
/* 801EFCD8 001ECC18  90 1F 01 F0 */	stw r0, 0x1f0(r31)
/* 801EFCDC 001ECC1C  80 7F 02 18 */	lwz r3, 0x218(r31)
/* 801EFCE0 001ECC20  37 C3 00 01 */	addic. r30, r3, 1
/* 801EFCE4 001ECC24  40 81 00 40 */	ble .L_801EFD24
/* 801EFCE8 001ECC28  38 1E FF FF */	addi r0, r30, -1
/* 801EFCEC 001ECC2C  3C 80 43 30 */	lis r4, 0x4330
/* 801EFCF0 001ECC30  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EFCF4 001ECC34  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EFCF8 001ECC38  90 61 00 E4 */	stw r3, 0xe4(r1)
/* 801EFCFC 001ECC3C  3C 60 80 4C */	lis r3, bridgeFirstPos@ha
/* 801EFD00 001ECC40  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EFD04 001ECC44  54 00 10 3A */	slwi r0, r0, 2
/* 801EFD08 001ECC48  90 81 00 E0 */	stw r4, 0xe0(r1)
/* 801EFD0C 001ECC4C  38 63 B3 70 */	addi r3, r3, bridgeFirstPos@l
/* 801EFD10 001ECC50  C0 62 B7 E8 */	lfs f3, lbl_80519B48@sda21(r2)
/* 801EFD14 001ECC54  C8 21 00 E0 */	lfd f1, 0xe0(r1)
/* 801EFD18 001ECC58  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EFD1C 001ECC5C  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EFD20 001ECC60  EF E3 00 7A */	fmadds f31, f3, f1, f0
.L_801EFD24:
/* 801EFD24 001ECC64  C0 02 B7 D8 */	lfs f0, lbl_80519B38@sda21(r2)
/* 801EFD28 001ECC68  7F E4 FB 78 */	mr r4, r31
/* 801EFD2C 001ECC6C  38 61 00 08 */	addi r3, r1, 8
/* 801EFD30 001ECC70  EF FF 00 28 */	fsubs f31, f31, f0
/* 801EFD34 001ECC74  4B FF F3 05 */	bl getBridgeZVec__Q34Game10ItemBridge4ItemFv
/* 801EFD38 001ECC78  C0 41 00 08 */	lfs f2, 8(r1)
/* 801EFD3C 001ECC7C  2C 1E 00 01 */	cmpwi r30, 1
/* 801EFD40 001ECC80  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801EFD44 001ECC84  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801EFD48 001ECC88  EC 82 07 F2 */	fmuls f4, f2, f31
/* 801EFD4C 001ECC8C  C0 BF 01 9C */	lfs f5, 0x19c(r31)
/* 801EFD50 001ECC90  EC 41 07 F2 */	fmuls f2, f1, f31
/* 801EFD54 001ECC94  C0 7F 01 A0 */	lfs f3, 0x1a0(r31)
/* 801EFD58 001ECC98  EC 00 07 F2 */	fmuls f0, f0, f31
/* 801EFD5C 001ECC9C  C0 3F 01 A4 */	lfs f1, 0x1a4(r31)
/* 801EFD60 001ECCA0  EC 85 20 2A */	fadds f4, f5, f4
/* 801EFD64 001ECCA4  EC 63 10 2A */	fadds f3, f3, f2
/* 801EFD68 001ECCA8  EC A1 00 2A */	fadds f5, f1, f0
/* 801EFD6C 001ECCAC  41 80 00 3C */	blt .L_801EFDA8
/* 801EFD70 001ECCB0  38 1E FF FF */	addi r0, r30, -1
/* 801EFD74 001ECCB4  3C 80 43 30 */	lis r4, 0x4330
/* 801EFD78 001ECCB8  6C 03 80 00 */	xoris r3, r0, 0x8000
/* 801EFD7C 001ECCBC  A0 1F 02 14 */	lhz r0, 0x214(r31)
/* 801EFD80 001ECCC0  90 61 00 EC */	stw r3, 0xec(r1)
/* 801EFD84 001ECCC4  3C 60 80 4C */	lis r3, bridgeGrad@ha
/* 801EFD88 001ECCC8  C8 42 B7 E0 */	lfd f2, lbl_80519B40@sda21(r2)
/* 801EFD8C 001ECCCC  54 00 10 3A */	slwi r0, r0, 2
/* 801EFD90 001ECCD0  90 81 00 E8 */	stw r4, 0xe8(r1)
/* 801EFD94 001ECCD4  38 63 B3 80 */	addi r3, r3, bridgeGrad@l
/* 801EFD98 001ECCD8  7C 03 04 2E */	lfsx f0, r3, r0
/* 801EFD9C 001ECCDC  C8 21 00 E8 */	lfd f1, 0xe8(r1)
/* 801EFDA0 001ECCE0  EC 21 10 28 */	fsubs f1, f1, f2
/* 801EFDA4 001ECCE4  EC 61 18 3A */	fmadds f3, f1, f0, f3
.L_801EFDA8:
/* 801EFDA8 001ECCE8  D0 81 00 3C */	stfs f4, 0x3c(r1)
/* 801EFDAC 001ECCEC  38 61 00 70 */	addi r3, r1, 0x70
/* 801EFDB0 001ECCF0  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801EFDB4 001ECCF4  38 81 00 3C */	addi r4, r1, 0x3c
/* 801EFDB8 001ECCF8  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 801EFDBC 001ECCFC  38 A1 00 30 */	addi r5, r1, 0x30
/* 801EFDC0 001ECD00  D0 A1 00 44 */	stfs f5, 0x44(r1)
/* 801EFDC4 001ECD04  C0 3F 01 F4 */	lfs f1, 0x1f4(r31)
/* 801EFDC8 001ECD08  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801EFDCC 001ECD0C  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 801EFDD0 001ECD10  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801EFDD4 001ECD14  48 23 8A B5 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801EFDD8 001ECD18  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801EFDDC 001ECD1C  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801EFDE0 001ECD20  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801EFDE4 001ECD24  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx1@ha
/* 801EFDE8 001ECD28  90 01 00 20 */	stw r0, 0x20(r1)
/* 801EFDEC 001ECD2C  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801EFDF0 001ECD30  3C 60 80 4C */	lis r3, __vt__Q23efx10TBridgeSet@ha
/* 801EFDF4 001ECD34  38 A1 00 70 */	addi r5, r1, 0x70
/* 801EFDF8 001ECD38  90 01 00 20 */	stw r0, 0x20(r1)
/* 801EFDFC 001ECD3C  38 04 6A 14 */	addi r0, r4, __vt__Q23efx11TSimpleMtx1@l
/* 801EFE00 001ECD40  38 E0 00 11 */	li r7, 0x11
/* 801EFE04 001ECD44  38 C0 00 00 */	li r6, 0
/* 801EFE08 001ECD48  90 01 00 20 */	stw r0, 0x20(r1)
/* 801EFE0C 001ECD4C  38 03 B4 74 */	addi r0, r3, __vt__Q23efx10TBridgeSet@l
/* 801EFE10 001ECD50  38 61 00 20 */	addi r3, r1, 0x20
/* 801EFE14 001ECD54  38 80 00 00 */	li r4, 0
/* 801EFE18 001ECD58  B0 E1 00 24 */	sth r7, 0x24(r1)
/* 801EFE1C 001ECD5C  90 C1 00 28 */	stw r6, 0x28(r1)
/* 801EFE20 001ECD60  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801EFE24 001ECD64  90 01 00 20 */	stw r0, 0x20(r1)
/* 801EFE28 001ECD68  48 1B F4 8D */	bl create__Q23efx11TSimpleMtx1FPQ23efx3Arg
/* 801EFE2C 001ECD6C  80 BF 01 F0 */	lwz r5, 0x1f0(r31)
/* 801EFE30 001ECD70  38 00 00 28 */	li r0, 0x28
/* 801EFE34 001ECD74  7F E3 FB 78 */	mr r3, r31
/* 801EFE38 001ECD78  38 80 38 01 */	li r4, 0x3801
/* 801EFE3C 001ECD7C  38 A5 00 3C */	addi r5, r5, 0x3c
/* 801EFE40 001ECD80  90 BF 01 F0 */	stw r5, 0x1f0(r31)
/* 801EFE44 001ECD84  98 1F 01 F8 */	stb r0, 0x1f8(r31)
/* 801EFE48 001ECD88  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EFE4C 001ECD8C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801EFE50 001ECD90  7D 89 03 A6 */	mtctr r12
/* 801EFE54 001ECD94  4E 80 04 21 */	bctrl 
.L_801EFE58:
/* 801EFE58 001ECD98  38 60 00 01 */	li r3, 1
.L_801EFE5C:
/* 801EFE5C 001ECD9C  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 801EFE60 001ECDA0  80 01 01 14 */	lwz r0, 0x114(r1)
/* 801EFE64 001ECDA4  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 801EFE68 001ECDA8  83 E1 00 FC */	lwz r31, 0xfc(r1)
/* 801EFE6C 001ECDAC  83 C1 00 F8 */	lwz r30, 0xf8(r1)
/* 801EFE70 001ECDB0  7C 08 03 A6 */	mtlr r0
/* 801EFE74 001ECDB4  38 21 01 10 */	addi r1, r1, 0x110
/* 801EFE78 001ECDB8  4E 80 00 20 */	blr 
.endfn interactAttack__Q34Game10ItemBridge4ItemFRQ24Game14InteractAttack

.fn interactBreakBridge__Q34Game10ItemBridge4ItemFRQ24Game19InteractBreakBridge, global
/* 801EFE7C 001ECDBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EFE80 001ECDC0  7C 08 02 A6 */	mflr r0
/* 801EFE84 001ECDC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EFE88 001ECDC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801EFE8C 001ECDCC  7C 7F 1B 78 */	mr r31, r3
/* 801EFE90 001ECDD0  88 03 01 F8 */	lbz r0, 0x1f8(r3)
/* 801EFE94 001ECDD4  28 00 00 00 */	cmplwi r0, 0
/* 801EFE98 001ECDD8  40 82 00 10 */	bne .L_801EFEA8
/* 801EFE9C 001ECDDC  80 BF 02 18 */	lwz r5, 0x218(r31)
/* 801EFEA0 001ECDE0  2C 05 00 00 */	cmpwi r5, 0
/* 801EFEA4 001ECDE4  40 82 00 0C */	bne .L_801EFEB0
.L_801EFEA8:
/* 801EFEA8 001ECDE8  38 60 00 00 */	li r3, 0
/* 801EFEAC 001ECDEC  48 00 00 AC */	b .L_801EFF58
.L_801EFEB0:
/* 801EFEB0 001ECDF0  38 05 FF FF */	addi r0, r5, -1
/* 801EFEB4 001ECDF4  80 BF 02 20 */	lwz r5, 0x220(r31)
/* 801EFEB8 001ECDF8  54 00 10 3A */	slwi r0, r0, 2
/* 801EFEBC 001ECDFC  C0 04 00 08 */	lfs f0, 8(r4)
/* 801EFEC0 001ECE00  7C 25 04 2E */	lfsx f1, r5, r0
/* 801EFEC4 001ECE04  EC 01 00 2A */	fadds f0, f1, f0
/* 801EFEC8 001ECE08  7C 05 05 2E */	stfsx f0, r5, r0
/* 801EFECC 001ECE0C  80 8D 94 B8 */	lwz r4, mgr__Q24Game10ItemBridge@sda21(r13)
/* 801EFED0 001ECE10  7C 25 04 2E */	lfsx f1, r5, r0
/* 801EFED4 001ECE14  80 84 00 90 */	lwz r4, 0x90(r4)
/* 801EFED8 001ECE18  C0 04 01 00 */	lfs f0, 0x100(r4)
/* 801EFEDC 001ECE1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801EFEE0 001ECE20  4C 41 13 82 */	cror 2, 1, 2
/* 801EFEE4 001ECE24  40 82 00 70 */	bne .L_801EFF54
/* 801EFEE8 001ECE28  7C 05 05 2E */	stfsx f0, r5, r0
/* 801EFEEC 001ECE2C  80 9F 02 18 */	lwz r4, 0x218(r31)
/* 801EFEF0 001ECE30  38 84 FF FF */	addi r4, r4, -1
/* 801EFEF4 001ECE34  4B FF EB 01 */	bl setCurrStage__Q34Game10ItemBridge4ItemFi
/* 801EFEF8 001ECE38  7F E3 FB 78 */	mr r3, r31
/* 801EFEFC 001ECE3C  38 80 00 01 */	li r4, 1
/* 801EFF00 001ECE40  81 9F 00 00 */	lwz r12, 0(r31)
/* 801EFF04 001ECE44  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801EFF08 001ECE48  7D 89 03 A6 */	mtctr r12
/* 801EFF0C 001ECE4C  4E 80 04 21 */	bctrl 
/* 801EFF10 001ECE50  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EFF14 001ECE54  28 03 00 00 */	cmplwi r3, 0
/* 801EFF18 001ECE58  41 82 00 3C */	beq .L_801EFF54
/* 801EFF1C 001ECE5C  80 1F 02 00 */	lwz r0, 0x200(r31)
/* 801EFF20 001ECE60  28 00 00 00 */	cmplwi r0, 0
/* 801EFF24 001ECE64  41 82 00 30 */	beq .L_801EFF54
/* 801EFF28 001ECE68  38 80 00 00 */	li r4, 0
/* 801EFF2C 001ECE6C  4B F8 29 49 */	bl setOpen__Q24Game8WayPointFb
/* 801EFF30 001ECE70  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EFF34 001ECE74  38 80 00 00 */	li r4, 0
/* 801EFF38 001ECE78  4B F8 29 3D */	bl setOpen__Q24Game8WayPointFb
/* 801EFF3C 001ECE7C  80 7F 01 FC */	lwz r3, 0x1fc(r31)
/* 801EFF40 001ECE80  38 80 00 00 */	li r4, 0
/* 801EFF44 001ECE84  4B F8 29 59 */	bl setWater__Q24Game8WayPointFb
/* 801EFF48 001ECE88  80 7F 02 00 */	lwz r3, 0x200(r31)
/* 801EFF4C 001ECE8C  38 80 00 00 */	li r4, 0
/* 801EFF50 001ECE90  4B F8 29 4D */	bl setWater__Q24Game8WayPointFb
.L_801EFF54:
/* 801EFF54 001ECE94  38 60 00 00 */	li r3, 0
.L_801EFF58:
/* 801EFF58 001ECE98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EFF5C 001ECE9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801EFF60 001ECEA0  7C 08 03 A6 */	mtlr r0
/* 801EFF64 001ECEA4  38 21 00 10 */	addi r1, r1, 0x10
/* 801EFF68 001ECEA8  4E 80 00 20 */	blr 
.endfn interactBreakBridge__Q34Game10ItemBridge4ItemFRQ24Game19InteractBreakBridge

.fn generatorNewItemParm__Q34Game10ItemBridge3MgrFv, global
/* 801EFF6C 001ECEAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801EFF70 001ECEB0  7C 08 02 A6 */	mflr r0
/* 801EFF74 001ECEB4  38 60 00 08 */	li r3, 8
/* 801EFF78 001ECEB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801EFF7C 001ECEBC  4B E3 3F 29 */	bl __nw__FUl
/* 801EFF80 001ECEC0  28 03 00 00 */	cmplwi r3, 0
/* 801EFF84 001ECEC4  41 82 00 24 */	beq .L_801EFFA8
/* 801EFF88 001ECEC8  3C A0 80 4B */	lis r5, __vt__Q24Game11GenItemParm@ha
/* 801EFF8C 001ECECC  3C 80 80 4C */	lis r4, __vt__13GenBridgeParm@ha
/* 801EFF90 001ECED0  38 A5 26 24 */	addi r5, r5, __vt__Q24Game11GenItemParm@l
/* 801EFF94 001ECED4  38 00 00 00 */	li r0, 0
/* 801EFF98 001ECED8  90 A3 00 00 */	stw r5, 0(r3)
/* 801EFF9C 001ECEDC  38 84 B4 68 */	addi r4, r4, __vt__13GenBridgeParm@l
/* 801EFFA0 001ECEE0  90 83 00 00 */	stw r4, 0(r3)
/* 801EFFA4 001ECEE4  B0 03 00 04 */	sth r0, 4(r3)
.L_801EFFA8:
/* 801EFFA8 001ECEE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801EFFAC 001ECEEC  7C 08 03 A6 */	mtlr r0
/* 801EFFB0 001ECEF0  38 21 00 10 */	addi r1, r1, 0x10
/* 801EFFB4 001ECEF4  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game10ItemBridge3MgrFv

.fn generatorWrite__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParm, global
/* 801EFFB8 001ECEF8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801EFFBC 001ECEFC  7C 08 02 A6 */	mflr r0
/* 801EFFC0 001ECF00  3C 60 80 48 */	lis r3, lbl_80481228@ha
/* 801EFFC4 001ECF04  90 01 00 24 */	stw r0, 0x24(r1)
/* 801EFFC8 001ECF08  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801EFFCC 001ECF0C  3B E3 12 28 */	addi r31, r3, lbl_80481228@l
/* 801EFFD0 001ECF10  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801EFFD4 001ECF14  7C BE 2B 79 */	or. r30, r5, r5
/* 801EFFD8 001ECF18  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801EFFDC 001ECF1C  7C 9D 23 78 */	mr r29, r4
/* 801EFFE0 001ECF20  40 82 00 18 */	bne .L_801EFFF8
/* 801EFFE4 001ECF24  38 7F 00 0C */	addi r3, r31, 0xc
/* 801EFFE8 001ECF28  38 BF 00 38 */	addi r5, r31, 0x38
/* 801EFFEC 001ECF2C  38 80 03 AC */	li r4, 0x3ac
/* 801EFFF0 001ECF30  4C C6 31 82 */	crclr 6
/* 801EFFF4 001ECF34  4B E3 A6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801EFFF8:
/* 801EFFF8 001ECF38  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801EFFFC 001ECF3C  7F A3 EB 78 */	mr r3, r29
/* 801F0000 001ECF40  48 22 44 35 */	bl textWriteTab__6StreamFi
/* 801F0004 001ECF44  A0 1E 00 04 */	lhz r0, 4(r30)
/* 801F0008 001ECF48  7F A3 EB 78 */	mr r3, r29
/* 801F000C 001ECF4C  7C 04 07 34 */	extsh r4, r0
/* 801F0010 001ECF50  48 22 57 21 */	bl writeShort__6StreamFs
/* 801F0014 001ECF54  7F A3 EB 78 */	mr r3, r29
/* 801F0018 001ECF58  38 9F 00 44 */	addi r4, r31, 0x44
/* 801F001C 001ECF5C  4C C6 31 82 */	crclr 6
/* 801F0020 001ECF60  48 22 41 BD */	bl textWriteText__6StreamFPce
/* 801F0024 001ECF64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F0028 001ECF68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F002C 001ECF6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F0030 001ECF70  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F0034 001ECF74  7C 08 03 A6 */	mtlr r0
/* 801F0038 001ECF78  38 21 00 20 */	addi r1, r1, 0x20
/* 801F003C 001ECF7C  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 801F0040 001ECF80  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F0044 001ECF84  7C 08 02 A6 */	mflr r0
/* 801F0048 001ECF88  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F004C 001ECF8C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F0050 001ECF90  7C DF 33 78 */	mr r31, r6
/* 801F0054 001ECF94  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F0058 001ECF98  7C BE 2B 79 */	or. r30, r5, r5
/* 801F005C 001ECF9C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F0060 001ECFA0  7C 9D 23 78 */	mr r29, r4
/* 801F0064 001ECFA4  40 82 00 20 */	bne .L_801F0084
/* 801F0068 001ECFA8  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801F006C 001ECFAC  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801F0070 001ECFB0  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801F0074 001ECFB4  38 80 03 B6 */	li r4, 0x3b6
/* 801F0078 001ECFB8  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801F007C 001ECFBC  4C C6 31 82 */	crclr 6
/* 801F0080 001ECFC0  4B E3 A5 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0084:
/* 801F0084 001ECFC4  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801F0088 001ECFC8  38 03 30 31 */	addi r0, r3, 0x30303031@l
/* 801F008C 001ECFCC  7C 1F 00 40 */	cmplw r31, r0
/* 801F0090 001ECFD0  41 80 00 14 */	blt .L_801F00A4
/* 801F0094 001ECFD4  7F A3 EB 78 */	mr r3, r29
/* 801F0098 001ECFD8  48 22 46 CD */	bl readShort__6StreamFv
/* 801F009C 001ECFDC  B0 7E 00 04 */	sth r3, 4(r30)
/* 801F00A0 001ECFE0  48 00 00 0C */	b .L_801F00AC
.L_801F00A4:
/* 801F00A4 001ECFE4  38 00 00 00 */	li r0, 0
/* 801F00A8 001ECFE8  B0 1E 00 04 */	sth r0, 4(r30)
.L_801F00AC:
/* 801F00AC 001ECFEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F00B0 001ECFF0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F00B4 001ECFF4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F00B8 001ECFF8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F00BC 001ECFFC  7C 08 03 A6 */	mtlr r0
/* 801F00C0 001ED000  38 21 00 20 */	addi r1, r1, 0x20
/* 801F00C4 001ED004  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game10ItemBridge3MgrFR6StreamPQ24Game11GenItemParmUl

.fn __ct__Q34Game10ItemBridge3MgrFv, global
/* 801F00C8 001ED008  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801F00CC 001ED00C  7C 08 02 A6 */	mflr r0
/* 801F00D0 001ED010  90 01 04 44 */	stw r0, 0x444(r1)
/* 801F00D4 001ED014  7C 80 07 35 */	extsh. r0, r4
/* 801F00D8 001ED018  3C 80 80 48 */	lis r4, lbl_80481228@ha
/* 801F00DC 001ED01C  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801F00E0 001ED020  3B E4 12 28 */	addi r31, r4, lbl_80481228@l
/* 801F00E4 001ED024  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801F00E8 001ED028  7C 7E 1B 78 */	mr r30, r3
/* 801F00EC 001ED02C  41 82 00 0C */	beq .L_801F00F8
/* 801F00F0 001ED030  38 1E 00 94 */	addi r0, r30, 0x94
/* 801F00F4 001ED034  90 1E 00 04 */	stw r0, 4(r30)
.L_801F00F8:
/* 801F00F8 001ED038  7F C3 F3 78 */	mr r3, r30
/* 801F00FC 001ED03C  38 80 00 00 */	li r4, 0
/* 801F0100 001ED040  4B FD D3 21 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801F0104 001ED044  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBridge3Mgr@ha
/* 801F0108 001ED048  38 02 B8 1C */	addi r0, r2, lbl_80519B7C@sda21
/* 801F010C 001ED04C  38 83 B3 9C */	addi r4, r3, __vt__Q34Game10ItemBridge3Mgr@l
/* 801F0110 001ED050  7F C3 F3 78 */	mr r3, r30
/* 801F0114 001ED054  90 9E 00 00 */	stw r4, 0(r30)
/* 801F0118 001ED058  38 A4 00 74 */	addi r5, r4, 0x74
/* 801F011C 001ED05C  38 80 00 03 */	li r4, 3
/* 801F0120 001ED060  90 BE 00 30 */	stw r5, 0x30(r30)
/* 801F0124 001ED064  90 1E 00 08 */	stw r0, 8(r30)
/* 801F0128 001ED068  4B FD CC A5 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801F012C 001ED06C  38 1F 00 54 */	addi r0, r31, 0x54
/* 801F0130 001ED070  38 60 01 14 */	li r3, 0x114
/* 801F0134 001ED074  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F0138 001ED078  4B E3 3D 6D */	bl __nw__FUl
/* 801F013C 001ED07C  7C 60 1B 79 */	or. r0, r3, r3
/* 801F0140 001ED080  41 82 00 0C */	beq .L_801F014C
/* 801F0144 001ED084  48 00 00 D9 */	bl __ct__Q34Game10ItemBridge11BridgeParmsFv
/* 801F0148 001ED088  7C 60 1B 78 */	mr r0, r3
.L_801F014C:
/* 801F014C 001ED08C  90 1E 00 90 */	stw r0, 0x90(r30)
/* 801F0150 001ED090  38 7F 00 70 */	addi r3, r31, 0x70
/* 801F0154 001ED094  4B EE C0 11 */	bl DVDConvertPathToEntrynum
/* 801F0158 001ED098  38 7F 00 90 */	addi r3, r31, 0x90
/* 801F015C 001ED09C  4B EE C0 09 */	bl DVDConvertPathToEntrynum
/* 801F0160 001ED0A0  38 00 00 00 */	li r0, 0
/* 801F0164 001ED0A4  38 7F 00 70 */	addi r3, r31, 0x70
/* 801F0168 001ED0A8  90 01 00 08 */	stw r0, 8(r1)
/* 801F016C 001ED0AC  38 80 00 00 */	li r4, 0
/* 801F0170 001ED0B0  38 A0 00 00 */	li r5, 0
/* 801F0174 001ED0B4  38 C0 00 00 */	li r6, 0
/* 801F0178 001ED0B8  38 E0 00 00 */	li r7, 0
/* 801F017C 001ED0BC  39 00 00 02 */	li r8, 2
/* 801F0180 001ED0C0  39 20 00 00 */	li r9, 0
/* 801F0184 001ED0C4  39 40 00 00 */	li r10, 0
/* 801F0188 001ED0C8  4B E2 F0 01 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801F018C 001ED0CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F0190 001ED0D0  41 82 00 4C */	beq .L_801F01DC
/* 801F0194 001ED0D4  7F E4 FB 78 */	mr r4, r31
/* 801F0198 001ED0D8  38 61 00 10 */	addi r3, r1, 0x10
/* 801F019C 001ED0DC  38 A0 FF FF */	li r5, -1
/* 801F01A0 001ED0E0  48 22 57 59 */	bl __ct__9RamStreamFPvi
/* 801F01A4 001ED0E4  38 00 00 01 */	li r0, 1
/* 801F01A8 001ED0E8  2C 00 00 01 */	cmpwi r0, 1
/* 801F01AC 001ED0EC  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801F01B0 001ED0F0  40 82 00 0C */	bne .L_801F01BC
/* 801F01B4 001ED0F4  38 00 00 00 */	li r0, 0
/* 801F01B8 001ED0F8  90 01 04 24 */	stw r0, 0x424(r1)
.L_801F01BC:
/* 801F01BC 001ED0FC  80 7E 00 90 */	lwz r3, 0x90(r30)
/* 801F01C0 001ED100  38 81 00 10 */	addi r4, r1, 0x10
/* 801F01C4 001ED104  81 83 00 D8 */	lwz r12, 0xd8(r3)
/* 801F01C8 001ED108  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F01CC 001ED10C  7D 89 03 A6 */	mtctr r12
/* 801F01D0 001ED110  4E 80 04 21 */	bctrl 
/* 801F01D4 001ED114  7F E3 FB 78 */	mr r3, r31
/* 801F01D8 001ED118  4B E3 3F 01 */	bl __dla__FPv
.L_801F01DC:
/* 801F01DC 001ED11C  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801F01E0 001ED120  7F C3 F3 78 */	mr r3, r30
/* 801F01E4 001ED124  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801F01E8 001ED128  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801F01EC 001ED12C  7C 08 03 A6 */	mtlr r0
/* 801F01F0 001ED130  38 21 04 40 */	addi r1, r1, 0x440
/* 801F01F4 001ED134  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ItemBridge3MgrFv

.fn read__Q34Game10ItemBridge11BridgeParmsFR6Stream, weak
/* 801F01F8 001ED138  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F01FC 001ED13C  7C 08 02 A6 */	mflr r0
/* 801F0200 001ED140  38 63 00 DC */	addi r3, r3, 0xdc
/* 801F0204 001ED144  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0208 001ED148  48 22 35 ED */	bl read__10ParametersFR6Stream
/* 801F020C 001ED14C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0210 001ED150  7C 08 03 A6 */	mtlr r0
/* 801F0214 001ED154  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0218 001ED158  4E 80 00 20 */	blr 
.endfn read__Q34Game10ItemBridge11BridgeParmsFR6Stream

.fn __ct__Q34Game10ItemBridge11BridgeParmsFv, weak
/* 801F021C 001ED15C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0220 001ED160  7C 08 02 A6 */	mflr r0
/* 801F0224 001ED164  3C A0 73 30 */	lis r5, 0x73303030@ha
/* 801F0228 001ED168  3C 80 80 4B */	lis r4, __vt__Q24Game13CreatureParms@ha
/* 801F022C 001ED16C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0230 001ED170  38 04 AC B0 */	addi r0, r4, __vt__Q24Game13CreatureParms@l
/* 801F0234 001ED174  38 A5 30 30 */	addi r5, r5, 0x73303030@l
/* 801F0238 001ED178  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F023C 001ED17C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F0240 001ED180  7C 7E 1B 78 */	mr r30, r3
/* 801F0244 001ED184  3C 60 80 48 */	lis r3, lbl_80481228@ha
/* 801F0248 001ED188  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801F024C 001ED18C  3B E3 12 28 */	addi r31, r3, lbl_80481228@l
/* 801F0250 001ED190  38 1E 00 D4 */	addi r0, r30, 0xd4
/* 801F0254 001ED194  38 60 00 00 */	li r3, 0
/* 801F0258 001ED198  90 1E 00 00 */	stw r0, 0(r30)
/* 801F025C 001ED19C  38 1F 00 B0 */	addi r0, r31, 0xb0
/* 801F0260 001ED1A0  7F C4 F3 78 */	mr r4, r30
/* 801F0264 001ED1A4  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 801F0268 001ED1A8  90 7E 00 04 */	stw r3, 4(r30)
/* 801F026C 001ED1AC  38 7E 00 0C */	addi r3, r30, 0xc
/* 801F0270 001ED1B0  90 1E 00 08 */	stw r0, 8(r30)
/* 801F0274 001ED1B4  48 22 33 E5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F0278 001ED1B8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F027C 001ED1BC  3C A0 73 30 */	lis r5, 0x73303031@ha
/* 801F0280 001ED1C0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F0284 001ED1C4  C0 02 B8 24 */	lfs f0, lbl_80519B84@sda21(r2)
/* 801F0288 001ED1C8  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801F028C 001ED1CC  7F C4 F3 78 */	mr r4, r30
/* 801F0290 001ED1D0  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801F0294 001ED1D4  38 7E 00 34 */	addi r3, r30, 0x34
/* 801F0298 001ED1D8  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801F029C 001ED1DC  38 A5 30 31 */	addi r5, r5, 0x73303031@l
/* 801F02A0 001ED1E0  C0 02 B7 C4 */	lfs f0, lbl_80519B24@sda21(r2)
/* 801F02A4 001ED1E4  38 DF 00 D8 */	addi r6, r31, 0xd8
/* 801F02A8 001ED1E8  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801F02AC 001ED1EC  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801F02B0 001ED1F0  48 22 33 A9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F02B4 001ED1F4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F02B8 001ED1F8  3C A0 73 30 */	lis r5, 0x73303032@ha
/* 801F02BC 001ED1FC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F02C0 001ED200  C0 02 B8 24 */	lfs f0, lbl_80519B84@sda21(r2)
/* 801F02C4 001ED204  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801F02C8 001ED208  7F C4 F3 78 */	mr r4, r30
/* 801F02CC 001ED20C  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801F02D0 001ED210  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801F02D4 001ED214  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801F02D8 001ED218  38 A5 30 32 */	addi r5, r5, 0x73303032@l
/* 801F02DC 001ED21C  C0 02 B7 C4 */	lfs f0, lbl_80519B24@sda21(r2)
/* 801F02E0 001ED220  38 DF 00 E8 */	addi r6, r31, 0xe8
/* 801F02E4 001ED224  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801F02E8 001ED228  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801F02EC 001ED22C  48 22 33 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F02F0 001ED230  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F02F4 001ED234  3C A0 73 30 */	lis r5, 0x73303033@ha
/* 801F02F8 001ED238  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F02FC 001ED23C  C0 02 B8 28 */	lfs f0, lbl_80519B88@sda21(r2)
/* 801F0300 001ED240  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801F0304 001ED244  7F C4 F3 78 */	mr r4, r30
/* 801F0308 001ED248  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801F030C 001ED24C  38 7E 00 84 */	addi r3, r30, 0x84
/* 801F0310 001ED250  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801F0314 001ED254  38 A5 30 33 */	addi r5, r5, 0x73303033@l
/* 801F0318 001ED258  C0 02 B7 C4 */	lfs f0, lbl_80519B24@sda21(r2)
/* 801F031C 001ED25C  38 C2 B8 2C */	addi r6, r2, lbl_80519B8C@sda21
/* 801F0320 001ED260  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801F0324 001ED264  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801F0328 001ED268  48 22 33 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F032C 001ED26C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F0330 001ED270  3C A0 73 30 */	lis r5, 0x73303034@ha
/* 801F0334 001ED274  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F0338 001ED278  C0 02 B8 34 */	lfs f0, lbl_80519B94@sda21(r2)
/* 801F033C 001ED27C  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801F0340 001ED280  7F C4 F3 78 */	mr r4, r30
/* 801F0344 001ED284  C0 22 B8 38 */	lfs f1, lbl_80519B98@sda21(r2)
/* 801F0348 001ED288  38 7E 00 AC */	addi r3, r30, 0xac
/* 801F034C 001ED28C  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801F0350 001ED290  38 A5 30 34 */	addi r5, r5, 0x73303034@l
/* 801F0354 001ED294  C0 02 B8 3C */	lfs f0, lbl_80519B9C@sda21(r2)
/* 801F0358 001ED298  38 DF 00 F8 */	addi r6, r31, 0xf8
/* 801F035C 001ED29C  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801F0360 001ED2A0  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801F0364 001ED2A4  48 22 32 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F0368 001ED2A8  3C 80 80 4B */	lis r4, "__vt__7Parm<f>"@ha
/* 801F036C 001ED2AC  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBridge11BridgeParms@ha
/* 801F0370 001ED2B0  38 04 AC BC */	addi r0, r4, "__vt__7Parm<f>"@l
/* 801F0374 001ED2B4  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801F0378 001ED2B8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801F037C 001ED2BC  39 23 B4 5C */	addi r9, r3, __vt__Q34Game10ItemBridge11BridgeParms@l
/* 801F0380 001ED2C0  C0 02 B8 40 */	lfs f0, lbl_80519BA0@sda21(r2)
/* 801F0384 001ED2C4  39 1E 01 10 */	addi r8, r30, 0x110
/* 801F0388 001ED2C8  C0 22 B8 38 */	lfs f1, lbl_80519B98@sda21(r2)
/* 801F038C 001ED2CC  38 E0 00 00 */	li r7, 0
/* 801F0390 001ED2D0  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 801F0394 001ED2D4  38 1F 01 08 */	addi r0, r31, 0x108
/* 801F0398 001ED2D8  C0 02 B8 3C */	lfs f0, lbl_80519B9C@sda21(r2)
/* 801F039C 001ED2DC  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 801F03A0 001ED2E0  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 801F03A4 001ED2E4  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801F03A8 001ED2E8  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801F03AC 001ED2EC  38 C2 B8 44 */	addi r6, r2, lbl_80519BA4@sda21
/* 801F03B0 001ED2F0  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 801F03B4 001ED2F4  91 3E 00 D8 */	stw r9, 0xd8(r30)
/* 801F03B8 001ED2F8  91 1E 00 DC */	stw r8, 0xdc(r30)
/* 801F03BC 001ED2FC  90 FE 00 E0 */	stw r7, 0xe0(r30)
/* 801F03C0 001ED300  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 801F03C4 001ED304  48 22 32 95 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801F03C8 001ED308  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801F03CC 001ED30C  C0 42 B7 C8 */	lfs f2, lbl_80519B28@sda21(r2)
/* 801F03D0 001ED310  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801F03D4 001ED314  C0 22 B7 B0 */	lfs f1, lbl_80519B10@sda21(r2)
/* 801F03D8 001ED318  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 801F03DC 001ED31C  7F C3 F3 78 */	mr r3, r30
/* 801F03E0 001ED320  C0 02 B8 4C */	lfs f0, lbl_80519BAC@sda21(r2)
/* 801F03E4 001ED324  D0 5E 01 00 */	stfs f2, 0x100(r30)
/* 801F03E8 001ED328  D0 3E 01 08 */	stfs f1, 0x108(r30)
/* 801F03EC 001ED32C  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 801F03F0 001ED330  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F03F4 001ED334  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F03F8 001ED338  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F03FC 001ED33C  7C 08 03 A6 */	mtlr r0
/* 801F0400 001ED340  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0404 001ED344  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ItemBridge11BridgeParmsFv

.fn birth__Q34Game10ItemBridge3MgrFv, global
/* 801F0408 001ED348  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F040C 001ED34C  7C 08 02 A6 */	mflr r0
/* 801F0410 001ED350  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0414 001ED354  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F0418 001ED358  93 C1 00 08 */	stw r30, 8(r1)
/* 801F041C 001ED35C  7C 7E 1B 78 */	mr r30, r3
/* 801F0420 001ED360  38 60 02 24 */	li r3, 0x224
/* 801F0424 001ED364  4B E3 3A 81 */	bl __nw__FUl
/* 801F0428 001ED368  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F042C 001ED36C  41 82 00 CC */	beq .L_801F04F8
/* 801F0430 001ED370  38 80 04 0D */	li r4, 0x40d
/* 801F0434 001ED374  4B FD BB B5 */	bl __ct__Q24Game8BaseItemFi
/* 801F0438 001ED378  3C 60 80 4C */	lis r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
/* 801F043C 001ED37C  38 00 00 00 */	li r0, 0
/* 801F0440 001ED380  38 83 B9 00 */	addi r4, r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
/* 801F0444 001ED384  38 60 00 1C */	li r3, 0x1c
/* 801F0448 001ED388  90 9F 00 00 */	stw r4, 0(r31)
/* 801F044C 001ED38C  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F0450 001ED390  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F0454 001ED394  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F0458 001ED398  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F045C 001ED39C  4B E3 3A 49 */	bl __nw__FUl
/* 801F0460 001ED3A0  28 03 00 00 */	cmplwi r3, 0
/* 801F0464 001ED3A4  41 82 00 30 */	beq .L_801F0494
/* 801F0468 001ED3A8  3C 80 80 4C */	lis r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@ha
/* 801F046C 001ED3AC  3C A0 80 4C */	lis r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@ha
/* 801F0470 001ED3B0  38 04 B8 E8 */	addi r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@l
/* 801F0474 001ED3B4  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBridge3FSM@ha
/* 801F0478 001ED3B8  90 03 00 00 */	stw r0, 0(r3)
/* 801F047C 001ED3BC  38 C0 FF FF */	li r6, -1
/* 801F0480 001ED3C0  38 A5 B8 D0 */	addi r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@l
/* 801F0484 001ED3C4  38 04 BB E0 */	addi r0, r4, __vt__Q34Game10ItemBridge3FSM@l
/* 801F0488 001ED3C8  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F048C 001ED3CC  90 A3 00 00 */	stw r5, 0(r3)
/* 801F0490 001ED3D0  90 03 00 00 */	stw r0, 0(r3)
.L_801F0494:
/* 801F0494 001ED3D4  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F0498 001ED3D8  7F E4 FB 78 */	mr r4, r31
/* 801F049C 001ED3DC  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F04A0 001ED3E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F04A4 001ED3E4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F04A8 001ED3E8  7D 89 03 A6 */	mtctr r12
/* 801F04AC 001ED3EC  4E 80 04 21 */	bctrl 
/* 801F04B0 001ED3F0  3C 80 80 4C */	lis r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
/* 801F04B4 001ED3F4  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F04B8 001ED3F8  38 84 B6 AC */	addi r4, r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
/* 801F04BC 001ED3FC  90 9F 00 00 */	stw r4, 0(r31)
/* 801F04C0 001ED400  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F04C4 001ED404  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F04C8 001ED408  48 03 E7 05 */	bl __ct__Q24Game11TSoundEventFv
/* 801F04CC 001ED40C  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBridge4Item@ha
/* 801F04D0 001ED410  38 7F 02 04 */	addi r3, r31, 0x204
/* 801F04D4 001ED414  38 84 B4 88 */	addi r4, r4, __vt__Q34Game10ItemBridge4Item@l
/* 801F04D8 001ED418  90 9F 00 00 */	stw r4, 0(r31)
/* 801F04DC 001ED41C  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F04E0 001ED420  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F04E4 001ED424  4B FD 4C C1 */	bl __ct__Q24Game20PlatInstanceAttacherFv
/* 801F04E8 001ED428  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801F04EC 001ED42C  38 00 00 00 */	li r0, 0
/* 801F04F0 001ED430  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801F04F4 001ED434  90 1F 02 18 */	stw r0, 0x218(r31)
.L_801F04F8:
/* 801F04F8 001ED438  7F C3 F3 78 */	mr r3, r30
/* 801F04FC 001ED43C  7F E4 FB 78 */	mr r4, r31
/* 801F0500 001ED440  4B FD D3 29 */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801F0504 001ED444  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0508 001ED448  7F E3 FB 78 */	mr r3, r31
/* 801F050C 001ED44C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F0510 001ED450  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F0514 001ED454  7C 08 03 A6 */	mtlr r0
/* 801F0518 001ED458  38 21 00 10 */	addi r1, r1, 0x10
/* 801F051C 001ED45C  4E 80 00 20 */	blr 
.endfn birth__Q34Game10ItemBridge3MgrFv

.fn "generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801F0520 001ED460  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F0524 001ED464  7C 08 02 A6 */	mflr r0
/* 801F0528 001ED468  3D 00 80 4B */	lis r8, __vt__Q24Game15CreatureInitArg@ha
/* 801F052C 001ED46C  3C E0 80 4C */	lis r7, __vt__Q34Game10ItemBridge13BridgeInitArg@ha
/* 801F0530 001ED470  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F0534 001ED474  39 08 A2 F4 */	addi r8, r8, __vt__Q24Game15CreatureInitArg@l
/* 801F0538 001ED478  38 00 00 00 */	li r0, 0
/* 801F053C 001ED47C  38 E7 B3 90 */	addi r7, r7, __vt__Q34Game10ItemBridge13BridgeInitArg@l
/* 801F0540 001ED480  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F0544 001ED484  28 06 00 00 */	cmplwi r6, 0
/* 801F0548 001ED488  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F054C 001ED48C  7C BE 2B 78 */	mr r30, r5
/* 801F0550 001ED490  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F0554 001ED494  7C 9D 23 78 */	mr r29, r4
/* 801F0558 001ED498  91 01 00 08 */	stw r8, 8(r1)
/* 801F055C 001ED49C  90 E1 00 08 */	stw r7, 8(r1)
/* 801F0560 001ED4A0  B0 01 00 0C */	sth r0, 0xc(r1)
/* 801F0564 001ED4A4  41 82 00 0C */	beq .L_801F0570
/* 801F0568 001ED4A8  A0 06 00 04 */	lhz r0, 4(r6)
/* 801F056C 001ED4AC  B0 01 00 0C */	sth r0, 0xc(r1)
.L_801F0570:
/* 801F0570 001ED4B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801F0574 001ED4B4  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801F0578 001ED4B8  7D 89 03 A6 */	mtctr r12
/* 801F057C 001ED4BC  4E 80 04 21 */	bctrl 
/* 801F0580 001ED4C0  38 81 00 08 */	addi r4, r1, 8
/* 801F0584 001ED4C4  7C 7F 1B 78 */	mr r31, r3
/* 801F0588 001ED4C8  4B F4 AA 41 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801F058C 001ED4CC  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801F0590 001ED4D0  48 22 16 41 */	bl roundAng__Ff
/* 801F0594 001ED4D4  D0 3F 01 F4 */	stfs f1, 0x1f4(r31)
/* 801F0598 001ED4D8  7F E3 FB 78 */	mr r3, r31
/* 801F059C 001ED4DC  7F A4 EB 78 */	mr r4, r29
/* 801F05A0 001ED4E0  38 A0 00 00 */	li r5, 0
/* 801F05A4 001ED4E4  4B F4 AC 05 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801F05A8 001ED4E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F05AC 001ED4EC  7F E3 FB 78 */	mr r3, r31
/* 801F05B0 001ED4F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F05B4 001ED4F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F05B8 001ED4F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F05BC 001ED4FC  7C 08 03 A6 */	mtlr r0
/* 801F05C0 001ED500  38 21 00 20 */	addi r1, r1, 0x20
/* 801F05C4 001ED504  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game10ItemBridge3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn onLoadResources__Q34Game10ItemBridge3MgrFv, global
/* 801F05C8 001ED508  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F05CC 001ED50C  7C 08 02 A6 */	mflr r0
/* 801F05D0 001ED510  3C 80 80 48 */	lis r4, lbl_80481228@ha
/* 801F05D4 001ED514  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F05D8 001ED518  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801F05DC 001ED51C  3B E4 12 28 */	addi r31, r4, lbl_80481228@l
/* 801F05E0 001ED520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801F05E4 001ED524  7C 7E 1B 78 */	mr r30, r3
/* 801F05E8 001ED528  38 60 00 0C */	li r3, 0xc
/* 801F05EC 001ED52C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801F05F0 001ED530  93 81 00 10 */	stw r28, 0x10(r1)
/* 801F05F4 001ED534  4B E3 39 B9 */	bl __nwa__FUl
/* 801F05F8 001ED538  90 7E 00 88 */	stw r3, 0x88(r30)
/* 801F05FC 001ED53C  38 C0 00 00 */	li r6, 0
/* 801F0600 001ED540  38 1F 01 18 */	addi r0, r31, 0x118
/* 801F0604 001ED544  7F C3 F3 78 */	mr r3, r30
/* 801F0608 001ED548  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F060C 001ED54C  38 82 B8 50 */	addi r4, r2, lbl_80519BB0@sda21
/* 801F0610 001ED550  90 C5 00 00 */	stw r6, 0(r5)
/* 801F0614 001ED554  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F0618 001ED558  90 C5 00 04 */	stw r6, 4(r5)
/* 801F061C 001ED55C  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F0620 001ED560  90 C5 00 08 */	stw r6, 8(r5)
/* 801F0624 001ED564  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F0628 001ED568  4B FD C8 AD */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801F062C 001ED56C  7F C3 F3 78 */	mr r3, r30
/* 801F0630 001ED570  38 9F 01 34 */	addi r4, r31, 0x134
/* 801F0634 001ED574  38 A0 00 00 */	li r5, 0
/* 801F0638 001ED578  3C C0 00 02 */	lis r6, 2
/* 801F063C 001ED57C  4B FD C9 15 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F0640 001ED580  38 1F 01 44 */	addi r0, r31, 0x144
/* 801F0644 001ED584  7F C3 F3 78 */	mr r3, r30
/* 801F0648 001ED588  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F064C 001ED58C  38 82 B8 50 */	addi r4, r2, lbl_80519BB0@sda21
/* 801F0650 001ED590  4B FD C8 85 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801F0654 001ED594  7F C3 F3 78 */	mr r3, r30
/* 801F0658 001ED598  38 9F 01 60 */	addi r4, r31, 0x160
/* 801F065C 001ED59C  38 A0 00 01 */	li r5, 1
/* 801F0660 001ED5A0  3C C0 00 02 */	lis r6, 2
/* 801F0664 001ED5A4  4B FD C8 ED */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F0668 001ED5A8  38 1F 01 6C */	addi r0, r31, 0x16c
/* 801F066C 001ED5AC  7F C3 F3 78 */	mr r3, r30
/* 801F0670 001ED5B0  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F0674 001ED5B4  38 82 B8 50 */	addi r4, r2, lbl_80519BB0@sda21
/* 801F0678 001ED5B8  4B FD C8 5D */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801F067C 001ED5BC  7F C3 F3 78 */	mr r3, r30
/* 801F0680 001ED5C0  38 9F 01 88 */	addi r4, r31, 0x188
/* 801F0684 001ED5C4  38 A0 00 02 */	li r5, 2
/* 801F0688 001ED5C8  3C C0 00 02 */	lis r6, 2
/* 801F068C 001ED5CC  4B FD C8 C5 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801F0690 001ED5D0  3B 80 00 00 */	li r28, 0
/* 801F0694 001ED5D4  3B A0 00 00 */	li r29, 0
.L_801F0698:
/* 801F0698 001ED5D8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801F069C 001ED5DC  3C 80 00 04 */	lis r4, 4
/* 801F06A0 001ED5E0  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801F06A4 001ED5E4  4B E9 32 35 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801F06A8 001ED5E8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801F06AC 001ED5EC  7C 63 E8 2E */	lwzx r3, r3, r29
/* 801F06B0 001ED5F0  4B E9 33 81 */	bl makeSharedDL__12J3DModelDataFv
/* 801F06B4 001ED5F4  3B 9C 00 01 */	addi r28, r28, 1
/* 801F06B8 001ED5F8  3B BD 00 04 */	addi r29, r29, 4
/* 801F06BC 001ED5FC  2C 1C 00 03 */	cmpwi r28, 3
/* 801F06C0 001ED600  41 80 FF D8 */	blt .L_801F0698
/* 801F06C4 001ED604  38 61 00 08 */	addi r3, r1, 8
/* 801F06C8 001ED608  38 80 00 03 */	li r4, 3
/* 801F06CC 001ED60C  38 A0 00 00 */	li r5, 0
/* 801F06D0 001ED610  38 C0 00 01 */	li r6, 1
/* 801F06D4 001ED614  48 22 BD 85 */	bl setCode__Q27MapCode4CodeFiib
/* 801F06D8 001ED618  38 1F 01 18 */	addi r0, r31, 0x118
/* 801F06DC 001ED61C  7F C3 F3 78 */	mr r3, r30
/* 801F06E0 001ED620  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F06E4 001ED624  38 9F 01 98 */	addi r4, r31, 0x198
/* 801F06E8 001ED628  4B FD CA E5 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801F06EC 001ED62C  7C 60 1B 78 */	mr r0, r3
/* 801F06F0 001ED630  7F C3 F3 78 */	mr r3, r30
/* 801F06F4 001ED634  7C 1C 03 78 */	mr r28, r0
/* 801F06F8 001ED638  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 801F06FC 001ED63C  7F 84 E3 78 */	mr r4, r28
/* 801F0700 001ED640  4B FD CC 09 */	bl loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F0704 001ED644  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F0708 001ED648  38 81 00 08 */	addi r4, r1, 8
/* 801F070C 001ED64C  90 65 00 00 */	stw r3, 0(r5)
/* 801F0710 001ED650  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 801F0714 001ED654  80 63 00 00 */	lwz r3, 0(r3)
/* 801F0718 001ED658  4B F4 31 5D */	bl setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
/* 801F071C 001ED65C  7F C3 F3 78 */	mr r3, r30
/* 801F0720 001ED660  7F 84 E3 78 */	mr r4, r28
/* 801F0724 001ED664  4B FD CB 2D */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801F0728 001ED668  38 1F 01 44 */	addi r0, r31, 0x144
/* 801F072C 001ED66C  7F C3 F3 78 */	mr r3, r30
/* 801F0730 001ED670  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F0734 001ED674  38 9F 01 98 */	addi r4, r31, 0x198
/* 801F0738 001ED678  4B FD CA 95 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801F073C 001ED67C  7C 60 1B 78 */	mr r0, r3
/* 801F0740 001ED680  7F C3 F3 78 */	mr r3, r30
/* 801F0744 001ED684  7C 1C 03 78 */	mr r28, r0
/* 801F0748 001ED688  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 801F074C 001ED68C  7F 84 E3 78 */	mr r4, r28
/* 801F0750 001ED690  4B FD CB B9 */	bl loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F0754 001ED694  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F0758 001ED698  38 81 00 08 */	addi r4, r1, 8
/* 801F075C 001ED69C  90 65 00 04 */	stw r3, 4(r5)
/* 801F0760 001ED6A0  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 801F0764 001ED6A4  80 63 00 04 */	lwz r3, 4(r3)
/* 801F0768 001ED6A8  4B F4 31 0D */	bl setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
/* 801F076C 001ED6AC  7F C3 F3 78 */	mr r3, r30
/* 801F0770 001ED6B0  7F 84 E3 78 */	mr r4, r28
/* 801F0774 001ED6B4  4B FD CA DD */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801F0778 001ED6B8  38 1F 01 6C */	addi r0, r31, 0x16c
/* 801F077C 001ED6BC  7F C3 F3 78 */	mr r3, r30
/* 801F0780 001ED6C0  90 1E 00 28 */	stw r0, 0x28(r30)
/* 801F0784 001ED6C4  38 9F 01 98 */	addi r4, r31, 0x198
/* 801F0788 001ED6C8  4B FD CA 45 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801F078C 001ED6CC  7C 60 1B 78 */	mr r0, r3
/* 801F0790 001ED6D0  7F C3 F3 78 */	mr r3, r30
/* 801F0794 001ED6D4  7C 1C 03 78 */	mr r28, r0
/* 801F0798 001ED6D8  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 801F079C 001ED6DC  7F 84 E3 78 */	mr r4, r28
/* 801F07A0 001ED6E0  4B FD CB 69 */	bl loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801F07A4 001ED6E4  80 BE 00 88 */	lwz r5, 0x88(r30)
/* 801F07A8 001ED6E8  38 81 00 08 */	addi r4, r1, 8
/* 801F07AC 001ED6EC  90 65 00 08 */	stw r3, 8(r5)
/* 801F07B0 001ED6F0  80 7E 00 88 */	lwz r3, 0x88(r30)
/* 801F07B4 001ED6F4  80 63 00 08 */	lwz r3, 8(r3)
/* 801F07B8 001ED6F8  4B F4 30 BD */	bl setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
/* 801F07BC 001ED6FC  7F C3 F3 78 */	mr r3, r30
/* 801F07C0 001ED700  7F 84 E3 78 */	mr r4, r28
/* 801F07C4 001ED704  4B FD CA 8D */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801F07C8 001ED708  38 60 00 40 */	li r3, 0x40
/* 801F07CC 001ED70C  4B E3 37 E1 */	bl __nwa__FUl
/* 801F07D0 001ED710  3C 80 80 1F */	lis r4, __ct__Q34Game10ItemBridge10BridgeInfoFv@ha
/* 801F07D4 001ED714  38 A0 00 00 */	li r5, 0
/* 801F07D8 001ED718  38 84 08 28 */	addi r4, r4, __ct__Q34Game10ItemBridge10BridgeInfoFv@l
/* 801F07DC 001ED71C  38 C0 00 10 */	li r6, 0x10
/* 801F07E0 001ED720  38 E0 00 03 */	li r7, 3
/* 801F07E4 001ED724  4B ED 12 0D */	bl __construct_new_array
/* 801F07E8 001ED728  90 7E 00 8C */	stw r3, 0x8c(r30)
/* 801F07EC 001ED72C  3B 80 00 00 */	li r28, 0
.L_801F07F0:
/* 801F07F0 001ED730  7F C3 F3 78 */	mr r3, r30
/* 801F07F4 001ED734  7F 84 E3 78 */	mr r4, r28
/* 801F07F8 001ED738  48 00 00 C5 */	bl createBridgeInfo__Q34Game10ItemBridge3MgrFi
/* 801F07FC 001ED73C  3B 9C 00 01 */	addi r28, r28, 1
/* 801F0800 001ED740  2C 1C 00 03 */	cmpwi r28, 3
/* 801F0804 001ED744  41 80 FF EC */	blt .L_801F07F0
/* 801F0808 001ED748  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F080C 001ED74C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801F0810 001ED750  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801F0814 001ED754  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801F0818 001ED758  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801F081C 001ED75C  7C 08 03 A6 */	mtlr r0
/* 801F0820 001ED760  38 21 00 20 */	addi r1, r1, 0x20
/* 801F0824 001ED764  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game10ItemBridge3MgrFv

.fn __ct__Q34Game10ItemBridge10BridgeInfoFv, weak
/* 801F0828 001ED768  38 80 00 00 */	li r4, 0
/* 801F082C 001ED76C  38 00 FF FF */	li r0, -1
/* 801F0830 001ED770  90 83 00 00 */	stw r4, 0(r3)
/* 801F0834 001ED774  90 83 00 04 */	stw r4, 4(r3)
/* 801F0838 001ED778  90 83 00 08 */	stw r4, 8(r3)
/* 801F083C 001ED77C  90 03 00 0C */	stw r0, 0xc(r3)
/* 801F0840 001ED780  4E 80 00 20 */	blr 
.endfn __ct__Q34Game10ItemBridge10BridgeInfoFv

.fn getBridgeInfo__Q34Game10ItemBridge3MgrFi, global
/* 801F0844 001ED784  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0848 001ED788  7C 08 02 A6 */	mflr r0
/* 801F084C 001ED78C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0850 001ED790  38 00 00 00 */	li r0, 0
/* 801F0854 001ED794  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F0858 001ED798  7C 9F 23 79 */	or. r31, r4, r4
/* 801F085C 001ED79C  93 C1 00 08 */	stw r30, 8(r1)
/* 801F0860 001ED7A0  7C 7E 1B 78 */	mr r30, r3
/* 801F0864 001ED7A4  41 80 00 10 */	blt .L_801F0874
/* 801F0868 001ED7A8  2C 1F 00 03 */	cmpwi r31, 3
/* 801F086C 001ED7AC  40 80 00 08 */	bge .L_801F0874
/* 801F0870 001ED7B0  38 00 00 01 */	li r0, 1
.L_801F0874:
/* 801F0874 001ED7B4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F0878 001ED7B8  40 82 00 20 */	bne .L_801F0898
/* 801F087C 001ED7BC  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801F0880 001ED7C0  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801F0884 001ED7C4  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801F0888 001ED7C8  38 80 04 67 */	li r4, 0x467
/* 801F088C 001ED7CC  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801F0890 001ED7D0  4C C6 31 82 */	crclr 6
/* 801F0894 001ED7D4  4B E3 9D AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0898:
/* 801F0898 001ED7D8  80 7E 00 8C */	lwz r3, 0x8c(r30)
/* 801F089C 001ED7DC  57 E0 20 36 */	slwi r0, r31, 4
/* 801F08A0 001ED7E0  7C 63 02 14 */	add r3, r3, r0
/* 801F08A4 001ED7E4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F08A8 001ED7E8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F08AC 001ED7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F08B0 001ED7F0  7C 08 03 A6 */	mtlr r0
/* 801F08B4 001ED7F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801F08B8 001ED7F8  4E 80 00 20 */	blr 
.endfn getBridgeInfo__Q34Game10ItemBridge3MgrFi

.fn createBridgeInfo__Q34Game10ItemBridge3MgrFi, global
/* 801F08BC 001ED7FC  94 21 FD D0 */	stwu r1, -0x230(r1)
/* 801F08C0 001ED800  7C 08 02 A6 */	mflr r0
/* 801F08C4 001ED804  90 01 02 34 */	stw r0, 0x234(r1)
/* 801F08C8 001ED808  38 00 00 00 */	li r0, 0
/* 801F08CC 001ED80C  BF 21 02 14 */	stmw r25, 0x214(r1)
/* 801F08D0 001ED810  7C 99 23 79 */	or. r25, r4, r4
/* 801F08D4 001ED814  3C 80 80 48 */	lis r4, lbl_80481228@ha
/* 801F08D8 001ED818  7C 7A 1B 78 */	mr r26, r3
/* 801F08DC 001ED81C  3B E4 12 28 */	addi r31, r4, lbl_80481228@l
/* 801F08E0 001ED820  41 80 00 10 */	blt .L_801F08F0
/* 801F08E4 001ED824  2C 19 00 03 */	cmpwi r25, 3
/* 801F08E8 001ED828  40 80 00 08 */	bge .L_801F08F0
/* 801F08EC 001ED82C  38 00 00 01 */	li r0, 1
.L_801F08F0:
/* 801F08F0 001ED830  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F08F4 001ED834  40 82 00 18 */	bne .L_801F090C
/* 801F08F8 001ED838  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F08FC 001ED83C  38 BF 00 38 */	addi r5, r31, 0x38
/* 801F0900 001ED840  38 80 04 6D */	li r4, 0x46d
/* 801F0904 001ED844  4C C6 31 82 */	crclr 6
/* 801F0908 001ED848  4B E3 9D 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F090C:
/* 801F090C 001ED84C  80 7A 00 1C */	lwz r3, 0x1c(r26)
/* 801F0910 001ED850  57 20 10 3A */	slwi r0, r25, 2
/* 801F0914 001ED854  7F A3 00 2E */	lwzx r29, r3, r0
/* 801F0918 001ED858  28 1D 00 00 */	cmplwi r29, 0
/* 801F091C 001ED85C  40 82 00 18 */	bne .L_801F0934
/* 801F0920 001ED860  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F0924 001ED864  38 BF 00 38 */	addi r5, r31, 0x38
/* 801F0928 001ED868  38 80 04 6F */	li r4, 0x46f
/* 801F092C 001ED86C  4C C6 31 82 */	crclr 6
/* 801F0930 001ED870  4B E3 9D 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0934:
/* 801F0934 001ED874  3B 80 00 00 */	li r28, 0
/* 801F0938 001ED878  3B C0 00 00 */	li r30, 0
.L_801F093C:
/* 801F093C 001ED87C  7F C5 F3 78 */	mr r5, r30
/* 801F0940 001ED880  38 61 00 08 */	addi r3, r1, 8
/* 801F0944 001ED884  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 801F0948 001ED888  4C C6 31 82 */	crclr 6
/* 801F094C 001ED88C  4B ED 6A ED */	bl sprintf
/* 801F0950 001ED890  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 801F0954 001ED894  38 81 00 08 */	addi r4, r1, 8
/* 801F0958 001ED898  4B E3 E4 2D */	bl getIndex__10JUTNameTabCFPCc
/* 801F095C 001ED89C  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801F0960 001ED8A0  28 00 FF FF */	cmplwi r0, 0xffff
/* 801F0964 001ED8A4  41 82 00 08 */	beq .L_801F096C
/* 801F0968 001ED8A8  3B 9C 00 01 */	addi r28, r28, 1
.L_801F096C:
/* 801F096C 001ED8AC  3B DE 00 01 */	addi r30, r30, 1
/* 801F0970 001ED8B0  2C 1E 00 20 */	cmpwi r30, 0x20
/* 801F0974 001ED8B4  41 80 FF C8 */	blt .L_801F093C
/* 801F0978 001ED8B8  57 83 0F FE */	srwi r3, r28, 0x1f
/* 801F097C 001ED8BC  57 80 07 FE */	clrlwi r0, r28, 0x1f
/* 801F0980 001ED8C0  7C 00 1A 78 */	xor r0, r0, r3
/* 801F0984 001ED8C4  7C 03 00 51 */	subf. r0, r3, r0
/* 801F0988 001ED8C8  41 82 00 18 */	beq .L_801F09A0
/* 801F098C 001ED8CC  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F0990 001ED8D0  38 BF 00 38 */	addi r5, r31, 0x38
/* 801F0994 001ED8D4  38 80 04 7A */	li r4, 0x47a
/* 801F0998 001ED8D8  4C C6 31 82 */	crclr 6
/* 801F099C 001ED8DC  4B E3 9C A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F09A0:
/* 801F09A0 001ED8E0  57 80 0F FE */	srwi r0, r28, 0x1f
/* 801F09A4 001ED8E4  80 BA 00 8C */	lwz r5, 0x8c(r26)
/* 801F09A8 001ED8E8  57 24 20 36 */	slwi r4, r25, 4
/* 801F09AC 001ED8EC  57 83 08 3C */	slwi r3, r28, 1
/* 801F09B0 001ED8F0  7C 00 E2 14 */	add r0, r0, r28
/* 801F09B4 001ED8F4  7F 65 22 14 */	add r27, r5, r4
/* 801F09B8 001ED8F8  7C 00 0E 70 */	srawi r0, r0, 1
/* 801F09BC 001ED8FC  90 1B 00 00 */	stw r0, 0(r27)
/* 801F09C0 001ED900  93 9B 00 04 */	stw r28, 4(r27)
/* 801F09C4 001ED904  4B E3 35 E9 */	bl __nwa__FUl
/* 801F09C8 001ED908  90 7B 00 08 */	stw r3, 8(r27)
/* 801F09CC 001ED90C  3B 40 00 00 */	li r26, 0
/* 801F09D0 001ED910  3B C0 00 00 */	li r30, 0
/* 801F09D4 001ED914  48 00 00 78 */	b .L_801F0A4C
.L_801F09D8:
/* 801F09D8 001ED918  7F 45 D3 78 */	mr r5, r26
/* 801F09DC 001ED91C  38 61 00 08 */	addi r3, r1, 8
/* 801F09E0 001ED920  38 9F 01 B4 */	addi r4, r31, 0x1b4
/* 801F09E4 001ED924  4C C6 31 82 */	crclr 6
/* 801F09E8 001ED928  4B ED 6A 51 */	bl sprintf
/* 801F09EC 001ED92C  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 801F09F0 001ED930  38 81 00 08 */	addi r4, r1, 8
/* 801F09F4 001ED934  4B E3 E3 91 */	bl getIndex__10JUTNameTabCFPCc
/* 801F09F8 001ED938  7C 60 07 34 */	extsh r0, r3
/* 801F09FC 001ED93C  80 9B 00 08 */	lwz r4, 8(r27)
/* 801F0A00 001ED940  2C 00 FF FF */	cmpwi r0, -1
/* 801F0A04 001ED944  7C 64 F3 2E */	sthx r3, r4, r30
/* 801F0A08 001ED948  40 82 00 3C */	bne .L_801F0A44
/* 801F0A0C 001ED94C  3B 20 00 00 */	li r25, 0
/* 801F0A10 001ED950  48 00 00 14 */	b .L_801F0A24
.L_801F0A14:
/* 801F0A14 001ED954  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 801F0A18 001ED958  57 24 04 3E */	clrlwi r4, r25, 0x10
/* 801F0A1C 001ED95C  4B E3 E4 01 */	bl getName__10JUTNameTabCFUs
/* 801F0A20 001ED960  3B 39 00 01 */	addi r25, r25, 1
.L_801F0A24:
/* 801F0A24 001ED964  A0 1D 00 2C */	lhz r0, 0x2c(r29)
/* 801F0A28 001ED968  7C 19 00 00 */	cmpw r25, r0
/* 801F0A2C 001ED96C  41 80 FF E8 */	blt .L_801F0A14
/* 801F0A30 001ED970  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F0A34 001ED974  38 BF 01 C0 */	addi r5, r31, 0x1c0
/* 801F0A38 001ED978  38 80 04 8B */	li r4, 0x48b
/* 801F0A3C 001ED97C  4C C6 31 82 */	crclr 6
/* 801F0A40 001ED980  4B E3 9C 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0A44:
/* 801F0A44 001ED984  3B DE 00 02 */	addi r30, r30, 2
/* 801F0A48 001ED988  3B 5A 00 01 */	addi r26, r26, 1
.L_801F0A4C:
/* 801F0A4C 001ED98C  7C 1A E0 00 */	cmpw r26, r28
/* 801F0A50 001ED990  41 80 FF 88 */	blt .L_801F09D8
/* 801F0A54 001ED994  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 801F0A58 001ED998  38 82 B8 58 */	addi r4, r2, lbl_80519BB8@sda21
/* 801F0A5C 001ED99C  4B E3 E3 29 */	bl getIndex__10JUTNameTabCFPCc
/* 801F0A60 001ED9A0  7C 60 07 34 */	extsh r0, r3
/* 801F0A64 001ED9A4  2C 00 FF FF */	cmpwi r0, -1
/* 801F0A68 001ED9A8  41 82 00 0C */	beq .L_801F0A74
/* 801F0A6C 001ED9AC  90 1B 00 0C */	stw r0, 0xc(r27)
/* 801F0A70 001ED9B0  48 00 00 44 */	b .L_801F0AB4
.L_801F0A74:
/* 801F0A74 001ED9B4  38 00 FF FF */	li r0, -1
/* 801F0A78 001ED9B8  3B 20 00 00 */	li r25, 0
/* 801F0A7C 001ED9BC  90 1B 00 0C */	stw r0, 0xc(r27)
/* 801F0A80 001ED9C0  48 00 00 14 */	b .L_801F0A94
.L_801F0A84:
/* 801F0A84 001ED9C4  80 7D 00 54 */	lwz r3, 0x54(r29)
/* 801F0A88 001ED9C8  57 24 04 3E */	clrlwi r4, r25, 0x10
/* 801F0A8C 001ED9CC  4B E3 E3 91 */	bl getName__10JUTNameTabCFUs
/* 801F0A90 001ED9D0  3B 39 00 01 */	addi r25, r25, 1
.L_801F0A94:
/* 801F0A94 001ED9D4  A0 1D 00 2C */	lhz r0, 0x2c(r29)
/* 801F0A98 001ED9D8  7C 19 00 00 */	cmpw r25, r0
/* 801F0A9C 001ED9DC  41 80 FF E8 */	blt .L_801F0A84
/* 801F0AA0 001ED9E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 801F0AA4 001ED9E4  38 BF 01 E0 */	addi r5, r31, 0x1e0
/* 801F0AA8 001ED9E8  38 80 04 9C */	li r4, 0x49c
/* 801F0AAC 001ED9EC  4C C6 31 82 */	crclr 6
/* 801F0AB0 001ED9F0  4B E3 9B 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0AB4:
/* 801F0AB4 001ED9F4  BB 21 02 14 */	lmw r25, 0x214(r1)
/* 801F0AB8 001ED9F8  80 01 02 34 */	lwz r0, 0x234(r1)
/* 801F0ABC 001ED9FC  7C 08 03 A6 */	mtlr r0
/* 801F0AC0 001EDA00  38 21 02 30 */	addi r1, r1, 0x230
/* 801F0AC4 001EDA04  4E 80 00 20 */	blr 
.endfn createBridgeInfo__Q34Game10ItemBridge3MgrFi

.fn setupPlatInstanceAttacher__Q34Game10ItemBridge3MgrFPQ34Game10ItemBridge4ItemRQ24Game20PlatInstanceAttacher, global
/* 801F0AC8 001EDA08  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801F0ACC 001EDA0C  7C 08 02 A6 */	mflr r0
/* 801F0AD0 001EDA10  90 01 00 54 */	stw r0, 0x54(r1)
/* 801F0AD4 001EDA14  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801F0AD8 001EDA18  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801F0ADC 001EDA1C  7C BE 2B 78 */	mr r30, r5
/* 801F0AE0 001EDA20  93 A1 00 44 */	stw r29, 0x44(r1)
/* 801F0AE4 001EDA24  7C 9D 23 78 */	mr r29, r4
/* 801F0AE8 001EDA28  93 81 00 40 */	stw r28, 0x40(r1)
/* 801F0AEC 001EDA2C  7C 7C 1B 78 */	mr r28, r3
/* 801F0AF0 001EDA30  A0 04 02 14 */	lhz r0, 0x214(r4)
/* 801F0AF4 001EDA34  28 00 00 03 */	cmplwi r0, 3
/* 801F0AF8 001EDA38  41 80 00 20 */	blt .L_801F0B18
/* 801F0AFC 001EDA3C  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801F0B00 001EDA40  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801F0B04 001EDA44  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801F0B08 001EDA48  38 80 04 A2 */	li r4, 0x4a2
/* 801F0B0C 001EDA4C  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801F0B10 001EDA50  4C C6 31 82 */	crclr 6
/* 801F0B14 001EDA54  4B E3 9B 2D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0B18:
/* 801F0B18 001EDA58  A3 FD 02 14 */	lhz r31, 0x214(r29)
/* 801F0B1C 001EDA5C  38 00 00 00 */	li r0, 0
/* 801F0B20 001EDA60  2C 1F 00 00 */	cmpwi r31, 0
/* 801F0B24 001EDA64  41 80 00 10 */	blt .L_801F0B34
/* 801F0B28 001EDA68  2C 1F 00 03 */	cmpwi r31, 3
/* 801F0B2C 001EDA6C  40 80 00 08 */	bge .L_801F0B34
/* 801F0B30 001EDA70  38 00 00 01 */	li r0, 1
.L_801F0B34:
/* 801F0B34 001EDA74  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F0B38 001EDA78  40 82 00 20 */	bne .L_801F0B58
/* 801F0B3C 001EDA7C  3C 60 80 48 */	lis r3, lbl_80481234@ha
/* 801F0B40 001EDA80  3C A0 80 48 */	lis r5, lbl_80481260@ha
/* 801F0B44 001EDA84  38 63 12 34 */	addi r3, r3, lbl_80481234@l
/* 801F0B48 001EDA88  38 80 04 67 */	li r4, 0x467
/* 801F0B4C 001EDA8C  38 A5 12 60 */	addi r5, r5, lbl_80481260@l
/* 801F0B50 001EDA90  4C C6 31 82 */	crclr 6
/* 801F0B54 001EDA94  4B E3 9A ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_801F0B58:
/* 801F0B58 001EDA98  80 BC 00 8C */	lwz r5, 0x8c(r28)
/* 801F0B5C 001EDA9C  57 E0 20 36 */	slwi r0, r31, 4
/* 801F0B60 001EDAA0  3C 80 6E 6F */	lis r4, 0x6E6F6E65@ha
/* 801F0B64 001EDAA4  38 61 00 2C */	addi r3, r1, 0x2c
/* 801F0B68 001EDAA8  7F E5 02 14 */	add r31, r5, r0
/* 801F0B6C 001EDAAC  38 84 6E 65 */	addi r4, r4, 0x6E6F6E65@l
/* 801F0B70 001EDAB0  48 22 27 39 */	bl __ct__4ID32FUl
/* 801F0B74 001EDAB4  A0 1D 02 14 */	lhz r0, 0x214(r29)
/* 801F0B78 001EDAB8  7F C3 F3 78 */	mr r3, r30
/* 801F0B7C 001EDABC  80 DC 00 88 */	lwz r6, 0x88(r28)
/* 801F0B80 001EDAC0  7F A4 EB 78 */	mr r4, r29
/* 801F0B84 001EDAC4  54 00 10 3A */	slwi r0, r0, 2
/* 801F0B88 001EDAC8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801F0B8C 001EDACC  7C C6 00 2E */	lwzx r6, r6, r0
/* 801F0B90 001EDAD0  38 E0 00 00 */	li r7, 0
/* 801F0B94 001EDAD4  4B FD 46 29 */	bl addToMgr__Q24Game20PlatInstanceAttacherFPQ24Game8CreatureR4ID32P12PlatAttacherb
/* 801F0B98 001EDAD8  3B A0 00 00 */	li r29, 0
/* 801F0B9C 001EDADC  3B 80 00 00 */	li r28, 0
/* 801F0BA0 001EDAE0  48 00 00 6C */	b .L_801F0C0C
.L_801F0BA4:
/* 801F0BA4 001EDAE4  57 A3 0F FE */	srwi r3, r29, 0x1f
/* 801F0BA8 001EDAE8  57 A0 07 FE */	clrlwi r0, r29, 0x1f
/* 801F0BAC 001EDAEC  7C 00 1A 78 */	xor r0, r0, r3
/* 801F0BB0 001EDAF0  7C 03 00 51 */	subf. r0, r3, r0
/* 801F0BB4 001EDAF4  40 82 00 2C */	bne .L_801F0BE0
/* 801F0BB8 001EDAF8  3C 80 62 72 */	lis r4, 0x6272626B@ha
/* 801F0BBC 001EDAFC  38 61 00 20 */	addi r3, r1, 0x20
/* 801F0BC0 001EDB00  38 84 62 6B */	addi r4, r4, 0x6272626B@l
/* 801F0BC4 001EDB04  48 22 26 E5 */	bl __ct__4ID32FUl
/* 801F0BC8 001EDB08  80 BF 00 08 */	lwz r5, 8(r31)
/* 801F0BCC 001EDB0C  7F C3 F3 78 */	mr r3, r30
/* 801F0BD0 001EDB10  38 81 00 20 */	addi r4, r1, 0x20
/* 801F0BD4 001EDB14  7C A5 E2 2E */	lhzx r5, r5, r28
/* 801F0BD8 001EDB18  4B FD 48 C5 */	bl setCode__Q24Game20PlatInstanceAttacherFR4ID32Us
/* 801F0BDC 001EDB1C  48 00 00 28 */	b .L_801F0C04
.L_801F0BE0:
/* 801F0BE0 001EDB20  3C 80 62 72 */	lis r4, 0x62725F5F@ha
/* 801F0BE4 001EDB24  38 61 00 14 */	addi r3, r1, 0x14
/* 801F0BE8 001EDB28  38 84 5F 5F */	addi r4, r4, 0x62725F5F@l
/* 801F0BEC 001EDB2C  48 22 26 BD */	bl __ct__4ID32FUl
/* 801F0BF0 001EDB30  80 BF 00 08 */	lwz r5, 8(r31)
/* 801F0BF4 001EDB34  7F C3 F3 78 */	mr r3, r30
/* 801F0BF8 001EDB38  38 81 00 14 */	addi r4, r1, 0x14
/* 801F0BFC 001EDB3C  7C A5 E2 2E */	lhzx r5, r5, r28
/* 801F0C00 001EDB40  4B FD 48 9D */	bl setCode__Q24Game20PlatInstanceAttacherFR4ID32Us
.L_801F0C04:
/* 801F0C04 001EDB44  3B 9C 00 02 */	addi r28, r28, 2
/* 801F0C08 001EDB48  3B BD 00 01 */	addi r29, r29, 1
.L_801F0C0C:
/* 801F0C0C 001EDB4C  80 1F 00 04 */	lwz r0, 4(r31)
/* 801F0C10 001EDB50  7C 1D 00 00 */	cmpw r29, r0
/* 801F0C14 001EDB54  41 80 FF 90 */	blt .L_801F0BA4
/* 801F0C18 001EDB58  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F0C1C 001EDB5C  2C 00 FF FF */	cmpwi r0, -1
/* 801F0C20 001EDB60  41 82 00 28 */	beq .L_801F0C48
/* 801F0C24 001EDB64  3C 80 66 69 */	lis r4, 0x66696E6C@ha
/* 801F0C28 001EDB68  38 61 00 08 */	addi r3, r1, 8
/* 801F0C2C 001EDB6C  38 84 6E 6C */	addi r4, r4, 0x66696E6C@l
/* 801F0C30 001EDB70  48 22 26 79 */	bl __ct__4ID32FUl
/* 801F0C34 001EDB74  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F0C38 001EDB78  7F C3 F3 78 */	mr r3, r30
/* 801F0C3C 001EDB7C  38 81 00 08 */	addi r4, r1, 8
/* 801F0C40 001EDB80  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 801F0C44 001EDB84  4B FD 48 59 */	bl setCode__Q24Game20PlatInstanceAttacherFR4ID32Us
.L_801F0C48:
/* 801F0C48 001EDB88  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801F0C4C 001EDB8C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801F0C50 001EDB90  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801F0C54 001EDB94  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 801F0C58 001EDB98  83 81 00 40 */	lwz r28, 0x40(r1)
/* 801F0C5C 001EDB9C  7C 08 03 A6 */	mtlr r0
/* 801F0C60 001EDBA0  38 21 00 50 */	addi r1, r1, 0x50
/* 801F0C64 001EDBA4  4E 80 00 20 */	blr 
.endfn setupPlatInstanceAttacher__Q34Game10ItemBridge3MgrFPQ34Game10ItemBridge4ItemRQ24Game20PlatInstanceAttacher

.fn getName__Q34Game10ItemBridge13BridgeInitArgFv, weak
/* 801F0C68 001EDBA8  3C 60 80 48 */	lis r3, lbl_80481418@ha
/* 801F0C6C 001EDBAC  38 63 14 18 */	addi r3, r3, lbl_80481418@l
/* 801F0C70 001EDBB0  4E 80 00 20 */	blr 
.endfn getName__Q34Game10ItemBridge13BridgeInitArgFv

.fn __dt__Q34Game10ItemBridge3MgrFv, weak
/* 801F0C74 001EDBB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0C78 001EDBB8  7C 08 02 A6 */	mflr r0
/* 801F0C7C 001EDBBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0C80 001EDBC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F0C84 001EDBC4  7C 9F 23 78 */	mr r31, r4
/* 801F0C88 001EDBC8  93 C1 00 08 */	stw r30, 8(r1)
/* 801F0C8C 001EDBCC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801F0C90 001EDBD0  41 82 00 FC */	beq .L_801F0D8C
/* 801F0C94 001EDBD4  3C 60 80 4C */	lis r3, __vt__Q34Game10ItemBridge3Mgr@ha
/* 801F0C98 001EDBD8  38 63 B3 9C */	addi r3, r3, __vt__Q34Game10ItemBridge3Mgr@l
/* 801F0C9C 001EDBDC  90 7E 00 00 */	stw r3, 0(r30)
/* 801F0CA0 001EDBE0  38 03 00 74 */	addi r0, r3, 0x74
/* 801F0CA4 001EDBE4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F0CA8 001EDBE8  41 82 00 D4 */	beq .L_801F0D7C
/* 801F0CAC 001EDBEC  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801F0CB0 001EDBF0  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F0CB4 001EDBF4  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801F0CB8 001EDBF8  90 7E 00 00 */	stw r3, 0(r30)
/* 801F0CBC 001EDBFC  38 03 00 74 */	addi r0, r3, 0x74
/* 801F0CC0 001EDC00  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F0CC4 001EDC04  41 82 00 84 */	beq .L_801F0D48
/* 801F0CC8 001EDC08  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801F0CCC 001EDC0C  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801F0CD0 001EDC10  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801F0CD4 001EDC14  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801F0CD8 001EDC18  38 04 00 2C */	addi r0, r4, 0x2c
/* 801F0CDC 001EDC1C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F0CE0 001EDC20  41 82 00 18 */	beq .L_801F0CF8
/* 801F0CE4 001EDC24  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801F0CE8 001EDC28  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801F0CEC 001EDC2C  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801F0CF0 001EDC30  38 80 00 00 */	li r4, 0
/* 801F0CF4 001EDC34  48 22 08 95 */	bl __dt__5CNodeFv
.L_801F0CF8:
/* 801F0CF8 001EDC38  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F0CFC 001EDC3C  41 82 00 4C */	beq .L_801F0D48
/* 801F0D00 001EDC40  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801F0D04 001EDC44  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F0D08 001EDC48  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801F0D0C 001EDC4C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801F0D10 001EDC50  38 03 00 2C */	addi r0, r3, 0x2c
/* 801F0D14 001EDC54  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801F0D18 001EDC58  41 82 00 30 */	beq .L_801F0D48
/* 801F0D1C 001EDC5C  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F0D20 001EDC60  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801F0D24 001EDC64  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F0D28 001EDC68  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F0D2C 001EDC6C  41 82 00 1C */	beq .L_801F0D48
/* 801F0D30 001EDC70  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F0D34 001EDC74  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801F0D38 001EDC78  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F0D3C 001EDC7C  38 80 00 00 */	li r4, 0
/* 801F0D40 001EDC80  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801F0D44 001EDC84  48 22 08 45 */	bl __dt__5CNodeFv
.L_801F0D48:
/* 801F0D48 001EDC88  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F0D4C 001EDC8C  41 82 00 30 */	beq .L_801F0D7C
/* 801F0D50 001EDC90  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801F0D54 001EDC94  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801F0D58 001EDC98  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801F0D5C 001EDC9C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F0D60 001EDCA0  41 82 00 1C */	beq .L_801F0D7C
/* 801F0D64 001EDCA4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801F0D68 001EDCA8  38 7E 00 30 */	addi r3, r30, 0x30
/* 801F0D6C 001EDCAC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801F0D70 001EDCB0  38 80 00 00 */	li r4, 0
/* 801F0D74 001EDCB4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801F0D78 001EDCB8  48 22 08 11 */	bl __dt__5CNodeFv
.L_801F0D7C:
/* 801F0D7C 001EDCBC  7F E0 07 35 */	extsh. r0, r31
/* 801F0D80 001EDCC0  40 81 00 0C */	ble .L_801F0D8C
/* 801F0D84 001EDCC4  7F C3 F3 78 */	mr r3, r30
/* 801F0D88 001EDCC8  4B E3 33 2D */	bl __dl__FPv
.L_801F0D8C:
/* 801F0D8C 001EDCCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0D90 001EDCD0  7F C3 F3 78 */	mr r3, r30
/* 801F0D94 001EDCD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F0D98 001EDCD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801F0D9C 001EDCDC  7C 08 03 A6 */	mtlr r0
/* 801F0DA0 001EDCE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0DA4 001EDCE4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game10ItemBridge3MgrFv

.fn doNew__Q34Game10ItemBridge3MgrFv, weak
/* 801F0DA8 001EDCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0DAC 001EDCEC  7C 08 02 A6 */	mflr r0
/* 801F0DB0 001EDCF0  38 60 02 24 */	li r3, 0x224
/* 801F0DB4 001EDCF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0DB8 001EDCF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F0DBC 001EDCFC  4B E3 30 E9 */	bl __nw__FUl
/* 801F0DC0 001EDD00  7C 7F 1B 79 */	or. r31, r3, r3
/* 801F0DC4 001EDD04  41 82 00 CC */	beq .L_801F0E90
/* 801F0DC8 001EDD08  38 80 04 0D */	li r4, 0x40d
/* 801F0DCC 001EDD0C  4B FD B2 1D */	bl __ct__Q24Game8BaseItemFi
/* 801F0DD0 001EDD10  3C 60 80 4C */	lis r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
/* 801F0DD4 001EDD14  38 00 00 00 */	li r0, 0
/* 801F0DD8 001EDD18  38 83 B9 00 */	addi r4, r3, "__vt__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
/* 801F0DDC 001EDD1C  38 60 00 1C */	li r3, 0x1c
/* 801F0DE0 001EDD20  90 9F 00 00 */	stw r4, 0(r31)
/* 801F0DE4 001EDD24  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801F0DE8 001EDD28  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801F0DEC 001EDD2C  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801F0DF0 001EDD30  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801F0DF4 001EDD34  4B E3 30 B1 */	bl __nw__FUl
/* 801F0DF8 001EDD38  28 03 00 00 */	cmplwi r3, 0
/* 801F0DFC 001EDD3C  41 82 00 30 */	beq .L_801F0E2C
/* 801F0E00 001EDD40  3C 80 80 4C */	lis r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@ha
/* 801F0E04 001EDD44  3C A0 80 4C */	lis r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@ha
/* 801F0E08 001EDD48  38 04 B8 E8 */	addi r0, r4, "__vt__Q24Game38StateMachine<Q34Game10ItemBridge4Item>"@l
/* 801F0E0C 001EDD4C  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBridge3FSM@ha
/* 801F0E10 001EDD50  90 03 00 00 */	stw r0, 0(r3)
/* 801F0E14 001EDD54  38 C0 FF FF */	li r6, -1
/* 801F0E18 001EDD58  38 A5 B8 D0 */	addi r5, r5, "__vt__Q24Game33ItemFSM<Q34Game10ItemBridge4Item>"@l
/* 801F0E1C 001EDD5C  38 04 BB E0 */	addi r0, r4, __vt__Q34Game10ItemBridge3FSM@l
/* 801F0E20 001EDD60  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801F0E24 001EDD64  90 A3 00 00 */	stw r5, 0(r3)
/* 801F0E28 001EDD68  90 03 00 00 */	stw r0, 0(r3)
.L_801F0E2C:
/* 801F0E2C 001EDD6C  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801F0E30 001EDD70  7F E4 FB 78 */	mr r4, r31
/* 801F0E34 001EDD74  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801F0E38 001EDD78  81 83 00 00 */	lwz r12, 0(r3)
/* 801F0E3C 001EDD7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F0E40 001EDD80  7D 89 03 A6 */	mtctr r12
/* 801F0E44 001EDD84  4E 80 04 21 */	bctrl 
/* 801F0E48 001EDD88  3C 80 80 4C */	lis r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@ha
/* 801F0E4C 001EDD8C  38 7F 01 E0 */	addi r3, r31, 0x1e0
/* 801F0E50 001EDD90  38 84 B6 AC */	addi r4, r4, "__vt__Q24Game84WorkItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>"@l
/* 801F0E54 001EDD94  90 9F 00 00 */	stw r4, 0(r31)
/* 801F0E58 001EDD98  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F0E5C 001EDD9C  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F0E60 001EDDA0  48 03 DD 6D */	bl __ct__Q24Game11TSoundEventFv
/* 801F0E64 001EDDA4  3C 80 80 4C */	lis r4, __vt__Q34Game10ItemBridge4Item@ha
/* 801F0E68 001EDDA8  38 7F 02 04 */	addi r3, r31, 0x204
/* 801F0E6C 001EDDAC  38 84 B4 88 */	addi r4, r4, __vt__Q34Game10ItemBridge4Item@l
/* 801F0E70 001EDDB0  90 9F 00 00 */	stw r4, 0(r31)
/* 801F0E74 001EDDB4  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801F0E78 001EDDB8  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801F0E7C 001EDDBC  4B FD 43 29 */	bl __ct__Q24Game20PlatInstanceAttacherFv
/* 801F0E80 001EDDC0  C0 02 B7 B0 */	lfs f0, lbl_80519B10@sda21(r2)
/* 801F0E84 001EDDC4  38 00 00 00 */	li r0, 0
/* 801F0E88 001EDDC8  D0 1F 01 18 */	stfs f0, 0x118(r31)
/* 801F0E8C 001EDDCC  90 1F 02 18 */	stw r0, 0x218(r31)
.L_801F0E90:
/* 801F0E90 001EDDD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0E94 001EDDD4  7F E3 FB 78 */	mr r3, r31
/* 801F0E98 001EDDD8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F0E9C 001EDDDC  7C 08 03 A6 */	mtlr r0
/* 801F0EA0 001EDDE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0EA4 001EDDE4  4E 80 00 20 */	blr 
.endfn doNew__Q34Game10ItemBridge3MgrFv

.fn generatorGetID__Q34Game10ItemBridge3MgrFv, weak
/* 801F0EA8 001EDDE8  3C 60 62 72 */	lis r3, 0x62726467@ha
/* 801F0EAC 001EDDEC  38 63 64 67 */	addi r3, r3, 0x62726467@l
/* 801F0EB0 001EDDF0  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game10ItemBridge3MgrFv

.fn generatorLocalVersion__Q34Game10ItemBridge3MgrFv, weak
/* 801F0EB4 001EDDF4  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801F0EB8 001EDDF8  38 63 30 31 */	addi r3, r3, 0x30303031@l
/* 801F0EBC 001EDDFC  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game10ItemBridge3MgrFv

.fn makeTrMatrix__Q34Game10ItemBridge4ItemFv, weak
/* 801F0EC0 001EDE00  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q34Game10ItemBridge4ItemFv

.fn getCreatureName__Q34Game10ItemBridge4ItemFv, weak
/* 801F0EC4 001EDE04  38 62 B8 1C */	addi r3, r2, lbl_80519B7C@sda21
/* 801F0EC8 001EDE08  4E 80 00 20 */	blr 
.endfn getCreatureName__Q34Game10ItemBridge4ItemFv

.fn getMabiki__Q34Game10ItemBridge4ItemFv, weak
/* 801F0ECC 001EDE0C  38 63 01 EC */	addi r3, r3, 0x1ec
/* 801F0ED0 001EDE10  4E 80 00 20 */	blr 
.endfn getMabiki__Q34Game10ItemBridge4ItemFv

.fn "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv", weak
/* 801F0ED4 001EDE14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0ED8 001EDE18  7C 08 02 A6 */	mflr r0
/* 801F0EDC 001EDE1C  7C 64 1B 78 */	mr r4, r3
/* 801F0EE0 001EDE20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0EE4 001EDE24  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801F0EE8 001EDE28  81 83 00 00 */	lwz r12, 0(r3)
/* 801F0EEC 001EDE2C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F0EF0 001EDE30  7D 89 03 A6 */	mtctr r12
/* 801F0EF4 001EDE34  4E 80 04 21 */	bctrl 
/* 801F0EF8 001EDE38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0EFC 001EDE3C  7C 08 03 A6 */	mtlr r0
/* 801F0F00 001EDE40  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0F04 001EDE44  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>Fv"

.fn "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf", weak
/* 801F0F08 001EDE48  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Itemf"

.fn "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent", weak
/* 801F0F0C 001EDE4C  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle", weak
/* 801F0F10 001EDE50  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent", weak
/* 801F0F14 001EDE54  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9PlatEvent"

.fn "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent", weak
/* 801F0F18 001EDE58  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game35ItemState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemRQ24Game9CollEvent"

.fn "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg", weak
/* 801F0F1C 001EDE5C  4E 80 00 20 */	blr 
.endfn "init__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemPQ24Game8StateArg"

.fn "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F0F20 001EDE60  4E 80 00 20 */	blr 
.endfn "exec__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F0F24 001EDE64  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F0F28 001EDE68  4E 80 00 20 */	blr 
.endfn "resume__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F0F2C 001EDE6C  4E 80 00 20 */	blr 
.endfn "restart__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg", weak
/* 801F0F30 001EDE70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0F34 001EDE74  7C 08 02 A6 */	mflr r0
/* 801F0F38 001EDE78  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0F3C 001EDE7C  80 63 00 08 */	lwz r3, 8(r3)
/* 801F0F40 001EDE80  81 83 00 00 */	lwz r12, 0(r3)
/* 801F0F44 001EDE84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801F0F48 001EDE88  7D 89 03 A6 */	mtctr r12
/* 801F0F4C 001EDE8C  4E 80 04 21 */	bctrl 
/* 801F0F50 001EDE90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0F54 001EDE94  7C 08 03 A6 */	mtlr r0
/* 801F0F58 001EDE98  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0F5C 001EDE9C  4E 80 00 20 */	blr 
.endfn "transit__Q24Game34FSMState<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"

.fn "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F0F60 001EDEA0  4E 80 00 20 */	blr 
.endfn "init__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "create__Q24Game38StateMachine<Q34Game10ItemBridge4Item>Fi", weak
/* 801F0F64 001EDEA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F0F68 001EDEA8  7C 08 02 A6 */	mflr r0
/* 801F0F6C 001EDEAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F0F70 001EDEB0  38 00 00 00 */	li r0, 0
/* 801F0F74 001EDEB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801F0F78 001EDEB8  7C 7F 1B 78 */	mr r31, r3
/* 801F0F7C 001EDEBC  90 83 00 0C */	stw r4, 0xc(r3)
/* 801F0F80 001EDEC0  90 03 00 08 */	stw r0, 8(r3)
/* 801F0F84 001EDEC4  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F0F88 001EDEC8  54 03 10 3A */	slwi r3, r0, 2
/* 801F0F8C 001EDECC  4B E3 30 21 */	bl __nwa__FUl
/* 801F0F90 001EDED0  90 7F 00 04 */	stw r3, 4(r31)
/* 801F0F94 001EDED4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F0F98 001EDED8  54 03 10 3A */	slwi r3, r0, 2
/* 801F0F9C 001EDEDC  4B E3 30 11 */	bl __nwa__FUl
/* 801F0FA0 001EDEE0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801F0FA4 001EDEE4  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801F0FA8 001EDEE8  54 03 10 3A */	slwi r3, r0, 2
/* 801F0FAC 001EDEEC  4B E3 30 01 */	bl __nwa__FUl
/* 801F0FB0 001EDEF0  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801F0FB4 001EDEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F0FB8 001EDEF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801F0FBC 001EDEFC  7C 08 03 A6 */	mtlr r0
/* 801F0FC0 001EDF00  38 21 00 10 */	addi r1, r1, 0x10
/* 801F0FC4 001EDF04  4E 80 00 20 */	blr 
.endfn "create__Q24Game38StateMachine<Q34Game10ItemBridge4Item>Fi"

.fn "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg", weak
/* 801F0FC8 001EDF08  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801F0FCC 001EDF0C  7C 08 02 A6 */	mflr r0
/* 801F0FD0 001EDF10  90 01 00 24 */	stw r0, 0x24(r1)
/* 801F0FD4 001EDF14  54 A0 10 3A */	slwi r0, r5, 2
/* 801F0FD8 001EDF18  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801F0FDC 001EDF1C  7C 7B 1B 78 */	mr r27, r3
/* 801F0FE0 001EDF20  7C 9C 23 78 */	mr r28, r4
/* 801F0FE4 001EDF24  7C DD 33 78 */	mr r29, r6
/* 801F0FE8 001EDF28  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801F0FEC 001EDF2C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801F0FF0 001EDF30  28 1E 00 00 */	cmplwi r30, 0
/* 801F0FF4 001EDF34  7F E3 00 2E */	lwzx r31, r3, r0
/* 801F0FF8 001EDF38  41 82 00 20 */	beq .L_801F1018
/* 801F0FFC 001EDF3C  7F C3 F3 78 */	mr r3, r30
/* 801F1000 001EDF40  81 9E 00 00 */	lwz r12, 0(r30)
/* 801F1004 001EDF44  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801F1008 001EDF48  7D 89 03 A6 */	mtctr r12
/* 801F100C 001EDF4C  4E 80 04 21 */	bctrl 
/* 801F1010 001EDF50  80 1E 00 04 */	lwz r0, 4(r30)
/* 801F1014 001EDF54  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801F1018:
/* 801F1018 001EDF58  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801F101C 001EDF5C  7C 1F 00 00 */	cmpw r31, r0
/* 801F1020 001EDF60  41 80 00 08 */	blt .L_801F1028
.L_801F1024:
/* 801F1024 001EDF64  48 00 00 00 */	b .L_801F1024
.L_801F1028:
/* 801F1028 001EDF68  80 7B 00 04 */	lwz r3, 4(r27)
/* 801F102C 001EDF6C  57 E0 10 3A */	slwi r0, r31, 2
/* 801F1030 001EDF70  7F 84 E3 78 */	mr r4, r28
/* 801F1034 001EDF74  7F A5 EB 78 */	mr r5, r29
/* 801F1038 001EDF78  7C 63 00 2E */	lwzx r3, r3, r0
/* 801F103C 001EDF7C  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801F1040 001EDF80  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1044 001EDF84  81 8C 00 08 */	lwz r12, 8(r12)
/* 801F1048 001EDF88  7D 89 03 A6 */	mtctr r12
/* 801F104C 001EDF8C  4E 80 04 21 */	bctrl 
/* 801F1050 001EDF90  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801F1054 001EDF94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801F1058 001EDF98  7C 08 03 A6 */	mtlr r0
/* 801F105C 001EDF9C  38 21 00 20 */	addi r1, r1, 0x20
/* 801F1060 001EDFA0  4E 80 00 20 */	blr 
.endfn "transit__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4ItemiPQ24Game8StateArg"

.fn "registerState__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ24Game34FSMState<Q34Game10ItemBridge4Item>", weak
/* 801F1064 001EDFA4  80 C3 00 08 */	lwz r6, 8(r3)
/* 801F1068 001EDFA8  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F106C 001EDFAC  7C 06 00 00 */	cmpw r6, r0
/* 801F1070 001EDFB0  4C 80 00 20 */	bgelr 
/* 801F1074 001EDFB4  80 A3 00 04 */	lwz r5, 4(r3)
/* 801F1078 001EDFB8  54 C0 10 3A */	slwi r0, r6, 2
/* 801F107C 001EDFBC  7C 85 01 2E */	stwx r4, r5, r0
/* 801F1080 001EDFC0  80 A4 00 04 */	lwz r5, 4(r4)
/* 801F1084 001EDFC4  2C 05 00 00 */	cmpwi r5, 0
/* 801F1088 001EDFC8  41 80 00 10 */	blt .L_801F1098
/* 801F108C 001EDFCC  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801F1090 001EDFD0  7C 05 00 00 */	cmpw r5, r0
/* 801F1094 001EDFD4  41 80 00 0C */	blt .L_801F10A0
.L_801F1098:
/* 801F1098 001EDFD8  38 00 00 00 */	li r0, 0
/* 801F109C 001EDFDC  48 00 00 08 */	b .L_801F10A4
.L_801F10A0:
/* 801F10A0 001EDFE0  38 00 00 01 */	li r0, 1
.L_801F10A4:
/* 801F10A4 001EDFE4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801F10A8 001EDFE8  4D 82 00 20 */	beqlr 
/* 801F10AC 001EDFEC  90 64 00 08 */	stw r3, 8(r4)
/* 801F10B0 001EDFF0  80 03 00 08 */	lwz r0, 8(r3)
/* 801F10B4 001EDFF4  80 C4 00 04 */	lwz r6, 4(r4)
/* 801F10B8 001EDFF8  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801F10BC 001EDFFC  54 00 10 3A */	slwi r0, r0, 2
/* 801F10C0 001EE000  7C C5 01 2E */	stwx r6, r5, r0
/* 801F10C4 001EE004  80 04 00 04 */	lwz r0, 4(r4)
/* 801F10C8 001EE008  80 A3 00 08 */	lwz r5, 8(r3)
/* 801F10CC 001EE00C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801F10D0 001EE010  54 00 10 3A */	slwi r0, r0, 2
/* 801F10D4 001EE014  7C A4 01 2E */	stwx r5, r4, r0
/* 801F10D8 001EE018  80 83 00 08 */	lwz r4, 8(r3)
/* 801F10DC 001EE01C  38 04 00 01 */	addi r0, r4, 1
/* 801F10E0 001EE020  90 03 00 08 */	stw r0, 8(r3)
/* 801F10E4 001EE024  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ24Game34FSMState<Q34Game10ItemBridge4Item>"

.fn "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item", weak
/* 801F10E8 001EE028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F10EC 001EE02C  7C 08 02 A6 */	mflr r0
/* 801F10F0 001EE030  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F10F4 001EE034  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801F10F8 001EE038  28 03 00 00 */	cmplwi r3, 0
/* 801F10FC 001EE03C  41 82 00 14 */	beq .L_801F1110
/* 801F1100 001EE040  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1104 001EE044  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801F1108 001EE048  7D 89 03 A6 */	mtctr r12
/* 801F110C 001EE04C  4E 80 04 21 */	bctrl 
.L_801F1110:
/* 801F1110 001EE050  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F1114 001EE054  7C 08 03 A6 */	mtlr r0
/* 801F1118 001EE058  38 21 00 10 */	addi r1, r1, 0x10
/* 801F111C 001EE05C  4E 80 00 20 */	blr 
.endfn "exec__Q24Game38StateMachine<Q34Game10ItemBridge4Item>FPQ34Game10ItemBridge4Item"

.fn "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent", weak
/* 801F1120 001EE060  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F1124 001EE064  7C 08 02 A6 */	mflr r0
/* 801F1128 001EE068  7C 66 1B 78 */	mr r6, r3
/* 801F112C 001EE06C  7C 85 23 78 */	mr r5, r4
/* 801F1130 001EE070  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F1134 001EE074  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F1138 001EE078  28 03 00 00 */	cmplwi r3, 0
/* 801F113C 001EE07C  41 82 00 18 */	beq .L_801F1154
/* 801F1140 001EE080  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1144 001EE084  7C C4 33 78 */	mr r4, r6
/* 801F1148 001EE088  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801F114C 001EE08C  7D 89 03 A6 */	mtctr r12
/* 801F1150 001EE090  4E 80 04 21 */	bctrl 
.L_801F1154:
/* 801F1154 001EE094  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F1158 001EE098  7C 08 03 A6 */	mtlr r0
/* 801F115C 001EE09C  38 21 00 10 */	addi r1, r1, 0x10
/* 801F1160 001EE0A0  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"

.fn "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent", weak
/* 801F1164 001EE0A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F1168 001EE0A8  7C 08 02 A6 */	mflr r0
/* 801F116C 001EE0AC  7C 66 1B 78 */	mr r6, r3
/* 801F1170 001EE0B0  7C 85 23 78 */	mr r5, r4
/* 801F1174 001EE0B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F1178 001EE0B8  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F117C 001EE0BC  28 03 00 00 */	cmplwi r3, 0
/* 801F1180 001EE0C0  41 82 00 18 */	beq .L_801F1198
/* 801F1184 001EE0C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1188 001EE0C8  7C C4 33 78 */	mr r4, r6
/* 801F118C 001EE0CC  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801F1190 001EE0D0  7D 89 03 A6 */	mtctr r12
/* 801F1194 001EE0D4  4E 80 04 21 */	bctrl 
.L_801F1198:
/* 801F1198 001EE0D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F119C 001EE0DC  7C 08 03 A6 */	mtlr r0
/* 801F11A0 001EE0E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801F11A4 001EE0E4  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent", weak
/* 801F11A8 001EE0E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F11AC 001EE0EC  7C 08 02 A6 */	mflr r0
/* 801F11B0 001EE0F0  7C 66 1B 78 */	mr r6, r3
/* 801F11B4 001EE0F4  7C 85 23 78 */	mr r5, r4
/* 801F11B8 001EE0F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F11BC 001EE0FC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F11C0 001EE100  28 03 00 00 */	cmplwi r3, 0
/* 801F11C4 001EE104  41 82 00 18 */	beq .L_801F11DC
/* 801F11C8 001EE108  81 83 00 00 */	lwz r12, 0(r3)
/* 801F11CC 001EE10C  7C C4 33 78 */	mr r4, r6
/* 801F11D0 001EE110  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801F11D4 001EE114  7D 89 03 A6 */	mtctr r12
/* 801F11D8 001EE118  4E 80 04 21 */	bctrl 
.L_801F11DC:
/* 801F11DC 001EE11C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F11E0 001EE120  7C 08 03 A6 */	mtlr r0
/* 801F11E4 001EE124  38 21 00 10 */	addi r1, r1, 0x10
/* 801F11E8 001EE128  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle", weak
/* 801F11EC 001EE12C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801F11F0 001EE130  7C 08 02 A6 */	mflr r0
/* 801F11F4 001EE134  7C 66 1B 78 */	mr r6, r3
/* 801F11F8 001EE138  7C 85 23 78 */	mr r5, r4
/* 801F11FC 001EE13C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801F1200 001EE140  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801F1204 001EE144  28 03 00 00 */	cmplwi r3, 0
/* 801F1208 001EE148  41 82 00 18 */	beq .L_801F1220
/* 801F120C 001EE14C  81 83 00 00 */	lwz r12, 0(r3)
/* 801F1210 001EE150  7C C4 33 78 */	mr r4, r6
/* 801F1214 001EE154  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801F1218 001EE158  7D 89 03 A6 */	mtctr r12
/* 801F121C 001EE15C  4E 80 04 21 */	bctrl 
.L_801F1220:
/* 801F1220 001EE160  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801F1224 001EE164  7C 08 03 A6 */	mtlr r0
/* 801F1228 001EE168  38 21 00 10 */	addi r1, r1, 0x10
/* 801F122C 001EE16C  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FPQ23Sys8Triangle"

.fn "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent", weak
/* 801F1230 001EE170  38 63 FE 88 */	addi r3, r3, -376
/* 801F1234 001EE174  4B FF FE EC */	b "onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game83FSMItem<Q34Game10ItemBridge4Item,Q34Game10ItemBridge3FSM,Q34Game10ItemBridge5State>FRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q34Game10ItemBridge3MgrFv", weak
/* 801F1238 001EE178  38 63 FF D0 */	addi r3, r3, -48
/* 801F123C 001EE17C  4B FF FA 38 */	b __dt__Q34Game10ItemBridge3MgrFv
.endfn "@48@__dt__Q34Game10ItemBridge3MgrFv"
