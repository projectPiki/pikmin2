#include "sysMath.h"
#include "types.h"
#include "Vector3.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_sysMath_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_80499648
    lbl_80499648:
        .asciz "sysMath.cpp"
    .global lbl_80499654
    lbl_80499654:
        .asciz "acosf %f\n"
        .skip 0x2

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global "zero__10Vector3<f>"
    "zero__10Vector3<f>":
        .skip 0xC

    .section .sbss # 0x80514D80 - 0x80516360
    .global "__init__zero__10Vector3<f>"
    "__init__zero__10Vector3<f>":
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80520268
    lbl_80520268:
        .float -325.9493
    .global lbl_8052026C
    lbl_8052026C:
        .float 325.9493
    .global lbl_80520270
    lbl_80520270:
        .float 0.0
    .global lbl_80520274
    lbl_80520274:
        .float -1.0
    .global lbl_80520278
    lbl_80520278:
        .float 1.0
    .global lbl_8052027C
    lbl_8052027C:
        .float 3.1415927
    .global lbl_80520280
    lbl_80520280:
        .float 1023.5
    .global lbl_80520284
    lbl_80520284:
        .float 1.5707964
    .global lbl_80520288
    lbl_80520288:
        .float 0.5
    .global lbl_8052028C
    lbl_8052028C:
        .float 1.5
    .global lbl_80520290
    lbl_80520290:
        .float -1.5
    .global lbl_80520294
    lbl_80520294:
        .float 2.0
    .global lbl_80520298
    lbl_80520298:
        .float 4.5
    .global lbl_8052029C
    lbl_8052029C:
        .float 5.0
    .global lbl_805202A0
    lbl_805202A0:
        .float -4.5
    .global lbl_805202A4
    lbl_805202A4:
        .float 4.0
    .global lbl_805202A8
    lbl_805202A8:
        .float 6.2831855
    .global lbl_805202AC
    lbl_805202AC:
        .float 0.01
    .global lbl_805202B0
    lbl_805202B0:
        .double 0.0
    .global lbl_805202B8
    lbl_805202B8:
        .4byte 0x3727C5AC
    .global lbl_805202BC
    lbl_805202BC:
        .float 0.25
    .global lbl_805202C0
    lbl_805202C0:
        .float 32768.0
    .global lbl_805202C4
    lbl_805202C4:
        .float -32768.0
*/

extern const float lbl_80520268;  //-325.9493
extern const float lbl_8052026C;  // 325.9493
extern const float lbl_80520270;  // 0.0
extern const float lbl_80520274;  // -1.0
extern const float lbl_80520278;  // 1.0
extern const float lbl_8052027C;  // 3.1415926 OR PI
extern const float lbl_80520280;  // 1023.5
extern const float lbl_80520284;  // 1.5707964 OR HALF PI
extern const float lbl_80520288;  // 0.5
extern const float lbl_8052028C;  // 1.5
extern const float lbl_80520290;  // -1.5
extern const float lbl_80520294;  // 2.0
extern const float lbl_80520298;  // 4.5
extern const float lbl_8052029C;  // 5.0
extern const float lbl_805202A0;  // -4.5
extern const float lbl_805202A4;  // 4.0
extern const float lbl_805202A8;  // 6.2831855 OR TAU / 2Pi
extern const float lbl_805202AC;  // 0.0099999998 OR 0.01
extern const double lbl_805202B0; // 0.0

// FROM ANOTHER FILE.. WTF?
extern const float lbl_805201B0;

// TODO: CRSplineTangent, angDist, Matrix3f::calcEigenMatrix

float pikmin2_sinf(float x)
{
	if (x < lbl_80520270) {
		return -JMath::sincosTable_.m_table[((int)(x * lbl_80520268) & 0x7ffU)].first;
	}
	return JMath::sincosTable_.m_table[((int)(x * lbl_8052026C) & 0x7ffU)].first;
}

/*
 * --INFO--
 * Address:	80411798
 * Size:	000044
 */
float pikmin2_cosf(float x)
{
	if (x < lbl_80520270) {
		x = -x;
	}
	return JMath::sincosTable_.m_table[((int)(x * lbl_8052026C) & 0x7ffU)].second;
}

/*
 * --INFO--
 * Address:	804117DC
 * Size:	000028
 */
float pikmin2_atan2f(float x, float y) { return JMath::atanTable_.atan2_(x, y); }

/*
 * --INFO--
 * Address:	80411804
 * Size:	000018
 * The asm seems necessary to match, but why would they do this?
 * Perhaps they didn't want to call the intrinsic.
 */
float pikmin2_sqrtf(register float x)
{
	if (x > lbl_80520270) {
		register float reg_f0;
		asm {
            frsqrte reg_f0, x
		}
		return reg_f0 * x;
	}
	return x;
}

/*
 * --INFO--
 * Address:	8041181C
 * Size:	00003C
 */

// thanks to GibHaltmannKill for the volatile idea

float qdist2(float x1, float y1, float x2, float y2)
{

	float xdiff = (x2 - x1);
	float ydiff = (y2 - y1);

	float dist = ((xdiff * xdiff) + (ydiff * ydiff));
	if (dist > lbl_80520270) {
		volatile float calcDist = dist * (__frsqrte(dist));
		dist                    = calcDist;
	}
	return dist;
}

extern float lbl_805201D4; // 0.0

/*
 * --INFO--
 * Address:	80411858
 * Size:	0000F4
 */
asm void CRSplineTangent(float, Vector3f*)
{
	// clang-format off
	nofralloc
     stwu      r1, -0x20(r1)
     stfd      f31, 0x10(r1)
     psq_st    f31,0x18(r1),0,0
     lfs       f0, lbl_80520294
     fmuls     f10, f1, f1
     lfs       f2, lbl_8052029C
     fmuls     f5, f0, f1
     lfs       f6, lbl_80520290
     lfs       f0, lbl_805202A4
     fmuls     f3, f2, f1
     lfs       f4, lbl_80520298
     fmadds    f5, f6, f10, f5
     lfs       f7, lbl_80520288
     fmuls     f0, f0, f1
     lfs       f2, lbl_805202A0
     fmsubs    f12, f4, f10, f3
     fsubs     f11, f5, f7
     fmadds    f6, f2, f10, f0
     lfs       f2, 0x0(r4)
     lfs       f0, 0xC(r4)
     lfs       f5, 0x4(r4)
     fmuls     f3, f2, f11
     fmuls     f2, f0, f12
     lfs       f4, 0x10(r4)
     fadds     f13, f7, f6
     lfs       f8, lbl_8052028C
     fmuls     f6, f5, f11
     lfs       f0, 0x18(r4)
     fmuls     f5, f4, f12
     lfs       f9, 0x8(r4)
     lfs       f7, 0x14(r4)
     fmsubs    f31, f8, f10, f1
     lfs       f4, 0x1C(r4)
     fadds     f2, f3, f2
     fmuls     f1, f0, f13
     lfs       f0, 0x24(r4)
     lfs       f8, 0x20(r4)
     fmuls     f10, f9, f11
     fmuls     f9, f7, f12
     lfs       f3, 0x28(r4)
     lfs       f7, 0x2C(r4)
     fadds     f5, f6, f5
     fmuls     f4, f4, f13
     fadds     f1, f2, f1
     fmuls     f0, f0, f31
     fadds     f9, f10, f9
     fmuls     f6, f8, f13
     fadds     f0, f1, f0
     fadds     f2, f5, f4
     fmuls     f1, f3, f31
     fadds     f3, f9, f6
     stfs      f0, 0x0(r3)
     fmuls     f0, f7, f31
     fadds     f1, f2, f1
     fadds     f0, f3, f0
     stfs      f1, 0x4(r3)
     stfs      f0, 0x8(r3)
     psq_l     f31,0x18(r1),0,0
     lfd       f31, 0x10(r1)
     addi      r1, r1, 0x20
     blr
	// clang-format on
}

#include "BoundBox.h"

/*
 * --INFO--
 * Address:	8041194C
 * Size:	000044
 */
void BoundBox::read(Stream& stream)
{
	m_max.read(stream);
	m_min.read(stream);
}

/*
 * --INFO--
 * Address:	80411990
 * Size:	000058
 */
void Vector3f::read(Stream& stream)
{
	x = stream.readFloat();
	y = stream.readFloat();
	z = stream.readFloat();
}

/*
 * --INFO--
 * Address:	804119E8
 * Size:	000058
 */
void Vector3f::write(Stream& stream)
{
	stream.writeFloat(x);
	stream.writeFloat(y);
	stream.writeFloat(z);
}

#include "Plane.h"

/*
 * --INFO--
 * Address:	80411A40
 * Size:	000064
 */
void Plane::write(Stream& stream)
{
	stream.writeFloat(a);
	stream.writeFloat(b);
	stream.writeFloat(c);
	stream.writeFloat(d);
}

/*
 * --INFO--
 * Address:	80411AA4
 * Size:	000064
 */
void Plane::read(Stream& stream)
{
	a = stream.readFloat();
	b = stream.readFloat();
	c = stream.readFloat();
	d = stream.readFloat();
}

#include "Color4.h"

/*
 * --INFO--
 * Address:	80411B08
 * Size:	000064
 */
void Color4::write(Stream& stream)
{
	stream.writeByte(r);
	stream.writeByte(g);
	stream.writeByte(b);
	stream.writeByte(a);
}

/*
 * --INFO--
 * Address:	80411B6C
 * Size:	000064
 */
void Color4::read(Stream& stream)
{
	r = stream.readByte();
	g = stream.readByte();
	b = stream.readByte();
	a = stream.readByte();
}

/*
 * --INFO--
 * Address:	80411BD0
 * Size:	00002C
 */
// NOTE: angle needs to be in radians!
float roundAng(float angle)
{
	// if < 0, add 2PI
	if (angle < lbl_80520270) {
		angle += lbl_805202A8;
	}

	// if > 2PI, subtract it
	if (angle >= lbl_805202A8) {
		angle -= lbl_805202A8;
	}

	return angle;
}

/*
 * --INFO--
 * Address:	80411BFC
 * Size:	000074
 */
asm float angDist(float, float)
{
	// clang-format off
	nofralloc
		fsubs f2, f1, f2
		lfs f0, lbl_80520270
		fcmpo cr0, f2, f0
		bge lbl_80411C14
		lfs f0, lbl_805202A8
		fadds f2, f2, f0
	lbl_80411C14:
		lfs f0, lbl_805202A8
		fcmpo cr0, f2, f0
		cror 2, 1, 2
		bne lbl_80411C28
		fsubs f2, f2, f0
	lbl_80411C28:
		lfs f0, lbl_8052027C
		fmr f1, f2
		fcmpo cr0, f2, f0
		cror 2, 1, 2
		bnelr
		lfs f1, lbl_805202A8
		lfs f0, lbl_80520270
		fsubs f2, f1, f2
		fcmpo cr0, f2, f0
		bge lbl_80411C54
		fadds f2, f2, f1
	lbl_80411C54:
		lfs f0, lbl_805202A8
		fcmpo cr0, f2, f0
		cror 2, 1, 2
		bne lbl_80411C68
		fsubs f2, f2, f0
	lbl_80411C68:
		fneg f1, f2
		blr
	// clang-format on
}

#include "Matrix3f.h"

/*
 * --INFO--
 * Address:	80411C70
 * Size:	000030
 */
void Matrix3f::makeIdentity()
{
	// Identity Matrix
	// [1, 0, 0]
	// [0, 1, 0]
	// [0, 0, 1]
	// [0, 0], [1, 1], [2, 2] = 1, else = 0

	// lbl_80520270 = 0
	// lbl_80520278 = 1
	m_matrix[0][0] = lbl_80520278;

	m_matrix[0][1] = lbl_80520270;
	m_matrix[0][2] = lbl_80520270;
	m_matrix[1][0] = lbl_80520270;

	m_matrix[1][1] = lbl_80520278;

	m_matrix[1][2] = lbl_80520270;
	m_matrix[2][0] = lbl_80520270;
	m_matrix[2][1] = lbl_80520270;

	m_matrix[2][2] = lbl_80520278;
}

/*
 * --INFO--
 * Address:	80411CA0
 * Size:	000728
 */
// Massive fuckoff function, not doing this today, tomorrow, or ever.
asm void Matrix3f::calcEigenMatrix(Matrix3f&, Matrix3f&)
{
	// clang-format off
	nofralloc
		stwu r1, -0x190(r1)
		lfs f2, lbl_80520278
		stmw r16, 0x150(r1)
		addi r17, r1, 0x128
		lfs f1, lbl_80520270
		li r18, 0
		lfs f0, lbl_805202AC
		lwz r6, 0(r3)
		lwz r0, 4(r3)
		stw r6, 0(r4)
		stw r0, 4(r4)
		lwz r6, 8(r3)
		lwz r0, 0xc(r3)
		stw r6, 8(r4)
		stw r0, 0xc(r4)
		lwz r6, 0x10(r3)
		lwz r0, 0x14(r3)
		stw r6, 0x10(r4)
		stw r0, 0x14(r4)
		lwz r6, 0x18(r3)
		lwz r0, 0x1c(r3)
		stw r6, 0x18(r4)
		stw r0, 0x1c(r4)
		lwz r0, 0x20(r3)
		stw r0, 0x20(r4)
		stfs f2, 0(r5)
		stfs f1, 4(r5)
		stfs f1, 8(r5)
		stfs f1, 0xc(r5)
		stfs f2, 0x10(r5)
		stfs f1, 0x14(r5)
		stfs f1, 0x18(r5)
		stfs f1, 0x1c(r5)
		stfs f2, 0x20(r5)
	lbl_80411D28:
		li r0, 3
		mr r6, r4
		lfs f2, lbl_80520270
		li r3, 0
		mtctr r0
	lbl_80411D3C:
		li r0, 0
		cmpw r3, r0
		beq lbl_80411D50
		lfs f1, 0(r6)
		fadds f2, f2, f1
	lbl_80411D50:
		li r0, 1
		cmpw r3, r0
		beq lbl_80411D64
		lfs f1, 4(r6)
		fadds f2, f2, f1
	lbl_80411D64:
		li r0, 2
		cmpw r3, r0
		beq lbl_80411D78
		lfs f1, 8(r6)
		fadds f2, f2, f1
	lbl_80411D78:
		addi r6, r6, 0xc
		addi r3, r3, 1
		bdnz lbl_80411D3C
		fabs f1, f2
		frsp f1, f1
		fcmpo cr0, f1, f0
		bge lbl_80411DF4
		lfs f1, lbl_80520270
		fcmpu cr0, f1, f2
		beq lbl_80411DEC
		li r0, 3
		mr r6, r4
		li r3, 0
		mtctr r0
	lbl_80411DB0:
		li r0, 0
		cmpw r3, r0
		beq lbl_80411DC0
		stfs f1, 0(r6)
	lbl_80411DC0:
		li r0, 1
		cmpw r3, r0
		beq lbl_80411DD0
		stfs f1, 4(r6)
	lbl_80411DD0:
		li r0, 2
		cmpw r3, r0
		beq lbl_80411DE0
		stfs f1, 8(r6)
	lbl_80411DE0:
		addi r6, r6, 0xc
		addi r3, r3, 1
		bdnz lbl_80411DB0
	lbl_80411DEC:
		li r0, 1
		b lbl_80411DF8
	lbl_80411DF4:
		li r0, 0
	lbl_80411DF8:
		clrlwi. r0, r0, 0x18
		bne lbl_804123BC
		li r24, 0
		mr r19, r4
		mr r25, r17
		li r3, 0
		mr r23, r24
	lbl_80411E14:
		addi r6, r3, 1
		addi r27, r1, 0x128
		mulli r21, r6, 0xc
		slwi r22, r6, 2
		add r28, r19, r22
		add r26, r25, r22
		add r27, r27, r21
		b lbl_8041238C
	lbl_80411E34:
		lfs f1, 0(r28)
		fcmpo cr0, f1, f0
		blt lbl_80412374
		lwz r29, 0(r4)
		addi r30, r1, 0x128
		lwz r20, 4(r4)
		lwz r12, 8(r4)
		lwz r11, 0xc(r4)
		lwz r10, 0x10(r4)
		lwz r9, 0x14(r4)
		lwz r8, 0x18(r4)
		lwz r7, 0x1c(r4)
		lwz r0, 0x20(r4)
		stw r29, 0x128(r1)
		lfs f3, lbl_80520294
		stw r20, 0x12c(r1)
		lfs f2, lbl_80520270
		stw r12, 0x130(r1)
		stw r11, 0x134(r1)
		stw r10, 0x138(r1)
		stw r9, 0x13c(r1)
		stw r8, 0x140(r1)
		stw r7, 0x144(r1)
		stw r0, 0x148(r1)
		lfs f1, 0(r26)
		lfsx f5, r27, r22
		lfsx f4, r25, r24
		fmuls f1, f3, f1
		fsubs f3, f5, f4
		fdivs f3, f3, f1
		fcmpo cr0, f3, f2
		ble lbl_80411EDC
		lfs f1, lbl_80520278
		fmadds f4, f3, f3, f1
		fcmpo cr0, f4, f2
		ble lbl_80411ECC
		frsqrte f1, f4
		fmuls f4, f1, f4
	lbl_80411ECC:
		fadds f1, f3, f4
		lfs f2, lbl_80520278
		fdivs f3, f2, f1
		b lbl_80411F04
	lbl_80411EDC:
		lfs f1, lbl_80520278
		fmadds f4, f3, f3, f1
		fcmpo cr0, f4, f2
		ble lbl_80411EF4
		frsqrte f1, f4
		fmuls f4, f1, f4
	lbl_80411EF4:
		fneg f1, f3
		lfs f2, lbl_80520274
		fadds f1, f1, f4
		fdivs f3, f2, f1
	lbl_80411F04:
		lfs f2, lbl_80520278
		lfs f1, lbl_80520270
		fmadds f4, f3, f3, f2
		fcmpo cr0, f4, f1
		ble lbl_80411F20
		frsqrte f1, f4
		fmuls f4, f1, f4
	lbl_80411F20:
		lfs f2, lbl_80520278
		add r9, r30, r23
		lfs f8, lbl_80520270
		add r10, r30, r21
		fdivs f4, f2, f4
		stfs f2, 0x128(r1)
		li r0, 3
		mr r8, r5
		stfs f8, 0x12c(r1)
		addi r7, r1, 0x50
		fmuls f3, f3, f4
		stfs f8, 0x130(r1)
		stfs f8, 0x134(r1)
		fneg f1, f3
		stfs f2, 0x138(r1)
		stfs f8, 0x13c(r1)
		stfs f8, 0x140(r1)
		stfs f8, 0x144(r1)
		stfs f2, 0x148(r1)
		stfsx f4, r9, r24
		stfsx f4, r10, r22
		stfsx f3, r9, r22
		stfsx f1, r10, r24
		mtctr r0
	lbl_80411F80:
		stfs f8, 0(r7)
		lfs f7, 0(r8)
		lfs f6, 0x128(r1)
		lfs f1, 0(r7)
		lfs f5, 4(r8)
		fmadds f1, f7, f6, f1
		lfs f3, 8(r8)
		lfs f4, 0x134(r1)
		addi r8, r8, 0xc
		lfs f2, 0x140(r1)
		stfs f1, 0(r7)
		lfs f6, 0x12c(r1)
		lfs f1, 0(r7)
		fmadds f1, f5, f4, f1
		lfs f4, 0x138(r1)
		stfs f1, 0(r7)
		lfs f1, 0(r7)
		fmadds f1, f3, f2, f1
		lfs f2, 0x144(r1)
		stfs f1, 0(r7)
		stfs f8, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f7, f6, f1
		lfs f6, 0x130(r1)
		stfs f1, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f5, f4, f1
		lfs f4, 0x13c(r1)
		stfs f1, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f3, f2, f1
		lfs f2, 0x148(r1)
		stfs f1, 4(r7)
		stfs f8, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f7, f6, f1
		stfs f1, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f5, f4, f1
		stfs f1, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f3, f2, f1
		stfs f1, 8(r7)
		addi r7, r7, 0xc
		bdnz lbl_80411F80
		lwz r30, 0x50(r1)
		li r16, 3
		lwz r31, 0x54(r1)
		addi r20, r1, 0xe0
		stw r30, 0(r5)
		addi r29, r1, 0x2c
		lwz r12, 0x58(r1)
		stw r31, 4(r5)
		lwz r11, 0x5c(r1)
		stw r12, 8(r5)
		lwz r10, 0x60(r1)
		stw r11, 0xc(r5)
		lwz r9, 0x64(r1)
		stw r10, 0x10(r5)
		lwz r8, 0x68(r1)
		stw r9, 0x14(r5)
		lfs f3, 0x128(r1)
		lwz r7, 0x6c(r1)
		lfs f2, 0x134(r1)
		lwz r0, 0x70(r1)
		lfs f1, 0x140(r1)
		stw r8, 0x18(r5)
		lfs f8, lbl_80520270
		stfs f3, 0xe0(r1)
		lfs f3, 0x12c(r1)
		stfs f2, 0xe4(r1)
		lfs f2, 0x138(r1)
		stfs f1, 0xe8(r1)
		lfs f1, 0x144(r1)
		stw r7, 0x1c(r5)
		stfs f3, 0xec(r1)
		lfs f3, 0x130(r1)
		stfs f2, 0xf0(r1)
		lfs f2, 0x13c(r1)
		stfs f1, 0xf4(r1)
		lfs f1, 0x148(r1)
		stw r30, 0xbc(r1)
		stw r31, 0xc0(r1)
		stw r12, 0xc4(r1)
		stw r11, 0xc8(r1)
		stw r10, 0xcc(r1)
		stw r9, 0xd0(r1)
		stw r8, 0xd4(r1)
		stw r7, 0xd8(r1)
		stw r0, 0xdc(r1)
		stw r30, 0x104(r1)
		stw r31, 0x108(r1)
		stw r12, 0x10c(r1)
		stw r11, 0x110(r1)
		stw r10, 0x114(r1)
		stw r9, 0x118(r1)
		stw r8, 0x11c(r1)
		stw r7, 0x120(r1)
		stw r0, 0x124(r1)
		stw r0, 0x20(r5)
		stfs f3, 0xf8(r1)
		stfs f2, 0xfc(r1)
		stfs f1, 0x100(r1)
		mtctr r16
	lbl_80412120:
		stfs f8, 0(r29)
		lfs f7, 0(r20)
		lfs f6, 0(r4)
		lfs f1, 0(r29)
		lfs f5, 4(r20)
		fmadds f1, f7, f6, f1
		lfs f3, 8(r20)
		lfs f4, 0xc(r4)
		addi r20, r20, 0xc
		lfs f2, 0x18(r4)
		stfs f1, 0(r29)
		lfs f6, 4(r4)
		lfs f1, 0(r29)
		fmadds f1, f5, f4, f1
		lfs f4, 0x10(r4)
		stfs f1, 0(r29)
		lfs f1, 0(r29)
		fmadds f1, f3, f2, f1
		lfs f2, 0x1c(r4)
		stfs f1, 0(r29)
		stfs f8, 4(r29)
		lfs f1, 4(r29)
		fmadds f1, f7, f6, f1
		lfs f6, 8(r4)
		stfs f1, 4(r29)
		lfs f1, 4(r29)
		fmadds f1, f5, f4, f1
		lfs f4, 0x14(r4)
		stfs f1, 4(r29)
		lfs f1, 4(r29)
		fmadds f1, f3, f2, f1
		lfs f2, 0x20(r4)
		stfs f1, 4(r29)
		stfs f8, 8(r29)
		lfs f1, 8(r29)
		fmadds f1, f7, f6, f1
		stfs f1, 8(r29)
		lfs f1, 8(r29)
		fmadds f1, f5, f4, f1
		stfs f1, 8(r29)
		lfs f1, 8(r29)
		fmadds f1, f3, f2, f1
		stfs f1, 8(r29)
		addi r29, r29, 0xc
		bdnz lbl_80412120
		lwz r31, 0x2c(r1)
		li r16, 3
		lwz r30, 0x30(r1)
		addi r7, r1, 8
		lwz r29, 0x34(r1)
		addi r8, r1, 0x104
		lwz r20, 0x38(r1)
		lwz r12, 0x3c(r1)
		lwz r11, 0x40(r1)
		lwz r10, 0x44(r1)
		lwz r9, 0x48(r1)
		lwz r0, 0x4c(r1)
		stw r31, 0x98(r1)
		lfs f8, lbl_80520270
		stw r30, 0x9c(r1)
		stw r29, 0xa0(r1)
		stw r20, 0xa4(r1)
		stw r12, 0xa8(r1)
		stw r11, 0xac(r1)
		stw r10, 0xb0(r1)
		stw r9, 0xb4(r1)
		stw r0, 0xb8(r1)
		stw r31, 0x104(r1)
		stw r30, 0x108(r1)
		stw r29, 0x10c(r1)
		stw r20, 0x110(r1)
		stw r12, 0x114(r1)
		stw r11, 0x118(r1)
		stw r10, 0x11c(r1)
		stw r9, 0x120(r1)
		stw r0, 0x124(r1)
		mtctr r16
	lbl_80412254:
		stfs f8, 0(r7)
		lfs f7, 0(r8)
		lfs f6, 0x128(r1)
		lfs f1, 0(r7)
		lfs f5, 4(r8)
		fmadds f1, f7, f6, f1
		lfs f3, 8(r8)
		lfs f4, 0x134(r1)
		addi r8, r8, 0xc
		lfs f2, 0x140(r1)
		stfs f1, 0(r7)
		lfs f6, 0x12c(r1)
		lfs f1, 0(r7)
		fmadds f1, f5, f4, f1
		lfs f4, 0x138(r1)
		stfs f1, 0(r7)
		lfs f1, 0(r7)
		fmadds f1, f3, f2, f1
		lfs f2, 0x144(r1)
		stfs f1, 0(r7)
		stfs f8, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f7, f6, f1
		lfs f6, 0x130(r1)
		stfs f1, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f5, f4, f1
		lfs f4, 0x13c(r1)
		stfs f1, 4(r7)
		lfs f1, 4(r7)
		fmadds f1, f3, f2, f1
		lfs f2, 0x148(r1)
		stfs f1, 4(r7)
		stfs f8, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f7, f6, f1
		stfs f1, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f5, f4, f1
		stfs f1, 8(r7)
		lfs f1, 8(r7)
		fmadds f1, f3, f2, f1
		stfs f1, 8(r7)
		addi r7, r7, 0xc
		bdnz lbl_80412254
		lwz r20, 8(r1)
		lwz r16, 0xc(r1)
		stw r20, 0(r4)
		lwz r12, 0x10(r1)
		stw r16, 4(r4)
		lwz r11, 0x14(r1)
		stw r12, 8(r4)
		lwz r10, 0x18(r1)
		stw r11, 0xc(r4)
		lwz r9, 0x1c(r1)
		stw r10, 0x10(r4)
		lwz r8, 0x20(r1)
		stw r9, 0x14(r4)
		lwz r7, 0x24(r1)
		stw r8, 0x18(r4)
		lwz r0, 0x28(r1)
		stw r7, 0x1c(r4)
		stw r20, 0x74(r1)
		stw r16, 0x78(r1)
		stw r12, 0x7c(r1)
		stw r11, 0x80(r1)
		stw r10, 0x84(r1)
		stw r9, 0x88(r1)
		stw r8, 0x8c(r1)
		stw r7, 0x90(r1)
		stw r0, 0x94(r1)
		stw r0, 0x20(r4)
	lbl_80412374:
		addi r28, r28, 4
		addi r22, r22, 4
		addi r27, r27, 0xc
		addi r26, r26, 4
		addi r21, r21, 0xc
		addi r6, r6, 1
	lbl_8041238C:
		cmpwi r6, 3
		blt lbl_80411E34
		addi r3, r3, 1
		addi r25, r25, 0xc
		cmpwi r3, 2
		addi r24, r24, 4
		addi r23, r23, 0xc
		addi r19, r19, 0xc
		blt lbl_80411E14
		addi r18, r18, 1
		cmpwi r18, 0x32
		blt lbl_80411D28
	lbl_804123BC:
		lmw r16, 0x150(r1)
		addi r1, r1, 0x190
		blr
	// clang-format on
}

#include "Quat.h"

/*
 * --INFO--
 * Address:	804123C8
 * Size:	000018
 */
Quat::Quat()
{
	w = lbl_80520270;

	x = lbl_80520270;
	y = lbl_80520270;
	z = lbl_80520270;
}

/*
 * --INFO--
 * Address:	804123E0
 * Size:	000020
 */
Quat::Quat(float _w, Vector3f vec)
{
	w = _w;
	x = vec.x;
	y = vec.y;
	z = vec.z;
}

///*
// * --INFO--
// * Address:	80412400
// * Size:	0000FC
// */
// void operator*(Quat&, Quat&)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x50(r1)
//      stfd      f31, 0x40(r1)
//      psq_st    f31,0x48(r1),0,0
//      stfd      f30, 0x30(r1)
//      psq_st    f30,0x38(r1),0,0
//      lfs       f9, 0xC(r4)
//      lfs       f31, 0x8(r5)
//      lfs       f13, 0xC(r5)
//      lfs       f12, 0x0(r4)
//      fmuls     f0, f9, f31
//      lfs       f10, 0x8(r4)
//      lfs       f30, 0x4(r5)
//      fmuls     f2, f31, f12
//      lfs       f8, 0x0(r5)
//      fmsubs    f4, f10, f13, f0
//      lfs       f11, 0x4(r4)
//      fmuls     f3, f30, f12
//      fmuls     f0, f10, f30
//      fmuls     f1, f11, f13
//      lfs       f7, 0x1F10(r2)
//      fmuls     f6, f10, f31
//      fadds     f5, f4, f3
//      stfs      f7, 0x18(r1)
//      fmsubs    f3, f9, f30, f1
//      fmuls     f4, f11, f8
//      stfs      f7, 0x1C(r1)
//      fmadds    f6, f11, f30, f6
//      fmsubs    f1, f11, f31, f0
//      stfs      f7, 0x20(r1)
//      fmuls     f0, f13, f12
//      fadds     f4, f5, f4
//      stfs      f7, 0x14(r1)
//      fmadds    f5, f9, f13, f6
//      fadds     f3, f3, f2
//      fmuls     f2, f10, f8
//      stfs      f4, 0x18(r1)
//      fmsubs    f4, f12, f8, f5
//      lwz       r0, 0x18(r1)
//      fadds     f1, f1, f0
//      fmuls     f0, f9, f8
//      fadds     f2, f3, f2
//      stw       r0, 0x8(r1)
//      fadds     f1, f1, f0
//      stfs      f4, 0x0(r3)
//      lfs       f0, 0x8(r1)
//      stfs      f2, 0x1C(r1)
//      stfs      f1, 0x20(r1)
//      lwz       r4, 0x1C(r1)
//      lwz       r0, 0x20(r1)
//      stw       r4, 0xC(r1)
//      stw       r0, 0x10(r1)
//      lfs       f1, 0xC(r1)
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x10(r1)
//      stfs      f1, 0x8(r3)
//      stfs      f4, 0x14(r1)
//      stfs      f0, 0xC(r3)
//      psq_l     f31,0x48(r1),0,0
//      lfd       f31, 0x40(r1)
//      psq_l     f30,0x38(r1),0,0
//      lfd       f30, 0x30(r1)
//      addi      r1, r1, 0x50
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	804124FC
// * Size:	000264
// */
// void Quat::set(Vector3f&)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x90(r1)
//      mflr      r0
//      lfs       f0, 0x1F10(r2)
//      stw       r0, 0x94(r1)
//      lfs       f1, 0x1F28(r2)
//      stw       r31, 0x8C(r1)
//      mr        r31, r4
//      stw       r30, 0x88(r1)
//      mr        r30, r3
//      stfs      f0, 0x48(r1)
//      stfs      f0, 0x4C(r1)
//      stfs      f0, 0x50(r1)
//      stfs      f0, 0x54(r1)
//      stfs      f0, 0x38(r1)
//      stfs      f0, 0x3C(r1)
//      stfs      f0, 0x40(r1)
//      stfs      f0, 0x44(r1)
//      stfs      f0, 0x28(r1)
//      stfs      f0, 0x2C(r1)
//      stfs      f0, 0x30(r1)
//      stfs      f0, 0x34(r1)
//      lfs       f0, 0x0(r4)
//      fmuls     f1, f1, f0
//      bl        -0x3432A4
//      lfs       f3, 0x1F28(r2)
//      frsp      f1, f1
//      lfs       f2, 0x0(r31)
//      addi      r3, r1, 0x48
//      lfs       f0, 0x1F10(r2)
//      fmuls     f2, f3, f2
//      fcmpo     cr0, f2, f0
//      bge-      .loc_0xAC
//      lfs       f0, 0x1F08(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f2, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x58(r1)
//      lwz       r0, 0x5C(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r4, r0
//      fneg      f2, f0
//      b         .loc_0xD0
//
//    .loc_0xAC:
//      lfs       f0, 0x1F0C(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f2, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x60(r1)
//      lwz       r0, 0x64(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f2, r4, r0
//
//    .loc_0xD0:
//      lfs       f3, 0x1F10(r2)
//      fmr       f4, f3
//      bl        0x1B0
//      lfs       f1, 0x1F28(r2)
//      lfs       f0, 0x4(r31)
//      fmuls     f1, f1, f0
//      bl        -0x343330
//      lfs       f3, 0x1F28(r2)
//      frsp      f1, f1
//      lfs       f0, 0x4(r31)
//      addi      r3, r1, 0x38
//      lfs       f2, 0x1F10(r2)
//      fmuls     f3, f3, f0
//      fcmpo     cr0, f3, f2
//      bge-      .loc_0x138
//      lfs       f0, 0x1F08(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f3, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x68(r1)
//      lwz       r0, 0x6C(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r4, r0
//      fneg      f3, f0
//      b         .loc_0x15C
//
//    .loc_0x138:
//      lfs       f0, 0x1F0C(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f3, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x70(r1)
//      lwz       r0, 0x74(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f3, r4, r0
//
//    .loc_0x15C:
//      lfs       f4, 0x1F10(r2)
//      bl        0x128
//      lfs       f1, 0x1F28(r2)
//      lfs       f0, 0x8(r31)
//      fmuls     f1, f1, f0
//      bl        -0x3433B8
//      lfs       f3, 0x1F28(r2)
//      frsp      f1, f1
//      lfs       f0, 0x8(r31)
//      addi      r3, r1, 0x28
//      lfs       f2, 0x1F10(r2)
//      fmuls     f4, f3, f0
//      fmr       f3, f2
//      fcmpo     cr0, f4, f2
//      bge-      .loc_0x1C4
//      lfs       f0, 0x1F08(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f4, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x78(r1)
//      lwz       r0, 0x7C(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r4, r0
//      fneg      f4, f0
//      b         .loc_0x1E8
//
//    .loc_0x1C4:
//      lfs       f0, 0x1F0C(r2)
//      lis       r4, 0x8050
//      addi      r4, r4, 0x71A0
//      fmuls     f0, f4, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x80(r1)
//      lwz       r0, 0x84(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f4, r4, r0
//
//    .loc_0x1E8:
//      bl        0xA0
//      addi      r3, r1, 0x18
//      addi      r4, r1, 0x28
//      addi      r5, r1, 0x38
//      bl        -0x2F4
//      lfs       f0, 0x18(r1)
//      mr        r4, r30
//      addi      r3, r1, 0x8
//      addi      r5, r1, 0x48
//      stfs      f0, 0x0(r30)
//      lfs       f0, 0x1C(r1)
//      stfs      f0, 0x4(r30)
//      lfs       f0, 0x20(r1)
//      stfs      f0, 0x8(r30)
//      lfs       f0, 0x24(r1)
//      stfs      f0, 0xC(r30)
//      bl        -0x324
//      lfs       f0, 0x8(r1)
//      stfs      f0, 0x0(r30)
//      lfs       f0, 0xC(r1)
//      stfs      f0, 0x4(r30)
//      lfs       f0, 0x10(r1)
//      stfs      f0, 0x8(r30)
//      lfs       f0, 0x14(r1)
//      stfs      f0, 0xC(r30)
//      lwz       r31, 0x8C(r1)
//      lwz       r30, 0x88(r1)
//      lwz       r0, 0x94(r1)
//      mtlr      r0
//      addi      r1, r1, 0x90
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000264
// */
// void Quat::set(RPY&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	80412760
// * Size:	000024
// */
// void Quat::Quat(Quat&)
//{
//    /*
//    .loc_0x0:
//      lfs       f0, 0x0(r4)
//      stfs      f0, 0x0(r3)
//      lfs       f0, 0x4(r4)
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x8(r4)
//      stfs      f0, 0x8(r3)
//      lfs       f0, 0xC(r4)
//      stfs      f0, 0xC(r3)
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	80412784
// * Size:	000014
// */
// void Quat::set(float a, float b, float c, float d)
//{
//    w = a;
//    x = b;
//    y = c;
//    z = d;
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000020
// */
// void Quat::set(float, Vector3f&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000030
// */
// void Quat::norm()
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000034
// */
// void Quat::conjugate()
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	80412798
// * Size:	0000B4
// */
// void Quat::inverse()
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x20(r1)
//      lfs       f2, 0x1F14(r2)
//      lfs       f1, 0x8(r4)
//      lfs       f5, 0x4(r4)
//      fmuls     f0, f1, f1
//      lfs       f6, 0xC(r4)
//      fmuls     f4, f1, f2
//      lfs       f7, 0x0(r4)
//      fmuls     f3, f5, f2
//      fmadds    f1, f5, f5, f0
//      lfs       f0, 0x1F10(r2)
//      fmuls     f5, f6, f2
//      fmadds    f1, f6, f6, f1
//      fmadds    f1, f7, f7, f1
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x9C
//      lfs       f0, 0x1F18(r2)
//      fdivs     f6, f0, f1
//      fmuls     f1, f3, f6
//      fmuls     f2, f4, f6
//      fmuls     f0, f5, f6
//      stfs      f1, 0x14(r1)
//      fmuls     f1, f6, f7
//      stfs      f2, 0x18(r1)
//      lwz       r0, 0x14(r1)
//      stfs      f0, 0x1C(r1)
//      lwz       r4, 0x18(r1)
//      stw       r0, 0x8(r1)
//      lwz       r0, 0x1C(r1)
//      stw       r4, 0xC(r1)
//      lfs       f0, 0x8(r1)
//      stfs      f1, 0x0(r3)
//      lfs       f1, 0xC(r1)
//      stw       r0, 0x10(r1)
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x10(r1)
//      stfs      f1, 0x8(r3)
//      stfs      f0, 0xC(r3)
//      b         .loc_0xAC
//
//    .loc_0x9C:
//      stfs      f7, 0x0(r3)
//      stfs      f3, 0x4(r3)
//      stfs      f4, 0x8(r3)
//      stfs      f5, 0xC(r3)
//
//    .loc_0xAC:
//      addi      r1, r1, 0x20
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000128
// */
// void rotate(Quat&, Vector3f&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	8041284C
// * Size:	0000A4
// */
// void Quat::normalise()
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x20(r1)
//      lfs       f0, 0x1F10(r2)
//      lfs       f6, 0x4(r3)
//      lfs       f5, 0x8(r3)
//      fmuls     f2, f6, f6
//      lfs       f7, 0xC(r3)
//      fmuls     f1, f5, f5
//      lfs       f4, 0x0(r3)
//      fmuls     f3, f7, f7
//      fadds     f1, f2, f1
//      fmuls     f2, f4, f4
//      fadds     f1, f3, f1
//      fadds     f1, f2, f1
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x44
//      fsqrte    f0, f1
//      fmuls     f1, f0, f1
//
//    .loc_0x44:
//      lfs       f0, 0x1F18(r2)
//      fdivs     f3, f0, f1
//      fmuls     f1, f6, f3
//      fmuls     f0, f5, f3
//      fmuls     f2, f7, f3
//      stfs      f1, 0x14(r1)
//      fmuls     f1, f3, f4
//      stfs      f0, 0x18(r1)
//      lwz       r0, 0x14(r1)
//      stfs      f2, 0x1C(r1)
//      lwz       r4, 0x18(r1)
//      stw       r0, 0x8(r1)
//      lwz       r0, 0x1C(r1)
//      stw       r4, 0xC(r1)
//      lfs       f0, 0x8(r1)
//      stfs      f1, 0x0(r3)
//      lfs       f1, 0xC(r1)
//      stw       r0, 0x10(r1)
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x10(r1)
//      stfs      f1, 0x8(r3)
//      stfs      f0, 0xC(r3)
//      addi      r1, r1, 0x20
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	804128F0
// * Size:	000348
// */
// void Quat::slerp(Quat&, float, Quat&)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x60(r1)
//      mflr      r0
//      stw       r0, 0x64(r1)
//      stfd      f31, 0x50(r1)
//      psq_st    f31,0x58(r1),0,0
//      stfd      f30, 0x40(r1)
//      psq_st    f30,0x48(r1),0,0
//      stw       r31, 0x3C(r1)
//      stw       r30, 0x38(r1)
//      stw       r29, 0x34(r1)
//      stw       r28, 0x30(r1)
//      mr        r28, r3
//      mr        r29, r4
//      lfs       f2, 0x8(r3)
//      fmr       f31, f1
//      lfs       f0, 0x8(r4)
//      mr        r30, r5
//      lfs       f3, 0x4(r3)
//      fmuls     f0, f2, f0
//      lfs       f1, 0x4(r4)
//      lfs       f4, 0xC(r3)
//      lfs       f2, 0xC(r4)
//      fmadds    f1, f3, f1, f0
//      lfs       f5, 0x0(r3)
//      lfs       f3, 0x0(r4)
//      lfs       f0, 0x1F18(r2)
//      fmadds    f1, f4, f2, f1
//      fmadds    f30, f5, f3, f1
//      fcmpo     cr0, f30, f0
//      ble-      .loc_0x80
//      fmr       f30, f0
//      b         .loc_0x90
//
//    .loc_0x80:
//      lfs       f0, 0x1F14(r2)
//      fcmpo     cr0, f30, f0
//      bge-      .loc_0x90
//      fmr       f30, f0
//
//    .loc_0x90:
//      lfd       f0, 0x1F50(r2)
//      fcmpo     cr0, f30, f0
//      bge-      .loc_0xA8
//      fneg      f30, f30
//      li        r31, 0x1
//      b         .loc_0xAC
//
//    .loc_0xA8:
//      li        r31, 0
//
//    .loc_0xAC:
//      lfs       f0, 0x1F14(r2)
//      fcmpo     cr0, f30, f0
//      blt-      .loc_0xC4
//      lfs       f0, 0x1F18(r2)
//      fcmpo     cr0, f30, f0
//      ble-      .loc_0xE4
//
//    .loc_0xC4:
//      fmr       f1, f30
//      lis       r3, 0x804A
//      lis       r4, 0x804A
//      subi      r5, r4, 0x69AC
//      subi      r3, r3, 0x69B8
//      li        r4, 0x41
//      crset     6, 0x6
//      bl        -0x3E8390
//
//    .loc_0xE4:
//      lfs       f0, 0x1F18(r2)
//      fcmpo     cr0, f30, f0
//      cror      2, 0x1, 0x2
//      bne-      .loc_0xFC
//      lfs       f3, 0x1F10(r2)
//      b         .loc_0x170
//
//    .loc_0xFC:
//      lfs       f0, 0x1F14(r2)
//      fcmpo     cr0, f30, f0
//      cror      2, 0, 0x2
//      bne-      .loc_0x114
//      lfs       f3, 0x1F1C(r2)
//      b         .loc_0x170
//
//    .loc_0x114:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f30, f0
//      bge-      .loc_0x14C
//      fneg      f0, f30
//      lfs       f1, 0x1F20(r2)
//      fmuls     f1, f1, f0
//      bl        -0x350ED0
//      lis       r4, 0x8051
//      rlwinm    r0,r3,2,0,29
//      subi      r3, r4, 0x1E00
//      lfs       f0, 0x1F24(r2)
//      lfsx      f1, r3, r0
//      fadds     f3, f1, f0
//      b         .loc_0x170
//
//    .loc_0x14C:
//      lfs       f0, 0x1F20(r2)
//      fmuls     f1, f0, f30
//      bl        -0x350EF8
//      lis       r4, 0x8051
//      rlwinm    r0,r3,2,0,29
//      subi      r3, r4, 0x1E00
//      lfs       f0, 0x1F24(r2)
//      lfsx      f1, r3, r0
//      fsubs     f3, f0, f1
//
//    .loc_0x170:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f3, f0
//      bge-      .loc_0x1A8
//      lfs       f0, 0x1F08(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f3, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x8(r1)
//      lwz       r0, 0xC(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r3, r0
//      fneg      f2, f0
//      b         .loc_0x1CC
//
//    .loc_0x1A8:
//      lfs       f0, 0x1F0C(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f3, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x10(r1)
//      lwz       r0, 0x14(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f2, r3, r0
//
//    .loc_0x1CC:
//      fabs      f1, f2
//      lfs       f0, 0x1F58(r2)
//      frsp      f1, f1
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x1EC
//      lfs       f0, 0x1F18(r2)
//      fsubs     f2, f0, f31
//      b         .loc_0x2BC
//
//    .loc_0x1EC:
//      lfs       f1, 0x1F18(r2)
//      fmuls     f5, f31, f3
//      lfs       f0, 0x1F10(r2)
//      fdivs     f4, f1, f2
//      fsubs     f1, f3, f5
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x234
//      lfs       f0, 0x1F08(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f1, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x10(r1)
//      lwz       r0, 0x14(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r3, r0
//      fneg      f1, f0
//      b         .loc_0x258
//
//    .loc_0x234:
//      lfs       f0, 0x1F0C(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f1, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x8(r1)
//      lwz       r0, 0xC(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f1, r3, r0
//
//    .loc_0x258:
//      lfs       f0, 0x1F10(r2)
//      fmuls     f2, f4, f1
//      fcmpo     cr0, f5, f0
//      bge-      .loc_0x294
//      lfs       f0, 0x1F08(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f5, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x18(r1)
//      lwz       r0, 0x1C(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r3, r0
//      fneg      f0, f0
//      b         .loc_0x2B8
//
//    .loc_0x294:
//      lfs       f0, 0x1F0C(r2)
//      lis       r3, 0x8050
//      addi      r3, r3, 0x71A0
//      fmuls     f0, f5, f0
//      fctiwz    f0, f0
//      stfd      f0, 0x20(r1)
//      lwz       r0, 0x24(r1)
//      rlwinm    r0,r0,3,18,28
//      lfsx      f0, r3, r0
//
//    .loc_0x2B8:
//      fmuls     f31, f4, f0
//
//    .loc_0x2BC:
//      cmpwi     r31, 0
//      beq-      .loc_0x2C8
//      fneg      f31, f31
//
//    .loc_0x2C8:
//      lfs       f0, 0x4(r29)
//      lfs       f1, 0x4(r28)
//      fmuls     f0, f31, f0
//      fmadds    f0, f2, f1, f0
//      stfs      f0, 0x4(r30)
//      lfs       f0, 0x8(r29)
//      lfs       f1, 0x8(r28)
//      fmuls     f0, f31, f0
//      fmadds    f0, f2, f1, f0
//      stfs      f0, 0x8(r30)
//      lfs       f0, 0xC(r29)
//      lfs       f1, 0xC(r28)
//      fmuls     f0, f31, f0
//      fmadds    f0, f2, f1, f0
//      stfs      f0, 0xC(r30)
//      lfs       f0, 0x0(r29)
//      lfs       f1, 0x0(r28)
//      fmuls     f0, f31, f0
//      fmadds    f0, f2, f1, f0
//      stfs      f0, 0x0(r30)
//      psq_l     f31,0x58(r1),0,0
//      lfd       f31, 0x50(r1)
//      psq_l     f30,0x48(r1),0,0
//      lfd       f30, 0x40(r1)
//      lwz       r31, 0x3C(r1)
//      lwz       r30, 0x38(r1)
//      lwz       r29, 0x34(r1)
//      lwz       r0, 0x64(r1)
//      lwz       r28, 0x30(r1)
//      mtlr      r0
//      addi      r1, r1, 0x60
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000150
// */
// void Quat::toMatrix(Matrix3f&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	80412C38
// * Size:	00033C
// */
// void Quat::fromMatrixf(Matrixf&)
//{
//    /*
//    .loc_0x0:
//      lfs       f6, 0x0(r4)
//      lfs       f0, 0x14(r4)
//      lfs       f3, 0x28(r4)
//      fadds     f7, f6, f0
//      lfs       f4, 0x1F18(r2)
//      lfs       f5, 0x1F5C(r2)
//      fadds     f1, f0, f3
//      lfs       f2, 0x1F28(r2)
//      fadds     f0, f3, f6
//      fadds     f3, f3, f7
//      fadds     f3, f4, f3
//      fmuls     f3, f5, f3
//      fnmsubs   f1, f2, f1, f3
//      fnmsubs   f4, f2, f0, f3
//      fnmsubs   f2, f2, f7, f3
//      fcmpo     cr0, f3, f1
//      ble-      .loc_0x7C
//      fcmpo     cr0, f3, f4
//      ble-      .loc_0x64
//      fcmpo     cr0, f3, f2
//      ble-      .loc_0x5C
//      li        r0, 0
//      b         .loc_0xB0
//
//    .loc_0x5C:
//      li        r0, 0x3
//      b         .loc_0xB0
//
//    .loc_0x64:
//      fcmpo     cr0, f4, f2
//      ble-      .loc_0x74
//      li        r0, 0x2
//      b         .loc_0xB0
//
//    .loc_0x74:
//      li        r0, 0x3
//      b         .loc_0xB0
//
//    .loc_0x7C:
//      fcmpo     cr0, f1, f4
//      ble-      .loc_0x9C
//      fcmpo     cr0, f1, f2
//      ble-      .loc_0x94
//      li        r0, 0x1
//      b         .loc_0xB0
//
//    .loc_0x94:
//      li        r0, 0x3
//      b         .loc_0xB0
//
//    .loc_0x9C:
//      fcmpo     cr0, f4, f2
//      ble-      .loc_0xAC
//      li        r0, 0x2
//      b         .loc_0xB0
//
//    .loc_0xAC:
//      li        r0, 0x3
//
//    .loc_0xB0:
//      cmpwi     r0, 0x2
//      beq-      .loc_0x1B0
//      bge-      .loc_0xCC
//      cmpwi     r0, 0
//      beq-      .loc_0xD8
//      bge-      .loc_0x144
//      b         .loc_0x284
//
//    .loc_0xCC:
//      cmpwi     r0, 0x4
//      bge-      .loc_0x284
//      b         .loc_0x21C
//
//    .loc_0xD8:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f3, f0
//      ble-      .loc_0xF0
//      fsqrte    f0, f3
//      fmuls     f0, f0, f3
//      b         .loc_0xF4
//
//    .loc_0xF0:
//      fmr       f0, f3
//
//    .loc_0xF4:
//      stfs      f0, 0x0(r3)
//      lfs       f2, 0x1F5C(r2)
//      lfs       f0, 0x0(r3)
//      lfs       f1, 0x24(r4)
//      fdivs     f2, f2, f0
//      lfs       f0, 0x18(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x4(r3)
//      lfs       f1, 0x8(r4)
//      lfs       f0, 0x20(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x8(r3)
//      lfs       f1, 0x10(r4)
//      lfs       f0, 0x4(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0xC(r3)
//      b         .loc_0x284
//
//    .loc_0x144:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x15C
//      fsqrte    f0, f1
//      fmuls     f0, f0, f1
//      b         .loc_0x160
//
//    .loc_0x15C:
//      fmr       f0, f1
//
//    .loc_0x160:
//      stfs      f0, 0x4(r3)
//      lfs       f2, 0x1F5C(r2)
//      lfs       f0, 0x4(r3)
//      lfs       f1, 0x24(r4)
//      fdivs     f2, f2, f0
//      lfs       f0, 0x18(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x0(r3)
//      lfs       f1, 0x4(r4)
//      lfs       f0, 0x10(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x8(r3)
//      lfs       f1, 0x8(r4)
//      lfs       f0, 0x20(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0xC(r3)
//      b         .loc_0x284
//
//    .loc_0x1B0:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f4, f0
//      ble-      .loc_0x1C8
//      fsqrte    f0, f4
//      fmuls     f0, f0, f4
//      b         .loc_0x1CC
//
//    .loc_0x1C8:
//      fmr       f0, f4
//
//    .loc_0x1CC:
//      stfs      f0, 0x8(r3)
//      lfs       f2, 0x1F5C(r2)
//      lfs       f0, 0x8(r3)
//      lfs       f1, 0x8(r4)
//      fdivs     f2, f2, f0
//      lfs       f0, 0x20(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x0(r3)
//      lfs       f1, 0x18(r4)
//      lfs       f0, 0x24(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0xC(r3)
//      lfs       f1, 0x10(r4)
//      lfs       f0, 0x4(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x4(r3)
//      b         .loc_0x284
//
//    .loc_0x21C:
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f2, f0
//      ble-      .loc_0x234
//      fsqrte    f0, f2
//      fmuls     f0, f0, f2
//      b         .loc_0x238
//
//    .loc_0x234:
//      fmr       f0, f2
//
//    .loc_0x238:
//      stfs      f0, 0xC(r3)
//      lfs       f2, 0x1F5C(r2)
//      lfs       f0, 0xC(r3)
//      lfs       f1, 0x10(r4)
//      fdivs     f2, f2, f0
//      lfs       f0, 0x4(r4)
//      fsubs     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x0(r3)
//      lfs       f1, 0x20(r4)
//      lfs       f0, 0x8(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x4(r3)
//      lfs       f1, 0x24(r4)
//      lfs       f0, 0x18(r4)
//      fadds     f0, f1, f0
//      fmuls     f0, f2, f0
//      stfs      f0, 0x8(r3)
//
//    .loc_0x284:
//      lfs       f1, 0x0(r3)
//      lfs       f0, 0x1F10(r2)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x2C0
//      fneg      f0, f1
//      stfs      f0, 0x0(r3)
//      lfs       f0, 0x4(r3)
//      fneg      f0, f0
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x8(r3)
//      fneg      f0, f0
//      stfs      f0, 0x8(r3)
//      lfs       f0, 0xC(r3)
//      fneg      f0, f0
//      stfs      f0, 0xC(r3)
//
//    .loc_0x2C0:
//      lfs       f1, 0x0(r3)
//      lfs       f0, 0x4(r3)
//      fmuls     f2, f1, f1
//      lfs       f3, 0x8(r3)
//      fmuls     f1, f0, f0
//      lfs       f4, 0xC(r3)
//      fmuls     f3, f3, f3
//      lfs       f0, 0x1F10(r2)
//      fadds     f1, f2, f1
//      fmuls     f2, f4, f4
//      fadds     f1, f3, f1
//      fadds     f2, f2, f1
//      fcmpo     cr0, f2, f0
//      ble-      .loc_0x300
//      fsqrte    f0, f2
//      fmuls     f2, f0, f2
//
//    .loc_0x300:
//      lfs       f1, 0x1F18(r2)
//      lfs       f0, 0x0(r3)
//      fdivs     f1, f1, f2
//      fmuls     f0, f0, f1
//      stfs      f0, 0x0(r3)
//      lfs       f0, 0x4(r3)
//      fmuls     f0, f0, f1
//      stfs      f0, 0x4(r3)
//      lfs       f0, 0x8(r3)
//      fmuls     f0, f0, f1
//      stfs      f0, 0x8(r3)
//      lfs       f0, 0xC(r3)
//      fmuls     f0, f0, f1
//      stfs      f0, 0xC(r3)
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000054
// */
// void Plane::calcProjection(Vector3f&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000060
// */
// void Plane::intersectRay(Vector3f&, Vector3f&)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	........
// * Size:	000300
// */
// void Matrix4f::inverse(Matrix4f*)
//{
//    // UNUSED FUNCTION
//}
//
///*
// * --INFO--
// * Address:	80412F74
// * Size:	0000C8
// */
// void BoundBox::makeBoundSphere(Sys::Sphere&)
//{
//    /*
//    .loc_0x0:
//      lfs       f1, 0x0(r3)
//      lfs       f0, 0xC(r3)
//      lfs       f3, 0x4(r3)
//      lfs       f2, 0x10(r3)
//      fadds     f0, f1, f0
//      lfs       f4, 0x1F28(r2)
//      fadds     f1, f3, f2
//      lfs       f3, 0x8(r3)
//      lfs       f2, 0x14(r3)
//      fmuls     f8, f0, f4
//      lfs       f0, 0x1F10(r2)
//      fadds     f2, f3, f2
//      fmuls     f5, f1, f4
//      stfs      f8, 0x0(r4)
//      fmuls     f6, f2, f4
//      stfs      f5, 0x4(r4)
//      stfs      f6, 0x8(r4)
//      lfs       f1, 0x4(r3)
//      lfs       f2, 0x0(r3)
//      fsubs     f3, f5, f1
//      lfs       f1, 0x8(r3)
//      fsubs     f4, f8, f2
//      fsubs     f2, f6, f1
//      fmuls     f1, f3, f3
//      fmadds    f1, f4, f4, f1
//      fmadds    f7, f2, f2, f1
//      fcmpo     cr0, f7, f0
//      ble-      .loc_0x78
//      fsqrte    f0, f7
//      fmuls     f7, f0, f7
//
//    .loc_0x78:
//      lfs       f0, 0x10(r3)
//      lfs       f2, 0xC(r3)
//      fsubs     f3, f5, f0
//      lfs       f1, 0x14(r3)
//      fsubs     f4, f8, f2
//      lfs       f0, 0x1F10(r2)
//      fsubs     f2, f6, f1
//      fmuls     f1, f3, f3
//      fmadds    f1, f4, f4, f1
//      fmadds    f1, f2, f2, f1
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0xB0
//      fsqrte    f0, f1
//      fmuls     f1, f0, f1
//
//    .loc_0xB0:
//      fcmpo     cr0, f7, f1
//      ble-      .loc_0xBC
//      b         .loc_0xC0
//
//    .loc_0xBC:
//      fmr       f7, f1
//
//    .loc_0xC0:
//      stfs      f7, 0xC(r4)
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	8041303C
// * Size:	0001EC
// */
// void BoundBox::transform(Matrixf&)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x90(r1)
//      mflr      r0
//      stw       r0, 0x94(r1)
//      stmw      r27, 0x7C(r1)
//      addi      r30, r1, 0x14
//      mr        r27, r3
//      mr        r28, r4
//      li        r29, 0
//      mr        r31, r30
//
//    .loc_0x24:
//      rlwinm.   r0,r29,0,31,31
//      bne-      .loc_0x38
//      lfs       f0, 0x0(r27)
//      stfs      f0, 0x0(r31)
//      b         .loc_0x40
//
//    .loc_0x38:
//      lfs       f0, 0xC(r27)
//      stfs      f0, 0x0(r31)
//
//    .loc_0x40:
//      rlwinm.   r0,r29,0,30,30
//      bne-      .loc_0x54
//      lfs       f0, 0x4(r27)
//      stfs      f0, 0x4(r31)
//      b         .loc_0x5C
//
//    .loc_0x54:
//      lfs       f0, 0x10(r27)
//      stfs      f0, 0x4(r31)
//
//    .loc_0x5C:
//      rlwinm.   r0,r29,0,29,29
//      bne-      .loc_0x70
//      lfs       f0, 0x8(r27)
//      stfs      f0, 0x8(r31)
//      b         .loc_0x78
//
//    .loc_0x70:
//      lfs       f0, 0x14(r27)
//      stfs      f0, 0x8(r31)
//
//    .loc_0x78:
//      mr        r3, r28
//      mr        r4, r31
//      addi      r5, r1, 0x8
//      bl        -0x3284E8
//      lfs       f0, 0x8(r1)
//      addi      r29, r29, 0x1
//      lfs       f1, 0xC(r1)
//      cmpwi     r29, 0x8
//      stfs      f0, 0x0(r31)
//      lfs       f0, 0x10(r1)
//      stfs      f1, 0x4(r31)
//      stfs      f0, 0x8(r31)
//      addi      r31, r31, 0xC
//      blt+      .loc_0x24
//      lfs       f1, 0x1F60(r2)
//      li        r0, 0x4
//      lfs       f0, 0x1F64(r2)
//      li        r3, 0
//      stfs      f1, 0x0(r27)
//      stfs      f1, 0x4(r27)
//      stfs      f1, 0x8(r27)
//      stfs      f0, 0xC(r27)
//      stfs      f0, 0x10(r27)
//      stfs      f0, 0x14(r27)
//      mtctr     r0
//
//    .loc_0xDC:
//      lfs       f1, 0x0(r30)
//      lfs       f0, 0x0(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0xF0
//      stfs      f1, 0x0(r27)
//
//    .loc_0xF0:
//      lfs       f1, 0x4(r30)
//      lfs       f0, 0x4(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x104
//      stfs      f1, 0x4(r27)
//
//    .loc_0x104:
//      lfs       f1, 0x8(r30)
//      lfs       f0, 0x8(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x118
//      stfs      f1, 0x8(r27)
//
//    .loc_0x118:
//      lfs       f1, 0x0(r30)
//      lfs       f0, 0xC(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x12C
//      stfs      f1, 0xC(r27)
//
//    .loc_0x12C:
//      lfs       f1, 0x4(r30)
//      lfs       f0, 0x10(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x140
//      stfs      f1, 0x10(r27)
//
//    .loc_0x140:
//      lfs       f1, 0x8(r30)
//      lfs       f0, 0x14(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x154
//      stfs      f1, 0x14(r27)
//
//    .loc_0x154:
//      lfs       f1, 0xC(r30)
//      lfs       f0, 0x0(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x168
//      stfs      f1, 0x0(r27)
//
//    .loc_0x168:
//      lfs       f1, 0x10(r30)
//      lfs       f0, 0x4(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x17C
//      stfs      f1, 0x4(r27)
//
//    .loc_0x17C:
//      lfs       f1, 0x14(r30)
//      lfs       f0, 0x8(r27)
//      fcmpo     cr0, f1, f0
//      bge-      .loc_0x190
//      stfs      f1, 0x8(r27)
//
//    .loc_0x190:
//      lfs       f1, 0xC(r30)
//      lfs       f0, 0xC(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x1A4
//      stfs      f1, 0xC(r27)
//
//    .loc_0x1A4:
//      lfs       f1, 0x10(r30)
//      lfs       f0, 0x10(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x1B8
//      stfs      f1, 0x10(r27)
//
//    .loc_0x1B8:
//      lfs       f1, 0x14(r30)
//      lfs       f0, 0x14(r27)
//      fcmpo     cr0, f1, f0
//      ble-      .loc_0x1CC
//      stfs      f1, 0x14(r27)
//
//    .loc_0x1CC:
//      addi      r30, r30, 0x18
//      addi      r3, r3, 0x1
//      bdnz+     .loc_0xDC
//      lmw       r27, 0x7C(r1)
//      lwz       r0, 0x94(r1)
//      mtlr      r0
//      addi      r1, r1, 0x90
//      blr
//    */
//}
//
///*
// * --INFO--
// * Address:	80413228
// * Size:	00002C
// */
// void __sinit_sysMath_cpp(void)
//{
//    /*
//    .loc_0x0:
//      lbz       r0, -0x6538(r13)
//      extsb.    r0, r0
//      bnelr-
//      lfs       f0, 0x1F10(r2)
//      lis       r3, 0x8051
//      li        r0, 0x1
//      stfsu     f0, 0x41E4(r3)
//      stfs      f0, 0x4(r3)
//      stfs      f0, 0x8(r3)
//      stb       r0, -0x6538(r13)
//      blr
//    */
//}
