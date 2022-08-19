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
#include "sqrt.h"

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
namespace Game {
namespace Farm {
FarmMgr* farmMgr;
}
} // namespace Game

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
// WEAK - in header
// void Pelplant::Obj::setFSM(Game::Pelplant::FSM* fsm)
// {
// 	m_fsm = fsm;
// 	m_fsm->init(this);
// 	m_currentLifecycleState = nullptr;
// }

/*
 * __dt__Q24Game22EnemyBlendAnimatorBaseFv
 * --INFO--
 * Address:	80108868
 * Size:	00005C
 */
// WEAK - in header
// EnemyBlendAnimatorBase::~EnemyBlendAnimatorBase() { }

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

	if (_0C8 != nullptr) {
		Plane* plane                        = &_0C8->m_trianglePlane;
		param.m_boundingSphere.m_position.x = plane->a;
		param.m_boundingSphere.m_position.y = plane->b;
		param.m_boundingSphere.m_position.z = plane->c;
	} else {
		param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
	}

	param.m_boundingSphere.m_radius = 50.0f;

	Vector3f vec((*_2C4)(0, 0), (*_2C4)(0, 1), (*_2C4)(0, 2));
	Vector3f newVec = vec;
	float sum       = newVec.x;
	newVec.y *= newVec.y;
	newVec.z *= newVec.z;
	sum *= newVec.x;
	sum += newVec.y;
	sum += newVec.z;
	_sqrtf(sum, &sum);

	param._1C = 8.0f * sum;
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
bool Obj::damageCallBack(Game::Creature* source, float damage, CollPart* part)
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
// WEAK - in header
// bool Obj::isLivingThing() { return (_2C8 >> 1 & 1); }

/*
 * --INFO--
 * Address:	80109288
 * Size:	000078
 */
bool Obj::farmCallBack(Game::Creature* p1, float p2)
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
void Obj::onStickStart(Game::Creature* other)
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
unknown Obj::headJointCallBack(J3DJoint* joint, int p2)
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
unknown Obj::neckJointCallBack(J3DJoint* joint, int p2)
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
Mgr::Mgr(int p1, unsigned char p2)
    : EnemyMgrBase(p1, p2)
{
	m_name = "ÉyÉåÉbÉgëêÉ}ÉlÅ[ÉWÉÉ"; // pellet plant manager
}

/*
 * __dt__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	801095A4
 * Size:	000098
 */
// WEAK - in header
// EnemyMgrBase::~EnemyMgrBase() { }

/*
 * --INFO--
 * Address:	8010963C
 * Size:	000048
 */
void Mgr::doAlloc() { init(new Parms); }

/*
 * __ct__Q34Game8Pelplant5ParmsFv
 * --INFO--
 * Address:	80109684
 * Size:	000118
 */
// WEAK - in header
// Pelplant::Parms::Parms()
//     : EnemyParmsBase()
//     , m_pelplantParms()
// { }

/*
 * __ct__Q24Game14EnemyParmsBaseFv
 * --INFO--
 * Address:	8010979C
 * Size:	0001D4
 */
// WEAK - in header
// EnemyParmsBase::EnemyParmsBase()
// {
// 	m_flags[0].clear();
//  m_flags[1].clear();
// }

/*
 * __ct__Q34Game14EnemyParmsBase5ParmsFv
 * --INFO--
 * Address:	80109970
 * Size:	000AE0
 */
// WEAK - in header
// EnemyParmsBase::Parms::Parms()
// : Parameters(nullptr, "EnemyParmsBase")
// , m_health(this, 'fp00', "ÉâÉCÉt", 100.0f, 0.0f, 99999.0f)    // life
// , m_lifeMeterHeight(this, 'fp27', "ÉâÉCÉtÇÃçÇÇ≥", 50.0f, 0.0f, 1000.0f) // height of life
// , m_regenerationRate(this, 'fp31', "ÉâÉCÉtâÒïúó¶", 0.01f, 0.0f, 1.0f) // life recovery rate
// , m_fp30(this, 'fp30', "åxâ˙ÉâÉCÉt", 30.0f, 0.0f, 99999.0f) // 'vigilant life'
// , m_fp01(this, 'fp01', "É}ÉbÉvÇ∆ÇÃìñÇË", 40.0f, 0.0f, 100.0f) // 'match with the map'
// , m_cellRadius(this, 'fp33', "É}ÉbÉvÇ∆ÇÃÇ†ÇΩÇËÉ|ÉäÉSÉìÇÃëIíË", 40.0f, 0.0f, 500.0f) // 'selection of map-related polygons'
// , m_pikminDamageRadius(this, 'fp34', "ÉsÉNÉ~ÉìÇ∆ÇÃÇ†ÇΩÇË", 40.0f, 0.0f, 500.0f) // 'about pikmin'
// , m_offCameraRadius(this, 'fp32', "LODîºåa", 40.0f, 0.0f, 500.0f) // LOD radius
// , m_horizontalDamageScale(this, 'fp02', "É_ÉÅÅ[ÉWÉXÉPÅ[ÉãXZ", 0.2f, 0.0f, 1.0f) // damage scale XZ
// , m_verticalDamageScale(this, 'fp03', "É_ÉÅÅ[ÉWÉXÉPÅ[ÉãY", 0.25f, 0.0f, 1.0f) // damage scale Y
// , m_damageScaleDuration(this, 'fp04', "É_ÉÅÅ[ÉWÉtÉåÅ[ÉÄ", 0.35f, 0.0f, 1.0f) // 'damage frame'
// , m_fp05(this, 'fp05', "éøó ", 1.0f, 0.0f, 100.0f) // mass
// , m_moveSpeed(this, 'fp06', "ë¨ìx", 80.0f, 0.0f, 1000.0f) // speed
// , m_rotationalAccel(this, 'fp08', "âÒì]ë¨ìxó¶", 0.1f, 0.0f, 1.0f) // rotation speed rate
// , m_rotationalSpeed(this, 'fp28', "âÒì]ç≈ëÂë¨ìx", 10.0f, 0.0f, 360.0f) // maximum rotation speed
// , m_territoryRadius(this, 'fp09', "ÉeÉäÉgÉäÅ[", 200.0f, 1.0f, 1000.0f) // territory
// , m_homeRadius(this, 'fp10', "ÉzÅ[ÉÄîÕàÕ", 15.0f, 1.0f, 1000.0f) // home range
// , m_privateRadius(this, 'fp11', "ÉvÉâÉCÉxÅ[Égãóó£", 70.0f, 0.0f, 1000.0f) // private distance
// , m_sightRadius(this, 'fp12', "éãäEãóó£", 200.0f, 0.0f, 1000.0f) // sight distance
// , m_fp25(this, 'fp25', "éãäEçÇ", 50.0f, 0.0f, 1000.0f) // visibility height
// , m_fov(this, 'fp13', "éãäEäpìx", 90.0f, 0.0f, 180.0f) // view angle
// , m_fp14(this, 'fp14', "íTçıãóó£", 200.0f, 0.0f, 1000.0f) // search distance
// , m_fp26(this, 'fp26', "íTçıçÇ", 50.0f, 0.0f, 1000.0f) // search height
// , m_fp15(this, 'fp15', "íTçıäpìx", 120.0f, 0.0f, 180.0f) // search angle
// , m_shakeKnockback(this, 'fp17', "êUÇËï•Ç¢óÕ", 300.0f, 0.0f, 1000.0f) // shake off power
// , m_shakeDamage(this, 'fp18', "êUÇËï•Ç¢É_ÉÅÅ[ÉW", 0.0f, 0.0f, 1000.0f) // shake off damage
// , m_shakeRange(this, 'fp19', "êUÇËï•Ç¢îÕàÕ", 120.0f, 0.0f, 1000.0f) // shake off range
// , m_shakeRateMaybe(this, 'fp16', "êUÇËï•Ç¢ó¶", 1.0f, 0.0f, 1.0f) // shake off rate
// , m_fp20(this, 'fp20', "çUåÇâ¬î\îÕàÕ", 70.0f, 0.0f, 1000.0f) // attack range
// , m_fp21(this, 'fp21', "çUåÇâ¬î\äpìx", 15.0f, 0.0f, 180.0f) // 'possible attack angle'
// , m_fp22(this, 'fp22', "çUåÇÉqÉbÉgîÕàÕ", 70.0f, 0.0f, 1000.0f) // attack hit range
// , m_fp23(this, 'fp23', "çUåÇÉqÉbÉgäpìx", 15.0f, 0.0f, 180.0f) // attack hit angle
// , m_attackDamage(this, 'fp24', "çUåÇóÕ", 10.0f, 0.0f, 1000.0f) // attack power
// , m_fp29(this, 'fp29', "åxâ˙éûä‘", 15.0f, 0.0f, 99.0f) // alert time
// , m_stoneDuration(this, 'fp35', "êŒâªéûä‘", 1.0f, 0.0f, 60.0f) // stone time
// , m_purplePikminHipDropDamage(this, 'fp36', "ÉqÉbÉvÉhÉçÉbÉvÉ_ÉÅÅ[ÉW", 10.0f, 0.0f, 1000.0f) // hip drop damage
// , m_purplePikminStunChance(this, 'fp37', "ínêkãCê‚ämóß", 0.05f, 0.0f, 1.0f) // earthquake faint probability
// , m_purplePikminStunTime(this, 'fp38', "ínêkãCê‚éûä‘", 10.0f, 0.0f, 60.0f) // earthquake faint time
// , m_ip01(this, 'ip01', "êUÇËï•Ç¢ë≈åÇÇ`", 3, 0, 200) // shake off blow A
// , m_ip02(this, 'ip02', "êUÇËï•Ç¢í£ïtÇP", 3, 0, 100) // shake off sticking 1
// , m_ip03(this, 'ip03', "êUÇËï•Ç¢ë≈åÇÇa", 8, 0, 200) // shake off blow B
// , m_ip04(this, 'ip04', "êUÇËï•Ç¢í£ïtÇQ", 5, 0, 100) // shake off sticking 2
// , m_ip05(this, 'ip05', "êUÇËï•Ç¢ë≈åÇÇb", 15, 0, 200) // shake off blow C
// , m_ip06(this, 'ip06', "êUÇËï•Ç¢í£ïtÇR", 10, 0, 100) // shake off sticking 3
// , m_ip07(this, 'ip07', "êUÇËï•Ç¢ë≈åÇÇc", 30, 0, 200) // shake off blow D
// { }

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

/*
 * birth__Q34Game8Pelplant3MgrFRQ24Game13EnemyBirthArg
 * --INFO--
 * Address:	8010A460
 * Size:	000020
 */
EnemyBase* Mgr::birth(Game::EnemyBirthArg& arg) { return EnemyMgrBase::birth(arg); }

/*
 * --INFO--
 * Address:	8010A480
 * Size:	0000D0
 */
void Obj::onInit(Game::CreatureInitArg* arg)
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
void Obj::doGetLifeGaugeParam(Game::LifeGaugeParam& param)
{
	_2C4->getTranslation(param.m_position);
	param.m_position.y += 60.0f;
	param.m_healthPercentage = m_health / m_maxHealth;
	param._10                = 10.0f;
}

} // namespace Pelplant
} // namespace Game

/*
 * __dt__Q34Game8Pelplant3MgrFv
 * --INFO--
 * Address:	8010A598
 * Size:	0000B0
 */
// WEAK - in header
// Pelplant::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	8010A648
 * Size:	000008
 */
// WEAK - in header
// EnemyTypeID::EEnemyTypeID Pelplant::Mgr::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

/*
 * --INFO--
 * Address:	8010A650
 * Size:	000060
 */
// WEAK - in header
// void Pelplant::Mgr::createObj(int count) { m_objects = new Obj[count]; }

/*
 * __dt__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	8010A6B0
 * Size:	0000BC
 */
// WEAK - in header
// Pelplant::Obj::~Obj() { }

/*
 * getEnemy__Q34Game8Pelplant3MgrFi
 * --INFO--
 * Address:	8010A76C
 * Size:	000010
 */
// WEAK - in header
// EnemyBase* Pelplant::Mgr::getEnemy(int index) { return &m_objects[index]; }

/*
 * --INFO--
 * Address:	8010A77C
 * Size:	000004
 */
// WEAK - in header
// void Pelplant::Mgr::initStoneSetting() { }

/*
 * get__Q24Game12EnemyMgrBaseFPv
 * --INFO--
 * Address:	8010A780
 * Size:	00002C
 */
// WEAK - in header
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

/*
 * __dt__16GenericContainerFv
 * --INFO--
 * Address:	8010A900
 * Size:	000060
 */
// GenericContainer::~GenericContainer()
// {
// }

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
// WEAK - in header
// EnemyTypeID::EEnemyTypeID Pelplant::Obj::getEnemyTypeID() { return EnemyTypeID::EnemyID_Pelplant; }

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
