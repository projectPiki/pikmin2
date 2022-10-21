#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "Dolphin/os.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "JSystem/JPA/JPAShape.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

typedef u32 JPAClrAnmKeyData; /** TODO: Remove and replace this. */

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global jpa_dl
    jpa_dl:
        .4byte 0x80000400
        .4byte 0x00010102
        .4byte 0x02030300
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global jpa_dl_x
    jpa_dl_x:
        .4byte 0x80000800
        .4byte 0x00010102
        .4byte 0x02030348
        .4byte 0x0049014A
        .4byte 0x024B0300
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global p_prj
    p_prj:
        .4byte noLoadPrj__FPC18JPAEmitterWorkDataPA4_Cf
        .4byte loadPrj__FPC18JPAEmitterWorkDataPA4_Cf
        .4byte loadPrjAnm__FPC18JPAEmitterWorkDataPA4_Cf
    .global p_direction
    p_direction:
        .4byte
   "dirTypeVel__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
        .4byte
   "dirTypePos__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
        .4byte
   "dirTypePosInv__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
        .4byte
   "dirTypeEmtrDir__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
        .4byte
   "dirTypePrevPtcl__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
    .global p_rot
    p_rot:
        .4byte rotTypeY__FffRA3_A4_f
        .4byte rotTypeX__FffRA3_A4_f
        .4byte rotTypeZ__FffRA3_A4_f
        .4byte rotTypeXYZ__FffRA3_A4_f
        .4byte rotTypeY__FffRA3_A4_f
    .global p_plane
    p_plane:
        .4byte basePlaneTypeXY__FPA4_fff
        .4byte basePlaneTypeXZ__FPA4_fff
        .4byte basePlaneTypeX__FPA4_fff
    .global st_bm__12JPABaseShape
    st_bm__12JPABaseShape:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
    .global st_bf__12JPABaseShape
    st_bf__12JPABaseShape:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000002
        .4byte 0x00000003
        .4byte 0x00000004
        .4byte 0x00000005
        .4byte 0x00000006
        .4byte 0x00000007
    .global st_lo__12JPABaseShape
    st_lo__12JPABaseShape:
        .4byte 0x00000000
        .4byte 0x0000000F
        .4byte 0x00000003
        .4byte 0x0000000C
        .4byte 0x00000005
        .4byte 0x0000000A
        .4byte 0x00000001
        .4byte 0x0000000E
        .4byte 0x00000007
        .4byte 0x00000008
        .4byte 0x00000006
        .4byte 0x00000009
        .4byte 0x00000002
        .4byte 0x00000004
        .4byte 0x0000000B
        .4byte 0x0000000D
    .global st_c__12JPABaseShape
    st_c__12JPABaseShape:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000003
        .4byte 0x00000002
        .4byte 0x00000005
        .4byte 0x00000006
        .4byte 0x00000004
        .4byte 0x00000007
    .global st_ao__12JPABaseShape
    st_ao__12JPABaseShape:
        .4byte 0x00000000
        .4byte 0x00000001
        .4byte 0x00000002
        .4byte 0x00000003
    .global st_ca__12JPABaseShape
    st_ca__12JPABaseShape:
        .4byte 0x0000000F
        .4byte 0x00000008
        .4byte 0x0000000C
        .4byte 0x0000000F
        .4byte 0x0000000F
        .4byte 0x00000002
        .4byte 0x00000008
        .4byte 0x0000000F
        .4byte 0x00000002
        .4byte 0x0000000C
        .4byte 0x00000008
        .4byte 0x0000000F
        .4byte 0x00000004
        .4byte 0x00000002
        .4byte 0x00000008
        .4byte 0x0000000F
        .4byte 0x0000000F
        .4byte 0x00000008
        .4byte 0x00000002
        .4byte 0x00000004
        .4byte 0x0000000F
        .4byte 0x0000000F
        .4byte 0x0000000F
        .4byte 0x00000002
    .global st_aa__12JPABaseShape
    st_aa__12JPABaseShape:
        .4byte 0x00000007
        .4byte 0x00000004
        .4byte 0x00000001
        .4byte 0x00000007
        .4byte 0x00000007
        .4byte 0x00000007
        .4byte 0x00000007
        .4byte 0x00000001
        .4byte 0x00000000

    .section .sdata, "wa"  # 0x80514680 - 0x80514D80
    .global p_dl
    p_dl:
        .4byte jpa_dl
        .4byte jpa_dl_x

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516B38
    lbl_80516B38:
        .4byte 0x41C80000
        .4byte 0x00000000
    .global lbl_80516B40
    lbl_80516B40:
        .4byte 0x43300000
        .4byte 0x80000000
    .global lbl_80516B48
    lbl_80516B48:
        .float 0.5
    .global lbl_80516B4C
    lbl_80516B4C:
        .float 1.0
    .global lbl_80516B50
    lbl_80516B50:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516B58
    lbl_80516B58:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516B60
    lbl_80516B60:
        .4byte 0x3EAAAA9F
    .global lbl_80516B64
    lbl_80516B64:
        .4byte 0x3F13CD36
    .global lbl_80516B68
    lbl_80516B68:
        .4byte 0x42000000
    .global lbl_80516B6C
    lbl_80516B6C:
        .4byte 0x40400000
*/

/*
 * --INFO--
 * Address:	8008B114
 * Size:	00003C
 */
void JPASetPointSize(JPAEmitterWorkData* workData)
{
	GXSetPointSize(workData->_144 * 25.0f, 5);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516B38@sda21(r2)
	li       r4, 5
	stw      r0, 0x14(r1)
	lfs      f0, 0x144(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	bl       GXSetPointSize
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B150
 * Size:	00003C
 */
void JPASetLineWidth(JPAEmitterWorkData* workData)
{
	GXSetLineWidth(workData->_144 * 25.0f, GX_TO_ONE);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516B38@sda21(r2)
	li       r4, 5
	stw      r0, 0x14(r1)
	lfs      f0, 0x144(r3)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	bl       GXSetLineWidth
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B18C
 * Size:	000044
 */
void JPASetPointSize(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	GXSetPointSize(particle->_60 * workData->_144 * 25.0f, 5);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516B38@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, 0x144(r3)
	lfs      f2, 0x60(r4)
	li       r4, 5
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	bl       GXSetPointSize
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B1D0
 * Size:	000044
 * JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle
 */
void JPASetLineWidth(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	// GXSetLineWidth(workData->_144 * 25.0f * particle->_60, GX_TO_ONE);
	// GXSetLineWidth(particle->_60 * 25.0f * workData->_144, GX_TO_ONE);
	// GXSetLineWidth(25.0f * particle->_60 * workData->_144, GX_TO_ONE);
	// GXSetLineWidth(25.0f * workData->_144 * particle->_60, GX_TO_ONE);
	// GXSetLineWidth(workData->_144 * particle->_60 * 25.0f, GX_TO_ONE);
	GXSetLineWidth(particle->_60 * workData->_144 * 25.0f, GX_TO_ONE);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f1, lbl_80516B38@sda21(r2)
	stw      r0, 0x14(r1)
	lfs      f0, 0x144(r3)
	lfs      f2, 0x60(r4)
	li       r4, 5
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r3, 0xc(r1)
	bl       GXSetLineWidth
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B214
 * Size:	00009C
 */
void JPARegistPrm(JPAEmitterWorkData* workData)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r4, r1, 8
	lwz      r8, 0(r3)
	li       r3, 1
	lwz      r0, 0x108(r8)
	lbz      r5, 0xb8(r8)
	stw      r0, 0xc(r1)
	lbz      r7, 0xb9(r8)
	addi     r10, r5, 1
	lbz      r6, 0xba(r8)
	lbz      r5, 0xbb(r8)
	addi     r8, r7, 1
	lbz      r7, 0xc(r1)
	addi     r6, r6, 1
	lbz      r9, 0xd(r1)
	addi     r0, r5, 1
	mullw    r10, r7, r10
	lbz      r7, 0xe(r1)
	lbz      r5, 0xf(r1)
	mullw    r8, r9, r8
	rlwinm   r9, r10, 0x18, 0x18, 0x1f
	stb      r9, 0xc(r1)
	mullw    r6, r7, r6
	rlwinm   r7, r8, 0x18, 0x18, 0x1f
	stb      r7, 0xd(r1)
	mullw    r0, r5, r0
	rlwinm   r5, r6, 0x18, 0x18, 0x1f
	stb      r5, 0xe(r1)
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0xf(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B2B0
 * Size:	000084
 */
void JPARegistEnv(JPAEmitterWorkData* workData)
{
	JPABaseEmitter* emitter = workData->m_emitter;
	// JUtility::TColor color  = emitter->_10C;
	// GXColor gxColor         = { static_cast<u8>(color.r * emitter->m_color.r + 1), static_cast<u8>(color.g * emitter->m_color.g + 1),
	// 	                        static_cast<u8>(color.b * emitter->m_color.b + 1), color.a };
	// GXColor gxColor = { static_cast<u8>(emitter->_10C.r * ((emitter->m_color.r + 1) / 0x100)),
	// 	                static_cast<u8>(emitter->_10C.g * ((emitter->m_color.g + 1) / 0x100)),
	// 	                static_cast<u8>(emitter->_10C.b * ((emitter->m_color.b + 1) / 0x100)), emitter->_10C.a };
	// GXColor gxColor
	//     = { static_cast<u8>(emitter->_10C.r * ((emitter->m_color.r + 1))), static_cast<u8>(emitter->_10C.g * ((emitter->m_color.g + 1))),
	// 	    static_cast<u8>(emitter->_10C.b * ((emitter->m_color.b + 1))), emitter->_10C.a };
	// GXColor gxColor = { static_cast<u8>(emitter->_10C.r * (static_cast<u16>(emitter->m_color.r + 1) / 0x100)),
	// 	                static_cast<u8>(emitter->_10C.g * (static_cast<u16>(emitter->m_color.g + 1) / 0x100)),
	// 	                static_cast<u8>(emitter->_10C.b * (static_cast<u16>(emitter->m_color.b + 1) / 0x100)), emitter->_10C.a };
	GXColor gxColor = { static_cast<u8>(emitter->_10C.r * (static_cast<u16>(emitter->m_color.r + 1) >> 8)),
		                static_cast<u8>(emitter->_10C.g * (static_cast<u16>(emitter->m_color.g + 1) >> 8)),
		                static_cast<u8>(emitter->_10C.b * (static_cast<u16>(emitter->m_color.b + 1) >> 8)), emitter->_10C.a };
	GXSetTevColor(GX_TEVREG1, gxColor);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	addi     r4, r1, 8
	lwz      r7, 0(r3)
	li       r3, 2
	lwz      r0, 0x10c(r7)
	lbz      r5, 0xbc(r7)
	stw      r0, 0xc(r1)
	addi     r8, r5, 1
	lbz      r5, 0xbe(r7)
	lbz      r6, 0xbd(r7)
	lbz      r9, 0xc(r1)
	addi     r0, r5, 1
	lbz      r5, 0xe(r1)
	addi     r6, r6, 1
	lbz      r7, 0xd(r1)
	mullw    r8, r9, r8
	mullw    r6, r7, r6
	rlwinm   r7, r8, 0x18, 0x18, 0x1f
	stb      r7, 0xc(r1)
	mullw    r0, r5, r0
	rlwinm   r5, r6, 0x18, 0x18, 0x1f
	stb      r5, 0xd(r1)
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0xe(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B334
 * Size:	000118
 */
void JPARegistPrmEnv(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r4, r1, 0xc
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	lwz      r9, 0(r3)
	li       r3, 1
	lwz      r0, 0x108(r9)
	lbz      r5, 0xb8(r9)
	stw      r0, 0x14(r1)
	addi     r8, r5, 1
	lbz      r6, 0xba(r9)
	lbz      r5, 0xbb(r9)
	lbz      r7, 0xb9(r9)
	addi     r12, r6, 1
	lbz      r6, 0x14(r1)
	addi     r10, r5, 1
	lbz      r31, 0x16(r1)
	addi     r0, r7, 1
	mullw    r8, r6, r8
	lbz      r5, 0x15(r1)
	lbz      r11, 0x17(r1)
	lwz      r7, 0x10c(r9)
	lbz      r6, 0xbd(r9)
	stw      r7, 0x10(r1)
	mullw    r30, r5, r0
	rlwinm   r29, r8, 0x18, 0x18, 0x1f
	lbz      r7, 0xbc(r9)
	lbz      r5, 0xbe(r9)
	addi     r0, r7, 1
	lbz      r9, 0x10(r1)
	rlwinm   r30, r30, 0x18, 0x18, 0x1f
	addi     r7, r6, 1
	lbz      r8, 0x11(r1)
	mullw    r12, r31, r12
	stb      r29, 0x14(r1)
	addi     r5, r5, 1
	lbz      r6, 0x12(r1)
	stb      r30, 0x15(r1)
	mullw    r10, r11, r10
	rlwinm   r11, r12, 0x18, 0x18, 0x1f
	stb      r11, 0x16(r1)
	mullw    r9, r9, r0
	rlwinm   r0, r10, 0x18, 0x18, 0x1f
	stb      r0, 0x17(r1)
	lwz      r0, 0x14(r1)
	mullw    r7, r8, r7
	stw      r0, 0xc(r1)
	rlwinm   r8, r9, 0x18, 0x18, 0x1f
	stb      r8, 0x10(r1)
	mullw    r0, r6, r5
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	stb      r5, 0x11(r1)
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0x12(r1)
	bl       GXSetTevColor
	lwz      r0, 0x10(r1)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
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
 * Address:	8008B44C
 * Size:	0000B0
 */
void JPARegistAlpha(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r10, 0(r3)
	li       r3, 1
	lbz      r5, 0x96(r4)
	addi     r4, r1, 8
	lwz      r7, 0x108(r10)
	lbz      r8, 0xb8(r10)
	addi     r0, r5, 1
	lbz      r6, 0xbb(r10)
	stw      r7, 0xc(r1)
	addi     r9, r8, 1
	addi     r5, r6, 1
	lbz      r7, 0xb9(r10)
	lbz      r6, 0xf(r1)
	lbz      r8, 0xd(r1)
	addi     r7, r7, 1
	mullw    r5, r6, r5
	lbz      r6, 0xba(r10)
	lbz      r10, 0xc(r1)
	addi     r6, r6, 1
	rlwinm   r11, r5, 0x18, 0x18, 0x1f
	lbz      r5, 0xe(r1)
	mullw    r0, r11, r0
	stb      r11, 0xf(r1)
	mullw    r5, r5, r6
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0xf(r1)
	mullw    r7, r8, r7
	rlwinm   r5, r5, 0x18, 0x18, 0x1f
	stb      r5, 0xe(r1)
	mullw    r9, r10, r9
	rlwinm   r6, r7, 0x18, 0x18, 0x1f
	stb      r6, 0xd(r1)
	rlwinm   r8, r9, 0x18, 0x18, 0x1f
	stb      r8, 0xc(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B4FC
 * Size:	0000B0
 */
void JPARegistPrmAlpha(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, 0x8c(r4)
	lwz      r8, 0(r3)
	li       r3, 1
	stw      r0, 0xc(r1)
	lbz      r5, 0xbb(r8)
	lbz      r6, 0xf(r1)
	addi     r0, r5, 1
	lbz      r7, 0xb8(r8)
	mullw    r5, r6, r0
	lbz      r4, 0x96(r4)
	lbz      r10, 0xc(r1)
	addi     r9, r7, 1
	addi     r0, r4, 1
	lbz      r6, 0xb9(r8)
	rlwinm   r11, r5, 0x18, 0x18, 0x1f
	lbz      r4, 0xba(r8)
	mullw    r0, r11, r0
	addi     r7, r6, 1
	lbz      r8, 0xd(r1)
	addi     r5, r4, 1
	stb      r11, 0xf(r1)
	addi     r4, r1, 8
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	lbz      r6, 0xe(r1)
	mullw    r9, r10, r9
	stb      r0, 0xf(r1)
	rlwinm   r0, r9, 0x18, 0x18, 0x1f
	stb      r0, 0xc(r1)
	mullw    r0, r6, r5
	mullw    r7, r8, r7
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0xe(r1)
	rlwinm   r5, r7, 0x18, 0x18, 0x1f
	stb      r5, 0xd(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B5AC
 * Size:	000134
 */
void JPARegistPrmAlphaEnv(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lwz      r0, 0x8c(r4)
	lwz      r28, 0(r3)
	li       r3, 1
	stw      r0, 0x14(r1)
	lbz      r5, 0xbb(r28)
	lbz      r6, 0x17(r1)
	addi     r0, r5, 1
	lbz      r5, 0xb8(r28)
	mullw    r0, r6, r0
	lbz      r7, 0xb9(r28)
	lbz      r6, 0xba(r28)
	addi     r8, r5, 1
	addi     r12, r7, 1
	lwz      r7, 0x90(r4)
	lbz      r5, 0x96(r4)
	rlwinm   r29, r0, 0x18, 0x18, 0x1f
	lbz      r4, 0x14(r1)
	addi     r10, r6, 1
	addi     r0, r5, 1
	lbz      r31, 0x15(r1)
	lbz      r11, 0x16(r1)
	mullw    r9, r29, r0
	lbz      r5, 0xbd(r28)
	stw      r7, 0x10(r1)
	lbz      r6, 0xbc(r28)
	addi     r0, r5, 1
	lbz      r5, 0x12(r1)
	mullw    r30, r4, r8
	lbz      r4, 0xbe(r28)
	addi     r7, r6, 1
	lbz      r8, 0x10(r1)
	lbz      r6, 0x11(r1)
	addi     r4, r4, 1
	mullw    r12, r31, r12
	rlwinm   r31, r30, 0x18, 0x18, 0x1f
	stb      r29, 0x17(r1)
	rlwinm   r9, r9, 0x18, 0x18, 0x1f
	stb      r31, 0x14(r1)
	mullw    r10, r11, r10
	rlwinm   r11, r12, 0x18, 0x18, 0x1f
	stb      r9, 0x17(r1)
	stb      r11, 0x15(r1)
	mullw    r7, r8, r7
	rlwinm   r8, r10, 0x18, 0x18, 0x1f
	stb      r8, 0x16(r1)
	mullw    r6, r6, r0
	lwz      r0, 0x14(r1)
	rlwinm   r7, r7, 0x18, 0x18, 0x1f
	stw      r0, 0xc(r1)
	stb      r7, 0x10(r1)
	mullw    r5, r5, r4
	rlwinm   r4, r6, 0x18, 0x18, 0x1f
	stb      r4, 0x11(r1)
	addi     r4, r1, 0xc
	rlwinm   r0, r5, 0x18, 0x18, 0x1f
	stb      r0, 0x12(r1)
	bl       GXSetTevColor
	lwz      r0, 0x10(r1)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B6E0
 * Size:	000124
 */
void JPARegistAlphaEnv(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	lwz      r31, 0(r3)
	li       r3, 1
	lbz      r5, 0x96(r4)
	lwz      r0, 0x108(r31)
	lwz      r7, 0x90(r4)
	addi     r10, r5, 1
	stw      r0, 0x14(r1)
	addi     r4, r1, 0xc
	lbz      r5, 0xbb(r31)
	lbz      r6, 0x17(r1)
	addi     r0, r5, 1
	stw      r7, 0x10(r1)
	mullw    r0, r6, r0
	lbz      r7, 0xb8(r31)
	lbz      r6, 0xb9(r31)
	lbz      r9, 0x14(r1)
	addi     r7, r7, 1
	lbz      r5, 0xba(r31)
	rlwinm   r30, r0, 0x18, 0x18, 0x1f
	addi     r0, r5, 1
	mullw    r9, r9, r7
	lbz      r11, 0x16(r1)
	lbz      r5, 0xbe(r31)
	addi     r6, r6, 1
	lbz      r8, 0x15(r1)
	lbz      r7, 0xbc(r31)
	mullw    r12, r8, r6
	lbz      r6, 0xbd(r31)
	rlwinm   r31, r9, 0x18, 0x18, 0x1f
	lbz      r9, 0x10(r1)
	addi     r8, r7, 1
	lbz      r7, 0x11(r1)
	mullw    r11, r11, r0
	addi     r0, r6, 1
	rlwinm   r12, r12, 0x18, 0x18, 0x1f
	lbz      r6, 0x12(r1)
	addi     r5, r5, 1
	stb      r30, 0x17(r1)
	rlwinm   r11, r11, 0x18, 0x18, 0x1f
	stb      r31, 0x14(r1)
	mullw    r8, r9, r8
	stb      r12, 0x15(r1)
	stb      r11, 0x16(r1)
	mullw    r10, r30, r10
	rlwinm   r8, r8, 0x18, 0x18, 0x1f
	stb      r8, 0x10(r1)
	rlwinm   r9, r10, 0x18, 0x18, 0x1f
	mullw    r7, r7, r0
	stb      r9, 0x17(r1)
	lwz      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	mullw    r5, r6, r5
	rlwinm   r6, r7, 0x18, 0x18, 0x1f
	stb      r6, 0x11(r1)
	rlwinm   r0, r5, 0x18, 0x18, 0x1f
	stb      r0, 0x12(r1)
	bl       GXSetTevColor
	lwz      r0, 0x10(r1)
	addi     r4, r1, 8
	li       r3, 2
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B804
 * Size:	000084
 */
void JPARegistEnv(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0(r3)
	li       r3, 2
	lwz      r0, 0x90(r4)
	addi     r4, r1, 8
	lbz      r7, 0xbc(r5)
	lbz      r6, 0xbd(r5)
	stw      r0, 0xc(r1)
	addi     r8, r7, 1
	lbz      r5, 0xbe(r5)
	addi     r6, r6, 1
	lbz      r9, 0xc(r1)
	lbz      r7, 0xd(r1)
	addi     r0, r5, 1
	lbz      r5, 0xe(r1)
	mullw    r8, r9, r8
	mullw    r6, r7, r6
	rlwinm   r7, r8, 0x18, 0x18, 0x1f
	stb      r7, 0xc(r1)
	mullw    r0, r5, r0
	rlwinm   r5, r6, 0x18, 0x18, 0x1f
	stb      r5, 0xd(r1)
	rlwinm   r0, r0, 0x18, 0x18, 0x1f
	stb      r0, 0xe(r1)
	lwz      r0, 0xc(r1)
	stw      r0, 8(r1)
	bl       GXSetTevColor
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B888
 * Size:	00002C
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lwz      r5, 0(r3)
	lwz      r4, 0x1c(r4)
	lwz      r0, 0x100(r5)
	lwz      r4, 0(r4)
	lha      r4, 0x24(r4)
	cmplw    r0, r4
	bge      lbl_8008B8AC
	extsh    r4, r0

lbl_8008B8AC:
	sth      r4, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B8B4
 * Size:	000028
 */
void JPACalcClrIdxNormal(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lha      r0, 0x80(r4)
	lwz      r4, 0x1c(r5)
	lwz      r4, 0(r4)
	lha      r4, 0x24(r4)
	cmpw     r0, r4
	bge      lbl_8008B8D4
	mr       r4, r0

lbl_8008B8D4:
	sth      r4, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B8DC
 * Size:	000030
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lwz      r5, 0(r3)
	lwz      r4, 0x1c(r4)
	lwz      r5, 0x100(r5)
	lwz      r4, 0(r4)
	lha      r4, 0x24(r4)
	addi     r4, r4, 1
	divwu    r0, r5, r4
	mullw    r0, r0, r4
	subf     r0, r0, r5
	sth      r0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B90C
 * Size:	00003C
 */
void JPACalcClrIdxRepeat(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lbz      r6, 0x95(r4)
	lwz      r5, 0x1c(r5)
	lha      r0, 0x80(r4)
	lwz      r4, 0(r5)
	lbz      r5, 0x2f(r4)
	lha      r4, 0x24(r4)
	and      r5, r6, r5
	add      r5, r0, r5
	addi     r4, r4, 1
	divw     r0, r5, r4
	mullw    r0, r0, r4
	subf     r0, r0, r5
	sth      r0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B948
 * Size:	000040
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData*)
{
	/*
	lwz      r5, 4(r3)
	lwz      r4, 0(r3)
	lwz      r5, 0x1c(r5)
	lwz      r6, 0x100(r4)
	lwz      r4, 0(r5)
	lha      r5, 0x24(r4)
	divwu    r4, r6, r5
	mullw    r0, r4, r5
	clrlwi   r4, r4, 0x1f
	subf     r6, r0, r6
	slwi     r0, r6, 1
	subf     r0, r0, r5
	mullw    r0, r4, r0
	add      r0, r6, r0
	sth      r0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B988
 * Size:	00004C
 */
void JPACalcClrIdxReverse(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lbz      r6, 0x95(r4)
	lwz      r5, 0x1c(r5)
	lha      r0, 0x80(r4)
	lwz      r5, 0(r5)
	lbz      r4, 0x2f(r5)
	lha      r7, 0x24(r5)
	and      r4, r6, r4
	add      r5, r0, r4
	divw     r4, r5, r7
	mullw    r0, r4, r7
	clrlwi   r4, r4, 0x1f
	subf     r5, r0, r5
	slwi     r0, r5, 1
	subf     r0, r0, r7
	mullw    r0, r4, r0
	add      r0, r5, r0
	sth      r0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008B9D4
 * Size:	00000C
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData* workData)
{
	// Generated from sth r0, 0x214(r3)
	// _214 = 0;
	workData->_214 = 0;
}

/*
 * --INFO--
 * Address:	8008B9E0
 * Size:	000070
 */
void JPACalcClrIdxMerge(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f1, lbl_80516B40@sda21(r2)
	lwz      r5, 4(r3)
	lfs      f2, 0x84(r4)
	lwz      r5, 0x1c(r5)
	stw      r0, 8(r1)
	lwz      r6, 0(r5)
	lbz      r4, 0x95(r4)
	lha      r5, 0x24(r6)
	lbz      r0, 0x2f(r6)
	addi     r7, r5, 1
	xoris    r5, r7, 0x8000
	and      r0, r4, r0
	stw      r5, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f1
	fmuls    f0, f2, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r4, 0x14(r1)
	add      r4, r4, r0
	divw     r0, r4, r7
	mullw    r0, r0, r7
	subf     r0, r0, r4
	sth      r0, 0x214(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BA50
 * Size:	00000C
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData* workData)
{
	// Generated from sth r0, 0x214(r3)
	// _214 = 0;
	workData->_214 = 0;
}

/*
 * --INFO--
 * Address:	8008BA5C
 * Size:	000034
 */
void JPACalcClrIdxRandom(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lbz      r6, 0x95(r4)
	lwz      r4, 0x1c(r5)
	lwz      r4, 0(r4)
	lbz      r0, 0x2f(r4)
	lha      r4, 0x24(r4)
	and      r5, r6, r0
	addi     r4, r4, 1
	divw     r0, r5, r4
	mullw    r0, r0, r4
	subf     r0, r0, r5
	sth      r0, 0x214(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BA90
 * Size:	000040
 */
void JPACalcPrm(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lha      r0, 0x214(r3)
	lwz      r4, 0x1c(r4)
	slwi     r0, r0, 2
	lwz      r5, 0(r3)
	lwz      r3, 0xc(r4)
	add      r3, r3, r0
	lbz      r0, 0(r3)
	stb      r0, 0x108(r5)
	lbz      r0, 1(r3)
	stb      r0, 0x109(r5)
	lbz      r0, 2(r3)
	stb      r0, 0x10a(r5)
	lbz      r0, 3(r3)
	stb      r0, 0x10b(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BAD0
 * Size:	00003C
 */
void JPACalcPrm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lha      r0, 0x214(r3)
	lwz      r3, 0x1c(r5)
	slwi     r0, r0, 2
	lwz      r3, 0xc(r3)
	add      r3, r3, r0
	lbz      r0, 0(r3)
	stb      r0, 0x8c(r4)
	lbz      r0, 1(r3)
	stb      r0, 0x8d(r4)
	lbz      r0, 2(r3)
	stb      r0, 0x8e(r4)
	lbz      r0, 3(r3)
	stb      r0, 0x8f(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BB0C
 * Size:	000040
 */
void JPACalcEnv(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lha      r0, 0x214(r3)
	lwz      r4, 0x1c(r4)
	slwi     r0, r0, 2
	lwz      r5, 0(r3)
	lwz      r3, 0x10(r4)
	add      r3, r3, r0
	lbz      r0, 0(r3)
	stb      r0, 0x10c(r5)
	lbz      r0, 1(r3)
	stb      r0, 0x10d(r5)
	lbz      r0, 2(r3)
	stb      r0, 0x10e(r5)
	lbz      r0, 3(r3)
	stb      r0, 0x10f(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BB4C
 * Size:	00003C
 */
void JPACalcEnv(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r5, 4(r3)
	lha      r0, 0x214(r3)
	lwz      r3, 0x1c(r5)
	slwi     r0, r0, 2
	lwz      r3, 0x10(r3)
	add      r3, r3, r0
	lbz      r0, 0(r3)
	stb      r0, 0x90(r4)
	lbz      r0, 1(r3)
	stb      r0, 0x91(r4)
	lbz      r0, 2(r3)
	stb      r0, 0x92(r4)
	lbz      r0, 3(r3)
	stb      r0, 0x93(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BB88
 * Size:	000048
 */
void JPACalcColorCopy(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r3, 0(r3)
	lbz      r0, 0x108(r3)
	stb      r0, 0x8c(r4)
	lbz      r0, 0x109(r3)
	stb      r0, 0x8d(r4)
	lbz      r0, 0x10a(r3)
	stb      r0, 0x8e(r4)
	lbz      r0, 0x10b(r3)
	stb      r0, 0x8f(r4)
	lbz      r0, 0x10c(r3)
	stb      r0, 0x90(r4)
	lbz      r0, 0x10d(r3)
	stb      r0, 0x91(r4)
	lbz      r0, 0x10e(r3)
	stb      r0, 0x92(r4)
	lbz      r0, 0x10f(r3)
	stb      r0, 0x93(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BBD0
 * Size:	000038
 */
void JPAGenTexCrdMtxIdt(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	li       r4, 1
	stw      r0, 0x14(r1)
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BC08
 * Size:	000038
 */
void JPAGenTexCrdMtxAnm(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	li       r4, 1
	stw      r0, 0x14(r1)
	li       r5, 4
	li       r6, 0x1e
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BC40
 * Size:	000038
 */
void JPAGenTexCrdMtxPrj(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r5, 0
	li       r6, 0x1e
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BC78
 * Size:	000198
 */
void JPAGenCalcTexCrdMtxAnm(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	lwz      r5, 4(r3)
	lis      r8, 0x4330
	lwz      r4, 0(r3)
	lis      r3, sincosTable___5JMath@ha
	lwz      r9, 0x1c(r5)
	addi     r7, r3, sincosTable___5JMath@l
	lwz      r0, 0x100(r4)
	addi     r3, r1, 8
	lwz      r6, 0(r9)
	li       r4, 0x1e
	stw      r0, 0x3c(r1)
	li       r5, 1
	lwz      r0, 8(r6)
	stw      r8, 0x38(r1)
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	lfd      f3, lbl_80516B58@sda21(r2)
	lfd      f0, 0x38(r1)
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	lwz      r9, 4(r9)
	fsubs    f6, f0, f3
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f6, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f7, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f2, f7, f2
	lfs      f5, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	fmuls    f11, f5, f2
	lfs      f3, 0x14(r9)
	lfs      f2, 0(r9)
	fadds    f4, f7, f1
	fmadds   f8, f6, f3, f2
	lwz      r0, 0x54(r1)
	lfs      f1, 0x18(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f12, f5, f4
	lfs      f0, 4(r9)
	add      r6, r7, r0
	fadds    f10, f11, f8
	fmadds   f4, f6, f1, f0
	lfs      f3, 0x1c(r9)
	lfs      f2, 8(r9)
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	fmadds   f13, f6, f3, f2
	lfs      f9, 4(r6)
	fadds    f3, f12, f4
	fmadds   f31, f6, f1, f0
	lfsx     f8, r7, r0
	lfs      f5, lbl_80516B50@sda21(r2)
	fmuls    f1, f9, f10
	stfs     f7, 0x30(r1)
	fmuls    f0, f9, f3
	fmuls    f4, f13, f9
	stfs     f5, 0x10(r1)
	fmsubs   f1, f8, f3, f1
	fneg     f2, f13
	stfs     f5, 0x20(r1)
	fmuls    f3, f31, f8
	stfs     f4, 8(r1)
	fmadds   f4, f13, f1, f11
	fmuls    f6, f2, f8
	fmuls    f2, f31, f9
	stfs     f5, 0x28(r1)
	fneg     f1, f31
	fmadds   f0, f8, f10, f0
	stfs     f6, 0xc(r1)
	stfs     f4, 0x14(r1)
	fmadds   f0, f1, f0, f12
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x24(r1)
	stfs     f5, 0x2c(r1)
	stfs     f5, 0x34(r1)
	bl       GXLoadTexMtxImm
	li       r3, 0
	li       r4, 1
	li       r5, 4
	li       r6, 0x1e
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BE10
 * Size:	000170
 */
void JPALoadCalcTexCrdMtxAnm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r8, 0x4330
	lfd      f1, lbl_80516B40@sda21(r2)
	stw      r0, 0x64(r1)
	lfd      f3, lbl_80516B58@sda21(r2)
	lwz      r5, 4(r3)
	lis      r3, sincosTable___5JMath@ha
	lha      r0, 0x80(r4)
	addi     r7, r3, sincosTable___5JMath@l
	lwz      r6, 0x1c(r5)
	addi     r3, r1, 8
	xoris    r0, r0, 0x8000
	stw      r8, 0x38(r1)
	lwz      r5, 0(r6)
	li       r4, 0x1e
	stw      r0, 0x3c(r1)
	lwz      r0, 8(r5)
	li       r5, 1
	lfd      f0, 0x38(r1)
	lwz      r9, 4(r6)
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	fsubs    f10, f0, f1
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f10, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f6, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f5, f6, f2
	lfs      f7, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	lfs      f0, 0(r9)
	fmuls    f11, f7, f5
	lwz      r0, 0x54(r1)
	fadds    f4, f6, f1
	lfs      f1, 0x14(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	add      r6, r7, r0
	lfs      f3, 0x18(r9)
	fmadds   f5, f10, f1, f0
	fmuls    f12, f7, f4
	lfs      f2, 4(r9)
	lfs      f1, 0x1c(r9)
	lfs      f0, 8(r9)
	fmadds   f2, f10, f3, f2
	fadds    f9, f11, f5
	fmadds   f13, f10, f1, f0
	lfs      f8, 4(r6)
	fadds    f5, f12, f2
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	lfs      f4, lbl_80516B50@sda21(r2)
	fmadds   f10, f10, f1, f0
	lfsx     f7, r7, r0
	fmuls    f2, f13, f8
	stfs     f4, 0x10(r1)
	fmuls    f0, f8, f5
	fmuls    f1, f8, f9
	stfs     f2, 8(r1)
	fneg     f3, f13
	fmadds   f0, f7, f9, f0
	fmsubs   f2, f7, f5, f1
	stfs     f4, 0x20(r1)
	fmuls    f5, f3, f7
	fmuls    f1, f10, f7
	stfs     f4, 0x28(r1)
	fmadds   f3, f13, f2, f11
	fmuls    f2, f10, f8
	stfs     f5, 0xc(r1)
	stfs     f1, 0x18(r1)
	fneg     f1, f10
	stfs     f3, 0x14(r1)
	fmadds   f0, f1, f0, f12
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x24(r1)
	stfs     f4, 0x2c(r1)
	stfs     f6, 0x30(r1)
	stfs     f4, 0x34(r1)
	bl       GXLoadTexMtxImm
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BF80
 * Size:	000054
 */
void JPALoadTex(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, 0
	stw      r0, 0x14(r1)
	lwz      r5, 4(r3)
	lwz      r6, 8(r3)
	lwz      r3, 0x1c(r5)
	lwz      r5, 0x38(r5)
	lwz      r3, 0(r3)
	lwz      r6, 8(r6)
	lbz      r0, 0x20(r3)
	slwi     r0, r0, 1
	lhzx     r0, r5, r0
	slwi     r0, r0, 2
	lwzx     r3, r6, r0
	addi     r3, r3, 4
	bl       load__10JUTTextureF11_GXTexMapID
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008BFD4
 * Size:	000050
 */
void JPALoadTexAnm(JPAEmitterWorkData* workData)
{
	workData->m_resourceMgr->m_textures[workData->m_resource->_38[workData->m_emitter->_111]]->m_texture.load(GX_TEXMAP0);
}

/*
 * --INFO--
 * Address:	8008C024
 * Size:	00004C
 * JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle
 */
void JPALoadTexAnm(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	workData->m_resourceMgr->m_textures[workData->m_resource->_38[particle->_94]]->m_texture.load(GX_TEXMAP0);
}

/*
 * --INFO--
 * Address:	8008C070
 * Size:	00003C
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData* workData)
{
	u32 v2 = workData->m_emitter->_100;
	u32 v1 = workData->m_resource->_1C->m_data->_1F - 1;
	if (v1 < v2) {
		v2 = v1;
	}
	workData->m_emitter->_111 = workData->m_resource->_1C->_08[v2];
	/*
	lwz      r4, 4(r3)
	lwz      r5, 0(r3)
	lwz      r6, 0x1c(r4)
	lwz      r4, 0x100(r5)
	lwz      r3, 0(r6)
	lbz      r3, 0x1f(r3)
	addi     r0, r3, -1
	cmplw    r0, r4
	bge      lbl_8008C098
	mr       r4, r0

lbl_8008C098:
	lwz      r3, 8(r6)
	clrlwi   r0, r4, 0x18
	lbzx     r0, r3, r0
	stb      r0, 0x111(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C0AC
 * Size:	000038
 */
void JPACalcTexIdxNormal(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r3, 4(r3)
	lha      r5, 0x80(r4)
	lwz      r6, 0x1c(r3)
	lwz      r3, 0(r6)
	lbz      r3, 0x1f(r3)
	addi     r0, r3, -1
	cmpw     r0, r5
	bge      lbl_8008C0D0
	mr       r5, r0

lbl_8008C0D0:
	lwz      r3, 8(r6)
	clrlwi   r0, r5, 0x18
	lbzx     r0, r3, r0
	stb      r0, 0x94(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C0E4
 * Size:	000038
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lwz      r6, 0(r3)
	lwz      r5, 0x1c(r4)
	lwz      r4, 0x100(r6)
	lwz      r3, 0(r5)
	lwz      r5, 8(r5)
	lbz      r3, 0x1f(r3)
	divwu    r0, r4, r3
	mullw    r0, r0, r3
	subf     r0, r0, r4
	clrlwi   r0, r0, 0x18
	lbzx     r0, r5, r0
	stb      r0, 0x111(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C11C
 * Size:	000044
 */
void JPACalcTexIdxRepeat(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r3, 4(r3)
	lbz      r7, 0x95(r4)
	lwz      r5, 0x1c(r3)
	lha      r0, 0x80(r4)
	lwz      r3, 0(r5)
	lwz      r6, 8(r5)
	lbz      r5, 0x30(r3)
	lbz      r3, 0x1f(r3)
	and      r5, r7, r5
	add      r5, r0, r5
	divw     r0, r5, r3
	mullw    r0, r0, r3
	subf     r0, r0, r5
	clrlwi   r0, r0, 0x18
	lbzx     r0, r6, r0
	stb      r0, 0x94(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C160
 * Size:	000050
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lwz      r5, 0(r3)
	lwz      r4, 0x1c(r4)
	lwz      r6, 0x100(r5)
	lwz      r3, 0(r4)
	lwz      r4, 8(r4)
	lbz      r3, 0x1f(r3)
	addi     r7, r3, -1
	divw     r3, r6, r7
	mullw    r0, r3, r7
	clrlwi   r3, r3, 0x1f
	subf     r6, r0, r6
	slwi     r0, r6, 1
	subf     r0, r0, r7
	mullw    r0, r3, r0
	add      r0, r6, r0
	clrlwi   r0, r0, 0x18
	lbzx     r0, r4, r0
	stb      r0, 0x111(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C1B0
 * Size:	00005C
 */
void JPACalcTexIdxReverse(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r3, 4(r3)
	lbz      r7, 0x95(r4)
	lwz      r5, 0x1c(r3)
	lha      r0, 0x80(r4)
	lwz      r3, 0(r5)
	lwz      r5, 8(r5)
	lbz      r6, 0x30(r3)
	lbz      r3, 0x1f(r3)
	and      r6, r7, r6
	add      r6, r0, r6
	addi     r7, r3, -1
	divw     r3, r6, r7
	mullw    r0, r3, r7
	clrlwi   r3, r3, 0x1f
	subf     r6, r0, r6
	slwi     r0, r6, 1
	subf     r0, r0, r7
	mullw    r0, r3, r0
	add      r0, r6, r0
	clrlwi   r0, r0, 0x18
	lbzx     r0, r5, r0
	stb      r0, 0x94(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C20C
 * Size:	00001C
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData* workData) { workData->m_emitter->_111 = workData->m_resource->_1C->m_data->_20; }

/*
 * --INFO--
 * Address:	8008C228
 * Size:	000078
 */
void JPACalcTexIdxMerge(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x20(r1)
	lis      r0, 0x4330
	lfd      f2, lbl_80516B40@sda21(r2)
	lwz      r3, 4(r3)
	stw      r0, 8(r1)
	lwz      r7, 0x1c(r3)
	lfs      f0, 0x84(r4)
	lwz      r6, 0(r7)
	lbz      r3, 0x95(r4)
	lbz      r8, 0x1f(r6)
	lbz      r0, 0x30(r6)
	xoris    r5, r8, 0x8000
	stw      r5, 0xc(r1)
	and      r0, r3, r0
	lwz      r5, 8(r7)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r3, 0x14(r1)
	add      r3, r3, r0
	divw     r0, r3, r8
	mullw    r0, r0, r8
	subf     r0, r0, r3
	clrlwi   r0, r0, 0x18
	lbzx     r0, r5, r0
	stb      r0, 0x94(r4)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C2A0
 * Size:	00001C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData*)
{
	/*
	lwz      r4, 4(r3)
	lwz      r3, 0(r3)
	lwz      r4, 0x1c(r4)
	lwz      r4, 0(r4)
	lbz      r0, 0x20(r4)
	stb      r0, 0x111(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C2BC
 * Size:	00003C
 */
void JPACalcTexIdxRandom(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	lwz      r3, 4(r3)
	lbz      r6, 0x95(r4)
	lwz      r5, 0x1c(r3)
	lwz      r3, 0(r5)
	lwz      r5, 8(r5)
	lbz      r0, 0x30(r3)
	lbz      r3, 0x1f(r3)
	and      r6, r6, r0
	divw     r0, r6, r3
	mullw    r0, r0, r3
	subf     r0, r0, r6
	clrlwi   r0, r0, 0x18
	lbzx     r0, r5, r0
	stb      r0, 0x94(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C2F8
 * Size:	000028
 */
void JPALoadPosMtxCam(JPAEmitterWorkData* workData) { GXLoadPosMtxImm(workData->_184, 0); }

/*
 * --INFO--
 * Address:	8008C320
 * Size:	000004
 */
void noLoadPrj(const JPAEmitterWorkData* workData, const float (*mtx)[4]) { }

/*
 * --INFO--
 * Address:	8008C324
 * Size:	000038
 * loadPrj__FPC18JPAEmitterWorkDataPA4_Cf
 */
void loadPrj(const JPAEmitterWorkData* workData, const float (*p2)[4])
{
	Mtx v1;
	PSMTXConcat(workData->_1B4, p2, v1);
	GXLoadTexMtxImm(v1, 0x1E, GX_MTX3x4);
}

/*
 * --INFO--
 * Address:	8008C35C
 * Size:	0001AC
 */
void loadPrjAnm(const JPAEmitterWorkData* workData, const float (*p2)[4])
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	lwz      r7, 4(r3)
	lis      r8, 0x4330
	lwz      r6, 0(r3)
	mr       r10, r3
	lwz      r9, 0x1c(r7)
	lis      r5, sincosTable___5JMath@ha
	lwz      r0, 0x100(r6)
	mr       r31, r4
	lwz      r6, 0(r9)
	addi     r7, r5, sincosTable___5JMath@l
	stw      r0, 0x3c(r1)
	addi     r3, r1, 8
	lwz      r0, 8(r6)
	mr       r5, r3
	stw      r8, 0x38(r1)
	addi     r4, r10, 0x1b4
	rlwinm   r6, r0, 7, 0x1f, 0x1f
	lfd      f3, lbl_80516B58@sda21(r2)
	lfd      f0, 0x38(r1)
	rlwinm   r0, r0, 6, 0x1f, 0x1f
	lwz      r9, 4(r9)
	fsubs    f6, f0, f3
	stw      r6, 0x44(r1)
	lfs      f1, 0x24(r9)
	stw      r8, 0x40(r1)
	lfs      f0, 0x10(r9)
	lfd      f2, 0x40(r1)
	fmadds   f0, f6, f1, f0
	stw      r0, 0x4c(r1)
	fsubs    f2, f2, f3
	lfs      f7, lbl_80516B4C@sda21(r2)
	stw      r8, 0x48(r1)
	fctiwz   f0, f0
	lfd      f1, 0x48(r1)
	fadds    f2, f7, f2
	lfs      f5, lbl_80516B48@sda21(r2)
	fsubs    f1, f1, f3
	stfd     f0, 0x50(r1)
	fmuls    f11, f5, f2
	lfs      f3, 0x14(r9)
	lfs      f2, 0(r9)
	fadds    f4, f7, f1
	fmadds   f8, f6, f3, f2
	lwz      r0, 0x54(r1)
	lfs      f1, 0x18(r9)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f12, f5, f4
	lfs      f0, 4(r9)
	add      r6, r7, r0
	fadds    f10, f11, f8
	fmadds   f5, f6, f1, f0
	lfs      f3, 0x1c(r9)
	lfs      f2, 8(r9)
	lfs      f1, 0x20(r9)
	lfs      f0, 0xc(r9)
	fmadds   f13, f6, f3, f2
	lfs      f9, 4(r6)
	fadds    f3, f12, f5
	fmadds   f31, f6, f1, f0
	lfsx     f8, r7, r0
	lfs      f4, lbl_80516B50@sda21(r2)
	fmuls    f1, f9, f10
	stfs     f7, 0x30(r1)
	fmuls    f0, f9, f3
	fmuls    f5, f13, f9
	stfs     f4, 0x14(r1)
	fmsubs   f1, f8, f3, f1
	fneg     f2, f13
	stfs     f4, 0x24(r1)
	fmuls    f3, f31, f8
	stfs     f5, 8(r1)
	fmadds   f5, f13, f1, f11
	fmuls    f6, f2, f8
	fmuls    f2, f31, f9
	stfs     f4, 0x28(r1)
	fneg     f1, f31
	fmadds   f0, f8, f10, f0
	stfs     f6, 0xc(r1)
	stfs     f5, 0x10(r1)
	fmadds   f0, f1, f0, f12
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f4, 0x2c(r1)
	stfs     f4, 0x34(r1)
	bl       PSMTXConcat
	addi     r3, r1, 8
	mr       r4, r31
	mr       r5, r3
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0x1e
	li       r5, 0
	bl       GXLoadTexMtxImm
	psq_l    f31, 104(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f31, 0x60(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/**
 * --INFO--
 * Address:	8008C508
 * Size:	0000E8
 * TODO: Needs p_prj and jpa_dl, probably float stuff
 */
void JPADrawBillboard(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	Vec v1;
	Mtx v2;
	if ((particle->_7C & 8) == 0) {
		PSMTXMultVec(workData->_184, reinterpret_cast<Vec*>(&particle->_00), &v1);
		v2[0][0] = workData->_144 * particle->_60;
		v2[0][3] = v1.x;
		v2[1][1] = workData->_148 * particle->_64;
		v2[1][3] = v1.y;
		v2[2][2] = 1.0f;
		v2[2][3] = v1.z;
		v2[2][1] = 0.0f;
		v2[2][0] = 0.0f;
		v2[1][2] = 0.0f;
		v2[1][0] = 0.0f;
		v2[0][2] = 0.0f;
		v2[0][1] = 0.0f;
		GXLoadPosMtxImm(v2, 0);
		// p_prj[workData->_210](workData, v2);
		// GXCallDisplayList(jpa_dl, sizeof(jpa_dl));
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008C5D8
	addi     r3, r30, 0x184
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 0x144(r30)
	addi     r3, r1, 0x14
	lfs      f1, 0x60(r31)
	li       r4, 0
	lfs      f0, 8(r1)
	fmuls    f1, f2, f1
	lfs      f3, 0xc(r1)
	stfs     f0, 0x20(r1)
	lfs      f2, lbl_80516B4C@sda21(r2)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x10(r1)
	lfs      f5, 0x148(r30)
	lfs      f4, 0x64(r31)
	lfs      f0, lbl_80516B50@sda21(r2)
	fmuls    f4, f5, f4
	stfs     f3, 0x30(r1)
	stfs     f2, 0x3c(r1)
	stfs     f4, 0x28(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x38(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r1, 0x14
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lis      r3, jpa_dl@ha
	li       r4, 0x20
	addi     r3, r3, jpa_dl@l
	bl       GXCallDisplayList

lbl_8008C5D8:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C5F0
 * Size:	000118
 */
void JPADrawRotBillboard(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008C6F0
	addi     r3, r30, 0x184
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lhz      r0, 0x88(r31)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f1, 0x144(r30)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f0, 0x60(r31)
	lfsx     f4, r3, r0
	add      r3, r3, r0
	lfs      f3, 0x148(r30)
	fmuls    f6, f1, f0
	lfs      f2, 0x64(r31)
	fneg     f1, f4
	lfs      f0, lbl_80516B50@sda21(r2)
	li       r4, 0
	fmuls    f3, f3, f2
	lfs      f2, 4(r3)
	fmuls    f5, f4, f6
	stfs     f0, 0x38(r1)
	addi     r3, r1, 0x14
	fmuls    f8, f2, f6
	fmuls    f7, f1, f3
	lfs      f6, 8(r1)
	fmuls    f4, f2, f3
	lfs      f3, 0xc(r1)
	lfs      f2, lbl_80516B4C@sda21(r2)
	lfs      f1, 0x10(r1)
	stfs     f8, 0x14(r1)
	stfs     f7, 0x18(r1)
	stfs     f6, 0x20(r1)
	stfs     f5, 0x24(r1)
	stfs     f4, 0x28(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x2c(r1)
	stfs     f0, 0x1c(r1)
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r1, 0x14
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lis      r3, jpa_dl@ha
	li       r4, 0x20
	addi     r3, r3, jpa_dl@l
	bl       GXCallDisplayList

lbl_8008C6F0:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C708
 * Size:	0000FC
 */
void JPADrawYBillboard(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008C7EC
	addi     r3, r30, 0x184
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0x144(r30)
	addi     r3, r1, 0x14
	lfs      f0, 0x60(r31)
	li       r4, 0
	lfs      f3, 0x148(r30)
	lfs      f2, 0x64(r31)
	fmuls    f1, f1, f0
	lfs      f0, 8(r1)
	fmuls    f4, f3, f2
	lfs      f2, 0xc(r1)
	stfs     f1, 0x14(r1)
	lfs      f1, 0x10(r1)
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_80516B50@sda21(r2)
	lfs      f3, 0x168(r30)
	fmuls    f3, f3, f4
	stfs     f3, 0x28(r1)
	lfs      f3, 0x16c(r30)
	stfs     f3, 0x2c(r1)
	stfs     f2, 0x30(r1)
	lfs      f2, 0x178(r30)
	fmuls    f2, f2, f4
	stfs     f2, 0x38(r1)
	lfs      f2, 0x17c(r30)
	stfs     f2, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x34(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x1c(r1)
	stfs     f0, 0x18(r1)
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r1, 0x14
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lis      r3, jpa_dl@ha
	li       r4, 0x20
	addi     r3, r3, jpa_dl@l
	bl       GXCallDisplayList

lbl_8008C7EC:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C804
 * Size:	000130
 */
void JPADrawRotYBillboard(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r4
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008C91C
	addi     r3, r30, 0x184
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lhz      r0, 0x88(r31)
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, 0x144(r30)
	addi     r4, r3, sincosTable___5JMath@l
	lfs      f2, 0x60(r31)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f1, 0x148(r30)
	fmuls    f6, f3, f2
	lfsx     f2, r4, r0
	lfs      f5, 4(r3)
	addi     r3, r1, 0x14
	lfs      f0, 0x64(r31)
	li       r4, 0
	fmuls    f8, f1, f0
	lfs      f13, 0x178(r30)
	fmuls    f10, f2, f6
	lfs      f12, 0x168(r30)
	fmuls    f9, f5, f6
	lfs      f1, lbl_80516B50@sda21(r2)
	fmuls    f11, f5, f8
	stfs     f1, 0x1c(r1)
	fneg     f2, f2
	lfs      f7, 8(r1)
	fneg     f4, f13
	lfs      f3, 0xc(r1)
	fmuls    f8, f2, f8
	lfs      f0, 0x10(r1)
	fmuls    f6, f10, f12
	stfs     f9, 0x14(r1)
	fmuls    f5, f11, f12
	fmuls    f2, f10, f13
	fmuls    f1, f11, f13
	stfs     f8, 0x18(r1)
	stfs     f7, 0x20(r1)
	stfs     f6, 0x24(r1)
	stfs     f5, 0x28(r1)
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f12, 0x3c(r1)
	stfs     f0, 0x40(r1)
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r1, 0x14
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lis      r3, jpa_dl@ha
	li       r4, 0x20
	addi     r3, r3, jpa_dl@l
	bl       GXCallDisplayList

lbl_8008C91C:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008C934
 * Size:	00001C
 */
void dirTypeVel(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<float>* direction)
{
	*direction = particle->_24;
}

/*
 * --INFO--
 * Address:	8008C950
 * Size:	00001C
 */
void dirTypePos(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<float>* direction)
{
	*direction = particle->m_position;
}

/*
 * --INFO--
 * Address:	8008C96C
 * Size:	000040
 */
void dirTypePosInv(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<float>* direction)
{
	dirTypePos(workData, particle, direction);
	direction->x = -direction->x;
	direction->y = -direction->y;
	direction->z = -direction->z;
}

/*
 * --INFO--
 * Address:	8008C9AC
 * Size:	00001C
 */
void dirTypeEmtrDir(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<float>* direction)
{
	*direction = workData->_120;
}

/*
 * --INFO--
 * Address:	8008C9C8
 * Size:	0000C0
 */
void dirTypePrevPtcl(const JPAEmitterWorkData* workData, const JPABaseParticle* particle, JGeometry::TVec3<float>* direction)
{
	if (workData->_1E8->m_prev != nullptr) {
		*direction = workData->_1E8->m_prev->contents._00;
	} else {
		workData->m_emitter->calcEmitterGlobalPosition(direction);
	}
	direction->x = direction->x - particle->_00.x;
	direction->y = direction->y - particle->_00.y;
	direction->z = direction->z - particle->_00.z;
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stfd      f30, 0x20(r1)
	  psq_st    f30,0x28(r1),0,0
	  stfd      f29, 0x10(r1)
	  psq_st    f29,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r6, 0x1E8(r3)
	  mr        r31, r5
	  lfs       f31, 0x0(r4)
	  lwz       r5, 0x0(r6)
	  lfs       f30, 0x4(r4)
	  cmplwi    r5, 0
	  lfs       f29, 0x8(r4)
	  beq-      .loc_0x64
	  lfs       f0, 0x8(r5)
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0xC(r5)
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x10(r5)
	  stfs      f0, 0x8(r31)
	  b         .loc_0x70

	.loc_0x64:
	  lwz       r3, 0x0(r3)
	  mr        r4, r31
	  bl        0x3A74

	.loc_0x70:
	  lfs       f0, 0x0(r31)
	  fsubs     f0, f0, f31
	  stfs      f0, 0x0(r31)
	  lfs       f0, 0x4(r31)
	  fsubs     f0, f0, f30
	  stfs      f0, 0x4(r31)
	  lfs       f0, 0x8(r31)
	  fsubs     f0, f0, f29
	  stfs      f0, 0x8(r31)
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  psq_l     f30,0x28(r1),0,0
	  lfd       f30, 0x20(r1)
	  psq_l     f29,0x18(r1),0,0
	  lfd       f29, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008CA88
 * Size:	000040
 */
void rotTypeY(float, float, float (&)[3][4])
{
	/*
	stfs     f2, 0(r3)
	fneg     f3, f1
	lfs      f4, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f4, 4(r3)
	stfs     f3, 8(r3)
	stfs     f4, 0xc(r3)
	stfs     f4, 0x10(r3)
	stfs     f0, 0x14(r3)
	stfs     f4, 0x18(r3)
	stfs     f4, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f4, 0x24(r3)
	stfs     f2, 0x28(r3)
	stfs     f4, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CAC8
 * Size:	000040
 */
void rotTypeX(float, float, float (&)[3][4])
{
	/*
	lfs      f4, lbl_80516B4C@sda21(r2)
	fneg     f0, f1
	lfs      f3, lbl_80516B50@sda21(r2)
	stfs     f4, 0(r3)
	stfs     f3, 4(r3)
	stfs     f3, 8(r3)
	stfs     f3, 0xc(r3)
	stfs     f3, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f0, 0x18(r3)
	stfs     f3, 0x1c(r3)
	stfs     f3, 0x20(r3)
	stfs     f1, 0x24(r3)
	stfs     f2, 0x28(r3)
	stfs     f3, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CB08
 * Size:	000040
 */
void rotTypeZ(float, float, float (&)[3][4])
{
	/*
	fneg     f4, f1
	stfs     f2, 0(r3)
	lfs      f3, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f4, 4(r3)
	stfs     f3, 8(r3)
	stfs     f3, 0xc(r3)
	stfs     f1, 0x10(r3)
	stfs     f2, 0x14(r3)
	stfs     f3, 0x18(r3)
	stfs     f3, 0x1c(r3)
	stfs     f3, 0x20(r3)
	stfs     f3, 0x24(r3)
	stfs     f0, 0x28(r3)
	stfs     f3, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CB48
 * Size:	00005C
 */
void rotTypeXYZ(float, float, float (&)[3][4])
{
	/*
	lfs      f3, lbl_80516B4C@sda21(r2)
	lfs      f0, lbl_80516B64@sda21(r2)
	fsubs    f3, f3, f2
	lfs      f4, lbl_80516B60@sda21(r2)
	fmuls    f1, f0, f1
	lfs      f0, lbl_80516B50@sda21(r2)
	fmuls    f3, f4, f3
	fadds    f4, f3, f1
	fsubs    f1, f3, f1
	fadds    f3, f3, f2
	stfs     f3, 0(r3)
	stfs     f1, 4(r3)
	stfs     f4, 8(r3)
	stfs     f0, 0xc(r3)
	stfs     f4, 0x10(r3)
	stfs     f3, 0x14(r3)
	stfs     f1, 0x18(r3)
	stfs     f0, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f4, 0x24(r3)
	stfs     f3, 0x28(r3)
	stfs     f0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CBA4
 * Size:	00004C
 */
void basePlaneTypeXY(float (*)[4], float, float)
{
	/*
	lfs      f0, 0(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0(r3)
	lfs      f0, 0x10(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r3)
	lfs      f0, 0x20(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r3)
	lfs      f0, 4(r3)
	fmuls    f0, f0, f2
	stfs     f0, 4(r3)
	lfs      f0, 0x14(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x14(r3)
	lfs      f0, 0x24(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CBF0
 * Size:	00004C
 */
void basePlaneTypeXZ(float (*)[4], float, float)
{
	/*
	lfs      f0, 0(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0(r3)
	lfs      f0, 0x10(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r3)
	lfs      f0, 0x20(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r3)
	lfs      f0, 8(r3)
	fmuls    f0, f0, f2
	stfs     f0, 8(r3)
	lfs      f0, 0x18(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CC3C
 * Size:	000070
 */
void basePlaneTypeX(float (*)[4], float, float)
{
	/*
	lfs      f0, 0(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0(r3)
	lfs      f0, 0x10(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x10(r3)
	lfs      f0, 0x20(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x20(r3)
	lfs      f0, 4(r3)
	fmuls    f0, f0, f2
	stfs     f0, 4(r3)
	lfs      f0, 0x14(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x14(r3)
	lfs      f0, 0x24(r3)
	fmuls    f0, f0, f2
	stfs     f0, 0x24(r3)
	lfs      f0, 8(r3)
	fmuls    f0, f0, f1
	stfs     f0, 8(r3)
	lfs      f0, 0x18(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x18(r3)
	lfs      f0, 0x28(r3)
	fmuls    f0, f0, f1
	stfs     f0, 0x28(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CCAC
 * Size:	000350
 */
void JPADrawDirection(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, jpa_dl@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	stw      r30, 0x58(r1)
	addi     r30, r5, jpa_dl@l
	stw      r29, 0x54(r1)
	mr       r29, r4
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008CFE0
	lwz      r0, 0x200(r31)
	addi     r6, r30, 0x4c
	addi     r5, r1, 8
	slwi     r0, r0, 2
	lwzx     r12, r6, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, __float_epsilon@ha
	lfs      f0, 0xc(r1)
	fmuls    f3, f1, f1
	lfs      f4, 0x10(r1)
	fmuls    f2, f0, f0
	lfs      f1, lbl_80516B68@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f4, f4, f4
	fadds    f2, f3, f2
	fmuls    f0, f1, f0
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008CFE0
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008CD9C
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008CD58
	b        lbl_8008CD78

lbl_8008CD58:
	frsqrte  f3, f4
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008CD78:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008CD9C:
	lfs      f6, 0x54(r29)
	lis      r3, __float_epsilon@ha
	lfs      f5, 0x10(r1)
	lfs      f7, 0xc(r1)
	lfs      f2, 0x5c(r29)
	fmuls    f1, f6, f5
	lfs      f4, 8(r1)
	fmuls    f0, f2, f7
	lfs      f8, 0x58(r29)
	fmsubs   f3, f2, f4, f1
	lfs      f2, lbl_80516B68@sda21(r2)
	fmuls    f4, f8, f4
	lfs      f1, __float_epsilon@l(r3)
	fmsubs   f0, f8, f5, f0
	fmuls    f5, f3, f3
	fmuls    f2, f2, f1
	fmsubs   f4, f6, f7, f4
	fmadds   f1, f0, f0, f5
	fmadds   f7, f4, f4, f1
	fcmpo    cr0, f7, f2
	cror     2, 0, 2
	beq      lbl_8008CFE0
	fcmpo    cr0, f7, f2
	cror     2, 0, 2
	beq      lbl_8008CE40
	lfs      f1, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	bne      lbl_8008CE14
	b        lbl_8008CE34

lbl_8008CE14:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f1, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f2, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f1, f7, f2, f1
	fmuls    f7, f5, f1

lbl_8008CE34:
	fmuls    f0, f0, f7
	fmuls    f3, f3, f7
	fmuls    f4, f4, f7

lbl_8008CE40:
	lfs      f8, 0x10(r1)
	lis      r3, __float_epsilon@ha
	lfs      f7, 8(r1)
	fmuls    f1, f8, f3
	lfs      f9, 0xc(r1)
	fmuls    f5, f7, f4
	lfs      f2, lbl_80516B68@sda21(r2)
	fmuls    f6, f9, f0
	fmsubs   f1, f9, f4, f1
	fmsubs   f5, f8, f0, f5
	fmsubs   f6, f7, f3, f6
	stfs     f1, 0x54(r29)
	stfs     f5, 0x58(r29)
	stfs     f6, 0x5c(r29)
	lfs      f5, 0x54(r29)
	lfs      f1, 0x58(r29)
	fmuls    f6, f5, f5
	lfs      f7, 0x5c(r29)
	fmuls    f5, f1, f1
	lfs      f1, __float_epsilon@l(r3)
	fmuls    f7, f7, f7
	fmuls    f1, f2, f1
	fadds    f2, f6, f5
	fadds    f7, f7, f2
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	beq      lbl_8008CF04
	lfs      f1, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f1
	cror     2, 0, 2
	bne      lbl_8008CEC0
	b        lbl_8008CEE0

lbl_8008CEC0:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f1, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f2, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f1, f7, f2, f1
	fmuls    f7, f5, f1

lbl_8008CEE0:
	lfs      f1, 0x54(r29)
	fmuls    f1, f1, f7
	stfs     f1, 0x54(r29)
	lfs      f1, 0x58(r29)
	fmuls    f1, f1, f7
	stfs     f1, 0x58(r29)
	lfs      f1, 0x5c(r29)
	fmuls    f1, f1, f7
	stfs     f1, 0x5c(r29)

lbl_8008CF04:
	lfs      f5, 0x144(r31)
	addi     r4, r30, 0x74
	lfs      f1, 0x60(r29)
	addi     r3, r1, 0x14
	lfs      f7, 0x148(r31)
	lfs      f2, 0x64(r29)
	fmuls    f1, f5, f1
	lfs      f6, 0x54(r29)
	lfs      f5, 8(r1)
	fmuls    f2, f7, f2
	stfs     f6, 0x14(r1)
	lfs      f6, 0xc(r1)
	stfs     f5, 0x18(r1)
	lfs      f5, 0x10(r1)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0(r29)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x58(r29)
	stfs     f0, 0x24(r1)
	stfs     f6, 0x28(r1)
	stfs     f3, 0x2c(r1)
	lfs      f0, 4(r29)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x5c(r29)
	stfs     f0, 0x34(r1)
	stfs     f5, 0x38(r1)
	stfs     f4, 0x3c(r1)
	lfs      f0, 8(r29)
	stfs     f0, 0x40(r1)
	lwz      r0, 0x208(r31)
	slwi     r0, r0, 2
	lwzx     r12, r4, r0
	mtctr    r12
	bctrl
	addi     r4, r1, 0x14
	addi     r3, r31, 0x184
	mr       r5, r4
	bl       PSMTXConcat
	addi     r3, r1, 0x14
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r31)
	addi     r5, r30, 0x40
	mr       r3, r31
	addi     r4, r1, 0x14
	slwi     r0, r0, 2
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lwz      r0, 0x20c(r31)
	addi     r3, r13, p_dl@sda21
	li       r4, 0x20
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       GXCallDisplayList

lbl_8008CFE0:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008CFFC
 * Size:	0003FC
 */
void JPADrawRotDirection(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	lwz      r0, 0x7c(r4)
	lis      r5, jpa_dl@ha
	mr       r30, r4
	mr       r29, r3
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	addi     r31, r5, jpa_dl@l
	bne      lbl_8008D3B4
	lhz      r7, 0x88(r30)
	lis      r6, sincosTable___5JMath@ha
	lwz      r0, 0x200(r29)
	addi     r5, r31, 0x4c
	extsh    r8, r7
	addi     r7, r6, sincosTable___5JMath@l
	rlwinm   r8, r8, 0x1e, 0x12, 0x1c
	slwi     r0, r0, 2
	lwzx     r12, r5, r0
	add      r6, r7, r8
	addi     r5, r1, 8
	lfsx     f31, r7, r8
	lfs      f30, 4(r6)
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lis      r3, __float_epsilon@ha
	lfs      f0, 0xc(r1)
	fmuls    f3, f1, f1
	lfs      f4, 0x10(r1)
	fmuls    f2, f0, f0
	lfs      f1, lbl_80516B68@sda21(r2)
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f4, f4, f4
	fadds    f2, f3, f2
	fmuls    f0, f1, f0
	fadds    f4, f4, f2
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008D3B4
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008D134
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008D0F0
	b        lbl_8008D110

lbl_8008D0F0:
	frsqrte  f3, f4
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008D110:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008D134:
	lfs      f4, 0x54(r30)
	lis      r3, __float_epsilon@ha
	lfs      f6, 0x10(r1)
	lfs      f5, 0xc(r1)
	lfs      f1, 0x5c(r30)
	fmuls    f0, f4, f6
	lfs      f3, 8(r1)
	fmuls    f2, f1, f5
	lfs      f7, 0x58(r30)
	fmsubs   f28, f1, f3, f0
	lfs      f1, lbl_80516B68@sda21(r2)
	fmuls    f3, f7, f3
	lfs      f0, __float_epsilon@l(r3)
	fmsubs   f29, f7, f6, f2
	fmuls    f2, f28, f28
	fmuls    f1, f1, f0
	fmsubs   f27, f4, f5, f3
	fmadds   f0, f29, f29, f2
	fmadds   f4, f27, f27, f0
	fcmpo    cr0, f4, f1
	cror     2, 0, 2
	beq      lbl_8008D3B4
	fcmpo    cr0, f4, f1
	cror     2, 0, 2
	beq      lbl_8008D1D8
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008D1AC
	b        lbl_8008D1CC

lbl_8008D1AC:
	frsqrte  f3, f4
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008D1CC:
	fmuls    f29, f29, f4
	fmuls    f28, f28, f4
	fmuls    f27, f27, f4

lbl_8008D1D8:
	lfs      f5, 0x10(r1)
	lis      r3, __float_epsilon@ha
	lfs      f4, 8(r1)
	fmuls    f0, f5, f28
	lfs      f6, 0xc(r1)
	fmuls    f2, f4, f27
	lfs      f1, lbl_80516B68@sda21(r2)
	fmuls    f3, f6, f29
	fmsubs   f0, f6, f27, f0
	fmsubs   f2, f5, f29, f2
	fmsubs   f3, f4, f28, f3
	stfs     f0, 0x54(r30)
	stfs     f2, 0x58(r30)
	stfs     f3, 0x5c(r30)
	lfs      f2, 0x54(r30)
	lfs      f0, 0x58(r30)
	fmuls    f3, f2, f2
	lfs      f4, 0x5c(r30)
	fmuls    f2, f0, f0
	lfs      f0, __float_epsilon@l(r3)
	fmuls    f4, f4, f4
	fmuls    f0, f1, f0
	fadds    f1, f3, f2
	fadds    f4, f4, f1
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	beq      lbl_8008D29C
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008D258
	b        lbl_8008D278

lbl_8008D258:
	frsqrte  f3, f4
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008D278:
	lfs      f0, 0x54(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x54(r30)
	lfs      f0, 0x58(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x58(r30)
	lfs      f0, 0x5c(r30)
	fmuls    f0, f0, f4
	stfs     f0, 0x5c(r30)

lbl_8008D29C:
	lwz      r0, 0x204(r29)
	addi     r3, r31, 0x60
	lfs      f5, 0x144(r29)
	fmr      f1, f31
	slwi     r0, r0, 2
	lfs      f4, 0x60(r30)
	lfs      f3, 0x148(r29)
	fmr      f2, f30
	lfs      f0, 0x64(r30)
	lwzx     r12, r3, r0
	fmuls    f30, f5, f4
	fmuls    f31, f3, f0
	addi     r3, r1, 0x44
	mtctr    r12
	bctrl
	lwz      r0, 0x208(r29)
	addi     r4, r31, 0x74
	fmr      f1, f30
	addi     r3, r1, 0x44
	slwi     r0, r0, 2
	fmr      f2, f31
	lwzx     r12, r4, r0
	mtctr    r12
	bctrl
	lfs      f1, 0x54(r30)
	addi     r4, r1, 0x44
	lfs      f0, 8(r1)
	mr       r5, r4
	stfs     f1, 0x14(r1)
	addi     r3, r1, 0x14
	lfs      f1, 0xc(r1)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x10(r1)
	stfs     f29, 0x1c(r1)
	lfs      f2, 0(r30)
	stfs     f2, 0x20(r1)
	lfs      f2, 0x58(r30)
	stfs     f2, 0x24(r1)
	stfs     f1, 0x28(r1)
	stfs     f28, 0x2c(r1)
	lfs      f1, 4(r30)
	stfs     f1, 0x30(r1)
	lfs      f1, 0x5c(r30)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	stfs     f27, 0x3c(r1)
	lfs      f0, 8(r30)
	stfs     f0, 0x40(r1)
	bl       PSMTXConcat
	addi     r3, r29, 0x184
	addi     r4, r1, 0x44
	addi     r5, r1, 0x14
	bl       PSMTXConcat
	addi     r3, r1, 0x14
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r29)
	addi     r5, r31, 0x40
	mr       r3, r29
	addi     r4, r1, 0x14
	slwi     r0, r0, 2
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lwz      r0, 0x20c(r29)
	addi     r3, r13, p_dl@sda21
	li       r4, 0x20
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       GXCallDisplayList

lbl_8008D3B4:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r0, 0xe4(r1)
	lwz      r29, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D3F8
 * Size:	000208
 */
void JPADrawDBillboard(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r5, jpa_dl@ha
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	addi     r31, r5, jpa_dl@l
	stw      r30, 0x58(r1)
	mr       r30, r4
	stw      r29, 0x54(r1)
	mr       r29, r3
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008D5E4
	lwz      r0, 0x200(r29)
	addi     r6, r31, 0x4c
	addi     r5, r1, 0x14
	slwi     r0, r0, 2
	lwzx     r12, r6, r0
	mtctr    r12
	bctrl
	lfs      f4, 0x1ac(r29)
	lis      r3, __float_epsilon@ha
	lfs      f7, 0x14(r1)
	lfs      f5, 0x1a8(r29)
	lfs      f1, 0x1c(r1)
	fmuls    f0, f7, f4
	lfs      f3, 0x1a4(r29)
	fmuls    f2, f1, f5
	lfs      f8, 0x18(r1)
	fmsubs   f6, f1, f3, f0
	lfs      f1, lbl_80516B68@sda21(r2)
	fmuls    f3, f8, f3
	lfs      f0, __float_epsilon@l(r3)
	fmsubs   f4, f8, f4, f2
	stfs     f6, 0x18(r1)
	fmsubs   f5, f7, f5, f3
	fmuls    f2, f6, f6
	fmuls    f6, f1, f0
	stfs     f4, 0x14(r1)
	fmuls    f3, f4, f4
	fmuls    f1, f5, f5
	stfs     f5, 0x1c(r1)
	fadds    f0, f3, f2
	fadds    f4, f1, f0
	fcmpo    cr0, f4, f6
	cror     2, 0, 2
	beq      lbl_8008D5E4
	fcmpo    cr0, f4, f6
	cror     2, 0, 2
	beq      lbl_8008D518
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_8008D4D4
	b        lbl_8008D4F4

lbl_8008D4D4:
	frsqrte  f3, f4
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f4, f1, f0
	fmuls    f4, f2, f0

lbl_8008D4F4:
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fmuls    f2, f2, f4
	fmuls    f1, f1, f4
	fmuls    f0, f0, f4
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)

lbl_8008D518:
	addi     r4, r1, 0x14
	addi     r3, r29, 0x184
	mr       r5, r4
	bl       PSMTXMultVecSR
	mr       r4, r30
	addi     r3, r29, 0x184
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f5, 0x18(r1)
	addi     r3, r1, 0x20
	lfs      f4, 0x144(r29)
	li       r4, 0
	lfs      f0, 0x60(r30)
	fneg     f1, f5
	lfs      f3, 0x148(r29)
	lfs      f2, 0x64(r30)
	fmuls    f7, f4, f0
	lfs      f4, 0x14(r1)
	lfs      f0, lbl_80516B50@sda21(r2)
	fmuls    f2, f3, f2
	fmuls    f8, f4, f7
	lfs      f6, 8(r1)
	fmuls    f5, f5, f7
	lfs      f3, 0xc(r1)
	fmuls    f7, f1, f2
	fmuls    f4, f4, f2
	lfs      f2, lbl_80516B4C@sda21(r2)
	lfs      f1, 0x10(r1)
	stfs     f8, 0x20(r1)
	stfs     f7, 0x24(r1)
	stfs     f6, 0x2c(r1)
	stfs     f5, 0x30(r1)
	stfs     f4, 0x34(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f0, 0x44(r1)
	stfs     f0, 0x40(r1)
	stfs     f0, 0x28(r1)
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r29)
	addi     r5, r31, 0x40
	mr       r3, r29
	addi     r4, r1, 0x20
	slwi     r0, r0, 2
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	addi     r3, r31, 0
	li       r4, 0x20
	bl       GXCallDisplayList

lbl_8008D5E4:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D600
 * Size:	000150
 */
void JPADrawRotation(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	stw      r29, 0x44(r1)
	mr       r31, r4
	lis      r4, jpa_dl@ha
	lwz      r0, 0x7c(r31)
	mr       r30, r3
	addi     r29, r4, jpa_dl@l
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008D724
	lwz      r0, 0x204(r30)
	lis      r3, sincosTable___5JMath@ha
	lhz      r5, 0x88(r31)
	addi     r4, r3, sincosTable___5JMath@l
	addi     r3, r29, 0x60
	slwi     r0, r0, 2
	rlwinm   r5, r5, 0x1e, 0x12, 0x1c
	lwzx     r12, r3, r0
	lfsx     f1, r4, r5
	add      r4, r4, r5
	lfs      f4, 0x144(r30)
	addi     r3, r1, 8
	lfs      f3, 0x60(r31)
	lfs      f2, 0x148(r30)
	lfs      f0, 0x64(r31)
	fmuls    f31, f4, f3
	fmuls    f30, f2, f0
	lfs      f2, 4(r4)
	mtctr    r12
	bctrl
	lwz      r0, 0x208(r30)
	addi     r4, r29, 0x74
	fmr      f1, f31
	addi     r3, r1, 8
	slwi     r0, r0, 2
	fmr      f2, f30
	lwzx     r12, r4, r0
	mtctr    r12
	bctrl
	lfs      f0, 0(r31)
	addi     r4, r1, 8
	mr       r5, r4
	addi     r3, r30, 0x184
	stfs     f0, 0x14(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0x24(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x34(r1)
	bl       PSMTXConcat
	addi     r3, r1, 8
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	addi     r5, r29, 0x40
	mr       r3, r30
	addi     r4, r1, 8
	slwi     r0, r0, 2
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	lwz      r0, 0x20c(r30)
	addi     r3, r13, p_dl@sda21
	li       r4, 0x20
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	bl       GXCallDisplayList

lbl_8008D724:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x74(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D750
 * Size:	00009C
 */
void JPADrawPoint(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if ((particle->_7C & 8) != 0) {
		return;
	}
	GXSetVtxDesc(GX_VA_POS, GX_DIRECT);
	GXSetVtxDesc(GX_VA_TEX0, GX_DIRECT);
	GXBegin(GX_POINTS, GX_VTXFMT1, 1);
	f32 v1 = 0.0f;
	GXPosition3f32(particle->_00.x, particle->_00.y, particle->_00.z);
	GXWGFifo.f32 = v1;
	GXWGFifo.f32 = v1;
	GXSetVtxDesc(GX_VA_POS, GX_INDEX8);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX8);
}

/*
 * --INFO--
 * Address:	8008D7EC
 * Size:	0001B8
 */
void JPADrawLine(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	/*
	stwu     r1, -0x70(r1)
	mflr     r0
	stw      r0, 0x74(r1)
	stfd     f31, 0x60(r1)
	psq_st   f31, 104(r1), 0, qr0
	stfd     f30, 0x50(r1)
	psq_st   f30, 88(r1), 0, qr0
	stfd     f29, 0x40(r1)
	psq_st   f29, 72(r1), 0, qr0
	stfd     f28, 0x30(r1)
	psq_st   f28, 56(r1), 0, qr0
	stfd     f27, 0x20(r1)
	psq_st   f27, 40(r1), 0, qr0
	lwz      r0, 0x7c(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	bne      lbl_8008D96C
	lfs      f6, 0x28(r4)
	lis      r5, __float_epsilon@ha
	lwz      r7, 0(r4)
	fmuls    f0, f6, f6
	lfs      f5, 0x24(r4)
	lwz      r6, 4(r4)
	lwz      r0, 8(r4)
	fmadds   f2, f5, f5, f0
	lfs      f7, 0x2c(r4)
	lfs      f1, lbl_80516B68@sda21(r2)
	lfs      f0, __float_epsilon@l(r5)
	fmadds   f8, f7, f7, f2
	stw      r7, 8(r1)
	fmuls    f0, f1, f0
	stw      r6, 0xc(r1)
	fcmpo    cr0, f8, f0
	stw      r0, 0x10(r1)
	cror     2, 0, 2
	beq      lbl_8008D96C
	lfs      f1, lbl_80516B38@sda21(r2)
	fcmpo    cr0, f8, f0
	lfs      f0, 0x64(r4)
	lfs      f2, 0x148(r3)
	fmuls    f0, f1, f0
	fmuls    f3, f2, f0
	cror     2, 0, 2
	beq      lbl_8008D8DC
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f8, f0
	cror     2, 0, 2
	bne      lbl_8008D8AC
	b        lbl_8008D8CC

lbl_8008D8AC:
	frsqrte  f4, f8
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f4, f4
	fmuls    f1, f4, f4
	fmuls    f2, f2, f4
	fnmsubs  f0, f8, f1, f0
	fmuls    f8, f2, f0

lbl_8008D8CC:
	fmuls    f0, f8, f3
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0
	fmuls    f7, f7, f0

lbl_8008D8DC:
	lfs      f0, 8(r1)
	li       r3, 9
	lfs      f31, 0xc(r1)
	li       r4, 1
	lfs      f30, 0x10(r1)
	fsubs    f29, f0, f5
	fsubs    f28, f31, f6
	fsubs    f27, f30, f7
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xa8
	li       r4, 1
	li       r5, 2
	bl       GXBegin
	lfs      f0, 8(r1)
	lis      r5, 0xCC008000@ha
	lfs      f1, lbl_80516B50@sda21(r2)
	li       r3, 9
	stfs     f0, 0xCC008000@l(r5)
	li       r4, 2
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f31, -0x8000(r5)
	stfs     f30, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f29, -0x8000(r5)
	stfs     f28, -0x8000(r5)
	stfs     f27, -0x8000(r5)
	stfs     f1, -0x8000(r5)
	stfs     f0, -0x8000(r5)
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

lbl_8008D96C:
	psq_l    f31, 104(r1), 0, qr0
	lfd      f31, 0x60(r1)
	psq_l    f30, 88(r1), 0, qr0
	lfd      f30, 0x50(r1)
	psq_l    f29, 72(r1), 0, qr0
	lfd      f29, 0x40(r1)
	psq_l    f28, 56(r1), 0, qr0
	lfd      f28, 0x30(r1)
	psq_l    f27, 40(r1), 0, qr0
	lwz      r0, 0x74(r1)
	lfd      f27, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D9A4
 * Size:	000008
 */
void getNext(JPANode<JPABaseParticle>*)
{
	/*
	lwz      r3, 4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D9AC
 * Size:	000008
 */
void getPrev(JPANode<JPABaseParticle>*)
{
	/*
	lwz      r3, 0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008D9B4
 * Size:	000588
 */
void JPADrawStripe(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stfd     f30, 0x110(r1)
	psq_st   f30, 280(r1), 0, qr0
	stfd     f29, 0x100(r1)
	psq_st   f29, 264(r1), 0, qr0
	stfd     f28, 0xf0(r1)
	psq_st   f28, 248(r1), 0, qr0
	stfd     f27, 0xe0(r1)
	psq_st   f27, 232(r1), 0, qr0
	stfd     f26, 0xd0(r1)
	psq_st   f26, 216(r1), 0, qr0
	stfd     f25, 0xc0(r1)
	psq_st   f25, 200(r1), 0, qr0
	stfd     f24, 0xb0(r1)
	psq_st   f24, 184(r1), 0, qr0
	stfd     f23, 0xa0(r1)
	psq_st   f23, 168(r1), 0, qr0
	stfd     f22, 0x90(r1)
	psq_st   f22, 152(r1), 0, qr0
	stmw     r24, 0x70(r1)
	mr       r30, r3
	lwz      r5, 0x1e4(r3)
	lwz      r3, 4(r3)
	lwz      r26, 8(r5)
	lwz      r3, 0x1c(r3)
	cmplwi   r26, 2
	blt      lbl_8008DED8
	lis      r4, 0x4330
	lwz      r3, 0(r3)
	stw      r26, 0x64(r1)
	lwz      r0, 8(r3)
	stw      r4, 0x60(r1)
	lfd      f1, lbl_80516B58@sda21(r2)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	lfd      f0, 0x60(r1)
	lfs      f4, lbl_80516B4C@sda21(r2)
	fsubs    f3, f0, f1
	lfs      f5, 0x14c(r30)
	lfs      f1, lbl_80516B38@sda21(r2)
	lfs      f0, 0x144(r30)
	fadds    f2, f4, f5
	fsubs    f3, f3, f4
	fmuls    f1, f1, f0
	lfs      f26, lbl_80516B50@sda21(r2)
	fsubs    f0, f4, f5
	fdivs    f25, f4, f3
	fmuls    f24, f2, f1
	fmuls    f23, f0, f1
	beq      lbl_8008DAA4
	lis      r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
	fmr      f26, f4
	addi     r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
	fneg     f25, f25
	lwz      r25, 4(r5)
	mr       r31, r0
	b        lbl_8008DAB4

lbl_8008DAA4:
	lis      r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
	lwz      r25, 0(r5)
	addi     r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
	mr       r31, r0

lbl_8008DAB4:
	addi     r3, r30, 0x184
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r30)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r30
	slwi     r0, r0, 2
	addi     r4, r30, 0x184
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	rlwinm   r5, r26, 1, 0x10, 0x1e
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f30, lbl_80516B50@sda21(r2)
	lfs      f31, lbl_80516B68@sda21(r2)
	mr       r24, r25
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r26, r5, sincosTable___5JMath@l
	addi     r27, r4, p_direction@l
	addi     r28, r3, __float_epsilon@l
	lis      r29, 0xcc01
	b        lbl_8008DEB8

lbl_8008DB3C:
	stw      r24, 0x1e8(r30)
	addi     r25, r24, 8
	mr       r3, r30
	addi     r5, r1, 8
	lfs      f1, 0x68(r24)
	mr       r4, r25
	lhz      r0, 0x90(r24)
	fneg     f0, f1
	lfs      f29, 8(r24)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f1, f1, f23
	add      r6, r26, r0
	lfs      f28, 0xc(r24)
	lfs      f27, 0x10(r24)
	fmuls    f0, f0, f24
	lfs      f4, 0(r6)
	lfs      f5, 4(r6)
	fmuls    f3, f0, f4
	stfs     f30, 0x18(r1)
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f4, f1, f4
	fmuls    f0, f1, f5
	stfs     f30, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f30, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f30, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f30, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r30)
	slwi     r0, r0, 2
	lwzx     r12, r27, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r28)
	fmuls    f3, f3, f3
	fmuls    f4, f31, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008DC20
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008DC84

lbl_8008DC20:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008DC84
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008DC40
	b        lbl_8008DC60

lbl_8008DC40:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008DC60:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008DC84:
	lfs      f4, 0x54(r25)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r28)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r25)
	fmuls    f8, f31, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r25)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008DCE4
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008DD30

lbl_8008DCE4:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008DD30
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008DD04
	b        lbl_8008DD24

lbl_8008DD04:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008DD24:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008DD30:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r25)
	stfs     f4, 0x58(r25)
	stfs     f5, 0x5c(r25)
	lfs      f4, 0x54(r25)
	lfs      f3, 0x58(r25)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r25)
	fmuls    f4, f3, f3
	lfs      f3, 0(r28)
	fmuls    f6, f6, f6
	fmuls    f3, f31, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008DDEC
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008DDA8
	b        lbl_8008DDC8

lbl_8008DDA8:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008DDC8:
	lfs      f3, 0x54(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r25)
	lfs      f3, 0x58(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r25)
	lfs      f3, 0x5c(r25)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r25)

lbl_8008DDEC:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r25)
	stfs     f4, 0x34(r1)
	stfs     f30, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r25)
	stfs     f1, 0x44(r1)
	stfs     f30, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r25)
	stfs     f0, 0x54(r1)
	stfs     f30, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r31
	mr       r3, r24
	fadds    f0, f0, f29
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	stfs     f30, -0x8000(r29)
	stfs     f26, -0x8000(r29)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f29
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	stfs     f22, -0x8000(r29)
	stfs     f26, -0x8000(r29)
	mtctr    r12
	bctrl
	fadds    f26, f26, f25
	mr       r24, r3

lbl_8008DEB8:
	cmplwi   r24, 0
	bne      lbl_8008DB3C
	li       r3, 9
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

lbl_8008DED8:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	psq_l    f30, 280(r1), 0, qr0
	lfd      f30, 0x110(r1)
	psq_l    f29, 264(r1), 0, qr0
	lfd      f29, 0x100(r1)
	psq_l    f28, 248(r1), 0, qr0
	lfd      f28, 0xf0(r1)
	psq_l    f27, 232(r1), 0, qr0
	lfd      f27, 0xe0(r1)
	psq_l    f26, 216(r1), 0, qr0
	lfd      f26, 0xd0(r1)
	psq_l    f25, 200(r1), 0, qr0
	lfd      f25, 0xc0(r1)
	psq_l    f24, 184(r1), 0, qr0
	lfd      f24, 0xb0(r1)
	psq_l    f23, 168(r1), 0, qr0
	lfd      f23, 0xa0(r1)
	psq_l    f22, 152(r1), 0, qr0
	lfd      f22, 0x90(r1)
	lmw      r24, 0x70(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008DF3C
 * Size:	0009AC
 */
void JPADrawStripeX(JPAEmitterWorkData*)
{
	/*
	stwu     r1, -0x160(r1)
	mflr     r0
	stw      r0, 0x164(r1)
	stfd     f31, 0x150(r1)
	psq_st   f31, 344(r1), 0, qr0
	stfd     f30, 0x140(r1)
	psq_st   f30, 328(r1), 0, qr0
	stfd     f29, 0x130(r1)
	psq_st   f29, 312(r1), 0, qr0
	stfd     f28, 0x120(r1)
	psq_st   f28, 296(r1), 0, qr0
	stfd     f27, 0x110(r1)
	psq_st   f27, 280(r1), 0, qr0
	stfd     f26, 0x100(r1)
	psq_st   f26, 264(r1), 0, qr0
	stfd     f25, 0xf0(r1)
	psq_st   f25, 248(r1), 0, qr0
	stfd     f24, 0xe0(r1)
	psq_st   f24, 232(r1), 0, qr0
	stfd     f23, 0xd0(r1)
	psq_st   f23, 216(r1), 0, qr0
	stfd     f22, 0xc0(r1)
	psq_st   f22, 200(r1), 0, qr0
	stfd     f21, 0xb0(r1)
	psq_st   f21, 184(r1), 0, qr0
	stfd     f20, 0xa0(r1)
	psq_st   f20, 168(r1), 0, qr0
	stfd     f19, 0x90(r1)
	psq_st   f19, 152(r1), 0, qr0
	stmw     r22, 0x68(r1)
	mr       r27, r3
	lwz      r5, 0x1e4(r3)
	lwz      r3, 4(r3)
	lwz      r31, 8(r5)
	lwz      r3, 0x1c(r3)
	cmplwi   r31, 2
	blt      lbl_8008E86C
	lis      r4, 0x4330
	lwz      r3, 0(r3)
	stw      r31, 0x64(r1)
	lwz      r0, 8(r3)
	stw      r4, 0x60(r1)
	lfd      f1, lbl_80516B58@sda21(r2)
	rlwinm.  r0, r0, 0, 0xa, 0xa
	lfd      f0, 0x60(r1)
	lfs      f6, lbl_80516B4C@sda21(r2)
	fsubs    f0, f0, f1
	lfs      f1, 0x14c(r27)
	lfs      f19, lbl_80516B50@sda21(r2)
	lfs      f7, 0x150(r27)
	fadds    f5, f6, f1
	fsubs    f0, f0, f6
	fsubs    f2, f6, f1
	lfs      f4, lbl_80516B38@sda21(r2)
	lfs      f3, 0x144(r27)
	fadds    f1, f6, f7
	fdivs    f31, f6, f0
	lfs      f0, 0x148(r27)
	fmuls    f3, f4, f3
	fmuls    f4, f4, f0
	fsubs    f0, f6, f7
	fmr      f25, f19
	fmuls    f24, f5, f3
	fmuls    f23, f2, f3
	fmuls    f20, f1, f4
	fmuls    f21, f0, f4
	beq      lbl_8008E068
	lis      r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
	fmr      f25, f6
	addi     r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
	fmr      f19, f6
	fneg     f31, f31
	lwz      r29, 4(r5)
	mr       r28, r0
	b        lbl_8008E078

lbl_8008E068:
	lis      r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
	lwz      r29, 0(r5)
	addi     r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
	mr       r28, r0

lbl_8008E078:
	addi     r3, r27, 0x184
	li       r4, 0
	bl       GXLoadPosMtxImm
	lwz      r0, 0x210(r27)
	lis      r3, p_prj@ha
	addi     r5, r3, p_prj@l
	mr       r3, r27
	slwi     r0, r0, 2
	addi     r4, r27, 0x184
	lwzx     r12, r5, r0
	mtctr    r12
	bctrl
	li       r3, 9
	li       r4, 1
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 1
	bl       GXSetVtxDesc
	slwi     r30, r31, 1
	rlwinm   r5, r31, 1, 0x10, 0x1e
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f29, lbl_80516B50@sda21(r2)
	lfs      f30, lbl_80516B68@sda21(r2)
	mr       r31, r29
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r23, r5, sincosTable___5JMath@l
	addi     r24, r4, p_direction@l
	addi     r25, r3, __float_epsilon@l
	lis      r26, 0xcc01
	b        lbl_8008E480

lbl_8008E104:
	stw      r31, 0x1e8(r27)
	addi     r22, r31, 8
	mr       r3, r27
	addi     r5, r1, 8
	lfs      f1, 0x68(r31)
	mr       r4, r22
	lhz      r0, 0x90(r31)
	fneg     f0, f1
	lfs      f28, 8(r31)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	fmuls    f1, f1, f23
	add      r6, r23, r0
	lfs      f27, 0xc(r31)
	lfs      f26, 0x10(r31)
	fmuls    f0, f0, f24
	lfs      f4, 0(r6)
	lfs      f5, 4(r6)
	fmuls    f3, f0, f4
	stfs     f29, 0x18(r1)
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f4, f1, f4
	fmuls    f0, f1, f5
	stfs     f29, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f29, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f29, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r27)
	slwi     r0, r0, 2
	lwzx     r12, r24, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r25)
	fmuls    f3, f3, f3
	fmuls    f4, f30, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008E1E8
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008E24C

lbl_8008E1E8:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008E24C
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008E208
	b        lbl_8008E228

lbl_8008E208:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008E228:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008E24C:
	lfs      f4, 0x54(r22)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r25)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r22)
	fmuls    f8, f30, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r22)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008E2AC
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008E2F8

lbl_8008E2AC:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008E2F8
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E2CC
	b        lbl_8008E2EC

lbl_8008E2CC:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E2EC:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008E2F8:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r22)
	stfs     f4, 0x58(r22)
	stfs     f5, 0x5c(r22)
	lfs      f4, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r22)
	fmuls    f4, f3, f3
	lfs      f3, 0(r25)
	fmuls    f6, f6, f6
	fmuls    f3, f30, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008E3B4
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E370
	b        lbl_8008E390

lbl_8008E370:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E390:
	lfs      f3, 0x54(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r22)
	lfs      f3, 0x5c(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r22)

lbl_8008E3B4:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r22)
	stfs     f4, 0x34(r1)
	stfs     f29, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r22)
	stfs     f1, 0x44(r1)
	stfs     f29, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r22)
	stfs     f0, 0x54(r1)
	stfs     f29, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r28
	mr       r3, r31
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r26)
	stfs     f29, -0x8000(r26)
	stfs     f25, -0x8000(r26)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r26)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r26)
	stfs     f22, -0x8000(r26)
	stfs     f25, -0x8000(r26)
	mtctr    r12
	bctrl
	fadds    f25, f25, f31
	mr       r31, r3

lbl_8008E480:
	cmplwi   r31, 0
	bne      lbl_8008E104
	fmr      f25, f19
	clrlwi   r5, r30, 0x10
	li       r3, 0x98
	li       r4, 1
	bl       GXBegin
	lis      r5, sincosTable___5JMath@ha
	lis      r4, p_direction@ha
	lis      r3, __float_epsilon@ha
	lfs      f24, lbl_80516B50@sda21(r2)
	lfs      f23, lbl_80516B68@sda21(r2)
	mr       r23, r29
	lfs      f22, lbl_80516B4C@sda21(r2)
	addi     r26, r5, sincosTable___5JMath@l
	addi     r31, r4, p_direction@l
	addi     r30, r3, __float_epsilon@l
	lis      r29, 0xcc01
	b        lbl_8008E84C

lbl_8008E4CC:
	stw      r23, 0x1e8(r27)
	addi     r22, r23, 8
	mr       r3, r27
	addi     r5, r1, 8
	lhz      r0, 0x90(r23)
	mr       r4, r22
	lfs      f1, 0x6c(r23)
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfs      f26, 8(r23)
	fneg     f0, f1
	add      r6, r26, r0
	lfs      f2, 0(r6)
	fmuls    f1, f1, f21
	lfs      f3, 4(r6)
	fneg     f5, f2
	fmuls    f0, f0, f20
	lfs      f27, 0xc(r23)
	lfs      f28, 0x10(r23)
	fmuls    f4, f1, f3
	stfs     f24, 0x18(r1)
	fmuls    f3, f0, f3
	fmuls    f2, f0, f5
	stfs     f0, 0x14(r1)
	fmuls    f0, f1, f5
	stfs     f24, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f24, 0x24(r1)
	stfs     f24, 0x28(r1)
	stfs     f2, 0x14(r1)
	stfs     f24, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f0, 0x20(r1)
	stfs     f24, 0x24(r1)
	stfs     f4, 0x28(r1)
	lwz      r0, 0x200(r27)
	slwi     r0, r0, 2
	lwzx     r12, r31, r0
	mtctr    r12
	bctrl
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	fmuls    f2, f1, f1
	lfs      f3, 0x10(r1)
	fmuls    f1, f0, f0
	lfs      f0, 0(r30)
	fmuls    f3, f3, f3
	fmuls    f4, f23, f0
	fadds    f0, f2, f1
	fadds    f5, f3, f0
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	bne      lbl_8008E5B4
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	b        lbl_8008E618

lbl_8008E5B4:
	fcmpo    cr0, f5, f4
	cror     2, 0, 2
	beq      lbl_8008E618
	lfs      f0, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f5, f0
	cror     2, 0, 2
	bne      lbl_8008E5D4
	b        lbl_8008E5F4

lbl_8008E5D4:
	frsqrte  f3, f5
	lfs      f2, lbl_80516B48@sda21(r2)
	lfs      f0, lbl_80516B6C@sda21(r2)
	frsp     f3, f3
	fmuls    f1, f3, f3
	fmuls    f2, f2, f3
	fnmsubs  f0, f5, f1, f0
	fmuls    f5, f2, f0

lbl_8008E5F4:
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f2, f2, f5
	fmuls    f1, f1, f5
	fmuls    f0, f0, f5
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_8008E618:
	lfs      f4, 0x54(r22)
	lfs      f6, 0x10(r1)
	lfs      f0, 0(r30)
	fmuls    f1, f4, f6
	lfs      f5, 0xc(r1)
	lfs      f3, 0x5c(r22)
	fmuls    f8, f23, f0
	lfs      f2, 8(r1)
	fmuls    f0, f3, f5
	fmsubs   f1, f3, f2, f1
	lfs      f7, 0x58(r22)
	fmuls    f2, f7, f2
	fmuls    f3, f1, f1
	fmsubs   f0, f7, f6, f0
	fmsubs   f2, f4, f5, f2
	fmadds   f3, f0, f0, f3
	fmadds   f7, f2, f2, f3
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	bne      lbl_8008E678
	lfs      f1, lbl_80516B50@sda21(r2)
	lfs      f0, lbl_80516B4C@sda21(r2)
	fmr      f2, f1
	b        lbl_8008E6C4

lbl_8008E678:
	fcmpo    cr0, f7, f8
	cror     2, 0, 2
	beq      lbl_8008E6C4
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E698
	b        lbl_8008E6B8

lbl_8008E698:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E6B8:
	fmuls    f0, f0, f7
	fmuls    f1, f1, f7
	fmuls    f2, f2, f7

lbl_8008E6C4:
	lfs      f7, 0x10(r1)
	lfs      f6, 8(r1)
	fmuls    f3, f7, f1
	lfs      f8, 0xc(r1)
	fmuls    f4, f6, f2
	fmuls    f5, f8, f0
	fmsubs   f3, f8, f2, f3
	fmsubs   f4, f7, f0, f4
	fmsubs   f5, f6, f1, f5
	stfs     f3, 0x54(r22)
	stfs     f4, 0x58(r22)
	stfs     f5, 0x5c(r22)
	lfs      f4, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f5, f4, f4
	lfs      f6, 0x5c(r22)
	fmuls    f4, f3, f3
	lfs      f3, 0(r30)
	fmuls    f6, f6, f6
	fmuls    f3, f23, f3
	fadds    f4, f5, f4
	fadds    f7, f6, f4
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	beq      lbl_8008E780
	lfs      f3, lbl_80516B50@sda21(r2)
	fcmpo    cr0, f7, f3
	cror     2, 0, 2
	bne      lbl_8008E73C
	b        lbl_8008E75C

lbl_8008E73C:
	frsqrte  f6, f7
	lfs      f5, lbl_80516B48@sda21(r2)
	lfs      f3, lbl_80516B6C@sda21(r2)
	frsp     f6, f6
	fmuls    f4, f6, f6
	fmuls    f5, f5, f6
	fnmsubs  f3, f7, f4, f3
	fmuls    f7, f5, f3

lbl_8008E75C:
	lfs      f3, 0x54(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x54(r22)
	lfs      f3, 0x58(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x58(r22)
	lfs      f3, 0x5c(r22)
	fmuls    f3, f3, f7
	stfs     f3, 0x5c(r22)

lbl_8008E780:
	lfs      f4, 8(r1)
	addi     r4, r1, 0x14
	stfs     f0, 0x2c(r1)
	mr       r5, r4
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x2c
	stfs     f4, 0x30(r1)
	li       r6, 2
	lfs      f0, 0x10(r1)
	lfs      f4, 0x54(r22)
	stfs     f4, 0x34(r1)
	stfs     f24, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f3, 0x40(r1)
	lfs      f1, 0x58(r22)
	stfs     f1, 0x44(r1)
	stfs     f24, 0x48(r1)
	stfs     f2, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x5c(r22)
	stfs     f0, 0x54(r1)
	stfs     f24, 0x58(r1)
	bl       PSMTXMultVecArraySR
	lfs      f0, 0x14(r1)
	mr       r12, r28
	mr       r3, r23
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x18(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x1c(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	stfs     f24, -0x8000(r29)
	stfs     f25, -0x8000(r29)
	lfs      f0, 0x20(r1)
	fadds    f0, f0, f26
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x24(r1)
	fadds    f0, f0, f27
	stfs     f0, -0x8000(r29)
	lfs      f0, 0x28(r1)
	fadds    f0, f0, f28
	stfs     f0, -0x8000(r29)
	stfs     f22, -0x8000(r29)
	stfs     f25, -0x8000(r29)
	mtctr    r12
	bctrl
	fadds    f25, f25, f31
	mr       r23, r3

lbl_8008E84C:
	cmplwi   r23, 0
	bne      lbl_8008E4CC
	li       r3, 9
	li       r4, 2
	bl       GXSetVtxDesc
	li       r3, 0xd
	li       r4, 2
	bl       GXSetVtxDesc

lbl_8008E86C:
	psq_l    f31, 344(r1), 0, qr0
	lfd      f31, 0x150(r1)
	psq_l    f30, 328(r1), 0, qr0
	lfd      f30, 0x140(r1)
	psq_l    f29, 312(r1), 0, qr0
	lfd      f29, 0x130(r1)
	psq_l    f28, 296(r1), 0, qr0
	lfd      f28, 0x120(r1)
	psq_l    f27, 280(r1), 0, qr0
	lfd      f27, 0x110(r1)
	psq_l    f26, 264(r1), 0, qr0
	lfd      f26, 0x100(r1)
	psq_l    f25, 248(r1), 0, qr0
	lfd      f25, 0xf0(r1)
	psq_l    f24, 232(r1), 0, qr0
	lfd      f24, 0xe0(r1)
	psq_l    f23, 216(r1), 0, qr0
	lfd      f23, 0xd0(r1)
	psq_l    f22, 200(r1), 0, qr0
	lfd      f22, 0xc0(r1)
	psq_l    f21, 184(r1), 0, qr0
	lfd      f21, 0xb0(r1)
	psq_l    f20, 168(r1), 0, qr0
	lfd      f20, 0xa0(r1)
	psq_l    f19, 152(r1), 0, qr0
	lfd      f19, 0x90(r1)
	lmw      r22, 0x68(r1)
	lwz      r0, 0x164(r1)
	mtlr     r0
	addi     r1, r1, 0x160
	blr
	*/
}

/*
 * --INFO--
 * Address:	8008E8E8
 * Size:	00003C
 */
void JPADrawEmitterCallBackB(JPAEmitterWorkData* workData)
{
	if (workData->m_emitter->m_emitterCallback != nullptr) {
		workData->m_emitter->m_emitterCallback->draw(workData->m_emitter);
	}
}

/*
 * --INFO--
 * Address:	8008E924
 * Size:	000044
 */
void JPADrawParticleCallBack(JPAEmitterWorkData* workData, JPABaseParticle* particle)
{
	if (workData->m_emitter->m_particleCallback != nullptr) {
		workData->m_emitter->m_particleCallback->draw(workData->m_emitter, particle);
	}
}

/*
 * --INFO--
 * Address:	8008E968
 * Size:	000004
 */
void JPAParticleCallBack::draw(JPABaseEmitter*, JPABaseParticle* particle) { }

/*
 * --INFO--
 * Address:	8008E96C
 * Size:	000284
 */
void makeColorTable(_GXColor**, const JPAClrAnmKeyData*, unsigned char, short, JKRHeap*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  extsh     r6, r6
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  addi      r31, r6, 0x1
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  rlwinm    r3,r31,2,0,29
	  stw       r29, 0x34(r1)
	  mr        r29, r5
	  mr        r5, r7
	  stw       r28, 0x30(r1)
	  mr        r28, r4
	  li        r4, 0x4
	  bl        -0x6B3C8
	  lbz       r7, 0x3(r28)
	  lis       r10, 0x4330
	  lfs       f6, -0x7810(r2)
	  mr        r4, r28
	  lbz       r9, 0x4(r28)
	  mr        r5, r3
	  stw       r7, 0x14(r1)
	  fmr       f5, f6
	  lbz       r0, 0x2(r28)
	  fmr       f3, f6
	  stw       r10, 0x10(r1)
	  fmr       f4, f6
	  lbz       r8, 0x5(r28)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r29,0,24,31
	  lfd       f2, -0x7808(r2)
	  li        r6, 0
	  lfd       f1, 0x10(r1)
	  li        r7, 0
	  stw       r10, 0x8(r1)
	  fsubs     f7, f1, f2
	  lfd       f0, 0x8(r1)
	  stw       r9, 0x1C(r1)
	  fsubs     f0, f0, f2
	  stw       r10, 0x18(r1)
	  lfd       f1, 0x18(r1)
	  stw       r8, 0x24(r1)
	  fsubs     f8, f1, f2
	  stw       r10, 0x20(r1)
	  lfd       f1, 0x20(r1)
	  fsubs     f9, f1, f2
	  b         .loc_0x254

	.loc_0xC0:
	  lha       r8, 0x0(r4)
	  extsh     r9, r7
	  cmpw      r9, r8
	  bne-      .loc_0x1FC
	  lbz       r10, 0x3(r4)
	  lis       r12, 0x4330
	  lbz       r11, 0x2(r4)
	  addi      r6, r6, 0x1
	  lbz       r9, 0x4(r4)
	  cmpw      r6, r0
	  stw       r10, 0x1C(r1)
	  lbz       r8, 0x5(r4)
	  addi      r4, r4, 0x6
	  stw       r12, 0x18(r1)
	  lfd       f5, -0x7808(r2)
	  lfd       f1, 0x18(r1)
	  stb       r11, 0x0(r5)
	  fsubs     f7, f1, f5
	  stb       r10, 0x1(r5)
	  stb       r9, 0x2(r5)
	  stw       r9, 0x14(r1)
	  stw       r12, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  stw       r11, 0x24(r1)
	  fsubs     f8, f1, f5
	  stw       r12, 0x20(r1)
	  lfd       f0, 0x20(r1)
	  stw       r8, 0xC(r1)
	  fsubs     f0, f0, f5
	  stw       r12, 0x8(r1)
	  lfd       f1, 0x8(r1)
	  stb       r8, 0x3(r5)
	  fsubs     f9, f1, f5
	  bge-      .loc_0x1E8
	  lha       r9, -0x6(r4)
	  lha       r8, 0x0(r4)
	  lbz       r11, 0x2(r4)
	  sub       r8, r8, r9
	  lbz       r10, 0x3(r4)
	  xoris     r8, r8, 0x8000
	  stw       r12, 0x20(r1)
	  lbz       r9, 0x4(r4)
	  stw       r8, 0x24(r1)
	  lfd       f2, -0x7820(r2)
	  lfd       f1, 0x20(r1)
	  lfs       f3, -0x7814(r2)
	  fsubs     f1, f1, f2
	  lbz       r8, 0x5(r4)
	  stw       r11, 0x1C(r1)
	  fdivs     f6, f3, f1
	  stw       r12, 0x18(r1)
	  lfd       f2, 0x18(r1)
	  stw       r10, 0x14(r1)
	  stw       r12, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f3, f2, f5
	  stw       r9, 0xC(r1)
	  fsubs     f2, f1, f5
	  stw       r12, 0x8(r1)
	  fsubs     f4, f3, f0
	  lfd       f1, 0x8(r1)
	  fsubs     f3, f2, f7
	  stw       r8, 0x2C(r1)
	  fsubs     f2, f1, f5
	  stw       r12, 0x28(r1)
	  fmuls     f4, f6, f4
	  fmuls     f3, f6, f3
	  lfd       f1, 0x28(r1)
	  fsubs     f2, f2, f8
	  fsubs     f1, f1, f5
	  fmuls     f5, f6, f2
	  fsubs     f1, f1, f9
	  fmuls     f6, f6, f1
	  b         .loc_0x24C

	.loc_0x1E8:
	  lfs       f6, -0x7810(r2)
	  fmr       f5, f6
	  fmr       f3, f6
	  fmr       f4, f6
	  b         .loc_0x24C

	.loc_0x1FC:
	  fadds     f0, f0, f4
	  fadds     f7, f7, f3
	  fadds     f8, f8, f5
	  fctiwz    f2, f0
	  fctiwz    f1, f7
	  fadds     f9, f9, f6
	  stfd      f2, 0x28(r1)
	  fctiwz    f2, f8
	  stfd      f1, 0x20(r1)
	  fctiwz    f1, f9
	  lwz       r8, 0x2C(r1)
	  stfd      f2, 0x18(r1)
	  lwz       r9, 0x24(r1)
	  stb       r8, 0x0(r5)
	  lwz       r8, 0x1C(r1)
	  stb       r9, 0x1(r5)
	  stfd      f1, 0x10(r1)
	  stb       r8, 0x2(r5)
	  lwz       r8, 0x14(r1)
	  stb       r8, 0x3(r5)

	.loc_0x24C:
	  addi      r5, r5, 0x4
	  addi      r7, r7, 0x1

	.loc_0x254:
	  extsh     r8, r7
	  cmpw      r8, r31
	  blt+      .loc_0xC0
	  stw       r3, 0x0(r30)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008EBF0
 * Size:	000114
 */
JPABaseShape::JPABaseShape(const unsigned char*, JKRHeap*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	stw      r30, 0(r3)
	lwz      r3, 0(r3)
	lwz      r0, 8(r3)
	rlwinm.  r0, r0, 0, 7, 7
	beq      lbl_8008EC34
	addi     r0, r30, 0x34
	stw      r0, 4(r29)
	b        lbl_8008EC3C

lbl_8008EC34:
	li       r0, 0
	stw      r0, 4(r29)

lbl_8008EC3C:
	lwz      r3, 0(r29)
	lbz      r0, 0x1e(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8008EC6C
	lwz      r0, 8(r3)
	li       r3, 0x34
	rlwinm.  r0, r0, 0, 7, 7
	beq      lbl_8008EC60
	li       r3, 0x5c

lbl_8008EC60:
	add      r0, r30, r3
	stw      r0, 8(r29)
	b        lbl_8008EC74

lbl_8008EC6C:
	li       r0, 0
	stw      r0, 8(r29)

lbl_8008EC74:
	lwz      r4, 0(r29)
	lbz      r0, 0x21(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8008ECA4
	lha      r0, 0xc(r4)
	mr       r7, r31
	lbz      r5, 0x22(r4)
	addi     r3, r29, 0xc
	lha      r6, 0x24(r4)
	add      r4, r30, r0
	bl       makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap
	b        lbl_8008ECAC

lbl_8008ECA4:
	li       r0, 0
	stw      r0, 0xc(r29)

lbl_8008ECAC:
	lwz      r4, 0(r29)
	lbz      r0, 0x21(r4)
	rlwinm.  r0, r0, 0, 0x1c, 0x1c
	beq      lbl_8008ECDC
	lha      r0, 0xe(r4)
	mr       r7, r31
	lbz      r5, 0x23(r4)
	addi     r3, r29, 0x10
	lha      r6, 0x24(r4)
	add      r4, r30, r0
	bl       makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap
	b        lbl_8008ECE4

lbl_8008ECDC:
	li       r0, 0
	stw      r0, 0x10(r29)

lbl_8008ECE4:
	lwz      r0, 0x24(r1)
	mr       r3, r29
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
 * Address:	........
 * Size:	0003F4
 */
void JPABaseShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8008ED04
 * Size:	000140
 */
void JPABaseShape::setGX(JPAEmitterWorkData*) const
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
	lwz      r4, 0(r28)
	lis      r3, jpa_dl@ha
	addi     r31, r3, jpa_dl@l
	lhz      r0, 0x18(r4)
	addi     r3, r31, 0x80
	lwz      r9, 8(r4)
	addi     r7, r31, 0x8c
	rlwinm   r8, r0, 2, 0x1c, 0x1d
	rlwinm   r4, r0, 0, 0x1a, 0x1d
	rlwinm   r5, r0, 0x1c, 0x1a, 0x1d
	rlwinm   r10, r9, 0x15, 0x19, 0x1b
	addi     r30, r31, 0x124
	addi     r6, r31, 0xb4
	rlwinm   r0, r0, 0x18, 0x1a, 0x1d
	rlwinm   r9, r9, 0x12, 0x1b, 0x1b
	addi     r29, r31, 0x184
	lwzx     r3, r3, r8
	lwzx     r4, r7, r4
	add      r30, r30, r10
	lwzx     r5, r7, r5
	add      r29, r29, r9
	lwzx     r6, r6, r0
	bl       GXSetBlendMode
	lwz      r3, 0(r28)
	addi     r4, r31, 0xf4
	lbz      r5, 0x1d(r3)
	rlwinm   r0, r5, 1, 0x1b, 0x1d
	clrlwi   r3, r5, 0x1f
	lwzx     r4, r4, r0
	rlwinm   r5, r5, 0x1c, 0x1f, 0x1f
	bl       GXSetZMode
	lwz      r8, 0(r28)
	addi     r7, r31, 0xf4
	addi     r5, r31, 0x114
	lbz      r0, 0x1a(r8)
	lbz      r4, 0x1b(r8)
	rlwinm   r3, r0, 2, 0x1b, 0x1d
	rlwinm   r6, r0, 0x1f, 0x1c, 0x1d
	rlwinm   r0, r0, 0x1d, 0x1b, 0x1d
	lwzx     r5, r5, r6
	lwzx     r3, r7, r3
	lwzx     r6, r7, r0
	lbz      r7, 0x1c(r8)
	bl       GXSetAlphaCompare
	lwz      r4, 0(r30)
	li       r3, 0
	lwz      r5, 4(r30)
	lwz      r6, 8(r30)
	lwz      r7, 0xc(r30)
	bl       GXSetTevColorIn
	lwz      r4, 0(r29)
	li       r3, 0
	lwz      r5, 4(r29)
	lwz      r6, 8(r29)
	lwz      r7, 0xc(r29)
	bl       GXSetTevAlphaIn
	li       r3, 0
	bl       GXSetTevDirect
	li       r3, 1
	bl       GXSetTevDirect
	lwz      r3, 0(r28)
	lbz      r0, 0x1d(r3)
	rlwinm   r3, r0, 0x1b, 0x1f, 0x1f
	bl       GXSetZCompLoc
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
