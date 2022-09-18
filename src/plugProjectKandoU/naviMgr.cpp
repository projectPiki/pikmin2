#include "Game/Navi.h"
#include "SysShape/Model.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047D088
    lbl_8047D088:
        .4byte 0x4E617669
        .4byte 0x3A3A5061
        .4byte 0x726D7300
        .4byte 0x8341834E
        .4byte 0x83568387
        .4byte 0x839394BC
        .4byte 0x8C610000
        .4byte 0x984191B1
        .4byte 0x94B282AB
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x94B282AB
        .4byte 0x8B9797A3
        .4byte 0x286F6E79
        .4byte 0x6F6E8A4F
        .4byte 0x29000000
        .4byte 0x8373834C
        .4byte 0x8CC482D1
        .4byte 0x8DC591E5
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x8373834C
        .4byte 0x8CC482D1
        .4byte 0x8DC58FAC
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x8373834C
        .4byte 0x8CC482D1
        .4byte 0x8DC591E5
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x8354815B
        .4byte 0x834E838B
        .4byte 0x8FC182A6
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x88DA93AE
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x919682E9
        .4byte 0x91AC82B3
        .4byte 0x81698D44
        .4byte 0x92B28E9E
        .4byte 0x816A0000
        .4byte 0x955C8EA6
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x53746963
        .4byte 0x6B203031
        .4byte 0x00000000
        .4byte 0x82B782D7
        .4byte 0x82E88A70
        .4byte 0x93780000
        .4byte 0x938A82B0
        .4byte 0x82BD82DF
        .4byte 0x8CC08A45
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x938A82B0
        .4byte 0x8B9797A3
        .4byte 0x284D6178
        .4byte 0x29000000
        .4byte 0x938A82B0
        .4byte 0x8B9797A3
        .4byte 0x284D696E
        .4byte 0x29000000
        .4byte 0x938A82B0
        .4byte 0x8D8282B3
        .4byte 0x284D6178
        .4byte 0x29000000
        .4byte 0x938A82B0
        .4byte 0x8D8282B3
        .4byte 0x286D696E
        .4byte 0x29000000
        .4byte 0x938A82B0
        .4byte 0x8D8282B3
        .4byte 0x2889A990
        .4byte 0x46290000
        .4byte 0x8D958140
        .4byte 0x938A82B0
        .4byte 0x8D8282B3
        .4byte 0x00000000
        .4byte 0x94928140
        .4byte 0x938A82B0
        .4byte 0x8D8282B3
        .4byte 0x00000000
        .4byte 0x9285926E
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x8373834C
        .4byte 0x82F082C2
        .4byte 0x82A982DE
        .4byte 0x974C8CF8
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x94B282AD
        .4byte 0x838B815B
        .4byte 0x837689F1
        .4byte 0x90940000
        .4byte 0x8373834C
        .4byte 0x82AA91D2
        .4byte 0x82C294CD
        .4byte 0x88CD0000
        .4byte 0x8373834C
        .4byte 0x82AA8374
        .4byte 0x8348815B
        .4byte 0x8381815B
        .4byte 0x83568387
        .4byte 0x839382F0
        .4byte 0x95CF82A6
        .4byte 0x82E994CD
        .4byte 0x88CD0000
        .4byte 0x939682BD
        .4byte 0x82E88354
        .4byte 0x83438359
        .4byte 0x00000000
        .4byte 0x926E96CA
        .4byte 0x939682BD
        .4byte 0x82E88354
        .4byte 0x83438359
        .4byte 0x00000000
        .4byte 0x8F6482B3
        .4byte 0x82CC8B74
        .4byte 0x90940000
        .4byte 0x83478343
        .4byte 0x837E8393
        .4byte 0x834F89F1
        .4byte 0x935D8358
        .4byte 0x8373815B
        .4byte 0x83680000
        .4byte 0x82C282D4
        .4byte 0x82EA918D
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x82D882C1
        .4byte 0x82BD82F1
        .4byte 0x82B18E9E
        .4byte 0x8AD40000
        .4byte 0x899F82B5
        .4byte 0x8A4A8E6E
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x899F82B5
        .4byte 0x8A4A8E6E
        .4byte 0x83588365
        .4byte 0x83428362
        .4byte 0x834E97CA
        .4byte 0x00000000
        .4byte 0x8EE882D4
        .4byte 0x82EA9668
        .4byte 0x8E7E8A70
        .4byte 0x93780000
        .4byte 0x8EE882D4
        .4byte 0x82EA9668
        .4byte 0x8E7E91E5
        .4byte 0x82AB82B3
        .4byte 0x00000000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x82DD82E9
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x8373834C
        .4byte 0x82AA82B5
        .4byte 0x82D182EA
        .4byte 0x82F090D8
        .4byte 0x82E782B7
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x836A8385
        .4byte 0x815B8367
        .4byte 0x8389838B
        .4byte 0x83588365
        .4byte 0x83428362
        .4byte 0x834E0000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x88DA93AE
        .4byte 0x83588365
        .4byte 0x83428362
        .4byte 0x834E0000
        .4byte 0x834E8389
        .4byte 0x83938376
        .4byte 0x83588365
        .4byte 0x83428362
        .4byte 0x834E0000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x88DA93AE
        .4byte 0x8DC58FAC
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x88DA93AE
        .4byte 0x8DC591E5
        .4byte 0x94BC8C61
        .4byte 0x00000000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x88DA93AE
        .4byte 0x83588373
        .4byte 0x815B8368
        .4byte 0x00000000
        .4byte 0x8D558C82
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x834A815B
        .4byte 0x835C838B
        .4byte 0x834A8345
        .4byte 0x83938367
        .4byte 0x00000000
        .4byte 0x6B696E6F
        .4byte 0x6B6F2046
        .4byte 0x6C69636B
        .4byte 0x20436F75
        .4byte 0x6E740000
        .4byte 0x62757279
        .4byte 0x204B6579
        .4byte 0x20436F75
        .4byte 0x6E740000
        .4byte 0x62757279
        .4byte 0x20457869
        .4byte 0x7420436F
        .4byte 0x756E7400
        .4byte 0x8AF182E8
        .4byte 0x834A8381
        .4byte 0x83898359
        .4byte 0x815B8380
        .4byte 0x83418345
        .4byte 0x83672866
        .4byte 0x72616D65
        .4byte 0x29000000
        .4byte 0x91E097F1
        .4byte 0x204D4158
        .4byte 0x204C7630
        .4byte 0x00000000
        .4byte 0x91E097F1
        .4byte 0x204D4158
        .4byte 0x204C7631
        .4byte 0x00000000
        .4byte 0x91E097F1
        .4byte 0x204D4158
        .4byte 0x204C7632
        .4byte 0x00000000
        .4byte 0x91E097F1
        .4byte 0x204D4158
        .4byte 0x204C7633
        .4byte 0x00000000
        .4byte 0x835F8362
        .4byte 0x83568385
        .4byte 0x8375815B
        .4byte 0x836391AC
        .4byte 0x93780000
        .4byte 0x8D4C94CD
        .4byte 0x88CD82CC
        .4byte 0x934A94BC
        .4byte 0x8C610000
        .4byte 0x8356815B
        .4byte 0x838B8368
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x8C798CB8
        .4byte 0x97A60000
        .4byte 0x8356815B
        .4byte 0x835C815B
        .4byte 0x82C58E67
        .4byte 0x82A48F64
        .4byte 0x82B30000
        .4byte 0x93648B43
        .4byte 0x8351815B
        .4byte 0x8367835F
        .4byte 0x8381815B
        .4byte 0x83570000
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
        .4byte 0x46616B65
        .4byte 0x50696B69
        .4byte 0x3A3A5061
        .4byte 0x726D7300
        .4byte 0x41534942
        .4byte 0x554D4920
        .4byte 0x8A4A8E6E
        .4byte 0x83588373
        .4byte 0x815B8368
        .4byte 0x00000000
        .4byte 0x57414C4B
        .4byte 0x208A4A8E
        .4byte 0x6E835883
        .4byte 0x73815B83
        .4byte 0x68000000
        .4byte 0x52554E20
        .4byte 0x8A4A8E6E
        .4byte 0x83588373
        .4byte 0x815B8368
        .4byte 0x00000000
        .4byte 0x45534341
        .4byte 0x5045208A
        .4byte 0x4A8E6E83
        .4byte 0x58837381
        .4byte 0x5B836800
        .4byte 0x57414C4B
        .4byte 0x208DC490
        .4byte 0xB6837483
        .4byte 0x8C815B83
        .4byte 0x80909428
        .4byte 0x6D696E29
        .4byte 0x00000000
        .4byte 0x57414C4B
        .4byte 0x208DC490
        .4byte 0xB6837483
        .4byte 0x8C815B83
        .4byte 0x80909428
        .4byte 0x6D617829
        .4byte 0x00000000
        .4byte 0x52554E20
        .4byte 0x8DC490B6
        .4byte 0x8374838C
        .4byte 0x815B8380
        .4byte 0x9094286D
        .4byte 0x696E2900
        .4byte 0x52554E20
        .4byte 0x8DC490B6
        .4byte 0x8374838C
        .4byte 0x815B8380
        .4byte 0x9094286D
        .4byte 0x61782900
        .4byte 0x45534341
        .4byte 0x5045208D
        .4byte 0xC490B683
        .4byte 0x74838C81
        .4byte 0x5B838090
        .4byte 0x94286D69
        .4byte 0x6E290000
        .4byte 0x45534341
        .4byte 0x5045208D
        .4byte 0xC490B683
        .4byte 0x74838C81
        .4byte 0x5B838090
        .4byte 0x94286D61
        .4byte 0x78290000
    .global lbl_8047D630
    lbl_8047D630:
        .4byte 0x6E617669
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_8047D63C
    lbl_8047D63C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047D648
    lbl_8047D648:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F70696B
        .4byte 0x692F6E61
        .4byte 0x76695061
        .4byte 0x726D732E
        .4byte 0x74787400
        .4byte 0x2F757365
        .4byte 0x722F4B61
        .4byte 0x6E646F2F
        .4byte 0x70696B69
        .4byte 0x2F746578
        .4byte 0x74732E73
        .4byte 0x7A730000
        .4byte 0x4E617669
        .4byte 0x4D67723A
        .4byte 0x3A417263
        .4byte 0x68697665
        .4byte 0x00000000
        .4byte 0x2F757365
        .4byte 0x722F4B61
        .4byte 0x6E646F2F
        .4byte 0x70696B69
        .4byte 0x2F70696B
        .4byte 0x69732E73
        .4byte 0x7A730000
        .4byte 0x6F72696D
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x6F72696D
        .4byte 0x61312E62
        .4byte 0x6D640000
        .4byte 0x616E696D
        .4byte 0x4D67722E
        .4byte 0x74787400
        .4byte 0x6E617669
        .4byte 0x436F6C6C
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x63757273
        .4byte 0x6F722F63
        .4byte 0x7572736F
        .4byte 0x722E626D
        .4byte 0x64000000
        .4byte 0x63757273
        .4byte 0x6F722F6D
        .4byte 0x61726B65
        .4byte 0x722E626D
        .4byte 0x64000000
        .4byte 0x63757273
        .4byte 0x6F722F77
        .4byte 0x616B6B61
        .4byte 0x5F6F7269
        .4byte 0x6D612E62
        .4byte 0x726B0000
        .4byte 0x63757273
        .4byte 0x6F722F77
        .4byte 0x616B6B61
        .4byte 0x5F6C756A
        .4byte 0x692E6272
        .4byte 0x6B000000
        .4byte 0x63757273
        .4byte 0x6F722F61
        .4byte 0x72726F77
        .4byte 0x5F6F7269
        .4byte 0x6D612E62
        .4byte 0x726B0000
        .4byte 0x63757273
        .4byte 0x6F722F61
        .4byte 0x72726F77
        .4byte 0x5F6C756A
        .4byte 0x692E6272
        .4byte 0x6B000000
        .4byte 0x6F72696D
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x73796174
        .4byte 0x796F752E
        .4byte 0x626D6400
        .4byte 0x6F72696D
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x6F72696D
        .4byte 0x61332E62
        .4byte 0x6D640000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game7NaviMgr
    __vt__Q24Game7NaviMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7NaviMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Navi>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game7NaviMgrFv"
        .4byte "@28@doEntry__Q24Game7NaviMgrFv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSimulation__Q24Game7NaviMgrFf"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte "@28@loadResources__Q24Game7NaviMgrFv"
        .4byte "@28@resetMgr__Q24Game7NaviMgrFv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte "@28@frozenable__Q24Game7NaviMgrFv"
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte doAnimation__Q24Game7NaviMgrFv
        .4byte doEntry__Q24Game7NaviMgrFv
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte doSimulation__Q24Game7NaviMgrFf
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte birth__Q24Game7NaviMgrFv
        .4byte resetMgr__Q24Game7NaviMgrFv
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "onAlloc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@48@__dt__Q24Game7NaviMgrFv"
        .4byte killAll__Q24Game7NaviMgrFv
        .4byte getMgrName__Q24Game7NaviMgrFv
        .4byte frozenable__Q24Game7NaviMgrFv
        .4byte loadResources__Q24Game7NaviMgrFv
    .global "__vt__23Container<Q24Game4Navi>"
    "__vt__23Container<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte "__dt__23Container<Q24Game4Navi>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Navi>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__23Container<Q24Game4Navi>Fi"
        .4byte "getTo__23Container<Q24Game4Navi>Fv"
    .global "__vt__23ObjectMgr<Q24Game4Navi>"
    "__vt__23ObjectMgr<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte "__dt__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Navi>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__23Container<Q24Game4Navi>Fi"
        .4byte "getTo__23Container<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doEntry__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSetView__23ObjectMgr<Q24Game4Navi>Fi"
        .4byte "@28@doViewCalc__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSimulation__23ObjectMgr<Q24Game4Navi>Ff"
        .4byte "@28@doDirectDraw__23ObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "doEntry__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "doSetView__23ObjectMgr<Q24Game4Navi>Fi"
        .4byte "doViewCalc__23ObjectMgr<Q24Game4Navi>Fv"
        .4byte "doSimulation__23ObjectMgr<Q24Game4Navi>Ff"
        .4byte "doDirectDraw__23ObjectMgr<Q24Game4Navi>FR8Graphics"
    .global "__vt__27MonoObjectMgr<Q24Game4Navi>"
    "__vt__27MonoObjectMgr<Q24Game4Navi>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Navi>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Navi>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doEntry__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "@28@doSimulation__27MonoObjectMgr<Q24Game4Navi>Ff"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "doEntry__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "doSimulation__27MonoObjectMgr<Q24Game4Navi>Ff"
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
        .4byte "birth__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "resetMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
        .4byte "onAlloc__27MonoObjectMgr<Q24Game4Navi>Fv"
    .global __vt__Q24Game13FakePikiParms
    __vt__Q24Game13FakePikiParms:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game13FakePikiParmsFR6Stream
    .global __vt__Q24Game9NaviParms
    __vt__Q24Game9NaviParms:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game9NaviParmsFR6Stream
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global naviMgr__4Game
    naviMgr__4Game:
        .skip 0x4
    .global animMgr__Q24Game7NaviMgr
    animMgr__Q24Game7NaviMgr:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518668
    lbl_80518668:
        .4byte 0x6E617669
        .4byte 0x4D677200
    .global lbl_80518670
    lbl_80518670:
        .float 1.0
    .global lbl_80518674
    lbl_80518674:
        .float 0.5
    .global lbl_80518678
    lbl_80518678:
        .float 0.1
    .global lbl_8051867C
    lbl_8051867C:
        .4byte 0x41C80000
    .global lbl_80518680
    lbl_80518680:
        .4byte 0x00000000
    .global lbl_80518684
    lbl_80518684:
        .4byte 0x43FA0000
    .global lbl_80518688
    lbl_80518688:
        .4byte 0x43480000
    .global lbl_8051868C
    lbl_8051868C:
        .4byte 0x447A0000
    .global lbl_80518690
    lbl_80518690:
        .4byte 0x41700000
    .global lbl_80518694
    lbl_80518694:
        .4byte 0x42B40000
    .global lbl_80518698
    lbl_80518698:
        .4byte 0x40A00000
    .global lbl_8051869C
    lbl_8051869C:
        .4byte 0x3EE66666
    .global lbl_805186A0
    lbl_805186A0:
        .4byte 0x43200000
    .global lbl_805186A4
    lbl_805186A4:
        .4byte 0x3F99999A
    .global lbl_805186A8
    lbl_805186A8:
        .4byte 0x41200000
    .global lbl_805186AC
    lbl_805186AC:
        .4byte 0x53746963
        .4byte 0x6B203000
    .global lbl_805186B4
    lbl_805186B4:
        .4byte 0x3A83126F
    .global lbl_805186B8
    lbl_805186B8:
        .4byte 0x53746963
        .4byte 0x6B203100
    .global lbl_805186C0
    lbl_805186C0:
        .4byte 0x3F4CCCCD
    .global lbl_805186C4
    lbl_805186C4:
        .4byte 0x53746963
        .4byte 0x6B203200
    .global lbl_805186CC
    lbl_805186CC:
        .4byte 0x42F00000
    .global lbl_805186D0
    lbl_805186D0:
        .4byte 0x43340000
    .global lbl_805186D4
    lbl_805186D4:
        .4byte 0x40200000
    .global lbl_805186D8
    lbl_805186D8:
        .4byte 0x430C0000
    .global lbl_805186DC
    lbl_805186DC:
        .4byte 0x42960000
    .global lbl_805186E0
    lbl_805186E0:
        .4byte 0x42E60000
    .global lbl_805186E4
    lbl_805186E4:
        .4byte 0x41F00000
    .global lbl_805186E8
    lbl_805186E8:
        .4byte 0x43160000
    .global lbl_805186EC
    lbl_805186EC:
        .4byte 0x42C80000
    .global lbl_805186F0
    lbl_805186F0:
        .4byte 0x42200000
    .global lbl_805186F4
    lbl_805186F4:
        .4byte 0x41000000
    .global lbl_805186F8
    lbl_805186F8:
        .4byte 0x41080000
    .global lbl_805186FC
    lbl_805186FC:
        .4byte 0x44FA0000
    .global lbl_80518700
    lbl_80518700:
        .4byte 0x3CF5C28F
    .global lbl_80518704
    lbl_80518704:
        .4byte 0x40000000
    .global lbl_80518708
    lbl_80518708:
        .float 0.3
    .global lbl_8051870C
    lbl_8051870C:
        .4byte 0x3F59999A
    .global lbl_80518710
    lbl_80518710:
        .4byte 0x42700000
    .global lbl_80518714
    lbl_80518714:
        .4byte 0x3F266666
    .global lbl_80518718
    lbl_80518718:
        .4byte 0x43960000
    .global lbl_8051871C
    lbl_8051871C:
        .4byte 0x83898343
        .4byte 0x83740000
    .global lbl_80518724
    lbl_80518724:
        .4byte 0x8D558C82
        .4byte 0x97CD0000
    .global lbl_8051872C
    lbl_8051872C:
        .4byte 0x43700000
    .global lbl_80518730
    lbl_80518730:
        .float 0.25
    .global lbl_80518734
    lbl_80518734:
        .4byte 0x61636365
        .4byte 0x6C000000
    .global lbl_8051873C
    lbl_8051873C:
        .4byte 0x3C23D70A
    .global lbl_80518740
    lbl_80518740:
        .4byte 0x41A00000
    .global lbl_80518744
    lbl_80518744:
        .4byte 0x42BE0000
    .global lbl_80518748
    lbl_80518748:
        .4byte 0x6D6F7469
        .4byte 0x6F6E0000
    .global lbl_80518750
    lbl_80518750:
        .4byte 0x4E617669
        .4byte 0x4D677200
*/

namespace Game {

/*
 * --INFO--
 * Address:	8015928C
 * Size:	0000CC
 */
NaviMgr::NaviMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "__ct__27MonoObjectMgr<Q24Game4Navi>Fv"
	addi     r3, r31, 0x30
	bl       __ct__11JKRDisposerFv
	lis      r4, __vt__Q24Game7NaviMgr@ha
	li       r0, 0
	addi     r6, r4, __vt__Q24Game7NaviMgr@l
	lis      r3, __ct__Q23Sys18MatTevRegAnimationFv@ha
	stw      r6, 0(r31)
	addi     r5, r6, 0x2c
	addi     r4, r3, __ct__Q23Sys18MatTevRegAnimationFv@l
	addi     r6, r6, 0x8c
	stw      r5, 0x1c(r31)
	addi     r3, r31, 0x60
	li       r5, 0
	li       r7, 2
	stw      r6, 0x30(r31)
	li       r6, 0x14
	stb      r0, 0x5c(r31)
	bl       __construct_array
	lis      r4, __ct__Q23Sys18MatTevRegAnimationFv@ha
	addi     r3, r31, 0x88
	addi     r4, r4, __ct__Q23Sys18MatTevRegAnimationFv@l
	li       r5, 0
	li       r6, 0x14
	li       r7, 2
	bl       __construct_array
	addi     r0, r2, lbl_80518668@sda21
	li       r3, 0xc64
	stw      r0, 0x14(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80159328
	bl       __ct__Q24Game9NaviParmsFv
	mr       r0, r3

lbl_80159328:
	stw      r0, 0xc8(r31)
	mr       r3, r31
	bl       clearDeadCount__Q24Game7NaviMgrFv
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x48(r31)
	stw      r0, 0x4c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80159358
 * Size:	000060
 */
NaviParms::NaviParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game13FakePikiParmsFv
	lis      r4, __vt__Q24Game9NaviParms@ha
	addi     r3, r31, 0x27c
	addi     r0, r4, __vt__Q24Game9NaviParms@l
	li       r4, 1
	stw      r0, 0xd8(r31)
	bl       __ct__Q34Game9NaviParms5ParmsFv
	lfs      f0, lbl_80518670@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_80518674@sda21(r2)
	stfs     f0, 0x24(r31)
	lfs      f0, lbl_80518678@sda21(r2)
	stfs     f1, 0x74(r31)
	stfs     f0, 0x9c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801593B8
 * Size:	000F10
 */
NaviParms::Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_8047D088@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047D088@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_801593E8
	addi     r0, r30, 0x9e4
	stw      r0, 0(r30)

lbl_801593E8:
	li       r0, 0
	lis      r5, 0x70303030@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0xc
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303630@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051867C@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x70303630@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x1c
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303632@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518688@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x70303632@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0x2c
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518690@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x70303031@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x40
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303533@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518694@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x70303533@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x54
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518698@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x70303032@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x68
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051869C@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x70303033@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x7c
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518670@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x70303034@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x90
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303536@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A0@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x70303536@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x9c
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303338@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A0@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x70303338@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0xb0
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A4@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_80518678@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x70303035@l
	lfs      f0, lbl_805186A8@sda21(r2)
	addi     r6, r2, lbl_805186AC@sda21
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303230@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186B4@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x70303230@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0xc0
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518678@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x1ec
	stfs     f0, 0x1dc(r30)
	addi     r5, r5, 0x70303036@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r2, lbl_805186B8@sda21
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186C0@sda21(r2)
	stw      r0, 0x1ec(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x214
	stfs     f0, 0x204(r30)
	addi     r5, r5, 0x70303037@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r2, lbl_805186C4@sda21
	stfs     f1, 0x20c(r30)
	stfs     f0, 0x210(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518670@sda21(r2)
	stw      r0, 0x214(r30)
	mr       r4, r30
	lfs      f0, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x23c
	stfs     f1, 0x22c(r30)
	addi     r5, r5, 0x70303038@l
	addi     r6, r31, 0xcc
	stfs     f0, 0x234(r30)
	stfs     f1, 0x238(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186CC@sda21(r2)
	stw      r0, 0x23c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518694@sda21(r2)
	addi     r3, r30, 0x264
	stfs     f0, 0x254(r30)
	addi     r5, r5, 0x70303039@l
	lfs      f0, lbl_805186D0@sda21(r2)
	addi     r6, r31, 0xd8
	stfs     f1, 0x25c(r30)
	stfs     f0, 0x260(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186D4@sda21(r2)
	stw      r0, 0x264(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x28c
	stfs     f0, 0x27c(r30)
	addi     r5, r5, 0x70303130@l
	lfs      f0, lbl_805186A8@sda21(r2)
	addi     r6, r31, 0xec
	stfs     f1, 0x284(r30)
	stfs     f0, 0x288(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303131@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186D8@sda21(r2)
	stw      r0, 0x28c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x2b4
	stfs     f0, 0x2a4(r30)
	addi     r5, r5, 0x70303131@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0xfc
	stfs     f1, 0x2ac(r30)
	stfs     f0, 0x2b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303234@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186D8@sda21(r2)
	stw      r0, 0x2b4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x2dc
	stfs     f0, 0x2cc(r30)
	addi     r5, r5, 0x70303234@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x10c
	stfs     f1, 0x2d4(r30)
	stfs     f0, 0x2d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303235@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186DC@sda21(r2)
	stw      r0, 0x2dc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x304
	stfs     f0, 0x2f4(r30)
	addi     r5, r5, 0x70303235@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0x11c
	stfs     f1, 0x2fc(r30)
	stfs     f0, 0x300(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303534@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186DC@sda21(r2)
	stw      r0, 0x304(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x32c
	stfs     f0, 0x31c(r30)
	addi     r5, r5, 0x70303534@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0x12c
	stfs     f1, 0x324(r30)
	stfs     f0, 0x328(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x71303030@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186E0@sda21(r2)
	stw      r0, 0x32c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x354
	stfs     f0, 0x344(r30)
	addi     r5, r5, 0x71303030@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0x13c
	stfs     f1, 0x34c(r30)
	stfs     f0, 0x350(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x71303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186E4@sda21(r2)
	stw      r0, 0x354(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x37c
	stfs     f0, 0x36c(r30)
	addi     r5, r5, 0x71303031@l
	lfs      f0, lbl_805186E8@sda21(r2)
	addi     r6, r31, 0x14c
	stfs     f1, 0x374(r30)
	stfs     f0, 0x378(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303236@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186DC@sda21(r2)
	stw      r0, 0x37c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x3a4
	stfs     f0, 0x394(r30)
	addi     r5, r5, 0x70303236@l
	lfs      f0, lbl_805186E8@sda21(r2)
	addi     r6, r31, 0x15c
	stfs     f1, 0x39c(r30)
	stfs     f0, 0x3a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303337@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518670@sda21(r2)
	stw      r0, 0x3a4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x3cc
	stfs     f0, 0x3bc(r30)
	addi     r5, r5, 0x70303337@l
	lfs      f0, lbl_805186EC@sda21(r2)
	addi     r6, r31, 0x168
	stfs     f1, 0x3c4(r30)
	stfs     f0, 0x3c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303432@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518690@sda21(r2)
	stw      r0, 0x3cc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x3f4
	stfs     f0, 0x3e4(r30)
	addi     r5, r5, 0x70303432@l
	lfs      f0, lbl_80518688@sda21(r2)
	addi     r6, r31, 0x180
	stfs     f1, 0x3ec(r30)
	stfs     f0, 0x3f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303339@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r7, 0
	stw      r0, 0x3f4(r30)
	li       r0, 0xa
	mr       r4, r30
	addi     r3, r30, 0x41c
	stw      r7, 0x40c(r30)
	addi     r5, r5, 0x70303339@l
	addi     r6, r31, 0x190
	stw      r7, 0x414(r30)
	stw      r0, 0x418(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303430@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518690@sda21(r2)
	stw      r0, 0x41c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x444
	stfs     f0, 0x434(r30)
	addi     r5, r5, 0x70303430@l
	lfs      f0, lbl_80518688@sda21(r2)
	addi     r6, r31, 0x1a0
	stfs     f1, 0x43c(r30)
	stfs     f0, 0x440(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303231@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186F0@sda21(r2)
	stw      r0, 0x444(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x46c
	stfs     f0, 0x45c(r30)
	addi     r5, r5, 0x70303231@l
	lfs      f0, lbl_80518688@sda21(r2)
	addi     r6, r31, 0x1c4
	stfs     f1, 0x464(r30)
	stfs     f0, 0x468(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303431@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186F4@sda21(r2)
	stw      r0, 0x46c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x494
	stfs     f0, 0x484(r30)
	addi     r5, r5, 0x70303431@l
	lfs      f0, lbl_805186EC@sda21(r2)
	addi     r6, r31, 0x1d4
	stfs     f1, 0x48c(r30)
	stfs     f0, 0x490(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303232@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186F8@sda21(r2)
	stw      r0, 0x494(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x4bc
	stfs     f0, 0x4ac(r30)
	addi     r5, r5, 0x70303232@l
	lfs      f0, lbl_805186EC@sda21(r2)
	addi     r6, r31, 0x1e8
	stfs     f1, 0x4b4(r30)
	stfs     f0, 0x4b8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303233@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518670@sda21(r2)
	stw      r0, 0x4bc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x4e4
	stfs     f0, 0x4d4(r30)
	addi     r5, r5, 0x70303233@l
	lfs      f0, lbl_805186FC@sda21(r2)
	addi     r6, r31, 0x1f4
	stfs     f1, 0x4dc(r30)
	stfs     f0, 0x4e0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303331@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518700@sda21(r2)
	stw      r0, 0x4e4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x50c
	stfs     f0, 0x4fc(r30)
	addi     r5, r5, 0x70303331@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x20c
	stfs     f1, 0x504(r30)
	stfs     f0, 0x508(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303332@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518704@sda21(r2)
	stw      r0, 0x50c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x534
	stfs     f0, 0x524(r30)
	addi     r5, r5, 0x70303332@l
	lfs      f0, lbl_805186A8@sda21(r2)
	addi     r6, r31, 0x21c
	stfs     f1, 0x52c(r30)
	stfs     f0, 0x530(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303333@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518670@sda21(r2)
	stw      r0, 0x534(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x55c
	stfs     f0, 0x54c(r30)
	addi     r5, r5, 0x70303333@l
	lfs      f0, lbl_805186A8@sda21(r2)
	addi     r6, r31, 0x22c
	stfs     f1, 0x554(r30)
	stfs     f0, 0x558(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303334@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186C0@sda21(r2)
	stw      r0, 0x55c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x584
	stfs     f0, 0x574(r30)
	addi     r5, r5, 0x70303334@l
	lfs      f0, lbl_805186A8@sda21(r2)
	addi     r6, r31, 0x23c
	stfs     f1, 0x57c(r30)
	stfs     f0, 0x580(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303335@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518708@sda21(r2)
	stw      r0, 0x584(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x5ac
	stfs     f0, 0x59c(r30)
	addi     r5, r5, 0x70303335@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x254
	stfs     f1, 0x5a4(r30)
	stfs     f0, 0x5a8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303336@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A8@sda21(r2)
	stw      r0, 0x5ac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x5d4
	stfs     f0, 0x5c4(r30)
	addi     r5, r5, 0x70303336@l
	lfs      f0, lbl_805186D0@sda21(r2)
	addi     r6, r31, 0x264
	stfs     f1, 0x5cc(r30)
	stfs     f0, 0x5d0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303438@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518678@sda21(r2)
	stw      r0, 0x5d4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x5fc
	stfs     f0, 0x5ec(r30)
	addi     r5, r5, 0x70303438@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x278
	stfs     f1, 0x5f4(r30)
	stfs     f0, 0x5f8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303439@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051870C@sda21(r2)
	stw      r0, 0x5fc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x624
	stfs     f0, 0x614(r30)
	addi     r5, r5, 0x70303439@l
	lfs      f0, lbl_80518710@sda21(r2)
	addi     r6, r31, 0x28c
	stfs     f1, 0x61c(r30)
	stfs     f0, 0x620(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303433@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518698@sda21(r2)
	stw      r0, 0x624(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x64c
	stfs     f0, 0x63c(r30)
	addi     r5, r5, 0x70303433@l
	lfs      f0, lbl_80518710@sda21(r2)
	addi     r6, r31, 0x2a8
	stfs     f1, 0x644(r30)
	stfs     f0, 0x648(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303434@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518678@sda21(r2)
	stw      r0, 0x64c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x674
	stfs     f0, 0x664(r30)
	addi     r5, r5, 0x70303434@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x2c0
	stfs     f1, 0x66c(r30)
	stfs     f0, 0x670(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303438@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518714@sda21(r2)
	stw      r0, 0x674(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x69c
	stfs     f0, 0x68c(r30)
	addi     r5, r5, 0x70303438@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x2d8
	stfs     f1, 0x694(r30)
	stfs     f0, 0x698(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303435@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051870C@sda21(r2)
	stw      r0, 0x69c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x6c4
	stfs     f0, 0x6b4(r30)
	addi     r5, r5, 0x70303435@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x2ec
	stfs     f1, 0x6bc(r30)
	stfs     f0, 0x6c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303436@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518680@sda21(r2)
	stw      r0, 0x6c4(r30)
	mr       r4, r30
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r3, r30, 0x6ec
	stfs     f1, 0x6dc(r30)
	addi     r5, r5, 0x70303436@l
	addi     r6, r31, 0x304
	stfs     f1, 0x6e4(r30)
	stfs     f0, 0x6e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303437@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186EC@sda21(r2)
	stw      r0, 0x6ec(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x714
	stfs     f0, 0x704(r30)
	addi     r5, r5, 0x70303437@l
	lfs      f0, lbl_805186FC@sda21(r2)
	addi     r6, r31, 0x31c
	stfs     f1, 0x70c(r30)
	stfs     f0, 0x710(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303530@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518718@sda21(r2)
	stw      r0, 0x714(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x73c
	stfs     f0, 0x72c(r30)
	addi     r5, r5, 0x70303530@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r2, lbl_8051871C@sda21
	stfs     f1, 0x734(r30)
	stfs     f0, 0x738(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303531@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186EC@sda21(r2)
	stw      r0, 0x73c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x764
	stfs     f0, 0x754(r30)
	addi     r5, r5, 0x70303531@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r2, lbl_80518724@sda21
	stfs     f1, 0x75c(r30)
	stfs     f0, 0x760(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303532@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A8@sda21(r2)
	stw      r0, 0x764(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x78c
	stfs     f0, 0x77c(r30)
	addi     r5, r5, 0x70303532@l
	lfs      f0, lbl_8051868C@sda21(r2)
	addi     r6, r31, 0x334
	stfs     f1, 0x784(r30)
	stfs     f0, 0x788(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303535@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186A8@sda21(r2)
	stw      r0, 0x78c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x7b4
	stfs     f0, 0x7a4(r30)
	addi     r5, r5, 0x70303535@l
	lfs      f0, lbl_805186EC@sda21(r2)
	addi     r6, r31, 0x340
	stfs     f1, 0x7ac(r30)
	stfs     f0, 0x7b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303537@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 1
	stw      r0, 0x7b4(r30)
	li       r7, 0
	li       r0, 0xa
	mr       r4, r30
	stw      r3, 0x7cc(r30)
	addi     r3, r30, 0x7dc
	addi     r5, r5, 0x70303537@l
	addi     r6, r31, 0x354
	stw      r7, 0x7d4(r30)
	stw      r0, 0x7d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303538@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 3
	stw      r0, 0x7dc(r30)
	li       r7, 0
	li       r0, 0x10
	mr       r4, r30
	stw      r3, 0x7f4(r30)
	addi     r3, r30, 0x804
	addi     r5, r5, 0x70303538@l
	addi     r6, r31, 0x368
	stw      r7, 0x7fc(r30)
	stw      r0, 0x800(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303539@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 2
	stw      r0, 0x804(r30)
	li       r7, 0
	li       r0, 0x10
	mr       r4, r30
	stw      r3, 0x81c(r30)
	addi     r3, r30, 0x82c
	addi     r5, r5, 0x70303539@l
	addi     r6, r31, 0x378
	stw      r7, 0x824(r30)
	stw      r0, 0x828(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303631@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 2
	stw      r0, 0x82c(r30)
	li       r7, 0
	li       r0, 0x10
	mr       r4, r30
	stw      r3, 0x844(r30)
	addi     r3, r30, 0x854
	addi     r5, r5, 0x70303631@l
	addi     r6, r31, 0x388
	stw      r7, 0x84c(r30)
	stw      r0, 0x850(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303032@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0x50
	stw      r0, 0x854(r30)
	li       r7, 0
	li       r0, 0x3e8
	mr       r4, r30
	stw      r3, 0x86c(r30)
	addi     r3, r30, 0x87c
	addi     r5, r5, 0x71303032@l
	addi     r6, r31, 0x3a8
	stw      r7, 0x874(r30)
	stw      r0, 0x878(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303033@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0xa
	stw      r0, 0x87c(r30)
	li       r7, 1
	li       r0, 0x64
	mr       r4, r30
	stw      r3, 0x894(r30)
	addi     r3, r30, 0x8a4
	addi     r5, r5, 0x71303033@l
	addi     r6, r31, 0x3b8
	stw      r7, 0x89c(r30)
	stw      r0, 0x8a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303034@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0x19
	stw      r0, 0x8a4(r30)
	li       r7, 1
	li       r0, 0x64
	mr       r4, r30
	stw      r3, 0x8bc(r30)
	addi     r3, r30, 0x8cc
	addi     r5, r5, 0x71303034@l
	addi     r6, r31, 0x3c8
	stw      r7, 0x8c4(r30)
	stw      r0, 0x8c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303035@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0x32
	stw      r0, 0x8cc(r30)
	li       r7, 1
	li       r0, 0x64
	mr       r4, r30
	stw      r3, 0x8e4(r30)
	addi     r3, r30, 0x8f4
	addi     r5, r5, 0x71303035@l
	addi     r6, r31, 0x3d8
	stw      r7, 0x8ec(r30)
	stw      r0, 0x8f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303036@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r7, 0x64
	stw      r0, 0x8f4(r30)
	li       r0, 1
	mr       r4, r30
	addi     r3, r30, 0x91c
	stw      r7, 0x90c(r30)
	addi     r5, r5, 0x71303036@l
	addi     r6, r31, 0x3e8
	stw      r0, 0x914(r30)
	stw      r7, 0x918(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x71303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051872C@sda21(r2)
	stw      r0, 0x91c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x944
	stfs     f0, 0x934(r30)
	addi     r5, r5, 0x71303037@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x3fc
	stfs     f1, 0x93c(r30)
	stfs     f0, 0x940(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x71303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518688@sda21(r2)
	stw      r0, 0x944(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x96c
	stfs     f0, 0x95c(r30)
	addi     r5, r5, 0x71303038@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x40c
	stfs     f1, 0x964(r30)
	stfs     f0, 0x968(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x71303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518674@sda21(r2)
	stw      r0, 0x96c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x994
	stfs     f0, 0x984(r30)
	addi     r5, r5, 0x71303039@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r31, 0x424
	stfs     f1, 0x98c(r30)
	stfs     f0, 0x990(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x71303130@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 2
	stw      r0, 0x994(r30)
	li       r7, 0
	li       r0, 0xa
	mr       r4, r30
	stw      r3, 0x9ac(r30)
	addi     r3, r30, 0x9bc
	addi     r5, r5, 0x71303130@l
	addi     r6, r31, 0x438
	stw      r7, 0x9b4(r30)
	stw      r0, 0x9b8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_805186A8@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518680@sda21(r2)
	stw      r0, 0x9bc(r30)
	mr       r3, r30
	lfs      f0, lbl_80518688@sda21(r2)
	stfs     f2, 0x9d4(r30)
	stfs     f1, 0x9dc(r30)
	stfs     f0, 0x9e0(r30)
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
 * Address:	8015A2C8
 * Size:	0001A4
 */
FakePikiParms::FakePikiParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, 0x73303030@ha
	lis      r4, __vt__Q24Game13CreatureParms@ha
	stw      r0, 0x14(r1)
	addi     r0, r4, __vt__Q24Game13CreatureParms@l
	addi     r5, r5, 0x73303030@l
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8047D088@ha
	stw      r30, 8(r1)
	addi     r30, r3, lbl_8047D088@l
	li       r3, 0
	mr       r4, r31
	stw      r0, 0xd8(r31)
	addi     r0, r31, 0xd4
	addi     r6, r30, 0x460
	stw      r0, 0(r31)
	addi     r0, r30, 0x44c
	stw      r3, 4(r31)
	addi     r3, r31, 0xc
	stw      r0, 8(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518674@sda21(r2)
	stw      r0, 0xc(r31)
	mr       r4, r31
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r31, 0x34
	stfs     f0, 0x24(r31)
	addi     r5, r5, 0x73303031@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r30, 0x474
	stfs     f1, 0x2c(r31)
	stfs     f0, 0x30(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518674@sda21(r2)
	stw      r0, 0x34(r31)
	mr       r4, r31
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r31, 0x5c
	stfs     f0, 0x4c(r31)
	addi     r5, r5, 0x73303032@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r30, 0x484
	stfs     f1, 0x54(r31)
	stfs     f0, 0x58(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518730@sda21(r2)
	stw      r0, 0x5c(r31)
	mr       r4, r31
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r31, 0x84
	stfs     f0, 0x74(r31)
	addi     r5, r5, 0x73303033@l
	lfs      f0, lbl_80518670@sda21(r2)
	addi     r6, r2, lbl_80518734@sda21
	stfs     f1, 0x7c(r31)
	stfs     f0, 0x80(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x73303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518678@sda21(r2)
	stw      r0, 0x84(r31)
	mr       r4, r31
	lfs      f1, lbl_8051873C@sda21(r2)
	addi     r3, r31, 0xac
	stfs     f0, 0x9c(r31)
	addi     r5, r5, 0x73303034@l
	lfs      f0, lbl_80518704@sda21(r2)
	addi     r6, r30, 0x494
	stfs     f1, 0xa4(r31)
	stfs     f0, 0xa8(r31)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r4, "__vt__7Parm<f>"@ha
	lis      r3, __vt__Q24Game13FakePikiParms@ha
	addi     r0, r4, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518708@sda21(r2)
	stw      r0, 0xac(r31)
	addi     r0, r3, __vt__Q24Game13FakePikiParms@l
	lfs      f1, lbl_8051873C@sda21(r2)
	addi     r3, r31, 0xdc
	stfs     f0, 0xc4(r31)
	li       r4, 1
	lfs      f0, lbl_80518704@sda21(r2)
	stfs     f1, 0xcc(r31)
	stfs     f0, 0xd0(r31)
	stw      r0, 0xd8(r31)
	bl       __ct__Q34Game13FakePikiParms5ParmsFv
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
 * --INFO--
 * Address:	8015A46C
 * Size:	0002B4
 */
FakePikiParms::Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_8047D088@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047D088@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_8015A49C
	addi     r0, r30, 0x19c
	stw      r0, 0(r30)

lbl_8015A49C:
	li       r0, 0
	lis      r5, 0x66703031@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0x4a4
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x66703031@l
	addi     r6, r31, 0x4b4
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518698@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x66703032@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x4cc
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186F4@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x66703033@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x4e0
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518740@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x66703034@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x4f4
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518744@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x66703034@l
	lfs      f0, lbl_80518684@sda21(r2)
	addi     r6, r31, 0x508
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518710@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x66703035@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x524
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518694@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x66703036@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x540
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805186F0@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x66703037@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x558
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518710@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x66703038@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x570
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66703039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518710@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518680@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x66703039@l
	lfs      f0, lbl_80518718@sda21(r2)
	addi     r6, r31, 0x58c
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_80518694@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518680@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r3, r30
	lfs      f0, lbl_80518718@sda21(r2)
	stfs     f2, 0x18c(r30)
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8015A720
 * Size:	0000A0
 */
void MonoObjectMgr<Game::Navi>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015A7A4
	lis      r4, "__vt__27MonoObjectMgr<Q24Game4Navi>"@ha
	addi     r4, r4, "__vt__27MonoObjectMgr<Q24Game4Navi>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A794
	lis      r4, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A794
	lis      r4, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Navi>"@l
	stw      r0, 0(r30)
	beq      lbl_8015A794
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015A794:
	extsh.   r0, r31
	ble      lbl_8015A7A4
	mr       r3, r30
	bl       __dl__FPv

lbl_8015A7A4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8015A7C0
 * Size:	000110
 */
NaviMgr::~NaviMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015A8B4
	lis      r3, __vt__Q24Game7NaviMgr@ha
	li       r0, 0
	addi     r3, r3, __vt__Q24Game7NaviMgr@l
	stw      r3, 0(r30)
	addi     r4, r3, 0x2c
	addi     r3, r3, 0x8c
	stw      r4, 0x1c(r30)
	stw      r3, 0x30(r30)
	stw      r0, animMgr__Q24Game7NaviMgr@sda21(r13)
	stw      r0, naviMgr__4Game@sda21(r13)
	lwz      r3, 0x48(r30)
	cmplwi   r3, 0
	beq      lbl_8015A820
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x48(r30)

lbl_8015A820:
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0
	beq      lbl_8015A838
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x4c(r30)

lbl_8015A838:
	addi     r3, r30, 0x30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	cmplwi   r30, 0
	beq      lbl_8015A8A4
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A8A4
	lis      r3, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015A8A4
	lis      r3, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r3, "__vt__23Container<Q24Game4Navi>"@l
	stw      r0, 0(r30)
	beq      lbl_8015A8A4
	lis      r4, __vt__16GenericContainer@ha
	mr       r3, r30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015A8A4:
	extsh.   r0, r31
	ble      lbl_8015A8B4
	mr       r3, r30
	bl       __dl__FPv

lbl_8015A8B4:
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
 * Address:	........
 * Size:	000020
 */
unknown NaviMgr::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015A8D0
 * Size:	000078
 */
void NaviMgr::createPSMDirectorUpdator(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x10
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8015A914
	bl       PSMGetLifeD__Fv
	mr       r4, r3
	mr       r3, r31
	li       r5, 2
	li       r6, 0
	bl
__ct__Q23PSM15DirectorUpdatorFPQ28PSSystem12DirectorBaseUcQ33PSM15DirectorUpdator4Type
	mr       r31, r3

lbl_8015A914:
	stw      r31, 0x4c(r30)
	li       r4, 0
	lwz      r3, 0x4c(r30)
	bl       directOff__Q23PSM15DirectorUpdatorFUc
	lwz      r3, 0x4c(r30)
	li       r4, 1
	bl       directOff__Q23PSM15DirectorUpdatorFUc
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015A948
 * Size:	00005C
 */
void NaviMgr::resetMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "resetMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
	lwz      r3, 0x48(r31)
	cmplwi   r3, 0
	beq      lbl_8015A978
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x48(r31)

lbl_8015A978:
	lwz      r3, 0x4c(r31)
	cmplwi   r3, 0
	beq      lbl_8015A990
	bl       __dl__FPv
	li       r0, 0
	stw      r0, 0x4c(r31)

lbl_8015A990:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015A9A4
 * Size:	000090
 */
void NaviMgr::killAll(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015AA08

lbl_8015A9D0:
	lwz      r0, 0x28(r28)
	li       r4, 0
	add      r29, r0, r31
	mr       r3, r29
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lwz      r3,
"sInstance__Q28PSSystem28SingletonBase<Q23PSM6ObjMgr>"@sda21(r13) cmplwi   r3, 0
	beq      lbl_8015AA00
	lwz      r4, 0x26c(r29)
	cmplwi   r4, 0
	beq      lbl_8015AA00
	bl       remove__10JSUPtrListFP10JSUPtrLink

lbl_8015AA00:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015AA08:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015A9D0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015AA34
 * Size:	0000F0
 */
void NaviMgr::setupNavi(Game::Navi*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r4, 0x2dc(r4)
	bl       createModel__Q24Game7NaviMgrFi
	stw      r3, 0x174(r31)
	li       r3, 0x14
	lwz      r0, 0xc8(r30)
	stw      r0, 0xc0(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015AA88
	lwz      r4, 0xb8(r30)
	li       r5, 0
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015AA88:
	stw      r0, 0x290(r31)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015AAB0
	lwz      r4, 0xc4(r30)
	lis      r5, 8
	li       r6, 2
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015AAB0:
	stw      r0, 0x294(r31)
	lis      r4, 0x100
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x294(r31)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015AB24
 * Size:	0000FC
 */
Navi* NaviMgr::birth()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	bl       "birth__27MonoObjectMgr<Q24Game4Navi>Fv"
	or.      r29, r3, r3
	beq      lbl_8015ABB4
	lwz      r3, 0x20(r31)
	addi     r0, r3, -1
	sth      r0, 0x2dc(r29)
	lwz      r0, 0x26c(r29)
	cmplwi   r0, 0
	bne      lbl_8015AB84
	lis      r3, lbl_8047D630@ha
	lis      r5, lbl_8047D63C@ha
	addi     r3, r3, lbl_8047D630@l
	li       r4, 0x15d
	addi     r5, r5, lbl_8047D63C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015AB84:
	lwz      r3, 0x26c(r29)
	lhz      r4, 0x2dc(r29)
	bl       init__Q23PSM4NaviFUs
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015ABB4
	lhz      r0, 0x2dc(r29)
	cmplwi   r0, 1
	bne      lbl_8015ABB4
	lwz      r3, 0x26c(r29)
	bl       setShacho__Q23PSM4NaviFv

lbl_8015ABB4:
	mr       r30, r31
	li       r28, 0
	b        lbl_8015ABF0

lbl_8015ABC0:
	lwz      r3, 0x54(r30)
	lhz      r0, 0x2dc(r29)
	cmpw     r3, r0
	bne      lbl_8015ABE8
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0(r29)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl

lbl_8015ABE8:
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_8015ABF0:
	lwz      r0, 0x50(r31)
	cmpw     r28, r0
	blt      lbl_8015ABC0
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015AC20
 * Size:	00009C
 */
Navi* NaviMgr::getActiveNavi()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r31, 0
	bne      lbl_8015AC80
	cmplwi   r3, 0
	bne      lbl_8015AC80
	li       r3, 0
	b        lbl_8015ACA8

lbl_8015AC80:
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_8015AC94
	mr       r3, r31
	b        lbl_8015ACA8

lbl_8015AC94:
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_8015ACA4
	b        lbl_8015ACA8

lbl_8015ACA4:
	li       r3, 0

lbl_8015ACA8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015ACBC
 * Size:	0000BC
 */
void NaviMgr::loadResources(void)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r4, lbl_8047D648@ha
	li       r5, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r6, 0
	li       r7, 0
	stw      r31, 0x43c(r1)
	li       r8, 2
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	stw      r0, 8(r1)
	addi     r0, r4, lbl_8047D648@l
	li       r4, 0
	mr       r3, r0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_8015AD58
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_8015AD38
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_8015AD38:
	lwz      r3, 0xc8(r30)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       __dla__FPv

lbl_8015AD58:
	mr       r3, r30
	bl       load__Q24Game7NaviMgrFv
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015AD78
 * Size:	000050
 */
void NaviParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0xdc
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0x27c
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015ADC8
 * Size:	000264
 */
void NaviMgr::load()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, lbl_8047D088@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	addi     r31, r4, lbl_8047D088@l
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r5, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r3, r31, 0x5dc
	li       r4, 1
	li       r6, 2
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r30, r3
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x5f8
	li       r5, 0
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	lwz      r5, sys@sda21(r13)
	addi     r3, r31, 0x60c
	li       r4, 1
	li       r6, 1
	lwz      r5, 0x38(r5)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r29, r3
	lwz      r3, sys@sda21(r13)
	addi     r4, r31, 0x5f8
	bl       heapStatusEnd__6SystemFPc
	mr       r3, r29
	addi     r4, r31, 0x628
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x20000030@ha
	addi     r4, r4, 0x20000030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	li       r4, 0
	mr       r5, r3
	b        lbl_8015AEA0

lbl_8015AE80:
	lwz      r3, 0x80(r5)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8015AEA0:
	lhz      r0, 0x7c(r5)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8015AE80
	stw      r5, 0xb0(r28)
	lwz      r0, animMgr__Q24Game7NaviMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8015AED8
	mr       r3, r30
	mr       r6, r29
	addi     r4, r31, 0x640
	addi     r7, r2, lbl_80518748@sda21
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, animMgr__Q24Game7NaviMgr@sda21(r13)

lbl_8015AED8:
	mr       r3, r30
	addi     r4, r31, 0x64c
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0xcc(r28)
	mr       r3, r29
	addi     r4, r31, 0x65c
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0xb8(r28)
	mr       r3, r29
	addi     r4, r31, 0x670
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0xc4(r28)
	lis      r4, 4
	lwz      r3, 0xc4(r28)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0xb8(r28)
	li       r4, 0
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	mr       r3, r29
	addi     r4, r31, 0x684
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x60
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x69c
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x74
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x6b4
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x88
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	mr       r3, r29
	addi     r4, r31, 0x6cc
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r5, 0xb8(r28)
	mr       r4, r3
	addi     r3, r28, 0x9c
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, sCurrentHeap__7JKRHeap@sda21(r13)
	bl       getTotalFreeSize__7JKRHeapFv
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B02C
 * Size:	000064
 */
SysShape::Model* NaviMgr::createModel(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0x14
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015B074
	slwi     r0, r31, 2
	li       r5, 0
	add      r4, r30, r0
	li       r6, 2
	lwz      r4, 0xb0(r4)
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8015B074:
	mr       r3, r0
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B090
 * Size:	0000D4
 */
void NaviMgr::loadResources_float()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r5, lbl_8047D088@ha
	li       r6, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	addi     r30, r5, lbl_8047D088@l
	addi     r3, r30, 0x60c
	lwz      r4, sys@sda21(r13)
	lwz      r5, 0x38(r4)
	li       r4, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	lwz      r4, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015B0F0
	lwz      r12, 0(r3)
	addi     r4, r30, 0x6e4
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8015B104

lbl_8015B0F0:
	lwz      r12, 0(r3)
	addi     r4, r30, 0x6fc
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015B104:
	lis      r4, 0x20000030@ha
	addi     r4, r4, 0x20000030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	li       r5, 0
	b        lbl_8015B138

lbl_8015B118:
	lwz      r4, 0x80(r3)
	rlwinm   r0, r5, 2, 0xe, 0x1d
	addi     r5, r5, 1
	lwzx     r4, r4, r0
	lwz      r0, 0xc(r4)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r4)

lbl_8015B138:
	lhz      r0, 0x7c(r3)
	clrlwi   r4, r5, 0x10
	cmplw    r4, r0
	blt      lbl_8015B118
	stw      r3, 0xb4(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B164
 * Size:	00008C
 */
int NaviMgr::getAliveCount()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015B1C0

lbl_8015B194:
	lwz      r0, 0x28(r28)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B1B8
	addi     r30, r30, 1

lbl_8015B1B8:
	addi     r31, r31, 0x320
	addi     r29, r29, 1

lbl_8015B1C0:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015B194
	lwz      r0, 0x24(r1)
	mr       r3, r30
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
Navi* NaviMgr::getSurviveNavi()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015B1F0
 * Size:	000018
 */
void NaviMgr::clearDeadCount()
{
	/*
	li       r4, 0
	li       r0, -1
	stw      r4, 0x50(r3)
	stw      r0, 0x54(r3)
	stw      r0, 0x58(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B208
 * Size:	000078
 */
void NaviMgr::informOrimaDead(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	lwz      r6, 0x50(r3)
	mtctr    r6
	cmpwi    r6, 0
	ble      lbl_8015B23C

lbl_8015B228:
	lwz      r0, 0x54(r5)
	cmpw     r0, r4
	beq      lbl_8015B270
	addi     r5, r5, 4
	bdnz     lbl_8015B228

lbl_8015B23C:
	slwi     r0, r6, 2
	add      r5, r3, r0
	stw      r4, 0x54(r5)
	lwz      r5, 0x50(r3)
	addi     r0, r5, 1
	stw      r0, 0x50(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8015B270
	bl       releasePikis__Q24Game4NaviFv

lbl_8015B270:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B280
 * Size:	00004C
 */
Navi* NaviMgr::getDeadOrima(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x50(r3)
	cmpw     r0, r4
	ble      lbl_8015B2B8
	lwz      r12, 0(r3)
	slwi     r0, r4, 2
	add      r4, r3, r0
	lwz      r12, 0x24(r12)
	lwz      r4, 0x54(r4)
	mtctr    r12
	bctrl
	b        lbl_8015B2BC

lbl_8015B2B8:
	li       r3, 0

lbl_8015B2BC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B2CC
 * Size:	0000EC
 */
Navi* NaviMgr::getAliveOrima(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r0, 0x50(r3)
	cmpwi    r0, 2
	bne      lbl_8015B2FC
	li       r3, 0
	b        lbl_8015B3A0

lbl_8015B2FC:
	cmpwi    r0, 1
	bne      lbl_8015B330
	lwz      r0, 0x54(r31)
	cmpwi    r30, 0
	subfic   r4, r0, 1
	bne      lbl_8015B328
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	b        lbl_8015B3A0

lbl_8015B328:
	li       r3, 0
	b        lbl_8015B3A0

lbl_8015B330:
	cmpwi    r0, 0
	bne      lbl_8015B39C
	lwz      r12, 0(r3)
	li       r4, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x278(r31)
	cmplwi   r0, 0
	beq      lbl_8015B380
	mr       r0, r31
	b        lbl_8015B388

lbl_8015B380:
	mr       r0, r3
	mr       r3, r31

lbl_8015B388:
	cmpwi    r30, 0
	bne      lbl_8015B3A0
	mr       r3, r0
	b        lbl_8015B3A0
	b        lbl_8015B3A0

lbl_8015B39C:
	li       r3, 0

lbl_8015B3A0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B3B8
 * Size:	0000A8
 */
void NaviMgr::setMovieDraw(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_8015B3F4
	lbz      r0, 0x5c(r28)
	ori      r0, r0, 1
	stb      r0, 0x5c(r28)
	b        lbl_8015B400

lbl_8015B3F4:
	lbz      r0, 0x5c(r28)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x5c(r28)

lbl_8015B400:
	li       r30, 0
	li       r31, 0
	b        lbl_8015B434

lbl_8015B40C:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015B42C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	bl       set_movie_draw__Q24Game4NaviFb

lbl_8015B42C:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015B434:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015B40C
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B460
 * Size:	0000E0
 */
void NaviMgr::doAnimation(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	lbz      r0, 0x5c(r3)
	clrlwi   r31, r0, 0x1f
	b        lbl_8015B514

lbl_8015B494:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015B50C
	cmplwi   r31, 0
	beq      lbl_8015B4CC
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B50C

lbl_8015B4CC:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015B50C:
	addi     r30, r30, 0x320
	addi     r29, r29, 1

lbl_8015B514:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015B494
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B540
 * Size:	000168
 */
void NaviMgr::doEntry(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	li       r29, 0
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8015B56C
	li       r29, 1

lbl_8015B56C:
	lbz      r0, 0x5c(r27)
	li       r28, 0
	li       r30, 0
	clrlwi   r31, r0, 0x1f
	b        lbl_8015B688

lbl_8015B580:
	lwz      r3, 0x2c(r27)
	lbzx     r0, r3, r28
	cmplwi   r0, 0
	bne      lbl_8015B680
	cmplwi   r31, 0
	beq      lbl_8015B5D4
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B5D4
	lwz      r5, 0x28(r27)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015B608

lbl_8015B5D4:
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B608
	lwz      r4, 0x28(r27)
	addi     r3, r30, 0xd8
	lbzx     r0, r4, r3
	ori      r0, r0, 0x34
	stbx     r0, r4, r3

lbl_8015B608:
	clrlwi.  r0, r29, 0x18
	beq      lbl_8015B668
	lwz      r0, 0x28(r27)
	add      r5, r0, r30
	lhz      r4, 0x2dc(r5)
	cmpwi    r4, 1
	bne      lbl_8015B644
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x38(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015B644
	lbz      r0, 0xd8(r5)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stb      r0, 0xd8(r5)
	b        lbl_8015B668

lbl_8015B644:
	cmpwi    r4, 0
	bne      lbl_8015B668
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lbz      r0, 0x38(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015B668
	lbz      r0, 0xd8(r5)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0xd8(r5)

lbl_8015B668:
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015B680:
	addi     r30, r30, 0x320
	addi     r28, r28, 1

lbl_8015B688:
	lwz      r0, 0x24(r27)
	cmpw     r28, r0
	blt      lbl_8015B580
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015B6A8
 * Size:	000378
 */
void NaviMgr::doSimulation(float)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	bl       "doSimulation__27MonoObjectMgr<Q24Game4Navi>Ff"
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_8015B6E4
	cmpwi    r0, 3
	bne      lbl_8015B6E8

lbl_8015B6E4:
	li       r3, 1

lbl_8015B6E8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015B6FC
	lwz      r0, 0x4c(r31)
	cmplwi   r0, 0
	beq      lbl_8015B91C

lbl_8015B6FC:
	li       r0, 0
	lis      r3, "__vt__22Iterator<Q24Game4Navi>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r0, 0x14(r1)
	cmplwi   r0, 0
	stw      r3, 8(r1)
	stw      r0, 0xc(r1)
	stw      r31, 0x10(r1)
	bne      lbl_8015B73C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8F0

lbl_8015B73C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B7AC

lbl_8015B758:
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
	bne      lbl_8015B8F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015B7AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B758
	b        lbl_8015B8F0

lbl_8015B7CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r30, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B824
	lfs      f1, 0x2a0(r30)
	lfs      f0, lbl_80518674@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8015B824
	lhz      r0, 0x2dc(r30)
	lwz      r3, 0x4c(r31)
	clrlwi   r4, r0, 0x18
	bl       directOn__Q23PSM15DirectorUpdatorFUc
	b        lbl_8015B834

lbl_8015B824:
	lhz      r0, 0x2dc(r30)
	lwz      r3, 0x4c(r31)
	clrlwi   r4, r0, 0x18
	bl       directOff__Q23PSM15DirectorUpdatorFUc

lbl_8015B834:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015B860
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8F0

lbl_8015B860:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015B8D4

lbl_8015B880:
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
	bne      lbl_8015B8F0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015B8D4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015B880

lbl_8015B8F0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015B7CC
	lwz      r3, 0x4c(r31)
	bl       frameEndWork__Q23PSM15DirectorUpdatorFv
	b        lbl_8015BA04

lbl_8015B91C:
	bl       PSMGetLifeD__Fv
	or.      r29, r3, r3
	beq      lbl_8015BA04
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	mr       r30, r3
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	bne      lbl_8015B978
	cmplwi   r3, 0
	bne      lbl_8015B978
	li       r30, 0
	b        lbl_8015B9A0

lbl_8015B978:
	lwz      r0, 0x278(r30)
	cmplwi   r0, 0
	beq      lbl_8015B988
	b        lbl_8015B9A0

lbl_8015B988:
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_8015B99C
	mr       r30, r3
	b        lbl_8015B9A0

lbl_8015B99C:
	li       r30, 0

lbl_8015B9A0:
	cmplwi   r30, 0
	beq      lbl_8015B9F0
	mr       r3, r30
	bl       getLifeRatio__Q24Game4NaviFv
	lfs      f0, lbl_80518674@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8015B9D8
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8015BA04

lbl_8015B9D8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_8015BA04

lbl_8015B9F0:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015BA04:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
unknown NaviMgr::draw2d(J2DGrafContext&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015BA20
 * Size:	000004
 */
void NaviMgr::setupSoundViewerAndBas(void) { }

/*
 * --INFO--
 * Address:	8015BA24
 * Size:	000008
 */
char* NaviMgr::getMgrName()
{
	/*
	addi     r3, r2, lbl_80518750@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BA2C
 * Size:	000008
 */
bool NaviMgr::frozenable() { return false; }

} // namespace Game

/*
 * --INFO--
 * Address:	8015BA34
 * Size:	000070
 */
void Container<Game::Navi>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015BA88
	lis      r4, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Navi>"@l
	stw      r0, 0(r30)
	beq      lbl_8015BA78
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015BA78:
	extsh.   r0, r31
	ble      lbl_8015BA88
	mr       r3, r30
	bl       __dl__FPv

lbl_8015BA88:
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
 * Address:	8015BAA4
 * Size:	000088
 */
void ObjectMgr<Game::Navi>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015BB10
	lis      r4, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015BB00
	lis      r4, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Navi>"@l
	stw      r0, 0(r30)
	beq      lbl_8015BB00
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015BB00:
	extsh.   r0, r31
	ble      lbl_8015BB10
	mr       r3, r30
	bl       __dl__FPv

lbl_8015BB10:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8015BB2C
 * Size:	000044
 */
void FakePikiParms::read(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       read__10ParametersFR6Stream
	mr       r4, r31
	addi     r3, r30, 0xdc
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8015BB70
 * Size:	000060
 */
void MonoObjectMgr<Game::Navi>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__27MonoObjectMgr<Q24Game4Navi>Fv"
	cmpwi    r3, -1
	beq      lbl_8015BBB8
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x320
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_8015BBBC

lbl_8015BBB8:
	li       r3, 0

lbl_8015BBBC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BBD0
 * Size:	000040
 */
void MonoObjectMgr<Game::Navi>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_8015BC08

lbl_8015BBE8:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_8015BC00
	mr       r3, r6
	blr

lbl_8015BC00:
	addi     r6, r6, 1
	bdnz     lbl_8015BBE8

lbl_8015BC08:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC10
 * Size:	000030
 */
void MonoObjectMgr<Game::Navi>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC40
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC48
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BC50
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8015BCA8

lbl_8015BC78:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BCA0
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015BCA0:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BCA8:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BC78
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
 * Address:	8015BCD0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8015BD28

lbl_8015BCF8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BD20
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015BD20:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BD28:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BCF8
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
 * Address:	8015BD50
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015BDB4

lbl_8015BD80:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BDAC
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_8015BDAC:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BDB4:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015BD80
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BDE0
 * Size:	000080
 */
void MonoObjectMgr<Game::Navi>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_8015BE38

lbl_8015BE08:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BE30
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_8015BE30:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BE38:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BE08
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
 * Address:	8015BE60
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_8015BEC4

lbl_8015BE90:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BEBC
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_8015BEBC:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BEC4:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_8015BE90
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BEF0
 * Size:	000090
 */
void MonoObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_8015BF54

lbl_8015BF20:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015BF4C
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_8015BF4C:
	addi     r31, r31, 0x320
	addi     r30, r30, 1

lbl_8015BF54:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015BF20
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BF80
 * Size:	000018
 */
void MonoObjectMgr<Game::Navi>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BF98
 * Size:	000030
 */
void MonoObjectMgr<Game::Navi>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_8015BFB8

lbl_8015BFAC:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_8015BFB8:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_8015BFAC
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015BFC8
 * Size:	00003C
 */
void MonoObjectMgr<Game::Navi>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8015BFFC

lbl_8015BFDC:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_8015BFF4
	mr       r3, r5
	blr

lbl_8015BFF4:
	addi     r5, r5, 1
	bdnz     lbl_8015BFDC

lbl_8015BFFC:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C004
 * Size:	000010
 */
void MonoObjectMgr<Game::Navi>::get(void*)
{
	/*
	mulli    r0, r4, 0x320
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C014
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C05C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1C8

lbl_8015C05C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C0C8

lbl_8015C074:
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
	bne      lbl_8015C1C8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C0C8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C074
	b        lbl_8015C1C8

lbl_8015C0E8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C138
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1C8

lbl_8015C138:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C1AC

lbl_8015C158:
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
	bne      lbl_8015C1C8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C1AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C158

lbl_8015C1C8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C0E8
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C1F8
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C240
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C3AC

lbl_8015C240:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C2AC

lbl_8015C258:
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
	bne      lbl_8015C3AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C2AC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C258
	b        lbl_8015C3AC

lbl_8015C2CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C31C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C3AC

lbl_8015C31C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C390

lbl_8015C33C:
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
	bne      lbl_8015C3AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C390:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C33C

lbl_8015C3AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C2CC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C3DC
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C42C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C59C

lbl_8015C42C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C498

lbl_8015C444:
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
	bne      lbl_8015C59C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C498:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C444
	b        lbl_8015C59C

lbl_8015C4B8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C50C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C59C

lbl_8015C50C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C580

lbl_8015C52C:
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
	bne      lbl_8015C59C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C580:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C52C

lbl_8015C59C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C4B8
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C5D0
 * Size:	0001E4
 */
void ObjectMgr<Game::Navi>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C618
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C784

lbl_8015C618:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C684

lbl_8015C630:
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
	bne      lbl_8015C784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C684:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C630
	b        lbl_8015C784

lbl_8015C6A4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C6F4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C784

lbl_8015C6F4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C768

lbl_8015C714:
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
	bne      lbl_8015C784
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C768:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C714

lbl_8015C784:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C6A4
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C7B4
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Navi>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C804
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C974

lbl_8015C804:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C870

lbl_8015C81C:
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
	bne      lbl_8015C974
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C870:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C81C
	b        lbl_8015C974

lbl_8015C890:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015C8E4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C974

lbl_8015C8E4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015C958

lbl_8015C904:
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
	bne      lbl_8015C974
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015C958:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015C904

lbl_8015C974:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015C890
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015C9A8
 * Size:	0001F4
 */
void ObjectMgr<Game::Navi>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8015C9F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB68

lbl_8015C9F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CA64

lbl_8015CA10:
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
	bne      lbl_8015CB68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015CA64:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015CA10
	b        lbl_8015CB68

lbl_8015CA84:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8015CAD8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB68

lbl_8015CAD8:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8015CB4C

lbl_8015CAF8:
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
	bne      lbl_8015CB68
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8015CB4C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015CAF8

lbl_8015CB68:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8015CA84
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015CB9C
 * Size:	00002C
 */
void Container<Game::Navi>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015CBC8
 * Size:	000008
 */
u32 Container<Game::Navi>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8015CBD0
 * Size:	000008
 */
u32 Container<Game::Navi>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8015CBD8
 * Size:	00009C
 */
void MonoObjectMgr<Game::Navi>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<Q24Game4Navi>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__23Container<Q24Game4Navi>"@l
	lis      r4, "__vt__23ObjectMgr<Q24Game4Navi>"@ha
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__23ObjectMgr<Q24Game4Navi>"@l
	addi     r5, r3, "__vt__27MonoObjectMgr<Q24Game4Navi>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015CC74
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__27MonoObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CC7C
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__27MonoObjectMgr<Q24Game4Navi>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8015CC84
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__27MonoObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CC8C
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__27MonoObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CC94
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__23ObjectMgr<Q24Game4Navi>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8015CC9C
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__23ObjectMgr<Q24Game4Navi>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8015CCA4
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__23ObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CCAC
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__23ObjectMgr<Q24Game4Navi>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8015CCB4
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__23ObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CCBC
 * Size:	000008
 */
void ObjectMgr<Game::Navi>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__23ObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CCC4
 * Size:	000008
 */
void @28 @Game::NaviMgr::frozenable(void)
{
	/*
	addi     r3, r3, -28
	b        frozenable__Q24Game7NaviMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8015CCCC
 * Size:	000008
 */
void @28 @Game::NaviMgr::resetMgr(void)
{
	/*
	addi     r3, r3, -28
	b        resetMgr__Q24Game7NaviMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8015CCD4
 * Size:	000008
 */
void @28 @Game::NaviMgr::loadResources(void)
{
	/*
	addi     r3, r3, -28
	b        loadResources__Q24Game7NaviMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8015CCDC
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__27MonoObjectMgr<Q24Game4Navi>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	8015CCE4
 * Size:	000008
 */
void @28 @Game::NaviMgr::doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        doSimulation__Q24Game7NaviMgrFf
	*/
}

/*
 * --INFO--
 * Address:	8015CCEC
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__27MonoObjectMgr<Q24Game4Navi>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8015CCF4
 * Size:	000008
 */
void MonoObjectMgr<Game::Navi>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__27MonoObjectMgr<Q24Game4Navi>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8015CCFC
 * Size:	000008
 */
void @28 @Game::NaviMgr::doEntry(void)
{
	/*
	addi     r3, r3, -28
	b        doEntry__Q24Game7NaviMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8015CD04
 * Size:	000008
 */
void @28 @Game::NaviMgr::doAnimation(void)
{
	/*
	addi     r3, r3, -28
	b        doAnimation__Q24Game7NaviMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8015CD0C
 * Size:	000008
 */
@48 @Game::NaviMgr::~NaviMgr(void)
{
	/*
	addi     r3, r3, -48
	b        __dt__Q24Game7NaviMgrFv
	*/
}
