#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516EA0
    lbl_80516EA0:
        .float 1.0
    .global lbl_80516EA4
    lbl_80516EA4:
        .float 0.5
    .global lbl_80516EA8
    lbl_80516EA8:
        .4byte 0x00000000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	800A8504
 * Size:	000030
 */
JASChannelUpdater::JASChannelUpdater()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       init__17JASChannelUpdaterFv
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
 * Address:	800A8534
 * Size:	0000C0
 */
void JASChannelUpdater::init()
{
	/*
	lfs      f2, lbl_80516EA0@sda21(r2)
	li       r9, 0
	lfs      f1, lbl_80516EA4@sda21(r2)
	li       r8, 0x7fff
	stfs     f2, 0(r3)
	li       r7, 0x150
	lfs      f0, lbl_80516EA8@sda21(r2)
	li       r6, 0x210
	stfs     f2, 4(r3)
	li       r5, 0x352
	li       r4, 0x412
	li       r0, 0xd
	stfs     f1, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f0, 0x10(r3)
	sth      r9, 0x14(r3)
	sth      r9, 0x16(r3)
	sth      r9, 0x18(r3)
	sth      r9, 0x1a(r3)
	sth      r9, 0x1c(r3)
	sth      r9, 0x1e(r3)
	sth      r9, 0x20(r3)
	sth      r9, 0x22(r3)
	sth      r8, 0x14(r3)
	sth      r9, 0x34(r3)
	sth      r9, 0x24(r3)
	sth      r9, 0x26(r3)
	sth      r9, 0x28(r3)
	sth      r9, 0x2a(r3)
	stb      r9, 0x42(r3)
	stb      r9, 0x43(r3)
	stb      r9, 0x44(r3)
	stb      r9, 0x45(r3)
	stb      r9, 0x46(r3)
	stb      r9, 0x47(r3)
	stb      r9, 0x48(r3)
	sth      r8, 0x24(r3)
	stb      r9, 0x49(r3)
	sth      r7, 0x36(r3)
	sth      r6, 0x38(r3)
	sth      r5, 0x3a(r3)
	sth      r4, 0x3c(r3)
	sth      r9, 0x3e(r3)
	sth      r9, 0x40(r3)
	stb      r0, 0x4a(r3)
	stb      r0, 0x4b(r3)
	stb      r0, 0x4c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A85F4
 * Size:	000164
 */
void JASChannelUpdater::initialUpdateChannel(JASChannel*, JASDsp::TChannel*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r30, r3
	mr       r27, r4
	mr       r31, r5
	li       r28, 0
	mr       r29, r30

lbl_800A8618:
	lhz      r5, 0x36(r29)
	mr       r3, r27
	mr       r4, r28
	bl       setMixConfig__10JASChannelFiUs
	addi     r28, r28, 1
	addi     r29, r29, 2
	cmpwi    r28, 6
	blt      lbl_800A8618
	lhz      r0, 0xb0(r27)
	cmplwi   r0, 0xffff
	bne      lbl_800A8650
	mr       r3, r31
	bl       initAutoMixer__Q26JASDsp8TChannelFv
	b        lbl_800A868C

lbl_800A8650:
	lbz      r4, 0x48(r30)
	mr       r3, r31
	bl       setMixerInitDelayMax__Q26JASDsp8TChannelFUc
	li       r28, 0
	b        lbl_800A8680

lbl_800A8664:
	clrlwi   r4, r28, 0x18
	mr       r3, r31
	addi     r0, r4, 0x42
	mr       r4, r28
	lbzx     r5, r30, r0
	bl       setMixerInitDelaySamples__Q26JASDsp8TChannelFUcUc
	addi     r28, r28, 1

lbl_800A8680:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 6
	blt      lbl_800A8664

lbl_800A868C:
	lbz      r0, 0x4a(r30)
	li       r28, 0
	stb      r0, 0x108(r27)
	lbz      r0, 0x4b(r30)
	stb      r0, 0x109(r27)
	lbz      r0, 0x4c(r30)
	stb      r0, 0x10a(r27)
	lfs      f0, 0(r30)
	stfs     f0, 0x100(r27)
	lfs      f0, 4(r30)
	stfs     f0, 0x104(r27)
	lfs      f0, 8(r30)
	stfs     f0, 0xd0(r27)
	lfs      f0, 0xc(r30)
	stfs     f0, 0xd8(r27)
	lfs      f0, 0x10(r30)
	stfs     f0, 0xe0(r27)
	b        lbl_800A86F0

lbl_800A86D4:
	clrlwi   r4, r28, 0x18
	mr       r3, r31
	addi     r0, r4, 0x42
	mr       r4, r28
	lbzx     r5, r30, r0
	bl       setMixerDelaySamples__Q26JASDsp8TChannelFUcUc
	addi     r28, r28, 1

lbl_800A86F0:
	clrlwi   r0, r28, 0x18
	cmplwi   r0, 6
	blt      lbl_800A86D4
	lbz      r0, 0x49(r30)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A8714
	mr       r3, r31
	addi     r4, r30, 0x24
	bl       setIIRFilterParam__Q26JASDsp8TChannelFPs

lbl_800A8714:
	lbz      r0, 0x49(r30)
	clrlwi.  r0, r0, 0x1b
	beq      lbl_800A872C
	mr       r3, r31
	addi     r4, r30, 0x14
	bl       setFIR8FilterParam__Q26JASDsp8TChannelFPs

lbl_800A872C:
	lbz      r4, 0x49(r30)
	mr       r3, r31
	bl       setFilterMode__Q26JASDsp8TChannelFUs
	lha      r4, 0x34(r30)
	mr       r3, r31
	bl       setDistFilter__Q26JASDsp8TChannelFs
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	800A8758
 * Size:	0000E8
 */
void JASChannelUpdater::updateChannel(JASChannel*, JASDsp::TChannel*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 0x18(r4)
	cmpwi    r0, 2
	beq      lbl_800A8824
	lfs      f0, 0(r29)
	li       r31, 0
	stfs     f0, 0x100(r4)
	lfs      f0, 4(r29)
	stfs     f0, 0x104(r4)
	lfs      f0, 8(r29)
	stfs     f0, 0xd0(r4)
	lfs      f0, 0xc(r29)
	stfs     f0, 0xd8(r4)
	lfs      f0, 0x10(r29)
	stfs     f0, 0xe0(r4)
	b        lbl_800A87D0

lbl_800A87B4:
	clrlwi   r4, r31, 0x18
	mr       r3, r30
	addi     r0, r4, 0x42
	mr       r4, r31
	lbzx     r5, r29, r0
	bl       setMixerDelaySamples__Q26JASDsp8TChannelFUcUc
	addi     r31, r31, 1

lbl_800A87D0:
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 6
	blt      lbl_800A87B4
	lbz      r0, 0x49(r29)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_800A87F4
	mr       r3, r30
	addi     r4, r29, 0x24
	bl       setIIRFilterParam__Q26JASDsp8TChannelFPs

lbl_800A87F4:
	lbz      r0, 0x49(r29)
	clrlwi.  r0, r0, 0x1b
	beq      lbl_800A880C
	mr       r3, r30
	addi     r4, r29, 0x14
	bl       setFIR8FilterParam__Q26JASDsp8TChannelFPs

lbl_800A880C:
	lbz      r4, 0x49(r29)
	mr       r3, r30
	bl       setFilterMode__Q26JASDsp8TChannelFUs
	lha      r4, 0x34(r29)
	mr       r3, r30
	bl       setDistFilter__Q26JASDsp8TChannelFs

lbl_800A8824:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
