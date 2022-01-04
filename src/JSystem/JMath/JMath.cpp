#include "Dolphin/vec.h"
#include "JSystem/JMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516728
    lbl_80516728:
        .4byte 0x00000000
        .4byte 0x00000000
    .global lbl_80516730
    lbl_80516730:
        .float 1.0
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80034F08
 * Size:	0000BC
 */
void JMAEulerToQuat(short x, short y, short z, Quaternion* quat)
{
	// int iX = (u16)(x/2) % 2048;
	// int iY = (u16)(y/2) % 2048;
	// int iX = (u16)(x/2) >> 5;
	// int iY = (u16)(y/2) >> 5;
	// int iZ = ((z/2) >> 2) & 0x3FF8;
	float sinX = JMath::sincosTable_[(u16)(x / 2) / 32].first;
	// int iZ = ((z/2) >> 2) % 2048;
	float sinY = JMath::sincosTable_[(u16)(y / 2) / 32].first;
	float sinZ = JMath::sincosTable_[((u16)(z / 2) >> 2) & 0x3FF8].first;
	float cosX = JMath::sincosTable_[(u16)(x / 2) / 32].second;
	float cosY = JMath::sincosTable_[(u16)(y / 2) / 32].second;
	float cosZ = JMath::sincosTable_[((u16)(z / 2) >> 2) & 0x3FF8].second;
	// int iX = ((u16)(x/2)) >> 5;
	// float sinX = JMath::sincosTable_[iX].first;
	// float sinY = JMath::sincosTable_[((u16)(y/2)) >> 5].first;
	// int iZ = ((z/2) >> 2) & 0x3FF8;
	// float sinZ = JMath::sincosTable_[iZ].first;
	// float cosX = JMath::sincosTable_[iX].second;
	// float cosY = JMath::sincosTable_[((u16)(y/2)) >> 5].second;
	// float cosZ = JMath::sincosTable_[iZ].second;
	quat->_0C = cosX * cosY * cosZ + sinX * sinY * sinZ;
	quat->_00 = sinX * cosY * cosZ - cosX * sinY * sinZ;
	quat->_04 = cosZ * cosX * sinY + sinZ * sinX * cosY;
	quat->_08 = sinZ * cosX * cosY - cosZ * sinX * sinY;
	/*
	extsh    r8, r3
	extsh    r7, r4
	srwi     r0, r8, 0x1f
	extsh    r3, r5
	add      r0, r0, r8
	srwi     r4, r7, 0x1f
	srawi    r5, r0, 1
	lis      r8, sincosTable___5JMath@ha
	clrlwi   r5, r5, 0x10
	add      r4, r4, r7
	srawi    r5, r5, 5
	srwi     r0, r3, 0x1f
	srawi    r4, r4, 1
	addi     r7, r8, sincosTable___5JMath@l
	add      r0, r0, r3
	slwi     r5, r5, 3
	clrlwi   r3, r4, 0x10
	addi     r4, r7, 4
	srawi    r3, r3, 5
	lfsx     f9, r7, r5
	slwi     r3, r3, 3
	srawi    r0, r0, 1
	rlwinm   r0, r0, 0x1e, 0x12, 0x1c
	lfsx     f3, r7, r3
	lfsx     f10, r7, r0
	lfsx     f7, r4, r3
	fmuls    f0, f9, f3
	lfsx     f8, r4, r0
	fmuls    f4, f3, f10
	lfsx     f6, r4, r5
	fmuls    f1, f9, f7
	fmuls    f11, f7, f8
	fmuls    f2, f9, f4
	fmuls    f4, f6, f4
	fmuls    f3, f6, f3
	fmadds   f5, f6, f11, f2
	fmuls    f2, f10, f1
	fmsubs   f4, f9, f11, f4
	stfs     f5, 0xc(r6)
	fmuls    f1, f6, f7
	fmuls    f0, f8, f0
	fmadds   f2, f8, f3, f2
	stfs     f4, 0(r6)
	fmsubs   f0, f10, f1, f0
	stfs     f2, 4(r6)
	stfs     f0, 8(r6)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80034FC4
 * Size:	0000D8
 */
void JMAQuatLerp(const Quaternion*, const Quaternion*, float, Quaternion*)
{
	/*
	psq_l    f0, 0(r3), 0, qr0
	psq_l    f3, 0(r4), 0, qr0
	psq_l    f2, 8(r3), 0, qr0
	ps_mul   f4, f0, f3
	psq_l    f3, 8(r4), 0, qr0
	lfd      f0, lbl_80516728@sda21(r2)
	ps_madd  f4, f2, f3, f4
	ps_sum0  f4, f4, f4, f4
	fcmpo    cr0, f4, f0
	bge      lbl_80035044
	lfs      f3, 0(r3)
	fneg     f4, f1
	lfs      f0, 0(r4)
	lfs      f5, 4(r3)
	fadds    f1, f3, f0
	lfs      f0, 4(r4)
	lfs      f6, 8(r3)
	fadds    f2, f5, f0
	lfs      f0, 8(r4)
	fmadds   f3, f4, f1, f3
	fadds    f1, f6, f0
	lfs      f7, 0xc(r3)
	lfs      f0, 0xc(r4)
	fmadds   f2, f4, f2, f5
	stfs     f3, 0(r5)
	fadds    f0, f7, f0
	fmadds   f1, f4, f1, f6
	stfs     f2, 4(r5)
	fmadds   f0, f4, f0, f7
	stfs     f1, 8(r5)
	stfs     f0, 0xc(r5)
	blr

lbl_80035044:
	lfs      f3, 0(r3)
	fneg     f4, f1
	lfs      f0, 0(r4)
	lfs      f5, 4(r3)
	fsubs    f1, f3, f0
	lfs      f0, 4(r4)
	lfs      f6, 8(r3)
	fsubs    f2, f5, f0
	lfs      f0, 8(r4)
	fmadds   f3, f4, f1, f3
	fsubs    f1, f6, f0
	lfs      f7, 0xc(r3)
	lfs      f0, 0xc(r4)
	fmadds   f2, f4, f2, f5
	stfs     f3, 0(r5)
	fsubs    f0, f7, f0
	fmadds   f1, f4, f1, f6
	stfs     f2, 4(r5)
	fmadds   f0, f4, f0, f7
	stfs     f1, 8(r5)
	stfs     f0, 0xc(r5)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000148
 */
void JMALagrangeInterpolation(int, float*, float*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JMAFastVECMag(const Vec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JMAFastVECNormalize(const Vec*, Vec*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void JMAVECScaleAdd(const Vec*, const Vec*, Vec*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JMAVECLerp(const Vec*, const Vec*, Vec*, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8003509C
 * Size:	000064
 */
void JMAMTXApplyScale(const float (*)[4], float (*)[4], float, float, float)
{
	/*
	fmr      f6, f1
	psq_l    f1, 0(r3), 0, qr0
	fmr      f0, f2
	psq_l    f2, 16(r3), 0, qr0
	fmr      f5, f3
	lfs      f4, lbl_80516730@sda21(r2)
	ps_merge00 f0, f6, f0
	psq_l    f3, 32(r3), 0, qr0
	ps_mul   f1, f1, f0
	ps_mul   f2, f2, f0
	ps_mul   f3, f3, f0
	psq_st   f1, 0(r4), 0, qr0
	ps_merge00 f0, f5, f4
	psq_l    f1, 8(r3), 0, qr0
	psq_st   f2, 16(r4), 0, qr0
	psq_l    f2, 24(r3), 0, qr0
	ps_mul   f1, f1, f0
	psq_st   f3, 32(r4), 0, qr0
	psq_l    f3, 40(r3), 0, qr0
	ps_mul   f2, f2, f0
	psq_st   f1, 8(r4), 0, qr0
	ps_mul   f3, f3, f0
	psq_st   f2, 24(r4), 0, qr0
	psq_st   f3, 40(r4), 0, qr0
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void JMAMTXScaleApply(const float (*)[4], float (*)[4], float, float, float)
{
	// UNUSED FUNCTION
}
