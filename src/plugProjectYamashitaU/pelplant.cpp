#include "Dolphin/math.h"
#include "Game/EnemyBase.h"
#include "Graphics.h"
#include "Game/Piki.h"
#include "Game/enemyInfo.h"
#include "Vector3.h"
#include "types.h"
#include "Game/Entities/Pelplant.h"
#include "Game/Farm.h"
#include "Game/GameSystem.h"
#include "Game/PelletNumber.h"
#include "Game/gamePlayData.h"
#include "Game/pelletMgr.h"
#include "CollInfo.h"
#include "SysShape/Joint.h"
#include "SysShape/Model.h"
#include "System.h"
#include "SysTimers.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/J3D/J3DMtxBuffer.h"
#include "JSystem/J3D/J3DMtxCalc.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047A660
    lbl_8047A660:
        .4byte 0x70656C70
        .4byte 0x6C616E74
        .4byte 0x2E637070
        .4byte 0x00000000
        .4byte 0x2F656E65
        .4byte 0x6D792F64
        .4byte 0x6174612F
        .4byte 0x70656C70
        .4byte 0x6C616E74
        .4byte 0x00000000
        .4byte 0x2F656E65
        .4byte 0x6D792F70
        .4byte 0x61726D2F
        .4byte 0x70656C70
        .4byte 0x6C616E74
        .4byte 0x00000000
    .global lbl_8047A6A0
    lbl_8047A6A0:
        .4byte 0x626F6479
        .4byte 0x6A6E7432
        .4byte 0x00000000
    .global lbl_8047A6AC
    lbl_8047A6AC:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x626F6479
        .4byte 0x6A6E7431
        .4byte 0x00000000
    .global lbl_8047A6C4
    lbl_8047A6C4:
        .4byte 0x4641524D
        .4byte 0x5F504F57
        .4byte 0x28256429
        .4byte 0x2047726F
        .4byte 0x77257300
    .global lbl_8047A6D8
    lbl_8047A6D8:
        .4byte 0x25732025
        .4byte 0x342E3266
        .4byte 0x00000000
    .global lbl_8047A6E4
    lbl_8047A6E4:
        .4byte 0x556E6B6E
        .4byte 0x6F776E20
        .4byte 0x50656C6C
        .4byte 0x65742073
        .4byte 0x697A652E
        .4byte 0x20256420
        .4byte 0x0A000000
    .global lbl_8047A700
    lbl_8047A700:
        .4byte 0x70656C6C
        .4byte 0x65744D67
        .4byte 0x722E6800
    .global lbl_8047A70C
    lbl_8047A70C:
        .4byte 0x8379838C
        .4byte 0x83628367
        .4byte 0x9190837D
        .4byte 0x836C815B
        .4byte 0x83578383
        .4byte 0x00000000
        .4byte 0x456E656D
        .4byte 0x79506172
        .4byte 0x6D734261
        .4byte 0x73650000
        .4byte 0x90AC92B7
        .4byte 0x288FAC81
        .4byte 0xA8928681
        .4byte 0x6A000000
        .4byte 0x90AC92B7
        .4byte 0x28928681
        .4byte 0xA891E581
        .4byte 0x6A000000
        .4byte 0x834A8389
        .4byte 0x815B95CF
        .4byte 0x8D588E9E
        .4byte 0x8AD40000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x3A3A5072
        .4byte 0x6F706572
        .4byte 0x74790000
        .4byte 0x66726963
        .4byte 0x74696F6E
        .4byte 0x286E6F74
        .4byte 0x20757365
        .4byte 0x64290000
        .4byte 0x77616C6C
        .4byte 0x5265666C
        .4byte 0x65637469
        .4byte 0x6F6E0000
        .4byte 0x66616365
        .4byte 0x44697241
        .4byte 0x646A7573
        .4byte 0x74000000
        .4byte 0x626F756E
        .4byte 0x63654661
        .4byte 0x63746F72
        .4byte 0x00000000
        .4byte 0x83898343
        .4byte 0x837482CC
        .4byte 0x8D8282B3
        .4byte 0x00000000
        .4byte 0x83898343
        .4byte 0x837489F1
        .4byte 0x959C97A6
        .4byte 0x00000000
        .4byte 0x8C7889FA
        .4byte 0x83898343
        .4byte 0x83740000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC9396
        .4byte 0x82E80000
        .4byte 0x837D8362
        .4byte 0x837682C6
        .4byte 0x82CC82A0
        .4byte 0x82BD82E8
        .4byte 0x837C838A
        .4byte 0x83538393
        .4byte 0x82CC9149
        .4byte 0x92E80000
        .4byte 0x8373834E
        .4byte 0x837E8393
        .4byte 0x82C682CC
        .4byte 0x82A082BD
        .4byte 0x82E80000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x585A0000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x59000000
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x8374838C
        .4byte 0x815B8380
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x91AC9378
        .4byte 0x97A60000
        .4byte 0x89F1935D
        .4byte 0x8DC591E5
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x8365838A
        .4byte 0x8367838A
        .4byte 0x815B0000
        .4byte 0x837A815B
        .4byte 0x838094CD
        .4byte 0x88CD0000
        .4byte 0x83768389
        .4byte 0x83438378
        .4byte 0x815B8367
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x8E8B8A45
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x92548DF5
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97CD0000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x97A60000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x89C2945C
        .4byte 0x8A709378
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x836794CD
        .4byte 0x88CD0000
        .4byte 0x8D558C82
        .4byte 0x83718362
        .4byte 0x83678A70
        .4byte 0x93780000
        .4byte 0x8C7889FA
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x90CE89BB
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x83718362
        .4byte 0x83768368
        .4byte 0x838D8362
        .4byte 0x8376835F
        .4byte 0x8381815B
        .4byte 0x83570000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8A6D97A7
        .4byte 0x00000000
        .4byte 0x926E906B
        .4byte 0x8B4390E2
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82600000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82500000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82610000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82510000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82620000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x92A39574
        .4byte 0x82520000
        .4byte 0x905582E8
        .4byte 0x95A582A2
        .4byte 0x91C58C82
        .4byte 0x82630000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global "sLODRadius__Q34Game8Pelplant22@unnamed@pelplant_cpp@"
    "sLODRadius__Q34Game8Pelplant22@unnamed@pelplant_cpp@":
        .4byte 0x42340000
        .4byte 0x42700000
        .4byte 0x42CE0000
        .4byte 0x43050000
    .global lbl_804AA9B8
    lbl_804AA9B8:
        .4byte lbl_8010897C
        .4byte lbl_80108924
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_80108934
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_80108948
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010897C
        .4byte lbl_8010895C
    .global lbl_804AAA0C
    lbl_804AAA0C:
        .4byte lbl_80108CB4
        .4byte lbl_80108C90
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108C98
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CA0
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CB4
        .4byte lbl_80108CA8
    .global lbl_804AAA60
    lbl_804AAA60:
        .4byte lbl_80108DA8
        .4byte lbl_80108D88
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108D90
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108D98
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA8
        .4byte lbl_80108DA0
    .global lbl_804AAAB4
    lbl_804AAAB4:
        .4byte lbl_80108D44
        .4byte lbl_80108D20
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D28
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D30
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D44
        .4byte lbl_80108D38
    .global lbl_804AAB08
    lbl_804AAB08:
        .4byte lbl_801093DC
        .4byte lbl_801093B8
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093C0
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093C8
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093DC
        .4byte lbl_801093D0
    .global lbl_804AAB5C
    lbl_804AAB5C:
        .4byte lbl_801094E0
        .4byte lbl_801094A8
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094B4
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094C0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094E0
        .4byte lbl_801094CC
    .global __vt__Q34Game8Pelplant3Mgr
    __vt__Q34Game8Pelplant3Mgr:
        .4byte 0
        .4byte 0
        .4byte doAnimation__Q24Game12EnemyMgrBaseFv
        .4byte doEntry__Q24Game12EnemyMgrBaseFv
        .4byte doSetView__Q24Game12EnemyMgrBaseFi
        .4byte doViewCalc__Q24Game12EnemyMgrBaseFv
        .4byte doSimulation__Q24Game12EnemyMgrBaseFf
        .4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q34Game8Pelplant3MgrFv"
        .4byte getChildCount__5CNodeFv
        .4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
        .4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
        .4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
        .4byte __dt__Q34Game8Pelplant3MgrFv
        .4byte getObject__Q24Game12EnemyMgrBaseFPv
        .4byte getNext__Q24Game12EnemyMgrBaseFPv
        .4byte getStart__Q24Game12EnemyMgrBaseFv
        .4byte getEnd__Q24Game12EnemyMgrBaseFv
        .4byte alloc__Q24Game12EnemyMgrBaseFv
        .4byte birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
        .4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
        .4byte getGenerator__Q24Game12EnemyMgrBaseCFv
        .4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
        .4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
        .4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
        .4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
        .4byte startMovie__Q24Game12EnemyMgrBaseFv
        .4byte endMovie__Q24Game12EnemyMgrBaseFv
        .4byte get__Q24Game12EnemyMgrBaseFPv
        .4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
        .4byte createObj__Q34Game8Pelplant3MgrFi
        .4byte getEnemy__Q34Game8Pelplant3MgrFi
        .4byte doAlloc__Q34Game8Pelplant3MgrFv
        .4byte getEnemyTypeID__Q34Game8Pelplant3MgrFv
        .4byte createModel__Q24Game12EnemyMgrBaseFv
        .4byte initParms__Q24Game12EnemyMgrBaseFv
        .4byte loadResource__Q24Game12EnemyMgrBaseFv
        .4byte initObjects__Q24Game12EnemyMgrBaseFv
        .4byte initStoneSetting__Q34Game8Pelplant3MgrFv
        .4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
        .4byte loadModelData__Q24Game12EnemyMgrBaseFv
        .4byte loadAnimData__Q24Game12EnemyMgrBaseFv
        .4byte loadTexData__Q24Game12EnemyMgrBaseFv
        .4byte doLoadBmd__Q24Game12EnemyMgrBaseFPv
        .4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
        .4byte initGenerator__Q24Game12EnemyMgrBaseFv
    .global "__vt__7Parm<i>"
    "__vt__7Parm<i>":
        .4byte 0
        .4byte 0
        .4byte "size__7Parm<i>Fv"
        .4byte "write__7Parm<i>FR6Stream"
        .4byte "read__7Parm<i>FR6Stream"
    .global __vt__Q24Game14EnemyParmsBase
    __vt__Q24Game14EnemyParmsBase:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game14EnemyParmsBaseFR6Stream
    .global __vt__Q24Game13CreatureParms
    __vt__Q24Game13CreatureParms:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game13CreatureParmsFR6Stream
    .global "__vt__7Parm<f>"
    "__vt__7Parm<f>":
        .4byte 0
        .4byte 0
        .4byte "size__7Parm<f>Fv"
        .4byte "write__7Parm<f>FR6Stream"
        .4byte "read__7Parm<f>FR6Stream"
    .global __vt__Q34Game8Pelplant5Parms
    __vt__Q34Game8Pelplant5Parms:
        .4byte 0
        .4byte 0
        .4byte read__Q34Game8Pelplant5ParmsFR6Stream
    .global __vt__16GenericContainer
    __vt__16GenericContainer:
        .4byte 0
        .4byte 0
        .4byte __dt__16GenericContainerFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game13IEnemyMgrBase
    __vt__Q24Game13IEnemyMgrBase:
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte 0
        .4byte 0
        .4byte "@4@__dt__Q24Game13IEnemyMgrBaseFv"
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game13IEnemyMgrBaseFv
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28SysShape13BlendFunction
    __vt__Q28SysShape13BlendFunction:
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q34Game8Pelplant14ProperAnimator
    __vt__Q34Game8Pelplant14ProperAnimator:
        .4byte 0
        .4byte 0
        .4byte __dt__Q34Game8Pelplant14ProperAnimatorFv
        .4byte setAnimMgr__Q24Game22EnemyBlendAnimatorBaseFPQ28SysShape7AnimMgr
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFv
        .4byte getAnimator__Q24Game22EnemyBlendAnimatorBaseFi
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFf
        .4byte animate__Q24Game22EnemyBlendAnimatorBaseFif
        .4byte resetAnimSpeed__Q24Game17EnemyAnimatorBaseFv
        .4byte getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
    .global __vt__Q34Game8Pelplant3Obj
    __vt__Q34Game8Pelplant3Obj:
        .4byte 0
        .4byte 0
        .4byte getPosition__Q24Game9EnemyBaseFv
        .4byte checkCollision__Q24Game8CreatureFPQ24Game10CellObject
        .4byte getBoundingSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte collisionUpdatable__Q24Game8CreatureFv
        .4byte isPiki__Q24Game8CreatureFv
        .4byte isNavi__Q24Game8CreatureFv
        .4byte deferPikiCollision__Q24Game10CellObjectFv
        .4byte getTypeName__Q24Game8CreatureFv
        .4byte getObjType__Q24Game8CreatureFv
        .4byte constructor__Q24Game9EnemyBaseFv
        .4byte onInit__Q34Game8Pelplant3ObjFPQ24Game15CreatureInitArg
        .4byte onKill__Q24Game9EnemyBaseFPQ24Game15CreatureKillArg
        .4byte onInitPost__Q24Game9EnemyBaseFPQ24Game15CreatureInitArg
        .4byte doAnimation__Q34Game8Pelplant3ObjFv
        .4byte doEntry__Q24Game9EnemyBaseFv
        .4byte doSetView__Q24Game9EnemyBaseFi
        .4byte doViewCalc__Q24Game9EnemyBaseFv
        .4byte doSimulation__Q34Game8Pelplant3ObjFf
        .4byte doDirectDraw__Q34Game8Pelplant3ObjFR8Graphics
        .4byte getBodyRadius__Q24Game9EnemyBaseFv
        .4byte getCellRadius__Q24Game9EnemyBaseFv
        .4byte "initPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte "onInitPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte getFaceDir__Q24Game9EnemyBaseFv
        .4byte "setVelocity__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getVelocity__Q24Game9EnemyBaseFv
        .4byte "onSetPosition__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte "onSetPositionPost__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte updateTrMatrix__Q24Game9EnemyBaseFv
        .4byte isTeki__Q24Game9EnemyBaseFv
        .4byte isPellet__Q24Game8CreatureFv
        .4byte inWaterCallback__Q24Game9EnemyBaseFPQ24Game8WaterBox
        .4byte outWaterCallback__Q24Game9EnemyBaseFv
        .4byte inWater__Q24Game9EnemyBaseFv
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
        .4byte isFlying__Q24Game9EnemyBaseFv
        .4byte isUnderground__Q24Game8CreatureFv
        .4byte isLivingThing__Q34Game8Pelplant3ObjFv
        .4byte isDebugCollision__Q24Game8CreatureFv
        .4byte setDebugCollision__Q24Game8CreatureFb
        .4byte doSave__Q24Game8CreatureFR6Stream
        .4byte doLoad__Q24Game8CreatureFR6Stream
        .4byte bounceCallback__Q24Game8CreatureFPQ23Sys8Triangle
        .4byte collisionCallback__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte platCallback__Q24Game8CreatureFRQ24Game9PlatEvent
        .4byte getJAIObject__Q24Game9EnemyBaseFv
        .4byte getPSCreature__Q24Game9EnemyBaseFv
        .4byte getSound_AILOD__Q24Game8CreatureFv
        .4byte getSound_PosPtr__Q24Game9EnemyBaseFv
        .4byte sound_culling__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimFrame__Q24Game9EnemyBaseFv
        .4byte getSound_CurrAnimSpeed__Q24Game9EnemyBaseFv
        .4byte on_movie_begin__Q24Game8CreatureFb
        .4byte on_movie_end__Q24Game8CreatureFb
        .4byte movieStartAnimation__Q24Game8CreatureFUl
        .4byte movieStartDemoAnimation__Q24Game8CreatureFPQ28SysShape8AnimInfo
        .4byte movieSetAnimationLastFrame__Q24Game8CreatureFv
        .4byte "movieSetTranslation__Q24Game8CreatureFR10Vector3<f>f"
        .4byte movieSetFaceDir__Q24Game8CreatureFf
        .4byte "movieGotoPosition__Q24Game8CreatureFR10Vector3<f>"
        .4byte movieUserCommand__Q24Game8CreatureFUlPQ24Game11MoviePlayer
        .4byte getShadowParam__Q34Game8Pelplant3ObjFRQ24Game11ShadowParam
        .4byte needShadow__Q24Game9EnemyBaseFv
        .4byte getLifeGaugeParam__Q24Game9EnemyBaseFRQ24Game14LifeGaugeParam
        .4byte getLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere
        .4byte getLODCylinder__Q24Game8CreatureFRQ23Sys8Cylinder
        .4byte startPick__Q24Game8CreatureFv
        .4byte endPick__Q24Game8CreatureFb
        .4byte getMabiki__Q24Game8CreatureFv
        .4byte getFootmarks__Q24Game8CreatureFv
        .4byte onStickStart__Q34Game8Pelplant3ObjFPQ24Game8Creature
        .4byte onStickEnd__Q24Game9EnemyBaseFPQ24Game8Creature
        .4byte onStickStartSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte onStickEndSelf__Q24Game8CreatureFPQ24Game8Creature
        .4byte isSlotFree__Q24Game8CreatureFs
        .4byte getFreeStickSlot__Q24Game8CreatureFv
        .4byte "getNearFreeStickSlot__Q24Game8CreatureFR10Vector3<f>"
        .4byte getRandomFreeStickSlot__Q24Game8CreatureFv
        .4byte onSlotStickStart__Q24Game8CreatureFPQ24Game8Creatures
        .4byte onSlotStickEnd__Q24Game8CreatureFPQ24Game8Creatures
        .4byte "calcStickSlotGlobal__Q24Game8CreatureFsR10Vector3<f>"
        .4byte "getVelocityAt__Q24Game9EnemyBaseFR10Vector3<f>R10Vector3<f>"
        .4byte "getAngularEffect__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte "applyImpulse__Q24Game8CreatureFR10Vector3<f>R10Vector3<f>"
        .4byte ignoreAtari__Q24Game8CreatureFPQ24Game8Creature
        .4byte getSuckPos__Q24Game8CreatureFv
        .4byte getGoalPos__Q24Game8CreatureFv
        .4byte isSuckReady__Q24Game8CreatureFv
        .4byte isSuckArriveWait__Q24Game8CreatureFv
        .4byte stimulate__Q24Game9EnemyBaseFRQ24Game11Interaction
        .4byte getCreatureName__Q24Game9EnemyBaseFv
        .4byte getCreatureID__Q24Game9EnemyBaseFv
        .4byte 0
        .4byte 0
        .4byte "@376@onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent"
        .4byte __dt__Q34Game8Pelplant3ObjFv
        .4byte "birth__Q34Game8Pelplant3ObjFR10Vector3<f>f"
        .4byte
   setInitialSetting__Q34Game8Pelplant3ObjFPQ24Game21EnemyInitialParamBase
        .4byte update__Q24Game9EnemyBaseFv
        .4byte doUpdate__Q34Game8Pelplant3ObjFv
        .4byte doUpdateCommon__Q24Game9EnemyBaseFv
        .4byte doUpdateCarcass__Q24Game9EnemyBaseFv
        .4byte doAnimationUpdateAnimator__Q34Game8Pelplant3ObjFv
        .4byte doAnimationCullingOff__Q24Game9EnemyBaseFv
        .4byte doAnimationCullingOn__Q24Game9EnemyBaseFv
        .4byte doAnimationStick__Q24Game9EnemyBaseFv
        .4byte doSimulationCarcass__Q24Game9EnemyBaseFf
        .4byte doDebugDraw__Q34Game8Pelplant3ObjFR8Graphics
        .4byte doSimpleDraw__Q24Game9EnemyBaseFP8Viewport
        .4byte doSimulationGround__Q24Game9EnemyBaseFf
        .4byte doSimulationFlying__Q24Game9EnemyBaseFf
        .4byte doSimulationStick__Q24Game9EnemyBaseFf
        .4byte changeMaterial__Q24Game9EnemyBaseFv
        .4byte "getCommonEffectPos__Q24Game9EnemyBaseFR10Vector3<f>"
        .4byte getFitEffectPos__Q24Game9EnemyBaseFv
        .4byte viewGetShape__Q24Game9EnemyBaseFv
        .4byte view_start_carrymotion__Q24Game9EnemyBaseFv
        .4byte view_finish_carrymotion__Q24Game9EnemyBaseFv
        .4byte viewStartPreCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewStartCarryMotion__Q24Game9EnemyBaseFv
        .4byte viewOnPelletKilled__Q24Game9EnemyBaseFv
        .4byte getOffsetForMapCollision__Q24Game9EnemyBaseFv
        .4byte setParameters__Q24Game9EnemyBaseFv
        .4byte initMouthSlots__Q24Game9EnemyBaseFv
        .4byte initWalkSmokeEffect__Q24Game9EnemyBaseFv
        .4byte getWalkSmokeEffectMgr__Q24Game9EnemyBaseFv
        .4byte onKeyEvent__Q24Game9EnemyBaseFRCQ28SysShape8KeyEvent
        .4byte injure__Q24Game9EnemyBaseFv
        .4byte setCollEvent__Q24Game9EnemyBaseFRQ24Game9CollEvent
        .4byte "getEfxHamonPos__Q24Game9EnemyBaseFP10Vector3<f>"
        .4byte createInstanceEfxHamon__Q24Game9EnemyBaseFv
        .4byte updateEfxHamon__Q24Game9EnemyBaseFv
        .4byte createEfxHamon__Q24Game9EnemyBaseFv
        .4byte fadeEfxHamon__Q24Game9EnemyBaseFv
        .4byte getEnemyTypeID__Q34Game8Pelplant3ObjFv
        .4byte getMouthSlots__Q24Game9EnemyBaseFv
        .4byte
   doGetLifeGaugeParam__Q34Game8Pelplant3ObjFRQ24Game14LifeGaugeParam .4byte
   throwupItem__Q24Game9EnemyBaseFv .4byte
   "getThrowupItemPosition__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   "getThrowupItemVelocity__Q24Game9EnemyBaseFP10Vector3<f>" .4byte
   throwupItemInDeathProcedure__Q24Game9EnemyBaseFv .4byte
   setLODSphere__Q24Game9EnemyBaseFRQ23Sys6Sphere .4byte
   damageCallBack__Q34Game8Pelplant3ObjFPQ24Game8CreaturefP8CollPart .4byte
   pressCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   flyCollisionCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   hipdropCallBack__Q24Game9EnemyBaseFPQ24Game8CreaturefP8CollPart .4byte
   dropCallBack__Q24Game9EnemyBaseFPQ24Game8Creature .4byte
   earthquakeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   farmCallBack__Q34Game8Pelplant3ObjFPQ24Game8Creaturef .4byte
   "bombCallBack__Q24Game9EnemyBaseFPQ24Game8CreatureR10Vector3<f>f" .4byte
   eatWhitePikminCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturef .4byte
   dopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doDopeCallBack__Q24Game9EnemyBaseFPQ24Game8Creaturei .4byte
   doStartStoneState__Q24Game9EnemyBaseFv .4byte
   doFinishStoneState__Q24Game9EnemyBaseFv .4byte
   getDamageCoeStoneState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeState__Q24Game9EnemyBaseFf .4byte
   doFinishEarthquakeState__Q24Game9EnemyBaseFv .4byte
   doStartEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   doFinishEarthquakeFitState__Q24Game9EnemyBaseFv .4byte
   lifeRecover__Q24Game9EnemyBaseFv .4byte
   startCarcassMotion__Q24Game9EnemyBaseFv .4byte
   setCarcassArg__Q24Game9EnemyBaseFRQ24Game13PelletViewArg .4byte
   getCarcassArgHeight__Q24Game9EnemyBaseFv .4byte
   doBecomeCarcass__Q24Game9EnemyBaseFv .4byte
   startWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   finishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   isFinishableWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doStartWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   doFinishWaitingBirthTypeDrop__Q24Game9EnemyBaseFv .4byte
   wallCallback__Q24Game9EnemyBaseFRCQ24Game8MoveInfo .4byte
   getDownSmokeScale__Q24Game9EnemyBaseFv .4byte
   doStartMovie__Q24Game9EnemyBaseFv .4byte doEndMovie__Q24Game9EnemyBaseFv
        .4byte setFSM__Q34Game8Pelplant3ObjFPQ34Game8Pelplant3FSM
        .4byte 0
        .4byte 0
        .4byte viewGetBaseScale__Q24Game10PelletViewFv
        .4byte "@728@12@viewGetShape__Q24Game9EnemyBaseFv"
        .4byte viewGetCollTreeJointIndex__Q24Game10PelletViewFv
        .4byte viewGetCollTreeOffset__Q24Game10PelletViewFv
        .4byte "@728@12@view_start_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@view_finish_carrymotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewStartPreCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewStartCarryMotion__Q24Game9EnemyBaseFv"
        .4byte "@728@12@viewOnPelletKilled__Q24Game9EnemyBaseFv"
        .4byte "viewEntryShape__Q24Game10PelletViewFR7MatrixfR10Vector3<f>"
    .global __vt__Q34Game8Pelplant21BlendAccelerationFunc
    __vt__Q34Game8Pelplant21BlendAccelerationFunc:
        .4byte 0
        .4byte 0
        .4byte getValue__Q34Game8Pelplant21BlendAccelerationFuncFf

    .section .sbss # 0x80514D80 - 0x80516360
    .global farmMgr__Q24Game4Farm
    farmMgr__Q24Game4Farm:
        .skip 0x4
    .global sCurrentObj__Q34Game8Pelplant3Obj
    sCurrentObj__Q34Game8Pelplant3Obj:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517850
    lbl_80517850:
        .4byte 0xC3A2F983
    .global lbl_80517854
    lbl_80517854:
        .4byte 0x43A2F983
    .global lbl_80517858
    lbl_80517858:
        .4byte 0x40C90FDB
    .global lbl_8051785C
    lbl_8051785C:
        .4byte 0x40400000
    .global lbl_80517860
    lbl_80517860:
        .4byte 0x00000000
    .global lbl_80517864
    lbl_80517864:
        .float 0.5
    .global lbl_80517868
    lbl_80517868:
        .float 1.0
    .global lbl_8051786C
    lbl_8051786C:
        .4byte 0x68656164
        .4byte 0x6A6E7400
    .global lbl_80517874
    lbl_80517874:
        .4byte 0x42C80000
    .global lbl_80517878
    lbl_80517878:
        .4byte 0x6F6E0000
    .global lbl_8051787C
    lbl_8051787C:
        .4byte 0x6F666600
    .global lbl_80517880
    lbl_80517880:
        .4byte 0x41800000
    .global lbl_80517884
    lbl_80517884:
        .4byte 0x40000000
    .global lbl_80517888
    lbl_80517888:
        .4byte 0x42480000
    .global lbl_8051788C
    lbl_8051788C:
        .4byte 0x41000000
    .global lbl_80517890
    lbl_80517890:
        .4byte 0x40600000
    .global lbl_80517894
    lbl_80517894:
        .4byte 0x4099999A
    .global lbl_80517898
    lbl_80517898:
        .4byte 0x3FC00000
    .global lbl_8051789C
    lbl_8051789C:
        .4byte 0x3F59999A
    .global lbl_805178A0
    lbl_805178A0:
        .4byte 0x3F400000
    .global lbl_805178A4
    lbl_805178A4:
        .4byte 0x7A616D61
        .4byte 0x00000000
    .global lbl_805178AC
    lbl_805178AC:
        .4byte 0x41400000
    .global lbl_805178B0
    lbl_805178B0:
        .4byte 0x3FC90FDB
    .global lbl_805178B4
    lbl_805178B4:
        .4byte 0xBFC90FDB
    .global lbl_805178B8
    lbl_805178B8:
        .4byte 0x42F00000
    .global lbl_805178BC
    lbl_805178BC:
        .4byte 0x43960000
    .global lbl_805178C0
    lbl_805178C0:
        .4byte 0x40A00000
    .global lbl_805178C4
    lbl_805178C4:
        .float 0.25
    .global lbl_805178C8
    lbl_805178C8:
        .4byte 0x61636365
        .4byte 0x6C000000
    .global lbl_805178D0
    lbl_805178D0:
        .float 0.1
    .global lbl_805178D4
    lbl_805178D4:
        .4byte 0x3C23D70A
    .global lbl_805178D8
    lbl_805178D8:
        .float 0.3
    .global lbl_805178DC
    lbl_805178DC:
        .4byte 0x83898343
        .4byte 0x83740000
    .global lbl_805178E4
    lbl_805178E4:
        .4byte 0x47C34F80
    .global lbl_805178E8
    lbl_805178E8:
        .4byte 0x447A0000
    .global lbl_805178EC
    lbl_805178EC:
        .4byte 0x41F00000
    .global lbl_805178F0
    lbl_805178F0:
        .4byte 0x42200000
    .global lbl_805178F4
    lbl_805178F4:
        .4byte 0x43FA0000
    .global lbl_805178F8
    lbl_805178F8:
        .4byte 0x4C4F4494
        .4byte 0xBC8C6100
    .global lbl_80517900
    lbl_80517900:
        .4byte 0x3E4CCCCD
    .global lbl_80517904
    lbl_80517904:
        .4byte 0x3EB33333
    .global lbl_80517908
    lbl_80517908:
        .4byte 0x8EBF97CA
        .4byte 0x00000000
    .global lbl_80517910
    lbl_80517910:
        .4byte 0x91AC9378
        .4byte 0x00000000
    .global lbl_80517918
    lbl_80517918:
        .4byte 0x42A00000
    .global lbl_8051791C
    lbl_8051791C:
        .4byte 0x41200000
    .global lbl_80517920
    lbl_80517920:
        .4byte 0x43B40000
    .global lbl_80517924
    lbl_80517924:
        .4byte 0x43480000
    .global lbl_80517928
    lbl_80517928:
        .4byte 0x41700000
    .global lbl_8051792C
    lbl_8051792C:
        .4byte 0x428C0000
    .global lbl_80517930
    lbl_80517930:
        .4byte 0x8E8B8A45
        .4byte 0x8D820000
    .global lbl_80517938
    lbl_80517938:
        .4byte 0x42B40000
    .global lbl_8051793C
    lbl_8051793C:
        .4byte 0x43340000
    .global lbl_80517940
    lbl_80517940:
        .4byte 0x92548DF5
        .4byte 0x8D820000
    .global lbl_80517948
    lbl_80517948:
        .4byte 0x8D558C82
        .4byte 0x97CD0000
    .global lbl_80517950
    lbl_80517950:
        .4byte 0x42C60000
    .global lbl_80517954
    lbl_80517954:
        .4byte 0x42700000
    .global lbl_80517958
    lbl_80517958:
        .float 0.05
        .4byte 0x00000000
*/

const char* dataPath = "/enemy/data/pelplant"; // unused/used in print inline probably
const char* parmPath = "/enemy/parm/pelplant"; // unused/used in print inline probably

namespace Game {

namespace Pelplant {
/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
float BlendAccelerationFunc::getValue(float p1)
{
	float sinTheta = pikmin2_sinf(TAU * (3.0f * -p1));
	float value    = (0.5f * (1.0f - p1));
	value          = (value * sinTheta) + p1;
	if (value > 1.0f) {
		return 1.0f;
	}

	if (value < 0.0f) {
		value = 0.0f;
	}
	return value;
}

/*
 * --INFO--
 * Address:	801083B0
 * Size:	0000B4
 */
void Obj::birth(Vector3f& position, float faceDir)
{
	EnemyBase::birth(position, faceDir);
	m_farmPow = 0;
	if (Farm::farmMgr != nullptr) {
		Farm::farmMgr->addPlant(this);
	}
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		m_fsm->start(this, 4, nullptr);
	} else {
		m_fsm->start(this, 0, nullptr);
	}
	_2C4 = m_model->getJoint("bodyjnt2")->getWorldMatrix();
}

/*
 * --INFO--
 * Address:	80108464
 * Size:	000280
 */
void Obj::setInitialSetting(EnemyInitialParamBase* param)
{
	if (m_farmPow == 0) {
		_2C8 |= 1;
	} else {
		_2C8 &= ~1;
	}
	if (m_farmPow < 0) {
		param->_02 = 0;
	}
	_2D4 = param->_00;
	setPelletColor(_2D4, false);
	m_pelletSize = param->_01;
	switch (param->_02) {
	case 0:
		m_fsm->start(this, 0, nullptr);
		break;
	case 1:
		m_fsm->start(this, 1, nullptr);
		break;
	case 2:
		m_fsm->start(this, 2, nullptr);
		attachPellet();
		break;
	}
	if (param->_01 == 5) {
		sCurrentObj            = this;
		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(365, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);
		sCurrentObj              = nullptr;
	}
	if (param->_01 == 10 || param->_01 == 20) {
		sCurrentObj            = this;
		SysShape::Joint* joint = m_model->getJoint("headjnt");
		P2ASSERTLINE(376, joint);
		joint->m_j3d->m_function = *(Obj::headJointCallBack);
		joint                    = m_model->getJoint("bodyjnt1");
		P2ASSERTLINE(381, joint);
		joint->m_j3d->m_function = *(Obj::neckJointCallBack);
		sCurrentObj              = nullptr;
	}
	CollPart* part = m_collTree->getCollPart('head');
	float scale    = getHeadScale();
	part->setScale(scale);
	part->_20.x *= scale;
	part->_20.y *= scale;
	part->_20.z *= scale;
}

/**
 * __ct__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	801086E4
 * Size:	000138
 */
Obj::Obj()
    : EnemyBase()
    , m_fsm(nullptr)
    , _2C4(nullptr)
    , _2C8(0)
    , m_pellet(nullptr)
    , _2D0(0.0f)
    , _2D4(3)
    , m_pelletSize(1)
    , m_farmPow(0)
{
	m_animator = new ProperAnimator();
	setFSM(new FSM());
	_2C8 = 0;
}

/*
 * --INFO--
 * Address:	8010881C
 * Size:	00004C
 */
// WEAK - need to move to header
void Pelplant::Obj::setFSM(Game::Pelplant::FSM* fsm)
{
	m_fsm = fsm;
	m_fsm->init(this);
	m_currentLifecycleState = nullptr;
}

/*
 * __dt__Q24Game22EnemyBlendAnimatorBaseFv
 * --INFO--
 * Address:	80108868
 * Size:	00005C
 */
// WEAK - need to move to header
EnemyBlendAnimatorBase::~EnemyBlendAnimatorBase() { }

/*
 * --INFO--
 * Address:	801088C4
 * Size:	000034
 */
void Pelplant::Obj::doUpdate() { m_fsm->exec(this); }

/*
 * --INFO--
 * Address:	801088F8
 * Size:	000088
 */
void Pelplant::Obj::updateLODSphereRadius(int p1)
{
	if (p1 == 2) {
		switch (m_pelletSize) {
		case 1:
			m_lodRange.m_radius = sLODRadius[0];
			return;
		case 5:
			m_lodRange.m_radius = sLODRadius[1];
			return;
		case 10:
			m_lodRange.m_radius = sLODRadius[2];
			return;
		case 20:
			m_lodRange.m_radius = sLODRadius[3];
			return;
		}
	} else {
		m_lodRange.m_radius = sLODRadius[0];
	}
}

/*
 * --INFO--
 * Address:	80108980
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80108984
 * Size:	00018C
 */
void Obj::doDebugDraw(Graphics& graphics)
{
	EnemyBase::doDebugDraw(graphics);
	if (((Parms*)m_parms)->m_flags[0].typeView & 1) {
		graphics.initPerspPrintf(graphics.m_currentViewport);

		PerspPrintfInfo info;
		Vector3f perspVec(m_position.x, 100.0f + m_position.y, m_position.z);

		info._14 = Color4(0xC8, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0x64, 0x64, 0xFF, 0xC8);
		graphics.perspPrintf(info, perspVec, "FARM_POW(%d) Grow%s", m_farmPow, (_2C8 & 1) ? "on" : "off");

		perspVec.y += 16.0f;
		info._14 = Color4(0xFF, 0xC8, 0xFF, 0xC8);
		info._18 = Color4(0xC8, 0x64, 0xFF, 0xC8);
		graphics.perspPrintf(info, perspVec, "%s %4.2f", m_fsm->getCurrName(this), _2C0);
	}
}

/*
 * --INFO--
 * Address:	80108B10
 * Size:	0000C0
 */
void Obj::getShadowParam(Game::ShadowParam& param)
{
	param.m_position = m_position;
	param.m_position.y += 2.0f;
	// TODO: Needs _0C8
	/*
	lfs      f1, 0x18c(r3)
	lfs      f0, lbl_80517884@sda21(r2)
	stfs     f1, 0(r4)
	lfs      f1, 0x190(r3)
	stfs     f1, 4(r4)
	lfs      f1, 0x194(r3)
	stfs     f1, 8(r4)
	lfs      f1, 4(r4)
	fadds    f0, f1, f0
	stfs     f0, 4(r4)
	lwz      r5, 0xc8(r3)
	cmplwi   r5, 0
	beq      lbl_80108B60
	lfs      f0, 0xc(r5)
	stfs     f0, 0xc(r4)
	lfs      f0, 0x10(r5)
	stfs     f0, 0x10(r4)
	lfs      f0, 0x14(r5)
	stfs     f0, 0x14(r4)
	b        lbl_80108B74

lbl_80108B60:
	lfs      f1, lbl_80517860@sda21(r2)
	lfs      f0, lbl_80517868@sda21(r2)
	stfs     f1, 0xc(r4)
	stfs     f0, 0x10(r4)
	stfs     f1, 0x14(r4)

lbl_80108B74:
	lfs      f1, lbl_80517888@sda21(r2)
	lfs      f0, lbl_80517860@sda21(r2)
	stfs     f1, 0x18(r4)
	lwz      r3, 0x2c4(r3)
	lfs      f1, 0(r3)
	lfs      f2, 4(r3)
	fmuls    f3, f1, f1
	lfs      f1, 8(r3)
	fmuls    f2, f2, f2
	fmuls    f1, f1, f1
	fadds    f3, f3, f2
	fadds    f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_80108BBC
	ble      lbl_80108BC0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80108BC0

lbl_80108BBC:
	fmr      f3, f0

lbl_80108BC0:
	lfs      f0, lbl_8051788C@sda21(r2)
	fmuls    f0, f0, f3
	stfs     f0, 0x1c(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80108BD0
 * Size:	000090
 */
void Obj::doAnimationUpdateAnimator()
{
	BlendAccelerationFunc func;
	static_cast<EnemyBlendAnimatorBase*>(m_animator)
	    ->animate(&func, EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame,
	              EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame,
	              EnemyAnimatorBase::defaultAnimSpeed * sys->m_secondsPerFrame);
	SysShape::Model* model = m_model;
	(*model->m_j3dModel->m_modelData->m_jointTree.m_joints)->m_mtxCalc
	    = (J3DMtxCalcAnmBase*)(static_cast<EnemyBlendAnimatorBase*>(m_animator)->m_animator.getCalc());
}

/*
 * --INFO--
 * Address:	80108C60
 * Size:	000058
 */
float Obj::getHeadScale()
{
	float headScale;
	if (m_pellet) {
		switch (m_pelletSize) {
		case 1:
			headScale = 1.0f;
			break;
		case 5:
			headScale = 2.0f;
			break;
		case 10:
			headScale = 3.5f;
			break;
		case 20:
			headScale = 4.8f;
			break;
		}
	} else {
		headScale = 1.0f;
	}
	return headScale;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
inline void Obj::getNeckScale(Vector3f* scale)
{
	float neckScale;
	switch (m_pelletSize) {
	case 1:
		neckScale = 12.0f;
		break;
	case 5:
		neckScale = 12.0f;
		break;
	case 10:
		neckScale = 12.0f;
		break;
	case 20:
		neckScale = 12.0f;
		break;
	default:
		JUT_PANICLINE(663, "Unknown Pellet size. %d \n", m_pelletSize);
		break;
	}
	*scale = Vector3f(neckScale, 0.0f, 0.0f);
}

/*
 * doAnimation__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	80108CB8
 * Size:	000198
 */
void Obj::doAnimation()
{
	sys->m_timers->_start("zama", true);

	float headScale = getHeadScale();

	Obj::sCurrentObj = this;
	EnemyBase::doAnimation();
	Obj::sCurrentObj = nullptr;

	if (m_pellet != nullptr) {
		Vector3f translation;
		getNeckScale(&translation);

		Vector3f rotation(0.0f, HALF_PI, -HALF_PI);

		Vector3f scale(1.0f / headScale);

		Matrixf mat;
		mat.makeSRT(scale, rotation, translation);
		m_pellet->updateCapture(mat);
	}

	sys->m_timers->_stop("zama");
}

/*
 * --INFO--
 * Address:	80108E50
 * Size:	000004
 */
void Obj::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80108E54
 * Size:	0000F0
 */
void Obj::setPelletColor(u16 color, bool check)
{
	if (m_pellet != nullptr) {
		switch (color) {
		case PELLET_BLUE:
		case PELLET_RED:
		case PELLET_YELLOW:
			if (check) {
				if (playData->hasMetPikmin(color)) {
					m_pellet->setValidColor(color);
					return;
				}
				m_pellet->m_pelletColor = PELLET_RED;
				return;
			}
			m_pellet->setValidColor(color);
			break;
		default:
			m_pellet->m_pelletColor = PELLET_RED;
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	80108F44
 * Size:	000190
 */
void Obj::changePelletColor()
{
	if ((m_pellet != nullptr) && (_2D4 == 3)) {

		if (_2D0 > static_cast<Parms*>(m_parms)->m_pelplantParms.m_fp03.m_value) {
			u16 initialColor;
			if (m_pellet != nullptr) {
				initialColor = m_pellet->m_pelletColor;
			} else {
				initialColor = PELLET_BLUE;
			}
			u16 nextColor = initialColor + 1;
			u16 colorCap  = nextColor;

			while (!playData->hasMetPikmin(nextColor)) {
				nextColor += 1;
				if (nextColor > 2) {
					nextColor = PELLET_BLUE;
				}
				if (nextColor == colorCap) {
					nextColor = PELLET_RED;
				}
			}

			if (nextColor > 2) {
				nextColor = PELLET_BLUE;
			}
			setPelletColor(nextColor, true);

			if (_2C8 & 1) {
				_2D0 = 0.0f;
				return;
			}
			_2D0 = 0.0f;
			return;
		}

		const float advanceFrame = sys->m_secondsPerFrame;
		if (_2C8 & 1) {
			_2D0 += advanceFrame;
		}
	}
}

/*
 * --INFO--
 * Address:	801090D4
 * Size:	000110
 */
void Obj::attachPellet()
{
	if (m_pellet == nullptr) {
		Obj::sCurrentObj = this;
		PelletNumberInitArg numberArg(m_pelletSize, 0);
		Pellet* newPellet = pelletMgr->birth(&numberArg);

		if (newPellet != nullptr) {
			Matrixf* mat = m_model->getJoint("headjnt")->getWorldMatrix();
			P2ASSERTLINE(777, mat != nullptr);
			newPellet->startCapture(mat);
			m_pellet = (PelletNumber::Object*)newPellet;

			setPelletColor(_2D4, false);
		}

		Obj::sCurrentObj = nullptr;
	}
}

/*
 * --INFO--
 * Address:	801091E4
 * Size:	000098
 */
bool Pelplant::Obj::damageCallBack(Game::Creature* source, float damage, CollPart* part)
{
	if (isLivingThing()) {
		addDamage(damage, 1.0f);
		if (part && part->_3C.getStrID()[3] == '0') {
			addDamage(m_maxHealth, 1.0f);
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	8010927C
 * Size:	00000C
 */
bool Pelplant::Obj::isLivingThing() { return (_2C8 >> 1 & 1); }

/*
 * --INFO--
 * Address:	80109288
 * Size:	000078
 */
bool Pelplant::Obj::farmCallBack(Game::Creature* p1, float p2)
{
	m_farmPow = (char)((p2 >= 0.0f) ? p2 + 0.5f : p2 - 0.5f);
	if (m_farmPow < 0) {
		_2C8 &= ~1;
	} else {
		_2C8 |= 1;
	}
	resetEvent(0, EB_Cullable);
	return true;
}

/*
 * --INFO--
 * Address:	80109300
 * Size:	000060
 */
void Pelplant::Obj::onStickStart(Game::Creature* other)
{
	EnemyBase::onStickStart(other);
	if (other->_0F8 && other->_0F8->_3C.getStrID()[3] == '0') {
		addDamage(m_maxHealth, 1.0f);
	}
}

/*
 * --INFO--
 * Address:	80109360
 * Size:	0000F0
 */
unknown Pelplant::Obj::headJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj != nullptr && p2 == 1) {
		Mtx& mtx    = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];
		float scale = sCurrentObj->getHeadScale();
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				mtx[i][j] *= scale;
			}
		}
	}
	return 0;
}

/*
 * --INFO--
 * Address:	80109450
 * Size:	000104
 */
unknown Game::Pelplant::Obj::neckJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj != nullptr && p2 == 1) {
		Mtx& mtx = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];

		float neckScale1;
		float neckScale2;
		if (sCurrentObj->m_pellet != nullptr) {
			switch (sCurrentObj->m_pelletSize) { /* switch 2 */
			case 1:                              /* switch 2 */
				neckScale2 = 12.0f;
				neckScale1 = neckScale2;
				break;
			case 5: /* switch 2 */
				neckScale2 = 12.0f;
				neckScale1 = neckScale2;
				break;
			case 10: /* switch 2 */
				neckScale2 = 1.5;
				neckScale1 = 0.85;
				break;
			case 20: /* switch 2 */
				neckScale2 = 2.0;
				neckScale1 = 0.75;
				break;
			}

		} else {
			neckScale2 = 12.0f;
			neckScale1 = neckScale2;
		}

		Vector3f scale(neckScale2, neckScale1, neckScale2);
		mtx[0][0] *= scale.x;
		mtx[0][1] *= scale.x;
		mtx[0][2] *= scale.x;

		mtx[1][0] *= scale.y;
		mtx[1][1] *= scale.y;
		mtx[1][2] *= scale.y;

		mtx[2][0] *= scale.z;
		mtx[2][1] *= scale.z;
		mtx[2][2] *= scale.z;
	}
	return 0;
}

/*
 * __ct__Q34Game8Pelplant3MgrFiUc
 * --INFO--
 * Address:	80109554
 * Size:	000050
 */
Pelplant::Mgr::Mgr(int p1, unsigned char p2)
    : EnemyMgrBase(p1, p2)
{
	m_name = "ペレット草マネージャ"; // pellet plant manager
}

/*
 * __dt__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	801095A4
 * Size:	000098
 */
// WEAK - need to move to header
EnemyMgrBase::~EnemyMgrBase() { }

/*
 * --INFO--
 * Address:	8010963C
 * Size:	000048
 */
void Pelplant::Mgr::doAlloc() { init(new Parms()); }

/*
 * __ct__Q34Game8Pelplant5ParmsFv
 * --INFO--
 * Address:	80109684
 * Size:	000118
 */
// Pelplant::Parms::Parms()
//     : EnemyParmsBase()
//     , m_pelplantParms()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r4, lbl_8047A660@ha
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	addi     r31, r4, lbl_8047A660@l
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	bl       __ct__Q24Game14EnemyParmsBaseFv
// 	lis      r3, __vt__Q34Game8Pelplant5Parms@ha
// 	lis      r5, 0x66703031@ha
// 	addi     r0, r3, __vt__Q34Game8Pelplant5Parms@l
// 	addi     r4, r30, 0x87c
// 	stw      r0, 0xd8(r30)
// 	li       r7, 0
// 	addi     r0, r31, 0xc4
// 	addi     r3, r30, 0x804
// 	stw      r4, 0x7f8(r30)
// 	addi     r4, r30, 0x7f8
// 	addi     r5, r5, 0x66703031@l
// 	addi     r6, r31, 0xd4
// 	stw      r7, 0x7fc(r30)
// 	stw      r0, 0x800(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703032@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178B8@sda21(r2)
// 	stw      r0, 0x804(r30)
// 	addi     r3, r30, 0x82c
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r4, r30, 0x7f8
// 	stfs     f0, 0x81c(r30)
// 	addi     r5, r5, 0x66703032@l
// 	lfs      f0, lbl_805178BC@sda21(r2)
// 	addi     r6, r31, 0xe4
// 	stfs     f1, 0x824(r30)
// 	stfs     f0, 0x828(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703033@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178B8@sda21(r2)
// 	stw      r0, 0x82c(r30)
// 	addi     r3, r30, 0x854
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r4, r30, 0x7f8
// 	stfs     f0, 0x844(r30)
// 	addi     r5, r5, 0x66703033@l
// 	lfs      f0, lbl_805178BC@sda21(r2)
// 	addi     r6, r31, 0xf4
// 	stfs     f1, 0x84c(r30)
// 	stfs     f0, 0x850(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lfs      f2, lbl_80517898@sda21(r2)
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	stw      r0, 0x854(r30)
// 	mr       r3, r30
// 	lfs      f0, lbl_805178C0@sda21(r2)
// 	stfs     f2, 0x86c(r30)
// 	stfs     f1, 0x874(r30)
// 	stfs     f0, 0x878(r30)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * __ct__Q24Game14EnemyParmsBaseFv
 * --INFO--
 * Address:	8010979C
 * Size:	0001D4
 */
// EnemyParmsBase::EnemyParmsBase()
//     : CreatureParms()
//     , m_flags()
//     , m_general()
// {
// 	m_flags[0].byteView[0] = 0;
// 	m_flags[0].byteView[1] = 0;
// 	m_flags[1].byteView[0] = 0;
// 	m_flags[1].byteView[1] = 0;
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r5, 0x73303030@ha
// 	lis      r4, __vt__Q24Game13CreatureParms@ha
// 	stw      r0, 0x14(r1)
// 	addi     r0, r4, __vt__Q24Game13CreatureParms@l
// 	addi     r5, r5, 0x73303030@l
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lis      r3, lbl_8047A660@ha
// 	stw      r30, 8(r1)
// 	addi     r30, r3, lbl_8047A660@l
// 	li       r3, 0
// 	mr       r4, r31
// 	stw      r0, 0xd8(r31)
// 	addi     r0, r31, 0xd4
// 	addi     r6, r30, 0x118
// 	stw      r0, 0(r31)
// 	addi     r0, r30, 0x104
// 	stw      r3, 4(r31)
// 	addi     r3, r31, 0xc
// 	stw      r0, 8(r31)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303031@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517864@sda21(r2)
// 	stw      r0, 0xc(r31)
// 	mr       r4, r31
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r31, 0x34
// 	stfs     f0, 0x24(r31)
// 	addi     r5, r5, 0x73303031@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r30, 0x12c
// 	stfs     f1, 0x2c(r31)
// 	stfs     f0, 0x30(r31)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303032@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517864@sda21(r2)
// 	stw      r0, 0x34(r31)
// 	mr       r4, r31
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r31, 0x5c
// 	stfs     f0, 0x4c(r31)
// 	addi     r5, r5, 0x73303032@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r30, 0x13c
// 	stfs     f1, 0x54(r31)
// 	stfs     f0, 0x58(r31)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303033@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178C4@sda21(r2)
// 	stw      r0, 0x5c(r31)
// 	mr       r4, r31
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r31, 0x84
// 	stfs     f0, 0x74(r31)
// 	addi     r5, r5, 0x73303033@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r2, lbl_805178C8@sda21
// 	stfs     f1, 0x7c(r31)
// 	stfs     f0, 0x80(r31)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x73303034@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178D0@sda21(r2)
// 	stw      r0, 0x84(r31)
// 	mr       r4, r31
// 	lfs      f1, lbl_805178D4@sda21(r2)
// 	addi     r3, r31, 0xac
// 	stfs     f0, 0x9c(r31)
// 	addi     r5, r5, 0x73303034@l
// 	lfs      f0, lbl_80517884@sda21(r2)
// 	addi     r6, r30, 0x14c
// 	stfs     f1, 0xa4(r31)
// 	stfs     f0, 0xa8(r31)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lfs      f0, lbl_805178D8@sda21(r2)
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_805178D4@sda21(r2)
// 	stw      r0, 0xac(r31)
// 	lis      r5, __vt__Q24Game14EnemyParmsBase@ha
// 	addi     r0, r5, __vt__Q24Game14EnemyParmsBase@l
// 	lis      r3, "__ct__11BitFlag<Us>Fv"@ha
// 	stfs     f0, 0xc4(r31)
// 	addi     r4, r3, "__ct__11BitFlag<Us>Fv"@l
// 	lfs      f0, lbl_80517884@sda21(r2)
// 	addi     r3, r31, 0xdc
// 	stfs     f1, 0xcc(r31)
// 	li       r5, 0
// 	li       r6, 2
// 	li       r7, 2
// 	stfs     f0, 0xd0(r31)
// 	stw      r0, 0xd8(r31)
// 	bl       __construct_array
// 	addi     r3, r31, 0xe0
// 	li       r4, 1
// 	bl       __ct__Q34Game14EnemyParmsBase5ParmsFv
// 	li       r0, 0
// 	mr       r3, r31
// 	stb      r0, 0xdc(r31)
// 	stb      r0, 0xdd(r31)
// 	stb      r0, 0xde(r31)
// 	stb      r0, 0xdf(r31)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * __ct__Q34Game14EnemyParmsBase5ParmsFv
 * --INFO--
 * Address:	80109970
 * Size:	000AE0
 */
// EnemyParmsBase::Parms::Parms()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	extsh.   r0, r4
// 	lis      r4, lbl_8047A660@ha
// 	stw      r31, 0xc(r1)
// 	addi     r31, r4, lbl_8047A660@l
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	beq      lbl_801099A0
// 	addi     r0, r30, 0x714
// 	stw      r0, 0(r30)

// lbl_801099A0:
// 	li       r0, 0
// 	lis      r5, 0x66703030@ha
// 	stw      r0, 4(r30)
// 	addi     r0, r31, 0xc4
// 	mr       r4, r30
// 	addi     r3, r30, 0xc
// 	stw      r0, 8(r30)
// 	addi     r5, r5, 0x66703030@l
// 	addi     r6, r2, lbl_805178DC@sda21
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703237@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517874@sda21(r2)
// 	stw      r0, 0xc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x34
// 	stfs     f0, 0x24(r30)
// 	addi     r5, r5, 0x66703237@l
// 	lfs      f0, lbl_805178E4@sda21(r2)
// 	addi     r6, r31, 0x15c
// 	stfs     f1, 0x2c(r30)
// 	stfs     f0, 0x30(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703331@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517888@sda21(r2)
// 	stw      r0, 0x34(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x5c
// 	stfs     f0, 0x4c(r30)
// 	addi     r5, r5, 0x66703331@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x16c
// 	stfs     f1, 0x54(r30)
// 	stfs     f0, 0x58(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703330@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178D4@sda21(r2)
// 	stw      r0, 0x5c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x84
// 	stfs     f0, 0x74(r30)
// 	addi     r5, r5, 0x66703330@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r31, 0x17c
// 	stfs     f1, 0x7c(r30)
// 	stfs     f0, 0x80(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703031@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178EC@sda21(r2)
// 	stw      r0, 0x84(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0xac
// 	stfs     f0, 0x9c(r30)
// 	addi     r5, r5, 0x66703031@l
// 	lfs      f0, lbl_805178E4@sda21(r2)
// 	addi     r6, r31, 0x188
// 	stfs     f1, 0xa4(r30)
// 	stfs     f0, 0xa8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703333@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178F0@sda21(r2)
// 	stw      r0, 0xac(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0xd4
// 	stfs     f0, 0xc4(r30)
// 	addi     r5, r5, 0x66703333@l
// 	lfs      f0, lbl_80517874@sda21(r2)
// 	addi     r6, r31, 0x198
// 	stfs     f1, 0xcc(r30)
// 	stfs     f0, 0xd0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703334@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178F0@sda21(r2)
// 	stw      r0, 0xd4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0xfc
// 	stfs     f0, 0xec(r30)
// 	addi     r5, r5, 0x66703334@l
// 	lfs      f0, lbl_805178F4@sda21(r2)
// 	addi     r6, r31, 0x1b8
// 	stfs     f1, 0xf4(r30)
// 	stfs     f0, 0xf8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703332@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178F0@sda21(r2)
// 	stw      r0, 0xfc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x124
// 	stfs     f0, 0x114(r30)
// 	addi     r5, r5, 0x66703332@l
// 	lfs      f0, lbl_805178F4@sda21(r2)
// 	addi     r6, r2, lbl_805178F8@sda21
// 	stfs     f1, 0x11c(r30)
// 	stfs     f0, 0x120(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703032@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178F0@sda21(r2)
// 	stw      r0, 0x124(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x14c
// 	stfs     f0, 0x13c(r30)
// 	addi     r5, r5, 0x66703032@l
// 	lfs      f0, lbl_805178F4@sda21(r2)
// 	addi     r6, r31, 0x1cc
// 	stfs     f1, 0x144(r30)
// 	stfs     f0, 0x148(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703033@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517900@sda21(r2)
// 	stw      r0, 0x14c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x174
// 	stfs     f0, 0x164(r30)
// 	addi     r5, r5, 0x66703033@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r31, 0x1e0
// 	stfs     f1, 0x16c(r30)
// 	stfs     f0, 0x170(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703034@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178C4@sda21(r2)
// 	stw      r0, 0x174(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x19c
// 	stfs     f0, 0x18c(r30)
// 	addi     r5, r5, 0x66703034@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r31, 0x1f4
// 	stfs     f1, 0x194(r30)
// 	stfs     f0, 0x198(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703035@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517904@sda21(r2)
// 	stw      r0, 0x19c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x1c4
// 	stfs     f0, 0x1b4(r30)
// 	addi     r5, r5, 0x66703035@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r2, lbl_80517908@sda21
// 	stfs     f1, 0x1bc(r30)
// 	stfs     f0, 0x1c0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703036@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	stw      r0, 0x1c4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x1ec
// 	stfs     f0, 0x1dc(r30)
// 	addi     r5, r5, 0x66703036@l
// 	lfs      f0, lbl_80517874@sda21(r2)
// 	addi     r6, r2, lbl_80517910@sda21
// 	stfs     f1, 0x1e4(r30)
// 	stfs     f0, 0x1e8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703038@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517918@sda21(r2)
// 	stw      r0, 0x1ec(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x214
// 	stfs     f0, 0x204(r30)
// 	addi     r5, r5, 0x66703038@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x208
// 	stfs     f1, 0x20c(r30)
// 	stfs     f0, 0x210(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703238@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178D0@sda21(r2)
// 	stw      r0, 0x214(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x23c
// 	stfs     f0, 0x22c(r30)
// 	addi     r5, r5, 0x66703238@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r31, 0x214
// 	stfs     f1, 0x234(r30)
// 	stfs     f0, 0x238(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703039@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051791C@sda21(r2)
// 	stw      r0, 0x23c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x264
// 	stfs     f0, 0x254(r30)
// 	addi     r5, r5, 0x66703039@l
// 	lfs      f0, lbl_80517920@sda21(r2)
// 	addi     r6, r31, 0x224
// 	stfs     f1, 0x25c(r30)
// 	stfs     f0, 0x260(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703130@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517924@sda21(r2)
// 	stw      r0, 0x264(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517868@sda21(r2)
// 	addi     r3, r30, 0x28c
// 	stfs     f0, 0x27c(r30)
// 	addi     r5, r5, 0x66703130@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x230
// 	stfs     f1, 0x284(r30)
// 	stfs     f0, 0x288(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703131@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517928@sda21(r2)
// 	stw      r0, 0x28c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517868@sda21(r2)
// 	addi     r3, r30, 0x2b4
// 	stfs     f0, 0x2a4(r30)
// 	addi     r5, r5, 0x66703131@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x23c
// 	stfs     f1, 0x2ac(r30)
// 	stfs     f0, 0x2b0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703132@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051792C@sda21(r2)
// 	stw      r0, 0x2b4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x2dc
// 	stfs     f0, 0x2cc(r30)
// 	addi     r5, r5, 0x66703132@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x250
// 	stfs     f1, 0x2d4(r30)
// 	stfs     f0, 0x2d8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703235@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517924@sda21(r2)
// 	stw      r0, 0x2dc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x304
// 	stfs     f0, 0x2f4(r30)
// 	addi     r5, r5, 0x66703235@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r2, lbl_80517930@sda21
// 	stfs     f1, 0x2fc(r30)
// 	stfs     f0, 0x300(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703133@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517888@sda21(r2)
// 	stw      r0, 0x304(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x32c
// 	stfs     f0, 0x31c(r30)
// 	addi     r5, r5, 0x66703133@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x25c
// 	stfs     f1, 0x324(r30)
// 	stfs     f0, 0x328(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703134@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517938@sda21(r2)
// 	stw      r0, 0x32c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x354
// 	stfs     f0, 0x344(r30)
// 	addi     r5, r5, 0x66703134@l
// 	lfs      f0, lbl_8051793C@sda21(r2)
// 	addi     r6, r31, 0x268
// 	stfs     f1, 0x34c(r30)
// 	stfs     f0, 0x350(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703236@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517924@sda21(r2)
// 	stw      r0, 0x354(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x37c
// 	stfs     f0, 0x36c(r30)
// 	addi     r5, r5, 0x66703236@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r2, lbl_80517940@sda21
// 	stfs     f1, 0x374(r30)
// 	stfs     f0, 0x378(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703135@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517888@sda21(r2)
// 	stw      r0, 0x37c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x3a4
// 	stfs     f0, 0x394(r30)
// 	addi     r5, r5, 0x66703135@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x274
// 	stfs     f1, 0x39c(r30)
// 	stfs     f0, 0x3a0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703137@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178B8@sda21(r2)
// 	stw      r0, 0x3a4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x3cc
// 	stfs     f0, 0x3bc(r30)
// 	addi     r5, r5, 0x66703137@l
// 	lfs      f0, lbl_8051793C@sda21(r2)
// 	addi     r6, r31, 0x280
// 	stfs     f1, 0x3c4(r30)
// 	stfs     f0, 0x3c8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703138@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178BC@sda21(r2)
// 	stw      r0, 0x3cc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x3f4
// 	stfs     f0, 0x3e4(r30)
// 	addi     r5, r5, 0x66703138@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x28c
// 	stfs     f1, 0x3ec(r30)
// 	stfs     f0, 0x3f0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703139@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	stw      r0, 0x3f4(r30)
// 	mr       r4, r30
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r3, r30, 0x41c
// 	stfs     f1, 0x40c(r30)
// 	addi     r5, r5, 0x66703139@l
// 	addi     r6, r31, 0x2a0
// 	stfs     f1, 0x414(r30)
// 	stfs     f0, 0x418(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703136@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_805178B8@sda21(r2)
// 	stw      r0, 0x41c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x444
// 	stfs     f0, 0x434(r30)
// 	addi     r5, r5, 0x66703136@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x2b0
// 	stfs     f1, 0x43c(r30)
// 	stfs     f0, 0x440(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703230@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f1, lbl_80517868@sda21(r2)
// 	stw      r0, 0x444(r30)
// 	mr       r4, r30
// 	lfs      f0, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x46c
// 	stfs     f1, 0x45c(r30)
// 	addi     r5, r5, 0x66703230@l
// 	addi     r6, r31, 0x2bc
// 	stfs     f0, 0x464(r30)
// 	stfs     f1, 0x468(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703231@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051792C@sda21(r2)
// 	stw      r0, 0x46c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x494
// 	stfs     f0, 0x484(r30)
// 	addi     r5, r5, 0x66703231@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x2cc
// 	stfs     f1, 0x48c(r30)
// 	stfs     f0, 0x490(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703232@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517928@sda21(r2)
// 	stw      r0, 0x494(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x4bc
// 	stfs     f0, 0x4ac(r30)
// 	addi     r5, r5, 0x66703232@l
// 	lfs      f0, lbl_8051793C@sda21(r2)
// 	addi     r6, r31, 0x2dc
// 	stfs     f1, 0x4b4(r30)
// 	stfs     f0, 0x4b8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703233@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051792C@sda21(r2)
// 	stw      r0, 0x4bc(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x4e4
// 	stfs     f0, 0x4d4(r30)
// 	addi     r5, r5, 0x66703233@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x2ec
// 	stfs     f1, 0x4dc(r30)
// 	stfs     f0, 0x4e0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703234@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517928@sda21(r2)
// 	stw      r0, 0x4e4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x50c
// 	stfs     f0, 0x4fc(r30)
// 	addi     r5, r5, 0x66703234@l
// 	lfs      f0, lbl_8051793C@sda21(r2)
// 	addi     r6, r2, lbl_80517948@sda21
// 	stfs     f1, 0x504(r30)
// 	stfs     f0, 0x508(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703239@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051791C@sda21(r2)
// 	stw      r0, 0x50c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x534
// 	stfs     f0, 0x524(r30)
// 	addi     r5, r5, 0x66703239@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x2fc
// 	stfs     f1, 0x52c(r30)
// 	stfs     f0, 0x530(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703335@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517928@sda21(r2)
// 	stw      r0, 0x534(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x55c
// 	stfs     f0, 0x54c(r30)
// 	addi     r5, r5, 0x66703335@l
// 	lfs      f0, lbl_80517950@sda21(r2)
// 	addi     r6, r31, 0x308
// 	stfs     f1, 0x554(r30)
// 	stfs     f0, 0x558(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703336@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	stw      r0, 0x55c(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x584
// 	stfs     f0, 0x574(r30)
// 	addi     r5, r5, 0x66703336@l
// 	lfs      f0, lbl_80517954@sda21(r2)
// 	addi     r6, r31, 0x314
// 	stfs     f1, 0x57c(r30)
// 	stfs     f0, 0x580(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703337@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051791C@sda21(r2)
// 	stw      r0, 0x584(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x5ac
// 	stfs     f0, 0x59c(r30)
// 	addi     r5, r5, 0x66703337@l
// 	lfs      f0, lbl_805178E8@sda21(r2)
// 	addi     r6, r31, 0x32c
// 	stfs     f1, 0x5a4(r30)
// 	stfs     f0, 0x5a8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x66703338@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_80517958@sda21(r2)
// 	stw      r0, 0x5ac(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x5d4
// 	stfs     f0, 0x5c4(r30)
// 	addi     r5, r5, 0x66703338@l
// 	lfs      f0, lbl_80517868@sda21(r2)
// 	addi     r6, r31, 0x33c
// 	stfs     f1, 0x5cc(r30)
// 	stfs     f0, 0x5d0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<f>"@ha
// 	lis      r5, 0x69703031@ha
// 	addi     r0, r3, "__vt__7Parm<f>"@l
// 	lfs      f0, lbl_8051791C@sda21(r2)
// 	stw      r0, 0x5d4(r30)
// 	mr       r4, r30
// 	lfs      f1, lbl_80517860@sda21(r2)
// 	addi     r3, r30, 0x5fc
// 	stfs     f0, 0x5ec(r30)
// 	addi     r5, r5, 0x69703031@l
// 	lfs      f0, lbl_80517954@sda21(r2)
// 	addi     r6, r31, 0x34c
// 	stfs     f1, 0x5f4(r30)
// 	stfs     f0, 0x5f8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703032@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 3
// 	stw      r0, 0x5fc(r30)
// 	li       r7, 0
// 	li       r0, 0xc8
// 	mr       r4, r30
// 	stw      r3, 0x614(r30)
// 	addi     r3, r30, 0x624
// 	addi     r5, r5, 0x69703032@l
// 	addi     r6, r31, 0x35c
// 	stw      r7, 0x61c(r30)
// 	stw      r0, 0x620(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703033@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 3
// 	stw      r0, 0x624(r30)
// 	li       r7, 0
// 	li       r0, 0x64
// 	mr       r4, r30
// 	stw      r3, 0x63c(r30)
// 	addi     r3, r30, 0x64c
// 	addi     r5, r5, 0x69703033@l
// 	addi     r6, r31, 0x36c
// 	stw      r7, 0x644(r30)
// 	stw      r0, 0x648(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703034@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 8
// 	stw      r0, 0x64c(r30)
// 	li       r7, 0
// 	li       r0, 0xc8
// 	mr       r4, r30
// 	stw      r3, 0x664(r30)
// 	addi     r3, r30, 0x674
// 	addi     r5, r5, 0x69703034@l
// 	addi     r6, r31, 0x37c
// 	stw      r7, 0x66c(r30)
// 	stw      r0, 0x670(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703035@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 5
// 	stw      r0, 0x674(r30)
// 	li       r7, 0
// 	li       r0, 0x64
// 	mr       r4, r30
// 	stw      r3, 0x68c(r30)
// 	addi     r3, r30, 0x69c
// 	addi     r5, r5, 0x69703035@l
// 	addi     r6, r31, 0x38c
// 	stw      r7, 0x694(r30)
// 	stw      r0, 0x698(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703036@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 0xf
// 	stw      r0, 0x69c(r30)
// 	li       r7, 0
// 	li       r0, 0xc8
// 	mr       r4, r30
// 	stw      r3, 0x6b4(r30)
// 	addi     r3, r30, 0x6c4
// 	addi     r5, r5, 0x69703036@l
// 	addi     r6, r31, 0x39c
// 	stw      r7, 0x6bc(r30)
// 	stw      r0, 0x6c0(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	lis      r5, 0x69703037@ha
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r3, 0xa
// 	stw      r0, 0x6c4(r30)
// 	li       r7, 0
// 	li       r0, 0x64
// 	mr       r4, r30
// 	stw      r3, 0x6dc(r30)
// 	addi     r3, r30, 0x6ec
// 	addi     r5, r5, 0x69703037@l
// 	addi     r6, r31, 0x3ac
// 	stw      r7, 0x6e4(r30)
// 	stw      r0, 0x6e8(r30)
// 	bl       __ct__8BaseParmFP10ParametersUlPc
// 	lis      r3, "__vt__7Parm<i>"@ha
// 	li       r5, 0x1e
// 	addi     r0, r3, "__vt__7Parm<i>"@l
// 	li       r4, 0
// 	stw      r0, 0x6ec(r30)
// 	li       r0, 0xc8
// 	mr       r3, r30
// 	stw      r5, 0x704(r30)
// 	stw      r4, 0x70c(r30)
// 	stw      r0, 0x710(r30)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

} // namespace Pelplant

/*
 * --INFO--
 * Address:	8010A450
 * Size:	000010
 */
// BitFlag<unsigned short>::BitFlag()
// {
// 	/*
// 	li       r0, 0
// 	stb      r0, 0(r3)
// 	stb      r0, 1(r3)
// 	blr
// 	*/
// }

namespace Game {

/*
 * birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
 * --INFO--
 * Address:	8010A460
 * Size:	000020
 */
EnemyBase* Pelplant::Mgr::birth(Game::EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/*
 * --INFO--
 * Address:	8010A480
 * Size:	0000D0
 */
void Pelplant::Obj::onInit(Game::CreatureInitArg* arg)
{
	EnemyBase::onInit(arg);
	_2C0 = 0.0f;
	setEmotionNone();
	if (m_farmPow == 0) {
		_2C8 |= 1;
	} else {
		_2C8 &= ~1;
	}
	int stateID = getStateID();
	if (stateID == -1) {
		stateID = 0;
	}
	m_fsm->start(this, stateID, nullptr);
	resetEvent(0, EB_9);
	resetEvent(0, EB_LeaveCarcass);
	resetEvent(0, EB_13);
	setEvent(0, EB_BitterImmune);
	hardConstraintOn();
}

/*
 * --INFO--
 * Address:	8010A550
 * Size:	000048
 */
void Pelplant::Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
{
	_2C4->getTranslation(param.m_position);
	param.m_position.y += 60.0f;
	param.m_healthPercentage = m_health / m_maxHealth;
	param._10                = 10.0f;
}

/*
 * __dt__Q34Game8Pelplant3MgrFv
 * --INFO--
 * Address:	8010A598
 * Size:	0000B0
 */
Pelplant::Mgr::~Mgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8010A62C
	lis      r3, __vt__Q34Game8Pelplant3Mgr@ha
	addi     r3, r3, __vt__Q34Game8Pelplant3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8010A61C
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8010A61C
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_8010A61C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_8010A61C:
	extsh.   r0, r31
	ble      lbl_8010A62C
	mr       r3, r30
	bl       __dl__FPv

lbl_8010A62C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010A648
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Pelplant::Mgr::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

/*
 * --INFO--
 * Address:	8010A650
 * Size:	000060
 */
void Pelplant::Mgr::createObj(int count) { m_objects = new Obj[count]; }

/*
 * __dt__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	8010A6B0
 * Size:	0000BC
 */
Pelplant::Obj::~Obj()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	stw      r30, 8(r1)
	mr       r30, r4
	beq      lbl_8010A750
	lis      r3, __vt__Q34Game8Pelplant3Obj@ha
	addi     r0, r31, 0x2d8
	addi     r4, r3, __vt__Q34Game8Pelplant3Obj@l
	stw      r4, 0(r31)
	addi     r3, r4, 0x1b0
	addi     r4, r4, 0x2fc
	stw      r3, 0x178(r31)
	lwz      r3, 0x17c(r31)
	stw      r4, 0(r3)
	lwz      r3, 0x17c(r31)
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	beq      lbl_8010A740
	lis      r3, __vt__Q24Game9EnemyBase@ha
	addi     r0, r31, 0x2bc
	addi     r4, r3, __vt__Q24Game9EnemyBase@l
	addi     r3, r31, 0x290
	stw      r4, 0(r31)
	addi     r5, r4, 0x1b0
	addi     r6, r4, 0x2f8
	li       r4, -1
	stw      r5, 0x178(r31)
	lwz      r5, 0x17c(r31)
	stw      r6, 0(r5)
	lwz      r5, 0x17c(r31)
	subf     r0, r5, r0
	stw      r0, 0xc(r5)
	bl       __dt__5CNodeFv

lbl_8010A740:
	extsh.   r0, r30
	ble      lbl_8010A750
	mr       r3, r31
	bl       __dl__FPv

lbl_8010A750:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * getEnemy__Q34Game8Pelplant3MgrFi
 * --INFO--
 * Address:	8010A76C
 * Size:	000010
 */
EnemyBase* Pelplant::Mgr::getEnemy(int index) { return &m_objects[index]; }

/*
 * --INFO--
 * Address:	8010A77C
 * Size:	000004
 */
void Pelplant::Mgr::initStoneSetting() { }

/*
 * get__Q24Game12EnemyMgrBaseFPv
 * --INFO--
 * Address:	8010A780
 * Size:	00002C
 */
// void EnemyMgrBase::get(void*)
// {
// }

/*
 * getJ3DModelData__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7AC
 * Size:	000008
 */
// J3DModelData* EnemyMgrBase::getJ3DModelData() const
// {
// }

/*
 * getGenerator__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7B4
 * Size:	000008
 */
// EnemyGeneratorBase* EnemyMgrBase::getGenerator() const
// {
// }

/*
 * getMaxObjects__Q24Game12EnemyMgrBaseCFv
 * --INFO--
 * Address:	8010A7BC
 * Size:	000008
 */
// int EnemyMgrBase::getMaxObjects() const
// {
// }

} // namespace Game

/*
 * doSimpleDraw__16GenericObjectMgrFP8Viewport
 * --INFO--
 * Address:	8010A7C4
 * Size:	000004
 */
// void GenericObjectMgr::doSimpleDraw(Viewport*) { }

/*
 * loadResources__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7C8
 * Size:	000004
 */
// void GenericObjectMgr::loadResources() { }

/*
 * resetMgr__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7CC
 * Size:	000004
 */
// void GenericObjectMgr::resetMgr() { }

/*
 * pausable__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7D0
 * Size:	000008
 */
// bool GenericObjectMgr::pausable() { return true; }

/*
 * frozenable__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7D8
 * Size:	000008
 */
// bool GenericObjectMgr::frozenable() { return true; }

/*
 * getMatrixLoadType__16GenericObjectMgrFv
 * --INFO--
 * Address:	8010A7E0
 * Size:	000008
 */
// u32 GenericObjectMgr::getMatrixLoadType() { return 0x0; }

namespace Game {

/**
 * getEnd__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	8010A7E8
 * Size:	000008
 */
// void* EnemyMgrBase::getEnd()
// {
// }

/*
 * getStart__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	8010A7F0
 * Size:	000030
 */
// void* EnemyMgrBase::getStart()
// {
// }

/*
 * getObject__Q24Game12EnemyMgrBaseFPv
 * --INFO--
 * Address:	8010A820
 * Size:	00002C
 */
// void* EnemyMgrBase::getObject(void* index)
// {
// }

/*
 * read__Q24Game14EnemyParmsBaseFR6Stream
 * --INFO--
 * Address:	8010A84C
 * Size:	000044
 */
// void EnemyParmsBase::read(Stream&)
// {
// }

/*
 * read__Q24Game13CreatureParmsFR6Stream
 * --INFO--
 * Address:	8010A890
 * Size:	000020
 */
// void CreatureParms::read(Stream&)
// {
// }

/*
 * read__Q34Game8Pelplant5ParmsFR6Stream
 * --INFO--
 * Address:	8010A8B0
 * Size:	000050
 */
// void Pelplant::Parms::read(Stream& input)
// {
// }

} // namespace Game

/*
 * __dt__16GenericContainerFv
 * --INFO--
 * Address:	8010A900
 * Size:	000060
 */
// GenericContainer::~GenericContainer()
// {
// }

namespace Game {

/*
 * __dt__Q24Game13IEnemyMgrBaseFv
 * --INFO--
 * Address:	8010A960
 * Size:	000080
 */
// IEnemyMgrBase::~IEnemyMgrBase()
// {
// }

/*
 * __dt__Q34Game8Pelplant14ProperAnimatorFv
 * --INFO--
 * Address:	8010A9E0
 * Size:	00006C
 */
// Pelplant::ProperAnimator::~ProperAnimator()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	or.      r31, r3, r3
// 	beq      lbl_8010AA34
// 	lis      r3, __vt__Q34Game8Pelplant14ProperAnimator@ha
// 	addi     r0, r3, __vt__Q34Game8Pelplant14ProperAnimator@l
// 	stw      r0, 0(r31)
// 	beq      lbl_8010AA24
// 	lis      r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
// 	addi     r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
// 	stw      r0, 0(r31)
// 	beq      lbl_8010AA24
// 	lis      r3, __vt__Q24Game17EnemyAnimatorBase@ha
// 	addi     r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
// 	stw      r0, 0(r31)

// lbl_8010AA24:
// 	extsh.   r0, r4
// 	ble      lbl_8010AA34
// 	mr       r3, r31
// 	bl       __dl__FPv

// lbl_8010AA34:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r31
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * animate__Q24Game22EnemyBlendAnimatorBaseFif
 * --INFO--
 * Address:	8010AA4C
 * Size:	000020
 */
// void EnemyBlendAnimatorBase::animate(int, float)
// {
// }

/*
 * getTypeID__Q24Game22EnemyBlendAnimatorBaseFv
 * --INFO--
 * Address:	8010AA6C
 * Size:	00000C
 */
// void EnemyBlendAnimatorBase::getTypeID()
// {
// }

/*
 * getEnemyTypeID__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	8010AA78
 * Size:	000008
 */
EnemyTypeID::EEnemyTypeID Pelplant::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

} // namespace Game

} // namespace Game

/*
 * size__7Parm<i>Fv
 * --INFO--
 * Address:	8010AA80
 * Size:	000008
 */
// u32 Parm<int>::size() { return 0x4; }

/*
 * size__7Parm<f>Fv
 * --INFO--
 * Address:	8010AA88
 * Size:	000008
 */
// u32 Parm<float>::size() { return 0x4; }

// namespace Game {

// /*
//  * --INFO--
//  * Address:	8010AA90
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewOnPelletKilled()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewOnPelletKilled__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAA4
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewStartCarryMotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewStartCarryMotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAB8
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewStartPreCarryMotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewStartPreCarryMotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AACC
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @view_finish_carrymotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        view_finish_carrymotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAE0
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @view_start_carrymotion()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        view_start_carrymotion__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AAF4
//  * Size:	000014
//  */
// void EnemyBase::@728 @12 @viewGetShape()
// {
// 	/*
// 	li       r11, 0xc
// 	lwzx     r11, r3, r11
// 	add      r3, r3, r11
// 	addi     r3, r3, -728
// 	b        viewGetShape__Q24Game9EnemyBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB08
//  * Size:	000008
//  */
// IEnemyMgrBase::@4 @~IEnemyMgrBase()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        __dt__Q24Game13IEnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB10
//  * Size:	000008
//  */
// Pelplant::Mgr::@4 @~Mgr()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        __dt__Q34Game8Pelplant3MgrFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB18
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getEnd()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getEnd__Q24Game12EnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB20
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getStart()
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getStart__Q24Game12EnemyMgrBaseFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB28
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getNext(void*)
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getNext__Q24Game12EnemyMgrBaseFPv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	8010AB30
//  * Size:	000008
//  */
// void EnemyMgrBase::@4 @getObject(void*)
// {
// 	/*
// 	addi     r3, r3, -4
// 	b        getObject__Q24Game12EnemyMgrBaseFPv
// 	*/
// }
// } // namespace Game
