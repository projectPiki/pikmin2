#include "Dolphin/gx.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAShape.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516B70
    lbl_80516B70:
        .4byte 0x437F0000
    .global lbl_80516B74
    lbl_80516B74:
        .float 1.0
*/

/*
 * --INFO--
 * Address:	8008EE44
 * Size:	000128
 */
void JPARegistChildPrmEnv(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	addi     r4, r1, 0xc
	stmw     r25, 0x24(r1)
	lwz      r5, 4(r3)
	lwz      r28, 0(r3)
	li       r3, 1
	lwz      r5, 0x24(r5)
	lbz      r7, 0xb8(r28)
	lwz      r5, 0(r5)
	addi     r0, r7, 1
	lbz      r6, 0xb9(r28)
	lbz      r31, 0x34(r5)
	addi     r8, r6, 1
	lbz      r25, 0x35(r5)
	mullw    r10, r31, r0
	lbz      r7, 0xba(r28)
	lbz      r6, 0xbb(r28)
	lbz      r26, 0x36(r5)
	addi     r0, r7, 1
	lbz      r27, 0x37(r5)
	addi     r9, r6, 1
	lbz      r7, 0xbd(r28)
	mullw    r11, r25, r8
	lbz      r8, 0xbc(r28)
	rlwinm   r12, r10, 0x18, 0x18, 0x1f
	stb      r31, 0x14(r1)
	lbz      r6, 0xbe(r28)
	addi     r8, r8, 1
	mullw    r10, r26, r0
	lbz      r28, 0x38(r5)
	lbz      r29, 0x39(r5)
	addi     r0, r6, 1
	lbz      r30, 0x3a(r5)
	addi     r7, r7, 1
	lbz      r31, 0x3b(r5)
	mullw    r9, r27, r9
	stb      r25, 0x15(r1)
	rlwinm   r11, r11, 0x18, 0x18, 0x1f
	rlwinm   r10, r10, 0x18, 0x18, 0x1f
	stb      r26, 0x16(r1)
	mullw    r6, r28, r8
	stb      r27, 0x17(r1)
	rlwinm   r8, r9, 0x18, 0x18, 0x1f
	stb      r12, 0x14(r1)
	mullw    r5, r29, r7
	stb      r11, 0x15(r1)
	rlwinm   r7, r6, 0x18, 0x18, 0x1f
	stb      r28, 0x10(r1)
	stb      r10, 0x16(r1)
	mullw    r0, r30, r0
	rlwinm   r6, r5, 0x18, 0x18, 0x1f
	stb      r29, 0x11(r1)
	stb      r8, 0x17(r1)
	rlwinm   r5, r0, 0x18, 0x18, 0x1f
	stb      r30, 0x12(r1)
	lwz      r0, 0x14(r1)
	stb      r31, 0x13(r1)
	stb      r7, 0x10(r1)
	stb      r6, 0x11(r1)
	stb      r5, 0x12(r1)
	stw      r0, 0xc(r1)
	bl       GXSetTevColor
	lwz      r0, 0x10(r1)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008EF6C
 * Size:	00002C
 */
void JPACalcChildAlphaOut(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	double a      = (1.0f - particle->_84) * 255.0f;
	particle->_96 = ((u8*)&a)[0];
	/*
	stwu     r1, -0x10(r1)
	lfs      f1, lbl_80516B74@sda21(r2)
	lfs      f0, 0x84(r4)
	lfs      f2, lbl_80516B70@sda21(r2)
	fsubs    f0, f1, f0
	fmuls    f3, f2, f0
	psq_st   f3, 8(r1), 1, qr2
	lbz      r0, 8(r1)
	stb      r0, 0x96(r4)
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008EF98
 * Size:	000030
 */
void JPACalcChildScaleOut(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	particle->_60 = particle->_68 * (1.0f - particle->_84);
	particle->_64 = particle->_6C * (1.0f - particle->_84);
}

/*
 * --INFO--
 * Address:	8008EFC8
 * Size:	000008
 */
JPAChildShape::JPAChildShape(const unsigned char* data)
{
	// Generated from stw r4, 0x0(r3)
	m_data = data;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void JPAChildShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}
