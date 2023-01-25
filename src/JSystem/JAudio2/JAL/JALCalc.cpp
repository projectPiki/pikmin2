#include "JSystem/JMath.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sbss # 0x80514D80 - 0x80516360
    .global init$484
    init$484:
        .skip 0x4
    .global oRandom$483
    oRandom$483:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global cEqualCSlope__7JALCalc
    cEqualCSlope__7JALCalc:
        .float 1.0
    .global cEqualPSlope__7JALCalc
    cEqualPSlope__7JALCalc:
        .float 0.5
    .global lbl_80517080
    lbl_80517080:
        .4byte 0x00000000
    .global lbl_80517084
    lbl_80517084:
        .float 1.0
    .global lbl_80517088
    lbl_80517088:
        .4byte 0x40000000
    .global lbl_8051708C
    lbl_8051708C:
        .4byte 0xC0000000
*/

namespace JALCalc {
/*
 * --INFO--
 * Address:    800BA244
 * Size:    000064
 */
float linearTransform(float x, float xStart, float xEnd, float yStart, float yEnd, bool unbounded)
{
	float result = (x - xStart) * ((yEnd - yStart) / (xEnd - xStart)) + yStart;

	// Quick exit as optimisation
	if (unbounded)
		return result;

	// If the bounds given are valid
	if (yStart < yEnd) {
		// If we overshoot the end, we clamp to the end
		if (result > yEnd)
			return yEnd;

		// If we undershoot, we clamp to the start
		if (result < yStart)
			return yStart;

		return result;
	}

	// From here, start is greater than end

	// Clamp to the start
	if (result > yStart)
		return yStart;

	// Clamp to the end
	if (result < yEnd)
		return yEnd;

	// Unknown situation, bail with lerp result
	return result;
}
} // namespace JALCalc

/*
 * --INFO--
 * Address:	800BA2A8
 * Size:	00018C
 */
// void JALCalc::getParamByExp(float, float, float, float, float, float,
//    JALCalc::CurveSign)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x50(r1)
//      mflr      r0
//      stw       r0, 0x54(r1)
//      stfd      f31, 0x40(r1)
//      psq_st    f31,0x48(r1),0,0
//      stfd      f30, 0x30(r1)
//      psq_st    f30,0x38(r1),0,0
//      stfd      f29, 0x20(r1)
//      psq_st    f29,0x28(r1),0,0
//      stfd      f28, 0x10(r1)
//      psq_st    f28,0x18(r1),0,0
//      fmr       f28, f4
//      cmpwi     r3, 0x1
//      fmr       f30, f5
//      fmr       f31, f6
//      bne-      .loc_0x88
//      lfs       f4, -0x72E0(r2)
//      fsubs     f0, f3, f2
//      fsubs     f2, f1, f2
//      fsubs     f1, f28, f4
//      fdivs     f0, f1, f0
//      fmadds    f1, f2, f0, f4
//      bl        0x156AC
//      frsp      f29, f1
//      fmr       f1, f28
//      bl        0x156A0
//      frsp      f3, f1
//      lfs       f0, -0x72DC(r2)
//      fsubs     f1, f31, f30
//      fsubs     f2, f29, f0
//      fsubs     f0, f3, f0
//      fdivs     f0, f1, f0
//      fmadds    f1, f2, f0, f30
//      b         .loc_0x140

//    .loc_0x88:
//      cmpwi     r3, 0
//      bne-      .loc_0xD8
//      lfs       f4, -0x72E0(r2)
//      fsubs     f0, f3, f2
//      fsubs     f2, f1, f2
//      fsubs     f1, f4, f28
//      fdivs     f0, f1, f0
//      fmadds    f1, f2, f0, f28
//      bl        0x1565C
//      frsp      f29, f1
//      fmr       f1, f28
//      bl        0x15650
//      frsp      f2, f1
//      lfs       f0, -0x72DC(r2)
//      fsubs     f1, f31, f30
//      fsubs     f0, f0, f2
//      fsubs     f2, f29, f2
//      fdivs     f0, f1, f0
//      fmadds    f1, f2, f0, f30
//      b         .loc_0x140

//    .loc_0xD8:
//      fsubs     f4, f31, f30
//      fsubs     f0, f3, f2
//      fsubs     f1, f1, f2
//      fcmpo     cr0, f30, f31
//      fdivs     f0, f4, f0
//      fmadds    f0, f1, f0, f30
//      bge-      .loc_0x11C
//      fcmpo     cr0, f0, f31
//      ble-      .loc_0x104
//      fmr       f1, f31
//      b         .loc_0x140

//    .loc_0x104:
//      fcmpo     cr0, f0, f30
//      bge-      .loc_0x114
//      fmr       f1, f30
//      b         .loc_0x140

//    .loc_0x114:
//      fmr       f1, f0
//      b         .loc_0x140

//    .loc_0x11C:
//      fcmpo     cr0, f0, f30
//      ble-      .loc_0x12C
//      fmr       f1, f30
//      b         .loc_0x140

//    .loc_0x12C:
//      fcmpo     cr0, f0, f31
//      bge-      .loc_0x13C
//      fmr       f1, f31
//      b         .loc_0x140

//    .loc_0x13C:
//      fmr       f1, f0

//    .loc_0x140:
//      fcmpo     cr0, f1, f31
//      ble-      .loc_0x150
//      fmr       f1, f31
//      b         .loc_0x15C

//    .loc_0x150:
//      fcmpo     cr0, f1, f30
//      bge-      .loc_0x15C
//      fmr       f1, f30

//    .loc_0x15C:
//      psq_l     f31,0x48(r1),0,0
//      lfd       f31, 0x40(r1)
//      psq_l     f30,0x38(r1),0,0
//      lfd       f30, 0x30(r1)
//      psq_l     f29,0x28(r1),0,0
//      lfd       f29, 0x20(r1)
//      psq_l     f28,0x18(r1),0,0
//      lwz       r0, 0x54(r1)
//      lfd       f28, 0x10(r1)
//      mtlr      r0
//      addi      r1, r1, 0x50
//      blr
//    */
//}

///*
// * --INFO--
// * Address:	........
// * Size:	000028
// */
// void JALCalc::getParamByExp_0_1(float, float, float, float,
// JALCalc::CurveSign)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	800BA434
// * Size:	0000C0
// */
// void JALCalc::getRandom(float, float, float)
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
//      stfd      f29, 0x30(r1)
//      psq_st    f29,0x38(r1),0,0
//      stfd      f28, 0x20(r1)
//      psq_st    f28,0x28(r1),0,0
//      stfd      f27, 0x10(r1)
//      psq_st    f27,0x18(r1),0,0
//      fmr       f29, f3
//      lfs       f0, -0x72DC(r2)
//      lfs       f3, -0x72D8(r2)
//      fmr       f27, f1
//      lfs       f1, -0x72D4(r2)
//      fmr       f28, f2
//      fsubs     f0, f0, f29
//      fmuls     f31, f3, f29
//      fmuls     f30, f1, f0
//      bl        .loc_0xC0
//      fcmpo     cr0, f1, f29
//      bge-      .loc_0x6C
//      fmr       f0, f31
//      b         .loc_0x70

//    .loc_0x6C:
//      fmr       f0, f30

//    .loc_0x70:
//      fmuls     f27, f27, f0
//      bl        .loc_0xC0
//      fmr       f2, f28
//      bl        0x1555C
//      frsp      f0, f1
//      fmuls     f1, f0, f27
//      psq_l     f31,0x58(r1),0,0
//      lfd       f31, 0x50(r1)
//      psq_l     f30,0x48(r1),0,0
//      lfd       f30, 0x40(r1)
//      psq_l     f29,0x38(r1),0,0
//      lfd       f29, 0x30(r1)
//      psq_l     f28,0x28(r1),0,0
//      lfd       f28, 0x20(r1)
//      psq_l     f27,0x18(r1),0,0
//      lwz       r0, 0x64(r1)
//      lfd       f27, 0x10(r1)
//      mtlr      r0
//      addi      r1, r1, 0x60
//      blr

//    .loc_0xC0:
//    */
//}

// /*
// * --INFO--
// * Address:	800BA4F4
// * Size:	000070
// */
// float getRandom_0_1()
// {
//     static JMath::TRandom_fast_ oRandom(0);
//     u32 next = (oRandom.next() >> 9) | 0x3F800000;
//     return *(float*)(void*)&next - 1.0f;
// 	// oRandom.value = oRandom.value * 0x19660d + 0x3c6ef35f; // * 1664525 + 1013904223;
// 	// return (float)(oRandom.value >> 9 | 0x3f800000) - 1.0f;

//    /*
//    .loc_0x0:
//      stwu      r1, -0x10(r1)
//      mflr      r0
//      stw       r0, 0x14(r1)
//      lbz       r0, -0x7380(r13)
//      extsb.    r0, r0
//      bne-      .loc_0x2C
//      subi      r3, r13, 0x737C
//      li        r4, 0
//      bl        -0x85414
//      li        r0, 0x1
//      stb       r0, -0x7380(r13)

//    .loc_0x2C:
//      lis       r3, 0x19
//      lwz       r4, -0x737C(r13)
//      addi      r0, r3, 0x660D
//      lfs       f0, -0x72DC(r2)
//      mullw     r3, r4, r0
//      addis     r3, r3, 0x3C6F
//      subi      r3, r3, 0xCA1
//      rlwinm    r0,r3,23,9,31
//      stw       r3, -0x737C(r13)
//      oris      r0, r0, 0x3F80
//      stw       r0, 0x8(r1)
//      lfs       f1, 0x8(r1)
//      fsubs     f1, f1, f0
//      lwz       r0, 0x14(r1)
//      mtlr      r0
//      addi      r1, r1, 0x10
//      blr
//    */
// }

///*
// * --INFO--
// * Address:	........
// * Size:	0000A4
// */
// void JALCalc::getRandom_Sign()
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	000028
// */
// void JALCalc::pow2(float)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	000050
// */
// void JALCalc::getRint(float)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	0000F8
// */
// void JALCalc::getDist(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}

///*
// * --INFO--
// * Address:	........
// * Size:	0000E4
// */
// void JALCalc::getDistPow(Vec*, Vec*)
//{
//    // UNUSED FUNCTION
//}
//} // namespace JALCalc
