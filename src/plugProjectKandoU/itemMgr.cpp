#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Game/AILOD.h"
#include "Game/BaseItem.h"
#include "Game/Creature.h"
#include "Game/Interaction.h"
#include "Game/MapMgr.h"
#include "Game/MoveInfo.h"
#include "Game/PlatInstance.h"
#include "Game/itemMgr.h"
#include "Game/StateMachine.h"
#include "Iterator.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/JAudio/JAI/JAInter/Object.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DMtxCalc.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "LoadResource.h"
#include "ObjectMgr.h"
#include "P2Macros.h"
#include "PSM/CreatureObj.h"
#include "PSM/ObjMgr.h"
#include "PSSystem/PSCommon.h"
#include "PlatAttacher.h"
#include "Platform.h"
#include "SysShape/AnimMgr.h"
#include "SysShape/Model.h"
#include "System.h"
#include "stream.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
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
        .4byte
   generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .4byte 0 .4byte 0 .4byte
   "@48@__dt__Q24Game12TNodeItemMgrFv" .4byte getChildCount__5CNodeFv .4byte
   "getObject__27Container<Q24Game8BaseItem>FPv" .4byte
   "@48@getNext__Q24Game12TNodeItemMgrFPv" .4byte
   "@48@getStart__Q24Game12TNodeItemMgrFv" .4byte
   "@48@getEnd__Q24Game12TNodeItemMgrFv" .4byte
   "@48@get__Q24Game12TNodeItemMgrFPv" .4byte
   "getAt__27Container<Q24Game8BaseItem>Fi" .4byte
   "getTo__27Container<Q24Game8BaseItem>Fv" .4byte 0 .4byte
   kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem .4byte
   get__Q24Game12TNodeItemMgrFPv .4byte getNext__Q24Game12TNodeItemMgrFPv .4byte
   getStart__Q24Game12TNodeItemMgrFv .4byte getEnd__Q24Game12TNodeItemMgrFv
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
        .4byte
   generatorWrite__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParm .4byte
   generatorRead__Q24Game11BaseItemMgrFR6StreamPQ24Game11GenItemParmUl .4byte
   generatorLocalVersion__Q24Game11BaseItemMgrFv .4byte
   generatorGetShape__Q24Game11BaseItemMgrFPQ24Game11GenItemParm .4byte
   generatorNewItemParm__Q24Game11BaseItemMgrFv .global
   __vt__Q24Game17InteractFarmHaero
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
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q24Game8BaseItemFv .4byte update__Q24Game8BaseItemFv
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
        .4byte
   interactBreakBridge__Q24Game8BaseItemFRQ24Game19InteractBreakBridge .4byte
   interactEat__Q24Game8BaseItemFRQ24Game11InteractEat .4byte
   interactFlockAttack__Q24Game8BaseItemFRQ24Game19InteractFlockAttack .4byte
   interactAbsorb__Q24Game8BaseItemFRQ24Game14InteractAbsorb .4byte
   interactFue__Q24Game8BaseItemFRQ24Game11InteractFue .4byte
   interactFarmKarero__Q24Game8BaseItemFRQ24Game18InteractFarmKarero .4byte
   interactFarmHaero__Q24Game8BaseItemFRQ24Game17InteractFarmHaero .4byte
   interactGotKey__Q24Game8BaseItemFRQ24Game14InteractGotKey .4byte
   "getVectorField__Q24Game8BaseItemFRQ23Sys6SphereR10Vector3<f>" .4byte
   getWorkDistance__Q24Game8BaseItemFRQ23Sys6Sphere .4byte
   do_doAnimation__Q24Game8BaseItemFv .4byte
   updateBoundSphere__Q24Game8BaseItemFv .4byte update__Q24Game8BaseItemFv
        .4byte entryShape__Q24Game8BaseItemFv
        .4byte onSetPosition__Q24Game8BaseItemFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global itemMgr__4Game
    itemMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
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
*/

namespace Game {

/**
 * @note Address: 0x801CBFE8
 * @note Size: 0x100
 */
BaseItem::BaseItem(int objectTypeID)
    : Creature()
    , mAnimator()
{
	mObjectTypeID             = objectTypeID;
	mAnimSpeed                = 0.0f;
	mNodeItemMgr              = nullptr;
	_188                      = 0;
	_184                      = 0;
	mVelocity                 = 0.0f;
	mPosition                 = 0.0f;
	mCollTree                 = new CollTree();
	mBoundingSphere.mPosition = Vector3f::zero;
	mBoundingSphere.mRadius   = 1.0f;
}

/**
 * @note Address: 0x801CC0E8
 * @note Size: 0x4C
 */
void BaseItem::constructor()
{
	PSM::CreatureObj* soundObj = new PSM::CreatureObj(this, 2);
	mSoundObj                  = soundObj;
}

/**
 * @note Address: 0x801CC134
 * @note Size: 0x14
 */
JAInter::Object* BaseItem::getJAIObject()
{
	// Notice how this generates a check for nullptr.
	// This is because JAInter::Object is the second inheritance of CreatureObj.
	return mSoundObj;
}

/**
 * @note Address: 0x801CC148
 * @note Size: 0x8
 */
PSM::Creature* BaseItem::getPSCreature() { return mSoundObj; }

/**
 * @note Address: 0x801CC150
 * @note Size: 0x8C
 */
void BaseItem::startSound(u32 soundID)
{
	JUT_ASSERTLINE(262, mSoundObj != nullptr, "(%s) no mSoundCreature\n", getCreatureName());
	mSoundObj->startSound(soundID, 0);
}

/**
 * @note Address: 0x801CC1DC
 * @note Size: 0x108
 */
void BaseItem::doAnimation()
{
	if (mAnimator.mAnimMgr) {
		mAnimator.animate(mAnimSpeed * sys->mDeltaTime);
		SysShape::Model* model                                        = mModel;
		model->mJ3dModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = (J3DMtxCalcAnmBase*)mAnimator.getCalc();
		do_doAnimation();
	}
	if (mCaptureMatrix == nullptr) {
		makeTrMatrix();
	}
	if (mModel) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
	}
	update();
}

/**
 * @note Address: 0x801CC2E4
 * @note Size: 0x2C
 */
void BaseItem::updateTrMatrix() { makeTrMatrix(); }

/**
 * @note Address: 0x801CC310
 * @note Size: 0xC4
 */
void BaseItem::entryShape()
{
	if (mModel == nullptr) {
		return;
	}
	if (mLod.isFlag(AILOD_IsVisible)) {
		mModel->show();
	} else {
		if (BaseHIOParms::sEntryOpt) {
			if (!gameSystem->isMultiplayerMode()) {
				return;
			}
		}
		mModel->hide();
	}
	changeMaterial();
	mModel->getJ3DModel()->entry();
}

/**
 * @note Address: 0x801CC3D4
 * @note Size: 0x38
 */
void BaseItem::doEntry()
{
	if (mCaptureMatrix == nullptr) {
		entryShape();
	}
}

/**
 * @note Address: 0x801CC40C
 * @note Size: 0x74
 */
bool BaseItem::stimulate(Game::Interaction& interaction) { return (interaction.actCommon(this) ? interaction.actItem(this) : false); }

/**
 * @note Address: 0x801CC480
 * @note Size: 0x4
 */
void BaseItem::doSimulation(f32) { }

/**
 * @note Address: 0x801CC484
 * @note Size: 0x2C
 */
void BaseItem::makeTrMatrix() { mBaseTrMatrix.makeT(mPosition); }

/**
 * update__
 * @note Address: 0x801CC4B0
 * @note Size: 0xDC
 */
void BaseItem::update()
{
	doAI();
	updateBoundSphere();
	mSoundObj->exec();
	if (isAlive()) {
		updateCell();
		if (0 > mCellLayerIndex || mCellLayerIndex > 10) {
			getTypeName();
			JUT_PANICLINE(365, "cellLayerindex overflow\n");
		}
		do_updateLOD();
	}
}

/**
 * @note Address: 0x801CC590
 * @note Size: 0x7C
 */
void BaseItem::do_updateLOD()
{
	AILODParm parm;
	do_setLODParm(parm);
	updateLOD(parm);
	if (isMovieActor()) {
		mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
	}
}

/**
 * @note Address: 0x801CC60C
 * @note Size: 0x3C
 */
void BaseItem::updateCollTree()
{
	mCollTree->update();
	mCollTree->getBoundingSphere(mBoundingSphere);
}

/**
 * @note Address: 0x801CC648
 * @note Size: 0x1C4
 */
void BaseItem::move(f32 p1)
{
	Sys::Sphere moveSphere(mPosition, getMapCollisionRadius());
	MoveInfo info(&moveSphere, &mVelocity, 1.0f);
	info.mInfoOrigin = this;
	mapMgr->traceMove(info, p1);
	platMgr->traceMove(info, p1);
	// TODO: looks like an inline involving info._44?

	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stw      r31, 0xbc(r1)
	stw      r30, 0xb8(r1)
	lwz      r12, 0(r3)
	fmr      f30, f1
	mr       r30, r3
	lwz      r12, 0x1dc(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lfs      f6, 0x1a0(r30)
	lis      r3, sincosTable___5JMath@ha
	lfs      f7, 0x1a4(r30)
	lfs      f5, 0x19c(r30)
	li       r5, 0
	fadds    f6, f6, f31
	addi     r3, r3, sincosTable___5JMath@l
	stw      r5, 0x2c(r1)
	addi     r7, r1, 8
	lfs      f4, lbl_8051961C@sda21(r2)
	addi     r6, r30, 0x190
	lfs      f3, lbl_80519618@sda21(r2)
	li       r0, -1
	lfs      f2, 0x800(r3)
	fmr      f1, f30
	lfs      f0, lbl_80519620@sda21(r2)
	addi     r4, r1, 0x18
	stfs     f5, 8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f6, 0xc(r1)
	stfs     f7, 0x10(r1)
	stfs     f31, 0x14(r1)
	stw      r7, 0x18(r1)
	stw      r6, 0x1c(r1)
	stfs     f4, 0x20(r1)
	stfs     f3, 0x24(r1)
	stw      r5, 0x28(r1)
	stw      r5, 0x5c(r1)
	stb      r5, 0x8c(r1)
	stb      r5, 0x31(r1)
	stb      r5, 0x30(r1)
	stw      r5, 0x60(r1)
	stb      r5, 0xa8(r1)
	stw      r5, 0xac(r1)
	stfs     f2, 0x44(r1)
	stfs     f0, 0x48(r1)
	stw      r0, 0xb0(r1)
	stw      r5, 0x64(r1)
	stb      r5, 0x32(r1)
	stw      r30, 0x2c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	fmr      f1, f30
	lwz      r31, 0x5c(r1)
	lwz      r3, platMgr__4Game@sda21(r13)
	addi     r4, r1, 0x18
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof
	lwz      r0, 0x18c(r30)
	cmplwi   r0, 0
	bne      lbl_801CC7B8
	cmplwi   r31, 0
	bne      lbl_801CC798
	lwz      r4, 0x5c(r1)
	cmplwi   r4, 0
	beq      lbl_801CC78C
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x5c(r1)
	stw      r0, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC78C:
	li       r0, 0
	stw      r0, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC798:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x18c(r30)
	b        lbl_801CC7C0

lbl_801CC7B8:
	li       r0, 0
	stw      r0, 0x18c(r30)

lbl_801CC7C0:
	lfs      f0, 8(r1)
	stfs     f0, 0x19c(r30)
	lfs      f0, 0xc(r1)
	stfs     f0, 0x1a0(r30)
	lfs      f0, 0x10(r1)
	stfs     f0, 0x1a4(r30)
	lfs      f0, 0x1a0(r30)
	fsubs    f0, f0, f31
	stfs     f0, 0x1a0(r30)
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	lwz      r31, 0xbc(r1)
	lwz      r0, 0xe4(r1)
	lwz      r30, 0xb8(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/**
 * @note Address: 0x801CC80C
 * @note Size: 0x7C
 */
void BaseItem::movieStartAnimation(u32 p1)
{
	if (mAnimator.mAnimMgr) {
		getCreatureName();
		mAnimator.startAnim(p1, nullptr);
		mAnimSpeed = 30.0f;
	} else {
		getCreatureName();
	}
}

/**
 * @note Address: 0x801CC888
 * @note Size: 0x88
 */
void BaseItem::movieStartDemoAnimation(SysShape::AnimInfo* animInfo)
{
	getTypeName();
	mAnimator.startExAnim(animInfo);
	mAnimSpeed = 30.0f;
	P2ASSERTLINE(498, mAnimator.assertValid(mModel));
}

/**
 * @note Address: 0x801CC910
 * @note Size: 0x24
 */
void BaseItem::movieSetAnimationLastFrame() { mAnimator.setLastFrame(); }

/**
 * @note Address: 0x801CC934
 * @note Size: 0x1C
 */
void BaseItem::movieSetTranslation(Vector3f& dest, f32 faceDir) { mPosition = dest; }

/**
 * constructor__Q24Game8CFSMItemFv
 * @note Address: 0x801CC950
 * @note Size: 0x50
 */
void CFSMItem::constructor()
{
	initFSM();
	mSoundObj = new PSM::CreatureObj(this, 2);
}

/**
 * @note Address: 0x801CC9A0
 * @note Size: 0x54
 */
void CFSMItem::initFSM()
{
	mFsm = createFSM();
	mFsm->init(this);
}

/**
 * @generated{init__Q24Game30StateMachine<Q24Game8CFSMItem>FPQ24Game8CFSMItem}
 * @note Address: 0x801CC9F4
 * @note Size: 0x4
 */
// void StateMachine<Game::CFSMItem>::init(Game::CFSMItem*) { }

/**
 * doAI__Q24Game8CFSMItemFv
 * @note Address: 0x801CC9F8
 * @note Size: 0x34
 */
void CFSMItem::doAI() { mFsm->exec(this); }

/**
 * @note Address: 0x801CCA2C
 * @note Size: 0x8
 */
void CFSMItem::setCurrState(FSMState<CFSMItem>* state)
{
	// Generated from stw r4, 0x1DC(r3)
	mCurrentState = state;
}

/**
 * @note Address: 0x801CCA34
 * @note Size: 0x8
 */
FSMState<CFSMItem>* CFSMItem::getCurrState() { return mCurrentState; }

/**
 * @note Address: 0x801CCA3C
 * @note Size: 0x1C
 */
int CFSMItem::getStateID()
{
	if (mCurrentState) {
		return mCurrentState->mId;
	}
	return -1;
}

/**
 * @note Address: 0x801CCA58
 * @note Size: 0x44
 */
void CFSMItem::bounceCallback(Sys::Triangle* tri)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onBounce(this, tri);
	}
}

/**
 * @generated
 * @note Address: 0x801CCA9C
 * @note Size: 0x4
 */
// void CItemState::onBounce(Game::CFSMItem*, Sys::Triangle*) { }

/**
 * @note Address: 0x801CCAA0
 * @note Size: 0x44
 */
void CFSMItem::collisionCallback(Game::CollEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onCollision(this, event);
	}
}

/**
 * @generated
 * @note Address: 0x801CCAE4
 * @note Size: 0x4
 */
// void CItemState::onCollision(Game::CFSMItem*, Game::CollEvent&) { }

/**
 * @note Address: 0x801CCAE8
 * @note Size: 0x44
 */
void CFSMItem::platCallback(Game::PlatEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onPlatCollision(this, event);
	}
}

/**
 * @generated
 * @note Address: 0x801CCB2C
 * @note Size: 0x4
 */
// void CItemState::onPlatCollision(Game::CFSMItem*, Game::PlatEvent&) { }

/**
 * @note Address: 0x801CCB30
 * @note Size: 0x44
 */
void CFSMItem::onKeyEvent(const SysShape::KeyEvent& event)
{
	if (mCurrentState) {
		static_cast<CItemState*>(mCurrentState)->onKeyEvent(this, event);
	}
}

/**
 * @generated
 * @note Address: 0x801CCB74
 * @note Size: 0x4
 */
// void CItemState::onKeyEvent(Game::CFSMItem*, const SysShape::KeyEvent&) { }

/**
 * actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
 * @note Address: 0x801CCB78
 * @note Size: 0x38
 */
bool InteractAttack::actItem(Game::BaseItem* item) { return item->interactAttack(*this); }

/**
 * actItem__Q24Game19InteractBreakBridgeFPQ24Game8BaseItem
 * @note Address: 0x801CCBB0
 * @note Size: 0x38
 */
bool InteractBreakBridge::actItem(Game::BaseItem* item) { return item->interactBreakBridge(*this); }

/**
 * actItem__Q24Game14InteractGotKeyFPQ24Game8BaseItem
 * @note Address: 0x801CCBE8
 * @note Size: 0x38
 */
bool InteractGotKey::actItem(Game::BaseItem* item) { return item->interactGotKey(*this); }

/**
 * actItem__Q24Game11InteractEatFPQ24Game8BaseItem
 * @note Address: 0x801CCC20
 * @note Size: 0x38
 */
bool InteractEat::actItem(Game::BaseItem* item) { return item->interactEat(*this); }

/**
 * actItem__Q24Game19InteractFlockAttackFPQ24Game8BaseItem
 * @note Address: 0x801CCC58
 * @note Size: 0x38
 */
bool InteractFlockAttack::actItem(Game::BaseItem* item) { return item->interactFlockAttack(*this); }

/**
 * actItem__Q24Game14InteractAbsorbFPQ24Game8BaseItem
 * @note Address: 0x801CCC90
 * @note Size: 0x38
 */
bool InteractAbsorb::actItem(Game::BaseItem* item) { return item->interactAbsorb(*this); }

/**
 * actItem__Q24Game11InteractFueFPQ24Game8BaseItem
 * @note Address: 0x801CCCC8
 * @note Size: 0x38
 */
bool InteractFue::actItem(Game::BaseItem* item) { return item->interactFue(*this); }

/**
 * actItem__Q24Game18InteractFarmKareroFPQ24Game8BaseItem
 * @note Address: 0x801CCD00
 * @note Size: 0x38
 */
bool InteractFarmKarero::actItem(Game::BaseItem* item) { return item->interactFarmKarero(*this); }

/**
 * actItem__Q24Game17InteractFarmHaeroFPQ24Game8BaseItem
 * @note Address: 0x801CCD38
 * @note Size: 0x38
 */
bool InteractFarmHaero::actItem(Game::BaseItem* item) { return item->interactFarmHaero(*this); }

/**
 * @note Address: 0x801CCD70
 * @note Size: 0x5C
 */
BaseItemMgr::BaseItemMgr(int p1)
{
	mAnimMgr             = nullptr;
	mCollPartFactory     = nullptr;
	mObjectPathComponent = nullptr;
	mArchive             = nullptr;
	mModelData           = nullptr;
	mItemName            = "BaseItem";
	mResourceNode        = nullptr;
	_10                  = 0;
	_14                  = 0;
}

/**
 * @note Address: 0x801CCDCC
 * @note Size: 0x108
 */
void BaseItemMgr::setModelSize(int modelSize)
{
	mModelDataMax = modelSize;
	mModelData    = new J3DModelData*[modelSize];
	for (int i = 0; i < modelSize; i++) {
		mModelData[i] = nullptr;
	}
}

/**
 * @note Address: 0x801CCED4
 * @note Size: 0x7C
 */
void BaseItemMgr::loadArchive(char* fileName)
{
	char pathBuffer[512];
	sprintf(pathBuffer, "%s/%s", mObjectPathComponent, fileName);
	LoadResource::Arg loadArg(pathBuffer);
	loadArg.mHeap                = JKRHeap::sCurrentHeap;
	LoadResource::Node* loadNode = gLoadResourceMgr->mountArchive(loadArg);
	if (loadNode) {
		mArchive = (JKRMemArchive*)loadNode->mArchive;
	} else {
		mArchive = nullptr;
	}
}

/**
 * @note Address: 0x801CCF50
 * @note Size: 0xAC
 */
void BaseItemMgr::loadBmd(char* path, int shapeID, u32 flags)
{
	P2ASSERTBOUNDSLINE(702, 0, shapeID, mModelDataMax);
	J3DModelData* modelData = J3DModelLoaderDataBase::load(JKRFileLoader::getGlbResource(path, nullptr), flags);
	JUT_ASSERTLINE(708, modelData != nullptr, "fatal error\n");
	mModelData[shapeID] = modelData;
}

/**
 * @note Address: 0x801CCFFC
 * @note Size: 0x80
 */
void BaseItemMgr::loadAnimMgr(JKRFileLoader* loader, char* path)
{
	mAnimMgr = SysShape::AnimMgr::load(loader, path, *mModelData, mArchive, nullptr);
	JUT_ASSERTLINE(753, mAnimMgr != nullptr, "AnimMgr creation failed ! %s\n", path);
}

/**
 * @note Address: 0x801CD07C
 * @note Size: 0x38
 */
void BaseItemMgr::loadCollision(JKRFileLoader* loader, char* path) { mCollPartFactory = CollPartFactory::load(loader, path); }

/**
 * @note Address: 0x801CD0B4
 * @note Size: 0x38
 */
GenItemParm* BaseItemMgr::generatorNewItemParm() { return new GenItemParm(); }

/**
 * @note Address: 0x801CD0EC
 * @note Size: 0x64
 */
J3DModelData* BaseItemMgr::generatorGetShape(Game::GenItemParm* parm)
{
	int shapeID = parm->getShapeID();
	J3DModelData* modelData;
	if (!(0 > shapeID || shapeID >= mModelDataMax)) {
		modelData = mModelData[shapeID];
	} else {
		modelData = nullptr;
	}
	return modelData;
}

/**
 * @note Address: 0x801CD150
 * @note Size: 0x7C
 */
J3DModelData* BaseItemMgr::getModelData(int index)
{
	P2ASSERTBOUNDSLINE(792, 0, index, mModelDataMax);
	return mModelData[index];
}

/**
 * @note Address: 0x801CD1CC
 * @note Size: 0x84
 */
JKRArchive* BaseItemMgr::openTextArc(char* fileName)
{
	char pathBuffer[512];
	sprintf(pathBuffer, "%s/%s", mObjectPathComponent, fileName);
	LoadResource::Arg loadArg(pathBuffer);
	loadArg.mAllocDir = JKRDvdRipper::ALLOC_DIR_BOTTOM;
	loadArg.mHeap     = JKRHeap::sCurrentHeap;
	// LoadResource::Node* loadNode = gLoadResourceMgr->mountArchive(loadArg);
	// mNode = loadNode;
	mResourceNode = gLoadResourceMgr->mountArchive(loadArg);
	// JKRArchive* archive;
	// if (mNode ) {
	// 	archive = mNode->mArchive;
	// } else {
	// 	archive = nullptr;
	// }
	// return archive;
	return (mResourceNode != nullptr) ? mResourceNode->mArchive : nullptr;
	/*
	stwu     r1, -0x240(r1)
	mflr     r0
	mr       r6, r4
	addi     r4, r2, lbl_80519628@sda21
	stw      r0, 0x244(r1)
	stw      r31, 0x23c(r1)
	mr       r31, r3
	lwz      r5, 0x28(r3)
	addi     r3, r1, 0x38
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	addi     r4, r1, 0x38
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	li       r0, 2
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r5, 0x20(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	stw      r3, 0xc(r31)
	lwz      r3, 0xc(r31)
	cmplwi   r3, 0
	beq      lbl_801CD238
	lwz      r3, 0x34(r3)
	b        lbl_801CD23C

lbl_801CD238:
	li       r3, 0

lbl_801CD23C:
	lwz      r0, 0x244(r1)
	lwz      r31, 0x23c(r1)
	mtlr     r0
	addi     r1, r1, 0x240
	blr
	*/
}

/**
 * @note Address: 0x801CD250
 * @note Size: 0x50
 */
void BaseItemMgr::closeTextArc(JKRArchive*)
{
	delete mResourceNode;
	mResourceNode = nullptr;
}

/**
 * @note Address: 0x801CD2A0
 * @note Size: 0x68
 */
Platform* BaseItemMgr::loadPlatform(JKRFileLoader* loader, char* p2)
{
	Platform* platform = new Platform();
	platform->load(loader, p2);
	return platform;
}

/**
 * @note Address: 0x801CD308
 * @note Size: 0xBC
 */
PlatAttacher* BaseItemMgr::loadPlatAttacher(JKRFileLoader* loader, char* path)
{
	PlatAttacher* attacher = new PlatAttacher();
	// Why does PlatAttacher not have a ::load? Ah well.
	// It clearly doesn't, given the assertion was written in this file....
	void* data = JKRFileLoader::getGlbResource(path, loader);
	// Line 0x404: platAttacher not found. :-)
	if (data == nullptr) {
		JUT_PANICLINE(1028, "platAttacher %s not found !\n", path);
	} else {
		RamStream stream(data, -1);
		stream.resetPosition(false, -1);
		attacher->read(stream);
		return attacher;
	}
}

/**
 * @note Address: 0x801CD3C4
 * @note Size: 0x2C
 */
void BaseItemMgr::updateUseList(Game::GenItemParm* p1, int p2) { onUpdateUseList(p1, p2); }

/**
 * @note Address: 0x801CD3F0
 * @note Size: 0x2C
 */
void BaseItemMgr::loadResources() { onLoadResources(); }

/**
 * @note Address: 0x801CD41C
 * @note Size: 0x4
 */
void BaseItemMgr::setupSoundViewerAndBas() { }

/**
 * @note Address: 0x801CD420
 * @note Size: 0x14C
 */
TNodeItemMgr::TNodeItemMgr()
    : BaseItemMgr(0)
    , Container<BaseItem>()
    , mNodeObjectMgr()
{
}

/**
 * @generated{__dt__31NodeObjectMgr<Q24Game8BaseItem>Fv}
 * @note Address: 0x801CD56C
 * @note Size: 0xC8
 */
// void NodeObjectMgr<Game::BaseItem>::~NodeObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801CD618
// 	lis      r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x20
// 	addi     r3, r3, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801CD5C0
// 	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
// 	addi     r3, r30, 0x20
// 	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
// 	li       r4, 0
// 	stw      r0, 0x20(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CD5C0:
// 	cmplwi   r30, 0
// 	beq      lbl_801CD608
// 	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
// 	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801CD608
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801CD608
// 	lis      r4, __vt__16GenericContainer@ha
// 	mr       r3, r30
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CD608:
// 	extsh.   r0, r31
// 	ble      lbl_801CD618
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801CD618:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated{__dt__29TObjectNode<Q24Game8BaseItem>Fv}
 * @note Address: 0x801CD634
 * @note Size: 0x60
 */
// void TObjectNode<Game::BaseItem>::~TObjectNode()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801CD678
// 	lis      r5, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
// 	li       r4, 0
// 	addi     r0, r5, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv
// 	extsh.   r0, r31
// 	ble      lbl_801CD678
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801CD678:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated{__dt__27ObjectMgr<Q24Game8BaseItem>Fv}
 * @note Address: 0x801CD694
 * @note Size: 0x88
 */
// void ObjectMgr<Game::BaseItem>::~ObjectMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801CD700
// 	lis      r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
// 	addi     r4, r4, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r4, 0(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x1c(r30)
// 	beq      lbl_801CD6F0
// 	lis      r4, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addi     r0, r4, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801CD6F0
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CD6F0:
// 	extsh.   r0, r31
// 	ble      lbl_801CD700
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801CD700:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated{__dt__27Container<Q24Game8BaseItem>Fv}
 * @note Address: 0x801CD71C
 * @note Size: 0x70
 */
// void Container<Game::BaseItem>::~Container()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801CD770
// 	lis      r4, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addi     r0, r4, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0(r30)
// 	beq      lbl_801CD760
// 	lis      r5, __vt__16GenericContainer@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__16GenericContainer@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CD760:
// 	extsh.   r0, r31
// 	ble      lbl_801CD770
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801CD770:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @note Address: 0x801CD78C
 * @note Size: 0x9C
 */
BaseItem* TNodeItemMgr::birth()
{
	BaseItem* item              = doNew();
	item->mNodeItemMgr          = this;
	TObjectNode<BaseItem>* node = new TObjectNode<BaseItem>();
	node->mContents             = item;
	mNodeObjectMgr.mNode.add(node);
	node->mContents->constructor();
	return item;
}

/**
 * entry__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
 * @note Address: 0x801CD828
 * @note Size: 0x84
 */
void TNodeItemMgr::entry(BaseItem* item)
{
	item->mNodeItemMgr          = this;
	TObjectNode<BaseItem>* node = new TObjectNode<BaseItem>();
	node->mContents             = item;
	mNodeObjectMgr.mNode.add(node);
	node->mContents->constructor();
}

/**
 * initDependency__Q24Game12TNodeItemMgrFv
 * @note Address: 0x801CD8AC
 * @note Size: 0x1E8
 */
void TNodeItemMgr::initDependency()
{
	Iterator<BaseItem> iterator(&mNodeObjectMgr);
	iterator.first();
	while (!iterator.isDone()) {
		BaseItem* item = (*iterator);
		item->initDependency();
		iterator.next();
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r3, r3, 0x4c
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801CD8F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CDA64

lbl_801CD8F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CD964

lbl_801CD910:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801CDA64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801CD964:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801CD910
	b        lbl_801CDA64

lbl_801CD984:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x1bc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801CD9D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CDA64

lbl_801CD9D4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CDA48

lbl_801CD9F4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801CDA64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801CDA48:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801CD9F4

lbl_801CDA64:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801CD984
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x801CDA94
 * @note Size: 0xA8
 */
void TNodeItemMgr::killAll()
{
	for (TObjectNode<BaseItem>* node = (TObjectNode<BaseItem>*)mNodeObjectMgr.mNode.mChild; node != nullptr;
	     node                        = (TObjectNode<BaseItem>*)mNodeObjectMgr.mNode.mChild) {
		node->mContents->getCreatureName();
		BaseItem* creature = node->mContents;
		CreatureKillArg arg(CKILL_Unk1);
		creature->kill(&arg);
		if (creature->mSoundObj != nullptr && PSSystem::SingletonBase<PSM::ObjMgr>::sInstance) {
			PSSystem::SingletonBase<PSM::ObjMgr>::sInstance->remove(creature->mSoundObj);
		}
	}
}

/**
 * __ct__Q24Game7ItemMgrFv
 * @note Address: 0x801CDB3C
 * @note Size: 0xC4
 */
ItemMgr::ItemMgr() { mName = "ÈÉ¢?Ωß??ΩΩ?Ω¢ÈÉ¢?Ωß??ΩΩ?Ω§ÈÉ¢??ÈÉ¢??ÈÉ¢Êô??Ωß?Ω≠ÁπùÔΩ≠ÈÉ¢Êô¢?ΩΩ?ΩºÈÉ¢?Ωß??ΩΩ?Ω∏ÈÉ¢Êô¢?ΩΩ?Ω£"; }

/**
 * __dt__Q24Game7ItemMgrFv
 * @note Address: 0x801CDC00
 * @note Size: 0xE8
 */
ItemMgr::~ItemMgr()
{
	clearGlobalPointers();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_801CDCCC
	lis      r4, __vt__Q24Game7ItemMgr@ha
	addi     r4, r4, __vt__Q24Game7ItemMgr@l
	stw      r4, 0(r31)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r31)
	bl       clearGlobalPointers__Q24Game7ItemMgrFv
	cmplwi   r31, 0
	beq      lbl_801CDCBC
	lis      r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@ha
	addic.   r0, r31, 0x20
	addi     r3, r3, "__vt__33NodeObjectMgr<16GenericObjectMgr>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801CDC74
	lis      r4, "__vt__31TObjectNode<16GenericObjectMgr>"@ha
	addi     r3, r31, 0x20
	addi     r0, r4, "__vt__31TObjectNode<16GenericObjectMgr>"@l
	li       r4, 0
	stw      r0, 0x20(r31)
	bl       __dt__5CNodeFv

lbl_801CDC74:
	cmplwi   r31, 0
	beq      lbl_801CDCBC
	lis      r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@ha
	addi     r3, r3, "__vt__29ObjectMgr<16GenericObjectMgr>"@l
	stw      r3, 0(r31)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r31)
	beq      lbl_801CDCBC
	lis      r3, "__vt__29Container<16GenericObjectMgr>"@ha
	addi     r0, r3, "__vt__29Container<16GenericObjectMgr>"@l
	stw      r0, 0(r31)
	beq      lbl_801CDCBC
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r31
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r31)
	bl       __dt__5CNodeFv

lbl_801CDCBC:
	extsh.   r0, r30
	ble      lbl_801CDCCC
	mr       r3, r31
	bl       __dl__FPv

lbl_801CDCCC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x801CDCE8
 * @note Size: 0x6C
 */
void ItemMgr::addMgr(BaseItemMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>();
	node->mContents                     = mgr;
	mNode.add(node);
}

/**
 * initDependency__Q24Game7ItemMgrFv
 * @note Address: 0x801CDD54
 * @note Size: 0x1E4
 */
void ItemMgr::initDependency()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		item->initDependency();
		iterator.next();
	}
}

/**
 * doAnimation__Q24Game7ItemMgrFv
 * @note Address: 0x801CDF38
 * @note Size: 0x1E4
 */
void ItemMgr::doAnimation()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doAnimation();
		iterator.next();
	}
}

/**
 * doEntry__Q24Game7ItemMgrFv
 * @note Address: 0x801CE11C
 * @note Size: 0x1E4
 */
void ItemMgr::doEntry()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doEntry();
		iterator.next();
	}
}

/**
 * doSetView__Q24Game7ItemMgrFi
 * @note Address: 0x801CE300
 * @note Size: 0x1F4
 */
void ItemMgr::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doSetView(viewportNumber);
		iterator.next();
	}
}

/**
 * doViewCalc__Q24Game7ItemMgrFv
 * @note Address: 0x801CE4F4
 * @note Size: 0x1E4
 */
void ItemMgr::doViewCalc()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doViewCalc();
		iterator.next();
	}
}

/**
 * doSimulation__Q24Game7ItemMgrFf
 * @note Address: 0x801CE6D8
 * @note Size: 0x1F4
 */
void ItemMgr::doSimulation(f32 p1)
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doSimulation(p1);
		iterator.next();
	}
}

/**
 * @note Address: 0x801CE8CC
 * @note Size: 0x4
 */
void ItemMgr::doDirectDraw(Graphics&) { }

/**
 * doSimpleDraw__Q24Game7ItemMgrFP8Viewport
 * @note Address: 0x801CE8D0
 * @note Size: 0x1F4
 */
void ItemMgr::doSimpleDraw(Viewport* viewport)
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->doSimpleDraw(viewport);
		iterator.next();
	}
}

/**
 * setupSoundViewerAndBas__Q24Game7ItemMgrFv
 * @note Address: 0x801CEAC4
 * @note Size: 0x1E4
 */
void ItemMgr::setupSoundViewerAndBas()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		item->setupSoundViewerAndBas();
		iterator.next();
	}
}

/**
 * loadResources__Q24Game7ItemMgrFv
 * @note Address: 0x801CECA8
 * @note Size: 0x1E4
 */
void ItemMgr::loadResources()
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		GenericObjectMgr* item = (*iterator);
		item->loadResources();
		iterator.next();
	}
}

/**
 * @note Address: 0x801CEE8C
 * @note Size: 0x204
 */
int ItemMgr::getIndexByMgr(Game::BaseItemMgr* mgr)
{
	int index = 0;
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		if (*iterator == mgr) {
			return index;
		}
		index++;
		iterator.next();
	}
	return -1;
}

/**
 * @note Address: 0x801CF090
 * @note Size: 0x200
 */
BaseItemMgr* ItemMgr::getMgrByIndex(int index)
{
	int i = 0;
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	do {
		if (i == index) {
			return (BaseItemMgr*)(*iterator);
		}
		i++;
		iterator.next();
	} while (!iterator.isDone());
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801CF0E8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CF254

lbl_801CF0E8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CF154

lbl_801CF100:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801CF254
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801CF154:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801CF100
	b        lbl_801CF254

lbl_801CF174:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	cmpw     r31, r30
	bne      lbl_801CF194
	b        lbl_801CF278

lbl_801CF194:
	lwz      r0, 0x14(r1)
	addi     r31, r31, 1
	cmplwi   r0, 0
	bne      lbl_801CF1C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CF254

lbl_801CF1C4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801CF238

lbl_801CF1E4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801CF254
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801CF238:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801CF1E4

lbl_801CF254:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801CF174
	li       r3, 0

lbl_801CF278:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x801CF290
 * @note Size: 0x224
 */
BaseItemMgr* ItemMgr::getMgrByID(ID32& id)
{
	Iterator<GenericObjectMgr> iterator(this);
	iterator.first();
	while (!iterator.isDone()) {
		BaseItemMgr* item = (BaseItemMgr*)(*iterator);
		if (id.match(item->generatorGetID(), '*')) {
			return item;
		}
		iterator.next();
	}
	return nullptr;
}

/**
 * @note Address: 0x801CF4B4
 * @note Size: 0x11C
 */
// TNodeItemMgr::~TNodeItemMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_801CF5B4
// 	lis      r3, __vt__Q24Game12TNodeItemMgr@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, __vt__Q24Game12TNodeItemMgr@l
// 	stw      r3, 0(r30)
// 	addi     r0, r3, 0x74
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801CF570
// 	lis      r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r3, r30, 0x6c
// 	addi     r4, r4, "__vt__31NodeObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r4, 0x4c(r30)
// 	addi     r0, r4, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801CF520
// 	lis      r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@ha
// 	addi     r0, r4, "__vt__29TObjectNode<Q24Game8BaseItem>"@l
// 	stw      r0, 0x6c(r30)
// 	li       r4, 0
// 	bl       __dt__5CNodeFv

// lbl_801CF520:
// 	addic.   r0, r30, 0x4c
// 	beq      lbl_801CF570
// 	lis      r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r3, r3, "__vt__27ObjectMgr<Q24Game8BaseItem>"@l
// 	stw      r3, 0x4c(r30)
// 	addi     r0, r3, 0x2c
// 	stw      r0, 0x68(r30)
// 	beq      lbl_801CF570
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x4c
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x4c(r30)
// 	beq      lbl_801CF570
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x4c
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x4c(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CF570:
// 	addic.   r0, r30, 0x30
// 	beq      lbl_801CF5A4
// 	lis      r3, "__vt__27Container<Q24Game8BaseItem>"@ha
// 	addic.   r0, r30, 0x30
// 	addi     r0, r3, "__vt__27Container<Q24Game8BaseItem>"@l
// 	stw      r0, 0x30(r30)
// 	beq      lbl_801CF5A4
// 	lis      r4, __vt__16GenericContainer@ha
// 	addi     r3, r30, 0x30
// 	addi     r0, r4, __vt__16GenericContainer@l
// 	li       r4, 0
// 	stw      r0, 0x30(r30)
// 	bl       __dt__5CNodeFv

// lbl_801CF5A4:
// 	extsh.   r0, r31
// 	ble      lbl_801CF5B4
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_801CF5B4:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * kill__Q24Game12TNodeItemMgrFPQ24Game8BaseItem
 * @note Address: 0x801CF5D0
 * @note Size: 0x24
 */
void TNodeItemMgr::kill(Game::BaseItem* item)
{
	mNodeObjectMgr.delNode(item);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	addi     r3, r3, 0x4c
	stw      r0, 0x14(r1)
	bl       "delNode__31NodeObjectMgr<Q24Game8BaseItem>FPQ24Game8BaseItem"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * doAnimation__Q24Game12TNodeItemMgrFv
 * @note Address: 0x801CF5F4
 * @note Size: 0x2C
 */
void TNodeItemMgr::doAnimation() { mNodeObjectMgr.doAnimation(); }

/**
 * doEntry__Q24Game12TNodeItemMgrFv
 * @note Address: 0x801CF620
 * @note Size: 0x2C
 */
void TNodeItemMgr::doEntry() { mNodeObjectMgr.doEntry(); }

/**
 * doSetView__Q24Game12TNodeItemMgrFi
 * @note Address: 0x801CF64C
 * @note Size: 0x2C
 */
void TNodeItemMgr::doSetView(int viewportNumber) { mNodeObjectMgr.doSetView(viewportNumber); }

/**
 * @note Address: 0x801CF678
 * @note Size: 0x2C
 */
void TNodeItemMgr::doViewCalc()
{
	mNodeObjectMgr.doViewCalc();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x801CF6A4
 * @note Size: 0x2C
 */
void TNodeItemMgr::doSimulation(f32 rate)
{
	mNodeObjectMgr.doSimulation(rate);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x801CF6D0
 * @note Size: 0x2C
 */
void TNodeItemMgr::doDirectDraw(Graphics& gfx)
{
	mNodeObjectMgr.doDirectDraw(gfx);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x801CF6FC
 * @note Size: 0x2C
 */
void* TNodeItemMgr::getEnd() { return mNodeObjectMgr.getEnd(); }

/**
 * @generated
 * @note Address: 0x801CF728
 * @note Size: 0x8
 */
// void* NodeObjectMgr<Game::BaseItem>::getEnd() { return 0x0; }

/**
 * @note Address: 0x801CF730
 * @note Size: 0x2C
 */
void* TNodeItemMgr::getStart() { return mNodeObjectMgr.getStart(); }

/**
 * @generated
 * @note Address: 0x801CF75C
 * @note Size: 0x8
 */
// void* NodeObjectMgr<Game::BaseItem>::getStart()
// {
// 	/*
// 	lwz      r3, 0x30(r3)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x801CF764
 * @note Size: 0x2C
 */
void* TNodeItemMgr::getNext(void* item) { return mNodeObjectMgr.getNext(item); }

/**
 * @generated
 * @note Address: 0x801CF790
 * @note Size: 0x8
 */
// void NodeObjectMgr<Game::BaseItem>::getNext(void*)
// {
// 	/*
// 	lwz      r3, 4(r4)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x801CF798
 * @note Size: 0x2C
 */
BaseItem* TNodeItemMgr::get(void* item)
{
	return mNodeObjectMgr.get(item);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @generated
 * @note Address: 0x801CF7C4
 * @note Size: 0x8
 */
// BaseItem* NodeObjectMgr<Game::BaseItem>::get(void*)
// {
// 	/*
// 	lwz      r3, 0x18(r4)
// 	blr
// 	*/
// }

/**
 * @note Address: 0x801CF7CC
 * @note Size: 0x4
 */
// void BaseItemMgr::doAnimation() { }

/**
 * @note Address: 0x801CF7D0
 * @note Size: 0x4
 */
// void BaseItemMgr::doEntry() { }

/**
 * @note Address: 0x801CF7D4
 * @note Size: 0x4
 */
// void BaseItemMgr::doSetView(int) { }

/**
 * @note Address: 0x801CF7D8
 * @note Size: 0x4
 */
// void BaseItemMgr::doViewCalc() { }

/**
 * @note Address: 0x801CF7DC
 * @note Size: 0x4
 */
// void BaseItemMgr::doSimulation(f32) { }

/**
 * @note Address: 0x801CF7E0
 * @note Size: 0x4
 */
// void BaseItemMgr::doDirectDraw(Graphics&) { }

} // namespace Game

/**
 * @generated
 * @note Address: 0x801CF7E4
 * @note Size: 0x44
 */
// void NodeObjectMgr<Game::BaseItem>::delNode(Game::BaseItem*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 0x30(r3)
// 	b        lbl_801CF810

// lbl_801CF7F8:
// 	lwz      r0, 0x18(r3)
// 	cmplw    r0, r4
// 	bne      lbl_801CF80C
// 	bl       del__5CNodeFv
// 	b        lbl_801CF818

// lbl_801CF80C:
// 	lwz      r3, 4(r3)

// lbl_801CF810:
// 	cmplwi   r3, 0
// 	bne      lbl_801CF7F8

// lbl_801CF818:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CF828
 * @note Size: 0x18
 */
// void NodeObjectMgr<Game::BaseItem>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x30(r3)
// 	stw      r0, 0x2c(r3)
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CF840
 * @note Size: 0x1E4
 */
// void ObjectMgr<Game::BaseItem>::doAnimation()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801CF888
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CF9F4

// lbl_801CF888:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CF8F4

// lbl_801CF8A0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CF9F4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CF8F4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CF8A0
// 	b        lbl_801CF9F4

// lbl_801CF914:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x3c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801CF964
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CF9F4

// lbl_801CF964:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CF9D8

// lbl_801CF984:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CF9F4
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CF9D8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CF984

// lbl_801CF9F4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801CF914
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CFA24
 * @note Size: 0x1E4
 */
// void ObjectMgr<Game::BaseItem>::doEntry()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801CFA6C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFBD8

// lbl_801CFA6C:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFAD8

// lbl_801CFA84:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFBD8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFAD8:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFA84
// 	b        lbl_801CFBD8

// lbl_801CFAF8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x40(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801CFB48
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFBD8

// lbl_801CFB48:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFBBC

// lbl_801CFB68:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFBD8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFBBC:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFB68

// lbl_801CFBD8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801CFAF8
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CFC08
 * @note Size: 0x1F4
 */
// void ObjectMgr<Game::BaseItem>::doSetView(int)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r5, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r5, r5, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	stw      r31, 0x1c(r1)
// 	cmplwi   r0, 0
// 	mr       r31, r4
// 	stw      r0, 0x14(r1)
// 	stw      r5, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801CFC58
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFDC8

// lbl_801CFC58:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFCC4

// lbl_801CFC70:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFDC8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFCC4:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFC70
// 	b        lbl_801CFDC8

// lbl_801CFCE4:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	mr       r4, r31
// 	lwz      r12, 0x44(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801CFD38
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFDC8

// lbl_801CFD38:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFDAC

// lbl_801CFD58:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFDC8
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFDAC:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFD58

// lbl_801CFDC8:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801CFCE4
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CFDFC
 * @note Size: 0x1E4
 */
// void ObjectMgr<Game::BaseItem>::doViewCalc()
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	cmplwi   r0, 0
// 	stw      r0, 0x14(r1)
// 	stw      r4, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801CFE44
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFFB0

// lbl_801CFE44:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFEB0

// lbl_801CFE5C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFFB0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFEB0:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFE5C
// 	b        lbl_801CFFB0

// lbl_801CFED0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x48(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801CFF20
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFFB0

// lbl_801CFF20:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801CFF94

// lbl_801CFF40:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801CFFB0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801CFF94:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801CFF40

// lbl_801CFFB0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801CFED0
// 	lwz      r0, 0x24(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801CFFE0
 * @note Size: 0x1F4
 */
// void ObjectMgr<Game::BaseItem>::doSimulation(f32)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	stfd     f31, 0x18(r1)
// 	fmr      f31, f1
// 	cmplwi   r0, 0
// 	stw      r4, 8(r1)
// 	stw      r0, 0x14(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801D0030
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D01A0

// lbl_801D0030:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D009C

// lbl_801D0048:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D01A0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801D009C:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D0048
// 	b        lbl_801D01A0

// lbl_801D00BC:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	fmr      f1, f31
// 	lwz      r12, 0x4c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801D0110
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D01A0

// lbl_801D0110:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D0184

// lbl_801D0130:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D01A0
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801D0184:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D0130

// lbl_801D01A0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801D00BC
// 	lwz      r0, 0x24(r1)
// 	lfd      f31, 0x18(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D01D4
 * @note Size: 0x1F4
 */
// void ObjectMgr<Game::BaseItem>::doDirectDraw(Graphics&)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	lis      r5, "__vt__26Iterator<Q24Game8BaseItem>"@ha
// 	stw      r0, 0x24(r1)
// 	li       r0, 0
// 	addi     r5, r5, "__vt__26Iterator<Q24Game8BaseItem>"@l
// 	stw      r31, 0x1c(r1)
// 	cmplwi   r0, 0
// 	mr       r31, r4
// 	stw      r0, 0x14(r1)
// 	stw      r5, 8(r1)
// 	stw      r0, 0xc(r1)
// 	stw      r3, 0x10(r1)
// 	bne      lbl_801D0224
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D0394

// lbl_801D0224:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D0290

// lbl_801D023C:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D0394
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801D0290:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D023C
// 	b        lbl_801D0394

// lbl_801D02B0:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r12, 0(r3)
// 	mr       r4, r31
// 	lwz      r12, 0x50(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	cmplwi   r0, 0
// 	bne      lbl_801D0304
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D0394

// lbl_801D0304:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)
// 	b        lbl_801D0378

// lbl_801D0324:
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D0394
// 	lwz      r3, 0x10(r1)
// 	lwz      r4, 0xc(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0xc(r1)

// lbl_801D0378:
// 	lwz      r12, 8(r1)
// 	addi     r3, r1, 8
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D0324

// lbl_801D0394:
// 	lwz      r3, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0xc(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801D02B0
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D03C8
 * @note Size: 0x2C
 */
// void Container<Game::BaseItem>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D03F4
 * @note Size: 0x8
 */
// u32 Container<Game::BaseItem>::getAt(int) { return 0x0; }

/**
 * @generated
 * @note Address: 0x801D03FC
 * @note Size: 0x8
 */
// u32 Container<Game::BaseItem>::getTo() { return 0x0; }

namespace Game {

/**
 * @generated
 * @note Address: 0x801D0404
 * @note Size: 0x38
 */
// void StateMachine<Game::CFSMItem>::exec(Game::CFSMItem*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 0x1dc(r4)
// 	cmplwi   r3, 0
// 	beq      lbl_801D042C
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0xc(r12)
// 	mtctr    r12
// 	bctrl

// lbl_801D042C:
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D043C
 * @note Size: 0x4
 */
// void FSMState<Game::CFSMItem>::exec(Game::CFSMItem*) { }

/**
 * @generated
 * @note Address: 0x801D0440
 * @note Size: 0x8
 */
// void CFSMItem::@376 @onKeyEvent(const SysShape::KeyEvent&)
// {
// 	/*
// 	addi     r3, r3, -376
// 	b        onKeyEvent__Q24Game8CFSMItemFRCQ28SysShape8KeyEvent
// 	*/
// }

} // namespace Game

/**
 * @generated
 * @note Address: 0x801D0448
 * @note Size: 0x8
 */
// void NodeObjectMgr<Game::BaseItem>::@28 @resetMgr()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "resetMgr__31NodeObjectMgr<Q24Game8BaseItem>Fv"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0450
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doDirectDraw(Graphics&)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doDirectDraw__27ObjectMgr<Q24Game8BaseItem>FR8Graphics"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0458
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doSimulation(f32)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doSimulation__27ObjectMgr<Q24Game8BaseItem>Ff"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0460
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doViewCalc()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doViewCalc__27ObjectMgr<Q24Game8BaseItem>Fv"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0468
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doSetView(int)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doSetView__27ObjectMgr<Q24Game8BaseItem>Fi"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0470
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doEntry()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doEntry__27ObjectMgr<Q24Game8BaseItem>Fv"
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0478
 * @note Size: 0x8
 */
// void ObjectMgr<Game::BaseItem>::@28 @doAnimation()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        "doAnimation__27ObjectMgr<Q24Game8BaseItem>Fv"
// 	*/
// }

namespace Game {

/**
 * @generated
 * @note Address: 0x801D0480
 * @note Size: 0x8
 */
// void TNodeItemMgr::@48 @getEnd()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        getEnd__Q24Game12TNodeItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0488
 * @note Size: 0x8
 */
// void TNodeItemMgr::@48 @getStart()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        getStart__Q24Game12TNodeItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0490
 * @note Size: 0x8
 */
// void TNodeItemMgr::@48 @getNext(void*)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        getNext__Q24Game12TNodeItemMgrFPv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D0498
 * @note Size: 0x8
 */
// void TNodeItemMgr::@48 @get(void*)
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        get__Q24Game12TNodeItemMgrFPv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04A0
 * @note Size: 0x8
 */
// TNodeItemMgr::@48 @~TNodeItemMgr()
// {
// 	/*
// 	addi     r3, r3, -48
// 	b        __dt__Q24Game12TNodeItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04A8
 * @note Size: 0x8
 */
// void ItemMgr::@28 @loadResources()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        loadResources__Q24Game7ItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04B0
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doSimpleDraw(Viewport*)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimpleDraw__Q24Game7ItemMgrFP8Viewport
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04B8
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doDirectDraw(Graphics&)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doDirectDraw__Q24Game7ItemMgrFR8Graphics
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04C0
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doSimulation(f32)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSimulation__Q24Game7ItemMgrFf
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04C8
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doViewCalc()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doViewCalc__Q24Game7ItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04D0
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doSetView(int)
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doSetView__Q24Game7ItemMgrFi
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04D8
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doEntry()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doEntry__Q24Game7ItemMgrFv
// 	*/
// }

/**
 * @generated
 * @note Address: 0x801D04E0
 * @note Size: 0x8
 */
// void ItemMgr::@28 @doAnimation()
// {
// 	/*
// 	addi     r3, r3, -28
// 	b        doAnimation__Q24Game7ItemMgrFv
// 	*/
// }
} // namespace Game
