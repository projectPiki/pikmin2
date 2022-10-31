#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAInter/Object.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q27JAInter6Object
    __vt__Q27JAInter6Object:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JAInter6ObjectFv
        .4byte startSound__Q27JAInter6ObjectFUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter6ObjectFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
        .4byte loop__Q27JAInter6ObjectFv
    .global __vt__Q27JAInter10ObjectBase
    __vt__Q27JAInter10ObjectBase:
        .4byte 0
        .4byte 0
        .4byte __dt__Q27JAInter10ObjectBaseFv
        .4byte startSound__Q27JAInter10ObjectBaseFUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFUcUlUl
        .4byte startSound__Q27JAInter10ObjectBaseFPP8JAISoundUlUl
        .4byte stopAllSound__Q27JAInter10ObjectBaseFv
        .4byte stopSound__Q27JAInter10ObjectBaseFUlUl
        .4byte enable__Q27JAInter10ObjectBaseFv
        .4byte disable__Q27JAInter10ObjectBaseFv
        .4byte dispose__Q27JAInter10ObjectBaseFv
        .4byte getFreeSoundHandlePointer__Q27JAInter10ObjectBaseFv
        .4byte getUseSoundHandlePointer__Q27JAInter10ObjectBaseFUl
        .4byte handleStop__Q27JAInter10ObjectBaseFUcUl
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80517058
    lbl_80517058:
        .4byte 0x00000000
    .global lbl_8051705C
    lbl_8051705C:
        .float 0.5
    .global lbl_80517060
    lbl_80517060:
        .4byte 0x3FE00000
        .4byte 0x00000000
    .global lbl_80517068
    lbl_80517068:
        .4byte 0x40080000
        .4byte 0x00000000
    .global lbl_80517070
    lbl_80517070:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
JAInter::ObjectBase::ObjectBase(Vec*, JKRHeap*, unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B95FC
 * Size:	000074
 */
JAInter::ObjectBase::~ObjectBase(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800B9654
	lis      r4, __vt__Q27JAInter10ObjectBase@ha
	addi     r0, r4, __vt__Q27JAInter10ObjectBase@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_800B9654
	mr       r3, r30
	bl       __dl__FPv

lbl_800B9654:
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
 * Address:	800B9670
 * Size:	000164
 */
void JAInter::ObjectBase::startSound(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	rlwinm.  r0, r4, 0, 0x14, 0x14
	stmw     r27, 0xc(r1)
	mr       r30, r4
	mr       r29, r3
	mr       r31, r5
	li       r28, 0
	bne      lbl_800B96AC
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_800B96AC:
	cmplwi   r28, 0
	bne      lbl_800B96CC
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r28, r3

lbl_800B96CC:
	cmplwi   r28, 0
	beq      lbl_800B96FC
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r30
	lwz      r6, 0x24(r29)
	mr       r5, r28
	mr       r7, r31
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r3, 0(r28)
	b        lbl_800B97C0

lbl_800B96FC:
	lbz      r5, 0x19(r29)
	li       r28, 0xff
	li       r27, 0xff
	li       r6, 0
	b        lbl_800B973C

lbl_800B9710:
	lwz      r4, 0x1c(r29)
	rlwinm   r3, r6, 2, 0x16, 0x1d
	clrlwi   r0, r28, 0x18
	lwzx     r3, r4, r3
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	cmplw    r3, r0
	bgt      lbl_800B9738
	mr       r28, r3
	mr       r27, r6

lbl_800B9738:
	addi     r6, r6, 1

lbl_800B973C:
	clrlwi   r0, r6, 0x18
	cmplw    r0, r5
	blt      lbl_800B9710
	clrlwi   r0, r27, 0x18
	cmplwi   r0, 0xff
	beq      lbl_800B97BC
	mr       r3, r30
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lbz      r3, 4(r3)
	clrlwi   r0, r28, 0x18
	cmplw    r3, r0
	blt      lbl_800B97BC
	mr       r3, r29
	mr       r4, r27
	lwz      r12, 0(r29)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1c(r29)
	rlwinm   r28, r27, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r30
	lwz      r6, 0x24(r29)
	mr       r7, r31
	add      r5, r0, r28
	li       r8, 0
	li       r9, 4
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r3, 0x1c(r29)
	lwzx     r3, r3, r28
	b        lbl_800B97C0

lbl_800B97BC:
	li       r3, 0

lbl_800B97C0:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B97D4
 * Size:	000044
 */
void JAInter::ObjectBase::handleStop(unsigned char, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	rlwinm   r0, r4, 2, 0x16, 0x1d
	lwz      r3, 0x1c(r3)
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	beq      lbl_800B9808
	lwz      r12, 0x10(r3)
	mr       r4, r5
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_800B9808:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9818
 * Size:	000048
 */
void JAInter::ObjectBase::startSound(unsigned char, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r9, r3
	  mr        r7, r6
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,2,22,29
	  mr        r4, r5
	  lwz       r8, 0x1C(r3)
	  lwz       r6, 0x24(r9)
	  li        r9, 0x4
	  add       r5, r8, r0
	  lwz       r3, -0x7498(r13)
	  li        r8, 0
	  bl        -0xA3FE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800B9860
 * Size:	000044
 */
void JAInter::ObjectBase::startSound(JAISound**, unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r8, r3
	mr       r7, r6
	stw      r0, 0x14(r1)
	mr       r0, r4
	mr       r4, r5
	li       r9, 4
	lwz      r6, 0x24(r8)
	mr       r5, r0
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	li       r8, 0
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B98A4
 * Size:	000060
 */
void JAInter::ObjectBase::stopSound(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r3
	bl       getUseSoundHandleNo__Q27JAInter10ObjectBaseFUl
	clrlwi   r0, r3, 0x18
	mr       r4, r3
	cmplwi   r0, 0xff
	beq      lbl_800B98EC
	lwz      r12, 0(r30)
	mr       r3, r30
	mr       r5, r31
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800B98EC:
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
 * Address:	800B9904
 * Size:	000068
 */
void JAInter::ObjectBase::stopAllSound(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_800B9944

lbl_800B9924:
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	addi     r31, r31, 1

lbl_800B9944:
	lbz      r0, 0x19(r30)
	clrlwi   r3, r31, 0x18
	cmplw    r3, r0
	blt      lbl_800B9924
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
 * Address:	800B996C
 * Size:	000044
 */
void JAInter::ObjectBase::disable(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stb      r0, 0x18(r31)
	stw      r0, 0x20(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B99B0
 * Size:	000040
 */
void JAInter::ObjectBase::dispose(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1c(r31)
	bl       __dla__FPv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B99F0
 * Size:	00005C
 */
void JAInter::ObjectBase::getFreeSoundHandlePointer(void)
{
	/*
	lbz      r0, 0x19(r3)
	li       r8, 0
	li       r6, 0
	li       r4, 1
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800B9A44

lbl_800B9A0C:
	lwz      r7, 0x1c(r3)
	lwzx     r0, r7, r6
	cmplwi   r0, 0
	bne      lbl_800B9A38
	lwz      r5, 0x20(r3)
	slw      r0, r4, r8
	and.     r0, r5, r0
	bne      lbl_800B9A38
	slwi     r0, r8, 2
	add      r3, r7, r0
	blr

lbl_800B9A38:
	addi     r6, r6, 4
	addi     r8, r8, 1
	bdnz     lbl_800B9A0C

lbl_800B9A44:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void JAInter::ObjectBase::getFreeSoundHandleNo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9A4C
 * Size:	000054
 */
void JAInter::ObjectBase::getUseSoundHandlePointer(unsigned long)
{
	/*
	lbz      r0, 0x19(r3)
	li       r8, 0
	li       r5, 0
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_800B9A98

lbl_800B9A64:
	lwz      r7, 0x1c(r3)
	lwzx     r6, r7, r5
	cmplwi   r6, 0
	beq      lbl_800B9A8C
	lwz      r0, 0x20(r6)
	cmplw    r4, r0
	bne      lbl_800B9A8C
	slwi     r0, r8, 2
	add      r3, r7, r0
	blr

lbl_800B9A8C:
	addi     r5, r5, 4
	addi     r8, r8, 1
	bdnz     lbl_800B9A64

lbl_800B9A98:
	li       r3, 0
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9AA0
 * Size:	00004C
 */
void JAInter::ObjectBase::getUseSoundHandleNo(unsigned long)
{
	/*
	lbz      r6, 0x19(r3)
	li       r7, 0
	b        lbl_800B9AD8

lbl_800B9AAC:
	lwz      r5, 0x1c(r3)
	rlwinm   r0, r7, 2, 0x16, 0x1d
	lwzx     r5, r5, r0
	cmplwi   r5, 0
	beq      lbl_800B9AD4
	lwz      r0, 0x20(r5)
	cmplw    r4, r0
	bne      lbl_800B9AD4
	mr       r3, r7
	blr

lbl_800B9AD4:
	addi     r7, r7, 1

lbl_800B9AD8:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_800B9AAC
	li       r3, 0xff
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void JAInter::ObjectBase::reserveSoundHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void JAInter::ObjectBase::cancelSoundHandle(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800B9AEC
 * Size:	0000F4
 */
JAInter::Object::Object(Vec*, JKRHeap*, unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r6
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q27JAInter10ObjectBase@ha
	cmplwi   r31, 0
	addi     r0, r3, __vt__Q27JAInter10ObjectBase@l
	stw      r0, 0(r28)
	bne      lbl_800B9B34
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)

lbl_800B9B34:
	stb      r30, 0x19(r28)
	mr       r4, r31
	li       r5, 0
	lbz      r0, 0x19(r28)
	slwi     r3, r0, 2
	bl       __nwa__FUlP7JKRHeapi
	li       r5, 0
	stw      r3, 0x1c(r28)
	mr       r4, r5
	b        lbl_800B9B6C

lbl_800B9B5C:
	lwz      r3, 0x1c(r28)
	rlwinm   r0, r5, 2, 0x16, 0x1d
	addi     r5, r5, 1
	stwx     r4, r3, r0

lbl_800B9B6C:
	lbz      r0, 0x19(r28)
	clrlwi   r3, r5, 0x18
	cmplw    r3, r0
	blt      lbl_800B9B5C
	stw      r29, 0x24(r28)
	li       r0, 0
	lis      r3, __vt__Q27JAInter6Object@ha
	li       r4, 1
	stw      r0, 0x20(r28)
	addi     r0, r3, __vt__Q27JAInter6Object@l
	lfs      f1, lbl_80517058@sda21(r2)
	mr       r3, r28
	stb      r4, 0x18(r28)
	lfs      f0, lbl_8051705C@sda21(r2)
	stw      r0, 0(r28)
	stfs     f1, 0x28(r28)
	stfs     f1, 0x2c(r28)
	stfs     f1, 0x30(r28)
	stfs     f1, 0x34(r28)
	stfs     f0, 0x38(r28)
	stfs     f1, 0x3c(r28)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9BE0
 * Size:	000084
 */
JAInter::Object::~Object(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_800B9C48
	lis      r4, __vt__Q27JAInter6Object@ha
	addi     r0, r4, __vt__Q27JAInter6Object@l
	stw      r0, 0(r30)
	beq      lbl_800B9C38
	lis      r4, __vt__Q27JAInter10ObjectBase@ha
	addi     r0, r4, __vt__Q27JAInter10ObjectBase@l
	stw      r0, 0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv

lbl_800B9C38:
	extsh.   r0, r31
	ble      lbl_800B9C48
	mr       r3, r30
	bl       __dl__FPv

lbl_800B9C48:
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
 * Address:	800B9C64
 * Size:	00021C
 */
void JAInter::Object::startSound(unsigned long, unsigned long)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	rlwinm.  r0, r4, 0, 0x14, 0x14
	stmw     r27, 0x3c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	li       r30, 0
	bne      lbl_800B9CA0
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_800B9CA0:
	cmplwi   r30, 0
	bne      lbl_800B9CC0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r30, r3

lbl_800B9CC0:
	cmplwi   r30, 0
	beq      lbl_800B9D34
	cmplwi   r27, 0
	lwz      r4, 0x24(r27)
	bne      lbl_800B9CDC
	mr       r3, r4
	b        lbl_800B9CE0

lbl_800B9CDC:
	mr       r3, r27

lbl_800B9CE0:
	li       r0, 0
	cmplwi   r4, 0
	stw      r3, 0x1c(r1)
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r0, 0x28(r1)
	bne      lbl_800B9D08
	li       r0, 1
	stb      r0, 0x2c(r1)
	b        lbl_800B9D10

lbl_800B9D08:
	li       r0, 1
	stb      r0, 0x2c(r1)

lbl_800B9D10:
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r28
	mr       r5, r30
	mr       r7, r29
	addi     r6, r1, 0x1c
	li       r8, 4
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" lwz
r3, 0(r30) b        lbl_800B9E6C

lbl_800B9D34:
	lbz      r6, 0x19(r27)
	li       r31, 0xff
	li       r30, 0xff
	li       r7, 0
	li       r5, 1
	b        lbl_800B9D8C

lbl_800B9D4C:
	clrlwi   r0, r7, 0x18
	lwz      r3, 0x20(r27)
	slw      r0, r5, r0
	and.     r0, r3, r0
	bne      lbl_800B9D88
	lwz      r4, 0x1c(r27)
	rlwinm   r3, r7, 2, 0x16, 0x1d
	clrlwi   r0, r31, 0x18
	lwzx     r3, r4, r3
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	cmplw    r3, r0
	bgt      lbl_800B9D88
	mr       r31, r3
	mr       r30, r7

lbl_800B9D88:
	addi     r7, r7, 1

lbl_800B9D8C:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_800B9D4C
	clrlwi   r0, r30, 0x18
	cmplwi   r0, 0xff
	beq      lbl_800B9E68
	mr       r3, r28
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lbz      r3, 4(r3)
	clrlwi   r0, r31, 0x18
	cmplw    r3, r0
	blt      lbl_800B9E68
	mr       r3, r27
	li       r4, 0
	lwz      r12, 0(r27)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	cmplwi   r27, 0
	lwz      r4, 0x24(r27)
	bne      lbl_800B9DEC
	mr       r3, r4
	b        lbl_800B9DF0

lbl_800B9DEC:
	mr       r3, r27

lbl_800B9DF0:
	li       r0, 0
	cmplwi   r4, 0
	stw      r3, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x14(r1)
	bne      lbl_800B9E18
	li       r0, 1
	stb      r0, 0x18(r1)
	b        lbl_800B9E20

lbl_800B9E18:
	li       r0, 1
	stb      r0, 0x18(r1)

lbl_800B9E20:
	lwz      r0, 0x1c(r27)
	rlwinm   r30, r30, 2, 0x16, 0x1d
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r28
	mr       r7, r29
	add      r5, r0, r30
	addi     r6, r1, 8
	li       r8, 4
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" lwz
r3, 0x1c(r27) lwzx     r3, r3, r30 cmplwi   r3, 0 beq      lbl_800B9E5C li r0, 1
	stb      r0, 0x1a(r3)

lbl_800B9E5C:
	lwz      r3, 0x1c(r27)
	lwzx     r3, r3, r30
	b        lbl_800B9E6C

lbl_800B9E68:
	li       r3, 0

lbl_800B9E6C:
	lmw      r27, 0x3c(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	800B9E80
 * Size:	000158
 */
void JAInter::Object::disable(void)
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
	b        lbl_800B9FA0

lbl_800B9EAC:
	lwz      r3, 0x1c(r28)
	rlwinm   r31, r29, 2, 0x16, 0x1d
	lwzx     r3, r3, r31
	cmplwi   r3, 0
	beq      lbl_800B9F9C
	lwz      r0, 0x20(r3)
	rlwinm.  r0, r0, 0, 0, 1
	bne      lbl_800B9F80
	lis      r4, 0x00008000@ha
	addi     r4, r4, 0x00008000@l
	bl       checkSwBit__8JAISoundFUl
	cmplwi   r3, 0
	beq      lbl_800B9F80
	cmplwi   r30, 0
	bne      lbl_800B9EF4
	bl       getParamDummyObjectLifeTime__18JAIGlobalParameterFv
	bl       getPointer__Q27JAInter14DummyObjectMgrFUl
	mr       r30, r3

lbl_800B9EF4:
	cmplwi   r30, 0
	beq      lbl_800B9F60
	lwz      r3, 0x24(r28)
	li       r5, 0
	addi     r4, r30, 0xc
	addi     r0, r30, 8
	lfs      f0, 0(r3)
	stfs     f0, 0xc(r30)
	lfs      f0, 4(r3)
	stfs     f0, 0x10(r30)
	lfs      f0, 8(r3)
	stfs     f0, 0x14(r30)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r3, 8(r30)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stb      r5, 0x1a(r3)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r4, 0x3c(r3)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	stw      r0, 0x40(r3)
	lwz      r3, 0x1c(r28)
	stwx     r5, r3, r31
	b        lbl_800B9F9C

lbl_800B9F60:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	b        lbl_800B9F9C

lbl_800B9F80:
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_800B9F9C:
	addi     r29, r29, 1

lbl_800B9FA0:
	lbz      r0, 0x19(r28)
	clrlwi   r3, r29, 0x18
	cmplw    r3, r0
	blt      lbl_800B9EAC
	li       r0, 0
	stb      r0, 0x18(r28)
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
 * Address:	800B9FD8
 * Size:	000214
 */
void JAInter::Object::loop(void)
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
	b        lbl_800BA1C0

lbl_800BA008:
	lwz      r3, 0x1c(r28)
	lwzx     r0, r3, r31
	cmplwi   r0, 0
	beq      lbl_800BA1B8
	clrlwi.  r0, r30, 0x18
	bne      lbl_800BA13C
	lwz      r4, 0x24(r28)
	cmplwi   r4, 0
	beq      lbl_800BA13C
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	addi     r5, r28, 0x28
	lwz      r3, 4(r3)
	lwz      r3, 8(r3)
	bl       PSMTXMultVec
	lfs      f1, 0x28(r28)
	lfs      f0, 0x2c(r28)
	fmuls    f2, f1, f1
	lfs      f3, 0x30(r28)
	fmuls    f1, f0, f0
	lfs      f0, lbl_80517058@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f1, f2, f1
	fadds    f4, f3, f1
	fcmpo    cr0, f4, f0
	ble      lbl_800BA0B4
	frsqrte  f1, f4
	lfd      f3, lbl_80517060@sda21(r2)
	lfd      f2, lbl_80517068@sda21(r2)
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f1, f1, f0
	fmul     f0, f1, f1
	fmul     f1, f3, f1
	fnmsub   f0, f4, f0, f2
	fmul     f0, f1, f0
	fmul     f4, f4, f0
	frsp     f4, f4
	b        lbl_800BA138

lbl_800BA0B4:
	lfd      f0, lbl_80517070@sda21(r2)
	fcmpo    cr0, f4, f0
	bge      lbl_800BA0CC
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)
	b        lbl_800BA138

lbl_800BA0CC:
	stfs     f4, 8(r1)
	lis      r0, 0x7f80
	lwz      r4, 8(r1)
	rlwinm   r3, r4, 0, 1, 8
	cmpw     r3, r0
	beq      lbl_800BA0F4
	bge      lbl_800BA124
	cmpwi    r3, 0
	beq      lbl_800BA10C
	b        lbl_800BA124

lbl_800BA0F4:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA104
	li       r0, 1
	b        lbl_800BA128

lbl_800BA104:
	li       r0, 2
	b        lbl_800BA128

lbl_800BA10C:
	clrlwi.  r0, r4, 9
	beq      lbl_800BA11C
	li       r0, 5
	b        lbl_800BA128

lbl_800BA11C:
	li       r0, 3
	b        lbl_800BA128

lbl_800BA124:
	li       r0, 4

lbl_800BA128:
	cmpwi    r0, 1
	bne      lbl_800BA138
	lis      r3, __float_nan@ha
	lfs      f4, __float_nan@l(r3)

lbl_800BA138:
	stfs     f4, 0x34(r28)

lbl_800BA13C:
	lwz      r3, 0x1c(r28)
	clrlwi.  r0, r30, 0x18
	lfs      f0, 0x28(r28)
	lwzx     r3, r3, r31
	lwz      r3, 0x34(r3)
	stfs     f0, 0(r3)
	lfs      f0, 0x2c(r28)
	stfs     f0, 4(r3)
	lfs      f0, 0x30(r28)
	stfs     f0, 8(r3)
	lfs      f0, 0x34(r28)
	stfs     f0, 0x18(r3)
	bne      lbl_800BA1B8
	lwz      r0, 0x24(r28)
	cmplwi   r0, 0
	beq      lbl_800BA1B4
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc0(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x38(r28)
	lwz      r3, 0x1c(r28)
	lwzx     r3, r3, r31
	lwz      r12, 0x10(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3c(r28)

lbl_800BA1B4:
	li       r30, 1

lbl_800BA1B8:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_800BA1C0:
	lbz      r0, 0x19(r28)
	cmplw    r29, r0
	blt      lbl_800BA008
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
