.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80480390
lbl_80480390:
	.4byte 0x6974656D
	.4byte 0x4D67722E
	.4byte 0x63707000
.global lbl_8048039C
lbl_8048039C:
	.4byte 0x28257329
	.4byte 0x206E6F20
	.4byte 0x6D536F75
	.4byte 0x6E644372
	.4byte 0x65617475
	.4byte 0x72650A00
.global lbl_804803B4
lbl_804803B4:
	.4byte 0x63656C6C
	.4byte 0x4C617965
	.4byte 0x72696E64
	.4byte 0x6578206F
	.4byte 0x76657266
	.4byte 0x6C6F770A
	.4byte 0x00000000
.global lbl_804803D0
lbl_804803D0:
	.asciz "P2Assert"
	.skip 3
.global lbl_804803DC
lbl_804803DC:
	.4byte 0x42617365
	.4byte 0x4974656D
	.4byte 0x00000000
	.4byte 0x66617461
	.4byte 0x6C206572
	.4byte 0x726F720A
	.4byte 0x00000000
.global lbl_804803F8
lbl_804803F8:
	.4byte 0x416E696D
	.4byte 0x4D677220
	.4byte 0x63726561
	.4byte 0x74696F6E
	.4byte 0x20666169
	.4byte 0x6C656420
	.4byte 0x21202573
	.4byte 0x0A000000
.global lbl_80480418
lbl_80480418:
	.4byte 0x706C6174
	.4byte 0x41747461
	.4byte 0x63686572
	.4byte 0x20257320
	.4byte 0x6E6F7420
	.4byte 0x666F756E
	.4byte 0x6420210A
	.4byte 0x00000000
.global lbl_80480438
lbl_80480438:
	.4byte 0x83418343
	.4byte 0x83658380
	.4byte 0x837D836C
	.4byte 0x815B8357
	.4byte 0x83830000
	.4byte 0x43726561
	.4byte 0x74757265
	.4byte 0x4B696C6C
	.4byte 0x41726700
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q24Game7ItemMgr
__vt__Q24Game7ItemMgr:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game7ItemMgrFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__29Container<16GenericObjectMgr>FPv"
	.4byte "getNext__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getStart__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "getEnd__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte "get__33NodeObjectMgr<16GenericObjectMgr>FPv"
	.4byte "getAt__29Container<16GenericObjectMgr>Fi"
	.4byte "getTo__29Container<16GenericObjectMgr>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__Q24Game7ItemMgrFv"
	.4byte "@28@doEntry__Q24Game7ItemMgrFv"
	.4byte "@28@doSetView__Q24Game7ItemMgrFi"
	.4byte "@28@doViewCalc__Q24Game7ItemMgrFv"
	.4byte "@28@doSimulation__Q24Game7ItemMgrFf"
	.4byte "@28@doDirectDraw__Q24Game7ItemMgrFR8Graphics"
	.4byte "@28@doSimpleDraw__Q24Game7ItemMgrFP8Viewport"
	.4byte "@28@loadResources__Q24Game7ItemMgrFv"
	.4byte "@28@resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte doAnimation__Q24Game7ItemMgrFv
	.4byte doEntry__Q24Game7ItemMgrFv
	.4byte doSetView__Q24Game7ItemMgrFi
	.4byte doViewCalc__Q24Game7ItemMgrFv
	.4byte doSimulation__Q24Game7ItemMgrFf
	.4byte doDirectDraw__Q24Game7ItemMgrFR8Graphics
	.4byte "resetMgr__33NodeObjectMgr<16GenericObjectMgr>Fv"
	.4byte loadResources__Q24Game7ItemMgrFv
	.4byte doSimpleDraw__Q24Game7ItemMgrFP8Viewport
.global __vt__Q24Game12TNodeItemMgr
__vt__Q24Game12TNodeItemMgr:
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
	.4byte "@48@__dt__Q24Game12TNodeItemMgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "@48@getNext__Q24Game12TNodeItemMgrFPv"
	.4byte "@48@getStart__Q24Game12TNodeItemMgrFv"
	.4byte "@48@getEnd__Q24Game12TNodeItemMgrFv"
	.4byte "@48@get__Q24Game12TNodeItemMgrFPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte 0
	.4byte kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
	.4byte get__Q24Game12TNodeItemMgrFPv
	.4byte getNext__Q24Game12TNodeItemMgrFPv
	.4byte getStart__Q24Game12TNodeItemMgrFv
	.4byte getEnd__Q24Game12TNodeItemMgrFv
	.4byte __dt__Q24Game12TNodeItemMgrFv
.global "__vt__29TObjectNode<Q24Game8BaseItem>"
"__vt__29TObjectNode<Q24Game8BaseItem>":
	.4byte 0
	.4byte 0
	.4byte "__dt__29TObjectNode<Q24Game8BaseItem>Fv"
	.4byte getChildCount__5CNodeFv
.global "__vt__31NodeObjectMgr<Q24Game8BaseItem>"
"__vt__31NodeObjectMgr<Q24Game8BaseItem>":
	.4byte 0
	.4byte 0
	.4byte "__dt__31NodeObjectMgr<Q24Game8BaseItem>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte "getNext__31NodeObjectMgr<Q24Game8BaseItem>FPv"
	.4byte "getStart__31NodeObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "getEnd__31NodeObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "get__31NodeObjectMgr<Q24Game8BaseItem>FPv"
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte "@28@resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
	.4byte "resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"
.global "__vt__27ObjectMgr<Q24Game8BaseItem>"
"__vt__27ObjectMgr<Q24Game8BaseItem>":
	.4byte 0
	.4byte 0
	.4byte "__dt__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
	.4byte 0
	.4byte 0
	.4byte "@28@doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
	.4byte "@28@doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "@28@doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
	.4byte "@28@doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte "doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
	.4byte "doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
	.4byte "doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
	.4byte "doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
.global "__vt__27Container<Q24Game8BaseItem>"
"__vt__27Container<Q24Game8BaseItem>":
	.4byte 0
	.4byte 0
	.4byte "__dt__27Container<Q24Game8BaseItem>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8BaseItem>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8BaseItem>Fi"
	.4byte "getTo__27Container<Q24Game8BaseItem>Fv"
.global __vt__Q24Game11BaseItemMgr
__vt__Q24Game11BaseItemMgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game11BaseItemMgrFv
	.4byte doEntry__Q24Game11BaseItemMgrFv
	.4byte doSetView__Q24Game11BaseItemMgrFi
	.4byte doViewCalc__Q24Game11BaseItemMgrFv
	.4byte doSimulation__Q24Game11BaseItemMgrFf
	.4byte doDirectDraw__Q24Game11BaseItemMgrFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__Q24Game11BaseItemMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte killAll__Q24Game11BaseItemMgrFv
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
.global __vt__Q24Game17InteractFarmHaero
__vt__Q24Game17InteractFarmHaero:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game17InteractFarmHaeroFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game17InteractFarmHaeroFPQ24Game8BaseItem
.global __vt__Q24Game18InteractFarmKarero
__vt__Q24Game18InteractFarmKarero:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game18InteractFarmKareroFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game18InteractFarmKareroFPQ24Game8BaseItem
.global __vt__Q24Game14InteractAbsorb
__vt__Q24Game14InteractAbsorb:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game14InteractAbsorbFPQ24Game8BaseItem
.global __vt__Q24Game19InteractFlockAttack
__vt__Q24Game19InteractFlockAttack:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game19InteractFlockAttackFPQ24Game8BaseItem
.global __vt__Q24Game14InteractGotKey
__vt__Q24Game14InteractGotKey:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game14InteractGotKeyFPQ24Game8BaseItem
.global __vt__Q24Game19InteractBreakBridge
__vt__Q24Game19InteractBreakBridge:
	.4byte 0
	.4byte 0
	.4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
	.4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
	.4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
	.4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
	.4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
	.4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
	.4byte actItem__Q24Game19InteractBreakBridgeFPQ24Game8BaseItem
.global __vt__Q24Game8CFSMItem
__vt__Q24Game8CFSMItem:
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
	.4byte bounceCallback__Q24Game8CFSMItemFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game8CFSMItemFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8CFSMItemFRQ24Game9PlatEvent
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
	.4byte "@376@onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent"
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q24Game8CFSMItemFv
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
	.4byte 0
	.4byte onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent
.global __vt__Q24Game8BaseItem
__vt__Q24Game8BaseItem:
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
	.4byte bounceCallback__Q24Game8BaseItemFPQ23Sys8Triangle
	.4byte collisionCallback__Q24Game8BaseItemFRQ24Game9CollEvent
	.4byte platCallback__Q24Game8BaseItemFRQ24Game9PlatEvent
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
	.4byte 0
	.4byte initDependency__Q24Game8BaseItemFv
	.4byte startSound__Q24Game8BaseItemFUl
	.4byte makeTrMatrix__Q24Game8BaseItemFv
	.4byte doAI__Q24Game8BaseItemFv
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

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global itemMgr__4Game
itemMgr__4Game:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80519618
lbl_80519618:
	.4byte 0x00000000
.global lbl_8051961C
lbl_8051961C:
	.float 1.0
.global lbl_80519620
lbl_80519620:
	.4byte 0x3F19999A
.global lbl_80519624
lbl_80519624:
	.4byte 0x41F00000
.global lbl_80519628
lbl_80519628:
	.4byte 0x25732F25
	.4byte 0x73000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q24Game8BaseItemFi
__ct__Q24Game8BaseItemFi:
/* 801CBFE8 001C8F28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CBFEC 001C8F2C  7C 08 02 A6 */	mflr r0
/* 801CBFF0 001C8F30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CBFF4 001C8F34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CBFF8 001C8F38  7C 9F 23 78 */	mr r31, r4
/* 801CBFFC 001C8F3C  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC000 001C8F40  7C 7E 1B 78 */	mr r30, r3
/* 801CC004 001C8F44  4B F6 EE 81 */	bl __ct__Q24Game8CreatureFv
/* 801CC008 001C8F48  3C 80 80 4B */	lis r4, __vt__Q28SysShape14MotionListener@ha
/* 801CC00C 001C8F4C  3C 60 80 4B */	lis r3, __vt__Q24Game8BaseItem@ha
/* 801CC010 001C8F50  38 04 A6 6C */	addi r0, r4, __vt__Q28SysShape14MotionListener@l
/* 801CC014 001C8F54  C0 02 B2 B8 */	lfs f0, lbl_80519618@sda21(r2)
/* 801CC018 001C8F58  90 1E 01 78 */	stw r0, 0x178(r30)
/* 801CC01C 001C8F5C  38 C3 76 E8 */	addi r6, r3, __vt__Q24Game8BaseItem@l
/* 801CC020 001C8F60  3C 80 80 4B */	lis r4, __vt__Q28SysShape12BaseAnimator@ha
/* 801CC024 001C8F64  3C 60 80 4F */	lis r3, __vt__Q28SysShape8Animator@ha
/* 801CC028 001C8F68  90 DE 00 00 */	stw r6, 0(r30)
/* 801CC02C 001C8F6C  38 C6 01 B0 */	addi r6, r6, 0x1b0
/* 801CC030 001C8F70  38 A4 B9 88 */	addi r5, r4, __vt__Q28SysShape12BaseAnimator@l
/* 801CC034 001C8F74  38 83 BE 00 */	addi r4, r3, __vt__Q28SysShape8Animator@l
/* 801CC038 001C8F78  90 DE 01 78 */	stw r6, 0x178(r30)
/* 801CC03C 001C8F7C  38 00 00 00 */	li r0, 0
/* 801CC040 001C8F80  38 60 00 08 */	li r3, 8
/* 801CC044 001C8F84  90 BE 01 A8 */	stw r5, 0x1a8(r30)
/* 801CC048 001C8F88  90 9E 01 A8 */	stw r4, 0x1a8(r30)
/* 801CC04C 001C8F8C  98 1E 01 C0 */	stb r0, 0x1c0(r30)
/* 801CC050 001C8F90  90 1E 01 B4 */	stw r0, 0x1b4(r30)
/* 801CC054 001C8F94  90 1E 01 AC */	stw r0, 0x1ac(r30)
/* 801CC058 001C8F98  98 1E 01 C0 */	stb r0, 0x1c0(r30)
/* 801CC05C 001C8F9C  90 1E 01 B8 */	stw r0, 0x1b8(r30)
/* 801CC060 001C8FA0  B3 FE 01 28 */	sth r31, 0x128(r30)
/* 801CC064 001C8FA4  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801CC068 001C8FA8  90 1E 01 80 */	stw r0, 0x180(r30)
/* 801CC06C 001C8FAC  90 1E 01 88 */	stw r0, 0x188(r30)
/* 801CC070 001C8FB0  90 1E 01 84 */	stw r0, 0x184(r30)
/* 801CC074 001C8FB4  D0 1E 01 90 */	stfs f0, 0x190(r30)
/* 801CC078 001C8FB8  D0 1E 01 94 */	stfs f0, 0x194(r30)
/* 801CC07C 001C8FBC  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 801CC080 001C8FC0  D0 1E 01 9C */	stfs f0, 0x19c(r30)
/* 801CC084 001C8FC4  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 801CC088 001C8FC8  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 801CC08C 001C8FCC  4B E5 7E 19 */	bl __nw__FUl
/* 801CC090 001C8FD0  7C 60 1B 79 */	or. r0, r3, r3
/* 801CC094 001C8FD4  41 82 00 0C */	beq .L_801CC0A0
/* 801CC098 001C8FD8  4B F6 7F C5 */	bl __ct__8CollTreeFv
/* 801CC09C 001C8FDC  7C 60 1B 78 */	mr r0, r3
.L_801CC0A0:
/* 801CC0A0 001C8FE0  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 801CC0A4 001C8FE4  90 1E 01 14 */	stw r0, 0x114(r30)
/* 801CC0A8 001C8FE8  38 83 41 E4 */	addi r4, r3, "zero__10Vector3<f>"@l
/* 801CC0AC 001C8FEC  C0 02 B2 BC */	lfs f0, lbl_8051961C@sda21(r2)
/* 801CC0B0 001C8FF0  C0 24 00 00 */	lfs f1, 0(r4)
/* 801CC0B4 001C8FF4  7F C3 F3 78 */	mr r3, r30
/* 801CC0B8 001C8FF8  D0 3E 01 C4 */	stfs f1, 0x1c4(r30)
/* 801CC0BC 001C8FFC  C0 24 00 04 */	lfs f1, 4(r4)
/* 801CC0C0 001C9000  D0 3E 01 C8 */	stfs f1, 0x1c8(r30)
/* 801CC0C4 001C9004  C0 24 00 08 */	lfs f1, 8(r4)
/* 801CC0C8 001C9008  D0 3E 01 CC */	stfs f1, 0x1cc(r30)
/* 801CC0CC 001C900C  D0 1E 01 D0 */	stfs f0, 0x1d0(r30)
/* 801CC0D0 001C9010  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC0D4 001C9014  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC0D8 001C9018  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC0DC 001C901C  7C 08 03 A6 */	mtlr r0
/* 801CC0E0 001C9020  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC0E4 001C9024  4E 80 00 20 */	blr 

.global constructor__Q24Game8BaseItemFv
constructor__Q24Game8BaseItemFv:
/* 801CC0E8 001C9028  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC0EC 001C902C  7C 08 02 A6 */	mflr r0
/* 801CC0F0 001C9030  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC0F4 001C9034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC0F8 001C9038  7C 7F 1B 78 */	mr r31, r3
/* 801CC0FC 001C903C  38 60 00 70 */	li r3, 0x70
/* 801CC100 001C9040  4B E5 7D A5 */	bl __nw__FUl
/* 801CC104 001C9044  7C 60 1B 79 */	or. r0, r3, r3
/* 801CC108 001C9048  41 82 00 14 */	beq .L_801CC11C
/* 801CC10C 001C904C  7F E4 FB 78 */	mr r4, r31
/* 801CC110 001C9050  38 A0 00 02 */	li r5, 2
/* 801CC114 001C9054  48 29 16 91 */	bl __ct__Q23PSM11CreatureObjFPQ24Game8CreatureUc
/* 801CC118 001C9058  7C 60 1B 78 */	mr r0, r3
.L_801CC11C:
/* 801CC11C 001C905C  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801CC120 001C9060  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC124 001C9064  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC128 001C9068  7C 08 03 A6 */	mtlr r0
/* 801CC12C 001C906C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC130 001C9070  4E 80 00 20 */	blr 

.global getJAIObject__Q24Game8BaseItemFv
getJAIObject__Q24Game8BaseItemFv:
/* 801CC134 001C9074  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 801CC138 001C9078  28 03 00 00 */	cmplwi r3, 0
/* 801CC13C 001C907C  4D 82 00 20 */	beqlr 
/* 801CC140 001C9080  38 63 00 30 */	addi r3, r3, 0x30
/* 801CC144 001C9084  4E 80 00 20 */	blr 

.global getPSCreature__Q24Game8BaseItemFv
getPSCreature__Q24Game8BaseItemFv:
/* 801CC148 001C9088  80 63 01 7C */	lwz r3, 0x17c(r3)
/* 801CC14C 001C908C  4E 80 00 20 */	blr 

.global startSound__Q24Game8BaseItemFUl
startSound__Q24Game8BaseItemFUl:
/* 801CC150 001C9090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC154 001C9094  7C 08 02 A6 */	mflr r0
/* 801CC158 001C9098  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC15C 001C909C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC160 001C90A0  7C 9F 23 78 */	mr r31, r4
/* 801CC164 001C90A4  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC168 001C90A8  7C 7E 1B 78 */	mr r30, r3
/* 801CC16C 001C90AC  80 03 01 7C */	lwz r0, 0x17c(r3)
/* 801CC170 001C90B0  28 00 00 00 */	cmplwi r0, 0
/* 801CC174 001C90B4  40 82 00 34 */	bne .L_801CC1A8
/* 801CC178 001C90B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC17C 001C90BC  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801CC180 001C90C0  7D 89 03 A6 */	mtctr r12
/* 801CC184 001C90C4  4E 80 04 21 */	bctrl 
/* 801CC188 001C90C8  3C A0 80 48 */	lis r5, lbl_8048039C@ha
/* 801CC18C 001C90CC  3C E0 80 48 */	lis r7, lbl_80480390@ha
/* 801CC190 001C90D0  7C 66 1B 78 */	mr r6, r3
/* 801CC194 001C90D4  38 80 01 06 */	li r4, 0x106
/* 801CC198 001C90D8  38 67 03 90 */	addi r3, r7, lbl_80480390@l
/* 801CC19C 001C90DC  38 A5 03 9C */	addi r5, r5, lbl_8048039C@l
/* 801CC1A0 001C90E0  4C C6 31 82 */	crclr 6
/* 801CC1A4 001C90E4  4B E5 E4 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CC1A8:
/* 801CC1A8 001C90E8  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 801CC1AC 001C90EC  7F E4 FB 78 */	mr r4, r31
/* 801CC1B0 001C90F0  38 A0 00 00 */	li r5, 0
/* 801CC1B4 001C90F4  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801CC1B8 001C90F8  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801CC1BC 001C90FC  7D 89 03 A6 */	mtctr r12
/* 801CC1C0 001C9100  4E 80 04 21 */	bctrl 
/* 801CC1C4 001C9104  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC1C8 001C9108  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC1CC 001C910C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC1D0 001C9110  7C 08 03 A6 */	mtlr r0
/* 801CC1D4 001C9114  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC1D8 001C9118  4E 80 00 20 */	blr 

.global doAnimation__Q24Game8BaseItemFv
doAnimation__Q24Game8BaseItemFv:
/* 801CC1DC 001C911C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC1E0 001C9120  7C 08 02 A6 */	mflr r0
/* 801CC1E4 001C9124  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC1E8 001C9128  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC1EC 001C912C  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC1F0 001C9130  7C 7E 1B 78 */	mr r30, r3
/* 801CC1F4 001C9134  80 03 01 B8 */	lwz r0, 0x1b8(r3)
/* 801CC1F8 001C9138  28 00 00 00 */	cmplwi r0, 0
/* 801CC1FC 001C913C  41 82 00 68 */	beq .L_801CC264
/* 801CC200 001C9140  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801CC204 001C9144  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 801CC208 001C9148  81 9E 01 A8 */	lwz r12, 0x1a8(r30)
/* 801CC20C 001C914C  C0 3E 01 D4 */	lfs f1, 0x1d4(r30)
/* 801CC210 001C9150  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 801CC214 001C9154  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801CC218 001C9158  EC 21 00 32 */	fmuls f1, f1, f0
/* 801CC21C 001C915C  7D 89 03 A6 */	mtctr r12
/* 801CC220 001C9160  4E 80 04 21 */	bctrl 
/* 801CC224 001C9164  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801CC228 001C9168  83 FE 01 74 */	lwz r31, 0x174(r30)
/* 801CC22C 001C916C  81 9E 01 A8 */	lwz r12, 0x1a8(r30)
/* 801CC230 001C9170  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CC234 001C9174  7D 89 03 A6 */	mtctr r12
/* 801CC238 001C9178  4E 80 04 21 */	bctrl 
/* 801CC23C 001C917C  80 9F 00 08 */	lwz r4, 8(r31)
/* 801CC240 001C9180  80 84 00 04 */	lwz r4, 4(r4)
/* 801CC244 001C9184  80 84 00 28 */	lwz r4, 0x28(r4)
/* 801CC248 001C9188  80 84 00 00 */	lwz r4, 0(r4)
/* 801CC24C 001C918C  90 64 00 54 */	stw r3, 0x54(r4)
/* 801CC250 001C9190  7F C3 F3 78 */	mr r3, r30
/* 801CC254 001C9194  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CC258 001C9198  81 8C 02 0C */	lwz r12, 0x20c(r12)
/* 801CC25C 001C919C  7D 89 03 A6 */	mtctr r12
/* 801CC260 001C91A0  4E 80 04 21 */	bctrl 
.L_801CC264:
/* 801CC264 001C91A4  80 1E 00 B8 */	lwz r0, 0xb8(r30)
/* 801CC268 001C91A8  28 00 00 00 */	cmplwi r0, 0
/* 801CC26C 001C91AC  40 82 00 18 */	bne .L_801CC284
/* 801CC270 001C91B0  7F C3 F3 78 */	mr r3, r30
/* 801CC274 001C91B4  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CC278 001C91B8  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 801CC27C 001C91BC  7D 89 03 A6 */	mtctr r12
/* 801CC280 001C91C0  4E 80 04 21 */	bctrl 
.L_801CC284:
/* 801CC284 001C91C4  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801CC288 001C91C8  28 03 00 00 */	cmplwi r3, 0
/* 801CC28C 001C91CC  41 82 00 2C */	beq .L_801CC2B8
/* 801CC290 001C91D0  80 83 00 08 */	lwz r4, 8(r3)
/* 801CC294 001C91D4  38 7E 01 38 */	addi r3, r30, 0x138
/* 801CC298 001C91D8  38 84 00 24 */	addi r4, r4, 0x24
/* 801CC29C 001C91DC  4B F1 E0 31 */	bl PSMTXCopy
/* 801CC2A0 001C91E0  80 7E 01 74 */	lwz r3, 0x174(r30)
/* 801CC2A4 001C91E4  80 63 00 08 */	lwz r3, 8(r3)
/* 801CC2A8 001C91E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC2AC 001C91EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CC2B0 001C91F0  7D 89 03 A6 */	mtctr r12
/* 801CC2B4 001C91F4  4E 80 04 21 */	bctrl 
.L_801CC2B8:
/* 801CC2B8 001C91F8  7F C3 F3 78 */	mr r3, r30
/* 801CC2BC 001C91FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CC2C0 001C9200  81 8C 02 14 */	lwz r12, 0x214(r12)
/* 801CC2C4 001C9204  7D 89 03 A6 */	mtctr r12
/* 801CC2C8 001C9208  4E 80 04 21 */	bctrl 
/* 801CC2CC 001C920C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC2D0 001C9210  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC2D4 001C9214  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC2D8 001C9218  7C 08 03 A6 */	mtlr r0
/* 801CC2DC 001C921C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC2E0 001C9220  4E 80 00 20 */	blr 

.global updateTrMatrix__Q24Game8BaseItemFv
updateTrMatrix__Q24Game8BaseItemFv:
/* 801CC2E4 001C9224  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC2E8 001C9228  7C 08 02 A6 */	mflr r0
/* 801CC2EC 001C922C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC2F0 001C9230  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC2F4 001C9234  81 8C 01 C4 */	lwz r12, 0x1c4(r12)
/* 801CC2F8 001C9238  7D 89 03 A6 */	mtctr r12
/* 801CC2FC 001C923C  4E 80 04 21 */	bctrl 
/* 801CC300 001C9240  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC304 001C9244  7C 08 03 A6 */	mtlr r0
/* 801CC308 001C9248  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC30C 001C924C  4E 80 00 20 */	blr 

.global entryShape__Q24Game8BaseItemFv
entryShape__Q24Game8BaseItemFv:
/* 801CC310 001C9250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC314 001C9254  7C 08 02 A6 */	mflr r0
/* 801CC318 001C9258  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC31C 001C925C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC320 001C9260  7C 7F 1B 78 */	mr r31, r3
/* 801CC324 001C9264  80 63 01 74 */	lwz r3, 0x174(r3)
/* 801CC328 001C9268  28 03 00 00 */	cmplwi r3, 0
/* 801CC32C 001C926C  41 82 00 94 */	beq .L_801CC3C0
/* 801CC330 001C9270  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 801CC334 001C9274  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 801CC338 001C9278  41 82 00 18 */	beq .L_801CC350
/* 801CC33C 001C927C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC340 001C9280  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CC344 001C9284  7D 89 03 A6 */	mtctr r12
/* 801CC348 001C9288  4E 80 04 21 */	bctrl 
/* 801CC34C 001C928C  48 00 00 48 */	b .L_801CC394
.L_801CC350:
/* 801CC350 001C9290  88 0D 84 68 */	lbz r0, sEntryOpt__Q24Game12BaseHIOParms@sda21(r13)
/* 801CC354 001C9294  28 00 00 00 */	cmplwi r0, 0
/* 801CC358 001C9298  41 82 00 2C */	beq .L_801CC384
/* 801CC35C 001C929C  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801CC360 001C92A0  38 80 00 00 */	li r4, 0
/* 801CC364 001C92A4  80 05 00 44 */	lwz r0, 0x44(r5)
/* 801CC368 001C92A8  2C 00 00 01 */	cmpwi r0, 1
/* 801CC36C 001C92AC  41 82 00 0C */	beq .L_801CC378
/* 801CC370 001C92B0  2C 00 00 03 */	cmpwi r0, 3
/* 801CC374 001C92B4  40 82 00 08 */	bne .L_801CC37C
.L_801CC378:
/* 801CC378 001C92B8  38 80 00 01 */	li r4, 1
.L_801CC37C:
/* 801CC37C 001C92BC  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801CC380 001C92C0  41 82 00 40 */	beq .L_801CC3C0
.L_801CC384:
/* 801CC384 001C92C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC388 001C92C8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CC38C 001C92CC  7D 89 03 A6 */	mtctr r12
/* 801CC390 001C92D0  4E 80 04 21 */	bctrl 
.L_801CC394:
/* 801CC394 001C92D4  7F E3 FB 78 */	mr r3, r31
/* 801CC398 001C92D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC39C 001C92DC  81 8C 01 D0 */	lwz r12, 0x1d0(r12)
/* 801CC3A0 001C92E0  7D 89 03 A6 */	mtctr r12
/* 801CC3A4 001C92E4  4E 80 04 21 */	bctrl 
/* 801CC3A8 001C92E8  80 7F 01 74 */	lwz r3, 0x174(r31)
/* 801CC3AC 001C92EC  80 63 00 08 */	lwz r3, 8(r3)
/* 801CC3B0 001C92F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC3B4 001C92F4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801CC3B8 001C92F8  7D 89 03 A6 */	mtctr r12
/* 801CC3BC 001C92FC  4E 80 04 21 */	bctrl 
.L_801CC3C0:
/* 801CC3C0 001C9300  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC3C4 001C9304  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC3C8 001C9308  7C 08 03 A6 */	mtlr r0
/* 801CC3CC 001C930C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC3D0 001C9310  4E 80 00 20 */	blr 

.global doEntry__Q24Game8BaseItemFv
doEntry__Q24Game8BaseItemFv:
/* 801CC3D4 001C9314  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC3D8 001C9318  7C 08 02 A6 */	mflr r0
/* 801CC3DC 001C931C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC3E0 001C9320  80 03 00 B8 */	lwz r0, 0xb8(r3)
/* 801CC3E4 001C9324  28 00 00 00 */	cmplwi r0, 0
/* 801CC3E8 001C9328  40 82 00 14 */	bne .L_801CC3FC
/* 801CC3EC 001C932C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC3F0 001C9330  81 8C 02 18 */	lwz r12, 0x218(r12)
/* 801CC3F4 001C9334  7D 89 03 A6 */	mtctr r12
/* 801CC3F8 001C9338  4E 80 04 21 */	bctrl 
.L_801CC3FC:
/* 801CC3FC 001C933C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC400 001C9340  7C 08 03 A6 */	mtlr r0
/* 801CC404 001C9344  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC408 001C9348  4E 80 00 20 */	blr 

.global stimulate__Q24Game8BaseItemFRQ24Game11Interaction
stimulate__Q24Game8BaseItemFRQ24Game11Interaction:
/* 801CC40C 001C934C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC410 001C9350  7C 08 02 A6 */	mflr r0
/* 801CC414 001C9354  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC418 001C9358  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC41C 001C935C  7C 9F 23 78 */	mr r31, r4
/* 801CC420 001C9360  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC424 001C9364  7C 7E 1B 78 */	mr r30, r3
/* 801CC428 001C9368  7F E3 FB 78 */	mr r3, r31
/* 801CC42C 001C936C  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC430 001C9370  7F C4 F3 78 */	mr r4, r30
/* 801CC434 001C9374  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CC438 001C9378  7D 89 03 A6 */	mtctr r12
/* 801CC43C 001C937C  4E 80 04 21 */	bctrl 
/* 801CC440 001C9380  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CC444 001C9384  41 82 00 20 */	beq .L_801CC464
/* 801CC448 001C9388  7F E3 FB 78 */	mr r3, r31
/* 801CC44C 001C938C  7F C4 F3 78 */	mr r4, r30
/* 801CC450 001C9390  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC454 001C9394  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CC458 001C9398  7D 89 03 A6 */	mtctr r12
/* 801CC45C 001C939C  4E 80 04 21 */	bctrl 
/* 801CC460 001C93A0  48 00 00 08 */	b .L_801CC468
.L_801CC464:
/* 801CC464 001C93A4  38 60 00 00 */	li r3, 0
.L_801CC468:
/* 801CC468 001C93A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC46C 001C93AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC470 001C93B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC474 001C93B4  7C 08 03 A6 */	mtlr r0
/* 801CC478 001C93B8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC47C 001C93BC  4E 80 00 20 */	blr 

.global doSimulation__Q24Game8BaseItemFf
doSimulation__Q24Game8BaseItemFf:
/* 801CC480 001C93C0  4E 80 00 20 */	blr 

.global makeTrMatrix__Q24Game8BaseItemFv
makeTrMatrix__Q24Game8BaseItemFv:
/* 801CC484 001C93C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC488 001C93C8  7C 08 02 A6 */	mflr r0
/* 801CC48C 001C93CC  7C 64 1B 78 */	mr r4, r3
/* 801CC490 001C93D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC494 001C93D4  38 64 01 38 */	addi r3, r4, 0x138
/* 801CC498 001C93D8  38 84 01 9C */	addi r4, r4, 0x19c
/* 801CC49C 001C93DC  48 25 C3 A5 */	bl "makeT__7MatrixfFR10Vector3<f>"
/* 801CC4A0 001C93E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC4A4 001C93E4  7C 08 03 A6 */	mtlr r0
/* 801CC4A8 001C93E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC4AC 001C93EC  4E 80 00 20 */	blr 

.global update__Q24Game8BaseItemFv
update__Q24Game8BaseItemFv:
/* 801CC4B0 001C93F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC4B4 001C93F4  7C 08 02 A6 */	mflr r0
/* 801CC4B8 001C93F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC4BC 001C93FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC4C0 001C9400  7C 7F 1B 78 */	mr r31, r3
/* 801CC4C4 001C9404  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC4C8 001C9408  81 8C 01 C8 */	lwz r12, 0x1c8(r12)
/* 801CC4CC 001C940C  7D 89 03 A6 */	mtctr r12
/* 801CC4D0 001C9410  4E 80 04 21 */	bctrl 
/* 801CC4D4 001C9414  7F E3 FB 78 */	mr r3, r31
/* 801CC4D8 001C9418  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC4DC 001C941C  81 8C 02 10 */	lwz r12, 0x210(r12)
/* 801CC4E0 001C9420  7D 89 03 A6 */	mtctr r12
/* 801CC4E4 001C9424  4E 80 04 21 */	bctrl 
/* 801CC4E8 001C9428  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 801CC4EC 001C942C  81 83 00 28 */	lwz r12, 0x28(r3)
/* 801CC4F0 001C9430  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CC4F4 001C9434  7D 89 03 A6 */	mtctr r12
/* 801CC4F8 001C9438  4E 80 04 21 */	bctrl 
/* 801CC4FC 001C943C  7F E3 FB 78 */	mr r3, r31
/* 801CC500 001C9440  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC504 001C9444  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 801CC508 001C9448  7D 89 03 A6 */	mtctr r12
/* 801CC50C 001C944C  4E 80 04 21 */	bctrl 
/* 801CC510 001C9450  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CC514 001C9454  41 82 00 64 */	beq .L_801CC578
/* 801CC518 001C9458  7F E3 FB 78 */	mr r3, r31
/* 801CC51C 001C945C  4B F6 F8 4D */	bl updateCell__Q24Game8CreatureFv
/* 801CC520 001C9460  80 1F 00 DC */	lwz r0, 0xdc(r31)
/* 801CC524 001C9464  2C 00 00 00 */	cmpwi r0, 0
/* 801CC528 001C9468  41 80 00 0C */	blt .L_801CC534
/* 801CC52C 001C946C  2C 00 00 0A */	cmpwi r0, 0xa
/* 801CC530 001C9470  40 81 00 34 */	ble .L_801CC564
.L_801CC534:
/* 801CC534 001C9474  7F E3 FB 78 */	mr r3, r31
/* 801CC538 001C9478  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC53C 001C947C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CC540 001C9480  7D 89 03 A6 */	mtctr r12
/* 801CC544 001C9484  4E 80 04 21 */	bctrl 
/* 801CC548 001C9488  3C 60 80 48 */	lis r3, lbl_80480390@ha
/* 801CC54C 001C948C  3C A0 80 48 */	lis r5, lbl_804803B4@ha
/* 801CC550 001C9490  38 63 03 90 */	addi r3, r3, lbl_80480390@l
/* 801CC554 001C9494  38 80 01 6D */	li r4, 0x16d
/* 801CC558 001C9498  38 A5 03 B4 */	addi r5, r5, lbl_804803B4@l
/* 801CC55C 001C949C  4C C6 31 82 */	crclr 6
/* 801CC560 001C94A0  4B E5 E0 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CC564:
/* 801CC564 001C94A4  7F E3 FB 78 */	mr r3, r31
/* 801CC568 001C94A8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC56C 001C94AC  81 8C 01 D4 */	lwz r12, 0x1d4(r12)
/* 801CC570 001C94B0  7D 89 03 A6 */	mtctr r12
/* 801CC574 001C94B4  4E 80 04 21 */	bctrl 
.L_801CC578:
/* 801CC578 001C94B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC57C 001C94BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC580 001C94C0  7C 08 03 A6 */	mtlr r0
/* 801CC584 001C94C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC588 001C94C8  4E 80 00 20 */	blr 

.global doAI__Q24Game8BaseItemFv
doAI__Q24Game8BaseItemFv:
/* 801CC58C 001C94CC  4E 80 00 20 */	blr 

.global do_updateLOD__Q24Game8BaseItemFv
do_updateLOD__Q24Game8BaseItemFv:
/* 801CC590 001C94D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CC594 001C94D4  7C 08 02 A6 */	mflr r0
/* 801CC598 001C94D8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CC59C 001C94DC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CC5A0 001C94E0  7C 7F 1B 78 */	mr r31, r3
/* 801CC5A4 001C94E4  38 61 00 08 */	addi r3, r1, 8
/* 801CC5A8 001C94E8  48 00 B2 61 */	bl __ct__Q24Game9AILODParmFv
/* 801CC5AC 001C94EC  7F E3 FB 78 */	mr r3, r31
/* 801CC5B0 001C94F0  38 81 00 08 */	addi r4, r1, 8
/* 801CC5B4 001C94F4  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC5B8 001C94F8  81 8C 01 D8 */	lwz r12, 0x1d8(r12)
/* 801CC5BC 001C94FC  7D 89 03 A6 */	mtctr r12
/* 801CC5C0 001C9500  4E 80 04 21 */	bctrl 
/* 801CC5C4 001C9504  7F E3 FB 78 */	mr r3, r31
/* 801CC5C8 001C9508  38 81 00 08 */	addi r4, r1, 8
/* 801CC5CC 001C950C  48 00 B2 71 */	bl updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
/* 801CC5D0 001C9510  7F E3 FB 78 */	mr r3, r31
/* 801CC5D4 001C9514  81 9F 00 00 */	lwz r12, 0(r31)
/* 801CC5D8 001C9518  81 8C 00 B8 */	lwz r12, 0xb8(r12)
/* 801CC5DC 001C951C  7D 89 03 A6 */	mtctr r12
/* 801CC5E0 001C9520  4E 80 04 21 */	bctrl 
/* 801CC5E4 001C9524  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CC5E8 001C9528  41 82 00 10 */	beq .L_801CC5F8
/* 801CC5EC 001C952C  88 1F 00 D8 */	lbz r0, 0xd8(r31)
/* 801CC5F0 001C9530  60 00 00 34 */	ori r0, r0, 0x34
/* 801CC5F4 001C9534  98 1F 00 D8 */	stb r0, 0xd8(r31)
.L_801CC5F8:
/* 801CC5F8 001C9538  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CC5FC 001C953C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CC600 001C9540  7C 08 03 A6 */	mtlr r0
/* 801CC604 001C9544  38 21 00 20 */	addi r1, r1, 0x20
/* 801CC608 001C9548  4E 80 00 20 */	blr 

.global updateCollTree__Q24Game8BaseItemFv
updateCollTree__Q24Game8BaseItemFv:
/* 801CC60C 001C954C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC610 001C9550  7C 08 02 A6 */	mflr r0
/* 801CC614 001C9554  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC618 001C9558  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC61C 001C955C  7C 7F 1B 78 */	mr r31, r3
/* 801CC620 001C9560  80 63 01 14 */	lwz r3, 0x114(r3)
/* 801CC624 001C9564  4B F6 94 79 */	bl update__8CollTreeFv
/* 801CC628 001C9568  80 7F 01 14 */	lwz r3, 0x114(r31)
/* 801CC62C 001C956C  38 9F 01 C4 */	addi r4, r31, 0x1c4
/* 801CC630 001C9570  4B F6 A6 11 */	bl getBoundingSphere__8CollTreeFRQ23Sys6Sphere
/* 801CC634 001C9574  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC638 001C9578  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC63C 001C957C  7C 08 03 A6 */	mtlr r0
/* 801CC640 001C9580  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC644 001C9584  4E 80 00 20 */	blr 

.global move__Q24Game8BaseItemFf
move__Q24Game8BaseItemFf:
/* 801CC648 001C9588  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 801CC64C 001C958C  7C 08 02 A6 */	mflr r0
/* 801CC650 001C9590  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 801CC654 001C9594  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 801CC658 001C9598  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 801CC65C 001C959C  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 801CC660 001C95A0  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 801CC664 001C95A4  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 801CC668 001C95A8  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 801CC66C 001C95AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC670 001C95B0  FF C0 08 90 */	fmr f30, f1
/* 801CC674 001C95B4  7C 7E 1B 78 */	mr r30, r3
/* 801CC678 001C95B8  81 8C 01 DC */	lwz r12, 0x1dc(r12)
/* 801CC67C 001C95BC  7D 89 03 A6 */	mtctr r12
/* 801CC680 001C95C0  4E 80 04 21 */	bctrl 
/* 801CC684 001C95C4  FF E0 08 90 */	fmr f31, f1
/* 801CC688 001C95C8  C0 DE 01 A0 */	lfs f6, 0x1a0(r30)
/* 801CC68C 001C95CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 801CC690 001C95D0  C0 FE 01 A4 */	lfs f7, 0x1a4(r30)
/* 801CC694 001C95D4  C0 BE 01 9C */	lfs f5, 0x19c(r30)
/* 801CC698 001C95D8  38 A0 00 00 */	li r5, 0
/* 801CC69C 001C95DC  EC C6 F8 2A */	fadds f6, f6, f31
/* 801CC6A0 001C95E0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 801CC6A4 001C95E4  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 801CC6A8 001C95E8  38 E1 00 08 */	addi r7, r1, 8
/* 801CC6AC 001C95EC  C0 82 B2 BC */	lfs f4, lbl_8051961C@sda21(r2)
/* 801CC6B0 001C95F0  38 DE 01 90 */	addi r6, r30, 0x190
/* 801CC6B4 001C95F4  C0 62 B2 B8 */	lfs f3, lbl_80519618@sda21(r2)
/* 801CC6B8 001C95F8  38 00 FF FF */	li r0, -1
/* 801CC6BC 001C95FC  C0 43 08 00 */	lfs f2, 0x800(r3)
/* 801CC6C0 001C9600  FC 20 F0 90 */	fmr f1, f30
/* 801CC6C4 001C9604  C0 02 B2 C0 */	lfs f0, lbl_80519620@sda21(r2)
/* 801CC6C8 001C9608  38 81 00 18 */	addi r4, r1, 0x18
/* 801CC6CC 001C960C  D0 A1 00 08 */	stfs f5, 8(r1)
/* 801CC6D0 001C9610  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 801CC6D4 001C9614  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 801CC6D8 001C9618  D0 E1 00 10 */	stfs f7, 0x10(r1)
/* 801CC6DC 001C961C  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 801CC6E0 001C9620  90 E1 00 18 */	stw r7, 0x18(r1)
/* 801CC6E4 001C9624  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 801CC6E8 001C9628  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 801CC6EC 001C962C  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 801CC6F0 001C9630  90 A1 00 28 */	stw r5, 0x28(r1)
/* 801CC6F4 001C9634  90 A1 00 5C */	stw r5, 0x5c(r1)
/* 801CC6F8 001C9638  98 A1 00 8C */	stb r5, 0x8c(r1)
/* 801CC6FC 001C963C  98 A1 00 31 */	stb r5, 0x31(r1)
/* 801CC700 001C9640  98 A1 00 30 */	stb r5, 0x30(r1)
/* 801CC704 001C9644  90 A1 00 60 */	stw r5, 0x60(r1)
/* 801CC708 001C9648  98 A1 00 A8 */	stb r5, 0xa8(r1)
/* 801CC70C 001C964C  90 A1 00 AC */	stw r5, 0xac(r1)
/* 801CC710 001C9650  D0 41 00 44 */	stfs f2, 0x44(r1)
/* 801CC714 001C9654  D0 01 00 48 */	stfs f0, 0x48(r1)
/* 801CC718 001C9658  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 801CC71C 001C965C  90 A1 00 64 */	stw r5, 0x64(r1)
/* 801CC720 001C9660  98 A1 00 32 */	stb r5, 0x32(r1)
/* 801CC724 001C9664  93 C1 00 2C */	stw r30, 0x2c(r1)
/* 801CC728 001C9668  81 83 00 04 */	lwz r12, 4(r3)
/* 801CC72C 001C966C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CC730 001C9670  7D 89 03 A6 */	mtctr r12
/* 801CC734 001C9674  4E 80 04 21 */	bctrl 
/* 801CC738 001C9678  FC 20 F0 90 */	fmr f1, f30
/* 801CC73C 001C967C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 801CC740 001C9680  80 6D 94 20 */	lwz r3, platMgr__4Game@sda21(r13)
/* 801CC744 001C9684  38 81 00 18 */	addi r4, r1, 0x18
/* 801CC748 001C9688  4B FF 94 71 */	bl traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
/* 801CC74C 001C968C  80 1E 01 8C */	lwz r0, 0x18c(r30)
/* 801CC750 001C9690  28 00 00 00 */	cmplwi r0, 0
/* 801CC754 001C9694  40 82 00 64 */	bne .L_801CC7B8
/* 801CC758 001C9698  28 1F 00 00 */	cmplwi r31, 0
/* 801CC75C 001C969C  40 82 00 3C */	bne .L_801CC798
/* 801CC760 001C96A0  80 81 00 5C */	lwz r4, 0x5c(r1)
/* 801CC764 001C96A4  28 04 00 00 */	cmplwi r4, 0
/* 801CC768 001C96A8  41 82 00 24 */	beq .L_801CC78C
/* 801CC76C 001C96AC  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CC770 001C96B0  7F C3 F3 78 */	mr r3, r30
/* 801CC774 001C96B4  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 801CC778 001C96B8  7D 89 03 A6 */	mtctr r12
/* 801CC77C 001C96BC  4E 80 04 21 */	bctrl 
/* 801CC780 001C96C0  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 801CC784 001C96C4  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 801CC788 001C96C8  48 00 00 38 */	b .L_801CC7C0
.L_801CC78C:
/* 801CC78C 001C96CC  38 00 00 00 */	li r0, 0
/* 801CC790 001C96D0  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 801CC794 001C96D4  48 00 00 2C */	b .L_801CC7C0
.L_801CC798:
/* 801CC798 001C96D8  7F C3 F3 78 */	mr r3, r30
/* 801CC79C 001C96DC  7F E4 FB 78 */	mr r4, r31
/* 801CC7A0 001C96E0  81 9E 00 00 */	lwz r12, 0(r30)
/* 801CC7A4 001C96E4  81 8C 00 E8 */	lwz r12, 0xe8(r12)
/* 801CC7A8 001C96E8  7D 89 03 A6 */	mtctr r12
/* 801CC7AC 001C96EC  4E 80 04 21 */	bctrl 
/* 801CC7B0 001C96F0  93 FE 01 8C */	stw r31, 0x18c(r30)
/* 801CC7B4 001C96F4  48 00 00 0C */	b .L_801CC7C0
.L_801CC7B8:
/* 801CC7B8 001C96F8  38 00 00 00 */	li r0, 0
/* 801CC7BC 001C96FC  90 1E 01 8C */	stw r0, 0x18c(r30)
.L_801CC7C0:
/* 801CC7C0 001C9700  C0 01 00 08 */	lfs f0, 8(r1)
/* 801CC7C4 001C9704  D0 1E 01 9C */	stfs f0, 0x19c(r30)
/* 801CC7C8 001C9708  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 801CC7CC 001C970C  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 801CC7D0 001C9710  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801CC7D4 001C9714  D0 1E 01 A4 */	stfs f0, 0x1a4(r30)
/* 801CC7D8 001C9718  C0 1E 01 A0 */	lfs f0, 0x1a0(r30)
/* 801CC7DC 001C971C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 801CC7E0 001C9720  D0 1E 01 A0 */	stfs f0, 0x1a0(r30)
/* 801CC7E4 001C9724  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 801CC7E8 001C9728  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 801CC7EC 001C972C  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 801CC7F0 001C9730  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 801CC7F4 001C9734  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 801CC7F8 001C9738  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 801CC7FC 001C973C  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 801CC800 001C9740  7C 08 03 A6 */	mtlr r0
/* 801CC804 001C9744  38 21 00 E0 */	addi r1, r1, 0xe0
/* 801CC808 001C9748  4E 80 00 20 */	blr 

.global movieStartAnimation__Q24Game8BaseItemFUl
movieStartAnimation__Q24Game8BaseItemFUl:
/* 801CC80C 001C974C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC810 001C9750  7C 08 02 A6 */	mflr r0
/* 801CC814 001C9754  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC818 001C9758  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC81C 001C975C  7C 9F 23 78 */	mr r31, r4
/* 801CC820 001C9760  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC824 001C9764  7C 7E 1B 78 */	mr r30, r3
/* 801CC828 001C9768  80 03 01 B8 */	lwz r0, 0x1b8(r3)
/* 801CC82C 001C976C  28 00 00 00 */	cmplwi r0, 0
/* 801CC830 001C9770  41 82 00 30 */	beq .L_801CC860
/* 801CC834 001C9774  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC838 001C9778  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801CC83C 001C977C  7D 89 03 A6 */	mtctr r12
/* 801CC840 001C9780  4E 80 04 21 */	bctrl 
/* 801CC844 001C9784  7F E4 FB 78 */	mr r4, r31
/* 801CC848 001C9788  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801CC84C 001C978C  38 A0 00 00 */	li r5, 0
/* 801CC850 001C9790  48 25 C4 39 */	bl startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
/* 801CC854 001C9794  C0 02 B2 C4 */	lfs f0, lbl_80519624@sda21(r2)
/* 801CC858 001C9798  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801CC85C 001C979C  48 00 00 14 */	b .L_801CC870
.L_801CC860:
/* 801CC860 001C97A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC864 001C97A4  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801CC868 001C97A8  7D 89 03 A6 */	mtctr r12
/* 801CC86C 001C97AC  4E 80 04 21 */	bctrl 
.L_801CC870:
/* 801CC870 001C97B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC874 001C97B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC878 001C97B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC87C 001C97BC  7C 08 03 A6 */	mtlr r0
/* 801CC880 001C97C0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC884 001C97C4  4E 80 00 20 */	blr 

.global movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo
movieStartDemoAnimation__Q24Game8BaseItemFPQ28SysShape8AnimInfo:
/* 801CC888 001C97C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC88C 001C97CC  7C 08 02 A6 */	mflr r0
/* 801CC890 001C97D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC894 001C97D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC898 001C97D8  7C 9F 23 78 */	mr r31, r4
/* 801CC89C 001C97DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801CC8A0 001C97E0  7C 7E 1B 78 */	mr r30, r3
/* 801CC8A4 001C97E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC8A8 001C97E8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CC8AC 001C97EC  7D 89 03 A6 */	mtctr r12
/* 801CC8B0 001C97F0  4E 80 04 21 */	bctrl 
/* 801CC8B4 001C97F4  7F E4 FB 78 */	mr r4, r31
/* 801CC8B8 001C97F8  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801CC8BC 001C97FC  48 25 C4 95 */	bl startExAnim__Q28SysShape8AnimatorFPQ28SysShape8AnimInfo
/* 801CC8C0 001C9800  C0 02 B2 C4 */	lfs f0, lbl_80519624@sda21(r2)
/* 801CC8C4 001C9804  38 7E 01 A8 */	addi r3, r30, 0x1a8
/* 801CC8C8 001C9808  D0 1E 01 D4 */	stfs f0, 0x1d4(r30)
/* 801CC8CC 001C980C  80 9E 01 74 */	lwz r4, 0x174(r30)
/* 801CC8D0 001C9810  48 25 C4 E9 */	bl assertValid__Q28SysShape8AnimatorFPQ28SysShape5Model
/* 801CC8D4 001C9814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CC8D8 001C9818  40 82 00 20 */	bne .L_801CC8F8
/* 801CC8DC 001C981C  3C 60 80 48 */	lis r3, lbl_80480390@ha
/* 801CC8E0 001C9820  3C A0 80 48 */	lis r5, lbl_804803D0@ha
/* 801CC8E4 001C9824  38 63 03 90 */	addi r3, r3, lbl_80480390@l
/* 801CC8E8 001C9828  38 80 01 F2 */	li r4, 0x1f2
/* 801CC8EC 001C982C  38 A5 03 D0 */	addi r5, r5, lbl_804803D0@l
/* 801CC8F0 001C9830  4C C6 31 82 */	crclr 6
/* 801CC8F4 001C9834  4B E5 DD 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CC8F8:
/* 801CC8F8 001C9838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC8FC 001C983C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC900 001C9840  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CC904 001C9844  7C 08 03 A6 */	mtlr r0
/* 801CC908 001C9848  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC90C 001C984C  4E 80 00 20 */	blr 

.global movieSetAnimationLastFrame__Q24Game8BaseItemFv
movieSetAnimationLastFrame__Q24Game8BaseItemFv:
/* 801CC910 001C9850  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC914 001C9854  7C 08 02 A6 */	mflr r0
/* 801CC918 001C9858  38 63 01 A8 */	addi r3, r3, 0x1a8
/* 801CC91C 001C985C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC920 001C9860  48 25 C5 E1 */	bl setLastFrame__Q28SysShape8AnimatorFv
/* 801CC924 001C9864  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC928 001C9868  7C 08 03 A6 */	mtlr r0
/* 801CC92C 001C986C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC930 001C9870  4E 80 00 20 */	blr 

.global "movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f"
"movieSetTranslation__Q24Game8BaseItemFR10Vector3<f>f":
/* 801CC934 001C9874  C0 04 00 00 */	lfs f0, 0(r4)
/* 801CC938 001C9878  D0 03 01 9C */	stfs f0, 0x19c(r3)
/* 801CC93C 001C987C  C0 04 00 04 */	lfs f0, 4(r4)
/* 801CC940 001C9880  D0 03 01 A0 */	stfs f0, 0x1a0(r3)
/* 801CC944 001C9884  C0 04 00 08 */	lfs f0, 8(r4)
/* 801CC948 001C9888  D0 03 01 A4 */	stfs f0, 0x1a4(r3)
/* 801CC94C 001C988C  4E 80 00 20 */	blr 

.global constructor__Q24Game8CFSMItemFv
constructor__Q24Game8CFSMItemFv:
/* 801CC950 001C9890  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC954 001C9894  7C 08 02 A6 */	mflr r0
/* 801CC958 001C9898  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC95C 001C989C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC960 001C98A0  7C 7F 1B 78 */	mr r31, r3
/* 801CC964 001C98A4  48 00 00 3D */	bl initFSM__Q24Game8CFSMItemFv
/* 801CC968 001C98A8  38 60 00 70 */	li r3, 0x70
/* 801CC96C 001C98AC  4B E5 75 39 */	bl __nw__FUl
/* 801CC970 001C98B0  7C 60 1B 79 */	or. r0, r3, r3
/* 801CC974 001C98B4  41 82 00 14 */	beq .L_801CC988
/* 801CC978 001C98B8  7F E4 FB 78 */	mr r4, r31
/* 801CC97C 001C98BC  38 A0 00 02 */	li r5, 2
/* 801CC980 001C98C0  48 29 0E 25 */	bl __ct__Q23PSM11CreatureObjFPQ24Game8CreatureUc
/* 801CC984 001C98C4  7C 60 1B 78 */	mr r0, r3
.L_801CC988:
/* 801CC988 001C98C8  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 801CC98C 001C98CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC990 001C98D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC994 001C98D4  7C 08 03 A6 */	mtlr r0
/* 801CC998 001C98D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC99C 001C98DC  4E 80 00 20 */	blr 

.global initFSM__Q24Game8CFSMItemFv
initFSM__Q24Game8CFSMItemFv:
/* 801CC9A0 001C98E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC9A4 001C98E4  7C 08 02 A6 */	mflr r0
/* 801CC9A8 001C98E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CC9AC 001C98EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CC9B0 001C98F0  7C 7F 1B 78 */	mr r31, r3
/* 801CC9B4 001C98F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC9B8 001C98F8  81 8C 02 20 */	lwz r12, 0x220(r12)
/* 801CC9BC 001C98FC  7D 89 03 A6 */	mtctr r12
/* 801CC9C0 001C9900  4E 80 04 21 */	bctrl 
/* 801CC9C4 001C9904  90 7F 01 D8 */	stw r3, 0x1d8(r31)
/* 801CC9C8 001C9908  7F E4 FB 78 */	mr r4, r31
/* 801CC9CC 001C990C  80 7F 01 D8 */	lwz r3, 0x1d8(r31)
/* 801CC9D0 001C9910  81 83 00 00 */	lwz r12, 0(r3)
/* 801CC9D4 001C9914  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CC9D8 001C9918  7D 89 03 A6 */	mtctr r12
/* 801CC9DC 001C991C  4E 80 04 21 */	bctrl 
/* 801CC9E0 001C9920  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CC9E4 001C9924  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CC9E8 001C9928  7C 08 03 A6 */	mtlr r0
/* 801CC9EC 001C992C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CC9F0 001C9930  4E 80 00 20 */	blr 

.global "init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801CC9F4 001C9934  4E 80 00 20 */	blr 

.global doAI__Q24Game8CFSMItemFv
doAI__Q24Game8CFSMItemFv:
/* 801CC9F8 001C9938  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CC9FC 001C993C  7C 08 02 A6 */	mflr r0
/* 801CCA00 001C9940  7C 64 1B 78 */	mr r4, r3
/* 801CCA04 001C9944  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCA08 001C9948  80 63 01 D8 */	lwz r3, 0x1d8(r3)
/* 801CCA0C 001C994C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CCA10 001C9950  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CCA14 001C9954  7D 89 03 A6 */	mtctr r12
/* 801CCA18 001C9958  4E 80 04 21 */	bctrl 
/* 801CCA1C 001C995C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCA20 001C9960  7C 08 03 A6 */	mtlr r0
/* 801CCA24 001C9964  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCA28 001C9968  4E 80 00 20 */	blr 

.global "setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Q24Game8CFSMItem>"
"setCurrState__Q24Game8CFSMItemFPQ24Game26FSMState<Q24Game8CFSMItem>":
/* 801CCA2C 001C996C  90 83 01 DC */	stw r4, 0x1dc(r3)
/* 801CCA30 001C9970  4E 80 00 20 */	blr 

.global getCurrState__Q24Game8CFSMItemFv
getCurrState__Q24Game8CFSMItemFv:
/* 801CCA34 001C9974  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCA38 001C9978  4E 80 00 20 */	blr 

.global getStateID__Q24Game8CFSMItemFv
getStateID__Q24Game8CFSMItemFv:
/* 801CCA3C 001C997C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCA40 001C9980  28 03 00 00 */	cmplwi r3, 0
/* 801CCA44 001C9984  41 82 00 0C */	beq .L_801CCA50
/* 801CCA48 001C9988  80 63 00 04 */	lwz r3, 4(r3)
/* 801CCA4C 001C998C  4E 80 00 20 */	blr 
.L_801CCA50:
/* 801CCA50 001C9990  38 60 FF FF */	li r3, -1
/* 801CCA54 001C9994  4E 80 00 20 */	blr 

.global bounceCallback__Q24Game8CFSMItemFPQ23Sys8Triangle
bounceCallback__Q24Game8CFSMItemFPQ23Sys8Triangle:
/* 801CCA58 001C9998  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCA5C 001C999C  7C 08 02 A6 */	mflr r0
/* 801CCA60 001C99A0  7C 66 1B 78 */	mr r6, r3
/* 801CCA64 001C99A4  7C 85 23 78 */	mr r5, r4
/* 801CCA68 001C99A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCA6C 001C99AC  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCA70 001C99B0  28 03 00 00 */	cmplwi r3, 0
/* 801CCA74 001C99B4  41 82 00 18 */	beq .L_801CCA8C
/* 801CCA78 001C99B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CCA7C 001C99BC  7C C4 33 78 */	mr r4, r6
/* 801CCA80 001C99C0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 801CCA84 001C99C4  7D 89 03 A6 */	mtctr r12
/* 801CCA88 001C99C8  4E 80 04 21 */	bctrl 
.L_801CCA8C:
/* 801CCA8C 001C99CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCA90 001C99D0  7C 08 03 A6 */	mtlr r0
/* 801CCA94 001C99D4  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCA98 001C99D8  4E 80 00 20 */	blr 

.global onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle
onBounce__Q24Game10CItemStateFPQ24Game8CFSMItemPQ23Sys8Triangle:
/* 801CCA9C 001C99DC  4E 80 00 20 */	blr 

.global collisionCallback__Q24Game8CFSMItemFRQ24Game9CollEvent
collisionCallback__Q24Game8CFSMItemFRQ24Game9CollEvent:
/* 801CCAA0 001C99E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCAA4 001C99E4  7C 08 02 A6 */	mflr r0
/* 801CCAA8 001C99E8  7C 66 1B 78 */	mr r6, r3
/* 801CCAAC 001C99EC  7C 85 23 78 */	mr r5, r4
/* 801CCAB0 001C99F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCAB4 001C99F4  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCAB8 001C99F8  28 03 00 00 */	cmplwi r3, 0
/* 801CCABC 001C99FC  41 82 00 18 */	beq .L_801CCAD4
/* 801CCAC0 001C9A00  81 83 00 00 */	lwz r12, 0(r3)
/* 801CCAC4 001C9A04  7C C4 33 78 */	mr r4, r6
/* 801CCAC8 001C9A08  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 801CCACC 001C9A0C  7D 89 03 A6 */	mtctr r12
/* 801CCAD0 001C9A10  4E 80 04 21 */	bctrl 
.L_801CCAD4:
/* 801CCAD4 001C9A14  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCAD8 001C9A18  7C 08 03 A6 */	mtlr r0
/* 801CCADC 001C9A1C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCAE0 001C9A20  4E 80 00 20 */	blr 

.global onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent
onCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9CollEvent:
/* 801CCAE4 001C9A24  4E 80 00 20 */	blr 

.global platCallback__Q24Game8CFSMItemFRQ24Game9PlatEvent
platCallback__Q24Game8CFSMItemFRQ24Game9PlatEvent:
/* 801CCAE8 001C9A28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCAEC 001C9A2C  7C 08 02 A6 */	mflr r0
/* 801CCAF0 001C9A30  7C 66 1B 78 */	mr r6, r3
/* 801CCAF4 001C9A34  7C 85 23 78 */	mr r5, r4
/* 801CCAF8 001C9A38  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCAFC 001C9A3C  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCB00 001C9A40  28 03 00 00 */	cmplwi r3, 0
/* 801CCB04 001C9A44  41 82 00 18 */	beq .L_801CCB1C
/* 801CCB08 001C9A48  81 83 00 00 */	lwz r12, 0(r3)
/* 801CCB0C 001C9A4C  7C C4 33 78 */	mr r4, r6
/* 801CCB10 001C9A50  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801CCB14 001C9A54  7D 89 03 A6 */	mtctr r12
/* 801CCB18 001C9A58  4E 80 04 21 */	bctrl 
.L_801CCB1C:
/* 801CCB1C 001C9A5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCB20 001C9A60  7C 08 03 A6 */	mtlr r0
/* 801CCB24 001C9A64  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCB28 001C9A68  4E 80 00 20 */	blr 

.global onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent
onPlatCollision__Q24Game10CItemStateFPQ24Game8CFSMItemRQ24Game9PlatEvent:
/* 801CCB2C 001C9A6C  4E 80 00 20 */	blr 

.global onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent
onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent:
/* 801CCB30 001C9A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCB34 001C9A74  7C 08 02 A6 */	mflr r0
/* 801CCB38 001C9A78  7C 66 1B 78 */	mr r6, r3
/* 801CCB3C 001C9A7C  7C 85 23 78 */	mr r5, r4
/* 801CCB40 001C9A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCB44 001C9A84  80 63 01 DC */	lwz r3, 0x1dc(r3)
/* 801CCB48 001C9A88  28 03 00 00 */	cmplwi r3, 0
/* 801CCB4C 001C9A8C  41 82 00 18 */	beq .L_801CCB64
/* 801CCB50 001C9A90  81 83 00 00 */	lwz r12, 0(r3)
/* 801CCB54 001C9A94  7C C4 33 78 */	mr r4, r6
/* 801CCB58 001C9A98  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CCB5C 001C9A9C  7D 89 03 A6 */	mtctr r12
/* 801CCB60 001C9AA0  4E 80 04 21 */	bctrl 
.L_801CCB64:
/* 801CCB64 001C9AA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCB68 001C9AA8  7C 08 03 A6 */	mtlr r0
/* 801CCB6C 001C9AAC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCB70 001C9AB0  4E 80 00 20 */	blr 

.global onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent
onKeyEvent__Q24Game10CItemStateFPQ24Game8CFSMItemRCQ28SysShape8KeyEvent:
/* 801CCB74 001C9AB4  4E 80 00 20 */	blr 

.global actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
actItem__Q24Game14InteractAttackFPQ24Game8BaseItem:
/* 801CCB78 001C9AB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCB7C 001C9ABC  7C 08 02 A6 */	mflr r0
/* 801CCB80 001C9AC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCB84 001C9AC4  7C 60 1B 78 */	mr r0, r3
/* 801CCB88 001C9AC8  7C 83 23 78 */	mr r3, r4
/* 801CCB8C 001C9ACC  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCB90 001C9AD0  7C 04 03 78 */	mr r4, r0
/* 801CCB94 001C9AD4  81 8C 01 E0 */	lwz r12, 0x1e0(r12)
/* 801CCB98 001C9AD8  7D 89 03 A6 */	mtctr r12
/* 801CCB9C 001C9ADC  4E 80 04 21 */	bctrl 
/* 801CCBA0 001C9AE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCBA4 001C9AE4  7C 08 03 A6 */	mtlr r0
/* 801CCBA8 001C9AE8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCBAC 001C9AEC  4E 80 00 20 */	blr 

.global actItem__Q24Game19InteractBreakBridgeFPQ24Game8BaseItem
actItem__Q24Game19InteractBreakBridgeFPQ24Game8BaseItem:
/* 801CCBB0 001C9AF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCBB4 001C9AF4  7C 08 02 A6 */	mflr r0
/* 801CCBB8 001C9AF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCBBC 001C9AFC  7C 60 1B 78 */	mr r0, r3
/* 801CCBC0 001C9B00  7C 83 23 78 */	mr r3, r4
/* 801CCBC4 001C9B04  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCBC8 001C9B08  7C 04 03 78 */	mr r4, r0
/* 801CCBCC 001C9B0C  81 8C 01 E4 */	lwz r12, 0x1e4(r12)
/* 801CCBD0 001C9B10  7D 89 03 A6 */	mtctr r12
/* 801CCBD4 001C9B14  4E 80 04 21 */	bctrl 
/* 801CCBD8 001C9B18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCBDC 001C9B1C  7C 08 03 A6 */	mtlr r0
/* 801CCBE0 001C9B20  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCBE4 001C9B24  4E 80 00 20 */	blr 

.global actItem__Q24Game14InteractGotKeyFPQ24Game8BaseItem
actItem__Q24Game14InteractGotKeyFPQ24Game8BaseItem:
/* 801CCBE8 001C9B28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCBEC 001C9B2C  7C 08 02 A6 */	mflr r0
/* 801CCBF0 001C9B30  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCBF4 001C9B34  7C 60 1B 78 */	mr r0, r3
/* 801CCBF8 001C9B38  7C 83 23 78 */	mr r3, r4
/* 801CCBFC 001C9B3C  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCC00 001C9B40  7C 04 03 78 */	mr r4, r0
/* 801CCC04 001C9B44  81 8C 02 00 */	lwz r12, 0x200(r12)
/* 801CCC08 001C9B48  7D 89 03 A6 */	mtctr r12
/* 801CCC0C 001C9B4C  4E 80 04 21 */	bctrl 
/* 801CCC10 001C9B50  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCC14 001C9B54  7C 08 03 A6 */	mtlr r0
/* 801CCC18 001C9B58  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCC1C 001C9B5C  4E 80 00 20 */	blr 

.global actItem__Q24Game11InteractEatFPQ24Game8BaseItem
actItem__Q24Game11InteractEatFPQ24Game8BaseItem:
/* 801CCC20 001C9B60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCC24 001C9B64  7C 08 02 A6 */	mflr r0
/* 801CCC28 001C9B68  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCC2C 001C9B6C  7C 60 1B 78 */	mr r0, r3
/* 801CCC30 001C9B70  7C 83 23 78 */	mr r3, r4
/* 801CCC34 001C9B74  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCC38 001C9B78  7C 04 03 78 */	mr r4, r0
/* 801CCC3C 001C9B7C  81 8C 01 E8 */	lwz r12, 0x1e8(r12)
/* 801CCC40 001C9B80  7D 89 03 A6 */	mtctr r12
/* 801CCC44 001C9B84  4E 80 04 21 */	bctrl 
/* 801CCC48 001C9B88  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCC4C 001C9B8C  7C 08 03 A6 */	mtlr r0
/* 801CCC50 001C9B90  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCC54 001C9B94  4E 80 00 20 */	blr 

.global actItem__Q24Game19InteractFlockAttackFPQ24Game8BaseItem
actItem__Q24Game19InteractFlockAttackFPQ24Game8BaseItem:
/* 801CCC58 001C9B98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCC5C 001C9B9C  7C 08 02 A6 */	mflr r0
/* 801CCC60 001C9BA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCC64 001C9BA4  7C 60 1B 78 */	mr r0, r3
/* 801CCC68 001C9BA8  7C 83 23 78 */	mr r3, r4
/* 801CCC6C 001C9BAC  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCC70 001C9BB0  7C 04 03 78 */	mr r4, r0
/* 801CCC74 001C9BB4  81 8C 01 EC */	lwz r12, 0x1ec(r12)
/* 801CCC78 001C9BB8  7D 89 03 A6 */	mtctr r12
/* 801CCC7C 001C9BBC  4E 80 04 21 */	bctrl 
/* 801CCC80 001C9BC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCC84 001C9BC4  7C 08 03 A6 */	mtlr r0
/* 801CCC88 001C9BC8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCC8C 001C9BCC  4E 80 00 20 */	blr 

.global actItem__Q24Game14InteractAbsorbFPQ24Game8BaseItem
actItem__Q24Game14InteractAbsorbFPQ24Game8BaseItem:
/* 801CCC90 001C9BD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCC94 001C9BD4  7C 08 02 A6 */	mflr r0
/* 801CCC98 001C9BD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCC9C 001C9BDC  7C 60 1B 78 */	mr r0, r3
/* 801CCCA0 001C9BE0  7C 83 23 78 */	mr r3, r4
/* 801CCCA4 001C9BE4  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCCA8 001C9BE8  7C 04 03 78 */	mr r4, r0
/* 801CCCAC 001C9BEC  81 8C 01 F0 */	lwz r12, 0x1f0(r12)
/* 801CCCB0 001C9BF0  7D 89 03 A6 */	mtctr r12
/* 801CCCB4 001C9BF4  4E 80 04 21 */	bctrl 
/* 801CCCB8 001C9BF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCCBC 001C9BFC  7C 08 03 A6 */	mtlr r0
/* 801CCCC0 001C9C00  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCCC4 001C9C04  4E 80 00 20 */	blr 

.global actItem__Q24Game11InteractFueFPQ24Game8BaseItem
actItem__Q24Game11InteractFueFPQ24Game8BaseItem:
/* 801CCCC8 001C9C08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCCCC 001C9C0C  7C 08 02 A6 */	mflr r0
/* 801CCCD0 001C9C10  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCCD4 001C9C14  7C 60 1B 78 */	mr r0, r3
/* 801CCCD8 001C9C18  7C 83 23 78 */	mr r3, r4
/* 801CCCDC 001C9C1C  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCCE0 001C9C20  7C 04 03 78 */	mr r4, r0
/* 801CCCE4 001C9C24  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 801CCCE8 001C9C28  7D 89 03 A6 */	mtctr r12
/* 801CCCEC 001C9C2C  4E 80 04 21 */	bctrl 
/* 801CCCF0 001C9C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCCF4 001C9C34  7C 08 03 A6 */	mtlr r0
/* 801CCCF8 001C9C38  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCCFC 001C9C3C  4E 80 00 20 */	blr 

.global actItem__Q24Game18InteractFarmKareroFPQ24Game8BaseItem
actItem__Q24Game18InteractFarmKareroFPQ24Game8BaseItem:
/* 801CCD00 001C9C40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCD04 001C9C44  7C 08 02 A6 */	mflr r0
/* 801CCD08 001C9C48  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCD0C 001C9C4C  7C 60 1B 78 */	mr r0, r3
/* 801CCD10 001C9C50  7C 83 23 78 */	mr r3, r4
/* 801CCD14 001C9C54  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCD18 001C9C58  7C 04 03 78 */	mr r4, r0
/* 801CCD1C 001C9C5C  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 801CCD20 001C9C60  7D 89 03 A6 */	mtctr r12
/* 801CCD24 001C9C64  4E 80 04 21 */	bctrl 
/* 801CCD28 001C9C68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCD2C 001C9C6C  7C 08 03 A6 */	mtlr r0
/* 801CCD30 001C9C70  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCD34 001C9C74  4E 80 00 20 */	blr 

.global actItem__Q24Game17InteractFarmHaeroFPQ24Game8BaseItem
actItem__Q24Game17InteractFarmHaeroFPQ24Game8BaseItem:
/* 801CCD38 001C9C78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCD3C 001C9C7C  7C 08 02 A6 */	mflr r0
/* 801CCD40 001C9C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCD44 001C9C84  7C 60 1B 78 */	mr r0, r3
/* 801CCD48 001C9C88  7C 83 23 78 */	mr r3, r4
/* 801CCD4C 001C9C8C  81 84 00 00 */	lwz r12, 0(r4)
/* 801CCD50 001C9C90  7C 04 03 78 */	mr r4, r0
/* 801CCD54 001C9C94  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 801CCD58 001C9C98  7D 89 03 A6 */	mtctr r12
/* 801CCD5C 001C9C9C  4E 80 04 21 */	bctrl 
/* 801CCD60 001C9CA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCD64 001C9CA4  7C 08 03 A6 */	mtlr r0
/* 801CCD68 001C9CA8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCD6C 001C9CAC  4E 80 00 20 */	blr 

.global __ct__Q24Game11BaseItemMgrFi
__ct__Q24Game11BaseItemMgrFi:
/* 801CCD70 001C9CB0  7C 80 07 35 */	extsh. r0, r4
/* 801CCD74 001C9CB4  41 82 00 0C */	beq .L_801CCD80
/* 801CCD78 001C9CB8  38 03 00 30 */	addi r0, r3, 0x30
/* 801CCD7C 001C9CBC  90 03 00 04 */	stw r0, 4(r3)
.L_801CCD80:
/* 801CCD80 001C9CC0  3C 80 80 4B */	lis r4, __vt__16GenericObjectMgr@ha
/* 801CCD84 001C9CC4  3C A0 80 4B */	lis r5, __vt__Q24Game11BaseItemMgr@ha
/* 801CCD88 001C9CC8  38 04 B5 F0 */	addi r0, r4, __vt__16GenericObjectMgr@l
/* 801CCD8C 001C9CCC  90 03 00 00 */	stw r0, 0(r3)
/* 801CCD90 001C9CD0  38 C5 73 74 */	addi r6, r5, __vt__Q24Game11BaseItemMgr@l
/* 801CCD94 001C9CD4  3C 80 80 48 */	lis r4, lbl_804803DC@ha
/* 801CCD98 001C9CD8  38 A0 00 00 */	li r5, 0
/* 801CCD9C 001C9CDC  90 C3 00 00 */	stw r6, 0(r3)
/* 801CCDA0 001C9CE0  38 04 03 DC */	addi r0, r4, lbl_804803DC@l
/* 801CCDA4 001C9CE4  90 A3 00 20 */	stw r5, 0x20(r3)
/* 801CCDA8 001C9CE8  90 A3 00 24 */	stw r5, 0x24(r3)
/* 801CCDAC 001C9CEC  90 A3 00 28 */	stw r5, 0x28(r3)
/* 801CCDB0 001C9CF0  90 A3 00 2C */	stw r5, 0x2c(r3)
/* 801CCDB4 001C9CF4  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 801CCDB8 001C9CF8  90 03 00 08 */	stw r0, 8(r3)
/* 801CCDBC 001C9CFC  90 A3 00 0C */	stw r5, 0xc(r3)
/* 801CCDC0 001C9D00  90 A3 00 10 */	stw r5, 0x10(r3)
/* 801CCDC4 001C9D04  90 A3 00 14 */	stw r5, 0x14(r3)
/* 801CCDC8 001C9D08  4E 80 00 20 */	blr 

.global setModelSize__Q24Game11BaseItemMgrFi
setModelSize__Q24Game11BaseItemMgrFi:
/* 801CCDCC 001C9D0C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CCDD0 001C9D10  7C 08 02 A6 */	mflr r0
/* 801CCDD4 001C9D14  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CCDD8 001C9D18  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CCDDC 001C9D1C  7C 9F 23 78 */	mr r31, r4
/* 801CCDE0 001C9D20  93 C1 00 08 */	stw r30, 8(r1)
/* 801CCDE4 001C9D24  7C 7E 1B 78 */	mr r30, r3
/* 801CCDE8 001C9D28  93 E3 00 18 */	stw r31, 0x18(r3)
/* 801CCDEC 001C9D2C  54 83 10 3A */	slwi r3, r4, 2
/* 801CCDF0 001C9D30  4B E5 71 BD */	bl __nwa__FUl
/* 801CCDF4 001C9D34  2C 1F 00 00 */	cmpwi r31, 0
/* 801CCDF8 001C9D38  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 801CCDFC 001C9D3C  39 80 00 00 */	li r12, 0
/* 801CCE00 001C9D40  40 81 00 BC */	ble .L_801CCEBC
/* 801CCE04 001C9D44  2C 1F 00 08 */	cmpwi r31, 8
/* 801CCE08 001C9D48  38 7F FF F8 */	addi r3, r31, -8
/* 801CCE0C 001C9D4C  40 81 00 88 */	ble .L_801CCE94
/* 801CCE10 001C9D50  38 03 00 07 */	addi r0, r3, 7
/* 801CCE14 001C9D54  39 60 00 00 */	li r11, 0
/* 801CCE18 001C9D58  54 00 E8 FE */	srwi r0, r0, 3
/* 801CCE1C 001C9D5C  7C 09 03 A6 */	mtctr r0
/* 801CCE20 001C9D60  2C 03 00 00 */	cmpwi r3, 0
/* 801CCE24 001C9D64  40 81 00 70 */	ble .L_801CCE94
.L_801CCE28:
/* 801CCE28 001C9D68  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801CCE2C 001C9D6C  39 40 00 00 */	li r10, 0
/* 801CCE30 001C9D70  39 0B 00 04 */	addi r8, r11, 4
/* 801CCE34 001C9D74  38 EB 00 08 */	addi r7, r11, 8
/* 801CCE38 001C9D78  7D 43 59 2E */	stwx r10, r3, r11
/* 801CCE3C 001C9D7C  38 CB 00 0C */	addi r6, r11, 0xc
/* 801CCE40 001C9D80  38 AB 00 10 */	addi r5, r11, 0x10
/* 801CCE44 001C9D84  38 8B 00 14 */	addi r4, r11, 0x14
/* 801CCE48 001C9D88  81 3E 00 1C */	lwz r9, 0x1c(r30)
/* 801CCE4C 001C9D8C  38 6B 00 18 */	addi r3, r11, 0x18
/* 801CCE50 001C9D90  38 0B 00 1C */	addi r0, r11, 0x1c
/* 801CCE54 001C9D94  39 6B 00 20 */	addi r11, r11, 0x20
/* 801CCE58 001C9D98  7D 49 41 2E */	stwx r10, r9, r8
/* 801CCE5C 001C9D9C  39 8C 00 08 */	addi r12, r12, 8
/* 801CCE60 001C9DA0  81 1E 00 1C */	lwz r8, 0x1c(r30)
/* 801CCE64 001C9DA4  7D 48 39 2E */	stwx r10, r8, r7
/* 801CCE68 001C9DA8  80 FE 00 1C */	lwz r7, 0x1c(r30)
/* 801CCE6C 001C9DAC  7D 47 31 2E */	stwx r10, r7, r6
/* 801CCE70 001C9DB0  80 DE 00 1C */	lwz r6, 0x1c(r30)
/* 801CCE74 001C9DB4  7D 46 29 2E */	stwx r10, r6, r5
/* 801CCE78 001C9DB8  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 801CCE7C 001C9DBC  7D 45 21 2E */	stwx r10, r5, r4
/* 801CCE80 001C9DC0  80 9E 00 1C */	lwz r4, 0x1c(r30)
/* 801CCE84 001C9DC4  7D 44 19 2E */	stwx r10, r4, r3
/* 801CCE88 001C9DC8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801CCE8C 001C9DCC  7D 43 01 2E */	stwx r10, r3, r0
/* 801CCE90 001C9DD0  42 00 FF 98 */	bdnz .L_801CCE28
.L_801CCE94:
/* 801CCE94 001C9DD4  7C 0C F8 50 */	subf r0, r12, r31
/* 801CCE98 001C9DD8  55 85 10 3A */	slwi r5, r12, 2
/* 801CCE9C 001C9DDC  38 80 00 00 */	li r4, 0
/* 801CCEA0 001C9DE0  7C 09 03 A6 */	mtctr r0
/* 801CCEA4 001C9DE4  7C 0C F8 00 */	cmpw r12, r31
/* 801CCEA8 001C9DE8  40 80 00 14 */	bge .L_801CCEBC
.L_801CCEAC:
/* 801CCEAC 001C9DEC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801CCEB0 001C9DF0  7C 83 29 2E */	stwx r4, r3, r5
/* 801CCEB4 001C9DF4  38 A5 00 04 */	addi r5, r5, 4
/* 801CCEB8 001C9DF8  42 00 FF F4 */	bdnz .L_801CCEAC
.L_801CCEBC:
/* 801CCEBC 001C9DFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CCEC0 001C9E00  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CCEC4 001C9E04  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CCEC8 001C9E08  7C 08 03 A6 */	mtlr r0
/* 801CCECC 001C9E0C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CCED0 001C9E10  4E 80 00 20 */	blr 

.global loadArchive__Q24Game11BaseItemMgrFPc
loadArchive__Q24Game11BaseItemMgrFPc:
/* 801CCED4 001C9E14  94 21 FD C0 */	stwu r1, -0x240(r1)
/* 801CCED8 001C9E18  7C 08 02 A6 */	mflr r0
/* 801CCEDC 001C9E1C  7C 86 23 78 */	mr r6, r4
/* 801CCEE0 001C9E20  38 82 B2 C8 */	addi r4, r2, lbl_80519628@sda21
/* 801CCEE4 001C9E24  90 01 02 44 */	stw r0, 0x244(r1)
/* 801CCEE8 001C9E28  93 E1 02 3C */	stw r31, 0x23c(r1)
/* 801CCEEC 001C9E2C  7C 7F 1B 78 */	mr r31, r3
/* 801CCEF0 001C9E30  80 A3 00 28 */	lwz r5, 0x28(r3)
/* 801CCEF4 001C9E34  38 61 00 38 */	addi r3, r1, 0x38
/* 801CCEF8 001C9E38  4C C6 31 82 */	crclr 6
/* 801CCEFC 001C9E3C  4B EF A5 3D */	bl sprintf
/* 801CCF00 001C9E40  38 61 00 08 */	addi r3, r1, 8
/* 801CCF04 001C9E44  38 81 00 38 */	addi r4, r1, 0x38
/* 801CCF08 001C9E48  48 27 F6 D1 */	bl __ct__Q212LoadResource3ArgFPCc
/* 801CCF0C 001C9E4C  80 0D 88 2C */	lwz r0, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801CCF10 001C9E50  38 81 00 08 */	addi r4, r1, 8
/* 801CCF14 001C9E54  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 801CCF18 001C9E58  90 01 00 20 */	stw r0, 0x20(r1)
/* 801CCF1C 001C9E5C  48 27 F7 F9 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 801CCF20 001C9E60  28 03 00 00 */	cmplwi r3, 0
/* 801CCF24 001C9E64  41 82 00 10 */	beq .L_801CCF34
/* 801CCF28 001C9E68  80 03 00 34 */	lwz r0, 0x34(r3)
/* 801CCF2C 001C9E6C  90 1F 00 2C */	stw r0, 0x2c(r31)
/* 801CCF30 001C9E70  48 00 00 0C */	b .L_801CCF3C
.L_801CCF34:
/* 801CCF34 001C9E74  38 00 00 00 */	li r0, 0
/* 801CCF38 001C9E78  90 1F 00 2C */	stw r0, 0x2c(r31)
.L_801CCF3C:
/* 801CCF3C 001C9E7C  80 01 02 44 */	lwz r0, 0x244(r1)
/* 801CCF40 001C9E80  83 E1 02 3C */	lwz r31, 0x23c(r1)
/* 801CCF44 001C9E84  7C 08 03 A6 */	mtlr r0
/* 801CCF48 001C9E88  38 21 02 40 */	addi r1, r1, 0x240
/* 801CCF4C 001C9E8C  4E 80 00 20 */	blr 

.global loadBmd__Q24Game11BaseItemMgrFPciUl
loadBmd__Q24Game11BaseItemMgrFPciUl:
/* 801CCF50 001C9E90  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CCF54 001C9E94  7C 08 02 A6 */	mflr r0
/* 801CCF58 001C9E98  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CCF5C 001C9E9C  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 801CCF60 001C9EA0  7C BD 2B 79 */	or. r29, r5, r5
/* 801CCF64 001C9EA4  3C A0 80 48 */	lis r5, lbl_80480390@ha
/* 801CCF68 001C9EA8  7C 7B 1B 78 */	mr r27, r3
/* 801CCF6C 001C9EAC  7C 9C 23 78 */	mr r28, r4
/* 801CCF70 001C9EB0  7C DF 33 78 */	mr r31, r6
/* 801CCF74 001C9EB4  3B C5 03 90 */	addi r30, r5, lbl_80480390@l
/* 801CCF78 001C9EB8  38 60 00 00 */	li r3, 0
/* 801CCF7C 001C9EBC  41 80 00 14 */	blt .L_801CCF90
/* 801CCF80 001C9EC0  80 1B 00 18 */	lwz r0, 0x18(r27)
/* 801CCF84 001C9EC4  7C 1D 00 00 */	cmpw r29, r0
/* 801CCF88 001C9EC8  40 80 00 08 */	bge .L_801CCF90
/* 801CCF8C 001C9ECC  38 60 00 01 */	li r3, 1
.L_801CCF90:
/* 801CCF90 001C9ED0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CCF94 001C9ED4  40 82 00 18 */	bne .L_801CCFAC
/* 801CCF98 001C9ED8  38 7E 00 00 */	addi r3, r30, 0
/* 801CCF9C 001C9EDC  38 BE 00 40 */	addi r5, r30, 0x40
/* 801CCFA0 001C9EE0  38 80 02 BE */	li r4, 0x2be
/* 801CCFA4 001C9EE4  4C C6 31 82 */	crclr 6
/* 801CCFA8 001C9EE8  4B E5 D6 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CCFAC:
/* 801CCFAC 001C9EEC  7F 83 E3 78 */	mr r3, r28
/* 801CCFB0 001C9EF0  38 80 00 00 */	li r4, 0
/* 801CCFB4 001C9EF4  4B E5 60 65 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801CCFB8 001C9EF8  7F E4 FB 78 */	mr r4, r31
/* 801CCFBC 001C9EFC  4B EA 28 D9 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 801CCFC0 001C9F00  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CCFC4 001C9F04  40 82 00 18 */	bne .L_801CCFDC
/* 801CCFC8 001C9F08  38 7E 00 00 */	addi r3, r30, 0
/* 801CCFCC 001C9F0C  38 BE 00 58 */	addi r5, r30, 0x58
/* 801CCFD0 001C9F10  38 80 02 C4 */	li r4, 0x2c4
/* 801CCFD4 001C9F14  4C C6 31 82 */	crclr 6
/* 801CCFD8 001C9F18  4B E5 D6 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CCFDC:
/* 801CCFDC 001C9F1C  80 7B 00 1C */	lwz r3, 0x1c(r27)
/* 801CCFE0 001C9F20  57 A0 10 3A */	slwi r0, r29, 2
/* 801CCFE4 001C9F24  7F E3 01 2E */	stwx r31, r3, r0
/* 801CCFE8 001C9F28  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801CCFEC 001C9F2C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CCFF0 001C9F30  7C 08 03 A6 */	mtlr r0
/* 801CCFF4 001C9F34  38 21 00 20 */	addi r1, r1, 0x20
/* 801CCFF8 001C9F38  4E 80 00 20 */	blr 

.global loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
loadAnimMgr__Q24Game11BaseItemMgrFP13JKRFileLoaderPc:
/* 801CCFFC 001C9F3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD000 001C9F40  7C 08 02 A6 */	mflr r0
/* 801CD004 001C9F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD008 001C9F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD00C 001C9F4C  7C BF 2B 78 */	mr r31, r5
/* 801CD010 001C9F50  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD014 001C9F54  7C 7E 1B 78 */	mr r30, r3
/* 801CD018 001C9F58  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 801CD01C 001C9F5C  80 C3 00 2C */	lwz r6, 0x2c(r3)
/* 801CD020 001C9F60  7C 83 23 78 */	mr r3, r4
/* 801CD024 001C9F64  80 A7 00 00 */	lwz r5, 0(r7)
/* 801CD028 001C9F68  7F E4 FB 78 */	mr r4, r31
/* 801CD02C 001C9F6C  38 E0 00 00 */	li r7, 0
/* 801CD030 001C9F70  48 27 0D 2D */	bl load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
/* 801CD034 001C9F74  90 7E 00 20 */	stw r3, 0x20(r30)
/* 801CD038 001C9F78  80 1E 00 20 */	lwz r0, 0x20(r30)
/* 801CD03C 001C9F7C  28 00 00 00 */	cmplwi r0, 0
/* 801CD040 001C9F80  40 82 00 24 */	bne .L_801CD064
/* 801CD044 001C9F84  3C 60 80 48 */	lis r3, lbl_80480390@ha
/* 801CD048 001C9F88  3C 80 80 48 */	lis r4, lbl_804803F8@ha
/* 801CD04C 001C9F8C  38 A4 03 F8 */	addi r5, r4, lbl_804803F8@l
/* 801CD050 001C9F90  7F E6 FB 78 */	mr r6, r31
/* 801CD054 001C9F94  38 63 03 90 */	addi r3, r3, lbl_80480390@l
/* 801CD058 001C9F98  38 80 02 F1 */	li r4, 0x2f1
/* 801CD05C 001C9F9C  4C C6 31 82 */	crclr 6
/* 801CD060 001C9FA0  4B E5 D5 E1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CD064:
/* 801CD064 001C9FA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD068 001C9FA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD06C 001C9FAC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD070 001C9FB0  7C 08 03 A6 */	mtlr r0
/* 801CD074 001C9FB4  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD078 001C9FB8  4E 80 00 20 */	blr 

.global loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
loadCollision__Q24Game11BaseItemMgrFP13JKRFileLoaderPc:
/* 801CD07C 001C9FBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD080 001C9FC0  7C 08 02 A6 */	mflr r0
/* 801CD084 001C9FC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD088 001C9FC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD08C 001C9FCC  7C 7F 1B 78 */	mr r31, r3
/* 801CD090 001C9FD0  7C 83 23 78 */	mr r3, r4
/* 801CD094 001C9FD4  7C A4 2B 78 */	mr r4, r5
/* 801CD098 001C9FD8  4B F6 B8 AD */	bl load__15CollPartFactoryFP13JKRFileLoaderPc
/* 801CD09C 001C9FDC  90 7F 00 24 */	stw r3, 0x24(r31)
/* 801CD0A0 001C9FE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD0A4 001C9FE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD0A8 001C9FE8  7C 08 03 A6 */	mtlr r0
/* 801CD0AC 001C9FEC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD0B0 001C9FF0  4E 80 00 20 */	blr 

.global generatorNewItemParm__Q24Game11BaseItemMgrFv
generatorNewItemParm__Q24Game11BaseItemMgrFv:
/* 801CD0B4 001C9FF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD0B8 001C9FF8  7C 08 02 A6 */	mflr r0
/* 801CD0BC 001C9FFC  38 60 00 04 */	li r3, 4
/* 801CD0C0 001CA000  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD0C4 001CA004  4B E5 6D E1 */	bl __nw__FUl
/* 801CD0C8 001CA008  28 03 00 00 */	cmplwi r3, 0
/* 801CD0CC 001CA00C  41 82 00 10 */	beq .L_801CD0DC
/* 801CD0D0 001CA010  3C 80 80 4B */	lis r4, __vt__Q24Game11GenItemParm@ha
/* 801CD0D4 001CA014  38 04 26 24 */	addi r0, r4, __vt__Q24Game11GenItemParm@l
/* 801CD0D8 001CA018  90 03 00 00 */	stw r0, 0(r3)
.L_801CD0DC:
/* 801CD0DC 001CA01C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD0E0 001CA020  7C 08 03 A6 */	mtlr r0
/* 801CD0E4 001CA024  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD0E8 001CA028  4E 80 00 20 */	blr 

.global generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm
generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm:
/* 801CD0EC 001CA02C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD0F0 001CA030  7C 08 02 A6 */	mflr r0
/* 801CD0F4 001CA034  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD0F8 001CA038  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD0FC 001CA03C  7C 7F 1B 78 */	mr r31, r3
/* 801CD100 001CA040  7C 83 23 78 */	mr r3, r4
/* 801CD104 001CA044  81 84 00 00 */	lwz r12, 0(r4)
/* 801CD108 001CA048  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CD10C 001CA04C  7D 89 03 A6 */	mtctr r12
/* 801CD110 001CA050  4E 80 04 21 */	bctrl 
/* 801CD114 001CA054  2C 03 00 00 */	cmpwi r3, 0
/* 801CD118 001CA058  41 80 00 20 */	blt .L_801CD138
/* 801CD11C 001CA05C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 801CD120 001CA060  7C 03 00 00 */	cmpw r3, r0
/* 801CD124 001CA064  40 80 00 14 */	bge .L_801CD138
/* 801CD128 001CA068  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 801CD12C 001CA06C  54 60 10 3A */	slwi r0, r3, 2
/* 801CD130 001CA070  7C 64 00 2E */	lwzx r3, r4, r0
/* 801CD134 001CA074  48 00 00 08 */	b .L_801CD13C
.L_801CD138:
/* 801CD138 001CA078  38 60 00 00 */	li r3, 0
.L_801CD13C:
/* 801CD13C 001CA07C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD140 001CA080  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD144 001CA084  7C 08 03 A6 */	mtlr r0
/* 801CD148 001CA088  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD14C 001CA08C  4E 80 00 20 */	blr 

.global getModelData__Q24Game11BaseItemMgrFi
getModelData__Q24Game11BaseItemMgrFi:
/* 801CD150 001CA090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD154 001CA094  7C 08 02 A6 */	mflr r0
/* 801CD158 001CA098  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD15C 001CA09C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD160 001CA0A0  7C 9F 23 79 */	or. r31, r4, r4
/* 801CD164 001CA0A4  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD168 001CA0A8  7C 7E 1B 78 */	mr r30, r3
/* 801CD16C 001CA0AC  38 60 00 00 */	li r3, 0
/* 801CD170 001CA0B0  41 80 00 14 */	blt .L_801CD184
/* 801CD174 001CA0B4  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 801CD178 001CA0B8  7C 1F 00 00 */	cmpw r31, r0
/* 801CD17C 001CA0BC  40 80 00 08 */	bge .L_801CD184
/* 801CD180 001CA0C0  38 60 00 01 */	li r3, 1
.L_801CD184:
/* 801CD184 001CA0C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CD188 001CA0C8  40 82 00 20 */	bne .L_801CD1A8
/* 801CD18C 001CA0CC  3C 60 80 48 */	lis r3, lbl_80480390@ha
/* 801CD190 001CA0D0  3C A0 80 48 */	lis r5, lbl_804803D0@ha
/* 801CD194 001CA0D4  38 63 03 90 */	addi r3, r3, lbl_80480390@l
/* 801CD198 001CA0D8  38 80 03 18 */	li r4, 0x318
/* 801CD19C 001CA0DC  38 A5 03 D0 */	addi r5, r5, lbl_804803D0@l
/* 801CD1A0 001CA0E0  4C C6 31 82 */	crclr 6
/* 801CD1A4 001CA0E4  4B E5 D4 9D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801CD1A8:
/* 801CD1A8 001CA0E8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 801CD1AC 001CA0EC  57 E0 10 3A */	slwi r0, r31, 2
/* 801CD1B0 001CA0F0  7C 63 00 2E */	lwzx r3, r3, r0
/* 801CD1B4 001CA0F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD1B8 001CA0F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD1BC 001CA0FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD1C0 001CA100  7C 08 03 A6 */	mtlr r0
/* 801CD1C4 001CA104  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD1C8 001CA108  4E 80 00 20 */	blr 

.global openTextArc__Q24Game11BaseItemMgrFPc
openTextArc__Q24Game11BaseItemMgrFPc:
/* 801CD1CC 001CA10C  94 21 FD C0 */	stwu r1, -0x240(r1)
/* 801CD1D0 001CA110  7C 08 02 A6 */	mflr r0
/* 801CD1D4 001CA114  7C 86 23 78 */	mr r6, r4
/* 801CD1D8 001CA118  38 82 B2 C8 */	addi r4, r2, lbl_80519628@sda21
/* 801CD1DC 001CA11C  90 01 02 44 */	stw r0, 0x244(r1)
/* 801CD1E0 001CA120  93 E1 02 3C */	stw r31, 0x23c(r1)
/* 801CD1E4 001CA124  7C 7F 1B 78 */	mr r31, r3
/* 801CD1E8 001CA128  80 A3 00 28 */	lwz r5, 0x28(r3)
/* 801CD1EC 001CA12C  38 61 00 38 */	addi r3, r1, 0x38
/* 801CD1F0 001CA130  4C C6 31 82 */	crclr 6
/* 801CD1F4 001CA134  4B EF A2 45 */	bl sprintf
/* 801CD1F8 001CA138  38 61 00 08 */	addi r3, r1, 8
/* 801CD1FC 001CA13C  38 81 00 38 */	addi r4, r1, 0x38
/* 801CD200 001CA140  48 27 F3 D9 */	bl __ct__Q212LoadResource3ArgFPCc
/* 801CD204 001CA144  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 801CD208 001CA148  38 00 00 02 */	li r0, 2
/* 801CD20C 001CA14C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD210 001CA150  38 81 00 08 */	addi r4, r1, 8
/* 801CD214 001CA154  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 801CD218 001CA158  90 A1 00 20 */	stw r5, 0x20(r1)
/* 801CD21C 001CA15C  48 27 F4 F9 */	bl mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 801CD220 001CA160  90 7F 00 0C */	stw r3, 0xc(r31)
/* 801CD224 001CA164  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 801CD228 001CA168  28 03 00 00 */	cmplwi r3, 0
/* 801CD22C 001CA16C  41 82 00 0C */	beq .L_801CD238
/* 801CD230 001CA170  80 63 00 34 */	lwz r3, 0x34(r3)
/* 801CD234 001CA174  48 00 00 08 */	b .L_801CD23C
.L_801CD238:
/* 801CD238 001CA178  38 60 00 00 */	li r3, 0
.L_801CD23C:
/* 801CD23C 001CA17C  80 01 02 44 */	lwz r0, 0x244(r1)
/* 801CD240 001CA180  83 E1 02 3C */	lwz r31, 0x23c(r1)
/* 801CD244 001CA184  7C 08 03 A6 */	mtlr r0
/* 801CD248 001CA188  38 21 02 40 */	addi r1, r1, 0x240
/* 801CD24C 001CA18C  4E 80 00 20 */	blr 

.global closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive:
/* 801CD250 001CA190  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD254 001CA194  7C 08 02 A6 */	mflr r0
/* 801CD258 001CA198  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD25C 001CA19C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD260 001CA1A0  7C 7F 1B 78 */	mr r31, r3
/* 801CD264 001CA1A4  80 63 00 0C */	lwz r3, 0xc(r3)
/* 801CD268 001CA1A8  28 03 00 00 */	cmplwi r3, 0
/* 801CD26C 001CA1AC  41 82 00 18 */	beq .L_801CD284
/* 801CD270 001CA1B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD274 001CA1B4  38 80 00 01 */	li r4, 1
/* 801CD278 001CA1B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CD27C 001CA1BC  7D 89 03 A6 */	mtctr r12
/* 801CD280 001CA1C0  4E 80 04 21 */	bctrl 
.L_801CD284:
/* 801CD284 001CA1C4  38 00 00 00 */	li r0, 0
/* 801CD288 001CA1C8  90 1F 00 0C */	stw r0, 0xc(r31)
/* 801CD28C 001CA1CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD290 001CA1D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD294 001CA1D4  7C 08 03 A6 */	mtlr r0
/* 801CD298 001CA1D8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD29C 001CA1DC  4E 80 00 20 */	blr 

.global loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
loadPlatform__Q24Game11BaseItemMgrFP13JKRFileLoaderPc:
/* 801CD2A0 001CA1E0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD2A4 001CA1E4  7C 08 02 A6 */	mflr r0
/* 801CD2A8 001CA1E8  38 60 00 1C */	li r3, 0x1c
/* 801CD2AC 001CA1EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD2B0 001CA1F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CD2B4 001CA1F4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CD2B8 001CA1F8  7C BE 2B 78 */	mr r30, r5
/* 801CD2BC 001CA1FC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CD2C0 001CA200  7C 9D 23 78 */	mr r29, r4
/* 801CD2C4 001CA204  4B E5 6B E1 */	bl __nw__FUl
/* 801CD2C8 001CA208  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CD2CC 001CA20C  41 82 00 0C */	beq .L_801CD2D8
/* 801CD2D0 001CA210  4B F6 63 D9 */	bl __ct__8PlatformFv
/* 801CD2D4 001CA214  7C 7F 1B 78 */	mr r31, r3
.L_801CD2D8:
/* 801CD2D8 001CA218  7F E3 FB 78 */	mr r3, r31
/* 801CD2DC 001CA21C  7F A4 EB 78 */	mr r4, r29
/* 801CD2E0 001CA220  7F C5 F3 78 */	mr r5, r30
/* 801CD2E4 001CA224  4B F6 64 D1 */	bl load__8PlatformFP13JKRFileLoaderPc
/* 801CD2E8 001CA228  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CD2EC 001CA22C  7F E3 FB 78 */	mr r3, r31
/* 801CD2F0 001CA230  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CD2F4 001CA234  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CD2F8 001CA238  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CD2FC 001CA23C  7C 08 03 A6 */	mtlr r0
/* 801CD300 001CA240  38 21 00 20 */	addi r1, r1, 0x20
/* 801CD304 001CA244  4E 80 00 20 */	blr 

.global loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc
loadPlatAttacher__Q24Game11BaseItemMgrFP13JKRFileLoaderPc:
/* 801CD308 001CA248  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 801CD30C 001CA24C  7C 08 02 A6 */	mflr r0
/* 801CD310 001CA250  38 60 00 0C */	li r3, 0xc
/* 801CD314 001CA254  90 01 04 44 */	stw r0, 0x444(r1)
/* 801CD318 001CA258  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 801CD31C 001CA25C  93 C1 04 38 */	stw r30, 0x438(r1)
/* 801CD320 001CA260  7C BE 2B 78 */	mr r30, r5
/* 801CD324 001CA264  93 A1 04 34 */	stw r29, 0x434(r1)
/* 801CD328 001CA268  7C 9D 23 78 */	mr r29, r4
/* 801CD32C 001CA26C  4B E5 6B 79 */	bl __nw__FUl
/* 801CD330 001CA270  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CD334 001CA274  41 82 00 0C */	beq .L_801CD340
/* 801CD338 001CA278  4B F6 65 29 */	bl __ct__12PlatAttacherFv
/* 801CD33C 001CA27C  7C 7F 1B 78 */	mr r31, r3
.L_801CD340:
/* 801CD340 001CA280  7F C3 F3 78 */	mr r3, r30
/* 801CD344 001CA284  7F A4 EB 78 */	mr r4, r29
/* 801CD348 001CA288  4B E5 5C D1 */	bl getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
/* 801CD34C 001CA28C  28 03 00 00 */	cmplwi r3, 0
/* 801CD350 001CA290  40 82 00 28 */	bne .L_801CD378
/* 801CD354 001CA294  3C 60 80 48 */	lis r3, lbl_80480390@ha
/* 801CD358 001CA298  3C 80 80 48 */	lis r4, lbl_80480418@ha
/* 801CD35C 001CA29C  38 A4 04 18 */	addi r5, r4, lbl_80480418@l
/* 801CD360 001CA2A0  7F C6 F3 78 */	mr r6, r30
/* 801CD364 001CA2A4  38 63 03 90 */	addi r3, r3, lbl_80480390@l
/* 801CD368 001CA2A8  38 80 04 04 */	li r4, 0x404
/* 801CD36C 001CA2AC  4C C6 31 82 */	crclr 6
/* 801CD370 001CA2B0  4B E5 D2 D1 */	bl panic_f__12JUTExceptionFPCciPCce
/* 801CD374 001CA2B4  48 00 00 34 */	b .L_801CD3A8
.L_801CD378:
/* 801CD378 001CA2B8  7C 64 1B 78 */	mr r4, r3
/* 801CD37C 001CA2BC  38 61 00 08 */	addi r3, r1, 8
/* 801CD380 001CA2C0  38 A0 FF FF */	li r5, -1
/* 801CD384 001CA2C4  48 24 85 75 */	bl __ct__9RamStreamFPvi
/* 801CD388 001CA2C8  38 00 00 00 */	li r0, 0
/* 801CD38C 001CA2CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD390 001CA2D0  48 00 00 08 */	b .L_801CD398
/* 801CD394 001CA2D4  90 01 04 1C */	stw r0, 0x41c(r1)
.L_801CD398:
/* 801CD398 001CA2D8  7F E3 FB 78 */	mr r3, r31
/* 801CD39C 001CA2DC  38 81 00 08 */	addi r4, r1, 8
/* 801CD3A0 001CA2E0  4B F6 65 99 */	bl read__12PlatAttacherFR6Stream
/* 801CD3A4 001CA2E4  7F E3 FB 78 */	mr r3, r31
.L_801CD3A8:
/* 801CD3A8 001CA2E8  80 01 04 44 */	lwz r0, 0x444(r1)
/* 801CD3AC 001CA2EC  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 801CD3B0 001CA2F0  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 801CD3B4 001CA2F4  83 A1 04 34 */	lwz r29, 0x434(r1)
/* 801CD3B8 001CA2F8  7C 08 03 A6 */	mtlr r0
/* 801CD3BC 001CA2FC  38 21 04 40 */	addi r1, r1, 0x440
/* 801CD3C0 001CA300  4E 80 00 20 */	blr 

.global updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi
updateUseList__Q24Game11BaseItemMgrFPQ24Game11GenItemParmi:
/* 801CD3C4 001CA304  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD3C8 001CA308  7C 08 02 A6 */	mflr r0
/* 801CD3CC 001CA30C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD3D0 001CA310  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD3D4 001CA314  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 801CD3D8 001CA318  7D 89 03 A6 */	mtctr r12
/* 801CD3DC 001CA31C  4E 80 04 21 */	bctrl 
/* 801CD3E0 001CA320  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD3E4 001CA324  7C 08 03 A6 */	mtlr r0
/* 801CD3E8 001CA328  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD3EC 001CA32C  4E 80 00 20 */	blr 

.global loadResources__Q24Game11BaseItemMgrFv
loadResources__Q24Game11BaseItemMgrFv:
/* 801CD3F0 001CA330  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD3F4 001CA334  7C 08 02 A6 */	mflr r0
/* 801CD3F8 001CA338  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD3FC 001CA33C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD400 001CA340  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801CD404 001CA344  7D 89 03 A6 */	mtctr r12
/* 801CD408 001CA348  4E 80 04 21 */	bctrl 
/* 801CD40C 001CA34C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD410 001CA350  7C 08 03 A6 */	mtlr r0
/* 801CD414 001CA354  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD418 001CA358  4E 80 00 20 */	blr 

.global setupSoundViewerAndBas__Q24Game11BaseItemMgrFv
setupSoundViewerAndBas__Q24Game11BaseItemMgrFv:
/* 801CD41C 001CA35C  4E 80 00 20 */	blr 

.global __ct__Q24Game12TNodeItemMgrFv
__ct__Q24Game12TNodeItemMgrFv:
/* 801CD420 001CA360  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD424 001CA364  7C 08 02 A6 */	mflr r0
/* 801CD428 001CA368  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD42C 001CA36C  7C 80 07 35 */	extsh. r0, r4
/* 801CD430 001CA370  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CD434 001CA374  7C 7F 1B 78 */	mr r31, r3
/* 801CD438 001CA378  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CD43C 001CA37C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CD440 001CA380  41 82 00 0C */	beq .L_801CD44C
/* 801CD444 001CA384  38 1F 00 88 */	addi r0, r31, 0x88
/* 801CD448 001CA388  90 1F 00 04 */	stw r0, 4(r31)
.L_801CD44C:
/* 801CD44C 001CA38C  3C 60 80 4B */	lis r3, __vt__16GenericObjectMgr@ha
/* 801CD450 001CA390  3C 80 80 4B */	lis r4, __vt__Q24Game11BaseItemMgr@ha
/* 801CD454 001CA394  38 03 B5 F0 */	addi r0, r3, __vt__16GenericObjectMgr@l
/* 801CD458 001CA398  3C 60 80 48 */	lis r3, lbl_804803DC@ha
/* 801CD45C 001CA39C  90 1F 00 00 */	stw r0, 0(r31)
/* 801CD460 001CA3A0  38 04 73 74 */	addi r0, r4, __vt__Q24Game11BaseItemMgr@l
/* 801CD464 001CA3A4  3B BF 00 30 */	addi r29, r31, 0x30
/* 801CD468 001CA3A8  38 80 00 00 */	li r4, 0
/* 801CD46C 001CA3AC  90 1F 00 00 */	stw r0, 0(r31)
/* 801CD470 001CA3B0  38 03 03 DC */	addi r0, r3, lbl_804803DC@l
/* 801CD474 001CA3B4  7F A3 EB 78 */	mr r3, r29
/* 801CD478 001CA3B8  90 9F 00 20 */	stw r4, 0x20(r31)
/* 801CD47C 001CA3BC  90 9F 00 24 */	stw r4, 0x24(r31)
/* 801CD480 001CA3C0  90 9F 00 28 */	stw r4, 0x28(r31)
/* 801CD484 001CA3C4  90 9F 00 2C */	stw r4, 0x2c(r31)
/* 801CD488 001CA3C8  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801CD48C 001CA3CC  90 1F 00 08 */	stw r0, 8(r31)
/* 801CD490 001CA3D0  90 9F 00 0C */	stw r4, 0xc(r31)
/* 801CD494 001CA3D4  90 9F 00 10 */	stw r4, 0x10(r31)
/* 801CD498 001CA3D8  90 9F 00 14 */	stw r4, 0x14(r31)
/* 801CD49C 001CA3DC  48 24 3E F5 */	bl __ct__5CNodeFv
/* 801CD4A0 001CA3E0  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 801CD4A4 001CA3E4  38 A0 00 00 */	li r5, 0
/* 801CD4A8 001CA3E8  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801CD4AC 001CA3EC  3B DF 00 4C */	addi r30, r31, 0x4c
/* 801CD4B0 001CA3F0  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CD4B4 001CA3F4  90 1D 00 00 */	stw r0, 0(r29)
/* 801CD4B8 001CA3F8  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CD4BC 001CA3FC  90 1D 00 00 */	stw r0, 0(r29)
/* 801CD4C0 001CA400  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801CD4C4 001CA404  38 83 71 80 */	addi r4, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801CD4C8 001CA408  98 BD 00 18 */	stb r5, 0x18(r29)
/* 801CD4CC 001CA40C  38 04 00 74 */	addi r0, r4, 0x74
/* 801CD4D0 001CA410  7F C3 F3 78 */	mr r3, r30
/* 801CD4D4 001CA414  90 9F 00 00 */	stw r4, 0(r31)
/* 801CD4D8 001CA418  90 1F 00 30 */	stw r0, 0x30(r31)
/* 801CD4DC 001CA41C  48 24 3E B5 */	bl __ct__5CNodeFv
/* 801CD4E0 001CA420  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CD4E4 001CA424  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CD4E8 001CA428  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CD4EC 001CA42C  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801CD4F0 001CA430  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD4F4 001CA434  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CD4F8 001CA438  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801CD4FC 001CA43C  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801CD500 001CA440  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD504 001CA444  38 00 00 00 */	li r0, 0
/* 801CD508 001CA448  38 C4 72 CC */	addi r6, r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801CD50C 001CA44C  38 83 72 4C */	addi r4, r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801CD510 001CA450  98 1E 00 18 */	stb r0, 0x18(r30)
/* 801CD514 001CA454  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801CD518 001CA458  3B BE 00 20 */	addi r29, r30, 0x20
/* 801CD51C 001CA45C  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801CD520 001CA460  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CD524 001CA464  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CD528 001CA468  7F A3 EB 78 */	mr r3, r29
/* 801CD52C 001CA46C  90 DE 00 00 */	stw r6, 0(r30)
/* 801CD530 001CA470  90 BE 00 1C */	stw r5, 0x1c(r30)
/* 801CD534 001CA474  90 9E 00 00 */	stw r4, 0(r30)
/* 801CD538 001CA478  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CD53C 001CA47C  48 24 3E 55 */	bl __ct__5CNodeFv
/* 801CD540 001CA480  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CD544 001CA484  7F E3 FB 78 */	mr r3, r31
/* 801CD548 001CA488  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CD54C 001CA48C  90 1D 00 00 */	stw r0, 0(r29)
/* 801CD550 001CA490  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CD554 001CA494  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CD558 001CA498  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CD55C 001CA49C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CD560 001CA4A0  7C 08 03 A6 */	mtlr r0
/* 801CD564 001CA4A4  38 21 00 20 */	addi r1, r1, 0x20
/* 801CD568 001CA4A8  4E 80 00 20 */	blr 

.global "__dt__31NodeObjectMgr<Q24Game8BaseItem>Fv"
"__dt__31NodeObjectMgr<Q24Game8BaseItem>Fv":
/* 801CD56C 001CA4AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD570 001CA4B0  7C 08 02 A6 */	mflr r0
/* 801CD574 001CA4B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD578 001CA4B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD57C 001CA4BC  7C 9F 23 78 */	mr r31, r4
/* 801CD580 001CA4C0  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD584 001CA4C4  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CD588 001CA4C8  41 82 00 90 */	beq .L_801CD618
/* 801CD58C 001CA4CC  3C 60 80 4B */	lis r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801CD590 001CA4D0  34 1E 00 20 */	addic. r0, r30, 0x20
/* 801CD594 001CA4D4  38 63 72 4C */	addi r3, r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801CD598 001CA4D8  90 7E 00 00 */	stw r3, 0(r30)
/* 801CD59C 001CA4DC  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CD5A0 001CA4E0  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CD5A4 001CA4E4  41 82 00 1C */	beq .L_801CD5C0
/* 801CD5A8 001CA4E8  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CD5AC 001CA4EC  38 7E 00 20 */	addi r3, r30, 0x20
/* 801CD5B0 001CA4F0  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CD5B4 001CA4F4  38 80 00 00 */	li r4, 0
/* 801CD5B8 001CA4F8  90 1E 00 20 */	stw r0, 0x20(r30)
/* 801CD5BC 001CA4FC  48 24 3F CD */	bl __dt__5CNodeFv
.L_801CD5C0:
/* 801CD5C0 001CA500  28 1E 00 00 */	cmplwi r30, 0
/* 801CD5C4 001CA504  41 82 00 44 */	beq .L_801CD608
/* 801CD5C8 001CA508  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801CD5CC 001CA50C  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801CD5D0 001CA510  90 7E 00 00 */	stw r3, 0(r30)
/* 801CD5D4 001CA514  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CD5D8 001CA518  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CD5DC 001CA51C  41 82 00 2C */	beq .L_801CD608
/* 801CD5E0 001CA520  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CD5E4 001CA524  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CD5E8 001CA528  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD5EC 001CA52C  41 82 00 1C */	beq .L_801CD608
/* 801CD5F0 001CA530  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CD5F4 001CA534  7F C3 F3 78 */	mr r3, r30
/* 801CD5F8 001CA538  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CD5FC 001CA53C  38 80 00 00 */	li r4, 0
/* 801CD600 001CA540  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD604 001CA544  48 24 3F 85 */	bl __dt__5CNodeFv
.L_801CD608:
/* 801CD608 001CA548  7F E0 07 35 */	extsh. r0, r31
/* 801CD60C 001CA54C  40 81 00 0C */	ble .L_801CD618
/* 801CD610 001CA550  7F C3 F3 78 */	mr r3, r30
/* 801CD614 001CA554  4B E5 6A A1 */	bl __dl__FPv
.L_801CD618:
/* 801CD618 001CA558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD61C 001CA55C  7F C3 F3 78 */	mr r3, r30
/* 801CD620 001CA560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD624 001CA564  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD628 001CA568  7C 08 03 A6 */	mtlr r0
/* 801CD62C 001CA56C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD630 001CA570  4E 80 00 20 */	blr 

.global "__dt__29TObjectNode<Q24Game8BaseItem>Fv"
"__dt__29TObjectNode<Q24Game8BaseItem>Fv":
/* 801CD634 001CA574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD638 001CA578  7C 08 02 A6 */	mflr r0
/* 801CD63C 001CA57C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD640 001CA580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD644 001CA584  7C 9F 23 78 */	mr r31, r4
/* 801CD648 001CA588  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD64C 001CA58C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CD650 001CA590  41 82 00 28 */	beq .L_801CD678
/* 801CD654 001CA594  3C A0 80 4B */	lis r5, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CD658 001CA598  38 80 00 00 */	li r4, 0
/* 801CD65C 001CA59C  38 05 72 3C */	addi r0, r5, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CD660 001CA5A0  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD664 001CA5A4  48 24 3F 25 */	bl __dt__5CNodeFv
/* 801CD668 001CA5A8  7F E0 07 35 */	extsh. r0, r31
/* 801CD66C 001CA5AC  40 81 00 0C */	ble .L_801CD678
/* 801CD670 001CA5B0  7F C3 F3 78 */	mr r3, r30
/* 801CD674 001CA5B4  4B E5 6A 41 */	bl __dl__FPv
.L_801CD678:
/* 801CD678 001CA5B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD67C 001CA5BC  7F C3 F3 78 */	mr r3, r30
/* 801CD680 001CA5C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD684 001CA5C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD688 001CA5C8  7C 08 03 A6 */	mtlr r0
/* 801CD68C 001CA5CC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD690 001CA5D0  4E 80 00 20 */	blr 

.global "__dt__27ObjectMgr<Q24Game8BaseItem>Fv"
"__dt__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801CD694 001CA5D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD698 001CA5D8  7C 08 02 A6 */	mflr r0
/* 801CD69C 001CA5DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD6A0 001CA5E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD6A4 001CA5E4  7C 9F 23 78 */	mr r31, r4
/* 801CD6A8 001CA5E8  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD6AC 001CA5EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CD6B0 001CA5F0  41 82 00 50 */	beq .L_801CD700
/* 801CD6B4 001CA5F4  3C 80 80 4B */	lis r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801CD6B8 001CA5F8  38 84 72 CC */	addi r4, r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801CD6BC 001CA5FC  90 9E 00 00 */	stw r4, 0(r30)
/* 801CD6C0 001CA600  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CD6C4 001CA604  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 801CD6C8 001CA608  41 82 00 28 */	beq .L_801CD6F0
/* 801CD6CC 001CA60C  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CD6D0 001CA610  38 04 73 48 */	addi r0, r4, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CD6D4 001CA614  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD6D8 001CA618  41 82 00 18 */	beq .L_801CD6F0
/* 801CD6DC 001CA61C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801CD6E0 001CA620  38 80 00 00 */	li r4, 0
/* 801CD6E4 001CA624  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801CD6E8 001CA628  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD6EC 001CA62C  48 24 3E 9D */	bl __dt__5CNodeFv
.L_801CD6F0:
/* 801CD6F0 001CA630  7F E0 07 35 */	extsh. r0, r31
/* 801CD6F4 001CA634  40 81 00 0C */	ble .L_801CD700
/* 801CD6F8 001CA638  7F C3 F3 78 */	mr r3, r30
/* 801CD6FC 001CA63C  4B E5 69 B9 */	bl __dl__FPv
.L_801CD700:
/* 801CD700 001CA640  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD704 001CA644  7F C3 F3 78 */	mr r3, r30
/* 801CD708 001CA648  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD70C 001CA64C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD710 001CA650  7C 08 03 A6 */	mtlr r0
/* 801CD714 001CA654  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD718 001CA658  4E 80 00 20 */	blr 

.global "__dt__27Container<Q24Game8BaseItem>Fv"
"__dt__27Container<Q24Game8BaseItem>Fv":
/* 801CD71C 001CA65C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CD720 001CA660  7C 08 02 A6 */	mflr r0
/* 801CD724 001CA664  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD728 001CA668  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CD72C 001CA66C  7C 9F 23 78 */	mr r31, r4
/* 801CD730 001CA670  93 C1 00 08 */	stw r30, 8(r1)
/* 801CD734 001CA674  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CD738 001CA678  41 82 00 38 */	beq .L_801CD770
/* 801CD73C 001CA67C  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CD740 001CA680  38 04 73 48 */	addi r0, r4, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CD744 001CA684  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD748 001CA688  41 82 00 18 */	beq .L_801CD760
/* 801CD74C 001CA68C  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801CD750 001CA690  38 80 00 00 */	li r4, 0
/* 801CD754 001CA694  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801CD758 001CA698  90 1E 00 00 */	stw r0, 0(r30)
/* 801CD75C 001CA69C  48 24 3E 2D */	bl __dt__5CNodeFv
.L_801CD760:
/* 801CD760 001CA6A0  7F E0 07 35 */	extsh. r0, r31
/* 801CD764 001CA6A4  40 81 00 0C */	ble .L_801CD770
/* 801CD768 001CA6A8  7F C3 F3 78 */	mr r3, r30
/* 801CD76C 001CA6AC  4B E5 69 49 */	bl __dl__FPv
.L_801CD770:
/* 801CD770 001CA6B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD774 001CA6B4  7F C3 F3 78 */	mr r3, r30
/* 801CD778 001CA6B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CD77C 001CA6BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CD780 001CA6C0  7C 08 03 A6 */	mtlr r0
/* 801CD784 001CA6C4  38 21 00 10 */	addi r1, r1, 0x10
/* 801CD788 001CA6C8  4E 80 00 20 */	blr 

.global birth__Q24Game12TNodeItemMgrFv
birth__Q24Game12TNodeItemMgrFv:
/* 801CD78C 001CA6CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD790 001CA6D0  7C 08 02 A6 */	mflr r0
/* 801CD794 001CA6D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD798 001CA6D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CD79C 001CA6DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CD7A0 001CA6E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CD7A4 001CA6E4  7C 7D 1B 78 */	mr r29, r3
/* 801CD7A8 001CA6E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD7AC 001CA6EC  81 8C 00 A0 */	lwz r12, 0xa0(r12)
/* 801CD7B0 001CA6F0  7D 89 03 A6 */	mtctr r12
/* 801CD7B4 001CA6F4  4E 80 04 21 */	bctrl 
/* 801CD7B8 001CA6F8  7C 60 1B 78 */	mr r0, r3
/* 801CD7BC 001CA6FC  38 60 00 1C */	li r3, 0x1c
/* 801CD7C0 001CA700  7C 1E 03 78 */	mr r30, r0
/* 801CD7C4 001CA704  93 BE 01 80 */	stw r29, 0x180(r30)
/* 801CD7C8 001CA708  4B E5 66 DD */	bl __nw__FUl
/* 801CD7CC 001CA70C  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CD7D0 001CA710  41 82 00 14 */	beq .L_801CD7E4
/* 801CD7D4 001CA714  48 24 3B BD */	bl __ct__5CNodeFv
/* 801CD7D8 001CA718  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CD7DC 001CA71C  38 03 72 3C */	addi r0, r3, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CD7E0 001CA720  90 1F 00 00 */	stw r0, 0(r31)
.L_801CD7E4:
/* 801CD7E4 001CA724  93 DF 00 18 */	stw r30, 0x18(r31)
/* 801CD7E8 001CA728  7F E4 FB 78 */	mr r4, r31
/* 801CD7EC 001CA72C  38 7D 00 6C */	addi r3, r29, 0x6c
/* 801CD7F0 001CA730  48 24 3C 19 */	bl add__5CNodeFP5CNode
/* 801CD7F4 001CA734  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801CD7F8 001CA738  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD7FC 001CA73C  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801CD800 001CA740  7D 89 03 A6 */	mtctr r12
/* 801CD804 001CA744  4E 80 04 21 */	bctrl 
/* 801CD808 001CA748  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CD80C 001CA74C  7F C3 F3 78 */	mr r3, r30
/* 801CD810 001CA750  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CD814 001CA754  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CD818 001CA758  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CD81C 001CA75C  7C 08 03 A6 */	mtlr r0
/* 801CD820 001CA760  38 21 00 20 */	addi r1, r1, 0x20
/* 801CD824 001CA764  4E 80 00 20 */	blr 

.global entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem:
/* 801CD828 001CA768  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD82C 001CA76C  7C 08 02 A6 */	mflr r0
/* 801CD830 001CA770  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD834 001CA774  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CD838 001CA778  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CD83C 001CA77C  7C 9E 23 78 */	mr r30, r4
/* 801CD840 001CA780  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CD844 001CA784  7C 7D 1B 78 */	mr r29, r3
/* 801CD848 001CA788  38 60 00 1C */	li r3, 0x1c
/* 801CD84C 001CA78C  93 A4 01 80 */	stw r29, 0x180(r4)
/* 801CD850 001CA790  4B E5 66 55 */	bl __nw__FUl
/* 801CD854 001CA794  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CD858 001CA798  41 82 00 14 */	beq .L_801CD86C
/* 801CD85C 001CA79C  48 24 3B 35 */	bl __ct__5CNodeFv
/* 801CD860 001CA7A0  3C 60 80 4B */	lis r3, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CD864 001CA7A4  38 03 72 3C */	addi r0, r3, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CD868 001CA7A8  90 1F 00 00 */	stw r0, 0(r31)
.L_801CD86C:
/* 801CD86C 001CA7AC  93 DF 00 18 */	stw r30, 0x18(r31)
/* 801CD870 001CA7B0  7F E4 FB 78 */	mr r4, r31
/* 801CD874 001CA7B4  38 7D 00 6C */	addi r3, r29, 0x6c
/* 801CD878 001CA7B8  48 24 3B 91 */	bl add__5CNodeFP5CNode
/* 801CD87C 001CA7BC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 801CD880 001CA7C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD884 001CA7C4  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801CD888 001CA7C8  7D 89 03 A6 */	mtctr r12
/* 801CD88C 001CA7CC  4E 80 04 21 */	bctrl 
/* 801CD890 001CA7D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CD894 001CA7D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CD898 001CA7D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CD89C 001CA7DC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CD8A0 001CA7E0  7C 08 03 A6 */	mtlr r0
/* 801CD8A4 001CA7E4  38 21 00 20 */	addi r1, r1, 0x20
/* 801CD8A8 001CA7E8  4E 80 00 20 */	blr 

.global initDependency__Q24Game12TNodeItemMgrFv
initDependency__Q24Game12TNodeItemMgrFv:
/* 801CD8AC 001CA7EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CD8B0 001CA7F0  7C 08 02 A6 */	mflr r0
/* 801CD8B4 001CA7F4  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CD8B8 001CA7F8  38 63 00 4C */	addi r3, r3, 0x4c
/* 801CD8BC 001CA7FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CD8C0 001CA800  38 00 00 00 */	li r0, 0
/* 801CD8C4 001CA804  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CD8C8 001CA808  28 00 00 00 */	cmplwi r0, 0
/* 801CD8CC 001CA80C  90 81 00 08 */	stw r4, 8(r1)
/* 801CD8D0 001CA810  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CD8D4 001CA814  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CD8D8 001CA818  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CD8DC 001CA81C  40 82 00 1C */	bne .L_801CD8F8
/* 801CD8E0 001CA820  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD8E4 001CA824  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CD8E8 001CA828  7D 89 03 A6 */	mtctr r12
/* 801CD8EC 001CA82C  4E 80 04 21 */	bctrl 
/* 801CD8F0 001CA830  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CD8F4 001CA834  48 00 01 70 */	b .L_801CDA64
.L_801CD8F8:
/* 801CD8F8 001CA838  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD8FC 001CA83C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CD900 001CA840  7D 89 03 A6 */	mtctr r12
/* 801CD904 001CA844  4E 80 04 21 */	bctrl 
/* 801CD908 001CA848  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CD90C 001CA84C  48 00 00 58 */	b .L_801CD964
.L_801CD910:
/* 801CD910 001CA850  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD914 001CA854  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CD918 001CA858  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD91C 001CA85C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CD920 001CA860  7D 89 03 A6 */	mtctr r12
/* 801CD924 001CA864  4E 80 04 21 */	bctrl 
/* 801CD928 001CA868  7C 64 1B 78 */	mr r4, r3
/* 801CD92C 001CA86C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CD930 001CA870  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD934 001CA874  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CD938 001CA878  7D 89 03 A6 */	mtctr r12
/* 801CD93C 001CA87C  4E 80 04 21 */	bctrl 
/* 801CD940 001CA880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CD944 001CA884  40 82 01 20 */	bne .L_801CDA64
/* 801CD948 001CA888  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD94C 001CA88C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CD950 001CA890  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD954 001CA894  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CD958 001CA898  7D 89 03 A6 */	mtctr r12
/* 801CD95C 001CA89C  4E 80 04 21 */	bctrl 
/* 801CD960 001CA8A0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CD964:
/* 801CD964 001CA8A4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CD968 001CA8A8  38 61 00 08 */	addi r3, r1, 8
/* 801CD96C 001CA8AC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CD970 001CA8B0  7D 89 03 A6 */	mtctr r12
/* 801CD974 001CA8B4  4E 80 04 21 */	bctrl 
/* 801CD978 001CA8B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CD97C 001CA8BC  41 82 FF 94 */	beq .L_801CD910
/* 801CD980 001CA8C0  48 00 00 E4 */	b .L_801CDA64
.L_801CD984:
/* 801CD984 001CA8C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD988 001CA8C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD98C 001CA8CC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CD990 001CA8D0  7D 89 03 A6 */	mtctr r12
/* 801CD994 001CA8D4  4E 80 04 21 */	bctrl 
/* 801CD998 001CA8D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD99C 001CA8DC  81 8C 01 BC */	lwz r12, 0x1bc(r12)
/* 801CD9A0 001CA8E0  7D 89 03 A6 */	mtctr r12
/* 801CD9A4 001CA8E4  4E 80 04 21 */	bctrl 
/* 801CD9A8 001CA8E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CD9AC 001CA8EC  28 00 00 00 */	cmplwi r0, 0
/* 801CD9B0 001CA8F0  40 82 00 24 */	bne .L_801CD9D4
/* 801CD9B4 001CA8F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD9B8 001CA8F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CD9BC 001CA8FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD9C0 001CA900  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CD9C4 001CA904  7D 89 03 A6 */	mtctr r12
/* 801CD9C8 001CA908  4E 80 04 21 */	bctrl 
/* 801CD9CC 001CA90C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CD9D0 001CA910  48 00 00 94 */	b .L_801CDA64
.L_801CD9D4:
/* 801CD9D4 001CA914  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD9D8 001CA918  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CD9DC 001CA91C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CD9E0 001CA920  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CD9E4 001CA924  7D 89 03 A6 */	mtctr r12
/* 801CD9E8 001CA928  4E 80 04 21 */	bctrl 
/* 801CD9EC 001CA92C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CD9F0 001CA930  48 00 00 58 */	b .L_801CDA48
.L_801CD9F4:
/* 801CD9F4 001CA934  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CD9F8 001CA938  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CD9FC 001CA93C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDA00 001CA940  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CDA04 001CA944  7D 89 03 A6 */	mtctr r12
/* 801CDA08 001CA948  4E 80 04 21 */	bctrl 
/* 801CDA0C 001CA94C  7C 64 1B 78 */	mr r4, r3
/* 801CDA10 001CA950  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CDA14 001CA954  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDA18 001CA958  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CDA1C 001CA95C  7D 89 03 A6 */	mtctr r12
/* 801CDA20 001CA960  4E 80 04 21 */	bctrl 
/* 801CDA24 001CA964  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDA28 001CA968  40 82 00 3C */	bne .L_801CDA64
/* 801CDA2C 001CA96C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDA30 001CA970  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDA34 001CA974  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDA38 001CA978  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDA3C 001CA97C  7D 89 03 A6 */	mtctr r12
/* 801CDA40 001CA980  4E 80 04 21 */	bctrl 
/* 801CDA44 001CA984  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CDA48:
/* 801CDA48 001CA988  81 81 00 08 */	lwz r12, 8(r1)
/* 801CDA4C 001CA98C  38 61 00 08 */	addi r3, r1, 8
/* 801CDA50 001CA990  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CDA54 001CA994  7D 89 03 A6 */	mtctr r12
/* 801CDA58 001CA998  4E 80 04 21 */	bctrl 
/* 801CDA5C 001CA99C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDA60 001CA9A0  41 82 FF 94 */	beq .L_801CD9F4
.L_801CDA64:
/* 801CDA64 001CA9A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDA68 001CA9A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDA6C 001CA9AC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CDA70 001CA9B0  7D 89 03 A6 */	mtctr r12
/* 801CDA74 001CA9B4  4E 80 04 21 */	bctrl 
/* 801CDA78 001CA9B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDA7C 001CA9BC  7C 04 18 40 */	cmplw r4, r3
/* 801CDA80 001CA9C0  40 82 FF 04 */	bne .L_801CD984
/* 801CDA84 001CA9C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CDA88 001CA9C8  7C 08 03 A6 */	mtlr r0
/* 801CDA8C 001CA9CC  38 21 00 20 */	addi r1, r1, 0x20
/* 801CDA90 001CA9D0  4E 80 00 20 */	blr 

.global killAll__Q24Game12TNodeItemMgrFv
killAll__Q24Game12TNodeItemMgrFv:
/* 801CDA94 001CA9D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CDA98 001CA9D8  7C 08 02 A6 */	mflr r0
/* 801CDA9C 001CA9DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CDAA0 001CA9E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CDAA4 001CA9E4  3B E0 00 01 */	li r31, 1
/* 801CDAA8 001CA9E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CDAAC 001CA9EC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CDAB0 001CA9F0  93 81 00 10 */	stw r28, 0x10(r1)
/* 801CDAB4 001CA9F4  7C 7C 1B 78 */	mr r28, r3
/* 801CDAB8 001CA9F8  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 801CDABC 001CA9FC  83 BC 00 7C */	lwz r29, 0x7c(r28)
/* 801CDAC0 001CAA00  3B C3 A2 D0 */	addi r30, r3, __vt__Q24Game15CreatureKillArg@l
/* 801CDAC4 001CAA04  48 00 00 50 */	b .L_801CDB14
.L_801CDAC8:
/* 801CDAC8 001CAA08  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 801CDACC 001CAA0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDAD0 001CAA10  81 8C 01 A8 */	lwz r12, 0x1a8(r12)
/* 801CDAD4 001CAA14  7D 89 03 A6 */	mtctr r12
/* 801CDAD8 001CAA18  4E 80 04 21 */	bctrl 
/* 801CDADC 001CAA1C  83 BD 00 18 */	lwz r29, 0x18(r29)
/* 801CDAE0 001CAA20  38 81 00 08 */	addi r4, r1, 8
/* 801CDAE4 001CAA24  93 C1 00 08 */	stw r30, 8(r1)
/* 801CDAE8 001CAA28  7F A3 EB 78 */	mr r3, r29
/* 801CDAEC 001CAA2C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CDAF0 001CAA30  4B F6 D6 01 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 801CDAF4 001CAA34  80 9D 01 7C */	lwz r4, 0x17c(r29)
/* 801CDAF8 001CAA38  28 04 00 00 */	cmplwi r4, 0
/* 801CDAFC 001CAA3C  41 82 00 14 */	beq .L_801CDB10
/* 801CDB00 001CAA40  80 6D 91 BC */	lwz r3, "sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13)
/* 801CDB04 001CAA44  28 03 00 00 */	cmplwi r3, 0
/* 801CDB08 001CAA48  41 82 00 08 */	beq .L_801CDB10
/* 801CDB0C 001CAA4C  4B E5 91 19 */	bl remove__10JSUPtrListFP10JSUPtrLink
.L_801CDB10:
/* 801CDB10 001CAA50  83 BC 00 7C */	lwz r29, 0x7c(r28)
.L_801CDB14:
/* 801CDB14 001CAA54  28 1D 00 00 */	cmplwi r29, 0
/* 801CDB18 001CAA58  40 82 FF B0 */	bne .L_801CDAC8
/* 801CDB1C 001CAA5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CDB20 001CAA60  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CDB24 001CAA64  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CDB28 001CAA68  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CDB2C 001CAA6C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 801CDB30 001CAA70  7C 08 03 A6 */	mtlr r0
/* 801CDB34 001CAA74  38 21 00 20 */	addi r1, r1, 0x20
/* 801CDB38 001CAA78  4E 80 00 20 */	blr 

.global __ct__Q24Game7ItemMgrFv
__ct__Q24Game7ItemMgrFv:
/* 801CDB3C 001CAA7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CDB40 001CAA80  7C 08 02 A6 */	mflr r0
/* 801CDB44 001CAA84  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CDB48 001CAA88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CDB4C 001CAA8C  7C 7F 1B 78 */	mr r31, r3
/* 801CDB50 001CAA90  93 C1 00 08 */	stw r30, 8(r1)
/* 801CDB54 001CAA94  48 24 38 3D */	bl __ct__5CNodeFv
/* 801CDB58 001CAA98  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CDB5C 001CAA9C  3C 60 80 4B */	lis r3, "__vt__29Container<16GenericObjectMgr>"@ha
/* 801CDB60 001CAAA0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CDB64 001CAAA4  3C A0 80 4B */	lis r5, __vt__16GenericObjectMgr@ha
/* 801CDB68 001CAAA8  90 1F 00 00 */	stw r0, 0(r31)
/* 801CDB6C 001CAAAC  38 03 1C B0 */	addi r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
/* 801CDB70 001CAAB0  3C 80 80 4B */	lis r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 801CDB74 001CAAB4  3C 60 80 4B */	lis r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
/* 801CDB78 001CAAB8  90 1F 00 00 */	stw r0, 0(r31)
/* 801CDB7C 001CAABC  38 00 00 00 */	li r0, 0
/* 801CDB80 001CAAC0  38 C4 1C 34 */	addi r6, r4, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 801CDB84 001CAAC4  38 83 1B B4 */	addi r4, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
/* 801CDB88 001CAAC8  98 1F 00 18 */	stb r0, 0x18(r31)
/* 801CDB8C 001CAACC  38 05 B5 F0 */	addi r0, r5, __vt__16GenericObjectMgr@l
/* 801CDB90 001CAAD0  3B DF 00 20 */	addi r30, r31, 0x20
/* 801CDB94 001CAAD4  38 A6 00 2C */	addi r5, r6, 0x2c
/* 801CDB98 001CAAD8  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801CDB9C 001CAADC  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CDBA0 001CAAE0  7F C3 F3 78 */	mr r3, r30
/* 801CDBA4 001CAAE4  90 DF 00 00 */	stw r6, 0(r31)
/* 801CDBA8 001CAAE8  90 BF 00 1C */	stw r5, 0x1c(r31)
/* 801CDBAC 001CAAEC  90 9F 00 00 */	stw r4, 0(r31)
/* 801CDBB0 001CAAF0  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801CDBB4 001CAAF4  48 24 37 DD */	bl __ct__5CNodeFv
/* 801CDBB8 001CAAF8  3C 60 80 4B */	lis r3, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 801CDBBC 001CAAFC  3C 80 80 4B */	lis r4, __vt__Q24Game7ItemMgr@ha
/* 801CDBC0 001CAB00  38 03 1B A4 */	addi r0, r3, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 801CDBC4 001CAB04  3C 60 80 48 */	lis r3, lbl_80480438@ha
/* 801CDBC8 001CAB08  90 1E 00 00 */	stw r0, 0(r30)
/* 801CDBCC 001CAB0C  38 A4 70 F8 */	addi r5, r4, __vt__Q24Game7ItemMgr@l
/* 801CDBD0 001CAB10  38 85 00 2C */	addi r4, r5, 0x2c
/* 801CDBD4 001CAB14  38 03 04 38 */	addi r0, r3, lbl_80480438@l
/* 801CDBD8 001CAB18  90 BF 00 00 */	stw r5, 0(r31)
/* 801CDBDC 001CAB1C  7F E3 FB 78 */	mr r3, r31
/* 801CDBE0 001CAB20  90 9F 00 1C */	stw r4, 0x1c(r31)
/* 801CDBE4 001CAB24  90 1F 00 14 */	stw r0, 0x14(r31)
/* 801CDBE8 001CAB28  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CDBEC 001CAB2C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CDBF0 001CAB30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CDBF4 001CAB34  7C 08 03 A6 */	mtlr r0
/* 801CDBF8 001CAB38  38 21 00 10 */	addi r1, r1, 0x10
/* 801CDBFC 001CAB3C  4E 80 00 20 */	blr 

.global __dt__Q24Game7ItemMgrFv
__dt__Q24Game7ItemMgrFv:
/* 801CDC00 001CAB40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CDC04 001CAB44  7C 08 02 A6 */	mflr r0
/* 801CDC08 001CAB48  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CDC0C 001CAB4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CDC10 001CAB50  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CDC14 001CAB54  93 C1 00 08 */	stw r30, 8(r1)
/* 801CDC18 001CAB58  7C 9E 23 78 */	mr r30, r4
/* 801CDC1C 001CAB5C  41 82 00 B0 */	beq .L_801CDCCC
/* 801CDC20 001CAB60  3C 80 80 4B */	lis r4, __vt__Q24Game7ItemMgr@ha
/* 801CDC24 001CAB64  38 84 70 F8 */	addi r4, r4, __vt__Q24Game7ItemMgr@l
/* 801CDC28 001CAB68  90 9F 00 00 */	stw r4, 0(r31)
/* 801CDC2C 001CAB6C  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CDC30 001CAB70  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801CDC34 001CAB74  48 01 75 C9 */	bl clearGlobalPointers__Q24Game7ItemMgrFv
/* 801CDC38 001CAB78  28 1F 00 00 */	cmplwi r31, 0
/* 801CDC3C 001CAB7C  41 82 00 80 */	beq .L_801CDCBC
/* 801CDC40 001CAB80  3C 60 80 4B */	lis r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
/* 801CDC44 001CAB84  34 1F 00 20 */	addic. r0, r31, 0x20
/* 801CDC48 001CAB88  38 63 1B B4 */	addi r3, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
/* 801CDC4C 001CAB8C  90 7F 00 00 */	stw r3, 0(r31)
/* 801CDC50 001CAB90  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CDC54 001CAB94  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801CDC58 001CAB98  41 82 00 1C */	beq .L_801CDC74
/* 801CDC5C 001CAB9C  3C 80 80 4B */	lis r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 801CDC60 001CABA0  38 7F 00 20 */	addi r3, r31, 0x20
/* 801CDC64 001CABA4  38 04 1B A4 */	addi r0, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 801CDC68 001CABA8  38 80 00 00 */	li r4, 0
/* 801CDC6C 001CABAC  90 1F 00 20 */	stw r0, 0x20(r31)
/* 801CDC70 001CABB0  48 24 39 19 */	bl __dt__5CNodeFv
.L_801CDC74:
/* 801CDC74 001CABB4  28 1F 00 00 */	cmplwi r31, 0
/* 801CDC78 001CABB8  41 82 00 44 */	beq .L_801CDCBC
/* 801CDC7C 001CABBC  3C 60 80 4B */	lis r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
/* 801CDC80 001CABC0  38 63 1C 34 */	addi r3, r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
/* 801CDC84 001CABC4  90 7F 00 00 */	stw r3, 0(r31)
/* 801CDC88 001CABC8  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CDC8C 001CABCC  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 801CDC90 001CABD0  41 82 00 2C */	beq .L_801CDCBC
/* 801CDC94 001CABD4  3C 60 80 4B */	lis r3, "__vt__29Container<16GenericObjectMgr>"@ha
/* 801CDC98 001CABD8  38 03 1C B0 */	addi r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
/* 801CDC9C 001CABDC  90 1F 00 00 */	stw r0, 0(r31)
/* 801CDCA0 001CABE0  41 82 00 1C */	beq .L_801CDCBC
/* 801CDCA4 001CABE4  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CDCA8 001CABE8  7F E3 FB 78 */	mr r3, r31
/* 801CDCAC 001CABEC  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CDCB0 001CABF0  38 80 00 00 */	li r4, 0
/* 801CDCB4 001CABF4  90 1F 00 00 */	stw r0, 0(r31)
/* 801CDCB8 001CABF8  48 24 38 D1 */	bl __dt__5CNodeFv
.L_801CDCBC:
/* 801CDCBC 001CABFC  7F C0 07 35 */	extsh. r0, r30
/* 801CDCC0 001CAC00  40 81 00 0C */	ble .L_801CDCCC
/* 801CDCC4 001CAC04  7F E3 FB 78 */	mr r3, r31
/* 801CDCC8 001CAC08  4B E5 63 ED */	bl __dl__FPv
.L_801CDCCC:
/* 801CDCCC 001CAC0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CDCD0 001CAC10  7F E3 FB 78 */	mr r3, r31
/* 801CDCD4 001CAC14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CDCD8 001CAC18  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CDCDC 001CAC1C  7C 08 03 A6 */	mtlr r0
/* 801CDCE0 001CAC20  38 21 00 10 */	addi r1, r1, 0x10
/* 801CDCE4 001CAC24  4E 80 00 20 */	blr 

.global addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
addMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr:
/* 801CDCE8 001CAC28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CDCEC 001CAC2C  7C 08 02 A6 */	mflr r0
/* 801CDCF0 001CAC30  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CDCF4 001CAC34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CDCF8 001CAC38  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CDCFC 001CAC3C  7C 9E 23 78 */	mr r30, r4
/* 801CDD00 001CAC40  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801CDD04 001CAC44  7C 7D 1B 78 */	mr r29, r3
/* 801CDD08 001CAC48  38 60 00 1C */	li r3, 0x1c
/* 801CDD0C 001CAC4C  4B E5 61 99 */	bl __nw__FUl
/* 801CDD10 001CAC50  7C 7F 1B 79 */	or. r31, r3, r3
/* 801CDD14 001CAC54  41 82 00 14 */	beq .L_801CDD28
/* 801CDD18 001CAC58  48 24 36 79 */	bl __ct__5CNodeFv
/* 801CDD1C 001CAC5C  3C 60 80 4B */	lis r3, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
/* 801CDD20 001CAC60  38 03 1B A4 */	addi r0, r3, "__vt__31TObjectNode<16GenericObjectMgr>"@l
/* 801CDD24 001CAC64  90 1F 00 00 */	stw r0, 0(r31)
.L_801CDD28:
/* 801CDD28 001CAC68  93 DF 00 18 */	stw r30, 0x18(r31)
/* 801CDD2C 001CAC6C  7F E4 FB 78 */	mr r4, r31
/* 801CDD30 001CAC70  38 7D 00 20 */	addi r3, r29, 0x20
/* 801CDD34 001CAC74  48 24 36 D5 */	bl add__5CNodeFP5CNode
/* 801CDD38 001CAC78  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CDD3C 001CAC7C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CDD40 001CAC80  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CDD44 001CAC84  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801CDD48 001CAC88  7C 08 03 A6 */	mtlr r0
/* 801CDD4C 001CAC8C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CDD50 001CAC90  4E 80 00 20 */	blr 

.global initDependency__Q24Game7ItemMgrFv
initDependency__Q24Game7ItemMgrFv:
/* 801CDD54 001CAC94  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CDD58 001CAC98  7C 08 02 A6 */	mflr r0
/* 801CDD5C 001CAC9C  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CDD60 001CACA0  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CDD64 001CACA4  38 00 00 00 */	li r0, 0
/* 801CDD68 001CACA8  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CDD6C 001CACAC  28 00 00 00 */	cmplwi r0, 0
/* 801CDD70 001CACB0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CDD74 001CACB4  90 81 00 08 */	stw r4, 8(r1)
/* 801CDD78 001CACB8  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CDD7C 001CACBC  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CDD80 001CACC0  40 82 00 1C */	bne .L_801CDD9C
/* 801CDD84 001CACC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDD88 001CACC8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CDD8C 001CACCC  7D 89 03 A6 */	mtctr r12
/* 801CDD90 001CACD0  4E 80 04 21 */	bctrl 
/* 801CDD94 001CACD4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDD98 001CACD8  48 00 01 70 */	b .L_801CDF08
.L_801CDD9C:
/* 801CDD9C 001CACDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDDA0 001CACE0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CDDA4 001CACE4  7D 89 03 A6 */	mtctr r12
/* 801CDDA8 001CACE8  4E 80 04 21 */	bctrl 
/* 801CDDAC 001CACEC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDDB0 001CACF0  48 00 00 58 */	b .L_801CDE08
.L_801CDDB4:
/* 801CDDB4 001CACF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDDB8 001CACF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDDBC 001CACFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDDC0 001CAD00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CDDC4 001CAD04  7D 89 03 A6 */	mtctr r12
/* 801CDDC8 001CAD08  4E 80 04 21 */	bctrl 
/* 801CDDCC 001CAD0C  7C 64 1B 78 */	mr r4, r3
/* 801CDDD0 001CAD10  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CDDD4 001CAD14  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDDD8 001CAD18  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CDDDC 001CAD1C  7D 89 03 A6 */	mtctr r12
/* 801CDDE0 001CAD20  4E 80 04 21 */	bctrl 
/* 801CDDE4 001CAD24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDDE8 001CAD28  40 82 01 20 */	bne .L_801CDF08
/* 801CDDEC 001CAD2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDDF0 001CAD30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDDF4 001CAD34  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDDF8 001CAD38  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDDFC 001CAD3C  7D 89 03 A6 */	mtctr r12
/* 801CDE00 001CAD40  4E 80 04 21 */	bctrl 
/* 801CDE04 001CAD44  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CDE08:
/* 801CDE08 001CAD48  81 81 00 08 */	lwz r12, 8(r1)
/* 801CDE0C 001CAD4C  38 61 00 08 */	addi r3, r1, 8
/* 801CDE10 001CAD50  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CDE14 001CAD54  7D 89 03 A6 */	mtctr r12
/* 801CDE18 001CAD58  4E 80 04 21 */	bctrl 
/* 801CDE1C 001CAD5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDE20 001CAD60  41 82 FF 94 */	beq .L_801CDDB4
/* 801CDE24 001CAD64  48 00 00 E4 */	b .L_801CDF08
.L_801CDE28:
/* 801CDE28 001CAD68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDE2C 001CAD6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDE30 001CAD70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CDE34 001CAD74  7D 89 03 A6 */	mtctr r12
/* 801CDE38 001CAD78  4E 80 04 21 */	bctrl 
/* 801CDE3C 001CAD7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDE40 001CAD80  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 801CDE44 001CAD84  7D 89 03 A6 */	mtctr r12
/* 801CDE48 001CAD88  4E 80 04 21 */	bctrl 
/* 801CDE4C 001CAD8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CDE50 001CAD90  28 00 00 00 */	cmplwi r0, 0
/* 801CDE54 001CAD94  40 82 00 24 */	bne .L_801CDE78
/* 801CDE58 001CAD98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDE5C 001CAD9C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDE60 001CADA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDE64 001CADA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDE68 001CADA8  7D 89 03 A6 */	mtctr r12
/* 801CDE6C 001CADAC  4E 80 04 21 */	bctrl 
/* 801CDE70 001CADB0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDE74 001CADB4  48 00 00 94 */	b .L_801CDF08
.L_801CDE78:
/* 801CDE78 001CADB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDE7C 001CADBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDE80 001CADC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDE84 001CADC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDE88 001CADC8  7D 89 03 A6 */	mtctr r12
/* 801CDE8C 001CADCC  4E 80 04 21 */	bctrl 
/* 801CDE90 001CADD0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDE94 001CADD4  48 00 00 58 */	b .L_801CDEEC
.L_801CDE98:
/* 801CDE98 001CADD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDE9C 001CADDC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDEA0 001CADE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDEA4 001CADE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CDEA8 001CADE8  7D 89 03 A6 */	mtctr r12
/* 801CDEAC 001CADEC  4E 80 04 21 */	bctrl 
/* 801CDEB0 001CADF0  7C 64 1B 78 */	mr r4, r3
/* 801CDEB4 001CADF4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CDEB8 001CADF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDEBC 001CADFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CDEC0 001CAE00  7D 89 03 A6 */	mtctr r12
/* 801CDEC4 001CAE04  4E 80 04 21 */	bctrl 
/* 801CDEC8 001CAE08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDECC 001CAE0C  40 82 00 3C */	bne .L_801CDF08
/* 801CDED0 001CAE10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDED4 001CAE14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDED8 001CAE18  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDEDC 001CAE1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDEE0 001CAE20  7D 89 03 A6 */	mtctr r12
/* 801CDEE4 001CAE24  4E 80 04 21 */	bctrl 
/* 801CDEE8 001CAE28  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CDEEC:
/* 801CDEEC 001CAE2C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CDEF0 001CAE30  38 61 00 08 */	addi r3, r1, 8
/* 801CDEF4 001CAE34  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CDEF8 001CAE38  7D 89 03 A6 */	mtctr r12
/* 801CDEFC 001CAE3C  4E 80 04 21 */	bctrl 
/* 801CDF00 001CAE40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDF04 001CAE44  41 82 FF 94 */	beq .L_801CDE98
.L_801CDF08:
/* 801CDF08 001CAE48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDF0C 001CAE4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDF10 001CAE50  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CDF14 001CAE54  7D 89 03 A6 */	mtctr r12
/* 801CDF18 001CAE58  4E 80 04 21 */	bctrl 
/* 801CDF1C 001CAE5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDF20 001CAE60  7C 04 18 40 */	cmplw r4, r3
/* 801CDF24 001CAE64  40 82 FF 04 */	bne .L_801CDE28
/* 801CDF28 001CAE68  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CDF2C 001CAE6C  7C 08 03 A6 */	mtlr r0
/* 801CDF30 001CAE70  38 21 00 20 */	addi r1, r1, 0x20
/* 801CDF34 001CAE74  4E 80 00 20 */	blr 

.global doAnimation__Q24Game7ItemMgrFv
doAnimation__Q24Game7ItemMgrFv:
/* 801CDF38 001CAE78  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CDF3C 001CAE7C  7C 08 02 A6 */	mflr r0
/* 801CDF40 001CAE80  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CDF44 001CAE84  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CDF48 001CAE88  38 00 00 00 */	li r0, 0
/* 801CDF4C 001CAE8C  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CDF50 001CAE90  28 00 00 00 */	cmplwi r0, 0
/* 801CDF54 001CAE94  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CDF58 001CAE98  90 81 00 08 */	stw r4, 8(r1)
/* 801CDF5C 001CAE9C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CDF60 001CAEA0  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CDF64 001CAEA4  40 82 00 1C */	bne .L_801CDF80
/* 801CDF68 001CAEA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDF6C 001CAEAC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CDF70 001CAEB0  7D 89 03 A6 */	mtctr r12
/* 801CDF74 001CAEB4  4E 80 04 21 */	bctrl 
/* 801CDF78 001CAEB8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDF7C 001CAEBC  48 00 01 70 */	b .L_801CE0EC
.L_801CDF80:
/* 801CDF80 001CAEC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDF84 001CAEC4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CDF88 001CAEC8  7D 89 03 A6 */	mtctr r12
/* 801CDF8C 001CAECC  4E 80 04 21 */	bctrl 
/* 801CDF90 001CAED0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CDF94 001CAED4  48 00 00 58 */	b .L_801CDFEC
.L_801CDF98:
/* 801CDF98 001CAED8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDF9C 001CAEDC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDFA0 001CAEE0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDFA4 001CAEE4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CDFA8 001CAEE8  7D 89 03 A6 */	mtctr r12
/* 801CDFAC 001CAEEC  4E 80 04 21 */	bctrl 
/* 801CDFB0 001CAEF0  7C 64 1B 78 */	mr r4, r3
/* 801CDFB4 001CAEF4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CDFB8 001CAEF8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDFBC 001CAEFC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CDFC0 001CAF00  7D 89 03 A6 */	mtctr r12
/* 801CDFC4 001CAF04  4E 80 04 21 */	bctrl 
/* 801CDFC8 001CAF08  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CDFCC 001CAF0C  40 82 01 20 */	bne .L_801CE0EC
/* 801CDFD0 001CAF10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CDFD4 001CAF14  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CDFD8 001CAF18  81 83 00 00 */	lwz r12, 0(r3)
/* 801CDFDC 001CAF1C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CDFE0 001CAF20  7D 89 03 A6 */	mtctr r12
/* 801CDFE4 001CAF24  4E 80 04 21 */	bctrl 
/* 801CDFE8 001CAF28  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CDFEC:
/* 801CDFEC 001CAF2C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CDFF0 001CAF30  38 61 00 08 */	addi r3, r1, 8
/* 801CDFF4 001CAF34  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CDFF8 001CAF38  7D 89 03 A6 */	mtctr r12
/* 801CDFFC 001CAF3C  4E 80 04 21 */	bctrl 
/* 801CE000 001CAF40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE004 001CAF44  41 82 FF 94 */	beq .L_801CDF98
/* 801CE008 001CAF48  48 00 00 E4 */	b .L_801CE0EC
.L_801CE00C:
/* 801CE00C 001CAF4C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE010 001CAF50  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE014 001CAF54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE018 001CAF58  7D 89 03 A6 */	mtctr r12
/* 801CE01C 001CAF5C  4E 80 04 21 */	bctrl 
/* 801CE020 001CAF60  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE024 001CAF64  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE028 001CAF68  7D 89 03 A6 */	mtctr r12
/* 801CE02C 001CAF6C  4E 80 04 21 */	bctrl 
/* 801CE030 001CAF70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE034 001CAF74  28 00 00 00 */	cmplwi r0, 0
/* 801CE038 001CAF78  40 82 00 24 */	bne .L_801CE05C
/* 801CE03C 001CAF7C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE040 001CAF80  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE044 001CAF84  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE048 001CAF88  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE04C 001CAF8C  7D 89 03 A6 */	mtctr r12
/* 801CE050 001CAF90  4E 80 04 21 */	bctrl 
/* 801CE054 001CAF94  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE058 001CAF98  48 00 00 94 */	b .L_801CE0EC
.L_801CE05C:
/* 801CE05C 001CAF9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE060 001CAFA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE064 001CAFA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE068 001CAFA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE06C 001CAFAC  7D 89 03 A6 */	mtctr r12
/* 801CE070 001CAFB0  4E 80 04 21 */	bctrl 
/* 801CE074 001CAFB4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE078 001CAFB8  48 00 00 58 */	b .L_801CE0D0
.L_801CE07C:
/* 801CE07C 001CAFBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE080 001CAFC0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE084 001CAFC4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE088 001CAFC8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE08C 001CAFCC  7D 89 03 A6 */	mtctr r12
/* 801CE090 001CAFD0  4E 80 04 21 */	bctrl 
/* 801CE094 001CAFD4  7C 64 1B 78 */	mr r4, r3
/* 801CE098 001CAFD8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE09C 001CAFDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE0A0 001CAFE0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE0A4 001CAFE4  7D 89 03 A6 */	mtctr r12
/* 801CE0A8 001CAFE8  4E 80 04 21 */	bctrl 
/* 801CE0AC 001CAFEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE0B0 001CAFF0  40 82 00 3C */	bne .L_801CE0EC
/* 801CE0B4 001CAFF4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE0B8 001CAFF8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE0BC 001CAFFC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE0C0 001CB000  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE0C4 001CB004  7D 89 03 A6 */	mtctr r12
/* 801CE0C8 001CB008  4E 80 04 21 */	bctrl 
/* 801CE0CC 001CB00C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE0D0:
/* 801CE0D0 001CB010  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE0D4 001CB014  38 61 00 08 */	addi r3, r1, 8
/* 801CE0D8 001CB018  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE0DC 001CB01C  7D 89 03 A6 */	mtctr r12
/* 801CE0E0 001CB020  4E 80 04 21 */	bctrl 
/* 801CE0E4 001CB024  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE0E8 001CB028  41 82 FF 94 */	beq .L_801CE07C
.L_801CE0EC:
/* 801CE0EC 001CB02C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE0F0 001CB030  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE0F4 001CB034  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CE0F8 001CB038  7D 89 03 A6 */	mtctr r12
/* 801CE0FC 001CB03C  4E 80 04 21 */	bctrl 
/* 801CE100 001CB040  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE104 001CB044  7C 04 18 40 */	cmplw r4, r3
/* 801CE108 001CB048  40 82 FF 04 */	bne .L_801CE00C
/* 801CE10C 001CB04C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CE110 001CB050  7C 08 03 A6 */	mtlr r0
/* 801CE114 001CB054  38 21 00 20 */	addi r1, r1, 0x20
/* 801CE118 001CB058  4E 80 00 20 */	blr 

.global doEntry__Q24Game7ItemMgrFv
doEntry__Q24Game7ItemMgrFv:
/* 801CE11C 001CB05C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CE120 001CB060  7C 08 02 A6 */	mflr r0
/* 801CE124 001CB064  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CE128 001CB068  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CE12C 001CB06C  38 00 00 00 */	li r0, 0
/* 801CE130 001CB070  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CE134 001CB074  28 00 00 00 */	cmplwi r0, 0
/* 801CE138 001CB078  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CE13C 001CB07C  90 81 00 08 */	stw r4, 8(r1)
/* 801CE140 001CB080  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CE144 001CB084  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CE148 001CB088  40 82 00 1C */	bne .L_801CE164
/* 801CE14C 001CB08C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE150 001CB090  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE154 001CB094  7D 89 03 A6 */	mtctr r12
/* 801CE158 001CB098  4E 80 04 21 */	bctrl 
/* 801CE15C 001CB09C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE160 001CB0A0  48 00 01 70 */	b .L_801CE2D0
.L_801CE164:
/* 801CE164 001CB0A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE168 001CB0A8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE16C 001CB0AC  7D 89 03 A6 */	mtctr r12
/* 801CE170 001CB0B0  4E 80 04 21 */	bctrl 
/* 801CE174 001CB0B4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE178 001CB0B8  48 00 00 58 */	b .L_801CE1D0
.L_801CE17C:
/* 801CE17C 001CB0BC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE180 001CB0C0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE184 001CB0C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE188 001CB0C8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE18C 001CB0CC  7D 89 03 A6 */	mtctr r12
/* 801CE190 001CB0D0  4E 80 04 21 */	bctrl 
/* 801CE194 001CB0D4  7C 64 1B 78 */	mr r4, r3
/* 801CE198 001CB0D8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE19C 001CB0DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE1A0 001CB0E0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE1A4 001CB0E4  7D 89 03 A6 */	mtctr r12
/* 801CE1A8 001CB0E8  4E 80 04 21 */	bctrl 
/* 801CE1AC 001CB0EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE1B0 001CB0F0  40 82 01 20 */	bne .L_801CE2D0
/* 801CE1B4 001CB0F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE1B8 001CB0F8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE1BC 001CB0FC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE1C0 001CB100  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE1C4 001CB104  7D 89 03 A6 */	mtctr r12
/* 801CE1C8 001CB108  4E 80 04 21 */	bctrl 
/* 801CE1CC 001CB10C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE1D0:
/* 801CE1D0 001CB110  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE1D4 001CB114  38 61 00 08 */	addi r3, r1, 8
/* 801CE1D8 001CB118  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE1DC 001CB11C  7D 89 03 A6 */	mtctr r12
/* 801CE1E0 001CB120  4E 80 04 21 */	bctrl 
/* 801CE1E4 001CB124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE1E8 001CB128  41 82 FF 94 */	beq .L_801CE17C
/* 801CE1EC 001CB12C  48 00 00 E4 */	b .L_801CE2D0
.L_801CE1F0:
/* 801CE1F0 001CB130  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE1F4 001CB134  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE1F8 001CB138  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE1FC 001CB13C  7D 89 03 A6 */	mtctr r12
/* 801CE200 001CB140  4E 80 04 21 */	bctrl 
/* 801CE204 001CB144  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE208 001CB148  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801CE20C 001CB14C  7D 89 03 A6 */	mtctr r12
/* 801CE210 001CB150  4E 80 04 21 */	bctrl 
/* 801CE214 001CB154  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE218 001CB158  28 00 00 00 */	cmplwi r0, 0
/* 801CE21C 001CB15C  40 82 00 24 */	bne .L_801CE240
/* 801CE220 001CB160  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE224 001CB164  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE228 001CB168  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE22C 001CB16C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE230 001CB170  7D 89 03 A6 */	mtctr r12
/* 801CE234 001CB174  4E 80 04 21 */	bctrl 
/* 801CE238 001CB178  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE23C 001CB17C  48 00 00 94 */	b .L_801CE2D0
.L_801CE240:
/* 801CE240 001CB180  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE244 001CB184  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE248 001CB188  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE24C 001CB18C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE250 001CB190  7D 89 03 A6 */	mtctr r12
/* 801CE254 001CB194  4E 80 04 21 */	bctrl 
/* 801CE258 001CB198  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE25C 001CB19C  48 00 00 58 */	b .L_801CE2B4
.L_801CE260:
/* 801CE260 001CB1A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE264 001CB1A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE268 001CB1A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE26C 001CB1AC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE270 001CB1B0  7D 89 03 A6 */	mtctr r12
/* 801CE274 001CB1B4  4E 80 04 21 */	bctrl 
/* 801CE278 001CB1B8  7C 64 1B 78 */	mr r4, r3
/* 801CE27C 001CB1BC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE280 001CB1C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE284 001CB1C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE288 001CB1C8  7D 89 03 A6 */	mtctr r12
/* 801CE28C 001CB1CC  4E 80 04 21 */	bctrl 
/* 801CE290 001CB1D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE294 001CB1D4  40 82 00 3C */	bne .L_801CE2D0
/* 801CE298 001CB1D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE29C 001CB1DC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE2A0 001CB1E0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE2A4 001CB1E4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE2A8 001CB1E8  7D 89 03 A6 */	mtctr r12
/* 801CE2AC 001CB1EC  4E 80 04 21 */	bctrl 
/* 801CE2B0 001CB1F0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE2B4:
/* 801CE2B4 001CB1F4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE2B8 001CB1F8  38 61 00 08 */	addi r3, r1, 8
/* 801CE2BC 001CB1FC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE2C0 001CB200  7D 89 03 A6 */	mtctr r12
/* 801CE2C4 001CB204  4E 80 04 21 */	bctrl 
/* 801CE2C8 001CB208  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE2CC 001CB20C  41 82 FF 94 */	beq .L_801CE260
.L_801CE2D0:
/* 801CE2D0 001CB210  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE2D4 001CB214  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE2D8 001CB218  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CE2DC 001CB21C  7D 89 03 A6 */	mtctr r12
/* 801CE2E0 001CB220  4E 80 04 21 */	bctrl 
/* 801CE2E4 001CB224  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE2E8 001CB228  7C 04 18 40 */	cmplw r4, r3
/* 801CE2EC 001CB22C  40 82 FF 04 */	bne .L_801CE1F0
/* 801CE2F0 001CB230  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CE2F4 001CB234  7C 08 03 A6 */	mtlr r0
/* 801CE2F8 001CB238  38 21 00 20 */	addi r1, r1, 0x20
/* 801CE2FC 001CB23C  4E 80 00 20 */	blr 

.global doSetView__Q24Game7ItemMgrFi
doSetView__Q24Game7ItemMgrFi:
/* 801CE300 001CB240  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CE304 001CB244  7C 08 02 A6 */	mflr r0
/* 801CE308 001CB248  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CE30C 001CB24C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CE310 001CB250  38 00 00 00 */	li r0, 0
/* 801CE314 001CB254  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CE318 001CB258  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CE31C 001CB25C  28 00 00 00 */	cmplwi r0, 0
/* 801CE320 001CB260  7C 9F 23 78 */	mr r31, r4
/* 801CE324 001CB264  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CE328 001CB268  90 A1 00 08 */	stw r5, 8(r1)
/* 801CE32C 001CB26C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CE330 001CB270  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CE334 001CB274  40 82 00 1C */	bne .L_801CE350
/* 801CE338 001CB278  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE33C 001CB27C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE340 001CB280  7D 89 03 A6 */	mtctr r12
/* 801CE344 001CB284  4E 80 04 21 */	bctrl 
/* 801CE348 001CB288  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE34C 001CB28C  48 00 01 74 */	b .L_801CE4C0
.L_801CE350:
/* 801CE350 001CB290  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE354 001CB294  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE358 001CB298  7D 89 03 A6 */	mtctr r12
/* 801CE35C 001CB29C  4E 80 04 21 */	bctrl 
/* 801CE360 001CB2A0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE364 001CB2A4  48 00 00 58 */	b .L_801CE3BC
.L_801CE368:
/* 801CE368 001CB2A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE36C 001CB2AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE370 001CB2B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE374 001CB2B4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE378 001CB2B8  7D 89 03 A6 */	mtctr r12
/* 801CE37C 001CB2BC  4E 80 04 21 */	bctrl 
/* 801CE380 001CB2C0  7C 64 1B 78 */	mr r4, r3
/* 801CE384 001CB2C4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE388 001CB2C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE38C 001CB2CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE390 001CB2D0  7D 89 03 A6 */	mtctr r12
/* 801CE394 001CB2D4  4E 80 04 21 */	bctrl 
/* 801CE398 001CB2D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE39C 001CB2DC  40 82 01 24 */	bne .L_801CE4C0
/* 801CE3A0 001CB2E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE3A4 001CB2E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE3A8 001CB2E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE3AC 001CB2EC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE3B0 001CB2F0  7D 89 03 A6 */	mtctr r12
/* 801CE3B4 001CB2F4  4E 80 04 21 */	bctrl 
/* 801CE3B8 001CB2F8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE3BC:
/* 801CE3BC 001CB2FC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE3C0 001CB300  38 61 00 08 */	addi r3, r1, 8
/* 801CE3C4 001CB304  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE3C8 001CB308  7D 89 03 A6 */	mtctr r12
/* 801CE3CC 001CB30C  4E 80 04 21 */	bctrl 
/* 801CE3D0 001CB310  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE3D4 001CB314  41 82 FF 94 */	beq .L_801CE368
/* 801CE3D8 001CB318  48 00 00 E8 */	b .L_801CE4C0
.L_801CE3DC:
/* 801CE3DC 001CB31C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE3E0 001CB320  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE3E4 001CB324  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE3E8 001CB328  7D 89 03 A6 */	mtctr r12
/* 801CE3EC 001CB32C  4E 80 04 21 */	bctrl 
/* 801CE3F0 001CB330  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE3F4 001CB334  7F E4 FB 78 */	mr r4, r31
/* 801CE3F8 001CB338  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE3FC 001CB33C  7D 89 03 A6 */	mtctr r12
/* 801CE400 001CB340  4E 80 04 21 */	bctrl 
/* 801CE404 001CB344  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE408 001CB348  28 00 00 00 */	cmplwi r0, 0
/* 801CE40C 001CB34C  40 82 00 24 */	bne .L_801CE430
/* 801CE410 001CB350  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE414 001CB354  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE418 001CB358  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE41C 001CB35C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE420 001CB360  7D 89 03 A6 */	mtctr r12
/* 801CE424 001CB364  4E 80 04 21 */	bctrl 
/* 801CE428 001CB368  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE42C 001CB36C  48 00 00 94 */	b .L_801CE4C0
.L_801CE430:
/* 801CE430 001CB370  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE434 001CB374  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE438 001CB378  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE43C 001CB37C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE440 001CB380  7D 89 03 A6 */	mtctr r12
/* 801CE444 001CB384  4E 80 04 21 */	bctrl 
/* 801CE448 001CB388  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE44C 001CB38C  48 00 00 58 */	b .L_801CE4A4
.L_801CE450:
/* 801CE450 001CB390  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE454 001CB394  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE458 001CB398  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE45C 001CB39C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE460 001CB3A0  7D 89 03 A6 */	mtctr r12
/* 801CE464 001CB3A4  4E 80 04 21 */	bctrl 
/* 801CE468 001CB3A8  7C 64 1B 78 */	mr r4, r3
/* 801CE46C 001CB3AC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE470 001CB3B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE474 001CB3B4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE478 001CB3B8  7D 89 03 A6 */	mtctr r12
/* 801CE47C 001CB3BC  4E 80 04 21 */	bctrl 
/* 801CE480 001CB3C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE484 001CB3C4  40 82 00 3C */	bne .L_801CE4C0
/* 801CE488 001CB3C8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE48C 001CB3CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE490 001CB3D0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE494 001CB3D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE498 001CB3D8  7D 89 03 A6 */	mtctr r12
/* 801CE49C 001CB3DC  4E 80 04 21 */	bctrl 
/* 801CE4A0 001CB3E0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE4A4:
/* 801CE4A4 001CB3E4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE4A8 001CB3E8  38 61 00 08 */	addi r3, r1, 8
/* 801CE4AC 001CB3EC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE4B0 001CB3F0  7D 89 03 A6 */	mtctr r12
/* 801CE4B4 001CB3F4  4E 80 04 21 */	bctrl 
/* 801CE4B8 001CB3F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE4BC 001CB3FC  41 82 FF 94 */	beq .L_801CE450
.L_801CE4C0:
/* 801CE4C0 001CB400  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE4C4 001CB404  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE4C8 001CB408  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CE4CC 001CB40C  7D 89 03 A6 */	mtctr r12
/* 801CE4D0 001CB410  4E 80 04 21 */	bctrl 
/* 801CE4D4 001CB414  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE4D8 001CB418  7C 04 18 40 */	cmplw r4, r3
/* 801CE4DC 001CB41C  40 82 FF 00 */	bne .L_801CE3DC
/* 801CE4E0 001CB420  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CE4E4 001CB424  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CE4E8 001CB428  7C 08 03 A6 */	mtlr r0
/* 801CE4EC 001CB42C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CE4F0 001CB430  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game7ItemMgrFv
doViewCalc__Q24Game7ItemMgrFv:
/* 801CE4F4 001CB434  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CE4F8 001CB438  7C 08 02 A6 */	mflr r0
/* 801CE4FC 001CB43C  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CE500 001CB440  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CE504 001CB444  38 00 00 00 */	li r0, 0
/* 801CE508 001CB448  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CE50C 001CB44C  28 00 00 00 */	cmplwi r0, 0
/* 801CE510 001CB450  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CE514 001CB454  90 81 00 08 */	stw r4, 8(r1)
/* 801CE518 001CB458  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CE51C 001CB45C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CE520 001CB460  40 82 00 1C */	bne .L_801CE53C
/* 801CE524 001CB464  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE528 001CB468  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE52C 001CB46C  7D 89 03 A6 */	mtctr r12
/* 801CE530 001CB470  4E 80 04 21 */	bctrl 
/* 801CE534 001CB474  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE538 001CB478  48 00 01 70 */	b .L_801CE6A8
.L_801CE53C:
/* 801CE53C 001CB47C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE540 001CB480  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE544 001CB484  7D 89 03 A6 */	mtctr r12
/* 801CE548 001CB488  4E 80 04 21 */	bctrl 
/* 801CE54C 001CB48C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE550 001CB490  48 00 00 58 */	b .L_801CE5A8
.L_801CE554:
/* 801CE554 001CB494  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE558 001CB498  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE55C 001CB49C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE560 001CB4A0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE564 001CB4A4  7D 89 03 A6 */	mtctr r12
/* 801CE568 001CB4A8  4E 80 04 21 */	bctrl 
/* 801CE56C 001CB4AC  7C 64 1B 78 */	mr r4, r3
/* 801CE570 001CB4B0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE574 001CB4B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE578 001CB4B8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE57C 001CB4BC  7D 89 03 A6 */	mtctr r12
/* 801CE580 001CB4C0  4E 80 04 21 */	bctrl 
/* 801CE584 001CB4C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE588 001CB4C8  40 82 01 20 */	bne .L_801CE6A8
/* 801CE58C 001CB4CC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE590 001CB4D0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE594 001CB4D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE598 001CB4D8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE59C 001CB4DC  7D 89 03 A6 */	mtctr r12
/* 801CE5A0 001CB4E0  4E 80 04 21 */	bctrl 
/* 801CE5A4 001CB4E4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE5A8:
/* 801CE5A8 001CB4E8  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE5AC 001CB4EC  38 61 00 08 */	addi r3, r1, 8
/* 801CE5B0 001CB4F0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE5B4 001CB4F4  7D 89 03 A6 */	mtctr r12
/* 801CE5B8 001CB4F8  4E 80 04 21 */	bctrl 
/* 801CE5BC 001CB4FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE5C0 001CB500  41 82 FF 94 */	beq .L_801CE554
/* 801CE5C4 001CB504  48 00 00 E4 */	b .L_801CE6A8
.L_801CE5C8:
/* 801CE5C8 001CB508  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE5CC 001CB50C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE5D0 001CB510  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE5D4 001CB514  7D 89 03 A6 */	mtctr r12
/* 801CE5D8 001CB518  4E 80 04 21 */	bctrl 
/* 801CE5DC 001CB51C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE5E0 001CB520  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE5E4 001CB524  7D 89 03 A6 */	mtctr r12
/* 801CE5E8 001CB528  4E 80 04 21 */	bctrl 
/* 801CE5EC 001CB52C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE5F0 001CB530  28 00 00 00 */	cmplwi r0, 0
/* 801CE5F4 001CB534  40 82 00 24 */	bne .L_801CE618
/* 801CE5F8 001CB538  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE5FC 001CB53C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE600 001CB540  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE604 001CB544  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE608 001CB548  7D 89 03 A6 */	mtctr r12
/* 801CE60C 001CB54C  4E 80 04 21 */	bctrl 
/* 801CE610 001CB550  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE614 001CB554  48 00 00 94 */	b .L_801CE6A8
.L_801CE618:
/* 801CE618 001CB558  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE61C 001CB55C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE620 001CB560  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE624 001CB564  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE628 001CB568  7D 89 03 A6 */	mtctr r12
/* 801CE62C 001CB56C  4E 80 04 21 */	bctrl 
/* 801CE630 001CB570  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE634 001CB574  48 00 00 58 */	b .L_801CE68C
.L_801CE638:
/* 801CE638 001CB578  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE63C 001CB57C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE640 001CB580  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE644 001CB584  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE648 001CB588  7D 89 03 A6 */	mtctr r12
/* 801CE64C 001CB58C  4E 80 04 21 */	bctrl 
/* 801CE650 001CB590  7C 64 1B 78 */	mr r4, r3
/* 801CE654 001CB594  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE658 001CB598  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE65C 001CB59C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE660 001CB5A0  7D 89 03 A6 */	mtctr r12
/* 801CE664 001CB5A4  4E 80 04 21 */	bctrl 
/* 801CE668 001CB5A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE66C 001CB5AC  40 82 00 3C */	bne .L_801CE6A8
/* 801CE670 001CB5B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE674 001CB5B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE678 001CB5B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE67C 001CB5BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE680 001CB5C0  7D 89 03 A6 */	mtctr r12
/* 801CE684 001CB5C4  4E 80 04 21 */	bctrl 
/* 801CE688 001CB5C8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE68C:
/* 801CE68C 001CB5CC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE690 001CB5D0  38 61 00 08 */	addi r3, r1, 8
/* 801CE694 001CB5D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE698 001CB5D8  7D 89 03 A6 */	mtctr r12
/* 801CE69C 001CB5DC  4E 80 04 21 */	bctrl 
/* 801CE6A0 001CB5E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE6A4 001CB5E4  41 82 FF 94 */	beq .L_801CE638
.L_801CE6A8:
/* 801CE6A8 001CB5E8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE6AC 001CB5EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE6B0 001CB5F0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CE6B4 001CB5F4  7D 89 03 A6 */	mtctr r12
/* 801CE6B8 001CB5F8  4E 80 04 21 */	bctrl 
/* 801CE6BC 001CB5FC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE6C0 001CB600  7C 04 18 40 */	cmplw r4, r3
/* 801CE6C4 001CB604  40 82 FF 04 */	bne .L_801CE5C8
/* 801CE6C8 001CB608  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CE6CC 001CB60C  7C 08 03 A6 */	mtlr r0
/* 801CE6D0 001CB610  38 21 00 20 */	addi r1, r1, 0x20
/* 801CE6D4 001CB614  4E 80 00 20 */	blr 

.global doSimulation__Q24Game7ItemMgrFf
doSimulation__Q24Game7ItemMgrFf:
/* 801CE6D8 001CB618  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CE6DC 001CB61C  7C 08 02 A6 */	mflr r0
/* 801CE6E0 001CB620  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CE6E4 001CB624  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CE6E8 001CB628  38 00 00 00 */	li r0, 0
/* 801CE6EC 001CB62C  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CE6F0 001CB630  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801CE6F4 001CB634  FF E0 08 90 */	fmr f31, f1
/* 801CE6F8 001CB638  28 00 00 00 */	cmplwi r0, 0
/* 801CE6FC 001CB63C  90 81 00 08 */	stw r4, 8(r1)
/* 801CE700 001CB640  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CE704 001CB644  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CE708 001CB648  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CE70C 001CB64C  40 82 00 1C */	bne .L_801CE728
/* 801CE710 001CB650  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE714 001CB654  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE718 001CB658  7D 89 03 A6 */	mtctr r12
/* 801CE71C 001CB65C  4E 80 04 21 */	bctrl 
/* 801CE720 001CB660  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE724 001CB664  48 00 01 74 */	b .L_801CE898
.L_801CE728:
/* 801CE728 001CB668  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE72C 001CB66C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE730 001CB670  7D 89 03 A6 */	mtctr r12
/* 801CE734 001CB674  4E 80 04 21 */	bctrl 
/* 801CE738 001CB678  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE73C 001CB67C  48 00 00 58 */	b .L_801CE794
.L_801CE740:
/* 801CE740 001CB680  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE744 001CB684  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE748 001CB688  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE74C 001CB68C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE750 001CB690  7D 89 03 A6 */	mtctr r12
/* 801CE754 001CB694  4E 80 04 21 */	bctrl 
/* 801CE758 001CB698  7C 64 1B 78 */	mr r4, r3
/* 801CE75C 001CB69C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE760 001CB6A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE764 001CB6A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE768 001CB6A8  7D 89 03 A6 */	mtctr r12
/* 801CE76C 001CB6AC  4E 80 04 21 */	bctrl 
/* 801CE770 001CB6B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE774 001CB6B4  40 82 01 24 */	bne .L_801CE898
/* 801CE778 001CB6B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE77C 001CB6BC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE780 001CB6C0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE784 001CB6C4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE788 001CB6C8  7D 89 03 A6 */	mtctr r12
/* 801CE78C 001CB6CC  4E 80 04 21 */	bctrl 
/* 801CE790 001CB6D0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE794:
/* 801CE794 001CB6D4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE798 001CB6D8  38 61 00 08 */	addi r3, r1, 8
/* 801CE79C 001CB6DC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE7A0 001CB6E0  7D 89 03 A6 */	mtctr r12
/* 801CE7A4 001CB6E4  4E 80 04 21 */	bctrl 
/* 801CE7A8 001CB6E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE7AC 001CB6EC  41 82 FF 94 */	beq .L_801CE740
/* 801CE7B0 001CB6F0  48 00 00 E8 */	b .L_801CE898
.L_801CE7B4:
/* 801CE7B4 001CB6F4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE7B8 001CB6F8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE7BC 001CB6FC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE7C0 001CB700  7D 89 03 A6 */	mtctr r12
/* 801CE7C4 001CB704  4E 80 04 21 */	bctrl 
/* 801CE7C8 001CB708  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE7CC 001CB70C  FC 20 F8 90 */	fmr f1, f31
/* 801CE7D0 001CB710  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE7D4 001CB714  7D 89 03 A6 */	mtctr r12
/* 801CE7D8 001CB718  4E 80 04 21 */	bctrl 
/* 801CE7DC 001CB71C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE7E0 001CB720  28 00 00 00 */	cmplwi r0, 0
/* 801CE7E4 001CB724  40 82 00 24 */	bne .L_801CE808
/* 801CE7E8 001CB728  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE7EC 001CB72C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE7F0 001CB730  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE7F4 001CB734  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE7F8 001CB738  7D 89 03 A6 */	mtctr r12
/* 801CE7FC 001CB73C  4E 80 04 21 */	bctrl 
/* 801CE800 001CB740  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE804 001CB744  48 00 00 94 */	b .L_801CE898
.L_801CE808:
/* 801CE808 001CB748  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE80C 001CB74C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE810 001CB750  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE814 001CB754  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE818 001CB758  7D 89 03 A6 */	mtctr r12
/* 801CE81C 001CB75C  4E 80 04 21 */	bctrl 
/* 801CE820 001CB760  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE824 001CB764  48 00 00 58 */	b .L_801CE87C
.L_801CE828:
/* 801CE828 001CB768  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE82C 001CB76C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE830 001CB770  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE834 001CB774  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE838 001CB778  7D 89 03 A6 */	mtctr r12
/* 801CE83C 001CB77C  4E 80 04 21 */	bctrl 
/* 801CE840 001CB780  7C 64 1B 78 */	mr r4, r3
/* 801CE844 001CB784  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE848 001CB788  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE84C 001CB78C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE850 001CB790  7D 89 03 A6 */	mtctr r12
/* 801CE854 001CB794  4E 80 04 21 */	bctrl 
/* 801CE858 001CB798  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE85C 001CB79C  40 82 00 3C */	bne .L_801CE898
/* 801CE860 001CB7A0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE864 001CB7A4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE868 001CB7A8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE86C 001CB7AC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE870 001CB7B0  7D 89 03 A6 */	mtctr r12
/* 801CE874 001CB7B4  4E 80 04 21 */	bctrl 
/* 801CE878 001CB7B8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE87C:
/* 801CE87C 001CB7BC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE880 001CB7C0  38 61 00 08 */	addi r3, r1, 8
/* 801CE884 001CB7C4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE888 001CB7C8  7D 89 03 A6 */	mtctr r12
/* 801CE88C 001CB7CC  4E 80 04 21 */	bctrl 
/* 801CE890 001CB7D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE894 001CB7D4  41 82 FF 94 */	beq .L_801CE828
.L_801CE898:
/* 801CE898 001CB7D8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE89C 001CB7DC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE8A0 001CB7E0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CE8A4 001CB7E4  7D 89 03 A6 */	mtctr r12
/* 801CE8A8 001CB7E8  4E 80 04 21 */	bctrl 
/* 801CE8AC 001CB7EC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE8B0 001CB7F0  7C 04 18 40 */	cmplw r4, r3
/* 801CE8B4 001CB7F4  40 82 FF 00 */	bne .L_801CE7B4
/* 801CE8B8 001CB7F8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CE8BC 001CB7FC  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801CE8C0 001CB800  7C 08 03 A6 */	mtlr r0
/* 801CE8C4 001CB804  38 21 00 20 */	addi r1, r1, 0x20
/* 801CE8C8 001CB808  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game7ItemMgrFR8Graphics
doDirectDraw__Q24Game7ItemMgrFR8Graphics:
/* 801CE8CC 001CB80C  4E 80 00 20 */	blr 

.global doSimpleDraw__Q24Game7ItemMgrFP8Viewport
doSimpleDraw__Q24Game7ItemMgrFP8Viewport:
/* 801CE8D0 001CB810  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CE8D4 001CB814  7C 08 02 A6 */	mflr r0
/* 801CE8D8 001CB818  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CE8DC 001CB81C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CE8E0 001CB820  38 00 00 00 */	li r0, 0
/* 801CE8E4 001CB824  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CE8E8 001CB828  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CE8EC 001CB82C  28 00 00 00 */	cmplwi r0, 0
/* 801CE8F0 001CB830  7C 9F 23 78 */	mr r31, r4
/* 801CE8F4 001CB834  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CE8F8 001CB838  90 A1 00 08 */	stw r5, 8(r1)
/* 801CE8FC 001CB83C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CE900 001CB840  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CE904 001CB844  40 82 00 1C */	bne .L_801CE920
/* 801CE908 001CB848  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE90C 001CB84C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE910 001CB850  7D 89 03 A6 */	mtctr r12
/* 801CE914 001CB854  4E 80 04 21 */	bctrl 
/* 801CE918 001CB858  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE91C 001CB85C  48 00 01 74 */	b .L_801CEA90
.L_801CE920:
/* 801CE920 001CB860  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE924 001CB864  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CE928 001CB868  7D 89 03 A6 */	mtctr r12
/* 801CE92C 001CB86C  4E 80 04 21 */	bctrl 
/* 801CE930 001CB870  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE934 001CB874  48 00 00 58 */	b .L_801CE98C
.L_801CE938:
/* 801CE938 001CB878  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE93C 001CB87C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE940 001CB880  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE944 001CB884  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE948 001CB888  7D 89 03 A6 */	mtctr r12
/* 801CE94C 001CB88C  4E 80 04 21 */	bctrl 
/* 801CE950 001CB890  7C 64 1B 78 */	mr r4, r3
/* 801CE954 001CB894  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CE958 001CB898  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE95C 001CB89C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CE960 001CB8A0  7D 89 03 A6 */	mtctr r12
/* 801CE964 001CB8A4  4E 80 04 21 */	bctrl 
/* 801CE968 001CB8A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE96C 001CB8AC  40 82 01 24 */	bne .L_801CEA90
/* 801CE970 001CB8B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE974 001CB8B4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE978 001CB8B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE97C 001CB8BC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE980 001CB8C0  7D 89 03 A6 */	mtctr r12
/* 801CE984 001CB8C4  4E 80 04 21 */	bctrl 
/* 801CE988 001CB8C8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CE98C:
/* 801CE98C 001CB8CC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CE990 001CB8D0  38 61 00 08 */	addi r3, r1, 8
/* 801CE994 001CB8D4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CE998 001CB8D8  7D 89 03 A6 */	mtctr r12
/* 801CE99C 001CB8DC  4E 80 04 21 */	bctrl 
/* 801CE9A0 001CB8E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CE9A4 001CB8E4  41 82 FF 94 */	beq .L_801CE938
/* 801CE9A8 001CB8E8  48 00 00 E8 */	b .L_801CEA90
.L_801CE9AC:
/* 801CE9AC 001CB8EC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE9B0 001CB8F0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE9B4 001CB8F4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE9B8 001CB8F8  7D 89 03 A6 */	mtctr r12
/* 801CE9BC 001CB8FC  4E 80 04 21 */	bctrl 
/* 801CE9C0 001CB900  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE9C4 001CB904  7F E4 FB 78 */	mr r4, r31
/* 801CE9C8 001CB908  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CE9CC 001CB90C  7D 89 03 A6 */	mtctr r12
/* 801CE9D0 001CB910  4E 80 04 21 */	bctrl 
/* 801CE9D4 001CB914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CE9D8 001CB918  28 00 00 00 */	cmplwi r0, 0
/* 801CE9DC 001CB91C  40 82 00 24 */	bne .L_801CEA00
/* 801CE9E0 001CB920  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CE9E4 001CB924  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CE9E8 001CB928  81 83 00 00 */	lwz r12, 0(r3)
/* 801CE9EC 001CB92C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CE9F0 001CB930  7D 89 03 A6 */	mtctr r12
/* 801CE9F4 001CB934  4E 80 04 21 */	bctrl 
/* 801CE9F8 001CB938  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CE9FC 001CB93C  48 00 00 94 */	b .L_801CEA90
.L_801CEA00:
/* 801CEA00 001CB940  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEA04 001CB944  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEA08 001CB948  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEA0C 001CB94C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEA10 001CB950  7D 89 03 A6 */	mtctr r12
/* 801CEA14 001CB954  4E 80 04 21 */	bctrl 
/* 801CEA18 001CB958  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEA1C 001CB95C  48 00 00 58 */	b .L_801CEA74
.L_801CEA20:
/* 801CEA20 001CB960  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEA24 001CB964  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEA28 001CB968  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEA2C 001CB96C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEA30 001CB970  7D 89 03 A6 */	mtctr r12
/* 801CEA34 001CB974  4E 80 04 21 */	bctrl 
/* 801CEA38 001CB978  7C 64 1B 78 */	mr r4, r3
/* 801CEA3C 001CB97C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CEA40 001CB980  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEA44 001CB984  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CEA48 001CB988  7D 89 03 A6 */	mtctr r12
/* 801CEA4C 001CB98C  4E 80 04 21 */	bctrl 
/* 801CEA50 001CB990  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEA54 001CB994  40 82 00 3C */	bne .L_801CEA90
/* 801CEA58 001CB998  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEA5C 001CB99C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEA60 001CB9A0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEA64 001CB9A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEA68 001CB9A8  7D 89 03 A6 */	mtctr r12
/* 801CEA6C 001CB9AC  4E 80 04 21 */	bctrl 
/* 801CEA70 001CB9B0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CEA74:
/* 801CEA74 001CB9B4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CEA78 001CB9B8  38 61 00 08 */	addi r3, r1, 8
/* 801CEA7C 001CB9BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CEA80 001CB9C0  7D 89 03 A6 */	mtctr r12
/* 801CEA84 001CB9C4  4E 80 04 21 */	bctrl 
/* 801CEA88 001CB9C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEA8C 001CB9CC  41 82 FF 94 */	beq .L_801CEA20
.L_801CEA90:
/* 801CEA90 001CB9D0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEA94 001CB9D4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEA98 001CB9D8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CEA9C 001CB9DC  7D 89 03 A6 */	mtctr r12
/* 801CEAA0 001CB9E0  4E 80 04 21 */	bctrl 
/* 801CEAA4 001CB9E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEAA8 001CB9E8  7C 04 18 40 */	cmplw r4, r3
/* 801CEAAC 001CB9EC  40 82 FF 00 */	bne .L_801CE9AC
/* 801CEAB0 001CB9F0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CEAB4 001CB9F4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CEAB8 001CB9F8  7C 08 03 A6 */	mtlr r0
/* 801CEABC 001CB9FC  38 21 00 20 */	addi r1, r1, 0x20
/* 801CEAC0 001CBA00  4E 80 00 20 */	blr 

.global setupSoundViewerAndBas__Q24Game7ItemMgrFv
setupSoundViewerAndBas__Q24Game7ItemMgrFv:
/* 801CEAC4 001CBA04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CEAC8 001CBA08  7C 08 02 A6 */	mflr r0
/* 801CEACC 001CBA0C  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CEAD0 001CBA10  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CEAD4 001CBA14  38 00 00 00 */	li r0, 0
/* 801CEAD8 001CBA18  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CEADC 001CBA1C  28 00 00 00 */	cmplwi r0, 0
/* 801CEAE0 001CBA20  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CEAE4 001CBA24  90 81 00 08 */	stw r4, 8(r1)
/* 801CEAE8 001CBA28  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CEAEC 001CBA2C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CEAF0 001CBA30  40 82 00 1C */	bne .L_801CEB0C
/* 801CEAF4 001CBA34  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEAF8 001CBA38  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CEAFC 001CBA3C  7D 89 03 A6 */	mtctr r12
/* 801CEB00 001CBA40  4E 80 04 21 */	bctrl 
/* 801CEB04 001CBA44  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEB08 001CBA48  48 00 01 70 */	b .L_801CEC78
.L_801CEB0C:
/* 801CEB0C 001CBA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEB10 001CBA50  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CEB14 001CBA54  7D 89 03 A6 */	mtctr r12
/* 801CEB18 001CBA58  4E 80 04 21 */	bctrl 
/* 801CEB1C 001CBA5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEB20 001CBA60  48 00 00 58 */	b .L_801CEB78
.L_801CEB24:
/* 801CEB24 001CBA64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEB28 001CBA68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEB2C 001CBA6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEB30 001CBA70  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEB34 001CBA74  7D 89 03 A6 */	mtctr r12
/* 801CEB38 001CBA78  4E 80 04 21 */	bctrl 
/* 801CEB3C 001CBA7C  7C 64 1B 78 */	mr r4, r3
/* 801CEB40 001CBA80  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CEB44 001CBA84  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEB48 001CBA88  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CEB4C 001CBA8C  7D 89 03 A6 */	mtctr r12
/* 801CEB50 001CBA90  4E 80 04 21 */	bctrl 
/* 801CEB54 001CBA94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEB58 001CBA98  40 82 01 20 */	bne .L_801CEC78
/* 801CEB5C 001CBA9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEB60 001CBAA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEB64 001CBAA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEB68 001CBAA8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEB6C 001CBAAC  7D 89 03 A6 */	mtctr r12
/* 801CEB70 001CBAB0  4E 80 04 21 */	bctrl 
/* 801CEB74 001CBAB4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CEB78:
/* 801CEB78 001CBAB8  81 81 00 08 */	lwz r12, 8(r1)
/* 801CEB7C 001CBABC  38 61 00 08 */	addi r3, r1, 8
/* 801CEB80 001CBAC0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CEB84 001CBAC4  7D 89 03 A6 */	mtctr r12
/* 801CEB88 001CBAC8  4E 80 04 21 */	bctrl 
/* 801CEB8C 001CBACC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEB90 001CBAD0  41 82 FF 94 */	beq .L_801CEB24
/* 801CEB94 001CBAD4  48 00 00 E4 */	b .L_801CEC78
.L_801CEB98:
/* 801CEB98 001CBAD8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEB9C 001CBADC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEBA0 001CBAE0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEBA4 001CBAE4  7D 89 03 A6 */	mtctr r12
/* 801CEBA8 001CBAE8  4E 80 04 21 */	bctrl 
/* 801CEBAC 001CBAEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEBB0 001CBAF0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801CEBB4 001CBAF4  7D 89 03 A6 */	mtctr r12
/* 801CEBB8 001CBAF8  4E 80 04 21 */	bctrl 
/* 801CEBBC 001CBAFC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CEBC0 001CBB00  28 00 00 00 */	cmplwi r0, 0
/* 801CEBC4 001CBB04  40 82 00 24 */	bne .L_801CEBE8
/* 801CEBC8 001CBB08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEBCC 001CBB0C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEBD0 001CBB10  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEBD4 001CBB14  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEBD8 001CBB18  7D 89 03 A6 */	mtctr r12
/* 801CEBDC 001CBB1C  4E 80 04 21 */	bctrl 
/* 801CEBE0 001CBB20  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEBE4 001CBB24  48 00 00 94 */	b .L_801CEC78
.L_801CEBE8:
/* 801CEBE8 001CBB28  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEBEC 001CBB2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEBF0 001CBB30  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEBF4 001CBB34  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEBF8 001CBB38  7D 89 03 A6 */	mtctr r12
/* 801CEBFC 001CBB3C  4E 80 04 21 */	bctrl 
/* 801CEC00 001CBB40  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEC04 001CBB44  48 00 00 58 */	b .L_801CEC5C
.L_801CEC08:
/* 801CEC08 001CBB48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEC0C 001CBB4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEC10 001CBB50  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEC14 001CBB54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEC18 001CBB58  7D 89 03 A6 */	mtctr r12
/* 801CEC1C 001CBB5C  4E 80 04 21 */	bctrl 
/* 801CEC20 001CBB60  7C 64 1B 78 */	mr r4, r3
/* 801CEC24 001CBB64  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CEC28 001CBB68  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEC2C 001CBB6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CEC30 001CBB70  7D 89 03 A6 */	mtctr r12
/* 801CEC34 001CBB74  4E 80 04 21 */	bctrl 
/* 801CEC38 001CBB78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEC3C 001CBB7C  40 82 00 3C */	bne .L_801CEC78
/* 801CEC40 001CBB80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEC44 001CBB84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEC48 001CBB88  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEC4C 001CBB8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEC50 001CBB90  7D 89 03 A6 */	mtctr r12
/* 801CEC54 001CBB94  4E 80 04 21 */	bctrl 
/* 801CEC58 001CBB98  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CEC5C:
/* 801CEC5C 001CBB9C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CEC60 001CBBA0  38 61 00 08 */	addi r3, r1, 8
/* 801CEC64 001CBBA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CEC68 001CBBA8  7D 89 03 A6 */	mtctr r12
/* 801CEC6C 001CBBAC  4E 80 04 21 */	bctrl 
/* 801CEC70 001CBBB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEC74 001CBBB4  41 82 FF 94 */	beq .L_801CEC08
.L_801CEC78:
/* 801CEC78 001CBBB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEC7C 001CBBBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEC80 001CBBC0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CEC84 001CBBC4  7D 89 03 A6 */	mtctr r12
/* 801CEC88 001CBBC8  4E 80 04 21 */	bctrl 
/* 801CEC8C 001CBBCC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEC90 001CBBD0  7C 04 18 40 */	cmplw r4, r3
/* 801CEC94 001CBBD4  40 82 FF 04 */	bne .L_801CEB98
/* 801CEC98 001CBBD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CEC9C 001CBBDC  7C 08 03 A6 */	mtlr r0
/* 801CECA0 001CBBE0  38 21 00 20 */	addi r1, r1, 0x20
/* 801CECA4 001CBBE4  4E 80 00 20 */	blr 

.global loadResources__Q24Game7ItemMgrFv
loadResources__Q24Game7ItemMgrFv:
/* 801CECA8 001CBBE8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CECAC 001CBBEC  7C 08 02 A6 */	mflr r0
/* 801CECB0 001CBBF0  3C 80 80 4B */	lis r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CECB4 001CBBF4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CECB8 001CBBF8  38 00 00 00 */	li r0, 0
/* 801CECBC 001CBBFC  38 84 1B 5C */	addi r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CECC0 001CBC00  28 00 00 00 */	cmplwi r0, 0
/* 801CECC4 001CBC04  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CECC8 001CBC08  90 81 00 08 */	stw r4, 8(r1)
/* 801CECCC 001CBC0C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CECD0 001CBC10  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CECD4 001CBC14  40 82 00 1C */	bne .L_801CECF0
/* 801CECD8 001CBC18  81 83 00 00 */	lwz r12, 0(r3)
/* 801CECDC 001CBC1C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CECE0 001CBC20  7D 89 03 A6 */	mtctr r12
/* 801CECE4 001CBC24  4E 80 04 21 */	bctrl 
/* 801CECE8 001CBC28  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CECEC 001CBC2C  48 00 01 70 */	b .L_801CEE5C
.L_801CECF0:
/* 801CECF0 001CBC30  81 83 00 00 */	lwz r12, 0(r3)
/* 801CECF4 001CBC34  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CECF8 001CBC38  7D 89 03 A6 */	mtctr r12
/* 801CECFC 001CBC3C  4E 80 04 21 */	bctrl 
/* 801CED00 001CBC40  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CED04 001CBC44  48 00 00 58 */	b .L_801CED5C
.L_801CED08:
/* 801CED08 001CBC48  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CED0C 001CBC4C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CED10 001CBC50  81 83 00 00 */	lwz r12, 0(r3)
/* 801CED14 001CBC54  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CED18 001CBC58  7D 89 03 A6 */	mtctr r12
/* 801CED1C 001CBC5C  4E 80 04 21 */	bctrl 
/* 801CED20 001CBC60  7C 64 1B 78 */	mr r4, r3
/* 801CED24 001CBC64  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CED28 001CBC68  81 83 00 00 */	lwz r12, 0(r3)
/* 801CED2C 001CBC6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CED30 001CBC70  7D 89 03 A6 */	mtctr r12
/* 801CED34 001CBC74  4E 80 04 21 */	bctrl 
/* 801CED38 001CBC78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CED3C 001CBC7C  40 82 01 20 */	bne .L_801CEE5C
/* 801CED40 001CBC80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CED44 001CBC84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CED48 001CBC88  81 83 00 00 */	lwz r12, 0(r3)
/* 801CED4C 001CBC8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CED50 001CBC90  7D 89 03 A6 */	mtctr r12
/* 801CED54 001CBC94  4E 80 04 21 */	bctrl 
/* 801CED58 001CBC98  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CED5C:
/* 801CED5C 001CBC9C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CED60 001CBCA0  38 61 00 08 */	addi r3, r1, 8
/* 801CED64 001CBCA4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CED68 001CBCA8  7D 89 03 A6 */	mtctr r12
/* 801CED6C 001CBCAC  4E 80 04 21 */	bctrl 
/* 801CED70 001CBCB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CED74 001CBCB4  41 82 FF 94 */	beq .L_801CED08
/* 801CED78 001CBCB8  48 00 00 E4 */	b .L_801CEE5C
.L_801CED7C:
/* 801CED7C 001CBCBC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CED80 001CBCC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CED84 001CBCC4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CED88 001CBCC8  7D 89 03 A6 */	mtctr r12
/* 801CED8C 001CBCCC  4E 80 04 21 */	bctrl 
/* 801CED90 001CBCD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CED94 001CBCD4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 801CED98 001CBCD8  7D 89 03 A6 */	mtctr r12
/* 801CED9C 001CBCDC  4E 80 04 21 */	bctrl 
/* 801CEDA0 001CBCE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CEDA4 001CBCE4  28 00 00 00 */	cmplwi r0, 0
/* 801CEDA8 001CBCE8  40 82 00 24 */	bne .L_801CEDCC
/* 801CEDAC 001CBCEC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEDB0 001CBCF0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEDB4 001CBCF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEDB8 001CBCF8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEDBC 001CBCFC  7D 89 03 A6 */	mtctr r12
/* 801CEDC0 001CBD00  4E 80 04 21 */	bctrl 
/* 801CEDC4 001CBD04  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEDC8 001CBD08  48 00 00 94 */	b .L_801CEE5C
.L_801CEDCC:
/* 801CEDCC 001CBD0C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEDD0 001CBD10  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEDD4 001CBD14  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEDD8 001CBD18  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEDDC 001CBD1C  7D 89 03 A6 */	mtctr r12
/* 801CEDE0 001CBD20  4E 80 04 21 */	bctrl 
/* 801CEDE4 001CBD24  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEDE8 001CBD28  48 00 00 58 */	b .L_801CEE40
.L_801CEDEC:
/* 801CEDEC 001CBD2C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEDF0 001CBD30  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEDF4 001CBD34  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEDF8 001CBD38  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEDFC 001CBD3C  7D 89 03 A6 */	mtctr r12
/* 801CEE00 001CBD40  4E 80 04 21 */	bctrl 
/* 801CEE04 001CBD44  7C 64 1B 78 */	mr r4, r3
/* 801CEE08 001CBD48  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CEE0C 001CBD4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEE10 001CBD50  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CEE14 001CBD54  7D 89 03 A6 */	mtctr r12
/* 801CEE18 001CBD58  4E 80 04 21 */	bctrl 
/* 801CEE1C 001CBD5C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEE20 001CBD60  40 82 00 3C */	bne .L_801CEE5C
/* 801CEE24 001CBD64  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEE28 001CBD68  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEE2C 001CBD6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEE30 001CBD70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEE34 001CBD74  7D 89 03 A6 */	mtctr r12
/* 801CEE38 001CBD78  4E 80 04 21 */	bctrl 
/* 801CEE3C 001CBD7C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CEE40:
/* 801CEE40 001CBD80  81 81 00 08 */	lwz r12, 8(r1)
/* 801CEE44 001CBD84  38 61 00 08 */	addi r3, r1, 8
/* 801CEE48 001CBD88  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CEE4C 001CBD8C  7D 89 03 A6 */	mtctr r12
/* 801CEE50 001CBD90  4E 80 04 21 */	bctrl 
/* 801CEE54 001CBD94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEE58 001CBD98  41 82 FF 94 */	beq .L_801CEDEC
.L_801CEE5C:
/* 801CEE5C 001CBD9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEE60 001CBDA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEE64 001CBDA4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CEE68 001CBDA8  7D 89 03 A6 */	mtctr r12
/* 801CEE6C 001CBDAC  4E 80 04 21 */	bctrl 
/* 801CEE70 001CBDB0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEE74 001CBDB4  7C 04 18 40 */	cmplw r4, r3
/* 801CEE78 001CBDB8  40 82 FF 04 */	bne .L_801CED7C
/* 801CEE7C 001CBDBC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CEE80 001CBDC0  7C 08 03 A6 */	mtlr r0
/* 801CEE84 001CBDC4  38 21 00 20 */	addi r1, r1, 0x20
/* 801CEE88 001CBDC8  4E 80 00 20 */	blr 

.global getIndexByMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr
getIndexByMgr__Q24Game7ItemMgrFPQ24Game11BaseItemMgr:
/* 801CEE8C 001CBDCC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CEE90 001CBDD0  7C 08 02 A6 */	mflr r0
/* 801CEE94 001CBDD4  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CEE98 001CBDD8  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CEE9C 001CBDDC  38 00 00 00 */	li r0, 0
/* 801CEEA0 001CBDE0  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CEEA4 001CBDE4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CEEA8 001CBDE8  28 00 00 00 */	cmplwi r0, 0
/* 801CEEAC 001CBDEC  3B E0 00 00 */	li r31, 0
/* 801CEEB0 001CBDF0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CEEB4 001CBDF4  7C 9E 23 78 */	mr r30, r4
/* 801CEEB8 001CBDF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CEEBC 001CBDFC  90 A1 00 08 */	stw r5, 8(r1)
/* 801CEEC0 001CBE00  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CEEC4 001CBE04  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CEEC8 001CBE08  40 82 00 1C */	bne .L_801CEEE4
/* 801CEECC 001CBE0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEED0 001CBE10  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CEED4 001CBE14  7D 89 03 A6 */	mtctr r12
/* 801CEED8 001CBE18  4E 80 04 21 */	bctrl 
/* 801CEEDC 001CBE1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEEE0 001CBE20  48 00 01 74 */	b .L_801CF054
.L_801CEEE4:
/* 801CEEE4 001CBE24  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEEE8 001CBE28  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CEEEC 001CBE2C  7D 89 03 A6 */	mtctr r12
/* 801CEEF0 001CBE30  4E 80 04 21 */	bctrl 
/* 801CEEF4 001CBE34  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEEF8 001CBE38  48 00 00 58 */	b .L_801CEF50
.L_801CEEFC:
/* 801CEEFC 001CBE3C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEF00 001CBE40  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEF04 001CBE44  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEF08 001CBE48  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEF0C 001CBE4C  7D 89 03 A6 */	mtctr r12
/* 801CEF10 001CBE50  4E 80 04 21 */	bctrl 
/* 801CEF14 001CBE54  7C 64 1B 78 */	mr r4, r3
/* 801CEF18 001CBE58  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CEF1C 001CBE5C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEF20 001CBE60  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CEF24 001CBE64  7D 89 03 A6 */	mtctr r12
/* 801CEF28 001CBE68  4E 80 04 21 */	bctrl 
/* 801CEF2C 001CBE6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEF30 001CBE70  40 82 01 24 */	bne .L_801CF054
/* 801CEF34 001CBE74  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEF38 001CBE78  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEF3C 001CBE7C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEF40 001CBE80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEF44 001CBE84  7D 89 03 A6 */	mtctr r12
/* 801CEF48 001CBE88  4E 80 04 21 */	bctrl 
/* 801CEF4C 001CBE8C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CEF50:
/* 801CEF50 001CBE90  81 81 00 08 */	lwz r12, 8(r1)
/* 801CEF54 001CBE94  38 61 00 08 */	addi r3, r1, 8
/* 801CEF58 001CBE98  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CEF5C 001CBE9C  7D 89 03 A6 */	mtctr r12
/* 801CEF60 001CBEA0  4E 80 04 21 */	bctrl 
/* 801CEF64 001CBEA4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CEF68 001CBEA8  41 82 FF 94 */	beq .L_801CEEFC
/* 801CEF6C 001CBEAC  48 00 00 E8 */	b .L_801CF054
.L_801CEF70:
/* 801CEF70 001CBEB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEF74 001CBEB4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEF78 001CBEB8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEF7C 001CBEBC  7D 89 03 A6 */	mtctr r12
/* 801CEF80 001CBEC0  4E 80 04 21 */	bctrl 
/* 801CEF84 001CBEC4  7C 03 F0 40 */	cmplw r3, r30
/* 801CEF88 001CBEC8  40 82 00 0C */	bne .L_801CEF94
/* 801CEF8C 001CBECC  7F E3 FB 78 */	mr r3, r31
/* 801CEF90 001CBED0  48 00 00 E8 */	b .L_801CF078
.L_801CEF94:
/* 801CEF94 001CBED4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CEF98 001CBED8  3B FF 00 01 */	addi r31, r31, 1
/* 801CEF9C 001CBEDC  28 00 00 00 */	cmplwi r0, 0
/* 801CEFA0 001CBEE0  40 82 00 24 */	bne .L_801CEFC4
/* 801CEFA4 001CBEE4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEFA8 001CBEE8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEFAC 001CBEEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEFB0 001CBEF0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEFB4 001CBEF4  7D 89 03 A6 */	mtctr r12
/* 801CEFB8 001CBEF8  4E 80 04 21 */	bctrl 
/* 801CEFBC 001CBEFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEFC0 001CBF00  48 00 00 94 */	b .L_801CF054
.L_801CEFC4:
/* 801CEFC4 001CBF04  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEFC8 001CBF08  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEFCC 001CBF0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEFD0 001CBF10  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CEFD4 001CBF14  7D 89 03 A6 */	mtctr r12
/* 801CEFD8 001CBF18  4E 80 04 21 */	bctrl 
/* 801CEFDC 001CBF1C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CEFE0 001CBF20  48 00 00 58 */	b .L_801CF038
.L_801CEFE4:
/* 801CEFE4 001CBF24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CEFE8 001CBF28  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CEFEC 001CBF2C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CEFF0 001CBF30  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CEFF4 001CBF34  7D 89 03 A6 */	mtctr r12
/* 801CEFF8 001CBF38  4E 80 04 21 */	bctrl 
/* 801CEFFC 001CBF3C  7C 64 1B 78 */	mr r4, r3
/* 801CF000 001CBF40  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF004 001CBF44  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF008 001CBF48  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF00C 001CBF4C  7D 89 03 A6 */	mtctr r12
/* 801CF010 001CBF50  4E 80 04 21 */	bctrl 
/* 801CF014 001CBF54  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF018 001CBF58  40 82 00 3C */	bne .L_801CF054
/* 801CF01C 001CBF5C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF020 001CBF60  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF024 001CBF64  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF028 001CBF68  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF02C 001CBF6C  7D 89 03 A6 */	mtctr r12
/* 801CF030 001CBF70  4E 80 04 21 */	bctrl 
/* 801CF034 001CBF74  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF038:
/* 801CF038 001CBF78  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF03C 001CBF7C  38 61 00 08 */	addi r3, r1, 8
/* 801CF040 001CBF80  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF044 001CBF84  7D 89 03 A6 */	mtctr r12
/* 801CF048 001CBF88  4E 80 04 21 */	bctrl 
/* 801CF04C 001CBF8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF050 001CBF90  41 82 FF 94 */	beq .L_801CEFE4
.L_801CF054:
/* 801CF054 001CBF94  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF058 001CBF98  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF05C 001CBF9C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CF060 001CBFA0  7D 89 03 A6 */	mtctr r12
/* 801CF064 001CBFA4  4E 80 04 21 */	bctrl 
/* 801CF068 001CBFA8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF06C 001CBFAC  7C 04 18 40 */	cmplw r4, r3
/* 801CF070 001CBFB0  40 82 FF 00 */	bne .L_801CEF70
/* 801CF074 001CBFB4  38 60 FF FF */	li r3, -1
.L_801CF078:
/* 801CF078 001CBFB8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CF07C 001CBFBC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CF080 001CBFC0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CF084 001CBFC4  7C 08 03 A6 */	mtlr r0
/* 801CF088 001CBFC8  38 21 00 20 */	addi r1, r1, 0x20
/* 801CF08C 001CBFCC  4E 80 00 20 */	blr 

.global getMgrByIndex__Q24Game7ItemMgrFi
getMgrByIndex__Q24Game7ItemMgrFi:
/* 801CF090 001CBFD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CF094 001CBFD4  7C 08 02 A6 */	mflr r0
/* 801CF098 001CBFD8  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CF09C 001CBFDC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CF0A0 001CBFE0  38 00 00 00 */	li r0, 0
/* 801CF0A4 001CBFE4  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CF0A8 001CBFE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CF0AC 001CBFEC  28 00 00 00 */	cmplwi r0, 0
/* 801CF0B0 001CBFF0  3B E0 00 00 */	li r31, 0
/* 801CF0B4 001CBFF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CF0B8 001CBFF8  7C 9E 23 78 */	mr r30, r4
/* 801CF0BC 001CBFFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF0C0 001CC000  90 A1 00 08 */	stw r5, 8(r1)
/* 801CF0C4 001CC004  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CF0C8 001CC008  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CF0CC 001CC00C  40 82 00 1C */	bne .L_801CF0E8
/* 801CF0D0 001CC010  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF0D4 001CC014  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF0D8 001CC018  7D 89 03 A6 */	mtctr r12
/* 801CF0DC 001CC01C  4E 80 04 21 */	bctrl 
/* 801CF0E0 001CC020  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF0E4 001CC024  48 00 01 70 */	b .L_801CF254
.L_801CF0E8:
/* 801CF0E8 001CC028  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF0EC 001CC02C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF0F0 001CC030  7D 89 03 A6 */	mtctr r12
/* 801CF0F4 001CC034  4E 80 04 21 */	bctrl 
/* 801CF0F8 001CC038  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF0FC 001CC03C  48 00 00 58 */	b .L_801CF154
.L_801CF100:
/* 801CF100 001CC040  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF104 001CC044  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF108 001CC048  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF10C 001CC04C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF110 001CC050  7D 89 03 A6 */	mtctr r12
/* 801CF114 001CC054  4E 80 04 21 */	bctrl 
/* 801CF118 001CC058  7C 64 1B 78 */	mr r4, r3
/* 801CF11C 001CC05C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF120 001CC060  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF124 001CC064  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF128 001CC068  7D 89 03 A6 */	mtctr r12
/* 801CF12C 001CC06C  4E 80 04 21 */	bctrl 
/* 801CF130 001CC070  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF134 001CC074  40 82 01 20 */	bne .L_801CF254
/* 801CF138 001CC078  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF13C 001CC07C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF140 001CC080  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF144 001CC084  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF148 001CC088  7D 89 03 A6 */	mtctr r12
/* 801CF14C 001CC08C  4E 80 04 21 */	bctrl 
/* 801CF150 001CC090  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF154:
/* 801CF154 001CC094  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF158 001CC098  38 61 00 08 */	addi r3, r1, 8
/* 801CF15C 001CC09C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF160 001CC0A0  7D 89 03 A6 */	mtctr r12
/* 801CF164 001CC0A4  4E 80 04 21 */	bctrl 
/* 801CF168 001CC0A8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF16C 001CC0AC  41 82 FF 94 */	beq .L_801CF100
/* 801CF170 001CC0B0  48 00 00 E4 */	b .L_801CF254
.L_801CF174:
/* 801CF174 001CC0B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF178 001CC0B8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF17C 001CC0BC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF180 001CC0C0  7D 89 03 A6 */	mtctr r12
/* 801CF184 001CC0C4  4E 80 04 21 */	bctrl 
/* 801CF188 001CC0C8  7C 1F F0 00 */	cmpw r31, r30
/* 801CF18C 001CC0CC  40 82 00 08 */	bne .L_801CF194
/* 801CF190 001CC0D0  48 00 00 E8 */	b .L_801CF278
.L_801CF194:
/* 801CF194 001CC0D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF198 001CC0D8  3B FF 00 01 */	addi r31, r31, 1
/* 801CF19C 001CC0DC  28 00 00 00 */	cmplwi r0, 0
/* 801CF1A0 001CC0E0  40 82 00 24 */	bne .L_801CF1C4
/* 801CF1A4 001CC0E4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF1A8 001CC0E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF1AC 001CC0EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF1B0 001CC0F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF1B4 001CC0F4  7D 89 03 A6 */	mtctr r12
/* 801CF1B8 001CC0F8  4E 80 04 21 */	bctrl 
/* 801CF1BC 001CC0FC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF1C0 001CC100  48 00 00 94 */	b .L_801CF254
.L_801CF1C4:
/* 801CF1C4 001CC104  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF1C8 001CC108  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF1CC 001CC10C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF1D0 001CC110  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF1D4 001CC114  7D 89 03 A6 */	mtctr r12
/* 801CF1D8 001CC118  4E 80 04 21 */	bctrl 
/* 801CF1DC 001CC11C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF1E0 001CC120  48 00 00 58 */	b .L_801CF238
.L_801CF1E4:
/* 801CF1E4 001CC124  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF1E8 001CC128  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF1EC 001CC12C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF1F0 001CC130  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF1F4 001CC134  7D 89 03 A6 */	mtctr r12
/* 801CF1F8 001CC138  4E 80 04 21 */	bctrl 
/* 801CF1FC 001CC13C  7C 64 1B 78 */	mr r4, r3
/* 801CF200 001CC140  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF204 001CC144  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF208 001CC148  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF20C 001CC14C  7D 89 03 A6 */	mtctr r12
/* 801CF210 001CC150  4E 80 04 21 */	bctrl 
/* 801CF214 001CC154  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF218 001CC158  40 82 00 3C */	bne .L_801CF254
/* 801CF21C 001CC15C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF220 001CC160  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF224 001CC164  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF228 001CC168  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF22C 001CC16C  7D 89 03 A6 */	mtctr r12
/* 801CF230 001CC170  4E 80 04 21 */	bctrl 
/* 801CF234 001CC174  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF238:
/* 801CF238 001CC178  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF23C 001CC17C  38 61 00 08 */	addi r3, r1, 8
/* 801CF240 001CC180  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF244 001CC184  7D 89 03 A6 */	mtctr r12
/* 801CF248 001CC188  4E 80 04 21 */	bctrl 
/* 801CF24C 001CC18C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF250 001CC190  41 82 FF 94 */	beq .L_801CF1E4
.L_801CF254:
/* 801CF254 001CC194  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF258 001CC198  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF25C 001CC19C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CF260 001CC1A0  7D 89 03 A6 */	mtctr r12
/* 801CF264 001CC1A4  4E 80 04 21 */	bctrl 
/* 801CF268 001CC1A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF26C 001CC1AC  7C 04 18 40 */	cmplw r4, r3
/* 801CF270 001CC1B0  40 82 FF 04 */	bne .L_801CF174
/* 801CF274 001CC1B4  38 60 00 00 */	li r3, 0
.L_801CF278:
/* 801CF278 001CC1B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CF27C 001CC1BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CF280 001CC1C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CF284 001CC1C4  7C 08 03 A6 */	mtlr r0
/* 801CF288 001CC1C8  38 21 00 20 */	addi r1, r1, 0x20
/* 801CF28C 001CC1CC  4E 80 00 20 */	blr 

.global getMgrByID__Q24Game7ItemMgrFR4ID32
getMgrByID__Q24Game7ItemMgrFR4ID32:
/* 801CF290 001CC1D0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CF294 001CC1D4  7C 08 02 A6 */	mflr r0
/* 801CF298 001CC1D8  3C A0 80 4B */	lis r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
/* 801CF29C 001CC1DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CF2A0 001CC1E0  38 00 00 00 */	li r0, 0
/* 801CF2A4 001CC1E4  38 A5 1B 5C */	addi r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
/* 801CF2A8 001CC1E8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CF2AC 001CC1EC  28 00 00 00 */	cmplwi r0, 0
/* 801CF2B0 001CC1F0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801CF2B4 001CC1F4  7C 9E 23 78 */	mr r30, r4
/* 801CF2B8 001CC1F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF2BC 001CC1FC  90 A1 00 08 */	stw r5, 8(r1)
/* 801CF2C0 001CC200  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CF2C4 001CC204  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CF2C8 001CC208  40 82 00 1C */	bne .L_801CF2E4
/* 801CF2CC 001CC20C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF2D0 001CC210  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF2D4 001CC214  7D 89 03 A6 */	mtctr r12
/* 801CF2D8 001CC218  4E 80 04 21 */	bctrl 
/* 801CF2DC 001CC21C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF2E0 001CC220  48 00 01 98 */	b .L_801CF478
.L_801CF2E4:
/* 801CF2E4 001CC224  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF2E8 001CC228  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF2EC 001CC22C  7D 89 03 A6 */	mtctr r12
/* 801CF2F0 001CC230  4E 80 04 21 */	bctrl 
/* 801CF2F4 001CC234  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF2F8 001CC238  48 00 00 58 */	b .L_801CF350
.L_801CF2FC:
/* 801CF2FC 001CC23C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF300 001CC240  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF304 001CC244  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF308 001CC248  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF30C 001CC24C  7D 89 03 A6 */	mtctr r12
/* 801CF310 001CC250  4E 80 04 21 */	bctrl 
/* 801CF314 001CC254  7C 64 1B 78 */	mr r4, r3
/* 801CF318 001CC258  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF31C 001CC25C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF320 001CC260  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF324 001CC264  7D 89 03 A6 */	mtctr r12
/* 801CF328 001CC268  4E 80 04 21 */	bctrl 
/* 801CF32C 001CC26C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF330 001CC270  40 82 01 48 */	bne .L_801CF478
/* 801CF334 001CC274  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF338 001CC278  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF33C 001CC27C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF340 001CC280  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF344 001CC284  7D 89 03 A6 */	mtctr r12
/* 801CF348 001CC288  4E 80 04 21 */	bctrl 
/* 801CF34C 001CC28C  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF350:
/* 801CF350 001CC290  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF354 001CC294  38 61 00 08 */	addi r3, r1, 8
/* 801CF358 001CC298  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF35C 001CC29C  7D 89 03 A6 */	mtctr r12
/* 801CF360 001CC2A0  4E 80 04 21 */	bctrl 
/* 801CF364 001CC2A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF368 001CC2A8  41 82 FF 94 */	beq .L_801CF2FC
/* 801CF36C 001CC2AC  48 00 01 0C */	b .L_801CF478
.L_801CF370:
/* 801CF370 001CC2B0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF374 001CC2B4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF378 001CC2B8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF37C 001CC2BC  7D 89 03 A6 */	mtctr r12
/* 801CF380 001CC2C0  4E 80 04 21 */	bctrl 
/* 801CF384 001CC2C4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF388 001CC2C8  7C 60 1B 78 */	mr r0, r3
/* 801CF38C 001CC2CC  7C 1F 03 78 */	mr r31, r0
/* 801CF390 001CC2D0  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 801CF394 001CC2D4  7D 89 03 A6 */	mtctr r12
/* 801CF398 001CC2D8  4E 80 04 21 */	bctrl 
/* 801CF39C 001CC2DC  7C 64 1B 78 */	mr r4, r3
/* 801CF3A0 001CC2E0  7F C3 F3 78 */	mr r3, r30
/* 801CF3A4 001CC2E4  38 A0 00 2A */	li r5, 0x2a
/* 801CF3A8 001CC2E8  48 24 3F 55 */	bl match__4ID32FUlc
/* 801CF3AC 001CC2EC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF3B0 001CC2F0  41 82 00 0C */	beq .L_801CF3BC
/* 801CF3B4 001CC2F4  7F E3 FB 78 */	mr r3, r31
/* 801CF3B8 001CC2F8  48 00 00 E4 */	b .L_801CF49C
.L_801CF3BC:
/* 801CF3BC 001CC2FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF3C0 001CC300  28 00 00 00 */	cmplwi r0, 0
/* 801CF3C4 001CC304  40 82 00 24 */	bne .L_801CF3E8
/* 801CF3C8 001CC308  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF3CC 001CC30C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF3D0 001CC310  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF3D4 001CC314  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF3D8 001CC318  7D 89 03 A6 */	mtctr r12
/* 801CF3DC 001CC31C  4E 80 04 21 */	bctrl 
/* 801CF3E0 001CC320  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF3E4 001CC324  48 00 00 94 */	b .L_801CF478
.L_801CF3E8:
/* 801CF3E8 001CC328  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF3EC 001CC32C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF3F0 001CC330  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF3F4 001CC334  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF3F8 001CC338  7D 89 03 A6 */	mtctr r12
/* 801CF3FC 001CC33C  4E 80 04 21 */	bctrl 
/* 801CF400 001CC340  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF404 001CC344  48 00 00 58 */	b .L_801CF45C
.L_801CF408:
/* 801CF408 001CC348  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF40C 001CC34C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF410 001CC350  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF414 001CC354  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF418 001CC358  7D 89 03 A6 */	mtctr r12
/* 801CF41C 001CC35C  4E 80 04 21 */	bctrl 
/* 801CF420 001CC360  7C 64 1B 78 */	mr r4, r3
/* 801CF424 001CC364  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF428 001CC368  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF42C 001CC36C  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF430 001CC370  7D 89 03 A6 */	mtctr r12
/* 801CF434 001CC374  4E 80 04 21 */	bctrl 
/* 801CF438 001CC378  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF43C 001CC37C  40 82 00 3C */	bne .L_801CF478
/* 801CF440 001CC380  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF444 001CC384  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF448 001CC388  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF44C 001CC38C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF450 001CC390  7D 89 03 A6 */	mtctr r12
/* 801CF454 001CC394  4E 80 04 21 */	bctrl 
/* 801CF458 001CC398  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF45C:
/* 801CF45C 001CC39C  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF460 001CC3A0  38 61 00 08 */	addi r3, r1, 8
/* 801CF464 001CC3A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF468 001CC3A8  7D 89 03 A6 */	mtctr r12
/* 801CF46C 001CC3AC  4E 80 04 21 */	bctrl 
/* 801CF470 001CC3B0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF474 001CC3B4  41 82 FF 94 */	beq .L_801CF408
.L_801CF478:
/* 801CF478 001CC3B8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF47C 001CC3BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF480 001CC3C0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CF484 001CC3C4  7D 89 03 A6 */	mtctr r12
/* 801CF488 001CC3C8  4E 80 04 21 */	bctrl 
/* 801CF48C 001CC3CC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF490 001CC3D0  7C 04 18 40 */	cmplw r4, r3
/* 801CF494 001CC3D4  40 82 FE DC */	bne .L_801CF370
/* 801CF498 001CC3D8  38 60 00 00 */	li r3, 0
.L_801CF49C:
/* 801CF49C 001CC3DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CF4A0 001CC3E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CF4A4 001CC3E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801CF4A8 001CC3E8  7C 08 03 A6 */	mtlr r0
/* 801CF4AC 001CC3EC  38 21 00 20 */	addi r1, r1, 0x20
/* 801CF4B0 001CC3F0  4E 80 00 20 */	blr 

.global __dt__Q24Game12TNodeItemMgrFv
__dt__Q24Game12TNodeItemMgrFv:
/* 801CF4B4 001CC3F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF4B8 001CC3F8  7C 08 02 A6 */	mflr r0
/* 801CF4BC 001CC3FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF4C0 001CC400  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801CF4C4 001CC404  7C 9F 23 78 */	mr r31, r4
/* 801CF4C8 001CC408  93 C1 00 08 */	stw r30, 8(r1)
/* 801CF4CC 001CC40C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801CF4D0 001CC410  41 82 00 E4 */	beq .L_801CF5B4
/* 801CF4D4 001CC414  3C 60 80 4B */	lis r3, __vt__Q24Game12TNodeItemMgr@ha
/* 801CF4D8 001CC418  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CF4DC 001CC41C  38 63 71 80 */	addi r3, r3, __vt__Q24Game12TNodeItemMgr@l
/* 801CF4E0 001CC420  90 7E 00 00 */	stw r3, 0(r30)
/* 801CF4E4 001CC424  38 03 00 74 */	addi r0, r3, 0x74
/* 801CF4E8 001CC428  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CF4EC 001CC42C  41 82 00 84 */	beq .L_801CF570
/* 801CF4F0 001CC430  3C 80 80 4B */	lis r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
/* 801CF4F4 001CC434  34 7E 00 6C */	addic. r3, r30, 0x6c
/* 801CF4F8 001CC438  38 84 72 4C */	addi r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
/* 801CF4FC 001CC43C  90 9E 00 4C */	stw r4, 0x4c(r30)
/* 801CF500 001CC440  38 04 00 2C */	addi r0, r4, 0x2c
/* 801CF504 001CC444  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801CF508 001CC448  41 82 00 18 */	beq .L_801CF520
/* 801CF50C 001CC44C  3C 80 80 4B */	lis r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
/* 801CF510 001CC450  38 04 72 3C */	addi r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
/* 801CF514 001CC454  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 801CF518 001CC458  38 80 00 00 */	li r4, 0
/* 801CF51C 001CC45C  48 24 20 6D */	bl __dt__5CNodeFv
.L_801CF520:
/* 801CF520 001CC460  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CF524 001CC464  41 82 00 4C */	beq .L_801CF570
/* 801CF528 001CC468  3C 60 80 4B */	lis r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
/* 801CF52C 001CC46C  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CF530 001CC470  38 63 72 CC */	addi r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
/* 801CF534 001CC474  90 7E 00 4C */	stw r3, 0x4c(r30)
/* 801CF538 001CC478  38 03 00 2C */	addi r0, r3, 0x2c
/* 801CF53C 001CC47C  90 1E 00 68 */	stw r0, 0x68(r30)
/* 801CF540 001CC480  41 82 00 30 */	beq .L_801CF570
/* 801CF544 001CC484  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CF548 001CC488  34 1E 00 4C */	addic. r0, r30, 0x4c
/* 801CF54C 001CC48C  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CF550 001CC490  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801CF554 001CC494  41 82 00 1C */	beq .L_801CF570
/* 801CF558 001CC498  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CF55C 001CC49C  38 7E 00 4C */	addi r3, r30, 0x4c
/* 801CF560 001CC4A0  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CF564 001CC4A4  38 80 00 00 */	li r4, 0
/* 801CF568 001CC4A8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 801CF56C 001CC4AC  48 24 20 1D */	bl __dt__5CNodeFv
.L_801CF570:
/* 801CF570 001CC4B0  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801CF574 001CC4B4  41 82 00 30 */	beq .L_801CF5A4
/* 801CF578 001CC4B8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8BaseItem>"@ha
/* 801CF57C 001CC4BC  34 1E 00 30 */	addic. r0, r30, 0x30
/* 801CF580 001CC4C0  38 03 73 48 */	addi r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
/* 801CF584 001CC4C4  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CF588 001CC4C8  41 82 00 1C */	beq .L_801CF5A4
/* 801CF58C 001CC4CC  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 801CF590 001CC4D0  38 7E 00 30 */	addi r3, r30, 0x30
/* 801CF594 001CC4D4  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 801CF598 001CC4D8  38 80 00 00 */	li r4, 0
/* 801CF59C 001CC4DC  90 1E 00 30 */	stw r0, 0x30(r30)
/* 801CF5A0 001CC4E0  48 24 1F E9 */	bl __dt__5CNodeFv
.L_801CF5A4:
/* 801CF5A4 001CC4E4  7F E0 07 35 */	extsh. r0, r31
/* 801CF5A8 001CC4E8  40 81 00 0C */	ble .L_801CF5B4
/* 801CF5AC 001CC4EC  7F C3 F3 78 */	mr r3, r30
/* 801CF5B0 001CC4F0  4B E5 4B 05 */	bl __dl__FPv
.L_801CF5B4:
/* 801CF5B4 001CC4F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF5B8 001CC4F8  7F C3 F3 78 */	mr r3, r30
/* 801CF5BC 001CC4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801CF5C0 001CC500  83 C1 00 08 */	lwz r30, 8(r1)
/* 801CF5C4 001CC504  7C 08 03 A6 */	mtlr r0
/* 801CF5C8 001CC508  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF5CC 001CC50C  4E 80 00 20 */	blr 

.global kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem:
/* 801CF5D0 001CC510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF5D4 001CC514  7C 08 02 A6 */	mflr r0
/* 801CF5D8 001CC518  38 63 00 4C */	addi r3, r3, 0x4c
/* 801CF5DC 001CC51C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF5E0 001CC520  48 00 02 05 */	bl "delNode__31NodeObjectMgr<Q24Game8BaseItem>FPQ24Game8BaseItem"
/* 801CF5E4 001CC524  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF5E8 001CC528  7C 08 03 A6 */	mtlr r0
/* 801CF5EC 001CC52C  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF5F0 001CC530  4E 80 00 20 */	blr 

.global doAnimation__Q24Game12TNodeItemMgrFv
doAnimation__Q24Game12TNodeItemMgrFv:
/* 801CF5F4 001CC534  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF5F8 001CC538  7C 08 02 A6 */	mflr r0
/* 801CF5FC 001CC53C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF600 001CC540  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF604 001CC544  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801CF608 001CC548  7D 89 03 A6 */	mtctr r12
/* 801CF60C 001CC54C  4E 80 04 21 */	bctrl 
/* 801CF610 001CC550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF614 001CC554  7C 08 03 A6 */	mtlr r0
/* 801CF618 001CC558  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF61C 001CC55C  4E 80 00 20 */	blr 

.global doEntry__Q24Game12TNodeItemMgrFv
doEntry__Q24Game12TNodeItemMgrFv:
/* 801CF620 001CC560  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF624 001CC564  7C 08 02 A6 */	mflr r0
/* 801CF628 001CC568  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF62C 001CC56C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF630 001CC570  81 8C 00 68 */	lwz r12, 0x68(r12)
/* 801CF634 001CC574  7D 89 03 A6 */	mtctr r12
/* 801CF638 001CC578  4E 80 04 21 */	bctrl 
/* 801CF63C 001CC57C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF640 001CC580  7C 08 03 A6 */	mtlr r0
/* 801CF644 001CC584  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF648 001CC588  4E 80 00 20 */	blr 

.global doSetView__Q24Game12TNodeItemMgrFi
doSetView__Q24Game12TNodeItemMgrFi:
/* 801CF64C 001CC58C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF650 001CC590  7C 08 02 A6 */	mflr r0
/* 801CF654 001CC594  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF658 001CC598  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF65C 001CC59C  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 801CF660 001CC5A0  7D 89 03 A6 */	mtctr r12
/* 801CF664 001CC5A4  4E 80 04 21 */	bctrl 
/* 801CF668 001CC5A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF66C 001CC5AC  7C 08 03 A6 */	mtlr r0
/* 801CF670 001CC5B0  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF674 001CC5B4  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game12TNodeItemMgrFv
doViewCalc__Q24Game12TNodeItemMgrFv:
/* 801CF678 001CC5B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF67C 001CC5BC  7C 08 02 A6 */	mflr r0
/* 801CF680 001CC5C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF684 001CC5C4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF688 001CC5C8  81 8C 00 70 */	lwz r12, 0x70(r12)
/* 801CF68C 001CC5CC  7D 89 03 A6 */	mtctr r12
/* 801CF690 001CC5D0  4E 80 04 21 */	bctrl 
/* 801CF694 001CC5D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF698 001CC5D8  7C 08 03 A6 */	mtlr r0
/* 801CF69C 001CC5DC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF6A0 001CC5E0  4E 80 00 20 */	blr 

.global doSimulation__Q24Game12TNodeItemMgrFf
doSimulation__Q24Game12TNodeItemMgrFf:
/* 801CF6A4 001CC5E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF6A8 001CC5E8  7C 08 02 A6 */	mflr r0
/* 801CF6AC 001CC5EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF6B0 001CC5F0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF6B4 001CC5F4  81 8C 00 74 */	lwz r12, 0x74(r12)
/* 801CF6B8 001CC5F8  7D 89 03 A6 */	mtctr r12
/* 801CF6BC 001CC5FC  4E 80 04 21 */	bctrl 
/* 801CF6C0 001CC600  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF6C4 001CC604  7C 08 03 A6 */	mtlr r0
/* 801CF6C8 001CC608  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF6CC 001CC60C  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics
doDirectDraw__Q24Game12TNodeItemMgrFR8Graphics:
/* 801CF6D0 001CC610  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF6D4 001CC614  7C 08 02 A6 */	mflr r0
/* 801CF6D8 001CC618  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF6DC 001CC61C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF6E0 001CC620  81 8C 00 78 */	lwz r12, 0x78(r12)
/* 801CF6E4 001CC624  7D 89 03 A6 */	mtctr r12
/* 801CF6E8 001CC628  4E 80 04 21 */	bctrl 
/* 801CF6EC 001CC62C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF6F0 001CC630  7C 08 03 A6 */	mtlr r0
/* 801CF6F4 001CC634  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF6F8 001CC638  4E 80 00 20 */	blr 

.global getEnd__Q24Game12TNodeItemMgrFv
getEnd__Q24Game12TNodeItemMgrFv:
/* 801CF6FC 001CC63C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF700 001CC640  7C 08 02 A6 */	mflr r0
/* 801CF704 001CC644  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF708 001CC648  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF70C 001CC64C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CF710 001CC650  7D 89 03 A6 */	mtctr r12
/* 801CF714 001CC654  4E 80 04 21 */	bctrl 
/* 801CF718 001CC658  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF71C 001CC65C  7C 08 03 A6 */	mtlr r0
/* 801CF720 001CC660  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF724 001CC664  4E 80 00 20 */	blr 

.global "getEnd__31NodeObjectMgr<Q24Game8BaseItem>Fv"
"getEnd__31NodeObjectMgr<Q24Game8BaseItem>Fv":
/* 801CF728 001CC668  38 60 00 00 */	li r3, 0
/* 801CF72C 001CC66C  4E 80 00 20 */	blr 

.global getStart__Q24Game12TNodeItemMgrFv
getStart__Q24Game12TNodeItemMgrFv:
/* 801CF730 001CC670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF734 001CC674  7C 08 02 A6 */	mflr r0
/* 801CF738 001CC678  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF73C 001CC67C  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF740 001CC680  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF744 001CC684  7D 89 03 A6 */	mtctr r12
/* 801CF748 001CC688  4E 80 04 21 */	bctrl 
/* 801CF74C 001CC68C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF750 001CC690  7C 08 03 A6 */	mtlr r0
/* 801CF754 001CC694  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF758 001CC698  4E 80 00 20 */	blr 

.global "getStart__31NodeObjectMgr<Q24Game8BaseItem>Fv"
"getStart__31NodeObjectMgr<Q24Game8BaseItem>Fv":
/* 801CF75C 001CC69C  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801CF760 001CC6A0  4E 80 00 20 */	blr 

.global getNext__Q24Game12TNodeItemMgrFPv
getNext__Q24Game12TNodeItemMgrFPv:
/* 801CF764 001CC6A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF768 001CC6A8  7C 08 02 A6 */	mflr r0
/* 801CF76C 001CC6AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF770 001CC6B0  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF774 001CC6B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF778 001CC6B8  7D 89 03 A6 */	mtctr r12
/* 801CF77C 001CC6BC  4E 80 04 21 */	bctrl 
/* 801CF780 001CC6C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF784 001CC6C4  7C 08 03 A6 */	mtlr r0
/* 801CF788 001CC6C8  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF78C 001CC6CC  4E 80 00 20 */	blr 

.global "getNext__31NodeObjectMgr<Q24Game8BaseItem>FPv"
"getNext__31NodeObjectMgr<Q24Game8BaseItem>FPv":
/* 801CF790 001CC6D0  80 64 00 04 */	lwz r3, 4(r4)
/* 801CF794 001CC6D4  4E 80 00 20 */	blr 

.global get__Q24Game12TNodeItemMgrFPv
get__Q24Game12TNodeItemMgrFPv:
/* 801CF798 001CC6D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF79C 001CC6DC  7C 08 02 A6 */	mflr r0
/* 801CF7A0 001CC6E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF7A4 001CC6E4  85 83 00 4C */	lwzu r12, 0x4c(r3)
/* 801CF7A8 001CC6E8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF7AC 001CC6EC  7D 89 03 A6 */	mtctr r12
/* 801CF7B0 001CC6F0  4E 80 04 21 */	bctrl 
/* 801CF7B4 001CC6F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF7B8 001CC6F8  7C 08 03 A6 */	mtlr r0
/* 801CF7BC 001CC6FC  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF7C0 001CC700  4E 80 00 20 */	blr 

.global "get__31NodeObjectMgr<Q24Game8BaseItem>FPv"
"get__31NodeObjectMgr<Q24Game8BaseItem>FPv":
/* 801CF7C4 001CC704  80 64 00 18 */	lwz r3, 0x18(r4)
/* 801CF7C8 001CC708  4E 80 00 20 */	blr 

.global doAnimation__Q24Game11BaseItemMgrFv
doAnimation__Q24Game11BaseItemMgrFv:
/* 801CF7CC 001CC70C  4E 80 00 20 */	blr 

.global doEntry__Q24Game11BaseItemMgrFv
doEntry__Q24Game11BaseItemMgrFv:
/* 801CF7D0 001CC710  4E 80 00 20 */	blr 

.global doSetView__Q24Game11BaseItemMgrFi
doSetView__Q24Game11BaseItemMgrFi:
/* 801CF7D4 001CC714  4E 80 00 20 */	blr 

.global doViewCalc__Q24Game11BaseItemMgrFv
doViewCalc__Q24Game11BaseItemMgrFv:
/* 801CF7D8 001CC718  4E 80 00 20 */	blr 

.global doSimulation__Q24Game11BaseItemMgrFf
doSimulation__Q24Game11BaseItemMgrFf:
/* 801CF7DC 001CC71C  4E 80 00 20 */	blr 

.global doDirectDraw__Q24Game11BaseItemMgrFR8Graphics
doDirectDraw__Q24Game11BaseItemMgrFR8Graphics:
/* 801CF7E0 001CC720  4E 80 00 20 */	blr 

.global "delNode__31NodeObjectMgr<Q24Game8BaseItem>FPQ24Game8BaseItem"
"delNode__31NodeObjectMgr<Q24Game8BaseItem>FPQ24Game8BaseItem":
/* 801CF7E4 001CC724  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801CF7E8 001CC728  7C 08 02 A6 */	mflr r0
/* 801CF7EC 001CC72C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF7F0 001CC730  80 63 00 30 */	lwz r3, 0x30(r3)
/* 801CF7F4 001CC734  48 00 00 1C */	b .L_801CF810
.L_801CF7F8:
/* 801CF7F8 001CC738  80 03 00 18 */	lwz r0, 0x18(r3)
/* 801CF7FC 001CC73C  7C 00 20 40 */	cmplw r0, r4
/* 801CF800 001CC740  40 82 00 0C */	bne .L_801CF80C
/* 801CF804 001CC744  48 24 1D CD */	bl del__5CNodeFv
/* 801CF808 001CC748  48 00 00 10 */	b .L_801CF818
.L_801CF80C:
/* 801CF80C 001CC74C  80 63 00 04 */	lwz r3, 4(r3)
.L_801CF810:
/* 801CF810 001CC750  28 03 00 00 */	cmplwi r3, 0
/* 801CF814 001CC754  40 82 FF E4 */	bne .L_801CF7F8
.L_801CF818:
/* 801CF818 001CC758  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF81C 001CC75C  7C 08 03 A6 */	mtlr r0
/* 801CF820 001CC760  38 21 00 10 */	addi r1, r1, 0x10
/* 801CF824 001CC764  4E 80 00 20 */	blr 

.global "resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"
"resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv":
/* 801CF828 001CC768  38 00 00 00 */	li r0, 0
/* 801CF82C 001CC76C  90 03 00 30 */	stw r0, 0x30(r3)
/* 801CF830 001CC770  90 03 00 2C */	stw r0, 0x2c(r3)
/* 801CF834 001CC774  90 03 00 28 */	stw r0, 0x28(r3)
/* 801CF838 001CC778  90 03 00 24 */	stw r0, 0x24(r3)
/* 801CF83C 001CC77C  4E 80 00 20 */	blr 

.global "doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
"doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801CF840 001CC780  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CF844 001CC784  7C 08 02 A6 */	mflr r0
/* 801CF848 001CC788  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CF84C 001CC78C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CF850 001CC790  38 00 00 00 */	li r0, 0
/* 801CF854 001CC794  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CF858 001CC798  28 00 00 00 */	cmplwi r0, 0
/* 801CF85C 001CC79C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CF860 001CC7A0  90 81 00 08 */	stw r4, 8(r1)
/* 801CF864 001CC7A4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CF868 001CC7A8  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CF86C 001CC7AC  40 82 00 1C */	bne .L_801CF888
/* 801CF870 001CC7B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF874 001CC7B4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF878 001CC7B8  7D 89 03 A6 */	mtctr r12
/* 801CF87C 001CC7BC  4E 80 04 21 */	bctrl 
/* 801CF880 001CC7C0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF884 001CC7C4  48 00 01 70 */	b .L_801CF9F4
.L_801CF888:
/* 801CF888 001CC7C8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF88C 001CC7CC  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CF890 001CC7D0  7D 89 03 A6 */	mtctr r12
/* 801CF894 001CC7D4  4E 80 04 21 */	bctrl 
/* 801CF898 001CC7D8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF89C 001CC7DC  48 00 00 58 */	b .L_801CF8F4
.L_801CF8A0:
/* 801CF8A0 001CC7E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF8A4 001CC7E4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF8A8 001CC7E8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF8AC 001CC7EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF8B0 001CC7F0  7D 89 03 A6 */	mtctr r12
/* 801CF8B4 001CC7F4  4E 80 04 21 */	bctrl 
/* 801CF8B8 001CC7F8  7C 64 1B 78 */	mr r4, r3
/* 801CF8BC 001CC7FC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF8C0 001CC800  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF8C4 001CC804  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF8C8 001CC808  7D 89 03 A6 */	mtctr r12
/* 801CF8CC 001CC80C  4E 80 04 21 */	bctrl 
/* 801CF8D0 001CC810  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF8D4 001CC814  40 82 01 20 */	bne .L_801CF9F4
/* 801CF8D8 001CC818  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF8DC 001CC81C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF8E0 001CC820  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF8E4 001CC824  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF8E8 001CC828  7D 89 03 A6 */	mtctr r12
/* 801CF8EC 001CC82C  4E 80 04 21 */	bctrl 
/* 801CF8F0 001CC830  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF8F4:
/* 801CF8F4 001CC834  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF8F8 001CC838  38 61 00 08 */	addi r3, r1, 8
/* 801CF8FC 001CC83C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF900 001CC840  7D 89 03 A6 */	mtctr r12
/* 801CF904 001CC844  4E 80 04 21 */	bctrl 
/* 801CF908 001CC848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF90C 001CC84C  41 82 FF 94 */	beq .L_801CF8A0
/* 801CF910 001CC850  48 00 00 E4 */	b .L_801CF9F4
.L_801CF914:
/* 801CF914 001CC854  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF918 001CC858  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF91C 001CC85C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF920 001CC860  7D 89 03 A6 */	mtctr r12
/* 801CF924 001CC864  4E 80 04 21 */	bctrl 
/* 801CF928 001CC868  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF92C 001CC86C  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 801CF930 001CC870  7D 89 03 A6 */	mtctr r12
/* 801CF934 001CC874  4E 80 04 21 */	bctrl 
/* 801CF938 001CC878  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CF93C 001CC87C  28 00 00 00 */	cmplwi r0, 0
/* 801CF940 001CC880  40 82 00 24 */	bne .L_801CF964
/* 801CF944 001CC884  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF948 001CC888  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF94C 001CC88C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF950 001CC890  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF954 001CC894  7D 89 03 A6 */	mtctr r12
/* 801CF958 001CC898  4E 80 04 21 */	bctrl 
/* 801CF95C 001CC89C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF960 001CC8A0  48 00 00 94 */	b .L_801CF9F4
.L_801CF964:
/* 801CF964 001CC8A4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF968 001CC8A8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF96C 001CC8AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF970 001CC8B0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF974 001CC8B4  7D 89 03 A6 */	mtctr r12
/* 801CF978 001CC8B8  4E 80 04 21 */	bctrl 
/* 801CF97C 001CC8BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CF980 001CC8C0  48 00 00 58 */	b .L_801CF9D8
.L_801CF984:
/* 801CF984 001CC8C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF988 001CC8C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF98C 001CC8CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF990 001CC8D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CF994 001CC8D4  7D 89 03 A6 */	mtctr r12
/* 801CF998 001CC8D8  4E 80 04 21 */	bctrl 
/* 801CF99C 001CC8DC  7C 64 1B 78 */	mr r4, r3
/* 801CF9A0 001CC8E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CF9A4 001CC8E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF9A8 001CC8E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CF9AC 001CC8EC  7D 89 03 A6 */	mtctr r12
/* 801CF9B0 001CC8F0  4E 80 04 21 */	bctrl 
/* 801CF9B4 001CC8F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF9B8 001CC8F8  40 82 00 3C */	bne .L_801CF9F4
/* 801CF9BC 001CC8FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF9C0 001CC900  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CF9C4 001CC904  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF9C8 001CC908  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CF9CC 001CC90C  7D 89 03 A6 */	mtctr r12
/* 801CF9D0 001CC910  4E 80 04 21 */	bctrl 
/* 801CF9D4 001CC914  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CF9D8:
/* 801CF9D8 001CC918  81 81 00 08 */	lwz r12, 8(r1)
/* 801CF9DC 001CC91C  38 61 00 08 */	addi r3, r1, 8
/* 801CF9E0 001CC920  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CF9E4 001CC924  7D 89 03 A6 */	mtctr r12
/* 801CF9E8 001CC928  4E 80 04 21 */	bctrl 
/* 801CF9EC 001CC92C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CF9F0 001CC930  41 82 FF 94 */	beq .L_801CF984
.L_801CF9F4:
/* 801CF9F4 001CC934  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CF9F8 001CC938  81 83 00 00 */	lwz r12, 0(r3)
/* 801CF9FC 001CC93C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CFA00 001CC940  7D 89 03 A6 */	mtctr r12
/* 801CFA04 001CC944  4E 80 04 21 */	bctrl 
/* 801CFA08 001CC948  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFA0C 001CC94C  7C 04 18 40 */	cmplw r4, r3
/* 801CFA10 001CC950  40 82 FF 04 */	bne .L_801CF914
/* 801CFA14 001CC954  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CFA18 001CC958  7C 08 03 A6 */	mtlr r0
/* 801CFA1C 001CC95C  38 21 00 20 */	addi r1, r1, 0x20
/* 801CFA20 001CC960  4E 80 00 20 */	blr 

.global "doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
"doEntry__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801CFA24 001CC964  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CFA28 001CC968  7C 08 02 A6 */	mflr r0
/* 801CFA2C 001CC96C  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CFA30 001CC970  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CFA34 001CC974  38 00 00 00 */	li r0, 0
/* 801CFA38 001CC978  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CFA3C 001CC97C  28 00 00 00 */	cmplwi r0, 0
/* 801CFA40 001CC980  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CFA44 001CC984  90 81 00 08 */	stw r4, 8(r1)
/* 801CFA48 001CC988  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CFA4C 001CC98C  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CFA50 001CC990  40 82 00 1C */	bne .L_801CFA6C
/* 801CFA54 001CC994  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFA58 001CC998  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFA5C 001CC99C  7D 89 03 A6 */	mtctr r12
/* 801CFA60 001CC9A0  4E 80 04 21 */	bctrl 
/* 801CFA64 001CC9A4  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFA68 001CC9A8  48 00 01 70 */	b .L_801CFBD8
.L_801CFA6C:
/* 801CFA6C 001CC9AC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFA70 001CC9B0  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFA74 001CC9B4  7D 89 03 A6 */	mtctr r12
/* 801CFA78 001CC9B8  4E 80 04 21 */	bctrl 
/* 801CFA7C 001CC9BC  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFA80 001CC9C0  48 00 00 58 */	b .L_801CFAD8
.L_801CFA84:
/* 801CFA84 001CC9C4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFA88 001CC9C8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFA8C 001CC9CC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFA90 001CC9D0  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFA94 001CC9D4  7D 89 03 A6 */	mtctr r12
/* 801CFA98 001CC9D8  4E 80 04 21 */	bctrl 
/* 801CFA9C 001CC9DC  7C 64 1B 78 */	mr r4, r3
/* 801CFAA0 001CC9E0  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFAA4 001CC9E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFAA8 001CC9E8  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFAAC 001CC9EC  7D 89 03 A6 */	mtctr r12
/* 801CFAB0 001CC9F0  4E 80 04 21 */	bctrl 
/* 801CFAB4 001CC9F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFAB8 001CC9F8  40 82 01 20 */	bne .L_801CFBD8
/* 801CFABC 001CC9FC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFAC0 001CCA00  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFAC4 001CCA04  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFAC8 001CCA08  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFACC 001CCA0C  7D 89 03 A6 */	mtctr r12
/* 801CFAD0 001CCA10  4E 80 04 21 */	bctrl 
/* 801CFAD4 001CCA14  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFAD8:
/* 801CFAD8 001CCA18  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFADC 001CCA1C  38 61 00 08 */	addi r3, r1, 8
/* 801CFAE0 001CCA20  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFAE4 001CCA24  7D 89 03 A6 */	mtctr r12
/* 801CFAE8 001CCA28  4E 80 04 21 */	bctrl 
/* 801CFAEC 001CCA2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFAF0 001CCA30  41 82 FF 94 */	beq .L_801CFA84
/* 801CFAF4 001CCA34  48 00 00 E4 */	b .L_801CFBD8
.L_801CFAF8:
/* 801CFAF8 001CCA38  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFAFC 001CCA3C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB00 001CCA40  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFB04 001CCA44  7D 89 03 A6 */	mtctr r12
/* 801CFB08 001CCA48  4E 80 04 21 */	bctrl 
/* 801CFB0C 001CCA4C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB10 001CCA50  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801CFB14 001CCA54  7D 89 03 A6 */	mtctr r12
/* 801CFB18 001CCA58  4E 80 04 21 */	bctrl 
/* 801CFB1C 001CCA5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CFB20 001CCA60  28 00 00 00 */	cmplwi r0, 0
/* 801CFB24 001CCA64  40 82 00 24 */	bne .L_801CFB48
/* 801CFB28 001CCA68  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFB2C 001CCA6C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFB30 001CCA70  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB34 001CCA74  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFB38 001CCA78  7D 89 03 A6 */	mtctr r12
/* 801CFB3C 001CCA7C  4E 80 04 21 */	bctrl 
/* 801CFB40 001CCA80  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFB44 001CCA84  48 00 00 94 */	b .L_801CFBD8
.L_801CFB48:
/* 801CFB48 001CCA88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFB4C 001CCA8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFB50 001CCA90  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB54 001CCA94  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFB58 001CCA98  7D 89 03 A6 */	mtctr r12
/* 801CFB5C 001CCA9C  4E 80 04 21 */	bctrl 
/* 801CFB60 001CCAA0  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFB64 001CCAA4  48 00 00 58 */	b .L_801CFBBC
.L_801CFB68:
/* 801CFB68 001CCAA8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFB6C 001CCAAC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFB70 001CCAB0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB74 001CCAB4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFB78 001CCAB8  7D 89 03 A6 */	mtctr r12
/* 801CFB7C 001CCABC  4E 80 04 21 */	bctrl 
/* 801CFB80 001CCAC0  7C 64 1B 78 */	mr r4, r3
/* 801CFB84 001CCAC4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFB88 001CCAC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFB8C 001CCACC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFB90 001CCAD0  7D 89 03 A6 */	mtctr r12
/* 801CFB94 001CCAD4  4E 80 04 21 */	bctrl 
/* 801CFB98 001CCAD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFB9C 001CCADC  40 82 00 3C */	bne .L_801CFBD8
/* 801CFBA0 001CCAE0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFBA4 001CCAE4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFBA8 001CCAE8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFBAC 001CCAEC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFBB0 001CCAF0  7D 89 03 A6 */	mtctr r12
/* 801CFBB4 001CCAF4  4E 80 04 21 */	bctrl 
/* 801CFBB8 001CCAF8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFBBC:
/* 801CFBBC 001CCAFC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFBC0 001CCB00  38 61 00 08 */	addi r3, r1, 8
/* 801CFBC4 001CCB04  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFBC8 001CCB08  7D 89 03 A6 */	mtctr r12
/* 801CFBCC 001CCB0C  4E 80 04 21 */	bctrl 
/* 801CFBD0 001CCB10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFBD4 001CCB14  41 82 FF 94 */	beq .L_801CFB68
.L_801CFBD8:
/* 801CFBD8 001CCB18  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFBDC 001CCB1C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFBE0 001CCB20  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CFBE4 001CCB24  7D 89 03 A6 */	mtctr r12
/* 801CFBE8 001CCB28  4E 80 04 21 */	bctrl 
/* 801CFBEC 001CCB2C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFBF0 001CCB30  7C 04 18 40 */	cmplw r4, r3
/* 801CFBF4 001CCB34  40 82 FF 04 */	bne .L_801CFAF8
/* 801CFBF8 001CCB38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CFBFC 001CCB3C  7C 08 03 A6 */	mtlr r0
/* 801CFC00 001CCB40  38 21 00 20 */	addi r1, r1, 0x20
/* 801CFC04 001CCB44  4E 80 00 20 */	blr 

.global "doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
"doSetView__27ObjectMgr<Q24Game8BaseItem>Fi":
/* 801CFC08 001CCB48  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CFC0C 001CCB4C  7C 08 02 A6 */	mflr r0
/* 801CFC10 001CCB50  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CFC14 001CCB54  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CFC18 001CCB58  38 00 00 00 */	li r0, 0
/* 801CFC1C 001CCB5C  38 A5 05 60 */	addi r5, r5, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CFC20 001CCB60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801CFC24 001CCB64  28 00 00 00 */	cmplwi r0, 0
/* 801CFC28 001CCB68  7C 9F 23 78 */	mr r31, r4
/* 801CFC2C 001CCB6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CFC30 001CCB70  90 A1 00 08 */	stw r5, 8(r1)
/* 801CFC34 001CCB74  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CFC38 001CCB78  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CFC3C 001CCB7C  40 82 00 1C */	bne .L_801CFC58
/* 801CFC40 001CCB80  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFC44 001CCB84  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFC48 001CCB88  7D 89 03 A6 */	mtctr r12
/* 801CFC4C 001CCB8C  4E 80 04 21 */	bctrl 
/* 801CFC50 001CCB90  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFC54 001CCB94  48 00 01 74 */	b .L_801CFDC8
.L_801CFC58:
/* 801CFC58 001CCB98  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFC5C 001CCB9C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFC60 001CCBA0  7D 89 03 A6 */	mtctr r12
/* 801CFC64 001CCBA4  4E 80 04 21 */	bctrl 
/* 801CFC68 001CCBA8  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFC6C 001CCBAC  48 00 00 58 */	b .L_801CFCC4
.L_801CFC70:
/* 801CFC70 001CCBB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFC74 001CCBB4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFC78 001CCBB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFC7C 001CCBBC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFC80 001CCBC0  7D 89 03 A6 */	mtctr r12
/* 801CFC84 001CCBC4  4E 80 04 21 */	bctrl 
/* 801CFC88 001CCBC8  7C 64 1B 78 */	mr r4, r3
/* 801CFC8C 001CCBCC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFC90 001CCBD0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFC94 001CCBD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFC98 001CCBD8  7D 89 03 A6 */	mtctr r12
/* 801CFC9C 001CCBDC  4E 80 04 21 */	bctrl 
/* 801CFCA0 001CCBE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFCA4 001CCBE4  40 82 01 24 */	bne .L_801CFDC8
/* 801CFCA8 001CCBE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFCAC 001CCBEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFCB0 001CCBF0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFCB4 001CCBF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFCB8 001CCBF8  7D 89 03 A6 */	mtctr r12
/* 801CFCBC 001CCBFC  4E 80 04 21 */	bctrl 
/* 801CFCC0 001CCC00  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFCC4:
/* 801CFCC4 001CCC04  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFCC8 001CCC08  38 61 00 08 */	addi r3, r1, 8
/* 801CFCCC 001CCC0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFCD0 001CCC10  7D 89 03 A6 */	mtctr r12
/* 801CFCD4 001CCC14  4E 80 04 21 */	bctrl 
/* 801CFCD8 001CCC18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFCDC 001CCC1C  41 82 FF 94 */	beq .L_801CFC70
/* 801CFCE0 001CCC20  48 00 00 E8 */	b .L_801CFDC8
.L_801CFCE4:
/* 801CFCE4 001CCC24  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFCE8 001CCC28  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFCEC 001CCC2C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFCF0 001CCC30  7D 89 03 A6 */	mtctr r12
/* 801CFCF4 001CCC34  4E 80 04 21 */	bctrl 
/* 801CFCF8 001CCC38  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFCFC 001CCC3C  7F E4 FB 78 */	mr r4, r31
/* 801CFD00 001CCC40  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 801CFD04 001CCC44  7D 89 03 A6 */	mtctr r12
/* 801CFD08 001CCC48  4E 80 04 21 */	bctrl 
/* 801CFD0C 001CCC4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CFD10 001CCC50  28 00 00 00 */	cmplwi r0, 0
/* 801CFD14 001CCC54  40 82 00 24 */	bne .L_801CFD38
/* 801CFD18 001CCC58  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFD1C 001CCC5C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFD20 001CCC60  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFD24 001CCC64  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFD28 001CCC68  7D 89 03 A6 */	mtctr r12
/* 801CFD2C 001CCC6C  4E 80 04 21 */	bctrl 
/* 801CFD30 001CCC70  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFD34 001CCC74  48 00 00 94 */	b .L_801CFDC8
.L_801CFD38:
/* 801CFD38 001CCC78  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFD3C 001CCC7C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFD40 001CCC80  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFD44 001CCC84  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFD48 001CCC88  7D 89 03 A6 */	mtctr r12
/* 801CFD4C 001CCC8C  4E 80 04 21 */	bctrl 
/* 801CFD50 001CCC90  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFD54 001CCC94  48 00 00 58 */	b .L_801CFDAC
.L_801CFD58:
/* 801CFD58 001CCC98  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFD5C 001CCC9C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFD60 001CCCA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFD64 001CCCA4  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFD68 001CCCA8  7D 89 03 A6 */	mtctr r12
/* 801CFD6C 001CCCAC  4E 80 04 21 */	bctrl 
/* 801CFD70 001CCCB0  7C 64 1B 78 */	mr r4, r3
/* 801CFD74 001CCCB4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFD78 001CCCB8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFD7C 001CCCBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFD80 001CCCC0  7D 89 03 A6 */	mtctr r12
/* 801CFD84 001CCCC4  4E 80 04 21 */	bctrl 
/* 801CFD88 001CCCC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFD8C 001CCCCC  40 82 00 3C */	bne .L_801CFDC8
/* 801CFD90 001CCCD0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFD94 001CCCD4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFD98 001CCCD8  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFD9C 001CCCDC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFDA0 001CCCE0  7D 89 03 A6 */	mtctr r12
/* 801CFDA4 001CCCE4  4E 80 04 21 */	bctrl 
/* 801CFDA8 001CCCE8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFDAC:
/* 801CFDAC 001CCCEC  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFDB0 001CCCF0  38 61 00 08 */	addi r3, r1, 8
/* 801CFDB4 001CCCF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFDB8 001CCCF8  7D 89 03 A6 */	mtctr r12
/* 801CFDBC 001CCCFC  4E 80 04 21 */	bctrl 
/* 801CFDC0 001CCD00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFDC4 001CCD04  41 82 FF 94 */	beq .L_801CFD58
.L_801CFDC8:
/* 801CFDC8 001CCD08  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFDCC 001CCD0C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFDD0 001CCD10  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CFDD4 001CCD14  7D 89 03 A6 */	mtctr r12
/* 801CFDD8 001CCD18  4E 80 04 21 */	bctrl 
/* 801CFDDC 001CCD1C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFDE0 001CCD20  7C 04 18 40 */	cmplw r4, r3
/* 801CFDE4 001CCD24  40 82 FF 00 */	bne .L_801CFCE4
/* 801CFDE8 001CCD28  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CFDEC 001CCD2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801CFDF0 001CCD30  7C 08 03 A6 */	mtlr r0
/* 801CFDF4 001CCD34  38 21 00 20 */	addi r1, r1, 0x20
/* 801CFDF8 001CCD38  4E 80 00 20 */	blr 

.global "doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
"doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801CFDFC 001CCD3C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CFE00 001CCD40  7C 08 02 A6 */	mflr r0
/* 801CFE04 001CCD44  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CFE08 001CCD48  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CFE0C 001CCD4C  38 00 00 00 */	li r0, 0
/* 801CFE10 001CCD50  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CFE14 001CCD54  28 00 00 00 */	cmplwi r0, 0
/* 801CFE18 001CCD58  90 01 00 14 */	stw r0, 0x14(r1)
/* 801CFE1C 001CCD5C  90 81 00 08 */	stw r4, 8(r1)
/* 801CFE20 001CCD60  90 01 00 0C */	stw r0, 0xc(r1)
/* 801CFE24 001CCD64  90 61 00 10 */	stw r3, 0x10(r1)
/* 801CFE28 001CCD68  40 82 00 1C */	bne .L_801CFE44
/* 801CFE2C 001CCD6C  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFE30 001CCD70  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFE34 001CCD74  7D 89 03 A6 */	mtctr r12
/* 801CFE38 001CCD78  4E 80 04 21 */	bctrl 
/* 801CFE3C 001CCD7C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFE40 001CCD80  48 00 01 70 */	b .L_801CFFB0
.L_801CFE44:
/* 801CFE44 001CCD84  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFE48 001CCD88  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801CFE4C 001CCD8C  7D 89 03 A6 */	mtctr r12
/* 801CFE50 001CCD90  4E 80 04 21 */	bctrl 
/* 801CFE54 001CCD94  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFE58 001CCD98  48 00 00 58 */	b .L_801CFEB0
.L_801CFE5C:
/* 801CFE5C 001CCD9C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFE60 001CCDA0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFE64 001CCDA4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFE68 001CCDA8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFE6C 001CCDAC  7D 89 03 A6 */	mtctr r12
/* 801CFE70 001CCDB0  4E 80 04 21 */	bctrl 
/* 801CFE74 001CCDB4  7C 64 1B 78 */	mr r4, r3
/* 801CFE78 001CCDB8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFE7C 001CCDBC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFE80 001CCDC0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFE84 001CCDC4  7D 89 03 A6 */	mtctr r12
/* 801CFE88 001CCDC8  4E 80 04 21 */	bctrl 
/* 801CFE8C 001CCDCC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFE90 001CCDD0  40 82 01 20 */	bne .L_801CFFB0
/* 801CFE94 001CCDD4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFE98 001CCDD8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFE9C 001CCDDC  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFEA0 001CCDE0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFEA4 001CCDE4  7D 89 03 A6 */	mtctr r12
/* 801CFEA8 001CCDE8  4E 80 04 21 */	bctrl 
/* 801CFEAC 001CCDEC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFEB0:
/* 801CFEB0 001CCDF0  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFEB4 001CCDF4  38 61 00 08 */	addi r3, r1, 8
/* 801CFEB8 001CCDF8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFEBC 001CCDFC  7D 89 03 A6 */	mtctr r12
/* 801CFEC0 001CCE00  4E 80 04 21 */	bctrl 
/* 801CFEC4 001CCE04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFEC8 001CCE08  41 82 FF 94 */	beq .L_801CFE5C
/* 801CFECC 001CCE0C  48 00 00 E4 */	b .L_801CFFB0
.L_801CFED0:
/* 801CFED0 001CCE10  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFED4 001CCE14  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFED8 001CCE18  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFEDC 001CCE1C  7D 89 03 A6 */	mtctr r12
/* 801CFEE0 001CCE20  4E 80 04 21 */	bctrl 
/* 801CFEE4 001CCE24  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFEE8 001CCE28  81 8C 00 48 */	lwz r12, 0x48(r12)
/* 801CFEEC 001CCE2C  7D 89 03 A6 */	mtctr r12
/* 801CFEF0 001CCE30  4E 80 04 21 */	bctrl 
/* 801CFEF4 001CCE34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801CFEF8 001CCE38  28 00 00 00 */	cmplwi r0, 0
/* 801CFEFC 001CCE3C  40 82 00 24 */	bne .L_801CFF20
/* 801CFF00 001CCE40  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFF04 001CCE44  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFF08 001CCE48  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFF0C 001CCE4C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFF10 001CCE50  7D 89 03 A6 */	mtctr r12
/* 801CFF14 001CCE54  4E 80 04 21 */	bctrl 
/* 801CFF18 001CCE58  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFF1C 001CCE5C  48 00 00 94 */	b .L_801CFFB0
.L_801CFF20:
/* 801CFF20 001CCE60  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFF24 001CCE64  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFF28 001CCE68  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFF2C 001CCE6C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFF30 001CCE70  7D 89 03 A6 */	mtctr r12
/* 801CFF34 001CCE74  4E 80 04 21 */	bctrl 
/* 801CFF38 001CCE78  90 61 00 0C */	stw r3, 0xc(r1)
/* 801CFF3C 001CCE7C  48 00 00 58 */	b .L_801CFF94
.L_801CFF40:
/* 801CFF40 001CCE80  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFF44 001CCE84  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFF48 001CCE88  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFF4C 001CCE8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801CFF50 001CCE90  7D 89 03 A6 */	mtctr r12
/* 801CFF54 001CCE94  4E 80 04 21 */	bctrl 
/* 801CFF58 001CCE98  7C 64 1B 78 */	mr r4, r3
/* 801CFF5C 001CCE9C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801CFF60 001CCEA0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFF64 001CCEA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 801CFF68 001CCEA8  7D 89 03 A6 */	mtctr r12
/* 801CFF6C 001CCEAC  4E 80 04 21 */	bctrl 
/* 801CFF70 001CCEB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFF74 001CCEB4  40 82 00 3C */	bne .L_801CFFB0
/* 801CFF78 001CCEB8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFF7C 001CCEBC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFF80 001CCEC0  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFF84 001CCEC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801CFF88 001CCEC8  7D 89 03 A6 */	mtctr r12
/* 801CFF8C 001CCECC  4E 80 04 21 */	bctrl 
/* 801CFF90 001CCED0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801CFF94:
/* 801CFF94 001CCED4  81 81 00 08 */	lwz r12, 8(r1)
/* 801CFF98 001CCED8  38 61 00 08 */	addi r3, r1, 8
/* 801CFF9C 001CCEDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801CFFA0 001CCEE0  7D 89 03 A6 */	mtctr r12
/* 801CFFA4 001CCEE4  4E 80 04 21 */	bctrl 
/* 801CFFA8 001CCEE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801CFFAC 001CCEEC  41 82 FF 94 */	beq .L_801CFF40
.L_801CFFB0:
/* 801CFFB0 001CCEF0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801CFFB4 001CCEF4  81 83 00 00 */	lwz r12, 0(r3)
/* 801CFFB8 001CCEF8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801CFFBC 001CCEFC  7D 89 03 A6 */	mtctr r12
/* 801CFFC0 001CCF00  4E 80 04 21 */	bctrl 
/* 801CFFC4 001CCF04  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801CFFC8 001CCF08  7C 04 18 40 */	cmplw r4, r3
/* 801CFFCC 001CCF0C  40 82 FF 04 */	bne .L_801CFED0
/* 801CFFD0 001CCF10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801CFFD4 001CCF14  7C 08 03 A6 */	mtlr r0
/* 801CFFD8 001CCF18  38 21 00 20 */	addi r1, r1, 0x20
/* 801CFFDC 001CCF1C  4E 80 00 20 */	blr 

.global "doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
"doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff":
/* 801CFFE0 001CCF20  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801CFFE4 001CCF24  7C 08 02 A6 */	mflr r0
/* 801CFFE8 001CCF28  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801CFFEC 001CCF2C  90 01 00 24 */	stw r0, 0x24(r1)
/* 801CFFF0 001CCF30  38 00 00 00 */	li r0, 0
/* 801CFFF4 001CCF34  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801CFFF8 001CCF38  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 801CFFFC 001CCF3C  FF E0 08 90 */	fmr f31, f1
/* 801D0000 001CCF40  28 00 00 00 */	cmplwi r0, 0
/* 801D0004 001CCF44  90 81 00 08 */	stw r4, 8(r1)
/* 801D0008 001CCF48  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D000C 001CCF4C  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D0010 001CCF50  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D0014 001CCF54  40 82 00 1C */	bne .L_801D0030
/* 801D0018 001CCF58  81 83 00 00 */	lwz r12, 0(r3)
/* 801D001C 001CCF5C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D0020 001CCF60  7D 89 03 A6 */	mtctr r12
/* 801D0024 001CCF64  4E 80 04 21 */	bctrl 
/* 801D0028 001CCF68  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D002C 001CCF6C  48 00 01 74 */	b .L_801D01A0
.L_801D0030:
/* 801D0030 001CCF70  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0034 001CCF74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D0038 001CCF78  7D 89 03 A6 */	mtctr r12
/* 801D003C 001CCF7C  4E 80 04 21 */	bctrl 
/* 801D0040 001CCF80  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D0044 001CCF84  48 00 00 58 */	b .L_801D009C
.L_801D0048:
/* 801D0048 001CCF88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D004C 001CCF8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0050 001CCF90  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0054 001CCF94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D0058 001CCF98  7D 89 03 A6 */	mtctr r12
/* 801D005C 001CCF9C  4E 80 04 21 */	bctrl 
/* 801D0060 001CCFA0  7C 64 1B 78 */	mr r4, r3
/* 801D0064 001CCFA4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D0068 001CCFA8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D006C 001CCFAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D0070 001CCFB0  7D 89 03 A6 */	mtctr r12
/* 801D0074 001CCFB4  4E 80 04 21 */	bctrl 
/* 801D0078 001CCFB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D007C 001CCFBC  40 82 01 24 */	bne .L_801D01A0
/* 801D0080 001CCFC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0084 001CCFC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0088 001CCFC8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D008C 001CCFCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0090 001CCFD0  7D 89 03 A6 */	mtctr r12
/* 801D0094 001CCFD4  4E 80 04 21 */	bctrl 
/* 801D0098 001CCFD8  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D009C:
/* 801D009C 001CCFDC  81 81 00 08 */	lwz r12, 8(r1)
/* 801D00A0 001CCFE0  38 61 00 08 */	addi r3, r1, 8
/* 801D00A4 001CCFE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D00A8 001CCFE8  7D 89 03 A6 */	mtctr r12
/* 801D00AC 001CCFEC  4E 80 04 21 */	bctrl 
/* 801D00B0 001CCFF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D00B4 001CCFF4  41 82 FF 94 */	beq .L_801D0048
/* 801D00B8 001CCFF8  48 00 00 E8 */	b .L_801D01A0
.L_801D00BC:
/* 801D00BC 001CCFFC  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D00C0 001CD000  81 83 00 00 */	lwz r12, 0(r3)
/* 801D00C4 001CD004  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D00C8 001CD008  7D 89 03 A6 */	mtctr r12
/* 801D00CC 001CD00C  4E 80 04 21 */	bctrl 
/* 801D00D0 001CD010  81 83 00 00 */	lwz r12, 0(r3)
/* 801D00D4 001CD014  FC 20 F8 90 */	fmr f1, f31
/* 801D00D8 001CD018  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 801D00DC 001CD01C  7D 89 03 A6 */	mtctr r12
/* 801D00E0 001CD020  4E 80 04 21 */	bctrl 
/* 801D00E4 001CD024  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D00E8 001CD028  28 00 00 00 */	cmplwi r0, 0
/* 801D00EC 001CD02C  40 82 00 24 */	bne .L_801D0110
/* 801D00F0 001CD030  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D00F4 001CD034  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D00F8 001CD038  81 83 00 00 */	lwz r12, 0(r3)
/* 801D00FC 001CD03C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0100 001CD040  7D 89 03 A6 */	mtctr r12
/* 801D0104 001CD044  4E 80 04 21 */	bctrl 
/* 801D0108 001CD048  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D010C 001CD04C  48 00 00 94 */	b .L_801D01A0
.L_801D0110:
/* 801D0110 001CD050  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0114 001CD054  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0118 001CD058  81 83 00 00 */	lwz r12, 0(r3)
/* 801D011C 001CD05C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0120 001CD060  7D 89 03 A6 */	mtctr r12
/* 801D0124 001CD064  4E 80 04 21 */	bctrl 
/* 801D0128 001CD068  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D012C 001CD06C  48 00 00 58 */	b .L_801D0184
.L_801D0130:
/* 801D0130 001CD070  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0134 001CD074  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0138 001CD078  81 83 00 00 */	lwz r12, 0(r3)
/* 801D013C 001CD07C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D0140 001CD080  7D 89 03 A6 */	mtctr r12
/* 801D0144 001CD084  4E 80 04 21 */	bctrl 
/* 801D0148 001CD088  7C 64 1B 78 */	mr r4, r3
/* 801D014C 001CD08C  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D0150 001CD090  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0154 001CD094  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D0158 001CD098  7D 89 03 A6 */	mtctr r12
/* 801D015C 001CD09C  4E 80 04 21 */	bctrl 
/* 801D0160 001CD0A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D0164 001CD0A4  40 82 00 3C */	bne .L_801D01A0
/* 801D0168 001CD0A8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D016C 001CD0AC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0170 001CD0B0  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0174 001CD0B4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0178 001CD0B8  7D 89 03 A6 */	mtctr r12
/* 801D017C 001CD0BC  4E 80 04 21 */	bctrl 
/* 801D0180 001CD0C0  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D0184:
/* 801D0184 001CD0C4  81 81 00 08 */	lwz r12, 8(r1)
/* 801D0188 001CD0C8  38 61 00 08 */	addi r3, r1, 8
/* 801D018C 001CD0CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D0190 001CD0D0  7D 89 03 A6 */	mtctr r12
/* 801D0194 001CD0D4  4E 80 04 21 */	bctrl 
/* 801D0198 001CD0D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D019C 001CD0DC  41 82 FF 94 */	beq .L_801D0130
.L_801D01A0:
/* 801D01A0 001CD0E0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D01A4 001CD0E4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D01A8 001CD0E8  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D01AC 001CD0EC  7D 89 03 A6 */	mtctr r12
/* 801D01B0 001CD0F0  4E 80 04 21 */	bctrl 
/* 801D01B4 001CD0F4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D01B8 001CD0F8  7C 04 18 40 */	cmplw r4, r3
/* 801D01BC 001CD0FC  40 82 FF 00 */	bne .L_801D00BC
/* 801D01C0 001CD100  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D01C4 001CD104  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 801D01C8 001CD108  7C 08 03 A6 */	mtlr r0
/* 801D01CC 001CD10C  38 21 00 20 */	addi r1, r1, 0x20
/* 801D01D0 001CD110  4E 80 00 20 */	blr 

.global "doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
"doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics":
/* 801D01D4 001CD114  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801D01D8 001CD118  7C 08 02 A6 */	mflr r0
/* 801D01DC 001CD11C  3C A0 80 4B */	lis r5, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 801D01E0 001CD120  90 01 00 24 */	stw r0, 0x24(r1)
/* 801D01E4 001CD124  38 00 00 00 */	li r0, 0
/* 801D01E8 001CD128  38 A5 05 60 */	addi r5, r5, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 801D01EC 001CD12C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801D01F0 001CD130  28 00 00 00 */	cmplwi r0, 0
/* 801D01F4 001CD134  7C 9F 23 78 */	mr r31, r4
/* 801D01F8 001CD138  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D01FC 001CD13C  90 A1 00 08 */	stw r5, 8(r1)
/* 801D0200 001CD140  90 01 00 0C */	stw r0, 0xc(r1)
/* 801D0204 001CD144  90 61 00 10 */	stw r3, 0x10(r1)
/* 801D0208 001CD148  40 82 00 1C */	bne .L_801D0224
/* 801D020C 001CD14C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0210 001CD150  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D0214 001CD154  7D 89 03 A6 */	mtctr r12
/* 801D0218 001CD158  4E 80 04 21 */	bctrl 
/* 801D021C 001CD15C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D0220 001CD160  48 00 01 74 */	b .L_801D0394
.L_801D0224:
/* 801D0224 001CD164  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0228 001CD168  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801D022C 001CD16C  7D 89 03 A6 */	mtctr r12
/* 801D0230 001CD170  4E 80 04 21 */	bctrl 
/* 801D0234 001CD174  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D0238 001CD178  48 00 00 58 */	b .L_801D0290
.L_801D023C:
/* 801D023C 001CD17C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0240 001CD180  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0244 001CD184  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0248 001CD188  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D024C 001CD18C  7D 89 03 A6 */	mtctr r12
/* 801D0250 001CD190  4E 80 04 21 */	bctrl 
/* 801D0254 001CD194  7C 64 1B 78 */	mr r4, r3
/* 801D0258 001CD198  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D025C 001CD19C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0260 001CD1A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D0264 001CD1A4  7D 89 03 A6 */	mtctr r12
/* 801D0268 001CD1A8  4E 80 04 21 */	bctrl 
/* 801D026C 001CD1AC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D0270 001CD1B0  40 82 01 24 */	bne .L_801D0394
/* 801D0274 001CD1B4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0278 001CD1B8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D027C 001CD1BC  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0280 001CD1C0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0284 001CD1C4  7D 89 03 A6 */	mtctr r12
/* 801D0288 001CD1C8  4E 80 04 21 */	bctrl 
/* 801D028C 001CD1CC  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D0290:
/* 801D0290 001CD1D0  81 81 00 08 */	lwz r12, 8(r1)
/* 801D0294 001CD1D4  38 61 00 08 */	addi r3, r1, 8
/* 801D0298 001CD1D8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D029C 001CD1DC  7D 89 03 A6 */	mtctr r12
/* 801D02A0 001CD1E0  4E 80 04 21 */	bctrl 
/* 801D02A4 001CD1E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D02A8 001CD1E8  41 82 FF 94 */	beq .L_801D023C
/* 801D02AC 001CD1EC  48 00 00 E8 */	b .L_801D0394
.L_801D02B0:
/* 801D02B0 001CD1F0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D02B4 001CD1F4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D02B8 001CD1F8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D02BC 001CD1FC  7D 89 03 A6 */	mtctr r12
/* 801D02C0 001CD200  4E 80 04 21 */	bctrl 
/* 801D02C4 001CD204  81 83 00 00 */	lwz r12, 0(r3)
/* 801D02C8 001CD208  7F E4 FB 78 */	mr r4, r31
/* 801D02CC 001CD20C  81 8C 00 50 */	lwz r12, 0x50(r12)
/* 801D02D0 001CD210  7D 89 03 A6 */	mtctr r12
/* 801D02D4 001CD214  4E 80 04 21 */	bctrl 
/* 801D02D8 001CD218  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D02DC 001CD21C  28 00 00 00 */	cmplwi r0, 0
/* 801D02E0 001CD220  40 82 00 24 */	bne .L_801D0304
/* 801D02E4 001CD224  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D02E8 001CD228  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D02EC 001CD22C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D02F0 001CD230  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D02F4 001CD234  7D 89 03 A6 */	mtctr r12
/* 801D02F8 001CD238  4E 80 04 21 */	bctrl 
/* 801D02FC 001CD23C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D0300 001CD240  48 00 00 94 */	b .L_801D0394
.L_801D0304:
/* 801D0304 001CD244  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0308 001CD248  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D030C 001CD24C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0310 001CD250  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D0314 001CD254  7D 89 03 A6 */	mtctr r12
/* 801D0318 001CD258  4E 80 04 21 */	bctrl 
/* 801D031C 001CD25C  90 61 00 0C */	stw r3, 0xc(r1)
/* 801D0320 001CD260  48 00 00 58 */	b .L_801D0378
.L_801D0324:
/* 801D0324 001CD264  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0328 001CD268  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D032C 001CD26C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0330 001CD270  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D0334 001CD274  7D 89 03 A6 */	mtctr r12
/* 801D0338 001CD278  4E 80 04 21 */	bctrl 
/* 801D033C 001CD27C  7C 64 1B 78 */	mr r4, r3
/* 801D0340 001CD280  80 61 00 14 */	lwz r3, 0x14(r1)
/* 801D0344 001CD284  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0348 001CD288  81 8C 00 08 */	lwz r12, 8(r12)
/* 801D034C 001CD28C  7D 89 03 A6 */	mtctr r12
/* 801D0350 001CD290  4E 80 04 21 */	bctrl 
/* 801D0354 001CD294  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D0358 001CD298  40 82 00 3C */	bne .L_801D0394
/* 801D035C 001CD29C  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0360 001CD2A0  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D0364 001CD2A4  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0368 001CD2A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801D036C 001CD2AC  7D 89 03 A6 */	mtctr r12
/* 801D0370 001CD2B0  4E 80 04 21 */	bctrl 
/* 801D0374 001CD2B4  90 61 00 0C */	stw r3, 0xc(r1)
.L_801D0378:
/* 801D0378 001CD2B8  81 81 00 08 */	lwz r12, 8(r1)
/* 801D037C 001CD2BC  38 61 00 08 */	addi r3, r1, 8
/* 801D0380 001CD2C0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801D0384 001CD2C4  7D 89 03 A6 */	mtctr r12
/* 801D0388 001CD2C8  4E 80 04 21 */	bctrl 
/* 801D038C 001CD2CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801D0390 001CD2D0  41 82 FF 94 */	beq .L_801D0324
.L_801D0394:
/* 801D0394 001CD2D4  80 61 00 10 */	lwz r3, 0x10(r1)
/* 801D0398 001CD2D8  81 83 00 00 */	lwz r12, 0(r3)
/* 801D039C 001CD2DC  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801D03A0 001CD2E0  7D 89 03 A6 */	mtctr r12
/* 801D03A4 001CD2E4  4E 80 04 21 */	bctrl 
/* 801D03A8 001CD2E8  80 81 00 0C */	lwz r4, 0xc(r1)
/* 801D03AC 001CD2EC  7C 04 18 40 */	cmplw r4, r3
/* 801D03B0 001CD2F0  40 82 FF 00 */	bne .L_801D02B0
/* 801D03B4 001CD2F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801D03B8 001CD2F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801D03BC 001CD2FC  7C 08 03 A6 */	mtlr r0
/* 801D03C0 001CD300  38 21 00 20 */	addi r1, r1, 0x20
/* 801D03C4 001CD304  4E 80 00 20 */	blr 

.global "getObject__27Container<Q24Game8BaseItem>FPv"
"getObject__27Container<Q24Game8BaseItem>FPv":
/* 801D03C8 001CD308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D03CC 001CD30C  7C 08 02 A6 */	mflr r0
/* 801D03D0 001CD310  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D03D4 001CD314  81 83 00 00 */	lwz r12, 0(r3)
/* 801D03D8 001CD318  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801D03DC 001CD31C  7D 89 03 A6 */	mtctr r12
/* 801D03E0 001CD320  4E 80 04 21 */	bctrl 
/* 801D03E4 001CD324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D03E8 001CD328  7C 08 03 A6 */	mtlr r0
/* 801D03EC 001CD32C  38 21 00 10 */	addi r1, r1, 0x10
/* 801D03F0 001CD330  4E 80 00 20 */	blr 

.global "getAt__27Container<Q24Game8BaseItem>Fi"
"getAt__27Container<Q24Game8BaseItem>Fi":
/* 801D03F4 001CD334  38 60 00 00 */	li r3, 0
/* 801D03F8 001CD338  4E 80 00 20 */	blr 

.global "getTo__27Container<Q24Game8BaseItem>Fv"
"getTo__27Container<Q24Game8BaseItem>Fv":
/* 801D03FC 001CD33C  38 60 00 00 */	li r3, 0
/* 801D0400 001CD340  4E 80 00 20 */	blr 

.global "exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"exec__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801D0404 001CD344  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801D0408 001CD348  7C 08 02 A6 */	mflr r0
/* 801D040C 001CD34C  90 01 00 14 */	stw r0, 0x14(r1)
/* 801D0410 001CD350  80 64 01 DC */	lwz r3, 0x1dc(r4)
/* 801D0414 001CD354  28 03 00 00 */	cmplwi r3, 0
/* 801D0418 001CD358  41 82 00 14 */	beq .L_801D042C
/* 801D041C 001CD35C  81 83 00 00 */	lwz r12, 0(r3)
/* 801D0420 001CD360  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 801D0424 001CD364  7D 89 03 A6 */	mtctr r12
/* 801D0428 001CD368  4E 80 04 21 */	bctrl 
.L_801D042C:
/* 801D042C 001CD36C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801D0430 001CD370  7C 08 03 A6 */	mtlr r0
/* 801D0434 001CD374  38 21 00 10 */	addi r1, r1, 0x10
/* 801D0438 001CD378  4E 80 00 20 */	blr 

.global "exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem"
"exec__Q24Game26FSMState<Q24Game8CFSMItem>FPQ24Game8CFSMItem":
/* 801D043C 001CD37C  4E 80 00 20 */	blr 

.global "@376@onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent"
"@376@onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent":
/* 801D0440 001CD380  38 63 FE 88 */	addi r3, r3, -376
/* 801D0444 001CD384  4B FF C6 EC */	b onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent

.global "@28@resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"
"@28@resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv":
/* 801D0448 001CD388  38 63 FF E4 */	addi r3, r3, -28
/* 801D044C 001CD38C  4B FF F3 DC */	b "resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"

.global "@28@doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
"@28@doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics":
/* 801D0450 001CD390  38 63 FF E4 */	addi r3, r3, -28
/* 801D0454 001CD394  4B FF FD 80 */	b "doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"

.global "@28@doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
"@28@doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff":
/* 801D0458 001CD398  38 63 FF E4 */	addi r3, r3, -28
/* 801D045C 001CD39C  4B FF FB 84 */	b "doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"

.global "@28@doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
"@28@doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801D0460 001CD3A0  38 63 FF E4 */	addi r3, r3, -28
/* 801D0464 001CD3A4  4B FF F9 98 */	b "doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"

.global "@28@doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
"@28@doSetView__27ObjectMgr<Q24Game8BaseItem>Fi":
/* 801D0468 001CD3A8  38 63 FF E4 */	addi r3, r3, -28
/* 801D046C 001CD3AC  4B FF F7 9C */	b "doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"

.global "@28@doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
"@28@doEntry__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801D0470 001CD3B0  38 63 FF E4 */	addi r3, r3, -28
/* 801D0474 001CD3B4  4B FF F5 B0 */	b "doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"

.global "@28@doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
"@28@doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv":
/* 801D0478 001CD3B8  38 63 FF E4 */	addi r3, r3, -28
/* 801D047C 001CD3BC  4B FF F3 C4 */	b "doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"

.global "@48@getEnd__Q24Game12TNodeItemMgrFv"
"@48@getEnd__Q24Game12TNodeItemMgrFv":
/* 801D0480 001CD3C0  38 63 FF D0 */	addi r3, r3, -48
/* 801D0484 001CD3C4  4B FF F2 78 */	b getEnd__Q24Game12TNodeItemMgrFv

.global "@48@getStart__Q24Game12TNodeItemMgrFv"
"@48@getStart__Q24Game12TNodeItemMgrFv":
/* 801D0488 001CD3C8  38 63 FF D0 */	addi r3, r3, -48
/* 801D048C 001CD3CC  4B FF F2 A4 */	b getStart__Q24Game12TNodeItemMgrFv

.global "@48@getNext__Q24Game12TNodeItemMgrFPv"
"@48@getNext__Q24Game12TNodeItemMgrFPv":
/* 801D0490 001CD3D0  38 63 FF D0 */	addi r3, r3, -48
/* 801D0494 001CD3D4  4B FF F2 D0 */	b getNext__Q24Game12TNodeItemMgrFPv

.global "@48@get__Q24Game12TNodeItemMgrFPv"
"@48@get__Q24Game12TNodeItemMgrFPv":
/* 801D0498 001CD3D8  38 63 FF D0 */	addi r3, r3, -48
/* 801D049C 001CD3DC  4B FF F2 FC */	b get__Q24Game12TNodeItemMgrFPv

.global "@48@__dt__Q24Game12TNodeItemMgrFv"
"@48@__dt__Q24Game12TNodeItemMgrFv":
/* 801D04A0 001CD3E0  38 63 FF D0 */	addi r3, r3, -48
/* 801D04A4 001CD3E4  4B FF F0 10 */	b __dt__Q24Game12TNodeItemMgrFv

.global "@28@loadResources__Q24Game7ItemMgrFv"
"@28@loadResources__Q24Game7ItemMgrFv":
/* 801D04A8 001CD3E8  38 63 FF E4 */	addi r3, r3, -28
/* 801D04AC 001CD3EC  4B FF E7 FC */	b loadResources__Q24Game7ItemMgrFv

.global "@28@doSimpleDraw__Q24Game7ItemMgrFP8Viewport"
"@28@doSimpleDraw__Q24Game7ItemMgrFP8Viewport":
/* 801D04B0 001CD3F0  38 63 FF E4 */	addi r3, r3, -28
/* 801D04B4 001CD3F4  4B FF E4 1C */	b doSimpleDraw__Q24Game7ItemMgrFP8Viewport

.global "@28@doDirectDraw__Q24Game7ItemMgrFR8Graphics"
"@28@doDirectDraw__Q24Game7ItemMgrFR8Graphics":
/* 801D04B8 001CD3F8  38 63 FF E4 */	addi r3, r3, -28
/* 801D04BC 001CD3FC  4B FF E4 10 */	b doDirectDraw__Q24Game7ItemMgrFR8Graphics

.global "@28@doSimulation__Q24Game7ItemMgrFf"
"@28@doSimulation__Q24Game7ItemMgrFf":
/* 801D04C0 001CD400  38 63 FF E4 */	addi r3, r3, -28
/* 801D04C4 001CD404  4B FF E2 14 */	b doSimulation__Q24Game7ItemMgrFf

.global "@28@doViewCalc__Q24Game7ItemMgrFv"
"@28@doViewCalc__Q24Game7ItemMgrFv":
/* 801D04C8 001CD408  38 63 FF E4 */	addi r3, r3, -28
/* 801D04CC 001CD40C  4B FF E0 28 */	b doViewCalc__Q24Game7ItemMgrFv

.global "@28@doSetView__Q24Game7ItemMgrFi"
"@28@doSetView__Q24Game7ItemMgrFi":
/* 801D04D0 001CD410  38 63 FF E4 */	addi r3, r3, -28
/* 801D04D4 001CD414  4B FF DE 2C */	b doSetView__Q24Game7ItemMgrFi

.global "@28@doEntry__Q24Game7ItemMgrFv"
"@28@doEntry__Q24Game7ItemMgrFv":
/* 801D04D8 001CD418  38 63 FF E4 */	addi r3, r3, -28
/* 801D04DC 001CD41C  4B FF DC 40 */	b doEntry__Q24Game7ItemMgrFv

.global "@28@doAnimation__Q24Game7ItemMgrFv"
"@28@doAnimation__Q24Game7ItemMgrFv":
/* 801D04E0 001CD420  38 63 FF E4 */	addi r3, r3, -28
/* 801D04E4 001CD424  4B FF DA 54 */	b doAnimation__Q24Game7ItemMgrFv
