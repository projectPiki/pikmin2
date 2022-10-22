#include "JSystem/JGeometry.h"
#include "JSystem/JPA/JPABlock.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804A3248
    lbl_804A3248:
        .4byte lbl_8008FA2C
        .4byte lbl_8008FA3C
        .4byte lbl_8008FA4C
        .4byte lbl_8008FA5C
        .4byte lbl_8008FA6C
        .4byte lbl_8008FA7C
        .4byte lbl_8008FA8C
        .4byte 0x00000000

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516B78
    lbl_80516B78:
        .4byte 0x00000000
    .global lbl_80516B7C
    lbl_80516B7C:
        .float 1.0
    .global lbl_80516B80
    lbl_80516B80:
        .float 0.5
        .4byte 0x00000000
    .global lbl_80516B88
    lbl_80516B88:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516B90
    lbl_80516B90:
        .4byte 0x47000000
        .4byte 0x00000000
    .global lbl_80516B98
    lbl_80516B98:
        .4byte 0x43300000
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	8008EFD0
 * Size:	0000DC
 */
void JPAVolumePoint(JPAEmitterWorkData* workData)
{
	workData->_10 = JGeometry::TVec3f(0.0f, 0.0f, 0.0f);
	workData->_1C = JGeometry::TVec3f(workData->m_emitter->m_rng.nextFloat_0_1() - 0.5f, workData->m_emitter->m_rng.nextFloat_0_1() - 0.5f,
	                                  workData->m_emitter->m_rng.nextFloat_0_1() - 0.5f);
	workData->_28 = JGeometry::TVec3f(workData->_1C.x, 0.0f, workData->_1C.z);
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x0019660D@ha
	lfs      f3, lbl_80516B78@sda21(r2)
	addi     r5, r4, 0x0019660D@l
	lfs      f2, lbl_80516B7C@sda21(r2)
	stfs     f3, 0x18(r3)
	lfs      f1, lbl_80516B80@sda21(r2)
	stfs     f3, 0x14(r3)
	stfs     f3, 0x10(r3)
	lwz      r6, 0(r3)
	lwz      r0, 0xc4(r6)
	mullw    r4, r0, r5
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	lwz      r6, 0(r3)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc4(r6)
	lfs      f0, 0x10(r1)
	mullw    r4, r0, r5
	fsubs    f0, f0, f2
	fsubs    f4, f0, f1
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	lwz      r6, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r0, 0xc4(r6)
	lfs      f0, 0xc(r1)
	mullw    r4, r0, r5
	fsubs    f0, f0, f2
	fsubs    f5, f0, f1
	addis    r4, r4, 0x3c6f
	addi     r4, r4, -3233
	srwi     r0, r4, 9
	stw      r4, 0xc4(r6)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lfs      f0, 8(r1)
	fsubs    f0, f0, f2
	fsubs    f0, f0, f1
	stfs     f0, 0x1c(r3)
	stfs     f5, 0x20(r3)
	stfs     f4, 0x24(r3)
	lfs      f1, 0x24(r3)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x28(r3)
	stfs     f3, 0x2c(r3)
	stfs     f1, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F0AC
 * Size:	00011C
 */
void JPAVolumeLine(JPAEmitterWorkData* workData)
{
	if (workData->m_emitter->m_resource->_2C->castData()->_08 & 2) {
		workData->_10
		    = JGeometry::TVec3f(0.0f, 0.0f, workData->_34 * ((float)workData->_44 / ((float)workData->m_createNumber - 1.0f) - 0.5f));
		workData->_44++;
	} else {
		workData->_10 = JGeometry::TVec3f(0.0f, 0.0f, workData->_34 * (workData->m_emitter->m_rng.nextFloat_0_1() - 0.5f));
	}
	workData->_1C = JGeometry::TVec3f(0.0f, 0.0f, workData->_10.z * workData->_11C);
	workData->_28 = JGeometry::TVec3f(0.0f, 0.0f, workData->_10.z);
	/*
	stwu     r1, -0x20(r1)
	lwz      r6, 0(r3)
	lwz      r4, 0xe8(r6)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008F140
	lwz      r0, 0x40(r3)
	lis      r4, 0x4330
	lwz      r5, 0x44(r3)
	xoris    r0, r0, 0x8000
	stw      r4, 0x18(r1)
	xoris    r5, r5, 0x8000
	lfd      f4, lbl_80516B88@sda21(r2)
	stw      r0, 0x1c(r1)
	lfs      f0, lbl_80516B7C@sda21(r2)
	lfd      f1, 0x18(r1)
	stw      r5, 0x14(r1)
	fsubs    f2, f1, f4
	lfs      f1, lbl_80516B80@sda21(r2)
	stw      r4, 0x10(r1)
	lfs      f5, 0x34(r3)
	lfd      f3, 0x10(r1)
	fsubs    f2, f2, f0
	lfs      f0, lbl_80516B78@sda21(r2)
	fsubs    f3, f3, f4
	stfs     f0, 0x10(r3)
	fdivs    f2, f3, f2
	stfs     f0, 0x14(r3)
	fsubs    f0, f2, f1
	fmuls    f0, f5, f0
	stfs     f0, 0x18(r3)
	lwz      r4, 0x44(r3)
	addi     r0, r4, 1
	stw      r0, 0x44(r3)
	b        lbl_8008F194

lbl_8008F140:
	lis      r4, 0x0019660D@ha
	lwz      r5, 0xc4(r6)
	addi     r0, r4, 0x0019660D@l
	lfs      f2, lbl_80516B7C@sda21(r2)
	mullw    r4, r5, r0
	lfs      f1, lbl_80516B80@sda21(r2)
	lfs      f0, lbl_80516B78@sda21(r2)
	addis    r4, r4, 0x3c6f
	addi     r4, r4, -3233
	srwi     r0, r4, 9
	stw      r4, 0xc4(r6)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lfs      f4, 0x34(r3)
	lfs      f3, 8(r1)
	stfs     f0, 0x10(r3)
	fsubs    f2, f3, f2
	stfs     f0, 0x14(r3)
	fsubs    f0, f2, f1
	fmuls    f0, f4, f0
	stfs     f0, 0x18(r3)

lbl_8008F194:
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	lfs      f0, lbl_80516B78@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f0, 0x1c(r3)
	stfs     f0, 0x20(r3)
	stfs     f1, 0x24(r3)
	lfs      f1, 0x18(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f1, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F1C8
 * Size:	0001B4
 */
void JPAVolumeCircle(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r6, 0(r3)
	lwz      r4, 0xe8(r6)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008F238
	lwz      r6, 0x44(r3)
	lis      r0, 0x4330
	lwz      r4, 0x40(r3)
	slwi     r5, r6, 0x10
	stw      r0, 0x10(r1)
	divw     r4, r5, r4
	lfd      f2, lbl_80516B88@sda21(r2)
	lfs      f0, 0x3c(r3)
	addi     r0, r6, 1
	stw      r0, 0x44(r3)
	extsh    r0, r4
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f1, 0x10(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r6, 0x1c(r1)
	b        lbl_8008F28C

lbl_8008F238:
	lis      r4, 0x0019660D@ha
	lwz      r5, 0xc4(r6)
	addi     r4, r4, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r4, r5, r4
	stw      r0, 0x18(r1)
	lfd      f1, lbl_80516B88@sda21(r2)
	addis    r4, r4, 0x3c6f
	addi     r4, r4, -3233
	srwi     r0, r4, 0x10
	stw      r4, 0xc4(r6)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	lfs      f2, 0x3c(r3)
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r6, 0x14(r1)

lbl_8008F28C:
	lwz      r5, 0(r3)
	lis      r4, 0x0019660D@ha
	addi     r0, r4, 0x0019660D@l
	lfs      f0, lbl_80516B7C@sda21(r2)
	lwz      r4, 0xc4(r5)
	mullw    r4, r4, r0
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r5)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	lwz      r4, 0(r3)
	stw      r0, 8(r1)
	lwz      r4, 0xe8(r4)
	lfs      f1, 8(r1)
	lwz      r4, 0x2c(r4)
	fsubs    f1, f1, f0
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	fmr      f5, f1
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8008F2E8
	fnmsubs  f5, f1, f1, f0

lbl_8008F2E8:
	lfs      f3, 0x38(r3)
	lis      r4, sincosTable___5JMath@ha
	lfs      f0, lbl_80516B7C@sda21(r2)
	addi     r5, r4, sincosTable___5JMath@l
	rlwinm   r0, r6, 0x1e, 0x12, 0x1c
	lfs      f4, 0x34(r3)
	fsubs    f2, f0, f3
	add      r4, r5, r0
	lfsx     f0, r5, r0
	lfs      f1, 4(r4)
	fmadds   f3, f5, f2, f3
	lfs      f2, lbl_80516B78@sda21(r2)
	fmuls    f3, f4, f3
	fmuls    f0, f3, f0
	fmuls    f1, f3, f1
	stfs     f0, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f1, 0x18(r3)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x114(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lfs      f1, 0x14(r3)
	lfs      f0, 0x118(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x20(r3)
	lfs      f1, 0x18(r3)
	lfs      f0, 0x11c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x24(r3)
	lfs      f1, 0x18(r3)
	lfs      f0, 0x10(r3)
	stfs     f0, 0x28(r3)
	stfs     f2, 0x2c(r3)
	stfs     f1, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F37C
 * Size:	000118
 */
void JPAVolumeCube(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x0019660D@ha
	addi     r5, r4, 0x0019660D@l
	lfs      f4, lbl_80516B7C@sda21(r2)
	lwz      r6, 0(r3)
	lfs      f3, lbl_80516B80@sda21(r2)
	lwz      r0, 0xc4(r6)
	lfs      f0, lbl_80516B78@sda21(r2)
	mullw    r4, r0, r5
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	lwz      r6, 0(r3)
	stw      r0, 0x10(r1)
	lwz      r0, 0xc4(r6)
	lfs      f1, 0x10(r1)
	mullw    r4, r0, r5
	lfs      f2, 0x34(r3)
	fsubs    f1, f1, f4
	fsubs    f1, f1, f3
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	fmuls    f6, f2, f1
	lwz      r6, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r0, 0xc4(r6)
	lfs      f1, 0xc(r1)
	mullw    r4, r0, r5
	lfs      f2, 0x34(r3)
	fsubs    f1, f1, f4
	fsubs    f1, f1, f3
	addis    r4, r4, 0x3c6f
	addi     r4, r4, -3233
	srwi     r0, r4, 9
	fmuls    f5, f2, f1
	oris     r0, r0, 0x3f80
	stw      r4, 0xc4(r6)
	stw      r0, 8(r1)
	lfs      f2, 0x34(r3)
	lfs      f1, 8(r1)
	fsubs    f1, f1, f4
	fsubs    f1, f1, f3
	fmuls    f1, f2, f1
	stfs     f1, 0x10(r3)
	stfs     f5, 0x14(r3)
	stfs     f6, 0x18(r3)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x114(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x1c(r3)
	lfs      f2, 0x14(r3)
	lfs      f1, 0x118(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F494
 * Size:	00028C
 */
void JPAVolumeSphere(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lwz      r7, 0(r3)
	lwz      r4, 0xe8(r7)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008F59C
	lwz      r6, 0x1ec(r3)
	lis      r0, 0x4330
	lwz      r4, 0x1f0(r3)
	slwi     r5, r6, 0x10
	lwz      r8, 0x1f4(r3)
	addi     r4, r4, -1
	lwz      r7, 0x1f8(r3)
	divw     r4, r5, r4
	slwi     r8, r8, 0xf
	addi     r5, r7, -1
	stw      r0, 0x10(r1)
	lfd      f3, lbl_80516B98@sda21(r2)
	addi     r0, r6, 1
	divw     r5, r8, r5
	clrlwi   r4, r4, 0x10
	stw      r4, 0x14(r1)
	lfs      f1, 0x3c(r3)
	lfd      f2, 0x10(r1)
	lfs      f0, lbl_80516B90@sda21(r2)
	stw      r0, 0x1ec(r3)
	fsubs    f2, f2, f3
	addi     r0, r5, 0x4000
	clrlwi   r0, r0, 0x10
	lwz      r5, 0x1ec(r3)
	fmadds   f0, f2, f1, f0
	lwz      r4, 0x1f0(r3)
	extsh    r0, r0
	cmpw     r5, r4
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r4, 0x1c(r1)
	bne      lbl_8008F618
	li       r5, 0
	stw      r5, 0x1ec(r3)
	lwz      r5, 0x1f4(r3)
	addi     r5, r5, 1
	stw      r5, 0x1f4(r3)
	lwz      r6, 0x1f4(r3)
	lwz      r5, 0x1f8(r3)
	slwi     r6, r6, 1
	cmpw     r6, r5
	bge      lbl_8008F57C
	lwz      r5, 0x1f0(r3)
	cmpwi    r5, 1
	beq      lbl_8008F570
	addi     r5, r5, 4
	b        lbl_8008F574

lbl_8008F570:
	addi     r5, r5, 3

lbl_8008F574:
	stw      r5, 0x1f0(r3)
	b        lbl_8008F618

lbl_8008F57C:
	lwz      r5, 0x1f0(r3)
	cmpwi    r5, 4
	beq      lbl_8008F590
	addi     r5, r5, -4
	b        lbl_8008F594

lbl_8008F590:
	li       r5, 1

lbl_8008F594:
	stw      r5, 0x1f0(r3)
	b        lbl_8008F618

lbl_8008F59C:
	lis      r4, 0x0019660D@ha
	lwz      r6, 0xc4(r7)
	addi     r5, r4, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r4, r6, r5
	stw      r0, 0x18(r1)
	lfd      f1, lbl_80516B88@sda21(r2)
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r7)
	srwi     r0, r0, 0x10
	extsh    r0, r0
	lwz      r6, 0(r3)
	srawi    r0, r0, 1
	extsh    r0, r0
	lwz      r4, 0xc4(r6)
	mullw    r4, r4, r5
	addis    r4, r4, 0x3c6f
	addi     r5, r4, -3233
	srwi     r4, r5, 0x10
	stw      r5, 0xc4(r6)
	extsh    r4, r4
	xoris    r4, r4, 0x8000
	lfs      f2, 0x3c(r3)
	stw      r4, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)

lbl_8008F618:
	lwz      r7, 0(r3)
	lis      r5, 0x0019660D@ha
	addi     r5, r5, 0x0019660D@l
	lfs      f1, lbl_80516B7C@sda21(r2)
	lwz      r6, 0xc4(r7)
	mullw    r5, r6, r5
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	stw      r5, 0xc4(r7)
	srwi     r5, r5, 9
	oris     r6, r5, 0x3f80
	lwz      r5, 0(r3)
	stw      r6, 8(r1)
	lwz      r5, 0xe8(r5)
	lfs      f0, 8(r1)
	lwz      r5, 0x2c(r5)
	fsubs    f2, f0, f1
	lwz      r5, 0(r5)
	lwz      r5, 8(r5)
	clrlwi.  r5, r5, 0x1f
	beq      lbl_8008F674
	fmuls    f0, f2, f2
	fnmsubs  f2, f2, f0, f1

lbl_8008F674:
	lfs      f1, 0x38(r3)
	lis      r5, sincosTable___5JMath@ha
	lfs      f0, lbl_80516B7C@sda21(r2)
	addi     r5, r5, sincosTable___5JMath@l
	rlwinm   r6, r4, 0x1e, 0x12, 0x1c
	lfs      f5, 0x34(r3)
	fsubs    f0, f0, f1
	addi     r4, r5, 4
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfsx     f4, r4, r6
	lfsx     f3, r4, r0
	fmadds   f0, f2, f0, f1
	lfsx     f1, r5, r6
	lfsx     f2, r5, r0
	fmuls    f6, f5, f0
	lfs      f0, lbl_80516B78@sda21(r2)
	fmuls    f5, f6, f3
	fneg     f3, f6
	fmuls    f1, f5, f1
	fmuls    f2, f3, f2
	fmuls    f3, f5, f4
	stfs     f1, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f3, 0x18(r3)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x114(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x1c(r3)
	lfs      f2, 0x14(r3)
	lfs      f1, 0x118(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F720
 * Size:	000184
 */
void JPAVolumeCylinder(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r4, 0x0019660D@ha
	lis      r0, 0x4330
	lfd      f2, lbl_80516B88@sda21(r2)
	lwz      r7, 0(r3)
	addi     r5, r4, 0x0019660D@l
	stw      r0, 0x10(r1)
	lwz      r6, 0xc4(r7)
	lfs      f0, lbl_80516B7C@sda21(r2)
	mullw    r4, r6, r5
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r7)
	srwi     r0, r0, 0x10
	extsh    r0, r0
	lwz      r6, 0(r3)
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lwz      r0, 0xc4(r6)
	lfd      f1, 0x10(r1)
	mullw    r4, r0, r5
	lfs      f3, 0x3c(r3)
	fsubs    f1, f1, f2
	fmuls    f1, f3, f1
	addis    r4, r4, 0x3c6f
	addi     r0, r4, -3233
	stw      r0, 0xc4(r6)
	srwi     r0, r0, 9
	oris     r0, r0, 0x3f80
	fctiwz   f2, f1
	lwz      r7, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r4, 0xe8(r7)
	lfs      f1, 0xc(r1)
	lwz      r4, 0x2c(r4)
	stfd     f2, 0x18(r1)
	fsubs    f1, f1, f0
	lwz      r4, 0(r4)
	lwz      r8, 0x1c(r1)
	lwz      r0, 8(r4)
	fmr      f2, f1
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8008F7D0
	fnmsubs  f2, f1, f1, f0

lbl_8008F7D0:
	lis      r4, 0x0019660D@ha
	lwz      r5, 0xc4(r7)
	addi     r0, r4, 0x0019660D@l
	lis      r6, sincosTable___5JMath@ha
	mullw    r4, r5, r0
	lfs      f1, 0x38(r3)
	lfs      f5, lbl_80516B7C@sda21(r2)
	addi     r6, r6, sincosTable___5JMath@l
	rlwinm   r8, r8, 0x1e, 0x12, 0x1c
	lfs      f3, 0x34(r3)
	addis    r4, r4, 0x3c6f
	fsubs    f0, f5, f1
	addi     r4, r4, -3233
	add      r5, r6, r8
	srwi     r0, r4, 9
	lfs      f4, 4(r5)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	fmadds   f2, f2, f0, f1
	lfs      f0, lbl_80516B78@sda21(r2)
	lfs      f1, 8(r1)
	fmuls    f7, f3, f2
	stw      r4, 0xc4(r7)
	fsubs    f6, f1, f5
	lfsx     f1, r6, r8
	lfs      f3, 0x34(r3)
	fmuls    f4, f7, f4
	fadds    f2, f6, f6
	fmuls    f1, f7, f1
	fsubs    f2, f2, f5
	stfs     f1, 0x10(r3)
	fmuls    f1, f3, f2
	stfs     f1, 0x14(r3)
	stfs     f4, 0x18(r3)
	lfs      f2, 0x10(r3)
	lfs      f1, 0x114(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x1c(r3)
	lfs      f2, 0x14(r3)
	lfs      f1, 0x118(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x20(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x11c(r3)
	fmuls    f1, f2, f1
	stfs     f1, 0x24(r3)
	lfs      f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	stfs     f1, 0x28(r3)
	stfs     f0, 0x2c(r3)
	stfs     f2, 0x30(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F8A4
 * Size:	000128
 */
void JPAVolumeTorus(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r5, 0x0019660D@ha
	lis      r0, 0x4330
	lis      r4, sincosTable___5JMath@ha
	lwz      r8, 0(r3)
	addi     r4, r4, sincosTable___5JMath@l
	addi     r6, r5, 0x0019660D@l
	stw      r0, 8(r1)
	lwz      r7, 0xc4(r8)
	addi     r9, r4, 4
	lfd      f1, lbl_80516B88@sda21(r2)
	mullw    r5, r7, r6
	addis    r5, r5, 0x3c6f
	addi     r5, r5, -3233
	srwi     r0, r5, 0x10
	stw      r5, 0xc4(r8)
	extsh    r0, r0
	xoris    r0, r0, 0x8000
	lwz      r7, 0(r3)
	stw      r0, 0xc(r1)
	lwz      r0, 0xc4(r7)
	lfd      f0, 8(r1)
	mullw    r5, r0, r6
	lfs      f2, 0x3c(r3)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	addis    r5, r5, 0x3c6f
	addi     r0, r5, -3233
	fctiwz   f0, f0
	stw      r0, 0xc4(r7)
	rlwinm   r0, r0, 0xe, 0x12, 0x1c
	lfs      f1, 0x34(r3)
	stfd     f0, 0x10(r1)
	lfs      f0, 0x38(r3)
	lwz      r5, 0x14(r1)
	fmuls    f5, f1, f0
	lfsx     f1, r4, r0
	rlwinm   r5, r5, 0x1e, 0x12, 0x1c
	lfsx     f4, r9, r0
	lfsx     f0, r4, r5
	lfsx     f2, r9, r5
	fmuls    f0, f5, f0
	fmuls    f3, f5, f1
	fmuls    f1, f5, f2
	fmuls    f0, f0, f4
	fmuls    f1, f1, f4
	stfs     f0, 0x28(r3)
	stfs     f3, 0x2c(r3)
	stfs     f1, 0x30(r3)
	lfs      f4, 0x34(r3)
	lfsx     f1, r4, r5
	lfs      f0, 0x28(r3)
	lfsx     f3, r9, r5
	fmadds   f0, f4, f1, f0
	lfs      f2, 0x30(r3)
	lfs      f1, 0x2c(r3)
	fmadds   f2, f4, f3, f2
	stfs     f0, 0x10(r3)
	stfs     f1, 0x14(r3)
	stfs     f2, 0x18(r3)
	lfs      f1, 0x10(r3)
	lfs      f0, 0x114(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x1c(r3)
	lfs      f1, 0x14(r3)
	lfs      f0, 0x118(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x20(r3)
	lfs      f1, 0x18(r3)
	lfs      f0, 0x11c(r3)
	fmuls    f0, f1, f0
	stfs     f0, 0x24(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008F9CC
 * Size:	000034
 */
JPADynamicsBlock::JPADynamicsBlock(const unsigned char*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0(r3)
	bl       init__16JPADynamicsBlockFv
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
 * Address:	........
 * Size:	0001E0
 */
void JPADynamicsBlock::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008FA00
 * Size:	00009C
 */
void JPADynamicsBlock::init()
{
	/*
	lwz      r4, 0(r3)
	lwz      r0, 8(r4)
	rlwinm   r0, r0, 0x18, 0x1d, 0x1f
	cmplwi   r0, 6
	bgtlr
	lis      r4, lbl_804A3248@ha
	slwi     r0, r0, 2
	addi     r4, r4, lbl_804A3248@l
	lwzx     r0, r4, r0
	mtctr    r0
	bctr
	.global  lbl_8008FA2C

lbl_8008FA2C:
	lis      r4, JPAVolumeCube__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeCube__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA3C

lbl_8008FA3C:
	lis      r4, JPAVolumeSphere__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeSphere__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA4C

lbl_8008FA4C:
	lis      r4, JPAVolumeCylinder__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeCylinder__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA5C

lbl_8008FA5C:
	lis      r4, JPAVolumeTorus__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeTorus__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA6C

lbl_8008FA6C:
	lis      r4, JPAVolumePoint__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumePoint__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA7C

lbl_8008FA7C:
	lis      r4, JPAVolumeCircle__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeCircle__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	.global  lbl_8008FA8C

lbl_8008FA8C:
	lis      r4, JPAVolumeLine__FP18JPAEmitterWorkData@ha
	addi     r0, r4, JPAVolumeLine__FP18JPAEmitterWorkData@l
	stw      r0, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008FA9C
 * Size:	000200
 */
void JPADynamicsBlock::create(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	lwz      r6, 0(r4)
	lwz      r0, 0xf4(r6)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_8008FC14
	lwz      r4, 0xe8(r6)
	lwz      r4, 0x2c(r4)
	lwz      r4, 0(r4)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008FB18
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm   r0, r0, 0x18, 0x1d, 0x1f
	cmplwi   r0, 1
	bne      lbl_8008FB04
	lhz      r3, 0x76(r3)
	slwi     r0, r3, 2
	mullw    r3, r3, r0
	addi     r3, r3, 2
	b        lbl_8008FB08

lbl_8008FB04:
	lhz      r3, 0x76(r3)

lbl_8008FB08:
	li       r0, 0
	mr       r4, r3
	stw      r0, 0x44(r31)
	b        lbl_8008FBD8

lbl_8008FB18:
	lis      r4, 0x0019660D@ha
	lwz      r5, 0xc4(r6)
	addi     r4, r4, 0x0019660D@l
	lis      r0, 0x4330
	mullw    r4, r5, r4
	stw      r0, 0x18(r1)
	lfs      f5, lbl_80516B7C@sda21(r2)
	lfd      f1, lbl_80516B88@sda21(r2)
	addis    r4, r4, 0x3c6f
	addi     r4, r4, -3233
	srwi     r0, r4, 9
	stw      r4, 0xc4(r6)
	oris     r0, r0, 0x3f80
	stw      r0, 8(r1)
	lwz      r3, 0(r3)
	lfs      f0, 8(r1)
	lwz      r4, 0(r31)
	fsubs    f2, f0, f5
	lfs      f3, 0x50(r3)
	lfs      f4, 0x28(r4)
	lfs      f0, 0xf8(r4)
	fadds    f2, f2, f2
	fsubs    f2, f2, f5
	fmadds   f2, f3, f2, f5
	fmuls    f3, f4, f2
	fadds    f2, f0, f3
	fctiwz   f0, f2
	stfs     f2, 0xf8(r4)
	lwz      r3, 0(r31)
	stfd     f0, 0x10(r1)
	lfs      f2, 0xf8(r3)
	lwz      r4, 0x14(r1)
	xoris    r0, r4, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f0, f0, f1
	fsubs    f0, f2, f0
	stfs     f0, 0xf8(r3)
	lwz      r3, 0(r31)
	lwz      r0, 0xf4(r3)
	rlwinm.  r0, r0, 0, 0x1b, 0x1b
	beq      lbl_8008FBD8
	lfs      f0, lbl_80516B78@sda21(r2)
	fcmpo    cr0, f0, f3
	bge      lbl_8008FBD8
	fcmpo    cr0, f3, f5
	bge      lbl_8008FBD8
	li       r4, 1

lbl_8008FBD8:
	stw      r4, 0x40(r31)
	lwz      r3, 0(r31)
	lwz      r0, 0xf4(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8008FBF0
	li       r4, 0

lbl_8008FBF0:
	mr       r30, r4
	b        lbl_8008FC0C

lbl_8008FBF8:
	lwz      r3, 0(r31)
	bl       createParticle__14JPABaseEmitterFv
	cmplwi   r3, 0
	beq      lbl_8008FC14
	addi     r30, r30, -1

lbl_8008FC0C:
	cmpwi    r30, 0
	bgt      lbl_8008FBF8

lbl_8008FC14:
	lwz      r5, 0(r31)
	lha      r3, 0x106(r5)
	addi     r0, r3, 1
	sth      r0, 0x106(r5)
	extsh    r4, r0
	lbz      r3, 0x56(r5)
	addi     r0, r3, 1
	cmpw     r4, r0
	blt      lbl_8008FC64
	lwz      r4, 0(r31)
	lbz      r3, 0x56(r4)
	lha      r0, 0x106(r4)
	addi     r3, r3, 1
	subf     r0, r3, r0
	sth      r0, 0x106(r4)
	lwz      r3, 0(r31)
	lwz      r0, 0xf4(r3)
	ori      r0, r0, 0x20
	stw      r0, 0xf4(r3)
	b        lbl_8008FC74

lbl_8008FC64:
	lwz      r3, 0(r31)
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stw      r0, 0xf4(r3)

lbl_8008FC74:
	lwz      r3, 0(r31)
	lwz      r0, 0xf4(r3)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stw      r0, 0xf4(r3)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}
