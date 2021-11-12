#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__12JASBasicInst
    __vt__12JASBasicInst:
        .4byte 0
        .4byte 0
        .4byte __dt__12JASBasicInstFv
        .4byte getParam__12JASBasicInstCFiiP12JASInstParam
        .4byte getType__12JASBasicInstCFv
        .4byte getKeymapIndex__12JASBasicInstCFi
    .global __vt__7JASInst
    __vt__7JASInst:
        .4byte 0
        .4byte 0
        .4byte __dt__7JASInstFv
        .4byte 0
        .4byte 0
        .4byte 0

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516CA8
    lbl_80516CA8:
        .float 1.0
        .4byte 0x00000000
    .global lbl_80516CB0
    lbl_80516CB0:
        .4byte 0x3FE00000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80099888
 * Size:	000044
 */
JASBasicInst::JASBasicInst()
{
	/*
	lis      r5, __vt__7JASInst@ha
	lis      r4, __vt__12JASBasicInst@ha
	addi     r0, r5, __vt__7JASInst@l
	lfs      f0, lbl_80516CA8@sda21(r2)
	stw      r0, 0(r3)
	addi     r4, r4, __vt__12JASBasicInst@l
	li       r0, 0
	stw      r4, 0(r3)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	stw      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	stw      r0, 0x14(r3)
	stw      r0, 0x18(r3)
	stw      r0, 0x1c(r3)
	stw      r0, 0x20(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800998CC
 * Size:	000048
 */
JASInst::~JASInst()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r3, r3
	beq      lbl_800998FC
	lis      r5, __vt__7JASInst@ha
	extsh.   r0, r4
	addi     r0, r5, __vt__7JASInst@l
	stw      r0, 0(r31)
	ble      lbl_800998FC
	bl       __dl__FPv

lbl_800998FC:
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
 * Address:	80099914
 * Size:	00008C
 */
JASBasicInst::~JASBasicInst()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80099984
	lis      r4, __vt__12JASBasicInst@ha
	lis      r3, __dt__Q212JASBasicInst7TKeymapFv@ha
	addi     r0, r4, __vt__12JASBasicInst@l
	stw      r0, 0(r30)
	addi     r4, r3, __dt__Q212JASBasicInst7TKeymapFv@l
	lwz      r3, 0x20(r30)
	bl       __destroy_new_array
	lwz      r3, 0xc(r30)
	bl       __dla__FPv
	lwz      r3, 0x14(r30)
	bl       __dla__FPv
	cmplwi   r30, 0
	beq      lbl_80099974
	lis      r3, __vt__7JASInst@ha
	addi     r0, r3, __vt__7JASInst@l
	stw      r0, 0(r30)

lbl_80099974:
	extsh.   r0, r31
	ble      lbl_80099984
	mr       r3, r30
	bl       __dl__FPv

lbl_80099984:
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
 * Size:	000038
 */
void JASBasicInst::searchKeymap(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800999A0
 * Size:	0001E8
 */
void JASBasicInst::getParam(int, int, JASInstParam*) const
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stmw     r24, 0x10(r1)
	mr       r24, r3
	lwz      r28, 0xc(r3)
	mr       r31, r6
	lwz      r3, 0x14(r3)
	mr       r25, r4
	lfs      f1, 4(r24)
	mr       r30, r5
	lfs      f0, 8(r24)
	li       r27, 0
	lwz      r29, 0x10(r24)
	stb      r0, 0(r6)
	stb      r0, 0x24(r6)
	lwz      r0, 0x18(r24)
	stw      r3, 8(r6)
	stw      r0, 0xc(r6)
	stfs     f1, 0x10(r6)
	stfs     f0, 0x14(r6)
	b        lbl_80099AB4

lbl_800999FC:
	lwz      r26, 0(r28)
	cmplwi   r26, 0
	beq      lbl_80099AAC
	mr       r3, r26
	mr       r4, r25
	lwz      r12, 0(r26)
	mr       r5, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lbz      r0, 4(r26)
	cmpwi    r0, 2
	beq      lbl_80099A74
	bge      lbl_80099A44
	cmpwi    r0, 0
	beq      lbl_80099A54
	bge      lbl_80099A64
	b        lbl_80099AAC

lbl_80099A44:
	cmpwi    r0, 4
	beq      lbl_80099AA0
	bge      lbl_80099AAC
	b        lbl_80099A90

lbl_80099A54:
	lfs      f0, 0x10(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r31)
	b        lbl_80099AAC

lbl_80099A64:
	lfs      f0, 0x14(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x14(r31)
	b        lbl_80099AAC

lbl_80099A74:
	lfd      f0, lbl_80516CB0@sda21(r2)
	lfs      f2, 0x18(r31)
	fsub     f0, f1, f0
	fadd     f0, f2, f0
	frsp     f0, f0
	stfs     f0, 0x18(r31)
	b        lbl_80099AAC

lbl_80099A90:
	lfs      f0, 0x1c(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x1c(r31)
	b        lbl_80099AAC

lbl_80099AA0:
	lfs      f0, 0x20(r31)
	fadds    f0, f0, f1
	stfs     f0, 0x20(r31)

lbl_80099AAC:
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_80099AB4:
	cmplw    r27, r29
	blt      lbl_800999FC
	lwz      r4, 0x20(r24)
	li       r26, 0
	lwz      r0, 0x1c(r24)
	li       r5, 0
	mr       r3, r4
	mtctr    r0
	cmplwi   r0, 0
	ble      lbl_80099B00

lbl_80099ADC:
	lwz      r0, 0(r3)
	cmpw     r25, r0
	bgt      lbl_80099AF4
	mulli    r0, r5, 0xc
	add      r26, r4, r0
	b        lbl_80099B00

lbl_80099AF4:
	addi     r3, r3, 0xc
	addi     r5, r5, 1
	bdnz     lbl_80099ADC

lbl_80099B00:
	cmplwi   r26, 0
	bne      lbl_80099B10
	li       r3, 0
	b        lbl_80099B74

lbl_80099B10:
	li       r27, 0
	b        lbl_80099B64

lbl_80099B18:
	mr       r3, r26
	mr       r4, r27
	bl       getVeloRegion__Q212JASBasicInst7TKeymapCFi
	lwz      r0, 0(r3)
	cmpw     r30, r0
	bgt      lbl_80099B60
	lfs      f1, 0x10(r31)
	lfs      f0, 8(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x10(r31)
	lfs      f1, 0x14(r31)
	lfs      f0, 0xc(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x14(r31)
	lwz      r0, 4(r3)
	li       r3, 1
	stw      r0, 4(r31)
	b        lbl_80099B74

lbl_80099B60:
	addi     r27, r27, 1

lbl_80099B64:
	lwz      r0, 4(r26)
	cmplw    r27, r0
	blt      lbl_80099B18
	li       r3, 0

lbl_80099B74:
	lmw      r24, 0x10(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099B88
 * Size:	000008
 */
void JASBasicInst::getKeymapIndex(int) const
{
	/*
	mr       r3, r4
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099B90
 * Size:	000084
 */
void JASBasicInst::setKeyRegionCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lis      r3, __dt__Q212JASBasicInst7TKeymapFv@ha
	addi     r0, r3, __dt__Q212JASBasicInst7TKeymapFv@l
	lwz      r3, 0x20(r30)
	mr       r4, r0
	bl       __destroy_new_array
	bl       getCurrentHeap__7JASBankFv
	mulli    r6, r31, 0xc
	mr       r4, r3
	li       r5, 0
	addi     r3, r6, 0x10
	bl       __nwa__FUlP7JKRHeapi
	lis      r4, __ct__Q212JASBasicInst7TKeymapFv@ha
	lis      r5, __dt__Q212JASBasicInst7TKeymapFv@ha
	addi     r4, r4, __ct__Q212JASBasicInst7TKeymapFv@l
	mr       r7, r31
	addi     r5, r5, __dt__Q212JASBasicInst7TKeymapFv@l
	li       r6, 0xc
	bl       __construct_new_array
	stw      r3, 0x20(r30)
	stw      r31, 0x1c(r30)
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
 * Address:	80099C14
 * Size:	000018
 */
JASBasicInst::TKeymap::TKeymap(void)
{
	/*
	li       r4, -1
	li       r0, 0
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099C2C
 * Size:	000078
 */
void JASBasicInst::setEffectCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0xc(r3)
	bl       __dla__FPv
	cmplwi   r31, 0
	stw      r31, 0x10(r30)
	bne      lbl_80099C68
	li       r0, 0
	stw      r0, 0xc(r30)
	b        lbl_80099C8C

lbl_80099C68:
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0xc(r30)
	slwi     r4, r31, 2
	lwz      r3, 0xc(r30)
	bl       bzero__7JASCalcFPvUl

lbl_80099C8C:
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
 * Address:	80099CA4
 * Size:	000010
 */
void JASBasicInst::setEffect(int, JASInstEffect*)
{
	/*
	lwz      r3, 0xc(r3)
	slwi     r0, r4, 2
	stwx     r5, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getEffect(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099CB4
 * Size:	000078
 */
void JASBasicInst::setOscCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 0x14(r3)
	bl       __dla__FPv
	cmplwi   r31, 0
	stw      r31, 0x18(r30)
	bne      lbl_80099CF0
	li       r0, 0
	stw      r0, 0x14(r30)
	b        lbl_80099D14

lbl_80099CF0:
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 2
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 0x14(r30)
	slwi     r4, r31, 2
	lwz      r3, 0x14(r30)
	bl       bzero__7JASCalcFPvUl

lbl_80099D14:
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
 * Address:	80099D2C
 * Size:	000010
 */
void JASBasicInst::setOsc(int, JASOscillator::Data*)
{
	/*
	lwz      r3, 0x14(r3)
	slwi     r0, r4, 2
	stwx     r5, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getOsc(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099D3C
 * Size:	000024
 */
void JASBasicInst::getKeyRegion(int)
{
	/*
	lwz      r0, 0x1c(r3)
	cmplw    r4, r0
	blt      lbl_80099D50
	li       r3, 0
	blr

lbl_80099D50:
	mulli    r0, r4, 0xc
	lwz      r3, 0x20(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getKeyRegion(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099D60
 * Size:	000054
 */
JASBasicInst::TKeymap::~TKeymap(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80099D98
	lwz      r3, 8(r30)
	bl       __dla__FPv
	extsh.   r0, r31
	ble      lbl_80099D98
	mr       r3, r30
	bl       __dl__FPv

lbl_80099D98:
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
 * Address:	80099DB4
 * Size:	000058
 */
void JASBasicInst::TKeymap::setVeloRegionCount(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 8(r3)
	bl       __dla__FPv
	bl       getCurrentHeap__7JASBankFv
	mr       r4, r3
	slwi     r3, r31, 4
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, 8(r30)
	stw      r31, 4(r30)
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
 * Address:	80099E0C
 * Size:	000024
 */
void JASBasicInst::TKeymap::getVeloRegion(int)
{
	/*
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80099E20
	li       r3, 0
	blr

lbl_80099E20:
	lwz      r3, 8(r3)
	slwi     r0, r4, 4
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099E30
 * Size:	000024
 */
void JASBasicInst::TKeymap::getVeloRegion(const(int))
{
	/*
	lwz      r0, 4(r3)
	cmplw    r4, r0
	blt      lbl_80099E44
	li       r3, 0
	blr

lbl_80099E44:
	lwz      r3, 8(r3)
	slwi     r0, r4, 4
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099E54
 * Size:	00000C
 */
void JASBasicInst::getType() const
{
	/*
	lis      r3, 0x42534943@ha
	addi     r3, r3, 0x42534943@l
	blr
	*/
}
