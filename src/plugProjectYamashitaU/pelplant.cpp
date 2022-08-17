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

namespace Game {

/*
 * --INFO--
 * Address:	80108300
 * Size:	0000B0
 */
float Pelplant::BlendAccelerationFunc::getValue(float)
{
	/*
	fneg     f2, f1
	lfs      f3, lbl_8051785C@sda21(r2)
	lfs      f4, lbl_80517858@sda21(r2)
	lfs      f0, lbl_80517860@sda21(r2)
	fmuls    f2, f3, f2
	stwu     r1, -0x20(r1)
	fmuls    f2, f4, f2
	fcmpo    cr0, f2, f0
	bge      lbl_80108350
	lfs      f0, lbl_80517850@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f4, f0
	b        lbl_80108374

lbl_80108350:
	lfs      f0, lbl_80517854@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f4, r3, r0

lbl_80108374:
	lfs      f2, lbl_80517868@sda21(r2)
	lfs      f3, lbl_80517864@sda21(r2)
	fsubs    f0, f2, f1
	fmuls    f0, f3, f0
	fmadds   f1, f0, f4, f1
	fcmpo    cr0, f1, f2
	ble      lbl_80108398
	fmr      f1, f2
	b        lbl_801083A8

lbl_80108398:
	lfs      f0, lbl_80517860@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801083A8
	fmr      f1, f0

lbl_801083A8:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801083B0
 * Size:	0000B4
 */
void Pelplant::Obj::birth(Vector3f& position, float faceDir)
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
void Pelplant::Obj::setInitialSetting(EnemyInitialParamBase* param)
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
 * @todo Depends on SysShape::BlendAnimator::BlendAnimator() in SysShape.cpp for proper matching output?
 */
Pelplant::Obj::Obj()
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
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	beq      lbl_80108724
	addi     r0, r31, 0x2d8
	lis      r3, __vt__Q24Game10PelletView@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, __vt__Q24Game10PelletView@l
	li       r0, 0
	stw      r3, 0x2d8(r31)
	stw      r0, 0x2dc(r31)
	stw      r0, 0x2e0(r31)

lbl_80108724:
	mr       r3, r31
	li       r4, 0
	bl       __ct__Q24Game9EnemyBaseFv
	lis      r3, __vt__Q34Game8Pelplant3Obj@ha
	addi     r6, r31, 0x2d8
	addi     r3, r3, __vt__Q34Game8Pelplant3Obj@l
	li       r5, 0
	stw      r3, 0(r31)
	addi     r0, r3, 0x1b0
	addi     r8, r3, 0x2fc
	lfs      f0, lbl_80517860@sda21(r2)
	stw      r0, 0x178(r31)
	li       r4, 3
	li       r0, 1
	li       r3, 0x60
	lwz      r7, 0x17c(r31)
	stw      r8, 0(r7)
	lwz      r7, 0x17c(r31)
	subf     r6, r7, r6
	stw      r6, 0xc(r7)
	stw      r5, 0x2bc(r31)
	stw      r5, 0x2c4(r31)
	stb      r5, 0x2c8(r31)
	stw      r5, 0x2cc(r31)
	stfs     f0, 0x2d0(r31)
	stb      r4, 0x2d4(r31)
	stb      r0, 0x2d5(r31)
	stb      r5, 0x2d6(r31)
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801087B0
	bl       __ct__Q24Game22EnemyBlendAnimatorBaseFv
	lis      r3, __vt__Q34Game8Pelplant14ProperAnimator@ha
	addi     r0, r3, __vt__Q34Game8Pelplant14ProperAnimator@l
	stw      r0, 0(r30)

lbl_801087B0:
	stw      r30, 0x184(r31)
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r4, r3, r3
	beq      lbl_801087E4
	lis      r5, __vt__Q24Game17EnemyStateMachine@ha
	lis      r3, __vt__Q34Game8Pelplant3FSM@ha
	addi     r0, r5, __vt__Q24Game17EnemyStateMachine@l
	li       r5, -1
	stw      r0, 0(r4)
	addi     r0, r3, __vt__Q34Game8Pelplant3FSM@l
	stw      r5, 0x18(r4)
	stw      r0, 0(r4)

lbl_801087E4:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x2f8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x2c8(r31)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010881C
 * Size:	00004C
 */
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
EnemyBlendAnimatorBase::~EnemyBlendAnimatorBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_801088AC
	lis      r3, __vt__Q24Game22EnemyBlendAnimatorBase@ha
	addi     r0, r3, __vt__Q24Game22EnemyBlendAnimatorBase@l
	stw      r0, 0(r31)
	beq      lbl_8010889C
	lis      r3, __vt__Q24Game17EnemyAnimatorBase@ha
	addi     r0, r3, __vt__Q24Game17EnemyAnimatorBase@l
	stw      r0, 0(r31)

lbl_8010889C:
	extsh.   r0, r4
	ble      lbl_801088AC
	mr       r3, r31
	bl       __dl__FPv

lbl_801088AC:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

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
void Pelplant::Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80108984
 * Size:	00018C
 */
void Pelplant::Obj::doDebugDraw(Graphics& gfx)
{
	EnemyBase::doDebugDraw(gfx);
	if (((Parms*)m_parms)->m_flags[0].typeView & 1) {
		gfx.initPerspPrintf(gfx._25C);
	}
	PerspPrintfInfo info;
	// info.m_font = JFWSystem::systemFont;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	bl       doDebugDraw__Q24Game9EnemyBaseFR8Graphics
	lwz      r3, 0xc0(r30)
	lhz      r0, 0xdc(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80108AF8
	lwz      r4, 0x25c(r31)
	mr       r3, r31
	bl       initPerspPrintf__8GraphicsFP8Viewport
	lwz      r0, systemFont__9JFWSystem@sda21(r13)
	li       r12, 0
	li       r9, 0xff
	li       r11, 0x66
	lfs      f0, lbl_80517868@sda21(r2)
	li       r10, 0x99
	stw      r0, 0x14(r1)
	lis      r3, lbl_8047A6C4@ha
	lfs      f2, lbl_80517874@sda21(r2)
	addi     r6, r3, lbl_8047A6C4@l
	stw      r12, 0x18(r1)
	li       r7, 0xc8
	li       r0, 0x64
	mr       r3, r31
	stw      r12, 0x1c(r1)
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	addi     r8, r2, lbl_8051787C@sda21
	stw      r12, 0x20(r1)
	stfs     f0, 0x24(r1)
	stb      r11, 0x28(r1)
	stb      r10, 0x29(r1)
	stb      r9, 0x2a(r1)
	stb      r9, 0x2b(r1)
	stb      r12, 0x2c(r1)
	stb      r11, 0x2d(r1)
	stb      r9, 0x2e(r1)
	stb      r9, 0x2f(r1)
	lfs      f1, 0x190(r30)
	lfs      f3, 0x194(r30)
	lfs      f0, 0x18c(r30)
	fadds    f1, f2, f1
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f3, 0x10(r1)
	stb      r7, 0x28(r1)
	stb      r7, 0x29(r1)
	stb      r9, 0x2a(r1)
	stb      r7, 0x2b(r1)
	stb      r0, 0x2c(r1)
	stb      r0, 0x2d(r1)
	stb      r9, 0x2e(r1)
	stb      r7, 0x2f(r1)
	lbz      r0, 0x2c8(r30)
	lbz      r7, 0x2d6(r30)
	clrlwi.  r0, r0, 0x1f
	extsb    r7, r7
	beq      lbl_80108A84
	addi     r8, r2, lbl_80517878@sda21

lbl_80108A84:
	crclr    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"
	lfs      f1, 0xc(r1)
	li       r3, 0xc8
	lfs      f0, lbl_80517880@sda21(r2)
	li       r5, 0xff
	li       r0, 0x64
	stb      r5, 0x28(r1)
	fadds    f0, f1, f0
	mr       r4, r30
	stb      r3, 0x29(r1)
	stfs     f0, 0xc(r1)
	stb      r5, 0x2a(r1)
	stb      r3, 0x2b(r1)
	stb      r3, 0x2c(r1)
	stb      r0, 0x2d(r1)
	stb      r5, 0x2e(r1)
	stb      r3, 0x2f(r1)
	lwz      r3, 0x2bc(r30)
	bl       getCurrName__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
	lis      r4, lbl_8047A6D8@ha
	lfs      f1, 0x2c0(r30)
	mr       r7, r3
	mr       r3, r31
	addi     r6, r4, lbl_8047A6D8@l
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	crset    6
	bl       "perspPrintf__8GraphicsFR15PerspPrintfInfoR10Vector3<f>Pce"

lbl_80108AF8:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80108B10
 * Size:	0000C0
 */
void Pelplant::Obj::getShadowParam(Game::ShadowParam& param)
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
void Pelplant::Obj::doAnimationUpdateAnimator()
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
float Pelplant::Obj::getHeadScale()
{
	if (m_pellet) {
		switch (m_pelletSize) {
		case 1:
			return 1.0f;
		case 5:
			return 2.0f;
		case 10:
			return 3.5f;
		case 20:
			return 4.8f;
		}
	} else {
		return 1.0f;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void Pelplant::Obj::getNeckScale(Vector3f* scale)
{
	if (m_pellet) {
		switch (m_pelletSize) {
		case 1:
			scale->x = 1.0f;
			scale->y = 1.0f;
			scale->z = 1.0f;
			return;
		case 5:
			scale->x = 1.0f;
			scale->y = 1.0f;
			scale->z = 1.0f;
			return;
		case 10:
			scale->x = 0.85f;
			scale->y = 1.50f;
			scale->z = 0.85f;
			return;
		case 20:
			scale->x = 0.75f;
			scale->y = 2.00f;
			scale->z = 0.75f;
			return;
		}
	} else {
		scale->x = 1.0f;
		scale->y = 1.0f;
		scale->z = 1.0f;
	}
}

/*
 * doAnimation__Q34Game8Pelplant3ObjFv
 * --INFO--
 * Address:	80108CB8
 * Size:	000198
 */
void Pelplant::Obj::doAnimation()
{
	sys->m_timers->_start("zama", true);
	float headScale = getHeadScale();
	sCurrentObj     = this;
	doAnimation();
	sCurrentObj = nullptr;
	// TODO: what's inlined here, if anything?
	// float neckScale = getNeckScale();
	Matrixf mtx;
	Vector3f scale(1.0f / headScale);
	Vector3f rotation(0.0f, HALF_PI, -HALF_PI);
	Vector3f translation(12.0f, 0.0f, 0.0f);

	mtx.makeSRT(scale, rotation, translation);
	updateCapture(mtx);
	sys->m_timers->_stop("zama");

	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	lwz      r6, sys@sda21(r13)
	mr       r31, r3
	addi     r4, r2, lbl_805178A4@sda21
	li       r5, 1
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r0, 0x2cc(r31)
	cmplwi   r0, 0
	beq      lbl_80108D40
	lbz      r0, 0x2d5(r31)
	cmplwi   r0, 0x14
	bgt      lbl_80108D44
	lis      r3, lbl_804AAAB4@ha
	slwi     r0, r0, 2
	addi     r3, r3, lbl_804AAAB4@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80108D20

lbl_80108D20:
	lfs      f31, lbl_80517868@sda21(r2)
	b        lbl_80108D44
	.global  lbl_80108D28

lbl_80108D28:
	lfs      f31, lbl_80517884@sda21(r2)
	b        lbl_80108D44
	.global  lbl_80108D30

lbl_80108D30:
	lfs      f31, lbl_80517890@sda21(r2)
	b        lbl_80108D44
	.global  lbl_80108D38

lbl_80108D38:
	lfs      f31, lbl_80517894@sda21(r2)
	b        lbl_80108D44

lbl_80108D40:
	lfs      f31, lbl_80517868@sda21(r2)
	.global  lbl_80108D44

lbl_80108D44:
	stw      r31, sCurrentObj__Q34Game8Pelplant3Obj@sda21(r13)
	mr       r3, r31
	bl       doAnimation__Q24Game9EnemyBaseFv
	li       r0, 0
	stw      r0, sCurrentObj__Q34Game8Pelplant3Obj@sda21(r13)
	lwz      r0, 0x2cc(r31)
	cmplwi   r0, 0
	beq      lbl_80108E1C
	lbz      r6, 0x2d5(r31)
	cmplwi   r6, 0x14
	bgt      lbl_80108DA8
	lis      r3, lbl_804AAA60@ha
	slwi     r0, r6, 2
	addi     r3, r3, lbl_804AAA60@l
	lwzx     r0, r3, r0
	mtctr    r0
	bctr
	.global  lbl_80108D88

lbl_80108D88:
	lfs      f30, lbl_805178AC@sda21(r2)
	b        lbl_80108DC4
	.global  lbl_80108D90

lbl_80108D90:
	lfs      f30, lbl_805178AC@sda21(r2)
	b        lbl_80108DC4
	.global  lbl_80108D98

lbl_80108D98:
	lfs      f30, lbl_805178AC@sda21(r2)
	b        lbl_80108DC4
	.global  lbl_80108DA0

lbl_80108DA0:
	lfs      f30, lbl_805178AC@sda21(r2)
	b        lbl_80108DC4
	.global  lbl_80108DA8

lbl_80108DA8:
	lis      r3, lbl_8047A660@ha
	lis      r4, lbl_8047A6E4@ha
	addi     r5, r4, lbl_8047A6E4@l
	addi     r3, r3, lbl_8047A660@l
	li       r4, 0x297
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80108DC4:
	lfs      f0, lbl_80517868@sda21(r2)
	addi     r3, r1, 0x2c
	lfs      f2, lbl_80517860@sda21(r2)
	addi     r4, r1, 8
	fdivs    f3, f0, f31
	lfs      f1, lbl_805178B0@sda21(r2)
	lfs      f0, lbl_805178B4@sda21(r2)
	addi     r5, r1, 0x14
	stfs     f30, 0x20(r1)
	addi     r6, r1, 0x20
	stfs     f2, 0x24(r1)
	stfs     f2, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f3, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f3, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r3, 0x2cc(r31)
	addi     r4, r1, 0x2c
	bl       updateCapture__Q24Game8CreatureFR7Matrixf

lbl_80108E1C:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_805178A4@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	lwz      r0, 0x94(r1)
	lwz      r31, 0x6c(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80108E50
 * Size:	000004
 */
void Pelplant::Obj::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80108E54
 * Size:	0000F0
 */
void Pelplant::Obj::setPelletColor(unsigned short pikiType, bool p2)
{
	if (m_pellet != nullptr) {
		if (OnyonCount < pikiType || false) {
			// m_pellet->m_onyonType = EPikiColor::Red;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r31, 0x2cc(r3)
	cmplwi   r31, 0
	beq      lbl_80108F28
	clrlwi   r4, r30, 0x10
	cmpwi    r4, 3
	bge      lbl_80108F20
	cmpwi    r4, 0
	bge      lbl_80108E98
	b        lbl_80108F20

lbl_80108E98:
	clrlwi.  r0, r5, 0x18
	beq      lbl_80108EF4
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80108EE4
	clrlwi   r0, r30, 0x10
	lwz      r31, 0x2cc(r29)
	cmplwi   r0, 2
	ble      lbl_80108EDC
	lis      r3, lbl_8047A700@ha
	lis      r5, lbl_8047A6AC@ha
	addi     r3, r3, lbl_8047A700@l
	li       r4, 0x38d
	addi     r5, r5, lbl_8047A6AC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80108EDC:
	sth      r30, 0x43e(r31)
	b        lbl_80108F28

lbl_80108EE4:
	lwz      r3, 0x2cc(r29)
	li       r0, 1
	sth      r0, 0x43e(r3)
	b        lbl_80108F28

lbl_80108EF4:
	cmplwi   r4, 2
	ble      lbl_80108F18
	lis      r3, lbl_8047A700@ha
	lis      r5, lbl_8047A6AC@ha
	addi     r3, r3, lbl_8047A700@l
	li       r4, 0x38d
	addi     r5, r5, lbl_8047A6AC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80108F18:
	sth      r30, 0x43e(r31)
	b        lbl_80108F28

lbl_80108F20:
	li       r0, 1
	sth      r0, 0x43e(r31)

lbl_80108F28:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80108F44
 * Size:	000190
 */
void Pelplant::Obj::changePelletColor()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r4, 0x2cc(r3)
	cmplwi   r4, 0
	beq      lbl_801090B8
	lbz      r0, 0x2d4(r31)
	cmplwi   r0, 3
	bne      lbl_801090B8
	lwz      r3, 0xc0(r31)
	lfs      f1, 0x2d0(r31)
	lfs      f0, 0x86c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_8010909C
	cmplwi   r4, 0
	beq      lbl_80108F9C
	lhz      r3, 0x43e(r4)
	b        lbl_80108FA0

lbl_80108F9C:
	li       r3, 0

lbl_80108FA0:
	addi     r0, r3, 1
	clrlwi   r29, r0, 0x10
	mr       r30, r29
	b        lbl_80108FD4

lbl_80108FB0:
	addi     r29, r29, 1
	clrlwi   r0, r29, 0x10
	cmplwi   r0, 2
	ble      lbl_80108FC4
	li       r29, 0

lbl_80108FC4:
	clrlwi   r0, r29, 0x10
	cmplw    r0, r30
	bne      lbl_80108FD4
	li       r29, 1

lbl_80108FD4:
	lwz      r3, playData__4Game@sda21(r13)
	clrlwi   r4, r29, 0x10
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80108FB0
	clrlwi   r0, r29, 0x10
	cmplwi   r0, 2
	ble      lbl_80108FF8
	li       r29, 0

lbl_80108FF8:
	lwz      r3, 0x2cc(r31)
	cmplwi   r3, 0
	beq      lbl_80109078
	clrlwi   r4, r29, 0x10
	cmpwi    r4, 3
	bge      lbl_80109070
	cmpwi    r4, 0
	bge      lbl_8010901C
	b        lbl_80109070

lbl_8010901C:
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasMetPikmin__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80109060
	clrlwi   r0, r29, 0x10
	lwz      r30, 0x2cc(r31)
	cmplwi   r0, 2
	ble      lbl_80109058
	lis      r3, lbl_8047A700@ha
	lis      r5, lbl_8047A6AC@ha
	addi     r3, r3, lbl_8047A700@l
	li       r4, 0x38d
	addi     r5, r5, lbl_8047A6AC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80109058:
	sth      r29, 0x43e(r30)
	b        lbl_80109078

lbl_80109060:
	lwz      r3, 0x2cc(r31)
	li       r0, 1
	sth      r0, 0x43e(r3)
	b        lbl_80109078

lbl_80109070:
	li       r0, 1
	sth      r0, 0x43e(r3)

lbl_80109078:
	lbz      r0, 0x2c8(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80109090
	lfs      f0, lbl_80517860@sda21(r2)
	stfs     f0, 0x2d0(r31)
	b        lbl_801090B8

lbl_80109090:
	lfs      f0, lbl_80517860@sda21(r2)
	stfs     f0, 0x2d0(r31)
	b        lbl_801090B8

lbl_8010909C:
	lbz      r0, 0x2c8(r31)
	lwz      r3, sys@sda21(r13)
	clrlwi.  r0, r0, 0x1f
	lfs      f0, 0x54(r3)
	beq      lbl_801090B8
	fadds    f0, f1, f0
	stfs     f0, 0x2d0(r31)

lbl_801090B8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801090D4
 * Size:	000110
 */
void Pelplant::Obj::attachPellet()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r3
	lis      r3, lbl_8047A660@ha
	lwz      r0, 0x2cc(r28)
	addi     r31, r3, lbl_8047A660@l
	cmplwi   r0, 0
	bne      lbl_801091C4
	stw      r28, sCurrentObj__Q34Game8Pelplant3Obj@sda21(r13)
	addi     r3, r1, 8
	li       r5, 0
	lbz      r4, 0x2d5(r28)
	bl       __ct__Q24Game19PelletNumberInitArgFii
	lwz      r3, pelletMgr__4Game@sda21(r13)
	addi     r4, r1, 8
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r29, r3, r3
	beq      lbl_801091BC
	lwz      r3, 0x174(r28)
	addi     r4, r2, lbl_8051786C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	or.      r30, r3, r3
	bne      lbl_8010915C
	addi     r3, r31, 0
	addi     r5, r31, 0x4c
	li       r4, 0x309
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8010915C:
	mr       r3, r29
	mr       r4, r30
	bl       startCapture__Q24Game8CreatureFP7Matrixf
	stw      r29, 0x2cc(r28)
	lwz      r29, 0x2cc(r28)
	lbz      r30, 0x2d4(r28)
	cmplwi   r29, 0
	beq      lbl_801091BC
	cmpwi    r30, 3
	bge      lbl_801091B4
	cmpwi    r30, 0
	bge      lbl_80109190
	b        lbl_801091B4

lbl_80109190:
	cmplwi   r30, 2
	ble      lbl_801091AC
	addi     r3, r31, 0xa0
	addi     r5, r31, 0x4c
	li       r4, 0x38d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801091AC:
	sth      r30, 0x43e(r29)
	b        lbl_801091BC

lbl_801091B4:
	li       r0, 1
	sth      r0, 0x43e(r29)

lbl_801091BC:
	li       r0, 0
	stw      r0, sCurrentObj__Q34Game8Pelplant3Obj@sda21(r13)

lbl_801091C4:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
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
unknown Pelplant::Obj::neckJointCallBack(J3DJoint* joint, int p2)
{
	if (sCurrentObj != nullptr && p2 == 1) {
		Mtx& mtx = J3DMtxCalc::mMtxBuffer->m_worldMatrices[joint->getJntNo()];
		Vector3f scale;
		sCurrentObj->getNeckScale(&scale);
		mtx[0][0] *= scale.x;
		mtx[0][1] *= scale.x;
		mtx[0][2] *= scale.x;
		mtx[1][0] *= scale.y;
		mtx[1][1] *= scale.y;
		mtx[1][2] *= scale.y;
		mtx[2][0] *= scale.z;
		mtx[2][1] *= scale.z;
		mtx[2][2] *= scale.z;
		// for (int i = 0; i < 3; i++) {
		// 	for (int j = 0; j < 3; j++) {
		// 		mtx[i][j] *= scale.y;
		// 	}
		// }
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
	m_name = "ペレ�?ト草マネージャ";
}

/*
 * __dt__Q24Game12EnemyMgrBaseFv
 * --INFO--
 * Address:	801095A4
 * Size:	000098
 */
EnemyMgrBase::~EnemyMgrBase()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80109620
	lis      r3, __vt__Q24Game12EnemyMgrBase@ha
	addi     r3, r3, __vt__Q24Game12EnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80109610
	lis      r3, __vt__Q24Game13IEnemyMgrBase@ha
	addic.   r0, r30, 4
	addi     r3, r3, __vt__Q24Game13IEnemyMgrBase@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x38
	stw      r0, 4(r30)
	beq      lbl_80109610
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 4
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 4(r30)
	bl       __dt__5CNodeFv

lbl_80109610:
	extsh.   r0, r31
	ble      lbl_80109620
	mr       r3, r30
	bl       __dl__FPv

lbl_80109620:
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

} // namespace Game

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
