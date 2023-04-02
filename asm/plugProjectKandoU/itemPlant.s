.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804808F0, local
	.asciz "itemPlant"
.endobj lbl_804808F0
.balign 4
.obj lbl_804808FC, local
	.asciz "itemPlant.cpp"
.endobj lbl_804808FC
.balign 4
.obj lbl_8048090C, local
	.asciz "P2Assert"
.endobj lbl_8048090C
.balign 4
.obj lbl_80480918, local
	.asciz "m %.1f (%d/%d)"
.endobj lbl_80480918
.balign 4
.obj lbl_80480928, local
	.asciz "%.1f %.1f"
.endobj lbl_80480928
.balign 4
.obj lbl_80480934, local
	.asciz "kuki_jnt1"
.endobj lbl_80480934
.balign 4
.obj lbl_80480940, local
	.asciz "kuki_jnt2"
.endobj lbl_80480940
.balign 4
.obj lbl_8048094C, local
	.asciz "kuki_jnt3"
.endobj lbl_8048094C
.balign 4
.obj lbl_80480958, local
	.asciz "kuki_jnt4"
.endobj lbl_80480958
.balign 4
.obj lbl_80480964, local
	.asciz "user/Kando/objects/plants"
.endobj lbl_80480964
.balign 4
.obj lbl_80480980, local
	.asciz "user/Abe/item/plantParms.txt"
.endobj lbl_80480980
.balign 4
.obj lbl_804809A0, local
	.asciz "Creature::Property"
.endobj lbl_804809A0
.balign 4
.obj lbl_804809B4, local
	.asciz "friction(not used)"
.endobj lbl_804809B4
.balign 4
.obj lbl_804809C8, local
	.asciz "wallReflection"
.endobj lbl_804809C8
.balign 4
.obj lbl_804809D8, local
	.asciz "faceDirAdjust"
.endobj lbl_804809D8
.balign 4
.obj lbl_804809E8, local
	.asciz "bounceFactor"
.endobj lbl_804809E8
.balign 4
.obj lbl_804809F8, local
	.asciz "Plant::Parms"
.endobj lbl_804809F8
.balign 4
.obj lbl_80480A08, local # Shift-JIS
	.4byte 0x90AC92B7
	.4byte 0x8E9E8AD4
	.4byte 0x288FAC81
	.4byte 0xA8928629
	.byte 0
.endobj lbl_80480A08
.balign 4
.obj lbl_80480A1C, local # Shift-JIS
	.4byte 0x90AC92B7
	.4byte 0x8E9E8AD4
	.4byte 0x28928681
	.4byte 0xA891E529
	.byte 0
.endobj lbl_80480A1C
.balign 4
.obj lbl_80480A30, local # Shift-JIS
	.4byte 0x8368838D
	.4byte 0x83628376
	.4byte 0x82B782E9
	.4byte 0x835F8381
	.4byte 0x815B8357
	.byte 0
.endobj lbl_80480A30
.balign 4
.obj lbl_80480A48, local # Shift-JIS
	.4byte 0x8EC082F0
	.4byte 0x82C282AF
	.4byte 0x82E982DC
	.4byte 0x82C582CC
	.4byte 0x8E9E8AD4
	.byte 0
.endobj lbl_80480A48
.balign 4
.obj lbl_80480A60, local # Shift-JIS
	.4byte 0x8EC08DC4
	.4byte 0x90B68E9E
	.4byte 0x8AD40000
.endobj lbl_80480A60
.balign 4
.obj lbl_80480A6C, local # Shift-JIS
	.4byte 0x958582E9
	.4byte 0x82DC82C5
	.4byte 0x82CC8E9E
	.4byte 0x8AD40000
.endobj lbl_80480A6C
.balign 4
.obj lbl_80480A7C, local
	.asciz "model.bmd"
.endobj lbl_80480A7C
.balign 4
.obj lbl_80480A88, local
	.asciz "model.bpk"
.endobj lbl_80480A88
.balign 4
.obj lbl_80480A94, local
	.asciz "texts.szs"
.endobj lbl_80480A94
.balign 4
.obj lbl_80480AA0, local
	.asciz "plantAnimMgr.txt"
.endobj lbl_80480AA0
.balign 4
.obj lbl_80480AB4, local # Shift-JIS
	.4byte 0x09238EC0
	.4byte 0x835E8343
	.4byte 0x83760D0A
	.byte 0
.endobj lbl_80480AB4
.balign 4
.obj lbl_80480AC4, local # Vector3f
	.float 33.965
	.float 0.0
	.float 0.0
.endobj lbl_80480AC4
.obj lbl_80480AD0, local # Vector3f
	.float 25.463
	.float 8.0
	.float -8.0
.endobj lbl_80480AD0
.obj lbl_80480ADC, local # Vector3f
	.float 25.463
	.float 8.0
	.float 8.0
.endobj lbl_80480ADC
.obj lbl_80480AE8, local # Vector3f
	.float 25.463
	.float -8.0
	.float -8.0
.endobj lbl_80480AE8
.obj lbl_80480AF4, local # Vector3f
	.float 25.463
	.float -8.0
	.float 8.0
.endobj lbl_80480AF4
.balign 4
.obj lbl_80480B00, local
	.asciz "PelletInitArg"
.endobj lbl_80480B00

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game9ItemPlant9FruitSlot, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game9ItemPlant9FruitSlotFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game9ItemPlant9FruitSlot
.obj __vt__12GenPlantParm, weak
	.4byte 0
	.4byte 0
	.4byte getShapeID__Q24Game11GenItemParmFv
.endobj __vt__12GenPlantParm
.obj __vt__Q34Game9ItemPlant3Mgr, global
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
	.4byte onLoadResources__Q34Game9ItemPlant3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game9ItemPlant3MgrFv
	.4byte "generatorBirth__Q34Game9ItemPlant3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q34Game9ItemPlant3MgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q34Game9ItemPlant3MgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game9ItemPlant3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte doNew__Q34Game9ItemPlant3MgrFv
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q34Game9ItemPlant3MgrFv
	.4byte birth__Q34Game9ItemPlant3MgrFv
.endobj __vt__Q34Game9ItemPlant3Mgr
.obj __vt__Q34Game9ItemPlant10PlantParms, weak
	.4byte 0
	.4byte 0
	.4byte read__Q34Game9ItemPlant10PlantParmsFR6Stream
.endobj __vt__Q34Game9ItemPlant10PlantParms
.obj __vt__Q23efx11TTsuyuGrow2, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TTsuyuGrow2
.obj __vt__Q23efx11TTsuyuGrow1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TTsuyuGrow1
.obj __vt__Q34Game9ItemPlant5Plant, global
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
	.4byte constructor__Q34Game9ItemPlant4ItemFv
	.4byte onInit__Q34Game9ItemPlant5PlantFPQ24Game15CreatureInitArg
	.4byte onKill__Q34Game9ItemPlant5PlantFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q34Game9ItemPlant5PlantFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q34Game9ItemPlant5PlantFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q34Game9ItemPlant4ItemFv
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
	.4byte "bounceCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9PlatEvent"
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
	.4byte onStickStart__Q34Game9ItemPlant4ItemFPQ24Game8Creature
	.4byte onStickEnd__Q34Game9ItemPlant4ItemFPQ24Game8Creature
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
	.4byte "@376@onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q34Game9ItemPlant5PlantFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q34Game9ItemPlant4ItemFv
	.4byte do_updateLOD__Q34Game9ItemPlant5PlantFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q34Game9ItemPlant4ItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q34Game9ItemPlant5PlantFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q34Game9ItemPlant4ItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q34Game9ItemPlant4ItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game9ItemPlant5PlantFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game9ItemPlant4ItemFv
	.4byte "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
	.4byte hasFruits__Q34Game9ItemPlant5PlantFv
	.4byte getFruitsNum__Q34Game9ItemPlant5PlantFv
	.4byte "getNearestFruit__Q34Game9ItemPlant5PlantFR10Vector3<f>"
	.4byte bearFruits__Q34Game9ItemPlant5PlantFv
	.4byte killFruits__Q34Game9ItemPlant5PlantFv
	.4byte dropFruit__Q34Game9ItemPlant5PlantFi
	.4byte setColor__Q34Game9ItemPlant5PlantFf
	.4byte startColorMotion__Q34Game9ItemPlant4ItemFi
	.4byte updateColorMotion__Q34Game9ItemPlant4ItemFf
	.4byte startMotion__Q34Game9ItemPlant5PlantFi
.endobj __vt__Q34Game9ItemPlant5Plant
.obj __vt__Q34Game9ItemPlant4Item, global
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
	.4byte constructor__Q34Game9ItemPlant4ItemFv
	.4byte onInit__Q34Game9ItemPlant4ItemFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q24Game8BaseItemFf
	.4byte doDirectDraw__Q34Game9ItemPlant4ItemFR8Graphics
	.4byte getBodyRadius__Q24Game8CreatureFv
	.4byte getCellRadius__Q24Game8CreatureFv
	.4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
	.4byte getFaceDir__Q24Game8BaseItemFv
	.4byte "setVelocity__Q24Game8BaseItemFR10Vector3<f>"
	.4byte getVelocity__Q24Game8BaseItemFv
	.4byte "onSetPosition__Q24Game8BaseItemFR10Vector3<f>"
	.4byte "onSetPositionPost__Q24Game8CreatureFR10Vector3<f>"
	.4byte updateTrMatrix__Q34Game9ItemPlant4ItemFv
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
	.4byte "bounceCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9PlatEvent"
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
	.4byte onStickStart__Q34Game9ItemPlant4ItemFPQ24Game8Creature
	.4byte onStickEnd__Q34Game9ItemPlant4ItemFPQ24Game8Creature
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
	.4byte "@376@onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q34Game9ItemPlant4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q34Game9ItemPlant4ItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q24Game8BaseItemFv
	.4byte interactAttack__Q34Game9ItemPlant4ItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q34Game9ItemPlant4ItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q34Game9ItemPlant4ItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q24Game8BaseItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game9ItemPlant4ItemFv
	.4byte "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
	.4byte hasFruits__Q34Game9ItemPlant4ItemFv
	.4byte getFruitsNum__Q34Game9ItemPlant4ItemFv
	.4byte "getNearestFruit__Q34Game9ItemPlant4ItemFR10Vector3<f>"
	.4byte bearFruits__Q34Game9ItemPlant4ItemFv
	.4byte killFruits__Q34Game9ItemPlant4ItemFv
	.4byte dropFruit__Q34Game9ItemPlant4ItemFi
	.4byte setColor__Q34Game9ItemPlant4ItemFf
	.4byte startColorMotion__Q34Game9ItemPlant4ItemFi
	.4byte updateColorMotion__Q34Game9ItemPlant4ItemFf
	.4byte startMotion__Q34Game9ItemPlant4ItemFi
.endobj __vt__Q34Game9ItemPlant4Item
.obj "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"
.obj "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"
.obj "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>", weak
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
	.4byte "bounceCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FPQ23Sys8Triangle"
	.4byte "collisionCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9CollEvent"
	.4byte "platCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9PlatEvent"
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
	.4byte "@376@onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte "doAI__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv"
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
	.4byte "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
.endobj "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"
.obj __vt__Q34Game9ItemPlant11KareruState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
	.4byte cleanup__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Itemf
	.4byte onKeyEvent__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
	.4byte eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
	.4byte eventHaero__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item
.endobj __vt__Q34Game9ItemPlant11KareruState
.obj __vt__Q34Game9ItemPlant11GrowUpState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item
	.4byte cleanup__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Itemf
	.4byte onKeyEvent__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
	.4byte eventKarero__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item
	.4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
.endobj __vt__Q34Game9ItemPlant11GrowUpState
.obj __vt__Q34Game9ItemPlant12DamagedState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item
	.4byte cleanup__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Itemf
	.4byte onKeyEvent__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
	.4byte eventKarero__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item
	.4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
.endobj __vt__Q34Game9ItemPlant12DamagedState
.obj __vt__Q34Game9ItemPlant11NormalState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
	.4byte cleanup__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte onDamage__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Itemf
	.4byte "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
	.4byte eventKarero__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item
	.4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
.endobj __vt__Q34Game9ItemPlant11NormalState
.obj __vt__Q34Game9ItemPlant5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Itemf"
	.4byte "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
	.4byte eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
	.4byte eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item
.endobj __vt__Q34Game9ItemPlant5State
.obj "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte "onDamage__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Itemf"
	.4byte "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"
	.4byte "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"
	.4byte "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"
	.4byte "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"
.endobj "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"
.obj "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg"
	.4byte "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
.endobj "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"
.obj __vt__Q34Game9ItemPlant3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemPlant3FSMFPQ34Game9ItemPlant4Item
	.4byte "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"
	.4byte "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"
.endobj __vt__Q34Game9ItemPlant3FSM

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mgr__Q24Game9ItemPlant, global
	.skip 0x4
.endobj mgr__Q24Game9ItemPlant

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519800, local
	.float 0.0
.endobj lbl_80519800
.obj lbl_80519804, local
	.float 1.0
.endobj lbl_80519804
.obj lbl_80519808, local
	.float 1.5
.endobj lbl_80519808
.obj lbl_8051980C, local
	.float 110.0
.endobj lbl_8051980C
.balign 4
.obj lbl_80519810, local
	.asciz "%d"
.endobj lbl_80519810
.balign 4
.obj lbl_80519814, local
	.float -1.0
.endobj lbl_80519814
.obj lbl_80519818, local # pi
	.float 3.1415927
.endobj lbl_80519818
.obj lbl_8051981C, local
	.float 1023.5
.endobj lbl_8051981C
.obj lbl_80519820, local # pi/2
	.float 1.5707964
.endobj lbl_80519820
.obj lbl_80519824, local
	.float 80.0
.endobj lbl_80519824
.obj lbl_80519828, local
	.float 1.6
.endobj lbl_80519828
.obj lbl_8051982C, local
	.float 0.69813174
.endobj lbl_8051982C
.obj lbl_80519830, local
	.float -0.5235988
.endobj lbl_80519830
.obj lbl_80519834, local
	.float 0.1
.endobj lbl_80519834
.obj lbl_80519838, local
	.float 0.5
.endobj lbl_80519838
.obj lbl_8051983C, local
	.float -325.9493
.endobj lbl_8051983C
.obj lbl_80519840, local
	.float 325.9493
.endobj lbl_80519840
.obj lbl_80519844, local
	.float 20.0
.endobj lbl_80519844
.obj lbl_80519848, local
	.float 400.0
.endobj lbl_80519848
.obj lbl_8051984C, local
	.float 10.0
.endobj lbl_8051984C
.obj lbl_80519850, local
	.float 30.0
.endobj lbl_80519850
.balign 8
.obj lbl_80519858, local
	.8byte 0x4330000080000000
.endobj lbl_80519858
.obj lbl_80519860, local
	.float 150.0
.endobj lbl_80519860
.obj lbl_80519864, local
	.float 12.0
.endobj lbl_80519864
.obj lbl_80519868, local
	.float 24.0
.endobj lbl_80519868
.obj lbl_8051986C, local
	.float 8.0
.endobj lbl_8051986C
.obj lbl_80519870, local
	.float 32768.0
.endobj lbl_80519870
.obj lbl_80519874, local
	.float 3.0
.endobj lbl_80519874
.obj lbl_80519878, local
	.float 0.6108653
.endobj lbl_80519878
.balign 4
.obj lbl_8051987C, local
	.asciz "Plant"
.endobj lbl_8051987C
.balign 4
.obj lbl_80519884, local
	.float 0.25
.endobj lbl_80519884
.balign 4
.obj lbl_80519888, local
	.asciz "accel"
.endobj lbl_80519888
.balign 4
.obj lbl_80519890, local
	.float 0.01
.endobj lbl_80519890
.obj lbl_80519894, local
	.float 2.0
.endobj lbl_80519894
.obj lbl_80519898, local
	.float 0.3
.endobj lbl_80519898
.obj lbl_8051989C, local
	.float 2000.0
.endobj lbl_8051989C
.obj lbl_805198A0, local
	.float 300.0
.endobj lbl_805198A0
.obj lbl_805198A4, local
	.float 2500.0
.endobj lbl_805198A4
.obj lbl_805198A8, local
	.float 40.0
.endobj lbl_805198A8
.obj lbl_805198AC, local
	.float 10000.0
.endobj lbl_805198AC
.balign 4
.obj lbl_805198B0, local
	.asciz "arc.szs"
.endobj lbl_805198B0
.balign 4
.obj lbl_805198B8, local
	.asciz "fruit"
.endobj lbl_805198B8
.balign 4
.obj lbl_805198C0, local
	.float 0.9
.endobj lbl_805198C0
.obj lbl_805198C4, local
	.float 128000.0
.endobj lbl_805198C4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game9ItemPlant3FSMFPQ34Game9ItemPlant4Item, global
/* 801DCE28 001D9D68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DCE2C 001D9D6C  7C 08 02 A6 */	mflr r0
/* 801DCE30 001D9D70  38 80 00 04 */	li r4, 4
/* 801DCE34 001D9D74  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DCE38 001D9D78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DCE3C 001D9D7C  7C 7F 1B 78 */	mr r31, r3
/* 801DCE40 001D9D80  48 00 3D 85 */	bl "create__Q24Game36StateMachine<Q34Game9ItemPlant4Item>Fi"
/* 801DCE44 001D9D84  38 60 00 10 */	li r3, 0x10
/* 801DCE48 001D9D88  4B E4 70 5D */	bl __nw__FUl
/* 801DCE4C 001D9D8C  7C 64 1B 79 */	or. r4, r3, r3
/* 801DCE50 001D9D90  41 82 00 40 */	beq .L_801DCE90
/* 801DCE54 001D9D94  3C 60 80 4C */	lis r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@ha
/* 801DCE58 001D9D98  3C C0 80 4C */	lis r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@ha
/* 801DCE5C 001D9D9C  38 03 99 6C */	addi r0, r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@l
/* 801DCE60 001D9DA0  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemPlant5State@ha
/* 801DCE64 001D9DA4  90 04 00 00 */	stw r0, 0(r4)
/* 801DCE68 001D9DA8  38 E0 00 00 */	li r7, 0
/* 801DCE6C 001D9DAC  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant11NormalState@ha
/* 801DCE70 001D9DB0  38 C6 99 38 */	addi r6, r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@l
/* 801DCE74 001D9DB4  90 E4 00 04 */	stw r7, 4(r4)
/* 801DCE78 001D9DB8  38 A5 98 FC */	addi r5, r5, __vt__Q34Game9ItemPlant5State@l
/* 801DCE7C 001D9DBC  38 03 98 C0 */	addi r0, r3, __vt__Q34Game9ItemPlant11NormalState@l
/* 801DCE80 001D9DC0  90 E4 00 08 */	stw r7, 8(r4)
/* 801DCE84 001D9DC4  90 C4 00 00 */	stw r6, 0(r4)
/* 801DCE88 001D9DC8  90 A4 00 00 */	stw r5, 0(r4)
/* 801DCE8C 001D9DCC  90 04 00 00 */	stw r0, 0(r4)
.L_801DCE90:
/* 801DCE90 001D9DD0  7F E3 FB 78 */	mr r3, r31
/* 801DCE94 001D9DD4  48 00 3E 31 */	bl "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>"
/* 801DCE98 001D9DD8  38 60 00 14 */	li r3, 0x14
/* 801DCE9C 001D9DDC  4B E4 70 09 */	bl __nw__FUl
/* 801DCEA0 001D9DE0  7C 64 1B 79 */	or. r4, r3, r3
/* 801DCEA4 001D9DE4  41 82 00 44 */	beq .L_801DCEE8
/* 801DCEA8 001D9DE8  3C 60 80 4C */	lis r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@ha
/* 801DCEAC 001D9DEC  3C C0 80 4C */	lis r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@ha
/* 801DCEB0 001D9DF0  38 03 99 6C */	addi r0, r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@l
/* 801DCEB4 001D9DF4  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemPlant5State@ha
/* 801DCEB8 001D9DF8  90 04 00 00 */	stw r0, 0(r4)
/* 801DCEBC 001D9DFC  38 00 00 01 */	li r0, 1
/* 801DCEC0 001D9E00  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant12DamagedState@ha
/* 801DCEC4 001D9E04  38 E0 00 00 */	li r7, 0
/* 801DCEC8 001D9E08  90 04 00 04 */	stw r0, 4(r4)
/* 801DCECC 001D9E0C  38 C6 99 38 */	addi r6, r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@l
/* 801DCED0 001D9E10  38 A5 98 FC */	addi r5, r5, __vt__Q34Game9ItemPlant5State@l
/* 801DCED4 001D9E14  38 03 98 84 */	addi r0, r3, __vt__Q34Game9ItemPlant12DamagedState@l
/* 801DCED8 001D9E18  90 E4 00 08 */	stw r7, 8(r4)
/* 801DCEDC 001D9E1C  90 C4 00 00 */	stw r6, 0(r4)
/* 801DCEE0 001D9E20  90 A4 00 00 */	stw r5, 0(r4)
/* 801DCEE4 001D9E24  90 04 00 00 */	stw r0, 0(r4)
.L_801DCEE8:
/* 801DCEE8 001D9E28  7F E3 FB 78 */	mr r3, r31
/* 801DCEEC 001D9E2C  48 00 3D D9 */	bl "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>"
/* 801DCEF0 001D9E30  38 60 00 14 */	li r3, 0x14
/* 801DCEF4 001D9E34  4B E4 6F B1 */	bl __nw__FUl
/* 801DCEF8 001D9E38  7C 64 1B 79 */	or. r4, r3, r3
/* 801DCEFC 001D9E3C  41 82 00 44 */	beq .L_801DCF40
/* 801DCF00 001D9E40  3C 60 80 4C */	lis r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@ha
/* 801DCF04 001D9E44  3C C0 80 4C */	lis r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@ha
/* 801DCF08 001D9E48  38 03 99 6C */	addi r0, r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@l
/* 801DCF0C 001D9E4C  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemPlant5State@ha
/* 801DCF10 001D9E50  90 04 00 00 */	stw r0, 0(r4)
/* 801DCF14 001D9E54  38 00 00 02 */	li r0, 2
/* 801DCF18 001D9E58  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant11GrowUpState@ha
/* 801DCF1C 001D9E5C  38 E0 00 00 */	li r7, 0
/* 801DCF20 001D9E60  90 04 00 04 */	stw r0, 4(r4)
/* 801DCF24 001D9E64  38 C6 99 38 */	addi r6, r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@l
/* 801DCF28 001D9E68  38 A5 98 FC */	addi r5, r5, __vt__Q34Game9ItemPlant5State@l
/* 801DCF2C 001D9E6C  38 03 98 48 */	addi r0, r3, __vt__Q34Game9ItemPlant11GrowUpState@l
/* 801DCF30 001D9E70  90 E4 00 08 */	stw r7, 8(r4)
/* 801DCF34 001D9E74  90 C4 00 00 */	stw r6, 0(r4)
/* 801DCF38 001D9E78  90 A4 00 00 */	stw r5, 0(r4)
/* 801DCF3C 001D9E7C  90 04 00 00 */	stw r0, 0(r4)
.L_801DCF40:
/* 801DCF40 001D9E80  7F E3 FB 78 */	mr r3, r31
/* 801DCF44 001D9E84  48 00 3D 81 */	bl "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>"
/* 801DCF48 001D9E88  38 60 00 14 */	li r3, 0x14
/* 801DCF4C 001D9E8C  4B E4 6F 59 */	bl __nw__FUl
/* 801DCF50 001D9E90  7C 64 1B 79 */	or. r4, r3, r3
/* 801DCF54 001D9E94  41 82 00 44 */	beq .L_801DCF98
/* 801DCF58 001D9E98  3C 60 80 4C */	lis r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@ha
/* 801DCF5C 001D9E9C  3C C0 80 4C */	lis r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@ha
/* 801DCF60 001D9EA0  38 03 99 6C */	addi r0, r3, "__vt__Q24Game32FSMState<Q34Game9ItemPlant4Item>"@l
/* 801DCF64 001D9EA4  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemPlant5State@ha
/* 801DCF68 001D9EA8  90 04 00 00 */	stw r0, 0(r4)
/* 801DCF6C 001D9EAC  38 00 00 03 */	li r0, 3
/* 801DCF70 001D9EB0  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant11KareruState@ha
/* 801DCF74 001D9EB4  38 E0 00 00 */	li r7, 0
/* 801DCF78 001D9EB8  90 04 00 04 */	stw r0, 4(r4)
/* 801DCF7C 001D9EBC  38 C6 99 38 */	addi r6, r6, "__vt__Q24Game33ItemState<Q34Game9ItemPlant4Item>"@l
/* 801DCF80 001D9EC0  38 A5 98 FC */	addi r5, r5, __vt__Q34Game9ItemPlant5State@l
/* 801DCF84 001D9EC4  38 03 98 0C */	addi r0, r3, __vt__Q34Game9ItemPlant11KareruState@l
/* 801DCF88 001D9EC8  90 E4 00 08 */	stw r7, 8(r4)
/* 801DCF8C 001D9ECC  90 C4 00 00 */	stw r6, 0(r4)
/* 801DCF90 001D9ED0  90 A4 00 00 */	stw r5, 0(r4)
/* 801DCF94 001D9ED4  90 04 00 00 */	stw r0, 0(r4)
.L_801DCF98:
/* 801DCF98 001D9ED8  7F E3 FB 78 */	mr r3, r31
/* 801DCF9C 001D9EDC  48 00 3D 29 */	bl "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>"
/* 801DCFA0 001D9EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DCFA4 001D9EE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DCFA8 001D9EE8  7C 08 03 A6 */	mtlr r0
/* 801DCFAC 001D9EEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801DCFB0 001D9EF0  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant3FSMFPQ34Game9ItemPlant4Item

.fn init__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg, global
/* 801DCFB4 001D9EF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DCFB8 001D9EF8  7C 08 02 A6 */	mflr r0
/* 801DCFBC 001D9EFC  7C 83 23 78 */	mr r3, r4
/* 801DCFC0 001D9F00  38 80 00 00 */	li r4, 0
/* 801DCFC4 001D9F04  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DCFC8 001D9F08  81 83 00 00 */	lwz r12, 0(r3)
/* 801DCFCC 001D9F0C  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801DCFD0 001D9F10  7D 89 03 A6 */	mtctr r12
/* 801DCFD4 001D9F14  4E 80 04 21 */	bctrl 
/* 801DCFD8 001D9F18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DCFDC 001D9F1C  7C 08 03 A6 */	mtlr r0
/* 801DCFE0 001D9F20  38 21 00 10 */	addi r1, r1, 0x10
/* 801DCFE4 001D9F24  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg

.fn startMotion__Q34Game9ItemPlant4ItemFi, weak
/* 801DCFE8 001D9F28  4E 80 00 20 */	blr 
.endfn startMotion__Q34Game9ItemPlant4ItemFi

.fn exec__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item, global
/* 801DCFEC 001D9F2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DCFF0 001D9F30  7C 08 02 A6 */	mflr r0
/* 801DCFF4 001D9F34  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DCFF8 001D9F38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DCFFC 001D9F3C  7C 9F 23 78 */	mr r31, r4
/* 801DD000 001D9F40  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801DD004 001D9F44  C0 24 01 F8 */	lfs f1, 0x1f8(r4)
/* 801DD008 001D9F48  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 801DD00C 001D9F4C  EC 01 00 2A */	fadds f0, f1, f0
/* 801DD010 001D9F50  D0 04 01 F8 */	stfs f0, 0x1f8(r4)
/* 801DD014 001D9F54  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 801DD018 001D9F58  2C 00 00 02 */	cmpwi r0, 2
/* 801DD01C 001D9F5C  41 82 00 9C */	beq .L_801DD0B8
/* 801DD020 001D9F60  40 80 00 14 */	bge .L_801DD034
/* 801DD024 001D9F64  2C 00 00 00 */	cmpwi r0, 0
/* 801DD028 001D9F68  41 82 00 18 */	beq .L_801DD040
/* 801DD02C 001D9F6C  40 80 00 50 */	bge .L_801DD07C
/* 801DD030 001D9F70  48 00 00 D0 */	b .L_801DD100
.L_801DD034:
/* 801DD034 001D9F74  2C 00 00 04 */	cmpwi r0, 4
/* 801DD038 001D9F78  40 80 00 C8 */	bge .L_801DD100
/* 801DD03C 001D9F7C  48 00 00 BC */	b .L_801DD0F8
.L_801DD040:
/* 801DD040 001D9F80  80 AD 94 78 */	lwz r5, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DD044 001D9F84  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 801DD048 001D9F88  80 A5 00 8C */	lwz r5, 0x8c(r5)
/* 801DD04C 001D9F8C  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801DD050 001D9F90  C0 05 01 00 */	lfs f0, 0x100(r5)
/* 801DD054 001D9F94  EC 01 00 2A */	fadds f0, f1, f0
/* 801DD058 001D9F98  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DD05C 001D9F9C  40 81 00 A4 */	ble .L_801DD100
/* 801DD060 001D9FA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD064 001D9FA4  38 A0 00 02 */	li r5, 2
/* 801DD068 001D9FA8  38 C0 00 00 */	li r6, 0
/* 801DD06C 001D9FAC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD070 001D9FB0  7D 89 03 A6 */	mtctr r12
/* 801DD074 001D9FB4  4E 80 04 21 */	bctrl 
/* 801DD078 001D9FB8  48 00 00 88 */	b .L_801DD100
.L_801DD07C:
/* 801DD07C 001D9FBC  80 AD 94 78 */	lwz r5, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DD080 001D9FC0  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 801DD084 001D9FC4  80 A5 00 8C */	lwz r5, 0x8c(r5)
/* 801DD088 001D9FC8  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801DD08C 001D9FCC  C0 05 01 28 */	lfs f0, 0x128(r5)
/* 801DD090 001D9FD0  EC 01 00 2A */	fadds f0, f1, f0
/* 801DD094 001D9FD4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DD098 001D9FD8  40 81 00 68 */	ble .L_801DD100
/* 801DD09C 001D9FDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD0A0 001D9FE0  38 A0 00 02 */	li r5, 2
/* 801DD0A4 001D9FE4  38 C0 00 00 */	li r6, 0
/* 801DD0A8 001D9FE8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD0AC 001D9FEC  7D 89 03 A6 */	mtctr r12
/* 801DD0B0 001D9FF0  4E 80 04 21 */	bctrl 
/* 801DD0B4 001D9FF4  48 00 00 4C */	b .L_801DD100
.L_801DD0B8:
/* 801DD0B8 001D9FF8  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DD0BC 001D9FFC  C0 3F 01 FC */	lfs f1, 0x1fc(r31)
/* 801DD0C0 001DA000  80 63 00 8C */	lwz r3, 0x8c(r3)
/* 801DD0C4 001DA004  C0 5F 01 F8 */	lfs f2, 0x1f8(r31)
/* 801DD0C8 001DA008  C0 03 01 78 */	lfs f0, 0x178(r3)
/* 801DD0CC 001DA00C  EC 01 00 2A */	fadds f0, f1, f0
/* 801DD0D0 001DA010  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DD0D4 001DA014  40 81 00 2C */	ble .L_801DD100
/* 801DD0D8 001DA018  7F E3 FB 78 */	mr r3, r31
/* 801DD0DC 001DA01C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD0E0 001DA020  81 8C 02 30 */	lwz r12, 0x230(r12)
/* 801DD0E4 001DA024  7D 89 03 A6 */	mtctr r12
/* 801DD0E8 001DA028  4E 80 04 21 */	bctrl 
/* 801DD0EC 001DA02C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD0F0 001DA030  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801DD0F4 001DA034  48 00 00 0C */	b .L_801DD100
.L_801DD0F8:
/* 801DD0F8 001DA038  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD0FC 001DA03C  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
.L_801DD100:
/* 801DD100 001DA040  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD104 001DA044  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD108 001DA048  7C 08 03 A6 */	mtlr r0
/* 801DD10C 001DA04C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD110 001DA050  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item

.fn bearFruits__Q34Game9ItemPlant4ItemFv, weak
/* 801DD114 001DA054  4E 80 00 20 */	blr 
.endfn bearFruits__Q34Game9ItemPlant4ItemFv

.fn "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg", weak
/* 801DD118 001DA058  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD11C 001DA05C  7C 08 02 A6 */	mflr r0
/* 801DD120 001DA060  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD124 001DA064  80 63 00 08 */	lwz r3, 8(r3)
/* 801DD128 001DA068  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD12C 001DA06C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DD130 001DA070  7D 89 03 A6 */	mtctr r12
/* 801DD134 001DA074  4E 80 04 21 */	bctrl 
/* 801DD138 001DA078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD13C 001DA07C  7C 08 03 A6 */	mtlr r0
/* 801DD140 001DA080  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD144 001DA084  4E 80 00 20 */	blr 
.endfn "transit__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"

.fn cleanup__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item, global
/* 801DD148 001DA088  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item

.fn eventKarero__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item, global
/* 801DD14C 001DA08C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD150 001DA090  7C 08 02 A6 */	mflr r0
/* 801DD154 001DA094  38 A0 00 03 */	li r5, 3
/* 801DD158 001DA098  38 C0 00 00 */	li r6, 0
/* 801DD15C 001DA09C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD160 001DA0A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD164 001DA0A4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD168 001DA0A8  7D 89 03 A6 */	mtctr r12
/* 801DD16C 001DA0AC  4E 80 04 21 */	bctrl 
/* 801DD170 001DA0B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD174 001DA0B4  7C 08 03 A6 */	mtlr r0
/* 801DD178 001DA0B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD17C 001DA0BC  4E 80 00 20 */	blr 
.endfn eventKarero__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Item

.fn onDamage__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Itemf, global
/* 801DD180 001DA0C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD184 001DA0C4  7C 08 02 A6 */	mflr r0
/* 801DD188 001DA0C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD18C 001DA0CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD190 001DA0D0  7C 9F 23 78 */	mr r31, r4
/* 801DD194 001DA0D4  93 C1 00 08 */	stw r30, 8(r1)
/* 801DD198 001DA0D8  7C 7E 1B 78 */	mr r30, r3
/* 801DD19C 001DA0DC  7F E3 FB 78 */	mr r3, r31
/* 801DD1A0 001DA0E0  48 00 08 F1 */	bl addDamage__Q34Game9ItemPlant4ItemFf
/* 801DD1A4 001DA0E4  7F C3 F3 78 */	mr r3, r30
/* 801DD1A8 001DA0E8  7F E4 FB 78 */	mr r4, r31
/* 801DD1AC 001DA0EC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DD1B0 001DA0F0  38 A0 00 01 */	li r5, 1
/* 801DD1B4 001DA0F4  38 C0 00 00 */	li r6, 0
/* 801DD1B8 001DA0F8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD1BC 001DA0FC  7D 89 03 A6 */	mtctr r12
/* 801DD1C0 001DA100  4E 80 04 21 */	bctrl 
/* 801DD1C4 001DA104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD1C8 001DA108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD1CC 001DA10C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DD1D0 001DA110  7C 08 03 A6 */	mtlr r0
/* 801DD1D4 001DA114  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD1D8 001DA118  4E 80 00 20 */	blr 
.endfn onDamage__Q34Game9ItemPlant11NormalStateFPQ34Game9ItemPlant4Itemf

.fn init__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg, global
/* 801DD1DC 001DA11C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD1E0 001DA120  7C 08 02 A6 */	mflr r0
/* 801DD1E4 001DA124  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD1E8 001DA128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD1EC 001DA12C  7C 7F 1B 78 */	mr r31, r3
/* 801DD1F0 001DA130  7C 83 23 78 */	mr r3, r4
/* 801DD1F4 001DA134  38 80 00 04 */	li r4, 4
/* 801DD1F8 001DA138  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD1FC 001DA13C  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801DD200 001DA140  7D 89 03 A6 */	mtctr r12
/* 801DD204 001DA144  4E 80 04 21 */	bctrl 
/* 801DD208 001DA148  38 00 00 00 */	li r0, 0
/* 801DD20C 001DA14C  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801DD210 001DA150  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD214 001DA154  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD218 001DA158  7C 08 03 A6 */	mtlr r0
/* 801DD21C 001DA15C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD220 001DA160  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg

.fn exec__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item, global
/* 801DD224 001DA164  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item

.fn cleanup__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item, global
/* 801DD228 001DA168  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item

.fn eventKarero__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item, global
/* 801DD22C 001DA16C  38 00 00 01 */	li r0, 1
/* 801DD230 001DA170  98 03 00 10 */	stb r0, 0x10(r3)
/* 801DD234 001DA174  4E 80 00 20 */	blr 
.endfn eventKarero__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Item

.fn onKeyEvent__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent, global
/* 801DD238 001DA178  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD23C 001DA17C  7C 08 02 A6 */	mflr r0
/* 801DD240 001DA180  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD244 001DA184  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801DD248 001DA188  28 00 00 00 */	cmplwi r0, 0
/* 801DD24C 001DA18C  41 82 00 20 */	beq .L_801DD26C
/* 801DD250 001DA190  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD254 001DA194  38 A0 00 03 */	li r5, 3
/* 801DD258 001DA198  38 C0 00 00 */	li r6, 0
/* 801DD25C 001DA19C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD260 001DA1A0  7D 89 03 A6 */	mtctr r12
/* 801DD264 001DA1A4  4E 80 04 21 */	bctrl 
/* 801DD268 001DA1A8  48 00 00 1C */	b .L_801DD284
.L_801DD26C:
/* 801DD26C 001DA1AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD270 001DA1B0  38 A0 00 00 */	li r5, 0
/* 801DD274 001DA1B4  38 C0 00 00 */	li r6, 0
/* 801DD278 001DA1B8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD27C 001DA1BC  7D 89 03 A6 */	mtctr r12
/* 801DD280 001DA1C0  4E 80 04 21 */	bctrl 
.L_801DD284:
/* 801DD284 001DA1C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD288 001DA1C8  7C 08 03 A6 */	mtlr r0
/* 801DD28C 001DA1CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD290 001DA1D0  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent

.fn onDamage__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Itemf, global
/* 801DD294 001DA1D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD298 001DA1D8  7C 08 02 A6 */	mflr r0
/* 801DD29C 001DA1DC  7C 83 23 78 */	mr r3, r4
/* 801DD2A0 001DA1E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD2A4 001DA1E4  48 00 07 ED */	bl addDamage__Q34Game9ItemPlant4ItemFf
/* 801DD2A8 001DA1E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD2AC 001DA1EC  7C 08 03 A6 */	mtlr r0
/* 801DD2B0 001DA1F0  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD2B4 001DA1F4  4E 80 00 20 */	blr 
.endfn onDamage__Q34Game9ItemPlant12DamagedStateFPQ34Game9ItemPlant4Itemf

.fn init__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg, global
/* 801DD2B8 001DA1F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD2BC 001DA1FC  7C 08 02 A6 */	mflr r0
/* 801DD2C0 001DA200  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD2C4 001DA204  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD2C8 001DA208  7C 9F 23 78 */	mr r31, r4
/* 801DD2CC 001DA20C  38 80 00 01 */	li r4, 1
/* 801DD2D0 001DA210  93 C1 00 08 */	stw r30, 8(r1)
/* 801DD2D4 001DA214  7C 7E 1B 78 */	mr r30, r3
/* 801DD2D8 001DA218  7F E3 FB 78 */	mr r3, r31
/* 801DD2DC 001DA21C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD2E0 001DA220  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801DD2E4 001DA224  7D 89 03 A6 */	mtctr r12
/* 801DD2E8 001DA228  4E 80 04 21 */	bctrl 
/* 801DD2EC 001DA22C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD2F0 001DA230  38 00 00 00 */	li r0, 0
/* 801DD2F4 001DA234  7F E3 FB 78 */	mr r3, r31
/* 801DD2F8 001DA238  38 80 38 3F */	li r4, 0x383f
/* 801DD2FC 001DA23C  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801DD300 001DA240  98 1E 00 10 */	stb r0, 0x10(r30)
/* 801DD304 001DA244  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD308 001DA248  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801DD30C 001DA24C  7D 89 03 A6 */	mtctr r12
/* 801DD310 001DA250  4E 80 04 21 */	bctrl 
/* 801DD314 001DA254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD318 001DA258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD31C 001DA25C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DD320 001DA260  7C 08 03 A6 */	mtlr r0
/* 801DD324 001DA264  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD328 001DA268  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg

.fn exec__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item, global
/* 801DD32C 001DA26C  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item

.fn cleanup__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item, global
/* 801DD330 001DA270  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item

.fn eventKarero__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item, global
/* 801DD334 001DA274  38 00 00 01 */	li r0, 1
/* 801DD338 001DA278  98 03 00 10 */	stb r0, 0x10(r3)
/* 801DD33C 001DA27C  4E 80 00 20 */	blr 
.endfn eventKarero__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Item

.fn onKeyEvent__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent, global
/* 801DD340 001DA280  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD344 001DA284  7C 08 02 A6 */	mflr r0
/* 801DD348 001DA288  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD34C 001DA28C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD350 001DA290  7C 9F 23 78 */	mr r31, r4
/* 801DD354 001DA294  93 C1 00 08 */	stw r30, 8(r1)
/* 801DD358 001DA298  7C 7E 1B 78 */	mr r30, r3
/* 801DD35C 001DA29C  80 64 01 F4 */	lwz r3, 0x1f4(r4)
/* 801DD360 001DA2A0  38 03 00 01 */	addi r0, r3, 1
/* 801DD364 001DA2A4  90 04 01 F4 */	stw r0, 0x1f4(r4)
/* 801DD368 001DA2A8  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 801DD36C 001DA2AC  2C 00 00 02 */	cmpwi r0, 2
/* 801DD370 001DA2B0  40 82 00 40 */	bne .L_801DD3B0
/* 801DD374 001DA2B4  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DD378 001DA2B8  38 7F 01 38 */	addi r3, r31, 0x138
/* 801DD37C 001DA2BC  80 84 00 08 */	lwz r4, 8(r4)
/* 801DD380 001DA2C0  38 84 00 24 */	addi r4, r4, 0x24
/* 801DD384 001DA2C4  4B F0 CF 49 */	bl PSMTXCopy
/* 801DD388 001DA2C8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DD38C 001DA2CC  80 63 00 08 */	lwz r3, 8(r3)
/* 801DD390 001DA2D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD394 001DA2D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DD398 001DA2D8  7D 89 03 A6 */	mtctr r12
/* 801DD39C 001DA2DC  4E 80 04 21 */	bctrl 
/* 801DD3A0 001DA2E0  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801DD3A4 001DA2E4  38 7F 02 5C */	addi r3, r31, 0x25c
/* 801DD3A8 001DA2E8  C0 42 B4 A0 */	lfs f2, lbl_80519800@sda21(r2)
/* 801DD3AC 001DA2EC  48 00 0C 95 */	bl update__Q34Game9ItemPlant12ProcAnimatorFff
.L_801DD3B0:
/* 801DD3B0 001DA2F0  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801DD3B4 001DA2F4  2C 00 00 02 */	cmpwi r0, 2
/* 801DD3B8 001DA2F8  40 81 00 20 */	ble .L_801DD3D8
/* 801DD3BC 001DA2FC  3C 60 80 48 */	lis r3, lbl_804808FC@ha
/* 801DD3C0 001DA300  3C A0 80 48 */	lis r5, lbl_8048090C@ha
/* 801DD3C4 001DA304  38 63 08 FC */	addi r3, r3, lbl_804808FC@l
/* 801DD3C8 001DA308  38 80 01 7D */	li r4, 0x17d
/* 801DD3CC 001DA30C  38 A5 09 0C */	addi r5, r5, lbl_8048090C@l
/* 801DD3D0 001DA310  4C C6 31 82 */	crclr 6
/* 801DD3D4 001DA314  4B E4 D2 6D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DD3D8:
/* 801DD3D8 001DA318  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 801DD3DC 001DA31C  28 00 00 00 */	cmplwi r0, 0
/* 801DD3E0 001DA320  41 82 00 28 */	beq .L_801DD408
/* 801DD3E4 001DA324  7F C3 F3 78 */	mr r3, r30
/* 801DD3E8 001DA328  7F E4 FB 78 */	mr r4, r31
/* 801DD3EC 001DA32C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DD3F0 001DA330  38 A0 00 03 */	li r5, 3
/* 801DD3F4 001DA334  38 C0 00 00 */	li r6, 0
/* 801DD3F8 001DA338  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD3FC 001DA33C  7D 89 03 A6 */	mtctr r12
/* 801DD400 001DA340  4E 80 04 21 */	bctrl 
/* 801DD404 001DA344  48 00 00 44 */	b .L_801DD448
.L_801DD408:
/* 801DD408 001DA348  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801DD40C 001DA34C  2C 00 00 02 */	cmpwi r0, 2
/* 801DD410 001DA350  40 82 00 18 */	bne .L_801DD428
/* 801DD414 001DA354  7F E3 FB 78 */	mr r3, r31
/* 801DD418 001DA358  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD41C 001DA35C  81 8C 02 30 */	lwz r12, 0x230(r12)
/* 801DD420 001DA360  7D 89 03 A6 */	mtctr r12
/* 801DD424 001DA364  4E 80 04 21 */	bctrl 
.L_801DD428:
/* 801DD428 001DA368  7F C3 F3 78 */	mr r3, r30
/* 801DD42C 001DA36C  7F E4 FB 78 */	mr r4, r31
/* 801DD430 001DA370  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DD434 001DA374  38 A0 00 00 */	li r5, 0
/* 801DD438 001DA378  38 C0 00 00 */	li r6, 0
/* 801DD43C 001DA37C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD440 001DA380  7D 89 03 A6 */	mtctr r12
/* 801DD444 001DA384  4E 80 04 21 */	bctrl 
.L_801DD448:
/* 801DD448 001DA388  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD44C 001DA38C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD450 001DA390  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DD454 001DA394  7C 08 03 A6 */	mtlr r0
/* 801DD458 001DA398  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD45C 001DA39C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent

.fn onDamage__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Itemf, global
/* 801DD460 001DA3A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD464 001DA3A4  7C 08 02 A6 */	mflr r0
/* 801DD468 001DA3A8  7C 83 23 78 */	mr r3, r4
/* 801DD46C 001DA3AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD470 001DA3B0  48 00 06 21 */	bl addDamage__Q34Game9ItemPlant4ItemFf
/* 801DD474 001DA3B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD478 001DA3B8  7C 08 03 A6 */	mtlr r0
/* 801DD47C 001DA3BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD480 001DA3C0  4E 80 00 20 */	blr 
.endfn onDamage__Q34Game9ItemPlant11GrowUpStateFPQ34Game9ItemPlant4Itemf

.fn init__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg, global
/* 801DD484 001DA3C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD488 001DA3C8  7C 08 02 A6 */	mflr r0
/* 801DD48C 001DA3CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD490 001DA3D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD494 001DA3D4  7C 9F 23 78 */	mr r31, r4
/* 801DD498 001DA3D8  38 80 00 02 */	li r4, 2
/* 801DD49C 001DA3DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801DD4A0 001DA3E0  7C 7E 1B 78 */	mr r30, r3
/* 801DD4A4 001DA3E4  7F E3 FB 78 */	mr r3, r31
/* 801DD4A8 001DA3E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD4AC 001DA3EC  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801DD4B0 001DA3F0  7D 89 03 A6 */	mtctr r12
/* 801DD4B4 001DA3F4  4E 80 04 21 */	bctrl 
/* 801DD4B8 001DA3F8  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD4BC 001DA3FC  38 00 00 03 */	li r0, 3
/* 801DD4C0 001DA400  7F E3 FB 78 */	mr r3, r31
/* 801DD4C4 001DA404  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801DD4C8 001DA408  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801DD4CC 001DA40C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD4D0 001DA410  81 8C 02 34 */	lwz r12, 0x234(r12)
/* 801DD4D4 001DA414  7D 89 03 A6 */	mtctr r12
/* 801DD4D8 001DA418  4E 80 04 21 */	bctrl 
/* 801DD4DC 001DA41C  38 00 00 00 */	li r0, 0
/* 801DD4E0 001DA420  B0 1E 00 10 */	sth r0, 0x10(r30)
/* 801DD4E4 001DA424  98 1E 00 12 */	stb r0, 0x12(r30)
/* 801DD4E8 001DA428  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD4EC 001DA42C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DD4F0 001DA430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD4F4 001DA434  7C 08 03 A6 */	mtlr r0
/* 801DD4F8 001DA438  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD4FC 001DA43C  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemPQ24Game8StateArg

.fn killFruits__Q34Game9ItemPlant4ItemFv, weak
/* 801DD500 001DA440  4E 80 00 20 */	blr 
.endfn killFruits__Q34Game9ItemPlant4ItemFv

.fn exec__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item, global
/* 801DD504 001DA444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD508 001DA448  7C 08 02 A6 */	mflr r0
/* 801DD50C 001DA44C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD510 001DA450  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD514 001DA454  7C 9F 23 78 */	mr r31, r4
/* 801DD518 001DA458  93 C1 00 08 */	stw r30, 8(r1)
/* 801DD51C 001DA45C  7C 7E 1B 78 */	mr r30, r3
/* 801DD520 001DA460  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 801DD524 001DA464  28 00 00 01 */	cmplwi r0, 1
/* 801DD528 001DA468  40 82 00 50 */	bne .L_801DD578
/* 801DD52C 001DA46C  88 1E 00 12 */	lbz r0, 0x12(r30)
/* 801DD530 001DA470  28 00 00 00 */	cmplwi r0, 0
/* 801DD534 001DA474  41 82 00 44 */	beq .L_801DD578
/* 801DD538 001DA478  7F E3 FB 78 */	mr r3, r31
/* 801DD53C 001DA47C  38 80 00 01 */	li r4, 1
/* 801DD540 001DA480  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD544 001DA484  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DD548 001DA488  7D 89 03 A6 */	mtctr r12
/* 801DD54C 001DA48C  4E 80 04 21 */	bctrl 
/* 801DD550 001DA490  7F E3 FB 78 */	mr r3, r31
/* 801DD554 001DA494  38 80 00 03 */	li r4, 3
/* 801DD558 001DA498  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DD55C 001DA49C  81 8C 02 48 */	lwz r12, 0x248(r12)
/* 801DD560 001DA4A0  7D 89 03 A6 */	mtctr r12
/* 801DD564 001DA4A4  4E 80 04 21 */	bctrl 
/* 801DD568 001DA4A8  38 60 00 00 */	li r3, 0
/* 801DD56C 001DA4AC  38 00 00 02 */	li r0, 2
/* 801DD570 001DA4B0  98 7E 00 12 */	stb r3, 0x12(r30)
/* 801DD574 001DA4B4  B0 1E 00 10 */	sth r0, 0x10(r30)
.L_801DD578:
/* 801DD578 001DA4B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD57C 001DA4BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD580 001DA4C0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DD584 001DA4C4  7C 08 03 A6 */	mtlr r0
/* 801DD588 001DA4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD58C 001DA4CC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item

.fn cleanup__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item, global
/* 801DD590 001DA4D0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item

.fn eventHaero__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item, global
/* 801DD594 001DA4D4  A0 03 00 10 */	lhz r0, 0x10(r3)
/* 801DD598 001DA4D8  28 00 00 02 */	cmplwi r0, 2
/* 801DD59C 001DA4DC  4D 82 00 20 */	beqlr 
/* 801DD5A0 001DA4E0  38 00 00 01 */	li r0, 1
/* 801DD5A4 001DA4E4  98 03 00 12 */	stb r0, 0x12(r3)
/* 801DD5A8 001DA4E8  4E 80 00 20 */	blr 
.endfn eventHaero__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Item

.fn onKeyEvent__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent, global
/* 801DD5AC 001DA4EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD5B0 001DA4F0  7C 08 02 A6 */	mflr r0
/* 801DD5B4 001DA4F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD5B8 001DA4F8  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 801DD5BC 001DA4FC  7C 65 1B 78 */	mr r5, r3
/* 801DD5C0 001DA500  28 00 03 E8 */	cmplwi r0, 0x3e8
/* 801DD5C4 001DA504  41 82 00 0C */	beq .L_801DD5D0
/* 801DD5C8 001DA508  28 00 07 D0 */	cmplwi r0, 0x7d0
/* 801DD5CC 001DA50C  40 82 00 74 */	bne .L_801DD640
.L_801DD5D0:
/* 801DD5D0 001DA510  A0 05 00 10 */	lhz r0, 0x10(r5)
/* 801DD5D4 001DA514  2C 00 00 01 */	cmpwi r0, 1
/* 801DD5D8 001DA518  41 82 00 68 */	beq .L_801DD640
/* 801DD5DC 001DA51C  40 80 00 10 */	bge .L_801DD5EC
/* 801DD5E0 001DA520  2C 00 00 00 */	cmpwi r0, 0
/* 801DD5E4 001DA524  40 80 00 14 */	bge .L_801DD5F8
/* 801DD5E8 001DA528  48 00 00 58 */	b .L_801DD640
.L_801DD5EC:
/* 801DD5EC 001DA52C  2C 00 00 03 */	cmpwi r0, 3
/* 801DD5F0 001DA530  40 80 00 50 */	bge .L_801DD640
/* 801DD5F4 001DA534  48 00 00 28 */	b .L_801DD61C
.L_801DD5F8:
/* 801DD5F8 001DA538  38 00 00 01 */	li r0, 1
/* 801DD5FC 001DA53C  7C 83 23 78 */	mr r3, r4
/* 801DD600 001DA540  B0 05 00 10 */	sth r0, 0x10(r5)
/* 801DD604 001DA544  38 80 00 00 */	li r4, 0
/* 801DD608 001DA548  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD60C 001DA54C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DD610 001DA550  7D 89 03 A6 */	mtctr r12
/* 801DD614 001DA554  4E 80 04 21 */	bctrl 
/* 801DD618 001DA558  48 00 00 28 */	b .L_801DD640
.L_801DD61C:
/* 801DD61C 001DA55C  38 00 00 00 */	li r0, 0
/* 801DD620 001DA560  7C A3 2B 78 */	mr r3, r5
/* 801DD624 001DA564  90 04 01 F4 */	stw r0, 0x1f4(r4)
/* 801DD628 001DA568  38 A0 00 00 */	li r5, 0
/* 801DD62C 001DA56C  38 C0 00 00 */	li r6, 0
/* 801DD630 001DA570  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD634 001DA574  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DD638 001DA578  7D 89 03 A6 */	mtctr r12
/* 801DD63C 001DA57C  4E 80 04 21 */	bctrl 
.L_801DD640:
/* 801DD640 001DA580  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD644 001DA584  7C 08 03 A6 */	mtlr r0
/* 801DD648 001DA588  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD64C 001DA58C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent

.fn onDamage__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Itemf, global
/* 801DD650 001DA590  4E 80 00 20 */	blr 
.endfn onDamage__Q34Game9ItemPlant11KareruStateFPQ34Game9ItemPlant4Itemf

.fn constructor__Q34Game9ItemPlant4ItemFv, global
/* 801DD654 001DA594  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD658 001DA598  7C 08 02 A6 */	mflr r0
/* 801DD65C 001DA59C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD660 001DA5A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD664 001DA5A4  7C 7F 1B 78 */	mr r31, r3
/* 801DD668 001DA5A8  38 60 00 84 */	li r3, 0x84
/* 801DD66C 001DA5AC  4B E4 68 39 */	bl __nw__FUl
/* 801DD670 001DA5B0  7C 60 1B 79 */	or. r0, r3, r3
/* 801DD674 001DA5B4  41 82 00 10 */	beq .L_801DD684
/* 801DD678 001DA5B8  7F E4 FB 78 */	mr r4, r31
/* 801DD67C 001DA5BC  48 28 1A 9D */	bl __ct__Q23PSM9TsuyukusaFPQ24Game8Creature
/* 801DD680 001DA5C0  7C 60 1B 78 */	mr r0, r3
.L_801DD684:
/* 801DD684 001DA5C4  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801DD688 001DA5C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD68C 001DA5CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD690 001DA5D0  7C 08 03 A6 */	mtlr r0
/* 801DD694 001DA5D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD698 001DA5D8  4E 80 00 20 */	blr 
.endfn constructor__Q34Game9ItemPlant4ItemFv

.fn onInit__Q34Game9ItemPlant4ItemFPQ24Game15CreatureInitArg, global
/* 801DD69C 001DA5DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD6A0 001DA5E0  7C 08 02 A6 */	mflr r0
/* 801DD6A4 001DA5E4  38 80 00 01 */	li r4, 1
/* 801DD6A8 001DA5E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD6AC 001DA5EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DD6B0 001DA5F0  7C 7F 1B 78 */	mr r31, r3
/* 801DD6B4 001DA5F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD6B8 001DA5F8  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DD6BC 001DA5FC  7D 89 03 A6 */	mtctr r12
/* 801DD6C0 001DA600  4E 80 04 21 */	bctrl 
/* 801DD6C4 001DA604  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD6C8 001DA608  38 00 00 00 */	li r0, 0
/* 801DD6CC 001DA60C  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801DD6D0 001DA610  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801DD6D4 001DA614  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801DD6D8 001DA618  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801DD6DC 001DA61C  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801DD6E0 001DA620  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DD6E4 001DA624  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD6E8 001DA628  7C 08 03 A6 */	mtlr r0
/* 801DD6EC 001DA62C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD6F0 001DA630  4E 80 00 20 */	blr 
.endfn onInit__Q34Game9ItemPlant4ItemFPQ24Game15CreatureInitArg

.fn onStickStart__Q34Game9ItemPlant4ItemFPQ24Game8Creature, global
/* 801DD6F4 001DA634  28 04 00 00 */	cmplwi r4, 0
/* 801DD6F8 001DA638  4D 82 00 20 */	beqlr 
/* 801DD6FC 001DA63C  80 84 00 F8 */	lwz r4, 0xf8(r4)
/* 801DD700 001DA640  88 04 00 58 */	lbz r0, 0x58(r4)
/* 801DD704 001DA644  28 00 00 00 */	cmplwi r0, 0
/* 801DD708 001DA648  4C 82 00 20 */	bnelr 
/* 801DD70C 001DA64C  80 83 01 EC */	lwz r4, 0x1ec(r3)
/* 801DD710 001DA650  38 04 00 01 */	addi r0, r4, 1
/* 801DD714 001DA654  90 03 01 EC */	stw r0, 0x1ec(r3)
/* 801DD718 001DA658  4E 80 00 20 */	blr 
.endfn onStickStart__Q34Game9ItemPlant4ItemFPQ24Game8Creature

.fn onStickEnd__Q34Game9ItemPlant4ItemFPQ24Game8Creature, global
/* 801DD71C 001DA65C  28 04 00 00 */	cmplwi r4, 0
/* 801DD720 001DA660  4D 82 00 20 */	beqlr 
/* 801DD724 001DA664  80 84 00 F8 */	lwz r4, 0xf8(r4)
/* 801DD728 001DA668  88 04 00 58 */	lbz r0, 0x58(r4)
/* 801DD72C 001DA66C  28 00 00 00 */	cmplwi r0, 0
/* 801DD730 001DA670  4C 82 00 20 */	bnelr 
/* 801DD734 001DA674  80 83 01 EC */	lwz r4, 0x1ec(r3)
/* 801DD738 001DA678  38 04 FF FF */	addi r0, r4, -1
/* 801DD73C 001DA67C  90 03 01 EC */	stw r0, 0x1ec(r3)
/* 801DD740 001DA680  80 03 01 EC */	lwz r0, 0x1ec(r3)
/* 801DD744 001DA684  2C 00 00 00 */	cmpwi r0, 0
/* 801DD748 001DA688  4C 80 00 20 */	bgelr 
/* 801DD74C 001DA68C  38 00 00 00 */	li r0, 0
/* 801DD750 001DA690  90 03 01 EC */	stw r0, 0x1ec(r3)
/* 801DD754 001DA694  4E 80 00 20 */	blr 
.endfn onStickEnd__Q34Game9ItemPlant4ItemFPQ24Game8Creature

.fn onSetPosition__Q34Game9ItemPlant4ItemFv, global
/* 801DD758 001DA698  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD75C 001DA69C  7C 08 02 A6 */	mflr r0
/* 801DD760 001DA6A0  7C 64 1B 78 */	mr r4, r3
/* 801DD764 001DA6A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD768 001DA6A8  80 6D 91 D8 */	lwz r3, farmMgr__Q24Game4Farm@sda21(r13)
/* 801DD76C 001DA6AC  4B F4 6E 29 */	bl addPlant__Q34Game4Farm7FarmMgrFPQ24Game8Creature
/* 801DD770 001DA6B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD774 001DA6B4  7C 08 03 A6 */	mtlr r0
/* 801DD778 001DA6B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD77C 001DA6BC  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game9ItemPlant4ItemFv

.fn updateTrMatrix__Q34Game9ItemPlant4ItemFv, global
/* 801DD780 001DA6C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801DD784 001DA6C4  7C 08 02 A6 */	mflr r0
/* 801DD788 001DA6C8  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD78C 001DA6CC  7C 64 1B 78 */	mr r4, r3
/* 801DD790 001DA6D0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801DD794 001DA6D4  38 A1 00 08 */	addi r5, r1, 8
/* 801DD798 001DA6D8  C0 23 02 00 */	lfs f1, 0x200(r3)
/* 801DD79C 001DA6DC  38 64 01 38 */	addi r3, r4, 0x138
/* 801DD7A0 001DA6E0  38 84 01 9C */	addi r4, r4, 0x19c
/* 801DD7A4 001DA6E4  D0 01 00 08 */	stfs f0, 8(r1)
/* 801DD7A8 001DA6E8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 801DD7AC 001DA6EC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801DD7B0 001DA6F0  48 24 B0 D9 */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801DD7B4 001DA6F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801DD7B8 001DA6F8  7C 08 03 A6 */	mtlr r0
/* 801DD7BC 001DA6FC  38 21 00 20 */	addi r1, r1, 0x20
/* 801DD7C0 001DA700  4E 80 00 20 */	blr 
.endfn updateTrMatrix__Q34Game9ItemPlant4ItemFv

.fn startColorMotion__Q34Game9ItemPlant4ItemFi, global
/* 801DD7C4 001DA704  B0 83 01 E8 */	sth r4, 0x1e8(r3)
/* 801DD7C8 001DA708  A0 03 01 E8 */	lhz r0, 0x1e8(r3)
/* 801DD7CC 001DA70C  28 00 00 00 */	cmplwi r0, 0
/* 801DD7D0 001DA710  40 82 00 10 */	bne .L_801DD7E0
/* 801DD7D4 001DA714  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DD7D8 001DA718  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 801DD7DC 001DA71C  4E 80 00 20 */	blr 
.L_801DD7E0:
/* 801DD7E0 001DA720  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD7E4 001DA724  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 801DD7E8 001DA728  4E 80 00 20 */	blr 
.endfn startColorMotion__Q34Game9ItemPlant4ItemFi

.fn updateColorMotion__Q34Game9ItemPlant4ItemFf, global
/* 801DD7EC 001DA72C  A0 03 01 E8 */	lhz r0, 0x1e8(r3)
/* 801DD7F0 001DA730  2C 00 00 01 */	cmpwi r0, 1
/* 801DD7F4 001DA734  41 82 00 4C */	beq .L_801DD840
/* 801DD7F8 001DA738  4C 80 00 20 */	bgelr 
/* 801DD7FC 001DA73C  2C 00 00 00 */	cmpwi r0, 0
/* 801DD800 001DA740  4D 80 00 20 */	bltlr 
/* 801DD804 001DA744  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801DD808 001DA748  C0 43 01 E4 */	lfs f2, 0x1e4(r3)
/* 801DD80C 001DA74C  C0 64 00 54 */	lfs f3, 0x54(r4)
/* 801DD810 001DA750  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DD814 001DA754  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801DD818 001DA758  EC 22 08 2A */	fadds f1, f2, f1
/* 801DD81C 001DA75C  D0 23 01 E4 */	stfs f1, 0x1e4(r3)
/* 801DD820 001DA760  C0 23 01 E4 */	lfs f1, 0x1e4(r3)
/* 801DD824 001DA764  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DD828 001DA768  4C 41 13 82 */	cror 2, 1, 2
/* 801DD82C 001DA76C  4C 82 00 20 */	bnelr 
/* 801DD830 001DA770  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 801DD834 001DA774  38 00 00 02 */	li r0, 2
/* 801DD838 001DA778  B0 03 01 E8 */	sth r0, 0x1e8(r3)
/* 801DD83C 001DA77C  4E 80 00 20 */	blr 
.L_801DD840:
/* 801DD840 001DA780  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801DD844 001DA784  C0 43 01 E4 */	lfs f2, 0x1e4(r3)
/* 801DD848 001DA788  C0 64 00 54 */	lfs f3, 0x54(r4)
/* 801DD84C 001DA78C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DD850 001DA790  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801DD854 001DA794  EC 22 08 28 */	fsubs f1, f2, f1
/* 801DD858 001DA798  D0 23 01 E4 */	stfs f1, 0x1e4(r3)
/* 801DD85C 001DA79C  C0 23 01 E4 */	lfs f1, 0x1e4(r3)
/* 801DD860 001DA7A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DD864 001DA7A4  4C 40 13 82 */	cror 2, 0, 2
/* 801DD868 001DA7A8  4C 82 00 20 */	bnelr 
/* 801DD86C 001DA7AC  D0 03 01 E4 */	stfs f0, 0x1e4(r3)
/* 801DD870 001DA7B0  38 00 00 02 */	li r0, 2
/* 801DD874 001DA7B4  B0 03 01 E8 */	sth r0, 0x1e8(r3)
/* 801DD878 001DA7B8  4E 80 00 20 */	blr 
.endfn updateColorMotion__Q34Game9ItemPlant4ItemFf

.fn doAI__Q34Game9ItemPlant4ItemFv, global
/* 801DD87C 001DA7BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD880 001DA7C0  7C 08 02 A6 */	mflr r0
/* 801DD884 001DA7C4  7C 64 1B 78 */	mr r4, r3
/* 801DD888 001DA7C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD88C 001DA7CC  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801DD890 001DA7D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD894 001DA7D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DD898 001DA7D8  7D 89 03 A6 */	mtctr r12
/* 801DD89C 001DA7DC  4E 80 04 21 */	bctrl 
/* 801DD8A0 001DA7E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD8A4 001DA7E4  7C 08 03 A6 */	mtlr r0
/* 801DD8A8 001DA7E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD8AC 001DA7EC  4E 80 00 20 */	blr 
.endfn doAI__Q34Game9ItemPlant4ItemFv

.fn interactAttack__Q34Game9ItemPlant4ItemFRQ24Game14InteractAttack, global
/* 801DD8B0 001DA7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD8B4 001DA7F4  7C 08 02 A6 */	mflr r0
/* 801DD8B8 001DA7F8  7C 66 1B 78 */	mr r6, r3
/* 801DD8BC 001DA7FC  7C 85 23 78 */	mr r5, r4
/* 801DD8C0 001DA800  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD8C4 001DA804  7C C4 33 78 */	mr r4, r6
/* 801DD8C8 001DA808  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801DD8CC 001DA80C  C0 25 00 08 */	lfs f1, 8(r5)
/* 801DD8D0 001DA810  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD8D4 001DA814  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801DD8D8 001DA818  7D 89 03 A6 */	mtctr r12
/* 801DD8DC 001DA81C  4E 80 04 21 */	bctrl 
/* 801DD8E0 001DA820  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD8E4 001DA824  38 60 00 01 */	li r3, 1
/* 801DD8E8 001DA828  7C 08 03 A6 */	mtlr r0
/* 801DD8EC 001DA82C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD8F0 001DA830  4E 80 00 20 */	blr 
.endfn interactAttack__Q34Game9ItemPlant4ItemFRQ24Game14InteractAttack

.fn "onDamage__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Itemf", weak
/* 801DD8F4 001DA834  4E 80 00 20 */	blr 
.endfn "onDamage__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Itemf"

.fn interactFarmKarero__Q34Game9ItemPlant4ItemFRQ24Game18InteractFarmKarero, global
/* 801DD8F8 001DA838  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD8FC 001DA83C  7C 08 02 A6 */	mflr r0
/* 801DD900 001DA840  7C 64 1B 78 */	mr r4, r3
/* 801DD904 001DA844  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD908 001DA848  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801DD90C 001DA84C  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD910 001DA850  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801DD914 001DA854  7D 89 03 A6 */	mtctr r12
/* 801DD918 001DA858  4E 80 04 21 */	bctrl 
/* 801DD91C 001DA85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD920 001DA860  38 60 00 01 */	li r3, 1
/* 801DD924 001DA864  7C 08 03 A6 */	mtlr r0
/* 801DD928 001DA868  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD92C 001DA86C  4E 80 00 20 */	blr 
.endfn interactFarmKarero__Q34Game9ItemPlant4ItemFRQ24Game18InteractFarmKarero

.fn eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item, weak
/* 801DD930 001DA870  4E 80 00 20 */	blr 
.endfn eventKarero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item

.fn interactFarmHaero__Q34Game9ItemPlant4ItemFRQ24Game17InteractFarmHaero, global
/* 801DD934 001DA874  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DD938 001DA878  7C 08 02 A6 */	mflr r0
/* 801DD93C 001DA87C  7C 64 1B 78 */	mr r4, r3
/* 801DD940 001DA880  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DD944 001DA884  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801DD948 001DA888  81 83 00 00 */	lwz r12, 0(r3)
/* 801DD94C 001DA88C  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801DD950 001DA890  7D 89 03 A6 */	mtctr r12
/* 801DD954 001DA894  4E 80 04 21 */	bctrl 
/* 801DD958 001DA898  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DD95C 001DA89C  38 60 00 01 */	li r3, 1
/* 801DD960 001DA8A0  7C 08 03 A6 */	mtlr r0
/* 801DD964 001DA8A4  38 21 00 10 */	addi r1, r1, 0x10
/* 801DD968 001DA8A8  4E 80 00 20 */	blr 
.endfn interactFarmHaero__Q34Game9ItemPlant4ItemFRQ24Game17InteractFarmHaero

.fn eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item, weak
/* 801DD96C 001DA8AC  4E 80 00 20 */	blr 
.endfn eventHaero__Q34Game9ItemPlant5StateFPQ34Game9ItemPlant4Item

.fn doDirectDraw__Q34Game9ItemPlant4ItemFR8Graphics, global
/* 801DD970 001DA8B0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801DD974 001DA8B4  7C 08 02 A6 */	mflr r0
/* 801DD978 001DA8B8  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DD97C 001DA8BC  38 E0 00 00 */	li r7, 0
/* 801DD980 001DA8C0  90 01 00 54 */	stw r0, 0x54(r1)
/* 801DD984 001DA8C4  38 00 00 FF */	li r0, 0xff
/* 801DD988 001DA8C8  38 C0 00 66 */	li r6, 0x66
/* 801DD98C 001DA8CC  38 A0 00 99 */	li r5, 0x99
/* 801DD990 001DA8D0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801DD994 001DA8D4  7C 9F 23 78 */	mr r31, r4
/* 801DD998 001DA8D8  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801DD99C 001DA8DC  7C 7E 1B 78 */	mr r30, r3
/* 801DD9A0 001DA8E0  7F E3 FB 78 */	mr r3, r31
/* 801DD9A4 001DA8E4  81 0D 89 D8 */	lwz r8, systemFont__9JFWSystem@sda21(r13)
/* 801DD9A8 001DA8E8  90 E1 00 24 */	stw r7, 0x24(r1)
/* 801DD9AC 001DA8EC  91 01 00 20 */	stw r8, 0x20(r1)
/* 801DD9B0 001DA8F0  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801DD9B4 001DA8F4  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 801DD9B8 001DA8F8  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801DD9BC 001DA8FC  98 C1 00 34 */	stb r6, 0x34(r1)
/* 801DD9C0 001DA900  98 A1 00 35 */	stb r5, 0x35(r1)
/* 801DD9C4 001DA904  98 01 00 36 */	stb r0, 0x36(r1)
/* 801DD9C8 001DA908  98 01 00 37 */	stb r0, 0x37(r1)
/* 801DD9CC 001DA90C  98 E1 00 38 */	stb r7, 0x38(r1)
/* 801DD9D0 001DA910  98 C1 00 39 */	stb r6, 0x39(r1)
/* 801DD9D4 001DA914  98 01 00 3A */	stb r0, 0x3a(r1)
/* 801DD9D8 001DA918  98 01 00 3B */	stb r0, 0x3b(r1)
/* 801DD9DC 001DA91C  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 801DD9E0 001DA920  48 24 9E C9 */	bl initPerspPrintf__8GraphicsFP8Viewport
/* 801DD9E4 001DA924  C0 02 B4 A8 */	lfs f0, lbl_80519808@sda21(r2)
/* 801DD9E8 001DA928  38 C0 00 C8 */	li r6, 0xc8
/* 801DD9EC 001DA92C  38 A0 00 00 */	li r5, 0
/* 801DD9F0 001DA930  38 00 00 FF */	li r0, 0xff
/* 801DD9F4 001DA934  98 C1 00 34 */	stb r6, 0x34(r1)
/* 801DD9F8 001DA938  7F C4 F3 78 */	mr r4, r30
/* 801DD9FC 001DA93C  38 61 00 08 */	addi r3, r1, 8
/* 801DDA00 001DA940  98 A1 00 35 */	stb r5, 0x35(r1)
/* 801DDA04 001DA944  98 A1 00 36 */	stb r5, 0x36(r1)
/* 801DDA08 001DA948  98 01 00 37 */	stb r0, 0x37(r1)
/* 801DDA0C 001DA94C  98 C1 00 38 */	stb r6, 0x38(r1)
/* 801DDA10 001DA950  98 C1 00 39 */	stb r6, 0x39(r1)
/* 801DDA14 001DA954  98 C1 00 3A */	stb r6, 0x3a(r1)
/* 801DDA18 001DA958  98 01 00 3B */	stb r0, 0x3b(r1)
/* 801DDA1C 001DA95C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801DDA20 001DA960  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DDA24 001DA964  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DDA28 001DA968  7D 89 03 A6 */	mtctr r12
/* 801DDA2C 001DA96C  4E 80 04 21 */	bctrl 
/* 801DDA30 001DA970  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801DDA34 001DA974  7F C3 F3 78 */	mr r3, r30
/* 801DDA38 001DA978  C0 02 B4 AC */	lfs f0, lbl_8051980C@sda21(r2)
/* 801DDA3C 001DA97C  C0 61 00 08 */	lfs f3, 8(r1)
/* 801DDA40 001DA980  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801DDA44 001DA984  EC 02 00 2A */	fadds f0, f2, f0
/* 801DDA48 001DA988  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801DDA4C 001DA98C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801DDA50 001DA990  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801DDA54 001DA994  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801DDA58 001DA998  48 00 33 35 */	bl "getStateID__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv"
/* 801DDA5C 001DA99C  7C 67 1B 78 */	mr r7, r3
/* 801DDA60 001DA9A0  7F E3 FB 78 */	mr r3, r31
/* 801DDA64 001DA9A4  38 81 00 20 */	addi r4, r1, 0x20
/* 801DDA68 001DA9A8  38 A1 00 14 */	addi r5, r1, 0x14
/* 801DDA6C 001DA9AC  38 C2 B4 B0 */	addi r6, r2, lbl_80519810@sda21
/* 801DDA70 001DA9B0  4C C6 31 82 */	crclr 6
/* 801DDA74 001DA9B4  48 24 A0 69 */	bl "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
/* 801DDA78 001DA9B8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801DDA7C 001DA9BC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801DDA80 001DA9C0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801DDA84 001DA9C4  7C 08 03 A6 */	mtlr r0
/* 801DDA88 001DA9C8  38 21 00 50 */	addi r1, r1, 0x50
/* 801DDA8C 001DA9CC  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game9ItemPlant4ItemFR8Graphics

.fn addDamage__Q34Game9ItemPlant4ItemFf, global
/* 801DDA90 001DA9D0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 801DDA94 001DA9D4  7C 08 02 A6 */	mflr r0
/* 801DDA98 001DA9D8  90 01 00 54 */	stw r0, 0x54(r1)
/* 801DDA9C 001DA9DC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 801DDAA0 001DA9E0  7C 7F 1B 78 */	mr r31, r3
/* 801DDAA4 001DA9E4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 801DDAA8 001DA9E8  C0 03 01 F0 */	lfs f0, 0x1f0(r3)
/* 801DDAAC 001DA9EC  EC 00 08 2A */	fadds f0, f0, f1
/* 801DDAB0 001DA9F0  D0 03 01 F0 */	stfs f0, 0x1f0(r3)
/* 801DDAB4 001DA9F4  80 8D 94 78 */	lwz r4, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DDAB8 001DA9F8  C0 23 01 F0 */	lfs f1, 0x1f0(r3)
/* 801DDABC 001DA9FC  80 84 00 8C */	lwz r4, 0x8c(r4)
/* 801DDAC0 001DAA00  C0 04 01 50 */	lfs f0, 0x150(r4)
/* 801DDAC4 001DAA04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DDAC8 001DAA08  40 81 00 20 */	ble .L_801DDAE8
/* 801DDACC 001DAA0C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDAD0 001DAA10  38 80 00 01 */	li r4, 1
/* 801DDAD4 001DAA14  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801DDAD8 001DAA18  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDADC 001DAA1C  81 8C 02 38 */	lwz r12, 0x238(r12)
/* 801DDAE0 001DAA20  7D 89 03 A6 */	mtctr r12
/* 801DDAE4 001DAA24  4E 80 04 21 */	bctrl 
.L_801DDAE8:
/* 801DDAE8 001DAA28  7F E4 FB 78 */	mr r4, r31
/* 801DDAEC 001DAA2C  38 61 00 20 */	addi r3, r1, 0x20
/* 801DDAF0 001DAA30  4B FC 21 6D */	bl __ct__Q24Game8StickersFPQ24Game8Creature
/* 801DDAF4 001DAA34  38 00 00 00 */	li r0, 0
/* 801DDAF8 001DAA38  3C 60 80 4B */	lis r3, "__vt__26Iterator<Q24Game8Creature>"@ha
/* 801DDAFC 001DAA3C  38 83 BC 84 */	addi r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
/* 801DDB00 001DAA40  38 61 00 20 */	addi r3, r1, 0x20
/* 801DDB04 001DAA44  28 00 00 00 */	cmplwi r0, 0
/* 801DDB08 001DAA48  90 81 00 10 */	stw r4, 0x10(r1)
/* 801DDB0C 001DAA4C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801DDB10 001DAA50  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DDB14 001DAA54  90 61 00 18 */	stw r3, 0x18(r1)
/* 801DDB18 001DAA58  40 82 00 1C */	bne .L_801DDB34
/* 801DDB1C 001DAA5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDB20 001DAA60  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801DDB24 001DAA64  7D 89 03 A6 */	mtctr r12
/* 801DDB28 001DAA68  4E 80 04 21 */	bctrl 
/* 801DDB2C 001DAA6C  90 61 00 14 */	stw r3, 0x14(r1)
/* 801DDB30 001DAA70  48 00 01 B0 */	b .L_801DDCE0
.L_801DDB34:
/* 801DDB34 001DAA74  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDB38 001DAA78  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801DDB3C 001DAA7C  7D 89 03 A6 */	mtctr r12
/* 801DDB40 001DAA80  4E 80 04 21 */	bctrl 
/* 801DDB44 001DAA84  90 61 00 14 */	stw r3, 0x14(r1)
/* 801DDB48 001DAA88  48 00 00 58 */	b .L_801DDBA0
.L_801DDB4C:
/* 801DDB4C 001DAA8C  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDB50 001DAA90  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDB54 001DAA94  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDB58 001DAA98  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801DDB5C 001DAA9C  7D 89 03 A6 */	mtctr r12
/* 801DDB60 001DAAA0  4E 80 04 21 */	bctrl 
/* 801DDB64 001DAAA4  7C 64 1B 78 */	mr r4, r3
/* 801DDB68 001DAAA8  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801DDB6C 001DAAAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDB70 001DAAB0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DDB74 001DAAB4  7D 89 03 A6 */	mtctr r12
/* 801DDB78 001DAAB8  4E 80 04 21 */	bctrl 
/* 801DDB7C 001DAABC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801DDB80 001DAAC0  40 82 01 60 */	bne .L_801DDCE0
/* 801DDB84 001DAAC4  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDB88 001DAAC8  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDB8C 001DAACC  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDB90 001DAAD0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DDB94 001DAAD4  7D 89 03 A6 */	mtctr r12
/* 801DDB98 001DAAD8  4E 80 04 21 */	bctrl 
/* 801DDB9C 001DAADC  90 61 00 14 */	stw r3, 0x14(r1)
.L_801DDBA0:
/* 801DDBA0 001DAAE0  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801DDBA4 001DAAE4  38 61 00 10 */	addi r3, r1, 0x10
/* 801DDBA8 001DAAE8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DDBAC 001DAAEC  7D 89 03 A6 */	mtctr r12
/* 801DDBB0 001DAAF0  4E 80 04 21 */	bctrl 
/* 801DDBB4 001DAAF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801DDBB8 001DAAF8  41 82 FF 94 */	beq .L_801DDB4C
/* 801DDBBC 001DAAFC  48 00 01 24 */	b .L_801DDCE0
.L_801DDBC0:
/* 801DDBC0 001DAB00  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDBC4 001DAB04  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDBC8 001DAB08  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801DDBCC 001DAB0C  7D 89 03 A6 */	mtctr r12
/* 801DDBD0 001DAB10  4E 80 04 21 */	bctrl 
/* 801DDBD4 001DAB14  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDBD8 001DAB18  7C 7E 1B 78 */	mr r30, r3
/* 801DDBDC 001DAB1C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801DDBE0 001DAB20  7D 89 03 A6 */	mtctr r12
/* 801DDBE4 001DAB24  4E 80 04 21 */	bctrl 
/* 801DDBE8 001DAB28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801DDBEC 001DAB2C  41 82 00 38 */	beq .L_801DDC24
/* 801DDBF0 001DAB30  3C 80 80 4B */	lis r4, __vt__Q24Game11Interaction@ha
/* 801DDBF4 001DAB34  3C 60 80 4B */	lis r3, __vt__Q24Game12InteractDrop@ha
/* 801DDBF8 001DAB38  38 84 A3 00 */	addi r4, r4, __vt__Q24Game11Interaction@l
/* 801DDBFC 001DAB3C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DDC00 001DAB40  38 03 B2 D8 */	addi r0, r3, __vt__Q24Game12InteractDrop@l
/* 801DDC04 001DAB44  7F C3 F3 78 */	mr r3, r30
/* 801DDC08 001DAB48  90 81 00 08 */	stw r4, 8(r1)
/* 801DDC0C 001DAB4C  38 81 00 08 */	addi r4, r1, 8
/* 801DDC10 001DAB50  90 01 00 08 */	stw r0, 8(r1)
/* 801DDC14 001DAB54  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DDC18 001DAB58  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 801DDC1C 001DAB5C  7D 89 03 A6 */	mtctr r12
/* 801DDC20 001DAB60  4E 80 04 21 */	bctrl 
.L_801DDC24:
/* 801DDC24 001DAB64  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801DDC28 001DAB68  28 00 00 00 */	cmplwi r0, 0
/* 801DDC2C 001DAB6C  40 82 00 24 */	bne .L_801DDC50
/* 801DDC30 001DAB70  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDC34 001DAB74  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDC38 001DAB78  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDC3C 001DAB7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DDC40 001DAB80  7D 89 03 A6 */	mtctr r12
/* 801DDC44 001DAB84  4E 80 04 21 */	bctrl 
/* 801DDC48 001DAB88  90 61 00 14 */	stw r3, 0x14(r1)
/* 801DDC4C 001DAB8C  48 00 00 94 */	b .L_801DDCE0
.L_801DDC50:
/* 801DDC50 001DAB90  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDC54 001DAB94  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDC58 001DAB98  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDC5C 001DAB9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DDC60 001DABA0  7D 89 03 A6 */	mtctr r12
/* 801DDC64 001DABA4  4E 80 04 21 */	bctrl 
/* 801DDC68 001DABA8  90 61 00 14 */	stw r3, 0x14(r1)
/* 801DDC6C 001DABAC  48 00 00 58 */	b .L_801DDCC4
.L_801DDC70:
/* 801DDC70 001DABB0  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDC74 001DABB4  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDC78 001DABB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDC7C 001DABBC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801DDC80 001DABC0  7D 89 03 A6 */	mtctr r12
/* 801DDC84 001DABC4  4E 80 04 21 */	bctrl 
/* 801DDC88 001DABC8  7C 64 1B 78 */	mr r4, r3
/* 801DDC8C 001DABCC  80 61 00 1C */	lwz r3, 0x1c(r1)
/* 801DDC90 001DABD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDC94 001DABD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DDC98 001DABD8  7D 89 03 A6 */	mtctr r12
/* 801DDC9C 001DABDC  4E 80 04 21 */	bctrl 
/* 801DDCA0 001DABE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801DDCA4 001DABE4  40 82 00 3C */	bne .L_801DDCE0
/* 801DDCA8 001DABE8  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDCAC 001DABEC  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDCB0 001DABF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDCB4 001DABF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DDCB8 001DABF8  7D 89 03 A6 */	mtctr r12
/* 801DDCBC 001DABFC  4E 80 04 21 */	bctrl 
/* 801DDCC0 001DAC00  90 61 00 14 */	stw r3, 0x14(r1)
.L_801DDCC4:
/* 801DDCC4 001DAC04  81 81 00 10 */	lwz r12, 0x10(r1)
/* 801DDCC8 001DAC08  38 61 00 10 */	addi r3, r1, 0x10
/* 801DDCCC 001DAC0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DDCD0 001DAC10  7D 89 03 A6 */	mtctr r12
/* 801DDCD4 001DAC14  4E 80 04 21 */	bctrl 
/* 801DDCD8 001DAC18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801DDCDC 001DAC1C  41 82 FF 94 */	beq .L_801DDC70
.L_801DDCE0:
/* 801DDCE0 001DAC20  80 61 00 18 */	lwz r3, 0x18(r1)
/* 801DDCE4 001DAC24  81 83 00 00 */	lwz r12, 0(r3)
/* 801DDCE8 001DAC28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801DDCEC 001DAC2C  7D 89 03 A6 */	mtctr r12
/* 801DDCF0 001DAC30  4E 80 04 21 */	bctrl 
/* 801DDCF4 001DAC34  80 81 00 14 */	lwz r4, 0x14(r1)
/* 801DDCF8 001DAC38  7C 04 18 40 */	cmplw r4, r3
/* 801DDCFC 001DAC3C  40 82 FE C4 */	bne .L_801DDBC0
/* 801DDD00 001DAC40  38 61 00 20 */	addi r3, r1, 0x20
/* 801DDD04 001DAC44  38 80 FF FF */	li r4, -1
/* 801DDD08 001DAC48  4B FC 20 5D */	bl __dt__Q24Game8StickersFv
/* 801DDD0C 001DAC4C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 801DDD10 001DAC50  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 801DDD14 001DAC54  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 801DDD18 001DAC58  7C 08 03 A6 */	mtlr r0
/* 801DDD1C 001DAC5C  38 21 00 50 */	addi r1, r1, 0x50
/* 801DDD20 001DAC60  4E 80 00 20 */	blr 
.endfn addDamage__Q34Game9ItemPlant4ItemFf

.fn dropFruit__Q34Game9ItemPlant4ItemFi, weak
/* 801DDD24 001DAC64  4E 80 00 20 */	blr 
.endfn dropFruit__Q34Game9ItemPlant4ItemFi

.fn calcAngles__Q34Game9ItemPlant12ProcAnimatorFv, global
/* 801DDD28 001DAC68  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801DDD2C 001DAC6C  7C 08 02 A6 */	mflr r0
/* 801DDD30 001DAC70  90 01 00 84 */	stw r0, 0x84(r1)
/* 801DDD34 001DAC74  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801DDD38 001DAC78  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801DDD3C 001DAC7C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 801DDD40 001DAC80  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 801DDD44 001DAC84  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 801DDD48 001DAC88  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 801DDD4C 001DAC8C  DB 81 00 40 */	stfd f28, 0x40(r1)
/* 801DDD50 001DAC90  F3 81 00 48 */	psq_st f28, 72(r1), 0, qr0
/* 801DDD54 001DAC94  DB 61 00 30 */	stfd f27, 0x30(r1)
/* 801DDD58 001DAC98  F3 61 00 38 */	psq_st f27, 56(r1), 0, qr0
/* 801DDD5C 001DAC9C  DB 41 00 20 */	stfd f26, 0x20(r1)
/* 801DDD60 001DACA0  F3 41 00 28 */	psq_st f26, 40(r1), 0, qr0
/* 801DDD64 001DACA4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801DDD68 001DACA8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801DDD6C 001DACAC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801DDD70 001DACB0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801DDD74 001DACB4  7C 7D 1B 78 */	mr r29, r3
/* 801DDD78 001DACB8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801DDD7C 001DACBC  C3 A2 B4 A0 */	lfs f29, lbl_80519800@sda21(r2)
/* 801DDD80 001DACC0  3B C0 00 01 */	li r30, 1
/* 801DDD84 001DACC4  80 63 00 00 */	lwz r3, 0(r3)
/* 801DDD88 001DACC8  3B E0 00 04 */	li r31, 4
/* 801DDD8C 001DACCC  C3 C2 B4 B4 */	lfs f30, lbl_80519814@sda21(r2)
/* 801DDD90 001DACD0  C3 83 00 0C */	lfs f28, 0xc(r3)
/* 801DDD94 001DACD4  C3 63 00 1C */	lfs f27, 0x1c(r3)
/* 801DDD98 001DACD8  C3 43 00 2C */	lfs f26, 0x2c(r3)
/* 801DDD9C 001DACDC  C3 E2 B4 A4 */	lfs f31, lbl_80519804@sda21(r2)
/* 801DDDA0 001DACE0  D3 9D 00 00 */	stfs f28, 0(r29)
/* 801DDDA4 001DACE4  D3 7D 00 04 */	stfs f27, 4(r29)
/* 801DDDA8 001DACE8  D3 5D 00 08 */	stfs f26, 8(r29)
/* 801DDDAC 001DACEC  48 00 02 2C */	b .L_801DDFD8
.L_801DDDB0:
/* 801DDDB0 001DACF0  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 801DDDB4 001DACF4  7F 83 F8 2E */	lwzx r28, r3, r31
/* 801DDDB8 001DACF8  C0 7C 00 1C */	lfs f3, 0x1c(r28)
/* 801DDDBC 001DACFC  C0 5C 00 0C */	lfs f2, 0xc(r28)
/* 801DDDC0 001DAD00  EC A3 D8 28 */	fsubs f5, f3, f27
/* 801DDDC4 001DAD04  C0 9C 00 2C */	lfs f4, 0x2c(r28)
/* 801DDDC8 001DAD08  EC 02 E0 28 */	fsubs f0, f2, f28
/* 801DDDCC 001DAD0C  EC 24 D0 28 */	fsubs f1, f4, f26
/* 801DDDD0 001DAD10  EC C5 01 72 */	fmuls f6, f5, f5
/* 801DDDD4 001DAD14  EC 21 00 72 */	fmuls f1, f1, f1
/* 801DDDD8 001DAD18  EC 00 30 3A */	fmadds f0, f0, f0, f6
/* 801DDDDC 001DAD1C  EC 21 00 2A */	fadds f1, f1, f0
/* 801DDDE0 001DAD20  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801DDDE4 001DAD24  40 81 00 14 */	ble .L_801DDDF8
/* 801DDDE8 001DAD28  40 81 00 14 */	ble .L_801DDDFC
/* 801DDDEC 001DAD2C  FC 00 08 34 */	frsqrte f0, f1
/* 801DDDF0 001DAD30  EC 20 00 72 */	fmuls f1, f0, f1
/* 801DDDF4 001DAD34  48 00 00 08 */	b .L_801DDDFC
.L_801DDDF8:
/* 801DDDF8 001DAD38  FC 20 E8 90 */	fmr f1, f29
.L_801DDDFC:
/* 801DDDFC 001DAD3C  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801DDE00 001DAD40  40 81 00 10 */	ble .L_801DDE10
/* 801DDE04 001DAD44  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DDE08 001DAD48  EC 00 08 24 */	fdivs f0, f0, f1
/* 801DDE0C 001DAD4C  EC A5 00 32 */	fmuls f5, f5, f0
.L_801DDE10:
/* 801DDE10 001DAD50  FF 80 10 90 */	fmr f28, f2
/* 801DDE14 001DAD54  FF 60 18 90 */	fmr f27, f3
/* 801DDE18 001DAD58  FF 40 20 90 */	fmr f26, f4
/* 801DDE1C 001DAD5C  FC 05 F0 40 */	fcmpo cr0, f5, f30
/* 801DDE20 001DAD60  40 80 00 0C */	bge .L_801DDE2C
/* 801DDE24 001DAD64  FC A0 F0 90 */	fmr f5, f30
/* 801DDE28 001DAD68  48 00 00 14 */	b .L_801DDE3C
.L_801DDE2C:
/* 801DDE2C 001DAD6C  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DDE30 001DAD70  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 801DDE34 001DAD74  40 81 00 08 */	ble .L_801DDE3C
/* 801DDE38 001DAD78  FC A0 00 90 */	fmr f5, f0
.L_801DDE3C:
/* 801DDE3C 001DAD7C  FC 05 F8 40 */	fcmpo cr0, f5, f31
/* 801DDE40 001DAD80  4C 41 13 82 */	cror 2, 1, 2
/* 801DDE44 001DAD84  40 82 00 0C */	bne .L_801DDE50
/* 801DDE48 001DAD88  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDE4C 001DAD8C  48 00 00 78 */	b .L_801DDEC4
.L_801DDE50:
/* 801DDE50 001DAD90  C0 02 B4 B4 */	lfs f0, lbl_80519814@sda21(r2)
/* 801DDE54 001DAD94  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 801DDE58 001DAD98  4C 40 13 82 */	cror 2, 0, 2
/* 801DDE5C 001DAD9C  40 82 00 0C */	bne .L_801DDE68
/* 801DDE60 001DADA0  C0 02 B4 B8 */	lfs f0, lbl_80519818@sda21(r2)
/* 801DDE64 001DADA4  48 00 00 60 */	b .L_801DDEC4
.L_801DDE68:
/* 801DDE68 001DADA8  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDE6C 001DADAC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 801DDE70 001DADB0  40 80 00 30 */	bge .L_801DDEA0
/* 801DDE74 001DADB4  FC 00 28 50 */	fneg f0, f5
/* 801DDE78 001DADB8  C0 22 B4 BC */	lfs f1, lbl_8051981C@sda21(r2)
/* 801DDE7C 001DADBC  EC 21 00 32 */	fmuls f1, f1, f0
/* 801DDE80 001DADC0  4B EE 3C CD */	bl __cvt_fp2unsigned
/* 801DDE84 001DADC4  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 801DDE88 001DADC8  54 60 10 3A */	slwi r0, r3, 2
/* 801DDE8C 001DADCC  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 801DDE90 001DADD0  C0 02 B4 C0 */	lfs f0, lbl_80519820@sda21(r2)
/* 801DDE94 001DADD4  7C 23 04 2E */	lfsx f1, r3, r0
/* 801DDE98 001DADD8  EC 01 00 2A */	fadds f0, f1, f0
/* 801DDE9C 001DADDC  48 00 00 28 */	b .L_801DDEC4
.L_801DDEA0:
/* 801DDEA0 001DADE0  C0 02 B4 BC */	lfs f0, lbl_8051981C@sda21(r2)
/* 801DDEA4 001DADE4  EC 20 01 72 */	fmuls f1, f0, f5
/* 801DDEA8 001DADE8  4B EE 3C A5 */	bl __cvt_fp2unsigned
/* 801DDEAC 001DADEC  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 801DDEB0 001DADF0  54 60 10 3A */	slwi r0, r3, 2
/* 801DDEB4 001DADF4  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 801DDEB8 001DADF8  C0 02 B4 C0 */	lfs f0, lbl_80519820@sda21(r2)
/* 801DDEBC 001DADFC  7C 23 04 2E */	lfsx f1, r3, r0
/* 801DDEC0 001DAE00  EC 00 08 28 */	fsubs f0, f0, f1
.L_801DDEC4:
/* 801DDEC4 001DAE04  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801DDEC8 001DAE08  7C 03 FD 2E */	stfsx f0, r3, r31
/* 801DDECC 001DAE0C  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 801DDED0 001DAE10  7C 03 FD 2E */	stfsx f0, r3, r31
/* 801DDED4 001DAE14  C0 5C 00 10 */	lfs f2, 0x10(r28)
/* 801DDED8 001DAE18  C0 3C 00 20 */	lfs f1, 0x20(r28)
/* 801DDEDC 001DAE1C  EC 62 00 B2 */	fmuls f3, f2, f2
/* 801DDEE0 001DAE20  C0 1C 00 00 */	lfs f0, 0(r28)
/* 801DDEE4 001DAE24  EC 21 00 72 */	fmuls f1, f1, f1
/* 801DDEE8 001DAE28  EC 00 18 3A */	fmadds f0, f0, f0, f3
/* 801DDEEC 001DAE2C  EC 21 00 2A */	fadds f1, f1, f0
/* 801DDEF0 001DAE30  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801DDEF4 001DAE34  40 81 00 14 */	ble .L_801DDF08
/* 801DDEF8 001DAE38  40 81 00 14 */	ble .L_801DDF0C
/* 801DDEFC 001DAE3C  FC 00 08 34 */	frsqrte f0, f1
/* 801DDF00 001DAE40  EC 20 00 72 */	fmuls f1, f0, f1
/* 801DDF04 001DAE44  48 00 00 08 */	b .L_801DDF0C
.L_801DDF08:
/* 801DDF08 001DAE48  FC 20 E8 90 */	fmr f1, f29
.L_801DDF0C:
/* 801DDF0C 001DAE4C  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801DDF10 001DAE50  40 81 00 10 */	ble .L_801DDF20
/* 801DDF14 001DAE54  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DDF18 001DAE58  EC 00 08 24 */	fdivs f0, f0, f1
/* 801DDF1C 001DAE5C  EC 42 00 32 */	fmuls f2, f2, f0
.L_801DDF20:
/* 801DDF20 001DAE60  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801DDF24 001DAE64  40 80 00 0C */	bge .L_801DDF30
/* 801DDF28 001DAE68  FC 40 F0 90 */	fmr f2, f30
/* 801DDF2C 001DAE6C  48 00 00 14 */	b .L_801DDF40
.L_801DDF30:
/* 801DDF30 001DAE70  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DDF34 001DAE74  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DDF38 001DAE78  40 81 00 08 */	ble .L_801DDF40
/* 801DDF3C 001DAE7C  FC 40 00 90 */	fmr f2, f0
.L_801DDF40:
/* 801DDF40 001DAE80  FC 02 F8 40 */	fcmpo cr0, f2, f31
/* 801DDF44 001DAE84  4C 41 13 82 */	cror 2, 1, 2
/* 801DDF48 001DAE88  40 82 00 0C */	bne .L_801DDF54
/* 801DDF4C 001DAE8C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDF50 001DAE90  48 00 00 78 */	b .L_801DDFC8
.L_801DDF54:
/* 801DDF54 001DAE94  C0 02 B4 B4 */	lfs f0, lbl_80519814@sda21(r2)
/* 801DDF58 001DAE98  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DDF5C 001DAE9C  4C 40 13 82 */	cror 2, 0, 2
/* 801DDF60 001DAEA0  40 82 00 0C */	bne .L_801DDF6C
/* 801DDF64 001DAEA4  C0 02 B4 B8 */	lfs f0, lbl_80519818@sda21(r2)
/* 801DDF68 001DAEA8  48 00 00 60 */	b .L_801DDFC8
.L_801DDF6C:
/* 801DDF6C 001DAEAC  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDF70 001DAEB0  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 801DDF74 001DAEB4  40 80 00 30 */	bge .L_801DDFA4
/* 801DDF78 001DAEB8  FC 00 10 50 */	fneg f0, f2
/* 801DDF7C 001DAEBC  C0 22 B4 BC */	lfs f1, lbl_8051981C@sda21(r2)
/* 801DDF80 001DAEC0  EC 21 00 32 */	fmuls f1, f1, f0
/* 801DDF84 001DAEC4  4B EE 3B C9 */	bl __cvt_fp2unsigned
/* 801DDF88 001DAEC8  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 801DDF8C 001DAECC  54 60 10 3A */	slwi r0, r3, 2
/* 801DDF90 001DAED0  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 801DDF94 001DAED4  C0 02 B4 C0 */	lfs f0, lbl_80519820@sda21(r2)
/* 801DDF98 001DAED8  7C 23 04 2E */	lfsx f1, r3, r0
/* 801DDF9C 001DAEDC  EC 01 00 2A */	fadds f0, f1, f0
/* 801DDFA0 001DAEE0  48 00 00 28 */	b .L_801DDFC8
.L_801DDFA4:
/* 801DDFA4 001DAEE4  C0 02 B4 BC */	lfs f0, lbl_8051981C@sda21(r2)
/* 801DDFA8 001DAEE8  EC 20 00 B2 */	fmuls f1, f0, f2
/* 801DDFAC 001DAEEC  4B EE 3B A1 */	bl __cvt_fp2unsigned
/* 801DDFB0 001DAEF0  3C 80 80 51 */	lis r4, asinAcosTable___5JMath@ha
/* 801DDFB4 001DAEF4  54 60 10 3A */	slwi r0, r3, 2
/* 801DDFB8 001DAEF8  38 64 E2 00 */	addi r3, r4, asinAcosTable___5JMath@l
/* 801DDFBC 001DAEFC  C0 02 B4 C0 */	lfs f0, lbl_80519820@sda21(r2)
/* 801DDFC0 001DAF00  7C 23 04 2E */	lfsx f1, r3, r0
/* 801DDFC4 001DAF04  EC 00 08 28 */	fsubs f0, f0, f1
.L_801DDFC8:
/* 801DDFC8 001DAF08  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801DDFCC 001DAF0C  3B DE 00 01 */	addi r30, r30, 1
/* 801DDFD0 001DAF10  7C 03 FD 2E */	stfsx f0, r3, r31
/* 801DDFD4 001DAF14  3B FF 00 04 */	addi r31, r31, 4
.L_801DDFD8:
/* 801DDFD8 001DAF18  80 1D 00 20 */	lwz r0, 0x20(r29)
/* 801DDFDC 001DAF1C  7C 1E 00 00 */	cmpw r30, r0
/* 801DDFE0 001DAF20  41 80 FD D0 */	blt .L_801DDDB0
/* 801DDFE4 001DAF24  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DDFE8 001DAF28  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 801DDFEC 001DAF2C  D0 03 00 00 */	stfs f0, 0(r3)
/* 801DDFF0 001DAF30  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801DDFF4 001DAF34  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801DDFF8 001DAF38  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 801DDFFC 001DAF3C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 801DE000 001DAF40  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 801DE004 001DAF44  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 801DE008 001DAF48  E3 81 00 48 */	psq_l f28, 72(r1), 0, qr0
/* 801DE00C 001DAF4C  CB 81 00 40 */	lfd f28, 0x40(r1)
/* 801DE010 001DAF50  E3 61 00 38 */	psq_l f27, 56(r1), 0, qr0
/* 801DE014 001DAF54  CB 61 00 30 */	lfd f27, 0x30(r1)
/* 801DE018 001DAF58  E3 41 00 28 */	psq_l f26, 40(r1), 0, qr0
/* 801DE01C 001DAF5C  CB 41 00 20 */	lfd f26, 0x20(r1)
/* 801DE020 001DAF60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801DE024 001DAF64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801DE028 001DAF68  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801DE02C 001DAF6C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801DE030 001DAF70  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801DE034 001DAF74  7C 08 03 A6 */	mtlr r0
/* 801DE038 001DAF78  38 21 00 80 */	addi r1, r1, 0x80
/* 801DE03C 001DAF7C  4E 80 00 20 */	blr 
.endfn calcAngles__Q34Game9ItemPlant12ProcAnimatorFv

.fn update__Q34Game9ItemPlant12ProcAnimatorFff, global
/* 801DE040 001DAF80  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 801DE044 001DAF84  7C 08 02 A6 */	mflr r0
/* 801DE048 001DAF88  90 01 01 84 */	stw r0, 0x184(r1)
/* 801DE04C 001DAF8C  DB E1 01 70 */	stfd f31, 0x170(r1)
/* 801DE050 001DAF90  F3 E1 01 78 */	psq_st f31, 376(r1), 0, qr0
/* 801DE054 001DAF94  DB C1 01 60 */	stfd f30, 0x160(r1)
/* 801DE058 001DAF98  F3 C1 01 68 */	psq_st f30, 360(r1), 0, qr0
/* 801DE05C 001DAF9C  DB A1 01 50 */	stfd f29, 0x150(r1)
/* 801DE060 001DAFA0  F3 A1 01 58 */	psq_st f29, 344(r1), 0, qr0
/* 801DE064 001DAFA4  DB 81 01 40 */	stfd f28, 0x140(r1)
/* 801DE068 001DAFA8  F3 81 01 48 */	psq_st f28, 328(r1), 0, qr0
/* 801DE06C 001DAFAC  BF 61 01 2C */	stmw r27, 0x12c(r1)
/* 801DE070 001DAFB0  C0 02 B4 C4 */	lfs f0, lbl_80519824@sda21(r2)
/* 801DE074 001DAFB4  7C 7B 1B 78 */	mr r27, r3
/* 801DE078 001DAFB8  C0 82 B4 A4 */	lfs f4, lbl_80519804@sda21(r2)
/* 801DE07C 001DAFBC  FF 80 08 90 */	fmr f28, f1
/* 801DE080 001DAFC0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801DE084 001DAFC4  EC A2 00 32 */	fmuls f5, f2, f0
/* 801DE088 001DAFC8  EC 84 00 32 */	fmuls f4, f4, f0
/* 801DE08C 001DAFCC  C0 02 B4 C8 */	lfs f0, lbl_80519828@sda21(r2)
/* 801DE090 001DAFD0  C0 5B 00 28 */	lfs f2, 0x28(r27)
/* 801DE094 001DAFD4  C0 7B 00 24 */	lfs f3, 0x24(r27)
/* 801DE098 001DAFD8  FC 80 20 50 */	fneg f4, f4
/* 801DE09C 001DAFDC  C0 C3 00 54 */	lfs f6, 0x54(r3)
/* 801DE0A0 001DAFE0  EC 20 00 B2 */	fmuls f1, f0, f2
/* 801DE0A4 001DAFE4  C0 02 B4 CC */	lfs f0, lbl_8051982C@sda21(r2)
/* 801DE0A8 001DAFE8  EC 24 08 F8 */	fmsubs f1, f4, f3, f1
/* 801DE0AC 001DAFEC  EC 25 08 2A */	fadds f1, f5, f1
/* 801DE0B0 001DAFF0  EC 26 10 7A */	fmadds f1, f6, f1, f2
/* 801DE0B4 001DAFF4  D0 3B 00 28 */	stfs f1, 0x28(r27)
/* 801DE0B8 001DAFF8  C0 5B 00 28 */	lfs f2, 0x28(r27)
/* 801DE0BC 001DAFFC  C0 3B 00 24 */	lfs f1, 0x24(r27)
/* 801DE0C0 001DB000  EC 26 08 BA */	fmadds f1, f6, f2, f1
/* 801DE0C4 001DB004  D0 3B 00 24 */	stfs f1, 0x24(r27)
/* 801DE0C8 001DB008  C0 3B 00 24 */	lfs f1, 0x24(r27)
/* 801DE0CC 001DB00C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DE0D0 001DB010  40 81 00 0C */	ble .L_801DE0DC
/* 801DE0D4 001DB014  D0 1B 00 24 */	stfs f0, 0x24(r27)
/* 801DE0D8 001DB018  48 00 00 14 */	b .L_801DE0EC
.L_801DE0DC:
/* 801DE0DC 001DB01C  C0 02 B4 D0 */	lfs f0, lbl_80519830@sda21(r2)
/* 801DE0E0 001DB020  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DE0E4 001DB024  40 80 00 08 */	bge .L_801DE0EC
/* 801DE0E8 001DB028  D0 1B 00 24 */	stfs f0, 0x24(r27)
.L_801DE0EC:
/* 801DE0EC 001DB02C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DE0F0 001DB030  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801DE0F4 001DB034  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801DE0F8 001DB038  D3 81 00 84 */	stfs f28, 0x84(r1)
/* 801DE0FC 001DB03C  38 61 00 BC */	addi r3, r1, 0xbc
/* 801DE100 001DB040  38 A1 00 80 */	addi r5, r1, 0x80
/* 801DE104 001DB044  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 801DE108 001DB048  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 801DE10C 001DB04C  48 24 A7 7D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801DE110 001DB050  7F 63 DB 78 */	mr r3, r27
/* 801DE114 001DB054  4B FF FC 15 */	bl calcAngles__Q34Game9ItemPlant12ProcAnimatorFv
/* 801DE118 001DB058  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 801DE11C 001DB05C  38 80 00 01 */	li r4, 1
/* 801DE120 001DB060  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DE124 001DB064  38 A0 00 04 */	li r5, 4
/* 801DE128 001DB068  80 63 00 00 */	lwz r3, 0(r3)
/* 801DE12C 001DB06C  C0 63 00 0C */	lfs f3, 0xc(r3)
/* 801DE130 001DB070  C0 83 00 1C */	lfs f4, 0x1c(r3)
/* 801DE134 001DB074  C0 A3 00 2C */	lfs f5, 0x2c(r3)
/* 801DE138 001DB078  48 00 00 6C */	b .L_801DE1A4
.L_801DE13C:
/* 801DE13C 001DB07C  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 801DE140 001DB080  7C 63 28 2E */	lwzx r3, r3, r5
/* 801DE144 001DB084  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 801DE148 001DB088  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 801DE14C 001DB08C  EC E2 20 28 */	fsubs f7, f2, f4
/* 801DE150 001DB090  C0 C3 00 2C */	lfs f6, 0x2c(r3)
/* 801DE154 001DB094  EC 81 18 28 */	fsubs f4, f1, f3
/* 801DE158 001DB098  EC A6 28 28 */	fsubs f5, f6, f5
/* 801DE15C 001DB09C  EC E7 01 F2 */	fmuls f7, f7, f7
/* 801DE160 001DB0A0  FC 60 08 90 */	fmr f3, f1
/* 801DE164 001DB0A4  ED 05 01 72 */	fmuls f8, f5, f5
/* 801DE168 001DB0A8  EC 24 39 3A */	fmadds f1, f4, f4, f7
/* 801DE16C 001DB0AC  FC 80 10 90 */	fmr f4, f2
/* 801DE170 001DB0B0  FC A0 30 90 */	fmr f5, f6
/* 801DE174 001DB0B4  EC 28 08 2A */	fadds f1, f8, f1
/* 801DE178 001DB0B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DE17C 001DB0BC  40 81 00 14 */	ble .L_801DE190
/* 801DE180 001DB0C0  40 81 00 14 */	ble .L_801DE194
/* 801DE184 001DB0C4  FC 40 08 34 */	frsqrte f2, f1
/* 801DE188 001DB0C8  EC 22 00 72 */	fmuls f1, f2, f1
/* 801DE18C 001DB0CC  48 00 00 08 */	b .L_801DE194
.L_801DE190:
/* 801DE190 001DB0D0  FC 20 00 90 */	fmr f1, f0
.L_801DE194:
/* 801DE194 001DB0D4  80 7B 00 1C */	lwz r3, 0x1c(r27)
/* 801DE198 001DB0D8  38 84 00 01 */	addi r4, r4, 1
/* 801DE19C 001DB0DC  7C 23 2D 2E */	stfsx f1, r3, r5
/* 801DE1A0 001DB0E0  38 A5 00 04 */	addi r5, r5, 4
.L_801DE1A4:
/* 801DE1A4 001DB0E4  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 801DE1A8 001DB0E8  7C 04 00 00 */	cmpw r4, r0
/* 801DE1AC 001DB0EC  41 80 FF 90 */	blt .L_801DE13C
/* 801DE1B0 001DB0F0  C0 1B 00 00 */	lfs f0, 0(r27)
/* 801DE1B4 001DB0F4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801DE1B8 001DB0F8  C3 C2 B4 A0 */	lfs f30, lbl_80519800@sda21(r2)
/* 801DE1BC 001DB0FC  3B E3 71 A0 */	addi r31, r3, sincosTable___5JMath@l
/* 801DE1C0 001DB100  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 801DE1C4 001DB104  3B A0 00 01 */	li r29, 1
/* 801DE1C8 001DB108  C3 E2 B4 E0 */	lfs f31, lbl_80519840@sda21(r2)
/* 801DE1CC 001DB10C  3B C0 00 04 */	li r30, 4
/* 801DE1D0 001DB110  C0 1B 00 04 */	lfs f0, 4(r27)
/* 801DE1D4 001DB114  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 801DE1D8 001DB118  C0 1B 00 08 */	lfs f0, 8(r27)
/* 801DE1DC 001DB11C  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801DE1E0 001DB120  48 00 03 04 */	b .L_801DE4E4
.L_801DE1E4:
/* 801DE1E4 001DB124  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 801DE1E8 001DB128  2C 1D 00 01 */	cmpwi r29, 1
/* 801DE1EC 001DB12C  7F 83 F0 2E */	lwzx r28, r3, r30
/* 801DE1F0 001DB130  40 82 00 0C */	bne .L_801DE1FC
/* 801DE1F4 001DB134  C0 22 B4 D4 */	lfs f1, lbl_80519834@sda21(r2)
/* 801DE1F8 001DB138  48 00 00 18 */	b .L_801DE210
.L_801DE1FC:
/* 801DE1FC 001DB13C  2C 1D 00 02 */	cmpwi r29, 2
/* 801DE200 001DB140  40 82 00 0C */	bne .L_801DE20C
/* 801DE204 001DB144  C0 22 B4 D8 */	lfs f1, lbl_80519838@sda21(r2)
/* 801DE208 001DB148  48 00 00 08 */	b .L_801DE210
.L_801DE20C:
/* 801DE20C 001DB14C  C0 22 B4 A4 */	lfs f1, lbl_80519804@sda21(r2)
.L_801DE210:
/* 801DE210 001DB150  C0 1B 00 24 */	lfs f0, 0x24(r27)
/* 801DE214 001DB154  38 61 00 8C */	addi r3, r1, 0x8c
/* 801DE218 001DB158  80 BB 00 18 */	lwz r5, 0x18(r27)
/* 801DE21C 001DB15C  38 81 00 74 */	addi r4, r1, 0x74
/* 801DE220 001DB160  EC 61 00 32 */	fmuls f3, f1, f0
/* 801DE224 001DB164  80 FB 00 14 */	lwz r7, 0x14(r27)
/* 801DE228 001DB168  7C 05 F4 2E */	lfsx f0, r5, r30
/* 801DE22C 001DB16C  38 A1 00 5C */	addi r5, r1, 0x5c
/* 801DE230 001DB170  80 DB 00 1C */	lwz r6, 0x1c(r27)
/* 801DE234 001DB174  7C 27 F4 2E */	lfsx f1, r7, r30
/* 801DE238 001DB178  7C 46 F4 2E */	lfsx f2, r6, r30
/* 801DE23C 001DB17C  EC 00 18 2A */	fadds f0, f0, f3
/* 801DE240 001DB180  EF A1 18 2A */	fadds f29, f1, f3
/* 801DE244 001DB184  D3 C1 00 68 */	stfs f30, 0x68(r1)
/* 801DE248 001DB188  D0 41 00 6C */	stfs f2, 0x6c(r1)
/* 801DE24C 001DB18C  D3 C1 00 70 */	stfs f30, 0x70(r1)
/* 801DE250 001DB190  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801DE254 001DB194  D3 81 00 60 */	stfs f28, 0x60(r1)
/* 801DE258 001DB198  D3 C1 00 64 */	stfs f30, 0x64(r1)
/* 801DE25C 001DB19C  48 24 A6 2D */	bl "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801DE260 001DB1A0  38 61 00 8C */	addi r3, r1, 0x8c
/* 801DE264 001DB1A4  38 81 00 68 */	addi r4, r1, 0x68
/* 801DE268 001DB1A8  38 A1 00 2C */	addi r5, r1, 0x2c
/* 801DE26C 001DB1AC  4B F0 C9 6D */	bl PSMTXMultVec
/* 801DE270 001DB1B0  C0 41 00 2C */	lfs f2, 0x2c(r1)
/* 801DE274 001DB1B4  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 801DE278 001DB1B8  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 801DE27C 001DB1BC  D0 41 00 68 */	stfs f2, 0x68(r1)
/* 801DE280 001DB1C0  D0 21 00 6C */	stfs f1, 0x6c(r1)
/* 801DE284 001DB1C4  D0 01 00 70 */	stfs f0, 0x70(r1)
/* 801DE288 001DB1C8  D0 41 00 74 */	stfs f2, 0x74(r1)
/* 801DE28C 001DB1CC  D0 21 00 78 */	stfs f1, 0x78(r1)
/* 801DE290 001DB1D0  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 801DE294 001DB1D4  D0 5C 00 0C */	stfs f2, 0xc(r28)
/* 801DE298 001DB1D8  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 801DE29C 001DB1DC  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 801DE2A0 001DB1E0  C0 01 00 70 */	lfs f0, 0x70(r1)
/* 801DE2A4 001DB1E4  D0 1C 00 2C */	stfs f0, 0x2c(r28)
/* 801DE2A8 001DB1E8  C0 1C 00 10 */	lfs f0, 0x10(r28)
/* 801DE2AC 001DB1EC  C0 3C 00 20 */	lfs f1, 0x20(r28)
/* 801DE2B0 001DB1F0  EC 40 00 32 */	fmuls f2, f0, f0
/* 801DE2B4 001DB1F4  C0 1C 00 00 */	lfs f0, 0(r28)
/* 801DE2B8 001DB1F8  EC 21 00 72 */	fmuls f1, f1, f1
/* 801DE2BC 001DB1FC  EC 00 10 3A */	fmadds f0, f0, f0, f2
/* 801DE2C0 001DB200  EC 41 00 2A */	fadds f2, f1, f0
/* 801DE2C4 001DB204  FC 02 F0 40 */	fcmpo cr0, f2, f30
/* 801DE2C8 001DB208  40 81 00 14 */	ble .L_801DE2DC
/* 801DE2CC 001DB20C  40 81 00 14 */	ble .L_801DE2E0
/* 801DE2D0 001DB210  FC 00 10 34 */	frsqrte f0, f2
/* 801DE2D4 001DB214  EC 40 00 B2 */	fmuls f2, f0, f2
/* 801DE2D8 001DB218  48 00 00 08 */	b .L_801DE2E0
.L_801DE2DC:
/* 801DE2DC 001DB21C  FC 40 F0 90 */	fmr f2, f30
.L_801DE2E0:
/* 801DE2E0 001DB220  FC 1D F0 40 */	fcmpo cr0, f29, f30
/* 801DE2E4 001DB224  40 80 00 30 */	bge .L_801DE314
/* 801DE2E8 001DB228  C0 02 B4 DC */	lfs f0, lbl_8051983C@sda21(r2)
/* 801DE2EC 001DB22C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801DE2F0 001DB230  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801DE2F4 001DB234  EC 1D 00 32 */	fmuls f0, f29, f0
/* 801DE2F8 001DB238  FC 00 00 1E */	fctiwz f0, f0
/* 801DE2FC 001DB23C  D8 01 00 F0 */	stfd f0, 0xf0(r1)
/* 801DE300 001DB240  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 801DE304 001DB244  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE308 001DB248  7C 03 04 2E */	lfsx f0, r3, r0
/* 801DE30C 001DB24C  FC 00 00 50 */	fneg f0, f0
/* 801DE310 001DB250  48 00 00 28 */	b .L_801DE338
.L_801DE314:
/* 801DE314 001DB254  C0 02 B4 E0 */	lfs f0, lbl_80519840@sda21(r2)
/* 801DE318 001DB258  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801DE31C 001DB25C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801DE320 001DB260  EC 1D 00 32 */	fmuls f0, f29, f0
/* 801DE324 001DB264  FC 00 00 1E */	fctiwz f0, f0
/* 801DE328 001DB268  D8 01 00 F8 */	stfd f0, 0xf8(r1)
/* 801DE32C 001DB26C  80 01 00 FC */	lwz r0, 0xfc(r1)
/* 801DE330 001DB270  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE334 001DB274  7C 03 04 2E */	lfsx f0, r3, r0
.L_801DE338:
/* 801DE338 001DB278  FC 60 E8 90 */	fmr f3, f29
/* 801DE33C 001DB27C  FC 1D F0 40 */	fcmpo cr0, f29, f30
/* 801DE340 001DB280  EC 22 00 32 */	fmuls f1, f2, f0
/* 801DE344 001DB284  40 80 00 08 */	bge .L_801DE34C
/* 801DE348 001DB288  FC 60 E8 50 */	fneg f3, f29
.L_801DE34C:
/* 801DE34C 001DB28C  EC 03 07 F2 */	fmuls f0, f3, f31
/* 801DE350 001DB290  D3 C1 00 50 */	stfs f30, 0x50(r1)
/* 801DE354 001DB294  FC 60 E8 90 */	fmr f3, f29
/* 801DE358 001DB298  FC 1D F0 40 */	fcmpo cr0, f29, f30
/* 801DE35C 001DB29C  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801DE360 001DB2A0  FC 00 00 1E */	fctiwz f0, f0
/* 801DE364 001DB2A4  D8 01 01 00 */	stfd f0, 0x100(r1)
/* 801DE368 001DB2A8  80 01 01 04 */	lwz r0, 0x104(r1)
/* 801DE36C 001DB2AC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE370 001DB2B0  7C 7F 02 14 */	add r3, r31, r0
/* 801DE374 001DB2B4  C0 03 00 04 */	lfs f0, 4(r3)
/* 801DE378 001DB2B8  EC 02 00 32 */	fmuls f0, f2, f0
/* 801DE37C 001DB2BC  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 801DE380 001DB2C0  40 80 00 08 */	bge .L_801DE388
/* 801DE384 001DB2C4  FC 60 E8 50 */	fneg f3, f29
.L_801DE388:
/* 801DE388 001DB2C8  EC 03 07 F2 */	fmuls f0, f3, f31
/* 801DE38C 001DB2CC  FC 1D F0 40 */	fcmpo cr0, f29, f30
/* 801DE390 001DB2D0  FC 00 00 1E */	fctiwz f0, f0
/* 801DE394 001DB2D4  D8 01 01 08 */	stfd f0, 0x108(r1)
/* 801DE398 001DB2D8  80 01 01 0C */	lwz r0, 0x10c(r1)
/* 801DE39C 001DB2DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE3A0 001DB2E0  7C 7F 02 14 */	add r3, r31, r0
/* 801DE3A4 001DB2E4  C0 03 00 04 */	lfs f0, 4(r3)
/* 801DE3A8 001DB2E8  EC 22 00 32 */	fmuls f1, f2, f0
/* 801DE3AC 001DB2EC  40 80 00 30 */	bge .L_801DE3DC
/* 801DE3B0 001DB2F0  C0 02 B4 DC */	lfs f0, lbl_8051983C@sda21(r2)
/* 801DE3B4 001DB2F4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801DE3B8 001DB2F8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801DE3BC 001DB2FC  EC 1D 00 32 */	fmuls f0, f29, f0
/* 801DE3C0 001DB300  FC 00 00 1E */	fctiwz f0, f0
/* 801DE3C4 001DB304  D8 01 01 10 */	stfd f0, 0x110(r1)
/* 801DE3C8 001DB308  80 01 01 14 */	lwz r0, 0x114(r1)
/* 801DE3CC 001DB30C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE3D0 001DB310  7C 03 04 2E */	lfsx f0, r3, r0
/* 801DE3D4 001DB314  FC 00 00 50 */	fneg f0, f0
/* 801DE3D8 001DB318  48 00 00 24 */	b .L_801DE3FC
.L_801DE3DC:
/* 801DE3DC 001DB31C  EC 1D 07 F2 */	fmuls f0, f29, f31
/* 801DE3E0 001DB320  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801DE3E4 001DB324  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801DE3E8 001DB328  FC 00 00 1E */	fctiwz f0, f0
/* 801DE3EC 001DB32C  D8 01 01 18 */	stfd f0, 0x118(r1)
/* 801DE3F0 001DB330  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 801DE3F4 001DB334  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801DE3F8 001DB338  7C 03 04 2E */	lfsx f0, r3, r0
.L_801DE3FC:
/* 801DE3FC 001DB33C  FC 00 00 50 */	fneg f0, f0
/* 801DE400 001DB340  D3 C1 00 44 */	stfs f30, 0x44(r1)
/* 801DE404 001DB344  38 61 00 BC */	addi r3, r1, 0xbc
/* 801DE408 001DB348  38 81 00 50 */	addi r4, r1, 0x50
/* 801DE40C 001DB34C  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 801DE410 001DB350  38 A1 00 20 */	addi r5, r1, 0x20
/* 801DE414 001DB354  EC 02 00 32 */	fmuls f0, f2, f0
/* 801DE418 001DB358  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 801DE41C 001DB35C  D3 C1 00 3C */	stfs f30, 0x3c(r1)
/* 801DE420 001DB360  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801DE424 001DB364  D3 C1 00 40 */	stfs f30, 0x40(r1)
/* 801DE428 001DB368  4B F0 C7 B1 */	bl PSMTXMultVec
/* 801DE42C 001DB36C  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 801DE430 001DB370  38 61 00 BC */	addi r3, r1, 0xbc
/* 801DE434 001DB374  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 801DE438 001DB378  38 81 00 44 */	addi r4, r1, 0x44
/* 801DE43C 001DB37C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 801DE440 001DB380  38 A1 00 14 */	addi r5, r1, 0x14
/* 801DE444 001DB384  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 801DE448 001DB388  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801DE44C 001DB38C  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801DE450 001DB390  4B F0 C7 89 */	bl PSMTXMultVec
/* 801DE454 001DB394  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801DE458 001DB398  38 61 00 BC */	addi r3, r1, 0xbc
/* 801DE45C 001DB39C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801DE460 001DB3A0  38 81 00 38 */	addi r4, r1, 0x38
/* 801DE464 001DB3A4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801DE468 001DB3A8  38 A1 00 08 */	addi r5, r1, 8
/* 801DE46C 001DB3AC  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801DE470 001DB3B0  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801DE474 001DB3B4  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801DE478 001DB3B8  4B F0 C7 61 */	bl PSMTXMultVec
/* 801DE47C 001DB3BC  C0 01 00 08 */	lfs f0, 8(r1)
/* 801DE480 001DB3C0  3B DE 00 04 */	addi r30, r30, 4
/* 801DE484 001DB3C4  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801DE488 001DB3C8  3B BD 00 01 */	addi r29, r29, 1
/* 801DE48C 001DB3CC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801DE490 001DB3D0  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 801DE494 001DB3D4  C0 01 00 50 */	lfs f0, 0x50(r1)
/* 801DE498 001DB3D8  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801DE49C 001DB3DC  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 801DE4A0 001DB3E0  D0 1C 00 00 */	stfs f0, 0(r28)
/* 801DE4A4 001DB3E4  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 801DE4A8 001DB3E8  D0 1C 00 10 */	stfs f0, 0x10(r28)
/* 801DE4AC 001DB3EC  C0 01 00 58 */	lfs f0, 0x58(r1)
/* 801DE4B0 001DB3F0  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 801DE4B4 001DB3F4  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 801DE4B8 001DB3F8  D0 1C 00 04 */	stfs f0, 4(r28)
/* 801DE4BC 001DB3FC  C0 01 00 48 */	lfs f0, 0x48(r1)
/* 801DE4C0 001DB400  D0 1C 00 14 */	stfs f0, 0x14(r28)
/* 801DE4C4 001DB404  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 801DE4C8 001DB408  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 801DE4CC 001DB40C  C0 01 00 38 */	lfs f0, 0x38(r1)
/* 801DE4D0 001DB410  D0 1C 00 08 */	stfs f0, 8(r28)
/* 801DE4D4 001DB414  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 801DE4D8 001DB418  D0 1C 00 18 */	stfs f0, 0x18(r28)
/* 801DE4DC 001DB41C  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 801DE4E0 001DB420  D0 1C 00 28 */	stfs f0, 0x28(r28)
.L_801DE4E4:
/* 801DE4E4 001DB424  80 1B 00 20 */	lwz r0, 0x20(r27)
/* 801DE4E8 001DB428  7C 1D 00 00 */	cmpw r29, r0
/* 801DE4EC 001DB42C  41 80 FC F8 */	blt .L_801DE1E4
/* 801DE4F0 001DB430  E3 E1 01 78 */	psq_l f31, 376(r1), 0, qr0
/* 801DE4F4 001DB434  CB E1 01 70 */	lfd f31, 0x170(r1)
/* 801DE4F8 001DB438  E3 C1 01 68 */	psq_l f30, 360(r1), 0, qr0
/* 801DE4FC 001DB43C  CB C1 01 60 */	lfd f30, 0x160(r1)
/* 801DE500 001DB440  E3 A1 01 58 */	psq_l f29, 344(r1), 0, qr0
/* 801DE504 001DB444  CB A1 01 50 */	lfd f29, 0x150(r1)
/* 801DE508 001DB448  E3 81 01 48 */	psq_l f28, 328(r1), 0, qr0
/* 801DE50C 001DB44C  CB 81 01 40 */	lfd f28, 0x140(r1)
/* 801DE510 001DB450  BB 61 01 2C */	lmw r27, 0x12c(r1)
/* 801DE514 001DB454  80 01 01 84 */	lwz r0, 0x184(r1)
/* 801DE518 001DB458  7C 08 03 A6 */	mtlr r0
/* 801DE51C 001DB45C  38 21 01 80 */	addi r1, r1, 0x180
/* 801DE520 001DB460  4E 80 00 20 */	blr 
.endfn update__Q34Game9ItemPlant12ProcAnimatorFff

.fn onKill__Q34Game9ItemPlant5PlantFPQ24Game15CreatureKillArg, global
/* 801DE524 001DB464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DE528 001DB468  7C 08 02 A6 */	mflr r0
/* 801DE52C 001DB46C  7C 64 1B 78 */	mr r4, r3
/* 801DE530 001DB470  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DE534 001DB474  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DE538 001DB478  81 83 00 00 */	lwz r12, 0(r3)
/* 801DE53C 001DB47C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801DE540 001DB480  7D 89 03 A6 */	mtctr r12
/* 801DE544 001DB484  4E 80 04 21 */	bctrl 
/* 801DE548 001DB488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DE54C 001DB48C  7C 08 03 A6 */	mtlr r0
/* 801DE550 001DB490  38 21 00 10 */	addi r1, r1, 0x10
/* 801DE554 001DB494  4E 80 00 20 */	blr 
.endfn onKill__Q34Game9ItemPlant5PlantFPQ24Game15CreatureKillArg

.fn "getNearestFruit__Q34Game9ItemPlant5PlantFR10Vector3<f>", global
/* 801DE558 001DB498  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DE55C 001DB49C  7C 08 02 A6 */	mflr r0
/* 801DE560 001DB4A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DE564 001DB4A4  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DE568 001DB4A8  48 00 20 B9 */	bl "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
/* 801DE56C 001DB4AC  28 03 00 00 */	cmplwi r3, 0
/* 801DE570 001DB4B0  41 82 00 0C */	beq .L_801DE57C
/* 801DE574 001DB4B4  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801DE578 001DB4B8  48 00 00 08 */	b .L_801DE580
.L_801DE57C:
/* 801DE57C 001DB4BC  38 60 00 00 */	li r3, 0
.L_801DE580:
/* 801DE580 001DB4C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DE584 001DB4C4  7C 08 03 A6 */	mtlr r0
/* 801DE588 001DB4C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DE58C 001DB4CC  4E 80 00 20 */	blr 
.endfn "getNearestFruit__Q34Game9ItemPlant5PlantFR10Vector3<f>"

.fn updateBoundSphere__Q34Game9ItemPlant5PlantFv, global
/* 801DE590 001DB4D0  C0 23 01 9C */	lfs f1, 0x19c(r3)
/* 801DE594 001DB4D4  C0 02 B4 E8 */	lfs f0, lbl_80519848@sda21(r2)
/* 801DE598 001DB4D8  D0 23 01 C4 */	stfs f1, 0x1c4(r3)
/* 801DE59C 001DB4DC  C0 23 01 A0 */	lfs f1, 0x1a0(r3)
/* 801DE5A0 001DB4E0  D0 23 01 C8 */	stfs f1, 0x1c8(r3)
/* 801DE5A4 001DB4E4  C0 23 01 A4 */	lfs f1, 0x1a4(r3)
/* 801DE5A8 001DB4E8  D0 23 01 CC */	stfs f1, 0x1cc(r3)
/* 801DE5AC 001DB4EC  D0 03 01 D0 */	stfs f0, 0x1d0(r3)
/* 801DE5B0 001DB4F0  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q34Game9ItemPlant5PlantFv

.fn doDirectDraw__Q34Game9ItemPlant5PlantFR8Graphics, global
/* 801DE5B4 001DB4F4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801DE5B8 001DB4F8  7C 08 02 A6 */	mflr r0
/* 801DE5BC 001DB4FC  90 01 00 74 */	stw r0, 0x74(r1)
/* 801DE5C0 001DB500  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 801DE5C4 001DB504  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 801DE5C8 001DB508  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801DE5CC 001DB50C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801DE5D0 001DB510  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801DE5D4 001DB514  81 0D 89 D8 */	lwz r8, systemFont__9JFWSystem@sda21(r13)
/* 801DE5D8 001DB518  38 E0 00 00 */	li r7, 0
/* 801DE5DC 001DB51C  38 00 00 FF */	li r0, 0xff
/* 801DE5E0 001DB520  38 C0 00 66 */	li r6, 0x66
/* 801DE5E4 001DB524  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DE5E8 001DB528  38 A0 00 99 */	li r5, 0x99
/* 801DE5EC 001DB52C  91 01 00 20 */	stw r8, 0x20(r1)
/* 801DE5F0 001DB530  7C 9F 23 78 */	mr r31, r4
/* 801DE5F4 001DB534  7C 7E 1B 78 */	mr r30, r3
/* 801DE5F8 001DB538  90 E1 00 24 */	stw r7, 0x24(r1)
/* 801DE5FC 001DB53C  7F E3 FB 78 */	mr r3, r31
/* 801DE600 001DB540  90 E1 00 28 */	stw r7, 0x28(r1)
/* 801DE604 001DB544  90 E1 00 2C */	stw r7, 0x2c(r1)
/* 801DE608 001DB548  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801DE60C 001DB54C  98 C1 00 34 */	stb r6, 0x34(r1)
/* 801DE610 001DB550  98 A1 00 35 */	stb r5, 0x35(r1)
/* 801DE614 001DB554  98 01 00 36 */	stb r0, 0x36(r1)
/* 801DE618 001DB558  98 01 00 37 */	stb r0, 0x37(r1)
/* 801DE61C 001DB55C  98 E1 00 38 */	stb r7, 0x38(r1)
/* 801DE620 001DB560  98 C1 00 39 */	stb r6, 0x39(r1)
/* 801DE624 001DB564  98 01 00 3A */	stb r0, 0x3a(r1)
/* 801DE628 001DB568  98 01 00 3B */	stb r0, 0x3b(r1)
/* 801DE62C 001DB56C  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 801DE630 001DB570  48 24 92 79 */	bl initPerspPrintf__8GraphicsFP8Viewport
/* 801DE634 001DB574  C0 02 B4 A8 */	lfs f0, lbl_80519808@sda21(r2)
/* 801DE638 001DB578  38 C0 00 C8 */	li r6, 0xc8
/* 801DE63C 001DB57C  38 A0 00 00 */	li r5, 0
/* 801DE640 001DB580  38 00 00 FF */	li r0, 0xff
/* 801DE644 001DB584  98 C1 00 34 */	stb r6, 0x34(r1)
/* 801DE648 001DB588  7F C4 F3 78 */	mr r4, r30
/* 801DE64C 001DB58C  38 61 00 08 */	addi r3, r1, 8
/* 801DE650 001DB590  98 A1 00 35 */	stb r5, 0x35(r1)
/* 801DE654 001DB594  98 A1 00 36 */	stb r5, 0x36(r1)
/* 801DE658 001DB598  98 01 00 37 */	stb r0, 0x37(r1)
/* 801DE65C 001DB59C  98 C1 00 38 */	stb r6, 0x38(r1)
/* 801DE660 001DB5A0  98 C1 00 39 */	stb r6, 0x39(r1)
/* 801DE664 001DB5A4  98 C1 00 3A */	stb r6, 0x3a(r1)
/* 801DE668 001DB5A8  98 01 00 3B */	stb r0, 0x3b(r1)
/* 801DE66C 001DB5AC  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 801DE670 001DB5B0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DE674 001DB5B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DE678 001DB5B8  7D 89 03 A6 */	mtctr r12
/* 801DE67C 001DB5BC  4E 80 04 21 */	bctrl 
/* 801DE680 001DB5C0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 801DE684 001DB5C4  7F C3 F3 78 */	mr r3, r30
/* 801DE688 001DB5C8  C0 02 B4 AC */	lfs f0, lbl_8051980C@sda21(r2)
/* 801DE68C 001DB5CC  C0 61 00 08 */	lfs f3, 8(r1)
/* 801DE690 001DB5D0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801DE694 001DB5D4  EC 02 00 2A */	fadds f0, f2, f0
/* 801DE698 001DB5D8  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 801DE69C 001DB5DC  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 801DE6A0 001DB5E0  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801DE6A4 001DB5E4  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801DE6A8 001DB5E8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DE6AC 001DB5EC  81 8C 02 28 */	lwz r12, 0x228(r12)
/* 801DE6B0 001DB5F0  7D 89 03 A6 */	mtctr r12
/* 801DE6B4 001DB5F4  4E 80 04 21 */	bctrl 
/* 801DE6B8 001DB5F8  83 BE 01 EC */	lwz r29, 0x1ec(r30)
/* 801DE6BC 001DB5FC  6C 65 80 00 */	xoris r5, r3, 0x8000
/* 801DE6C0 001DB600  3C 80 43 30 */	lis r4, 0x4330
/* 801DE6C4 001DB604  7F C3 F3 78 */	mr r3, r30
/* 801DE6C8 001DB608  6F A0 80 00 */	xoris r0, r29, 0x8000
/* 801DE6CC 001DB60C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DE6D0 001DB610  90 A1 00 44 */	stw r5, 0x44(r1)
/* 801DE6D4 001DB614  C8 82 B4 F8 */	lfd f4, lbl_80519858@sda21(r2)
/* 801DE6D8 001DB618  90 81 00 40 */	stw r4, 0x40(r1)
/* 801DE6DC 001DB61C  C0 42 B4 E4 */	lfs f2, lbl_80519844@sda21(r2)
/* 801DE6E0 001DB620  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 801DE6E4 001DB624  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801DE6E8 001DB628  EC 60 20 28 */	fsubs f3, f0, f4
/* 801DE6EC 001DB62C  C0 02 B4 EC */	lfs f0, lbl_8051984C@sda21(r2)
/* 801DE6F0 001DB630  90 81 00 48 */	stw r4, 0x48(r1)
/* 801DE6F4 001DB634  81 8C 02 28 */	lwz r12, 0x228(r12)
/* 801DE6F8 001DB638  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 801DE6FC 001DB63C  EC 43 10 24 */	fdivs f2, f3, f2
/* 801DE700 001DB640  EC 21 20 28 */	fsubs f1, f1, f4
/* 801DE704 001DB644  EC 01 00 24 */	fdivs f0, f1, f0
/* 801DE708 001DB648  EF E0 10 2A */	fadds f31, f0, f2
/* 801DE70C 001DB64C  7D 89 03 A6 */	mtctr r12
/* 801DE710 001DB650  4E 80 04 21 */	bctrl 
/* 801DE714 001DB654  FC 20 F8 90 */	fmr f1, f31
/* 801DE718 001DB658  3C 80 80 48 */	lis r4, lbl_80480918@ha
/* 801DE71C 001DB65C  7C 67 1B 78 */	mr r7, r3
/* 801DE720 001DB660  7F E3 FB 78 */	mr r3, r31
/* 801DE724 001DB664  38 C4 09 18 */	addi r6, r4, lbl_80480918@l
/* 801DE728 001DB668  7F A8 EB 78 */	mr r8, r29
/* 801DE72C 001DB66C  38 81 00 20 */	addi r4, r1, 0x20
/* 801DE730 001DB670  38 A1 00 14 */	addi r5, r1, 0x14
/* 801DE734 001DB674  4C C6 32 42 */	crset 6
/* 801DE738 001DB678  48 24 93 A5 */	bl "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
/* 801DE73C 001DB67C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801DE740 001DB680  3C 60 80 48 */	lis r3, lbl_80480928@ha
/* 801DE744 001DB684  C0 02 B4 F0 */	lfs f0, lbl_80519850@sda21(r2)
/* 801DE748 001DB688  38 C3 09 28 */	addi r6, r3, lbl_80480928@l
/* 801DE74C 001DB68C  7F E3 FB 78 */	mr r3, r31
/* 801DE750 001DB690  38 81 00 20 */	addi r4, r1, 0x20
/* 801DE754 001DB694  EC 01 00 2A */	fadds f0, f1, f0
/* 801DE758 001DB698  38 A1 00 14 */	addi r5, r1, 0x14
/* 801DE75C 001DB69C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801DE760 001DB6A0  C0 3E 02 80 */	lfs f1, 0x280(r30)
/* 801DE764 001DB6A4  C0 5E 02 84 */	lfs f2, 0x284(r30)
/* 801DE768 001DB6A8  4C C6 32 42 */	crset 6
/* 801DE76C 001DB6AC  48 24 93 71 */	bl "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
/* 801DE770 001DB6B0  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 801DE774 001DB6B4  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801DE778 001DB6B8  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 801DE77C 001DB6BC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801DE780 001DB6C0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 801DE784 001DB6C4  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 801DE788 001DB6C8  7C 08 03 A6 */	mtlr r0
/* 801DE78C 001DB6CC  38 21 00 70 */	addi r1, r1, 0x70
/* 801DE790 001DB6D0  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game9ItemPlant5PlantFR8Graphics

.fn onInit__Q34Game9ItemPlant5PlantFPQ24Game15CreatureInitArg, global
/* 801DE794 001DB6D4  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 801DE798 001DB6D8  7C 08 02 A6 */	mflr r0
/* 801DE79C 001DB6DC  90 01 00 84 */	stw r0, 0x84(r1)
/* 801DE7A0 001DB6E0  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 801DE7A4 001DB6E4  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 801DE7A8 001DB6E8  BF 01 00 50 */	stmw r24, 0x50(r1)
/* 801DE7AC 001DB6EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801DE7B0 001DB6F0  3C A0 80 48 */	lis r5, lbl_804808F0@ha
/* 801DE7B4 001DB6F4  7C 7F 1B 78 */	mr r31, r3
/* 801DE7B8 001DB6F8  38 80 00 01 */	li r4, 1
/* 801DE7BC 001DB6FC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DE7C0 001DB700  3B C5 08 F0 */	addi r30, r5, lbl_804808F0@l
/* 801DE7C4 001DB704  7D 89 03 A6 */	mtctr r12
/* 801DE7C8 001DB708  4E 80 04 21 */	bctrl 
/* 801DE7CC 001DB70C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DE7D0 001DB710  38 00 00 00 */	li r0, 0
/* 801DE7D4 001DB714  38 60 00 14 */	li r3, 0x14
/* 801DE7D8 001DB718  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801DE7DC 001DB71C  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801DE7E0 001DB720  D0 1F 02 00 */	stfs f0, 0x200(r31)
/* 801DE7E4 001DB724  90 1F 01 EC */	stw r0, 0x1ec(r31)
/* 801DE7E8 001DB728  90 1F 01 F4 */	stw r0, 0x1f4(r31)
/* 801DE7EC 001DB72C  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 801DE7F0 001DB730  4B E4 56 B5 */	bl __nw__FUl
/* 801DE7F4 001DB734  7C 7C 1B 79 */	or. r28, r3, r3
/* 801DE7F8 001DB738  41 82 00 28 */	beq .L_801DE820
/* 801DE7FC 001DB73C  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DE800 001DB740  38 80 00 00 */	li r4, 0
/* 801DE804 001DB744  4B FE E9 4D */	bl getModelData__Q24Game11BaseItemMgrFi
/* 801DE808 001DB748  7C 64 1B 78 */	mr r4, r3
/* 801DE80C 001DB74C  7F 83 E3 78 */	mr r3, r28
/* 801DE810 001DB750  38 A0 00 00 */	li r5, 0
/* 801DE814 001DB754  38 C0 00 02 */	li r6, 2
/* 801DE818 001DB758  48 25 F9 C1 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 801DE81C 001DB75C  7C 7C 1B 78 */	mr r28, r3
.L_801DE820:
/* 801DE820 001DB760  93 9F 01 74 */	stw r28, 0x174(r31)
/* 801DE824 001DB764  7F E3 FB 78 */	mr r3, r31
/* 801DE828 001DB768  38 80 00 01 */	li r4, 1
/* 801DE82C 001DB76C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DE830 001DB770  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DE834 001DB774  7D 89 03 A6 */	mtctr r12
/* 801DE838 001DB778  4E 80 04 21 */	bctrl 
/* 801DE83C 001DB77C  38 60 00 64 */	li r3, 0x64
/* 801DE840 001DB780  4B E4 56 65 */	bl __nw__FUl
/* 801DE844 001DB784  7C 7D 1B 79 */	or. r29, r3, r3
/* 801DE848 001DB788  41 82 00 10 */	beq .L_801DE858
/* 801DE84C 001DB78C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE850 001DB790  4B F5 84 25 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE854 001DB794  7C 7D 1B 78 */	mr r29, r3
.L_801DE858:
/* 801DE858 001DB798  38 00 00 00 */	li r0, 0
/* 801DE85C 001DB79C  C0 02 B5 00 */	lfs f0, lbl_80519860@sda21(r2)
/* 801DE860 001DB7A0  90 1D 00 2C */	stw r0, 0x2c(r29)
/* 801DE864 001DB7A4  38 60 00 64 */	li r3, 0x64
/* 801DE868 001DB7A8  D0 1D 00 1C */	stfs f0, 0x1c(r29)
/* 801DE86C 001DB7AC  4B E4 56 39 */	bl __nw__FUl
/* 801DE870 001DB7B0  7C 7C 1B 79 */	or. r28, r3, r3
/* 801DE874 001DB7B4  41 82 00 10 */	beq .L_801DE884
/* 801DE878 001DB7B8  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE87C 001DB7BC  4B F5 83 F9 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE880 001DB7C0  7C 7C 1B 78 */	mr r28, r3
.L_801DE884:
/* 801DE884 001DB7C4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DE888 001DB7C8  38 9E 00 44 */	addi r4, r30, 0x44
/* 801DE88C 001DB7CC  48 26 07 29 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 801DE890 001DB7D0  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801DE894 001DB7D4  C0 02 B5 04 */	lfs f0, lbl_80519864@sda21(r2)
/* 801DE898 001DB7D8  90 1C 00 2C */	stw r0, 0x2c(r28)
/* 801DE89C 001DB7DC  38 60 00 64 */	li r3, 0x64
/* 801DE8A0 001DB7E0  D0 1C 00 1C */	stfs f0, 0x1c(r28)
/* 801DE8A4 001DB7E4  4B E4 56 01 */	bl __nw__FUl
/* 801DE8A8 001DB7E8  7C 7B 1B 79 */	or. r27, r3, r3
/* 801DE8AC 001DB7EC  41 82 00 10 */	beq .L_801DE8BC
/* 801DE8B0 001DB7F0  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE8B4 001DB7F4  4B F5 83 C1 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE8B8 001DB7F8  7C 7B 1B 78 */	mr r27, r3
.L_801DE8BC:
/* 801DE8BC 001DB7FC  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DE8C0 001DB800  38 9E 00 50 */	addi r4, r30, 0x50
/* 801DE8C4 001DB804  48 26 06 F1 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 801DE8C8 001DB808  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801DE8CC 001DB80C  C0 02 B5 04 */	lfs f0, lbl_80519864@sda21(r2)
/* 801DE8D0 001DB810  90 1B 00 2C */	stw r0, 0x2c(r27)
/* 801DE8D4 001DB814  38 60 00 64 */	li r3, 0x64
/* 801DE8D8 001DB818  D0 1B 00 1C */	stfs f0, 0x1c(r27)
/* 801DE8DC 001DB81C  4B E4 55 C9 */	bl __nw__FUl
/* 801DE8E0 001DB820  7C 7A 1B 79 */	or. r26, r3, r3
/* 801DE8E4 001DB824  41 82 00 10 */	beq .L_801DE8F4
/* 801DE8E8 001DB828  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE8EC 001DB82C  4B F5 83 89 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE8F0 001DB830  7C 7A 1B 78 */	mr r26, r3
.L_801DE8F4:
/* 801DE8F4 001DB834  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DE8F8 001DB838  38 9E 00 5C */	addi r4, r30, 0x5c
/* 801DE8FC 001DB83C  48 26 06 B9 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 801DE900 001DB840  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801DE904 001DB844  C0 02 B5 04 */	lfs f0, lbl_80519864@sda21(r2)
/* 801DE908 001DB848  90 1A 00 2C */	stw r0, 0x2c(r26)
/* 801DE90C 001DB84C  38 60 00 64 */	li r3, 0x64
/* 801DE910 001DB850  D0 1A 00 1C */	stfs f0, 0x1c(r26)
/* 801DE914 001DB854  4B E4 55 91 */	bl __nw__FUl
/* 801DE918 001DB858  7C 79 1B 79 */	or. r25, r3, r3
/* 801DE91C 001DB85C  41 82 00 10 */	beq .L_801DE92C
/* 801DE920 001DB860  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE924 001DB864  4B F5 83 51 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE928 001DB868  7C 79 1B 78 */	mr r25, r3
.L_801DE92C:
/* 801DE92C 001DB86C  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DE930 001DB870  38 9E 00 68 */	addi r4, r30, 0x68
/* 801DE934 001DB874  48 26 06 81 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 801DE938 001DB878  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801DE93C 001DB87C  C0 02 B5 04 */	lfs f0, lbl_80519864@sda21(r2)
/* 801DE940 001DB880  90 19 00 2C */	stw r0, 0x2c(r25)
/* 801DE944 001DB884  38 60 00 64 */	li r3, 0x64
/* 801DE948 001DB888  D0 19 00 1C */	stfs f0, 0x1c(r25)
/* 801DE94C 001DB88C  4B E4 55 59 */	bl __nw__FUl
/* 801DE950 001DB890  7C 78 1B 79 */	or. r24, r3, r3
/* 801DE954 001DB894  41 82 00 10 */	beq .L_801DE964
/* 801DE958 001DB898  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DE95C 001DB89C  4B F5 83 19 */	bl __ct__8CollPartFPQ28SysShape9MtxObject
/* 801DE960 001DB8A0  7C 78 1B 78 */	mr r24, r3
.L_801DE964:
/* 801DE964 001DB8A4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DE968 001DB8A8  38 9E 00 68 */	addi r4, r30, 0x68
/* 801DE96C 001DB8AC  48 26 06 49 */	bl getJointIndex__Q28SysShape5ModelFPc
/* 801DE970 001DB8B0  54 60 04 3E */	clrlwi r0, r3, 0x10
/* 801DE974 001DB8B4  3C 80 74 6F */	lis r4, 0x746F7073@ha
/* 801DE978 001DB8B8  90 18 00 2C */	stw r0, 0x2c(r24)
/* 801DE97C 001DB8BC  38 78 00 30 */	addi r3, r24, 0x30
/* 801DE980 001DB8C0  C0 02 B5 08 */	lfs f0, lbl_80519868@sda21(r2)
/* 801DE984 001DB8C4  38 84 70 73 */	addi r4, r4, 0x746F7073@l
/* 801DE988 001DB8C8  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DE98C 001DB8CC  D0 18 00 20 */	stfs f0, 0x20(r24)
/* 801DE990 001DB8D0  C0 02 B5 0C */	lfs f0, lbl_8051986C@sda21(r2)
/* 801DE994 001DB8D4  D0 38 00 24 */	stfs f1, 0x24(r24)
/* 801DE998 001DB8D8  D0 38 00 28 */	stfs f1, 0x28(r24)
/* 801DE99C 001DB8DC  D0 18 00 1C */	stfs f0, 0x1c(r24)
/* 801DE9A0 001DB8E0  48 23 49 39 */	bl setID__4ID32FUl
/* 801DE9A4 001DB8E4  80 BF 01 14 */	lwz r5, 0x114(r31)
/* 801DE9A8 001DB8E8  7F A3 EB 78 */	mr r3, r29
/* 801DE9AC 001DB8EC  7F 84 E3 78 */	mr r4, r28
/* 801DE9B0 001DB8F0  93 A5 00 00 */	stw r29, 0(r5)
/* 801DE9B4 001DB8F4  48 23 2A 55 */	bl add__5CNodeFP5CNode
/* 801DE9B8 001DB8F8  7F A3 EB 78 */	mr r3, r29
/* 801DE9BC 001DB8FC  7F 04 C3 78 */	mr r4, r24
/* 801DE9C0 001DB900  48 23 2A 49 */	bl add__5CNodeFP5CNode
/* 801DE9C4 001DB904  7F 83 E3 78 */	mr r3, r28
/* 801DE9C8 001DB908  7F 64 DB 78 */	mr r4, r27
/* 801DE9CC 001DB90C  48 23 2A 3D */	bl add__5CNodeFP5CNode
/* 801DE9D0 001DB910  7F 63 DB 78 */	mr r3, r27
/* 801DE9D4 001DB914  7F 44 D3 78 */	mr r4, r26
/* 801DE9D8 001DB918  48 23 2A 31 */	bl add__5CNodeFP5CNode
/* 801DE9DC 001DB91C  7F 43 D3 78 */	mr r3, r26
/* 801DE9E0 001DB920  7F 24 CB 78 */	mr r4, r25
/* 801DE9E4 001DB924  48 23 2A 25 */	bl add__5CNodeFP5CNode
/* 801DE9E8 001DB928  7F 83 E3 78 */	mr r3, r28
/* 801DE9EC 001DB92C  4B F5 89 B1 */	bl makeTubeTree__8CollPartFv
/* 801DE9F0 001DB930  88 7C 00 58 */	lbz r3, 0x58(r28)
/* 801DE9F4 001DB934  38 00 00 00 */	li r0, 0
/* 801DE9F8 001DB938  28 03 00 01 */	cmplwi r3, 1
/* 801DE9FC 001DB93C  41 82 00 0C */	beq .L_801DEA08
/* 801DEA00 001DB940  28 03 00 02 */	cmplwi r3, 2
/* 801DEA04 001DB944  40 82 00 08 */	bne .L_801DEA0C
.L_801DEA08:
/* 801DEA08 001DB948  38 00 00 01 */	li r0, 1
.L_801DEA0C:
/* 801DEA0C 001DB94C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801DEA10 001DB950  40 82 00 18 */	bne .L_801DEA28
/* 801DEA14 001DB954  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DEA18 001DB958  38 BE 00 1C */	addi r5, r30, 0x1c
/* 801DEA1C 001DB95C  38 80 03 D6 */	li r4, 0x3d6
/* 801DEA20 001DB960  4C C6 31 82 */	crclr 6
/* 801DEA24 001DB964  4B E4 BC 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DEA28:
/* 801DEA28 001DB968  80 8D 94 78 */	lwz r4, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DEA2C 001DB96C  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DEA30 001DB970  80 1F 01 74 */	lwz r0, 0x174(r31)
/* 801DEA34 001DB974  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801DEA38 001DB978  90 04 00 18 */	stw r0, 0x18(r4)
/* 801DEA3C 001DB97C  80 8D 94 78 */	lwz r4, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DEA40 001DB980  80 84 00 20 */	lwz r4, 0x20(r4)
/* 801DEA44 001DB984  48 24 A8 61 */	bl setAnimMgr__Q28SysShape13BlendAnimatorFPQ28SysShape7AnimMgr
/* 801DEA48 001DB988  4B EE AB 59 */	bl rand
/* 801DEA4C 001DB98C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801DEA50 001DB990  3C 00 43 30 */	lis r0, 0x4330
/* 801DEA54 001DB994  90 61 00 3C */	stw r3, 0x3c(r1)
/* 801DEA58 001DB998  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DEA5C 001DB99C  C8 62 B4 F8 */	lfd f3, lbl_80519858@sda21(r2)
/* 801DEA60 001DB9A0  38 A0 00 00 */	li r5, 0
/* 801DEA64 001DB9A4  90 01 00 38 */	stw r0, 0x38(r1)
/* 801DEA68 001DB9A8  C0 22 B5 10 */	lfs f1, lbl_80519870@sda21(r2)
/* 801DEA6C 001DB9AC  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 801DEA70 001DB9B0  C0 02 B5 14 */	lfs f0, lbl_80519874@sda21(r2)
/* 801DEA74 001DB9B4  EC 42 18 28 */	fsubs f2, f2, f3
/* 801DEA78 001DB9B8  EC 22 08 24 */	fdivs f1, f2, f1
/* 801DEA7C 001DB9BC  EC 00 00 72 */	fmuls f0, f0, f1
/* 801DEA80 001DB9C0  FC 00 00 1E */	fctiwz f0, f0
/* 801DEA84 001DB9C4  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 801DEA88 001DB9C8  80 81 00 44 */	lwz r4, 0x44(r1)
/* 801DEA8C 001DB9CC  48 24 A1 FD */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DEA90 001DB9D0  38 7F 02 24 */	addi r3, r31, 0x224
/* 801DEA94 001DB9D4  38 80 00 05 */	li r4, 5
/* 801DEA98 001DB9D8  38 A0 00 00 */	li r5, 0
/* 801DEA9C 001DB9DC  48 24 A1 ED */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DEAA0 001DB9E0  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DEAA4 001DB9E4  48 24 AA B1 */	bl endBlend__Q28SysShape13BlendAnimatorFv
/* 801DEAA8 001DB9E8  C0 02 B4 F0 */	lfs f0, lbl_80519850@sda21(r2)
/* 801DEAAC 001DB9EC  38 00 00 00 */	li r0, 0
/* 801DEAB0 001DB9F0  C0 22 B4 EC */	lfs f1, lbl_8051984C@sda21(r2)
/* 801DEAB4 001DB9F4  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DEAB8 001DB9F8  D0 1F 01 D4 */	stfs f0, 0x1d4(r31)
/* 801DEABC 001DB9FC  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DEAC0 001DBA00  D0 3F 01 F8 */	stfs f1, 0x1f8(r31)
/* 801DEAC4 001DBA04  98 1F 02 54 */	stb r0, 0x254(r31)
/* 801DEAC8 001DBA08  D0 1F 02 58 */	stfs f0, 0x258(r31)
/* 801DEACC 001DBA0C  81 9F 02 04 */	lwz r12, 0x204(r31)
/* 801DEAD0 001DBA10  83 9F 01 74 */	lwz r28, 0x174(r31)
/* 801DEAD4 001DBA14  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DEAD8 001DBA18  7D 89 03 A6 */	mtctr r12
/* 801DEADC 001DBA1C  4E 80 04 21 */	bctrl 
/* 801DEAE0 001DBA20  80 9C 00 08 */	lwz r4, 8(r28)
/* 801DEAE4 001DBA24  80 84 00 04 */	lwz r4, 4(r4)
/* 801DEAE8 001DBA28  80 84 00 28 */	lwz r4, 0x28(r4)
/* 801DEAEC 001DBA2C  80 84 00 00 */	lwz r4, 0(r4)
/* 801DEAF0 001DBA30  90 64 00 54 */	stw r3, 0x54(r4)
/* 801DEAF4 001DBA34  38 61 00 08 */	addi r3, r1, 8
/* 801DEAF8 001DBA38  4B F0 B7 A9 */	bl PSMTXIdentity
/* 801DEAFC 001DBA3C  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DEB00 001DBA40  38 61 00 08 */	addi r3, r1, 8
/* 801DEB04 001DBA44  80 84 00 08 */	lwz r4, 8(r4)
/* 801DEB08 001DBA48  38 84 00 24 */	addi r4, r4, 0x24
/* 801DEB0C 001DBA4C  4B F0 B7 C1 */	bl PSMTXCopy
/* 801DEB10 001DBA50  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DEB14 001DBA54  80 63 00 08 */	lwz r3, 8(r3)
/* 801DEB18 001DBA58  81 83 00 00 */	lwz r12, 0(r3)
/* 801DEB1C 001DBA5C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DEB20 001DBA60  7D 89 03 A6 */	mtctr r12
/* 801DEB24 001DBA64  4E 80 04 21 */	bctrl 
/* 801DEB28 001DBA68  38 60 00 10 */	li r3, 0x10
/* 801DEB2C 001DBA6C  4B E4 53 79 */	bl __nw__FUl
/* 801DEB30 001DBA70  28 03 00 00 */	cmplwi r3, 0
/* 801DEB34 001DBA74  41 82 00 08 */	beq .L_801DEB3C
/* 801DEB38 001DBA78  93 E3 00 0C */	stw r31, 0xc(r3)
.L_801DEB3C:
/* 801DEB3C 001DBA7C  90 7F 02 88 */	stw r3, 0x288(r31)
/* 801DEB40 001DBA80  38 9E 00 68 */	addi r4, r30, 0x68
/* 801DEB44 001DBA84  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DEB48 001DBA88  48 26 04 9D */	bl getJoint__Q28SysShape5ModelFPc
/* 801DEB4C 001DBA8C  48 24 AD 55 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DEB50 001DBA90  7C 65 1B 78 */	mr r5, r3
/* 801DEB54 001DBA94  80 7F 02 88 */	lwz r3, 0x288(r31)
/* 801DEB58 001DBA98  38 80 00 05 */	li r4, 5
/* 801DEB5C 001DBA9C  48 00 15 F5 */	bl init__Q34Game9ItemPlant6FruitsFiP7Matrixf
/* 801DEB60 001DBAA0  38 00 00 04 */	li r0, 4
/* 801DEB64 001DBAA4  38 60 00 10 */	li r3, 0x10
/* 801DEB68 001DBAA8  90 1F 02 7C */	stw r0, 0x27c(r31)
/* 801DEB6C 001DBAAC  4B E4 54 41 */	bl __nwa__FUl
/* 801DEB70 001DBAB0  90 7F 02 68 */	stw r3, 0x268(r31)
/* 801DEB74 001DBAB4  38 60 00 C0 */	li r3, 0xc0
/* 801DEB78 001DBAB8  4B E4 54 35 */	bl __nwa__FUl
/* 801DEB7C 001DBABC  90 7F 02 6C */	stw r3, 0x26c(r31)
/* 801DEB80 001DBAC0  38 60 00 10 */	li r3, 0x10
/* 801DEB84 001DBAC4  4B E4 54 29 */	bl __nwa__FUl
/* 801DEB88 001DBAC8  90 7F 02 70 */	stw r3, 0x270(r31)
/* 801DEB8C 001DBACC  38 60 00 10 */	li r3, 0x10
/* 801DEB90 001DBAD0  4B E4 54 1D */	bl __nwa__FUl
/* 801DEB94 001DBAD4  90 7F 02 74 */	stw r3, 0x274(r31)
/* 801DEB98 001DBAD8  38 60 00 10 */	li r3, 0x10
/* 801DEB9C 001DBADC  4B E4 54 11 */	bl __nwa__FUl
/* 801DEBA0 001DBAE0  3B A0 00 00 */	li r29, 0
/* 801DEBA4 001DBAE4  90 7F 02 78 */	stw r3, 0x278(r31)
/* 801DEBA8 001DBAE8  C3 E2 B4 A0 */	lfs f31, lbl_80519800@sda21(r2)
/* 801DEBAC 001DBAEC  7F B8 EB 78 */	mr r24, r29
/* 801DEBB0 001DBAF0  7F B9 EB 78 */	mr r25, r29
/* 801DEBB4 001DBAF4  7F BC EB 78 */	mr r28, r29
.L_801DEBB8:
/* 801DEBB8 001DBAF8  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DEBBC 001DBAFC  7F 83 C1 2E */	stwx r28, r3, r24
/* 801DEBC0 001DBB00  80 7F 02 70 */	lwz r3, 0x270(r31)
/* 801DEBC4 001DBB04  7F E3 C5 2E */	stfsx f31, r3, r24
/* 801DEBC8 001DBB08  80 7F 02 74 */	lwz r3, 0x274(r31)
/* 801DEBCC 001DBB0C  7F E3 C5 2E */	stfsx f31, r3, r24
/* 801DEBD0 001DBB10  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801DEBD4 001DBB14  7F E3 C5 2E */	stfsx f31, r3, r24
/* 801DEBD8 001DBB18  80 1F 02 6C */	lwz r0, 0x26c(r31)
/* 801DEBDC 001DBB1C  7C 60 CA 14 */	add r3, r0, r25
/* 801DEBE0 001DBB20  4B F0 B6 C1 */	bl PSMTXIdentity
/* 801DEBE4 001DBB24  3B BD 00 01 */	addi r29, r29, 1
/* 801DEBE8 001DBB28  3B 39 00 30 */	addi r25, r25, 0x30
/* 801DEBEC 001DBB2C  2C 1D 00 04 */	cmpwi r29, 4
/* 801DEBF0 001DBB30  3B 18 00 04 */	addi r24, r24, 4
/* 801DEBF4 001DBB34  41 80 FF C4 */	blt .L_801DEBB8
/* 801DEBF8 001DBB38  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DEBFC 001DBB3C  38 9E 00 44 */	addi r4, r30, 0x44
/* 801DEC00 001DBB40  48 26 03 E5 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DEC04 001DBB44  48 24 AC 9D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DEC08 001DBB48  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 801DEC0C 001DBB4C  7C 7C 1B 78 */	mr r28, r3
/* 801DEC10 001DBB50  2C 00 00 00 */	cmpwi r0, 0
/* 801DEC14 001DBB54  41 81 00 18 */	bgt .L_801DEC2C
/* 801DEC18 001DBB58  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DEC1C 001DBB5C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 801DEC20 001DBB60  38 80 02 97 */	li r4, 0x297
/* 801DEC24 001DBB64  4C C6 31 82 */	crclr 6
/* 801DEC28 001DBB68  4B E4 BA 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DEC2C:
/* 801DEC2C 001DBB6C  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DEC30 001DBB70  38 9E 00 50 */	addi r4, r30, 0x50
/* 801DEC34 001DBB74  93 83 00 00 */	stw r28, 0(r3)
/* 801DEC38 001DBB78  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DEC3C 001DBB7C  48 26 03 A9 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DEC40 001DBB80  48 24 AC 61 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DEC44 001DBB84  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 801DEC48 001DBB88  7C 7C 1B 78 */	mr r28, r3
/* 801DEC4C 001DBB8C  2C 00 00 01 */	cmpwi r0, 1
/* 801DEC50 001DBB90  41 81 00 18 */	bgt .L_801DEC68
/* 801DEC54 001DBB94  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DEC58 001DBB98  38 BE 00 1C */	addi r5, r30, 0x1c
/* 801DEC5C 001DBB9C  38 80 02 97 */	li r4, 0x297
/* 801DEC60 001DBBA0  4C C6 31 82 */	crclr 6
/* 801DEC64 001DBBA4  4B E4 B9 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DEC68:
/* 801DEC68 001DBBA8  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DEC6C 001DBBAC  38 9E 00 5C */	addi r4, r30, 0x5c
/* 801DEC70 001DBBB0  93 83 00 04 */	stw r28, 4(r3)
/* 801DEC74 001DBBB4  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DEC78 001DBBB8  48 26 03 6D */	bl getJoint__Q28SysShape5ModelFPc
/* 801DEC7C 001DBBBC  48 24 AC 25 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DEC80 001DBBC0  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 801DEC84 001DBBC4  7C 7C 1B 78 */	mr r28, r3
/* 801DEC88 001DBBC8  2C 00 00 02 */	cmpwi r0, 2
/* 801DEC8C 001DBBCC  41 81 00 18 */	bgt .L_801DECA4
/* 801DEC90 001DBBD0  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DEC94 001DBBD4  38 BE 00 1C */	addi r5, r30, 0x1c
/* 801DEC98 001DBBD8  38 80 02 97 */	li r4, 0x297
/* 801DEC9C 001DBBDC  4C C6 31 82 */	crclr 6
/* 801DECA0 001DBBE0  4B E4 B9 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DECA4:
/* 801DECA4 001DBBE4  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DECA8 001DBBE8  38 9E 00 68 */	addi r4, r30, 0x68
/* 801DECAC 001DBBEC  93 83 00 08 */	stw r28, 8(r3)
/* 801DECB0 001DBBF0  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801DECB4 001DBBF4  48 26 03 31 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DECB8 001DBBF8  48 24 AB E9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DECBC 001DBBFC  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 801DECC0 001DBC00  7C 7C 1B 78 */	mr r28, r3
/* 801DECC4 001DBC04  2C 00 00 03 */	cmpwi r0, 3
/* 801DECC8 001DBC08  41 81 00 18 */	bgt .L_801DECE0
/* 801DECCC 001DBC0C  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DECD0 001DBC10  38 BE 00 1C */	addi r5, r30, 0x1c
/* 801DECD4 001DBC14  38 80 02 97 */	li r4, 0x297
/* 801DECD8 001DBC18  4C C6 31 82 */	crclr 6
/* 801DECDC 001DBC1C  4B E4 B9 65 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DECE0:
/* 801DECE0 001DBC20  80 9F 02 68 */	lwz r4, 0x268(r31)
/* 801DECE4 001DBC24  38 7F 02 5C */	addi r3, r31, 0x25c
/* 801DECE8 001DBC28  93 84 00 0C */	stw r28, 0xc(r4)
/* 801DECEC 001DBC2C  4B FF F0 3D */	bl calcAngles__Q34Game9ItemPlant12ProcAnimatorFv
/* 801DECF0 001DBC30  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DECF4 001DBC34  38 80 00 01 */	li r4, 1
/* 801DECF8 001DBC38  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DECFC 001DBC3C  38 A0 00 04 */	li r5, 4
/* 801DED00 001DBC40  80 63 00 00 */	lwz r3, 0(r3)
/* 801DED04 001DBC44  C0 63 00 0C */	lfs f3, 0xc(r3)
/* 801DED08 001DBC48  C0 83 00 1C */	lfs f4, 0x1c(r3)
/* 801DED0C 001DBC4C  C0 A3 00 2C */	lfs f5, 0x2c(r3)
/* 801DED10 001DBC50  48 00 00 6C */	b .L_801DED7C
.L_801DED14:
/* 801DED14 001DBC54  80 7F 02 68 */	lwz r3, 0x268(r31)
/* 801DED18 001DBC58  7C 63 28 2E */	lwzx r3, r3, r5
/* 801DED1C 001DBC5C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 801DED20 001DBC60  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 801DED24 001DBC64  EC E2 20 28 */	fsubs f7, f2, f4
/* 801DED28 001DBC68  C0 C3 00 2C */	lfs f6, 0x2c(r3)
/* 801DED2C 001DBC6C  EC 81 18 28 */	fsubs f4, f1, f3
/* 801DED30 001DBC70  EC A6 28 28 */	fsubs f5, f6, f5
/* 801DED34 001DBC74  EC E7 01 F2 */	fmuls f7, f7, f7
/* 801DED38 001DBC78  FC 60 08 90 */	fmr f3, f1
/* 801DED3C 001DBC7C  ED 05 01 72 */	fmuls f8, f5, f5
/* 801DED40 001DBC80  EC 24 39 3A */	fmadds f1, f4, f4, f7
/* 801DED44 001DBC84  FC 80 10 90 */	fmr f4, f2
/* 801DED48 001DBC88  FC A0 30 90 */	fmr f5, f6
/* 801DED4C 001DBC8C  EC 28 08 2A */	fadds f1, f8, f1
/* 801DED50 001DBC90  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801DED54 001DBC94  40 81 00 14 */	ble .L_801DED68
/* 801DED58 001DBC98  40 81 00 14 */	ble .L_801DED6C
/* 801DED5C 001DBC9C  FC 40 08 34 */	frsqrte f2, f1
/* 801DED60 001DBCA0  EC 22 00 72 */	fmuls f1, f2, f1
/* 801DED64 001DBCA4  48 00 00 08 */	b .L_801DED6C
.L_801DED68:
/* 801DED68 001DBCA8  FC 20 00 90 */	fmr f1, f0
.L_801DED6C:
/* 801DED6C 001DBCAC  80 7F 02 78 */	lwz r3, 0x278(r31)
/* 801DED70 001DBCB0  38 84 00 01 */	addi r4, r4, 1
/* 801DED74 001DBCB4  7C 23 2D 2E */	stfsx f1, r3, r5
/* 801DED78 001DBCB8  38 A5 00 04 */	addi r5, r5, 4
.L_801DED7C:
/* 801DED7C 001DBCBC  80 1F 02 7C */	lwz r0, 0x27c(r31)
/* 801DED80 001DBCC0  7C 04 00 00 */	cmpw r4, r0
/* 801DED84 001DBCC4  41 80 FF 90 */	blt .L_801DED14
/* 801DED88 001DBCC8  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801DED8C 001DBCCC  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DED90 001DBCD0  80 84 00 08 */	lwz r4, 8(r4)
/* 801DED94 001DBCD4  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801DED98 001DBCD8  83 84 00 04 */	lwz r28, 4(r4)
/* 801DED9C 001DBCDC  7F 84 E3 78 */	mr r4, r28
/* 801DEDA0 001DBCE0  4B E8 9C E9 */	bl searchUpdateMaterialID__11J3DAnmColorFP12J3DModelData
/* 801DEDA4 001DBCE4  3B A0 00 00 */	li r29, 0
/* 801DEDA8 001DBCE8  48 00 00 F0 */	b .L_801DEE98
.L_801DEDAC:
/* 801DEDAC 001DBCEC  38 60 00 F4 */	li r3, 0xf4
/* 801DEDB0 001DBCF0  4B E4 50 F5 */	bl __nw__FUl
/* 801DEDB4 001DBCF4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801DEDB8 001DBCF8  41 82 00 B8 */	beq .L_801DEE70
/* 801DEDBC 001DBCFC  3C 60 80 4A */	lis r3, __vt__14J3DMaterialAnm@ha
/* 801DEDC0 001DBD00  3C 80 80 08 */	lis r4, __ct__14J3DMatColorAnmFv@ha
/* 801DEDC4 001DBD04  38 03 1B 10 */	addi r0, r3, __vt__14J3DMaterialAnm@l
/* 801DEDC8 001DBD08  38 C0 00 08 */	li r6, 8
/* 801DEDCC 001DBD0C  3C 60 80 07 */	lis r3, __dt__14J3DMatColorAnmFv@ha
/* 801DEDD0 001DBD10  90 1E 00 00 */	stw r0, 0(r30)
/* 801DEDD4 001DBD14  38 A3 A4 64 */	addi r5, r3, __dt__14J3DMatColorAnmFv@l
/* 801DEDD8 001DBD18  38 84 3C F0 */	addi r4, r4, __ct__14J3DMatColorAnmFv@l
/* 801DEDDC 001DBD1C  38 7E 00 04 */	addi r3, r30, 4
/* 801DEDE0 001DBD20  38 E0 00 02 */	li r7, 2
/* 801DEDE4 001DBD24  4B EE 2A 59 */	bl __construct_array
/* 801DEDE8 001DBD28  3C 60 80 08 */	lis r3, __ct__12J3DTexMtxAnmFv@ha
/* 801DEDEC 001DBD2C  3C A0 80 07 */	lis r5, __dt__12J3DTexMtxAnmFv@ha
/* 801DEDF0 001DBD30  38 83 3E F0 */	addi r4, r3, __ct__12J3DTexMtxAnmFv@l
/* 801DEDF4 001DBD34  38 C0 00 08 */	li r6, 8
/* 801DEDF8 001DBD38  38 7E 00 14 */	addi r3, r30, 0x14
/* 801DEDFC 001DBD3C  38 A5 A4 A0 */	addi r5, r5, __dt__12J3DTexMtxAnmFv@l
/* 801DEE00 001DBD40  38 E0 00 08 */	li r7, 8
/* 801DEE04 001DBD44  4B EE 2A 39 */	bl __construct_array
/* 801DEE08 001DBD48  3C 60 80 08 */	lis r3, __ct__11J3DTexNoAnmFv@ha
/* 801DEE0C 001DBD4C  3C A0 80 07 */	lis r5, __dt__11J3DTexNoAnmFv@ha
/* 801DEE10 001DBD50  38 83 3D 08 */	addi r4, r3, __ct__11J3DTexNoAnmFv@l
/* 801DEE14 001DBD54  38 C0 00 0C */	li r6, 0xc
/* 801DEE18 001DBD58  38 7E 00 54 */	addi r3, r30, 0x54
/* 801DEE1C 001DBD5C  38 A5 A4 DC */	addi r5, r5, __dt__11J3DTexNoAnmFv@l
/* 801DEE20 001DBD60  38 E0 00 08 */	li r7, 8
/* 801DEE24 001DBD64  4B EE 2A 19 */	bl __construct_array
/* 801DEE28 001DBD68  3C 60 80 08 */	lis r3, __ct__14J3DTevColorAnmFv@ha
/* 801DEE2C 001DBD6C  3C A0 80 07 */	lis r5, __dt__14J3DTevColorAnmFv@ha
/* 801DEE30 001DBD70  38 83 42 4C */	addi r4, r3, __ct__14J3DTevColorAnmFv@l
/* 801DEE34 001DBD74  38 C0 00 08 */	li r6, 8
/* 801DEE38 001DBD78  38 7E 00 B4 */	addi r3, r30, 0xb4
/* 801DEE3C 001DBD7C  38 A5 A5 24 */	addi r5, r5, __dt__14J3DTevColorAnmFv@l
/* 801DEE40 001DBD80  38 E0 00 04 */	li r7, 4
/* 801DEE44 001DBD84  4B EE 29 F9 */	bl __construct_array
/* 801DEE48 001DBD88  3C 60 80 08 */	lis r3, __ct__15J3DTevKColorAnmFv@ha
/* 801DEE4C 001DBD8C  3C A0 80 07 */	lis r5, __dt__15J3DTevKColorAnmFv@ha
/* 801DEE50 001DBD90  38 83 42 34 */	addi r4, r3, __ct__15J3DTevKColorAnmFv@l
/* 801DEE54 001DBD94  38 C0 00 08 */	li r6, 8
/* 801DEE58 001DBD98  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 801DEE5C 001DBD9C  38 A5 A5 60 */	addi r5, r5, __dt__15J3DTevKColorAnmFv@l
/* 801DEE60 001DBDA0  38 E0 00 04 */	li r7, 4
/* 801DEE64 001DBDA4  4B EE 29 D9 */	bl __construct_array
/* 801DEE68 001DBDA8  7F C3 F3 78 */	mr r3, r30
/* 801DEE6C 001DBDAC  4B E8 B2 89 */	bl initialize__14J3DMaterialAnmFv
.L_801DEE70:
/* 801DEE70 001DBDB0  80 7C 00 60 */	lwz r3, 0x60(r28)
/* 801DEE74 001DBDB4  57 A0 13 BA */	rlwinm r0, r29, 2, 0xe, 0x1d
/* 801DEE78 001DBDB8  7F 03 00 2E */	lwzx r24, r3, r0
/* 801DEE7C 001DBDBC  81 98 00 00 */	lwz r12, 0(r24)
/* 801DEE80 001DBDC0  7F 03 C3 78 */	mr r3, r24
/* 801DEE84 001DBDC4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801DEE88 001DBDC8  7D 89 03 A6 */	mtctr r12
/* 801DEE8C 001DBDCC  4E 80 04 21 */	bctrl 
/* 801DEE90 001DBDD0  93 D8 00 3C */	stw r30, 0x3c(r24)
/* 801DEE94 001DBDD4  3B BD 00 01 */	addi r29, r29, 1
.L_801DEE98:
/* 801DEE98 001DBDD8  A0 1C 00 5C */	lhz r0, 0x5c(r28)
/* 801DEE9C 001DBDDC  57 A3 04 3E */	clrlwi r3, r29, 0x10
/* 801DEEA0 001DBDE0  7C 03 00 40 */	cmplw r3, r0
/* 801DEEA4 001DBDE4  41 80 FF 08 */	blt .L_801DEDAC
/* 801DEEA8 001DBDE8  80 8D 94 78 */	lwz r4, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DEEAC 001DBDEC  38 7C 00 58 */	addi r3, r28, 0x58
/* 801DEEB0 001DBDF0  80 84 00 88 */	lwz r4, 0x88(r4)
/* 801DEEB4 001DBDF4  4B EA 55 79 */	bl entryMatColorAnimator__16J3DMaterialTableFP11J3DAnmColor
/* 801DEEB8 001DBDF8  7F E3 FB 78 */	mr r3, r31
/* 801DEEBC 001DBDFC  38 80 00 01 */	li r4, 1
/* 801DEEC0 001DBE00  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DEEC4 001DBE04  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 801DEEC8 001DBE08  7D 89 03 A6 */	mtctr r12
/* 801DEECC 001DBE0C  4E 80 04 21 */	bctrl 
/* 801DEED0 001DBE10  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801DEED4 001DBE14  7F E4 FB 78 */	mr r4, r31
/* 801DEED8 001DBE18  38 A0 00 00 */	li r5, 0
/* 801DEEDC 001DBE1C  38 C0 00 00 */	li r6, 0
/* 801DEEE0 001DBE20  81 83 00 00 */	lwz r12, 0(r3)
/* 801DEEE4 001DBE24  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801DEEE8 001DBE28  7D 89 03 A6 */	mtctr r12
/* 801DEEEC 001DBE2C  4E 80 04 21 */	bctrl 
/* 801DEEF0 001DBE30  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 801DEEF4 001DBE34  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 801DEEF8 001DBE38  BB 01 00 50 */	lmw r24, 0x50(r1)
/* 801DEEFC 001DBE3C  80 01 00 84 */	lwz r0, 0x84(r1)
/* 801DEF00 001DBE40  7C 08 03 A6 */	mtlr r0
/* 801DEF04 001DBE44  38 21 00 80 */	addi r1, r1, 0x80
/* 801DEF08 001DBE48  4E 80 00 20 */	blr 
.endfn onInit__Q34Game9ItemPlant5PlantFPQ24Game15CreatureInitArg

.fn "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg", weak
/* 801DEF0C 001DBE4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DEF10 001DBE50  7C 08 02 A6 */	mflr r0
/* 801DEF14 001DBE54  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DEF18 001DBE58  38 00 00 00 */	li r0, 0
/* 801DEF1C 001DBE5C  90 04 01 DC */	stw r0, 0x1dc(r4)
/* 801DEF20 001DBE60  81 83 00 00 */	lwz r12, 0(r3)
/* 801DEF24 001DBE64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801DEF28 001DBE68  7D 89 03 A6 */	mtctr r12
/* 801DEF2C 001DBE6C  4E 80 04 21 */	bctrl 
/* 801DEF30 001DBE70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DEF34 001DBE74  7C 08 03 A6 */	mtlr r0
/* 801DEF38 001DBE78  38 21 00 10 */	addi r1, r1, 0x10
/* 801DEF3C 001DBE7C  4E 80 00 20 */	blr 
.endfn "start__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"

.fn doAI__Q34Game9ItemPlant5PlantFv, global
/* 801DEF40 001DBE80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DEF44 001DBE84  7C 08 02 A6 */	mflr r0
/* 801DEF48 001DBE88  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DEF4C 001DBE8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DEF50 001DBE90  7C 7F 1B 78 */	mr r31, r3
/* 801DEF54 001DBE94  7F E4 FB 78 */	mr r4, r31
/* 801DEF58 001DBE98  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801DEF5C 001DBE9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801DEF60 001DBEA0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DEF64 001DBEA4  7D 89 03 A6 */	mtctr r12
/* 801DEF68 001DBEA8  4E 80 04 21 */	bctrl 
/* 801DEF6C 001DBEAC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801DEF70 001DBEB0  88 63 00 3C */	lbz r3, 0x3c(r3)
/* 801DEF74 001DBEB4  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 801DEF78 001DBEB8  41 82 00 34 */	beq .L_801DEFAC
/* 801DEF7C 001DBEBC  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 801DEF80 001DBEC0  41 82 00 2C */	beq .L_801DEFAC
/* 801DEF84 001DBEC4  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801DEF88 001DBEC8  2C 00 00 03 */	cmpwi r0, 3
/* 801DEF8C 001DBECC  41 82 00 14 */	beq .L_801DEFA0
/* 801DEF90 001DBED0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801DEF94 001DBED4  38 80 00 01 */	li r4, 1
/* 801DEF98 001DBED8  48 28 02 E1 */	bl noukouFrameWork__Q23PSM9TsuyukusaFb
/* 801DEF9C 001DBEDC  48 00 00 10 */	b .L_801DEFAC
.L_801DEFA0:
/* 801DEFA0 001DBEE0  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801DEFA4 001DBEE4  38 80 00 00 */	li r4, 0
/* 801DEFA8 001DBEE8  48 28 02 D1 */	bl noukouFrameWork__Q23PSM9TsuyukusaFb
.L_801DEFAC:
/* 801DEFAC 001DBEEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DEFB0 001DBEF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DEFB4 001DBEF4  7C 08 03 A6 */	mtlr r0
/* 801DEFB8 001DBEF8  38 21 00 10 */	addi r1, r1, 0x10
/* 801DEFBC 001DBEFC  4E 80 00 20 */	blr 
.endfn doAI__Q34Game9ItemPlant5PlantFv

.fn startMotion__Q34Game9ItemPlant5PlantFi, global
/* 801DEFC0 001DBF00  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801DEFC4 001DBF04  7C 08 02 A6 */	mflr r0
/* 801DEFC8 001DBF08  90 01 00 74 */	stw r0, 0x74(r1)
/* 801DEFCC 001DBF0C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801DEFD0 001DBF10  7C 7F 1B 78 */	mr r31, r3
/* 801DEFD4 001DBF14  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DEFD8 001DBF18  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801DEFDC 001DBF1C  7C 9E 23 78 */	mr r30, r4
/* 801DEFE0 001DBF20  48 24 A5 75 */	bl endBlend__Q28SysShape13BlendAnimatorFv
/* 801DEFE4 001DBF24  4B EE A5 BD */	bl rand
/* 801DEFE8 001DBF28  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801DEFEC 001DBF2C  3C 00 43 30 */	lis r0, 0x4330
/* 801DEFF0 001DBF30  90 61 00 5C */	stw r3, 0x5c(r1)
/* 801DEFF4 001DBF34  2C 1E 00 02 */	cmpwi r30, 2
/* 801DEFF8 001DBF38  C8 62 B4 F8 */	lfd f3, lbl_80519858@sda21(r2)
/* 801DEFFC 001DBF3C  90 01 00 58 */	stw r0, 0x58(r1)
/* 801DF000 001DBF40  C0 22 B5 10 */	lfs f1, lbl_80519870@sda21(r2)
/* 801DF004 001DBF44  C8 41 00 58 */	lfd f2, 0x58(r1)
/* 801DF008 001DBF48  C0 02 B5 14 */	lfs f0, lbl_80519874@sda21(r2)
/* 801DF00C 001DBF4C  EC 42 18 28 */	fsubs f2, f2, f3
/* 801DF010 001DBF50  EC 22 08 24 */	fdivs f1, f2, f1
/* 801DF014 001DBF54  EC 00 00 72 */	fmuls f0, f0, f1
/* 801DF018 001DBF58  D0 1F 01 FC */	stfs f0, 0x1fc(r31)
/* 801DF01C 001DBF5C  41 82 01 84 */	beq .L_801DF1A0
/* 801DF020 001DBF60  40 80 00 14 */	bge .L_801DF034
/* 801DF024 001DBF64  2C 1E 00 00 */	cmpwi r30, 0
/* 801DF028 001DBF68  41 82 00 1C */	beq .L_801DF044
/* 801DF02C 001DBF6C  40 80 00 2C */	bge .L_801DF058
/* 801DF030 001DBF70  48 00 02 E8 */	b .L_801DF318
.L_801DF034:
/* 801DF034 001DBF74  2C 1E 00 04 */	cmpwi r30, 4
/* 801DF038 001DBF78  41 82 01 44 */	beq .L_801DF17C
/* 801DF03C 001DBF7C  40 80 02 DC */	bge .L_801DF318
/* 801DF040 001DBF80  48 00 02 14 */	b .L_801DF254
.L_801DF044:
/* 801DF044 001DBF84  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 801DF048 001DBF88  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DF04C 001DBF8C  38 A0 00 00 */	li r5, 0
/* 801DF050 001DBF90  48 24 9C 39 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF054 001DBF94  48 00 02 C4 */	b .L_801DF318
.L_801DF058:
/* 801DF058 001DBF98  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801DF05C 001DBF9C  2C 00 00 01 */	cmpwi r0, 1
/* 801DF060 001DBFA0  40 81 00 20 */	ble .L_801DF080
/* 801DF064 001DBFA4  3C 60 80 48 */	lis r3, lbl_804808FC@ha
/* 801DF068 001DBFA8  3C A0 80 48 */	lis r5, lbl_8048090C@ha
/* 801DF06C 001DBFAC  38 63 08 FC */	addi r3, r3, lbl_804808FC@l
/* 801DF070 001DBFB0  38 80 04 3C */	li r4, 0x43c
/* 801DF074 001DBFB4  38 A5 09 0C */	addi r5, r5, lbl_8048090C@l
/* 801DF078 001DBFB8  4C C6 31 82 */	crclr 6
/* 801DF07C 001DBFBC  4B E4 B5 C5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DF080:
/* 801DF080 001DBFC0  28 1F 00 00 */	cmplwi r31, 0
/* 801DF084 001DBFC4  7F E5 FB 78 */	mr r5, r31
/* 801DF088 001DBFC8  41 82 00 08 */	beq .L_801DF090
/* 801DF08C 001DBFCC  38 BF 01 78 */	addi r5, r31, 0x178
.L_801DF090:
/* 801DF090 001DBFD0  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 801DF094 001DBFD4  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DF098 001DBFD8  38 84 00 03 */	addi r4, r4, 3
/* 801DF09C 001DBFDC  48 24 9B ED */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF0A0 001DBFE0  80 1F 01 F4 */	lwz r0, 0x1f4(r31)
/* 801DF0A4 001DBFE4  2C 00 00 00 */	cmpwi r0, 0
/* 801DF0A8 001DBFE8  40 82 00 68 */	bne .L_801DF110
/* 801DF0AC 001DBFEC  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801DF0B0 001DBFF0  38 C0 00 00 */	li r6, 0
/* 801DF0B4 001DBFF4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801DF0B8 001DBFF8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801DF0BC 001DBFFC  90 01 00 40 */	stw r0, 0x40(r1)
/* 801DF0C0 001DC000  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801DF0C4 001DC004  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx2@ha
/* 801DF0C8 001DC008  3C 60 80 4C */	lis r3, __vt__Q23efx11TTsuyuGrow1@ha
/* 801DF0CC 001DC00C  90 01 00 40 */	stw r0, 0x40(r1)
/* 801DF0D0 001DC010  38 04 6A 00 */	addi r0, r4, __vt__Q23efx11TSimpleMtx2@l
/* 801DF0D4 001DC014  38 BF 01 38 */	addi r5, r31, 0x138
/* 801DF0D8 001DC018  38 80 01 BD */	li r4, 0x1bd
/* 801DF0DC 001DC01C  90 01 00 40 */	stw r0, 0x40(r1)
/* 801DF0E0 001DC020  38 03 91 0C */	addi r0, r3, __vt__Q23efx11TTsuyuGrow1@l
/* 801DF0E4 001DC024  38 E0 01 BE */	li r7, 0x1be
/* 801DF0E8 001DC028  38 61 00 40 */	addi r3, r1, 0x40
/* 801DF0EC 001DC02C  B0 81 00 44 */	sth r4, 0x44(r1)
/* 801DF0F0 001DC030  38 80 00 00 */	li r4, 0
/* 801DF0F4 001DC034  B0 E1 00 46 */	sth r7, 0x46(r1)
/* 801DF0F8 001DC038  90 C1 00 48 */	stw r6, 0x48(r1)
/* 801DF0FC 001DC03C  90 C1 00 4C */	stw r6, 0x4c(r1)
/* 801DF100 001DC040  90 A1 00 50 */	stw r5, 0x50(r1)
/* 801DF104 001DC044  90 01 00 40 */	stw r0, 0x40(r1)
/* 801DF108 001DC048  48 1D 02 91 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 801DF10C 001DC04C  48 00 02 0C */	b .L_801DF318
.L_801DF110:
/* 801DF110 001DC050  2C 00 00 01 */	cmpwi r0, 1
/* 801DF114 001DC054  40 82 02 04 */	bne .L_801DF318
/* 801DF118 001DC058  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801DF11C 001DC05C  38 C0 00 00 */	li r6, 0
/* 801DF120 001DC060  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801DF124 001DC064  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801DF128 001DC068  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801DF12C 001DC06C  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801DF130 001DC070  3C 80 80 4E */	lis r4, __vt__Q23efx11TSimpleMtx2@ha
/* 801DF134 001DC074  3C 60 80 4C */	lis r3, __vt__Q23efx11TTsuyuGrow2@ha
/* 801DF138 001DC078  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801DF13C 001DC07C  38 04 6A 00 */	addi r0, r4, __vt__Q23efx11TSimpleMtx2@l
/* 801DF140 001DC080  38 BF 01 38 */	addi r5, r31, 0x138
/* 801DF144 001DC084  38 80 01 BF */	li r4, 0x1bf
/* 801DF148 001DC088  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801DF14C 001DC08C  38 03 90 F8 */	addi r0, r3, __vt__Q23efx11TTsuyuGrow2@l
/* 801DF150 001DC090  38 E0 01 C0 */	li r7, 0x1c0
/* 801DF154 001DC094  38 61 00 2C */	addi r3, r1, 0x2c
/* 801DF158 001DC098  B0 81 00 30 */	sth r4, 0x30(r1)
/* 801DF15C 001DC09C  38 80 00 00 */	li r4, 0
/* 801DF160 001DC0A0  B0 E1 00 32 */	sth r7, 0x32(r1)
/* 801DF164 001DC0A4  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801DF168 001DC0A8  90 C1 00 38 */	stw r6, 0x38(r1)
/* 801DF16C 001DC0AC  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 801DF170 001DC0B0  90 01 00 2C */	stw r0, 0x2c(r1)
/* 801DF174 001DC0B4  48 1D 02 25 */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 801DF178 001DC0B8  48 00 01 A0 */	b .L_801DF318
.L_801DF17C:
/* 801DF17C 001DC0BC  28 1F 00 00 */	cmplwi r31, 0
/* 801DF180 001DC0C0  7F E5 FB 78 */	mr r5, r31
/* 801DF184 001DC0C4  41 82 00 08 */	beq .L_801DF18C
/* 801DF188 001DC0C8  38 BF 01 78 */	addi r5, r31, 0x178
.L_801DF18C:
/* 801DF18C 001DC0CC  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 801DF190 001DC0D0  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DF194 001DC0D4  38 84 00 06 */	addi r4, r4, 6
/* 801DF198 001DC0D8  48 24 9A F1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF19C 001DC0DC  48 00 01 7C */	b .L_801DF318
.L_801DF1A0:
/* 801DF1A0 001DC0E0  28 1F 00 00 */	cmplwi r31, 0
/* 801DF1A4 001DC0E4  7F E5 FB 78 */	mr r5, r31
/* 801DF1A8 001DC0E8  41 82 00 08 */	beq .L_801DF1B0
/* 801DF1AC 001DC0EC  38 BF 01 78 */	addi r5, r31, 0x178
.L_801DF1B0:
/* 801DF1B0 001DC0F0  80 9F 01 F4 */	lwz r4, 0x1f4(r31)
/* 801DF1B4 001DC0F4  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DF1B8 001DC0F8  48 24 9A D1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF1BC 001DC0FC  38 7F 02 24 */	addi r3, r31, 0x224
/* 801DF1C0 001DC100  38 80 00 05 */	li r4, 5
/* 801DF1C4 001DC104  38 A0 00 00 */	li r5, 0
/* 801DF1C8 001DC108  48 24 9A C1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF1CC 001DC10C  3C 80 80 4B */	lis r4, __vt__Q28SysShape13BlendFunction@ha
/* 801DF1D0 001DC110  3C 60 80 4B */	lis r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
/* 801DF1D4 001DC114  38 04 AD 94 */	addi r0, r4, __vt__Q28SysShape13BlendFunction@l
/* 801DF1D8 001DC118  28 1F 00 00 */	cmplwi r31, 0
/* 801DF1DC 001DC11C  90 01 00 08 */	stw r0, 8(r1)
/* 801DF1E0 001DC120  38 03 F8 4C */	addi r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
/* 801DF1E4 001DC124  7F E5 FB 78 */	mr r5, r31
/* 801DF1E8 001DC128  90 01 00 08 */	stw r0, 8(r1)
/* 801DF1EC 001DC12C  41 82 00 08 */	beq .L_801DF1F4
/* 801DF1F0 001DC130  38 BF 01 78 */	addi r5, r31, 0x178
.L_801DF1F4:
/* 801DF1F4 001DC134  C0 22 B4 F0 */	lfs f1, lbl_80519850@sda21(r2)
/* 801DF1F8 001DC138  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DF1FC 001DC13C  38 81 00 08 */	addi r4, r1, 8
/* 801DF200 001DC140  48 24 A1 F9 */	bl startBlend__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfPQ28SysShape14MotionListener
/* 801DF204 001DC144  C0 02 B4 F0 */	lfs f0, lbl_80519850@sda21(r2)
/* 801DF208 001DC148  7F E3 FB 78 */	mr r3, r31
/* 801DF20C 001DC14C  38 80 00 00 */	li r4, 0
/* 801DF210 001DC150  D0 1F 02 58 */	stfs f0, 0x258(r31)
/* 801DF214 001DC154  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DF218 001DC158  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 801DF21C 001DC15C  7D 89 03 A6 */	mtctr r12
/* 801DF220 001DC160  4E 80 04 21 */	bctrl 
/* 801DF224 001DC164  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801DF228 001DC168  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801DF22C 001DC16C  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 801DF230 001DC170  41 82 00 E8 */	beq .L_801DF318
/* 801DF234 001DC174  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801DF238 001DC178  38 80 38 41 */	li r4, 0x3841
/* 801DF23C 001DC17C  38 A0 00 00 */	li r5, 0
/* 801DF240 001DC180  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801DF244 001DC184  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801DF248 001DC188  7D 89 03 A6 */	mtctr r12
/* 801DF24C 001DC18C  4E 80 04 21 */	bctrl 
/* 801DF250 001DC190  48 00 00 C8 */	b .L_801DF318
.L_801DF254:
/* 801DF254 001DC194  7F E3 FB 78 */	mr r3, r31
/* 801DF258 001DC198  38 80 00 01 */	li r4, 1
/* 801DF25C 001DC19C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DF260 001DC1A0  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801DF264 001DC1A4  7D 89 03 A6 */	mtctr r12
/* 801DF268 001DC1A8  4E 80 04 21 */	bctrl 
/* 801DF26C 001DC1AC  28 1F 00 00 */	cmplwi r31, 0
/* 801DF270 001DC1B0  7F E5 FB 78 */	mr r5, r31
/* 801DF274 001DC1B4  41 82 00 08 */	beq .L_801DF27C
/* 801DF278 001DC1B8  38 BF 01 78 */	addi r5, r31, 0x178
.L_801DF27C:
/* 801DF27C 001DC1BC  38 7F 02 08 */	addi r3, r31, 0x208
/* 801DF280 001DC1C0  38 80 00 0C */	li r4, 0xc
/* 801DF284 001DC1C4  48 24 9A 05 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801DF288 001DC1C8  7F E3 FB 78 */	mr r3, r31
/* 801DF28C 001DC1CC  38 80 00 01 */	li r4, 1
/* 801DF290 001DC1D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801DF294 001DC1D4  81 8C 02 40 */	lwz r12, 0x240(r12)
/* 801DF298 001DC1D8  7D 89 03 A6 */	mtctr r12
/* 801DF29C 001DC1DC  4E 80 04 21 */	bctrl 
/* 801DF2A0 001DC1E0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801DF2A4 001DC1E4  C0 3F 02 00 */	lfs f1, 0x200(r31)
/* 801DF2A8 001DC1E8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801DF2AC 001DC1EC  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 801DF2B0 001DC1F0  90 01 00 18 */	stw r0, 0x18(r1)
/* 801DF2B4 001DC1F4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 801DF2B8 001DC1F8  3C C0 80 4B */	lis r6, __vt__Q23efx7ArgRotY@ha
/* 801DF2BC 001DC1FC  3C 60 80 4E */	lis r3, __vt__Q23efx11TTsuyuGrow0@ha
/* 801DF2C0 001DC200  C0 1F 01 9C */	lfs f0, 0x19c(r31)
/* 801DF2C4 001DC204  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 801DF2C8 001DC208  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 801DF2CC 001DC20C  39 26 69 60 */	addi r9, r6, __vt__Q23efx7ArgRotY@l
/* 801DF2D0 001DC210  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 801DF2D4 001DC214  38 03 71 78 */	addi r0, r3, __vt__Q23efx11TTsuyuGrow0@l
/* 801DF2D8 001DC218  38 C0 01 BC */	li r6, 0x1bc
/* 801DF2DC 001DC21C  38 A0 00 00 */	li r5, 0
/* 801DF2E0 001DC220  C0 1F 01 A0 */	lfs f0, 0x1a0(r31)
/* 801DF2E4 001DC224  38 61 00 0C */	addi r3, r1, 0xc
/* 801DF2E8 001DC228  38 81 00 18 */	addi r4, r1, 0x18
/* 801DF2EC 001DC22C  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 801DF2F0 001DC230  C0 1F 01 A4 */	lfs f0, 0x1a4(r31)
/* 801DF2F4 001DC234  91 01 00 0C */	stw r8, 0xc(r1)
/* 801DF2F8 001DC238  90 E1 00 0C */	stw r7, 0xc(r1)
/* 801DF2FC 001DC23C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 801DF300 001DC240  91 21 00 18 */	stw r9, 0x18(r1)
/* 801DF304 001DC244  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 801DF308 001DC248  B0 C1 00 10 */	sth r6, 0x10(r1)
/* 801DF30C 001DC24C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 801DF310 001DC250  90 01 00 0C */	stw r0, 0xc(r1)
/* 801DF314 001DC254  48 1D 65 B1 */	bl create__Q23efx11TTsuyuGrow0FPQ23efx3Arg
.L_801DF318:
/* 801DF318 001DC258  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801DF31C 001DC25C  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801DF320 001DC260  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801DF324 001DC264  7C 08 03 A6 */	mtlr r0
/* 801DF328 001DC268  38 21 00 70 */	addi r1, r1, 0x70
/* 801DF32C 001DC26C  4E 80 00 20 */	blr 
.endfn startMotion__Q34Game9ItemPlant5PlantFi

.fn setColor__Q34Game9ItemPlant5PlantFf, global
/* 801DF330 001DC270  80 6D 94 78 */	lwz r3, mgr__Q24Game9ItemPlant@sda21(r13)
/* 801DF334 001DC274  28 03 00 00 */	cmplwi r3, 0
/* 801DF338 001DC278  4D 82 00 20 */	beqlr 
/* 801DF33C 001DC27C  80 63 00 88 */	lwz r3, 0x88(r3)
/* 801DF340 001DC280  D0 23 00 08 */	stfs f1, 8(r3)
/* 801DF344 001DC284  4E 80 00 20 */	blr 
.endfn setColor__Q34Game9ItemPlant5PlantFf

.fn do_updateLOD__Q34Game9ItemPlant5PlantFv, global
/* 801DF348 001DC288  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DF34C 001DC28C  7C 08 02 A6 */	mflr r0
/* 801DF350 001DC290  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DF354 001DC294  4B FE D2 3D */	bl do_updateLOD__Q24Game8BaseItemFv
/* 801DF358 001DC298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DF35C 001DC29C  7C 08 03 A6 */	mtlr r0
/* 801DF360 001DC2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801DF364 001DC2A4  4E 80 00 20 */	blr 
.endfn do_updateLOD__Q34Game9ItemPlant5PlantFv

.fn doAnimation__Q34Game9ItemPlant5PlantFv, global
/* 801DF368 001DC2A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801DF36C 001DC2AC  7C 08 02 A6 */	mflr r0
/* 801DF370 001DC2B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 801DF374 001DC2B4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801DF378 001DC2B8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801DF37C 001DC2BC  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801DF380 001DC2C0  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801DF384 001DC2C4  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801DF388 001DC2C8  7C 7E 1B 78 */	mr r30, r3
/* 801DF38C 001DC2CC  3C 80 80 48 */	lis r4, lbl_804808F0@ha
/* 801DF390 001DC2D0  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DF394 001DC2D4  3B E4 08 F0 */	addi r31, r4, lbl_804808F0@l
/* 801DF398 001DC2D8  48 00 0E 8D */	bl update__Q34Game9ItemPlant6FruitsFv
/* 801DF39C 001DC2DC  3C 80 80 4B */	lis r4, __vt__Q28SysShape13BlendFunction@ha
/* 801DF3A0 001DC2E0  3C 60 80 4B */	lis r3, __vt__Q28SysShape18BlendQuadraticFunc@ha
/* 801DF3A4 001DC2E4  38 04 AD 94 */	addi r0, r4, __vt__Q28SysShape13BlendFunction@l
/* 801DF3A8 001DC2E8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 801DF3AC 001DC2EC  90 01 00 08 */	stw r0, 8(r1)
/* 801DF3B0 001DC2F0  38 03 F8 4C */	addi r0, r3, __vt__Q28SysShape18BlendQuadraticFunc@l
/* 801DF3B4 001DC2F4  C0 22 B4 F0 */	lfs f1, lbl_80519850@sda21(r2)
/* 801DF3B8 001DC2F8  38 7E 02 04 */	addi r3, r30, 0x204
/* 801DF3BC 001DC2FC  90 01 00 08 */	stw r0, 8(r1)
/* 801DF3C0 001DC300  38 81 00 08 */	addi r4, r1, 8
/* 801DF3C4 001DC304  C0 65 00 54 */	lfs f3, 0x54(r5)
/* 801DF3C8 001DC308  C0 5E 01 D4 */	lfs f2, 0x1d4(r30)
/* 801DF3CC 001DC30C  C0 1E 02 58 */	lfs f0, 0x258(r30)
/* 801DF3D0 001DC310  EC 21 00 F2 */	fmuls f1, f1, f3
/* 801DF3D4 001DC314  EC 42 00 F2 */	fmuls f2, f2, f3
/* 801DF3D8 001DC318  EC 60 00 F2 */	fmuls f3, f0, f3
/* 801DF3DC 001DC31C  48 24 A1 91 */	bl animate__Q28SysShape13BlendAnimatorFPQ28SysShape13BlendFunctionfff
/* 801DF3E0 001DC320  38 7E 02 04 */	addi r3, r30, 0x204
/* 801DF3E4 001DC324  83 BE 01 74 */	lwz r29, 0x174(r30)
/* 801DF3E8 001DC328  81 9E 02 04 */	lwz r12, 0x204(r30)
/* 801DF3EC 001DC32C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DF3F0 001DC330  7D 89 03 A6 */	mtctr r12
/* 801DF3F4 001DC334  4E 80 04 21 */	bctrl 
/* 801DF3F8 001DC338  80 9D 00 08 */	lwz r4, 8(r29)
/* 801DF3FC 001DC33C  80 84 00 04 */	lwz r4, 4(r4)
/* 801DF400 001DC340  80 84 00 28 */	lwz r4, 0x28(r4)
/* 801DF404 001DC344  80 84 00 00 */	lwz r4, 0(r4)
/* 801DF408 001DC348  90 64 00 54 */	stw r3, 0x54(r4)
/* 801DF40C 001DC34C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF410 001DC350  28 03 00 00 */	cmplwi r3, 0
/* 801DF414 001DC354  41 82 01 C4 */	beq .L_801DF5D8
/* 801DF418 001DC358  80 83 00 08 */	lwz r4, 8(r3)
/* 801DF41C 001DC35C  38 7E 01 38 */	addi r3, r30, 0x138
/* 801DF420 001DC360  38 84 00 24 */	addi r4, r4, 0x24
/* 801DF424 001DC364  4B F0 AE A9 */	bl PSMTXCopy
/* 801DF428 001DC368  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF42C 001DC36C  80 63 00 08 */	lwz r3, 8(r3)
/* 801DF430 001DC370  81 83 00 00 */	lwz r12, 0(r3)
/* 801DF434 001DC374  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801DF438 001DC378  7D 89 03 A6 */	mtctr r12
/* 801DF43C 001DC37C  4E 80 04 21 */	bctrl 
/* 801DF440 001DC380  7F C3 F3 78 */	mr r3, r30
/* 801DF444 001DC384  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DF448 001DC388  81 8C 02 28 */	lwz r12, 0x228(r12)
/* 801DF44C 001DC38C  7D 89 03 A6 */	mtctr r12
/* 801DF450 001DC390  4E 80 04 21 */	bctrl 
/* 801DF454 001DC394  80 1E 01 EC */	lwz r0, 0x1ec(r30)
/* 801DF458 001DC398  3C 80 43 30 */	lis r4, 0x4330
/* 801DF45C 001DC39C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801DF460 001DC3A0  90 81 00 10 */	stw r4, 0x10(r1)
/* 801DF464 001DC3A4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 801DF468 001DC3A8  C8 A2 B4 F8 */	lfd f5, lbl_80519858@sda21(r2)
/* 801DF46C 001DC3AC  90 61 00 14 */	stw r3, 0x14(r1)
/* 801DF470 001DC3B0  C0 62 B4 E4 */	lfs f3, lbl_80519844@sda21(r2)
/* 801DF474 001DC3B4  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 801DF478 001DC3B8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801DF47C 001DC3BC  EC 80 28 28 */	fsubs f4, f0, f5
/* 801DF480 001DC3C0  C0 22 B4 EC */	lfs f1, lbl_8051984C@sda21(r2)
/* 801DF484 001DC3C4  90 81 00 18 */	stw r4, 0x18(r1)
/* 801DF488 001DC3C8  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DF48C 001DC3CC  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 801DF490 001DC3D0  EC 64 18 24 */	fdivs f3, f4, f3
/* 801DF494 001DC3D4  EC 42 28 28 */	fsubs f2, f2, f5
/* 801DF498 001DC3D8  EC 22 08 24 */	fdivs f1, f2, f1
/* 801DF49C 001DC3DC  EF E1 18 2A */	fadds f31, f1, f3
/* 801DF4A0 001DC3E0  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 801DF4A4 001DC3E4  40 81 00 08 */	ble .L_801DF4AC
/* 801DF4A8 001DC3E8  FF E0 00 90 */	fmr f31, f0
.L_801DF4AC:
/* 801DF4AC 001DC3EC  88 1E 00 D8 */	lbz r0, 0xd8(r30)
/* 801DF4B0 001DC3F0  C0 02 B5 18 */	lfs f0, lbl_80519878@sda21(r2)
/* 801DF4B4 001DC3F4  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801DF4B8 001DC3F8  EF FF 00 32 */	fmuls f31, f31, f0
/* 801DF4BC 001DC3FC  41 82 01 1C */	beq .L_801DF5D8
/* 801DF4C0 001DC400  80 1E 01 F4 */	lwz r0, 0x1f4(r30)
/* 801DF4C4 001DC404  2C 00 00 02 */	cmpwi r0, 2
/* 801DF4C8 001DC408  40 82 01 04 */	bne .L_801DF5CC
/* 801DF4CC 001DC40C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF4D0 001DC410  38 9F 00 44 */	addi r4, r31, 0x44
/* 801DF4D4 001DC414  48 25 FB 11 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DF4D8 001DC418  48 24 A3 C9 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DF4DC 001DC41C  80 1E 02 7C */	lwz r0, 0x27c(r30)
/* 801DF4E0 001DC420  7C 7D 1B 78 */	mr r29, r3
/* 801DF4E4 001DC424  2C 00 00 00 */	cmpwi r0, 0
/* 801DF4E8 001DC428  41 81 00 18 */	bgt .L_801DF500
/* 801DF4EC 001DC42C  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DF4F0 001DC430  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DF4F4 001DC434  38 80 02 97 */	li r4, 0x297
/* 801DF4F8 001DC438  4C C6 31 82 */	crclr 6
/* 801DF4FC 001DC43C  4B E4 B1 45 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DF500:
/* 801DF500 001DC440  80 7E 02 68 */	lwz r3, 0x268(r30)
/* 801DF504 001DC444  38 9F 00 50 */	addi r4, r31, 0x50
/* 801DF508 001DC448  93 A3 00 00 */	stw r29, 0(r3)
/* 801DF50C 001DC44C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF510 001DC450  48 25 FA D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DF514 001DC454  48 24 A3 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DF518 001DC458  80 1E 02 7C */	lwz r0, 0x27c(r30)
/* 801DF51C 001DC45C  7C 7D 1B 78 */	mr r29, r3
/* 801DF520 001DC460  2C 00 00 01 */	cmpwi r0, 1
/* 801DF524 001DC464  41 81 00 18 */	bgt .L_801DF53C
/* 801DF528 001DC468  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DF52C 001DC46C  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DF530 001DC470  38 80 02 97 */	li r4, 0x297
/* 801DF534 001DC474  4C C6 31 82 */	crclr 6
/* 801DF538 001DC478  4B E4 B1 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DF53C:
/* 801DF53C 001DC47C  80 7E 02 68 */	lwz r3, 0x268(r30)
/* 801DF540 001DC480  38 9F 00 5C */	addi r4, r31, 0x5c
/* 801DF544 001DC484  93 A3 00 04 */	stw r29, 4(r3)
/* 801DF548 001DC488  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF54C 001DC48C  48 25 FA 99 */	bl getJoint__Q28SysShape5ModelFPc
/* 801DF550 001DC490  48 24 A3 51 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DF554 001DC494  80 1E 02 7C */	lwz r0, 0x27c(r30)
/* 801DF558 001DC498  7C 7D 1B 78 */	mr r29, r3
/* 801DF55C 001DC49C  2C 00 00 02 */	cmpwi r0, 2
/* 801DF560 001DC4A0  41 81 00 18 */	bgt .L_801DF578
/* 801DF564 001DC4A4  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DF568 001DC4A8  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DF56C 001DC4AC  38 80 02 97 */	li r4, 0x297
/* 801DF570 001DC4B0  4C C6 31 82 */	crclr 6
/* 801DF574 001DC4B4  4B E4 B0 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DF578:
/* 801DF578 001DC4B8  80 7E 02 68 */	lwz r3, 0x268(r30)
/* 801DF57C 001DC4BC  38 9F 00 68 */	addi r4, r31, 0x68
/* 801DF580 001DC4C0  93 A3 00 08 */	stw r29, 8(r3)
/* 801DF584 001DC4C4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF588 001DC4C8  48 25 FA 5D */	bl getJoint__Q28SysShape5ModelFPc
/* 801DF58C 001DC4CC  48 24 A3 15 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 801DF590 001DC4D0  80 1E 02 7C */	lwz r0, 0x27c(r30)
/* 801DF594 001DC4D4  7C 7D 1B 78 */	mr r29, r3
/* 801DF598 001DC4D8  2C 00 00 03 */	cmpwi r0, 3
/* 801DF59C 001DC4DC  41 81 00 18 */	bgt .L_801DF5B4
/* 801DF5A0 001DC4E0  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DF5A4 001DC4E4  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DF5A8 001DC4E8  38 80 02 97 */	li r4, 0x297
/* 801DF5AC 001DC4EC  4C C6 31 82 */	crclr 6
/* 801DF5B0 001DC4F0  4B E4 B0 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DF5B4:
/* 801DF5B4 001DC4F4  80 9E 02 68 */	lwz r4, 0x268(r30)
/* 801DF5B8 001DC4F8  FC 40 F8 90 */	fmr f2, f31
/* 801DF5BC 001DC4FC  38 7E 02 5C */	addi r3, r30, 0x25c
/* 801DF5C0 001DC500  93 A4 00 0C */	stw r29, 0xc(r4)
/* 801DF5C4 001DC504  C0 3E 02 00 */	lfs f1, 0x200(r30)
/* 801DF5C8 001DC508  4B FF EA 79 */	bl update__Q34Game9ItemPlant12ProcAnimatorFff
.L_801DF5CC:
/* 801DF5CC 001DC50C  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801DF5D0 001DC510  80 63 00 08 */	lwz r3, 8(r3)
/* 801DF5D4 001DC514  4B E8 77 69 */	bl calcWeightEnvelopeMtx__8J3DModelFv
.L_801DF5D8:
/* 801DF5D8 001DC518  7F C3 F3 78 */	mr r3, r30
/* 801DF5DC 001DC51C  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DF5E0 001DC520  81 8C 02 14 */	lwz r12, 0x214(r12)
/* 801DF5E4 001DC524  7D 89 03 A6 */	mtctr r12
/* 801DF5E8 001DC528  4E 80 04 21 */	bctrl 
/* 801DF5EC 001DC52C  7F C3 F3 78 */	mr r3, r30
/* 801DF5F0 001DC530  4B FE D0 1D */	bl updateCollTree__Q24Game8BaseItemFv
/* 801DF5F4 001DC534  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801DF5F8 001DC538  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801DF5FC 001DC53C  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801DF600 001DC540  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801DF604 001DC544  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801DF608 001DC548  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801DF60C 001DC54C  7C 08 03 A6 */	mtlr r0
/* 801DF610 001DC550  38 21 00 40 */	addi r1, r1, 0x40
/* 801DF614 001DC554  4E 80 00 20 */	blr 
.endfn doAnimation__Q34Game9ItemPlant5PlantFv

.fn bearFruits__Q34Game9ItemPlant5PlantFv, global
/* 801DF618 001DC558  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DF61C 001DC55C  7C 08 02 A6 */	mflr r0
/* 801DF620 001DC560  7C 64 1B 78 */	mr r4, r3
/* 801DF624 001DC564  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DF628 001DC568  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DF62C 001DC56C  A0 84 01 E0 */	lhz r4, 0x1e0(r4)
/* 801DF630 001DC570  48 00 0C 59 */	bl bearAll__Q34Game9ItemPlant6FruitsFUs
/* 801DF634 001DC574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DF638 001DC578  7C 08 03 A6 */	mtlr r0
/* 801DF63C 001DC57C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DF640 001DC580  4E 80 00 20 */	blr 
.endfn bearFruits__Q34Game9ItemPlant5PlantFv

.fn killFruits__Q34Game9ItemPlant5PlantFv, global
/* 801DF644 001DC584  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DF648 001DC588  7C 08 02 A6 */	mflr r0
/* 801DF64C 001DC58C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DF650 001DC590  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DF654 001DC594  48 00 0F 69 */	bl killAll__Q34Game9ItemPlant6FruitsFv
/* 801DF658 001DC598  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DF65C 001DC59C  7C 08 03 A6 */	mtlr r0
/* 801DF660 001DC5A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801DF664 001DC5A4  4E 80 00 20 */	blr 
.endfn killFruits__Q34Game9ItemPlant5PlantFv

.fn dropFruit__Q34Game9ItemPlant5PlantFi, global
/* 801DF668 001DC5A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801DF66C 001DC5AC  7C 08 02 A6 */	mflr r0
/* 801DF670 001DC5B0  3C A0 80 51 */	lis r5, "zero__10Vector3<f>"@ha
/* 801DF674 001DC5B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801DF678 001DC5B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801DF67C 001DC5BC  3B E5 41 E4 */	addi r31, r5, "zero__10Vector3<f>"@l
/* 801DF680 001DC5C0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801DF684 001DC5C4  3B C0 00 00 */	li r30, 0
/* 801DF688 001DC5C8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801DF68C 001DC5CC  7C 9D 23 78 */	mr r29, r4
/* 801DF690 001DC5D0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801DF694 001DC5D4  7C 7C 1B 78 */	mr r28, r3
/* 801DF698 001DC5D8  48 00 00 28 */	b .L_801DF6C0
.L_801DF69C:
/* 801DF69C 001DC5DC  80 7C 02 88 */	lwz r3, 0x288(r28)
/* 801DF6A0 001DC5E0  7F E4 FB 78 */	mr r4, r31
/* 801DF6A4 001DC5E4  48 00 0F 7D */	bl "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
/* 801DF6A8 001DC5E8  28 03 00 00 */	cmplwi r3, 0
/* 801DF6AC 001DC5EC  41 82 00 1C */	beq .L_801DF6C8
/* 801DF6B0 001DC5F0  48 00 11 19 */	bl dropFruit__Q34Game9ItemPlant9FruitSlotFv
/* 801DF6B4 001DC5F4  48 00 00 08 */	b .L_801DF6BC
/* 801DF6B8 001DC5F8  48 00 00 10 */	b .L_801DF6C8
.L_801DF6BC:
/* 801DF6BC 001DC5FC  3B DE 00 01 */	addi r30, r30, 1
.L_801DF6C0:
/* 801DF6C0 001DC600  7C 1E E8 00 */	cmpw r30, r29
/* 801DF6C4 001DC604  41 80 FF D8 */	blt .L_801DF69C
.L_801DF6C8:
/* 801DF6C8 001DC608  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801DF6CC 001DC60C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801DF6D0 001DC610  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801DF6D4 001DC614  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801DF6D8 001DC618  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801DF6DC 001DC61C  7C 08 03 A6 */	mtlr r0
/* 801DF6E0 001DC620  38 21 00 20 */	addi r1, r1, 0x20
/* 801DF6E4 001DC624  4E 80 00 20 */	blr 
.endfn dropFruit__Q34Game9ItemPlant5PlantFi

.fn hasFruits__Q34Game9ItemPlant5PlantFv, global
/* 801DF6E8 001DC628  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DF6EC 001DC62C  7C 08 02 A6 */	mflr r0
/* 801DF6F0 001DC630  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DF6F4 001DC634  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DF6F8 001DC638  48 00 0E 45 */	bl hasFruits__Q34Game9ItemPlant6FruitsFv
/* 801DF6FC 001DC63C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DF700 001DC640  7C 08 03 A6 */	mtlr r0
/* 801DF704 001DC644  38 21 00 10 */	addi r1, r1, 0x10
/* 801DF708 001DC648  4E 80 00 20 */	blr 
.endfn hasFruits__Q34Game9ItemPlant5PlantFv

.fn getFruitsNum__Q34Game9ItemPlant5PlantFv, global
/* 801DF70C 001DC64C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DF710 001DC650  7C 08 02 A6 */	mflr r0
/* 801DF714 001DC654  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DF718 001DC658  80 63 02 88 */	lwz r3, 0x288(r3)
/* 801DF71C 001DC65C  48 00 0E 61 */	bl countFruits__Q34Game9ItemPlant6FruitsFv
/* 801DF720 001DC660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DF724 001DC664  7C 08 03 A6 */	mtlr r0
/* 801DF728 001DC668  38 21 00 10 */	addi r1, r1, 0x10
/* 801DF72C 001DC66C  4E 80 00 20 */	blr 
.endfn getFruitsNum__Q34Game9ItemPlant5PlantFv

.fn interactEat__Q34Game9ItemPlant5PlantFRQ24Game11InteractEat, global
/* 801DF730 001DC670  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801DF734 001DC674  7C 08 02 A6 */	mflr r0
/* 801DF738 001DC678  90 01 00 74 */	stw r0, 0x74(r1)
/* 801DF73C 001DC67C  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801DF740 001DC680  93 C1 00 68 */	stw r30, 0x68(r1)
/* 801DF744 001DC684  7C 7E 1B 78 */	mr r30, r3
/* 801DF748 001DC688  38 61 00 14 */	addi r3, r1, 0x14
/* 801DF74C 001DC68C  93 A1 00 64 */	stw r29, 0x64(r1)
/* 801DF750 001DC690  7C 9D 23 78 */	mr r29, r4
/* 801DF754 001DC694  80 84 00 04 */	lwz r4, 4(r4)
/* 801DF758 001DC698  81 84 00 00 */	lwz r12, 0(r4)
/* 801DF75C 001DC69C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DF760 001DC6A0  7D 89 03 A6 */	mtctr r12
/* 801DF764 001DC6A4  4E 80 04 21 */	bctrl 
/* 801DF768 001DC6A8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 801DF76C 001DC6AC  38 81 00 50 */	addi r4, r1, 0x50
/* 801DF770 001DC6B0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 801DF774 001DC6B4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 801DF778 001DC6B8  D0 41 00 50 */	stfs f2, 0x50(r1)
/* 801DF77C 001DC6BC  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801DF780 001DC6C0  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 801DF784 001DC6C4  80 7E 02 88 */	lwz r3, 0x288(r30)
/* 801DF788 001DC6C8  48 00 0E 99 */	bl "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"
/* 801DF78C 001DC6CC  7C 7F 1B 79 */	or. r31, r3, r3
/* 801DF790 001DC6D0  41 82 01 50 */	beq .L_801DF8E0
/* 801DF794 001DC6D4  83 DF 00 18 */	lwz r30, 0x18(r31)
/* 801DF798 001DC6D8  7F C3 F3 78 */	mr r3, r30
/* 801DF79C 001DC6DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DF7A0 001DC6E0  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801DF7A4 001DC6E4  7D 89 03 A6 */	mtctr r12
/* 801DF7A8 001DC6E8  4E 80 04 21 */	bctrl 
/* 801DF7AC 001DC6EC  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801DF7B0 001DC6F0  28 00 00 02 */	cmplwi r0, 2
/* 801DF7B4 001DC6F4  40 82 01 14 */	bne .L_801DF8C8
/* 801DF7B8 001DC6F8  7F C4 F3 78 */	mr r4, r30
/* 801DF7BC 001DC6FC  38 61 00 08 */	addi r3, r1, 8
/* 801DF7C0 001DC700  81 9E 00 00 */	lwz r12, 0(r30)
/* 801DF7C4 001DC704  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DF7C8 001DC708  7D 89 03 A6 */	mtctr r12
/* 801DF7CC 001DC70C  4E 80 04 21 */	bctrl 
/* 801DF7D0 001DC710  C0 41 00 08 */	lfs f2, 8(r1)
/* 801DF7D4 001DC714  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801DF7D8 001DC718  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801DF7DC 001DC71C  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801DF7E0 001DC720  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801DF7E4 001DC724  90 01 00 40 */	stw r0, 0x40(r1)
/* 801DF7E8 001DC728  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801DF7EC 001DC72C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801DF7F0 001DC730  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801DF7F4 001DC734  A0 1E 04 3E */	lhz r0, 0x43e(r30)
/* 801DF7F8 001DC738  28 00 00 00 */	cmplwi r0, 0
/* 801DF7FC 001DC73C  40 82 00 58 */	bne .L_801DF854
/* 801DF800 001DC740  38 E0 00 00 */	li r7, 0
/* 801DF804 001DC744  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801DF808 001DC748  90 FD 00 08 */	stw r7, 8(r29)
/* 801DF80C 001DC74C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801DF810 001DC750  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 801DF814 001DC754  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownR@ha
/* 801DF818 001DC758  90 01 00 30 */	stw r0, 0x30(r1)
/* 801DF81C 001DC75C  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 801DF820 001DC760  38 C0 00 65 */	li r6, 0x65
/* 801DF824 001DC764  38 A0 00 66 */	li r5, 0x66
/* 801DF828 001DC768  90 01 00 30 */	stw r0, 0x30(r1)
/* 801DF82C 001DC76C  38 03 22 88 */	addi r0, r3, __vt__Q23efx12TFruitsDownR@l
/* 801DF830 001DC770  38 61 00 30 */	addi r3, r1, 0x30
/* 801DF834 001DC774  38 81 00 40 */	addi r4, r1, 0x40
/* 801DF838 001DC778  B0 C1 00 34 */	sth r6, 0x34(r1)
/* 801DF83C 001DC77C  B0 A1 00 36 */	sth r5, 0x36(r1)
/* 801DF840 001DC780  90 E1 00 38 */	stw r7, 0x38(r1)
/* 801DF844 001DC784  90 E1 00 3C */	stw r7, 0x3c(r1)
/* 801DF848 001DC788  90 01 00 30 */	stw r0, 0x30(r1)
/* 801DF84C 001DC78C  48 1C F7 C9 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 801DF850 001DC790  48 00 00 58 */	b .L_801DF8A8
.L_801DF854:
/* 801DF854 001DC794  38 00 00 01 */	li r0, 1
/* 801DF858 001DC798  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 801DF85C 001DC79C  90 1D 00 08 */	stw r0, 8(r29)
/* 801DF860 001DC7A0  38 A0 00 00 */	li r5, 0
/* 801DF864 001DC7A4  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 801DF868 001DC7A8  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple2@ha
/* 801DF86C 001DC7AC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801DF870 001DC7B0  38 03 6A 64 */	addi r0, r3, __vt__Q23efx8TSimple2@l
/* 801DF874 001DC7B4  3C 60 80 4B */	lis r3, __vt__Q23efx12TFruitsDownP@ha
/* 801DF878 001DC7B8  38 80 00 63 */	li r4, 0x63
/* 801DF87C 001DC7BC  90 01 00 20 */	stw r0, 0x20(r1)
/* 801DF880 001DC7C0  38 03 22 74 */	addi r0, r3, __vt__Q23efx12TFruitsDownP@l
/* 801DF884 001DC7C4  38 C0 00 64 */	li r6, 0x64
/* 801DF888 001DC7C8  38 61 00 20 */	addi r3, r1, 0x20
/* 801DF88C 001DC7CC  B0 81 00 24 */	sth r4, 0x24(r1)
/* 801DF890 001DC7D0  38 81 00 40 */	addi r4, r1, 0x40
/* 801DF894 001DC7D4  B0 C1 00 26 */	sth r6, 0x26(r1)
/* 801DF898 001DC7D8  90 A1 00 28 */	stw r5, 0x28(r1)
/* 801DF89C 001DC7DC  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801DF8A0 001DC7E0  90 01 00 20 */	stw r0, 0x20(r1)
/* 801DF8A4 001DC7E4  48 1C F7 71 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
.L_801DF8A8:
/* 801DF8A8 001DC7E8  80 7E 03 30 */	lwz r3, 0x330(r30)
/* 801DF8AC 001DC7EC  38 80 38 42 */	li r4, 0x3842
/* 801DF8B0 001DC7F0  38 A0 00 00 */	li r5, 0
/* 801DF8B4 001DC7F4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801DF8B8 001DC7F8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801DF8BC 001DC7FC  7D 89 03 A6 */	mtctr r12
/* 801DF8C0 001DC800  4E 80 04 21 */	bctrl 
/* 801DF8C4 001DC804  48 00 00 0C */	b .L_801DF8D0
.L_801DF8C8:
/* 801DF8C8 001DC808  38 00 00 02 */	li r0, 2
/* 801DF8CC 001DC80C  90 1D 00 08 */	stw r0, 8(r29)
.L_801DF8D0:
/* 801DF8D0 001DC810  7F E3 FB 78 */	mr r3, r31
/* 801DF8D4 001DC814  48 00 0F 35 */	bl killFruit__Q34Game9ItemPlant9FruitSlotFv
/* 801DF8D8 001DC818  38 60 00 01 */	li r3, 1
/* 801DF8DC 001DC81C  48 00 00 08 */	b .L_801DF8E4
.L_801DF8E0:
/* 801DF8E0 001DC820  38 60 00 00 */	li r3, 0
.L_801DF8E4:
/* 801DF8E4 001DC824  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801DF8E8 001DC828  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801DF8EC 001DC82C  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 801DF8F0 001DC830  83 A1 00 64 */	lwz r29, 0x64(r1)
/* 801DF8F4 001DC834  7C 08 03 A6 */	mtlr r0
/* 801DF8F8 001DC838  38 21 00 70 */	addi r1, r1, 0x70
/* 801DF8FC 001DC83C  4E 80 00 20 */	blr 
.endfn interactEat__Q34Game9ItemPlant5PlantFRQ24Game11InteractEat

.fn __ct__Q34Game9ItemPlant3MgrFv, global
/* 801DF900 001DC840  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801DF904 001DC844  7C 08 02 A6 */	mflr r0
/* 801DF908 001DC848  90 01 04 44 */	stw r0, 0x444(r1)
/* 801DF90C 001DC84C  7C 80 07 35 */	extsh. r0, r4
/* 801DF910 001DC850  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801DF914 001DC854  7C 7F 1B 78 */	mr r31, r3
/* 801DF918 001DC858  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801DF91C 001DC85C  41 82 00 0C */	beq .L_801DF928
/* 801DF920 001DC860  38 1F 00 90 */	addi r0, r31, 0x90
/* 801DF924 001DC864  90 1F 00 04 */	stw r0, 4(r31)
.L_801DF928:
/* 801DF928 001DC868  7F E3 FB 78 */	mr r3, r31
/* 801DF92C 001DC86C  38 80 00 00 */	li r4, 0
/* 801DF930 001DC870  4B FE DA F1 */	bl __ct__Q24Game12TNodeItemMgrFv
/* 801DF934 001DC874  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant3Mgr@ha
/* 801DF938 001DC878  38 02 B5 1C */	addi r0, r2, lbl_8051987C@sda21
/* 801DF93C 001DC87C  38 83 90 2C */	addi r4, r3, __vt__Q34Game9ItemPlant3Mgr@l
/* 801DF940 001DC880  7F E3 FB 78 */	mr r3, r31
/* 801DF944 001DC884  90 9F 00 00 */	stw r4, 0(r31)
/* 801DF948 001DC888  38 A4 00 74 */	addi r5, r4, 0x74
/* 801DF94C 001DC88C  38 80 00 01 */	li r4, 1
/* 801DF950 001DC890  90 BF 00 30 */	stw r5, 0x30(r31)
/* 801DF954 001DC894  90 1F 00 08 */	stw r0, 8(r31)
/* 801DF958 001DC898  4B FE D4 75 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801DF95C 001DC89C  3C 80 80 48 */	lis r4, lbl_80480964@ha
/* 801DF960 001DC8A0  38 60 01 DC */	li r3, 0x1dc
/* 801DF964 001DC8A4  38 04 09 64 */	addi r0, r4, lbl_80480964@l
/* 801DF968 001DC8A8  90 1F 00 28 */	stw r0, 0x28(r31)
/* 801DF96C 001DC8AC  4B E4 45 39 */	bl __nw__FUl
/* 801DF970 001DC8B0  7C 60 1B 79 */	or. r0, r3, r3
/* 801DF974 001DC8B4  41 82 00 0C */	beq .L_801DF980
/* 801DF978 001DC8B8  48 00 00 CD */	bl __ct__Q34Game9ItemPlant10PlantParmsFv
/* 801DF97C 001DC8BC  7C 60 1B 78 */	mr r0, r3
.L_801DF980:
/* 801DF980 001DC8C0  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 801DF984 001DC8C4  38 00 00 00 */	li r0, 0
/* 801DF988 001DC8C8  3C 60 80 48 */	lis r3, lbl_80480980@ha
/* 801DF98C 001DC8CC  38 80 00 00 */	li r4, 0
/* 801DF990 001DC8D0  90 01 00 08 */	stw r0, 8(r1)
/* 801DF994 001DC8D4  38 63 09 80 */	addi r3, r3, lbl_80480980@l
/* 801DF998 001DC8D8  38 A0 00 00 */	li r5, 0
/* 801DF99C 001DC8DC  38 C0 00 00 */	li r6, 0
/* 801DF9A0 001DC8E0  38 E0 00 00 */	li r7, 0
/* 801DF9A4 001DC8E4  39 00 00 02 */	li r8, 2
/* 801DF9A8 001DC8E8  39 20 00 00 */	li r9, 0
/* 801DF9AC 001DC8EC  39 40 00 00 */	li r10, 0
/* 801DF9B0 001DC8F0  4B E3 F7 D9 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 801DF9B4 001DC8F4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801DF9B8 001DC8F8  41 82 00 4C */	beq .L_801DFA04
/* 801DF9BC 001DC8FC  7F C4 F3 78 */	mr r4, r30
/* 801DF9C0 001DC900  38 61 00 10 */	addi r3, r1, 0x10
/* 801DF9C4 001DC904  38 A0 FF FF */	li r5, -1
/* 801DF9C8 001DC908  48 23 5F 31 */	bl __ct__9RamStreamFPvi
/* 801DF9CC 001DC90C  38 00 00 01 */	li r0, 1
/* 801DF9D0 001DC910  2C 00 00 01 */	cmpwi r0, 1
/* 801DF9D4 001DC914  90 01 00 1C */	stw r0, 0x1c(r1)
/* 801DF9D8 001DC918  40 82 00 0C */	bne .L_801DF9E4
/* 801DF9DC 001DC91C  38 00 00 00 */	li r0, 0
/* 801DF9E0 001DC920  90 01 04 24 */	stw r0, 0x424(r1)
.L_801DF9E4:
/* 801DF9E4 001DC924  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 801DF9E8 001DC928  38 81 00 10 */	addi r4, r1, 0x10
/* 801DF9EC 001DC92C  81 83 00 D8 */	lwz r12, 0xd8(r3)
/* 801DF9F0 001DC930  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DF9F4 001DC934  7D 89 03 A6 */	mtctr r12
/* 801DF9F8 001DC938  4E 80 04 21 */	bctrl 
/* 801DF9FC 001DC93C  7F C3 F3 78 */	mr r3, r30
/* 801DFA00 001DC940  4B E4 46 D9 */	bl __dla__FPv
.L_801DFA04:
/* 801DFA04 001DC944  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801DFA08 001DC948  7F E3 FB 78 */	mr r3, r31
/* 801DFA0C 001DC94C  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801DFA10 001DC950  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801DFA14 001DC954  7C 08 03 A6 */	mtlr r0
/* 801DFA18 001DC958  38 21 04 40 */	addi r1, r1, 0x440
/* 801DFA1C 001DC95C  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9ItemPlant3MgrFv

.fn read__Q34Game9ItemPlant10PlantParmsFR6Stream, weak
/* 801DFA20 001DC960  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DFA24 001DC964  7C 08 02 A6 */	mflr r0
/* 801DFA28 001DC968  38 63 00 DC */	addi r3, r3, 0xdc
/* 801DFA2C 001DC96C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DFA30 001DC970  48 23 3D C5 */	bl read__10ParametersFR6Stream
/* 801DFA34 001DC974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DFA38 001DC978  7C 08 03 A6 */	mtlr r0
/* 801DFA3C 001DC97C  38 21 00 10 */	addi r1, r1, 0x10
/* 801DFA40 001DC980  4E 80 00 20 */	blr 
.endfn read__Q34Game9ItemPlant10PlantParmsFR6Stream

.fn __ct__Q34Game9ItemPlant10PlantParmsFv, weak
/* 801DFA44 001DC984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DFA48 001DC988  7C 08 02 A6 */	mflr r0
/* 801DFA4C 001DC98C  3C A0 73 30 */	lis r5, 0x73303030@ha
/* 801DFA50 001DC990  3C 80 80 4B */	lis r4, __vt__Q24Game13CreatureParms@ha
/* 801DFA54 001DC994  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DFA58 001DC998  38 04 AC B0 */	addi r0, r4, __vt__Q24Game13CreatureParms@l
/* 801DFA5C 001DC99C  38 A5 30 30 */	addi r5, r5, 0x73303030@l
/* 801DFA60 001DC9A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DFA64 001DC9A4  93 C1 00 08 */	stw r30, 8(r1)
/* 801DFA68 001DC9A8  7C 7E 1B 78 */	mr r30, r3
/* 801DFA6C 001DC9AC  3C 60 80 48 */	lis r3, lbl_804808F0@ha
/* 801DFA70 001DC9B0  90 1E 00 D8 */	stw r0, 0xd8(r30)
/* 801DFA74 001DC9B4  3B E3 08 F0 */	addi r31, r3, lbl_804808F0@l
/* 801DFA78 001DC9B8  38 1E 00 D4 */	addi r0, r30, 0xd4
/* 801DFA7C 001DC9BC  38 60 00 00 */	li r3, 0
/* 801DFA80 001DC9C0  90 1E 00 00 */	stw r0, 0(r30)
/* 801DFA84 001DC9C4  38 1F 00 B0 */	addi r0, r31, 0xb0
/* 801DFA88 001DC9C8  7F C4 F3 78 */	mr r4, r30
/* 801DFA8C 001DC9CC  38 DF 00 C4 */	addi r6, r31, 0xc4
/* 801DFA90 001DC9D0  90 7E 00 04 */	stw r3, 4(r30)
/* 801DFA94 001DC9D4  38 7E 00 0C */	addi r3, r30, 0xc
/* 801DFA98 001DC9D8  90 1E 00 08 */	stw r0, 8(r30)
/* 801DFA9C 001DC9DC  48 23 3B BD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFAA0 001DC9E0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFAA4 001DC9E4  3C A0 73 30 */	lis r5, 0x73303031@ha
/* 801DFAA8 001DC9E8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFAAC 001DC9EC  C0 02 B4 D8 */	lfs f0, lbl_80519838@sda21(r2)
/* 801DFAB0 001DC9F0  90 1E 00 0C */	stw r0, 0xc(r30)
/* 801DFAB4 001DC9F4  7F C4 F3 78 */	mr r4, r30
/* 801DFAB8 001DC9F8  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFABC 001DC9FC  38 7E 00 34 */	addi r3, r30, 0x34
/* 801DFAC0 001DCA00  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 801DFAC4 001DCA04  38 A5 30 31 */	addi r5, r5, 0x73303031@l
/* 801DFAC8 001DCA08  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DFACC 001DCA0C  38 DF 00 D8 */	addi r6, r31, 0xd8
/* 801DFAD0 001DCA10  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 801DFAD4 001DCA14  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 801DFAD8 001DCA18  48 23 3B 81 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFADC 001DCA1C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFAE0 001DCA20  3C A0 73 30 */	lis r5, 0x73303032@ha
/* 801DFAE4 001DCA24  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFAE8 001DCA28  C0 02 B4 D8 */	lfs f0, lbl_80519838@sda21(r2)
/* 801DFAEC 001DCA2C  90 1E 00 34 */	stw r0, 0x34(r30)
/* 801DFAF0 001DCA30  7F C4 F3 78 */	mr r4, r30
/* 801DFAF4 001DCA34  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFAF8 001DCA38  38 7E 00 5C */	addi r3, r30, 0x5c
/* 801DFAFC 001DCA3C  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 801DFB00 001DCA40  38 A5 30 32 */	addi r5, r5, 0x73303032@l
/* 801DFB04 001DCA44  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DFB08 001DCA48  38 DF 00 E8 */	addi r6, r31, 0xe8
/* 801DFB0C 001DCA4C  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 801DFB10 001DCA50  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 801DFB14 001DCA54  48 23 3B 45 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFB18 001DCA58  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFB1C 001DCA5C  3C A0 73 30 */	lis r5, 0x73303033@ha
/* 801DFB20 001DCA60  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFB24 001DCA64  C0 02 B5 24 */	lfs f0, lbl_80519884@sda21(r2)
/* 801DFB28 001DCA68  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 801DFB2C 001DCA6C  7F C4 F3 78 */	mr r4, r30
/* 801DFB30 001DCA70  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFB34 001DCA74  38 7E 00 84 */	addi r3, r30, 0x84
/* 801DFB38 001DCA78  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 801DFB3C 001DCA7C  38 A5 30 33 */	addi r5, r5, 0x73303033@l
/* 801DFB40 001DCA80  C0 02 B4 A4 */	lfs f0, lbl_80519804@sda21(r2)
/* 801DFB44 001DCA84  38 C2 B5 28 */	addi r6, r2, lbl_80519888@sda21
/* 801DFB48 001DCA88  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 801DFB4C 001DCA8C  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 801DFB50 001DCA90  48 23 3B 09 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFB54 001DCA94  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFB58 001DCA98  3C A0 73 30 */	lis r5, 0x73303034@ha
/* 801DFB5C 001DCA9C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFB60 001DCAA0  C0 02 B4 D4 */	lfs f0, lbl_80519834@sda21(r2)
/* 801DFB64 001DCAA4  90 1E 00 84 */	stw r0, 0x84(r30)
/* 801DFB68 001DCAA8  7F C4 F3 78 */	mr r4, r30
/* 801DFB6C 001DCAAC  C0 22 B5 30 */	lfs f1, lbl_80519890@sda21(r2)
/* 801DFB70 001DCAB0  38 7E 00 AC */	addi r3, r30, 0xac
/* 801DFB74 001DCAB4  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 801DFB78 001DCAB8  38 A5 30 34 */	addi r5, r5, 0x73303034@l
/* 801DFB7C 001DCABC  C0 02 B5 34 */	lfs f0, lbl_80519894@sda21(r2)
/* 801DFB80 001DCAC0  38 DF 00 F8 */	addi r6, r31, 0xf8
/* 801DFB84 001DCAC4  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 801DFB88 001DCAC8  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 801DFB8C 001DCACC  48 23 3A CD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFB90 001DCAD0  3C 80 80 4B */	lis r4, "__vt__7Parm<f>"@ha
/* 801DFB94 001DCAD4  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant10PlantParms@ha
/* 801DFB98 001DCAD8  38 04 AC BC */	addi r0, r4, "__vt__7Parm<f>"@l
/* 801DFB9C 001DCADC  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801DFBA0 001DCAE0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 801DFBA4 001DCAE4  39 23 90 EC */	addi r9, r3, __vt__Q34Game9ItemPlant10PlantParms@l
/* 801DFBA8 001DCAE8  C0 02 B5 38 */	lfs f0, lbl_80519898@sda21(r2)
/* 801DFBAC 001DCAEC  39 1E 01 D8 */	addi r8, r30, 0x1d8
/* 801DFBB0 001DCAF0  C0 22 B5 30 */	lfs f1, lbl_80519890@sda21(r2)
/* 801DFBB4 001DCAF4  38 E0 00 00 */	li r7, 0
/* 801DFBB8 001DCAF8  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 801DFBBC 001DCAFC  38 1F 01 08 */	addi r0, r31, 0x108
/* 801DFBC0 001DCB00  C0 02 B5 34 */	lfs f0, lbl_80519894@sda21(r2)
/* 801DFBC4 001DCB04  38 7E 00 E8 */	addi r3, r30, 0xe8
/* 801DFBC8 001DCB08  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 801DFBCC 001DCB0C  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFBD0 001DCB10  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801DFBD4 001DCB14  38 DF 01 18 */	addi r6, r31, 0x118
/* 801DFBD8 001DCB18  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 801DFBDC 001DCB1C  91 3E 00 D8 */	stw r9, 0xd8(r30)
/* 801DFBE0 001DCB20  91 1E 00 DC */	stw r8, 0xdc(r30)
/* 801DFBE4 001DCB24  90 FE 00 E0 */	stw r7, 0xe0(r30)
/* 801DFBE8 001DCB28  90 1E 00 E4 */	stw r0, 0xe4(r30)
/* 801DFBEC 001DCB2C  48 23 3A 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFBF0 001DCB30  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFBF4 001DCB34  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 801DFBF8 001DCB38  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFBFC 001DCB3C  C0 02 B4 EC */	lfs f0, lbl_8051984C@sda21(r2)
/* 801DFC00 001DCB40  90 1E 00 E8 */	stw r0, 0xe8(r30)
/* 801DFC04 001DCB44  38 7E 01 10 */	addi r3, r30, 0x110
/* 801DFC08 001DCB48  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFC0C 001DCB4C  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFC10 001DCB50  D0 1E 01 00 */	stfs f0, 0x100(r30)
/* 801DFC14 001DCB54  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 801DFC18 001DCB58  C0 02 B5 3C */	lfs f0, lbl_8051989C@sda21(r2)
/* 801DFC1C 001DCB5C  38 DF 01 2C */	addi r6, r31, 0x12c
/* 801DFC20 001DCB60  D0 3E 01 08 */	stfs f1, 0x108(r30)
/* 801DFC24 001DCB64  D0 1E 01 0C */	stfs f0, 0x10c(r30)
/* 801DFC28 001DCB68  48 23 3A 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFC2C 001DCB6C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFC30 001DCB70  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 801DFC34 001DCB74  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFC38 001DCB78  C0 02 B4 EC */	lfs f0, lbl_8051984C@sda21(r2)
/* 801DFC3C 001DCB7C  90 1E 01 10 */	stw r0, 0x110(r30)
/* 801DFC40 001DCB80  38 7E 01 38 */	addi r3, r30, 0x138
/* 801DFC44 001DCB84  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFC48 001DCB88  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFC4C 001DCB8C  D0 1E 01 28 */	stfs f0, 0x128(r30)
/* 801DFC50 001DCB90  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 801DFC54 001DCB94  C0 02 B5 3C */	lfs f0, lbl_8051989C@sda21(r2)
/* 801DFC58 001DCB98  38 DF 01 40 */	addi r6, r31, 0x140
/* 801DFC5C 001DCB9C  D0 3E 01 30 */	stfs f1, 0x130(r30)
/* 801DFC60 001DCBA0  D0 1E 01 34 */	stfs f0, 0x134(r30)
/* 801DFC64 001DCBA4  48 23 39 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFC68 001DCBA8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFC6C 001DCBAC  3C A0 70 30 */	lis r5, 0x70303033@ha
/* 801DFC70 001DCBB0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFC74 001DCBB4  C0 02 B5 40 */	lfs f0, lbl_805198A0@sda21(r2)
/* 801DFC78 001DCBB8  90 1E 01 38 */	stw r0, 0x138(r30)
/* 801DFC7C 001DCBBC  38 7E 01 60 */	addi r3, r30, 0x160
/* 801DFC80 001DCBC0  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFC84 001DCBC4  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFC88 001DCBC8  D0 1E 01 50 */	stfs f0, 0x150(r30)
/* 801DFC8C 001DCBCC  38 A5 30 33 */	addi r5, r5, 0x70303033@l
/* 801DFC90 001DCBD0  C0 02 B5 44 */	lfs f0, lbl_805198A4@sda21(r2)
/* 801DFC94 001DCBD4  38 DF 01 58 */	addi r6, r31, 0x158
/* 801DFC98 001DCBD8  D0 3E 01 58 */	stfs f1, 0x158(r30)
/* 801DFC9C 001DCBDC  D0 1E 01 5C */	stfs f0, 0x15c(r30)
/* 801DFCA0 001DCBE0  48 23 39 B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFCA4 001DCBE4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFCA8 001DCBE8  3C A0 70 30 */	lis r5, 0x70303034@ha
/* 801DFCAC 001DCBEC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFCB0 001DCBF0  C0 02 B4 EC */	lfs f0, lbl_8051984C@sda21(r2)
/* 801DFCB4 001DCBF4  90 1E 01 60 */	stw r0, 0x160(r30)
/* 801DFCB8 001DCBF8  38 7E 01 88 */	addi r3, r30, 0x188
/* 801DFCBC 001DCBFC  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFCC0 001DCC00  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFCC4 001DCC04  D0 1E 01 78 */	stfs f0, 0x178(r30)
/* 801DFCC8 001DCC08  38 A5 30 34 */	addi r5, r5, 0x70303034@l
/* 801DFCCC 001DCC0C  C0 02 B5 3C */	lfs f0, lbl_8051989C@sda21(r2)
/* 801DFCD0 001DCC10  38 DF 01 70 */	addi r6, r31, 0x170
/* 801DFCD4 001DCC14  D0 3E 01 80 */	stfs f1, 0x180(r30)
/* 801DFCD8 001DCC18  D0 1E 01 84 */	stfs f0, 0x184(r30)
/* 801DFCDC 001DCC1C  48 23 39 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFCE0 001DCC20  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFCE4 001DCC24  3C A0 70 30 */	lis r5, 0x70303035@ha
/* 801DFCE8 001DCC28  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFCEC 001DCC2C  C0 02 B4 E4 */	lfs f0, lbl_80519844@sda21(r2)
/* 801DFCF0 001DCC30  90 1E 01 88 */	stw r0, 0x188(r30)
/* 801DFCF4 001DCC34  38 7E 01 B0 */	addi r3, r30, 0x1b0
/* 801DFCF8 001DCC38  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFCFC 001DCC3C  38 9E 00 DC */	addi r4, r30, 0xdc
/* 801DFD00 001DCC40  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 801DFD04 001DCC44  38 A5 30 35 */	addi r5, r5, 0x70303035@l
/* 801DFD08 001DCC48  C0 02 B5 3C */	lfs f0, lbl_8051989C@sda21(r2)
/* 801DFD0C 001DCC4C  38 DF 01 7C */	addi r6, r31, 0x17c
/* 801DFD10 001DCC50  D0 3E 01 A8 */	stfs f1, 0x1a8(r30)
/* 801DFD14 001DCC54  D0 1E 01 AC */	stfs f0, 0x1ac(r30)
/* 801DFD18 001DCC58  48 23 39 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801DFD1C 001DCC5C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801DFD20 001DCC60  C0 42 B5 48 */	lfs f2, lbl_805198A8@sda21(r2)
/* 801DFD24 001DCC64  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801DFD28 001DCC68  C0 22 B4 A0 */	lfs f1, lbl_80519800@sda21(r2)
/* 801DFD2C 001DCC6C  90 1E 01 B0 */	stw r0, 0x1b0(r30)
/* 801DFD30 001DCC70  7F C3 F3 78 */	mr r3, r30
/* 801DFD34 001DCC74  C0 02 B5 4C */	lfs f0, lbl_805198AC@sda21(r2)
/* 801DFD38 001DCC78  D0 5E 01 C8 */	stfs f2, 0x1c8(r30)
/* 801DFD3C 001DCC7C  D0 3E 01 D0 */	stfs f1, 0x1d0(r30)
/* 801DFD40 001DCC80  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801DFD44 001DCC84  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DFD48 001DCC88  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DFD4C 001DCC8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DFD50 001DCC90  7C 08 03 A6 */	mtlr r0
/* 801DFD54 001DCC94  38 21 00 10 */	addi r1, r1, 0x10
/* 801DFD58 001DCC98  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9ItemPlant10PlantParmsFv

.fn birth__Q34Game9ItemPlant3MgrFv, global
/* 801DFD5C 001DCC9C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DFD60 001DCCA0  7C 08 02 A6 */	mflr r0
/* 801DFD64 001DCCA4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DFD68 001DCCA8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801DFD6C 001DCCAC  93 C1 00 08 */	stw r30, 8(r1)
/* 801DFD70 001DCCB0  7C 7E 1B 78 */	mr r30, r3
/* 801DFD74 001DCCB4  38 60 02 8C */	li r3, 0x28c
/* 801DFD78 001DCCB8  4B E4 41 2D */	bl __nw__FUl
/* 801DFD7C 001DCCBC  7C 7F 1B 79 */	or. r31, r3, r3
/* 801DFD80 001DCCC0  41 82 00 E4 */	beq .L_801DFE64
/* 801DFD84 001DCCC4  38 80 04 08 */	li r4, 0x408
/* 801DFD88 001DCCC8  4B FE C2 61 */	bl __ct__Q24Game8BaseItemFi
/* 801DFD8C 001DCCCC  3C 60 80 4C */	lis r3, "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@ha
/* 801DFD90 001DCCD0  38 00 00 00 */	li r0, 0
/* 801DFD94 001DCCD4  38 83 95 E8 */	addi r4, r3, "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@l
/* 801DFD98 001DCCD8  38 60 00 1C */	li r3, 0x1c
/* 801DFD9C 001DCCDC  90 9F 00 00 */	stw r4, 0(r31)
/* 801DFDA0 001DCCE0  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801DFDA4 001DCCE4  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801DFDA8 001DCCE8  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801DFDAC 001DCCEC  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801DFDB0 001DCCF0  4B E4 40 F5 */	bl __nw__FUl
/* 801DFDB4 001DCCF4  28 03 00 00 */	cmplwi r3, 0
/* 801DFDB8 001DCCF8  41 82 00 30 */	beq .L_801DFDE8
/* 801DFDBC 001DCCFC  3C 80 80 4C */	lis r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@ha
/* 801DFDC0 001DCD00  3C A0 80 4C */	lis r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@ha
/* 801DFDC4 001DCD04  38 04 95 D0 */	addi r0, r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@l
/* 801DFDC8 001DCD08  3C 80 80 4C */	lis r4, __vt__Q34Game9ItemPlant3FSM@ha
/* 801DFDCC 001DCD0C  90 03 00 00 */	stw r0, 0(r3)
/* 801DFDD0 001DCD10  38 C0 FF FF */	li r6, -1
/* 801DFDD4 001DCD14  38 A5 95 B8 */	addi r5, r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@l
/* 801DFDD8 001DCD18  38 04 99 8C */	addi r0, r4, __vt__Q34Game9ItemPlant3FSM@l
/* 801DFDDC 001DCD1C  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801DFDE0 001DCD20  90 A3 00 00 */	stw r5, 0(r3)
/* 801DFDE4 001DCD24  90 03 00 00 */	stw r0, 0(r3)
.L_801DFDE8:
/* 801DFDE8 001DCD28  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801DFDEC 001DCD2C  7F E4 FB 78 */	mr r4, r31
/* 801DFDF0 001DCD30  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801DFDF4 001DCD34  81 83 00 00 */	lwz r12, 0(r3)
/* 801DFDF8 001DCD38  81 8C 00 08 */	lwz r12, 8(r12)
/* 801DFDFC 001DCD3C  7D 89 03 A6 */	mtctr r12
/* 801DFE00 001DCD40  4E 80 04 21 */	bctrl 
/* 801DFE04 001DCD44  3C 80 80 4C */	lis r4, __vt__Q34Game9ItemPlant4Item@ha
/* 801DFE08 001DCD48  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant5Plant@ha
/* 801DFE0C 001DCD4C  38 84 93 6C */	addi r4, r4, __vt__Q34Game9ItemPlant4Item@l
/* 801DFE10 001DCD50  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DFE14 001DCD54  90 9F 00 00 */	stw r4, 0(r31)
/* 801DFE18 001DCD58  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801DFE1C 001DCD5C  38 83 91 20 */	addi r4, r3, __vt__Q34Game9ItemPlant5Plant@l
/* 801DFE20 001DCD60  38 A0 00 00 */	li r5, 0
/* 801DFE24 001DCD64  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801DFE28 001DCD68  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801DFE2C 001DCD6C  38 7F 02 04 */	addi r3, r31, 0x204
/* 801DFE30 001DCD70  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801DFE34 001DCD74  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801DFE38 001DCD78  90 BF 01 F4 */	stw r5, 0x1f4(r31)
/* 801DFE3C 001DCD7C  90 9F 00 00 */	stw r4, 0(r31)
/* 801DFE40 001DCD80  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801DFE44 001DCD84  48 24 93 E1 */	bl __ct__Q28SysShape13BlendAnimatorFv
/* 801DFE48 001DCD88  38 00 00 00 */	li r0, 0
/* 801DFE4C 001DCD8C  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801DFE50 001DCD90  90 1F 02 7C */	stw r0, 0x27c(r31)
/* 801DFE54 001DCD94  90 1F 02 68 */	stw r0, 0x268(r31)
/* 801DFE58 001DCD98  D0 1F 02 80 */	stfs f0, 0x280(r31)
/* 801DFE5C 001DCD9C  D0 1F 02 84 */	stfs f0, 0x284(r31)
/* 801DFE60 001DCDA0  D0 1F 01 18 */	stfs f0, 0x118(r31)
.L_801DFE64:
/* 801DFE64 001DCDA4  7F C3 F3 78 */	mr r3, r30
/* 801DFE68 001DCDA8  7F E4 FB 78 */	mr r4, r31
/* 801DFE6C 001DCDAC  4B FE D9 BD */	bl entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
/* 801DFE70 001DCDB0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DFE74 001DCDB4  7F E3 FB 78 */	mr r3, r31
/* 801DFE78 001DCDB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801DFE7C 001DCDBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801DFE80 001DCDC0  7C 08 03 A6 */	mtlr r0
/* 801DFE84 001DCDC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801DFE88 001DCDC8  4E 80 00 20 */	blr 
.endfn birth__Q34Game9ItemPlant3MgrFv

.fn onLoadResources__Q34Game9ItemPlant3MgrFv, global
/* 801DFE8C 001DCDCC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801DFE90 001DCDD0  7C 08 02 A6 */	mflr r0
/* 801DFE94 001DCDD4  3C 80 80 48 */	lis r4, lbl_804808F0@ha
/* 801DFE98 001DCDD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801DFE9C 001DCDDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801DFEA0 001DCDE0  3B E4 08 F0 */	addi r31, r4, lbl_804808F0@l
/* 801DFEA4 001DCDE4  38 82 B5 50 */	addi r4, r2, lbl_805198B0@sda21
/* 801DFEA8 001DCDE8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801DFEAC 001DCDEC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801DFEB0 001DCDF0  7C 7D 1B 78 */	mr r29, r3
/* 801DFEB4 001DCDF4  4B FE D0 21 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801DFEB8 001DCDF8  7F A3 EB 78 */	mr r3, r29
/* 801DFEBC 001DCDFC  38 9F 01 8C */	addi r4, r31, 0x18c
/* 801DFEC0 001DCE00  38 A0 00 00 */	li r5, 0
/* 801DFEC4 001DCE04  3C C0 20 02 */	lis r6, 0x2002
/* 801DFEC8 001DCE08  4B FE D0 89 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801DFECC 001DCE0C  38 7F 01 98 */	addi r3, r31, 0x198
/* 801DFED0 001DCE10  38 80 00 00 */	li r4, 0
/* 801DFED4 001DCE14  4B E4 31 45 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801DFED8 001DCE18  4B E9 26 C9 */	bl load__20J3DAnmLoaderDataBaseFPCv
/* 801DFEDC 001DCE1C  90 7D 00 88 */	stw r3, 0x88(r29)
/* 801DFEE0 001DCE20  7F A3 EB 78 */	mr r3, r29
/* 801DFEE4 001DCE24  38 9F 01 A4 */	addi r4, r31, 0x1a4
/* 801DFEE8 001DCE28  4B FE D2 E5 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801DFEEC 001DCE2C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801DFEF0 001DCE30  40 82 00 18 */	bne .L_801DFF08
/* 801DFEF4 001DCE34  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DFEF8 001DCE38  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DFEFC 001DCE3C  38 80 05 31 */	li r4, 0x531
/* 801DFF00 001DCE40  4C C6 31 82 */	crclr 6
/* 801DFF04 001DCE44  4B E4 A7 3D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DFF08:
/* 801DFF08 001DCE48  7F A3 EB 78 */	mr r3, r29
/* 801DFF0C 001DCE4C  7F C4 F3 78 */	mr r4, r30
/* 801DFF10 001DCE50  38 BF 01 B0 */	addi r5, r31, 0x1b0
/* 801DFF14 001DCE54  4B FE D0 E9 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801DFF18 001DCE58  7F A3 EB 78 */	mr r3, r29
/* 801DFF1C 001DCE5C  7F C4 F3 78 */	mr r4, r30
/* 801DFF20 001DCE60  4B FE D3 31 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801DFF24 001DCE64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801DFF28 001DCE68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801DFF2C 001DCE6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801DFF30 001DCE70  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801DFF34 001DCE74  7C 08 03 A6 */	mtlr r0
/* 801DFF38 001DCE78  38 21 00 20 */	addi r1, r1, 0x20
/* 801DFF3C 001DCE7C  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game9ItemPlant3MgrFv

.fn generatorNewItemParm__Q34Game9ItemPlant3MgrFv, global
/* 801DFF40 001DCE80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801DFF44 001DCE84  7C 08 02 A6 */	mflr r0
/* 801DFF48 001DCE88  38 60 00 08 */	li r3, 8
/* 801DFF4C 001DCE8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801DFF50 001DCE90  4B E4 3F 55 */	bl __nw__FUl
/* 801DFF54 001DCE94  28 03 00 00 */	cmplwi r3, 0
/* 801DFF58 001DCE98  41 82 00 24 */	beq .L_801DFF7C
/* 801DFF5C 001DCE9C  3C A0 80 4B */	lis r5, __vt__Q24Game11GenItemParm@ha
/* 801DFF60 001DCEA0  3C 80 80 4C */	lis r4, __vt__12GenPlantParm@ha
/* 801DFF64 001DCEA4  38 A5 26 24 */	addi r5, r5, __vt__Q24Game11GenItemParm@l
/* 801DFF68 001DCEA8  38 00 00 02 */	li r0, 2
/* 801DFF6C 001DCEAC  90 A3 00 00 */	stw r5, 0(r3)
/* 801DFF70 001DCEB0  38 84 90 20 */	addi r4, r4, __vt__12GenPlantParm@l
/* 801DFF74 001DCEB4  90 83 00 00 */	stw r4, 0(r3)
/* 801DFF78 001DCEB8  B0 03 00 04 */	sth r0, 4(r3)
.L_801DFF7C:
/* 801DFF7C 001DCEBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801DFF80 001DCEC0  7C 08 03 A6 */	mtlr r0
/* 801DFF84 001DCEC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801DFF88 001DCEC8  4E 80 00 20 */	blr 
.endfn generatorNewItemParm__Q34Game9ItemPlant3MgrFv

.fn generatorWrite__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParm, global
/* 801DFF8C 001DCECC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801DFF90 001DCED0  7C 08 02 A6 */	mflr r0
/* 801DFF94 001DCED4  3C 60 80 48 */	lis r3, lbl_804808F0@ha
/* 801DFF98 001DCED8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801DFF9C 001DCEDC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801DFFA0 001DCEE0  3B E3 08 F0 */	addi r31, r3, lbl_804808F0@l
/* 801DFFA4 001DCEE4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801DFFA8 001DCEE8  7C BE 2B 79 */	or. r30, r5, r5
/* 801DFFAC 001DCEEC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801DFFB0 001DCEF0  7C 9D 23 78 */	mr r29, r4
/* 801DFFB4 001DCEF4  40 82 00 18 */	bne .L_801DFFCC
/* 801DFFB8 001DCEF8  38 7F 00 0C */	addi r3, r31, 0xc
/* 801DFFBC 001DCEFC  38 BF 00 1C */	addi r5, r31, 0x1c
/* 801DFFC0 001DCF00  38 80 05 A8 */	li r4, 0x5a8
/* 801DFFC4 001DCF04  4C C6 31 82 */	crclr 6
/* 801DFFC8 001DCF08  4B E4 A6 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801DFFCC:
/* 801DFFCC 001DCF0C  80 9D 04 14 */	lwz r4, 0x414(r29)
/* 801DFFD0 001DCF10  7F A3 EB 78 */	mr r3, r29
/* 801DFFD4 001DCF14  48 23 44 61 */	bl textWriteTab__6StreamFi
/* 801DFFD8 001DCF18  A0 1E 00 04 */	lhz r0, 4(r30)
/* 801DFFDC 001DCF1C  7F A3 EB 78 */	mr r3, r29
/* 801DFFE0 001DCF20  7C 04 07 34 */	extsh r4, r0
/* 801DFFE4 001DCF24  48 23 57 4D */	bl writeShort__6StreamFs
/* 801DFFE8 001DCF28  7F A3 EB 78 */	mr r3, r29
/* 801DFFEC 001DCF2C  38 9F 01 C4 */	addi r4, r31, 0x1c4
/* 801DFFF0 001DCF30  4C C6 31 82 */	crclr 6
/* 801DFFF4 001DCF34  48 23 41 E9 */	bl textWriteText__6StreamFPce
/* 801DFFF8 001DCF38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801DFFFC 001DCF3C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E0000 001DCF40  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E0004 001DCF44  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E0008 001DCF48  7C 08 03 A6 */	mtlr r0
/* 801E000C 001DCF4C  38 21 00 20 */	addi r1, r1, 0x20
/* 801E0010 001DCF50  4E 80 00 20 */	blr 
.endfn generatorWrite__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParm

.fn generatorRead__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParmUl, global
/* 801E0014 001DCF54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E0018 001DCF58  7C 08 02 A6 */	mflr r0
/* 801E001C 001DCF5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E0020 001DCF60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E0024 001DCF64  7C DF 33 78 */	mr r31, r6
/* 801E0028 001DCF68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E002C 001DCF6C  7C BE 2B 79 */	or. r30, r5, r5
/* 801E0030 001DCF70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E0034 001DCF74  7C 9D 23 78 */	mr r29, r4
/* 801E0038 001DCF78  40 82 00 20 */	bne .L_801E0058
/* 801E003C 001DCF7C  3C 60 80 48 */	lis r3, lbl_804808FC@ha
/* 801E0040 001DCF80  3C A0 80 48 */	lis r5, lbl_8048090C@ha
/* 801E0044 001DCF84  38 63 08 FC */	addi r3, r3, lbl_804808FC@l
/* 801E0048 001DCF88  38 80 05 B2 */	li r4, 0x5b2
/* 801E004C 001DCF8C  38 A5 09 0C */	addi r5, r5, lbl_8048090C@l
/* 801E0050 001DCF90  4C C6 31 82 */	crclr 6
/* 801E0054 001DCF94  4B E4 A5 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_801E0058:
/* 801E0058 001DCF98  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801E005C 001DCF9C  38 03 30 31 */	addi r0, r3, 0x30303031@l
/* 801E0060 001DCFA0  7C 1F 00 40 */	cmplw r31, r0
/* 801E0064 001DCFA4  41 80 00 14 */	blt .L_801E0078
/* 801E0068 001DCFA8  7F A3 EB 78 */	mr r3, r29
/* 801E006C 001DCFAC  48 23 46 F9 */	bl readShort__6StreamFv
/* 801E0070 001DCFB0  B0 7E 00 04 */	sth r3, 4(r30)
/* 801E0074 001DCFB4  48 00 00 0C */	b .L_801E0080
.L_801E0078:
/* 801E0078 001DCFB8  38 00 00 00 */	li r0, 0
/* 801E007C 001DCFBC  B0 1E 00 04 */	sth r0, 4(r30)
.L_801E0080:
/* 801E0080 001DCFC0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E0084 001DCFC4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E0088 001DCFC8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E008C 001DCFCC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E0090 001DCFD0  7C 08 03 A6 */	mtlr r0
/* 801E0094 001DCFD4  38 21 00 20 */	addi r1, r1, 0x20
/* 801E0098 001DCFD8  4E 80 00 20 */	blr 
.endfn generatorRead__Q34Game9ItemPlant3MgrFR6StreamPQ24Game11GenItemParmUl

.fn "generatorBirth__Q34Game9ItemPlant3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801E009C 001DCFDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E00A0 001DCFE0  7C 08 02 A6 */	mflr r0
/* 801E00A4 001DCFE4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E00A8 001DCFE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E00AC 001DCFEC  7C DF 33 79 */	or. r31, r6, r6
/* 801E00B0 001DCFF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E00B4 001DCFF4  7C BE 2B 78 */	mr r30, r5
/* 801E00B8 001DCFF8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E00BC 001DCFFC  7C 9D 23 78 */	mr r29, r4
/* 801E00C0 001DD000  93 81 00 10 */	stw r28, 0x10(r1)
/* 801E00C4 001DD004  7C 7C 1B 78 */	mr r28, r3
/* 801E00C8 001DD008  40 82 00 20 */	bne .L_801E00E8
/* 801E00CC 001DD00C  3C 60 80 48 */	lis r3, lbl_804808FC@ha
/* 801E00D0 001DD010  3C A0 80 48 */	lis r5, lbl_8048090C@ha
/* 801E00D4 001DD014  38 63 08 FC */	addi r3, r3, lbl_804808FC@l
/* 801E00D8 001DD018  38 80 05 BD */	li r4, 0x5bd
/* 801E00DC 001DD01C  38 A5 09 0C */	addi r5, r5, lbl_8048090C@l
/* 801E00E0 001DD020  4C C6 31 82 */	crclr 6
/* 801E00E4 001DD024  4B E4 A5 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801E00E8:
/* 801E00E8 001DD028  7F 83 E3 78 */	mr r3, r28
/* 801E00EC 001DD02C  81 9C 00 00 */	lwz r12, 0(r28)
/* 801E00F0 001DD030  81 8C 00 BC */	lwz r12, 0xbc(r12)
/* 801E00F4 001DD034  7D 89 03 A6 */	mtctr r12
/* 801E00F8 001DD038  4E 80 04 21 */	bctrl 
/* 801E00FC 001DD03C  A0 1F 00 04 */	lhz r0, 4(r31)
/* 801E0100 001DD040  7C 7F 1B 78 */	mr r31, r3
/* 801E0104 001DD044  38 80 00 00 */	li r4, 0
/* 801E0108 001DD048  B0 03 01 E0 */	sth r0, 0x1e0(r3)
/* 801E010C 001DD04C  4B F5 AE BD */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801E0110 001DD050  C0 3E 00 04 */	lfs f1, 4(r30)
/* 801E0114 001DD054  48 23 1A BD */	bl roundAng__Ff
/* 801E0118 001DD058  D0 3F 02 00 */	stfs f1, 0x200(r31)
/* 801E011C 001DD05C  7F E3 FB 78 */	mr r3, r31
/* 801E0120 001DD060  7F A4 EB 78 */	mr r4, r29
/* 801E0124 001DD064  38 A0 00 00 */	li r5, 0
/* 801E0128 001DD068  4B F5 B0 81 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801E012C 001DD06C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E0130 001DD070  7F E3 FB 78 */	mr r3, r31
/* 801E0134 001DD074  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E0138 001DD078  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E013C 001DD07C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E0140 001DD080  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801E0144 001DD084  7C 08 03 A6 */	mtlr r0
/* 801E0148 001DD088  38 21 00 20 */	addi r1, r1, 0x20
/* 801E014C 001DD08C  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game9ItemPlant3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn init__Q34Game9ItemPlant6FruitsFiP7Matrixf, global
/* 801E0150 001DD090  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E0154 001DD094  7C 08 02 A6 */	mflr r0
/* 801E0158 001DD098  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E015C 001DD09C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E0160 001DD0A0  7C 9F 23 78 */	mr r31, r4
/* 801E0164 001DD0A4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E0168 001DD0A8  7C BE 2B 78 */	mr r30, r5
/* 801E016C 001DD0AC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E0170 001DD0B0  7C 7D 1B 78 */	mr r29, r3
/* 801E0174 001DD0B4  1C 7F 00 4C */	mulli r3, r31, 0x4c
/* 801E0178 001DD0B8  38 63 00 10 */	addi r3, r3, 0x10
/* 801E017C 001DD0BC  4B E4 3E 31 */	bl __nwa__FUl
/* 801E0180 001DD0C0  3C 80 80 1E */	lis r4, __ct__Q34Game9ItemPlant9FruitSlotFv@ha
/* 801E0184 001DD0C4  3C A0 80 1E */	lis r5, __dt__Q34Game9ItemPlant9FruitSlotFv@ha
/* 801E0188 001DD0C8  38 84 07 2C */	addi r4, r4, __ct__Q34Game9ItemPlant9FruitSlotFv@l
/* 801E018C 001DD0CC  7F E7 FB 78 */	mr r7, r31
/* 801E0190 001DD0D0  38 A5 01 C4 */	addi r5, r5, __dt__Q34Game9ItemPlant9FruitSlotFv@l
/* 801E0194 001DD0D4  38 C0 00 4C */	li r6, 0x4c
/* 801E0198 001DD0D8  4B EE 18 59 */	bl __construct_new_array
/* 801E019C 001DD0DC  90 7D 00 00 */	stw r3, 0(r29)
/* 801E01A0 001DD0E0  93 FD 00 04 */	stw r31, 4(r29)
/* 801E01A4 001DD0E4  93 DD 00 08 */	stw r30, 8(r29)
/* 801E01A8 001DD0E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E01AC 001DD0EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E01B0 001DD0F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E01B4 001DD0F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E01B8 001DD0F8  7C 08 03 A6 */	mtlr r0
/* 801E01BC 001DD0FC  38 21 00 20 */	addi r1, r1, 0x20
/* 801E01C0 001DD100  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemPlant6FruitsFiP7Matrixf

.fn __dt__Q34Game9ItemPlant9FruitSlotFv, weak
/* 801E01C4 001DD104  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E01C8 001DD108  7C 08 02 A6 */	mflr r0
/* 801E01CC 001DD10C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E01D0 001DD110  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E01D4 001DD114  7C 9F 23 78 */	mr r31, r4
/* 801E01D8 001DD118  93 C1 00 08 */	stw r30, 8(r1)
/* 801E01DC 001DD11C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E01E0 001DD120  41 82 00 28 */	beq .L_801E0208
/* 801E01E4 001DD124  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemPlant9FruitSlot@ha
/* 801E01E8 001DD128  38 80 00 00 */	li r4, 0
/* 801E01EC 001DD12C  38 05 90 10 */	addi r0, r5, __vt__Q34Game9ItemPlant9FruitSlot@l
/* 801E01F0 001DD130  90 1E 00 00 */	stw r0, 0(r30)
/* 801E01F4 001DD134  48 23 13 95 */	bl __dt__5CNodeFv
/* 801E01F8 001DD138  7F E0 07 35 */	extsh. r0, r31
/* 801E01FC 001DD13C  40 81 00 0C */	ble .L_801E0208
/* 801E0200 001DD140  7F C3 F3 78 */	mr r3, r30
/* 801E0204 001DD144  4B E4 3E B1 */	bl __dl__FPv
.L_801E0208:
/* 801E0208 001DD148  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E020C 001DD14C  7F C3 F3 78 */	mr r3, r30
/* 801E0210 001DD150  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0214 001DD154  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E0218 001DD158  7C 08 03 A6 */	mtlr r0
/* 801E021C 001DD15C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0220 001DD160  4E 80 00 20 */	blr 
.endfn __dt__Q34Game9ItemPlant9FruitSlotFv

.fn update__Q34Game9ItemPlant6FruitsFv, global
/* 801E0224 001DD164  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E0228 001DD168  7C 08 02 A6 */	mflr r0
/* 801E022C 001DD16C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E0230 001DD170  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E0234 001DD174  3B E0 00 00 */	li r31, 0
/* 801E0238 001DD178  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E023C 001DD17C  3B C0 00 00 */	li r30, 0
/* 801E0240 001DD180  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E0244 001DD184  7C 7D 1B 78 */	mr r29, r3
/* 801E0248 001DD188  48 00 00 18 */	b .L_801E0260
.L_801E024C:
/* 801E024C 001DD18C  80 1D 00 00 */	lwz r0, 0(r29)
/* 801E0250 001DD190  7C 60 FA 14 */	add r3, r0, r31
/* 801E0254 001DD194  48 00 05 F9 */	bl update__Q34Game9ItemPlant9FruitSlotFv
/* 801E0258 001DD198  3B FF 00 4C */	addi r31, r31, 0x4c
/* 801E025C 001DD19C  3B DE 00 01 */	addi r30, r30, 1
.L_801E0260:
/* 801E0260 001DD1A0  80 1D 00 04 */	lwz r0, 4(r29)
/* 801E0264 001DD1A4  7C 1E 00 00 */	cmpw r30, r0
/* 801E0268 001DD1A8  41 80 FF E4 */	blt .L_801E024C
/* 801E026C 001DD1AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E0270 001DD1B0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E0274 001DD1B4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E0278 001DD1B8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E027C 001DD1BC  7C 08 03 A6 */	mtlr r0
/* 801E0280 001DD1C0  38 21 00 20 */	addi r1, r1, 0x20
/* 801E0284 001DD1C4  4E 80 00 20 */	blr 
.endfn update__Q34Game9ItemPlant6FruitsFv

.fn bearAll__Q34Game9ItemPlant6FruitsFUs, global
/* 801E0288 001DD1C8  94 21 FE C0 */	stwu r1, -0x140(r1)
/* 801E028C 001DD1CC  7C 08 02 A6 */	mflr r0
/* 801E0290 001DD1D0  90 01 01 44 */	stw r0, 0x144(r1)
/* 801E0294 001DD1D4  DB E1 01 30 */	stfd f31, 0x130(r1)
/* 801E0298 001DD1D8  F3 E1 01 38 */	psq_st f31, 312(r1), 0, qr0
/* 801E029C 001DD1DC  BE 41 00 F8 */	stmw r18, 0xf8(r1)
/* 801E02A0 001DD1E0  3C A0 80 48 */	lis r5, lbl_804808F0@ha
/* 801E02A4 001DD1E4  7C 78 1B 78 */	mr r24, r3
/* 801E02A8 001DD1E8  3B E5 08 F0 */	addi r31, r5, lbl_804808F0@l
/* 801E02AC 001DD1EC  3B A1 00 50 */	addi r29, r1, 0x50
/* 801E02B0 001DD1F0  54 9C 04 3E */	clrlwi r28, r4, 0x10
/* 801E02B4 001DD1F4  3B 60 00 00 */	li r27, 0
/* 801E02B8 001DD1F8  3B C0 00 00 */	li r30, 0
/* 801E02BC 001DD1FC  48 00 02 58 */	b .L_801E0514
.L_801E02C0:
/* 801E02C0 001DD200  80 18 00 00 */	lwz r0, 0(r24)
/* 801E02C4 001DD204  7F 40 F2 14 */	add r26, r0, r30
/* 801E02C8 001DD208  80 1A 00 18 */	lwz r0, 0x18(r26)
/* 801E02CC 001DD20C  28 00 00 00 */	cmplwi r0, 0
/* 801E02D0 001DD210  40 82 02 38 */	bne .L_801E0508
/* 801E02D4 001DD214  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 801E02D8 001DD218  38 C0 00 00 */	li r6, 0
/* 801E02DC 001DD21C  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 801E02E0 001DD220  38 60 FF FF */	li r3, -1
/* 801E02E4 001DD224  3C 80 80 4B */	lis r4, __vt__Q24Game13PelletInitArg@ha
/* 801E02E8 001DD228  90 01 00 BC */	stw r0, 0xbc(r1)
/* 801E02EC 001DD22C  38 E4 A2 B8 */	addi r7, r4, __vt__Q24Game13PelletInitArg@l
/* 801E02F0 001DD230  38 A0 00 FF */	li r5, 0xff
/* 801E02F4 001DD234  38 80 00 01 */	li r4, 1
/* 801E02F8 001DD238  38 02 B5 58 */	addi r0, r2, lbl_805198B8@sda21
/* 801E02FC 001DD23C  2C 1C 00 01 */	cmpwi r28, 1
/* 801E0300 001DD240  90 E1 00 BC */	stw r7, 0xbc(r1)
/* 801E0304 001DD244  98 C1 00 D8 */	stb r6, 0xd8(r1)
/* 801E0308 001DD248  B0 C1 00 D0 */	sth r6, 0xd0(r1)
/* 801E030C 001DD24C  98 A1 00 D2 */	stb r5, 0xd2(r1)
/* 801E0310 001DD250  90 C1 00 D4 */	stw r6, 0xd4(r1)
/* 801E0314 001DD254  98 C1 00 D3 */	stb r6, 0xd3(r1)
/* 801E0318 001DD258  98 81 00 C0 */	stb r4, 0xc0(r1)
/* 801E031C 001DD25C  98 C1 00 D9 */	stb r6, 0xd9(r1)
/* 801E0320 001DD260  90 61 00 E0 */	stw r3, 0xe0(r1)
/* 801E0324 001DD264  90 61 00 DC */	stw r3, 0xdc(r1)
/* 801E0328 001DD268  98 C1 00 DA */	stb r6, 0xda(r1)
/* 801E032C 001DD26C  98 C1 00 DB */	stb r6, 0xdb(r1)
/* 801E0330 001DD270  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 801E0334 001DD274  41 82 00 28 */	beq .L_801E035C
/* 801E0338 001DD278  40 80 00 10 */	bge .L_801E0348
/* 801E033C 001DD27C  2C 1C 00 00 */	cmpwi r28, 0
/* 801E0340 001DD280  40 80 00 14 */	bge .L_801E0354
/* 801E0344 001DD284  48 00 00 68 */	b .L_801E03AC
.L_801E0348:
/* 801E0348 001DD288  2C 1C 00 03 */	cmpwi r28, 3
/* 801E034C 001DD28C  40 80 00 60 */	bge .L_801E03AC
/* 801E0350 001DD290  48 00 00 14 */	b .L_801E0364
.L_801E0354:
/* 801E0354 001DD294  90 C1 00 C8 */	stw r6, 0xc8(r1)
/* 801E0358 001DD298  48 00 00 54 */	b .L_801E03AC
.L_801E035C:
/* 801E035C 001DD29C  90 81 00 C8 */	stw r4, 0xc8(r1)
/* 801E0360 001DD2A0  48 00 00 4C */	b .L_801E03AC
.L_801E0364:
/* 801E0364 001DD2A4  4B EE 92 3D */	bl rand
/* 801E0368 001DD2A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801E036C 001DD2AC  3C 00 43 30 */	lis r0, 0x4330
/* 801E0370 001DD2B0  90 61 00 EC */	stw r3, 0xec(r1)
/* 801E0374 001DD2B4  C8 62 B4 F8 */	lfd f3, lbl_80519858@sda21(r2)
/* 801E0378 001DD2B8  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 801E037C 001DD2BC  C0 22 B5 10 */	lfs f1, lbl_80519870@sda21(r2)
/* 801E0380 001DD2C0  C8 41 00 E8 */	lfd f2, 0xe8(r1)
/* 801E0384 001DD2C4  C0 02 B5 60 */	lfs f0, lbl_805198C0@sda21(r2)
/* 801E0388 001DD2C8  EC 42 18 28 */	fsubs f2, f2, f3
/* 801E038C 001DD2CC  EC 22 08 24 */	fdivs f1, f2, f1
/* 801E0390 001DD2D0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801E0394 001DD2D4  40 81 00 10 */	ble .L_801E03A4
/* 801E0398 001DD2D8  38 00 00 01 */	li r0, 1
/* 801E039C 001DD2DC  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 801E03A0 001DD2E0  48 00 00 0C */	b .L_801E03AC
.L_801E03A4:
/* 801E03A4 001DD2E4  38 00 00 00 */	li r0, 0
/* 801E03A8 001DD2E8  90 01 00 C8 */	stw r0, 0xc8(r1)
.L_801E03AC:
/* 801E03AC 001DD2EC  38 60 00 00 */	li r3, 0
/* 801E03B0 001DD2F0  38 A0 00 01 */	li r5, 1
/* 801E03B4 001DD2F4  38 00 00 02 */	li r0, 2
/* 801E03B8 001DD2F8  90 61 00 CC */	stw r3, 0xcc(r1)
/* 801E03BC 001DD2FC  80 6D 93 20 */	lwz r3, pelletMgr__4Game@sda21(r13)
/* 801E03C0 001DD300  38 81 00 BC */	addi r4, r1, 0xbc
/* 801E03C4 001DD304  B0 A1 00 D0 */	sth r5, 0xd0(r1)
/* 801E03C8 001DD308  98 01 00 D2 */	stb r0, 0xd2(r1)
/* 801E03CC 001DD30C  4B F8 D0 F5 */	bl birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
/* 801E03D0 001DD310  7C 79 1B 79 */	or. r25, r3, r3
/* 801E03D4 001DD314  41 82 01 4C */	beq .L_801E0520
/* 801E03D8 001DD318  38 61 00 8C */	addi r3, r1, 0x8c
/* 801E03DC 001DD31C  4B F0 9E C5 */	bl PSMTXIdentity
/* 801E03E0 001DD320  82 5F 01 D4 */	lwz r18, 0x1d4(r31)
/* 801E03E4 001DD324  38 61 00 8C */	addi r3, r1, 0x8c
/* 801E03E8 001DD328  82 7F 01 D8 */	lwz r19, 0x1d8(r31)
/* 801E03EC 001DD32C  38 81 00 44 */	addi r4, r1, 0x44
/* 801E03F0 001DD330  82 9F 01 DC */	lwz r20, 0x1dc(r31)
/* 801E03F4 001DD334  82 BF 01 E0 */	lwz r21, 0x1e0(r31)
/* 801E03F8 001DD338  82 DF 01 E4 */	lwz r22, 0x1e4(r31)
/* 801E03FC 001DD33C  82 FF 01 E8 */	lwz r23, 0x1e8(r31)
/* 801E0400 001DD340  81 9F 01 EC */	lwz r12, 0x1ec(r31)
/* 801E0404 001DD344  81 7F 01 F0 */	lwz r11, 0x1f0(r31)
/* 801E0408 001DD348  81 5F 01 F4 */	lwz r10, 0x1f4(r31)
/* 801E040C 001DD34C  81 3F 01 F8 */	lwz r9, 0x1f8(r31)
/* 801E0410 001DD350  81 1F 01 FC */	lwz r8, 0x1fc(r31)
/* 801E0414 001DD354  80 FF 02 00 */	lwz r7, 0x200(r31)
/* 801E0418 001DD358  80 DF 02 04 */	lwz r6, 0x204(r31)
/* 801E041C 001DD35C  80 BF 02 08 */	lwz r5, 0x208(r31)
/* 801E0420 001DD360  80 1F 02 0C */	lwz r0, 0x20c(r31)
/* 801E0424 001DD364  92 41 00 38 */	stw r18, 0x38(r1)
/* 801E0428 001DD368  92 61 00 3C */	stw r19, 0x3c(r1)
/* 801E042C 001DD36C  C3 E1 00 38 */	lfs f31, 0x38(r1)
/* 801E0430 001DD370  92 81 00 40 */	stw r20, 0x40(r1)
/* 801E0434 001DD374  C1 A1 00 3C */	lfs f13, 0x3c(r1)
/* 801E0438 001DD378  92 A1 00 2C */	stw r21, 0x2c(r1)
/* 801E043C 001DD37C  C1 81 00 40 */	lfs f12, 0x40(r1)
/* 801E0440 001DD380  92 C1 00 30 */	stw r22, 0x30(r1)
/* 801E0444 001DD384  C1 61 00 2C */	lfs f11, 0x2c(r1)
/* 801E0448 001DD388  92 E1 00 34 */	stw r23, 0x34(r1)
/* 801E044C 001DD38C  C1 41 00 30 */	lfs f10, 0x30(r1)
/* 801E0450 001DD390  91 81 00 20 */	stw r12, 0x20(r1)
/* 801E0454 001DD394  C1 21 00 34 */	lfs f9, 0x34(r1)
/* 801E0458 001DD398  91 61 00 24 */	stw r11, 0x24(r1)
/* 801E045C 001DD39C  C1 01 00 20 */	lfs f8, 0x20(r1)
/* 801E0460 001DD3A0  91 41 00 28 */	stw r10, 0x28(r1)
/* 801E0464 001DD3A4  C0 E1 00 24 */	lfs f7, 0x24(r1)
/* 801E0468 001DD3A8  91 21 00 14 */	stw r9, 0x14(r1)
/* 801E046C 001DD3AC  C0 C1 00 28 */	lfs f6, 0x28(r1)
/* 801E0470 001DD3B0  91 01 00 18 */	stw r8, 0x18(r1)
/* 801E0474 001DD3B4  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 801E0478 001DD3B8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 801E047C 001DD3BC  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 801E0480 001DD3C0  90 C1 00 08 */	stw r6, 8(r1)
/* 801E0484 001DD3C4  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 801E0488 001DD3C8  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801E048C 001DD3CC  C0 41 00 08 */	lfs f2, 8(r1)
/* 801E0490 001DD3D0  90 01 00 10 */	stw r0, 0x10(r1)
/* 801E0494 001DD3D4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801E0498 001DD3D8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801E049C 001DD3DC  D3 E1 00 50 */	stfs f31, 0x50(r1)
/* 801E04A0 001DD3E0  D1 A1 00 54 */	stfs f13, 0x54(r1)
/* 801E04A4 001DD3E4  D1 81 00 58 */	stfs f12, 0x58(r1)
/* 801E04A8 001DD3E8  D1 61 00 5C */	stfs f11, 0x5c(r1)
/* 801E04AC 001DD3EC  D1 41 00 60 */	stfs f10, 0x60(r1)
/* 801E04B0 001DD3F0  D1 21 00 64 */	stfs f9, 0x64(r1)
/* 801E04B4 001DD3F4  D1 01 00 68 */	stfs f8, 0x68(r1)
/* 801E04B8 001DD3F8  D0 E1 00 6C */	stfs f7, 0x6c(r1)
/* 801E04BC 001DD3FC  D0 C1 00 70 */	stfs f6, 0x70(r1)
/* 801E04C0 001DD400  D0 A1 00 74 */	stfs f5, 0x74(r1)
/* 801E04C4 001DD404  D0 81 00 78 */	stfs f4, 0x78(r1)
/* 801E04C8 001DD408  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 801E04CC 001DD40C  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 801E04D0 001DD410  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 801E04D4 001DD414  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 801E04D8 001DD418  C0 5D 00 00 */	lfs f2, 0(r29)
/* 801E04DC 001DD41C  C0 3D 00 04 */	lfs f1, 4(r29)
/* 801E04E0 001DD420  C0 1D 00 08 */	lfs f0, 8(r29)
/* 801E04E4 001DD424  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801E04E8 001DD428  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 801E04EC 001DD42C  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 801E04F0 001DD430  48 24 83 51 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 801E04F4 001DD434  80 B8 00 08 */	lwz r5, 8(r24)
/* 801E04F8 001DD438  7F 43 D3 78 */	mr r3, r26
/* 801E04FC 001DD43C  7F 24 CB 78 */	mr r4, r25
/* 801E0500 001DD440  38 C1 00 8C */	addi r6, r1, 0x8c
/* 801E0504 001DD444  48 00 02 75 */	bl setFruit__Q34Game9ItemPlant9FruitSlotFPQ24Game6PelletP7MatrixfR7Matrixf
.L_801E0508:
/* 801E0508 001DD448  3B DE 00 4C */	addi r30, r30, 0x4c
/* 801E050C 001DD44C  3B BD 00 0C */	addi r29, r29, 0xc
/* 801E0510 001DD450  3B 7B 00 01 */	addi r27, r27, 1
.L_801E0514:
/* 801E0514 001DD454  80 18 00 04 */	lwz r0, 4(r24)
/* 801E0518 001DD458  7C 1B 00 00 */	cmpw r27, r0
/* 801E051C 001DD45C  41 80 FD A4 */	blt .L_801E02C0
.L_801E0520:
/* 801E0520 001DD460  E3 E1 01 38 */	psq_l f31, 312(r1), 0, qr0
/* 801E0524 001DD464  CB E1 01 30 */	lfd f31, 0x130(r1)
/* 801E0528 001DD468  BA 41 00 F8 */	lmw r18, 0xf8(r1)
/* 801E052C 001DD46C  80 01 01 44 */	lwz r0, 0x144(r1)
/* 801E0530 001DD470  7C 08 03 A6 */	mtlr r0
/* 801E0534 001DD474  38 21 01 40 */	addi r1, r1, 0x140
/* 801E0538 001DD478  4E 80 00 20 */	blr 
.endfn bearAll__Q34Game9ItemPlant6FruitsFUs

.fn hasFruits__Q34Game9ItemPlant6FruitsFv, global
/* 801E053C 001DD47C  80 03 00 04 */	lwz r0, 4(r3)
/* 801E0540 001DD480  38 A0 00 00 */	li r5, 0
/* 801E0544 001DD484  7C 09 03 A6 */	mtctr r0
/* 801E0548 001DD488  2C 00 00 00 */	cmpwi r0, 0
/* 801E054C 001DD48C  40 81 00 28 */	ble .L_801E0574
.L_801E0550:
/* 801E0550 001DD490  80 83 00 00 */	lwz r4, 0(r3)
/* 801E0554 001DD494  38 05 00 18 */	addi r0, r5, 0x18
/* 801E0558 001DD498  7C 04 00 2E */	lwzx r0, r4, r0
/* 801E055C 001DD49C  28 00 00 00 */	cmplwi r0, 0
/* 801E0560 001DD4A0  41 82 00 0C */	beq .L_801E056C
/* 801E0564 001DD4A4  38 60 00 01 */	li r3, 1
/* 801E0568 001DD4A8  4E 80 00 20 */	blr 
.L_801E056C:
/* 801E056C 001DD4AC  38 A5 00 4C */	addi r5, r5, 0x4c
/* 801E0570 001DD4B0  42 00 FF E0 */	bdnz .L_801E0550
.L_801E0574:
/* 801E0574 001DD4B4  38 60 00 00 */	li r3, 0
/* 801E0578 001DD4B8  4E 80 00 20 */	blr 
.endfn hasFruits__Q34Game9ItemPlant6FruitsFv

.fn countFruits__Q34Game9ItemPlant6FruitsFv, global
/* 801E057C 001DD4BC  80 03 00 04 */	lwz r0, 4(r3)
/* 801E0580 001DD4C0  38 C0 00 00 */	li r6, 0
/* 801E0584 001DD4C4  38 A0 00 00 */	li r5, 0
/* 801E0588 001DD4C8  7C 09 03 A6 */	mtctr r0
/* 801E058C 001DD4CC  2C 00 00 00 */	cmpwi r0, 0
/* 801E0590 001DD4D0  40 81 00 24 */	ble .L_801E05B4
.L_801E0594:
/* 801E0594 001DD4D4  80 83 00 00 */	lwz r4, 0(r3)
/* 801E0598 001DD4D8  38 05 00 18 */	addi r0, r5, 0x18
/* 801E059C 001DD4DC  7C 04 00 2E */	lwzx r0, r4, r0
/* 801E05A0 001DD4E0  28 00 00 00 */	cmplwi r0, 0
/* 801E05A4 001DD4E4  41 82 00 08 */	beq .L_801E05AC
/* 801E05A8 001DD4E8  38 C6 00 01 */	addi r6, r6, 1
.L_801E05AC:
/* 801E05AC 001DD4EC  38 A5 00 4C */	addi r5, r5, 0x4c
/* 801E05B0 001DD4F0  42 00 FF E4 */	bdnz .L_801E0594
.L_801E05B4:
/* 801E05B4 001DD4F4  7C C3 33 78 */	mr r3, r6
/* 801E05B8 001DD4F8  4E 80 00 20 */	blr 
.endfn countFruits__Q34Game9ItemPlant6FruitsFv

.fn killAll__Q34Game9ItemPlant6FruitsFv, global
/* 801E05BC 001DD4FC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E05C0 001DD500  7C 08 02 A6 */	mflr r0
/* 801E05C4 001DD504  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E05C8 001DD508  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801E05CC 001DD50C  3B E0 00 00 */	li r31, 0
/* 801E05D0 001DD510  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801E05D4 001DD514  3B C0 00 00 */	li r30, 0
/* 801E05D8 001DD518  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801E05DC 001DD51C  7C 7D 1B 78 */	mr r29, r3
/* 801E05E0 001DD520  48 00 00 18 */	b .L_801E05F8
.L_801E05E4:
/* 801E05E4 001DD524  80 1D 00 00 */	lwz r0, 0(r29)
/* 801E05E8 001DD528  7C 60 FA 14 */	add r3, r0, r31
/* 801E05EC 001DD52C  48 00 02 1D */	bl killFruit__Q34Game9ItemPlant9FruitSlotFv
/* 801E05F0 001DD530  3B FF 00 4C */	addi r31, r31, 0x4c
/* 801E05F4 001DD534  3B DE 00 01 */	addi r30, r30, 1
.L_801E05F8:
/* 801E05F8 001DD538  80 1D 00 04 */	lwz r0, 4(r29)
/* 801E05FC 001DD53C  7C 1E 00 00 */	cmpw r30, r0
/* 801E0600 001DD540  41 80 FF E4 */	blt .L_801E05E4
/* 801E0604 001DD544  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E0608 001DD548  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801E060C 001DD54C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801E0610 001DD550  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801E0614 001DD554  7C 08 03 A6 */	mtlr r0
/* 801E0618 001DD558  38 21 00 20 */	addi r1, r1, 0x20
/* 801E061C 001DD55C  4E 80 00 20 */	blr 
.endfn killAll__Q34Game9ItemPlant6FruitsFv

.fn "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>", global
/* 801E0620 001DD560  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801E0624 001DD564  7C 08 02 A6 */	mflr r0
/* 801E0628 001DD568  90 01 00 44 */	stw r0, 0x44(r1)
/* 801E062C 001DD56C  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 801E0630 001DD570  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 801E0634 001DD574  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801E0638 001DD578  C3 E2 B5 64 */	lfs f31, lbl_805198C4@sda21(r2)
/* 801E063C 001DD57C  7C 7B 1B 78 */	mr r27, r3
/* 801E0640 001DD580  7C 9C 23 78 */	mr r28, r4
/* 801E0644 001DD584  3B C0 FF FF */	li r30, -1
/* 801E0648 001DD588  3B A0 00 00 */	li r29, 0
/* 801E064C 001DD58C  3B E0 00 00 */	li r31, 0
/* 801E0650 001DD590  48 00 00 98 */	b .L_801E06E8
.L_801E0654:
/* 801E0654 001DD594  80 7B 00 00 */	lwz r3, 0(r27)
/* 801E0658 001DD598  38 1F 00 18 */	addi r0, r31, 0x18
/* 801E065C 001DD59C  7C 83 00 2E */	lwzx r4, r3, r0
/* 801E0660 001DD5A0  28 04 00 00 */	cmplwi r4, 0
/* 801E0664 001DD5A4  41 82 00 7C */	beq .L_801E06E0
/* 801E0668 001DD5A8  81 84 00 00 */	lwz r12, 0(r4)
/* 801E066C 001DD5AC  38 61 00 08 */	addi r3, r1, 8
/* 801E0670 001DD5B0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E0674 001DD5B4  7D 89 03 A6 */	mtctr r12
/* 801E0678 001DD5B8  4E 80 04 21 */	bctrl 
/* 801E067C 001DD5BC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801E0680 001DD5C0  C0 1C 00 04 */	lfs f0, 4(r28)
/* 801E0684 001DD5C4  C0 61 00 08 */	lfs f3, 8(r1)
/* 801E0688 001DD5C8  EC 81 00 28 */	fsubs f4, f1, f0
/* 801E068C 001DD5CC  C0 5C 00 00 */	lfs f2, 0(r28)
/* 801E0690 001DD5D0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 801E0694 001DD5D4  C0 1C 00 08 */	lfs f0, 8(r28)
/* 801E0698 001DD5D8  EC 63 10 28 */	fsubs f3, f3, f2
/* 801E069C 001DD5DC  EC 84 01 32 */	fmuls f4, f4, f4
/* 801E06A0 001DD5E0  EC 41 00 28 */	fsubs f2, f1, f0
/* 801E06A4 001DD5E4  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801E06A8 001DD5E8  EC 23 20 FA */	fmadds f1, f3, f3, f4
/* 801E06AC 001DD5EC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 801E06B0 001DD5F0  EC 22 08 2A */	fadds f1, f2, f1
/* 801E06B4 001DD5F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801E06B8 001DD5F8  40 81 00 14 */	ble .L_801E06CC
/* 801E06BC 001DD5FC  40 81 00 14 */	ble .L_801E06D0
/* 801E06C0 001DD600  FC 00 08 34 */	frsqrte f0, f1
/* 801E06C4 001DD604  EC 20 00 72 */	fmuls f1, f0, f1
/* 801E06C8 001DD608  48 00 00 08 */	b .L_801E06D0
.L_801E06CC:
/* 801E06CC 001DD60C  FC 20 00 90 */	fmr f1, f0
.L_801E06D0:
/* 801E06D0 001DD610  FC 01 F8 40 */	fcmpo cr0, f1, f31
/* 801E06D4 001DD614  40 80 00 0C */	bge .L_801E06E0
/* 801E06D8 001DD618  FF E0 08 90 */	fmr f31, f1
/* 801E06DC 001DD61C  7F BE EB 78 */	mr r30, r29
.L_801E06E0:
/* 801E06E0 001DD620  3B FF 00 4C */	addi r31, r31, 0x4c
/* 801E06E4 001DD624  3B BD 00 01 */	addi r29, r29, 1
.L_801E06E8:
/* 801E06E8 001DD628  80 1B 00 04 */	lwz r0, 4(r27)
/* 801E06EC 001DD62C  7C 1D 00 00 */	cmpw r29, r0
/* 801E06F0 001DD630  41 80 FF 64 */	blt .L_801E0654
/* 801E06F4 001DD634  2C 1E FF FF */	cmpwi r30, -1
/* 801E06F8 001DD638  41 82 00 14 */	beq .L_801E070C
/* 801E06FC 001DD63C  1C 1E 00 4C */	mulli r0, r30, 0x4c
/* 801E0700 001DD640  80 7B 00 00 */	lwz r3, 0(r27)
/* 801E0704 001DD644  7C 63 02 14 */	add r3, r3, r0
/* 801E0708 001DD648  48 00 00 08 */	b .L_801E0710
.L_801E070C:
/* 801E070C 001DD64C  38 60 00 00 */	li r3, 0
.L_801E0710:
/* 801E0710 001DD650  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 801E0714 001DD654  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 801E0718 001DD658  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801E071C 001DD65C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 801E0720 001DD660  7C 08 03 A6 */	mtlr r0
/* 801E0724 001DD664  38 21 00 40 */	addi r1, r1, 0x40
/* 801E0728 001DD668  4E 80 00 20 */	blr 
.endfn "getFruit__Q34Game9ItemPlant6FruitsFR10Vector3<f>"

.fn __ct__Q34Game9ItemPlant9FruitSlotFv, global
/* 801E072C 001DD66C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0730 001DD670  7C 08 02 A6 */	mflr r0
/* 801E0734 001DD674  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0738 001DD678  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E073C 001DD67C  7C 7F 1B 78 */	mr r31, r3
/* 801E0740 001DD680  48 23 0C 51 */	bl __ct__5CNodeFv
/* 801E0744 001DD684  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant9FruitSlot@ha
/* 801E0748 001DD688  38 00 00 00 */	li r0, 0
/* 801E074C 001DD68C  38 83 90 10 */	addi r4, r3, __vt__Q34Game9ItemPlant9FruitSlot@l
/* 801E0750 001DD690  38 7F 00 1C */	addi r3, r31, 0x1c
/* 801E0754 001DD694  90 9F 00 00 */	stw r4, 0(r31)
/* 801E0758 001DD698  90 1F 00 18 */	stw r0, 0x18(r31)
/* 801E075C 001DD69C  4B F0 9B 45 */	bl PSMTXIdentity
/* 801E0760 001DD6A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0764 001DD6A4  7F E3 FB 78 */	mr r3, r31
/* 801E0768 001DD6A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E076C 001DD6AC  7C 08 03 A6 */	mtlr r0
/* 801E0770 001DD6B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0774 001DD6B4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9ItemPlant9FruitSlotFv

.fn setFruit__Q34Game9ItemPlant9FruitSlotFPQ24Game6PelletP7MatrixfR7Matrixf, global
/* 801E0778 001DD6B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E077C 001DD6BC  7C 08 02 A6 */	mflr r0
/* 801E0780 001DD6C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0784 001DD6C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0788 001DD6C8  7C BF 2B 78 */	mr r31, r5
/* 801E078C 001DD6CC  93 C1 00 08 */	stw r30, 8(r1)
/* 801E0790 001DD6D0  7C 9E 23 78 */	mr r30, r4
/* 801E0794 001DD6D4  38 83 00 1C */	addi r4, r3, 0x1c
/* 801E0798 001DD6D8  93 C3 00 18 */	stw r30, 0x18(r3)
/* 801E079C 001DD6DC  7C C3 33 78 */	mr r3, r6
/* 801E07A0 001DD6E0  4B F0 9B 2D */	bl PSMTXCopy
/* 801E07A4 001DD6E4  7F C3 F3 78 */	mr r3, r30
/* 801E07A8 001DD6E8  7F E4 FB 78 */	mr r4, r31
/* 801E07AC 001DD6EC  4B FB F2 FD */	bl startCapture__Q24Game8CreatureFP7Matrixf
/* 801E07B0 001DD6F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E07B4 001DD6F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E07B8 001DD6F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E07BC 001DD6FC  7C 08 03 A6 */	mtlr r0
/* 801E07C0 001DD700  38 21 00 10 */	addi r1, r1, 0x10
/* 801E07C4 001DD704  4E 80 00 20 */	blr 
.endfn setFruit__Q34Game9ItemPlant9FruitSlotFPQ24Game6PelletP7MatrixfR7Matrixf

.fn dropFruit__Q34Game9ItemPlant9FruitSlotFv, global
/* 801E07C8 001DD708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E07CC 001DD70C  7C 08 02 A6 */	mflr r0
/* 801E07D0 001DD710  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E07D4 001DD714  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E07D8 001DD718  7C 7F 1B 78 */	mr r31, r3
/* 801E07DC 001DD71C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801E07E0 001DD720  28 03 00 00 */	cmplwi r3, 0
/* 801E07E4 001DD724  41 82 00 10 */	beq .L_801E07F4
/* 801E07E8 001DD728  4B FB F3 B5 */	bl endCapture__Q24Game8CreatureFv
/* 801E07EC 001DD72C  38 00 00 00 */	li r0, 0
/* 801E07F0 001DD730  90 1F 00 18 */	stw r0, 0x18(r31)
.L_801E07F4:
/* 801E07F4 001DD734  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E07F8 001DD738  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E07FC 001DD73C  7C 08 03 A6 */	mtlr r0
/* 801E0800 001DD740  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0804 001DD744  4E 80 00 20 */	blr 
.endfn dropFruit__Q34Game9ItemPlant9FruitSlotFv

.fn killFruit__Q34Game9ItemPlant9FruitSlotFv, global
/* 801E0808 001DD748  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E080C 001DD74C  7C 08 02 A6 */	mflr r0
/* 801E0810 001DD750  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0814 001DD754  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0818 001DD758  7C 7F 1B 78 */	mr r31, r3
/* 801E081C 001DD75C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801E0820 001DD760  28 03 00 00 */	cmplwi r3, 0
/* 801E0824 001DD764  41 82 00 14 */	beq .L_801E0838
/* 801E0828 001DD768  38 80 00 00 */	li r4, 0
/* 801E082C 001DD76C  4B F5 A8 C5 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801E0830 001DD770  38 00 00 00 */	li r0, 0
/* 801E0834 001DD774  90 1F 00 18 */	stw r0, 0x18(r31)
.L_801E0838:
/* 801E0838 001DD778  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E083C 001DD77C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0840 001DD780  7C 08 03 A6 */	mtlr r0
/* 801E0844 001DD784  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0848 001DD788  4E 80 00 20 */	blr 
.endfn killFruit__Q34Game9ItemPlant9FruitSlotFv

.fn update__Q34Game9ItemPlant9FruitSlotFv, global
/* 801E084C 001DD78C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0850 001DD790  7C 08 02 A6 */	mflr r0
/* 801E0854 001DD794  7C 64 1B 78 */	mr r4, r3
/* 801E0858 001DD798  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E085C 001DD79C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 801E0860 001DD7A0  28 03 00 00 */	cmplwi r3, 0
/* 801E0864 001DD7A4  41 82 00 0C */	beq .L_801E0870
/* 801E0868 001DD7A8  38 84 00 1C */	addi r4, r4, 0x1c
/* 801E086C 001DD7AC  4B FB F2 91 */	bl updateCapture__Q24Game8CreatureFR7Matrixf
.L_801E0870:
/* 801E0870 001DD7B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0874 001DD7B4  7C 08 03 A6 */	mtlr r0
/* 801E0878 001DD7B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801E087C 001DD7BC  4E 80 00 20 */	blr 
.endfn update__Q34Game9ItemPlant9FruitSlotFv

.fn __dt__Q34Game9ItemPlant3MgrFv, weak
/* 801E0880 001DD7C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0884 001DD7C4  7C 08 02 A6 */	mflr r0
/* 801E0888 001DD7C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E088C 001DD7CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0890 001DD7D0  7C 9F 23 78 */	mr r31, r4
/* 801E0894 001DD7D4  93 C1 00 08 */	stw r30, 8(r1)
/* 801E0898 001DD7D8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801E089C 001DD7DC  41 82 00 FC */	beq .L_801E0998
/* 801E08A0 001DD7E0  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant3Mgr@ha
/* 801E08A4 001DD7E4  38 63 90 2C */	addi r3, r3, __vt__Q34Game9ItemPlant3Mgr@l
/* 801E08A8 001DD7E8  90 7E 00 00 */	stw r3, 0(r30)
/* 801E08AC 001DD7EC  38 03 00 74 */	addi r0, r3, 0x74
/* 801E08B0 001DD7F0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E08B4 001DD7F4  41 82 00 D4 */	beq .L_801E0988
/* 801E08B8 001DD7F8  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801E08BC 001DD7FC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E08C0 001DD800  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801E08C4 001DD804  90 7E 00 00 */	stw r3, 0(r30)
/* 801E08C8 001DD808  38 03 00 74 */	addi r0, r3, 0x74
/* 801E08CC 001DD80C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E08D0 001DD810  41 82 00 84 */	beq .L_801E0954
/* 801E08D4 001DD814  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801E08D8 001DD818  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801E08DC 001DD81C  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801E08E0 001DD820  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801E08E4 001DD824  38 04 00 2C */	addi r0, r4, 0x2c
/* 801E08E8 001DD828  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801E08EC 001DD82C  41 82 00 18 */	beq .L_801E0904
/* 801E08F0 001DD830  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801E08F4 001DD834  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801E08F8 001DD838  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801E08FC 001DD83C  38 80 00 00 */	li r4, 0
/* 801E0900 001DD840  48 23 0C 89 */	bl __dt__5CNodeFv
.L_801E0904:
/* 801E0904 001DD844  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E0908 001DD848  41 82 00 4C */	beq .L_801E0954
/* 801E090C 001DD84C  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801E0910 001DD850  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E0914 001DD854  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801E0918 001DD858  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801E091C 001DD85C  38 03 00 2C */	addi r0, r3, 0x2c
/* 801E0920 001DD860  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801E0924 001DD864  41 82 00 30 */	beq .L_801E0954
/* 801E0928 001DD868  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801E092C 001DD86C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801E0930 001DD870  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801E0934 001DD874  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801E0938 001DD878  41 82 00 1C */	beq .L_801E0954
/* 801E093C 001DD87C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801E0940 001DD880  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801E0944 001DD884  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801E0948 001DD888  38 80 00 00 */	li r4, 0
/* 801E094C 001DD88C  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801E0950 001DD890  48 23 0C 39 */	bl __dt__5CNodeFv
.L_801E0954:
/* 801E0954 001DD894  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801E0958 001DD898  41 82 00 30 */	beq .L_801E0988
/* 801E095C 001DD89C  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801E0960 001DD8A0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801E0964 001DD8A4  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801E0968 001DD8A8  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E096C 001DD8AC  41 82 00 1C */	beq .L_801E0988
/* 801E0970 001DD8B0  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801E0974 001DD8B4  38 7E 00 30 */	addi r3, r30, 0x30
/* 801E0978 001DD8B8  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801E097C 001DD8BC  38 80 00 00 */	li r4, 0
/* 801E0980 001DD8C0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801E0984 001DD8C4  48 23 0C 05 */	bl __dt__5CNodeFv
.L_801E0988:
/* 801E0988 001DD8C8  7F E0 07 35 */	extsh. r0, r31
/* 801E098C 001DD8CC  40 81 00 0C */	ble .L_801E0998
/* 801E0990 001DD8D0  7F C3 F3 78 */	mr r3, r30
/* 801E0994 001DD8D4  4B E4 37 21 */	bl __dl__FPv
.L_801E0998:
/* 801E0998 001DD8D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E099C 001DD8DC  7F C3 F3 78 */	mr r3, r30
/* 801E09A0 001DD8E0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E09A4 001DD8E4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801E09A8 001DD8E8  7C 08 03 A6 */	mtlr r0
/* 801E09AC 001DD8EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E09B0 001DD8F0  4E 80 00 20 */	blr 
.endfn __dt__Q34Game9ItemPlant3MgrFv

.fn doNew__Q34Game9ItemPlant3MgrFv, weak
/* 801E09B4 001DD8F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E09B8 001DD8F8  7C 08 02 A6 */	mflr r0
/* 801E09BC 001DD8FC  38 60 02 8C */	li r3, 0x28c
/* 801E09C0 001DD900  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E09C4 001DD904  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E09C8 001DD908  4B E4 34 DD */	bl __nw__FUl
/* 801E09CC 001DD90C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801E09D0 001DD910  41 82 00 E4 */	beq .L_801E0AB4
/* 801E09D4 001DD914  38 80 04 08 */	li r4, 0x408
/* 801E09D8 001DD918  4B FE B6 11 */	bl __ct__Q24Game8BaseItemFi
/* 801E09DC 001DD91C  3C 60 80 4C */	lis r3, "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@ha
/* 801E09E0 001DD920  38 00 00 00 */	li r0, 0
/* 801E09E4 001DD924  38 83 95 E8 */	addi r4, r3, "__vt__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>"@l
/* 801E09E8 001DD928  38 60 00 1C */	li r3, 0x1c
/* 801E09EC 001DD92C  90 9F 00 00 */	stw r4, 0(r31)
/* 801E09F0 001DD930  38 84 01 B0 */	addi r4, r4, 0x1b0
/* 801E09F4 001DD934  90 9F 01 78 */	stw r4, 0x178(r31)
/* 801E09F8 001DD938  90 1F 01 D8 */	stw r0, 0x1d8(r31)
/* 801E09FC 001DD93C  90 1F 01 DC */	stw r0, 0x1dc(r31)
/* 801E0A00 001DD940  4B E4 34 A5 */	bl __nw__FUl
/* 801E0A04 001DD944  28 03 00 00 */	cmplwi r3, 0
/* 801E0A08 001DD948  41 82 00 30 */	beq .L_801E0A38
/* 801E0A0C 001DD94C  3C 80 80 4C */	lis r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@ha
/* 801E0A10 001DD950  3C A0 80 4C */	lis r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@ha
/* 801E0A14 001DD954  38 04 95 D0 */	addi r0, r4, "__vt__Q24Game36StateMachine<Q34Game9ItemPlant4Item>"@l
/* 801E0A18 001DD958  3C 80 80 4C */	lis r4, __vt__Q34Game9ItemPlant3FSM@ha
/* 801E0A1C 001DD95C  90 03 00 00 */	stw r0, 0(r3)
/* 801E0A20 001DD960  38 C0 FF FF */	li r6, -1
/* 801E0A24 001DD964  38 A5 95 B8 */	addi r5, r5, "__vt__Q24Game31ItemFSM<Q34Game9ItemPlant4Item>"@l
/* 801E0A28 001DD968  38 04 99 8C */	addi r0, r4, __vt__Q34Game9ItemPlant3FSM@l
/* 801E0A2C 001DD96C  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801E0A30 001DD970  90 A3 00 00 */	stw r5, 0(r3)
/* 801E0A34 001DD974  90 03 00 00 */	stw r0, 0(r3)
.L_801E0A38:
/* 801E0A38 001DD978  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801E0A3C 001DD97C  7F E4 FB 78 */	mr r4, r31
/* 801E0A40 001DD980  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801E0A44 001DD984  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0A48 001DD988  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E0A4C 001DD98C  7D 89 03 A6 */	mtctr r12
/* 801E0A50 001DD990  4E 80 04 21 */	bctrl 
/* 801E0A54 001DD994  3C 80 80 4C */	lis r4, __vt__Q34Game9ItemPlant4Item@ha
/* 801E0A58 001DD998  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemPlant5Plant@ha
/* 801E0A5C 001DD99C  38 84 93 6C */	addi r4, r4, __vt__Q34Game9ItemPlant4Item@l
/* 801E0A60 001DD9A0  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801E0A64 001DD9A4  90 9F 00 00 */	stw r4, 0(r31)
/* 801E0A68 001DD9A8  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801E0A6C 001DD9AC  38 83 91 20 */	addi r4, r3, __vt__Q34Game9ItemPlant5Plant@l
/* 801E0A70 001DD9B0  38 A0 00 00 */	li r5, 0
/* 801E0A74 001DD9B4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801E0A78 001DD9B8  38 04 01 B0 */	addi r0, r4, 0x1b0
/* 801E0A7C 001DD9BC  38 7F 02 04 */	addi r3, r31, 0x204
/* 801E0A80 001DD9C0  D0 1F 01 F8 */	stfs f0, 0x1f8(r31)
/* 801E0A84 001DD9C4  D0 1F 01 F0 */	stfs f0, 0x1f0(r31)
/* 801E0A88 001DD9C8  90 BF 01 F4 */	stw r5, 0x1f4(r31)
/* 801E0A8C 001DD9CC  90 9F 00 00 */	stw r4, 0(r31)
/* 801E0A90 001DD9D0  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801E0A94 001DD9D4  48 24 87 91 */	bl __ct__Q28SysShape13BlendAnimatorFv
/* 801E0A98 001DD9D8  38 00 00 00 */	li r0, 0
/* 801E0A9C 001DD9DC  C0 02 B4 A0 */	lfs f0, lbl_80519800@sda21(r2)
/* 801E0AA0 001DD9E0  90 1F 02 7C */	stw r0, 0x27c(r31)
/* 801E0AA4 001DD9E4  90 1F 02 68 */	stw r0, 0x268(r31)
/* 801E0AA8 001DD9E8  D0 1F 02 80 */	stfs f0, 0x280(r31)
/* 801E0AAC 001DD9EC  D0 1F 02 84 */	stfs f0, 0x284(r31)
/* 801E0AB0 001DD9F0  D0 1F 01 18 */	stfs f0, 0x118(r31)
.L_801E0AB4:
/* 801E0AB4 001DD9F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0AB8 001DD9F8  7F E3 FB 78 */	mr r3, r31
/* 801E0ABC 001DD9FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0AC0 001DDA00  7C 08 03 A6 */	mtlr r0
/* 801E0AC4 001DDA04  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0AC8 001DDA08  4E 80 00 20 */	blr 
.endfn doNew__Q34Game9ItemPlant3MgrFv

.fn generatorGetID__Q34Game9ItemPlant3MgrFv, weak
/* 801E0ACC 001DDA0C  3C 60 70 6C */	lis r3, 0x706C6E74@ha
/* 801E0AD0 001DDA10  38 63 6E 74 */	addi r3, r3, 0x706C6E74@l
/* 801E0AD4 001DDA14  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game9ItemPlant3MgrFv

.fn generatorLocalVersion__Q34Game9ItemPlant3MgrFv, weak
/* 801E0AD8 001DDA18  3C 60 30 30 */	lis r3, 0x30303031@ha
/* 801E0ADC 001DDA1C  38 63 30 31 */	addi r3, r3, 0x30303031@l
/* 801E0AE0 001DDA20  4E 80 00 20 */	blr 
.endfn generatorLocalVersion__Q34Game9ItemPlant3MgrFv

.fn changeMaterial__Q34Game9ItemPlant4ItemFv, weak
/* 801E0AE4 001DDA24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0AE8 001DDA28  7C 08 02 A6 */	mflr r0
/* 801E0AEC 001DDA2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0AF0 001DDA30  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0AF4 001DDA34  C0 23 01 E4 */	lfs f1, 0x1e4(r3)
/* 801E0AF8 001DDA38  81 8C 02 3C */	lwz r12, 0x23c(r12)
/* 801E0AFC 001DDA3C  7D 89 03 A6 */	mtctr r12
/* 801E0B00 001DDA40  4E 80 04 21 */	bctrl 
/* 801E0B04 001DDA44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0B08 001DDA48  7C 08 03 A6 */	mtlr r0
/* 801E0B0C 001DDA4C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0B10 001DDA50  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game9ItemPlant4ItemFv

.fn setColor__Q34Game9ItemPlant4ItemFf, weak
/* 801E0B14 001DDA54  4E 80 00 20 */	blr 
.endfn setColor__Q34Game9ItemPlant4ItemFf

.fn hasFruits__Q34Game9ItemPlant4ItemFv, weak
/* 801E0B18 001DDA58  38 60 00 00 */	li r3, 0
/* 801E0B1C 001DDA5C  4E 80 00 20 */	blr 
.endfn hasFruits__Q34Game9ItemPlant4ItemFv

.fn getFruitsNum__Q34Game9ItemPlant4ItemFv, weak
/* 801E0B20 001DDA60  38 60 00 00 */	li r3, 0
/* 801E0B24 001DDA64  4E 80 00 20 */	blr 
.endfn getFruitsNum__Q34Game9ItemPlant4ItemFv

.fn "getNearestFruit__Q34Game9ItemPlant4ItemFR10Vector3<f>", weak
/* 801E0B28 001DDA68  38 60 00 00 */	li r3, 0
/* 801E0B2C 001DDA6C  4E 80 00 20 */	blr 
.endfn "getNearestFruit__Q34Game9ItemPlant4ItemFR10Vector3<f>"

.fn "doAI__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv", weak
/* 801E0B30 001DDA70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0B34 001DDA74  7C 08 02 A6 */	mflr r0
/* 801E0B38 001DDA78  7C 64 1B 78 */	mr r4, r3
/* 801E0B3C 001DDA7C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0B40 001DDA80  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801E0B44 001DDA84  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0B48 001DDA88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E0B4C 001DDA8C  7D 89 03 A6 */	mtctr r12
/* 801E0B50 001DDA90  4E 80 04 21 */	bctrl 
/* 801E0B54 001DDA94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0B58 001DDA98  7C 08 03 A6 */	mtlr r0
/* 801E0B5C 001DDA9C  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0B60 001DDAA0  4E 80 00 20 */	blr 
.endfn "doAI__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv"

.fn "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent", weak
/* 801E0B64 001DDAA4  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRCQ28SysShape8KeyEvent"

.fn "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle", weak
/* 801E0B68 001DDAA8  4E 80 00 20 */	blr 
.endfn "onBounce__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ23Sys8Triangle"

.fn "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent", weak
/* 801E0B6C 001DDAAC  4E 80 00 20 */	blr 
.endfn "onPlatCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9PlatEvent"

.fn "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent", weak
/* 801E0B70 001DDAB0  4E 80 00 20 */	blr 
.endfn "onCollision__Q24Game33ItemState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemRQ24Game9CollEvent"

.fn "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg", weak
/* 801E0B74 001DDAB4  4E 80 00 20 */	blr 
.endfn "init__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemPQ24Game8StateArg"

.fn "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B78 001DDAB8  4E 80 00 20 */	blr 
.endfn "exec__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B7C 001DDABC  4E 80 00 20 */	blr 
.endfn "cleanup__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B80 001DDAC0  4E 80 00 20 */	blr 
.endfn "resume__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B84 001DDAC4  4E 80 00 20 */	blr 
.endfn "restart__Q24Game32FSMState<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "init__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B88 001DDAC8  4E 80 00 20 */	blr 
.endfn "init__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item", weak
/* 801E0B8C 001DDACC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0B90 001DDAD0  7C 08 02 A6 */	mflr r0
/* 801E0B94 001DDAD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0B98 001DDAD8  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801E0B9C 001DDADC  28 03 00 00 */	cmplwi r3, 0
/* 801E0BA0 001DDAE0  41 82 00 14 */	beq .L_801E0BB4
/* 801E0BA4 001DDAE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0BA8 001DDAE8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801E0BAC 001DDAEC  7D 89 03 A6 */	mtctr r12
/* 801E0BB0 001DDAF0  4E 80 04 21 */	bctrl 
.L_801E0BB4:
/* 801E0BB4 001DDAF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0BB8 001DDAF8  7C 08 03 A6 */	mtlr r0
/* 801E0BBC 001DDAFC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0BC0 001DDB00  4E 80 00 20 */	blr 
.endfn "exec__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4Item"

.fn "create__Q24Game36StateMachine<Q34Game9ItemPlant4Item>Fi", weak
/* 801E0BC4 001DDB04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0BC8 001DDB08  7C 08 02 A6 */	mflr r0
/* 801E0BCC 001DDB0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0BD0 001DDB10  38 00 00 00 */	li r0, 0
/* 801E0BD4 001DDB14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801E0BD8 001DDB18  7C 7F 1B 78 */	mr r31, r3
/* 801E0BDC 001DDB1C  90 83 00 0C */	stw r4, 0xc(r3)
/* 801E0BE0 001DDB20  90 03 00 08 */	stw r0, 8(r3)
/* 801E0BE4 001DDB24  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E0BE8 001DDB28  54 03 10 3A */	slwi r3, r0, 2
/* 801E0BEC 001DDB2C  4B E4 33 C1 */	bl __nwa__FUl
/* 801E0BF0 001DDB30  90 7F 00 04 */	stw r3, 4(r31)
/* 801E0BF4 001DDB34  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801E0BF8 001DDB38  54 03 10 3A */	slwi r3, r0, 2
/* 801E0BFC 001DDB3C  4B E4 33 B1 */	bl __nwa__FUl
/* 801E0C00 001DDB40  90 7F 00 10 */	stw r3, 0x10(r31)
/* 801E0C04 001DDB44  80 1F 00 0C */	lwz r0, 0xc(r31)
/* 801E0C08 001DDB48  54 03 10 3A */	slwi r3, r0, 2
/* 801E0C0C 001DDB4C  4B E4 33 A1 */	bl __nwa__FUl
/* 801E0C10 001DDB50  90 7F 00 14 */	stw r3, 0x14(r31)
/* 801E0C14 001DDB54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0C18 001DDB58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801E0C1C 001DDB5C  7C 08 03 A6 */	mtlr r0
/* 801E0C20 001DDB60  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0C24 001DDB64  4E 80 00 20 */	blr 
.endfn "create__Q24Game36StateMachine<Q34Game9ItemPlant4Item>Fi"

.fn "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg", weak
/* 801E0C28 001DDB68  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801E0C2C 001DDB6C  7C 08 02 A6 */	mflr r0
/* 801E0C30 001DDB70  90 01 00 24 */	stw r0, 0x24(r1)
/* 801E0C34 001DDB74  54 A0 10 3A */	slwi r0, r5, 2
/* 801E0C38 001DDB78  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801E0C3C 001DDB7C  7C 7B 1B 78 */	mr r27, r3
/* 801E0C40 001DDB80  7C 9C 23 78 */	mr r28, r4
/* 801E0C44 001DDB84  7C DD 33 78 */	mr r29, r6
/* 801E0C48 001DDB88  83 C4 01 DC */	lwz r30, 0x1dc(r4)
/* 801E0C4C 001DDB8C  80 63 00 14 */	lwz r3, 0x14(r3)
/* 801E0C50 001DDB90  28 1E 00 00 */	cmplwi r30, 0
/* 801E0C54 001DDB94  7F E3 00 2E */	lwzx r31, r3, r0
/* 801E0C58 001DDB98  41 82 00 20 */	beq .L_801E0C78
/* 801E0C5C 001DDB9C  7F C3 F3 78 */	mr r3, r30
/* 801E0C60 001DDBA0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801E0C64 001DDBA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801E0C68 001DDBA8  7D 89 03 A6 */	mtctr r12
/* 801E0C6C 001DDBAC  4E 80 04 21 */	bctrl 
/* 801E0C70 001DDBB0  80 1E 00 04 */	lwz r0, 4(r30)
/* 801E0C74 001DDBB4  90 1B 00 18 */	stw r0, 0x18(r27)
.L_801E0C78:
/* 801E0C78 001DDBB8  80 1B 00 0C */	lwz r0, 0xc(r27)
/* 801E0C7C 001DDBBC  7C 1F 00 00 */	cmpw r31, r0
/* 801E0C80 001DDBC0  41 80 00 08 */	blt .L_801E0C88
.L_801E0C84:
/* 801E0C84 001DDBC4  48 00 00 00 */	b .L_801E0C84
.L_801E0C88:
/* 801E0C88 001DDBC8  80 7B 00 04 */	lwz r3, 4(r27)
/* 801E0C8C 001DDBCC  57 E0 10 3A */	slwi r0, r31, 2
/* 801E0C90 001DDBD0  7F 84 E3 78 */	mr r4, r28
/* 801E0C94 001DDBD4  7F A5 EB 78 */	mr r5, r29
/* 801E0C98 001DDBD8  7C 63 00 2E */	lwzx r3, r3, r0
/* 801E0C9C 001DDBDC  90 7C 01 DC */	stw r3, 0x1dc(r28)
/* 801E0CA0 001DDBE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0CA4 001DDBE4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801E0CA8 001DDBE8  7D 89 03 A6 */	mtctr r12
/* 801E0CAC 001DDBEC  4E 80 04 21 */	bctrl 
/* 801E0CB0 001DDBF0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801E0CB4 001DDBF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801E0CB8 001DDBF8  7C 08 03 A6 */	mtlr r0
/* 801E0CBC 001DDBFC  38 21 00 20 */	addi r1, r1, 0x20
/* 801E0CC0 001DDC00  4E 80 00 20 */	blr 
.endfn "transit__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ34Game9ItemPlant4ItemiPQ24Game8StateArg"

.fn "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>", weak
/* 801E0CC4 001DDC04  80 C3 00 08 */	lwz r6, 8(r3)
/* 801E0CC8 001DDC08  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E0CCC 001DDC0C  7C 06 00 00 */	cmpw r6, r0
/* 801E0CD0 001DDC10  4C 80 00 20 */	bgelr 
/* 801E0CD4 001DDC14  80 A3 00 04 */	lwz r5, 4(r3)
/* 801E0CD8 001DDC18  54 C0 10 3A */	slwi r0, r6, 2
/* 801E0CDC 001DDC1C  7C 85 01 2E */	stwx r4, r5, r0
/* 801E0CE0 001DDC20  80 A4 00 04 */	lwz r5, 4(r4)
/* 801E0CE4 001DDC24  2C 05 00 00 */	cmpwi r5, 0
/* 801E0CE8 001DDC28  41 80 00 10 */	blt .L_801E0CF8
/* 801E0CEC 001DDC2C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801E0CF0 001DDC30  7C 05 00 00 */	cmpw r5, r0
/* 801E0CF4 001DDC34  41 80 00 0C */	blt .L_801E0D00
.L_801E0CF8:
/* 801E0CF8 001DDC38  38 00 00 00 */	li r0, 0
/* 801E0CFC 001DDC3C  48 00 00 08 */	b .L_801E0D04
.L_801E0D00:
/* 801E0D00 001DDC40  38 00 00 01 */	li r0, 1
.L_801E0D04:
/* 801E0D04 001DDC44  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 801E0D08 001DDC48  4D 82 00 20 */	beqlr 
/* 801E0D0C 001DDC4C  90 64 00 08 */	stw r3, 8(r4)
/* 801E0D10 001DDC50  80 03 00 08 */	lwz r0, 8(r3)
/* 801E0D14 001DDC54  80 C4 00 04 */	lwz r6, 4(r4)
/* 801E0D18 001DDC58  80 A3 00 10 */	lwz r5, 0x10(r3)
/* 801E0D1C 001DDC5C  54 00 10 3A */	slwi r0, r0, 2
/* 801E0D20 001DDC60  7C C5 01 2E */	stwx r6, r5, r0
/* 801E0D24 001DDC64  80 04 00 04 */	lwz r0, 4(r4)
/* 801E0D28 001DDC68  80 A3 00 08 */	lwz r5, 8(r3)
/* 801E0D2C 001DDC6C  80 83 00 14 */	lwz r4, 0x14(r3)
/* 801E0D30 001DDC70  54 00 10 3A */	slwi r0, r0, 2
/* 801E0D34 001DDC74  7C A4 01 2E */	stwx r5, r4, r0
/* 801E0D38 001DDC78  80 83 00 08 */	lwz r4, 8(r3)
/* 801E0D3C 001DDC7C  38 04 00 01 */	addi r0, r4, 1
/* 801E0D40 001DDC80  90 03 00 08 */	stw r0, 8(r3)
/* 801E0D44 001DDC84  4E 80 00 20 */	blr 
.endfn "registerState__Q24Game36StateMachine<Q34Game9ItemPlant4Item>FPQ24Game32FSMState<Q34Game9ItemPlant4Item>"

.fn "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent", weak
/* 801E0D48 001DDC88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0D4C 001DDC8C  7C 08 02 A6 */	mflr r0
/* 801E0D50 001DDC90  7C 66 1B 78 */	mr r6, r3
/* 801E0D54 001DDC94  7C 85 23 78 */	mr r5, r4
/* 801E0D58 001DDC98  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0D5C 001DDC9C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E0D60 001DDCA0  28 03 00 00 */	cmplwi r3, 0
/* 801E0D64 001DDCA4  41 82 00 18 */	beq .L_801E0D7C
/* 801E0D68 001DDCA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0D6C 001DDCAC  7C C4 33 78 */	mr r4, r6
/* 801E0D70 001DDCB0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801E0D74 001DDCB4  7D 89 03 A6 */	mtctr r12
/* 801E0D78 001DDCB8  4E 80 04 21 */	bctrl 
.L_801E0D7C:
/* 801E0D7C 001DDCBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0D80 001DDCC0  7C 08 03 A6 */	mtlr r0
/* 801E0D84 001DDCC4  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0D88 001DDCC8  4E 80 00 20 */	blr 
.endfn "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"

.fn "getStateID__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv", weak
/* 801E0D8C 001DDCCC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E0D90 001DDCD0  28 03 00 00 */	cmplwi r3, 0
/* 801E0D94 001DDCD4  41 82 00 0C */	beq .L_801E0DA0
/* 801E0D98 001DDCD8  80 63 00 04 */	lwz r3, 4(r3)
/* 801E0D9C 001DDCDC  4E 80 00 20 */	blr 
.L_801E0DA0:
/* 801E0DA0 001DDCE0  38 60 FF FF */	li r3, -1
/* 801E0DA4 001DDCE4  4E 80 00 20 */	blr 
.endfn "getStateID__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>Fv"

.fn "platCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9PlatEvent", weak
/* 801E0DA8 001DDCE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0DAC 001DDCEC  7C 08 02 A6 */	mflr r0
/* 801E0DB0 001DDCF0  7C 66 1B 78 */	mr r6, r3
/* 801E0DB4 001DDCF4  7C 85 23 78 */	mr r5, r4
/* 801E0DB8 001DDCF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0DBC 001DDCFC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E0DC0 001DDD00  28 03 00 00 */	cmplwi r3, 0
/* 801E0DC4 001DDD04  41 82 00 18 */	beq .L_801E0DDC
/* 801E0DC8 001DDD08  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0DCC 001DDD0C  7C C4 33 78 */	mr r4, r6
/* 801E0DD0 001DDD10  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801E0DD4 001DDD14  7D 89 03 A6 */	mtctr r12
/* 801E0DD8 001DDD18  4E 80 04 21 */	bctrl 
.L_801E0DDC:
/* 801E0DDC 001DDD1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0DE0 001DDD20  7C 08 03 A6 */	mtlr r0
/* 801E0DE4 001DDD24  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0DE8 001DDD28  4E 80 00 20 */	blr 
.endfn "platCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9PlatEvent"

.fn "collisionCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9CollEvent", weak
/* 801E0DEC 001DDD2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0DF0 001DDD30  7C 08 02 A6 */	mflr r0
/* 801E0DF4 001DDD34  7C 66 1B 78 */	mr r6, r3
/* 801E0DF8 001DDD38  7C 85 23 78 */	mr r5, r4
/* 801E0DFC 001DDD3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0E00 001DDD40  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E0E04 001DDD44  28 03 00 00 */	cmplwi r3, 0
/* 801E0E08 001DDD48  41 82 00 18 */	beq .L_801E0E20
/* 801E0E0C 001DDD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0E10 001DDD50  7C C4 33 78 */	mr r4, r6
/* 801E0E14 001DDD54  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801E0E18 001DDD58  7D 89 03 A6 */	mtctr r12
/* 801E0E1C 001DDD5C  4E 80 04 21 */	bctrl 
.L_801E0E20:
/* 801E0E20 001DDD60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0E24 001DDD64  7C 08 03 A6 */	mtlr r0
/* 801E0E28 001DDD68  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0E2C 001DDD6C  4E 80 00 20 */	blr 
.endfn "collisionCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRQ24Game9CollEvent"

.fn "bounceCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FPQ23Sys8Triangle", weak
/* 801E0E30 001DDD70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801E0E34 001DDD74  7C 08 02 A6 */	mflr r0
/* 801E0E38 001DDD78  7C 66 1B 78 */	mr r6, r3
/* 801E0E3C 001DDD7C  7C 85 23 78 */	mr r5, r4
/* 801E0E40 001DDD80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801E0E44 001DDD84  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801E0E48 001DDD88  28 03 00 00 */	cmplwi r3, 0
/* 801E0E4C 001DDD8C  41 82 00 18 */	beq .L_801E0E64
/* 801E0E50 001DDD90  81 83 00 00 */	lwz r12, 0(r3)
/* 801E0E54 001DDD94  7C C4 33 78 */	mr r4, r6
/* 801E0E58 001DDD98  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801E0E5C 001DDD9C  7D 89 03 A6 */	mtctr r12
/* 801E0E60 001DDDA0  4E 80 04 21 */	bctrl 
.L_801E0E64:
/* 801E0E64 001DDDA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801E0E68 001DDDA8  7C 08 03 A6 */	mtlr r0
/* 801E0E6C 001DDDAC  38 21 00 10 */	addi r1, r1, 0x10
/* 801E0E70 001DDDB0  4E 80 00 20 */	blr 
.endfn "bounceCallback__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FPQ23Sys8Triangle"

.fn "@376@onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent", weak
/* 801E0E74 001DDDB4  38 63 FE 88 */	addi r3, r3, -376
/* 801E0E78 001DDDB8  4B FF FE D0 */	b "onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"
.endfn "@376@onKeyEvent__Q24Game77FSMItem<Q34Game9ItemPlant4Item,Q34Game9ItemPlant3FSM,Q34Game9ItemPlant5State>FRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q34Game9ItemPlant3MgrFv", weak
/* 801E0E7C 001DDDBC  38 63 FF D0 */	addi r3, r3, -48
/* 801E0E80 001DDDC0  4B FF FA 00 */	b __dt__Q34Game9ItemPlant3MgrFv
.endfn "@48@__dt__Q34Game9ItemPlant3MgrFv"
