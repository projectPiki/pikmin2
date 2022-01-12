#include "Game/CameraMgr.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_CameraMgr_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80484190
    lbl_80484190:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x3234362D
        .4byte 0x43616D65
        .4byte 0x72614D67
        .4byte 0x72000000
    .global lbl_804841AC
    lbl_804841AC:
        .4byte 0x43616D65
        .4byte 0x72614D67
        .4byte 0x72000000
    .global lbl_804841B8
    lbl_804841B8:
        .4byte 0x2F757365
        .4byte 0x722F4E69
        .4byte 0x7368696D
        .4byte 0x7572612F
        .4byte 0x43616D65
        .4byte 0x72612F63
        .4byte 0x61766543
        .4byte 0x616D6572
        .4byte 0x61506172
        .4byte 0x6D732E74
        .4byte 0x78740000
    .global lbl_804841E4
    lbl_804841E4:
        .4byte 0x2F757365
        .4byte 0x722F4E69
        .4byte 0x7368696D
        .4byte 0x7572612F
        .4byte 0x43616D65
        .4byte 0x72612F67
        .4byte 0x726F756E
        .4byte 0x6443616D
        .4byte 0x65726150
        .4byte 0x61726D73
        .4byte 0x2E747874
        .4byte 0x00000000
        .4byte 0x56696272
        .4byte 0x6174696F
        .4byte 0x6E506172
        .4byte 0x6D730000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4C49
        .4byte 0x47485428
        .4byte 0x76696229
        .4byte 0x00000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4D49
        .4byte 0x44444C45
        .4byte 0x28766962
        .4byte 0x29000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4841
        .4byte 0x52442876
        .4byte 0x69622900
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F534C
        .4byte 0x4F572873
        .4byte 0x70656564
        .4byte 0x29000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4D49
        .4byte 0x44444C45
        .4byte 0x28737065
        .4byte 0x65642900
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4641
        .4byte 0x53542873
        .4byte 0x70656564
        .4byte 0x29000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F5348
        .4byte 0x4F525428
        .4byte 0x74696D65
        .4byte 0x29000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4D49
        .4byte 0x44444C45
        .4byte 0x2874696D
        .4byte 0x65290000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4C4F
        .4byte 0x4E472874
        .4byte 0x696D6529
        .4byte 0x00000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4841
        .4byte 0x52442856
        .4byte 0x69622900
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4841
        .4byte 0x52442853
        .4byte 0x70656564
        .4byte 0x29000000
        .4byte 0x454C4556
        .4byte 0x4154494F
        .4byte 0x4E5F4841
        .4byte 0x52442854
        .4byte 0x696D6529
        .4byte 0x00000000
        .4byte 0x5A4F4F4D
        .4byte 0x5F53484F
        .4byte 0x52542856
        .4byte 0x69622900
        .4byte 0x5A4F4F4D
        .4byte 0x5F53484F
        .4byte 0x52542853
        .4byte 0x70656564
        .4byte 0x29000000
        .4byte 0x5A4F4F4D
        .4byte 0x5F53484F
        .4byte 0x52542854
        .4byte 0x696D6529
        .4byte 0x00000000
        .4byte 0x415A494D
        .4byte 0x5554485F
        .4byte 0x53484F52
        .4byte 0x54285669
        .4byte 0x62290000
        .4byte 0x415A494D
        .4byte 0x5554485F
        .4byte 0x53484F52
        .4byte 0x54285370
        .4byte 0x65656429
        .4byte 0x00000000
        .4byte 0x415A494D
        .4byte 0x5554485F
        .4byte 0x53484F52
        .4byte 0x54285469
        .4byte 0x6D652900
        .4byte 0x56696220
        .4byte 0x4D617820
        .4byte 0x44697374
        .4byte 0x616E6365
        .4byte 0x00000000
        .4byte 0x43616D65
        .4byte 0x72615061
        .4byte 0x726D7300
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x298B9797
        .4byte 0xA3000000
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29834183
        .4byte 0x93834F83
        .4byte 0x8B000000
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29826582
        .4byte 0x6E827500
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29834983
        .4byte 0x74835A83
        .4byte 0x62836700
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29834583
        .4byte 0x46834383
        .4byte 0x67000000
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29446574
        .4byte 0x61636865
        .4byte 0x64000000
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x294E6561
        .4byte 0x72000000
        .4byte 0x4E656172
        .4byte 0x284C6F77
        .4byte 0x29466172
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x83418393
        .4byte 0x834F838B
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x8265826E
        .4byte 0x82750000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x83498374
        .4byte 0x835A8362
        .4byte 0x83670000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x83458346
        .4byte 0x83438367
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x44657461
        .4byte 0x63686564
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x4E656172
        .4byte 0x00000000
        .4byte 0x4D696428
        .4byte 0x4C6F7729
        .4byte 0x46617200
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x8B9797A3
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x83418393
        .4byte 0x834F838B
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x8265826E
        .4byte 0x82750000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x83498374
        .4byte 0x835A8362
        .4byte 0x83670000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x83458346
        .4byte 0x83438367
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x44657461
        .4byte 0x63686564
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x4E656172
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x4C6F7729
        .4byte 0x46617200
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68298B97
        .4byte 0x97A30000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68298341
        .4byte 0x8393834F
        .4byte 0x838B0000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68298265
        .4byte 0x826E8275
        .4byte 0x00000000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68298349
        .4byte 0x8374835A
        .4byte 0x83628367
        .4byte 0x00000000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68298345
        .4byte 0x83468343
        .4byte 0x83670000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68294465
        .4byte 0x74616368
        .4byte 0x65640000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68294E65
        .4byte 0x61720000
        .4byte 0x4E656172
        .4byte 0x28486967
        .4byte 0x68294661
        .4byte 0x72000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x298B9797
        .4byte 0xA3000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29834183
        .4byte 0x93834F83
        .4byte 0x8B000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29826582
        .4byte 0x6E827500
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29834983
        .4byte 0x74835A83
        .4byte 0x62836700
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29834583
        .4byte 0x46834383
        .4byte 0x67000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29446574
        .4byte 0x61636865
        .4byte 0x64000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x294E6561
        .4byte 0x72000000
        .4byte 0x4D696428
        .4byte 0x48696768
        .4byte 0x29466172
        .4byte 0x00000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x298B9797
        .4byte 0xA3000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29834183
        .4byte 0x93834F83
        .4byte 0x8B000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29826582
        .4byte 0x6E827500
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29834983
        .4byte 0x74835A83
        .4byte 0x62836700
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29834583
        .4byte 0x46834383
        .4byte 0x67000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29446574
        .4byte 0x61636865
        .4byte 0x64000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x294E6561
        .4byte 0x72000000
        .4byte 0x46617228
        .4byte 0x48696768
        .4byte 0x29466172
        .4byte 0x00000000
        .4byte 0x5A4F4F4D
        .4byte 0x208B9797
        .4byte 0xA3000000
        .4byte 0x5A4F4F4D
        .4byte 0x20834183
        .4byte 0x93834F83
        .4byte 0x8B000000
        .4byte 0x5A4F4F4D
        .4byte 0x20826582
        .4byte 0x6E827500
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x839394BC
        .4byte 0x8C610000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x839395E2
        .4byte 0x8AD491AC
        .4byte 0x93780000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x839395E2
        .4byte 0x90B38D82
        .4byte 0x00000000
        .4byte 0x8352838A
        .4byte 0x83578387
        .4byte 0x839396B3
        .4byte 0x82B58D82
        .4byte 0x00000000
        .4byte 0x90DD92E8
        .4byte 0x95CF8D58
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x92C78F5D
        .4byte 0x8E9E8AD4
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x89C191AC
        .4byte 0x93780000
        .4byte 0x89F1935D
        .4byte 0x8DC58D82
        .4byte 0x91AC9378
        .4byte 0x00000000
        .4byte 0x89F1935D
        .4byte 0x8CB8908A
        .4byte 0x97A60000
    .global lbl_804847FC
    lbl_804847FC:
        .4byte 0x43616D65
        .4byte 0x72614D67
        .4byte 0x722E6370
        .4byte 0x70000000
    .global lbl_8048480C
    lbl_8048480C:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x63616D65
        .4byte 0x72612069
        .4byte 0x73206E6F
        .4byte 0x6E650A00
    .global lbl_80484828
    lbl_80484828:
        .4byte 0x6E6F7420
        .4byte 0x7A756B61
        .4byte 0x6E206D6F
        .4byte 0x64650A00
    .global lbl_80484838
    lbl_80484838:
        .4byte 0x63616D65
        .4byte 0x72612070
        .4byte 0x6172616D
        .4byte 0x65746572
        .4byte 0x206E6F6E
        .4byte 0x650A0000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804C1BC8
    lbl_804C1BC8:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q24Game9CameraMgr
    __vt__Q24Game9CameraMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game9CameraMgrFv
        .4byte getChildCount__5CNodeFv
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80515D18
    lbl_80515D18:
        .skip 0x4
    .global lbl_80515D1C
    lbl_80515D1C:
        .skip 0x4
    .global cameraMgr__4Game
    cameraMgr__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_8051A898
    lbl_8051A898:
        .float 1.0
    .global lbl_8051A89C
    lbl_8051A89C:
        .4byte 0x00000000
    .global lbl_8051A8A0
    lbl_8051A8A0:
        .4byte 0x41200000
    .global lbl_8051A8A4
    lbl_8051A8A4:
        .4byte 0x40400000
    .global lbl_8051A8A8
    lbl_8051A8A8:
        .4byte 0x40A00000
    .global lbl_8051A8AC
    lbl_8051A8AC:
        .4byte 0x41700000
    .global lbl_8051A8B0
    lbl_8051A8B0:
        .4byte 0x42C80000
    .global lbl_8051A8B4
    lbl_8051A8B4:
        .4byte 0x41C80000
    .global lbl_8051A8B8
    lbl_8051A8B8:
        .4byte 0x420C0000
    .global lbl_8051A8BC
    lbl_8051A8BC:
        .float 0.3
    .global lbl_8051A8C0
    lbl_8051A8C0:
        .4byte 0x3F400000
    .global lbl_8051A8C4
    lbl_8051A8C4:
        .4byte 0x3FC00000
    .global lbl_8051A8C8
    lbl_8051A8C8:
        .4byte 0x41A00000
    .global lbl_8051A8CC
    lbl_8051A8CC:
        .4byte 0x42480000
    .global lbl_8051A8D0
    lbl_8051A8D0:
        .float 0.25
    .global lbl_8051A8D4
    lbl_8051A8D4:
        .float 0.06
    .global lbl_8051A8D8
    lbl_8051A8D8:
        .4byte 0x42200000
    .global lbl_8051A8DC
    lbl_8051A8DC:
        .4byte 0x443B8000
    .global lbl_8051A8E0
    lbl_8051A8E0:
        .4byte 0x447A0000
    .global lbl_8051A8E4
    lbl_8051A8E4:
        .4byte 0x44160000
    .global lbl_8051A8E8
    lbl_8051A8E8:
        .4byte 0x459C4000
    .global lbl_8051A8EC
    lbl_8051A8EC:
        .4byte 0x42B40000
    .global lbl_8051A8F0
    lbl_8051A8F0:
        .4byte 0x42700000
    .global lbl_8051A8F4
    lbl_8051A8F4:
        .4byte 0x43FA0000
    .global lbl_8051A8F8
    lbl_8051A8F8:
        .4byte 0x418C0000
    .global lbl_8051A8FC
    lbl_8051A8FC:
        .4byte 0x46480000
    .global lbl_8051A900
    lbl_8051A900:
        .4byte 0x41A80000
    .global lbl_8051A904
    lbl_8051A904:
        .4byte 0x41B80000
    .global lbl_8051A908
    lbl_8051A908:
        .4byte 0x42180000
    .global lbl_8051A90C
    lbl_8051A90C:
        .4byte 0x425C0000
    .global lbl_8051A910
    lbl_8051A910:
        .4byte 0x44610000
    .global lbl_8051A914
    lbl_8051A914:
        .4byte 0x41D00000
    .global lbl_8051A918
    lbl_8051A918:
        .4byte 0x42040000
    .global lbl_8051A91C
    lbl_8051A91C:
        .4byte 0x43C80000
    .global lbl_8051A920
    lbl_8051A920:
        .4byte 0x43020000
    .global lbl_8051A924
    lbl_8051A924:
        .4byte 0x41DC0000
    .global lbl_8051A928
    lbl_8051A928:
        .4byte 0x428C0000
    .global lbl_8051A92C
    lbl_8051A92C:
        .4byte 0x42960000
    .global lbl_8051A930
    lbl_8051A930:
        .4byte 0x44960000
    .global lbl_8051A934
    lbl_8051A934:
        .4byte 0x41F00000
    .global lbl_8051A938
    lbl_8051A938:
        .4byte 0x43480000
    .global lbl_8051A93C
    lbl_8051A93C:
        .4byte 0x43250000
    .global lbl_8051A940
    lbl_8051A940:
        .4byte 0x437A0000
    .global lbl_8051A944
    lbl_8051A944:
        .4byte 0x41400000
    .global lbl_8051A948
    lbl_8051A948:
        .4byte 0x43960000
    .global lbl_8051A94C
    lbl_8051A94C:
        .4byte 0x3BA3D70A
    .global lbl_8051A950
    lbl_8051A950:
        .4byte 0x3A83126F
    .global lbl_8051A954
    lbl_8051A954:
        .float 0.1
    .global lbl_8051A958
    lbl_8051A958:
        .4byte 0x3E4CCCCD
    .global lbl_8051A95C
    lbl_8051A95C:
        .4byte 0x3F19999A
    .global lbl_8051A960
    lbl_8051A960:
        .4byte 0x3F666666
    .global lbl_8051A964
    lbl_8051A964:
        .4byte 0x3F59999A
*/

namespace Game {

/*
 * --INFO--
 * Address:	80250988
 * Size:	000048
 */
CameraMgr::CameraMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q24Game9CameraMgr@ha
	lis      r4, lbl_804841AC@ha
	addi     r0, r3, __vt__Q24Game9CameraMgr@l
	mr       r3, r31
	stw      r0, 0(r31)
	addi     r0, r4, lbl_804841AC@l
	stw      r0, 0x14(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	802509D0
 * Size:	00012C
 */
void CameraMgr::loadResource()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, -1
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r0, 0x18(r3)
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x1c(r31)
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x20(r31)
	li       r3, 8
	bl       __nwa__FUl
	stw      r3, 0x24(r31)
	li       r3, 0x998
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80250A2C
	li       r4, 1
	bl       __ct__Q24Game11CameraParmsFv
	mr       r0, r3

lbl_80250A2C:
	stw      r0, 0x28(r31)
	li       r3, 0x998
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80250A4C
	li       r4, 1
	bl       __ct__Q24Game11CameraParmsFv
	mr       r0, r3

lbl_80250A4C:
	stw      r0, 0x2c(r31)
	li       r3, 0x308
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_80250A6C
	li       r4, 1
	bl       __ct__Q24Game14VibrationParmsFv
	mr       r0, r3

lbl_80250A6C:
	stw      r0, 0x30(r31)
	li       r0, 0
	stw      r0, 0x34(r31)
	stw      r0, 0x38(r31)
	lwz      r3, 0x1c(r31)
	stw      r0, 0(r3)
	lwz      r3, 0x20(r31)
	stw      r0, 0(r3)
	lwz      r3, 0x24(r31)
	stw      r0, 0(r3)
	lwz      r3, 0x1c(r31)
	stw      r0, 4(r3)
	lwz      r3, 0x20(r31)
	stw      r0, 4(r3)
	lwz      r3, 0x24(r31)
	stw      r0, 4(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80250AD8
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_80250AD8
	lis      r4, lbl_804841B8@ha
	mr       r3, r31
	addi     r4, r4, lbl_804841B8@l
	bl       readCameraParms__Q24Game9CameraMgrFPc
	b        lbl_80250AE8

lbl_80250AD8:
	lis      r4, lbl_804841E4@ha
	mr       r3, r31
	addi     r4, r4, lbl_804841E4@l
	bl       readCameraParms__Q24Game9CameraMgrFPc

lbl_80250AE8:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80250AFC
 * Size:	0004D0
 */
VibrationParms::VibrationParms()
    : Parameters(nullptr, "VibrationParms")
    , m_elevationLightVib(this, 'celv', "ELEVATION_LIGHT(vib)", 1.0f, 0.0f, 10.0f)
    , m_elevationMiddleVib(this, 'cemv', "ELEVATION_MIDDLE(vib)", 3.0f, 0.0f, 10.0f)
    , m_elevationHardVib(this, 'cehv', "ELEVATION_HARD(vib)", 5.0f, 0.0f, 10.0f)
    , m_elevationSlowSpeed(this, 'cess', "ELEVATION_SLOW(speed)", 15.0f, 0.0f, 100.0f)
    , m_elevationMiddleSpeed(this, 'cemv', "ELEVATION_MIDDLE(speed)", 25.0f, 0.0f, 100.0f)
    , m_elevationFastSpeed(this, 'cefs', "ELEVATION_FAST(speed)", 35.0f, 0.0f, 100.0f)
    , m_elevationShortTime(this, 'cets', "ELEVATION_SHORT(time)", 0.3f, 0.0f, 5.0f)
    , m_elevationMiddleTime(this, 'cetm', "ELEVATION_MIDDLE(time)", 0.75f, 0.0f, 5.0f)
    , m_elevationLongTime(this, 'cetl', "ELEVATION_LONG(time)", 1.5f, 0.0f, 5.0f)
    , m_elevationHardVib2(this, 'ceqv', "ELEVATION_HARD(Vib)", 20.0f, 0.0f, 100.0f)
    , m_elevationHardSpeed(this, 'ceqs', "ELEVATION_HARD(Speed)", 35.0f, 0.0f, 100.0f)
    , m_elevationHardTime(this, 'ceqt', "ELEVATION_HARD(Time)", 0.25f, 0.0f, 5.0f)
    , m_zoomShortVib(this, 'czsv', "ZOOM_SHORT(Vib)", 25.0f, 0.0f, 100.0f)
    , m_zoomShortSpeed(this, 'czss', "ZOOM_SHORT(Speed)", 35.0f, 0.0f, 100.0f)
    , m_zoomShortTime(this, 'czst', "ZOOM_SHORT(Time)", 0.75f, 0.0f, 5.0f)
    , m_azimuthShortVib(this, 'casv', "AZIMUTH_SHORT(Vib)", 0.06f, 0.0f, 1.0f)
    , m_azimuthShortSpeed(this, 'cass', "AZIMUTH_SHORT(Speed)", 40.0f, 0.0f, 50.0f)
    , m_azimuthShortTime(this, 'cast', "AZIMUTH_SHORT(Time)", 0.75f, 0.0f, 5.0f)
    , m_vibMaxDistance(this, 'cmdm', "Vib Max Distance", 750.0f, 0.0f, 1000.0f)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_80484190@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80484190@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80250B2C
	addi     r0, r30, 0x304
	stw      r0, 0(r30)

lbl_80250B2C:
	li       r0, 0
	lis      r5, 0x63656C76@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0x84
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x63656C76@l
	addi     r6, r31, 0x94
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656D76@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A898@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x63656D76@l
	lfs      f0, lbl_8051A8A0@sda21(r2)
	addi     r6, r31, 0xac
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656876@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8A4@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x63656876@l
	lfs      f0, lbl_8051A8A0@sda21(r2)
	addi     r6, r31, 0xc4
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63657373@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x63657373@l
	lfs      f0, lbl_8051A8A0@sda21(r2)
	addi     r6, r31, 0xd8
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656D73@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8AC@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x63656D73@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0xf0
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656673@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B4@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x63656673@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0x108
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63657374@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B8@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x63657374@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0x120
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656D74@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8BC@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f0, 0x114(r30)
	addi     r5, r5, 0x63656D74@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x138
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63656C74@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C0@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f0, 0x13c(r30)
	addi     r5, r5, 0x63656C74@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x150
	stfs     f1, 0x144(r30)
	stfs     f0, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63657176@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C4@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x63657176@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x168
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63657173@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C8@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x63657173@l
	lfs      f0, lbl_8051A8CC@sda21(r2)
	addi     r6, r31, 0x17c
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63657174@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B8@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x63657174@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0x194
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x637A7376@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8D0@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x1ec
	stfs     f0, 0x1dc(r30)
	addi     r5, r5, 0x637A7376@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x1ac
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x637A7373@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B4@sda21(r2)
	stw      r0, 0x1ec(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x214
	stfs     f0, 0x204(r30)
	addi     r5, r5, 0x637A7373@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0x1bc
	stfs     f1, 0x20c(r30)
	stfs     f0, 0x210(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x637A7374@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B8@sda21(r2)
	stw      r0, 0x214(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x23c
	stfs     f0, 0x22c(r30)
	addi     r5, r5, 0x637A7374@l
	lfs      f0, lbl_8051A8CC@sda21(r2)
	addi     r6, r31, 0x1d0
	stfs     f1, 0x234(r30)
	stfs     f0, 0x238(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63617376@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C0@sda21(r2)
	stw      r0, 0x23c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x264
	stfs     f0, 0x254(r30)
	addi     r5, r5, 0x63617376@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x1e4
	stfs     f1, 0x25c(r30)
	stfs     f0, 0x260(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63617373@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8D4@sda21(r2)
	stw      r0, 0x264(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x28c
	stfs     f0, 0x27c(r30)
	addi     r5, r5, 0x63617373@l
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r6, r31, 0x1f8
	stfs     f1, 0x284(r30)
	stfs     f0, 0x288(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63617374@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8D8@sda21(r2)
	stw      r0, 0x28c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x2b4
	stfs     f0, 0x2a4(r30)
	addi     r5, r5, 0x63617374@l
	lfs      f0, lbl_8051A8CC@sda21(r2)
	addi     r6, r31, 0x210
	stfs     f1, 0x2ac(r30)
	stfs     f0, 0x2b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D646D@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C0@sda21(r2)
	stw      r0, 0x2b4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x2dc
	stfs     f0, 0x2cc(r30)
	addi     r5, r5, 0x636D646D@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x224
	stfs     f1, 0x2d4(r30)
	stfs     f0, 0x2d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051A8DC@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A89C@sda21(r2)
	stw      r0, 0x2dc(r30)
	mr       r3, r30
	lfs      f0, lbl_8051A8E0@sda21(r2)
	stfs     f2, 0x2f4(r30)
	stfs     f1, 0x2fc(r30)
	stfs     f0, 0x300(r30)
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
 * Address:	80250FCC
 * Size:	000E78
 */
CameraParms::CameraParms()
    : Parameters(nullptr, "CameraParms")
    , m_cnld(this, 'cnld', "Near(Low)距離", 600.0f, 10.0f, 5000.0f)
    , m_cnla(this, 'cnla', "Near(Low)アングル", 20.0f, 0.0f, 90.0f)
    , m_cnlf(this, 'cnlf', "Near(Low)ＦＯＶ", 10.0f, 1.0f, 60.0f)
    , m_cnlo(this, 'cnlo', "Near(Low)オフセット", 25.0f, 10.0f, 500.0f)
    , m_cnlw(this, 'cnlw', "Near(Low)ウェイト", 1000.0f, 0.0f, 0.0f)
    , m_nldt(this, 'nldt', "Near(Low)Detached", 17.5f, 0.0f, 1000.0f)
    , m_nlnc(this, 'nlnc', "Near(Low)Near", 1.0f, 1.0f, 12800.0f)
    , m_nlfc(this, 'nlfc', "Near(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , m_cmld(this, 'cmld', "Mid(Low)距離", 600.0f, 10.0f, 5000.0f)
    , m_cmla(this, 'cmla', "Mid(Low)アングル", 21.0f, 0.0f, 90.0f)
    , m_cmlf(this, 'cmlf', "Mid(Low)ＦＯＶ", 23.0f, 1.0f, 60.0f)
    , m_cmlo(this, 'cmlo', "Mid(Low)オフセット", 38.0f, 10.0f, 500.0f)
    , m_cmlw(this, 'cmlw', "Mid(Low)ウェイト", 500.0f, 10.0f, 5000.0f)
    , m_mldt(this, 'mldt', "Mid(Low)Detached", 55.0f, 0.0f, 1000.0f)
    , m_mlnc(this, 'mlnc', "Mid(Low)Near", 1.0f, 1.0f, 12800.0f)
    , m_mlfc(this, 'mlfc', "Mid(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , m_cfld(this, 'cfld', "Far(Low)距離", 900.0f, 10.0f, 5000.0f)
    , m_cfla(this, 'cfla', "Far(Low)アングル", 25.0f, 0.0f, 90.0f)
    , m_cflf(this, 'cflf', "Far(Low)ＦＯＶ", 26.0f, 1.0f, 60.0f)
    , m_cflo(this, 'cflo', "Far(Low)オフセット", 33.0f, 10.0f, 500.0f)
    , m_cflw(this, 'cflw', "Far(Low)ウェイト", 400.0f, 10.0f, 5000.0f)
    , m_fldt(this, 'fldt', "Far(Low)Detached", 130.0f, 0.0f, 1000.0f)
    , m_flnc(this, 'flnc', "Far(Low)Near", 1.0f, 1.0f, 12800.0f)
    , m_flfc(this, 'flfc', "Far(Low)Far", 12800.0f, 1.0f, 12800.0f)
    , m_cnhd(this, 'cnhd', "Near(High)距離", 900.0f, 10.0f, 5000.0f)
    , m_cnha(this, 'cnha', "Near(High)アングル", f, f, f)
    , m_cnhf(this, 'cnhf', "Near(High)ＦＯＶ", f, f, f)
    , m_cnho(this, 'cnho', "Near(High)オフセット", f, f, f)
    , m_cnhw(this, 'cnhw', "Near(High)ウェイト", f, f, f)
    , m_nhdt(this, 'nhdt', "Near(High)Detached", f, f, f)
    , m_nhnc(this, 'nhnc', "Near(High)Near", f, f, f)
    , m_nhfc(this, 'nhfc', "Near(High)Far", f, f, f)
    , m_cmhd(this, 'cmhd', "Mid(High)距離", 900.0f, 10.0f, 5000.0f)
    , m_cmha(this, 'cmha', "Mid(High)アングル", f, f, f)
    , m_cmhf(this, 'cmhf', "Mid(High)ＦＯＶ", f, f, f)
    , m_cmho(this, 'cmho', "Mid(High)オフセット", f, f, f)
    , m_cmhw(this, 'cmhw', "Mid(High)ウェイト", f, f, f)
    , m_mhdt(this, 'mhdt', "Mid(High)Detached", f, f, f)
    , m_mhnc(this, 'mhnc', "Mid(High)Near", f, f, f)
    , m_mhfc(this, 'mhfc', "Mid(High)Far", f, f, f)
    , m_cfhd(this, 'cfhd', "Far(High)距離", f, f, f)
    , m_cfha(this, 'cfha', "Far(High)アングル", f, f, f)
    , m_cfhf(this, 'cfhf', "Far(High)ＦＯＶ", f, f, f)
    , m_cfho(this, 'cfho', "Far(High)オフセット", f, f, f)
    , m_cfhw(this, 'cfhw', "Far(High)ウェイト", f, f, f)
    , m_fhdt(this, 'fhdt', "Far(High)Detached", f, f, f)
    , m_fhnc(this, 'fhnc', "Far(High)Near", f, f, f)
    , m_fhfc(this, 'fhfc', "Far(High)Far", f, f, f)
    , m_zmdt(this, 'zmdt', "ZOOM 距離", f, f, f)
    , m_zman(this, 'zman', "ZOOM アングル", f, f, f)
    , m_zmfv(this, 'zmfv', "ZOOM ＦＯＶ", f, f, f)
    , m_clcr(this, 'clcr', "コリジョン半径", 300.0f, 0.0f, 500.0f)
    , m_clms(this, 'clms', "コリジョン補間速度", 0.005f, 0.001f, 1.0f)
    , m_clmh(this, 'clmh', "コリジョン補正高", 5.0f, 0.0f, 100.0f)
    , m_clnh(this, 'clnh', "コリジョン無し高", 25.0f, 0.0f, 500.0f)
    , m_cpmd(this, 'cpmd', "設定変更速度", 0.1f, 0.0f, 1.0f)
    , m_cmmt(this, 'cmmt', "回転速度", 0.2f, 0.0f, 1.0f)
    , m_cmft(this, 'cmft', "回転追従時間", 0.6f, 0.0f, 3.0f)
    , m_cmta(this, 'cmta', "回転加速度", 0.005f, 0.0f, 1.0f)
    , m_cmtm(this, 'cmtm', "回転最高速度", 0.9f, 0.0f, 5.0f)
    , m_cmtb(this, 'cmtb', "回転減衰率", 0.85f, 0.0f, 1.0f)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	extsh.   r0, r4
	lis      r4, lbl_80484190@ha
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_80484190@l
	stw      r30, 8(r1)
	mr       r30, r3
	beq      lbl_80250FFC
	addi     r0, r30, 0x994
	stw      r0, 0(r30)

lbl_80250FFC:
	li       r0, 0
	lis      r5, 0x636E6C64@ha
	stw      r0, 4(r30)
	addi     r0, r31, 0x238
	mr       r4, r30
	addi     r3, r30, 0xc
	stw      r0, 8(r30)
	addi     r5, r5, 0x636E6C64@l
	addi     r6, r31, 0x244
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6C61@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8E4@sda21(r2)
	stw      r0, 0xc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x34
	stfs     f0, 0x24(r30)
	addi     r5, r5, 0x636E6C61@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x254
	stfs     f1, 0x2c(r30)
	stfs     f0, 0x30(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6C66@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C8@sda21(r2)
	stw      r0, 0x34(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x5c
	stfs     f0, 0x4c(r30)
	addi     r5, r5, 0x636E6C66@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x268
	stfs     f1, 0x54(r30)
	stfs     f0, 0x58(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6C6F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8A0@sda21(r2)
	stw      r0, 0x5c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x84
	stfs     f0, 0x74(r30)
	addi     r5, r5, 0x636E6C6F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x278
	stfs     f1, 0x7c(r30)
	stfs     f0, 0x80(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6C77@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B4@sda21(r2)
	stw      r0, 0x84(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0xac
	stfs     f0, 0x9c(r30)
	addi     r5, r5, 0x636E6C77@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x28c
	stfs     f1, 0xa4(r30)
	stfs     f0, 0xa8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E6C6474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	stw      r0, 0xac(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0xd4
	stfs     f0, 0xc4(r30)
	addi     r5, r5, 0x6E6C6474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x2a0
	stfs     f1, 0xcc(r30)
	stfs     f0, 0xd0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E6C6E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F8@sda21(r2)
	stw      r0, 0xd4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0xfc
	stfs     f0, 0xec(r30)
	addi     r5, r5, 0x6E6C6E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x2b4
	stfs     f1, 0xf4(r30)
	stfs     f0, 0xf8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E6C6663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0xfc(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x124
	stfs     f1, 0x114(r30)
	addi     r5, r5, 0x6E6C6663@l
	addi     r6, r31, 0x2c4
	stfs     f1, 0x11c(r30)
	stfs     f0, 0x120(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6C64@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x124(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x14c
	stfs     f1, 0x13c(r30)
	addi     r5, r5, 0x636D6C64@l
	addi     r6, r31, 0x2d4
	stfs     f0, 0x144(r30)
	stfs     f1, 0x148(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6C61@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8E4@sda21(r2)
	stw      r0, 0x14c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x174
	stfs     f0, 0x164(r30)
	addi     r5, r5, 0x636D6C61@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x2e4
	stfs     f1, 0x16c(r30)
	stfs     f0, 0x170(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6C66@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A900@sda21(r2)
	stw      r0, 0x174(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x19c
	stfs     f0, 0x18c(r30)
	addi     r5, r5, 0x636D6C66@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x2f8
	stfs     f1, 0x194(r30)
	stfs     f0, 0x198(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6C6F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A904@sda21(r2)
	stw      r0, 0x19c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x1c4
	stfs     f0, 0x1b4(r30)
	addi     r5, r5, 0x636D6C6F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x308
	stfs     f1, 0x1bc(r30)
	stfs     f0, 0x1c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6C77@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A908@sda21(r2)
	stw      r0, 0x1c4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x1ec
	stfs     f0, 0x1dc(r30)
	addi     r5, r5, 0x636D6C77@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x31c
	stfs     f1, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D6C6474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	stw      r0, 0x1ec(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x214
	stfs     f0, 0x204(r30)
	addi     r5, r5, 0x6D6C6474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x330
	stfs     f1, 0x20c(r30)
	stfs     f0, 0x210(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D6C6E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A90C@sda21(r2)
	stw      r0, 0x214(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x23c
	stfs     f0, 0x22c(r30)
	addi     r5, r5, 0x6D6C6E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x344
	stfs     f1, 0x234(r30)
	stfs     f0, 0x238(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D6C6663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0x23c(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x264
	stfs     f1, 0x254(r30)
	addi     r5, r5, 0x6D6C6663@l
	addi     r6, r31, 0x354
	stfs     f1, 0x25c(r30)
	stfs     f0, 0x260(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666C64@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x264(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x28c
	stfs     f1, 0x27c(r30)
	addi     r5, r5, 0x63666C64@l
	addi     r6, r31, 0x360
	stfs     f0, 0x284(r30)
	stfs     f1, 0x288(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666C61@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A910@sda21(r2)
	stw      r0, 0x28c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x2b4
	stfs     f0, 0x2a4(r30)
	addi     r5, r5, 0x63666C61@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x370
	stfs     f1, 0x2ac(r30)
	stfs     f0, 0x2b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666C66@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B4@sda21(r2)
	stw      r0, 0x2b4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x2dc
	stfs     f0, 0x2cc(r30)
	addi     r5, r5, 0x63666C66@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x384
	stfs     f1, 0x2d4(r30)
	stfs     f0, 0x2d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666C6F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A914@sda21(r2)
	stw      r0, 0x2dc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x304
	stfs     f0, 0x2f4(r30)
	addi     r5, r5, 0x63666C6F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x394
	stfs     f1, 0x2fc(r30)
	stfs     f0, 0x300(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666C77@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A918@sda21(r2)
	stw      r0, 0x304(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x32c
	stfs     f0, 0x31c(r30)
	addi     r5, r5, 0x63666C77@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x3a8
	stfs     f1, 0x324(r30)
	stfs     f0, 0x328(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x666C6474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A91C@sda21(r2)
	stw      r0, 0x32c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x354
	stfs     f0, 0x344(r30)
	addi     r5, r5, 0x666C6474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x3bc
	stfs     f1, 0x34c(r30)
	stfs     f0, 0x350(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x666C6E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A920@sda21(r2)
	stw      r0, 0x354(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x37c
	stfs     f0, 0x36c(r30)
	addi     r5, r5, 0x666C6E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x3d0
	stfs     f1, 0x374(r30)
	stfs     f0, 0x378(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x666C6663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0x37c(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x3a4
	stfs     f1, 0x394(r30)
	addi     r5, r5, 0x666C6663@l
	addi     r6, r31, 0x3e0
	stfs     f1, 0x39c(r30)
	stfs     f0, 0x3a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6864@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x3a4(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x3cc
	stfs     f1, 0x3bc(r30)
	addi     r5, r5, 0x636E6864@l
	addi     r6, r31, 0x3ec
	stfs     f0, 0x3c4(r30)
	stfs     f1, 0x3c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6861@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A910@sda21(r2)
	stw      r0, 0x3cc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x3f4
	stfs     f0, 0x3e4(r30)
	addi     r5, r5, 0x636E6861@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x3fc
	stfs     f1, 0x3ec(r30)
	stfs     f0, 0x3f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6866@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	stw      r0, 0x3f4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x41c
	stfs     f0, 0x40c(r30)
	addi     r5, r5, 0x636E6866@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x410
	stfs     f1, 0x414(r30)
	stfs     f0, 0x418(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E686F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8A0@sda21(r2)
	stw      r0, 0x41c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x444
	stfs     f0, 0x434(r30)
	addi     r5, r5, 0x636E686F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x424
	stfs     f1, 0x43c(r30)
	stfs     f0, 0x440(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636E6877@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8D8@sda21(r2)
	stw      r0, 0x444(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x46c
	stfs     f0, 0x45c(r30)
	addi     r5, r5, 0x636E6877@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x43c
	stfs     f1, 0x464(r30)
	stfs     f0, 0x468(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E686474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	stw      r0, 0x46c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x494
	stfs     f0, 0x484(r30)
	addi     r5, r5, 0x6E686474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x450
	stfs     f1, 0x48c(r30)
	stfs     f0, 0x490(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E686E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A924@sda21(r2)
	stw      r0, 0x494(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x4bc
	stfs     f0, 0x4ac(r30)
	addi     r5, r5, 0x6E686E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x464
	stfs     f1, 0x4b4(r30)
	stfs     f0, 0x4b8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6E686663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0x4bc(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x4e4
	stfs     f1, 0x4d4(r30)
	addi     r5, r5, 0x6E686663@l
	addi     r6, r31, 0x474
	stfs     f1, 0x4dc(r30)
	stfs     f0, 0x4e0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6864@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x4e4(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x50c
	stfs     f1, 0x4fc(r30)
	addi     r5, r5, 0x636D6864@l
	addi     r6, r31, 0x484
	stfs     f0, 0x504(r30)
	stfs     f1, 0x508(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6861@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A910@sda21(r2)
	stw      r0, 0x50c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x534
	stfs     f0, 0x524(r30)
	addi     r5, r5, 0x636D6861@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x494
	stfs     f1, 0x52c(r30)
	stfs     f0, 0x530(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6866@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	stw      r0, 0x534(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x55c
	stfs     f0, 0x54c(r30)
	addi     r5, r5, 0x636D6866@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x4a8
	stfs     f1, 0x554(r30)
	stfs     f0, 0x558(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D686F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8C8@sda21(r2)
	stw      r0, 0x55c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x584
	stfs     f0, 0x574(r30)
	addi     r5, r5, 0x636D686F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x4b8
	stfs     f1, 0x57c(r30)
	stfs     f0, 0x580(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6877@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A928@sda21(r2)
	stw      r0, 0x584(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x5ac
	stfs     f0, 0x59c(r30)
	addi     r5, r5, 0x636D6877@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x4cc
	stfs     f1, 0x5a4(r30)
	stfs     f0, 0x5a8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D686474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	stw      r0, 0x5ac(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x5d4
	stfs     f0, 0x5c4(r30)
	addi     r5, r5, 0x6D686474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x4e0
	stfs     f1, 0x5cc(r30)
	stfs     f0, 0x5d0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D686E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A92C@sda21(r2)
	stw      r0, 0x5d4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x5fc
	stfs     f0, 0x5ec(r30)
	addi     r5, r5, 0x6D686E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x4f4
	stfs     f1, 0x5f4(r30)
	stfs     f0, 0x5f8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6D686663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0x5fc(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x624
	stfs     f1, 0x614(r30)
	addi     r5, r5, 0x6D686663@l
	addi     r6, r31, 0x504
	stfs     f1, 0x61c(r30)
	stfs     f0, 0x620(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666864@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x624(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x64c
	stfs     f1, 0x63c(r30)
	addi     r5, r5, 0x63666864@l
	addi     r6, r31, 0x514
	stfs     f0, 0x644(r30)
	stfs     f1, 0x648(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666861@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A930@sda21(r2)
	stw      r0, 0x64c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x674
	stfs     f0, 0x664(r30)
	addi     r5, r5, 0x63666861@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x524
	stfs     f1, 0x66c(r30)
	stfs     f0, 0x670(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666866@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	stw      r0, 0x674(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x69c
	stfs     f0, 0x68c(r30)
	addi     r5, r5, 0x63666866@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x538
	stfs     f1, 0x694(r30)
	stfs     f0, 0x698(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x6366686F@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A934@sda21(r2)
	stw      r0, 0x69c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x6c4
	stfs     f0, 0x6b4(r30)
	addi     r5, r5, 0x6366686F@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x548
	stfs     f1, 0x6bc(r30)
	stfs     f0, 0x6c0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63666877@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	stw      r0, 0x6c4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x6ec
	stfs     f0, 0x6dc(r30)
	addi     r5, r5, 0x63666877@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x55c
	stfs     f1, 0x6e4(r30)
	stfs     f0, 0x6e8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66686474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A938@sda21(r2)
	stw      r0, 0x6ec(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x714
	stfs     f0, 0x704(r30)
	addi     r5, r5, 0x66686474@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x570
	stfs     f1, 0x70c(r30)
	stfs     f0, 0x710(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66686E63@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A93C@sda21(r2)
	stw      r0, 0x714(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x73c
	stfs     f0, 0x72c(r30)
	addi     r5, r5, 0x66686E63@l
	lfs      f0, lbl_8051A8E0@sda21(r2)
	addi     r6, r31, 0x584
	stfs     f1, 0x734(r30)
	stfs     f0, 0x738(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x66686663@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A898@sda21(r2)
	stw      r0, 0x73c(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A8FC@sda21(r2)
	addi     r3, r30, 0x764
	stfs     f1, 0x754(r30)
	addi     r5, r5, 0x66686663@l
	addi     r6, r31, 0x594
	stfs     f1, 0x75c(r30)
	stfs     f0, 0x760(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x7A6D6474@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A8FC@sda21(r2)
	stw      r0, 0x764(r30)
	mr       r4, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x78c
	stfs     f1, 0x77c(r30)
	addi     r5, r5, 0x7A6D6474@l
	addi     r6, r31, 0x5a4
	stfs     f0, 0x784(r30)
	stfs     f1, 0x788(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x7A6D616E@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A940@sda21(r2)
	stw      r0, 0x78c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A8A0@sda21(r2)
	addi     r3, r30, 0x7b4
	stfs     f0, 0x7a4(r30)
	addi     r5, r5, 0x7A6D616E@l
	lfs      f0, lbl_8051A8E8@sda21(r2)
	addi     r6, r31, 0x5b0
	stfs     f1, 0x7ac(r30)
	stfs     f0, 0x7b0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x7A6D6676@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A944@sda21(r2)
	stw      r0, 0x7b4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x7dc
	stfs     f0, 0x7cc(r30)
	addi     r5, r5, 0x7A6D6676@l
	lfs      f0, lbl_8051A8EC@sda21(r2)
	addi     r6, r31, 0x5c0
	stfs     f1, 0x7d4(r30)
	stfs     f0, 0x7d8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636C6372@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B8@sda21(r2)
	stw      r0, 0x7dc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A898@sda21(r2)
	addi     r3, r30, 0x804
	stfs     f0, 0x7f4(r30)
	addi     r5, r5, 0x636C6372@l
	lfs      f0, lbl_8051A8F0@sda21(r2)
	addi     r6, r31, 0x5cc
	stfs     f1, 0x7fc(r30)
	stfs     f0, 0x800(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636C6D73@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A948@sda21(r2)
	stw      r0, 0x804(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x82c
	stfs     f0, 0x81c(r30)
	addi     r5, r5, 0x636C6D73@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x5dc
	stfs     f1, 0x824(r30)
	stfs     f0, 0x828(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636C6D68@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A94C@sda21(r2)
	stw      r0, 0x82c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A950@sda21(r2)
	addi     r3, r30, 0x854
	stfs     f0, 0x844(r30)
	addi     r5, r5, 0x636C6D68@l
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r6, r31, 0x5f0
	stfs     f1, 0x84c(r30)
	stfs     f0, 0x850(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636C6E68@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	stw      r0, 0x854(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x87c
	stfs     f0, 0x86c(r30)
	addi     r5, r5, 0x636C6E68@l
	lfs      f0, lbl_8051A8B0@sda21(r2)
	addi     r6, r31, 0x604
	stfs     f1, 0x874(r30)
	stfs     f0, 0x878(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x63706D64@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A8B4@sda21(r2)
	stw      r0, 0x87c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x8a4
	stfs     f0, 0x894(r30)
	addi     r5, r5, 0x63706D64@l
	lfs      f0, lbl_8051A8F4@sda21(r2)
	addi     r6, r31, 0x618
	stfs     f1, 0x89c(r30)
	stfs     f0, 0x8a0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6D74@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A954@sda21(r2)
	stw      r0, 0x8a4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x8cc
	stfs     f0, 0x8bc(r30)
	addi     r5, r5, 0x636D6D74@l
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r6, r31, 0x628
	stfs     f1, 0x8c4(r30)
	stfs     f0, 0x8c8(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D6674@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A958@sda21(r2)
	stw      r0, 0x8cc(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x8f4
	stfs     f0, 0x8e4(r30)
	addi     r5, r5, 0x636D6674@l
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r6, r31, 0x634
	stfs     f1, 0x8ec(r30)
	stfs     f0, 0x8f0(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D7461@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A95C@sda21(r2)
	stw      r0, 0x8f4(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x91c
	stfs     f0, 0x90c(r30)
	addi     r5, r5, 0x636D7461@l
	lfs      f0, lbl_8051A8A4@sda21(r2)
	addi     r6, r31, 0x644
	stfs     f1, 0x914(r30)
	stfs     f0, 0x918(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D746D@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A94C@sda21(r2)
	stw      r0, 0x91c(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x944
	stfs     f0, 0x934(r30)
	addi     r5, r5, 0x636D746D@l
	lfs      f0, lbl_8051A898@sda21(r2)
	addi     r6, r31, 0x650
	stfs     f1, 0x93c(r30)
	stfs     f0, 0x940(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lis      r5, 0x636D7462@ha
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f0, lbl_8051A960@sda21(r2)
	stw      r0, 0x944(r30)
	mr       r4, r30
	lfs      f1, lbl_8051A89C@sda21(r2)
	addi     r3, r30, 0x96c
	stfs     f0, 0x95c(r30)
	addi     r5, r5, 0x636D7462@l
	lfs      f0, lbl_8051A8A8@sda21(r2)
	addi     r6, r31, 0x660
	stfs     f1, 0x964(r30)
	stfs     f0, 0x968(r30)
	bl       __ct__8BaseParmFP10ParametersUlPc
	lis      r3, "__vt__7Parm<f>"@ha
	lfs      f2, lbl_8051A964@sda21(r2)
	addi     r0, r3, "__vt__7Parm<f>"@l
	lfs      f1, lbl_8051A89C@sda21(r2)
	stw      r0, 0x96c(r30)
	mr       r3, r30
	lfs      f0, lbl_8051A898@sda21(r2)
	stfs     f2, 0x984(r30)
	stfs     f1, 0x98c(r30)
	stfs     f0, 0x990(r30)
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
 * Address:	80251E44
 * Size:	0000A8
 */
void CameraMgr::setViewport(Viewport*, int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	slwi     r31, r5, 2
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x20(r3)
	stwx     r4, r3, r31
	lwz      r3, 0x20(r30)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	bne      lbl_80251E94
	lis      r3, lbl_804847FC@ha
	lis      r5, lbl_8048480C@ha
	addi     r3, r3, lbl_804847FC@l
	li       r4, 0x52
	addi     r5, r5, lbl_8048480C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80251E94:
	lwz      r4, 0x20(r30)
	lwz      r3, 0x24(r30)
	lwzx     r4, r4, r31
	lwz      r0, 0x44(r4)
	stwx     r0, r3, r31
	lwz      r3, 0x24(r30)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	bne      lbl_80251ED4
	lis      r3, lbl_804847FC@ha
	lis      r5, lbl_8048480C@ha
	addi     r3, r3, lbl_804847FC@l
	li       r4, 0x55
	addi     r5, r5, lbl_8048480C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80251ED4:
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
 * Address:	80251EEC
 * Size:	00014C
 */
void CameraMgr::init(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lis      r3, lbl_80484190@ha
	lwz      r0, 0x28(r28)
	addi     r31, r3, lbl_80484190@l
	cmplwi   r0, 0
	bne      lbl_80251F38
	addi     r3, r31, 0x66c
	addi     r5, r31, 0x67c
	li       r4, 0x5e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80251F38:
	lwz      r0, 0x2c(r28)
	cmplwi   r0, 0
	bne      lbl_80251F58
	addi     r3, r31, 0x66c
	addi     r5, r31, 0x67c
	li       r4, 0x5f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80251F58:
	lwz      r0, 0x30(r28)
	cmplwi   r0, 0
	bne      lbl_80251F78
	addi     r3, r31, 0x66c
	addi     r5, r31, 0x67c
	li       r4, 0x60
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80251F78:
	stw      r29, 0x18(r28)
	li       r30, 0
	li       r29, 0
	stw      r30, 0x34(r28)
	stw      r30, 0x38(r28)

lbl_80251F8C:
	lwz      r3, 0x1c(r28)
	li       r0, 0
	stwx     r0, r3, r30
	lwz      r3, 0x24(r28)
	lwzx     r3, r3, r30
	cmplwi   r3, 0
	beq      lbl_80251FF4
	lwz      r0, 0x18(r28)
	cmpwi    r0, 0
	bne      lbl_80251FC0
	lwz      r4, 0x28(r28)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms
	b        lbl_80251FC8

lbl_80251FC0:
	lwz      r4, 0x2c(r28)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms

lbl_80251FC8:
	lwz      r3, 0x24(r28)
	lwz      r4, 0x30(r28)
	lwzx     r3, r3, r30
	bl       setVibrationParms__Q24Game10PlayCameraFPQ24Game14VibrationParms
	lwz      r3, 0x24(r28)
	lwzx     r3, r3, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	b        lbl_80252008

lbl_80251FF4:
	addi     r3, r31, 0x66c
	addi     r5, r31, 0x688
	li       r4, 0x7c
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80252008:
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_80251F8C
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
 * Address:	80252038
 * Size:	000094
 */
void CameraMgr::setCameraAngle(float, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x34(r1)
	addi     r4, r1, 8
	stfd     f31, 0x28(r1)
	fmr      f31, f1
	stw      r31, 0x24(r1)
	stw      r30, 0x20(r1)
	stw      r29, 0x1c(r1)
	mr       r29, r3
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802520AC
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_802520A0

lbl_80252080:
	lwz      r3, 0x24(r29)
	lwzx     r3, r3, r31
	cmplwi   r3, 0
	beq      lbl_80252098
	fmr      f1, f31
	bl       setCameraAngle__Q24Game10PlayCameraFf

lbl_80252098:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802520A0:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_80252080

lbl_802520AC:
	lwz      r0, 0x34(r1)
	lfd      f31, 0x28(r1)
	lwz      r31, 0x24(r1)
	lwz      r30, 0x20(r1)
	lwz      r29, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	802520CC
 * Size:	000170
 */
void CameraMgr::update()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	bl       isCameraUpdateOn__Q24Game9CameraMgrFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252220
	lwz      r0, 0x18(r31)
	cmpwi    r0, 2
	bne      lbl_80252128
	li       r29, 0
	li       r30, 0

lbl_80252108:
	lwz      r3, 0x24(r31)
	lwzx     r3, r3, r30
	bl       update__6CameraFv
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_80252108
	b        lbl_802521D0

lbl_80252128:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	beq      lbl_802521AC
	lhz      r29, 0x2dc(r3)
	lwz      r3, 0x24(r31)
	slwi     r30, r29, 2
	lwzx     r3, r3, r30
	bl       update__6CameraFv
	lwz      r3, 0x24(r31)
	addi     r4, r1, 0x38
	lwzx     r3, r3, r30
	addi     r3, r3, 0x144
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	addi     r4, r1, 0xc
	lwzx     r3, r3, r30
	bl       getCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	xori     r0, r29, 1
	lwz      r4, 0x24(r31)
	slwi     r30, r0, 2
	addi     r3, r1, 0x38
	lwzx     r4, r4, r30
	addi     r4, r4, 0x144
	bl       PSMTXCopy
	lwz      r3, 0x24(r31)
	addi     r4, r1, 0xc
	lwzx     r3, r3, r30
	bl       setCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	lwz      r3, 0x24(r31)
	lwzx     r3, r3, r30
	bl       noUpdate__Q24Game10PlayCameraFv
	b        lbl_802521D0

lbl_802521AC:
	li       r29, 0
	li       r30, 0

lbl_802521B4:
	lwz      r3, 0x24(r31)
	lwzx     r3, r3, r30
	bl       update__6CameraFv
	addi     r29, r29, 1
	addi     r30, r30, 4
	cmpwi    r29, 2
	blt      lbl_802521B4

lbl_802521D0:
	lwz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80252220
	lwz      r3, 0x24(r31)
	lwz      r4, 0(r3)
	lwz      r3, 4(r3)
	lwz      r4, 0x19c(r4)
	lwz      r0, 0x19c(r3)
	or.      r0, r4, r0
	bne      lbl_80252220
	lwz      r0, 0x18(r31)
	addi     r4, r1, 8
	stw      r0, 8(r1)
	lwz      r3, 0x34(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x34(r31)

lbl_80252220:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025223C
 * Size:	000154
 */
void CameraMgr::startVibration(int, Vector3f&, int)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r27, 0x2c(r1)
	mr       r27, r3
	mr       r28, r4
	mr       r29, r5
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_8025227C
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025237C

lbl_8025227C:
	mr       r5, r6
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025237C
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80252370

lbl_802522A0:
	lwz      r3, 0x20(r27)
	lwzx     r3, r3, r31
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252368
	mr       r3, r27
	mr       r4, r28
	mr       r5, r30
	bl       isVibrationStart__Q24Game9CameraMgrFii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252368
	lwz      r4, 0x24(r27)
	addi     r3, r1, 0x10
	lwzx     r4, r4, r31
	lwz      r4, 0x198(r4)
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 4(r29)
	lfs      f0, 0x14(r1)
	lfs      f3, 0(r29)
	fsubs    f4, f1, f0
	lfs      f2, 0x10(r1)
	lfs      f1, 8(r29)
	lfs      f0, 0x18(r1)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_8051A89C@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8025233C
	ble      lbl_80252340
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80252340

lbl_8025233C:
	fmr      f1, f0

lbl_80252340:
	lwz      r3, 0x30(r27)
	lfs      f2, 0x2f4(r3)
	fcmpo    cr0, f1, f2
	bge      lbl_80252368
	fsubs    f0, f2, f1
	lwz      r3, 0x24(r27)
	mr       r4, r28
	lwzx     r3, r3, r31
	fdivs    f1, f0, f2
	bl       startVibration__Q24Game10PlayCameraFif

lbl_80252368:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80252370:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_802522A0

lbl_8025237C:
	lmw      r27, 0x2c(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252390
 * Size:	0000DC
 */
void CameraMgr::startVibration(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 0x38(r3)
	cmplwi   r0, 0
	beq      lbl_802523D8
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_8025244C

lbl_802523D8:
	addi     r4, r1, 8
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025244C
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80252440

lbl_802523F8:
	lwz      r3, 0x20(r28)
	lwzx     r3, r3, r31
	bl       viewable__8ViewportFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252438
	mr       r3, r28
	mr       r4, r29
	mr       r5, r30
	bl       isVibrationStart__Q24Game9CameraMgrFii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252438
	lwz      r3, 0x24(r28)
	mr       r4, r29
	lfs      f1, lbl_8051A898@sda21(r2)
	lwzx     r3, r3, r31
	bl       startVibration__Q24Game10PlayCameraFif

lbl_80252438:
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80252440:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_802523F8

lbl_8025244C:
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
 * Address:	8025246C
 * Size:	000070
 */
void CameraMgr::controllerLock(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802524C8
	lwz      r0, 8(r1)
	li       r4, 0
	mr       r6, r0
	slwi     r5, r0, 2
	b        lbl_802524BC

lbl_802524A8:
	lwz      r3, 0x24(r31)
	addi     r6, r6, 1
	lwzx     r3, r3, r5
	addi     r5, r5, 4
	stb      r4, 0x248(r3)

lbl_802524BC:
	lwz      r0, 0xc(r1)
	cmpw     r6, r0
	blt      lbl_802524A8

lbl_802524C8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	802524DC
 * Size:	000070
 */
void CameraMgr::controllerUnLock(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	mr       r31, r3
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_80252538
	lwz      r0, 8(r1)
	li       r4, 1
	mr       r6, r0
	slwi     r5, r0, 2
	b        lbl_8025252C

lbl_80252518:
	lwz      r3, 0x24(r31)
	addi     r6, r6, 1
	lwzx     r3, r3, r5
	addi     r5, r5, 4
	stb      r4, 0x248(r3)

lbl_8025252C:
	lwz      r0, 0xc(r1)
	cmpw     r6, r0
	blt      lbl_80252518

lbl_80252538:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8025254C
 * Size:	000090
 */
void CameraMgr::startDemoCamera(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	mr       r0, r4
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r5
	mr       r5, r0
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_802525BC
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_802525B0

lbl_80252598:
	lwz      r3, 0x24(r28)
	mr       r4, r29
	lwzx     r3, r3, r31
	bl       startDemoCamera__Q24Game10PlayCameraFi
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_802525B0:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_80252598

lbl_802525BC:
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
 * Address:	802525DC
 * Size:	00007C
 */
void CameraMgr::finishDemoCamera(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	mr       r5, r4
	stw      r0, 0x24(r1)
	addi     r4, r1, 8
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       isStartAndEnd__Q24Game9CameraMgrFPii
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025263C
	lwz      r0, 8(r1)
	mr       r30, r0
	slwi     r31, r0, 2
	b        lbl_80252630

lbl_8025261C:
	lwz      r3, 0x24(r29)
	lwzx     r3, r3, r31
	bl       finishDemoCamera__Q24Game10PlayCameraFv
	addi     r31, r31, 4
	addi     r30, r30, 1

lbl_80252630:
	lwz      r0, 0xc(r1)
	cmpw     r30, r0
	blt      lbl_8025261C

lbl_8025263C:
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
 * Address:	80252658
 * Size:	000160
 */
void CameraMgr::changePlayerMode(int, IDelegate1<Game::CameraArg*>*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stw      r31, 0x6c(r1)
	mr       r31, r5
	stw      r30, 0x68(r1)
	mr       r30, r4
	cmpwi    r30, 1
	stw      r29, 0x64(r1)
	mr       r29, r3
	stw      r28, 0x60(r1)
	li       r28, 0
	beq      lbl_802526FC
	bge      lbl_8025269C
	cmpwi    r30, 0
	bge      lbl_802526A8
	b        lbl_80252790

lbl_8025269C:
	cmpwi    r30, 3
	bge      lbl_80252790
	b        lbl_80252750

lbl_802526A8:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 1
	bne      lbl_802526D8
	lwz      r3, 0x24(r29)
	addi     r4, r1, 0x34
	lwz      r3, 4(r3)
	bl       getCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	lwz      r3, 0x24(r29)
	addi     r4, r1, 0x34
	lwz      r3, 0(r3)
	bl       setCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	li       r28, 1

lbl_802526D8:
	lwz      r3, 0x24(r29)
	lwz      r4, 0x28(r29)
	lwz      r3, 0(r3)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms
	lwz      r3, 0x24(r29)
	mr       r4, r28
	lwz      r3, 0(r3)
	bl       changePlayerMode__Q24Game10PlayCameraFb
	b        lbl_80252790

lbl_802526FC:
	lwz      r0, 0x18(r29)
	cmpwi    r0, 0
	bne      lbl_8025272C
	lwz      r3, 0x24(r29)
	addi     r4, r1, 8
	lwz      r3, 0(r3)
	bl       getCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	lwz      r3, 0x24(r29)
	addi     r4, r1, 8
	lwz      r3, 4(r3)
	bl       setCameraData__Q24Game10PlayCameraFRQ24Game10CameraData
	li       r28, 1

lbl_8025272C:
	lwz      r3, 0x24(r29)
	lwz      r4, 0x28(r29)
	lwz      r3, 4(r3)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms
	lwz      r3, 0x24(r29)
	mr       r4, r28
	lwz      r3, 4(r3)
	bl       changePlayerMode__Q24Game10PlayCameraFb
	b        lbl_80252790

lbl_80252750:
	lwz      r3, 0x24(r29)
	lwz      r4, 0x2c(r29)
	lwz      r3, 0(r3)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms
	lwz      r3, 0x24(r29)
	li       r4, 0
	lwz      r3, 0(r3)
	bl       changePlayerMode__Q24Game10PlayCameraFb
	lwz      r3, 0x24(r29)
	lwz      r4, 0x2c(r29)
	lwz      r3, 4(r3)
	bl       setCameraParms__Q24Game10PlayCameraFPQ24Game11CameraParms
	lwz      r3, 0x24(r29)
	li       r4, 0
	lwz      r3, 4(r3)
	bl       changePlayerMode__Q24Game10PlayCameraFb

lbl_80252790:
	stw      r30, 0x18(r29)
	stw      r31, 0x34(r29)
	lwz      r0, 0x74(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	802527B8
 * Size:	000058
 */
bool CameraMgr::isChangePlayer()
{
	/*
	lwz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_802527CC
	li       r3, 1
	blr

lbl_802527CC:
	lwz      r4, 0x24(r3)
	lwz      r3, 0(r4)
	lwz      r3, 0x19c(r3)
	clrlwi.  r0, r3, 0x1f
	mr       r5, r3
	beq      lbl_802527EC
	li       r3, 1
	blr

lbl_802527EC:
	lwz      r3, 4(r4)
	lwz      r3, 0x19c(r3)
	or       r5, r5, r3
	clrlwi.  r0, r5, 0x1f
	beq      lbl_80252808
	li       r3, 1
	blr

lbl_80252808:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252810
 * Size:	000058
 */
void CameraMgr::setZukanCamera(LookAtCamera*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	cmplwi   r5, 0
	beq      lbl_8025283C
	lwz      r0, 0x44(r5)
	cmpwi    r0, 4
	bne      lbl_8025283C
	stw      r4, 0x38(r3)
	b        lbl_80252858

lbl_8025283C:
	lis      r3, lbl_804847FC@ha
	lis      r5, lbl_80484828@ha
	addi     r3, r3, lbl_804847FC@l
	li       r4, 0x1cf
	addi     r5, r5, lbl_80484828@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80252858:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252868
 * Size:	000028
 */
bool CameraMgr::isCameraUpdateOn()
{
	/*
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80252888
	lbz      r0, 0x4a(r3)
	cmplwi   r0, 0
	bne      lbl_80252888
	li       r3, 1
	blr

lbl_80252888:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80252890
 * Size:	000068
 */
void CameraMgr::isStartAndEnd(int*, int)
{
	/*
	cmpwi    r5, 2
	bne      lbl_802528B0
	li       r3, 0
	li       r0, 2
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_802528B0:
	cmpwi    r5, 0
	bne      lbl_802528D0
	li       r3, 0
	li       r0, 1
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_802528D0:
	cmpwi    r5, 1
	bne      lbl_802528F0
	li       r3, 1
	li       r0, 2
	stw      r3, 0(r4)
	li       r3, 1
	stw      r0, 4(r4)
	blr

lbl_802528F0:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	802528F8
 * Size:	000084
 */
bool CameraMgr::isVibrationStart(int, int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	slwi     r31, r5, 2
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x24(r3)
	lwzx     r3, r3, r31
	bl       isVibration__Q24Game10PlayCameraFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8025294C
	lwz      r3, 0x1c(r29)
	lwzx     r0, r3, r31
	cmpw     r30, r0
	blt      lbl_8025295C
	stwx     r30, r3, r31
	li       r3, 1
	b        lbl_80252960

lbl_8025294C:
	lwz      r4, 0x1c(r29)
	li       r3, 1
	stwx     r30, r4, r31
	b        lbl_80252960

lbl_8025295C:
	li       r3, 0

lbl_80252960:
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
 * Address:	8025297C
 * Size:	0000A8
 */
void CameraMgr::readCameraParms(char*)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r5, 0
	li       r6, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r7, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	mr       r30, r3
	mr       r3, r4
	li       r4, 0
	stw      r0, 8(r1)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_802529F0
	mr       r4, r31
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	mr       r3, r30
	addi     r4, r1, 0x10
	bl       readParameter__Q24Game9CameraMgrFR6Stream
	mr       r3, r31
	bl       __dla__FPv
	b        lbl_80252A0C

lbl_802529F0:
	lis      r3, lbl_804847FC@ha
	lis      r5, lbl_80484838@ha
	addi     r3, r3, lbl_804847FC@l
	li       r4, 0x22f
	addi     r5, r5, lbl_80484838@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80252A0C:
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
 * Address:	80252A24
 * Size:	000074
 */
void CameraMgr::readParameter(Stream&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 1
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	stw      r0, 0xc(r4)
	lwz      r0, 0xc(r4)
	cmpwi    r0, 1
	bne      lbl_80252A5C
	li       r0, 0
	stw      r0, 0x414(r31)

lbl_80252A5C:
	lwz      r3, 0x28(r30)
	mr       r4, r31
	bl       read__10ParametersFR6Stream
	lwz      r3, 0x2c(r30)
	mr       r4, r31
	bl       read__10ParametersFR6Stream
	lwz      r3, 0x30(r30)
	mr       r4, r31
	bl       read__10ParametersFR6Stream
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	80252A98
//  * Size:	000060
//  */
// CameraMgr::~CameraMgr()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	or.      r30, r3, r3
// 	beq      lbl_80252ADC
// 	lis      r5, __vt__Q24Game9CameraMgr@ha
// 	li       r4, 0
// 	addi     r0, r5, __vt__Q24Game9CameraMgr@l
// 	stw      r0, 0(r30)
// 	bl       __dt__5CNodeFv
// 	extsh.   r0, r31
// 	ble      lbl_80252ADC
// 	mr       r3, r30
// 	bl       __dl__FPv

// lbl_80252ADC:
// 	lwz      r0, 0x14(r1)
// 	mr       r3, r30
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

} // namespace Game

/*
 * --INFO--
 * Address:	80252AF8
 * Size:	000028
 */
void __sinit_CameraMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804C1BC8@ha
	stw      r0, lbl_80515D18@sda21(r13)
	stfsu    f0, lbl_804C1BC8@l(r3)
	stfs     f0, lbl_80515D1C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
