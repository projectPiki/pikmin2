#include "Game/Piki.h"
#include "JSystem/JUT/JUTException.h"
#include "types.h"
#include "Game/PikiMgr.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_pikiMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047D7A0
    lbl_8047D7A0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x50696B69
        .4byte 0x3A3A5061
        .4byte 0x726D7300
        .4byte 0x95E082AD
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x919682E9
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x89D48373
        .4byte 0x834C8358
        .4byte 0x8373815B
        .4byte 0x83680000
        .4byte 0x82C282DA
        .4byte 0x82DD8358
        .4byte 0x8373815B
        .4byte 0x83680000
        .4byte 0x8373834C
        .4byte 0x955C8EA6
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x95578F80
        .4byte 0x83898343
        .4byte 0x83740000
        .4byte 0x82CC82C1
        .4byte 0x82DB8389
        .4byte 0x83438374
        .4byte 0x00000000
        .4byte 0x82C582D4
        .4byte 0x83898343
        .4byte 0x83740000
        .4byte 0x90C2208D
        .4byte 0x558C8297
        .4byte 0xCD000000
        .4byte 0x90D4208D
        .4byte 0x558C8297
        .4byte 0xCD000000
        .4byte 0x89A9208D
        .4byte 0x558C8297
        .4byte 0xCD000000
        .4byte 0x8D958140
        .4byte 0x8D558C82
        .4byte 0x97CD0000
        .4byte 0x94928140
        .4byte 0x8D558C82
        .4byte 0x97CD0000
        .4byte 0x82C282DA
        .4byte 0x82DD82C9
        .4byte 0x954B9776
        .4byte 0x82C88347
        .4byte 0x836C838B
        .4byte 0x834D815B
        .4byte 0x90940000
        .4byte 0x89D482C9
        .4byte 0x954B9776
        .4byte 0x82C88347
        .4byte 0x836C838B
        .4byte 0x834D815B
        .4byte 0x90940000
        .4byte 0x836D815B
        .4byte 0x837D838B
        .4byte 0x8373834C
        .4byte 0x82CC8358
        .4byte 0x8350815B
        .4byte 0x838B0000
        .4byte 0x82CC82C1
        .4byte 0x82DB8373
        .4byte 0x834C82CC
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x82D382C6
        .4byte 0x82C182BF
        .4byte 0x82E58373
        .4byte 0x834C82CC
        .4byte 0x83588350
        .4byte 0x815B838B
        .4byte 0x00000000
        .4byte 0x82C282D4
        .4byte 0x82EA918D
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x82D882C1
        .4byte 0x82BD82F1
        .4byte 0x82B18E9E
        .4byte 0x8AD40000
        .4byte 0x57617665
        .4byte 0x20417474
        .4byte 0x6163208D
        .4byte 0x558C8294
        .4byte 0xCD88CD00
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
        .4byte 0x939682BD
        .4byte 0x82E88354
        .4byte 0x83438359
        .4byte 0x286D696E
        .4byte 0x29000000
        .4byte 0x939682BD
        .4byte 0x82E88354
        .4byte 0x83438359
        .4byte 0x286D6178
        .4byte 0x29000000
        .4byte 0x8F6482B3
        .4byte 0x82CC8B74
        .4byte 0x90940000
        .4byte 0x926E96CA
        .4byte 0x939682BD
        .4byte 0x82E88354
        .4byte 0x83438359
        .4byte 0x00000000
        .4byte 0x77686974
        .4byte 0x65208B97
        .4byte 0x97A30000
        .4byte 0x67726179
        .4byte 0x208B9797
        .4byte 0xA3000000
        .4byte 0x96C08E71
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x77686974
        .4byte 0x65208B97
        .4byte 0x97A32846
        .4byte 0x72656529
        .4byte 0x00000000
        .4byte 0x67726179
        .4byte 0x208B9797
        .4byte 0xA3284672
        .4byte 0x65652900
        .4byte 0x95C782F0
        .4byte 0x899F82B5
        .4byte 0x8E6E82DF
        .4byte 0x82E98E9E
        .4byte 0x8AD42844
        .4byte 0x796E616D
        .4byte 0x69632900
        .4byte 0x95C782F0
        .4byte 0x899F82B5
        .4byte 0x8E6E82DF
        .4byte 0x82E98E9E
        .4byte 0x8AD42853
        .4byte 0x74617469
        .4byte 0x63290000
        .4byte 0x8374838A
        .4byte 0x815B82C9
        .4byte 0x82C882E9
        .4byte 0x82DC82C5
        .4byte 0x82CC8E9E
        .4byte 0x8AD40000
        .4byte 0x934782CC
        .4byte 0x8354815B
        .4byte 0x83608347
        .4byte 0x838A8341
        .4byte 0x00000000
        .4byte 0x50656C6C
        .4byte 0x657482CC
        .4byte 0x8354815B
        .4byte 0x83608347
        .4byte 0x838A8341
        .4byte 0x00000000
        .4byte 0x945F8D6B
        .4byte 0x8AE282CC
        .4byte 0x8354815B
        .4byte 0x83608347
        .4byte 0x838A8341
        .4byte 0x00000000
        .4byte 0x8BB482CC
        .4byte 0x8354815B
        .4byte 0x83608347
        .4byte 0x838A8341
        .4byte 0x00000000
        .4byte 0x89F382B7
        .4byte 0x8AE282CC
        .4byte 0x8354815B
        .4byte 0x83608347
        .4byte 0x838A8341
        .4byte 0x00000000
        .4byte 0x8C4082E8
        .4byte 0x8F6F82B5
        .4byte 0x95A88354
        .4byte 0x815B8360
        .4byte 0x8347838A
        .4byte 0x83410000
        .4byte 0x945F8D6B
        .4byte 0x904195A8
        .4byte 0x82CC8354
        .4byte 0x815B8360
        .4byte 0x8347838A
        .4byte 0x83410000
        .4byte 0x82CD82B6
        .4byte 0x82A982EA
        .4byte 0x82C48B4E
        .4byte 0x82AB82E9
        .4byte 0x82DC82C5
        .4byte 0x82CC8DC5
        .4byte 0x92B78E9E
        .4byte 0x8AD40000
        .4byte 0x82CD82B6
        .4byte 0x82A982EA
        .4byte 0x82C48B4E
        .4byte 0x82AB82E9
        .4byte 0x82DC82C5
        .4byte 0x82CC8DC5
        .4byte 0x8FAC8E9E
        .4byte 0x8AD40000
        .4byte 0x6C656166
        .4byte 0x2D3E6275
        .4byte 0x64202020
        .4byte 0x2082CC8E
        .4byte 0x9E8AD481
        .4byte 0x69956281
        .4byte 0x6A000000
        .4byte 0x6275642D
        .4byte 0x3E666C6F
        .4byte 0x77657220
        .4byte 0x2082CC8E
        .4byte 0x9E8AD481
        .4byte 0x69956281
        .4byte 0x6A000000
        .4byte 0x666C6F77
        .4byte 0x65722D3E
        .4byte 0x73656564
        .4byte 0x2082CC8E
        .4byte 0x9E8AD481
        .4byte 0x69956281
        .4byte 0x6A000000
        .4byte 0x73656564
        .4byte 0x2D3E6C65
        .4byte 0x61662020
        .4byte 0x2082CC8E
        .4byte 0x9E8AD481
        .4byte 0x69956281
        .4byte 0x6A000000
        .4byte 0x89D48373
        .4byte 0x834C8F64
        .4byte 0x97CD97A6
        .4byte 0x00000000
        .4byte 0x74616E65
        .4byte 0x75705469
        .4byte 0x6D658169
        .4byte 0x9562816A
        .4byte 0x00000000
        .4byte 0x68617475
        .4byte 0x67615469
        .4byte 0x6D658169
        .4byte 0x9562816A
        .4byte 0x00000000
        .4byte 0x67726F77
        .4byte 0x75705469
        .4byte 0x6D658169
        .4byte 0x9562816A
        .4byte 0x00000000
        .4byte 0x6B617265
        .4byte 0x54696D65
        .4byte 0x81699562
        .4byte 0x816A0000
        .4byte 0x72656269
        .4byte 0x72746854
        .4byte 0x696D6581
        .4byte 0x69956281
        .4byte 0x6A000000
        .4byte 0x89CE82C9
        .4byte 0x95EF82DC
        .4byte 0x82EA82C4
        .4byte 0x8E8082CA
        .4byte 0x82DC82C5
        .4byte 0x82CC8E9E
        .4byte 0x8AD40000
        .4byte 0x89D48373
        .4byte 0x834C82AA
        .4byte 0x8EED82C6
        .4byte 0x82B582C4
        .4byte 0x8DC490B6
        .4byte 0x82B782E9
        .4byte 0x8A6D97A6
        .4byte 0x00000000
        .4byte 0x949A94AD
        .4byte 0x82DC82C5
        .4byte 0x82CC8E9E
        .4byte 0x8AD40000
        .4byte 0x949A9265
        .4byte 0x8CF889CA
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x949A9265
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x97CA2090
        .4byte 0x8596E500
        .4byte 0x949A9265
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x204F7269
        .4byte 0x6D610000
        .4byte 0x949A9265
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x2054656B
        .4byte 0x69000000
        .4byte 0x949A9265
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x2050696B
        .4byte 0x69000000
        .4byte 0x93FA9676
        .4byte 0x90B682AB
        .4byte 0x8E6382E8
        .4byte 0x94CD88CD
        .4byte 0x00000000
        .4byte 0x91E097F1
        .4byte 0x8B4E93AE
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x82A882DA
        .4byte 0x82EA8374
        .4byte 0x838C815B
        .4byte 0x83809094
        .4byte 0x00000000
        .4byte 0x82A882DA
        .4byte 0x82EA8374
        .4byte 0x838C815B
        .4byte 0x83809094
        .4byte 0x816982CE
        .4byte 0x82E782C2
        .4byte 0x82AB816A
        .4byte 0x00000000
        .4byte 0x95C7899F
        .4byte 0x82B582A0
        .4byte 0x82AB82E7
        .4byte 0x82DF8E9E
        .4byte 0x8AD40000
        .4byte 0x424F4D42
        .4byte 0x20835481
        .4byte 0x5B83608B
        .4byte 0x9797A300
        .4byte 0x424F4D42
        .4byte 0x20746872
        .4byte 0x6F77204D
        .4byte 0x696E0000
        .4byte 0x424F4D42
        .4byte 0x20746872
        .4byte 0x6F77204D
        .4byte 0x61780000
        .4byte 0x424F4D42
        .4byte 0x20927582
        .4byte 0xAB93A682
        .4byte 0xB08E9E8A
        .4byte 0xD4000000
        .4byte 0x424F4D42
        .4byte 0x20938A82
        .4byte 0xB0835883
        .4byte 0x73815B83
        .4byte 0x68000000
        .4byte 0x424F4D42
        .4byte 0x208C788D
        .4byte 0x9094CD88
        .4byte 0xCD000000
        .4byte 0x424F4D42
        .4byte 0x208AD481
        .4byte 0x41835E83
        .4byte 0x43838000
        .4byte 0x424F4D42
        .4byte 0x20835A83
        .4byte 0x6283678B
        .4byte 0x9797A300
        .4byte 0x90569046
        .4byte 0x82CC8358
        .4byte 0x8350815B
        .4byte 0x838B0000
        .4byte 0x94928358
        .4byte 0x8373815B
        .4byte 0x8368947B
        .4byte 0x97A60000
        .4byte 0x8D958358
        .4byte 0x8373815B
        .4byte 0x8368947B
        .4byte 0x97A60000
        .4byte 0x8D958140
        .4byte 0x895E94C0
        .4byte 0x945C97CD
        .4byte 0x00000000
        .4byte 0x94928140
        .4byte 0x895E94C0
        .4byte 0x945C97CD
        .4byte 0x00000000
        .4byte 0x82C282DA
        .4byte 0x82DD7C89
        .4byte 0x5E94C083
        .4byte 0x7B815B83
        .4byte 0x69835800
        .4byte 0x82CD82C8
        .4byte 0x7C895E94
        .4byte 0xC0837B81
        .4byte 0x5B836983
        .4byte 0x58000000
        .4byte 0x895E94C0
        .4byte 0x204D4158
        .4byte 0x20464143
        .4byte 0x544F5200
        .4byte 0x8368815B
        .4byte 0x83738393
        .4byte 0x834F8E9D
        .4byte 0x91B18E9E
        .4byte 0x8AD40000
        .4byte 0x8368815B
        .4byte 0x83738393
        .4byte 0x834F8373
        .4byte 0x834C208D
        .4byte 0x558C8200
        .4byte 0x8368815B
        .4byte 0x83738393
        .4byte 0x834F8373
        .4byte 0x834C2083
        .4byte 0x58837381
        .4byte 0x5B836800
        .4byte 0x834E8389
        .4byte 0x83518FC1
        .4byte 0x89BB8E9E
        .4byte 0x8AD40000
        .4byte 0x83688356
        .4byte 0x839394BC
        .4byte 0x8C610000
        .4byte 0x8D958371
        .4byte 0x83628376
        .4byte 0x8341835E
        .4byte 0x8362834E
        .4byte 0x835F8381
        .4byte 0x815B8357
        .4byte 0x00000000
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
    .global lbl_8047DFB8
    lbl_8047DFB8:
        .4byte 0x70696B69
        .4byte 0x4D67722E
        .4byte 0x63707000
        .4byte 0x77686F20
        .4byte 0x75736520
        .4byte 0x74686973
        .4byte 0x203F3F0A
        .4byte 0x00000000
    .global lbl_8047DFD8
    lbl_8047DFD8:
        .4byte 0x75736572
        .4byte 0x2F416265
        .4byte 0x2F70696B
        .4byte 0x692F7069
        .4byte 0x6B695061
        .4byte 0x726D732E
        .4byte 0x74787400
        .4byte 0x2F757365
        .4byte 0x722F4B61
        .4byte 0x6E646F2F
        .4byte 0x70696B69
        .4byte 0x2F70696B
        .4byte 0x69732E73
        .4byte 0x7A730000
        .4byte 0x70696B69
        .4byte 0x732E737A
        .4byte 0x73206E6F
        .4byte 0x7420666F
        .4byte 0x756E6420
        .4byte 0x210A0000
        .4byte 0x70696B69
        .4byte 0x5F70325F
        .4byte 0x626C7565
        .4byte 0x00000000
        .4byte 0x70696B69
        .4byte 0x5F70325F
        .4byte 0x72656400
        .4byte 0x70696B69
        .4byte 0x5F70325F
        .4byte 0x79656C6C
        .4byte 0x6F770000
        .4byte 0x70696B69
        .4byte 0x5F70325F
        .4byte 0x77686974
        .4byte 0x65000000
        .4byte 0x70696B69
        .4byte 0x5F70325F
        .4byte 0x626C6163
        .4byte 0x6B000000
        .4byte 0x70696B69
        .4byte 0x5F6B6F63
        .4byte 0x68617070
        .4byte 0x79000000
        .4byte 0x70696B69
        .4byte 0x5F6E696E
        .4byte 0x6A696E00
        .4byte 0x68617070
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x6C656166
        .4byte 0x2E626D64
        .4byte 0x00000000
        .4byte 0x68617070
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x6275642E
        .4byte 0x626D6400
        .4byte 0x68617070
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x666C6F77
        .4byte 0x65722E62
        .4byte 0x6D640000
        .4byte 0x68617070
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x6275645F
        .4byte 0x7265642E
        .4byte 0x626D6400
        .4byte 0x68617070
        .4byte 0x615F6D6F
        .4byte 0x64656C2F
        .4byte 0x666C6F77
        .4byte 0x65725F72
        .4byte 0x65642E62
        .4byte 0x6D640000
        .4byte 0x70696B6D
        .4byte 0x696E2D4D
        .4byte 0x6F64656C
        .4byte 0x4D677200
    .global lbl_8047E118
    lbl_8047E118:
        .4byte 0x70696B69
        .4byte 0x5F6D6F64
        .4byte 0x656C2F25
        .4byte 0x732E626D
        .4byte 0x64000000
    .global lbl_8047E12C
    lbl_8047E12C:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047E138
    lbl_8047E138:
        .4byte 0x50696B69
        .4byte 0x436F6E74
        .4byte 0x61696E65
        .4byte 0x72000000
    .global lbl_8047E148
    lbl_8047E148:
        .4byte 0x63617665
        .4byte 0x53617665
        .4byte 0x466F726D
        .4byte 0x6174696F
        .4byte 0x6E50696B
        .4byte 0x6D696E73
        .4byte 0x00000000
    .global lbl_8047E164
    lbl_8047E164:
        .4byte 0x73617665
        .4byte 0x416C6C50
        .4byte 0x696B6D69
        .4byte 0x6E730000
        .4byte 0x50696B69
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B1698
    lbl_804B1698:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_804B16A4
    lbl_804B16A4:
        .4byte 0x00000000
        .4byte 0xFFFFFFFF
        .4byte createModelCallback__Q24Game7PikiMgrFPQ28SysShape5Model
    .global "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>"
    "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>":
        .4byte 0
        .4byte 0
        .4byte
   "invoke__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>FPQ28SysShape5Model"
    .global "__vt__30IDelegate1<PQ28SysShape5Model>"
    "__vt__30IDelegate1<PQ28SysShape5Model>":
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q24Game7PikiMgr
    __vt__Q24Game7PikiMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game7PikiMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Piki>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__Q24Game7PikiMgrFv"
        .4byte "@28@doEntry__Q24Game7PikiMgrFv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte "@28@doSimpleDraw__Q24Game7PikiMgrFP8Viewport"
        .4byte "@28@loadResources__Q24Game7PikiMgrFv"
        .4byte "@28@resetMgr__Q24Game7PikiMgrFv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte "@28@getMatrixLoadType__Q24Game7PikiMgrFv"
        .4byte doAnimation__Q24Game7PikiMgrFv
        .4byte doEntry__Q24Game7PikiMgrFv
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte birth__Q24Game7PikiMgrFv
        .4byte resetMgr__Q24Game7PikiMgrFv
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte onAlloc__Q24Game7PikiMgrFv
        .4byte doSimpleDraw__Q24Game7PikiMgrFP8Viewport
        .4byte getMatrixLoadType__Q24Game7PikiMgrFv
        .4byte getMgrName__Q24Game7PikiMgrFv
        .4byte loadResources__Q24Game7PikiMgrFv
        .4byte loadResources__Q24Game7PikiMgrFi
    .global "__vt__23Container<Q24Game4Piki>"
    "__vt__23Container<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte "__dt__23Container<Q24Game4Piki>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Piki>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__23Container<Q24Game4Piki>Fi"
        .4byte "getTo__23Container<Q24Game4Piki>Fv"
    .global "__vt__23ObjectMgr<Q24Game4Piki>"
    "__vt__23ObjectMgr<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte "__dt__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Piki>FPv"
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte 0
        .4byte "getAt__23Container<Q24Game4Piki>Fi"
        .4byte "getTo__23Container<Q24Game4Piki>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doEntry__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSetView__23ObjectMgr<Q24Game4Piki>Fi"
        .4byte "@28@doViewCalc__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSimulation__23ObjectMgr<Q24Game4Piki>Ff"
        .4byte "@28@doDirectDraw__23ObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte resetMgr__16GenericObjectMgrFv
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "doEntry__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSetView__23ObjectMgr<Q24Game4Piki>Fi"
        .4byte "doViewCalc__23ObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSimulation__23ObjectMgr<Q24Game4Piki>Ff"
        .4byte "doDirectDraw__23ObjectMgr<Q24Game4Piki>FR8Graphics"
    .global "__vt__27MonoObjectMgr<Q24Game4Piki>"
    "__vt__27MonoObjectMgr<Q24Game4Piki>":
        .4byte 0
        .4byte 0
        .4byte "__dt__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte getChildCount__5CNodeFv
        .4byte "getObject__23Container<Q24Game4Piki>FPv"
        .4byte "getNext__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getStart__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "getEnd__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "get__27MonoObjectMgr<Q24Game4Piki>FPv"
        .4byte "getAt__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "getTo__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte 0
        .4byte 0
        .4byte "@28@doAnimation__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doEntry__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "@28@doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "@28@doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "@28@doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
        .4byte loadResources__16GenericObjectMgrFv
        .4byte "@28@resetMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte pausable__16GenericObjectMgrFv
        .4byte frozenable__16GenericObjectMgrFv
        .4byte getMatrixLoadType__16GenericObjectMgrFv
        .4byte "doAnimation__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "doEntry__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
        .4byte "doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
        .4byte "doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
        .4byte "birth__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "resetMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "clearMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
        .4byte "onAlloc__27MonoObjectMgr<Q24Game4Piki>Fv"
    .global __vt__Q24Game9PikiParms
    __vt__Q24Game9PikiParms:
        .4byte 0
        .4byte 0
        .4byte read__Q24Game9PikiParmsFR6Stream

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515968
    lbl_80515968:
        .skip 0x4
    .global lbl_8051596C
    lbl_8051596C:
        .skip 0x4
    .global throwPikiDebug__Q24Game7PikiMgr
    throwPikiDebug__Q24Game7PikiMgr:
        .skip 0x4
    .global pikiMgr__4Game
    pikiMgr__4Game:
        .skip 0x4
    .global mBirthMode__Q24Game7PikiMgr
    mBirthMode__Q24Game7PikiMgr:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518758
    lbl_80518758:
        .4byte 0x70696B69
        .4byte 0x4D677200
    .global lbl_80518760
    lbl_80518760:
        .float 0.1
    .global lbl_80518764
    lbl_80518764:
        .4byte 0x3F4CCCCD
    .global lbl_80518768
    lbl_80518768:
        .4byte 0x3E0F5C29
    .global lbl_8051876C
    lbl_8051876C:
        .4byte 0x42A80000
    .global lbl_80518770
    lbl_80518770:
        .4byte 0x00000000
    .global lbl_80518774
    lbl_80518774:
        .4byte 0x43FA0000
    .global lbl_80518778
    lbl_80518778:
        .4byte 0x42F00000
    .global lbl_8051877C
    lbl_8051877C:
        .4byte 0x432A0000
    .global lbl_80518780
    lbl_80518780:
        .4byte 0x430C0000
    .global lbl_80518784
    lbl_80518784:
        .float 1.0
    .global lbl_80518788
    lbl_80518788:
        .4byte 0x41200000
    .global lbl_8051878C
    lbl_8051878C:
        .4byte 0x42C80000
    .global lbl_80518790
    lbl_80518790:
        .4byte 0x447A0000
    .global lbl_80518794
    lbl_80518794:
        .4byte 0x43160000
    .global lbl_80518798
    lbl_80518798:
        .4byte 0x43480000
    .global lbl_8051879C
    lbl_8051879C:
        .4byte 0x41700000
    .global lbl_805187A0
    lbl_805187A0:
        .4byte 0x41F00000
    .global lbl_805187A4
    lbl_805187A4:
        .4byte 0x40000000
    .global lbl_805187A8
    lbl_805187A8:
        .4byte 0x3FC00000
    .global lbl_805187AC
    lbl_805187AC:
        .4byte 0x3F99999A
    .global lbl_805187B0
    lbl_805187B0:
        .4byte 0x40A00000
    .global lbl_805187B4
    lbl_805187B4:
        .4byte 0x40400000
    .global lbl_805187B8
    lbl_805187B8:
        .4byte 0x94678E9E
        .4byte 0x8AD40000
    .global lbl_805187C0
    lbl_805187C0:
        .4byte 0x42200000
    .global lbl_805187C4
    lbl_805187C4:
        .4byte 0x420C0000
    .global lbl_805187C8
    lbl_805187C8:
        .4byte 0x428C0000
    .global lbl_805187CC
    lbl_805187CC:
        .4byte 0x43200000
    .global lbl_805187D0
    lbl_805187D0:
        .4byte 0x43960000
    .global lbl_805187D4
    lbl_805187D4:
        .4byte 0x42700000
    .global lbl_805187D8
    lbl_805187D8:
        .4byte 0x40C00000
    .global lbl_805187DC
    lbl_805187DC:
        .4byte 0x44FA0000
    .global lbl_805187E0
    lbl_805187E0:
        .4byte 0x41000000
    .global lbl_805187E4
    lbl_805187E4:
        .4byte 0x44160000
    .global lbl_805187E8
    lbl_805187E8:
        .4byte 0x461C4000
    .global lbl_805187EC
    lbl_805187EC:
        .4byte 0x44480000
    .global lbl_805187F0
    lbl_805187F0:
        .4byte 0x3F19999A
    .global lbl_805187F4
    lbl_805187F4:
        .4byte 0x44870000
    .global lbl_805187F8
    lbl_805187F8:
        .float 0.7
    .global lbl_805187FC
    lbl_805187FC:
        .4byte 0x3C23D70A
    .global lbl_80518800
    lbl_80518800:
        .4byte 0x40800000
    .global lbl_80518804
    lbl_80518804:
        .4byte 0x42480000
    .global lbl_80518808
    lbl_80518808:
        .4byte 0x443F4000
    .global lbl_8051880C
    lbl_8051880C:
        .4byte 0x459C4000
    .global lbl_80518810
    lbl_80518810:
        .4byte 0x437A0000
    .global lbl_80518814
    lbl_80518814:
        .4byte 0x42DC0000
    .global lbl_80518818
    lbl_80518818:
        .4byte 0x3F266666
    .global lbl_8051881C
    lbl_8051881C:
        .float 0.5
    .global lbl_80518820
    lbl_80518820:
        .4byte 0x3EB33333
    .global lbl_80518824
    lbl_80518824:
        .4byte 0x41C80000
    .global lbl_80518828
    lbl_80518828:
        .4byte 0x433E0000
    .global lbl_8051882C
    lbl_8051882C:
        .4byte 0x435C0000
    .global lbl_80518830
    lbl_80518830:
        .4byte 0x41800000
    .global lbl_80518834
    lbl_80518834:
        .4byte 0x646F6150
        .4byte 0x494B4900
    .global lbl_8051883C
    lbl_8051883C:
        .4byte 0x47000000
    .global lbl_80518840
    lbl_80518840:
        .4byte 0x40C90FDB
        .4byte 0x00000000
    .global lbl_80518848
    lbl_80518848:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80518850
    lbl_80518850:
        .4byte 0x42040000
    .global lbl_80518854
    lbl_80518854:
        .4byte 0x48089900
    .global lbl_80518858
    lbl_80518858:
        .4byte 0x50696B69
        .4byte 0x4D677200
*/

namespace Game {

/*
 * --INFO--
 * Address:	8015CD14
 * Size:	0000B4
 */
PikiMgr::PikiMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "__ct__27MonoObjectMgr<Q24Game4Piki>Fv"
	lis      r3, __vt__Q24Game7PikiMgr@ha
	li       r4, 0
	addi     r3, r3, __vt__Q24Game7PikiMgr@l
	addi     r0, r2, lbl_80518758@sda21
	stw      r3, 0(r31)
	addi     r5, r3, 0x2c
	li       r3, 0x122c
	stw      r5, 0x1c(r31)
	stb      r4, 0x38(r31)
	stb      r4, 0x39(r31)
	stb      r4, 0x38(r31)
	stw      r4, 0x30(r31)
	stw      r0, 0x14(r31)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015CD74
	bl       __ct__Q24Game9PikiParmsFv
	mr       r0, r3

lbl_8015CD74:
	stw      r0, 0x6c(r31)
	li       r3, 0x18
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8015CD90
	bl       __ct__Q24Game9UpdateMgrFv
	mr       r0, r3

lbl_8015CD90:
	stw      r0, 0x78(r31)
	li       r4, 0xa
	lwz      r3, 0x78(r31)
	bl       create__Q24Game9UpdateMgrFi
	mr       r3, r31
	bl       allocStorePikmins__Q24Game7PikiMgrFv
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x39(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015CDC8
 * Size:	000060
 */
PikiParms::PikiParms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__Q24Game13FakePikiParmsFv
	lis      r4, __vt__Q24Game9PikiParms@ha
	addi     r3, r31, 0x27c
	addi     r0, r4, __vt__Q24Game9PikiParms@l
	li       r4, 1
	stw      r0, 0xd8(r31)
	bl       __ct__Q34Game9PikiParms5ParmsFv
	lfs      f0, lbl_80518760@sda21(r2)
	mr       r3, r31
	lfs      f1, lbl_80518764@sda21(r2)
	stfs     f0, 0x24(r31)
	lfs      f0, lbl_80518768@sda21(r2)
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
 * Address:	8015CE28
 * Size:	0017C4
 */
PikiParms::Parms::Parms(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_8047D7A0@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8047D7A0@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_8015CE58
	addi     r0, r30, 0xfac
	stw      r0, 0(r30)

lbl_8015CE58:
	li       r0, 0
	lis      r5, 0x70303030@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0xc
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x70303030@l
	addi     r6, r31, 0x18
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051876C@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x70303031@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x24
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303534@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518778@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x70303534@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x30
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303635@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051877C@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x70303635@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x40
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303338@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518780@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x70303338@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x50
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518760@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x70303033@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x64
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051878C@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x70303130@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x70
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303131@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518794@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x70303131@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x80
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518798@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x70303034@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x8c
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303132@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x70303132@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x98
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303133@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051879C@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x70303133@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0xa4
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303033@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x50303033@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0xb0
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303034@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x1ec
	stfs     f0, 0x1dc(r30)
	addi     r5, r5, 0x50303034@l
	lfs      f0, lbl_805187A0@sda21(r2)
	addi     r6, r31, 0xbc
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518784@sda21(r2)
	stw      r0, 0x1ec(r30)
	mr       r4, r30
	lfs      f0, lbl_805187A0@sda21(r2)
	addi     r3, r30, 0x214
	stfs     f1, 0x204(r30)
	addi     r5, r5, 0x70303035@l
	addi     r6, r31, 0xc8
	stfs     f1, 0x20c(r30)
	stfs     f0, 0x210(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303036@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r7, 1
	stw      r0, 0x214(r30)
	li       r0, 0x64
	mr       r4, r30
	addi     r3, r30, 0x23c
	stw      r7, 0x22c(r30)
	addi     r5, r5, 0x70303036@l
	addi     r6, r31, 0xe4
	stw      r7, 0x234(r30)
	stw      r0, 0x238(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303037@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 2
	stw      r0, 0x23c(r30)
	li       r7, 1
	li       r0, 0x64
	mr       r4, r30
	stw      r3, 0x254(r30)
	addi     r3, r30, 0x264
	addi     r5, r5, 0x70303037@l
	addi     r6, r31, 0xfc
	stw      r7, 0x25c(r30)
	stw      r0, 0x260(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518764@sda21(r2)
	stw      r0, 0x264(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x28c
	stfs     f0, 0x27c(r30)
	addi     r5, r5, 0x70303038@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x114
	stfs     f1, 0x284(r30)
	stfs     f0, 0x288(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A8@sda21(r2)
	stw      r0, 0x28c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x2b4
	stfs     f0, 0x2a4(r30)
	addi     r5, r5, 0x70303039@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x12c
	stfs     f1, 0x2ac(r30)
	stfs     f0, 0x2b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303134@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187AC@sda21(r2)
	stw      r0, 0x2b4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x2dc
	stfs     f0, 0x2cc(r30)
	addi     r5, r5, 0x70303134@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x148
	stfs     f1, 0x2d4(r30)
	stfs     f0, 0x2d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303135@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187B0@sda21(r2)
	stw      r0, 0x2dc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x304
	stfs     f0, 0x2f4(r30)
	addi     r5, r5, 0x70303135@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x158
	stfs     f1, 0x2fc(r30)
	stfs     f0, 0x300(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303136@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187B4@sda21(r2)
	stw      r0, 0x304(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x32c
	stfs     f0, 0x31c(r30)
	addi     r5, r5, 0x70303136@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r2, lbl_805187B8@sda21
	stfs     f1, 0x324(r30)
	stfs     f0, 0x328(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303337@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0x32c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x354
	stfs     f0, 0x344(r30)
	addi     r5, r5, 0x70303337@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x168
	stfs     f1, 0x34c(r30)
	stfs     f0, 0x350(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303137@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187C0@sda21(r2)
	stw      r0, 0x354(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x37c
	stfs     f0, 0x36c(r30)
	addi     r5, r5, 0x70303137@l
	lfs      f0, lbl_80518798@sda21(r2)
	addi     r6, r31, 0x17c
	stfs     f1, 0x374(r30)
	stfs     f0, 0x378(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303138@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187B0@sda21(r2)
	stw      r0, 0x37c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x3a4
	stfs     f0, 0x394(r30)
	addi     r5, r5, 0x70303138@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x194
	stfs     f1, 0x39c(r30)
	stfs     f0, 0x3a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303139@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187C4@sda21(r2)
	stw      r0, 0x3a4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x3cc
	stfs     f0, 0x3bc(r30)
	addi     r5, r5, 0x70303139@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x1a8
	stfs     f1, 0x3c4(r30)
	stfs     f0, 0x3c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303230@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187C8@sda21(r2)
	stw      r0, 0x3cc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x3f4
	stfs     f0, 0x3e4(r30)
	addi     r5, r5, 0x70303230@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x1bc
	stfs     f1, 0x3ec(r30)
	stfs     f0, 0x3f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303231@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187CC@sda21(r2)
	stw      r0, 0x3f4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x41c
	stfs     f0, 0x40c(r30)
	addi     r5, r5, 0x70303231@l
	lfs      f0, lbl_80518774@sda21(r2)
	addi     r6, r31, 0x1d0
	stfs     f1, 0x414(r30)
	stfs     f0, 0x418(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303232@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x41c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x444
	stfs     f0, 0x434(r30)
	addi     r5, r5, 0x70303232@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x1ec
	stfs     f1, 0x43c(r30)
	stfs     f0, 0x440(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303233@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D4@sda21(r2)
	stw      r0, 0x444(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x46c
	stfs     f0, 0x45c(r30)
	addi     r5, r5, 0x70303233@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x208
	stfs     f1, 0x464(r30)
	stfs     f0, 0x468(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303234@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x46c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x494
	stfs     f0, 0x484(r30)
	addi     r5, r5, 0x70303234@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x220
	stfs     f1, 0x48c(r30)
	stfs     f0, 0x490(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303235@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D4@sda21(r2)
	stw      r0, 0x494(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x4bc
	stfs     f0, 0x4ac(r30)
	addi     r5, r5, 0x70303235@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x238
	stfs     f1, 0x4b4(r30)
	stfs     f0, 0x4b8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303236@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x4bc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x4e4
	stfs     f0, 0x4d4(r30)
	addi     r5, r5, 0x70303236@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x254
	stfs     f1, 0x4dc(r30)
	stfs     f0, 0x4e0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303237@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D4@sda21(r2)
	stw      r0, 0x4e4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x50c
	stfs     f0, 0x4fc(r30)
	addi     r5, r5, 0x70303237@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x270
	stfs     f1, 0x504(r30)
	stfs     f0, 0x508(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303334@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D8@sda21(r2)
	stw      r0, 0x50c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x534
	stfs     f0, 0x524(r30)
	addi     r5, r5, 0x70303334@l
	lfs      f0, lbl_8051878C@sda21(r2)
	addi     r6, r31, 0x284
	stfs     f1, 0x52c(r30)
	stfs     f0, 0x530(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303238@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x534(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x55c
	stfs     f0, 0x54c(r30)
	addi     r5, r5, 0x70303238@l
	lfs      f0, lbl_8051878C@sda21(r2)
	addi     r6, r31, 0x298
	stfs     f1, 0x554(r30)
	stfs     f0, 0x558(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303339@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051878C@sda21(r2)
	stw      r0, 0x55c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x584
	stfs     f0, 0x574(r30)
	addi     r5, r5, 0x70303339@l
	lfs      f0, lbl_805187DC@sda21(r2)
	addi     r6, r31, 0x2a4
	stfs     f1, 0x57c(r30)
	stfs     f0, 0x580(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303239@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187E0@sda21(r2)
	stw      r0, 0x584(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x5ac
	stfs     f0, 0x59c(r30)
	addi     r5, r5, 0x70303239@l
	lfs      f0, lbl_8051878C@sda21(r2)
	addi     r6, r31, 0x2b8
	stfs     f1, 0x5a4(r30)
	stfs     f0, 0x5a8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303330@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187E4@sda21(r2)
	stw      r0, 0x5ac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x5d4
	stfs     f0, 0x5c4(r30)
	addi     r5, r5, 0x70303330@l
	lfs      f0, lbl_805187E8@sda21(r2)
	addi     r6, r31, 0x2c4
	stfs     f1, 0x5cc(r30)
	stfs     f0, 0x5d0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303331@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518790@sda21(r2)
	stw      r0, 0x5d4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x5fc
	stfs     f0, 0x5ec(r30)
	addi     r5, r5, 0x70303331@l
	lfs      f0, lbl_805187E8@sda21(r2)
	addi     r6, r31, 0x2d0
	stfs     f1, 0x5f4(r30)
	stfs     f0, 0x5f8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303332@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x5fc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x624
	stfs     f0, 0x614(r30)
	addi     r5, r5, 0x70303332@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x2dc
	stfs     f1, 0x61c(r30)
	stfs     f0, 0x620(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303333@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518798@sda21(r2)
	stw      r0, 0x624(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x64c
	stfs     f0, 0x63c(r30)
	addi     r5, r5, 0x70303333@l
	lfs      f0, lbl_805187E8@sda21(r2)
	addi     r6, r31, 0x2f0
	stfs     f1, 0x644(r30)
	stfs     f0, 0x648(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303335@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187EC@sda21(r2)
	stw      r0, 0x64c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x674
	stfs     f0, 0x664(r30)
	addi     r5, r5, 0x70303335@l
	lfs      f0, lbl_805187E8@sda21(r2)
	addi     r6, r31, 0x300
	stfs     f1, 0x66c(r30)
	stfs     f0, 0x670(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303336@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F0@sda21(r2)
	stw      r0, 0x674(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x69c
	stfs     f0, 0x68c(r30)
	addi     r5, r5, 0x70303336@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x31c
	stfs     f1, 0x694(r30)
	stfs     f0, 0x698(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303430@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F0@sda21(r2)
	stw      r0, 0x69c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x6c4
	stfs     f0, 0x6b4(r30)
	addi     r5, r5, 0x70303430@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x338
	stfs     f1, 0x6bc(r30)
	stfs     f0, 0x6c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303431@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051879C@sda21(r2)
	stw      r0, 0x6c4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x6ec
	stfs     f0, 0x6dc(r30)
	addi     r5, r5, 0x70303431@l
	lfs      f0, lbl_805187F4@sda21(r2)
	addi     r6, r31, 0x350
	stfs     f1, 0x6e4(r30)
	stfs     f0, 0x6e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303432@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D4@sda21(r2)
	stw      r0, 0x6ec(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x714
	stfs     f0, 0x704(r30)
	addi     r5, r5, 0x70303432@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x364
	stfs     f1, 0x70c(r30)
	stfs     f0, 0x710(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303130@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x714(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x73c
	stfs     f0, 0x72c(r30)
	addi     r5, r5, 0x50303130@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x37c
	stfs     f1, 0x734(r30)
	stfs     f0, 0x738(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303131@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x73c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x764
	stfs     f0, 0x754(r30)
	addi     r5, r5, 0x50303131@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x37c
	stfs     f1, 0x75c(r30)
	stfs     f0, 0x760(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303132@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187C0@sda21(r2)
	stw      r0, 0x764(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x78c
	stfs     f0, 0x77c(r30)
	addi     r5, r5, 0x50303132@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x394
	stfs     f1, 0x784(r30)
	stfs     f0, 0x788(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303133@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051878C@sda21(r2)
	stw      r0, 0x78c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x7b4
	stfs     f0, 0x7a4(r30)
	addi     r5, r5, 0x50303133@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x3a8
	stfs     f1, 0x7ac(r30)
	stfs     f0, 0x7b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303134@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x7b4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x7dc
	stfs     f0, 0x7cc(r30)
	addi     r5, r5, 0x50303134@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x3c0
	stfs     f1, 0x7d4(r30)
	stfs     f0, 0x7d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303135@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x7dc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x804
	stfs     f0, 0x7f4(r30)
	addi     r5, r5, 0x50303135@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x3d8
	stfs     f1, 0x7fc(r30)
	stfs     f0, 0x800(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303433@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0x804(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x82c
	stfs     f0, 0x81c(r30)
	addi     r5, r5, 0x70303433@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x3f0
	stfs     f1, 0x824(r30)
	stfs     f0, 0x828(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303734@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F8@sda21(r2)
	stw      r0, 0x82c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x854
	stfs     f0, 0x844(r30)
	addi     r5, r5, 0x70303734@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x410
	stfs     f1, 0x84c(r30)
	stfs     f0, 0x850(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303434@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F8@sda21(r2)
	stw      r0, 0x854(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x87c
	stfs     f0, 0x86c(r30)
	addi     r5, r5, 0x70303434@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x430
	stfs     f1, 0x874(r30)
	stfs     f0, 0x878(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303435@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x87c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x8a4
	stfs     f0, 0x894(r30)
	addi     r5, r5, 0x70303435@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x44c
	stfs     f1, 0x89c(r30)
	stfs     f0, 0x8a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303436@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x8a4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x8cc
	stfs     f0, 0x8bc(r30)
	addi     r5, r5, 0x70303436@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x468
	stfs     f1, 0x8c4(r30)
	stfs     f0, 0x8c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303437@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x8cc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x8f4
	stfs     f0, 0x8e4(r30)
	addi     r5, r5, 0x70303437@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x484
	stfs     f1, 0x8ec(r30)
	stfs     f0, 0x8f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303438@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0x8f4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0x91c
	stfs     f0, 0x90c(r30)
	addi     r5, r5, 0x70303438@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x4a0
	stfs     f1, 0x914(r30)
	stfs     f0, 0x918(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303439@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187FC@sda21(r2)
	stw      r0, 0x91c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x944
	stfs     f0, 0x934(r30)
	addi     r5, r5, 0x70303439@l
	lfs      f0, lbl_80518784@sda21(r2)
	addi     r6, r31, 0x4b0
	stfs     f1, 0x93c(r30)
	stfs     f0, 0x940(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303530@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0x944(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x96c
	stfs     f0, 0x95c(r30)
	addi     r5, r5, 0x70303530@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x4c4
	stfs     f1, 0x964(r30)
	stfs     f0, 0x968(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303531@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0x96c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x994
	stfs     f0, 0x984(r30)
	addi     r5, r5, 0x70303531@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x4d8
	stfs     f1, 0x98c(r30)
	stfs     f0, 0x990(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303532@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518800@sda21(r2)
	stw      r0, 0x994(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x9bc
	stfs     f0, 0x9ac(r30)
	addi     r5, r5, 0x70303532@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x4ec
	stfs     f1, 0x9b4(r30)
	stfs     f0, 0x9b8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303533@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518800@sda21(r2)
	stw      r0, 0x9bc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0x9e4
	stfs     f0, 0x9d4(r30)
	addi     r5, r5, 0x70303533@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x4fc
	stfs     f1, 0x9dc(r30)
	stfs     f0, 0x9e0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303535@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0x9e4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xa0c
	stfs     f0, 0x9fc(r30)
	addi     r5, r5, 0x70303535@l
	lfs      f0, lbl_805187D0@sda21(r2)
	addi     r6, r31, 0x510
	stfs     f1, 0xa04(r30)
	stfs     f0, 0xa08(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303536@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187B4@sda21(r2)
	stw      r0, 0xa0c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xa34
	stfs     f0, 0xa24(r30)
	addi     r5, r5, 0x70303536@l
	lfs      f0, lbl_805187A0@sda21(r2)
	addi     r6, r31, 0x52c
	stfs     f1, 0xa2c(r30)
	stfs     f0, 0xa30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303537@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518764@sda21(r2)
	stw      r0, 0xa34(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xa5c
	stfs     f0, 0xa4c(r30)
	addi     r5, r5, 0x70303537@l
	lfs      f0, lbl_80518784@sda21(r2)
	addi     r6, r31, 0x54c
	stfs     f1, 0xa54(r30)
	stfs     f0, 0xa58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303538@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A4@sda21(r2)
	stw      r0, 0xa5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xa84
	stfs     f0, 0xa74(r30)
	addi     r5, r5, 0x70303538@l
	lfs      f0, lbl_805187D4@sda21(r2)
	addi     r6, r31, 0x55c
	stfs     f1, 0xa7c(r30)
	stfs     f0, 0xa80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303539@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518804@sda21(r2)
	stw      r0, 0xa84(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xaac
	stfs     f0, 0xa9c(r30)
	addi     r5, r5, 0x70303539@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x56c
	stfs     f1, 0xaa4(r30)
	stfs     f0, 0xaa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303735@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518798@sda21(r2)
	stw      r0, 0xaac(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xad4
	stfs     f0, 0xac4(r30)
	addi     r5, r5, 0x70303735@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x580
	stfs     f1, 0xacc(r30)
	stfs     f0, 0xad0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303736@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518788@sda21(r2)
	stw      r0, 0xad4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xafc
	stfs     f0, 0xaec(r30)
	addi     r5, r5, 0x70303736@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x594
	stfs     f1, 0xaf4(r30)
	stfs     f0, 0xaf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303737@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518778@sda21(r2)
	stw      r0, 0xafc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xb24
	stfs     f0, 0xb14(r30)
	addi     r5, r5, 0x70303737@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x5a8
	stfs     f1, 0xb1c(r30)
	stfs     f0, 0xb20(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303630@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518808@sda21(r2)
	stw      r0, 0xb24(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xb4c
	stfs     f0, 0xb3c(r30)
	addi     r5, r5, 0x70303630@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x5bc
	stfs     f1, 0xb44(r30)
	stfs     f0, 0xb48(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303631@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518798@sda21(r2)
	stw      r0, 0xb4c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xb74
	stfs     f0, 0xb64(r30)
	addi     r5, r5, 0x70303631@l
	lfs      f0, lbl_8051880C@sda21(r2)
	addi     r6, r31, 0x5d0
	stfs     f1, 0xb6c(r30)
	stfs     f0, 0xb70(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303632@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518810@sda21(r2)
	stw      r0, 0xb74(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xb9c
	stfs     f0, 0xb8c(r30)
	addi     r5, r5, 0x70303632@l
	lfs      f0, lbl_8051880C@sda21(r2)
	addi     r6, r31, 0x5e0
	stfs     f1, 0xb94(r30)
	stfs     f0, 0xb98(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303633@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0x1e
	stw      r0, 0xb9c(r30)
	li       r7, 0
	li       r0, 0x12c
	mr       r4, r30
	stw      r3, 0xbb4(r30)
	addi     r3, r30, 0xbc4
	addi     r5, r5, 0x70303633@l
	addi     r6, r31, 0x5f4
	stw      r7, 0xbbc(r30)
	stw      r0, 0xbc0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<i>"@ha
	lis      r5, 0x70303634@ha
	addi     r0, r3, "__vt__7Parm<i>"@l
	li       r3, 0xa
	stw      r0, 0xbc4(r30)
	li       r7, 0
	li       r0, 0x12c
	mr       r4, r30
	stw      r3, 0xbdc(r30)
	addi     r3, r30, 0xbec
	addi     r5, r5, 0x70303634@l
	addi     r6, r31, 0x614
	stw      r7, 0xbe4(r30)
	stw      r0, 0xbe8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303636@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187B0@sda21(r2)
	stw      r0, 0xbec(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0xc14
	stfs     f0, 0xc04(r30)
	addi     r5, r5, 0x70303636@l
	lfs      f0, lbl_80518778@sda21(r2)
	addi     r6, r31, 0x628
	stfs     f1, 0xc0c(r30)
	stfs     f0, 0xc10(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303637@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D0@sda21(r2)
	stw      r0, 0xc14(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xc3c
	stfs     f0, 0xc2c(r30)
	addi     r5, r5, 0x70303637@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x638
	stfs     f1, 0xc34(r30)
	stfs     f0, 0xc38(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303638@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518814@sda21(r2)
	stw      r0, 0xc3c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xc64
	stfs     f0, 0xc54(r30)
	addi     r5, r5, 0x70303638@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x648
	stfs     f1, 0xc5c(r30)
	stfs     f0, 0xc60(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303639@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187CC@sda21(r2)
	stw      r0, 0xc64(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xc8c
	stfs     f0, 0xc7c(r30)
	addi     r5, r5, 0x70303639@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x658
	stfs     f1, 0xc84(r30)
	stfs     f0, 0xc88(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303730@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A8@sda21(r2)
	stw      r0, 0xc8c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xcb4
	stfs     f0, 0xca4(r30)
	addi     r5, r5, 0x70303730@l
	lfs      f0, lbl_805187D4@sda21(r2)
	addi     r6, r31, 0x66c
	stfs     f1, 0xcac(r30)
	stfs     f0, 0xcb0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303731@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518794@sda21(r2)
	stw      r0, 0xcb4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xcdc
	stfs     f0, 0xccc(r30)
	addi     r5, r5, 0x70303731@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x680
	stfs     f1, 0xcd4(r30)
	stfs     f0, 0xcd8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303732@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D0@sda21(r2)
	stw      r0, 0xcdc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xd04
	stfs     f0, 0xcf4(r30)
	addi     r5, r5, 0x70303732@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x690
	stfs     f1, 0xcfc(r30)
	stfs     f0, 0xd00(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x70303733@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518818@sda21(r2)
	stw      r0, 0xd04(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xd2c
	stfs     f0, 0xd1c(r30)
	addi     r5, r5, 0x70303733@l
	lfs      f0, lbl_80518788@sda21(r2)
	addi     r6, r31, 0x6a0
	stfs     f1, 0xd24(r30)
	stfs     f0, 0xd28(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303030@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518804@sda21(r2)
	stw      r0, 0xd2c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xd54
	stfs     f0, 0xd44(r30)
	addi     r5, r5, 0x50303030@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x6b0
	stfs     f1, 0xd4c(r30)
	stfs     f0, 0xd50(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303031@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187AC@sda21(r2)
	stw      r0, 0xd54(r30)
	mr       r4, r30
	lfs      f1, lbl_8051881C@sda21(r2)
	addi     r3, r30, 0xd7c
	stfs     f0, 0xd6c(r30)
	addi     r5, r5, 0x50303031@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x6c0
	stfs     f1, 0xd74(r30)
	stfs     f0, 0xd78(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303032@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A4@sda21(r2)
	stw      r0, 0xd7c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518784@sda21(r2)
	addi     r3, r30, 0xda4
	stfs     f0, 0xd94(r30)
	addi     r5, r5, 0x50303032@l
	lfs      f0, lbl_805187B4@sda21(r2)
	addi     r6, r31, 0x6d0
	stfs     f1, 0xd9c(r30)
	stfs     f0, 0xda0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303035@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F0@sda21(r2)
	stw      r0, 0xda4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518760@sda21(r2)
	addi     r3, r30, 0xdcc
	stfs     f0, 0xdbc(r30)
	addi     r5, r5, 0x50303035@l
	lfs      f0, lbl_805187B4@sda21(r2)
	addi     r6, r31, 0x6e0
	stfs     f1, 0xdc4(r30)
	stfs     f0, 0xdc8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303036@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051881C@sda21(r2)
	stw      r0, 0xdcc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xdf4
	stfs     f0, 0xde4(r30)
	addi     r5, r5, 0x50303036@l
	lfs      f0, lbl_805187B0@sda21(r2)
	addi     r6, r31, 0x6f0
	stfs     f1, 0xdec(r30)
	stfs     f0, 0xdf0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303230@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A8@sda21(r2)
	stw      r0, 0xdf4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xe1c
	stfs     f0, 0xe0c(r30)
	addi     r5, r5, 0x50303230@l
	lfs      f0, lbl_805187B0@sda21(r2)
	addi     r6, r31, 0x700
	stfs     f1, 0xe14(r30)
	stfs     f0, 0xe18(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303231@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051881C@sda21(r2)
	stw      r0, 0xe1c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xe44
	stfs     f0, 0xe34(r30)
	addi     r5, r5, 0x50303231@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x714
	stfs     f1, 0xe3c(r30)
	stfs     f0, 0xe40(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303138@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518784@sda21(r2)
	stw      r0, 0xe44(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xe6c
	stfs     f0, 0xe5c(r30)
	addi     r5, r5, 0x50303138@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x728
	stfs     f1, 0xe64(r30)
	stfs     f0, 0xe68(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303139@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187F8@sda21(r2)
	stw      r0, 0xe6c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xe94
	stfs     f0, 0xe84(r30)
	addi     r5, r5, 0x50303139@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x728
	stfs     f1, 0xe8c(r30)
	stfs     f0, 0xe90(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303037@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518820@sda21(r2)
	stw      r0, 0xe94(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xebc
	stfs     f0, 0xeac(r30)
	addi     r5, r5, 0x50303037@l
	lfs      f0, lbl_805187A4@sda21(r2)
	addi     r6, r31, 0x738
	stfs     f1, 0xeb4(r30)
	stfs     f0, 0xeb8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303038@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187A0@sda21(r2)
	stw      r0, 0xebc(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xee4
	stfs     f0, 0xed4(r30)
	addi     r5, r5, 0x50303038@l
	lfs      f0, lbl_80518798@sda21(r2)
	addi     r6, r31, 0x74c
	stfs     f1, 0xedc(r30)
	stfs     f0, 0xee0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303039@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518824@sda21(r2)
	stw      r0, 0xee4(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xf0c
	stfs     f0, 0xefc(r30)
	addi     r5, r5, 0x50303039@l
	lfs      f0, lbl_8051878C@sda21(r2)
	addi     r6, r31, 0x760
	stfs     f1, 0xf04(r30)
	stfs     f0, 0xf08(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303136@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518828@sda21(r2)
	stw      r0, 0xf0c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xf34
	stfs     f0, 0xf24(r30)
	addi     r5, r5, 0x50303136@l
	lfs      f0, lbl_8051882C@sda21(r2)
	addi     r6, r31, 0x778
	stfs     f1, 0xf2c(r30)
	stfs     f0, 0xf30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303137@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_80518830@sda21(r2)
	stw      r0, 0xf34(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xf5c
	stfs     f0, 0xf4c(r30)
	addi     r5, r5, 0x50303137@l
	lfs      f0, lbl_80518778@sda21(r2)
	addi     r6, r31, 0x788
	stfs     f1, 0xf54(r30)
	stfs     f0, 0xf58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x50303232@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_805187D4@sda21(r2)
	stw      r0, 0xf5c(r30)
	mr       r4, r30
	lfs      f1, lbl_80518770@sda21(r2)
	addi     r3, r30, 0xf84
	stfs     f0, 0xf74(r30)
	addi     r5, r5, 0x50303232@l
	lfs      f0, lbl_80518790@sda21(r2)
	addi     r6, r31, 0x794
	stfs     f1, 0xf7c(r30)
	stfs     f0, 0xf80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051878C@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_80518770@sda21(r2)
	stw      r0, 0xf84(r30)
	mr       r3, r30
	lfs      f0, lbl_80518790@sda21(r2)
	stfs     f2, 0xf9c(r30)
	stfs     f1, 0xfa4(r30)
	stfs     f0, 0xfa8(r30)
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
 * Address:	8015E5EC
 * Size:	0000A0
 */
void MonoObjectMgr<Game::Piki>::~MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8015E670
	lis      r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015E660
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8015E660
	lis      r4, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Piki>"@l
	stw      r0, 0(r30)
	beq      lbl_8015E660
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8015E660:
	extsh.   r0, r31
	ble      lbl_8015E670
	mr       r3, r30
	bl       __dl__FPv

lbl_8015E670:
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
 * Address:	........
 * Size:	000050
 */
void PikiMgr::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015E68C
 * Size:	000038
 */
void PikiMgr::resetMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "resetMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
	li       r0, 0
	stw      r0, 0x30(r31)
	stb      r0, 0x38(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015E6C4
 * Size:	000064
 */
void PikiMgr::onAlloc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_8015E704

lbl_8015E6E4:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	stw      r31, 0x2c0(r3)
	addi     r31, r31, 1

lbl_8015E704:
	lwz      r0, 0x24(r30)
	cmpw     r31, r0
	blt      lbl_8015E6E4
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
 * Address:	8015E728
 * Size:	000010
 */
void MonoObjectMgr<Game::Piki>::getAt(int)
{
	/*
	mulli    r0, r4, 0x2c8
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8015E738
 * Size:	000060
 */
void PikiMgr::setupPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lbz      r4, 0x2b8(r4)
	lwz      r5, 0x2c0(r31)
	bl       createModel__Q24Game7PikiMgrFii
	stw      r3, 0x174(r31)
	mr       r3, r30
	lbz      r4, 0x2b9(r31)
	lwz      r5, 0x2c0(r31)
	bl       createLeafModel__Q24Game7PikiMgrFii
	stw      r3, 0x2bc(r31)
	lwz      r0, 0x6c(r30)
	stw      r0, 0xc0(r31)
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
 * Address:	8015E798
 * Size:	000324
 */
void PikiMgr::birth(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	lwz      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	cmpwi    r0, 1
	beq      lbl_8015E808
	bge      lbl_8015E7D0
	cmpwi    r0, 0
	bge      lbl_8015E7DC
	b        lbl_8015EA98

lbl_8015E7D0:
	cmpwi    r0, 3
	bge      lbl_8015EA98
	b        lbl_8015E810

lbl_8015E7DC:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	li       r4, 0
	lwz      r0, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_8015E7F4
	lwz      r4, 0x6c(r3)

lbl_8015E7F4:
	add      r0, r0, r4
	cmpwi    r0, 0x64
	blt      lbl_8015EA98
	li       r3, 0
	b        lbl_8015EAA0

lbl_8015E808:
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"
	b        lbl_8015EAA0

lbl_8015E810:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	li       r4, 0
	lwz      r0, 0x20(r30)
	cmplwi   r3, 0
	beq      lbl_8015E828
	lwz      r4, 0x6c(r3)

lbl_8015E828:
	add      r0, r0, r4
	li       r3, 0
	cmpwi    r0, 0x64
	bge      lbl_8015E840
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"

lbl_8015E840:
	cmplwi   r3, 0
	bne      lbl_8015EAA0
	li       r0, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r3, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r0, 0x1c(r1)
	cmplwi   r0, 0
	li       r31, 0
	stw      r3, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r30, 0x18(r1)
	bne      lbl_8015E88C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA2C

lbl_8015E88C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015E8FC

lbl_8015E8A8:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015EA2C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015E8FC:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E8A8
	b        lbl_8015EA2C

lbl_8015E91C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r29, r3
	cmpwi    r0, 5
	bne      lbl_8015E970
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E970
	mr       r3, r29
	bl       isTekiFollowAI__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E970
	mr       r31, r29
	b        lbl_8015EA4C

lbl_8015E970:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_8015E99C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA2C

lbl_8015E99C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015EA10

lbl_8015E9BC:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015EA2C
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015EA10:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015E9BC

lbl_8015EA2C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_8015E91C

lbl_8015EA4C:
	cmplwi   r31, 0
	beq      lbl_8015EA8C
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r0, r4, __vt__Q24Game15CreatureKillArg@l
	li       r5, 1
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game11PikiKillArg@l
	mr       r3, r31
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"
	b        lbl_8015EAA0

lbl_8015EA8C:
	li       r3, 0
	b        lbl_8015EAA0
	b        lbl_8015EAA0

lbl_8015EA98:
	mr       r3, r30
	bl       "birth__27MonoObjectMgr<Q24Game4Piki>Fv"

lbl_8015EAA0:
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
 * Address:	8015EABC
 * Size:	0000CC
 */
void PikiMgr::loadResources(int)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	lis      r5, lbl_8047DFD8@ha
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r4
	li       r4, 0
	stw      r29, 0x434(r1)
	mr       r29, r3
	stw      r0, 8(r1)
	addi     r0, r5, lbl_8047DFD8@l
	mr       r3, r0
	li       r5, 0
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_8015EB60
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_8015EB40
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_8015EB40:
	lwz      r3, 0x6c(r29)
	addi     r4, r1, 0x10
	lwz      r12, 0xd8(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       __dla__FPv

lbl_8015EB60:
	mr       r3, r29
	mr       r4, r30
	bl       load__Q24Game7PikiMgrFi
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EB88
 * Size:	000050
 */
void PikiParms::read(Stream&)
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
 * Address:	8015EBD8
 * Size:	000298
 */
void PikiMgr::load(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047D7A0@ha
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r29, r3
	mr       r30, r4
	addi     r31, r5, lbl_8047D7A0@l
	lwz      r27, sCurrentHeap__7JKRHeap@sda21(r13)
	mr       r3, r27
	bl       getFreeSize__7JKRHeapFv
	lwz      r5, sys@sda21(r13)
	addi     r3, r31, 0x854
	li       r4, 1
	li       r6, 1
	lwz      r5, 0x38(r5)
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r28, r3
	mr       r3, r27
	stw      r28, 0x7c(r29)
	bl       getFreeSize__7JKRHeapFv
	cmplwi   r28, 0
	bne      lbl_8015EC48
	addi     r3, r31, 0x818
	addi     r5, r31, 0x870
	li       r4, 0x1c2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015EC48:
	mr       r3, r29
	addi     r5, r31, 0x888
	li       r4, 0
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x898
	li       r4, 1
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8a4
	li       r4, 2
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8b4
	li       r4, 4
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8c4
	li       r4, 3
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8d4
	li       r4, 5
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r29
	addi     r5, r31, 0x8e4
	li       r4, 6
	bl       loadBmd__Q24Game7PikiMgrFiPc
	mr       r3, r28
	addi     r4, r31, 0x8f0
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x2000
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x58(r29)
	mr       r3, r28
	addi     r4, r31, 0x908
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x5c(r29)
	mr       r3, r28
	addi     r4, r31, 0x91c
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x60(r29)
	mr       r3, r28
	addi     r4, r31, 0x934
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x64(r29)
	mr       r3, r28
	addi     r4, r31, 0x94c
	lwz      r12, 0(r28)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	stw      r3, 0x68(r29)
	addi     r4, r31, 0x968
	li       r5, 0
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_8015EE04
	li       r3, 0x14
	bl       __nw__FUl
	or.      r9, r3, r3
	beq      lbl_8015EDE4
	lis      r3, lbl_804B16A4@ha
	lis      r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@ha
	addi     r7, r3, lbl_804B16A4@l
	lis      r3, "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>"@ha
	lwz      r6, 0(r7)
	addi     r4, r4, "__vt__30IDelegate1<PQ28SysShape5Model>"@l
	lwz      r5, 4(r7)
	addi     r0, r3, "__vt__45Delegate1<Q24Game7PikiMgr,PQ28SysShape5Model>"@l
	lwz      r3, 8(r7)
	stw      r6, 8(r1)
	stw      r4, 0(r9)
	stw      r0, 0(r9)
	stw      r29, 4(r9)
	stw      r6, 8(r9)
	stw      r5, 0xc(r9)
	stw      r5, 0xc(r1)
	stw      r3, 0x10(r1)
	stw      r3, 0x10(r9)

lbl_8015EDE4:
	mr       r3, r28
	mr       r8, r30
	addi     r5, r29, 0x3c
	li       r4, 7
	li       r6, 0x64
	lis      r7, 2
	bl
"__ct__Q28SysShape8ModelMgrFiPP12J3DModelDataiUlUlP30IDelegate1<PQ28SysShape5Model>"
	mr       r28, r3

lbl_8015EE04:
	stw      r28, 0x70(r29)
	addi     r4, r31, 0x968
	lwz      r3, sys@sda21(r13)
	bl       heapStatusEnd__6SystemFPc
	lis      r3, j3dDefaultMtx@ha
	mr       r28, r29
	addi     r29, r3, j3dDefaultMtx@l
	li       r27, 0

lbl_8015EE24:
	lwz      r30, 0x58(r28)
	lis      r4, 4
	mr       r3, r30
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r30
	mr       r5, r29
	li       r4, 0
	bl       simpleCalcMaterial__12J3DModelDataFUsPA4_f
	mr       r3, r30
	bl       makeSharedDL__12J3DModelDataFv
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 5
	blt      lbl_8015EE24
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EE70
 * Size:	000098
 */
void PikiMgr::loadBmd(int, char*)
{
	/*
	stwu     r1, -0x120(r1)
	mflr     r0
	lis      r6, lbl_8047E118@ha
	stw      r0, 0x124(r1)
	addi     r0, r6, lbl_8047E118@l
	stw      r31, 0x11c(r1)
	stw      r30, 0x118(r1)
	mr       r30, r4
	mr       r4, r0
	stw      r29, 0x114(r1)
	mr       r29, r3
	addi     r3, r1, 8
	crclr    6
	bl       sprintf
	lwz      r3, 0x7c(r29)
	addi     r4, r1, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lis      r4, 0x00060010@ha
	addi     r4, r4, 0x00060010@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lis      r4, 4
	mr       r31, r3
	bl       newSharedDisplayList__12J3DModelDataFUl
	mr       r3, r31
	bl       makeSharedDL__12J3DModelDataFv
	slwi     r0, r30, 2
	add      r3, r29, r0
	stw      r31, 0x3c(r3)
	lwz      r31, 0x11c(r1)
	lwz      r30, 0x118(r1)
	lwz      r29, 0x114(r1)
	lwz      r0, 0x124(r1)
	mtlr     r0
	addi     r1, r1, 0x120
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF08
 * Size:	00004C
 */
void PikiMgr::createModelCallback(SysShape::Model*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, 8(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r31)
	bl       makeDL__8J3DModelFv
	lwz      r3, 8(r31)
	bl       lock__8J3DModelFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF54
 * Size:	000024
 */
SysShape::Model* PikiMgr::createModel(int p1, int p2)
{
	return m_modelMgr->createModel(p1, p2);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x70(r3)
	bl       createModel__Q28SysShape8ModelMgrFii
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015EF78
 * Size:	000008
 */
SysShape::Model* PikiMgr::createLeafModel(int, int) { return nullptr; }

/*
 * --INFO--
 * Address:	8015EF80
 * Size:	000280
 */
void PikiMgr::setMovieDraw(bool)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	clrlwi.  r0, r4, 0x18
	stmw     r26, 8(r1)
	mr       r28, r4
	mr       r27, r3
	bne      lbl_8015EFB0
	lbz      r0, 0x39(r27)
	ori      r0, r0, 1
	stb      r0, 0x39(r27)
	b        lbl_8015EFBC

lbl_8015EFB0:
	lbz      r0, 0x39(r27)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x39(r27)

lbl_8015EFBC:
	li       r29, 0
	li       r30, 0
	b        lbl_8015F1E0

lbl_8015EFC8:
	lwz      r3, 0x2c(r27)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F1D8
	lwz      r0, 0x28(r27)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F1D8
	clrlwi.  r0, r28, 0x18
	beq      lbl_8015F110
	lwz      r3, 0x28(r27)
	addi     r0, r30, 0x258
	lwzx     r31, r3, r0
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0, 0
	beq      lbl_8015F02C
	lwz      r0, 4(r31)
	stw      r0, 0(r31)
	lwz      r0, 0(r31)
	clrlwi   r0, r0, 1
	stw      r0, 0(r31)

lbl_8015F02C:
	lwz      r3, 0(r31)
	clrlwi.  r0, r3, 0x1f
	beq      lbl_8015F058
	ori      r0, r3, 1
	stw      r0, 0(r31)
	lwz      r0, 0(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_8015F058
	lwz      r4, 0xc(r31)
	mr       r3, r31
	bl       "createKourin___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F058:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1e, 0x1e
	beq      lbl_8015F080
	ori      r0, r3, 2
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createDoping___Q23efx9TPkEffectFP10Vector3<f>"
	mr       r3, r31
	bl       killKourin___Q23efx9TPkEffectFv

lbl_8015F080:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_8015F0A0
	ori      r0, r3, 4
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createMoe___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0A0:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1c, 0x1c
	beq      lbl_8015F0C0
	ori      r0, r3, 8
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0xc(r31)
	bl       "createChudoku___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0C0:
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0x1b, 0x1b
	beq      lbl_8015F0E0
	ori      r0, r3, 0x10
	mr       r3, r31
	stw      r0, 0(r31)
	lwz      r4, 0x14(r31)
	bl       "createWater___Q23efx9TPkEffectFP10Vector3<f>"

lbl_8015F0E0:
	lwz      r0, 0(r31)
	rlwinm.  r26, r0, 0, 0x1a, 0x1a
	beq      lbl_8015F1D8
	ori      r0, r0, 0x20
	mr       r3, r31
	stw      r0, 0(r31)
	bl       updateHamon___Q23efx9TPkEffectFv
	cmplwi   r26, 0
	bne      lbl_8015F1D8
	addi     r3, r31, 0x28
	bl       "createSimpleDive__3efxFR10Vector3<f>"
	b        lbl_8015F1D8

lbl_8015F110:
	lwz      r3, 0x28(r27)
	addi     r0, r30, 0x258
	lwzx     r31, r3, r0
	lwz      r3, 0(r31)
	rlwinm.  r0, r3, 0, 0, 0
	bne      lbl_8015F14C
	stw      r3, 4(r31)
	li       r0, 0
	stb      r0, 0(r31)
	stb      r0, 1(r31)
	stb      r0, 2(r31)
	stb      r0, 3(r31)
	lwz      r0, 0(r31)
	oris     r0, r0, 0x8000
	stw      r0, 0(r31)

lbl_8015F14C:
	addi     r3, r31, 0x34
	lwz      r12, 0x34(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x48
	lwz      r12, 0x48(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x5c
	lwz      r12, 0x5c(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       killKourin___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killDoping___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killNage___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killMoe___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killChudoku___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killMoeSmoke___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killBlackDown___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killWater___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killHamonA___Q23efx9TPkEffectFv
	mr       r3, r31
	bl       killHamonB___Q23efx9TPkEffectFv

lbl_8015F1D8:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F1E0:
	lwz      r0, 0x24(r27)
	cmpw     r29, r0
	blt      lbl_8015EFC8
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F200
 * Size:	000084
 */
void PikiMgr::debugShapeDL(char*)
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
	b        lbl_8015F258

lbl_8015F230:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8015F250
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	bl       debugShapeDL__Q24Game8FakePikiFPc

lbl_8015F250:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8015F258:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_8015F230
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
 * Address:	8015F284
 * Size:	000198
 */
void PikiMgr::doSimpleDraw(Viewport*)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stmw     r22, 0x38(r1)
	mr       r23, r3
	mr       r24, r4
	li       r3, 0x10
	mr       r29, r23
	li       r27, 0
	lhz      r0, 0x18(r4)
	lis      r4, j3dSys@ha
	addi     r31, r4, j3dSys@l
	slw      r28, r3, r0

lbl_8015F2B8:
	lwz      r5, 0x58(r29)
	li       r0, 0
	lwz      r4, 0x28(r5)
	lwz      r3, 0xa0(r5)
	lwz      r4, 0(r4)
	lwz      r26, 0x58(r4)
	stw      r3, 0x10c(r31)
	lwz      r3, 0xa4(r5)
	stw      r3, 0x110(r31)
	lwz      r3, 0xac(r5)
	stw      r3, 0x114(r31)
	stw      r0, sOldVcdVatCmd__8J3DShape@sda21(r13)
	b        lbl_8015F3F0

lbl_8015F2EC:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r26)
	bl       loadPreDrawSetting__8J3DShapeCFv
	li       r25, 0
	li       r30, 0
	b        lbl_8015F3E0

lbl_8015F314:
	lwz      r3, 0x2c(r23)
	lbzx     r0, r3, r25
	cmplwi   r0, 0
	bne      lbl_8015F3D8
	lwz      r0, 0x28(r23)
	add      r22, r0, r30
	lbz      r0, 0xd8(r22)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_8015F3D8
	mr       r3, r22
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F3D8
	lbz      r0, 0xd8(r22)
	and.     r0, r0, r28
	beq      lbl_8015F3D8
	lbz      r3, 0x2b8(r22)
	lbz      r0, 0x2b9(r22)
	cmpwi    r3, 4
	mr       r4, r0
	beq      lbl_8015F370
	cmpwi    r3, 3
	bne      lbl_8015F37C

lbl_8015F370:
	cmpwi    r0, 1
	blt      lbl_8015F37C
	addi     r4, r4, 2

lbl_8015F37C:
	cmpw     r4, r27
	bne      lbl_8015F3D8
	lwz      r3, 0x268(r22)
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r0, r3
	mr       r3, r24
	mr       r22, r0
	li       r4, 1
	bl       getMatrix__8ViewportFb
	mr       r4, r22
	addi     r5, r1, 8
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadNrmMtxImm
	lwz      r3, 8(r26)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8015F3D8:
	addi     r30, r30, 0x2c8
	addi     r25, r25, 1

lbl_8015F3E0:
	lwz      r0, 0x24(r23)
	cmpw     r25, r0
	blt      lbl_8015F314
	lwz      r26, 4(r26)

lbl_8015F3F0:
	cmplwi   r26, 0
	bne      lbl_8015F2EC
	addi     r27, r27, 1
	addi     r29, r29, 4
	cmpwi    r27, 5
	blt      lbl_8015F2B8
	lmw      r22, 0x38(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F41C
 * Size:	0001D8
 */
void PikiMgr::doAnimation(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	addi     r4, r2, lbl_80518834@sda21
	li       r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r6, sys@sda21(r13)
	lwz      r3, 0x28(r6)
	bl       _start__9SysTimersFPcb
	lwz      r3, 0x78(r31)
	bl       update__Q24Game9UpdateMgrFv
	lbz      r0, 0x39(r31)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015F504
	li       r29, 0
	li       r30, 0
	b        lbl_8015F4F4

lbl_8015F46C:
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F4EC
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015F4EC:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F4F4:
	lwz      r0, 0x24(r31)
	cmpw     r29, r0
	blt      lbl_8015F46C
	b        lbl_8015F584

lbl_8015F504:
	li       r29, 0
	li       r30, 0
	b        lbl_8015F578

lbl_8015F510:
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F570
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lfs      f0, 0x1fc(r3)
	stfs     f0, 0x244(r3)
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x1cc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x2c(r31)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F570
	lwz      r0, 0x28(r31)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_8015F570:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F578:
	lwz      r0, 0x24(r31)
	cmpw     r29, r0
	blt      lbl_8015F510

lbl_8015F584:
	lwz      r0, 0x30(r31)
	cmpwi    r0, 0
	ble      lbl_8015F5C8
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8015F5C8
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8015F5C8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_8015F5C8
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1071
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8015F5C8:
	lwz      r3, sys@sda21(r13)
	addi     r4, r2, lbl_80518834@sda21
	lwz      r3, 0x28(r3)
	bl       _stop__9SysTimersFPc
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
 * Address:	8015F5F4
 * Size:	000058
 */
void PikiMgr::setVsXlu(int p1, bool p2)
{
	if (p2) {
		if (p1 == 0) {
			m_flags[0] &= ~1;
		} else {
			m_flags[0] &= ~2;
		}
	} else {
		if (p1 == 0) {
			m_flags[0] |= 1;
		} else {
			m_flags[0] |= 2;
		}
	}
	/*
	clrlwi.  r0, r5, 0x18
	beq      lbl_8015F624
	cmpwi    r4, 0
	bne      lbl_8015F614
	lbz      r0, 0x38(r3)
	rlwinm   r0, r0, 0, 0x18, 0x1e
	stb      r0, 0x38(r3)
	blr

lbl_8015F614:
	lbz      r0, 0x38(r3)
	rlwinm   r0, r0, 0, 0x1f, 0x1d
	stb      r0, 0x38(r3)
	blr

lbl_8015F624:
	cmpwi    r4, 0
	bne      lbl_8015F63C
	lbz      r0, 0x38(r3)
	ori      r0, r0, 1
	stb      r0, 0x38(r3)
	blr

lbl_8015F63C:
	lbz      r0, 0x38(r3)
	ori      r0, r0, 2
	stb      r0, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F64C
 * Size:	0001FC
 */
void PikiMgr::doEntry(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	bne      lbl_8015F77C
	lbz      r0, 0x39(r28)
	li       r29, 0
	li       r30, 0
	clrlwi   r31, r0, 0x1f
	b        lbl_8015F76C

lbl_8015F690:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8015F764
	cmplwi   r31, 0
	beq      lbl_8015F6E4
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F6E4
	lwz      r5, 0x28(r28)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015F6FC

lbl_8015F6E4:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl

lbl_8015F6FC:
	lwz      r0, 0x28(r28)
	add      r4, r0, r30
	lbz      r3, 0x2b8(r4)
	cmpwi    r3, 0
	bne      lbl_8015F72C
	lbz      r0, 0x38(r28)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8015F72C
	lbz      r0, 0xd8(r4)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stb      r0, 0xd8(r4)
	b        lbl_8015F74C

lbl_8015F72C:
	cmpwi    r3, 1
	bne      lbl_8015F74C
	lbz      r0, 0x38(r28)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015F74C
	lbz      r0, 0xd8(r4)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0xd8(r4)

lbl_8015F74C:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015F764:
	addi     r30, r30, 0x2c8
	addi     r29, r29, 1

lbl_8015F76C:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_8015F690
	b        lbl_8015F828

lbl_8015F77C:
	lbz      r0, 0x39(r28)
	li       r31, 0
	li       r30, 0
	clrlwi   r29, r0, 0x1f
	b        lbl_8015F81C

lbl_8015F790:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r31
	cmplwi   r0, 0
	bne      lbl_8015F814
	cmplwi   r29, 0
	beq      lbl_8015F7E4
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015F7E4
	lwz      r5, 0x28(r28)
	addi     r4, r30, 0xd8
	li       r0, -53
	lbzx     r3, r5, r4
	and      r0, r3, r0
	stbx     r0, r5, r4
	b        lbl_8015F7FC

lbl_8015F7E4:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl

lbl_8015F7FC:
	lwz      r0, 0x28(r28)
	add      r3, r0, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_8015F814:
	addi     r30, r30, 0x2c8
	addi     r31, r31, 1

lbl_8015F81C:
	lwz      r0, 0x24(r28)
	cmpw     r31, r0
	blt      lbl_8015F790

lbl_8015F828:
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
 * Address:	8015F848
 * Size:	000004
 */
void PikiMgr::setupSoundViewerAndBas(void) { }

/*
 * --INFO--
 * Address:	8015F84C
 * Size:	000074
 */
int PikiMgr::getColorTransportScale(int color)
{
	P2ASSERTLINE(857, (-1 < color && color < 7));
	return (color == Purple) ? 10 : 1;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	blt      lbl_8015F874
	cmpwi    r31, 7
	bge      lbl_8015F874
	li       r0, 1

lbl_8015F874:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8015F898
	lis      r3, lbl_8047DFB8@ha
	lis      r5, lbl_8047E12C@ha
	addi     r3, r3, lbl_8047DFB8@l
	li       r4, 0x359
	addi     r5, r5, lbl_8047E12C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8015F898:
	cmpwi    r31, 3
	bne      lbl_8015F8A8
	li       r3, 0xa
	b        lbl_8015F8AC

lbl_8015F8A8:
	li       r3, 1

lbl_8015F8AC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F8C0
 * Size:	00003C
 */
void PikiMgr::allocStorePikmins(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	li       r3, 0x54
	bl       __nwa__FUl
	stw      r3, 0x34(r31)
	mr       r3, r31
	bl       clearStorePikmins__Q24Game7PikiMgrFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015F8FC
 * Size:	00006C
 */
void PikiMgr::clearStorePikmins(void)
{
	/*
	li       r0, 3
	li       r11, 0
	mtctr    r0
	mr       r10, r11

lbl_8015F90C:
	lwz      r4, 0x34(r3)
	addi     r8, r11, 4
	addi     r7, r11, 8
	addi     r6, r11, 0xc
	stwx     r10, r4, r11
	addi     r5, r11, 0x10
	addi     r4, r11, 0x14
	addi     r0, r11, 0x18
	lwz      r9, 0x34(r3)
	addi     r11, r11, 0x1c
	stwx     r10, r9, r8
	lwz      r8, 0x34(r3)
	stwx     r10, r8, r7
	lwz      r7, 0x34(r3)
	stwx     r10, r7, r6
	lwz      r6, 0x34(r3)
	stwx     r10, r6, r5
	lwz      r5, 0x34(r3)
	stwx     r10, r5, r4
	lwz      r4, 0x34(r3)
	stwx     r10, r4, r0
	bdnz     lbl_8015F90C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002C0
 */
// void saveStorePikmins__Q24Game7PikiMgrFP23Condition<Game::Piki>(void)
void PikiMgr::saveStorePikmins(Condition<Piki>*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void PikiMgr::getStorePikmin(int, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8015F968
 * Size:	00034C
 */
// void moveAllPikmins__Q24Game7PikiMgrFR10Vector3f
// fP23Condition<Game::Piki>(void)
void PikiMgr::moveAllPikmins(Vector3f&, float, Condition<Piki>*)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stfd     f28, 0x50(r1)
	psq_st   f28, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	li       r0, 0
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r6, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r6, 0x14(r1)
	mr       r30, r4
	mr       r31, r5
	stw      r0, 0x20(r1)
	stw      r0, 0x18(r1)
	stw      r3, 0x1c(r1)
	bne      lbl_8015F9E8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC58

lbl_8015F9E8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FA54

lbl_8015FA00:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FC58
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8015FA54:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FA00
	b        lbl_8015FC58

lbl_8015FA74:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xbc(r3)
	mr       r29, r3
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8015FB9C
	cmplwi   r31, 0
	beq      lbl_8015FAC0
	mr       r3, r31
	mr       r4, r29
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FB9C

lbl_8015FAC0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x2c(r1)
	lfd      f3, lbl_80518848@sda21(r2)
	stw      r0, 0x28(r1)
	lfs      f1, lbl_8051883C@sda21(r2)
	lfd      f2, 0x28(r1)
	lfs      f0, lbl_80518840@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f29, f0, f1
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x34(r1)
	fmr      f1, f29
	lfd      f3, lbl_80518848@sda21(r2)
	stw      r0, 0x30(r1)
	lfs      f0, lbl_8051883C@sda21(r2)
	lfd      f2, 0x30(r1)
	fsubs    f2, f2, f3
	fdivs    f0, f2, f0
	fmuls    f28, f31, f0
	bl       pikmin2_cosf__Ff
	fmuls    f30, f28, f1
	fmr      f1, f29
	bl       pikmin2_sinf__Ff
	fmuls    f4, f28, f1
	lfs      f3, lbl_80518770@sda21(r2)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f3, 0xc(r1)
	cmplwi   r3, 0
	stfs     f4, 8(r1)
	stfs     f30, 0x10(r1)
	lfs      f2, 8(r30)
	lfs      f1, 4(r30)
	lfs      f0, 0(r30)
	fadds    f2, f30, f2
	fadds    f1, f3, f1
	fadds    f0, f4, f0
	stfs     f2, 0x10(r1)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	beq      lbl_8015FB8C
	lwz      r12, 4(r3)
	addi     r4, r1, 8
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xc(r1)

lbl_8015FB8C:
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8015FB9C:
	lwz      r0, 0x20(r1)
	cmplwi   r0, 0
	bne      lbl_8015FBC8
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC58

lbl_8015FBC8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)
	b        lbl_8015FC3C

lbl_8015FBE8:
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FC58
	lwz      r3, 0x1c(r1)
	lwz      r4, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x18(r1)

lbl_8015FC3C:
	lwz      r12, 0x14(r1)
	addi     r3, r1, 0x14
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FBE8

lbl_8015FC58:
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x18(r1)
	cmplw    r4, r3
	bne      lbl_8015FA74
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	psq_l    f28, 88(r1), 0, qr0
	lfd      f28, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015FCB4
 * Size:	000298
 */
void PikiMgr::forceEnterPikmins(u8)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r30, 0x28(r1)
	stw      r0, 0x1c(r1)
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_8015FD08
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FF14

lbl_8015FD08:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FD74

lbl_8015FD20:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FF14
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015FD74:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FD20
	b        lbl_8015FF14

lbl_8015FD94:
	lwz      r3, 0x18(r1)
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
	beq      lbl_8015FE58
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FE58
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bne      lbl_8015FE08
	mr       r3, r30
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_8015FE08
	lwz      r0, 0x17c(r30)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	bne      lbl_8015FE58

lbl_8015FE08:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r30)
	lbz      r5, 0x2b9(r30)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r7, 0(r3)
	lis      r6, __vt__Q24Game15CreatureKillArg@ha
	lis      r5, 0x00010001@ha
	lis      r4, __vt__Q24Game11PikiKillArg@ha
	addi     r0, r7, 1
	addi     r6, r6, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0(r3)
	addi     r5, r5, 0x00010001@l
	addi     r0, r4, __vt__Q24Game11PikiKillArg@l
	mr       r3, r30
	stw      r6, 8(r1)
	addi     r4, r1, 8
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8015FE58:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_8015FE84
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FF14

lbl_8015FE84:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8015FEF8

lbl_8015FEA4:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8015FF14
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8015FEF8:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FEA4

lbl_8015FF14:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_8015FD94
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8015FF4C
 * Size:	00060C
 */
void PikiMgr::killDayEndPikmins(PikiContainer&)
{
	/*
	stwu     r1, -0x260(r1)
	mflr     r0
	stw      r0, 0x264(r1)
	stfd     f31, 0x250(r1)
	psq_st   f31, 600(r1), 0, qr0
	stfd     f30, 0x240(r1)
	psq_st   f30, 584(r1), 0, qr0
	stfd     f29, 0x230(r1)
	psq_st   f29, 568(r1), 0, qr0
	stfd     f28, 0x220(r1)
	psq_st   f28, 552(r1), 0, qr0
	stmw     r25, 0x204(r1)
	mr       r28, r4
	mr       r25, r3
	mr       r3, r28
	bl       clear__Q24Game13PikiContainerFv
	li       r27, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r0, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r27, 0x68(r1)
	cmplwi   r27, 0
	li       r30, 0
	stw      r0, 0x5c(r1)
	stw      r27, 0x60(r1)
	stw      r25, 0x64(r1)
	bne      lbl_8015FFD0
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160484

lbl_8015FFD0:
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160040

lbl_8015FFEC:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160484
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)

lbl_80160040:
	lwz      r12, 0x5c(r1)
	addi     r3, r1, 0x5c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8015FFEC
	b        lbl_80160484

lbl_80160060:
	lwz      r3, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801603C8
	mr       r3, r31
	bl       surviveDayEnd__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801603C8
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801603C8
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80160168
	lfs      f0, lbl_80518770@sda21(r2)
	lfs      f1, lbl_80518850@sda21(r2)
	stfs     f0, 0x54(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x50
	addi     r5, r1, 0x10
	bl       PSMTXMultVec
	lfs      f2, 0x10(r1)
	mr       r4, r31
	lfs      f1, 0x14(r1)
	addi     r3, r1, 0x34
	lfs      f0, 0x18(r1)
	stfs     f2, 0x50(r1)
	stfs     f1, 0x54(r1)
	stfs     f0, 0x58(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x58(r1)
	lfs      f2, 0x34(r1)
	fsubs    f3, f1, f0
	lfs      f1, 0x50(r1)
	lfs      f0, lbl_80518854@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	blt      lbl_801603C8

lbl_80160168:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	li       r29, 0
	cmplwi   r3, 0
	beq      lbl_8016017C
	addi     r3, r3, 0x30

lbl_8016017C:
	li       r0, 0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r0, 0x4c(r1)
	cmplwi   r0, 0
	stw      r4, 0x40(r1)
	stw      r0, 0x44(r1)
	stw      r3, 0x48(r1)
	bne      lbl_801601B8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160240

lbl_801601B8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160224

lbl_801601D0:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160240
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)

lbl_80160224:
	lwz      r12, 0x40(r1)
	addi     r3, r1, 0x40
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801601D0

lbl_80160240:
	lfs      f31, lbl_805187D0@sda21(r2)
	b        lbl_80160390

lbl_80160248:
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r31)
	mr       r26, r3
	mr       r4, r31
	addi     r3, r1, 0x28
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r26
	addi     r3, r1, 0x1c
	lwz      r12, 0(r26)
	lfs      f30, 0x28(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x2c(r1)
	lfs      f28, 0x30(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x20(r1)
	lfs      f1, 0x1c(r1)
	fsubs    f2, f0, f29
	lfs      f0, 0x24(r1)
	fsubs    f3, f1, f30
	fsubs    f1, f0, f28
	fmuls    f0, f2, f2
	fmadds   f0, f3, f3, f0
	fmadds   f1, f1, f1, f0
	bl       pikmin2_sqrtf__Ff
	fcmpo    cr0, f1, f31
	bge      lbl_801602D4
	li       r29, 1
	b        lbl_801603B0

lbl_801602D4:
	lwz      r0, 0x4c(r1)
	cmplwi   r0, 0
	bne      lbl_80160300
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160390

lbl_80160300:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)
	b        lbl_80160374

lbl_80160320:
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160390
	lwz      r3, 0x48(r1)
	lwz      r4, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x44(r1)

lbl_80160374:
	lwz      r12, 0x40(r1)
	addi     r3, r1, 0x40
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160320

lbl_80160390:
	lwz      r3, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x44(r1)
	cmplw    r4, r3
	bne      lbl_80160248

lbl_801603B0:
	clrlwi.  r0, r29, 0x18
	bne      lbl_801603C8
	addi     r3, r1, 0x6c
	addi     r30, r30, 1
	stwx     r31, r3, r27
	addi     r27, r27, 4

lbl_801603C8:
	lwz      r0, 0x68(r1)
	cmplwi   r0, 0
	bne      lbl_801603F4
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160484

lbl_801603F4:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)
	b        lbl_80160468

lbl_80160414:
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x68(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160484
	lwz      r3, 0x64(r1)
	lwz      r4, 0x60(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x60(r1)

lbl_80160468:
	lwz      r12, 0x5c(r1)
	addi     r3, r1, 0x5c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160414

lbl_80160484:
	lwz      r3, 0x64(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x60(r1)
	cmplw    r4, r3
	bne      lbl_80160060
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x6c
	li       r25, 0
	addi     r31, r4, __vt__Q24Game15CreatureKillArg@l
	addi     r27, r3, __vt__Q24Game11PikiKillArg@l
	li       r29, 1
	b        lbl_8016050C

lbl_801604C4:
	li       r3, 1
	bl       inc__Q24Game8DeathMgrFi
	li       r3, 7
	bl       inc__Q24Game8DeathMgrFi
	lwz      r4, 0(r26)
	mr       r3, r28
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r5, 0(r3)
	addi     r4, r1, 8
	addi     r0, r5, 1
	stw      r0, 0(r3)
	lwz      r3, 0(r26)
	stw      r31, 8(r1)
	stw      r29, 0xc(r1)
	stw      r27, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_8016050C:
	cmpw     r25, r30
	blt      lbl_801604C4
	lis      r4, lbl_8047E138@ha
	mr       r3, r28
	addi     r4, r4, lbl_8047E138@l
	bl       dump__Q24Game13PikiContainerFPc
	psq_l    f31, 600(r1), 0, qr0
	lfd      f31, 0x250(r1)
	psq_l    f30, 584(r1), 0, qr0
	lfd      f30, 0x240(r1)
	psq_l    f29, 568(r1), 0, qr0
	lfd      f29, 0x230(r1)
	psq_l    f28, 552(r1), 0, qr0
	lfd      f28, 0x220(r1)
	lmw      r25, 0x204(r1)
	lwz      r0, 0x264(r1)
	mtlr     r0
	addi     r1, r1, 0x260
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160558
 * Size:	000258
 */
void PikiMgr::killAllPikmins(void)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r26, 0x1b8(r1)
	li       r30, 0
	cmplwi   r30, 0
	li       r31, 0
	stw      r30, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r30, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_801605A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160730

lbl_801605A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160614

lbl_801605C0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160730
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160614:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801605C0
	b        lbl_80160730

lbl_80160634:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160674
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r28, r3, r30
	addi     r30, r30, 4

lbl_80160674:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_801606A0
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160730

lbl_801606A0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160714

lbl_801606C0:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160730
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160714:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801606C0

lbl_80160730:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160634
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r27, r1, 0x20
	addi     r28, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r29, r4, 0x00010001@l
	addi     r30, r3, __vt__Q24Game11PikiKillArg@l
	li       r26, 0
	b        lbl_80160794

lbl_80160774:
	stw      r28, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r27)
	stw      r29, 0xc(r1)
	stw      r30, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	addi     r27, r27, 4
	addi     r26, r26, 1

lbl_80160794:
	cmpw     r26, r31
	blt      lbl_80160774
	lmw      r26, 0x1b8(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801607B0
 * Size:	0002C8
 */
void PikiMgr::caveSaveFormationPikmins(bool)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r25, 0x1b4(r1)
	li       r29, 0
	cmplwi   r29, 0
	mr       r30, r4
	li       r31, 0
	stw      r29, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r29, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80160804
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801609A8

lbl_80160804:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160870

lbl_8016081C:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801609A8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160870:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016081C
	b        lbl_801609A8

lbl_80160890:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801608EC
	mr       r3, r27
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0
	bne      lbl_801608EC
	lwz      r0, 0x17c(r27)
	rlwinm.  r0, r0, 0, 0x19, 0x19
	beq      lbl_801608EC
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r27, r3, r29
	addi     r29, r29, 4

lbl_801608EC:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80160918
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_801609A8

lbl_80160918:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_8016098C

lbl_80160938:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801609A8
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_8016098C:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160938

lbl_801609A8:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160890
	cmpwi    r31, 0
	bne      lbl_801609DC
	li       r0, 0x7d
	mtctr    r0

lbl_801609D8:
	bdnz     lbl_801609D8

lbl_801609DC:
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x20
	clrlwi   r27, r30, 0x18
	addi     r28, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r30, r4, 0x00010001@l
	addi     r29, r3, __vt__Q24Game11PikiKillArg@l
	li       r25, 0
	b        lbl_80160A48

lbl_80160A04:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0(r26)
	addi     r3, r3, 0x60
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	cmplwi   r27, 0
	addi     r0, r4, 1
	stw      r0, 0(r3)
	beq      lbl_80160A40
	stw      r28, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r26)
	stw      r30, 0xc(r1)
	stw      r29, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80160A40:
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_80160A48:
	cmpw     r25, r31
	blt      lbl_80160A04
	lwz      r5, playData__4Game@sda21(r13)
	lis      r3, lbl_8047E148@ha
	addi     r4, r3, lbl_8047E148@l
	addi     r3, r5, 0x60
	bl       dump__Q24Game13PikiContainerFPc
	lmw      r25, 0x1b4(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160A78
 * Size:	0002C4
 */
void PikiMgr::caveSaveAllPikmins(bool, bool)
{
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	lis      r6, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x1d4(r1)
	addi     r0, r6, "__vt__22Iterator<Q24Game4Piki>"@l
	stmw     r25, 0x1b4(r1)
	li       r28, 0
	cmplwi   r28, 0
	mr       r29, r4
	mr       r30, r5
	li       r31, 0
	stw      r28, 0x1c(r1)
	stw      r0, 0x10(r1)
	stw      r28, 0x14(r1)
	stw      r3, 0x18(r1)
	bne      lbl_80160AD0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C94

lbl_80160AD0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160B3C

lbl_80160AE8:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160C94
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160B3C:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160AE8
	b        lbl_80160C94

lbl_80160B5C:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r27, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160BD8
	clrlwi.  r0, r30, 0x18
	beq      lbl_80160BA0
	lbz      r0, 0x2b8(r27)
	cmpwi    r0, 5
	beq      lbl_80160BD8

lbl_80160BA0:
	lbz      r0, 0x2b8(r27)
	cmpwi    r0, 5
	bne      lbl_80160BC8
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160BD8

lbl_80160BC8:
	addi     r3, r1, 0x20
	addi     r31, r31, 1
	stwx     r27, r3, r28
	addi     r28, r28, 4

lbl_80160BD8:
	lwz      r0, 0x1c(r1)
	cmplwi   r0, 0
	bne      lbl_80160C04
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C94

lbl_80160C04:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)
	b        lbl_80160C78

lbl_80160C24:
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80160C94
	lwz      r3, 0x18(r1)
	lwz      r4, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x14(r1)

lbl_80160C78:
	lwz      r12, 0x10(r1)
	addi     r3, r1, 0x10
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160C24

lbl_80160C94:
	lwz      r3, 0x18(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x14(r1)
	cmplw    r4, r3
	bne      lbl_80160B5C
	lis      r5, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, 0x00010001@ha
	lis      r3, __vt__Q24Game11PikiKillArg@ha
	addi     r26, r1, 0x20
	clrlwi   r27, r29, 0x18
	addi     r30, r5, __vt__Q24Game15CreatureKillArg@l
	addi     r29, r4, 0x00010001@l
	addi     r28, r3, __vt__Q24Game11PikiKillArg@l
	li       r25, 0
	b        lbl_80160D20

lbl_80160CDC:
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0(r26)
	addi     r3, r3, 0x60
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	cmplwi   r27, 0
	addi     r0, r4, 1
	stw      r0, 0(r3)
	beq      lbl_80160D18
	stw      r30, 8(r1)
	addi     r4, r1, 8
	lwz      r3, 0(r26)
	stw      r29, 0xc(r1)
	stw      r28, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_80160D18:
	addi     r26, r26, 4
	addi     r25, r25, 1

lbl_80160D20:
	cmpw     r25, r31
	blt      lbl_80160CDC
	lmw      r25, 0x1b4(r1)
	lwz      r0, 0x1d4(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000290
 */
void PikiMgr::saveFormationPikmins(PikiContainer&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80160D3C
 * Size:	0002A8
 */
void PikiMgr::saveAllPikmins(PikiContainer&)
{
	/*
	stwu     r1, -0x1c0(r1)
	mflr     r0
	stw      r0, 0x1c4(r1)
	stw      r31, 0x1bc(r1)
	stw      r30, 0x1b8(r1)
	mr       r30, r4
	stw      r29, 0x1b4(r1)
	stw      r28, 0x1b0(r1)
	mr       r28, r3
	mr       r3, r30
	bl       clear__Q24Game13PikiContainerFv
	li       r29, 0
	lis      r3, "__vt__22Iterator<Q24Game4Piki>"@ha
	addi     r0, r3, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r29, 0x14(r1)
	cmplwi   r29, 0
	li       r31, 0
	stw      r0, 8(r1)
	stw      r29, 0xc(r1)
	stw      r28, 0x10(r1)
	bne      lbl_80160DAC
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F60

lbl_80160DAC:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160E1C

lbl_80160DC8:
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
	bne      lbl_80160F60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80160E1C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160DC8
	b        lbl_80160F60

lbl_80160E3C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r3)
	mr       r28, r3
	cmpwi    r0, 5
	bne      lbl_80160E78
	lwz      r12, 0(r3)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EA4

lbl_80160E78:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EA4
	addi     r3, r1, 0x18
	addi     r31, r31, 1
	stwx     r28, r3, r29
	addi     r29, r29, 4

lbl_80160EA4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80160ED0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F60

lbl_80160ED0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80160F44

lbl_80160EF0:
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
	bne      lbl_80160F60
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80160F44:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80160EF0

lbl_80160F60:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80160E3C
	addi     r28, r1, 0x18
	li       r29, 0
	b        lbl_80160FAC

lbl_80160F8C:
	lwz      r4, 0(r28)
	mr       r3, r30
	bl       __cl__Q24Game13PikiContainerFPQ24Game4Piki
	lwz      r4, 0(r3)
	addi     r28, r28, 4
	addi     r29, r29, 1
	addi     r0, r4, 1
	stw      r0, 0(r3)

lbl_80160FAC:
	cmpw     r29, r31
	blt      lbl_80160F8C
	lis      r4, lbl_8047E164@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E164@l
	bl       dump__Q24Game13PikiContainerFPc
	lwz      r0, 0x1c4(r1)
	lwz      r31, 0x1bc(r1)
	lwz      r30, 0x1b8(r1)
	lwz      r29, 0x1b4(r1)
	lwz      r28, 0x1b0(r1)
	mtlr     r0
	addi     r1, r1, 0x1c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80160FE4
 * Size:	0000B8
 */
PikiMgr::~PikiMgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80161080
	lis      r4, __vt__Q24Game7PikiMgr@ha
	addi     r4, r4, __vt__Q24Game7PikiMgr@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__27MonoObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_80161070
	lis      r4, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Piki>"@l
	stw      r0, 0(r30)
	beq      lbl_80161070
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_80161070:
	extsh.   r0, r31
	ble      lbl_80161080
	mr       r3, r30
	bl       __dl__FPv

lbl_80161080:
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
 * Address:	8016109C
 * Size:	000008
 */
void PikiMgr::getMgrName(void)
{
	/*
	addi     r3, r2, lbl_80518858@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	801610A4
 * Size:	000008
 */
u32 PikiMgr::getMatrixLoadType(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801610AC
 * Size:	000004
 */
void PikiMgr::loadResources(void) { }

} // namespace Game

/*
 * --INFO--
 * Address:	801610B0
 * Size:	000070
 */
void Container<Game::Piki>::~Container()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80161104
	lis      r4, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Piki>"@l
	stw      r0, 0(r30)
	beq      lbl_801610F4
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801610F4:
	extsh.   r0, r31
	ble      lbl_80161104
	mr       r3, r30
	bl       __dl__FPv

lbl_80161104:
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
 * Address:	80161120
 * Size:	000088
 */
void ObjectMgr<Game::Piki>::~ObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8016118C
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	addi     r4, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	stw      r4, 0(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x1c(r30)
	beq      lbl_8016117C
	lis      r4, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, "__vt__23Container<Q24Game4Piki>"@l
	stw      r0, 0(r30)
	beq      lbl_8016117C
	lis      r5, __vt__16GenericContainer@ha
	li       r4, 0
	addi     r0, r5, __vt__16GenericContainer@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_8016117C:
	extsh.   r0, r31
	ble      lbl_8016118C
	mr       r3, r30
	bl       __dl__FPv

lbl_8016118C:
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
 * Address:	801611A8
 * Size:	000030
 */
void Delegate1<Game::PikiMgr, SysShape::Model*>::invoke(SysShape::Model*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r12, r5, 8
	lwz      r3, 4(r3)
	bl       __ptmf_scall
	nop
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801611D8
 * Size:	000060
 */
void MonoObjectMgr<Game::Piki>::birth()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       "getEmptyIndex__27MonoObjectMgr<Q24Game4Piki>Fv"
	cmpwi    r3, -1
	beq      lbl_80161220
	lwz      r6, 0x28(r31)
	li       r0, 0
	lwz      r4, 0x2c(r31)
	mulli    r5, r3, 0x2c8
	stbx     r0, r4, r3
	add      r3, r6, r5
	lwz      r4, 0x20(r31)
	addi     r0, r4, 1
	stw      r0, 0x20(r31)
	b        lbl_80161224

lbl_80161220:
	li       r3, 0

lbl_80161224:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161238
 * Size:	000040
 */
void MonoObjectMgr<Game::Piki>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_80161270

lbl_80161250:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_80161268
	mr       r3, r6
	blr

lbl_80161268:
	addi     r6, r6, 1
	bdnz     lbl_80161250

lbl_80161270:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161278
 * Size:	000030
 */
void MonoObjectMgr<Game::Piki>::getStart()
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
 * Address:	801612A8
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801612B0
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801612B8
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doAnimation()
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
	b        lbl_80161310

lbl_801612E0:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161308
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80161308:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_80161310:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801612E0
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
 * Address:	80161338
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doEntry()
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
	b        lbl_80161390

lbl_80161360:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161388
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl

lbl_80161388:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_80161390:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80161360
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
 * Address:	801613B8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSetView(int)
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
	b        lbl_8016141C

lbl_801613E8:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161414
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl

lbl_80161414:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8016141C:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_801613E8
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
 * Address:	80161448
 * Size:	000080
 */
void MonoObjectMgr<Game::Piki>::doViewCalc()
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
	b        lbl_801614A0

lbl_80161470:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161498
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl

lbl_80161498:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_801614A0:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80161470
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
 * Address:	801614C8
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doSimulation(float)
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
	b        lbl_8016152C

lbl_801614F8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80161524
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl

lbl_80161524:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_8016152C:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801614F8
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
 * Address:	80161558
 * Size:	000090
 */
void MonoObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
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
	b        lbl_801615BC

lbl_80161588:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801615B4
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl

lbl_801615B4:
	addi     r31, r31, 0x2c8
	addi     r30, r30, 1

lbl_801615BC:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_80161588
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
 * Address:	801615E8
 * Size:	000018
 */
void MonoObjectMgr<Game::Piki>::resetMgr()
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
 * Address:	80161600
 * Size:	000030
 */
void MonoObjectMgr<Game::Piki>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_80161620

lbl_80161614:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_80161620:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_80161614
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161630
 * Size:	00003C
 */
void MonoObjectMgr<Game::Piki>::getEmptyIndex()
{
	/*
	lwz      r0, 0x24(r3)
	li       r5, 0
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_80161664

lbl_80161644:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r5
	cmplwi   r0, 1
	bne      lbl_8016165C
	mr       r3, r5
	blr

lbl_8016165C:
	addi     r5, r5, 1
	bdnz     lbl_80161644

lbl_80161664:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016166C
 * Size:	000010
 */
void MonoObjectMgr<Game::Piki>::get(void*)
{
	/*
	mulli    r0, r4, 0x2c8
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016167C
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801616C4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161830

lbl_801616C4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161730

lbl_801616DC:
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
	bne      lbl_80161830
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161730:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801616DC
	b        lbl_80161830

lbl_80161750:
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
	bne      lbl_801617A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161830

lbl_801617A0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161814

lbl_801617C0:
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
	bne      lbl_80161830
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161814:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801617C0

lbl_80161830:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161750
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161860
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801618A8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161A14

lbl_801618A8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161914

lbl_801618C0:
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
	bne      lbl_80161A14
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161914:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801618C0
	b        lbl_80161A14

lbl_80161934:
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
	bne      lbl_80161984
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161A14

lbl_80161984:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801619F8

lbl_801619A4:
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
	bne      lbl_80161A14
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801619F8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801619A4

lbl_80161A14:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161934
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161A44
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161A94
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161C04

lbl_80161A94:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161B00

lbl_80161AAC:
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
	bne      lbl_80161C04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161B00:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161AAC
	b        lbl_80161C04

lbl_80161B20:
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
	bne      lbl_80161B74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161C04

lbl_80161B74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161BE8

lbl_80161B94:
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
	bne      lbl_80161C04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161BE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161B94

lbl_80161C04:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161B20
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161C38
 * Size:	0001E4
 */
void ObjectMgr<Game::Piki>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161C80
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DEC

lbl_80161C80:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161CEC

lbl_80161C98:
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
	bne      lbl_80161DEC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161CEC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161C98
	b        lbl_80161DEC

lbl_80161D0C:
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
	bne      lbl_80161D5C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DEC

lbl_80161D5C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161DD0

lbl_80161D7C:
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
	bne      lbl_80161DEC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161DD0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161D7C

lbl_80161DEC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161D0C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80161E1C
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80161E6C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FDC

lbl_80161E6C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161ED8

lbl_80161E84:
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
	bne      lbl_80161FDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161ED8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161E84
	b        lbl_80161FDC

lbl_80161EF8:
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
	bne      lbl_80161F4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FDC

lbl_80161F4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80161FC0

lbl_80161F6C:
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
	bne      lbl_80161FDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80161FC0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80161F6C

lbl_80161FDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80161EF8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162010
 * Size:	0001F4
 */
void ObjectMgr<Game::Piki>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80162060
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621D0

lbl_80162060:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801620CC

lbl_80162078:
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
	bne      lbl_801621D0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801620CC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80162078
	b        lbl_801621D0

lbl_801620EC:
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
	bne      lbl_80162140
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621D0

lbl_80162140:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801621B4

lbl_80162160:
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
	bne      lbl_801621D0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801621B4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80162160

lbl_801621D0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801620EC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162204
 * Size:	00002C
 */
void Container<Game::Piki>::getObject(void*)
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
 * Address:	80162230
 * Size:	000008
 */
u32 Container<Game::Piki>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80162238
 * Size:	000008
 */
u32 Container<Game::Piki>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80162240
 * Size:	00009C
 */
void MonoObjectMgr<Game::Piki>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__23Container<Q24Game4Piki>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__23Container<Q24Game4Piki>"@l
	lis      r4, "__vt__23ObjectMgr<Q24Game4Piki>"@ha
	lis      r3, "__vt__27MonoObjectMgr<Q24Game4Piki>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__23ObjectMgr<Q24Game4Piki>"@l
	addi     r5, r3, "__vt__27MonoObjectMgr<Q24Game4Piki>"@l
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
 * Address:	801622DC
 * Size:	000028
 */
void __sinit_pikiMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B1698@ha
	stw      r0, lbl_80515968@sda21(r13)
	stfsu    f0, lbl_804B1698@l(r3)
	stfs     f0, lbl_8051596C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80162304
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @resetMgr()
{
	/*
	addi     r3, r3, -28
	b        "resetMgr__27MonoObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8016230C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__27MonoObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80162314
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__27MonoObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8016231C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__23ObjectMgr<Q24Game4Piki>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	80162324
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__23ObjectMgr<Q24Game4Piki>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8016232C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__23ObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80162334
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__23ObjectMgr<Q24Game4Piki>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8016233C
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doEntry()
{
	/*
	addi     r3, r3, -28
	b        "doEntry__23ObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80162344
 * Size:	000008
 */
void ObjectMgr<Game::Piki>::@28 @doAnimation()
{
	/*
	addi     r3, r3, -28
	b        "doAnimation__23ObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	8016234C
 * Size:	000008
 */
void @28 @Game::PikiMgr::getMatrixLoadType(void)
{
	/*
	addi     r3, r3, -28
	b        getMatrixLoadType__Q24Game7PikiMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80162354
 * Size:	000008
 */
void @28 @Game::PikiMgr::resetMgr(void)
{
	/*
	addi     r3, r3, -28
	b        resetMgr__Q24Game7PikiMgrFv
	*/
}

/*
 * --INFO--
 * Address:	8016235C
 * Size:	000008
 */
void @28 @Game::PikiMgr::loadResources(void)
{
	/*
	addi     r3, r3, -28
	b        loadResources__Q24Game7PikiMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80162364
 * Size:	000008
 */
void @28 @Game::PikiMgr::doSimpleDraw(Viewport*)
{
	/*
	addi     r3, r3, -28
	b        doSimpleDraw__Q24Game7PikiMgrFP8Viewport
	*/
}

/*
 * --INFO--
 * Address:	8016236C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doDirectDraw(Graphics&)
{
	/*
	addi     r3, r3, -28
	b        "doDirectDraw__27MonoObjectMgr<Q24Game4Piki>FR8Graphics"
	*/
}

/*
 * --INFO--
 * Address:	80162374
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doSimulation(float)
{
	/*
	addi     r3, r3, -28
	b        "doSimulation__27MonoObjectMgr<Q24Game4Piki>Ff"
	*/
}

/*
 * --INFO--
 * Address:	8016237C
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doViewCalc()
{
	/*
	addi     r3, r3, -28
	b        "doViewCalc__27MonoObjectMgr<Q24Game4Piki>Fv"
	*/
}

/*
 * --INFO--
 * Address:	80162384
 * Size:	000008
 */
void MonoObjectMgr<Game::Piki>::@28 @doSetView(int)
{
	/*
	addi     r3, r3, -28
	b        "doSetView__27MonoObjectMgr<Q24Game4Piki>Fi"
	*/
}

/*
 * --INFO--
 * Address:	8016238C
 * Size:	000008
 */
void @28 @Game::PikiMgr::doEntry(void)
{
	/*
	addi     r3, r3, -28
	b        doEntry__Q24Game7PikiMgrFv
	*/
}

/*
 * --INFO--
 * Address:	80162394
 * Size:	000008
 */
void @28 @Game::PikiMgr::doAnimation(void)
{
	/*
	addi     r3, r3, -28
	b        doAnimation__Q24Game7PikiMgrFv
	*/
}
