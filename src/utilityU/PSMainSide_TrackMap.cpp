#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    lbl_8049DE78:
        .asciz "PSMainSide_TrackMap.cpp"
        .asciz "not loaded\n"
        .asciz "endoffile"
        .skip 2
        .asciz "not find\ntrack map\n(%s)"
        .asciz "basic trk over\n(%s)\n(Cur=%d)"
        .skip 3
        .asciz "event trk over\n(%s)\n(Cur=%d)"
        .skip 3
        .asciz "otakara trk over\n(%s)\n(Cur=%d)"
        .skip 1
        .asciz "kehai trk over\n(%s)\n(Cur=%d)"
        .skip 3
        .asciz "battle trk over\n(%s)\n(Cur=%d)"
        .skip 2
        .asciz "ground trk over\n(%s)\n(Cur=%d)"
        .skip 2
        .asciz "abnormal pik num\n(%s)\n(Cur=%d)"
        .skip 1
        .asciz "abnormal pik mask\n(%s)\n(Cur=%d)"
        .asciz "file num over\ntrack map\n(%s)"
        .skip 3
        .asciz "P2Assert"
        .skip 3
        .asciz "not find info\n"
        .skip 1
        .asciz "basic trk over\n(Cur=%d)\n"
        .skip 3
        .asciz "event trk over\n(Cur=%d)\n"
        .skip 3
        .asciz "otakara trk over\n(Cur=%d)\n"
        .skip 1
        .asciz "kehai trk over\n(Cur=%d)\n"
        .skip 3
        .asciz "battle trk over\n(Cur=%d)\n"
        .skip 2
        .asciz "ground trk over\n(Cur=%d)\n"
        .skip 2
        .asciz "abnormal pik num\n(Cur=%d)\n"
        .skip 1
        .asciz "abnormal pik mask\n(Cur=%d)\n"
        .asciz "file num over\n"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q23PSM15BgmTrackMapFile
    __vt__Q23PSM15BgmTrackMapFile:
        .4byte 0
        .4byte 0
        .4byte __dt__Q23PSM15BgmTrackMapFileFv
        .4byte read__Q23PSM15BgmTrackMapFileFR6Stream
        .4byte 0
        .4byte 0
        .4byte "@28@__dt__Q23PSM15BgmTrackMapFileFv"
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    lbl_80520DB0:
        .asciz ""
        .skip 3
*/

namespace PSM {

/*
 * --INFO--
 * Address:	804718D0
 * Size:	0000A8
 */
BgmTrackMapFile::BgmTrackMapFile(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	bl       __ct__Q28PSSystem12TextDataBaseFv
	lis      r3, "__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@ha
	addic.   r4, r30, 0x1c
	addi     r0, r3,
"__vt__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@l stw      r0,
0x1c(r30) beq      lbl_80471908 addi     r4, r4, -28

lbl_80471908:
	lis      r3, __vt__Q23PSM15BgmTrackMapFile@ha
	stw      r4,
"sInstance__Q28PSSystem38SingletonBase<Q23PSM15BgmTrackMapFile>"@sda21(r13) addi
r3, r3, __vt__Q23PSM15BgmTrackMapFile@l clrlwi.  r0, r31, 0x18 stw      r3,
0(r30) addi     r4, r3, 0x10 li       r3, 0 stw      r4, 0x1c(r30) stw      r3,
0x20(r30) stw      r3, 0x24(r30) stb      r31, 0x28(r30) beq      lbl_8047195C
	li       r3, 0x7d0
	bl       __nwa__FUl
	lis      r4, __ct__Q23PSM11BgmTrackMapFv@ha
	li       r5, 0
	addi     r4, r4, __ct__Q23PSM11BgmTrackMapFv@l
	li       r6, 0x3e
	li       r7, 0x20
	bl       __construct_new_array
	stw      r3, 0x20(r30)

lbl_8047195C:
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
 * Address:	80471978
 * Size:	00077C
 */
void BgmTrackMapFile::readTrackMap(const char*)
{
	/*
	stwu     r1, -0x490(r1)
	mflr     r0
	stw      r0, 0x494(r1)
	stmw     r24, 0x470(r1)
	mr       r24, r4
	lis      r4, lbl_8049DE78@ha
	mr       r27, r3
	mr       r28, r5
	addi     r31, r4, lbl_8049DE78@l
	lwz      r0, 0x18(r24)
	cmplwi   r0, 0
	bne      lbl_804719BC
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804719BC:
	lwz      r4, 0x18(r24)
	addi     r3, r1, 0x48
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x54(r1)
	bne      lbl_804719E4
	li       r0, 0
	stw      r0, 0x45c(r1)

lbl_804719E4:
	li       r4, 0
	addi     r3, r1, 8
	stb      r4, 0x28(r1)
	stb      r4, 0x29(r1)
	stb      r4, 0x2a(r1)
	stb      r4, 0x2b(r1)
	stb      r4, 0x2c(r1)
	stb      r4, 0x2d(r1)
	b        lbl_80471A8C

lbl_80471A08:
	clrlwi   r5, r4, 0x18
	addi     r0, r4, 1
	addi     r6, r5, 0x26
	li       r7, 0
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r6, r5, 0x26
	addi     r0, r4, 2
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r6, r5, 0x26
	addi     r0, r4, 3
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r6, r5, 0x26
	addi     r0, r4, 4
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r6, r5, 0x26
	addi     r0, r4, 5
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r6, r5, 0x26
	addi     r0, r4, 6
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r0, r4, 7
	addi     r4, r4, 8
	addi     r6, r5, 0x26
	clrlwi   r5, r0, 0x18
	stbx     r7, r3, r6
	addi     r0, r5, 0x26
	stbx     r7, r3, r0

lbl_80471A8C:
	clrlwi   r0, r4, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80471A08
	li       r0, 0
	addi     r3, r1, 8
	stb      r0, 0x3e(r1)
	addi     r4, r2, lbl_80520DB0@sda21
	stb      r0, 0x3f(r1)
	stb      r0, 0x40(r1)
	stb      r0, 0x41(r1)
	stb      r0, 0x42(r1)
	stb      r0, 0x43(r1)
	stb      r0, 0x44(r1)
	stb      r0, 0x45(r1)
	bl       strcpy
	addi     r26, r1, 8
	li       r30, 0
	b        lbl_80471F88

lbl_80471AD4:
	addi     r3, r1, 0x48
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	addi     r4, r31, 0x24
	mr       r29, r3
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80471C48
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0x30
	li       r4, 0x87
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lbz      r0, 0x28(r1)
	addi     r8, r1, 8
	li       r9, 0
	stb      r0, 0x20(r27)
	lbz      r0, 0x29(r1)
	stb      r0, 0x21(r27)
	lbz      r0, 0x2a(r1)
	stb      r0, 0x22(r27)
	lbz      r0, 0x2b(r1)
	stb      r0, 0x23(r27)
	lbz      r0, 0x2c(r1)
	stb      r0, 0x24(r27)
	lbz      r0, 0x2d(r1)
	stb      r0, 0x25(r27)
	b        lbl_80471BEC

lbl_80471B4C:
	clrlwi   r3, r9, 0x18
	addi     r4, r9, 1
	addi     r3, r3, 0x26
	addi     r5, r9, 2
	lbzx     r0, r8, r3
	addi     r6, r9, 3
	clrlwi   r6, r6, 0x18
	addi     r10, r9, 5
	clrlwi   r4, r4, 0x18
	stbx     r0, r27, r3
	addi     r3, r4, 0x26
	addi     r11, r9, 6
	lbzx     r0, r8, r3
	addi     r4, r9, 4
	addi     r12, r9, 7
	clrlwi   r5, r5, 0x18
	stbx     r0, r27, r3
	addi     r3, r5, 0x26
	clrlwi   r10, r10, 0x18
	addi     r7, r6, 0x26
	lbzx     r0, r8, r3
	clrlwi   r4, r4, 0x18
	addi     r6, r4, 0x26
	clrlwi   r11, r11, 0x18
	stbx     r0, r27, r3
	clrlwi   r12, r12, 0x18
	addi     r5, r10, 0x26
	addi     r4, r11, 0x26
	lbzx     r0, r8, r7
	addi     r3, r12, 0x26
	addi     r9, r9, 8
	stbx     r0, r27, r7
	lbzx     r0, r8, r6
	stbx     r0, r27, r6
	lbzx     r0, r8, r5
	stbx     r0, r27, r5
	lbzx     r0, r8, r4
	stbx     r0, r27, r4
	lbzx     r0, r8, r3
	stbx     r0, r27, r3

lbl_80471BEC:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80471B4C
	lbz      r0, 0x3e(r1)
	mr       r3, r27
	addi     r4, r1, 8
	stb      r0, 0x36(r27)
	lbz      r0, 0x3f(r1)
	stb      r0, 0x37(r27)
	lbz      r0, 0x40(r1)
	stb      r0, 0x38(r27)
	lbz      r0, 0x41(r1)
	stb      r0, 0x39(r27)
	lbz      r0, 0x42(r1)
	stb      r0, 0x3a(r27)
	lbz      r0, 0x43(r1)
	stb      r0, 0x3b(r27)
	lbz      r0, 0x44(r1)
	stb      r0, 0x3c(r27)
	lbz      r0, 0x45(r1)
	stb      r0, 0x3d(r27)
	bl       strcpy
	b        lbl_804720E0

lbl_80471C48:
	mr       r4, r29
	addi     r3, r1, 8
	bl       strcpy
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x28(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471C88
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0x48
	clrlwi   r7, r30, 0x18
	li       r4, 0x8e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471C88:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x29(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471CBC
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0x68
	clrlwi   r7, r30, 0x18
	li       r4, 0x91
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471CBC:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2a(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471CF0
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0x88
	clrlwi   r7, r30, 0x18
	li       r4, 0x94
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471CF0:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2b(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471D24
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0xa8
	clrlwi   r7, r30, 0x18
	li       r4, 0x97
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471D24:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2c(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471D58
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0xc8
	clrlwi   r7, r30, 0x18
	li       r4, 0x9a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471D58:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	stb      r3, 0x2d(r1)
	cmplwi   r0, 0x10
	blt      lbl_80471D8C
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0xe8
	clrlwi   r7, r30, 0x18
	li       r4, 0x9d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471D8C:
	clrlwi   r25, r30, 0x18
	li       r24, 0
	b        lbl_80471DD8

lbl_80471D98:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r4, r24, 0x18
	addi     r0, r4, 0x26
	stbx     r3, r26, r0
	lbzx     r0, r26, r0
	cmplwi   r0, 1
	ble      lbl_80471DD4
	mr       r6, r28
	mr       r7, r25
	addi     r3, r31, 0
	addi     r5, r31, 0x108
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471DD4:
	addi     r24, r24, 1

lbl_80471DD8:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80471D98
	li       r24, 0
	b        lbl_80471E2C

lbl_80471DEC:
	addi     r3, r1, 0x48
	bl       readByte__6StreamFv
	clrlwi   r4, r24, 0x18
	addi     r0, r4, 0x36
	stbx     r3, r26, r0
	lbzx     r0, r26, r0
	cmplwi   r0, 1
	ble      lbl_80471E28
	mr       r6, r28
	mr       r7, r25
	addi     r3, r31, 0
	addi     r5, r31, 0x128
	li       r4, 0xa6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471E28:
	addi     r24, r24, 1

lbl_80471E2C:
	clrlwi   r0, r24, 0x18
	cmplwi   r0, 8
	blt      lbl_80471DEC
	mr       r3, r29
	mr       r4, r28
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80471F84
	lbz      r0, 0x28(r1)
	addi     r8, r1, 8
	li       r9, 0
	stb      r0, 0x20(r27)
	lbz      r0, 0x29(r1)
	stb      r0, 0x21(r27)
	lbz      r0, 0x2a(r1)
	stb      r0, 0x22(r27)
	lbz      r0, 0x2b(r1)
	stb      r0, 0x23(r27)
	lbz      r0, 0x2c(r1)
	stb      r0, 0x24(r27)
	lbz      r0, 0x2d(r1)
	stb      r0, 0x25(r27)
	b        lbl_80471F28

lbl_80471E88:
	clrlwi   r3, r9, 0x18
	addi     r4, r9, 1
	addi     r3, r3, 0x26
	addi     r5, r9, 2
	lbzx     r0, r8, r3
	addi     r6, r9, 3
	clrlwi   r6, r6, 0x18
	addi     r10, r9, 5
	clrlwi   r4, r4, 0x18
	stbx     r0, r27, r3
	addi     r3, r4, 0x26
	addi     r11, r9, 6
	lbzx     r0, r8, r3
	addi     r4, r9, 4
	addi     r12, r9, 7
	clrlwi   r5, r5, 0x18
	stbx     r0, r27, r3
	addi     r3, r5, 0x26
	clrlwi   r10, r10, 0x18
	addi     r7, r6, 0x26
	lbzx     r0, r8, r3
	clrlwi   r4, r4, 0x18
	addi     r6, r4, 0x26
	clrlwi   r11, r11, 0x18
	stbx     r0, r27, r3
	clrlwi   r12, r12, 0x18
	addi     r5, r10, 0x26
	addi     r4, r11, 0x26
	lbzx     r0, r8, r7
	addi     r3, r12, 0x26
	addi     r9, r9, 8
	stbx     r0, r27, r7
	lbzx     r0, r8, r6
	stbx     r0, r27, r6
	lbzx     r0, r8, r5
	stbx     r0, r27, r5
	lbzx     r0, r8, r4
	stbx     r0, r27, r4
	lbzx     r0, r8, r3
	stbx     r0, r27, r3

lbl_80471F28:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80471E88
	lbz      r0, 0x3e(r1)
	mr       r3, r27
	addi     r4, r1, 8
	stb      r0, 0x36(r27)
	lbz      r0, 0x3f(r1)
	stb      r0, 0x37(r27)
	lbz      r0, 0x40(r1)
	stb      r0, 0x38(r27)
	lbz      r0, 0x41(r1)
	stb      r0, 0x39(r27)
	lbz      r0, 0x42(r1)
	stb      r0, 0x3a(r27)
	lbz      r0, 0x43(r1)
	stb      r0, 0x3b(r27)
	lbz      r0, 0x44(r1)
	stb      r0, 0x3c(r27)
	lbz      r0, 0x45(r1)
	stb      r0, 0x3d(r27)
	bl       strcpy
	b        lbl_804720E0

lbl_80471F84:
	addi     r30, r30, 1

lbl_80471F88:
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 0x20
	blt      lbl_80471AD4
	mr       r6, r28
	addi     r3, r31, 0
	addi     r5, r31, 0x148
	li       r4, 0xb3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lbz      r0, 0x28(r1)
	addi     r8, r1, 8
	li       r9, 0
	stb      r0, 0x20(r27)
	lbz      r0, 0x29(r1)
	stb      r0, 0x21(r27)
	lbz      r0, 0x2a(r1)
	stb      r0, 0x22(r27)
	lbz      r0, 0x2b(r1)
	stb      r0, 0x23(r27)
	lbz      r0, 0x2c(r1)
	stb      r0, 0x24(r27)
	lbz      r0, 0x2d(r1)
	stb      r0, 0x25(r27)
	b        lbl_80472088

lbl_80471FE8:
	clrlwi   r3, r9, 0x18
	addi     r4, r9, 1
	addi     r3, r3, 0x26
	addi     r5, r9, 2
	lbzx     r0, r8, r3
	addi     r6, r9, 3
	clrlwi   r6, r6, 0x18
	addi     r10, r9, 5
	clrlwi   r4, r4, 0x18
	stbx     r0, r27, r3
	addi     r3, r4, 0x26
	addi     r11, r9, 6
	lbzx     r0, r8, r3
	addi     r4, r9, 4
	addi     r12, r9, 7
	clrlwi   r5, r5, 0x18
	stbx     r0, r27, r3
	addi     r3, r5, 0x26
	clrlwi   r10, r10, 0x18
	addi     r7, r6, 0x26
	lbzx     r0, r8, r3
	clrlwi   r4, r4, 0x18
	addi     r6, r4, 0x26
	clrlwi   r11, r11, 0x18
	stbx     r0, r27, r3
	clrlwi   r12, r12, 0x18
	addi     r5, r10, 0x26
	addi     r4, r11, 0x26
	lbzx     r0, r8, r7
	addi     r3, r12, 0x26
	addi     r9, r9, 8
	stbx     r0, r27, r7
	lbzx     r0, r8, r6
	stbx     r0, r27, r6
	lbzx     r0, r8, r5
	stbx     r0, r27, r5
	lbzx     r0, r8, r4
	stbx     r0, r27, r4
	lbzx     r0, r8, r3
	stbx     r0, r27, r3

lbl_80472088:
	clrlwi   r0, r9, 0x18
	cmplwi   r0, 0x10
	blt      lbl_80471FE8
	lbz      r0, 0x3e(r1)
	mr       r3, r27
	addi     r4, r1, 8
	stb      r0, 0x36(r27)
	lbz      r0, 0x3f(r1)
	stb      r0, 0x37(r27)
	lbz      r0, 0x40(r1)
	stb      r0, 0x38(r27)
	lbz      r0, 0x41(r1)
	stb      r0, 0x39(r27)
	lbz      r0, 0x42(r1)
	stb      r0, 0x3a(r27)
	lbz      r0, 0x43(r1)
	stb      r0, 0x3b(r27)
	lbz      r0, 0x44(r1)
	stb      r0, 0x3c(r27)
	lbz      r0, 0x45(r1)
	stb      r0, 0x3d(r27)
	bl       strcpy

lbl_804720E0:
	lmw      r24, 0x470(r1)
	lwz      r0, 0x494(r1)
	mtlr     r0
	addi     r1, r1, 0x490
	blr
	*/
}

/*
 * --INFO--
 * Address:	804720F4
 * Size:	000294
 */
void BgmTrackMapFile::read(Stream&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lis      r3, lbl_8049DE78@ha
	mr       r28, r4
	addi     r31, r3, lbl_8049DE78@l
	lbz      r0, 0x28(r27)
	cmplwi   r0, 1
	beq      lbl_80472134
	addi     r3, r31, 0
	addi     r5, r31, 0x168
	li       r4, 0xcd
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472134:
	li       r0, 0
	stw      r0, 0x24(r27)
	b        lbl_80472350

lbl_80472140:
	mr       r3, r28
	li       r4, 0
	li       r5, 0
	bl       readString__6StreamFPci
	addi     r4, r31, 0x24
	mr       r29, r3
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8047216C
	li       r3, 1
	b        lbl_80472374

lbl_8047216C:
	mulli    r0, r30, 0x3e
	lwz      r3, 0x20(r27)
	mr       r4, r29
	add      r29, r3, r0
	mr       r3, r29
	bl       strcpy
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x20(r29)
	lbz      r0, 0x20(r29)
	cmplwi   r0, 0x10
	blt      lbl_804721B4
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x184
	li       r4, 0xdf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804721B4:
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x21(r29)
	lbz      r0, 0x21(r29)
	cmplwi   r0, 0x10
	blt      lbl_804721E4
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x1a0
	li       r4, 0xe2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804721E4:
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x22(r29)
	lbz      r0, 0x22(r29)
	cmplwi   r0, 0x10
	blt      lbl_80472214
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x1bc
	li       r4, 0xe5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472214:
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x23(r29)
	lbz      r0, 0x23(r29)
	cmplwi   r0, 0x10
	blt      lbl_80472244
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x1d8
	li       r4, 0xe8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472244:
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x24(r29)
	lbz      r0, 0x24(r29)
	cmplwi   r0, 0x10
	blt      lbl_80472274
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x1f4
	li       r4, 0xeb
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472274:
	mr       r3, r28
	bl       readByte__6StreamFv
	stb      r3, 0x25(r29)
	lbz      r0, 0x25(r29)
	cmplwi   r0, 0x10
	blt      lbl_804722A4
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x210
	li       r4, 0xee
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804722A4:
	li       r26, 0
	b        lbl_804722E8

lbl_804722AC:
	mr       r3, r28
	bl       readByte__6StreamFv
	clrlwi   r4, r26, 0x18
	addi     r0, r4, 0x26
	stbx     r3, r29, r0
	lbzx     r0, r29, r0
	cmplwi   r0, 1
	ble      lbl_804722E4
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x22c
	li       r4, 0xf2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804722E4:
	addi     r26, r26, 1

lbl_804722E8:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 0x10
	blt      lbl_804722AC
	li       r26, 0
	b        lbl_80472338

lbl_804722FC:
	mr       r3, r28
	bl       readByte__6StreamFv
	clrlwi   r4, r26, 0x18
	addi     r0, r4, 0x36
	stbx     r3, r29, r0
	lbzx     r0, r29, r0
	cmplwi   r0, 1
	ble      lbl_80472334
	mr       r6, r30
	addi     r3, r31, 0
	addi     r5, r31, 0x248
	li       r4, 0xf6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80472334:
	addi     r26, r26, 1

lbl_80472338:
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 8
	blt      lbl_804722FC
	lwz      r3, 0x24(r27)
	addi     r0, r3, 1
	stw      r0, 0x24(r27)

lbl_80472350:
	lwz      r30, 0x24(r27)
	cmpwi    r30, 0x20
	blt      lbl_80472140
	addi     r3, r31, 0
	addi     r5, r31, 0x264
	li       r4, 0xfa
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80472374:
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80472388
 * Size:	000110
 */
BgmTrackMap::BgmTrackMap()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r6, 0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stb      r0, 0x20(r3)
	stb      r0, 0x21(r3)
	stb      r0, 0x22(r3)
	stb      r0, 0x23(r3)
	stb      r0, 0x24(r3)
	stb      r0, 0x25(r3)
	b        lbl_80472444

lbl_804723C0:
	clrlwi   r3, r6, 0x18
	addi     r0, r6, 1
	addi     r4, r3, 0x26
	li       r5, 0
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r4, r3, 0x26
	addi     r0, r6, 2
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r4, r3, 0x26
	addi     r0, r6, 3
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r4, r3, 0x26
	addi     r0, r6, 4
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r4, r3, 0x26
	addi     r0, r6, 5
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r4, r3, 0x26
	addi     r0, r6, 6
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r0, r6, 7
	addi     r6, r6, 8
	addi     r4, r3, 0x26
	clrlwi   r3, r0, 0x18
	stbx     r5, r31, r4
	addi     r0, r3, 0x26
	stbx     r5, r31, r0

lbl_80472444:
	clrlwi   r0, r6, 0x18
	cmplwi   r0, 0x10
	blt      lbl_804723C0
	li       r0, 0
	mr       r3, r31
	stb      r0, 0x36(r31)
	addi     r4, r2, lbl_80520DB0@sda21
	stb      r0, 0x37(r31)
	stb      r0, 0x38(r31)
	stb      r0, 0x39(r31)
	stb      r0, 0x3a(r31)
	stb      r0, 0x3b(r31)
	stb      r0, 0x3c(r31)
	stb      r0, 0x3d(r31)
	bl       strcpy
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
 * Address:	80472498
 * Size:	000008
 */
BgmTrackMapFile::@28 @~BgmTrackMapFile()
{
	/*
	addi     r3, r3, -28
	b        __dt__Q23PSM15BgmTrackMapFileFv
	*/
}
} // namespace PSM
