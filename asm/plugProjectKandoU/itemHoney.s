.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_804805B0, local
	.asciz "itemHoney"
.endobj lbl_804805B0
.balign 4
.obj lbl_804805BC, local
	.asciz "itemHoney.cpp"
.endobj lbl_804805BC
.balign 4
.obj lbl_804805CC, local
	.asciz "no mat mitu1\n"
.endobj lbl_804805CC
.balign 4
.obj lbl_804805DC, local # three floats array or Vector3f
	.float 1.5
	.float 1.75
	.float 1.75
.endobj lbl_804805DC
.balign 4
.obj lbl_804805E8, local
	.asciz "user/Kando/objects/honey"
.endobj lbl_804805E8
.balign 4
.obj lbl_80480604, local
	.asciz "mitu.bmd"
.endobj lbl_80480604
.balign 4
.obj lbl_80480610, local
	.asciz "texts.szs"
.endobj lbl_80480610
.balign 4
.obj lbl_8048061C, local
	.asciz "honeyAnimMgr.txt"
.endobj lbl_8048061C
.balign 4
.obj lbl_80480630, local
	.asciz "CreatureKillArg"
.endobj lbl_80480630

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q34Game9ItemHoney3Mgr, global
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doEntry__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSetView__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "doViewCalc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSimulation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "doDirectDraw__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "killAll__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q34Game9ItemHoney3MgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte generatorGetID__Q34Game9ItemHoney3MgrFv
	.4byte "generatorBirth__Q34Game9ItemHoney3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q34Game9ItemHoney3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__33Container<Q34Game9ItemHoney4Item>FPv"
	.4byte "@48@getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "@48@getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@48@getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@48@get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getAt__33Container<Q34Game9ItemHoney4Item>Fi"
	.4byte "getTo__33Container<Q34Game9ItemHoney4Item>Fv"
	.4byte onCreateModel__Q34Game9ItemHoney3MgrFPQ28SysShape5Model
	.4byte birth__Q34Game9ItemHoney3MgrFv
	.4byte "kill__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"
	.4byte "get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte __dt__Q34Game9ItemHoney3MgrFv
.endobj __vt__Q34Game9ItemHoney3Mgr
.obj "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__33Container<Q34Game9ItemHoney4Item>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__33Container<Q34Game9ItemHoney4Item>Fi"
	.4byte "getTo__33Container<Q34Game9ItemHoney4Item>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "@28@doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "@28@doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
.endobj "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"
.obj "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__33Container<Q34Game9ItemHoney4Item>FPv"
	.4byte "getNext__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getStart__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "getEnd__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "get__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getAt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "getTo__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "@28@doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@28@doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "@28@doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
	.4byte "birth__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "clearMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "onAlloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endobj "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"
.obj "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "doAnimation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doEntry__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSetView__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fi"
	.4byte "doViewCalc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "doSimulation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Ff"
	.4byte "doDirectDraw__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "initDependency__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "killAll__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte setup__Q24Game11BaseItemMgrFPQ24Game8BaseItem
	.4byte setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
	.4byte onLoadResources__Q24Game11BaseItemMgrFv
	.4byte loadEverytime__Q24Game11BaseItemMgrFv
	.4byte updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte onUpdateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
	.4byte 0
	.4byte 0
	.4byte generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm
	.4byte generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl
	.4byte generatorLocalVersion__Q24Game11BaseItemMgrFv
	.4byte generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
	.4byte generatorNewItemParm__Q24Game11BaseItemMgrFv
	.4byte 0
	.4byte 0
	.4byte "@48@__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__33Container<Q34Game9ItemHoney4Item>FPv"
	.4byte "@48@getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "@48@getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@48@getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "@48@get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getAt__33Container<Q34Game9ItemHoney4Item>Fi"
	.4byte "getTo__33Container<Q34Game9ItemHoney4Item>Fv"
	.4byte "onCreateModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model"
	.4byte "birth__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "kill__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"
	.4byte "get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
	.4byte "getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
	.4byte "__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
.endobj "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"
.obj "__vt__33Container<Q34Game9ItemHoney4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__33Container<Q34Game9ItemHoney4Item>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__33Container<Q34Game9ItemHoney4Item>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__33Container<Q34Game9ItemHoney4Item>Fi"
	.4byte "getTo__33Container<Q34Game9ItemHoney4Item>Fv"
.endobj "__vt__33Container<Q34Game9ItemHoney4Item>"
.obj __vt__Q34Game9ItemHoney4Item, global
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
	.4byte constructor__Q24Game8CFSMItemFv
	.4byte onInit__Q34Game9ItemHoney4ItemFPQ24Game15CreatureInitArg
	.4byte onKill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	.4byte onInitPost__Q24Game8CreatureFPQ24Game15CreatureInitArg
	.4byte doAnimation__Q24Game8BaseItemFv
	.4byte doEntry__Q24Game8BaseItemFv
	.4byte doSetView__Q24Game8CreatureFi
	.4byte doViewCalc__Q24Game8CreatureFv
	.4byte doSimulation__Q34Game9ItemHoney4ItemFf
	.4byte doDirectDraw__Q34Game9ItemHoney4ItemFR8Graphics
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
	.4byte onStartCapture__Q34Game9ItemHoney4ItemFv
	.4byte onUpdateCapture__Q34Game9ItemHoney4ItemFR7Matrixf
	.4byte onEndCapture__Q34Game9ItemHoney4ItemFv
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
	.4byte bounceCallback__Q24Game8CFSMItemFPQ23Sys8Triangle
	.4byte collisionCallback__Q34Game9ItemHoney4ItemFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8CFSMItemFRQ24Game9PlatEvent
	.4byte getJAIObject__Q24Game8BaseItemFv
	.4byte getPSCreature__Q24Game8BaseItemFv
	.4byte getSound_AILOD__Q24Game8CreatureFv
	.4byte getSound_PosPtr__Q24Game8BaseItemFv
	.4byte sound_culling__Q24Game8CreatureFv
	.4byte getSound_CurrAnimFrame__Q24Game8CreatureFv
	.4byte getSound_CurrAnimSpeed__Q24Game8CreatureFv
	.4byte on_movie_begin__Q24Game8CreatureFb
	.4byte on_movie_end__Q34Game9ItemHoney4ItemFb
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
	.4byte getCreatureName__Q34Game9ItemHoney4ItemFv
	.4byte getCreatureID__Q24Game8BaseItemFv
	.4byte 0
	.4byte 0
	.4byte "@376@onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q34Game9ItemHoney4ItemFv
	.4byte doAI__Q34Game9ItemHoney4ItemFv
	.4byte move__Q24Game8BaseItemFf
	.4byte changeMaterial__Q34Game9ItemHoney4ItemFv
	.4byte do_updateLOD__Q24Game8BaseItemFv
	.4byte do_setLODParm__Q24Game8BaseItemFRQ24Game9AILODParm
	.4byte getMapCollisionRadius__Q34Game9ItemHoney4ItemFv
	.4byte interactAttack__Q24Game8BaseItemFRQ24Game14InteractAttack
	.4byte interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge
	.4byte interactEat__Q24Game8BaseItemFRQ24Game11InteractEat
	.4byte interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack
	.4byte interactAbsorb__Q34Game9ItemHoney4ItemFRQ24Game14InteractAbsorb
	.4byte interactFue__Q24Game8BaseItemFRQ24Game11InteractFue
	.4byte interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero
	.4byte interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero
	.4byte interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey
	.4byte "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>"
	.4byte getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere
	.4byte do_doAnimation__Q24Game8BaseItemFv
	.4byte updateBoundSphere__Q34Game9ItemHoney4ItemFv
	.4byte update__Q24Game8BaseItemFv
	.4byte entryShape__Q24Game8BaseItemFv
	.4byte onSetPosition__Q34Game9ItemHoney4ItemFv
	.4byte createFSM__Q34Game9ItemHoney4ItemFv
	.4byte onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent
	.4byte absorbable__Q34Game9ItemHoney4ItemFv
	.4byte demoOK__Q34Game9ItemHoney4ItemFv
.endobj __vt__Q34Game9ItemHoney4Item
.obj __vt__Q34Game9ItemHoney9DemoState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney5StateFv
.endobj __vt__Q34Game9ItemHoney9DemoState
.obj __vt__Q34Game9ItemHoney10TouchState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney10TouchStateFv
.endobj __vt__Q34Game9ItemHoney10TouchState
.obj __vt__Q34Game9ItemHoney11ShrinkState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney11ShrinkStateFv
.endobj __vt__Q34Game9ItemHoney11ShrinkState
.obj __vt__Q34Game9ItemHoney9WaitState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney9WaitStateFv
.endobj __vt__Q34Game9ItemHoney9WaitState
.obj __vt__Q23efx11THoneydownB, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11THoneydownB
.obj __vt__Q23efx11THoneydownR, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11THoneydownR
.obj __vt__Q23efx11THoneydownY, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11THoneydownY
.obj __vt__Q34Game9ItemHoney11BounceState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney5StateFv
.endobj __vt__Q34Game9ItemHoney11BounceState
.obj __vt__Q34Game9ItemHoney9FallState, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ24Game8StateArg
	.4byte exec__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem
	.4byte cleanup__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney5StateFv
.endobj __vt__Q34Game9ItemHoney9FallState
.obj __vt__Q34Game9ItemHoney5State, weak
	.4byte 0
	.4byte 0
	.4byte "init__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemPQ24Game8StateArg"
	.4byte "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "cleanup__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "resume__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "restart__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte onDamage__Q24Game10CItemStateFPQ24Game8CFSMItemf
	.4byte onKeyEvent__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
	.4byte onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
	.4byte onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
	.4byte onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent
	.4byte interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb
	.4byte absorbable__Q34Game9ItemHoney5StateFv
.endobj __vt__Q34Game9ItemHoney5State
.obj __vt__Q34Game9ItemHoney3FSM, global
	.4byte 0
	.4byte 0
	.4byte init__Q34Game9ItemHoney3FSMFPQ24Game8CFSMItem
	.4byte "start__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
	.4byte "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
	.4byte "transit__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItemiPQ24Game8StateArg"
.endobj __vt__Q34Game9ItemHoney3FSM
.obj lbl_804B8528, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte "createModelCallback__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model"
.endobj lbl_804B8528
.obj "__vt__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>", weak
	.4byte 0
	.4byte 0
	.4byte "invoke__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>FPQ28SysShape5Model"
.endobj "__vt__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>"
.obj "__vt__32Iterator<Q34Game9ItemHoney4Item>", weak
	.4byte 0
	.4byte 0
	.4byte "first__32Iterator<Q34Game9ItemHoney4Item>Fv"
	.4byte "next__32Iterator<Q34Game9ItemHoney4Item>Fv"
	.4byte "isDone__32Iterator<Q34Game9ItemHoney4Item>Fv"
	.4byte "__ml__32Iterator<Q34Game9ItemHoney4Item>Fv"
.endobj "__vt__32Iterator<Q34Game9ItemHoney4Item>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mgr__Q24Game9ItemHoney, global
	.skip 0x4
.endobj mgr__Q24Game9ItemHoney

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80519680, local
	.float 0.0
.endobj lbl_80519680
.obj lbl_80519684, local
	.float 100.0
.endobj lbl_80519684
.obj lbl_80519688, local
	.float 15.0
.endobj lbl_80519688
.obj lbl_8051968C, local
	.float 32768.0
.endobj lbl_8051968C
.obj lbl_80519690, local
	.float 3.0
.endobj lbl_80519690
.obj lbl_80519694, local
	.float 30.0
.endobj lbl_80519694
.obj lbl_80519698, local
	.8byte 0x4330000080000000
.endobj lbl_80519698
.obj lbl_805196A0, local
	.float 7.5
.endobj lbl_805196A0
.balign 4
.obj lbl_805196A4, local
	.asciz "mitu1"
.endobj lbl_805196A4
.balign 4
.obj lbl_805196AC, local
	.asciz "Honey"
.endobj lbl_805196AC
.balign 4
.obj lbl_805196B4, local
	.asciz "arc.szs"
.endobj lbl_805196B4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q34Game9ItemHoney3FSMFPQ24Game8CFSMItem, global
/* 801D2D6C 001CFCAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2D70 001CFCB0  7C 08 02 A6 */	mflr r0
/* 801D2D74 001CFCB4  38 80 00 06 */	li r4, 6
/* 801D2D78 001CFCB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2D7C 001CFCBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D2D80 001CFCC0  7C 7F 1B 78 */	mr r31, r3
/* 801D2D84 001CFCC4  4B FF FE 25 */	bl "create__Q24Game30StateMachine<Q24Game8CFSMItem>Fi"
/* 801D2D88 001CFCC8  38 60 00 10 */	li r3, 0x10
/* 801D2D8C 001CFCCC  4B E5 11 19 */	bl __nw__FUl
/* 801D2D90 001CFCD0  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2D94 001CFCD4  41 82 00 40 */	beq .L_801D2DD4
/* 801D2D98 001CFCD8  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2D9C 001CFCDC  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2DA0 001CFCE0  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2DA4 001CFCE4  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2DA8 001CFCE8  90 04 00 00 */	stw r0, 0(r4)
/* 801D2DAC 001CFCEC  38 E0 00 00 */	li r7, 0
/* 801D2DB0 001CFCF0  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney9FallState@ha
/* 801D2DB4 001CFCF4  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2DB8 001CFCF8  90 E4 00 04 */	stw r7, 4(r4)
/* 801D2DBC 001CFCFC  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2DC0 001CFD00  38 03 84 90 */	addi r0, r3, __vt__Q34Game9ItemHoney9FallState@l
/* 801D2DC4 001CFD04  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2DC8 001CFD08  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2DCC 001CFD0C  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2DD0 001CFD10  90 04 00 00 */	stw r0, 0(r4)
.L_801D2DD4:
/* 801D2DD4 001CFD14  7F E3 FB 78 */	mr r3, r31
/* 801D2DD8 001CFD18  4B FF FE E1 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2DDC 001CFD1C  38 60 00 10 */	li r3, 0x10
/* 801D2DE0 001CFD20  4B E5 10 C5 */	bl __nw__FUl
/* 801D2DE4 001CFD24  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2DE8 001CFD28  41 82 00 44 */	beq .L_801D2E2C
/* 801D2DEC 001CFD2C  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2DF0 001CFD30  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2DF4 001CFD34  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2DF8 001CFD38  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2DFC 001CFD3C  90 04 00 00 */	stw r0, 0(r4)
/* 801D2E00 001CFD40  38 00 00 01 */	li r0, 1
/* 801D2E04 001CFD44  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney11BounceState@ha
/* 801D2E08 001CFD48  38 E0 00 00 */	li r7, 0
/* 801D2E0C 001CFD4C  90 04 00 04 */	stw r0, 4(r4)
/* 801D2E10 001CFD50  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2E14 001CFD54  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2E18 001CFD58  38 03 84 50 */	addi r0, r3, __vt__Q34Game9ItemHoney11BounceState@l
/* 801D2E1C 001CFD5C  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2E20 001CFD60  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2E24 001CFD64  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2E28 001CFD68  90 04 00 00 */	stw r0, 0(r4)
.L_801D2E2C:
/* 801D2E2C 001CFD6C  7F E3 FB 78 */	mr r3, r31
/* 801D2E30 001CFD70  4B FF FE 89 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2E34 001CFD74  38 60 00 10 */	li r3, 0x10
/* 801D2E38 001CFD78  4B E5 10 6D */	bl __nw__FUl
/* 801D2E3C 001CFD7C  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2E40 001CFD80  41 82 00 44 */	beq .L_801D2E84
/* 801D2E44 001CFD84  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2E48 001CFD88  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2E4C 001CFD8C  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2E50 001CFD90  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2E54 001CFD94  90 04 00 00 */	stw r0, 0(r4)
/* 801D2E58 001CFD98  38 00 00 02 */	li r0, 2
/* 801D2E5C 001CFD9C  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney9WaitState@ha
/* 801D2E60 001CFDA0  38 E0 00 00 */	li r7, 0
/* 801D2E64 001CFDA4  90 04 00 04 */	stw r0, 4(r4)
/* 801D2E68 001CFDA8  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2E6C 001CFDAC  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2E70 001CFDB0  38 03 83 D4 */	addi r0, r3, __vt__Q34Game9ItemHoney9WaitState@l
/* 801D2E74 001CFDB4  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2E78 001CFDB8  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2E7C 001CFDBC  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2E80 001CFDC0  90 04 00 00 */	stw r0, 0(r4)
.L_801D2E84:
/* 801D2E84 001CFDC4  7F E3 FB 78 */	mr r3, r31
/* 801D2E88 001CFDC8  4B FF FE 31 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2E8C 001CFDCC  38 60 00 10 */	li r3, 0x10
/* 801D2E90 001CFDD0  4B E5 10 15 */	bl __nw__FUl
/* 801D2E94 001CFDD4  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2E98 001CFDD8  41 82 00 44 */	beq .L_801D2EDC
/* 801D2E9C 001CFDDC  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2EA0 001CFDE0  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2EA4 001CFDE4  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2EA8 001CFDE8  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2EAC 001CFDEC  90 04 00 00 */	stw r0, 0(r4)
/* 801D2EB0 001CFDF0  38 00 00 03 */	li r0, 3
/* 801D2EB4 001CFDF4  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney11ShrinkState@ha
/* 801D2EB8 001CFDF8  38 E0 00 00 */	li r7, 0
/* 801D2EBC 001CFDFC  90 04 00 04 */	stw r0, 4(r4)
/* 801D2EC0 001CFE00  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2EC4 001CFE04  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2EC8 001CFE08  38 03 83 94 */	addi r0, r3, __vt__Q34Game9ItemHoney11ShrinkState@l
/* 801D2ECC 001CFE0C  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2ED0 001CFE10  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2ED4 001CFE14  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2ED8 001CFE18  90 04 00 00 */	stw r0, 0(r4)
.L_801D2EDC:
/* 801D2EDC 001CFE1C  7F E3 FB 78 */	mr r3, r31
/* 801D2EE0 001CFE20  4B FF FD D9 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2EE4 001CFE24  38 60 00 14 */	li r3, 0x14
/* 801D2EE8 001CFE28  4B E5 0F BD */	bl __nw__FUl
/* 801D2EEC 001CFE2C  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2EF0 001CFE30  41 82 00 44 */	beq .L_801D2F34
/* 801D2EF4 001CFE34  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2EF8 001CFE38  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2EFC 001CFE3C  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2F00 001CFE40  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2F04 001CFE44  90 04 00 00 */	stw r0, 0(r4)
/* 801D2F08 001CFE48  38 00 00 04 */	li r0, 4
/* 801D2F0C 001CFE4C  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney10TouchState@ha
/* 801D2F10 001CFE50  38 E0 00 00 */	li r7, 0
/* 801D2F14 001CFE54  90 04 00 04 */	stw r0, 4(r4)
/* 801D2F18 001CFE58  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2F1C 001CFE5C  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2F20 001CFE60  38 03 83 54 */	addi r0, r3, __vt__Q34Game9ItemHoney10TouchState@l
/* 801D2F24 001CFE64  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2F28 001CFE68  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2F2C 001CFE6C  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2F30 001CFE70  90 04 00 00 */	stw r0, 0(r4)
.L_801D2F34:
/* 801D2F34 001CFE74  7F E3 FB 78 */	mr r3, r31
/* 801D2F38 001CFE78  4B FF FD 81 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2F3C 001CFE7C  38 60 00 10 */	li r3, 0x10
/* 801D2F40 001CFE80  4B E5 0F 65 */	bl __nw__FUl
/* 801D2F44 001CFE84  7C 64 1B 79 */	or. r4, r3, r3
/* 801D2F48 001CFE88  41 82 00 44 */	beq .L_801D2F8C
/* 801D2F4C 001CFE8C  3C 60 80 4B */	lis r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@ha
/* 801D2F50 001CFE90  3C C0 80 4B */	lis r6, __vt__Q24Game10CItemState@ha
/* 801D2F54 001CFE94  38 03 7D F8 */	addi r0, r3, "__vt__Q24Game26FSMState<Q24Game8CFSMItem>"@l
/* 801D2F58 001CFE98  3C A0 80 4C */	lis r5, __vt__Q34Game9ItemHoney5State@ha
/* 801D2F5C 001CFE9C  90 04 00 00 */	stw r0, 0(r4)
/* 801D2F60 001CFEA0  38 00 00 05 */	li r0, 5
/* 801D2F64 001CFEA4  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney9DemoState@ha
/* 801D2F68 001CFEA8  38 E0 00 00 */	li r7, 0
/* 801D2F6C 001CFEAC  90 04 00 04 */	stw r0, 4(r4)
/* 801D2F70 001CFEB0  38 C6 7D C4 */	addi r6, r6, __vt__Q24Game10CItemState@l
/* 801D2F74 001CFEB4  38 A5 84 D0 */	addi r5, r5, __vt__Q34Game9ItemHoney5State@l
/* 801D2F78 001CFEB8  38 03 83 14 */	addi r0, r3, __vt__Q34Game9ItemHoney9DemoState@l
/* 801D2F7C 001CFEBC  90 E4 00 08 */	stw r7, 8(r4)
/* 801D2F80 001CFEC0  90 C4 00 00 */	stw r6, 0(r4)
/* 801D2F84 001CFEC4  90 A4 00 00 */	stw r5, 0(r4)
/* 801D2F88 001CFEC8  90 04 00 00 */	stw r0, 0(r4)
.L_801D2F8C:
/* 801D2F8C 001CFECC  7F E3 FB 78 */	mr r3, r31
/* 801D2F90 001CFED0  4B FF FD 29 */	bl "registerState__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game26FSMState<Q24Game8CFSMItem>"
/* 801D2F94 001CFED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2F98 001CFED8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D2F9C 001CFEDC  7C 08 03 A6 */	mtlr r0
/* 801D2FA0 001CFEE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2FA4 001CFEE4  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney3FSMFPQ24Game8CFSMItem

.fn init__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D2FA8 001CFEE8  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem, global
/* 801D2FAC 001CFEEC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem, global
/* 801D2FB0 001CFEF0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItem

.fn onBounce__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ23Sys8Triangle, global
/* 801D2FB4 001CFEF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D2FB8 001CFEF8  7C 08 02 A6 */	mflr r0
/* 801D2FBC 001CFEFC  38 A0 00 01 */	li r5, 1
/* 801D2FC0 001CFF00  38 C0 00 00 */	li r6, 0
/* 801D2FC4 001CFF04  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D2FC8 001CFF08  81 83 00 00 */	lwz r12, 0(r3)
/* 801D2FCC 001CFF0C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D2FD0 001CFF10  7D 89 03 A6 */	mtctr r12
/* 801D2FD4 001CFF14  4E 80 04 21 */	bctrl 
/* 801D2FD8 001CFF18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D2FDC 001CFF1C  7C 08 03 A6 */	mtlr r0
/* 801D2FE0 001CFF20  38 21 00 10 */	addi r1, r1, 0x10
/* 801D2FE4 001CFF24  4E 80 00 20 */	blr 
.endfn onBounce__Q34Game9ItemHoney9FallStateFPQ24Game8CFSMItemPQ23Sys8Triangle

.fn init__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D2FE8 001CFF28  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 801D2FEC 001CFF2C  7C 08 02 A6 */	mflr r0
/* 801D2FF0 001CFF30  90 01 00 74 */	stw r0, 0x74(r1)
/* 801D2FF4 001CFF34  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 801D2FF8 001CFF38  7C 9F 23 79 */	or. r31, r4, r4
/* 801D2FFC 001CFF3C  7F E5 FB 78 */	mr r5, r31
/* 801D3000 001CFF40  41 82 00 08 */	beq .L_801D3008
/* 801D3004 001CFF44  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D3008:
/* 801D3008 001CFF48  38 7F 01 A8 */	addi r3, r31, 0x1a8
/* 801D300C 001CFF4C  38 80 00 03 */	li r4, 3
/* 801D3010 001CFF50  48 25 5C 79 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D3014 001CFF54  C0 02 B3 20 */	lfs f0, lbl_80519680@sda21(r2)
/* 801D3018 001CFF58  7F E3 FB 78 */	mr r3, r31
/* 801D301C 001CFF5C  38 80 38 00 */	li r4, 0x3800
/* 801D3020 001CFF60  D0 1F 01 90 */	stfs f0, 0x190(r31)
/* 801D3024 001CFF64  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 801D3028 001CFF68  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 801D302C 001CFF6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D3030 001CFF70  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 801D3034 001CFF74  7D 89 03 A6 */	mtctr r12
/* 801D3038 001CFF78  4E 80 04 21 */	bctrl 
/* 801D303C 001CFF7C  7F E4 FB 78 */	mr r4, r31
/* 801D3040 001CFF80  38 61 00 08 */	addi r3, r1, 8
/* 801D3044 001CFF84  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D3048 001CFF88  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D304C 001CFF8C  7D 89 03 A6 */	mtctr r12
/* 801D3050 001CFF90  4E 80 04 21 */	bctrl 
/* 801D3054 001CFF94  88 1F 01 E0 */	lbz r0, 0x1e0(r31)
/* 801D3058 001CFF98  C0 01 00 08 */	lfs f0, 8(r1)
/* 801D305C 001CFF9C  2C 00 00 01 */	cmpwi r0, 1
/* 801D3060 001CFFA0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801D3064 001CFFA4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801D3068 001CFFA8  41 82 00 7C */	beq .L_801D30E4
/* 801D306C 001CFFAC  40 80 00 10 */	bge .L_801D307C
/* 801D3070 001CFFB0  2C 00 00 00 */	cmpwi r0, 0
/* 801D3074 001CFFB4  40 80 00 14 */	bge .L_801D3088
/* 801D3078 001CFFB8  48 00 01 20 */	b .L_801D3198
.L_801D307C:
/* 801D307C 001CFFBC  2C 00 00 03 */	cmpwi r0, 3
/* 801D3080 001CFFC0  40 80 01 18 */	bge .L_801D3198
/* 801D3084 001CFFC4  48 00 00 BC */	b .L_801D3140
.L_801D3088:
/* 801D3088 001CFFC8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801D308C 001CFFCC  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801D3090 001CFFD0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801D3094 001CFFD4  3C 80 80 4C */	lis r4, __vt__Q23efx11THoneydownY@ha
/* 801D3098 001CFFD8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 801D309C 001CFFDC  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801D30A0 001CFFE0  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801D30A4 001CFFE4  38 E0 00 B5 */	li r7, 0xb5
/* 801D30A8 001CFFE8  90 01 00 5C */	stw r0, 0x5c(r1)
/* 801D30AC 001CFFEC  38 A4 84 3C */	addi r5, r4, __vt__Q23efx11THoneydownY@l
/* 801D30B0 001CFFF0  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801D30B4 001CFFF4  38 C0 00 00 */	li r6, 0
/* 801D30B8 001CFFF8  B0 E1 00 60 */	sth r7, 0x60(r1)
/* 801D30BC 001CFFFC  38 61 00 5C */	addi r3, r1, 0x5c
/* 801D30C0 001D0000  38 81 00 4C */	addi r4, r1, 0x4c
/* 801D30C4 001D0004  90 C1 00 64 */	stw r6, 0x64(r1)
/* 801D30C8 001D0008  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 801D30CC 001D000C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801D30D0 001D0010  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801D30D4 001D0014  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 801D30D8 001D0018  D0 41 00 58 */	stfs f2, 0x58(r1)
/* 801D30DC 001D001C  48 1D BE A9 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 801D30E0 001D0020  48 00 00 B8 */	b .L_801D3198
.L_801D30E4:
/* 801D30E4 001D0024  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801D30E8 001D0028  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801D30EC 001D002C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801D30F0 001D0030  3C 80 80 4C */	lis r4, __vt__Q23efx11THoneydownR@ha
/* 801D30F4 001D0034  90 01 00 40 */	stw r0, 0x40(r1)
/* 801D30F8 001D0038  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801D30FC 001D003C  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801D3100 001D0040  38 E0 00 B4 */	li r7, 0xb4
/* 801D3104 001D0044  90 01 00 40 */	stw r0, 0x40(r1)
/* 801D3108 001D0048  38 A4 84 28 */	addi r5, r4, __vt__Q23efx11THoneydownR@l
/* 801D310C 001D004C  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801D3110 001D0050  38 C0 00 00 */	li r6, 0
/* 801D3114 001D0054  B0 E1 00 44 */	sth r7, 0x44(r1)
/* 801D3118 001D0058  38 61 00 40 */	addi r3, r1, 0x40
/* 801D311C 001D005C  38 81 00 30 */	addi r4, r1, 0x30
/* 801D3120 001D0060  90 C1 00 48 */	stw r6, 0x48(r1)
/* 801D3124 001D0064  90 A1 00 40 */	stw r5, 0x40(r1)
/* 801D3128 001D0068  90 01 00 30 */	stw r0, 0x30(r1)
/* 801D312C 001D006C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 801D3130 001D0070  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 801D3134 001D0074  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 801D3138 001D0078  48 1D BE 4D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 801D313C 001D007C  48 00 00 5C */	b .L_801D3198
.L_801D3140:
/* 801D3140 001D0080  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 801D3144 001D0084  3C 60 80 4E */	lis r3, __vt__Q23efx8TSimple1@ha
/* 801D3148 001D0088  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 801D314C 001D008C  3C 80 80 4C */	lis r4, __vt__Q23efx11THoneydownB@ha
/* 801D3150 001D0090  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3154 001D0094  38 03 6A 78 */	addi r0, r3, __vt__Q23efx8TSimple1@l
/* 801D3158 001D0098  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 801D315C 001D009C  38 E0 00 B3 */	li r7, 0xb3
/* 801D3160 001D00A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3164 001D00A4  38 A4 84 14 */	addi r5, r4, __vt__Q23efx11THoneydownB@l
/* 801D3168 001D00A8  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 801D316C 001D00AC  38 C0 00 00 */	li r6, 0
/* 801D3170 001D00B0  B0 E1 00 28 */	sth r7, 0x28(r1)
/* 801D3174 001D00B4  38 61 00 24 */	addi r3, r1, 0x24
/* 801D3178 001D00B8  38 81 00 14 */	addi r4, r1, 0x14
/* 801D317C 001D00BC  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 801D3180 001D00C0  90 A1 00 24 */	stw r5, 0x24(r1)
/* 801D3184 001D00C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3188 001D00C8  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 801D318C 001D00CC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 801D3190 001D00D0  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 801D3194 001D00D4  48 1D BD F1 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_801D3198:
/* 801D3198 001D00D8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 801D319C 001D00DC  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 801D31A0 001D00E0  7C 08 03 A6 */	mtlr r0
/* 801D31A4 001D00E4  38 21 00 70 */	addi r1, r1, 0x70
/* 801D31A8 001D00E8  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem, global
/* 801D31AC 001D00EC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem, global
/* 801D31B0 001D00F0  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItem

.fn onKeyEvent__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent, global
/* 801D31B4 001D00F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D31B8 001D00F8  7C 08 02 A6 */	mflr r0
/* 801D31BC 001D00FC  38 A0 00 02 */	li r5, 2
/* 801D31C0 001D0100  38 C0 00 00 */	li r6, 0
/* 801D31C4 001D0104  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D31C8 001D0108  81 83 00 00 */	lwz r12, 0(r3)
/* 801D31CC 001D010C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D31D0 001D0110  7D 89 03 A6 */	mtctr r12
/* 801D31D4 001D0114  4E 80 04 21 */	bctrl 
/* 801D31D8 001D0118  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D31DC 001D011C  7C 08 03 A6 */	mtlr r0
/* 801D31E0 001D0120  38 21 00 10 */	addi r1, r1, 0x10
/* 801D31E4 001D0124  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney11BounceStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent

.fn init__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D31E8 001D0128  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D31EC 001D012C  7C 08 02 A6 */	mflr r0
/* 801D31F0 001D0130  28 04 00 00 */	cmplwi r4, 0
/* 801D31F4 001D0134  7C 85 23 78 */	mr r5, r4
/* 801D31F8 001D0138  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D31FC 001D013C  41 82 00 08 */	beq .L_801D3204
/* 801D3200 001D0140  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D3204:
/* 801D3204 001D0144  38 64 01 A8 */	addi r3, r4, 0x1a8
/* 801D3208 001D0148  38 80 00 04 */	li r4, 4
/* 801D320C 001D014C  48 25 5A 7D */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D3210 001D0150  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3214 001D0154  7C 08 03 A6 */	mtlr r0
/* 801D3218 001D0158  38 21 00 10 */	addi r1, r1, 0x10
/* 801D321C 001D015C  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem, global
/* 801D3220 001D0160  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem, global
/* 801D3224 001D0164  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItem

.fn collisionCallback__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game9CollEvent, global
/* 801D3228 001D0168  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801D322C 001D016C  7C 08 02 A6 */	mflr r0
/* 801D3230 001D0170  90 01 00 34 */	stw r0, 0x34(r1)
/* 801D3234 001D0174  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801D3238 001D0178  7C BF 2B 78 */	mr r31, r5
/* 801D323C 001D017C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801D3240 001D0180  7C 9E 23 78 */	mr r30, r4
/* 801D3244 001D0184  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801D3248 001D0188  7C 7D 1B 78 */	mr r29, r3
/* 801D324C 001D018C  38 61 00 08 */	addi r3, r1, 8
/* 801D3250 001D0190  80 85 00 00 */	lwz r4, 0(r5)
/* 801D3254 001D0194  81 84 00 00 */	lwz r12, 0(r4)
/* 801D3258 001D0198  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801D325C 001D019C  7D 89 03 A6 */	mtctr r12
/* 801D3260 001D01A0  4E 80 04 21 */	bctrl 
/* 801D3264 001D01A4  C0 01 00 08 */	lfs f0, 8(r1)
/* 801D3268 001D01A8  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801D326C 001D01AC  EC 20 00 32 */	fmuls f1, f0, f0
/* 801D3270 001D01B0  C0 02 B3 24 */	lfs f0, lbl_80519684@sda21(r2)
/* 801D3274 001D01B4  EC 22 08 BA */	fmadds f1, f2, f2, f1
/* 801D3278 001D01B8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801D327C 001D01BC  41 80 00 AC */	blt .L_801D3328
/* 801D3280 001D01C0  88 1E 01 E0 */	lbz r0, 0x1e0(r30)
/* 801D3284 001D01C4  28 00 00 00 */	cmplwi r0, 0
/* 801D3288 001D01C8  40 82 00 54 */	bne .L_801D32DC
/* 801D328C 001D01CC  80 7F 00 00 */	lwz r3, 0(r31)
/* 801D3290 001D01D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3294 001D01D4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D3298 001D01D8  7D 89 03 A6 */	mtctr r12
/* 801D329C 001D01DC  4E 80 04 21 */	bctrl 
/* 801D32A0 001D01E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D32A4 001D01E4  40 82 00 84 */	bne .L_801D3328
/* 801D32A8 001D01E8  80 7F 00 00 */	lwz r3, 0(r31)
/* 801D32AC 001D01EC  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801D32B0 001D01F0  28 00 04 06 */	cmplwi r0, 0x406
/* 801D32B4 001D01F4  41 82 00 74 */	beq .L_801D3328
/* 801D32B8 001D01F8  7F A3 EB 78 */	mr r3, r29
/* 801D32BC 001D01FC  7F C4 F3 78 */	mr r4, r30
/* 801D32C0 001D0200  81 9D 00 00 */	lwz r12, 0(r29)
/* 801D32C4 001D0204  38 A0 00 04 */	li r5, 4
/* 801D32C8 001D0208  38 C0 00 00 */	li r6, 0
/* 801D32CC 001D020C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D32D0 001D0210  7D 89 03 A6 */	mtctr r12
/* 801D32D4 001D0214  4E 80 04 21 */	bctrl 
/* 801D32D8 001D0218  48 00 00 50 */	b .L_801D3328
.L_801D32DC:
/* 801D32DC 001D021C  80 7F 00 00 */	lwz r3, 0(r31)
/* 801D32E0 001D0220  81 83 00 00 */	lwz r12, 0(r3)
/* 801D32E4 001D0224  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D32E8 001D0228  7D 89 03 A6 */	mtctr r12
/* 801D32EC 001D022C  4E 80 04 21 */	bctrl 
/* 801D32F0 001D0230  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D32F4 001D0234  40 82 00 34 */	bne .L_801D3328
/* 801D32F8 001D0238  80 7F 00 00 */	lwz r3, 0(r31)
/* 801D32FC 001D023C  A0 03 01 28 */	lhz r0, 0x128(r3)
/* 801D3300 001D0240  28 00 04 06 */	cmplwi r0, 0x406
/* 801D3304 001D0244  41 82 00 24 */	beq .L_801D3328
/* 801D3308 001D0248  7F A3 EB 78 */	mr r3, r29
/* 801D330C 001D024C  7F C4 F3 78 */	mr r4, r30
/* 801D3310 001D0250  81 9D 00 00 */	lwz r12, 0(r29)
/* 801D3314 001D0254  38 A0 00 04 */	li r5, 4
/* 801D3318 001D0258  38 C0 00 00 */	li r6, 0
/* 801D331C 001D025C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D3320 001D0260  7D 89 03 A6 */	mtctr r12
/* 801D3324 001D0264  4E 80 04 21 */	bctrl 
.L_801D3328:
/* 801D3328 001D0268  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801D332C 001D026C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801D3330 001D0270  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801D3334 001D0274  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801D3338 001D0278  7C 08 03 A6 */	mtlr r0
/* 801D333C 001D027C  38 21 00 30 */	addi r1, r1, 0x30
/* 801D3340 001D0280  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game9CollEvent

.fn interactAbsorb__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb, global
/* 801D3344 001D0284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3348 001D0288  7C 08 02 A6 */	mflr r0
/* 801D334C 001D028C  38 A0 00 03 */	li r5, 3
/* 801D3350 001D0290  38 C0 00 00 */	li r6, 0
/* 801D3354 001D0294  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3358 001D0298  81 83 00 00 */	lwz r12, 0(r3)
/* 801D335C 001D029C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D3360 001D02A0  7D 89 03 A6 */	mtctr r12
/* 801D3364 001D02A4  4E 80 04 21 */	bctrl 
/* 801D3368 001D02A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D336C 001D02AC  38 60 00 01 */	li r3, 1
/* 801D3370 001D02B0  7C 08 03 A6 */	mtlr r0
/* 801D3374 001D02B4  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3378 001D02B8  4E 80 00 20 */	blr 
.endfn interactAbsorb__Q34Game9ItemHoney9WaitStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb

.fn init__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D337C 001D02BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3380 001D02C0  7C 08 02 A6 */	mflr r0
/* 801D3384 001D02C4  28 04 00 00 */	cmplwi r4, 0
/* 801D3388 001D02C8  7C 85 23 78 */	mr r5, r4
/* 801D338C 001D02CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3390 001D02D0  41 82 00 08 */	beq .L_801D3398
/* 801D3394 001D02D4  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D3398:
/* 801D3398 001D02D8  38 64 01 A8 */	addi r3, r4, 0x1a8
/* 801D339C 001D02DC  38 80 00 06 */	li r4, 6
/* 801D33A0 001D02E0  48 25 58 E9 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D33A4 001D02E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D33A8 001D02E8  7C 08 03 A6 */	mtlr r0
/* 801D33AC 001D02EC  38 21 00 10 */	addi r1, r1, 0x10
/* 801D33B0 001D02F0  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem, global
/* 801D33B4 001D02F4  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem, global
/* 801D33B8 001D02F8  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItem

.fn onKeyEvent__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent, global
/* 801D33BC 001D02FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D33C0 001D0300  7C 08 02 A6 */	mflr r0
/* 801D33C4 001D0304  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D33C8 001D0308  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D33CC 001D030C  7C 9F 23 78 */	mr r31, r4
/* 801D33D0 001D0310  38 80 00 00 */	li r4, 0
/* 801D33D4 001D0314  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D33D8 001D0318  7F E3 FB 78 */	mr r3, r31
/* 801D33DC 001D031C  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D33E0 001D0320  7D 89 03 A6 */	mtctr r12
/* 801D33E4 001D0324  4E 80 04 21 */	bctrl 
/* 801D33E8 001D0328  7F E3 FB 78 */	mr r3, r31
/* 801D33EC 001D032C  38 80 00 00 */	li r4, 0
/* 801D33F0 001D0330  4B F6 7D 01 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801D33F4 001D0334  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801D33F8 001D0338  7F E4 FB 78 */	mr r4, r31
/* 801D33FC 001D033C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3400 001D0340  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D3404 001D0344  7D 89 03 A6 */	mtctr r12
/* 801D3408 001D0348  4E 80 04 21 */	bctrl 
/* 801D340C 001D034C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3410 001D0350  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3414 001D0354  7C 08 03 A6 */	mtlr r0
/* 801D3418 001D0358  38 21 00 10 */	addi r1, r1, 0x10
/* 801D341C 001D035C  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent

.fn "kill__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item", weak
/* 801D3420 001D0360  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3424 001D0364  7C 08 02 A6 */	mflr r0
/* 801D3428 001D0368  38 63 00 4C */	addi r3, r3, 0x4c
/* 801D342C 001D036C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3430 001D0370  48 00 12 39 */	bl "kill__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"
/* 801D3434 001D0374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3438 001D0378  7C 08 03 A6 */	mtlr r0
/* 801D343C 001D037C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3440 001D0380  4E 80 00 20 */	blr 
.endfn "kill__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"

.fn init__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D3444 001D0384  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3448 001D0388  7C 08 02 A6 */	mflr r0
/* 801D344C 001D038C  28 04 00 00 */	cmplwi r4, 0
/* 801D3450 001D0390  7C 85 23 78 */	mr r5, r4
/* 801D3454 001D0394  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3458 001D0398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D345C 001D039C  7C 7F 1B 78 */	mr r31, r3
/* 801D3460 001D03A0  41 82 00 08 */	beq .L_801D3468
/* 801D3464 001D03A4  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D3468:
/* 801D3468 001D03A8  38 64 01 A8 */	addi r3, r4, 0x1a8
/* 801D346C 001D03AC  38 80 00 05 */	li r4, 5
/* 801D3470 001D03B0  48 25 58 19 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D3474 001D03B4  38 00 00 00 */	li r0, 0
/* 801D3478 001D03B8  98 1F 00 10 */	stb r0, 0x10(r31)
/* 801D347C 001D03BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3480 001D03C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3484 001D03C4  7C 08 03 A6 */	mtlr r0
/* 801D3488 001D03C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D348C 001D03CC  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem, global
/* 801D3490 001D03D0  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem, global
/* 801D3494 001D03D4  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItem

.fn interactAbsorb__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb, global
/* 801D3498 001D03D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D349C 001D03DC  7C 08 02 A6 */	mflr r0
/* 801D34A0 001D03E0  38 A0 00 03 */	li r5, 3
/* 801D34A4 001D03E4  38 C0 00 00 */	li r6, 0
/* 801D34A8 001D03E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D34AC 001D03EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D34B0 001D03F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D34B4 001D03F4  7D 89 03 A6 */	mtctr r12
/* 801D34B8 001D03F8  4E 80 04 21 */	bctrl 
/* 801D34BC 001D03FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D34C0 001D0400  38 60 00 01 */	li r3, 1
/* 801D34C4 001D0404  7C 08 03 A6 */	mtlr r0
/* 801D34C8 001D0408  38 21 00 10 */	addi r1, r1, 0x10
/* 801D34CC 001D040C  4E 80 00 20 */	blr 
.endfn interactAbsorb__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb

.fn onKeyEvent__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent, global
/* 801D34D0 001D0410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D34D4 001D0414  7C 08 02 A6 */	mflr r0
/* 801D34D8 001D0418  38 A0 00 02 */	li r5, 2
/* 801D34DC 001D041C  38 C0 00 00 */	li r6, 0
/* 801D34E0 001D0420  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D34E4 001D0424  81 83 00 00 */	lwz r12, 0(r3)
/* 801D34E8 001D0428  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D34EC 001D042C  7D 89 03 A6 */	mtctr r12
/* 801D34F0 001D0430  4E 80 04 21 */	bctrl 
/* 801D34F4 001D0434  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D34F8 001D0438  7C 08 03 A6 */	mtlr r0
/* 801D34FC 001D043C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3500 001D0440  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent

.fn collisionCallback__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game9CollEvent, global
/* 801D3504 001D0444  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3508 001D0448  7C 08 02 A6 */	mflr r0
/* 801D350C 001D044C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3510 001D0450  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3514 001D0454  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3518 001D0458  7C 7E 1B 78 */	mr r30, r3
/* 801D351C 001D045C  88 03 00 10 */	lbz r0, 0x10(r3)
/* 801D3520 001D0460  83 E5 00 00 */	lwz r31, 0(r5)
/* 801D3524 001D0464  28 00 00 00 */	cmplwi r0, 0
/* 801D3528 001D0468  40 82 00 44 */	bne .L_801D356C
/* 801D352C 001D046C  7F E3 FB 78 */	mr r3, r31
/* 801D3530 001D0470  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D3534 001D0474  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D3538 001D0478  7D 89 03 A6 */	mtctr r12
/* 801D353C 001D047C  4E 80 04 21 */	bctrl 
/* 801D3540 001D0480  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D3544 001D0484  41 82 00 28 */	beq .L_801D356C
/* 801D3548 001D0488  38 00 00 01 */	li r0, 1
/* 801D354C 001D048C  38 80 08 0B */	li r4, 0x80b
/* 801D3550 001D0490  98 1E 00 10 */	stb r0, 0x10(r30)
/* 801D3554 001D0494  38 A0 00 00 */	li r5, 0
/* 801D3558 001D0498  80 7F 02 6C */	lwz r3, 0x26c(r31)
/* 801D355C 001D049C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801D3560 001D04A0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801D3564 001D04A4  7D 89 03 A6 */	mtctr r12
/* 801D3568 001D04A8  4E 80 04 21 */	bctrl 
.L_801D356C:
/* 801D356C 001D04AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3570 001D04B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3574 001D04B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3578 001D04B8  7C 08 03 A6 */	mtlr r0
/* 801D357C 001D04BC  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3580 001D04C0  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game9ItemHoney10TouchStateFPQ24Game8CFSMItemRQ24Game9CollEvent

.fn init__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemPQ24Game8StateArg, global
/* 801D3584 001D04C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3588 001D04C8  7C 08 02 A6 */	mflr r0
/* 801D358C 001D04CC  28 04 00 00 */	cmplwi r4, 0
/* 801D3590 001D04D0  7C 85 23 78 */	mr r5, r4
/* 801D3594 001D04D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3598 001D04D8  41 82 00 08 */	beq .L_801D35A0
/* 801D359C 001D04DC  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D35A0:
/* 801D35A0 001D04E0  38 64 01 A8 */	addi r3, r4, 0x1a8
/* 801D35A4 001D04E4  38 80 00 05 */	li r4, 5
/* 801D35A8 001D04E8  48 25 56 E1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D35AC 001D04EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D35B0 001D04F0  7C 08 03 A6 */	mtlr r0
/* 801D35B4 001D04F4  38 21 00 10 */	addi r1, r1, 0x10
/* 801D35B8 001D04F8  4E 80 00 20 */	blr 
.endfn init__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemPQ24Game8StateArg

.fn exec__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem, global
/* 801D35BC 001D04FC  4E 80 00 20 */	blr 
.endfn exec__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem

.fn cleanup__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem, global
/* 801D35C0 001D0500  4E 80 00 20 */	blr 
.endfn cleanup__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItem

.fn onKeyEvent__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent, global
/* 801D35C4 001D0504  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D35C8 001D0508  7C 08 02 A6 */	mflr r0
/* 801D35CC 001D050C  28 04 00 00 */	cmplwi r4, 0
/* 801D35D0 001D0510  7C 85 23 78 */	mr r5, r4
/* 801D35D4 001D0514  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D35D8 001D0518  41 82 00 08 */	beq .L_801D35E0
/* 801D35DC 001D051C  38 A5 01 78 */	addi r5, r5, 0x178
.L_801D35E0:
/* 801D35E0 001D0520  38 64 01 A8 */	addi r3, r4, 0x1a8
/* 801D35E4 001D0524  38 80 00 05 */	li r4, 5
/* 801D35E8 001D0528  48 25 56 A1 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D35EC 001D052C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D35F0 001D0530  7C 08 03 A6 */	mtlr r0
/* 801D35F4 001D0534  38 21 00 10 */	addi r1, r1, 0x10
/* 801D35F8 001D0538  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney9DemoStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent

.fn demoOK__Q34Game9ItemHoney4ItemFv, global
/* 801D35FC 001D053C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3600 001D0540  7C 08 02 A6 */	mflr r0
/* 801D3604 001D0544  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3608 001D0548  4B FF 94 35 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D360C 001D054C  2C 03 00 02 */	cmpwi r3, 2
/* 801D3610 001D0550  38 00 00 00 */	li r0, 0
/* 801D3614 001D0554  41 82 00 0C */	beq .L_801D3620
/* 801D3618 001D0558  2C 03 00 04 */	cmpwi r3, 4
/* 801D361C 001D055C  40 82 00 08 */	bne .L_801D3624
.L_801D3620:
/* 801D3620 001D0560  38 00 00 01 */	li r0, 1
.L_801D3624:
/* 801D3624 001D0564  7C 03 03 78 */	mr r3, r0
/* 801D3628 001D0568  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D362C 001D056C  7C 08 03 A6 */	mtlr r0
/* 801D3630 001D0570  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3634 001D0574  4E 80 00 20 */	blr 
.endfn demoOK__Q34Game9ItemHoney4ItemFv

.fn __ct__Q34Game9ItemHoney4ItemFv, global
/* 801D3638 001D0578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D363C 001D057C  7C 08 02 A6 */	mflr r0
/* 801D3640 001D0580  38 80 04 06 */	li r4, 0x406
/* 801D3644 001D0584  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3648 001D0588  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D364C 001D058C  7C 7F 1B 78 */	mr r31, r3
/* 801D3650 001D0590  4B FF 89 99 */	bl __ct__Q24Game8BaseItemFi
/* 801D3654 001D0594  3C 80 80 4B */	lis r4, __vt__Q24Game8CFSMItem@ha
/* 801D3658 001D0598  3C 60 80 4C */	lis r3, __vt__Q34Game9ItemHoney4Item@ha
/* 801D365C 001D059C  38 A4 74 C0 */	addi r5, r4, __vt__Q24Game8CFSMItem@l
/* 801D3660 001D05A0  38 80 00 00 */	li r4, 0
/* 801D3664 001D05A4  90 BF 00 00 */	stw r5, 0(r31)
/* 801D3668 001D05A8  38 05 01 B0 */	addi r0, r5, 0x1b0
/* 801D366C 001D05AC  38 63 80 E4 */	addi r3, r3, __vt__Q34Game9ItemHoney4Item@l
/* 801D3670 001D05B0  C0 02 B3 28 */	lfs f0, lbl_80519688@sda21(r2)
/* 801D3674 001D05B4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801D3678 001D05B8  38 03 01 B0 */	addi r0, r3, 0x1b0
/* 801D367C 001D05BC  38 DF 01 C4 */	addi r6, r31, 0x1c4
/* 801D3680 001D05C0  38 A0 00 00 */	li r5, 0
/* 801D3684 001D05C4  90 9F 01 D8 */	stw r4, 0x1d8(r31)
/* 801D3688 001D05C8  38 E0 00 00 */	li r7, 0
/* 801D368C 001D05CC  90 9F 01 DC */	stw r4, 0x1dc(r31)
/* 801D3690 001D05D0  90 7F 00 00 */	stw r3, 0(r31)
/* 801D3694 001D05D4  90 1F 01 78 */	stw r0, 0x178(r31)
/* 801D3698 001D05D8  D0 1F 01 D0 */	stfs f0, 0x1d0(r31)
/* 801D369C 001D05DC  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801D36A0 001D05E0  80 9F 01 74 */	lwz r4, 0x174(r31)
/* 801D36A4 001D05E4  4B F6 0A 0D */	bl createSingleSphere__8CollTreeFPQ28SysShape9MtxObjectiRQ23Sys6SphereP11CollPartMgr
/* 801D36A8 001D05E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D36AC 001D05EC  7F E3 FB 78 */	mr r3, r31
/* 801D36B0 001D05F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D36B4 001D05F4  7C 08 03 A6 */	mtlr r0
/* 801D36B8 001D05F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D36BC 001D05FC  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9ItemHoney4ItemFv

.fn createFSM__Q34Game9ItemHoney4ItemFv, global
/* 801D36C0 001D0600  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D36C4 001D0604  7C 08 02 A6 */	mflr r0
/* 801D36C8 001D0608  38 60 00 1C */	li r3, 0x1c
/* 801D36CC 001D060C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D36D0 001D0610  4B E5 07 D5 */	bl __nw__FUl
/* 801D36D4 001D0614  28 03 00 00 */	cmplwi r3, 0
/* 801D36D8 001D0618  41 82 00 30 */	beq .L_801D3708
/* 801D36DC 001D061C  3C 80 80 4B */	lis r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@ha
/* 801D36E0 001D0620  3C A0 80 4B */	lis r5, __vt__Q24Game8CItemFSM@ha
/* 801D36E4 001D0624  38 04 7A 50 */	addi r0, r4, "__vt__Q24Game30StateMachine<Q24Game8CFSMItem>"@l
/* 801D36E8 001D0628  3C 80 80 4C */	lis r4, __vt__Q34Game9ItemHoney3FSM@ha
/* 801D36EC 001D062C  90 03 00 00 */	stw r0, 0(r3)
/* 801D36F0 001D0630  38 C0 FF FF */	li r6, -1
/* 801D36F4 001D0634  38 A5 7A 38 */	addi r5, r5, __vt__Q24Game8CItemFSM@l
/* 801D36F8 001D0638  38 04 85 10 */	addi r0, r4, __vt__Q34Game9ItemHoney3FSM@l
/* 801D36FC 001D063C  90 C3 00 18 */	stw r6, 0x18(r3)
/* 801D3700 001D0640  90 A3 00 00 */	stw r5, 0(r3)
/* 801D3704 001D0644  90 03 00 00 */	stw r0, 0(r3)
.L_801D3708:
/* 801D3708 001D0648  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D370C 001D064C  7C 08 03 A6 */	mtlr r0
/* 801D3710 001D0650  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3714 001D0654  4E 80 00 20 */	blr 
.endfn createFSM__Q34Game9ItemHoney4ItemFv

.fn doAI__Q34Game9ItemHoney4ItemFv, global
/* 801D3718 001D0658  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D371C 001D065C  7C 08 02 A6 */	mflr r0
/* 801D3720 001D0660  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3724 001D0664  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D3728 001D0668  7C 7F 1B 78 */	mr r31, r3
/* 801D372C 001D066C  4B FF 92 CD */	bl doAI__Q24Game8CFSMItemFv
/* 801D3730 001D0670  38 00 00 01 */	li r0, 1
/* 801D3734 001D0674  7F E3 FB 78 */	mr r3, r31
/* 801D3738 001D0678  98 01 00 08 */	stb r0, 8(r1)
/* 801D373C 001D067C  38 81 00 08 */	addi r4, r1, 8
/* 801D3740 001D0680  4B F6 84 E5 */	bl checkHell__Q24Game8CreatureFRQ34Game8Creature12CheckHellArg
/* 801D3744 001D0684  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D3748 001D0688  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D374C 001D068C  7C 08 03 A6 */	mtlr r0
/* 801D3750 001D0690  38 21 00 20 */	addi r1, r1, 0x20
/* 801D3754 001D0694  4E 80 00 20 */	blr 
.endfn doAI__Q34Game9ItemHoney4ItemFv

.fn onInit__Q34Game9ItemHoney4ItemFPQ24Game15CreatureInitArg, global
/* 801D3758 001D0698  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D375C 001D069C  7C 08 02 A6 */	mflr r0
/* 801D3760 001D06A0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3764 001D06A4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D3768 001D06A8  7C 9F 23 78 */	mr r31, r4
/* 801D376C 001D06AC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D3770 001D06B0  7C 7E 1B 78 */	mr r30, r3
/* 801D3774 001D06B4  7F C4 F3 78 */	mr r4, r30
/* 801D3778 001D06B8  80 6D 94 50 */	lwz r3, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801D377C 001D06BC  48 00 0E 5D */	bl "createModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"
/* 801D3780 001D06C0  28 1F 00 00 */	cmplwi r31, 0
/* 801D3784 001D06C4  90 7E 01 74 */	stw r3, 0x174(r30)
/* 801D3788 001D06C8  41 82 00 10 */	beq .L_801D3798
/* 801D378C 001D06CC  88 1F 00 04 */	lbz r0, 4(r31)
/* 801D3790 001D06D0  98 1E 01 E0 */	stb r0, 0x1e0(r30)
/* 801D3794 001D06D4  48 00 00 4C */	b .L_801D37E0
.L_801D3798:
/* 801D3798 001D06D8  38 00 00 00 */	li r0, 0
/* 801D379C 001D06DC  98 1E 01 E0 */	stb r0, 0x1e0(r30)
/* 801D37A0 001D06E0  4B EF 5E 01 */	bl rand
/* 801D37A4 001D06E4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 801D37A8 001D06E8  3C 00 43 30 */	lis r0, 0x4330
/* 801D37AC 001D06EC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D37B0 001D06F0  C8 62 B3 38 */	lfd f3, lbl_80519698@sda21(r2)
/* 801D37B4 001D06F4  90 01 00 08 */	stw r0, 8(r1)
/* 801D37B8 001D06F8  C0 22 B3 2C */	lfs f1, lbl_8051968C@sda21(r2)
/* 801D37BC 001D06FC  C8 41 00 08 */	lfd f2, 8(r1)
/* 801D37C0 001D0700  C0 02 B3 30 */	lfs f0, lbl_80519690@sda21(r2)
/* 801D37C4 001D0704  EC 42 18 28 */	fsubs f2, f2, f3
/* 801D37C8 001D0708  EC 22 08 24 */	fdivs f1, f2, f1
/* 801D37CC 001D070C  EC 00 00 72 */	fmuls f0, f0, f1
/* 801D37D0 001D0710  FC 00 00 1E */	fctiwz f0, f0
/* 801D37D4 001D0714  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801D37D8 001D0718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D37DC 001D071C  98 1E 01 E0 */	stb r0, 0x1e0(r30)
.L_801D37E0:
/* 801D37E0 001D0720  80 CD 94 50 */	lwz r6, mgr__Q24Game9ItemHoney@sda21(r13)
/* 801D37E4 001D0724  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801D37E8 001D0728  38 80 00 00 */	li r4, 0
/* 801D37EC 001D072C  38 A0 00 00 */	li r5, 0
/* 801D37F0 001D0730  80 06 00 20 */	lwz r0, 0x20(r6)
/* 801D37F4 001D0734  90 1E 01 B8 */	stw r0, 0x1b8(r30)
/* 801D37F8 001D0738  48 25 54 91 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D37FC 001D073C  C0 02 B3 34 */	lfs f0, lbl_80519694@sda21(r2)
/* 801D3800 001D0740  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801D3804 001D0744  80 7E 01 14 */	lwz r3, 0x114(r30)
/* 801D3808 001D0748  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801D380C 001D074C  4B F6 22 BD */	bl attachModel__8CollTreeFPQ28SysShape9MtxObject
/* 801D3810 001D0750  7F C3 F3 78 */	mr r3, r30
/* 801D3814 001D0754  38 80 00 00 */	li r4, 0
/* 801D3818 001D0758  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D381C 001D075C  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 801D3820 001D0760  7D 89 03 A6 */	mtctr r12
/* 801D3824 001D0764  4E 80 04 21 */	bctrl 
/* 801D3828 001D0768  28 1F 00 00 */	cmplwi r31, 0
/* 801D382C 001D076C  41 82 00 34 */	beq .L_801D3860
/* 801D3830 001D0770  88 1F 00 05 */	lbz r0, 5(r31)
/* 801D3834 001D0774  28 00 00 00 */	cmplwi r0, 0
/* 801D3838 001D0778  41 82 00 28 */	beq .L_801D3860
/* 801D383C 001D077C  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801D3840 001D0780  7F C4 F3 78 */	mr r4, r30
/* 801D3844 001D0784  38 A0 00 05 */	li r5, 5
/* 801D3848 001D0788  38 C0 00 00 */	li r6, 0
/* 801D384C 001D078C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3850 001D0790  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D3854 001D0794  7D 89 03 A6 */	mtctr r12
/* 801D3858 001D0798  4E 80 04 21 */	bctrl 
/* 801D385C 001D079C  48 00 00 24 */	b .L_801D3880
.L_801D3860:
/* 801D3860 001D07A0  80 7E 01 D8 */	lwz r3, 0x1d8(r30)
/* 801D3864 001D07A4  7F C4 F3 78 */	mr r4, r30
/* 801D3868 001D07A8  38 A0 00 00 */	li r5, 0
/* 801D386C 001D07AC  38 C0 00 00 */	li r6, 0
/* 801D3870 001D07B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3874 001D07B4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D3878 001D07B8  7D 89 03 A6 */	mtctr r12
/* 801D387C 001D07BC  4E 80 04 21 */	bctrl 
.L_801D3880:
/* 801D3880 001D07C0  7F C3 F3 78 */	mr r3, r30
/* 801D3884 001D07C4  38 80 00 01 */	li r4, 1
/* 801D3888 001D07C8  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D388C 001D07CC  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801D3890 001D07D0  7D 89 03 A6 */	mtctr r12
/* 801D3894 001D07D4  4E 80 04 21 */	bctrl 
/* 801D3898 001D07D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D389C 001D07DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D38A0 001D07E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D38A4 001D07E4  7C 08 03 A6 */	mtlr r0
/* 801D38A8 001D07E8  38 21 00 20 */	addi r1, r1, 0x20
/* 801D38AC 001D07EC  4E 80 00 20 */	blr 
.endfn onInit__Q34Game9ItemHoney4ItemFPQ24Game15CreatureInitArg

.fn onSetPosition__Q34Game9ItemHoney4ItemFv, global
/* 801D38B0 001D07F0  4E 80 00 20 */	blr 
.endfn onSetPosition__Q34Game9ItemHoney4ItemFv

.fn getMapCollisionRadius__Q34Game9ItemHoney4ItemFv, global
/* 801D38B4 001D07F4  C0 22 B3 40 */	lfs f1, lbl_805196A0@sda21(r2)
/* 801D38B8 001D07F8  4E 80 00 20 */	blr 
.endfn getMapCollisionRadius__Q34Game9ItemHoney4ItemFv

.fn changeMaterial__Q34Game9ItemHoney4ItemFv, global
/* 801D38BC 001D07FC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801D38C0 001D0800  7C 08 02 A6 */	mflr r0
/* 801D38C4 001D0804  90 01 00 34 */	stw r0, 0x34(r1)
/* 801D38C8 001D0808  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 801D38CC 001D080C  7C 7B 1B 78 */	mr r27, r3
/* 801D38D0 001D0810  81 83 00 00 */	lwz r12, 0(r3)
/* 801D38D4 001D0814  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D38D8 001D0818  7D 89 03 A6 */	mtctr r12
/* 801D38DC 001D081C  4E 80 04 21 */	bctrl 
/* 801D38E0 001D0820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D38E4 001D0824  41 82 00 F4 */	beq .L_801D39D8
/* 801D38E8 001D0828  88 1B 01 E0 */	lbz r0, 0x1e0(r27)
/* 801D38EC 001D082C  28 00 00 00 */	cmplwi r0, 0
/* 801D38F0 001D0830  40 82 00 18 */	bne .L_801D3908
/* 801D38F4 001D0834  3B E0 00 B6 */	li r31, 0xb6
/* 801D38F8 001D0838  3B C0 00 79 */	li r30, 0x79
/* 801D38FC 001D083C  3B A0 00 00 */	li r29, 0
/* 801D3900 001D0840  3B 80 00 FF */	li r28, 0xff
/* 801D3904 001D0844  48 00 00 30 */	b .L_801D3934
.L_801D3908:
/* 801D3908 001D0848  28 00 00 01 */	cmplwi r0, 1
/* 801D390C 001D084C  40 82 00 18 */	bne .L_801D3924
/* 801D3910 001D0850  3B E0 00 82 */	li r31, 0x82
/* 801D3914 001D0854  3B C0 00 28 */	li r30, 0x28
/* 801D3918 001D0858  3B A0 00 31 */	li r29, 0x31
/* 801D391C 001D085C  3B 80 00 FF */	li r28, 0xff
/* 801D3920 001D0860  48 00 00 14 */	b .L_801D3934
.L_801D3924:
/* 801D3924 001D0864  3B E0 00 1A */	li r31, 0x1a
/* 801D3928 001D0868  3B C0 00 07 */	li r30, 7
/* 801D392C 001D086C  3B A0 00 36 */	li r29, 0x36
/* 801D3930 001D0870  3B 80 00 FF */	li r28, 0xff
.L_801D3934:
/* 801D3934 001D0874  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801D3938 001D0878  38 82 B3 44 */	addi r4, r2, lbl_805196A4@sda21
/* 801D393C 001D087C  80 63 00 08 */	lwz r3, 8(r3)
/* 801D3940 001D0880  80 63 00 04 */	lwz r3, 4(r3)
/* 801D3944 001D0884  80 63 00 64 */	lwz r3, 0x64(r3)
/* 801D3948 001D0888  4B E5 B4 3D */	bl getIndex__10JUTNameTabCFPCc
/* 801D394C 001D088C  80 9B 01 74 */	lwz r4, 0x174(r27)
/* 801D3950 001D0890  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 801D3954 001D0894  80 64 00 08 */	lwz r3, 8(r4)
/* 801D3958 001D0898  80 63 00 04 */	lwz r3, 4(r3)
/* 801D395C 001D089C  80 63 00 60 */	lwz r3, 0x60(r3)
/* 801D3960 001D08A0  7F 43 00 2E */	lwzx r26, r3, r0
/* 801D3964 001D08A4  28 1A 00 00 */	cmplwi r26, 0
/* 801D3968 001D08A8  40 82 00 20 */	bne .L_801D3988
/* 801D396C 001D08AC  3C 60 80 48 */	lis r3, lbl_804805BC@ha
/* 801D3970 001D08B0  3C A0 80 48 */	lis r5, lbl_804805CC@ha
/* 801D3974 001D08B4  38 63 05 BC */	addi r3, r3, lbl_804805BC@l
/* 801D3978 001D08B8  38 80 01 F9 */	li r4, 0x1f9
/* 801D397C 001D08BC  38 A5 05 CC */	addi r5, r5, lbl_804805CC@l
/* 801D3980 001D08C0  4C C6 31 82 */	crclr 6
/* 801D3984 001D08C4  4B E5 6C BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_801D3988:
/* 801D3988 001D08C8  B3 E1 00 08 */	sth r31, 8(r1)
/* 801D398C 001D08CC  38 A1 00 08 */	addi r5, r1, 8
/* 801D3990 001D08D0  38 80 00 00 */	li r4, 0
/* 801D3994 001D08D4  B3 C1 00 0A */	sth r30, 0xa(r1)
/* 801D3998 001D08D8  B3 A1 00 0C */	sth r29, 0xc(r1)
/* 801D399C 001D08DC  B3 81 00 0E */	sth r28, 0xe(r1)
/* 801D39A0 001D08E0  80 7A 00 2C */	lwz r3, 0x2c(r26)
/* 801D39A4 001D08E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D39A8 001D08E8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801D39AC 001D08EC  7D 89 03 A6 */	mtctr r12
/* 801D39B0 001D08F0  4E 80 04 21 */	bctrl 
/* 801D39B4 001D08F4  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801D39B8 001D08F8  80 63 00 08 */	lwz r3, 8(r3)
/* 801D39BC 001D08FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D39C0 001D0900  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D39C4 001D0904  7D 89 03 A6 */	mtctr r12
/* 801D39C8 001D0908  4E 80 04 21 */	bctrl 
/* 801D39CC 001D090C  80 7B 01 74 */	lwz r3, 0x174(r27)
/* 801D39D0 001D0910  80 63 00 08 */	lwz r3, 8(r3)
/* 801D39D4 001D0914  4B E9 32 99 */	bl diff__8J3DModelFv
.L_801D39D8:
/* 801D39D8 001D0918  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 801D39DC 001D091C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801D39E0 001D0920  7C 08 03 A6 */	mtlr r0
/* 801D39E4 001D0924  38 21 00 30 */	addi r1, r1, 0x30
/* 801D39E8 001D0928  4E 80 00 20 */	blr 
.endfn changeMaterial__Q34Game9ItemHoney4ItemFv

.fn updateBoundSphere__Q34Game9ItemHoney4ItemFv, global
/* 801D39EC 001D092C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D39F0 001D0930  7C 08 02 A6 */	mflr r0
/* 801D39F4 001D0934  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D39F8 001D0938  C0 03 01 9C */	lfs f0, 0x19c(r3)
/* 801D39FC 001D093C  D0 03 01 C4 */	stfs f0, 0x1c4(r3)
/* 801D3A00 001D0940  C0 03 01 A0 */	lfs f0, 0x1a0(r3)
/* 801D3A04 001D0944  D0 03 01 C8 */	stfs f0, 0x1c8(r3)
/* 801D3A08 001D0948  C0 03 01 A4 */	lfs f0, 0x1a4(r3)
/* 801D3A0C 001D094C  D0 03 01 CC */	stfs f0, 0x1cc(r3)
/* 801D3A10 001D0950  4B FF 8B FD */	bl updateCollTree__Q24Game8BaseItemFv
/* 801D3A14 001D0954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3A18 001D0958  7C 08 03 A6 */	mtlr r0
/* 801D3A1C 001D095C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3A20 001D0960  4E 80 00 20 */	blr 
.endfn updateBoundSphere__Q34Game9ItemHoney4ItemFv

.fn doSimulation__Q34Game9ItemHoney4ItemFf, global
/* 801D3A24 001D0964  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D3A28 001D0968  7C 08 02 A6 */	mflr r0
/* 801D3A2C 001D096C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3A30 001D0970  DB E1 00 10 */	stfd f31, 0x10(r1)
/* 801D3A34 001D0974  F3 E1 00 18 */	psq_st f31, 24(r1), 0, qr0
/* 801D3A38 001D0978  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3A3C 001D097C  7C 7F 1B 78 */	mr r31, r3
/* 801D3A40 001D0980  FF E0 08 90 */	fmr f31, f1
/* 801D3A44 001D0984  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 801D3A48 001D0988  28 00 00 00 */	cmplwi r0, 0
/* 801D3A4C 001D098C  40 82 00 40 */	bne .L_801D3A8C
/* 801D3A50 001D0990  4B FF 8F ED */	bl getStateID__Q24Game8CFSMItemFv
/* 801D3A54 001D0994  2C 03 00 00 */	cmpwi r3, 0
/* 801D3A58 001D0998  40 82 00 34 */	bne .L_801D3A8C
/* 801D3A5C 001D099C  80 8D 93 F0 */	lwz r4, _aiConstants__4Game@sda21(r13)
/* 801D3A60 001D09A0  7F E3 FB 78 */	mr r3, r31
/* 801D3A64 001D09A4  C0 1F 01 94 */	lfs f0, 0x194(r31)
/* 801D3A68 001D09A8  FC 20 F8 90 */	fmr f1, f31
/* 801D3A6C 001D09AC  C0 44 00 28 */	lfs f2, 0x28(r4)
/* 801D3A70 001D09B0  EC 1F 00 BC */	fnmsubs f0, f31, f2, f0
/* 801D3A74 001D09B4  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 801D3A78 001D09B8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D3A7C 001D09BC  81 8C 01 CC */	lwz r12, 0x1cc(r12)
/* 801D3A80 001D09C0  7D 89 03 A6 */	mtctr r12
/* 801D3A84 001D09C4  4E 80 04 21 */	bctrl 
/* 801D3A88 001D09C8  48 00 00 14 */	b .L_801D3A9C
.L_801D3A8C:
/* 801D3A8C 001D09CC  C0 02 B3 20 */	lfs f0, lbl_80519680@sda21(r2)
/* 801D3A90 001D09D0  D0 1F 01 98 */	stfs f0, 0x198(r31)
/* 801D3A94 001D09D4  D0 1F 01 94 */	stfs f0, 0x194(r31)
/* 801D3A98 001D09D8  D0 1F 01 90 */	stfs f0, 0x190(r31)
.L_801D3A9C:
/* 801D3A9C 001D09DC  E3 E1 00 18 */	psq_l f31, 24(r1), 0, qr0
/* 801D3AA0 001D09E0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D3AA4 001D09E4  CB E1 00 10 */	lfd f31, 0x10(r1)
/* 801D3AA8 001D09E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3AAC 001D09EC  7C 08 03 A6 */	mtlr r0
/* 801D3AB0 001D09F0  38 21 00 20 */	addi r1, r1, 0x20
/* 801D3AB4 001D09F4  4E 80 00 20 */	blr 
.endfn doSimulation__Q34Game9ItemHoney4ItemFf

.fn absorbable__Q34Game9ItemHoney4ItemFv, global
/* 801D3AB8 001D09F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3ABC 001D09FC  7C 08 02 A6 */	mflr r0
/* 801D3AC0 001D0A00  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3AC4 001D0A04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3AC8 001D0A08  7C 7F 1B 78 */	mr r31, r3
/* 801D3ACC 001D0A0C  4B FF 8F 69 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3AD0 001D0A10  28 03 00 00 */	cmplwi r3, 0
/* 801D3AD4 001D0A14  41 82 00 20 */	beq .L_801D3AF4
/* 801D3AD8 001D0A18  7F E3 FB 78 */	mr r3, r31
/* 801D3ADC 001D0A1C  4B FF 8F 59 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3AE0 001D0A20  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3AE4 001D0A24  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801D3AE8 001D0A28  7D 89 03 A6 */	mtctr r12
/* 801D3AEC 001D0A2C  4E 80 04 21 */	bctrl 
/* 801D3AF0 001D0A30  48 00 00 08 */	b .L_801D3AF8
.L_801D3AF4:
/* 801D3AF4 001D0A34  38 60 00 00 */	li r3, 0
.L_801D3AF8:
/* 801D3AF8 001D0A38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3AFC 001D0A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3B00 001D0A40  7C 08 03 A6 */	mtlr r0
/* 801D3B04 001D0A44  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3B08 001D0A48  4E 80 00 20 */	blr 
.endfn absorbable__Q34Game9ItemHoney4ItemFv

.fn absorbable__Q34Game9ItemHoney5StateFv, weak
/* 801D3B0C 001D0A4C  38 60 00 00 */	li r3, 0
/* 801D3B10 001D0A50  4E 80 00 20 */	blr 
.endfn absorbable__Q34Game9ItemHoney5StateFv

.fn onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent, global
/* 801D3B14 001D0A54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3B18 001D0A58  7C 08 02 A6 */	mflr r0
/* 801D3B1C 001D0A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3B20 001D0A60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3B24 001D0A64  7C 9F 23 78 */	mr r31, r4
/* 801D3B28 001D0A68  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3B2C 001D0A6C  7C 7E 1B 78 */	mr r30, r3
/* 801D3B30 001D0A70  4B FF 8F 05 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3B34 001D0A74  28 03 00 00 */	cmplwi r3, 0
/* 801D3B38 001D0A78  41 82 00 24 */	beq .L_801D3B5C
/* 801D3B3C 001D0A7C  7F C3 F3 78 */	mr r3, r30
/* 801D3B40 001D0A80  4B FF 8E F5 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3B44 001D0A84  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3B48 001D0A88  7F C4 F3 78 */	mr r4, r30
/* 801D3B4C 001D0A8C  7F E5 FB 78 */	mr r5, r31
/* 801D3B50 001D0A90  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801D3B54 001D0A94  7D 89 03 A6 */	mtctr r12
/* 801D3B58 001D0A98  4E 80 04 21 */	bctrl 
.L_801D3B5C:
/* 801D3B5C 001D0A9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3B60 001D0AA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3B64 001D0AA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3B68 001D0AA8  7C 08 03 A6 */	mtlr r0
/* 801D3B6C 001D0AAC  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3B70 001D0AB0  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent

.fn collisionCallback__Q34Game9ItemHoney4ItemFRQ24Game9CollEvent, global
/* 801D3B74 001D0AB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3B78 001D0AB8  7C 08 02 A6 */	mflr r0
/* 801D3B7C 001D0ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3B80 001D0AC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3B84 001D0AC4  7C 9F 23 78 */	mr r31, r4
/* 801D3B88 001D0AC8  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3B8C 001D0ACC  7C 7E 1B 78 */	mr r30, r3
/* 801D3B90 001D0AD0  4B FF 8E A5 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3B94 001D0AD4  28 03 00 00 */	cmplwi r3, 0
/* 801D3B98 001D0AD8  41 82 00 24 */	beq .L_801D3BBC
/* 801D3B9C 001D0ADC  7F C3 F3 78 */	mr r3, r30
/* 801D3BA0 001D0AE0  4B FF 8E 95 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3BA4 001D0AE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3BA8 001D0AE8  7F C4 F3 78 */	mr r4, r30
/* 801D3BAC 001D0AEC  7F E5 FB 78 */	mr r5, r31
/* 801D3BB0 001D0AF0  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 801D3BB4 001D0AF4  7D 89 03 A6 */	mtctr r12
/* 801D3BB8 001D0AF8  4E 80 04 21 */	bctrl 
.L_801D3BBC:
/* 801D3BBC 001D0AFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3BC0 001D0B00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3BC4 001D0B04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3BC8 001D0B08  7C 08 03 A6 */	mtlr r0
/* 801D3BCC 001D0B0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3BD0 001D0B10  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game9ItemHoney4ItemFRQ24Game9CollEvent

.fn collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent, weak
/* 801D3BD4 001D0B14  4E 80 00 20 */	blr 
.endfn collisionCallback__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game9CollEvent

.fn interactAbsorb__Q34Game9ItemHoney4ItemFRQ24Game14InteractAbsorb, global
/* 801D3BD8 001D0B18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3BDC 001D0B1C  7C 08 02 A6 */	mflr r0
/* 801D3BE0 001D0B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3BE4 001D0B24  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3BE8 001D0B28  7C 9F 23 78 */	mr r31, r4
/* 801D3BEC 001D0B2C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3BF0 001D0B30  7C 7E 1B 78 */	mr r30, r3
/* 801D3BF4 001D0B34  4B FF 8E 41 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3BF8 001D0B38  28 03 00 00 */	cmplwi r3, 0
/* 801D3BFC 001D0B3C  41 82 00 28 */	beq .L_801D3C24
/* 801D3C00 001D0B40  7F C3 F3 78 */	mr r3, r30
/* 801D3C04 001D0B44  4B FF 8E 31 */	bl getCurrState__Q24Game8CFSMItemFv
/* 801D3C08 001D0B48  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3C0C 001D0B4C  7F C4 F3 78 */	mr r4, r30
/* 801D3C10 001D0B50  7F E5 FB 78 */	mr r5, r31
/* 801D3C14 001D0B54  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801D3C18 001D0B58  7D 89 03 A6 */	mtctr r12
/* 801D3C1C 001D0B5C  4E 80 04 21 */	bctrl 
/* 801D3C20 001D0B60  48 00 00 08 */	b .L_801D3C28
.L_801D3C24:
/* 801D3C24 001D0B64  38 60 00 00 */	li r3, 0
.L_801D3C28:
/* 801D3C28 001D0B68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3C2C 001D0B6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3C30 001D0B70  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3C34 001D0B74  7C 08 03 A6 */	mtlr r0
/* 801D3C38 001D0B78  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3C3C 001D0B7C  4E 80 00 20 */	blr 
.endfn interactAbsorb__Q34Game9ItemHoney4ItemFRQ24Game14InteractAbsorb

.fn interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb, weak
/* 801D3C40 001D0B80  38 60 00 00 */	li r3, 0
/* 801D3C44 001D0B84  4E 80 00 20 */	blr 
.endfn interactAbsorb__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb

.fn doDirectDraw__Q34Game9ItemHoney4ItemFR8Graphics, global
/* 801D3C48 001D0B88  4E 80 00 20 */	blr 
.endfn doDirectDraw__Q34Game9ItemHoney4ItemFR8Graphics

.fn makeTrMatrix__Q34Game9ItemHoney4ItemFv, global
/* 801D3C4C 001D0B8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D3C50 001D0B90  7C 08 02 A6 */	mflr r0
/* 801D3C54 001D0B94  3C 80 80 48 */	lis r4, lbl_804805DC@ha
/* 801D3C58 001D0B98  7C 65 1B 78 */	mr r5, r3
/* 801D3C5C 001D0B9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D3C60 001D0BA0  38 64 05 DC */	addi r3, r4, lbl_804805DC@l
/* 801D3C64 001D0BA4  38 C1 00 14 */	addi r6, r1, 0x14
/* 801D3C68 001D0BA8  80 83 00 00 */	lwz r4, 0(r3)
/* 801D3C6C 001D0BAC  81 03 00 04 */	lwz r8, 4(r3)
/* 801D3C70 001D0BB0  80 E3 00 08 */	lwz r7, 8(r3)
/* 801D3C74 001D0BB4  38 65 01 38 */	addi r3, r5, 0x138
/* 801D3C78 001D0BB8  88 05 01 E0 */	lbz r0, 0x1e0(r5)
/* 801D3C7C 001D0BBC  38 A5 01 9C */	addi r5, r5, 0x19c
/* 801D3C80 001D0BC0  90 81 00 14 */	stw r4, 0x14(r1)
/* 801D3C84 001D0BC4  38 81 00 08 */	addi r4, r1, 8
/* 801D3C88 001D0BC8  54 00 10 3A */	slwi r0, r0, 2
/* 801D3C8C 001D0BCC  91 01 00 18 */	stw r8, 0x18(r1)
/* 801D3C90 001D0BD0  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 801D3C94 001D0BD4  7C 06 04 2E */	lfsx f0, r6, r0
/* 801D3C98 001D0BD8  D0 01 00 08 */	stfs f0, 8(r1)
/* 801D3C9C 001D0BDC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 801D3CA0 001D0BE0  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 801D3CA4 001D0BE4  48 25 48 BD */	bl "makeST__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 801D3CA8 001D0BE8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D3CAC 001D0BEC  7C 08 03 A6 */	mtlr r0
/* 801D3CB0 001D0BF0  38 21 00 20 */	addi r1, r1, 0x20
/* 801D3CB4 001D0BF4  4E 80 00 20 */	blr 
.endfn makeTrMatrix__Q34Game9ItemHoney4ItemFv

.fn onStartCapture__Q34Game9ItemHoney4ItemFv, global
/* 801D3CB8 001D0BF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3CBC 001D0BFC  7C 08 02 A6 */	mflr r0
/* 801D3CC0 001D0C00  7C 64 1B 78 */	mr r4, r3
/* 801D3CC4 001D0C04  38 A0 00 00 */	li r5, 0
/* 801D3CC8 001D0C08  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3CCC 001D0C0C  38 C0 00 00 */	li r6, 0
/* 801D3CD0 001D0C10  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801D3CD4 001D0C14  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3CD8 001D0C18  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D3CDC 001D0C1C  7D 89 03 A6 */	mtctr r12
/* 801D3CE0 001D0C20  4E 80 04 21 */	bctrl 
/* 801D3CE4 001D0C24  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3CE8 001D0C28  7C 08 03 A6 */	mtlr r0
/* 801D3CEC 001D0C2C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3CF0 001D0C30  4E 80 00 20 */	blr 
.endfn onStartCapture__Q34Game9ItemHoney4ItemFv

.fn onUpdateCapture__Q34Game9ItemHoney4ItemFR7Matrixf, global
/* 801D3CF4 001D0C34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3CF8 001D0C38  7C 08 02 A6 */	mflr r0
/* 801D3CFC 001D0C3C  C0 02 B3 20 */	lfs f0, lbl_80519680@sda21(r2)
/* 801D3D00 001D0C40  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3D04 001D0C44  C0 23 01 44 */	lfs f1, 0x144(r3)
/* 801D3D08 001D0C48  D0 23 01 9C */	stfs f1, 0x19c(r3)
/* 801D3D0C 001D0C4C  C0 23 01 54 */	lfs f1, 0x154(r3)
/* 801D3D10 001D0C50  D0 23 01 A0 */	stfs f1, 0x1a0(r3)
/* 801D3D14 001D0C54  C0 23 01 64 */	lfs f1, 0x164(r3)
/* 801D3D18 001D0C58  D0 23 01 A4 */	stfs f1, 0x1a4(r3)
/* 801D3D1C 001D0C5C  D0 03 01 90 */	stfs f0, 0x190(r3)
/* 801D3D20 001D0C60  D0 03 01 94 */	stfs f0, 0x194(r3)
/* 801D3D24 001D0C64  D0 03 01 98 */	stfs f0, 0x198(r3)
/* 801D3D28 001D0C68  81 83 00 00 */	lwz r12, 0(r3)
/* 801D3D2C 001D0C6C  81 8C 02 18 */	lwz r12, 0x218(r12)
/* 801D3D30 001D0C70  7D 89 03 A6 */	mtctr r12
/* 801D3D34 001D0C74  4E 80 04 21 */	bctrl 
/* 801D3D38 001D0C78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3D3C 001D0C7C  7C 08 03 A6 */	mtlr r0
/* 801D3D40 001D0C80  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3D44 001D0C84  4E 80 00 20 */	blr 
.endfn onUpdateCapture__Q34Game9ItemHoney4ItemFR7Matrixf

.fn onEndCapture__Q34Game9ItemHoney4ItemFv, global
/* 801D3D48 001D0C88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3D4C 001D0C8C  7C 08 02 A6 */	mflr r0
/* 801D3D50 001D0C90  38 83 01 9C */	addi r4, r3, 0x19c
/* 801D3D54 001D0C94  38 A0 00 00 */	li r5, 0
/* 801D3D58 001D0C98  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3D5C 001D0C9C  4B F6 74 4D */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801D3D60 001D0CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3D64 001D0CA4  7C 08 03 A6 */	mtlr r0
/* 801D3D68 001D0CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3D6C 001D0CAC  4E 80 00 20 */	blr 
.endfn onEndCapture__Q34Game9ItemHoney4ItemFv

.fn on_movie_end__Q34Game9ItemHoney4ItemFb, global
/* 801D3D70 001D0CB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3D74 001D0CB4  7C 08 02 A6 */	mflr r0
/* 801D3D78 001D0CB8  38 80 00 04 */	li r4, 4
/* 801D3D7C 001D0CBC  38 63 01 A8 */	addi r3, r3, 0x1a8
/* 801D3D80 001D0CC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3D84 001D0CC4  38 A0 00 00 */	li r5, 0
/* 801D3D88 001D0CC8  48 25 4F 01 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801D3D8C 001D0CCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3D90 001D0CD0  7C 08 03 A6 */	mtlr r0
/* 801D3D94 001D0CD4  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3D98 001D0CD8  4E 80 00 20 */	blr 
.endfn on_movie_end__Q34Game9ItemHoney4ItemFb

.fn isShrinking__Q34Game9ItemHoney4ItemFv, global
/* 801D3D9C 001D0CDC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3DA0 001D0CE0  7C 08 02 A6 */	mflr r0
/* 801D3DA4 001D0CE4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3DA8 001D0CE8  4B FF 8C 95 */	bl getStateID__Q24Game8CFSMItemFv
/* 801D3DAC 001D0CEC  20 03 00 03 */	subfic r0, r3, 3
/* 801D3DB0 001D0CF0  7C 00 00 34 */	cntlzw r0, r0
/* 801D3DB4 001D0CF4  54 03 D9 7E */	srwi r3, r0, 5
/* 801D3DB8 001D0CF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3DBC 001D0CFC  7C 08 03 A6 */	mtlr r0
/* 801D3DC0 001D0D00  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3DC4 001D0D04  4E 80 00 20 */	blr 
.endfn isShrinking__Q34Game9ItemHoney4ItemFv

.fn __ct__Q34Game9ItemHoney3MgrFv, global
/* 801D3DC8 001D0D08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3DCC 001D0D0C  7C 08 02 A6 */	mflr r0
/* 801D3DD0 001D0D10  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3DD4 001D0D14  7C 80 07 35 */	extsh. r0, r4
/* 801D3DD8 001D0D18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3DDC 001D0D1C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3DE0 001D0D20  7C 7E 1B 78 */	mr r30, r3
/* 801D3DE4 001D0D24  41 82 00 0C */	beq .L_801D3DF0
/* 801D3DE8 001D0D28  38 1E 00 80 */	addi r0, r30, 0x80
/* 801D3DEC 001D0D2C  90 1E 00 04 */	stw r0, 4(r30)
.L_801D3DF0:
/* 801D3DF0 001D0D30  7F C3 F3 78 */	mr r3, r30
/* 801D3DF4 001D0D34  38 80 00 00 */	li r4, 0
/* 801D3DF8 001D0D38  38 A0 00 01 */	li r5, 1
/* 801D3DFC 001D0D3C  4B FF 8F 75 */	bl __ct__Q24Game11BaseItemMgrFi
/* 801D3E00 001D0D40  3B FE 00 30 */	addi r31, r30, 0x30
/* 801D3E04 001D0D44  7F E3 FB 78 */	mr r3, r31
/* 801D3E08 001D0D48  48 23 D5 89 */	bl __ct__5CNodeFv
/* 801D3E0C 001D0D4C  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 801D3E10 001D0D50  3C 80 80 4C */	lis r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D3E14 001D0D54  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801D3E18 001D0D58  3C 60 80 4B */	lis r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3E1C 001D0D5C  90 1F 00 00 */	stw r0, 0(r31)
/* 801D3E20 001D0D60  38 04 80 B8 */	addi r0, r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D3E24 001D0D64  38 83 7F F8 */	addi r4, r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3E28 001D0D68  38 A0 00 00 */	li r5, 0
/* 801D3E2C 001D0D6C  90 1F 00 00 */	stw r0, 0(r31)
/* 801D3E30 001D0D70  38 04 00 74 */	addi r0, r4, 0x74
/* 801D3E34 001D0D74  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801D3E38 001D0D78  98 BF 00 18 */	stb r5, 0x18(r31)
/* 801D3E3C 001D0D7C  90 9E 00 00 */	stw r4, 0(r30)
/* 801D3E40 001D0D80  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D3E44 001D0D84  48 00 18 E1 */	bl "__ct__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
/* 801D3E48 001D0D88  3C 80 80 4B */	lis r4, __vt__Q34Game9ItemHoney3Mgr@ha
/* 801D3E4C 001D0D8C  7F C3 F3 78 */	mr r3, r30
/* 801D3E50 001D0D90  38 A4 7E 30 */	addi r5, r4, __vt__Q34Game9ItemHoney3Mgr@l
/* 801D3E54 001D0D94  38 80 00 01 */	li r4, 1
/* 801D3E58 001D0D98  90 BE 00 00 */	stw r5, 0(r30)
/* 801D3E5C 001D0D9C  38 05 00 74 */	addi r0, r5, 0x74
/* 801D3E60 001D0DA0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D3E64 001D0DA4  4B FF 8F 69 */	bl setModelSize__Q24Game11BaseItemMgrFi
/* 801D3E68 001D0DA8  3C 60 80 48 */	lis r3, lbl_804805E8@ha
/* 801D3E6C 001D0DAC  38 02 B3 4C */	addi r0, r2, lbl_805196AC@sda21
/* 801D3E70 001D0DB0  38 83 05 E8 */	addi r4, r3, lbl_804805E8@l
/* 801D3E74 001D0DB4  7F C3 F3 78 */	mr r3, r30
/* 801D3E78 001D0DB8  90 9E 00 28 */	stw r4, 0x28(r30)
/* 801D3E7C 001D0DBC  90 1E 00 08 */	stw r0, 8(r30)
/* 801D3E80 001D0DC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3E84 001D0DC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3E88 001D0DC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3E8C 001D0DCC  7C 08 03 A6 */	mtlr r0
/* 801D3E90 001D0DD0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3E94 001D0DD4  4E 80 00 20 */	blr 
.endfn __ct__Q34Game9ItemHoney3MgrFv

.fn "__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D3E98 001D0DD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3E9C 001D0DDC  7C 08 02 A6 */	mflr r0
/* 801D3EA0 001D0DE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3EA4 001D0DE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3EA8 001D0DE8  7C 9F 23 78 */	mr r31, r4
/* 801D3EAC 001D0DEC  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3EB0 001D0DF0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D3EB4 001D0DF4  41 82 00 C8 */	beq .L_801D3F7C
/* 801D3EB8 001D0DF8  3C 60 80 4B */	lis r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3EBC 001D0DFC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D3EC0 001D0E00  38 63 7F F8 */	addi r3, r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3EC4 001D0E04  90 7E 00 00 */	stw r3, 0(r30)
/* 801D3EC8 001D0E08  38 03 00 74 */	addi r0, r3, 0x74
/* 801D3ECC 001D0E0C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D3ED0 001D0E10  41 82 00 68 */	beq .L_801D3F38
/* 801D3ED4 001D0E14  3C 60 80 4B */	lis r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3ED8 001D0E18  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D3EDC 001D0E1C  38 63 7F 6C */	addi r3, r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3EE0 001D0E20  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D3EE4 001D0E24  38 03 00 2C */	addi r0, r3, 0x2c
/* 801D3EE8 001D0E28  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D3EEC 001D0E2C  41 82 00 4C */	beq .L_801D3F38
/* 801D3EF0 001D0E30  3C 60 80 4B */	lis r3, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3EF4 001D0E34  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D3EF8 001D0E38  38 63 7E F0 */	addi r3, r3, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3EFC 001D0E3C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D3F00 001D0E40  38 03 00 2C */	addi r0, r3, 0x2c
/* 801D3F04 001D0E44  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D3F08 001D0E48  41 82 00 30 */	beq .L_801D3F38
/* 801D3F0C 001D0E4C  3C 60 80 4C */	lis r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D3F10 001D0E50  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D3F14 001D0E54  38 03 80 B8 */	addi r0, r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D3F18 001D0E58  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D3F1C 001D0E5C  41 82 00 1C */	beq .L_801D3F38
/* 801D3F20 001D0E60  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D3F24 001D0E64  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801D3F28 001D0E68  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D3F2C 001D0E6C  38 80 00 00 */	li r4, 0
/* 801D3F30 001D0E70  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D3F34 001D0E74  48 23 D6 55 */	bl __dt__5CNodeFv
.L_801D3F38:
/* 801D3F38 001D0E78  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D3F3C 001D0E7C  41 82 00 30 */	beq .L_801D3F6C
/* 801D3F40 001D0E80  3C 60 80 4C */	lis r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D3F44 001D0E84  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D3F48 001D0E88  38 03 80 B8 */	addi r0, r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D3F4C 001D0E8C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D3F50 001D0E90  41 82 00 1C */	beq .L_801D3F6C
/* 801D3F54 001D0E94  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D3F58 001D0E98  38 7E 00 30 */	addi r3, r30, 0x30
/* 801D3F5C 001D0E9C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D3F60 001D0EA0  38 80 00 00 */	li r4, 0
/* 801D3F64 001D0EA4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D3F68 001D0EA8  48 23 D6 21 */	bl __dt__5CNodeFv
.L_801D3F6C:
/* 801D3F6C 001D0EAC  7F E0 07 35 */	extsh. r0, r31
/* 801D3F70 001D0EB0  40 81 00 0C */	ble .L_801D3F7C
/* 801D3F74 001D0EB4  7F C3 F3 78 */	mr r3, r30
/* 801D3F78 001D0EB8  4B E5 01 3D */	bl __dl__FPv
.L_801D3F7C:
/* 801D3F7C 001D0EBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D3F80 001D0EC0  7F C3 F3 78 */	mr r3, r30
/* 801D3F84 001D0EC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D3F88 001D0EC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D3F8C 001D0ECC  7C 08 03 A6 */	mtlr r0
/* 801D3F90 001D0ED0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D3F94 001D0ED4  4E 80 00 20 */	blr 
.endfn "__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "__dt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D3F98 001D0ED8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D3F9C 001D0EDC  7C 08 02 A6 */	mflr r0
/* 801D3FA0 001D0EE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D3FA4 001D0EE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D3FA8 001D0EE8  7C 9F 23 78 */	mr r31, r4
/* 801D3FAC 001D0EEC  93 C1 00 08 */	stw r30, 8(r1)
/* 801D3FB0 001D0EF0  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D3FB4 001D0EF4  41 82 00 68 */	beq .L_801D401C
/* 801D3FB8 001D0EF8  3C 80 80 4B */	lis r4, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3FBC 001D0EFC  38 84 7F 6C */	addi r4, r4, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3FC0 001D0F00  90 9E 00 00 */	stw r4, 0(r30)
/* 801D3FC4 001D0F04  38 04 00 2C */	addi r0, r4, 0x2c
/* 801D3FC8 001D0F08  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801D3FCC 001D0F0C  41 82 00 40 */	beq .L_801D400C
/* 801D3FD0 001D0F10  3C 80 80 4B */	lis r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D3FD4 001D0F14  38 84 7E F0 */	addi r4, r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D3FD8 001D0F18  90 9E 00 00 */	stw r4, 0(r30)
/* 801D3FDC 001D0F1C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801D3FE0 001D0F20  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801D3FE4 001D0F24  41 82 00 28 */	beq .L_801D400C
/* 801D3FE8 001D0F28  3C 80 80 4C */	lis r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D3FEC 001D0F2C  38 04 80 B8 */	addi r0, r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D3FF0 001D0F30  90 1E 00 00 */	stw r0, 0(r30)
/* 801D3FF4 001D0F34  41 82 00 18 */	beq .L_801D400C
/* 801D3FF8 001D0F38  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801D3FFC 001D0F3C  38 80 00 00 */	li r4, 0
/* 801D4000 001D0F40  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801D4004 001D0F44  90 1E 00 00 */	stw r0, 0(r30)
/* 801D4008 001D0F48  48 23 D5 81 */	bl __dt__5CNodeFv
.L_801D400C:
/* 801D400C 001D0F4C  7F E0 07 35 */	extsh. r0, r31
/* 801D4010 001D0F50  40 81 00 0C */	ble .L_801D401C
/* 801D4014 001D0F54  7F C3 F3 78 */	mr r3, r30
/* 801D4018 001D0F58  4B E5 00 9D */	bl __dl__FPv
.L_801D401C:
/* 801D401C 001D0F5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4020 001D0F60  7F C3 F3 78 */	mr r3, r30
/* 801D4024 001D0F64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D4028 001D0F68  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D402C 001D0F6C  7C 08 03 A6 */	mtlr r0
/* 801D4030 001D0F70  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4034 001D0F74  4E 80 00 20 */	blr 
.endfn "__dt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "__dt__33Container<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4038 001D0F78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D403C 001D0F7C  7C 08 02 A6 */	mflr r0
/* 801D4040 001D0F80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4044 001D0F84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D4048 001D0F88  7C 9F 23 78 */	mr r31, r4
/* 801D404C 001D0F8C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D4050 001D0F90  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D4054 001D0F94  41 82 00 38 */	beq .L_801D408C
/* 801D4058 001D0F98  3C 80 80 4C */	lis r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D405C 001D0F9C  38 04 80 B8 */	addi r0, r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D4060 001D0FA0  90 1E 00 00 */	stw r0, 0(r30)
/* 801D4064 001D0FA4  41 82 00 18 */	beq .L_801D407C
/* 801D4068 001D0FA8  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801D406C 001D0FAC  38 80 00 00 */	li r4, 0
/* 801D4070 001D0FB0  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801D4074 001D0FB4  90 1E 00 00 */	stw r0, 0(r30)
/* 801D4078 001D0FB8  48 23 D5 11 */	bl __dt__5CNodeFv
.L_801D407C:
/* 801D407C 001D0FBC  7F E0 07 35 */	extsh. r0, r31
/* 801D4080 001D0FC0  40 81 00 0C */	ble .L_801D408C
/* 801D4084 001D0FC4  7F C3 F3 78 */	mr r3, r30
/* 801D4088 001D0FC8  4B E5 00 2D */	bl __dl__FPv
.L_801D408C:
/* 801D408C 001D0FCC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4090 001D0FD0  7F C3 F3 78 */	mr r3, r30
/* 801D4094 001D0FD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D4098 001D0FD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D409C 001D0FDC  7C 08 03 A6 */	mtlr r0
/* 801D40A0 001D0FE0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D40A4 001D0FE4  4E 80 00 20 */	blr 
.endfn "__dt__33Container<Q34Game9ItemHoney4Item>Fv"

.fn onCreateModel__Q34Game9ItemHoney3MgrFPQ28SysShape5Model, global
/* 801D40A8 001D0FE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D40AC 001D0FEC  7C 08 02 A6 */	mflr r0
/* 801D40B0 001D0FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D40B4 001D0FF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D40B8 001D0FF8  7C 9F 23 78 */	mr r31, r4
/* 801D40BC 001D0FFC  3C 80 01 00 */	lis r4, 0x01000200@ha
/* 801D40C0 001D1000  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D40C4 001D1004  38 84 02 00 */	addi r4, r4, 0x01000200@l
/* 801D40C8 001D1008  4B E9 26 11 */	bl newDifferedDisplayList__8J3DModelFUl
/* 801D40CC 001D100C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D40D0 001D1010  81 83 00 00 */	lwz r12, 0(r3)
/* 801D40D4 001D1014  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D40D8 001D1018  7D 89 03 A6 */	mtctr r12
/* 801D40DC 001D101C  4E 80 04 21 */	bctrl 
/* 801D40E0 001D1020  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D40E4 001D1024  81 83 00 00 */	lwz r12, 0(r3)
/* 801D40E8 001D1028  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D40EC 001D102C  7D 89 03 A6 */	mtctr r12
/* 801D40F0 001D1030  4E 80 04 21 */	bctrl 
/* 801D40F4 001D1034  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D40F8 001D1038  4B E9 28 2D */	bl makeDL__8J3DModelFv
/* 801D40FC 001D103C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D4100 001D1040  4B E9 26 F5 */	bl lock__8J3DModelFv
/* 801D4104 001D1044  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4108 001D1048  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D410C 001D104C  7C 08 03 A6 */	mtlr r0
/* 801D4110 001D1050  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4114 001D1054  4E 80 00 20 */	blr 
.endfn onCreateModel__Q34Game9ItemHoney3MgrFPQ28SysShape5Model

.fn onLoadResources__Q34Game9ItemHoney3MgrFv, global
/* 801D4118 001D1058  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D411C 001D105C  7C 08 02 A6 */	mflr r0
/* 801D4120 001D1060  3C 80 80 48 */	lis r4, lbl_804805B0@ha
/* 801D4124 001D1064  38 A0 00 00 */	li r5, 0
/* 801D4128 001D1068  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D412C 001D106C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D4130 001D1070  3B E4 05 B0 */	addi r31, r4, lbl_804805B0@l
/* 801D4134 001D1074  38 9F 00 00 */	addi r4, r31, 0
/* 801D4138 001D1078  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D413C 001D107C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D4140 001D1080  7C 7D 1B 78 */	mr r29, r3
/* 801D4144 001D1084  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801D4148 001D1088  48 24 F2 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 801D414C 001D108C  7F A3 EB 78 */	mr r3, r29
/* 801D4150 001D1090  38 82 B3 54 */	addi r4, r2, lbl_805196B4@sda21
/* 801D4154 001D1094  4B FF 8D 81 */	bl loadArchive__Q24Game11BaseItemMgrFPc
/* 801D4158 001D1098  7F A3 EB 78 */	mr r3, r29
/* 801D415C 001D109C  38 9F 00 54 */	addi r4, r31, 0x54
/* 801D4160 001D10A0  38 A0 00 00 */	li r5, 0
/* 801D4164 001D10A4  3C C0 00 02 */	lis r6, 2
/* 801D4168 001D10A8  4B FF 8D E9 */	bl loadBmd__Q24Game11BaseItemMgrFPciUl
/* 801D416C 001D10AC  80 7D 00 1C */	lwz r3, 0x1c(r29)
/* 801D4170 001D10B0  3C 80 00 04 */	lis r4, 4
/* 801D4174 001D10B4  80 63 00 00 */	lwz r3, 0(r3)
/* 801D4178 001D10B8  4B EA F7 61 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 801D417C 001D10BC  7F A3 EB 78 */	mr r3, r29
/* 801D4180 001D10C0  38 9F 00 60 */	addi r4, r31, 0x60
/* 801D4184 001D10C4  4B FF 90 49 */	bl openTextArc__Q24Game11BaseItemMgrFPc
/* 801D4188 001D10C8  7C 60 1B 78 */	mr r0, r3
/* 801D418C 001D10CC  7F A3 EB 78 */	mr r3, r29
/* 801D4190 001D10D0  7C 1E 03 78 */	mr r30, r0
/* 801D4194 001D10D4  38 BF 00 6C */	addi r5, r31, 0x6c
/* 801D4198 001D10D8  7F C4 F3 78 */	mr r4, r30
/* 801D419C 001D10DC  4B FF 8E 61 */	bl loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
/* 801D41A0 001D10E0  7F A3 EB 78 */	mr r3, r29
/* 801D41A4 001D10E4  7F C4 F3 78 */	mr r4, r30
/* 801D41A8 001D10E8  4B FF 90 A9 */	bl closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
/* 801D41AC 001D10EC  7F A3 EB 78 */	mr r3, r29
/* 801D41B0 001D10F0  38 80 00 18 */	li r4, 0x18
/* 801D41B4 001D10F4  3C A0 00 08 */	lis r5, 8
/* 801D41B8 001D10F8  48 00 19 55 */	bl "createMgr__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FiUl"
/* 801D41BC 001D10FC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 801D41C0 001D1100  38 9F 00 00 */	addi r4, r31, 0
/* 801D41C4 001D1104  48 24 F1 A1 */	bl heapStatusEnd__6SystemFPc
/* 801D41C8 001D1108  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D41CC 001D110C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D41D0 001D1110  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D41D4 001D1114  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D41D8 001D1118  7C 08 03 A6 */	mtlr r0
/* 801D41DC 001D111C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D41E0 001D1120  4E 80 00 20 */	blr 
.endfn onLoadResources__Q34Game9ItemHoney3MgrFv

.fn birth__Q34Game9ItemHoney3MgrFv, global
/* 801D41E4 001D1124  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D41E8 001D1128  7C 08 02 A6 */	mflr r0
/* 801D41EC 001D112C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D41F0 001D1130  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D41F4 001D1134  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801D41F8 001D1138  7D 89 03 A6 */	mtctr r12
/* 801D41FC 001D113C  4E 80 04 21 */	bctrl 
/* 801D4200 001D1140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4204 001D1144  7C 08 03 A6 */	mtlr r0
/* 801D4208 001D1148  38 21 00 10 */	addi r1, r1, 0x10
/* 801D420C 001D114C  4E 80 00 20 */	blr 
.endfn birth__Q34Game9ItemHoney3MgrFv

.fn "generatorBirth__Q34Game9ItemHoney3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm", global
/* 801D4210 001D1150  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4214 001D1154  7C 08 02 A6 */	mflr r0
/* 801D4218 001D1158  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D421C 001D115C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D4220 001D1160  93 C1 00 08 */	stw r30, 8(r1)
/* 801D4224 001D1164  7C 9E 23 78 */	mr r30, r4
/* 801D4228 001D1168  81 83 00 00 */	lwz r12, 0(r3)
/* 801D422C 001D116C  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801D4230 001D1170  7D 89 03 A6 */	mtctr r12
/* 801D4234 001D1174  4E 80 04 21 */	bctrl 
/* 801D4238 001D1178  38 80 00 00 */	li r4, 0
/* 801D423C 001D117C  7C 7F 1B 78 */	mr r31, r3
/* 801D4240 001D1180  4B F6 6D 89 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801D4244 001D1184  7F E3 FB 78 */	mr r3, r31
/* 801D4248 001D1188  7F C4 F3 78 */	mr r4, r30
/* 801D424C 001D118C  38 A0 00 00 */	li r5, 0
/* 801D4250 001D1190  4B F6 6F 59 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801D4254 001D1194  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4258 001D1198  7F E3 FB 78 */	mr r3, r31
/* 801D425C 001D119C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D4260 001D11A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D4264 001D11A4  7C 08 03 A6 */	mtlr r0
/* 801D4268 001D11A8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D426C 001D11AC  4E 80 00 20 */	blr 
.endfn "generatorBirth__Q34Game9ItemHoney3MgrFR10Vector3<f>R10Vector3<f>PQ24Game11GenItemParm"

.fn __dt__Q34Game9ItemHoney3MgrFv, weak
/* 801D4270 001D11B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4274 001D11B4  7C 08 02 A6 */	mflr r0
/* 801D4278 001D11B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D427C 001D11BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D4280 001D11C0  7C 9F 23 78 */	mr r31, r4
/* 801D4284 001D11C4  93 C1 00 08 */	stw r30, 8(r1)
/* 801D4288 001D11C8  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D428C 001D11CC  41 82 00 E0 */	beq .L_801D436C
/* 801D4290 001D11D0  3C 60 80 4B */	lis r3, __vt__Q34Game9ItemHoney3Mgr@ha
/* 801D4294 001D11D4  38 63 7E 30 */	addi r3, r3, __vt__Q34Game9ItemHoney3Mgr@l
/* 801D4298 001D11D8  90 7E 00 00 */	stw r3, 0(r30)
/* 801D429C 001D11DC  38 03 00 74 */	addi r0, r3, 0x74
/* 801D42A0 001D11E0  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D42A4 001D11E4  41 82 00 B8 */	beq .L_801D435C
/* 801D42A8 001D11E8  3C 60 80 4B */	lis r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D42AC 001D11EC  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D42B0 001D11F0  38 63 7F F8 */	addi r3, r3, "__vt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>"@l
/* 801D42B4 001D11F4  90 7E 00 00 */	stw r3, 0(r30)
/* 801D42B8 001D11F8  38 03 00 74 */	addi r0, r3, 0x74
/* 801D42BC 001D11FC  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D42C0 001D1200  41 82 00 68 */	beq .L_801D4328
/* 801D42C4 001D1204  3C 60 80 4B */	lis r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D42C8 001D1208  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D42CC 001D120C  38 63 7F 6C */	addi r3, r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D42D0 001D1210  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D42D4 001D1214  38 03 00 2C */	addi r0, r3, 0x2c
/* 801D42D8 001D1218  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D42DC 001D121C  41 82 00 4C */	beq .L_801D4328
/* 801D42E0 001D1220  3C 60 80 4B */	lis r3, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D42E4 001D1224  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D42E8 001D1228  38 63 7E F0 */	addi r3, r3, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D42EC 001D122C  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801D42F0 001D1230  38 03 00 2C */	addi r0, r3, 0x2c
/* 801D42F4 001D1234  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801D42F8 001D1238  41 82 00 30 */	beq .L_801D4328
/* 801D42FC 001D123C  3C 60 80 4C */	lis r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D4300 001D1240  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801D4304 001D1244  38 03 80 B8 */	addi r0, r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D4308 001D1248  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D430C 001D124C  41 82 00 1C */	beq .L_801D4328
/* 801D4310 001D1250  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D4314 001D1254  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801D4318 001D1258  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D431C 001D125C  38 80 00 00 */	li r4, 0
/* 801D4320 001D1260  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801D4324 001D1264  48 23 D2 65 */	bl __dt__5CNodeFv
.L_801D4328:
/* 801D4328 001D1268  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D432C 001D126C  41 82 00 30 */	beq .L_801D435C
/* 801D4330 001D1270  3C 60 80 4C */	lis r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D4334 001D1274  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801D4338 001D1278  38 03 80 B8 */	addi r0, r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D433C 001D127C  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D4340 001D1280  41 82 00 1C */	beq .L_801D435C
/* 801D4344 001D1284  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D4348 001D1288  38 7E 00 30 */	addi r3, r30, 0x30
/* 801D434C 001D128C  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D4350 001D1290  38 80 00 00 */	li r4, 0
/* 801D4354 001D1294  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801D4358 001D1298  48 23 D2 31 */	bl __dt__5CNodeFv
.L_801D435C:
/* 801D435C 001D129C  7F E0 07 35 */	extsh. r0, r31
/* 801D4360 001D12A0  40 81 00 0C */	ble .L_801D436C
/* 801D4364 001D12A4  7F C3 F3 78 */	mr r3, r30
/* 801D4368 001D12A8  4B E4 FD 4D */	bl __dl__FPv
.L_801D436C:
/* 801D436C 001D12AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4370 001D12B0  7F C3 F3 78 */	mr r3, r30
/* 801D4374 001D12B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D4378 001D12B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D437C 001D12BC  7C 08 03 A6 */	mtlr r0
/* 801D4380 001D12C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4384 001D12C4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game9ItemHoney3MgrFv

.fn generatorGetID__Q34Game9ItemHoney3MgrFv, weak
/* 801D4388 001D12C8  3C 60 6D 69 */	lis r3, 0x6D697475@ha
/* 801D438C 001D12CC  38 63 74 75 */	addi r3, r3, 0x6D697475@l
/* 801D4390 001D12D0  4E 80 00 20 */	blr 
.endfn generatorGetID__Q34Game9ItemHoney3MgrFv

.fn "__dt__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4394 001D12D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4398 001D12D8  7C 08 02 A6 */	mflr r0
/* 801D439C 001D12DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D43A0 001D12E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D43A4 001D12E4  7C 9F 23 78 */	mr r31, r4
/* 801D43A8 001D12E8  93 C1 00 08 */	stw r30, 8(r1)
/* 801D43AC 001D12EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801D43B0 001D12F0  41 82 00 50 */	beq .L_801D4400
/* 801D43B4 001D12F4  3C 80 80 4B */	lis r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D43B8 001D12F8  38 84 7E F0 */	addi r4, r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D43BC 001D12FC  90 9E 00 00 */	stw r4, 0(r30)
/* 801D43C0 001D1300  38 04 00 2C */	addi r0, r4, 0x2c
/* 801D43C4 001D1304  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801D43C8 001D1308  41 82 00 28 */	beq .L_801D43F0
/* 801D43CC 001D130C  3C 80 80 4C */	lis r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D43D0 001D1310  38 04 80 B8 */	addi r0, r4, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D43D4 001D1314  90 1E 00 00 */	stw r0, 0(r30)
/* 801D43D8 001D1318  41 82 00 18 */	beq .L_801D43F0
/* 801D43DC 001D131C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801D43E0 001D1320  38 80 00 00 */	li r4, 0
/* 801D43E4 001D1324  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801D43E8 001D1328  90 1E 00 00 */	stw r0, 0(r30)
/* 801D43EC 001D132C  48 23 D1 9D */	bl __dt__5CNodeFv
.L_801D43F0:
/* 801D43F0 001D1330  7F E0 07 35 */	extsh. r0, r31
/* 801D43F4 001D1334  40 81 00 0C */	ble .L_801D4400
/* 801D43F8 001D1338  7F C3 F3 78 */	mr r3, r30
/* 801D43FC 001D133C  4B E4 FC B9 */	bl __dl__FPv
.L_801D4400:
/* 801D4400 001D1340  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4404 001D1344  7F C3 F3 78 */	mr r3, r30
/* 801D4408 001D1348  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D440C 001D134C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D4410 001D1350  7C 08 03 A6 */	mtlr r0
/* 801D4414 001D1354  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4418 001D1358  4E 80 00 20 */	blr 
.endfn "__dt__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "birth__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D441C 001D135C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4420 001D1360  7C 08 02 A6 */	mflr r0
/* 801D4424 001D1364  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4428 001D1368  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D442C 001D136C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801D4430 001D1370  7D 89 03 A6 */	mtctr r12
/* 801D4434 001D1374  4E 80 04 21 */	bctrl 
/* 801D4438 001D1378  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D443C 001D137C  7C 08 03 A6 */	mtlr r0
/* 801D4440 001D1380  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4444 001D1384  4E 80 00 20 */	blr 
.endfn "birth__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn getCreatureName__Q34Game9ItemHoney4ItemFv, weak
/* 801D4448 001D1388  38 62 B3 4C */	addi r3, r2, lbl_805196AC@sda21
/* 801D444C 001D138C  4E 80 00 20 */	blr 
.endfn getCreatureName__Q34Game9ItemHoney4ItemFv

.fn absorbable__Q34Game9ItemHoney10TouchStateFv, weak
/* 801D4450 001D1390  38 60 00 01 */	li r3, 1
/* 801D4454 001D1394  4E 80 00 20 */	blr 
.endfn absorbable__Q34Game9ItemHoney10TouchStateFv

.fn interactAbsorb__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb, weak
/* 801D4458 001D1398  38 60 00 01 */	li r3, 1
/* 801D445C 001D139C  4E 80 00 20 */	blr 
.endfn interactAbsorb__Q34Game9ItemHoney11ShrinkStateFPQ24Game8CFSMItemRQ24Game14InteractAbsorb

.fn absorbable__Q34Game9ItemHoney11ShrinkStateFv, weak
/* 801D4460 001D13A0  38 60 00 01 */	li r3, 1
/* 801D4464 001D13A4  4E 80 00 20 */	blr 
.endfn absorbable__Q34Game9ItemHoney11ShrinkStateFv

.fn absorbable__Q34Game9ItemHoney9WaitStateFv, weak
/* 801D4468 001D13A8  38 60 00 01 */	li r3, 1
/* 801D446C 001D13AC  4E 80 00 20 */	blr 
.endfn absorbable__Q34Game9ItemHoney9WaitStateFv

.fn onKeyEvent__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent, weak
/* 801D4470 001D13B0  4E 80 00 20 */	blr 
.endfn onKeyEvent__Q34Game9ItemHoney5StateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent

.fn "onCreateModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model", weak
/* 801D4474 001D13B4  4E 80 00 20 */	blr 
.endfn "onCreateModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model"

.fn "doAnimation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4478 001D13B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D447C 001D13BC  7C 08 02 A6 */	mflr r0
/* 801D4480 001D13C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4484 001D13C4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D4488 001D13C8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801D448C 001D13CC  7D 89 03 A6 */	mtctr r12
/* 801D4490 001D13D0  4E 80 04 21 */	bctrl 
/* 801D4494 001D13D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4498 001D13D8  7C 08 03 A6 */	mtlr r0
/* 801D449C 001D13DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801D44A0 001D13E0  4E 80 00 20 */	blr 
.endfn "doAnimation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doEntry__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D44A4 001D13E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D44A8 001D13E8  7C 08 02 A6 */	mflr r0
/* 801D44AC 001D13EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D44B0 001D13F0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D44B4 001D13F4  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801D44B8 001D13F8  7D 89 03 A6 */	mtctr r12
/* 801D44BC 001D13FC  4E 80 04 21 */	bctrl 
/* 801D44C0 001D1400  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D44C4 001D1404  7C 08 03 A6 */	mtlr r0
/* 801D44C8 001D1408  38 21 00 10 */	addi r1, r1, 0x10
/* 801D44CC 001D140C  4E 80 00 20 */	blr 
.endfn "doEntry__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doSetView__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D44D0 001D1410  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D44D4 001D1414  7C 08 02 A6 */	mflr r0
/* 801D44D8 001D1418  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D44DC 001D141C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D44E0 001D1420  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801D44E4 001D1424  7D 89 03 A6 */	mtctr r12
/* 801D44E8 001D1428  4E 80 04 21 */	bctrl 
/* 801D44EC 001D142C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D44F0 001D1430  7C 08 03 A6 */	mtlr r0
/* 801D44F4 001D1434  38 21 00 10 */	addi r1, r1, 0x10
/* 801D44F8 001D1438  4E 80 00 20 */	blr 
.endfn "doSetView__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fi"

.fn "doViewCalc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D44FC 001D143C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4500 001D1440  7C 08 02 A6 */	mflr r0
/* 801D4504 001D1444  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4508 001D1448  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D450C 001D144C  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801D4510 001D1450  7D 89 03 A6 */	mtctr r12
/* 801D4514 001D1454  4E 80 04 21 */	bctrl 
/* 801D4518 001D1458  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D451C 001D145C  7C 08 03 A6 */	mtlr r0
/* 801D4520 001D1460  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4524 001D1464  4E 80 00 20 */	blr 
.endfn "doViewCalc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doSimulation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Ff", weak
/* 801D4528 001D1468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D452C 001D146C  7C 08 02 A6 */	mflr r0
/* 801D4530 001D1470  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4534 001D1474  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D4538 001D1478  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801D453C 001D147C  7D 89 03 A6 */	mtctr r12
/* 801D4540 001D1480  4E 80 04 21 */	bctrl 
/* 801D4544 001D1484  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4548 001D1488  7C 08 03 A6 */	mtlr r0
/* 801D454C 001D148C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4550 001D1490  4E 80 00 20 */	blr 
.endfn "doSimulation__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Ff"

.fn "doDirectDraw__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FR8Graphics", weak
/* 801D4554 001D1494  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4558 001D1498  7C 08 02 A6 */	mflr r0
/* 801D455C 001D149C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4560 001D14A0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D4564 001D14A4  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801D4568 001D14A8  7D 89 03 A6 */	mtctr r12
/* 801D456C 001D14AC  4E 80 04 21 */	bctrl 
/* 801D4570 001D14B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4574 001D14B4  7C 08 03 A6 */	mtlr r0
/* 801D4578 001D14B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D457C 001D14BC  4E 80 00 20 */	blr 
.endfn "doDirectDraw__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FR8Graphics"

.fn "getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D4580 001D14C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4584 001D14C4  7C 08 02 A6 */	mflr r0
/* 801D4588 001D14C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D458C 001D14CC  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D4590 001D14D0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4594 001D14D4  7D 89 03 A6 */	mtctr r12
/* 801D4598 001D14D8  4E 80 04 21 */	bctrl 
/* 801D459C 001D14DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D45A0 001D14E0  7C 08 03 A6 */	mtlr r0
/* 801D45A4 001D14E4  38 21 00 10 */	addi r1, r1, 0x10
/* 801D45A8 001D14E8  4E 80 00 20 */	blr 
.endfn "getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"

.fn "getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D45AC 001D14EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D45B0 001D14F0  7C 08 02 A6 */	mflr r0
/* 801D45B4 001D14F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D45B8 001D14F8  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D45BC 001D14FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D45C0 001D1500  7D 89 03 A6 */	mtctr r12
/* 801D45C4 001D1504  4E 80 04 21 */	bctrl 
/* 801D45C8 001D1508  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D45CC 001D150C  7C 08 03 A6 */	mtlr r0
/* 801D45D0 001D1510  38 21 00 10 */	addi r1, r1, 0x10
/* 801D45D4 001D1514  4E 80 00 20 */	blr 
.endfn "getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "createModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item", weak
/* 801D45D8 001D1518  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D45DC 001D151C  7C 08 02 A6 */	mflr r0
/* 801D45E0 001D1520  7C 85 23 78 */	mr r5, r4
/* 801D45E4 001D1524  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D45E8 001D1528  80 63 00 7C */	lwz r3, 0x7c(r3)
/* 801D45EC 001D152C  80 84 01 88 */	lwz r4, 0x188(r4)
/* 801D45F0 001D1530  80 A5 01 84 */	lwz r5, 0x184(r5)
/* 801D45F4 001D1534  48 25 68 09 */	bl createModel__Q28SysShape8ModelMgrFii
/* 801D45F8 001D1538  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D45FC 001D153C  7C 08 03 A6 */	mtlr r0
/* 801D4600 001D1540  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4604 001D1544  4E 80 00 20 */	blr 
.endfn "createModel__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"

.fn "birth__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4608 001D1548  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D460C 001D154C  7C 08 02 A6 */	mflr r0
/* 801D4610 001D1550  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4614 001D1554  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D4618 001D1558  7C 7F 1B 78 */	mr r31, r3
/* 801D461C 001D155C  48 00 04 AD */	bl "getEmptyIndex__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
/* 801D4620 001D1560  2C 03 FF FF */	cmpwi r3, -1
/* 801D4624 001D1564  41 82 00 2C */	beq .L_801D4650
/* 801D4628 001D1568  80 DF 00 28 */	lwz r6, 0x28(r31)
/* 801D462C 001D156C  38 00 00 00 */	li r0, 0
/* 801D4630 001D1570  80 9F 00 2C */	lwz r4, 0x2c(r31)
/* 801D4634 001D1574  1C A3 01 E4 */	mulli r5, r3, 0x1e4
/* 801D4638 001D1578  7C 04 19 AE */	stbx r0, r4, r3
/* 801D463C 001D157C  7C 66 2A 14 */	add r3, r6, r5
/* 801D4640 001D1580  80 9F 00 20 */	lwz r4, 0x20(r31)
/* 801D4644 001D1584  38 04 00 01 */	addi r0, r4, 1
/* 801D4648 001D1588  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801D464C 001D158C  48 00 00 08 */	b .L_801D4654
.L_801D4650:
/* 801D4650 001D1590  38 60 00 00 */	li r3, 0
.L_801D4654:
/* 801D4654 001D1594  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4658 001D1598  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D465C 001D159C  7C 08 03 A6 */	mtlr r0
/* 801D4660 001D15A0  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4664 001D15A4  4E 80 00 20 */	blr 
.endfn "birth__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "kill__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item", weak
/* 801D4668 001D15A8  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801D466C 001D15AC  38 C0 00 00 */	li r6, 0
/* 801D4670 001D15B0  38 A0 00 00 */	li r5, 0
/* 801D4674 001D15B4  7C 09 03 A6 */	mtctr r0
/* 801D4678 001D15B8  2C 00 00 00 */	cmpwi r0, 0
/* 801D467C 001D15BC  4C 81 00 20 */	blelr 
.L_801D4680:
/* 801D4680 001D15C0  80 03 00 28 */	lwz r0, 0x28(r3)
/* 801D4684 001D15C4  7C 00 2A 14 */	add r0, r0, r5
/* 801D4688 001D15C8  7C 00 20 40 */	cmplw r0, r4
/* 801D468C 001D15CC  40 82 00 20 */	bne .L_801D46AC
/* 801D4690 001D15D0  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801D4694 001D15D4  38 00 00 01 */	li r0, 1
/* 801D4698 001D15D8  7C 04 31 AE */	stbx r0, r4, r6
/* 801D469C 001D15DC  80 83 00 20 */	lwz r4, 0x20(r3)
/* 801D46A0 001D15E0  38 04 FF FF */	addi r0, r4, -1
/* 801D46A4 001D15E4  90 03 00 20 */	stw r0, 0x20(r3)
/* 801D46A8 001D15E8  4E 80 00 20 */	blr 
.L_801D46AC:
/* 801D46AC 001D15EC  38 A5 01 E4 */	addi r5, r5, 0x1e4
/* 801D46B0 001D15F0  38 C6 00 01 */	addi r6, r6, 1
/* 801D46B4 001D15F4  42 00 FF CC */	bdnz .L_801D4680
/* 801D46B8 001D15F8  4E 80 00 20 */	blr 
.endfn "kill__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPQ34Game9ItemHoney4Item"

.fn "getNext__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D46BC 001D15FC  80 A3 00 24 */	lwz r5, 0x24(r3)
/* 801D46C0 001D1600  38 C4 00 01 */	addi r6, r4, 1
/* 801D46C4 001D1604  7C 06 28 50 */	subf r0, r6, r5
/* 801D46C8 001D1608  7C 09 03 A6 */	mtctr r0
/* 801D46CC 001D160C  7C 06 28 00 */	cmpw r6, r5
/* 801D46D0 001D1610  40 80 00 24 */	bge .L_801D46F4
.L_801D46D4:
/* 801D46D4 001D1614  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801D46D8 001D1618  7C 04 30 AE */	lbzx r0, r4, r6
/* 801D46DC 001D161C  28 00 00 00 */	cmplwi r0, 0
/* 801D46E0 001D1620  40 82 00 0C */	bne .L_801D46EC
/* 801D46E4 001D1624  7C C3 33 78 */	mr r3, r6
/* 801D46E8 001D1628  4E 80 00 20 */	blr 
.L_801D46EC:
/* 801D46EC 001D162C  38 C6 00 01 */	addi r6, r6, 1
/* 801D46F0 001D1630  42 00 FF E4 */	bdnz .L_801D46D4
.L_801D46F4:
/* 801D46F4 001D1634  7C A3 2B 78 */	mr r3, r5
/* 801D46F8 001D1638  4E 80 00 20 */	blr 
.endfn "getNext__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv"

.fn "getStart__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D46FC 001D163C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4700 001D1640  7C 08 02 A6 */	mflr r0
/* 801D4704 001D1644  38 80 FF FF */	li r4, -1
/* 801D4708 001D1648  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D470C 001D164C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4710 001D1650  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4714 001D1654  7D 89 03 A6 */	mtctr r12
/* 801D4718 001D1658  4E 80 04 21 */	bctrl 
/* 801D471C 001D165C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4720 001D1660  7C 08 03 A6 */	mtlr r0
/* 801D4724 001D1664  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4728 001D1668  4E 80 00 20 */	blr 
.endfn "getStart__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "getEnd__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D472C 001D166C  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801D4730 001D1670  4E 80 00 20 */	blr 
.endfn "getEnd__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "getAt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D4734 001D1674  1C 04 01 E4 */	mulli r0, r4, 0x1e4
/* 801D4738 001D1678  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801D473C 001D167C  7C 63 02 14 */	add r3, r3, r0
/* 801D4740 001D1680  4E 80 00 20 */	blr 
.endfn "getAt__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "getTo__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4744 001D1684  80 63 00 24 */	lwz r3, 0x24(r3)
/* 801D4748 001D1688  4E 80 00 20 */	blr 
.endfn "getTo__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D474C 001D168C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4750 001D1690  7C 08 02 A6 */	mflr r0
/* 801D4754 001D1694  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4758 001D1698  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D475C 001D169C  3B E0 00 00 */	li r31, 0
/* 801D4760 001D16A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D4764 001D16A4  3B C0 00 00 */	li r30, 0
/* 801D4768 001D16A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D476C 001D16AC  7C 7D 1B 78 */	mr r29, r3
/* 801D4770 001D16B0  48 00 00 34 */	b .L_801D47A4
.L_801D4774:
/* 801D4774 001D16B4  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801D4778 001D16B8  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D477C 001D16BC  28 00 00 00 */	cmplwi r0, 0
/* 801D4780 001D16C0  40 82 00 1C */	bne .L_801D479C
/* 801D4784 001D16C4  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801D4788 001D16C8  7C 60 FA 14 */	add r3, r0, r31
/* 801D478C 001D16CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4790 001D16D0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801D4794 001D16D4  7D 89 03 A6 */	mtctr r12
/* 801D4798 001D16D8  4E 80 04 21 */	bctrl 
.L_801D479C:
/* 801D479C 001D16DC  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D47A0 001D16E0  3B DE 00 01 */	addi r30, r30, 1
.L_801D47A4:
/* 801D47A4 001D16E4  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801D47A8 001D16E8  7C 1E 00 00 */	cmpw r30, r0
/* 801D47AC 001D16EC  41 80 FF C8 */	blt .L_801D4774
/* 801D47B0 001D16F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D47B4 001D16F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D47B8 001D16F8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D47BC 001D16FC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D47C0 001D1700  7C 08 03 A6 */	mtlr r0
/* 801D47C4 001D1704  38 21 00 20 */	addi r1, r1, 0x20
/* 801D47C8 001D1708  4E 80 00 20 */	blr 
.endfn "doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D47CC 001D170C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D47D0 001D1710  7C 08 02 A6 */	mflr r0
/* 801D47D4 001D1714  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D47D8 001D1718  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D47DC 001D171C  3B E0 00 00 */	li r31, 0
/* 801D47E0 001D1720  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D47E4 001D1724  3B C0 00 00 */	li r30, 0
/* 801D47E8 001D1728  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D47EC 001D172C  7C 7D 1B 78 */	mr r29, r3
/* 801D47F0 001D1730  48 00 00 34 */	b .L_801D4824
.L_801D47F4:
/* 801D47F4 001D1734  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801D47F8 001D1738  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D47FC 001D173C  28 00 00 00 */	cmplwi r0, 0
/* 801D4800 001D1740  40 82 00 1C */	bne .L_801D481C
/* 801D4804 001D1744  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801D4808 001D1748  7C 60 FA 14 */	add r3, r0, r31
/* 801D480C 001D174C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4810 001D1750  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801D4814 001D1754  7D 89 03 A6 */	mtctr r12
/* 801D4818 001D1758  4E 80 04 21 */	bctrl 
.L_801D481C:
/* 801D481C 001D175C  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D4820 001D1760  3B DE 00 01 */	addi r30, r30, 1
.L_801D4824:
/* 801D4824 001D1764  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801D4828 001D1768  7C 1E 00 00 */	cmpw r30, r0
/* 801D482C 001D176C  41 80 FF C8 */	blt .L_801D47F4
/* 801D4830 001D1770  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D4834 001D1774  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D4838 001D1778  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D483C 001D177C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D4840 001D1780  7C 08 03 A6 */	mtlr r0
/* 801D4844 001D1784  38 21 00 20 */	addi r1, r1, 0x20
/* 801D4848 001D1788  4E 80 00 20 */	blr 
.endfn "doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D484C 001D178C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4850 001D1790  7C 08 02 A6 */	mflr r0
/* 801D4854 001D1794  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4858 001D1798  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D485C 001D179C  3B E0 00 00 */	li r31, 0
/* 801D4860 001D17A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D4864 001D17A4  3B C0 00 00 */	li r30, 0
/* 801D4868 001D17A8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D486C 001D17AC  7C 9D 23 78 */	mr r29, r4
/* 801D4870 001D17B0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801D4874 001D17B4  7C 7C 1B 78 */	mr r28, r3
/* 801D4878 001D17B8  48 00 00 38 */	b .L_801D48B0
.L_801D487C:
/* 801D487C 001D17BC  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801D4880 001D17C0  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D4884 001D17C4  28 00 00 00 */	cmplwi r0, 0
/* 801D4888 001D17C8  40 82 00 20 */	bne .L_801D48A8
/* 801D488C 001D17CC  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801D4890 001D17D0  7F A4 EB 78 */	mr r4, r29
/* 801D4894 001D17D4  7C 60 FA 14 */	add r3, r0, r31
/* 801D4898 001D17D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D489C 001D17DC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801D48A0 001D17E0  7D 89 03 A6 */	mtctr r12
/* 801D48A4 001D17E4  4E 80 04 21 */	bctrl 
.L_801D48A8:
/* 801D48A8 001D17E8  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D48AC 001D17EC  3B DE 00 01 */	addi r30, r30, 1
.L_801D48B0:
/* 801D48B0 001D17F0  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801D48B4 001D17F4  7C 1E 00 00 */	cmpw r30, r0
/* 801D48B8 001D17F8  41 80 FF C4 */	blt .L_801D487C
/* 801D48BC 001D17FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D48C0 001D1800  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D48C4 001D1804  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D48C8 001D1808  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D48CC 001D180C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801D48D0 001D1810  7C 08 03 A6 */	mtlr r0
/* 801D48D4 001D1814  38 21 00 20 */	addi r1, r1, 0x20
/* 801D48D8 001D1818  4E 80 00 20 */	blr 
.endfn "doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D48DC 001D181C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D48E0 001D1820  7C 08 02 A6 */	mflr r0
/* 801D48E4 001D1824  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D48E8 001D1828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D48EC 001D182C  3B E0 00 00 */	li r31, 0
/* 801D48F0 001D1830  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D48F4 001D1834  3B C0 00 00 */	li r30, 0
/* 801D48F8 001D1838  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D48FC 001D183C  7C 7D 1B 78 */	mr r29, r3
/* 801D4900 001D1840  48 00 00 34 */	b .L_801D4934
.L_801D4904:
/* 801D4904 001D1844  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801D4908 001D1848  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D490C 001D184C  28 00 00 00 */	cmplwi r0, 0
/* 801D4910 001D1850  40 82 00 1C */	bne .L_801D492C
/* 801D4914 001D1854  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801D4918 001D1858  7C 60 FA 14 */	add r3, r0, r31
/* 801D491C 001D185C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4920 001D1860  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801D4924 001D1864  7D 89 03 A6 */	mtctr r12
/* 801D4928 001D1868  4E 80 04 21 */	bctrl 
.L_801D492C:
/* 801D492C 001D186C  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D4930 001D1870  3B DE 00 01 */	addi r30, r30, 1
.L_801D4934:
/* 801D4934 001D1874  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801D4938 001D1878  7C 1E 00 00 */	cmpw r30, r0
/* 801D493C 001D187C  41 80 FF C8 */	blt .L_801D4904
/* 801D4940 001D1880  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D4944 001D1884  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D4948 001D1888  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D494C 001D188C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D4950 001D1890  7C 08 03 A6 */	mtlr r0
/* 801D4954 001D1894  38 21 00 20 */	addi r1, r1, 0x20
/* 801D4958 001D1898  4E 80 00 20 */	blr 
.endfn "doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff", weak
/* 801D495C 001D189C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4960 001D18A0  7C 08 02 A6 */	mflr r0
/* 801D4964 001D18A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4968 001D18A8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801D496C 001D18AC  FF E0 08 90 */	fmr f31, f1
/* 801D4970 001D18B0  93 E1 00 14 */	stw r31, 0x14(r1)
/* 801D4974 001D18B4  3B E0 00 00 */	li r31, 0
/* 801D4978 001D18B8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 801D497C 001D18BC  3B C0 00 00 */	li r30, 0
/* 801D4980 001D18C0  93 A1 00 0C */	stw r29, 0xc(r1)
/* 801D4984 001D18C4  7C 7D 1B 78 */	mr r29, r3
/* 801D4988 001D18C8  48 00 00 38 */	b .L_801D49C0
.L_801D498C:
/* 801D498C 001D18CC  80 7D 00 2C */	lwz r3, 0x2c(r29)
/* 801D4990 001D18D0  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D4994 001D18D4  28 00 00 00 */	cmplwi r0, 0
/* 801D4998 001D18D8  40 82 00 20 */	bne .L_801D49B8
/* 801D499C 001D18DC  80 1D 00 28 */	lwz r0, 0x28(r29)
/* 801D49A0 001D18E0  FC 20 F8 90 */	fmr f1, f31
/* 801D49A4 001D18E4  7C 60 FA 14 */	add r3, r0, r31
/* 801D49A8 001D18E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D49AC 001D18EC  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801D49B0 001D18F0  7D 89 03 A6 */	mtctr r12
/* 801D49B4 001D18F4  4E 80 04 21 */	bctrl 
.L_801D49B8:
/* 801D49B8 001D18F8  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D49BC 001D18FC  3B DE 00 01 */	addi r30, r30, 1
.L_801D49C0:
/* 801D49C0 001D1900  80 1D 00 24 */	lwz r0, 0x24(r29)
/* 801D49C4 001D1904  7C 1E 00 00 */	cmpw r30, r0
/* 801D49C8 001D1908  41 80 FF C4 */	blt .L_801D498C
/* 801D49CC 001D190C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D49D0 001D1910  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801D49D4 001D1914  83 E1 00 14 */	lwz r31, 0x14(r1)
/* 801D49D8 001D1918  83 C1 00 10 */	lwz r30, 0x10(r1)
/* 801D49DC 001D191C  83 A1 00 0C */	lwz r29, 0xc(r1)
/* 801D49E0 001D1920  7C 08 03 A6 */	mtlr r0
/* 801D49E4 001D1924  38 21 00 20 */	addi r1, r1, 0x20
/* 801D49E8 001D1928  4E 80 00 20 */	blr 
.endfn "doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff"

.fn "doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics", weak
/* 801D49EC 001D192C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D49F0 001D1930  7C 08 02 A6 */	mflr r0
/* 801D49F4 001D1934  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D49F8 001D1938  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D49FC 001D193C  3B E0 00 00 */	li r31, 0
/* 801D4A00 001D1940  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D4A04 001D1944  3B C0 00 00 */	li r30, 0
/* 801D4A08 001D1948  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D4A0C 001D194C  7C 9D 23 78 */	mr r29, r4
/* 801D4A10 001D1950  93 81 00 10 */	stw r28, 0x10(r1)
/* 801D4A14 001D1954  7C 7C 1B 78 */	mr r28, r3
/* 801D4A18 001D1958  48 00 00 38 */	b .L_801D4A50
.L_801D4A1C:
/* 801D4A1C 001D195C  80 7C 00 2C */	lwz r3, 0x2c(r28)
/* 801D4A20 001D1960  7C 03 F0 AE */	lbzx r0, r3, r30
/* 801D4A24 001D1964  28 00 00 00 */	cmplwi r0, 0
/* 801D4A28 001D1968  40 82 00 20 */	bne .L_801D4A48
/* 801D4A2C 001D196C  80 1C 00 28 */	lwz r0, 0x28(r28)
/* 801D4A30 001D1970  7F A4 EB 78 */	mr r4, r29
/* 801D4A34 001D1974  7C 60 FA 14 */	add r3, r0, r31
/* 801D4A38 001D1978  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4A3C 001D197C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801D4A40 001D1980  7D 89 03 A6 */	mtctr r12
/* 801D4A44 001D1984  4E 80 04 21 */	bctrl 
.L_801D4A48:
/* 801D4A48 001D1988  3B FF 01 E4 */	addi r31, r31, 0x1e4
/* 801D4A4C 001D198C  3B DE 00 01 */	addi r30, r30, 1
.L_801D4A50:
/* 801D4A50 001D1990  80 1C 00 24 */	lwz r0, 0x24(r28)
/* 801D4A54 001D1994  7C 1E 00 00 */	cmpw r30, r0
/* 801D4A58 001D1998  41 80 FF C4 */	blt .L_801D4A1C
/* 801D4A5C 001D199C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D4A60 001D19A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D4A64 001D19A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D4A68 001D19A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D4A6C 001D19AC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801D4A70 001D19B0  7C 08 03 A6 */	mtlr r0
/* 801D4A74 001D19B4  38 21 00 20 */	addi r1, r1, 0x20
/* 801D4A78 001D19B8  4E 80 00 20 */	blr 
.endfn "doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"

.fn "resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4A7C 001D19BC  38 00 00 00 */	li r0, 0
/* 801D4A80 001D19C0  90 03 00 28 */	stw r0, 0x28(r3)
/* 801D4A84 001D19C4  90 03 00 24 */	stw r0, 0x24(r3)
/* 801D4A88 001D19C8  90 03 00 20 */	stw r0, 0x20(r3)
/* 801D4A8C 001D19CC  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801D4A90 001D19D0  4E 80 00 20 */	blr 
.endfn "resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "clearMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4A94 001D19D4  38 00 00 00 */	li r0, 0
/* 801D4A98 001D19D8  38 C0 00 00 */	li r6, 0
/* 801D4A9C 001D19DC  90 03 00 20 */	stw r0, 0x20(r3)
/* 801D4AA0 001D19E0  38 A0 00 01 */	li r5, 1
/* 801D4AA4 001D19E4  48 00 00 10 */	b .L_801D4AB4
.L_801D4AA8:
/* 801D4AA8 001D19E8  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801D4AAC 001D19EC  7C A4 31 AE */	stbx r5, r4, r6
/* 801D4AB0 001D19F0  38 C6 00 01 */	addi r6, r6, 1
.L_801D4AB4:
/* 801D4AB4 001D19F4  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801D4AB8 001D19F8  7C 06 00 00 */	cmpw r6, r0
/* 801D4ABC 001D19FC  41 80 FF EC */	blt .L_801D4AA8
/* 801D4AC0 001D1A00  4E 80 00 20 */	blr 
.endfn "clearMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "onAlloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4AC4 001D1A04  4E 80 00 20 */	blr 
.endfn "onAlloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "getEmptyIndex__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4AC8 001D1A08  80 03 00 24 */	lwz r0, 0x24(r3)
/* 801D4ACC 001D1A0C  38 A0 00 00 */	li r5, 0
/* 801D4AD0 001D1A10  7C 09 03 A6 */	mtctr r0
/* 801D4AD4 001D1A14  2C 00 00 00 */	cmpwi r0, 0
/* 801D4AD8 001D1A18  40 81 00 24 */	ble .L_801D4AFC
.L_801D4ADC:
/* 801D4ADC 001D1A1C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 801D4AE0 001D1A20  7C 04 28 AE */	lbzx r0, r4, r5
/* 801D4AE4 001D1A24  28 00 00 01 */	cmplwi r0, 1
/* 801D4AE8 001D1A28  40 82 00 0C */	bne .L_801D4AF4
/* 801D4AEC 001D1A2C  7C A3 2B 78 */	mr r3, r5
/* 801D4AF0 001D1A30  4E 80 00 20 */	blr 
.L_801D4AF4:
/* 801D4AF4 001D1A34  38 A5 00 01 */	addi r5, r5, 1
/* 801D4AF8 001D1A38  42 00 FF E4 */	bdnz .L_801D4ADC
.L_801D4AFC:
/* 801D4AFC 001D1A3C  38 60 FF FF */	li r3, -1
/* 801D4B00 001D1A40  4E 80 00 20 */	blr 
.endfn "getEmptyIndex__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "get__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D4B04 001D1A44  1C 04 01 E4 */	mulli r0, r4, 0x1e4
/* 801D4B08 001D1A48  80 63 00 28 */	lwz r3, 0x28(r3)
/* 801D4B0C 001D1A4C  7C 63 02 14 */	add r3, r3, r0
/* 801D4B10 001D1A50  4E 80 00 20 */	blr 
.endfn "get__37MonoObjectMgr<Q34Game9ItemHoney4Item>FPv"

.fn "getObject__33Container<Q34Game9ItemHoney4Item>FPv", weak
/* 801D4B14 001D1A54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4B18 001D1A58  7C 08 02 A6 */	mflr r0
/* 801D4B1C 001D1A5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4B20 001D1A60  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4B24 001D1A64  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4B28 001D1A68  7D 89 03 A6 */	mtctr r12
/* 801D4B2C 001D1A6C  4E 80 04 21 */	bctrl 
/* 801D4B30 001D1A70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4B34 001D1A74  7C 08 03 A6 */	mtlr r0
/* 801D4B38 001D1A78  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4B3C 001D1A7C  4E 80 00 20 */	blr 
.endfn "getObject__33Container<Q34Game9ItemHoney4Item>FPv"

.fn "getAt__33Container<Q34Game9ItemHoney4Item>Fi", weak
/* 801D4B40 001D1A80  38 60 00 00 */	li r3, 0
/* 801D4B44 001D1A84  4E 80 00 20 */	blr 
.endfn "getAt__33Container<Q34Game9ItemHoney4Item>Fi"

.fn "getTo__33Container<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4B48 001D1A88  38 60 00 00 */	li r3, 0
/* 801D4B4C 001D1A8C  4E 80 00 20 */	blr 
.endfn "getTo__33Container<Q34Game9ItemHoney4Item>Fv"

.fn "doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics", weak
/* 801D4B50 001D1A90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4B54 001D1A94  7C 08 02 A6 */	mflr r0
/* 801D4B58 001D1A98  3C A0 80 4C */	lis r5, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D4B5C 001D1A9C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4B60 001D1AA0  38 00 00 00 */	li r0, 0
/* 801D4B64 001D1AA4  38 A5 85 40 */	addi r5, r5, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D4B68 001D1AA8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D4B6C 001D1AAC  28 00 00 00 */	cmplwi r0, 0
/* 801D4B70 001D1AB0  7C 9F 23 78 */	mr r31, r4
/* 801D4B74 001D1AB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4B78 001D1AB8  90 A1 00 08 */	stw r5, 8(r1)
/* 801D4B7C 001D1ABC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D4B80 001D1AC0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D4B84 001D1AC4  40 82 00 1C */	bne .L_801D4BA0
/* 801D4B88 001D1AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4B8C 001D1ACC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4B90 001D1AD0  7D 89 03 A6 */	mtctr r12
/* 801D4B94 001D1AD4  4E 80 04 21 */	bctrl 
/* 801D4B98 001D1AD8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4B9C 001D1ADC  48 00 01 74 */	b .L_801D4D10
.L_801D4BA0:
/* 801D4BA0 001D1AE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4BA4 001D1AE4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4BA8 001D1AE8  7D 89 03 A6 */	mtctr r12
/* 801D4BAC 001D1AEC  4E 80 04 21 */	bctrl 
/* 801D4BB0 001D1AF0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4BB4 001D1AF4  48 00 00 58 */	b .L_801D4C0C
.L_801D4BB8:
/* 801D4BB8 001D1AF8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4BBC 001D1AFC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4BC0 001D1B00  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4BC4 001D1B04  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4BC8 001D1B08  7D 89 03 A6 */	mtctr r12
/* 801D4BCC 001D1B0C  4E 80 04 21 */	bctrl 
/* 801D4BD0 001D1B10  7C 64 1B 78 */	mr r4, r3
/* 801D4BD4 001D1B14  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D4BD8 001D1B18  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4BDC 001D1B1C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D4BE0 001D1B20  7D 89 03 A6 */	mtctr r12
/* 801D4BE4 001D1B24  4E 80 04 21 */	bctrl 
/* 801D4BE8 001D1B28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4BEC 001D1B2C  40 82 01 24 */	bne .L_801D4D10
/* 801D4BF0 001D1B30  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4BF4 001D1B34  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4BF8 001D1B38  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4BFC 001D1B3C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4C00 001D1B40  7D 89 03 A6 */	mtctr r12
/* 801D4C04 001D1B44  4E 80 04 21 */	bctrl 
/* 801D4C08 001D1B48  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D4C0C:
/* 801D4C0C 001D1B4C  81 81 00 08 */	lwz r12, 8(r1)
/* 801D4C10 001D1B50  38 61 00 08 */	addi r3, r1, 8
/* 801D4C14 001D1B54  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D4C18 001D1B58  7D 89 03 A6 */	mtctr r12
/* 801D4C1C 001D1B5C  4E 80 04 21 */	bctrl 
/* 801D4C20 001D1B60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4C24 001D1B64  41 82 FF 94 */	beq .L_801D4BB8
/* 801D4C28 001D1B68  48 00 00 E8 */	b .L_801D4D10
.L_801D4C2C:
/* 801D4C2C 001D1B6C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4C30 001D1B70  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4C34 001D1B74  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4C38 001D1B78  7D 89 03 A6 */	mtctr r12
/* 801D4C3C 001D1B7C  4E 80 04 21 */	bctrl 
/* 801D4C40 001D1B80  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4C44 001D1B84  7F E4 FB 78 */	mr r4, r31
/* 801D4C48 001D1B88  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801D4C4C 001D1B8C  7D 89 03 A6 */	mtctr r12
/* 801D4C50 001D1B90  4E 80 04 21 */	bctrl 
/* 801D4C54 001D1B94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4C58 001D1B98  28 00 00 00 */	cmplwi r0, 0
/* 801D4C5C 001D1B9C  40 82 00 24 */	bne .L_801D4C80
/* 801D4C60 001D1BA0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4C64 001D1BA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4C68 001D1BA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4C6C 001D1BAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4C70 001D1BB0  7D 89 03 A6 */	mtctr r12
/* 801D4C74 001D1BB4  4E 80 04 21 */	bctrl 
/* 801D4C78 001D1BB8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4C7C 001D1BBC  48 00 00 94 */	b .L_801D4D10
.L_801D4C80:
/* 801D4C80 001D1BC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4C84 001D1BC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4C88 001D1BC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4C8C 001D1BCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4C90 001D1BD0  7D 89 03 A6 */	mtctr r12
/* 801D4C94 001D1BD4  4E 80 04 21 */	bctrl 
/* 801D4C98 001D1BD8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4C9C 001D1BDC  48 00 00 58 */	b .L_801D4CF4
.L_801D4CA0:
/* 801D4CA0 001D1BE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4CA4 001D1BE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4CA8 001D1BE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4CAC 001D1BEC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4CB0 001D1BF0  7D 89 03 A6 */	mtctr r12
/* 801D4CB4 001D1BF4  4E 80 04 21 */	bctrl 
/* 801D4CB8 001D1BF8  7C 64 1B 78 */	mr r4, r3
/* 801D4CBC 001D1BFC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D4CC0 001D1C00  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4CC4 001D1C04  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D4CC8 001D1C08  7D 89 03 A6 */	mtctr r12
/* 801D4CCC 001D1C0C  4E 80 04 21 */	bctrl 
/* 801D4CD0 001D1C10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4CD4 001D1C14  40 82 00 3C */	bne .L_801D4D10
/* 801D4CD8 001D1C18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4CDC 001D1C1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4CE0 001D1C20  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4CE4 001D1C24  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4CE8 001D1C28  7D 89 03 A6 */	mtctr r12
/* 801D4CEC 001D1C2C  4E 80 04 21 */	bctrl 
/* 801D4CF0 001D1C30  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D4CF4:
/* 801D4CF4 001D1C34  81 81 00 08 */	lwz r12, 8(r1)
/* 801D4CF8 001D1C38  38 61 00 08 */	addi r3, r1, 8
/* 801D4CFC 001D1C3C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D4D00 001D1C40  7D 89 03 A6 */	mtctr r12
/* 801D4D04 001D1C44  4E 80 04 21 */	bctrl 
/* 801D4D08 001D1C48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4D0C 001D1C4C  41 82 FF 94 */	beq .L_801D4CA0
.L_801D4D10:
/* 801D4D10 001D1C50  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4D14 001D1C54  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4D18 001D1C58  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D4D1C 001D1C5C  7D 89 03 A6 */	mtctr r12
/* 801D4D20 001D1C60  4E 80 04 21 */	bctrl 
/* 801D4D24 001D1C64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4D28 001D1C68  7C 04 18 40 */	cmplw r4, r3
/* 801D4D2C 001D1C6C  40 82 FF 00 */	bne .L_801D4C2C
/* 801D4D30 001D1C70  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D4D34 001D1C74  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D4D38 001D1C78  7C 08 03 A6 */	mtlr r0
/* 801D4D3C 001D1C7C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D4D40 001D1C80  4E 80 00 20 */	blr 
.endfn "doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"

.fn "isDone__32Iterator<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4D44 001D1C84  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D4D48 001D1C88  7C 08 02 A6 */	mflr r0
/* 801D4D4C 001D1C8C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4D50 001D1C90  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D4D54 001D1C94  7C 7F 1B 78 */	mr r31, r3
/* 801D4D58 001D1C98  80 63 00 08 */	lwz r3, 8(r3)
/* 801D4D5C 001D1C9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4D60 001D1CA0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D4D64 001D1CA4  7D 89 03 A6 */	mtctr r12
/* 801D4D68 001D1CA8  4E 80 04 21 */	bctrl 
/* 801D4D6C 001D1CAC  80 1F 00 04 */	lwz r0, 4(r31)
/* 801D4D70 001D1CB0  7C 00 18 50 */	subf r0, r0, r3
/* 801D4D74 001D1CB4  7C 00 00 34 */	cntlzw r0, r0
/* 801D4D78 001D1CB8  54 03 D9 7E */	srwi r3, r0, 5
/* 801D4D7C 001D1CBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D4D80 001D1CC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4D84 001D1CC4  7C 08 03 A6 */	mtlr r0
/* 801D4D88 001D1CC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D4D8C 001D1CCC  4E 80 00 20 */	blr 
.endfn "isDone__32Iterator<Q34Game9ItemHoney4Item>Fv"

.fn "doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff", weak
/* 801D4D90 001D1CD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4D94 001D1CD4  7C 08 02 A6 */	mflr r0
/* 801D4D98 001D1CD8  3C 80 80 4C */	lis r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D4D9C 001D1CDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4DA0 001D1CE0  38 00 00 00 */	li r0, 0
/* 801D4DA4 001D1CE4  38 84 85 40 */	addi r4, r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D4DA8 001D1CE8  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801D4DAC 001D1CEC  FF E0 08 90 */	fmr f31, f1
/* 801D4DB0 001D1CF0  28 00 00 00 */	cmplwi r0, 0
/* 801D4DB4 001D1CF4  90 81 00 08 */	stw r4, 8(r1)
/* 801D4DB8 001D1CF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4DBC 001D1CFC  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D4DC0 001D1D00  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D4DC4 001D1D04  40 82 00 1C */	bne .L_801D4DE0
/* 801D4DC8 001D1D08  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4DCC 001D1D0C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4DD0 001D1D10  7D 89 03 A6 */	mtctr r12
/* 801D4DD4 001D1D14  4E 80 04 21 */	bctrl 
/* 801D4DD8 001D1D18  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4DDC 001D1D1C  48 00 01 74 */	b .L_801D4F50
.L_801D4DE0:
/* 801D4DE0 001D1D20  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4DE4 001D1D24  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4DE8 001D1D28  7D 89 03 A6 */	mtctr r12
/* 801D4DEC 001D1D2C  4E 80 04 21 */	bctrl 
/* 801D4DF0 001D1D30  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4DF4 001D1D34  48 00 00 58 */	b .L_801D4E4C
.L_801D4DF8:
/* 801D4DF8 001D1D38  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4DFC 001D1D3C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4E00 001D1D40  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4E04 001D1D44  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4E08 001D1D48  7D 89 03 A6 */	mtctr r12
/* 801D4E0C 001D1D4C  4E 80 04 21 */	bctrl 
/* 801D4E10 001D1D50  7C 64 1B 78 */	mr r4, r3
/* 801D4E14 001D1D54  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D4E18 001D1D58  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4E1C 001D1D5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D4E20 001D1D60  7D 89 03 A6 */	mtctr r12
/* 801D4E24 001D1D64  4E 80 04 21 */	bctrl 
/* 801D4E28 001D1D68  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4E2C 001D1D6C  40 82 01 24 */	bne .L_801D4F50
/* 801D4E30 001D1D70  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4E34 001D1D74  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4E38 001D1D78  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4E3C 001D1D7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4E40 001D1D80  7D 89 03 A6 */	mtctr r12
/* 801D4E44 001D1D84  4E 80 04 21 */	bctrl 
/* 801D4E48 001D1D88  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D4E4C:
/* 801D4E4C 001D1D8C  81 81 00 08 */	lwz r12, 8(r1)
/* 801D4E50 001D1D90  38 61 00 08 */	addi r3, r1, 8
/* 801D4E54 001D1D94  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D4E58 001D1D98  7D 89 03 A6 */	mtctr r12
/* 801D4E5C 001D1D9C  4E 80 04 21 */	bctrl 
/* 801D4E60 001D1DA0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4E64 001D1DA4  41 82 FF 94 */	beq .L_801D4DF8
/* 801D4E68 001D1DA8  48 00 00 E8 */	b .L_801D4F50
.L_801D4E6C:
/* 801D4E6C 001D1DAC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4E70 001D1DB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4E74 001D1DB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4E78 001D1DB8  7D 89 03 A6 */	mtctr r12
/* 801D4E7C 001D1DBC  4E 80 04 21 */	bctrl 
/* 801D4E80 001D1DC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4E84 001D1DC4  FC 20 F8 90 */	fmr f1, f31
/* 801D4E88 001D1DC8  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801D4E8C 001D1DCC  7D 89 03 A6 */	mtctr r12
/* 801D4E90 001D1DD0  4E 80 04 21 */	bctrl 
/* 801D4E94 001D1DD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D4E98 001D1DD8  28 00 00 00 */	cmplwi r0, 0
/* 801D4E9C 001D1DDC  40 82 00 24 */	bne .L_801D4EC0
/* 801D4EA0 001D1DE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4EA4 001D1DE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4EA8 001D1DE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4EAC 001D1DEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4EB0 001D1DF0  7D 89 03 A6 */	mtctr r12
/* 801D4EB4 001D1DF4  4E 80 04 21 */	bctrl 
/* 801D4EB8 001D1DF8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4EBC 001D1DFC  48 00 00 94 */	b .L_801D4F50
.L_801D4EC0:
/* 801D4EC0 001D1E00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4EC4 001D1E04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4EC8 001D1E08  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4ECC 001D1E0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4ED0 001D1E10  7D 89 03 A6 */	mtctr r12
/* 801D4ED4 001D1E14  4E 80 04 21 */	bctrl 
/* 801D4ED8 001D1E18  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4EDC 001D1E1C  48 00 00 58 */	b .L_801D4F34
.L_801D4EE0:
/* 801D4EE0 001D1E20  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4EE4 001D1E24  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4EE8 001D1E28  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4EEC 001D1E2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4EF0 001D1E30  7D 89 03 A6 */	mtctr r12
/* 801D4EF4 001D1E34  4E 80 04 21 */	bctrl 
/* 801D4EF8 001D1E38  7C 64 1B 78 */	mr r4, r3
/* 801D4EFC 001D1E3C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D4F00 001D1E40  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4F04 001D1E44  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D4F08 001D1E48  7D 89 03 A6 */	mtctr r12
/* 801D4F0C 001D1E4C  4E 80 04 21 */	bctrl 
/* 801D4F10 001D1E50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4F14 001D1E54  40 82 00 3C */	bne .L_801D4F50
/* 801D4F18 001D1E58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4F1C 001D1E5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4F20 001D1E60  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4F24 001D1E64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D4F28 001D1E68  7D 89 03 A6 */	mtctr r12
/* 801D4F2C 001D1E6C  4E 80 04 21 */	bctrl 
/* 801D4F30 001D1E70  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D4F34:
/* 801D4F34 001D1E74  81 81 00 08 */	lwz r12, 8(r1)
/* 801D4F38 001D1E78  38 61 00 08 */	addi r3, r1, 8
/* 801D4F3C 001D1E7C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D4F40 001D1E80  7D 89 03 A6 */	mtctr r12
/* 801D4F44 001D1E84  4E 80 04 21 */	bctrl 
/* 801D4F48 001D1E88  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D4F4C 001D1E8C  41 82 FF 94 */	beq .L_801D4EE0
.L_801D4F50:
/* 801D4F50 001D1E90  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4F54 001D1E94  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4F58 001D1E98  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D4F5C 001D1E9C  7D 89 03 A6 */	mtctr r12
/* 801D4F60 001D1EA0  4E 80 04 21 */	bctrl 
/* 801D4F64 001D1EA4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4F68 001D1EA8  7C 04 18 40 */	cmplw r4, r3
/* 801D4F6C 001D1EAC  40 82 FF 00 */	bne .L_801D4E6C
/* 801D4F70 001D1EB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D4F74 001D1EB4  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801D4F78 001D1EB8  7C 08 03 A6 */	mtlr r0
/* 801D4F7C 001D1EBC  38 21 00 20 */	addi r1, r1, 0x20
/* 801D4F80 001D1EC0  4E 80 00 20 */	blr 
.endfn "doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff"

.fn "doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D4F84 001D1EC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D4F88 001D1EC8  7C 08 02 A6 */	mflr r0
/* 801D4F8C 001D1ECC  3C 80 80 4C */	lis r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D4F90 001D1ED0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D4F94 001D1ED4  38 00 00 00 */	li r0, 0
/* 801D4F98 001D1ED8  38 84 85 40 */	addi r4, r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D4F9C 001D1EDC  28 00 00 00 */	cmplwi r0, 0
/* 801D4FA0 001D1EE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D4FA4 001D1EE4  90 81 00 08 */	stw r4, 8(r1)
/* 801D4FA8 001D1EE8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D4FAC 001D1EEC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D4FB0 001D1EF0  40 82 00 1C */	bne .L_801D4FCC
/* 801D4FB4 001D1EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4FB8 001D1EF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4FBC 001D1EFC  7D 89 03 A6 */	mtctr r12
/* 801D4FC0 001D1F00  4E 80 04 21 */	bctrl 
/* 801D4FC4 001D1F04  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4FC8 001D1F08  48 00 01 70 */	b .L_801D5138
.L_801D4FCC:
/* 801D4FCC 001D1F0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4FD0 001D1F10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D4FD4 001D1F14  7D 89 03 A6 */	mtctr r12
/* 801D4FD8 001D1F18  4E 80 04 21 */	bctrl 
/* 801D4FDC 001D1F1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D4FE0 001D1F20  48 00 00 58 */	b .L_801D5038
.L_801D4FE4:
/* 801D4FE4 001D1F24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D4FE8 001D1F28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D4FEC 001D1F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D4FF0 001D1F30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D4FF4 001D1F34  7D 89 03 A6 */	mtctr r12
/* 801D4FF8 001D1F38  4E 80 04 21 */	bctrl 
/* 801D4FFC 001D1F3C  7C 64 1B 78 */	mr r4, r3
/* 801D5000 001D1F40  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D5004 001D1F44  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5008 001D1F48  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D500C 001D1F4C  7D 89 03 A6 */	mtctr r12
/* 801D5010 001D1F50  4E 80 04 21 */	bctrl 
/* 801D5014 001D1F54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5018 001D1F58  40 82 01 20 */	bne .L_801D5138
/* 801D501C 001D1F5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5020 001D1F60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5024 001D1F64  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5028 001D1F68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D502C 001D1F6C  7D 89 03 A6 */	mtctr r12
/* 801D5030 001D1F70  4E 80 04 21 */	bctrl 
/* 801D5034 001D1F74  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D5038:
/* 801D5038 001D1F78  81 81 00 08 */	lwz r12, 8(r1)
/* 801D503C 001D1F7C  38 61 00 08 */	addi r3, r1, 8
/* 801D5040 001D1F80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5044 001D1F84  7D 89 03 A6 */	mtctr r12
/* 801D5048 001D1F88  4E 80 04 21 */	bctrl 
/* 801D504C 001D1F8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5050 001D1F90  41 82 FF 94 */	beq .L_801D4FE4
/* 801D5054 001D1F94  48 00 00 E4 */	b .L_801D5138
.L_801D5058:
/* 801D5058 001D1F98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D505C 001D1F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5060 001D1FA0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5064 001D1FA4  7D 89 03 A6 */	mtctr r12
/* 801D5068 001D1FA8  4E 80 04 21 */	bctrl 
/* 801D506C 001D1FAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5070 001D1FB0  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801D5074 001D1FB4  7D 89 03 A6 */	mtctr r12
/* 801D5078 001D1FB8  4E 80 04 21 */	bctrl 
/* 801D507C 001D1FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5080 001D1FC0  28 00 00 00 */	cmplwi r0, 0
/* 801D5084 001D1FC4  40 82 00 24 */	bne .L_801D50A8
/* 801D5088 001D1FC8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D508C 001D1FCC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5090 001D1FD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5094 001D1FD4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5098 001D1FD8  7D 89 03 A6 */	mtctr r12
/* 801D509C 001D1FDC  4E 80 04 21 */	bctrl 
/* 801D50A0 001D1FE0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D50A4 001D1FE4  48 00 00 94 */	b .L_801D5138
.L_801D50A8:
/* 801D50A8 001D1FE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D50AC 001D1FEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D50B0 001D1FF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D50B4 001D1FF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D50B8 001D1FF8  7D 89 03 A6 */	mtctr r12
/* 801D50BC 001D1FFC  4E 80 04 21 */	bctrl 
/* 801D50C0 001D2000  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D50C4 001D2004  48 00 00 58 */	b .L_801D511C
.L_801D50C8:
/* 801D50C8 001D2008  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D50CC 001D200C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D50D0 001D2010  81 83 00 00 */	lwz r12, 0(r3)
/* 801D50D4 001D2014  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D50D8 001D2018  7D 89 03 A6 */	mtctr r12
/* 801D50DC 001D201C  4E 80 04 21 */	bctrl 
/* 801D50E0 001D2020  7C 64 1B 78 */	mr r4, r3
/* 801D50E4 001D2024  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D50E8 001D2028  81 83 00 00 */	lwz r12, 0(r3)
/* 801D50EC 001D202C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D50F0 001D2030  7D 89 03 A6 */	mtctr r12
/* 801D50F4 001D2034  4E 80 04 21 */	bctrl 
/* 801D50F8 001D2038  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D50FC 001D203C  40 82 00 3C */	bne .L_801D5138
/* 801D5100 001D2040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5104 001D2044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5108 001D2048  81 83 00 00 */	lwz r12, 0(r3)
/* 801D510C 001D204C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5110 001D2050  7D 89 03 A6 */	mtctr r12
/* 801D5114 001D2054  4E 80 04 21 */	bctrl 
/* 801D5118 001D2058  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D511C:
/* 801D511C 001D205C  81 81 00 08 */	lwz r12, 8(r1)
/* 801D5120 001D2060  38 61 00 08 */	addi r3, r1, 8
/* 801D5124 001D2064  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5128 001D2068  7D 89 03 A6 */	mtctr r12
/* 801D512C 001D206C  4E 80 04 21 */	bctrl 
/* 801D5130 001D2070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5134 001D2074  41 82 FF 94 */	beq .L_801D50C8
.L_801D5138:
/* 801D5138 001D2078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D513C 001D207C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5140 001D2080  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D5144 001D2084  7D 89 03 A6 */	mtctr r12
/* 801D5148 001D2088  4E 80 04 21 */	bctrl 
/* 801D514C 001D208C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5150 001D2090  7C 04 18 40 */	cmplw r4, r3
/* 801D5154 001D2094  40 82 FF 04 */	bne .L_801D5058
/* 801D5158 001D2098  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D515C 001D209C  7C 08 03 A6 */	mtlr r0
/* 801D5160 001D20A0  38 21 00 20 */	addi r1, r1, 0x20
/* 801D5164 001D20A4  4E 80 00 20 */	blr 
.endfn "doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D5168 001D20A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D516C 001D20AC  7C 08 02 A6 */	mflr r0
/* 801D5170 001D20B0  3C A0 80 4C */	lis r5, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D5174 001D20B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D5178 001D20B8  38 00 00 00 */	li r0, 0
/* 801D517C 001D20BC  38 A5 85 40 */	addi r5, r5, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D5180 001D20C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D5184 001D20C4  28 00 00 00 */	cmplwi r0, 0
/* 801D5188 001D20C8  7C 9F 23 78 */	mr r31, r4
/* 801D518C 001D20CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5190 001D20D0  90 A1 00 08 */	stw r5, 8(r1)
/* 801D5194 001D20D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D5198 001D20D8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D519C 001D20DC  40 82 00 1C */	bne .L_801D51B8
/* 801D51A0 001D20E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D51A4 001D20E4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D51A8 001D20E8  7D 89 03 A6 */	mtctr r12
/* 801D51AC 001D20EC  4E 80 04 21 */	bctrl 
/* 801D51B0 001D20F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D51B4 001D20F4  48 00 01 74 */	b .L_801D5328
.L_801D51B8:
/* 801D51B8 001D20F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D51BC 001D20FC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D51C0 001D2100  7D 89 03 A6 */	mtctr r12
/* 801D51C4 001D2104  4E 80 04 21 */	bctrl 
/* 801D51C8 001D2108  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D51CC 001D210C  48 00 00 58 */	b .L_801D5224
.L_801D51D0:
/* 801D51D0 001D2110  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D51D4 001D2114  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D51D8 001D2118  81 83 00 00 */	lwz r12, 0(r3)
/* 801D51DC 001D211C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D51E0 001D2120  7D 89 03 A6 */	mtctr r12
/* 801D51E4 001D2124  4E 80 04 21 */	bctrl 
/* 801D51E8 001D2128  7C 64 1B 78 */	mr r4, r3
/* 801D51EC 001D212C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D51F0 001D2130  81 83 00 00 */	lwz r12, 0(r3)
/* 801D51F4 001D2134  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D51F8 001D2138  7D 89 03 A6 */	mtctr r12
/* 801D51FC 001D213C  4E 80 04 21 */	bctrl 
/* 801D5200 001D2140  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5204 001D2144  40 82 01 24 */	bne .L_801D5328
/* 801D5208 001D2148  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D520C 001D214C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5210 001D2150  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5214 001D2154  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5218 001D2158  7D 89 03 A6 */	mtctr r12
/* 801D521C 001D215C  4E 80 04 21 */	bctrl 
/* 801D5220 001D2160  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D5224:
/* 801D5224 001D2164  81 81 00 08 */	lwz r12, 8(r1)
/* 801D5228 001D2168  38 61 00 08 */	addi r3, r1, 8
/* 801D522C 001D216C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5230 001D2170  7D 89 03 A6 */	mtctr r12
/* 801D5234 001D2174  4E 80 04 21 */	bctrl 
/* 801D5238 001D2178  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D523C 001D217C  41 82 FF 94 */	beq .L_801D51D0
/* 801D5240 001D2180  48 00 00 E8 */	b .L_801D5328
.L_801D5244:
/* 801D5244 001D2184  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5248 001D2188  81 83 00 00 */	lwz r12, 0(r3)
/* 801D524C 001D218C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5250 001D2190  7D 89 03 A6 */	mtctr r12
/* 801D5254 001D2194  4E 80 04 21 */	bctrl 
/* 801D5258 001D2198  81 83 00 00 */	lwz r12, 0(r3)
/* 801D525C 001D219C  7F E4 FB 78 */	mr r4, r31
/* 801D5260 001D21A0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801D5264 001D21A4  7D 89 03 A6 */	mtctr r12
/* 801D5268 001D21A8  4E 80 04 21 */	bctrl 
/* 801D526C 001D21AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5270 001D21B0  28 00 00 00 */	cmplwi r0, 0
/* 801D5274 001D21B4  40 82 00 24 */	bne .L_801D5298
/* 801D5278 001D21B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D527C 001D21BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5280 001D21C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5284 001D21C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5288 001D21C8  7D 89 03 A6 */	mtctr r12
/* 801D528C 001D21CC  4E 80 04 21 */	bctrl 
/* 801D5290 001D21D0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5294 001D21D4  48 00 00 94 */	b .L_801D5328
.L_801D5298:
/* 801D5298 001D21D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D529C 001D21DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D52A0 001D21E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D52A4 001D21E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D52A8 001D21E8  7D 89 03 A6 */	mtctr r12
/* 801D52AC 001D21EC  4E 80 04 21 */	bctrl 
/* 801D52B0 001D21F0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D52B4 001D21F4  48 00 00 58 */	b .L_801D530C
.L_801D52B8:
/* 801D52B8 001D21F8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D52BC 001D21FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D52C0 001D2200  81 83 00 00 */	lwz r12, 0(r3)
/* 801D52C4 001D2204  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D52C8 001D2208  7D 89 03 A6 */	mtctr r12
/* 801D52CC 001D220C  4E 80 04 21 */	bctrl 
/* 801D52D0 001D2210  7C 64 1B 78 */	mr r4, r3
/* 801D52D4 001D2214  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D52D8 001D2218  81 83 00 00 */	lwz r12, 0(r3)
/* 801D52DC 001D221C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D52E0 001D2220  7D 89 03 A6 */	mtctr r12
/* 801D52E4 001D2224  4E 80 04 21 */	bctrl 
/* 801D52E8 001D2228  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D52EC 001D222C  40 82 00 3C */	bne .L_801D5328
/* 801D52F0 001D2230  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D52F4 001D2234  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D52F8 001D2238  81 83 00 00 */	lwz r12, 0(r3)
/* 801D52FC 001D223C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5300 001D2240  7D 89 03 A6 */	mtctr r12
/* 801D5304 001D2244  4E 80 04 21 */	bctrl 
/* 801D5308 001D2248  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D530C:
/* 801D530C 001D224C  81 81 00 08 */	lwz r12, 8(r1)
/* 801D5310 001D2250  38 61 00 08 */	addi r3, r1, 8
/* 801D5314 001D2254  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5318 001D2258  7D 89 03 A6 */	mtctr r12
/* 801D531C 001D225C  4E 80 04 21 */	bctrl 
/* 801D5320 001D2260  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5324 001D2264  41 82 FF 94 */	beq .L_801D52B8
.L_801D5328:
/* 801D5328 001D2268  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D532C 001D226C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5330 001D2270  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D5334 001D2274  7D 89 03 A6 */	mtctr r12
/* 801D5338 001D2278  4E 80 04 21 */	bctrl 
/* 801D533C 001D227C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5340 001D2280  7C 04 18 40 */	cmplw r4, r3
/* 801D5344 001D2284  40 82 FF 00 */	bne .L_801D5244
/* 801D5348 001D2288  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D534C 001D228C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D5350 001D2290  7C 08 03 A6 */	mtlr r0
/* 801D5354 001D2294  38 21 00 20 */	addi r1, r1, 0x20
/* 801D5358 001D2298  4E 80 00 20 */	blr 
.endfn "doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D535C 001D229C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D5360 001D22A0  7C 08 02 A6 */	mflr r0
/* 801D5364 001D22A4  3C 80 80 4C */	lis r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D5368 001D22A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D536C 001D22AC  38 00 00 00 */	li r0, 0
/* 801D5370 001D22B0  38 84 85 40 */	addi r4, r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D5374 001D22B4  28 00 00 00 */	cmplwi r0, 0
/* 801D5378 001D22B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D537C 001D22BC  90 81 00 08 */	stw r4, 8(r1)
/* 801D5380 001D22C0  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D5384 001D22C4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D5388 001D22C8  40 82 00 1C */	bne .L_801D53A4
/* 801D538C 001D22CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5390 001D22D0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5394 001D22D4  7D 89 03 A6 */	mtctr r12
/* 801D5398 001D22D8  4E 80 04 21 */	bctrl 
/* 801D539C 001D22DC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D53A0 001D22E0  48 00 01 70 */	b .L_801D5510
.L_801D53A4:
/* 801D53A4 001D22E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D53A8 001D22E8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D53AC 001D22EC  7D 89 03 A6 */	mtctr r12
/* 801D53B0 001D22F0  4E 80 04 21 */	bctrl 
/* 801D53B4 001D22F4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D53B8 001D22F8  48 00 00 58 */	b .L_801D5410
.L_801D53BC:
/* 801D53BC 001D22FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D53C0 001D2300  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D53C4 001D2304  81 83 00 00 */	lwz r12, 0(r3)
/* 801D53C8 001D2308  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D53CC 001D230C  7D 89 03 A6 */	mtctr r12
/* 801D53D0 001D2310  4E 80 04 21 */	bctrl 
/* 801D53D4 001D2314  7C 64 1B 78 */	mr r4, r3
/* 801D53D8 001D2318  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D53DC 001D231C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D53E0 001D2320  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D53E4 001D2324  7D 89 03 A6 */	mtctr r12
/* 801D53E8 001D2328  4E 80 04 21 */	bctrl 
/* 801D53EC 001D232C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D53F0 001D2330  40 82 01 20 */	bne .L_801D5510
/* 801D53F4 001D2334  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D53F8 001D2338  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D53FC 001D233C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5400 001D2340  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5404 001D2344  7D 89 03 A6 */	mtctr r12
/* 801D5408 001D2348  4E 80 04 21 */	bctrl 
/* 801D540C 001D234C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D5410:
/* 801D5410 001D2350  81 81 00 08 */	lwz r12, 8(r1)
/* 801D5414 001D2354  38 61 00 08 */	addi r3, r1, 8
/* 801D5418 001D2358  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D541C 001D235C  7D 89 03 A6 */	mtctr r12
/* 801D5420 001D2360  4E 80 04 21 */	bctrl 
/* 801D5424 001D2364  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5428 001D2368  41 82 FF 94 */	beq .L_801D53BC
/* 801D542C 001D236C  48 00 00 E4 */	b .L_801D5510
.L_801D5430:
/* 801D5430 001D2370  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5434 001D2374  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5438 001D2378  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D543C 001D237C  7D 89 03 A6 */	mtctr r12
/* 801D5440 001D2380  4E 80 04 21 */	bctrl 
/* 801D5444 001D2384  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5448 001D2388  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801D544C 001D238C  7D 89 03 A6 */	mtctr r12
/* 801D5450 001D2390  4E 80 04 21 */	bctrl 
/* 801D5454 001D2394  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5458 001D2398  28 00 00 00 */	cmplwi r0, 0
/* 801D545C 001D239C  40 82 00 24 */	bne .L_801D5480
/* 801D5460 001D23A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5464 001D23A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5468 001D23A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D546C 001D23AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5470 001D23B0  7D 89 03 A6 */	mtctr r12
/* 801D5474 001D23B4  4E 80 04 21 */	bctrl 
/* 801D5478 001D23B8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D547C 001D23BC  48 00 00 94 */	b .L_801D5510
.L_801D5480:
/* 801D5480 001D23C0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5484 001D23C4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5488 001D23C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D548C 001D23CC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5490 001D23D0  7D 89 03 A6 */	mtctr r12
/* 801D5494 001D23D4  4E 80 04 21 */	bctrl 
/* 801D5498 001D23D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D549C 001D23DC  48 00 00 58 */	b .L_801D54F4
.L_801D54A0:
/* 801D54A0 001D23E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D54A4 001D23E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D54A8 001D23E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D54AC 001D23EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D54B0 001D23F0  7D 89 03 A6 */	mtctr r12
/* 801D54B4 001D23F4  4E 80 04 21 */	bctrl 
/* 801D54B8 001D23F8  7C 64 1B 78 */	mr r4, r3
/* 801D54BC 001D23FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D54C0 001D2400  81 83 00 00 */	lwz r12, 0(r3)
/* 801D54C4 001D2404  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D54C8 001D2408  7D 89 03 A6 */	mtctr r12
/* 801D54CC 001D240C  4E 80 04 21 */	bctrl 
/* 801D54D0 001D2410  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D54D4 001D2414  40 82 00 3C */	bne .L_801D5510
/* 801D54D8 001D2418  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D54DC 001D241C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D54E0 001D2420  81 83 00 00 */	lwz r12, 0(r3)
/* 801D54E4 001D2424  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D54E8 001D2428  7D 89 03 A6 */	mtctr r12
/* 801D54EC 001D242C  4E 80 04 21 */	bctrl 
/* 801D54F0 001D2430  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D54F4:
/* 801D54F4 001D2434  81 81 00 08 */	lwz r12, 8(r1)
/* 801D54F8 001D2438  38 61 00 08 */	addi r3, r1, 8
/* 801D54FC 001D243C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5500 001D2440  7D 89 03 A6 */	mtctr r12
/* 801D5504 001D2444  4E 80 04 21 */	bctrl 
/* 801D5508 001D2448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D550C 001D244C  41 82 FF 94 */	beq .L_801D54A0
.L_801D5510:
/* 801D5510 001D2450  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5514 001D2454  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5518 001D2458  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D551C 001D245C  7D 89 03 A6 */	mtctr r12
/* 801D5520 001D2460  4E 80 04 21 */	bctrl 
/* 801D5524 001D2464  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5528 001D2468  7C 04 18 40 */	cmplw r4, r3
/* 801D552C 001D246C  40 82 FF 04 */	bne .L_801D5430
/* 801D5530 001D2470  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D5534 001D2474  7C 08 03 A6 */	mtlr r0
/* 801D5538 001D2478  38 21 00 20 */	addi r1, r1, 0x20
/* 801D553C 001D247C  4E 80 00 20 */	blr 
.endfn "doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5540 001D2480  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D5544 001D2484  7C 08 02 A6 */	mflr r0
/* 801D5548 001D2488  3C 80 80 4C */	lis r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D554C 001D248C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D5550 001D2490  38 00 00 00 */	li r0, 0
/* 801D5554 001D2494  38 84 85 40 */	addi r4, r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D5558 001D2498  28 00 00 00 */	cmplwi r0, 0
/* 801D555C 001D249C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5560 001D24A0  90 81 00 08 */	stw r4, 8(r1)
/* 801D5564 001D24A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D5568 001D24A8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D556C 001D24AC  40 82 00 1C */	bne .L_801D5588
/* 801D5570 001D24B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5574 001D24B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5578 001D24B8  7D 89 03 A6 */	mtctr r12
/* 801D557C 001D24BC  4E 80 04 21 */	bctrl 
/* 801D5580 001D24C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5584 001D24C4  48 00 01 70 */	b .L_801D56F4
.L_801D5588:
/* 801D5588 001D24C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D558C 001D24CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5590 001D24D0  7D 89 03 A6 */	mtctr r12
/* 801D5594 001D24D4  4E 80 04 21 */	bctrl 
/* 801D5598 001D24D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D559C 001D24DC  48 00 00 58 */	b .L_801D55F4
.L_801D55A0:
/* 801D55A0 001D24E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D55A4 001D24E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D55A8 001D24E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D55AC 001D24EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D55B0 001D24F0  7D 89 03 A6 */	mtctr r12
/* 801D55B4 001D24F4  4E 80 04 21 */	bctrl 
/* 801D55B8 001D24F8  7C 64 1B 78 */	mr r4, r3
/* 801D55BC 001D24FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D55C0 001D2500  81 83 00 00 */	lwz r12, 0(r3)
/* 801D55C4 001D2504  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D55C8 001D2508  7D 89 03 A6 */	mtctr r12
/* 801D55CC 001D250C  4E 80 04 21 */	bctrl 
/* 801D55D0 001D2510  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D55D4 001D2514  40 82 01 20 */	bne .L_801D56F4
/* 801D55D8 001D2518  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D55DC 001D251C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D55E0 001D2520  81 83 00 00 */	lwz r12, 0(r3)
/* 801D55E4 001D2524  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D55E8 001D2528  7D 89 03 A6 */	mtctr r12
/* 801D55EC 001D252C  4E 80 04 21 */	bctrl 
/* 801D55F0 001D2530  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D55F4:
/* 801D55F4 001D2534  81 81 00 08 */	lwz r12, 8(r1)
/* 801D55F8 001D2538  38 61 00 08 */	addi r3, r1, 8
/* 801D55FC 001D253C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5600 001D2540  7D 89 03 A6 */	mtctr r12
/* 801D5604 001D2544  4E 80 04 21 */	bctrl 
/* 801D5608 001D2548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D560C 001D254C  41 82 FF 94 */	beq .L_801D55A0
/* 801D5610 001D2550  48 00 00 E4 */	b .L_801D56F4
.L_801D5614:
/* 801D5614 001D2554  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5618 001D2558  81 83 00 00 */	lwz r12, 0(r3)
/* 801D561C 001D255C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5620 001D2560  7D 89 03 A6 */	mtctr r12
/* 801D5624 001D2564  4E 80 04 21 */	bctrl 
/* 801D5628 001D2568  81 83 00 00 */	lwz r12, 0(r3)
/* 801D562C 001D256C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801D5630 001D2570  7D 89 03 A6 */	mtctr r12
/* 801D5634 001D2574  4E 80 04 21 */	bctrl 
/* 801D5638 001D2578  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D563C 001D257C  28 00 00 00 */	cmplwi r0, 0
/* 801D5640 001D2580  40 82 00 24 */	bne .L_801D5664
/* 801D5644 001D2584  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5648 001D2588  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D564C 001D258C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5650 001D2590  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5654 001D2594  7D 89 03 A6 */	mtctr r12
/* 801D5658 001D2598  4E 80 04 21 */	bctrl 
/* 801D565C 001D259C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5660 001D25A0  48 00 00 94 */	b .L_801D56F4
.L_801D5664:
/* 801D5664 001D25A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5668 001D25A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D566C 001D25AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5670 001D25B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5674 001D25B4  7D 89 03 A6 */	mtctr r12
/* 801D5678 001D25B8  4E 80 04 21 */	bctrl 
/* 801D567C 001D25BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5680 001D25C0  48 00 00 58 */	b .L_801D56D8
.L_801D5684:
/* 801D5684 001D25C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5688 001D25C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D568C 001D25CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5690 001D25D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5694 001D25D4  7D 89 03 A6 */	mtctr r12
/* 801D5698 001D25D8  4E 80 04 21 */	bctrl 
/* 801D569C 001D25DC  7C 64 1B 78 */	mr r4, r3
/* 801D56A0 001D25E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D56A4 001D25E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D56A8 001D25E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D56AC 001D25EC  7D 89 03 A6 */	mtctr r12
/* 801D56B0 001D25F0  4E 80 04 21 */	bctrl 
/* 801D56B4 001D25F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D56B8 001D25F8  40 82 00 3C */	bne .L_801D56F4
/* 801D56BC 001D25FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D56C0 001D2600  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D56C4 001D2604  81 83 00 00 */	lwz r12, 0(r3)
/* 801D56C8 001D2608  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D56CC 001D260C  7D 89 03 A6 */	mtctr r12
/* 801D56D0 001D2610  4E 80 04 21 */	bctrl 
/* 801D56D4 001D2614  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D56D8:
/* 801D56D8 001D2618  81 81 00 08 */	lwz r12, 8(r1)
/* 801D56DC 001D261C  38 61 00 08 */	addi r3, r1, 8
/* 801D56E0 001D2620  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D56E4 001D2624  7D 89 03 A6 */	mtctr r12
/* 801D56E8 001D2628  4E 80 04 21 */	bctrl 
/* 801D56EC 001D262C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D56F0 001D2630  41 82 FF 94 */	beq .L_801D5684
.L_801D56F4:
/* 801D56F4 001D2634  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D56F8 001D2638  81 83 00 00 */	lwz r12, 0(r3)
/* 801D56FC 001D263C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D5700 001D2640  7D 89 03 A6 */	mtctr r12
/* 801D5704 001D2644  4E 80 04 21 */	bctrl 
/* 801D5708 001D2648  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D570C 001D264C  7C 04 18 40 */	cmplw r4, r3
/* 801D5710 001D2650  40 82 FF 04 */	bne .L_801D5614
/* 801D5714 001D2654  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D5718 001D2658  7C 08 03 A6 */	mtlr r0
/* 801D571C 001D265C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D5720 001D2660  4E 80 00 20 */	blr 
.endfn "doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "__ct__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5724 001D2664  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5728 001D2668  7C 08 02 A6 */	mflr r0
/* 801D572C 001D266C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5730 001D2670  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D5734 001D2674  7C 7F 1B 78 */	mr r31, r3
/* 801D5738 001D2678  48 23 BC 59 */	bl __ct__5CNodeFv
/* 801D573C 001D267C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801D5740 001D2680  3C 60 80 4C */	lis r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@ha
/* 801D5744 001D2684  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801D5748 001D2688  3C C0 80 4B */	lis r6, __vt__16GenericObjectMgr@ha
/* 801D574C 001D268C  90 1F 00 00 */	stw r0, 0(r31)
/* 801D5750 001D2690  38 03 80 B8 */	addi r0, r3, "__vt__33Container<Q34Game9ItemHoney4Item>"@l
/* 801D5754 001D2694  3C 80 80 4B */	lis r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D5758 001D2698  3C 60 80 4B */	lis r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@ha
/* 801D575C 001D269C  90 1F 00 00 */	stw r0, 0(r31)
/* 801D5760 001D26A0  39 00 00 00 */	li r8, 0
/* 801D5764 001D26A4  38 E4 7E F0 */	addi r7, r4, "__vt__33ObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D5768 001D26A8  38 A3 7F 6C */	addi r5, r3, "__vt__37MonoObjectMgr<Q34Game9ItemHoney4Item>"@l
/* 801D576C 001D26AC  99 1F 00 18 */	stb r8, 0x18(r31)
/* 801D5770 001D26B0  38 06 B5 F0 */	addi r0, r6, __vt__16GenericObjectMgr@l
/* 801D5774 001D26B4  38 C7 00 2C */	addi r6, r7, 0x2c
/* 801D5778 001D26B8  38 85 00 2C */	addi r4, r5, 0x2c
/* 801D577C 001D26BC  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801D5780 001D26C0  38 00 00 01 */	li r0, 1
/* 801D5784 001D26C4  7F E3 FB 78 */	mr r3, r31
/* 801D5788 001D26C8  90 FF 00 00 */	stw r7, 0(r31)
/* 801D578C 001D26CC  90 DF 00 1C */	stw r6, 0x1c(r31)
/* 801D5790 001D26D0  90 BF 00 00 */	stw r5, 0(r31)
/* 801D5794 001D26D4  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801D5798 001D26D8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801D579C 001D26DC  91 1F 00 24 */	stw r8, 0x24(r31)
/* 801D57A0 001D26E0  91 1F 00 20 */	stw r8, 0x20(r31)
/* 801D57A4 001D26E4  91 1F 00 28 */	stw r8, 0x28(r31)
/* 801D57A8 001D26E8  91 1F 00 2C */	stw r8, 0x2c(r31)
/* 801D57AC 001D26EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D57B0 001D26F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D57B4 001D26F4  7C 08 03 A6 */	mtlr r0
/* 801D57B8 001D26F8  38 21 00 10 */	addi r1, r1, 0x10
/* 801D57BC 001D26FC  4E 80 00 20 */	blr 
.endfn "__ct__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D57C0 001D2700  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D57C4 001D2704  7C 08 02 A6 */	mflr r0
/* 801D57C8 001D2708  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D57CC 001D270C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D57D0 001D2710  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D57D4 001D2714  7D 89 03 A6 */	mtctr r12
/* 801D57D8 001D2718  4E 80 04 21 */	bctrl 
/* 801D57DC 001D271C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D57E0 001D2720  7C 08 03 A6 */	mtlr r0
/* 801D57E4 001D2724  38 21 00 10 */	addi r1, r1, 0x10
/* 801D57E8 001D2728  4E 80 00 20 */	blr 
.endfn "getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D57EC 001D272C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D57F0 001D2730  7C 08 02 A6 */	mflr r0
/* 801D57F4 001D2734  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D57F8 001D2738  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801D57FC 001D273C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5800 001D2740  7D 89 03 A6 */	mtctr r12
/* 801D5804 001D2744  4E 80 04 21 */	bctrl 
/* 801D5808 001D2748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D580C 001D274C  7C 08 03 A6 */	mtlr r0
/* 801D5810 001D2750  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5814 001D2754  4E 80 00 20 */	blr 
.endfn "get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"

.fn "initDependency__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5818 001D2758  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D581C 001D275C  7C 08 02 A6 */	mflr r0
/* 801D5820 001D2760  3C 80 80 4C */	lis r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@ha
/* 801D5824 001D2764  38 63 00 4C */	addi r3, r3, 0x4c
/* 801D5828 001D2768  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D582C 001D276C  38 00 00 00 */	li r0, 0
/* 801D5830 001D2770  38 84 85 40 */	addi r4, r4, "__vt__32Iterator<Q34Game9ItemHoney4Item>"@l
/* 801D5834 001D2774  28 00 00 00 */	cmplwi r0, 0
/* 801D5838 001D2778  90 81 00 08 */	stw r4, 8(r1)
/* 801D583C 001D277C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5840 001D2780  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D5844 001D2784  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D5848 001D2788  40 82 00 1C */	bne .L_801D5864
/* 801D584C 001D278C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5850 001D2790  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5854 001D2794  7D 89 03 A6 */	mtctr r12
/* 801D5858 001D2798  4E 80 04 21 */	bctrl 
/* 801D585C 001D279C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5860 001D27A0  48 00 01 70 */	b .L_801D59D0
.L_801D5864:
/* 801D5864 001D27A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5868 001D27A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D586C 001D27AC  7D 89 03 A6 */	mtctr r12
/* 801D5870 001D27B0  4E 80 04 21 */	bctrl 
/* 801D5874 001D27B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D5878 001D27B8  48 00 00 58 */	b .L_801D58D0
.L_801D587C:
/* 801D587C 001D27BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5880 001D27C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5884 001D27C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5888 001D27C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D588C 001D27CC  7D 89 03 A6 */	mtctr r12
/* 801D5890 001D27D0  4E 80 04 21 */	bctrl 
/* 801D5894 001D27D4  7C 64 1B 78 */	mr r4, r3
/* 801D5898 001D27D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D589C 001D27DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D58A0 001D27E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D58A4 001D27E4  7D 89 03 A6 */	mtctr r12
/* 801D58A8 001D27E8  4E 80 04 21 */	bctrl 
/* 801D58AC 001D27EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D58B0 001D27F0  40 82 01 20 */	bne .L_801D59D0
/* 801D58B4 001D27F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D58B8 001D27F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D58BC 001D27FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D58C0 001D2800  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D58C4 001D2804  7D 89 03 A6 */	mtctr r12
/* 801D58C8 001D2808  4E 80 04 21 */	bctrl 
/* 801D58CC 001D280C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D58D0:
/* 801D58D0 001D2810  81 81 00 08 */	lwz r12, 8(r1)
/* 801D58D4 001D2814  38 61 00 08 */	addi r3, r1, 8
/* 801D58D8 001D2818  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D58DC 001D281C  7D 89 03 A6 */	mtctr r12
/* 801D58E0 001D2820  4E 80 04 21 */	bctrl 
/* 801D58E4 001D2824  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D58E8 001D2828  41 82 FF 94 */	beq .L_801D587C
/* 801D58EC 001D282C  48 00 00 E4 */	b .L_801D59D0
.L_801D58F0:
/* 801D58F0 001D2830  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D58F4 001D2834  81 83 00 00 */	lwz r12, 0(r3)
/* 801D58F8 001D2838  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D58FC 001D283C  7D 89 03 A6 */	mtctr r12
/* 801D5900 001D2840  4E 80 04 21 */	bctrl 
/* 801D5904 001D2844  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5908 001D2848  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801D590C 001D284C  7D 89 03 A6 */	mtctr r12
/* 801D5910 001D2850  4E 80 04 21 */	bctrl 
/* 801D5914 001D2854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5918 001D2858  28 00 00 00 */	cmplwi r0, 0
/* 801D591C 001D285C  40 82 00 24 */	bne .L_801D5940
/* 801D5920 001D2860  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5924 001D2864  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5928 001D2868  81 83 00 00 */	lwz r12, 0(r3)
/* 801D592C 001D286C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5930 001D2870  7D 89 03 A6 */	mtctr r12
/* 801D5934 001D2874  4E 80 04 21 */	bctrl 
/* 801D5938 001D2878  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D593C 001D287C  48 00 00 94 */	b .L_801D59D0
.L_801D5940:
/* 801D5940 001D2880  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5944 001D2884  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5948 001D2888  81 83 00 00 */	lwz r12, 0(r3)
/* 801D594C 001D288C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5950 001D2890  7D 89 03 A6 */	mtctr r12
/* 801D5954 001D2894  4E 80 04 21 */	bctrl 
/* 801D5958 001D2898  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D595C 001D289C  48 00 00 58 */	b .L_801D59B4
.L_801D5960:
/* 801D5960 001D28A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D5964 001D28A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D5968 001D28A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D596C 001D28AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5970 001D28B0  7D 89 03 A6 */	mtctr r12
/* 801D5974 001D28B4  4E 80 04 21 */	bctrl 
/* 801D5978 001D28B8  7C 64 1B 78 */	mr r4, r3
/* 801D597C 001D28BC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D5980 001D28C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5984 001D28C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D5988 001D28C8  7D 89 03 A6 */	mtctr r12
/* 801D598C 001D28CC  4E 80 04 21 */	bctrl 
/* 801D5990 001D28D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5994 001D28D4  40 82 00 3C */	bne .L_801D59D0
/* 801D5998 001D28D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D599C 001D28DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D59A0 001D28E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D59A4 001D28E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D59A8 001D28E8  7D 89 03 A6 */	mtctr r12
/* 801D59AC 001D28EC  4E 80 04 21 */	bctrl 
/* 801D59B0 001D28F0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D59B4:
/* 801D59B4 001D28F4  81 81 00 08 */	lwz r12, 8(r1)
/* 801D59B8 001D28F8  38 61 00 08 */	addi r3, r1, 8
/* 801D59BC 001D28FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D59C0 001D2900  7D 89 03 A6 */	mtctr r12
/* 801D59C4 001D2904  4E 80 04 21 */	bctrl 
/* 801D59C8 001D2908  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D59CC 001D290C  41 82 FF 94 */	beq .L_801D5960
.L_801D59D0:
/* 801D59D0 001D2910  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D59D4 001D2914  81 83 00 00 */	lwz r12, 0(r3)
/* 801D59D8 001D2918  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D59DC 001D291C  7D 89 03 A6 */	mtctr r12
/* 801D59E0 001D2920  4E 80 04 21 */	bctrl 
/* 801D59E4 001D2924  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D59E8 001D2928  7C 04 18 40 */	cmplw r4, r3
/* 801D59EC 001D292C  40 82 FF 04 */	bne .L_801D58F0
/* 801D59F0 001D2930  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D59F4 001D2934  7C 08 03 A6 */	mtlr r0
/* 801D59F8 001D2938  38 21 00 20 */	addi r1, r1, 0x20
/* 801D59FC 001D293C  4E 80 00 20 */	blr 
.endfn "initDependency__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "killAll__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5A00 001D2940  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801D5A04 001D2944  7C 08 02 A6 */	mflr r0
/* 801D5A08 001D2948  3C 80 80 4B */	lis r4, __vt__Q24Game15CreatureKillArg@ha
/* 801D5A0C 001D294C  90 01 00 34 */	stw r0, 0x34(r1)
/* 801D5A10 001D2950  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 801D5A14 001D2954  7C 7B 1B 78 */	mr r27, r3
/* 801D5A18 001D2958  3B E4 A2 D0 */	addi r31, r4, __vt__Q24Game15CreatureKillArg@l
/* 801D5A1C 001D295C  3B A0 00 00 */	li r29, 0
/* 801D5A20 001D2960  48 00 00 A0 */	b .L_801D5AC0
.L_801D5A24:
/* 801D5A24 001D2964  38 7B 00 4C */	addi r3, r27, 0x4c
/* 801D5A28 001D2968  7F A4 EB 78 */	mr r4, r29
/* 801D5A2C 001D296C  81 9B 00 4C */	lwz r12, 0x4c(r27)
/* 801D5A30 001D2970  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801D5A34 001D2974  7D 89 03 A6 */	mtctr r12
/* 801D5A38 001D2978  4E 80 04 21 */	bctrl 
/* 801D5A3C 001D297C  38 00 00 01 */	li r0, 1
/* 801D5A40 001D2980  93 E1 00 08 */	stw r31, 8(r1)
/* 801D5A44 001D2984  7C 7C 1B 78 */	mr r28, r3
/* 801D5A48 001D2988  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D5A4C 001D298C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5A50 001D2990  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801D5A54 001D2994  7D 89 03 A6 */	mtctr r12
/* 801D5A58 001D2998  4E 80 04 21 */	bctrl 
/* 801D5A5C 001D299C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5A60 001D29A0  41 82 00 10 */	beq .L_801D5A70
/* 801D5A64 001D29A4  7F 83 E3 78 */	mr r3, r28
/* 801D5A68 001D29A8  38 81 00 08 */	addi r4, r1, 8
/* 801D5A6C 001D29AC  4B F6 56 85 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
.L_801D5A70:
/* 801D5A70 001D29B0  7F 83 E3 78 */	mr r3, r28
/* 801D5A74 001D29B4  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D5A78 001D29B8  81 8C 00 F8 */	lwz r12, 0xf8(r12)
/* 801D5A7C 001D29BC  7D 89 03 A6 */	mtctr r12
/* 801D5A80 001D29C0  4E 80 04 21 */	bctrl 
/* 801D5A84 001D29C4  28 03 00 00 */	cmplwi r3, 0
/* 801D5A88 001D29C8  41 82 00 34 */	beq .L_801D5ABC
/* 801D5A8C 001D29CC  83 CD 91 BC */	lwz r30, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801D5A90 001D29D0  28 1E 00 00 */	cmplwi r30, 0
/* 801D5A94 001D29D4  41 82 00 28 */	beq .L_801D5ABC
/* 801D5A98 001D29D8  7F 83 E3 78 */	mr r3, r28
/* 801D5A9C 001D29DC  81 9C 00 00 */	lwz r12, 0(r28)
/* 801D5AA0 001D29E0  81 8C 00 F8 */	lwz r12, 0xf8(r12)
/* 801D5AA4 001D29E4  7D 89 03 A6 */	mtctr r12
/* 801D5AA8 001D29E8  4E 80 04 21 */	bctrl 
/* 801D5AAC 001D29EC  7C 60 1B 78 */	mr r0, r3
/* 801D5AB0 001D29F0  7F C3 F3 78 */	mr r3, r30
/* 801D5AB4 001D29F4  7C 04 03 78 */	mr r4, r0
/* 801D5AB8 001D29F8  4B E5 11 6D */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_801D5ABC:
/* 801D5ABC 001D29FC  3B BD 00 01 */	addi r29, r29, 1
.L_801D5AC0:
/* 801D5AC0 001D2A00  80 1B 00 70 */	lwz r0, 0x70(r27)
/* 801D5AC4 001D2A04  7C 1D 00 00 */	cmpw r29, r0
/* 801D5AC8 001D2A08  41 80 FF 5C */	blt .L_801D5A24
/* 801D5ACC 001D2A0C  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 801D5AD0 001D2A10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801D5AD4 001D2A14  7C 08 03 A6 */	mtlr r0
/* 801D5AD8 001D2A18  38 21 00 30 */	addi r1, r1, 0x30
/* 801D5ADC 001D2A1C  4E 80 00 20 */	blr 
.endfn "killAll__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "createModelCallback__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model", weak
/* 801D5AE0 001D2A20  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5AE4 001D2A24  7C 08 02 A6 */	mflr r0
/* 801D5AE8 001D2A28  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5AEC 001D2A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5AF0 001D2A30  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 801D5AF4 001D2A34  7D 89 03 A6 */	mtctr r12
/* 801D5AF8 001D2A38  4E 80 04 21 */	bctrl 
/* 801D5AFC 001D2A3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5B00 001D2A40  7C 08 03 A6 */	mtlr r0
/* 801D5B04 001D2A44  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5B08 001D2A48  4E 80 00 20 */	blr 
.endfn "createModelCallback__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPQ28SysShape5Model"

.fn "createMgr__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FiUl", weak
/* 801D5B0C 001D2A4C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 801D5B10 001D2A50  7C 08 02 A6 */	mflr r0
/* 801D5B14 001D2A54  90 01 00 34 */	stw r0, 0x34(r1)
/* 801D5B18 001D2A58  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 801D5B1C 001D2A5C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 801D5B20 001D2A60  7C BE 2B 78 */	mr r30, r5
/* 801D5B24 001D2A64  93 A1 00 24 */	stw r29, 0x24(r1)
/* 801D5B28 001D2A68  7C 9D 23 78 */	mr r29, r4
/* 801D5B2C 001D2A6C  93 81 00 20 */	stw r28, 0x20(r1)
/* 801D5B30 001D2A70  7C 7C 1B 78 */	mr r28, r3
/* 801D5B34 001D2A74  38 7C 00 4C */	addi r3, r28, 0x4c
/* 801D5B38 001D2A78  48 00 03 15 */	bl "alloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"
/* 801D5B3C 001D2A7C  7F 83 E3 78 */	mr r3, r28
/* 801D5B40 001D2A80  48 00 02 A9 */	bl "onAlloc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
/* 801D5B44 001D2A84  38 60 00 1C */	li r3, 0x1c
/* 801D5B48 001D2A88  4B E4 E3 5D */	bl __nw__FUl
/* 801D5B4C 001D2A8C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801D5B50 001D2A90  41 82 00 7C */	beq .L_801D5BCC
/* 801D5B54 001D2A94  38 60 00 14 */	li r3, 0x14
/* 801D5B58 001D2A98  4B E4 E3 4D */	bl __nw__FUl
/* 801D5B5C 001D2A9C  7C 69 1B 79 */	or. r9, r3, r3
/* 801D5B60 001D2AA0  41 82 00 4C */	beq .L_801D5BAC
/* 801D5B64 001D2AA4  3C 60 80 4C */	lis r3, lbl_804B8528@ha
/* 801D5B68 001D2AA8  3C 80 80 4B */	lis r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
/* 801D5B6C 001D2AAC  38 E3 85 28 */	addi r7, r3, lbl_804B8528@l
/* 801D5B70 001D2AB0  3C 60 80 4C */	lis r3, "__vt__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>"@ha
/* 801D5B74 001D2AB4  80 C7 00 00 */	lwz r6, 0(r7)
/* 801D5B78 001D2AB8  38 84 16 BC */	addi r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
/* 801D5B7C 001D2ABC  80 A7 00 04 */	lwz r5, 4(r7)
/* 801D5B80 001D2AC0  38 03 85 34 */	addi r0, r3, "__vt__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>"@l
/* 801D5B84 001D2AC4  80 67 00 08 */	lwz r3, 8(r7)
/* 801D5B88 001D2AC8  90 C1 00 08 */	stw r6, 8(r1)
/* 801D5B8C 001D2ACC  90 89 00 00 */	stw r4, 0(r9)
/* 801D5B90 001D2AD0  90 09 00 00 */	stw r0, 0(r9)
/* 801D5B94 001D2AD4  93 89 00 04 */	stw r28, 4(r9)
/* 801D5B98 001D2AD8  90 C9 00 08 */	stw r6, 8(r9)
/* 801D5B9C 001D2ADC  90 A9 00 0C */	stw r5, 0xc(r9)
/* 801D5BA0 001D2AE0  90 A1 00 0C */	stw r5, 0xc(r1)
/* 801D5BA4 001D2AE4  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D5BA8 001D2AE8  90 69 00 10 */	stw r3, 0x10(r9)
.L_801D5BAC:
/* 801D5BAC 001D2AEC  80 9C 00 18 */	lwz r4, 0x18(r28)
/* 801D5BB0 001D2AF0  7F E3 FB 78 */	mr r3, r31
/* 801D5BB4 001D2AF4  80 BC 00 1C */	lwz r5, 0x1c(r28)
/* 801D5BB8 001D2AF8  7F A6 EB 78 */	mr r6, r29
/* 801D5BBC 001D2AFC  7F C7 F3 78 */	mr r7, r30
/* 801D5BC0 001D2B00  39 00 00 02 */	li r8, 2
/* 801D5BC4 001D2B04  48 25 4F 3D */	bl "__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
/* 801D5BC8 001D2B08  7C 7F 1B 78 */	mr r31, r3
.L_801D5BCC:
/* 801D5BCC 001D2B0C  93 FC 00 7C */	stw r31, 0x7c(r28)
/* 801D5BD0 001D2B10  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801D5BD4 001D2B14  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 801D5BD8 001D2B18  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 801D5BDC 001D2B1C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 801D5BE0 001D2B20  83 81 00 20 */	lwz r28, 0x20(r1)
/* 801D5BE4 001D2B24  7C 08 03 A6 */	mtlr r0
/* 801D5BE8 001D2B28  38 21 00 30 */	addi r1, r1, 0x30
/* 801D5BEC 001D2B2C  4E 80 00 20 */	blr 
.endfn "createMgr__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FiUl"

.fn "__ml__32Iterator<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5BF0 001D2B30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5BF4 001D2B34  7C 08 02 A6 */	mflr r0
/* 801D5BF8 001D2B38  7C 64 1B 78 */	mr r4, r3
/* 801D5BFC 001D2B3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5C00 001D2B40  80 63 00 08 */	lwz r3, 8(r3)
/* 801D5C04 001D2B44  80 84 00 04 */	lwz r4, 4(r4)
/* 801D5C08 001D2B48  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5C0C 001D2B4C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5C10 001D2B50  7D 89 03 A6 */	mtctr r12
/* 801D5C14 001D2B54  4E 80 04 21 */	bctrl 
/* 801D5C18 001D2B58  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5C1C 001D2B5C  7C 08 03 A6 */	mtlr r0
/* 801D5C20 001D2B60  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5C24 001D2B64  4E 80 00 20 */	blr 
.endfn "__ml__32Iterator<Q34Game9ItemHoney4Item>Fv"

.fn "next__32Iterator<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5C28 001D2B68  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5C2C 001D2B6C  7C 08 02 A6 */	mflr r0
/* 801D5C30 001D2B70  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5C34 001D2B74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D5C38 001D2B78  7C 7F 1B 78 */	mr r31, r3
/* 801D5C3C 001D2B7C  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801D5C40 001D2B80  28 00 00 00 */	cmplwi r0, 0
/* 801D5C44 001D2B84  40 82 00 24 */	bne .L_801D5C68
/* 801D5C48 001D2B88  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5C4C 001D2B8C  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5C50 001D2B90  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5C54 001D2B94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5C58 001D2B98  7D 89 03 A6 */	mtctr r12
/* 801D5C5C 001D2B9C  4E 80 04 21 */	bctrl 
/* 801D5C60 001D2BA0  90 7F 00 04 */	stw r3, 4(r31)
/* 801D5C64 001D2BA4  48 00 00 94 */	b .L_801D5CF8
.L_801D5C68:
/* 801D5C68 001D2BA8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5C6C 001D2BAC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5C70 001D2BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5C74 001D2BB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5C78 001D2BB8  7D 89 03 A6 */	mtctr r12
/* 801D5C7C 001D2BBC  4E 80 04 21 */	bctrl 
/* 801D5C80 001D2BC0  90 7F 00 04 */	stw r3, 4(r31)
/* 801D5C84 001D2BC4  48 00 00 58 */	b .L_801D5CDC
.L_801D5C88:
/* 801D5C88 001D2BC8  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5C8C 001D2BCC  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5C90 001D2BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5C94 001D2BD4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5C98 001D2BD8  7D 89 03 A6 */	mtctr r12
/* 801D5C9C 001D2BDC  4E 80 04 21 */	bctrl 
/* 801D5CA0 001D2BE0  7C 64 1B 78 */	mr r4, r3
/* 801D5CA4 001D2BE4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801D5CA8 001D2BE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5CAC 001D2BEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D5CB0 001D2BF0  7D 89 03 A6 */	mtctr r12
/* 801D5CB4 001D2BF4  4E 80 04 21 */	bctrl 
/* 801D5CB8 001D2BF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5CBC 001D2BFC  40 82 00 3C */	bne .L_801D5CF8
/* 801D5CC0 001D2C00  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5CC4 001D2C04  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5CC8 001D2C08  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5CCC 001D2C0C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5CD0 001D2C10  7D 89 03 A6 */	mtctr r12
/* 801D5CD4 001D2C14  4E 80 04 21 */	bctrl 
/* 801D5CD8 001D2C18  90 7F 00 04 */	stw r3, 4(r31)
.L_801D5CDC:
/* 801D5CDC 001D2C1C  7F E3 FB 78 */	mr r3, r31
/* 801D5CE0 001D2C20  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D5CE4 001D2C24  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5CE8 001D2C28  7D 89 03 A6 */	mtctr r12
/* 801D5CEC 001D2C2C  4E 80 04 21 */	bctrl 
/* 801D5CF0 001D2C30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5CF4 001D2C34  41 82 FF 94 */	beq .L_801D5C88
.L_801D5CF8:
/* 801D5CF8 001D2C38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5CFC 001D2C3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D5D00 001D2C40  7C 08 03 A6 */	mtlr r0
/* 801D5D04 001D2C44  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5D08 001D2C48  4E 80 00 20 */	blr 
.endfn "next__32Iterator<Q34Game9ItemHoney4Item>Fv"

.fn "first__32Iterator<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5D0C 001D2C4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5D10 001D2C50  7C 08 02 A6 */	mflr r0
/* 801D5D14 001D2C54  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5D18 001D2C58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D5D1C 001D2C5C  7C 7F 1B 78 */	mr r31, r3
/* 801D5D20 001D2C60  80 03 00 0C */	lwz r0, 0xc(r3)
/* 801D5D24 001D2C64  28 00 00 00 */	cmplwi r0, 0
/* 801D5D28 001D2C68  40 82 00 20 */	bne .L_801D5D48
/* 801D5D2C 001D2C6C  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5D30 001D2C70  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5D34 001D2C74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5D38 001D2C78  7D 89 03 A6 */	mtctr r12
/* 801D5D3C 001D2C7C  4E 80 04 21 */	bctrl 
/* 801D5D40 001D2C80  90 7F 00 04 */	stw r3, 4(r31)
/* 801D5D44 001D2C84  48 00 00 90 */	b .L_801D5DD4
.L_801D5D48:
/* 801D5D48 001D2C88  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5D4C 001D2C8C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5D50 001D2C90  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D5D54 001D2C94  7D 89 03 A6 */	mtctr r12
/* 801D5D58 001D2C98  4E 80 04 21 */	bctrl 
/* 801D5D5C 001D2C9C  90 7F 00 04 */	stw r3, 4(r31)
/* 801D5D60 001D2CA0  48 00 00 58 */	b .L_801D5DB8
.L_801D5D64:
/* 801D5D64 001D2CA4  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5D68 001D2CA8  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5D6C 001D2CAC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5D70 001D2CB0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D5D74 001D2CB4  7D 89 03 A6 */	mtctr r12
/* 801D5D78 001D2CB8  4E 80 04 21 */	bctrl 
/* 801D5D7C 001D2CBC  7C 64 1B 78 */	mr r4, r3
/* 801D5D80 001D2CC0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801D5D84 001D2CC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5D88 001D2CC8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D5D8C 001D2CCC  7D 89 03 A6 */	mtctr r12
/* 801D5D90 001D2CD0  4E 80 04 21 */	bctrl 
/* 801D5D94 001D2CD4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5D98 001D2CD8  40 82 00 3C */	bne .L_801D5DD4
/* 801D5D9C 001D2CDC  80 7F 00 08 */	lwz r3, 8(r31)
/* 801D5DA0 001D2CE0  80 9F 00 04 */	lwz r4, 4(r31)
/* 801D5DA4 001D2CE4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5DA8 001D2CE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D5DAC 001D2CEC  7D 89 03 A6 */	mtctr r12
/* 801D5DB0 001D2CF0  4E 80 04 21 */	bctrl 
/* 801D5DB4 001D2CF4  90 7F 00 04 */	stw r3, 4(r31)
.L_801D5DB8:
/* 801D5DB8 001D2CF8  7F E3 FB 78 */	mr r3, r31
/* 801D5DBC 001D2CFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 801D5DC0 001D2D00  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D5DC4 001D2D04  7D 89 03 A6 */	mtctr r12
/* 801D5DC8 001D2D08  4E 80 04 21 */	bctrl 
/* 801D5DCC 001D2D0C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D5DD0 001D2D10  41 82 FF 94 */	beq .L_801D5D64
.L_801D5DD4:
/* 801D5DD4 001D2D14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5DD8 001D2D18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D5DDC 001D2D1C  7C 08 03 A6 */	mtlr r0
/* 801D5DE0 001D2D20  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5DE4 001D2D24  4E 80 00 20 */	blr 
.endfn "first__32Iterator<Q34Game9ItemHoney4Item>Fv"

.fn "onAlloc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D5DE8 001D2D28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5DEC 001D2D2C  7C 08 02 A6 */	mflr r0
/* 801D5DF0 001D2D30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5DF4 001D2D34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801D5DF8 001D2D38  3B E0 00 00 */	li r31, 0
/* 801D5DFC 001D2D3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801D5E00 001D2D40  7C 7E 1B 78 */	mr r30, r3
/* 801D5E04 001D2D44  48 00 00 24 */	b .L_801D5E28
.L_801D5E08:
/* 801D5E08 001D2D48  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801D5E0C 001D2D4C  7F E4 FB 78 */	mr r4, r31
/* 801D5E10 001D2D50  81 9E 00 4C */	lwz r12, 0x4c(r30)
/* 801D5E14 001D2D54  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801D5E18 001D2D58  7D 89 03 A6 */	mtctr r12
/* 801D5E1C 001D2D5C  4E 80 04 21 */	bctrl 
/* 801D5E20 001D2D60  93 E3 01 84 */	stw r31, 0x184(r3)
/* 801D5E24 001D2D64  3B FF 00 01 */	addi r31, r31, 1
.L_801D5E28:
/* 801D5E28 001D2D68  80 1E 00 70 */	lwz r0, 0x70(r30)
/* 801D5E2C 001D2D6C  7C 1F 00 00 */	cmpw r31, r0
/* 801D5E30 001D2D70  41 80 FF D8 */	blt .L_801D5E08
/* 801D5E34 001D2D74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5E38 001D2D78  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801D5E3C 001D2D7C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801D5E40 001D2D80  7C 08 03 A6 */	mtlr r0
/* 801D5E44 001D2D84  38 21 00 10 */	addi r1, r1, 0x10
/* 801D5E48 001D2D88  4E 80 00 20 */	blr 
.endfn "onAlloc__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "alloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D5E4C 001D2D8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D5E50 001D2D90  7C 08 02 A6 */	mflr r0
/* 801D5E54 001D2D94  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D5E58 001D2D98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D5E5C 001D2D9C  7C 9F 23 78 */	mr r31, r4
/* 801D5E60 001D2DA0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801D5E64 001D2DA4  7C 7E 1B 78 */	mr r30, r3
/* 801D5E68 001D2DA8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801D5E6C 001D2DAC  7F FD FB 78 */	mr r29, r31
/* 801D5E70 001D2DB0  1C 7D 01 E4 */	mulli r3, r29, 0x1e4
/* 801D5E74 001D2DB4  93 81 00 10 */	stw r28, 0x10(r1)
/* 801D5E78 001D2DB8  38 63 00 10 */	addi r3, r3, 0x10
/* 801D5E7C 001D2DBC  4B E4 E1 31 */	bl __nwa__FUl
/* 801D5E80 001D2DC0  3C 80 80 1D */	lis r4, __ct__Q34Game9ItemHoney4ItemFv@ha
/* 801D5E84 001D2DC4  7F A7 EB 78 */	mr r7, r29
/* 801D5E88 001D2DC8  38 84 36 38 */	addi r4, r4, __ct__Q34Game9ItemHoney4ItemFv@l
/* 801D5E8C 001D2DCC  38 A0 00 00 */	li r5, 0
/* 801D5E90 001D2DD0  38 C0 01 E4 */	li r6, 0x1e4
/* 801D5E94 001D2DD4  4B EE BB 5D */	bl __construct_new_array
/* 801D5E98 001D2DD8  90 7E 00 28 */	stw r3, 0x28(r30)
/* 801D5E9C 001D2DDC  38 00 00 00 */	li r0, 0
/* 801D5EA0 001D2DE0  7F A3 EB 78 */	mr r3, r29
/* 801D5EA4 001D2DE4  93 FE 00 24 */	stw r31, 0x24(r30)
/* 801D5EA8 001D2DE8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801D5EAC 001D2DEC  4B E4 E1 01 */	bl __nwa__FUl
/* 801D5EB0 001D2DF0  2C 1F 00 00 */	cmpwi r31, 0
/* 801D5EB4 001D2DF4  90 7E 00 2C */	stw r3, 0x2c(r30)
/* 801D5EB8 001D2DF8  39 60 00 00 */	li r11, 0
/* 801D5EBC 001D2DFC  40 81 00 B0 */	ble .L_801D5F6C
/* 801D5EC0 001D2E00  2C 1F 00 08 */	cmpwi r31, 8
/* 801D5EC4 001D2E04  38 7F FF F8 */	addi r3, r31, -8
/* 801D5EC8 001D2E08  40 81 00 80 */	ble .L_801D5F48
/* 801D5ECC 001D2E0C  38 03 00 07 */	addi r0, r3, 7
/* 801D5ED0 001D2E10  54 00 E8 FE */	srwi r0, r0, 3
/* 801D5ED4 001D2E14  7C 09 03 A6 */	mtctr r0
/* 801D5ED8 001D2E18  2C 03 00 00 */	cmpwi r3, 0
/* 801D5EDC 001D2E1C  40 81 00 6C */	ble .L_801D5F48
.L_801D5EE0:
/* 801D5EE0 001D2E20  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801D5EE4 001D2E24  39 40 00 01 */	li r10, 1
/* 801D5EE8 001D2E28  39 0B 00 01 */	addi r8, r11, 1
/* 801D5EEC 001D2E2C  38 EB 00 02 */	addi r7, r11, 2
/* 801D5EF0 001D2E30  7D 43 59 AE */	stbx r10, r3, r11
/* 801D5EF4 001D2E34  38 CB 00 03 */	addi r6, r11, 3
/* 801D5EF8 001D2E38  38 AB 00 04 */	addi r5, r11, 4
/* 801D5EFC 001D2E3C  38 8B 00 05 */	addi r4, r11, 5
/* 801D5F00 001D2E40  81 3E 00 2C */	lwz r9, 0x2c(r30)
/* 801D5F04 001D2E44  38 6B 00 06 */	addi r3, r11, 6
/* 801D5F08 001D2E48  38 0B 00 07 */	addi r0, r11, 7
/* 801D5F0C 001D2E4C  39 6B 00 08 */	addi r11, r11, 8
/* 801D5F10 001D2E50  7D 49 41 AE */	stbx r10, r9, r8
/* 801D5F14 001D2E54  81 1E 00 2C */	lwz r8, 0x2c(r30)
/* 801D5F18 001D2E58  7D 48 39 AE */	stbx r10, r8, r7
/* 801D5F1C 001D2E5C  80 FE 00 2C */	lwz r7, 0x2c(r30)
/* 801D5F20 001D2E60  7D 47 31 AE */	stbx r10, r7, r6
/* 801D5F24 001D2E64  80 DE 00 2C */	lwz r6, 0x2c(r30)
/* 801D5F28 001D2E68  7D 46 29 AE */	stbx r10, r6, r5
/* 801D5F2C 001D2E6C  80 BE 00 2C */	lwz r5, 0x2c(r30)
/* 801D5F30 001D2E70  7D 45 21 AE */	stbx r10, r5, r4
/* 801D5F34 001D2E74  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 801D5F38 001D2E78  7D 44 19 AE */	stbx r10, r4, r3
/* 801D5F3C 001D2E7C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801D5F40 001D2E80  7D 43 01 AE */	stbx r10, r3, r0
/* 801D5F44 001D2E84  42 00 FF 9C */	bdnz .L_801D5EE0
.L_801D5F48:
/* 801D5F48 001D2E88  7C 0B F8 50 */	subf r0, r11, r31
/* 801D5F4C 001D2E8C  38 80 00 01 */	li r4, 1
/* 801D5F50 001D2E90  7C 09 03 A6 */	mtctr r0
/* 801D5F54 001D2E94  7C 0B F8 00 */	cmpw r11, r31
/* 801D5F58 001D2E98  40 80 00 14 */	bge .L_801D5F6C
.L_801D5F5C:
/* 801D5F5C 001D2E9C  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 801D5F60 001D2EA0  7C 83 59 AE */	stbx r4, r3, r11
/* 801D5F64 001D2EA4  39 6B 00 01 */	addi r11, r11, 1
/* 801D5F68 001D2EA8  42 00 FF F4 */	bdnz .L_801D5F5C
.L_801D5F6C:
/* 801D5F6C 001D2EAC  7F C3 F3 78 */	mr r3, r30
/* 801D5F70 001D2EB0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801D5F74 001D2EB4  81 8C 00 88 */	lwz r12, 0x88(r12)
/* 801D5F78 001D2EB8  7D 89 03 A6 */	mtctr r12
/* 801D5F7C 001D2EBC  4E 80 04 21 */	bctrl 
/* 801D5F80 001D2EC0  3B 80 00 00 */	li r28, 0
/* 801D5F84 001D2EC4  3B A0 00 00 */	li r29, 0
/* 801D5F88 001D2EC8  48 00 00 24 */	b .L_801D5FAC
.L_801D5F8C:
/* 801D5F8C 001D2ECC  80 1E 00 28 */	lwz r0, 0x28(r30)
/* 801D5F90 001D2ED0  7C 60 EA 14 */	add r3, r0, r29
/* 801D5F94 001D2ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D5F98 001D2ED8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801D5F9C 001D2EDC  7D 89 03 A6 */	mtctr r12
/* 801D5FA0 001D2EE0  4E 80 04 21 */	bctrl 
/* 801D5FA4 001D2EE4  3B BD 01 E4 */	addi r29, r29, 0x1e4
/* 801D5FA8 001D2EE8  3B 9C 00 01 */	addi r28, r28, 1
.L_801D5FAC:
/* 801D5FAC 001D2EEC  7C 1C F8 00 */	cmpw r28, r31
/* 801D5FB0 001D2EF0  41 80 FF DC */	blt .L_801D5F8C
/* 801D5FB4 001D2EF4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D5FB8 001D2EF8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D5FBC 001D2EFC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801D5FC0 001D2F00  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801D5FC4 001D2F04  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801D5FC8 001D2F08  7C 08 03 A6 */	mtlr r0
/* 801D5FCC 001D2F0C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D5FD0 001D2F10  4E 80 00 20 */	blr 
.endfn "alloc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "invoke__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>FPQ28SysShape5Model", weak
/* 801D5FD4 001D2F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D5FD8 001D2F18  7C 08 02 A6 */	mflr r0
/* 801D5FDC 001D2F1C  7C 65 1B 78 */	mr r5, r3
/* 801D5FE0 001D2F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D5FE4 001D2F24  39 85 00 08 */	addi r12, r5, 8
/* 801D5FE8 001D2F28  80 63 00 04 */	lwz r3, 4(r3)
/* 801D5FEC 001D2F2C  4B EE BB 39 */	bl __ptmf_scall
/* 801D5FF0 001D2F30  60 00 00 00 */	nop 
/* 801D5FF4 001D2F34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D5FF8 001D2F38  7C 08 03 A6 */	mtlr r0
/* 801D5FFC 001D2F3C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D6000 001D2F40  4E 80 00 20 */	blr 
.endfn "invoke__79Delegate1<Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>,PQ28SysShape5Model>FPQ28SysShape5Model"

.fn "@376@onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent", weak
/* 801D6004 001D2F44  38 63 FE 88 */	addi r3, r3, -376
/* 801D6008 001D2F48  4B FF DB 0C */	b onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent
.endfn "@376@onKeyEvent__Q34Game9ItemHoney4ItemFRCQ28SysShape8KeyEvent"

.fn "@48@__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D600C 001D2F4C  38 63 FF D0 */	addi r3, r3, -48
/* 801D6010 001D2F50  4B FF DE 88 */	b "__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@48@__dt__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D6014 001D2F54  38 63 FF E4 */	addi r3, r3, -28
/* 801D6018 001D2F58  4B FF EA 64 */	b "resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@resetMgr__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics", weak
/* 801D601C 001D2F5C  38 63 FF E4 */	addi r3, r3, -28
/* 801D6020 001D2F60  4B FF E9 CC */	b "doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
.endfn "@28@doDirectDraw__37MonoObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"

.fn "@28@doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff", weak
/* 801D6024 001D2F64  38 63 FF E4 */	addi r3, r3, -28
/* 801D6028 001D2F68  4B FF E9 34 */	b "doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff"
.endfn "@28@doSimulation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Ff"

.fn "@28@doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D602C 001D2F6C  38 63 FF E4 */	addi r3, r3, -28
/* 801D6030 001D2F70  4B FF E8 AC */	b "doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doViewCalc__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D6034 001D2F74  38 63 FF E4 */	addi r3, r3, -28
/* 801D6038 001D2F78  4B FF E8 14 */	b "doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"
.endfn "@28@doSetView__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "@28@doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D603C 001D2F7C  38 63 FF E4 */	addi r3, r3, -28
/* 801D6040 001D2F80  4B FF E7 8C */	b "doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doEntry__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D6044 001D2F84  38 63 FF E4 */	addi r3, r3, -28
/* 801D6048 001D2F88  4B FF E7 04 */	b "doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doAnimation__37MonoObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics", weak
/* 801D604C 001D2F8C  38 63 FF E4 */	addi r3, r3, -28
/* 801D6050 001D2F90  4B FF EB 00 */	b "doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"
.endfn "@28@doDirectDraw__33ObjectMgr<Q34Game9ItemHoney4Item>FR8Graphics"

.fn "@28@doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff", weak
/* 801D6054 001D2F94  38 63 FF E4 */	addi r3, r3, -28
/* 801D6058 001D2F98  4B FF ED 38 */	b "doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff"
.endfn "@28@doSimulation__33ObjectMgr<Q34Game9ItemHoney4Item>Ff"

.fn "@28@doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D605C 001D2F9C  38 63 FF E4 */	addi r3, r3, -28
/* 801D6060 001D2FA0  4B FF EF 24 */	b "doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doViewCalc__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi", weak
/* 801D6064 001D2FA4  38 63 FF E4 */	addi r3, r3, -28
/* 801D6068 001D2FA8  4B FF F1 00 */	b "doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi"
.endfn "@28@doSetView__33ObjectMgr<Q34Game9ItemHoney4Item>Fi"

.fn "@28@doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D606C 001D2FAC  38 63 FF E4 */	addi r3, r3, -28
/* 801D6070 001D2FB0  4B FF F2 EC */	b "doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doEntry__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@28@doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D6074 001D2FB4  38 63 FF E4 */	addi r3, r3, -28
/* 801D6078 001D2FB8  4B FF F4 C8 */	b "doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@28@doAnimation__33ObjectMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@48@getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D607C 001D2FBC  38 63 FF D0 */	addi r3, r3, -48
/* 801D6080 001D2FC0  4B FF F7 40 */	b "getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@48@getEnd__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@48@getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv", weak
/* 801D6084 001D2FC4  38 63 FF D0 */	addi r3, r3, -48
/* 801D6088 001D2FC8  4B FF E5 24 */	b "getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"
.endfn "@48@getStart__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>Fv"

.fn "@48@getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D608C 001D2FCC  38 63 FF D0 */	addi r3, r3, -48
/* 801D6090 001D2FD0  4B FF E4 F0 */	b "getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
.endfn "@48@getNext__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"

.fn "@48@get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv", weak
/* 801D6094 001D2FD4  38 63 FF D0 */	addi r3, r3, -48
/* 801D6098 001D2FD8  4B FF F7 54 */	b "get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"
.endfn "@48@get__Q24Game40FixedSizeItemMgr<Q34Game9ItemHoney4Item>FPv"

.fn "@48@__dt__Q34Game9ItemHoney3MgrFv", weak
/* 801D609C 001D2FDC  38 63 FF D0 */	addi r3, r3, -48
/* 801D60A0 001D2FE0  4B FF E1 D0 */	b __dt__Q34Game9ItemHoney3MgrFv
.endfn "@48@__dt__Q34Game9ItemHoney3MgrFv"
