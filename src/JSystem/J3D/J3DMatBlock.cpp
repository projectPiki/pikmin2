#include "types.h"

/*
 * --INFO--
 * Address:	800771C0
 * Size:	000048
 */
void J3DColorBlockLightOff::initialize()
{
	/*
	.loc_0x0:
	  li        r7, 0
	  subi      r8, r2, 0x79A0
	  stb       r7, 0xC(r3)
	  lbz       r6, -0x79A0(r2)
	  lbz       r5, 0x1(r8)
	  stb       r6, 0x4(r3)
	  lbz       r4, 0x2(r8)
	  stb       r5, 0x5(r3)
	  lbz       r0, 0x3(r8)
	  stb       r4, 0x6(r3)
	  stb       r0, 0x7(r3)
	  stb       r6, 0x8(r3)
	  stb       r5, 0x9(r3)
	  stb       r4, 0xA(r3)
	  stb       r0, 0xB(r3)
	  stw       r7, 0x18(r3)
	  stw       r7, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077208
 * Size:	00007C
 */
void J3DColorBlockAmbientOn::initialize()
{
	/*
	.loc_0x0:
	  li        r9, 0
	  subi      r5, r2, 0x79A0
	  stb       r9, 0xC(r3)
	  subi      r10, r2, 0x799C
	  lbz       r4, -0x79A0(r2)
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x4(r3)
	  lbz       r8, 0x2(r5)
	  stb       r0, 0x5(r3)
	  lbz       r7, 0x3(r5)
	  stb       r8, 0x6(r3)
	  lbz       r6, -0x799C(r2)
	  stb       r7, 0x7(r3)
	  lbz       r5, 0x1(r10)
	  stb       r4, 0x8(r3)
	  lbz       r4, 0x2(r10)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x3(r10)
	  stb       r8, 0xA(r3)
	  stb       r7, 0xB(r3)
	  stb       r6, 0x20(r3)
	  stb       r5, 0x21(r3)
	  stb       r4, 0x22(r3)
	  stb       r0, 0x23(r3)
	  stb       r6, 0x24(r3)
	  stb       r5, 0x25(r3)
	  stb       r4, 0x26(r3)
	  stb       r0, 0x27(r3)
	  stw       r9, 0x18(r3)
	  stw       r9, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077284
 * Size:	00009C
 */
void J3DColorBlockLightOn::initialize()
{
	/*
	.loc_0x0:
	  li        r9, 0
	  subi      r5, r2, 0x79A0
	  stb       r9, 0x14(r3)
	  subi      r10, r2, 0x799C
	  lbz       r4, -0x79A0(r2)
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x4(r3)
	  lbz       r8, 0x2(r5)
	  stb       r0, 0x5(r3)
	  lbz       r7, 0x3(r5)
	  stb       r8, 0x6(r3)
	  lbz       r6, -0x799C(r2)
	  stb       r7, 0x7(r3)
	  lbz       r5, 0x1(r10)
	  stb       r4, 0x8(r3)
	  lbz       r4, 0x2(r10)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x3(r10)
	  stb       r8, 0xA(r3)
	  stb       r7, 0xB(r3)
	  stb       r6, 0xC(r3)
	  stb       r5, 0xD(r3)
	  stb       r4, 0xE(r3)
	  stb       r0, 0xF(r3)
	  stb       r6, 0x10(r3)
	  stb       r5, 0x11(r3)
	  stb       r4, 0x12(r3)
	  stb       r0, 0x13(r3)
	  stw       r9, 0x20(r3)
	  stw       r9, 0x24(r3)
	  stw       r9, 0x28(r3)
	  stw       r9, 0x2C(r3)
	  stw       r9, 0x30(r3)
	  stw       r9, 0x34(r3)
	  stw       r9, 0x38(r3)
	  stw       r9, 0x3C(r3)
	  stw       r9, 0x44(r3)
	  stw       r9, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077320
 * Size:	000030
 */
void J3DTexGenBlockPatched::initialize()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)
	  stw       r0, 0x4C(r3)
	  stw       r0, 0x50(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077350
 * Size:	000020
 */
void J3DTexGenBlock4::initialize()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077370
 * Size:	000030
 */
void J3DTexGenBlockBasic::initialize()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)
	  stw       r0, 0x4C(r3)
	  stw       r0, 0x50(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800773A0
 * Size:	00000C
 */
void J3DTevBlockNull::initialize()
{
	// Generated from stw r0, 0x4(r3)
	_04 = 0;
}

/*
 * --INFO--
 * Address:	800773AC
 * Size:	00018C
 */
void J3DTevBlockPatched::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  lis       r4, 0x1
	  subi      r11, r4, 0x1
	  li        r10, 0xC0
	  stmw      r18, 0x8(r1)
	  subi      r18, r2, 0x798C
	  li        r9, 0xC1
	  li        r8, 0xC2
	  li        r7, 0xC3
	  li        r19, 0xC4
	  li        r20, 0xC5
	  li        r21, 0xC6
	  li        r22, 0xC7
	  li        r23, 0xC8
	  li        r24, 0xC9
	  li        r25, 0xCA
	  li        r26, 0xCB
	  li        r27, 0xCC
	  li        r28, 0xCD
	  li        r29, 0xCE
	  li        r30, 0xCF
	  lha       r31, -0x798C(r2)
	  lha       r12, 0x2(r18)
	  subi      r4, r2, 0x7980
	  li        r6, 0xC
	  li        r5, 0x1
	  li        r0, 0
	  sth       r11, 0x8(r3)
	  sth       r11, 0xA(r3)
	  sth       r11, 0xC(r3)
	  sth       r11, 0xE(r3)
	  sth       r11, 0x10(r3)
	  sth       r11, 0x12(r3)
	  sth       r11, 0x14(r3)
	  sth       r11, 0x16(r3)
	  lha       r11, 0x4(r18)
	  stb       r10, 0x38(r3)
	  lha       r10, 0x6(r18)
	  stb       r9, 0x3C(r3)
	  lbz       r9, -0x7980(r2)
	  stb       r8, 0x40(r3)
	  lbz       r8, 0x1(r4)
	  stb       r7, 0x44(r3)
	  lbz       r7, 0x2(r4)
	  stb       r19, 0x48(r3)
	  lbz       r4, 0x3(r4)
	  stb       r20, 0x4C(r3)
	  stb       r21, 0x50(r3)
	  stb       r22, 0x54(r3)
	  stb       r23, 0x58(r3)
	  stb       r24, 0x5C(r3)
	  stb       r25, 0x60(r3)
	  stb       r26, 0x64(r3)
	  stb       r27, 0x68(r3)
	  stb       r28, 0x6C(r3)
	  stb       r29, 0x70(r3)
	  stb       r30, 0x74(r3)
	  sth       r31, 0x98(r3)
	  sth       r12, 0x9A(r3)
	  sth       r11, 0x9C(r3)
	  sth       r10, 0x9E(r3)
	  sth       r31, 0xA0(r3)
	  sth       r12, 0xA2(r3)
	  sth       r11, 0xA4(r3)
	  sth       r10, 0xA6(r3)
	  sth       r31, 0xA8(r3)
	  sth       r12, 0xAA(r3)
	  sth       r11, 0xAC(r3)
	  sth       r10, 0xAE(r3)
	  stb       r9, 0xB8(r3)
	  stb       r8, 0xB9(r3)
	  stb       r7, 0xBA(r3)
	  stb       r4, 0xBB(r3)
	  stb       r9, 0xBC(r3)
	  stb       r8, 0xBD(r3)
	  stb       r7, 0xBE(r3)
	  stb       r4, 0xBF(r3)
	  stb       r9, 0xC0(r3)
	  stb       r8, 0xC1(r3)
	  stb       r7, 0xC2(r3)
	  stb       r4, 0xC3(r3)
	  stb       r9, 0xC4(r3)
	  stb       r8, 0xC5(r3)
	  stb       r7, 0xC6(r3)
	  stb       r4, 0xC7(r3)
	  stb       r6, 0xC8(r3)
	  stb       r6, 0xC9(r3)
	  stb       r6, 0xCA(r3)
	  stb       r6, 0xCB(r3)
	  stb       r6, 0xCC(r3)
	  stb       r6, 0xCD(r3)
	  stb       r6, 0xCE(r3)
	  stb       r6, 0xCF(r3)
	  stb       r5, 0xD0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0xD4(r3)
	  lmw       r18, 0x8(r1)
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077538
 * Size:	000028
 */
void J3DTevBlock1::initialize()
{
	/*
	.loc_0x0:
	  lis       r4, 0x1
	  li        r5, 0xC0
	  subi      r0, r4, 0x1
	  li        r4, 0xC1
	  sth       r0, 0x8(r3)
	  li        r0, 0
	  stb       r5, 0xE(r3)
	  stb       r4, 0x12(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077560
 * Size:	000110
 */
void J3DTevBlock2::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r4, 0x1
	  subi      r4, r4, 0x1
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  subi      r31, r2, 0x798C
	  li        r8, 0xC0
	  li        r7, 0xC1
	  stw       r30, 0x8(r1)
	  li        r6, 0xC2
	  li        r5, 0xC3
	  li        r12, 0x1C
	  sth       r4, 0x8(r3)
	  subi      r30, r2, 0x7980
	  lha       r11, -0x798C(r2)
	  sth       r4, 0xA(r3)
	  li        r4, 0xC
	  lha       r10, 0x2(r31)
	  stb       r0, 0x34(r3)
	  li        r0, 0
	  lha       r9, 0x4(r31)
	  stb       r8, 0x35(r3)
	  lha       r8, 0x6(r31)
	  stb       r7, 0x39(r3)
	  lbz       r7, -0x7980(r2)
	  stb       r6, 0x3D(r3)
	  lbz       r6, 0x1(r30)
	  stb       r5, 0x41(r3)
	  lbz       r5, 0x2(r30)
	  stb       r4, 0x55(r3)
	  stb       r4, 0x56(r3)
	  lbz       r4, 0x3(r30)
	  stb       r12, 0x57(r3)
	  stb       r12, 0x58(r3)
	  sth       r11, 0x14(r3)
	  sth       r10, 0x16(r3)
	  sth       r9, 0x18(r3)
	  sth       r8, 0x1A(r3)
	  sth       r11, 0x1C(r3)
	  sth       r10, 0x1E(r3)
	  sth       r9, 0x20(r3)
	  sth       r8, 0x22(r3)
	  sth       r11, 0x24(r3)
	  sth       r10, 0x26(r3)
	  sth       r9, 0x28(r3)
	  sth       r8, 0x2A(r3)
	  stb       r7, 0x45(r3)
	  stb       r6, 0x46(r3)
	  stb       r5, 0x47(r3)
	  stb       r4, 0x48(r3)
	  stb       r7, 0x49(r3)
	  stb       r6, 0x4A(r3)
	  stb       r5, 0x4B(r3)
	  stb       r4, 0x4C(r3)
	  stb       r7, 0x4D(r3)
	  stb       r6, 0x4E(r3)
	  stb       r5, 0x4F(r3)
	  stb       r4, 0x50(r3)
	  stb       r7, 0x51(r3)
	  stb       r6, 0x52(r3)
	  stb       r5, 0x53(r3)
	  stb       r4, 0x54(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x68(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077670
 * Size:	000140
 */
void J3DTevBlock4::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x1
	  subi      r10, r4, 0x1
	  li        r0, 0x1
	  stmw      r27, 0xC(r1)
	  li        r9, 0xC0
	  li        r8, 0xC1
	  li        r7, 0xC2
	  li        r6, 0xC3
	  li        r5, 0xC4
	  li        r4, 0xC5
	  li        r29, 0xC6
	  li        r30, 0xC7
	  li        r31, 0xC
	  li        r12, 0x1C
	  lha       r11, -0x798C(r2)
	  subi      r28, r2, 0x798C
	  subi      r27, r2, 0x7980
	  sth       r10, 0x8(r3)
	  sth       r10, 0xA(r3)
	  sth       r10, 0xC(r3)
	  sth       r10, 0xE(r3)
	  lha       r10, 0x2(r28)
	  stb       r0, 0x20(r3)
	  li        r0, 0
	  stb       r9, 0x21(r3)
	  lha       r9, 0x4(r28)
	  stb       r8, 0x25(r3)
	  lha       r8, 0x6(r28)
	  stb       r7, 0x29(r3)
	  lbz       r7, -0x7980(r2)
	  stb       r6, 0x2D(r3)
	  lbz       r6, 0x1(r27)
	  stb       r5, 0x31(r3)
	  lbz       r5, 0x2(r27)
	  stb       r4, 0x35(r3)
	  lbz       r4, 0x3(r27)
	  stb       r29, 0x39(r3)
	  stb       r30, 0x3D(r3)
	  stb       r31, 0x72(r3)
	  stb       r31, 0x73(r3)
	  stb       r31, 0x74(r3)
	  stb       r31, 0x75(r3)
	  stb       r12, 0x76(r3)
	  stb       r12, 0x77(r3)
	  stb       r12, 0x78(r3)
	  stb       r12, 0x79(r3)
	  sth       r11, 0x42(r3)
	  sth       r10, 0x44(r3)
	  sth       r9, 0x46(r3)
	  sth       r8, 0x48(r3)
	  sth       r11, 0x4A(r3)
	  sth       r10, 0x4C(r3)
	  sth       r9, 0x4E(r3)
	  sth       r8, 0x50(r3)
	  sth       r11, 0x52(r3)
	  sth       r10, 0x54(r3)
	  sth       r9, 0x56(r3)
	  sth       r8, 0x58(r3)
	  stb       r7, 0x62(r3)
	  stb       r6, 0x63(r3)
	  stb       r5, 0x64(r3)
	  stb       r4, 0x65(r3)
	  stb       r7, 0x66(r3)
	  stb       r6, 0x67(r3)
	  stb       r5, 0x68(r3)
	  stb       r4, 0x69(r3)
	  stb       r7, 0x6A(r3)
	  stb       r6, 0x6B(r3)
	  stb       r5, 0x6C(r3)
	  stb       r4, 0x6D(r3)
	  stb       r7, 0x6E(r3)
	  stb       r6, 0x6F(r3)
	  stb       r5, 0x70(r3)
	  stb       r4, 0x71(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x90(r3)
	  lmw       r27, 0xC(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800777B0
 * Size:	00024C
 */
void J3DTevBlock16::initialize()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lis       r4, 0x1
	  subi      r10, r4, 0x1
	  subi      r11, r2, 0x798C
	  stmw      r25, 0x14(r1)
	  subi      r25, r2, 0x7980
	  li        r26, 0x1
	  lha       r27, -0x798C(r2)
	  lha       r28, 0x2(r11)
	  li        r9, 0xC
	  lha       r29, 0x4(r11)
	  li        r8, 0x1C
	  lha       r30, 0x6(r11)
	  li        r0, 0x2
	  lbz       r31, -0x7980(r2)
	  mr        r5, r3
	  lbz       r12, 0x1(r25)
	  li        r7, 0
	  lbz       r11, 0x2(r25)
	  li        r4, 0xC0
	  li        r6, 0xC1
	  sth       r10, 0x8(r3)
	  sth       r10, 0xA(r3)
	  sth       r10, 0xC(r3)
	  sth       r10, 0xE(r3)
	  sth       r10, 0x10(r3)
	  sth       r10, 0x12(r3)
	  sth       r10, 0x14(r3)
	  sth       r10, 0x16(r3)
	  lbz       r10, 0x3(r25)
	  stb       r26, 0x58(r3)
	  sth       r27, 0xDA(r3)
	  sth       r28, 0xDC(r3)
	  sth       r29, 0xDE(r3)
	  sth       r30, 0xE0(r3)
	  sth       r27, 0xE2(r3)
	  sth       r28, 0xE4(r3)
	  sth       r29, 0xE6(r3)
	  sth       r30, 0xE8(r3)
	  sth       r27, 0xEA(r3)
	  sth       r28, 0xEC(r3)
	  sth       r29, 0xEE(r3)
	  sth       r30, 0xF0(r3)
	  stb       r31, 0xFA(r3)
	  stb       r12, 0xFB(r3)
	  stb       r11, 0xFC(r3)
	  stb       r10, 0xFD(r3)
	  stb       r31, 0xFE(r3)
	  stb       r12, 0xFF(r3)
	  stb       r11, 0x100(r3)
	  stb       r10, 0x101(r3)
	  stb       r31, 0x102(r3)
	  stb       r12, 0x103(r3)
	  stb       r11, 0x104(r3)
	  stb       r10, 0x105(r3)
	  stb       r31, 0x106(r3)
	  stb       r12, 0x107(r3)
	  stb       r11, 0x108(r3)
	  stb       r10, 0x109(r3)
	  stb       r9, 0x10A(r3)
	  stb       r9, 0x10B(r3)
	  stb       r9, 0x10C(r3)
	  stb       r9, 0x10D(r3)
	  stb       r9, 0x10E(r3)
	  stb       r9, 0x10F(r3)
	  stb       r9, 0x110(r3)
	  stb       r9, 0x111(r3)
	  stb       r9, 0x112(r3)
	  stb       r9, 0x113(r3)
	  stb       r9, 0x114(r3)
	  stb       r9, 0x115(r3)
	  stb       r9, 0x116(r3)
	  stb       r9, 0x117(r3)
	  stb       r9, 0x118(r3)
	  stb       r9, 0x119(r3)
	  stb       r8, 0x11A(r3)
	  stb       r8, 0x11B(r3)
	  stb       r8, 0x11C(r3)
	  stb       r8, 0x11D(r3)
	  stb       r8, 0x11E(r3)
	  stb       r8, 0x11F(r3)
	  stb       r8, 0x120(r3)
	  stb       r8, 0x121(r3)
	  stb       r8, 0x122(r3)
	  stb       r8, 0x123(r3)
	  stb       r8, 0x124(r3)
	  stb       r8, 0x125(r3)
	  stb       r8, 0x126(r3)
	  stb       r8, 0x127(r3)
	  stb       r8, 0x128(r3)
	  stb       r8, 0x129(r3)
	  mtctr     r0

	.loc_0x170:
	  stb       r4, 0x59(r5)
	  addi      r0, r7, 0x1
	  rlwinm    r9,r0,1,0,30
	  addi      r4, r4, 0x10
	  stb       r6, 0x5D(r5)
	  addi      r8, r9, 0xC0
	  addi      r0, r7, 0x2
	  addi      r10, r9, 0xC1
	  stb       r8, 0x61(r5)
	  rlwinm    r11,r0,1,0,30
	  addi      r9, r11, 0xC0
	  addi      r0, r7, 0x3
	  stb       r10, 0x65(r5)
	  rlwinm    r10,r0,1,0,30
	  addi      r8, r11, 0xC1
	  addi      r0, r7, 0x4
	  stb       r9, 0x69(r5)
	  rlwinm    r12,r0,1,0,30
	  addi      r11, r10, 0xC0
	  addi      r0, r7, 0x5
	  stb       r8, 0x6D(r5)
	  rlwinm    r25,r0,1,0,30
	  addi      r10, r10, 0xC1
	  addi      r9, r12, 0xC0
	  stb       r11, 0x71(r5)
	  addi      r8, r12, 0xC1
	  addi      r12, r25, 0xC0
	  addi      r11, r25, 0xC1
	  stb       r10, 0x75(r5)
	  addi      r0, r7, 0x6
	  rlwinm    r25,r0,1,0,30
	  addi      r6, r6, 0x10
	  stb       r9, 0x79(r5)
	  addi      r0, r7, 0x7
	  rlwinm    r26,r0,1,0,30
	  addi      r10, r25, 0xC0
	  stb       r8, 0x7D(r5)
	  addi      r9, r25, 0xC1
	  addi      r8, r26, 0xC0
	  addi      r0, r26, 0xC1
	  stb       r12, 0x81(r5)
	  addi      r7, r7, 0x8
	  stb       r11, 0x85(r5)
	  stb       r10, 0x89(r5)
	  stb       r9, 0x8D(r5)
	  stb       r8, 0x91(r5)
	  stb       r0, 0x95(r5)
	  addi      r5, r5, 0x40
	  bdnz+     .loc_0x170
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  stw       r0, 0x170(r3)
	  lmw       r25, 0x14(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800779FC
 * Size:	00000C
 */
void J3DIndBlockFull::initialize()
{
	// Generated from stb r0, 0x4(r3)
	_04 = 0;
}

/*
 * --INFO--
 * Address:	80077A08
 * Size:	000024
 */
void J3DPEBlockFogOff::initialize()
{
	/*
	.loc_0x0:
	  lis       r5, 0x1
	  li        r4, 0xFF
	  subi      r5, r5, 0x1
	  li        r0, 0x1
	  sth       r5, 0x4(r3)
	  sth       r5, 0xC(r3)
	  stb       r4, 0xE(r3)
	  stb       r0, 0xF(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077A2C
 * Size:	00002C
 */
void J3DPEBlockFull::initialize()
{
	/*
	.loc_0x0:
	  lis       r4, 0x1
	  li        r5, 0xFF
	  subi      r6, r4, 0x1
	  li        r4, 0x1
	  sth       r6, 0x30(r3)
	  li        r0, 0
	  sth       r6, 0x38(r3)
	  stb       r5, 0x3A(r3)
	  stb       r4, 0x3B(r3)
	  stw       r0, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80077A58
 * Size:	000008
 */
u32 J3DColorBlockLightOff::countDLSize() { return 0x22; }

/*
 * --INFO--
 * Address:	80077A60
 * Size:	000008
 */
u32 J3DColorBlockAmbientOn::countDLSize() { return 0x2F; }

/*
 * --INFO--
 * Address:	80077A68
 * Size:	000008
 */
u32 J3DColorBlockLightOn::countDLSize() { return 0x26F; }

/*
 * --INFO--
 * Address:	80077A70
 * Size:	000008
 */
u32 J3DTexGenBlockPatched::countDLSize() { return 0x1A8; }

/*
 * --INFO--
 * Address:	80077A78
 * Size:	000008
 */
u32 J3DTexGenBlock4::countDLSize() { return 0xFE; }

/*
 * --INFO--
 * Address:	80077A80
 * Size:	000008
 */
u32 J3DTexGenBlockBasic::countDLSize() { return 0x1F2; }

/*
 * --INFO--
 * Address:	80077A88
 * Size:	000008
 */
u32 J3DTevBlockPatched::countDLSize() { return 0x230; }

/*
 * --INFO--
 * Address:	80077A90
 * Size:	000008
 */
u32 J3DTevBlock1::countDLSize() { return 0x69; }

/*
 * --INFO--
 * Address:	80077A98
 * Size:	000008
 */
u32 J3DTevBlock2::countDLSize() { return 0x14F; }

/*
 * --INFO--
 * Address:	80077AA0
 * Size:	000008
 */
u32 J3DTevBlock4::countDLSize() { return 0x244; }

/*
 * --INFO--
 * Address:	80077AA8
 * Size:	000008
 */
u32 J3DTevBlock16::countDLSize() { return 0x3E8; }

/*
 * --INFO--
 * Address:	80077AB0
 * Size:	000008
 */
u32 J3DIndBlockFull::countDLSize() { return 0x8C; }

/*
 * --INFO--
 * Address:	80077AB8
 * Size:	000008
 */
u32 J3DPEBlockOpa::countDLSize() { return 0x1E; }

/*
 * --INFO--
 * Address:	80077AC0
 * Size:	000008
 */
u32 J3DPEBlockTexEdge::countDLSize() { return 0x1E; }

/*
 * --INFO--
 * Address:	80077AC8
 * Size:	000008
 */
u32 J3DPEBlockXlu::countDLSize() { return 0x1E; }

/*
 * --INFO--
 * Address:	80077AD0
 * Size:	000008
 */
u32 J3DPEBlockFogOff::countDLSize() { return 0x1E; }

/*
 * --INFO--
 * Address:	80077AD8
 * Size:	000008
 */
u32 J3DPEBlockFull::countDLSize() { return 0x55; }

/*
 * --INFO--
 * Address:	80077AE0
 * Size:	000558
 */
void J3DColorBlockLightOff::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7668(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x6A130

	.loc_0x34:
	  lwz       r4, -0x7158(r13)
	  li        r3, 0x10
	  li        r0, 0
	  li        r8, 0x1
	  lwz       r5, 0x0(r4)
	  li        r7, 0xC
	  lwz       r4, 0x8(r4)
	  sub       r4, r4, r5
	  stw       r4, 0x18(r31)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r3, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r3, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0x4(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r4, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0x8(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r4, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x3
	  li        r7, 0xE
	  addi      r4, r1, 0x14
	  lwz       r6, 0x0(r5)
	  lwz       r5, 0x8(r5)
	  sub       r5, r5, r6
	  stw       r5, 0x1C(r31)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r0, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r9, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lhz       r9, 0xE(r31)
	  lwz       r5, -0x7888(r2)
	  rlwinm    r3,r9,23,30,31
	  rlwinm    r7,r9,25,24,27
	  stw       r5, 0x14(r1)
	  rlwinm    r10,r9,0,31,31
	  rlwimi    r7,r9,30,28,31
	  rlwinm    r11,r9,25,30,31
	  lbzx      r8, r4, r3
	  rlwimi    r10,r9,0,30,30
	  rlwimi    r10,r7,2,26,29
	  neg       r3, r8
	  cmpwi     r8, 0
	  or        r5, r3, r8
	  subfic    r4, r8, 0x2
	  subi      r3, r8, 0x2
	  rlwinm    r8,r7,7,17,20
	  or        r3, r4, r3
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r3,10,22,22
	  rlwimi    r10,r9,0,25,25
	  bne-      .loc_0x25C
	  mr        r11, r0

	.loc_0x25C:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r11,7,0,24
	  or        r0, r10, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x12(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x330
	  li        r10, 0

	.loc_0x330:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x10(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x404
	  li        r10, 0

	.loc_0x404:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x14(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x4D4
	  li        r9, 0

	.loc_0x4D4:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80078038
 * Size:	000680
 */
void J3DColorBlockAmbientOn::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7664(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x69BD8

	.loc_0x34:
	  lwz       r5, -0x7158(r13)
	  li        r4, 0x10
	  li        r3, 0
	  li        r0, 0x1
	  lwz       r6, 0x0(r5)
	  li        r8, 0xC
	  lwz       r5, 0x8(r5)
	  sub       r5, r5, r6
	  stw       r5, 0x18(r31)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r0, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r11, 0x4(r31)
	  lwz       r6, 0x8(r7)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  addi      r5, r6, 0x1
	  rlwinm    r8,r11,24,24,31
	  stw       r5, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r11, 0x8(r31)
	  lwz       r6, 0x8(r7)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  addi      r5, r6, 0x1
	  rlwinm    r8,r11,24,24,31
	  stw       r5, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  li        r7, 0xA
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r0, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0x20(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r0, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0x24(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r0, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x0(r6)
	  lwz       r0, 0x8(r6)
	  sub       r0, r0, r5
	  stw       r0, 0x1C(r31)
	  lwz       r8, -0x7158(r13)
	  li        r9, 0x3
	  li        r7, 0xE
	  addi      r5, r1, 0x14
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r9, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r11, 0xE(r31)
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r5, r0
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r0, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r0, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r0, r8, 0x2
	  or        r0, r4, r0
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x384
	  mr        r10, r3

	.loc_0x384:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x12(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x458
	  li        r10, 0

	.loc_0x458:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x10(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x52C
	  li        r10, 0

	.loc_0x52C:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x14(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x5FC
	  li        r9, 0

	.loc_0x5FC:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800786B8
 * Size:	0006B0
 */
void J3DColorBlockLightOn::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7664(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x69554

	.loc_0x38:
	  lwz       r5, -0x7158(r13)
	  li        r4, 0x10
	  li        r3, 0
	  li        r0, 0x1
	  lwz       r6, 0x0(r5)
	  li        r8, 0xC
	  lwz       r5, 0x8(r5)
	  sub       r5, r5, r6
	  stw       r5, 0x44(r31)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r0, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r11, 0x4(r31)
	  lwz       r6, 0x8(r7)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  addi      r5, r6, 0x1
	  rlwinm    r8,r11,24,24,31
	  stw       r5, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r11, 0x8(r31)
	  lwz       r6, 0x8(r7)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  addi      r5, r6, 0x1
	  rlwinm    r8,r11,24,24,31
	  stw       r5, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  li        r7, 0xA
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r8)
	  stb       r0, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0xC(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r0, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r10, 0x10(r31)
	  lwz       r5, 0x8(r6)
	  rlwinm    r9,r10,8,24,31
	  rlwinm    r8,r10,16,24,31
	  addi      r0, r5, 0x1
	  rlwinm    r7,r10,24,24,31
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r10, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x0(r6)
	  lwz       r0, 0x8(r6)
	  sub       r0, r0, r5
	  stw       r0, 0x48(r31)
	  lwz       r8, -0x7158(r13)
	  li        r9, 0x3
	  li        r7, 0xE
	  addi      r5, r1, 0x14
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r3, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r9, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r11, 0x16(r31)
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r5, r0
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r0, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r0, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r0, r8, 0x2
	  or        r0, r4, r0
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x388
	  mr        r10, r3

	.loc_0x388:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x1A(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x45C
	  li        r10, 0

	.loc_0x45C:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x18(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x530
	  li        r10, 0

	.loc_0x530:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x1C(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x600
	  li        r9, 0

	.loc_0x600:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  li        r30, 0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)

	.loc_0x674:
	  lwz       r3, 0x20(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x688
	  mr        r4, r30
	  bl        -0x15218

	.loc_0x688:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x8
	  blt+      .loc_0x674
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80078D68
 * Size:	00004C
 */
void J3DColorBlockLightOff::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80078DB4
 * Size:	0001AC
 */
void J3DColorBlockLightOff::patchMatColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x18(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, -0x7F50(r13)
	  lwz       r31, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  add       r3, r31, r3
	  cmplw     r3, r0
	  ble-      .loc_0x4C
	  bl        0x68E44

	.loc_0x4C:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x10
	  li        r8, 0
	  li        r7, 0x1
	  lwz       r4, 0x8(r5)
	  li        r6, 0xC
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r9, 0x4(r30)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r9, 0x8(r30)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x73804
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80078F60
 * Size:	000438
 */
void J3DColorBlockLightOff::patchLight()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x1C(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, -0x7F48(r13)
	  lwz       r30, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  add       r3, r30, r3
	  cmplw     r3, r0
	  ble-      .loc_0x4C
	  bl        0x68C98

	.loc_0x4C:
	  lwz       r6, -0x7158(r13)
	  li        r9, 0x10
	  li        r0, 0
	  li        r8, 0x3
	  lwz       r5, 0x8(r6)
	  li        r7, 0xE
	  addi      r3, r1, 0x14
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r4, -0x7888(r2)
	  lhz       r11, 0xE(r31)
	  stw       r4, 0x14(r1)
	  rlwinm    r4,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r3, r4
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r3, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r3, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r3, r8, 0x2
	  or        r3, r4, r3
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r3,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x120
	  mr        r10, r0

	.loc_0x120:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x12(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x1F4
	  li        r10, 0

	.loc_0x1F4:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x10(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x2C8
	  li        r10, 0

	.loc_0x2C8:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x14(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x39C
	  li        r10, 0

	.loc_0x39C:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  mr        r3, r30
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x733CC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80079398
 * Size:	00004C
 */
void J3DColorBlockLightOn::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800793E4
 * Size:	0001AC
 */
void J3DColorBlockLightOn::patchMatColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x44(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, -0x7F50(r13)
	  lwz       r31, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  add       r3, r31, r3
	  cmplw     r3, r0
	  ble-      .loc_0x4C
	  bl        0x68814

	.loc_0x4C:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x10
	  li        r8, 0
	  li        r7, 0x1
	  lwz       r4, 0x8(r5)
	  li        r6, 0xC
	  mr        r3, r31
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r9, 0x4(r30)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r9, 0x8(r30)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x731D4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80079590
 * Size:	000464
 */
void J3DColorBlockLightOn::patchLight()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x48(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, -0x7F48(r13)
	  lwz       r30, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  add       r3, r30, r3
	  cmplw     r3, r0
	  ble-      .loc_0x50
	  bl        0x68664

	.loc_0x50:
	  lwz       r6, -0x7158(r13)
	  li        r9, 0x10
	  li        r0, 0
	  li        r8, 0x3
	  lwz       r5, 0x8(r6)
	  li        r7, 0xE
	  addi      r3, r1, 0x14
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r4, -0x7888(r2)
	  lhz       r11, 0x16(r31)
	  stw       r4, 0x14(r1)
	  rlwinm    r4,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r3, r4
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r3, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r3, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r3, r8, 0x2
	  or        r3, r4, r3
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r3,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x124
	  mr        r10, r0

	.loc_0x124:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x1A(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x1F8
	  li        r10, 0

	.loc_0x1F8:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x18(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x2CC
	  li        r10, 0

	.loc_0x2CC:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x1C(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x39C
	  li        r9, 0

	.loc_0x39C:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  li        r29, 0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)

	.loc_0x410:
	  lwz       r3, 0x20(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x424
	  mr        r4, r29
	  bl        -0x15E8C

	.loc_0x424:
	  addi      r29, r29, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r29, 0x8
	  blt+      .loc_0x410
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x72D74
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800799F4
 * Size:	000068
 */
void J3DColorBlockLightOff::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,31,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  rlwinm.   r0,r31,0,30,30
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80079A5C
 * Size:	00017C
 */
void J3DColorBlockLightOff::diffMatColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7F50(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x681B4

	.loc_0x34:
	  lwz       r4, -0x7158(r13)
	  li        r8, 0x10
	  li        r7, 0
	  li        r6, 0x1
	  lwz       r3, 0x8(r4)
	  li        r5, 0xC
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r8, 0x4(r31)
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r8,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r8, 0x8(r31)
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r8,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80079BD8
 * Size:	000404
 */
void J3DColorBlockLightOff::diffLight()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7F48(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x68038

	.loc_0x34:
	  lwz       r6, -0x7158(r13)
	  li        r9, 0x10
	  li        r0, 0
	  li        r8, 0x3
	  lwz       r5, 0x8(r6)
	  li        r7, 0xE
	  addi      r3, r1, 0x14
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r4, -0x7888(r2)
	  lhz       r11, 0xE(r31)
	  stw       r4, 0x14(r1)
	  rlwinm    r4,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r3, r4
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r3, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r3, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r3, r8, 0x2
	  or        r3, r4, r3
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r3,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x108
	  mr        r10, r0

	.loc_0x108:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x12(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x1DC
	  li        r10, 0

	.loc_0x1DC:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x10(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x2B0
	  li        r10, 0

	.loc_0x2B0:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x14(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x380
	  li        r9, 0

	.loc_0x380:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80079FDC
 * Size:	000070
 */
void J3DColorBlockLightOn::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,31,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  rlwinm.   r0,r31,0,30,30
	  bne-      .loc_0x44
	  rlwinm.   r0,r31,28,28,31
	  beq-      .loc_0x58

	.loc_0x44:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x58:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A04C
 * Size:	00017C
 */
void J3DColorBlockLightOn::diffMatColor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7F50(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x67BC4

	.loc_0x34:
	  lwz       r4, -0x7158(r13)
	  li        r8, 0x10
	  li        r7, 0
	  li        r6, 0x1
	  lwz       r3, 0x8(r4)
	  li        r5, 0xC
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r8, 0x4(r31)
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r8,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r8, 0x8(r31)
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r8,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A1C8
 * Size:	000434
 */
void J3DColorBlockLightOn::diffLight()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, -0x7F48(r13)
	  lwz       r4, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  add       r3, r4, r3
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x67A44

	.loc_0x38:
	  lwz       r6, -0x7158(r13)
	  li        r9, 0x10
	  li        r0, 0
	  li        r8, 0x3
	  lwz       r5, 0x8(r6)
	  li        r7, 0xE
	  addi      r3, r1, 0x14
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r4, -0x7888(r2)
	  lhz       r11, 0x16(r31)
	  stw       r4, 0x14(r1)
	  rlwinm    r4,r11,23,30,31
	  rlwinm    r7,r11,25,24,27
	  lbzx      r8, r3, r4
	  rlwinm    r9,r11,0,31,31
	  rlwimi    r7,r11,30,28,31
	  rlwinm    r10,r11,25,30,31
	  neg       r3, r8
	  rlwimi    r9,r11,0,30,30
	  or        r5, r3, r8
	  cmpwi     r8, 0
	  subfic    r4, r8, 0x2
	  subi      r3, r8, 0x2
	  or        r3, r4, r3
	  rlwimi    r9,r7,2,26,29
	  rlwinm    r8,r7,7,17,20
	  rlwinm    r7,r5,11,21,21
	  rlwinm    r6,r3,10,22,22
	  rlwimi    r9,r11,0,25,25
	  bne-      .loc_0x10C
	  mr        r10, r0

	.loc_0x10C:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x10
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x1A(r31)
	  stw       r0, 0x10(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x1E0
	  li        r10, 0

	.loc_0x1E0:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0xC
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r8, 0x18(r31)
	  stw       r0, 0xC(r1)
	  rlwinm    r0,r8,23,30,31
	  rlwinm    r6,r8,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r9,r8,0,31,31
	  rlwimi    r6,r8,30,28,31
	  rlwinm    r10,r8,25,30,31
	  neg       r0, r7
	  rlwimi    r9,r8,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r9,r6,2,26,29
	  rlwinm    r3,r8,26,31,31
	  rlwinm    r8,r6,7,17,20
	  rlwinm    r7,r4,11,21,21
	  rlwinm    r6,r0,10,22,22
	  rlwimi    r9,r3,6,25,25
	  bne-      .loc_0x2B4
	  li        r10, 0

	.loc_0x2B4:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r0,r10,7,0,24
	  or        r0, r9, r0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x8(r5)
	  or        r0, r6, r0
	  or        r6, r7, r0
	  addi      r0, r4, 0x1
	  or        r8, r8, r6
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,16,24,31
	  rlwinm    r6,r8,24,24,31
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r0, -0x7888(r2)
	  lhz       r10, 0x1C(r31)
	  stw       r0, 0x8(r1)
	  rlwinm    r0,r10,23,30,31
	  rlwinm    r6,r10,25,24,27
	  lbzx      r7, r3, r0
	  rlwinm    r8,r10,0,31,31
	  rlwimi    r6,r10,30,28,31
	  rlwinm    r9,r10,25,30,31
	  neg       r0, r7
	  rlwimi    r8,r10,0,30,30
	  or        r4, r0, r7
	  cmpwi     r7, 0
	  subfic    r3, r7, 0x2
	  subi      r0, r7, 0x2
	  or        r0, r3, r0
	  rlwimi    r8,r6,2,26,29
	  rlwinm    r7,r6,7,17,20
	  rlwinm    r6,r4,11,21,21
	  rlwinm    r5,r0,10,22,22
	  rlwimi    r8,r10,0,25,25
	  bne-      .loc_0x384
	  li        r9, 0

	.loc_0x384:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r0,r9,7,0,24
	  or        r0, r8, r0
	  li        r30, 0
	  lwz       r3, 0x8(r4)
	  or        r0, r5, r0
	  or        r5, r6, r0
	  addi      r0, r3, 0x1
	  or        r7, r7, r5
	  stw       r0, 0x8(r4)
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)

	.loc_0x3F8:
	  lwz       r3, 0x20(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x40C
	  mr        r4, r30
	  bl        -0x16AAC

	.loc_0x40C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x8
	  blt+      .loc_0x3F8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A5FC
 * Size:	0000A8
 */
void J3DTexGenBlock4::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r31, r28
	  lwz       r4, -0x7158(r13)
	  mr        r30, r28
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x58(r28)

	.loc_0x40:
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0x3C
	  beq-      .loc_0x60
	  mr        r4, r29
	  bl        -0x16550

	.loc_0x60:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x6
	  cmplwi    r29, 0x4
	  addi      r31, r31, 0x4
	  blt+      .loc_0x40
	  lwz       r3, 0x4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  addi      r4, r28, 0x8
	  bl        -0x16AA8

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A6A4
 * Size:	0000A8
 */
void J3DTexGenBlockBasic::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r31, r28
	  lwz       r4, -0x7158(r13)
	  mr        r30, r28
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x58(r28)

	.loc_0x40:
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x60
	  lbz       r0, 0xA(r30)
	  cmplwi    r0, 0x3C
	  beq-      .loc_0x60
	  mr        r4, r29
	  bl        -0x165F8

	.loc_0x60:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x6
	  cmplwi    r29, 0x8
	  addi      r31, r31, 0x4
	  blt+      .loc_0x40
	  lwz       r3, 0x4(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x88
	  addi      r4, r28, 0x8
	  bl        -0x16B50

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A74C
 * Size:	000090
 */
void J3DTexGenBlockPatched::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x58(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x3C:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  mr        r4, r29
	  bl        -0x16690

	.loc_0x50:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmplwi    r29, 0x8
	  blt+      .loc_0x3C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x71F8C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A7DC
 * Size:	0000AC
 */
void J3DTexGenBlock4::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  lwz       r5, -0x7158(r13)
	  lwz       r0, 0x58(r3)
	  lwz       r4, 0x0(r5)
	  add       r0, r4, r0
	  stw       r0, 0x8(r5)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lbz       r0, 0xA(r29)
	  cmplwi    r0, 0x3C
	  beq-      .loc_0x64
	  mr        r4, r28
	  bl        -0x16734

	.loc_0x64:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x6
	  cmplwi    r28, 0x4
	  addi      r30, r30, 0x4
	  blt+      .loc_0x44
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x71EE4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A888
 * Size:	0000AC
 */
void J3DTexGenBlockBasic::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  lwz       r5, -0x7158(r13)
	  lwz       r0, 0x58(r3)
	  lwz       r4, 0x0(r5)
	  add       r0, r4, r0
	  stw       r0, 0x8(r5)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lbz       r0, 0xA(r29)
	  cmplwi    r0, 0x3C
	  beq-      .loc_0x64
	  mr        r4, r28
	  bl        -0x167E0

	.loc_0x64:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x6
	  cmplwi    r28, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x44
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x71E38
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A934
 * Size:	000068
 */
void J3DTexGenBlockPatched::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,24,28,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,19,19
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A99C
 * Size:	000058
 */
void J3DTexGenBlockPatched::diffTexMtx()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x30
	  mr        r4, r30
	  bl        -0x168C0

	.loc_0x30:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x8
	  blt+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007A9F4
 * Size:	000034
 */
void J3DTexGenBlockPatched::diffTexGen()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x4(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x24
	  addi      r4, r4, 0x8
	  bl        -0x16E3C

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007AA28
 * Size:	000240
 */
void J3DTevBlock1::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x4(r31)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x69
	  cmplw     r3, r0
	  ble-      .loc_0x44
	  bl        0x671D8

	.loc_0x44:
	  lhz       r0, 0x8(r31)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  addi      r4, r31, 0x8
	  li        r3, 0
	  bl        -0x156F8

	.loc_0x5C:
	  lbz       r4, 0xA(r31)
	  li        r3, 0
	  lbz       r5, 0xB(r31)
	  li        r7, 0xFF
	  lbz       r6, 0xC(r31)
	  li        r8, 0xFF
	  li        r9, 0xFF
	  bl        -0x45A8
	  lbz       r4, 0xB(r31)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xA(r31)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x54C8
	  lwz       r5, -0x7158(r13)
	  li        r0, 0x61
	  lwz       r9, 0xE(r31)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r3, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r9, 0x12(r31)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r9,8,24,31
	  rlwinm    r7,r9,16,24,31
	  addi      r3, r4, 0x1
	  rlwinm    r6,r9,24,24,31
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x18(r31)
	  lwz       r4, 0x8(r5)
	  oris      r8, r3, 0x1000
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  stb       r0, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007AC68
 * Size:	000504
 */
void J3DTevBlock2::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r30, r3
	  mr        r25, r30
	  li        r26, 0
	  lwz       r4, -0x7158(r13)
	  lbz       r31, 0x34(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x4(r30)

	.loc_0x34:
	  lhz       r0, 0x8(r25)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x4C
	  mr        r3, r26
	  addi      r4, r25, 0x8
	  bl        -0x15928

	.loc_0x4C:
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x2
	  cmplwi    r26, 0x2
	  blt+      .loc_0x34
	  lbz       r4, 0xC(r30)
	  li        r3, 0
	  lbz       r5, 0xD(r30)
	  lbz       r6, 0xE(r30)
	  lbz       r7, 0x10(r30)
	  lbz       r8, 0x11(r30)
	  lbz       r9, 0x12(r30)
	  bl        -0x47E8
	  lbz       r4, 0xD(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xC(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x5708
	  lbz       r4, 0x11(r30)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBE4
	  lbz       r0, 0x10(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r3, r4
	  rlwinm    r3,r0,0,29,31
	  lhz       r4, 0x4(r7)
	  li        r9, 0
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x5758
	  lwz       r4, -0x7158(r13)
	  mr        r25, r30
	  li        r26, 0
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x68(r30)

	.loc_0x134:
	  lwz       r5, 0x14(r25)
	  addi      r3, r26, 0x1
	  lwz       r0, 0x18(r25)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x45CC
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x8
	  cmplwi    r26, 0x3
	  blt+      .loc_0x134
	  li        r26, 0
	  mr        r25, r30

	.loc_0x168:
	  lwz       r0, 0x45(r25)
	  mr        r3, r26
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x4760
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmplwi    r26, 0x4
	  blt+      .loc_0x168
	  mr        r3, r30
	  mr        r4, r30
	  li        r5, 0
	  mtctr     r31
	  cmplwi    r31, 0
	  ble-      .loc_0x320

	.loc_0x1A4:
	  lwz       r9, -0x7158(r13)
	  addi      r6, r5, 0x10
	  lwz       r25, 0x35(r3)
	  li        r0, 0x61
	  lwz       r8, 0x8(r9)
	  rlwinm    r6,r6,24,0,7
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r25, 0x39(r3)
	  addi      r3, r3, 0x8
	  lwz       r8, 0x8(r9)
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r9, 0x60(r4)
	  addi      r4, r4, 0x4
	  lwz       r7, 0x8(r8)
	  or        r11, r9, r6
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  rlwinm    r8,r11,24,24,31
	  stb       r0, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  bdnz+     .loc_0x1A4

	.loc_0x320:
	  lis       r3, 0x8051
	  li        r0, 0x4
	  addi      r3, r3, 0x1994
	  li        r6, 0
	  li        r4, 0
	  mtctr     r0

	.loc_0x338:
	  addi      r5, r4, 0x59
	  lwz       r12, -0x7158(r13)
	  lbzx      r7, r30, r5
	  rlwinm    r0,r6,1,31,31
	  lwz       r11, 0x8(r12)
	  add       r0, r0, r6
	  rlwinm    r7,r7,2,0,29
	  lbz       r26, 0x58(r30)
	  add       r9, r3, r7
	  lbz       r27, 0x56(r30)
	  lbz       r8, 0x1(r9)
	  srawi     r7, r0, 0x1
	  lbz       r25, 0x0(r9)
	  addi      r10, r11, 0x1
	  lbz       r28, 0x57(r30)
	  rlwinm    r9,r8,2,0,29
	  lbz       r31, 0x55(r30)
	  li        r0, 0x61
	  or        r9, r25, r9
	  addi      r8, r6, 0x2
	  stw       r10, 0x8(r12)
	  rlwinm    r10,r31,4,0,27
	  or        r9, r10, r9
	  addi      r29, r7, 0xF6
	  stb       r0, 0x0(r11)
	  rlwinm    r11,r28,9,0,22
	  rlwinm    r7,r8,1,31,31
	  rlwinm    r12,r27,14,0,17
	  add       r7, r7, r8
	  or        r11, r11, r9
	  lwz       r10, -0x7158(r13)
	  rlwinm    r31,r26,19,0,12
	  or        r8, r12, r11
	  srawi     r7, r7, 0x1
	  or        r25, r31, r8
	  lwz       r9, 0x8(r10)
	  rlwimi    r25,r29,24,0,7
	  addi      r11, r7, 0xF6
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  rlwinm    r7,r25,8,24,31
	  rlwinm    r12,r25,16,24,31
	  rlwinm    r10,r25,24,24,31
	  stb       r7, 0x0(r9)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lbzx      r5, r30, r5
	  lwz       r31, -0x7158(r13)
	  rlwinm    r5,r5,2,0,29
	  lbz       r7, 0x58(r30)
	  add       r25, r3, r5
	  lbz       r9, 0x56(r30)
	  lbz       r5, 0x3(r25)
	  rlwinm    r10,r7,19,0,12
	  lwz       r12, 0x8(r31)
	  rlwinm    r9,r9,14,0,17
	  lbz       r8, 0x57(r30)
	  rlwinm    r5,r5,2,0,29
	  lbz       r26, 0x2(r25)
	  addi      r7, r12, 0x1
	  lbz       r25, 0x55(r30)
	  rlwinm    r8,r8,9,0,22
	  or        r5, r26, r5
	  stw       r7, 0x8(r31)
	  rlwinm    r7,r25,4,0,27
	  or        r5, r7, r5
	  stb       r0, 0x0(r12)
	  or        r0, r8, r5
	  or        r0, r9, r0
	  lwz       r7, -0x7158(r13)
	  or        r10, r10, r0
	  rlwimi    r10,r11,24,0,7
	  lwz       r5, 0x8(r7)
	  rlwinm    r8,r10,8,24,31
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  rlwinm    r9,r10,16,24,31
	  rlwinm    r8,r10,24,24,31
	  addi      r4, r4, 0x1
	  lwz       r5, 0x8(r7)
	  addi      r6, r6, 0x4
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r5)
	  bdnz+     .loc_0x338
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007B16C
 * Size:	000528
 */
void J3DTevBlock4::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r27, r3
	  mr        r25, r27
	  li        r26, 0
	  lwz       r4, -0x7158(r13)
	  lbz       r29, 0x20(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x4(r27)

	.loc_0x34:
	  lhz       r0, 0x8(r25)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x4C
	  mr        r3, r26
	  addi      r4, r25, 0x8
	  bl        -0x15E2C

	.loc_0x4C:
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x2
	  cmplwi    r26, 0x4
	  blt+      .loc_0x34
	  lis       r3, 0x8051
	  mr        r30, r27
	  subi      r31, r3, 0xBE4
	  li        r28, 0
	  b         .loc_0x134

	.loc_0x70:
	  addi      r0, r28, 0x1
	  lbz       r4, 0x10(r30)
	  rlwinm    r0,r0,2,0,29
	  lbz       r5, 0x11(r30)
	  add       r25, r27, r0
	  lbz       r6, 0x12(r30)
	  lbz       r7, 0x10(r25)
	  mr        r3, r28
	  lbz       r8, 0x11(r25)
	  lbz       r9, 0x12(r25)
	  bl        -0x4D0C
	  lbz       r3, 0x11(r30)
	  li        r6, 0
	  lbz       r0, 0x10(r30)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x5C28
	  lbz       r3, 0x11(r25)
	  li        r6, 0
	  lbz       r0, 0x10(r25)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x5C70
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x2

	.loc_0x134:
	  cmplw     r28, r29
	  blt+      .loc_0x70
	  lwz       r4, -0x7158(r13)
	  mr        r25, r27
	  li        r26, 0
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x90(r27)

	.loc_0x158:
	  lwz       r5, 0x42(r25)
	  addi      r3, r26, 0x1
	  lwz       r0, 0x46(r25)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x4AF4
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x8
	  cmplwi    r26, 0x3
	  blt+      .loc_0x158
	  li        r26, 0
	  mr        r25, r27

	.loc_0x18C:
	  lwz       r0, 0x62(r25)
	  mr        r3, r26
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x4C88
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmplwi    r26, 0x4
	  blt+      .loc_0x18C
	  mr        r3, r27
	  mr        r4, r27
	  li        r5, 0
	  mtctr     r29
	  cmplwi    r29, 0
	  ble-      .loc_0x344

	.loc_0x1C8:
	  lwz       r9, -0x7158(r13)
	  addi      r6, r5, 0x10
	  lwz       r25, 0x21(r3)
	  li        r0, 0x61
	  lwz       r8, 0x8(r9)
	  rlwinm    r6,r6,24,0,7
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r25, 0x25(r3)
	  addi      r3, r3, 0x8
	  lwz       r8, 0x8(r9)
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r9, 0x80(r4)
	  addi      r4, r4, 0x4
	  lwz       r7, 0x8(r8)
	  or        r11, r9, r6
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  rlwinm    r8,r11,24,24,31
	  stb       r0, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  bdnz+     .loc_0x1C8

	.loc_0x344:
	  lis       r3, 0x8051
	  li        r0, 0x4
	  addi      r3, r3, 0x1994
	  li        r6, 0
	  li        r4, 0
	  mtctr     r0

	.loc_0x35C:
	  addi      r5, r4, 0x7A
	  lwz       r12, -0x7158(r13)
	  lbzx      r7, r27, r5
	  rlwinm    r0,r6,1,31,31
	  lwz       r11, 0x8(r12)
	  add       r0, r0, r6
	  rlwinm    r7,r7,2,0,29
	  lbz       r26, 0x77(r27)
	  add       r9, r3, r7
	  lbz       r31, 0x73(r27)
	  lbz       r8, 0x1(r9)
	  srawi     r7, r0, 0x1
	  lbz       r25, 0x0(r9)
	  addi      r10, r11, 0x1
	  lbz       r30, 0x76(r27)
	  rlwinm    r9,r8,2,0,29
	  lbz       r28, 0x72(r27)
	  li        r0, 0x61
	  or        r9, r25, r9
	  addi      r8, r6, 0x2
	  stw       r10, 0x8(r12)
	  rlwinm    r10,r28,4,0,27
	  or        r9, r10, r9
	  addi      r29, r7, 0xF6
	  stb       r0, 0x0(r11)
	  rlwinm    r11,r30,9,0,22
	  rlwinm    r7,r8,1,31,31
	  rlwinm    r12,r31,14,0,17
	  add       r7, r7, r8
	  or        r11, r11, r9
	  lwz       r10, -0x7158(r13)
	  rlwinm    r28,r26,19,0,12
	  or        r8, r12, r11
	  srawi     r7, r7, 0x1
	  or        r25, r28, r8
	  lwz       r9, 0x8(r10)
	  rlwimi    r25,r29,24,0,7
	  addi      r11, r7, 0xF6
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  rlwinm    r7,r25,8,24,31
	  rlwinm    r12,r25,16,24,31
	  rlwinm    r10,r25,24,24,31
	  stb       r7, 0x0(r9)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lbzx      r5, r27, r5
	  lwz       r28, -0x7158(r13)
	  rlwinm    r5,r5,2,0,29
	  lbz       r7, 0x79(r27)
	  add       r25, r3, r5
	  lbz       r9, 0x75(r27)
	  lbz       r5, 0x3(r25)
	  rlwinm    r10,r7,19,0,12
	  lwz       r12, 0x8(r28)
	  rlwinm    r9,r9,14,0,17
	  lbz       r8, 0x78(r27)
	  rlwinm    r5,r5,2,0,29
	  lbz       r26, 0x2(r25)
	  addi      r7, r12, 0x1
	  lbz       r25, 0x74(r27)
	  rlwinm    r8,r8,9,0,22
	  or        r5, r26, r5
	  stw       r7, 0x8(r28)
	  rlwinm    r7,r25,4,0,27
	  or        r5, r7, r5
	  stb       r0, 0x0(r12)
	  or        r0, r8, r5
	  or        r0, r9, r0
	  lwz       r7, -0x7158(r13)
	  or        r10, r10, r0
	  rlwimi    r10,r11,24,0,7
	  lwz       r5, 0x8(r7)
	  rlwinm    r8,r10,8,24,31
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  rlwinm    r9,r10,16,24,31
	  rlwinm    r8,r10,24,24,31
	  addi      r4, r4, 0x1
	  lwz       r5, 0x8(r7)
	  addi      r6, r6, 0x4
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r5)
	  bdnz+     .loc_0x35C
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007B694
 * Size:	00052C
 */
void J3DTevBlock16::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r27, r3
	  mr        r25, r27
	  li        r26, 0
	  lwz       r4, -0x7158(r13)
	  lbz       r29, 0x58(r3)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x4(r27)

	.loc_0x34:
	  lhz       r0, 0x8(r25)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x4C
	  mr        r3, r26
	  addi      r4, r25, 0x8
	  bl        -0x16354

	.loc_0x4C:
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x2
	  cmplwi    r26, 0x8
	  blt+      .loc_0x34
	  lis       r3, 0x8051
	  mr        r30, r27
	  subi      r31, r3, 0xBE4
	  li        r28, 0
	  b         .loc_0x134

	.loc_0x70:
	  addi      r0, r28, 0x1
	  lbz       r4, 0x18(r30)
	  rlwinm    r0,r0,2,0,29
	  lbz       r5, 0x19(r30)
	  add       r25, r27, r0
	  lbz       r6, 0x1A(r30)
	  lbz       r7, 0x18(r25)
	  mr        r3, r28
	  lbz       r8, 0x19(r25)
	  lbz       r9, 0x1A(r25)
	  bl        -0x5234
	  lbz       r3, 0x19(r30)
	  li        r6, 0
	  lbz       r0, 0x18(r30)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6150
	  lbz       r3, 0x19(r25)
	  li        r6, 0
	  lbz       r0, 0x18(r25)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6198
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x2

	.loc_0x134:
	  cmplw     r28, r29
	  blt+      .loc_0x70
	  lwz       r4, -0x7158(r13)
	  mr        r25, r27
	  li        r26, 0
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x170(r27)

	.loc_0x158:
	  lwz       r5, 0xDA(r25)
	  addi      r3, r26, 0x1
	  lwz       r0, 0xDE(r25)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x501C
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x8
	  cmplwi    r26, 0x3
	  blt+      .loc_0x158
	  li        r26, 0
	  mr        r25, r27

	.loc_0x18C:
	  lwz       r0, 0xFA(r25)
	  mr        r3, r26
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x51B0
	  addi      r26, r26, 0x1
	  addi      r25, r25, 0x4
	  cmplwi    r26, 0x4
	  blt+      .loc_0x18C
	  mr        r3, r27
	  mr        r4, r27
	  li        r5, 0
	  mtctr     r29
	  cmplwi    r29, 0
	  ble-      .loc_0x344

	.loc_0x1C8:
	  lwz       r9, -0x7158(r13)
	  addi      r6, r5, 0x10
	  lwz       r25, 0x59(r3)
	  li        r0, 0x61
	  lwz       r8, 0x8(r9)
	  rlwinm    r6,r6,24,0,7
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  addi      r5, r5, 0x1
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r25, 0x5D(r3)
	  addi      r3, r3, 0x8
	  lwz       r8, 0x8(r9)
	  rlwinm    r12,r25,8,24,31
	  rlwinm    r11,r25,16,24,31
	  addi      r7, r8, 0x1
	  rlwinm    r10,r25,24,24,31
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r25, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r9, 0x130(r4)
	  addi      r4, r4, 0x4
	  lwz       r7, 0x8(r8)
	  or        r11, r9, r6
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  rlwinm    r8,r11,24,24,31
	  stb       r0, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  bdnz+     .loc_0x1C8

	.loc_0x344:
	  lis       r3, 0x8051
	  li        r0, 0x4
	  addi      r3, r3, 0x1994
	  li        r7, 0
	  li        r4, 0
	  mtctr     r0

	.loc_0x35C:
	  addi      r6, r4, 0x12A
	  add       r5, r27, r7
	  lbzx      r8, r27, r6
	  rlwinm    r0,r7,1,31,31
	  lwz       r12, -0x7158(r13)
	  add       r0, r0, r7
	  rlwinm    r8,r8,2,0,29
	  lbz       r11, 0x10A(r5)
	  add       r25, r3, r8
	  lwz       r28, 0x8(r12)
	  lbz       r9, 0x1(r25)
	  srawi     r8, r0, 0x1
	  lbz       r26, 0x11B(r5)
	  addi      r10, r28, 0x1
	  lbz       r31, 0x10B(r5)
	  addi      r30, r8, 0xF6
	  rlwinm    r8,r9,2,0,29
	  lbz       r29, 0x11A(r5)
	  lbz       r25, 0x0(r25)
	  li        r0, 0x61
	  rlwinm    r11,r11,4,0,27
	  addi      r9, r7, 0x2
	  stw       r10, 0x8(r12)
	  or        r10, r25, r8
	  rlwinm    r12,r29,9,0,22
	  rlwinm    r29,r26,19,0,12
	  stb       r0, 0x0(r28)
	  or        r10, r11, r10
	  rlwinm    r8,r9,1,31,31
	  rlwinm    r28,r31,14,0,17
	  or        r10, r12, r10
	  lwz       r11, -0x7158(r13)
	  or        r10, r28, r10
	  add       r8, r8, r9
	  or        r25, r29, r10
	  lwz       r10, 0x8(r11)
	  rlwimi    r25,r30,24,0,7
	  srawi     r8, r8, 0x1
	  addi      r9, r10, 0x1
	  stw       r9, 0x8(r11)
	  rlwinm    r9,r25,8,24,31
	  addi      r11, r8, 0xF6
	  rlwinm    r28,r25,16,24,31
	  stb       r9, 0x0(r10)
	  rlwinm    r12,r25,24,24,31
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r28, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r12, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r25, 0x0(r9)
	  lbzx      r6, r27, r6
	  lwz       r29, -0x7158(r13)
	  rlwinm    r6,r6,2,0,29
	  lbz       r8, 0x11D(r5)
	  add       r25, r3, r6
	  lwz       r28, 0x8(r29)
	  lbz       r6, 0x3(r25)
	  rlwinm    r10,r8,19,0,12
	  lbz       r9, 0x10D(r5)
	  addi      r12, r28, 0x1
	  lbz       r8, 0x11C(r5)
	  rlwinm    r6,r6,2,0,29
	  lbz       r26, 0x2(r25)
	  rlwinm    r9,r9,14,0,17
	  lbz       r25, 0x10C(r5)
	  rlwinm    r8,r8,9,0,22
	  or        r5, r26, r6
	  stw       r12, 0x8(r29)
	  rlwinm    r6,r25,4,0,27
	  or        r5, r6, r5
	  stb       r0, 0x0(r28)
	  or        r0, r8, r5
	  or        r0, r9, r0
	  lwz       r6, -0x7158(r13)
	  or        r10, r10, r0
	  rlwimi    r10,r11,24,0,7
	  lwz       r5, 0x8(r6)
	  rlwinm    r8,r10,8,24,31
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  rlwinm    r9,r10,16,24,31
	  rlwinm    r8,r10,24,24,31
	  addi      r4, r4, 0x1
	  lwz       r5, 0x8(r6)
	  addi      r7, r7, 0x4
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r0, r5, 0x1
	  stw       r0, 0x8(r6)
	  stb       r10, 0x0(r5)
	  bdnz+     .loc_0x35C
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BBC0
 * Size:	000094
 */
void J3DTevBlockPatched::patchTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r29
	  addi      r4, r30, 0x8
	  bl        -0x16888

	.loc_0x54:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r29, 0x8
	  blt+      .loc_0x3C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70B14
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BC54
 * Size:	0000D0
 */
void J3DTevBlockPatched::patchTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r30, r28
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0xD4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r5, 0x98(r30)
	  addi      r3, r29, 0x1
	  lwz       r0, 0x9C(r30)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x54C8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x8
	  cmplwi    r29, 0x3
	  blt+      .loc_0x44
	  li        r29, 0
	  mr        r30, r28

	.loc_0x78:
	  lwz       r0, 0xB8(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x565C
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmplwi    r29, 0x4
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70A48
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BD24
 * Size:	00016C
 */
void J3DTevBlockPatched::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r27, r26
	  li        r25, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lbz       r28, 0xD0(r26)
	  lwz       r30, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r27)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r25
	  addi      r4, r27, 0x8
	  bl        -0x169EC

	.loc_0x54:
	  addi      r25, r25, 0x1
	  addi      r27, r27, 0x2
	  cmplwi    r25, 0x8
	  blt+      .loc_0x3C
	  lis       r3, 0x8051
	  mr        r29, r26
	  subi      r31, r3, 0xBE4
	  li        r27, 0
	  b         .loc_0x13C

	.loc_0x78:
	  addi      r0, r27, 0x1
	  lbz       r4, 0x18(r29)
	  rlwinm    r0,r0,2,0,29
	  lbz       r5, 0x19(r29)
	  add       r25, r26, r0
	  lbz       r6, 0x1A(r29)
	  lbz       r7, 0x18(r25)
	  mr        r3, r27
	  lbz       r8, 0x19(r25)
	  lbz       r9, 0x1A(r25)
	  bl        -0x58CC
	  lbz       r3, 0x19(r29)
	  li        r6, 0
	  lbz       r0, 0x18(r29)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x67E8
	  lbz       r3, 0x19(r25)
	  li        r6, 0
	  lbz       r0, 0x18(r25)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6830
	  addi      r29, r29, 0x8
	  addi      r27, r27, 0x2

	.loc_0x13C:
	  cmplw     r27, r28
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x708D0
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BE90
 * Size:	00004C
 */
void J3DTevBlockPatched::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BEDC
 * Size:	00006C
 */
void J3DTevBlock1::patchTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r5, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r4, 0x0(r5)
	  add       r0, r4, r0
	  stw       r0, 0x8(r5)
	  lhz       r0, 0x8(r3)
	  lwz       r4, -0x7158(r13)
	  cmplwi    r0, 0xFFFF
	  lwz       r31, 0x8(r4)
	  beq-      .loc_0x44
	  addi      r4, r3, 0x8
	  li        r3, 0
	  bl        -0x16B94

	.loc_0x44:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70818
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007BF48
 * Size:	000004
 */
void J3DTevBlock1::patchTevReg() { }

/*
 * --INFO--
 * Address:	8007BF4C
 * Size:	0000E4
 */
void J3DTevBlock1::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lhz       r0, 0x8(r30)
	  lwz       r3, -0x7158(r13)
	  cmplwi    r0, 0xFFFF
	  lwz       r31, 0x8(r3)
	  beq-      .loc_0x4C
	  addi      r4, r30, 0x8
	  li        r3, 0
	  bl        -0x16C0C

	.loc_0x4C:
	  lbz       r4, 0xA(r30)
	  li        r3, 0
	  lbz       r5, 0xB(r30)
	  li        r7, 0xFF
	  lbz       r6, 0xC(r30)
	  li        r8, 0xFF
	  li        r9, 0xFF
	  bl        -0x5ABC
	  lbz       r4, 0xB(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xA(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x69DC
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70734
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C030
 * Size:	00002C
 */
void J3DTevBlock1::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C05C
 * Size:	000094
 */
void J3DTevBlock2::patchTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r29
	  addi      r4, r30, 0x8
	  bl        -0x16D24

	.loc_0x54:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r29, 0x2
	  blt+      .loc_0x3C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70678
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C0F0
 * Size:	0000D0
 */
void J3DTevBlock2::patchTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r30, r28
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x68(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r5, 0x14(r30)
	  addi      r3, r29, 0x1
	  lwz       r0, 0x18(r30)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x5964
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x8
	  cmplwi    r29, 0x3
	  blt+      .loc_0x44
	  li        r29, 0
	  mr        r30, r28

	.loc_0x78:
	  lwz       r0, 0x45(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x5AF8
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmplwi    r29, 0x4
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x705AC
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C1C0
 * Size:	00015C
 */
void J3DTevBlock2::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r30
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lhz       r0, 0x8(r29)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  mr        r3, r28
	  addi      r4, r29, 0x8
	  bl        -0x16E90

	.loc_0x5C:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x2
	  cmplwi    r28, 0x2
	  blt+      .loc_0x44
	  lbz       r4, 0xC(r30)
	  li        r3, 0
	  lbz       r5, 0xD(r30)
	  lbz       r6, 0xE(r30)
	  lbz       r7, 0x10(r30)
	  lbz       r8, 0x11(r30)
	  lbz       r9, 0x12(r30)
	  bl        -0x5D50
	  lbz       r4, 0xD(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xC(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6C70
	  lbz       r4, 0x11(r30)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBE4
	  lbz       r0, 0x10(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r3, r4
	  rlwinm    r3,r0,0,29,31
	  lhz       r4, 0x4(r7)
	  li        r9, 0
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6CC0
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70450
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C31C
 * Size:	00004C
 */
void J3DTevBlock2::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C368
 * Size:	000094
 */
void J3DTevBlock4::patchTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r29
	  addi      r4, r30, 0x8
	  bl        -0x17030

	.loc_0x54:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r29, 0x4
	  blt+      .loc_0x3C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x7036C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C3FC
 * Size:	0000D0
 */
void J3DTevBlock4::patchTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r30, r28
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x90(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r5, 0x42(r30)
	  addi      r3, r29, 0x1
	  lwz       r0, 0x46(r30)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x5C70
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x8
	  cmplwi    r29, 0x3
	  blt+      .loc_0x44
	  li        r29, 0
	  mr        r30, r28

	.loc_0x78:
	  lwz       r0, 0x62(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x5E04
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmplwi    r29, 0x4
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x702A0
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C4CC
 * Size:	00016C
 */
void J3DTevBlock4::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r27, r26
	  li        r25, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lbz       r28, 0x20(r26)
	  lwz       r30, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r27)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r25
	  addi      r4, r27, 0x8
	  bl        -0x17194

	.loc_0x54:
	  addi      r25, r25, 0x1
	  addi      r27, r27, 0x2
	  cmplwi    r25, 0x8
	  blt+      .loc_0x3C
	  lis       r3, 0x8051
	  mr        r29, r26
	  subi      r31, r3, 0xBE4
	  li        r27, 0
	  b         .loc_0x13C

	.loc_0x78:
	  addi      r0, r27, 0x1
	  lbz       r4, 0x10(r29)
	  rlwinm    r0,r0,2,0,29
	  lbz       r5, 0x11(r29)
	  add       r25, r26, r0
	  lbz       r6, 0x12(r29)
	  lbz       r7, 0x10(r25)
	  mr        r3, r27
	  lbz       r8, 0x11(r25)
	  lbz       r9, 0x12(r25)
	  bl        -0x6074
	  lbz       r3, 0x11(r29)
	  li        r6, 0
	  lbz       r0, 0x10(r29)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6F90
	  lbz       r3, 0x11(r25)
	  li        r6, 0
	  lbz       r0, 0x10(r25)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x6FD8
	  addi      r29, r29, 0x8
	  addi      r27, r27, 0x2

	.loc_0x13C:
	  cmplw     r27, r28
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x70128
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C638
 * Size:	00004C
 */
void J3DTevBlock4::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C684
 * Size:	000094
 */
void J3DTevBlock16::patchTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r29
	  addi      r4, r30, 0x8
	  bl        -0x1734C

	.loc_0x54:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r29, 0x8
	  blt+      .loc_0x3C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x70050
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C718
 * Size:	0000D0
 */
void J3DTevBlock16::patchTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  mr        r30, r28
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x170(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lwz       r5, 0xDA(r30)
	  addi      r3, r29, 0x1
	  lwz       r0, 0xDE(r30)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x5F8C
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x8
	  cmplwi    r29, 0x3
	  blt+      .loc_0x44
	  li        r29, 0
	  mr        r30, r28

	.loc_0x78:
	  lwz       r0, 0xFA(r30)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x6120
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x4
	  cmplwi    r29, 0x4
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x6FF84
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C7E8
 * Size:	00016C
 */
void J3DTevBlock16::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  mr        r27, r26
	  li        r25, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lbz       r28, 0x58(r26)
	  lwz       r30, 0x8(r3)

	.loc_0x3C:
	  lhz       r0, 0x8(r27)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  mr        r3, r25
	  addi      r4, r27, 0x8
	  bl        -0x174B0

	.loc_0x54:
	  addi      r25, r25, 0x1
	  addi      r27, r27, 0x2
	  cmplwi    r25, 0x8
	  blt+      .loc_0x3C
	  lis       r3, 0x8051
	  mr        r29, r26
	  subi      r31, r3, 0xBE4
	  li        r27, 0
	  b         .loc_0x13C

	.loc_0x78:
	  addi      r0, r27, 0x1
	  lbz       r4, 0x18(r29)
	  rlwinm    r0,r0,2,0,29
	  lbz       r5, 0x19(r29)
	  add       r25, r26, r0
	  lbz       r6, 0x1A(r29)
	  lbz       r7, 0x18(r25)
	  mr        r3, r27
	  lbz       r8, 0x19(r25)
	  lbz       r9, 0x1A(r25)
	  bl        -0x6390
	  lbz       r3, 0x19(r29)
	  li        r6, 0
	  lbz       r0, 0x18(r29)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x72AC
	  lbz       r3, 0x19(r25)
	  li        r6, 0
	  lbz       r0, 0x18(r25)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x72F4
	  addi      r29, r29, 0x8
	  addi      r27, r27, 0x2

	.loc_0x13C:
	  cmplw     r27, r28
	  blt+      .loc_0x78
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x6FE0C
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C954
 * Size:	00004C
 */
void J3DTevBlock16::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007C9A0
 * Size:	0000BC
 */
void J3DTevBlock::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,16,28,31
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  rlwinm.   r0,r31,0,5,5
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  rlwinm.   r0,r31,12,28,31
	  beq-      .loc_0x88
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r31,0,4,4
	  beq-      .loc_0x88
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl

	.loc_0x88:
	  rlwinm.   r0,r31,0,7,7
	  beq-      .loc_0xA4
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CA5C
 * Size:	00005C
 */
void J3DTevBlockPatched::diffTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lhz       r0, 0x8(r31)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x34
	  mr        r3, r30
	  addi      r4, r31, 0x8
	  bl        -0x17704

	.loc_0x34:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x2
	  cmplwi    r30, 0x8
	  blt+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CAB8
 * Size:	000108
 */
void J3DTevBlockPatched::diffTevStage()
{
	/*
	.loc_0x0:
	  lbz       r0, 0xD0(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x10:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x61
	  lwz       r10, 0x38(r3)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r10, 0x3C(r3)
	  addi      r3, r3, 0x8
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CBC0
 * Size:	0000A8
 */
void J3DTevBlockPatched::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  lbz       r0, 0xD0(r3)
	  li        r11, 0
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x14:
	  lwz       r5, -0x7158(r13)
	  addi      r0, r11, 0x10
	  lwz       r6, 0x78(r3)
	  rlwinm    r0,r0,24,0,7
	  lwz       r4, 0x8(r5)
	  li        r9, 0x61
	  or        r10, r6, r0
	  addi      r3, r3, 0x4
	  addi      r0, r4, 0x1
	  addi      r11, r11, 0x1
	  stw       r0, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  rlwinm    r6,r10,24,24,31
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CC68
 * Size:	000098
 */
void J3DTevBlockPatched::diffTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r5, 0x98(r31)
	  addi      r3, r30, 0x1
	  lwz       r0, 0x9C(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x64BC
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x8
	  cmplwi    r30, 0x3
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x58:
	  lwz       r0, 0xB8(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x6650
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x58
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CD00
 * Size:	0000EC
 */
void J3DTevBlockPatched::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  li        r28, 0
	  mr        r30, r27
	  subi      r31, r3, 0xBE4
	  lbz       r29, 0xD0(r27)
	  b         .loc_0xD0

	.loc_0x2C:
	  lbz       r3, 0x19(r30)
	  li        r6, 0
	  lbz       r0, 0x18(r30)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x774C
	  addi      r0, r28, 0x1
	  li        r6, 0
	  rlwinm    r0,r0,2,0,29
	  li        r9, 0
	  add       r4, r27, r0
	  lbz       r3, 0x19(r4)
	  lbz       r0, 0x18(r4)
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x77A0
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x2

	.loc_0xD0:
	  cmplw     r28, r29
	  blt+      .loc_0x2C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CDEC
 * Size:	000034
 */
void J3DTevBlock1::diffTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x8(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x24
	  addi      r4, r3, 0x8
	  li        r3, 0
	  bl        -0x17A84

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CE20
 * Size:	000004
 */
void J3DTevBlock1::diffTevReg() { }

/*
 * --INFO--
 * Address:	8007CE24
 * Size:	0000F0
 */
void J3DTevBlock1::diffTevStage()
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x61
	  lwz       r10, 0xE(r3)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r8, 0x12(r3)
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r8,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CF14
 * Size:	000080
 */
void J3DTevBlock1::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7158(r13)
	  li        r8, 0x61
	  lwz       r0, 0x18(r3)
	  lwz       r3, 0x8(r4)
	  oris      r9, r0, 0x1000
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  rlwinm    r5,r9,24,24,31
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CF94
 * Size:	000068
 */
void J3DTevBlock1::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0xBE4
	  li        r9, 0
	  lbz       r5, 0xB(r3)
	  lbz       r3, 0xA(r3)
	  rlwinm    r4,r5,3,26,28
	  add       r7, r0, r4
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x79C4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007CFFC
 * Size:	00005C
 */
void J3DTevBlock2::diffTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lhz       r0, 0x8(r31)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x34
	  mr        r3, r30
	  addi      r4, r31, 0x8
	  bl        -0x17CA4

	.loc_0x34:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x2
	  cmplwi    r30, 0x2
	  blt+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D058
 * Size:	000098
 */
void J3DTevBlock2::diffTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r5, 0x14(r31)
	  addi      r3, r30, 0x1
	  lwz       r0, 0x18(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x68AC
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x8
	  cmplwi    r30, 0x3
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x58:
	  lwz       r0, 0x45(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x6A40
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x58
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D0F0
 * Size:	000108
 */
void J3DTevBlock2::diffTevStage()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x34(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x10:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x61
	  lwz       r10, 0x35(r3)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r10, 0x39(r3)
	  addi      r3, r3, 0x8
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D1F8
 * Size:	0000A8
 */
void J3DTevBlock2::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x34(r3)
	  li        r11, 0
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x14:
	  lwz       r5, -0x7158(r13)
	  addi      r0, r11, 0x10
	  lwz       r6, 0x60(r3)
	  rlwinm    r0,r0,24,0,7
	  lwz       r4, 0x8(r5)
	  li        r9, 0x61
	  or        r10, r6, r0
	  addi      r3, r3, 0x4
	  addi      r0, r4, 0x1
	  addi      r11, r11, 0x1
	  stw       r0, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  rlwinm    r6,r10,24,24,31
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D2A0
 * Size:	0000C4
 */
void J3DTevBlock2::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r6, 0
	  li        r9, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lis       r3, 0x8051
	  lbz       r4, 0xD(r31)
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xC(r31)
	  rlwinm    r4,r4,3,26,28
	  add       r7, r0, r4
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x7CD8
	  lbz       r4, 0x11(r31)
	  lis       r3, 0x8051
	  subi      r3, r3, 0xBE4
	  lbz       r0, 0x10(r31)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r3, r4
	  rlwinm    r3,r0,0,29,31
	  lhz       r4, 0x4(r7)
	  li        r9, 0
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x7D28
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D364
 * Size:	00005C
 */
void J3DTevBlock4::diffTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lhz       r0, 0x8(r31)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x34
	  mr        r3, r30
	  addi      r4, r31, 0x8
	  bl        -0x1800C

	.loc_0x34:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x2
	  cmplwi    r30, 0x4
	  blt+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D3C0
 * Size:	000098
 */
void J3DTevBlock4::diffTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r5, 0x42(r31)
	  addi      r3, r30, 0x1
	  lwz       r0, 0x46(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x6C14
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x8
	  cmplwi    r30, 0x3
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x58:
	  lwz       r0, 0x62(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x6DA8
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x58
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D458
 * Size:	000108
 */
void J3DTevBlock4::diffTevStage()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x20(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x10:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x61
	  lwz       r10, 0x21(r3)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r10, 0x25(r3)
	  addi      r3, r3, 0x8
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D560
 * Size:	0000A8
 */
void J3DTevBlock4::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x20(r3)
	  li        r11, 0
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x14:
	  lwz       r5, -0x7158(r13)
	  addi      r0, r11, 0x10
	  lwz       r6, 0x80(r3)
	  rlwinm    r0,r0,24,0,7
	  lwz       r4, 0x8(r5)
	  li        r9, 0x61
	  or        r10, r6, r0
	  addi      r3, r3, 0x4
	  addi      r0, r4, 0x1
	  addi      r11, r11, 0x1
	  stw       r0, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  rlwinm    r6,r10,24,24,31
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D608
 * Size:	0000EC
 */
void J3DTevBlock4::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  li        r28, 0
	  mr        r30, r27
	  subi      r31, r3, 0xBE4
	  lbz       r29, 0x20(r27)
	  b         .loc_0xD0

	.loc_0x2C:
	  lbz       r3, 0x11(r30)
	  li        r6, 0
	  lbz       r0, 0x10(r30)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8054
	  addi      r0, r28, 0x1
	  li        r6, 0
	  rlwinm    r0,r0,2,0,29
	  li        r9, 0
	  add       r4, r27, r0
	  lbz       r3, 0x11(r4)
	  lbz       r0, 0x10(r4)
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x80A8
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x2

	.loc_0xD0:
	  cmplw     r28, r29
	  blt+      .loc_0x2C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D6F4
 * Size:	00005C
 */
void J3DTevBlock16::diffTexNo()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0

	.loc_0x1C:
	  lhz       r0, 0x8(r31)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x34
	  mr        r3, r30
	  addi      r4, r31, 0x8
	  bl        -0x1839C

	.loc_0x34:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x2
	  cmplwi    r30, 0x8
	  blt+      .loc_0x1C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D750
 * Size:	000098
 */
void J3DTevBlock16::diffTevReg()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  li        r30, 0
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r5, 0xDA(r31)
	  addi      r3, r30, 0x1
	  lwz       r0, 0xDE(r31)
	  addi      r4, r1, 0xC
	  stw       r5, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        -0x6FA4
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x8
	  cmplwi    r30, 0x3
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x58:
	  lwz       r0, 0xFA(r31)
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  bl        -0x7138
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x58
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D7E8
 * Size:	000108
 */
void J3DTevBlock16::diffTevStage()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x58(r3)
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x10:
	  lwz       r5, -0x7158(r13)
	  li        r9, 0x61
	  lwz       r10, 0x59(r3)
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r10, 0x5D(r3)
	  addi      r3, r3, 0x8
	  lwz       r4, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  addi      r0, r4, 0x1
	  rlwinm    r6,r10,24,24,31
	  stw       r0, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D8F0
 * Size:	0000A8
 */
void J3DTevBlock16::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  lbz       r0, 0x58(r3)
	  li        r11, 0
	  mtctr     r0
	  cmplwi    r0, 0
	  blelr-

	.loc_0x14:
	  lwz       r5, -0x7158(r13)
	  addi      r0, r11, 0x10
	  lwz       r6, 0x130(r3)
	  rlwinm    r0,r0,24,0,7
	  lwz       r4, 0x8(r5)
	  li        r9, 0x61
	  or        r10, r6, r0
	  addi      r3, r3, 0x4
	  addi      r0, r4, 0x1
	  addi      r11, r11, 0x1
	  stw       r0, 0x8(r5)
	  rlwinm    r8,r10,8,24,31
	  rlwinm    r7,r10,16,24,31
	  rlwinm    r6,r10,24,24,31
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r10, 0x0(r4)
	  bdnz+     .loc_0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007D998
 * Size:	0000EC
 */
void J3DTevBlock16::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  li        r28, 0
	  mr        r30, r27
	  subi      r31, r3, 0xBE4
	  lbz       r29, 0x58(r27)
	  b         .loc_0xD0

	.loc_0x2C:
	  lbz       r3, 0x19(r30)
	  li        r6, 0
	  lbz       r0, 0x18(r30)
	  li        r9, 0
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x83E4
	  addi      r0, r28, 0x1
	  li        r6, 0
	  rlwinm    r0,r0,2,0,29
	  li        r9, 0
	  add       r4, r27, r0
	  lbz       r3, 0x19(r4)
	  lbz       r0, 0x18(r4)
	  rlwinm    r3,r3,3,26,28
	  add       r7, r31, r3
	  lhz       r4, 0x4(r7)
	  rlwinm    r3,r0,0,29,31
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8438
	  addi      r30, r30, 0x8
	  addi      r28, r28, 0x2

	.loc_0xD0:
	  cmplw     r28, r29
	  blt+      .loc_0x2C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DA84
 * Size:	0000D4
 */
void J3DTevBlock16::ptrToIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  li        r29, 0
	  subi      r26, r3, 0xDD0
	  mr        r30, r27
	  li        r28, 0
	  lwz       r5, -0x7158(r13)
	  lwz       r0, 0x4(r27)
	  lwz       r4, 0x0(r5)
	  add       r0, r4, r0
	  stw       r0, 0x8(r5)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x9C
	  lwz       r6, -0x7158(r13)
	  mr        r3, r28
	  lwz       r5, 0x4(r27)
	  addi      r4, r30, 0x8
	  lwz       r0, 0x0(r6)
	  add       r0, r29, r0
	  add       r0, r5, r0
	  stw       r0, 0x8(r6)
	  bl        -0x185B4
	  lwz       r3, 0x58(r26)
	  addi      r29, r29, 0x14
	  lhz       r0, 0x8(r30)
	  lwz       r4, 0x4(r3)
	  rlwinm    r3,r0,5,0,26
	  addi      r0, r3, 0x8
	  lbzx      r0, r4, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0x9C
	  addi      r29, r29, 0x23

	.loc_0x9C:
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r28, 0x8
	  blt+      .loc_0x44
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x6EC08
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DB58
 * Size:	0000D4
 */
void J3DTevBlockPatched::ptrToIndex()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r3
	  lis       r3, 0x8051
	  li        r29, 0
	  subi      r26, r3, 0xDD0
	  mr        r30, r27
	  li        r28, 0
	  lwz       r5, -0x7158(r13)
	  lwz       r0, 0x4(r27)
	  lwz       r4, 0x0(r5)
	  add       r0, r4, r0
	  stw       r0, 0x8(r5)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x44:
	  lhz       r0, 0x8(r30)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x9C
	  lwz       r6, -0x7158(r13)
	  mr        r3, r28
	  lwz       r5, 0x4(r27)
	  addi      r4, r30, 0x8
	  lwz       r0, 0x0(r6)
	  add       r0, r29, r0
	  add       r0, r5, r0
	  stw       r0, 0x8(r6)
	  bl        -0x18688
	  lwz       r3, 0x58(r26)
	  addi      r29, r29, 0x14
	  lhz       r0, 0x8(r30)
	  lwz       r4, 0x4(r3)
	  rlwinm    r3,r0,5,0,26
	  addi      r0, r3, 0x8
	  lbzx      r0, r4, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0x9C
	  addi      r29, r29, 0x23

	.loc_0x9C:
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x2
	  cmplwi    r28, 0x8
	  blt+      .loc_0x44
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x6EB34
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DC2C
 * Size:	00009C
 */
void J3DTevBlock::indexToPtr_private(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  lwz       r3, -0x7158(r13)
	  lwz       r0, 0x0(r3)
	  add       r0, r0, r4
	  stw       r0, 0x8(r3)
	  lwz       r3, -0x7158(r13)
	  lwz       r31, 0x8(r3)

	.loc_0x34:
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)
	  mr        r3, r30
	  bl        -0x18914
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r30
	  bl        -0x18900
	  sth       r3, 0x8(r1)
	  mr        r3, r29
	  addi      r4, r1, 0x8
	  bl        -0x18904
	  addi      r29, r29, 0x1
	  b         .loc_0x34

	.loc_0x6C:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x6EAA0
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DCC8
 * Size:	000200
 */
void J3DIndBlockFull::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r30
	  stw       r28, 0x10(r1)
	  li        r28, 0
	  lbz       r31, 0x4(r3)
	  b         .loc_0x48

	.loc_0x30:
	  lbz       r5, 0x30(r29)
	  addi      r3, r28, 0x1
	  addi      r4, r29, 0x18
	  bl        -0x7DCC
	  addi      r29, r29, 0x1C
	  addi      r28, r28, 0x1

	.loc_0x48:
	  cmplw     r28, r31
	  blt+      .loc_0x30
	  mr        r29, r30
	  li        r28, 0
	  b         .loc_0x7C

	.loc_0x5C:
	  lbz       r4, 0x6C(r29)
	  mr        r3, r28
	  lbz       r5, 0x6D(r29)
	  lbz       r6, 0x70(r29)
	  lbz       r7, 0x71(r29)
	  bl        -0x7B28
	  addi      r29, r29, 0x8
	  addi      r28, r28, 0x2

	.loc_0x7C:
	  cmplw     r28, r31
	  blt+      .loc_0x5C
	  lbz       r4, 0x6(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0x5(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8770
	  lbz       r4, 0xA(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0x9(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x87BC
	  lbz       r4, 0xE(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0xD(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8808
	  lbz       r4, 0x12(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0x11(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8854
	  lbz       r0, 0x12(r30)
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  lbz       r4, 0x5(r30)
	  lbz       r5, 0x6(r30)
	  lbz       r6, 0x9(r30)
	  lbz       r7, 0xA(r30)
	  lbz       r8, 0xD(r30)
	  lbz       r9, 0xE(r30)
	  lbz       r10, 0x11(r30)
	  bl        -0x7BA4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DEC8
 * Size:	0000DC
 */
void J3DIndBlockFull::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm.   r0,r4,0,4,4
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  beq-      .loc_0xC4
	  lbz       r31, 0x4(r30)
	  addi      r4, r30, 0x18
	  lbz       r5, 0x30(r30)
	  li        r3, 0x1
	  bl        -0x7FC0
	  lbz       r4, 0x6C(r30)
	  li        r3, 0
	  lbz       r5, 0x6D(r30)
	  lbz       r6, 0x70(r30)
	  lbz       r7, 0x71(r30)
	  bl        -0x7D00
	  lbz       r4, 0x6(r30)
	  lis       r3, 0x8051
	  subi      r0, r3, 0xBE4
	  lbz       r3, 0x5(r30)
	  rlwinm    r4,r4,3,26,28
	  li        r6, 0
	  add       r7, r0, r4
	  li        r9, 0
	  lhz       r4, 0x4(r7)
	  lhz       r0, 0x6(r7)
	  subfic    r5, r4, 0x1
	  lhz       r4, 0x0(r7)
	  subfic    r0, r0, 0x1
	  lhz       r7, 0x2(r7)
	  cntlzw    r5, r5
	  cntlzw    r0, r0
	  rlwinm    r5,r5,27,24,31
	  rlwinm    r8,r0,27,24,31
	  bl        -0x8938
	  lbz       r0, 0x12(r30)
	  mr        r3, r31
	  stw       r0, 0x8(r1)
	  lbz       r4, 0x5(r30)
	  lbz       r5, 0x6(r30)
	  lbz       r6, 0x9(r30)
	  lbz       r7, 0xA(r30)
	  lbz       r8, 0xD(r30)
	  lbz       r9, 0xE(r30)
	  lbz       r10, 0x11(r30)
	  bl        -0x7C88

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007DFA4
 * Size:	0002C8
 */
void J3DPEBlockOpa::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1E
	  cmplw     r3, r0
	  ble-      .loc_0x2C
	  bl        0x63C74

	.loc_0x2C:
	  lwz       r7, -0x7158(r13)
	  li        r5, 0x61
	  li        r31, 0xF3
	  li        r12, 0x3F
	  lwz       r6, 0x8(r7)
	  li        r4, 0
	  li        r3, 0xFE
	  li        r11, 0x1F
	  addi      r0, r6, 0x1
	  li        r10, 0xE3
	  stw       r0, 0x8(r7)
	  li        r9, 0x41
	  li        r8, 0x31
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r31, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r12, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r9, -0x7158(r13)
	  li        r0, 0x40
	  li        r10, 0x17
	  li        r7, 0x43
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r0, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r5, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007E26C
 * Size:	0002E0
 */
void J3DPEBlockTexEdge::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1E
	  cmplw     r3, r0
	  ble-      .loc_0x34
	  bl        0x639A4

	.loc_0x34:
	  lwz       r7, -0x7158(r13)
	  li        r5, 0x61
	  li        r29, 0xF3
	  li        r30, 0x1E
	  lwz       r6, 0x8(r7)
	  li        r31, 0xFF
	  li        r12, 0x80
	  li        r4, 0xFE
	  addi      r0, r6, 0x1
	  li        r3, 0
	  stw       r0, 0x8(r7)
	  li        r11, 0x1F
	  li        r10, 0xE3
	  li        r9, 0x41
	  stb       r5, 0x0(r6)
	  li        r8, 0x31
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r29, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r30, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r31, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r12, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r9, -0x7158(r13)
	  li        r0, 0x40
	  li        r10, 0x17
	  li        r6, 0x43
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r4, r7, 0x1
	  stw       r4, 0x8(r8)
	  stb       r3, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r4, r7, 0x1
	  stw       r4, 0x8(r8)
	  stb       r3, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r4, r7, 0x1
	  stw       r4, 0x8(r8)
	  stb       r0, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r4, 0x8(r7)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007E54C
 * Size:	0002D4
 */
void J3DPEBlockXlu::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1E
	  cmplw     r3, r0
	  ble-      .loc_0x30
	  bl        0x636C8

	.loc_0x30:
	  lwz       r7, -0x7158(r13)
	  li        r5, 0x61
	  li        r30, 0xF3
	  li        r31, 0x3F
	  lwz       r6, 0x8(r7)
	  li        r4, 0
	  li        r3, 0xFE
	  li        r12, 0x1F
	  addi      r0, r6, 0x1
	  li        r11, 0xE3
	  stw       r0, 0x8(r7)
	  li        r10, 0x41
	  li        r9, 0x34
	  li        r8, 0xA1
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r30, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r31, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r3, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r12, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r7)
	  stb       r8, 0x0(r6)
	  lwz       r9, -0x7158(r13)
	  li        r0, 0x40
	  li        r10, 0x7
	  li        r7, 0x43
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r6, r8, 0x1
	  stw       r6, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r4, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r0, 0x0(r6)
	  lwz       r8, -0x7158(r13)
	  lwz       r6, 0x8(r8)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r8)
	  stb       r5, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r7, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r6)
	  stb       r4, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007E820
 * Size:	00049C
 */
void J3DPEBlockFogOff::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x1E
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x633EC

	.loc_0x38:
	  lhz       r0, 0x4(r31)
	  lis       r3, 0x8051
	  lwz       r8, -0x7158(r13)
	  addi      r4, r3, 0x1D94
	  mulli     r5, r0, 0x3
	  lbz       r10, 0x7(r31)
	  lwz       r7, 0x8(r8)
	  li        r0, 0x61
	  li        r29, 0xFE
	  add       r3, r4, r5
	  lbzx      r9, r4, r5
	  addi      r5, r7, 0x1
	  lbz       r4, 0x2(r3)
	  li        r30, 0
	  lbz       r6, 0x1(r3)
	  rlwinm    r3,r10,8,16,23
	  lbz       r10, 0x6(r31)
	  rlwinm    r4,r4,19,0,12
	  rlwinm    r6,r6,22,0,9
	  li        r12, 0x1F
	  stw       r5, 0x8(r8)
	  rlwimi    r3,r10,0,24,31
	  rlwimi    r3,r9,16,8,15
	  li        r11, 0xE7
	  stb       r0, 0x0(r7)
	  or        r3, r4, r3
	  or        r3, r6, r3
	  lwz       r5, -0x7158(r13)
	  oris      r9, r3, 0xF300
	  rlwinm    r8,r9,8,24,31
	  lwz       r4, 0x8(r5)
	  rlwinm    r7,r9,16,24,31
	  rlwinm    r6,r9,24,24,31
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r10, -0x7158(r13)
	  lbz       r4, 0x8(r31)
	  lwz       r9, 0x8(r10)
	  lbz       r3, 0xF(r31)
	  cmpwi     r4, 0x1
	  lbz       r7, 0xB(r31)
	  addi      r8, r9, 0x1
	  lbz       r6, 0xA(r31)
	  lbz       r5, 0x9(r31)
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r29, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r30, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r12, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r11, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  beq-      .loc_0x1A0
	  cmpwi     r4, 0x3
	  bne-      .loc_0x1A4

	.loc_0x1A0:
	  li        r30, 0x1

	.loc_0x1A4:
	  subfic    r9, r4, 0x3
	  rlwinm    r8,r30,0,24,31
	  subfic    r0, r4, 0x2
	  lwz       r11, -0x7158(r13)
	  cntlzw    r0, r0
	  rlwinm    r3,r3,2,22,29
	  rlwinm    r0,r0,28,23,30
	  rlwinm    r6,r6,5,0,26
	  or        r8, r0, r8
	  cntlzw    r30, r9
	  or        r8, r3, r8
	  lwz       r10, 0x8(r11)
	  or        r12, r6, r8
	  rlwinm    r5,r5,8,0,23
	  rlwinm    r8,r30,6,13,20
	  addi      r9, r10, 0x1
	  or        r12, r5, r12
	  rlwinm    r7,r7,12,0,19
	  or        r12, r8, r12
	  stw       r9, 0x8(r11)
	  or        r9, r7, r12
	  cmpwi     r4, 0x1
	  oris      r9, r9, 0x4100
	  rlwinm    r9,r9,8,24,31
	  stb       r9, 0x0(r10)
	  li        r9, 0
	  beq-      .loc_0x218
	  cmpwi     r4, 0x3
	  bne-      .loc_0x21C

	.loc_0x218:
	  li        r9, 0x1

	.loc_0x21C:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,16,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x268
	  cmpwi     r4, 0x3
	  bne-      .loc_0x26C

	.loc_0x268:
	  li        r9, 0x1

	.loc_0x26C:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,24,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x2B8
	  cmpwi     r4, 0x3
	  bne-      .loc_0x2BC

	.loc_0x2B8:
	  li        r9, 0x1

	.loc_0x2BC:
	  or        r0, r0, r9
	  lwz       r10, -0x7158(r13)
	  or        r0, r3, r0
	  lis       r3, 0x8051
	  or        r0, r6, r0
	  lwz       r4, 0x8(r10)
	  or        r0, r5, r0
	  addi      r9, r3, 0x2094
	  or        r3, r8, r0
	  li        r6, 0
	  or        r3, r7, r3
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r10)
	  ori       r3, r3, 0
	  li        r0, 0x61
	  li        r7, 0xFE
	  stb       r3, 0x0(r4)
	  lhz       r3, 0xC(r31)
	  lwz       r8, -0x7158(r13)
	  mulli     r3, r3, 0x3
	  lwz       r5, 0x8(r8)
	  add       r4, r9, r3
	  lbzx      r11, r9, r3
	  lbz       r10, 0x2(r4)
	  addi      r3, r5, 0x1
	  lbz       r9, 0x1(r4)
	  rlwinm    r4,r10,4,20,27
	  stw       r3, 0x8(r8)
	  rlwinm    r3,r9,1,0,30
	  or        r3, r11, r3
	  stb       r0, 0x0(r5)
	  or        r3, r4, r3
	  oris      r11, r3, 0x4000
	  lwz       r5, -0x7158(r13)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  rlwinm    r8,r11,24,24,31
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lbz       r9, 0xE(r31)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r8, -0x7158(r13)
	  rlwinm    r3,r9,6,18,25
	  oris      r10, r3, 0x4300
	  li        r9, 0x40
	  lwz       r4, 0x8(r8)
	  rlwinm    r7,r10,8,24,31
	  rlwinm    r6,r10,16,24,31
	  rlwinm    r5,r10,24,24,31
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r8)
	  stb       r9, 0x0(r4)
	  lwz       r8, -0x7158(r13)
	  lwz       r4, 0x8(r8)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r8)
	  stb       r0, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007ECBC
 * Size:	0002F8
 */
void J3DPEBlockFogOff::diffBlend()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0xF
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x62F50

	.loc_0x38:
	  lwz       r10, -0x7158(r13)
	  li        r0, 0x61
	  lbz       r4, 0x8(r31)
	  li        r29, 0xFE
	  lwz       r9, 0x8(r10)
	  li        r30, 0
	  lbz       r3, 0xF(r31)
	  li        r12, 0x1F
	  lbz       r7, 0xB(r31)
	  addi      r8, r9, 0x1
	  lbz       r6, 0xA(r31)
	  li        r11, 0xE7
	  lbz       r5, 0x9(r31)
	  cmpwi     r4, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r29, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r30, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r12, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r11, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  beq-      .loc_0xE8
	  cmpwi     r4, 0x3
	  bne-      .loc_0xEC

	.loc_0xE8:
	  li        r30, 0x1

	.loc_0xEC:
	  subfic    r9, r4, 0x3
	  rlwinm    r8,r30,0,24,31
	  subfic    r0, r4, 0x2
	  lwz       r11, -0x7158(r13)
	  cntlzw    r0, r0
	  rlwinm    r3,r3,2,22,29
	  rlwinm    r0,r0,28,23,30
	  rlwinm    r6,r6,5,0,26
	  or        r8, r0, r8
	  cntlzw    r30, r9
	  or        r8, r3, r8
	  lwz       r10, 0x8(r11)
	  or        r12, r6, r8
	  rlwinm    r5,r5,8,0,23
	  rlwinm    r8,r30,6,13,20
	  addi      r9, r10, 0x1
	  or        r12, r5, r12
	  rlwinm    r7,r7,12,0,19
	  or        r12, r8, r12
	  stw       r9, 0x8(r11)
	  or        r9, r7, r12
	  cmpwi     r4, 0x1
	  oris      r9, r9, 0x4100
	  rlwinm    r9,r9,8,24,31
	  stb       r9, 0x0(r10)
	  li        r9, 0
	  beq-      .loc_0x160
	  cmpwi     r4, 0x3
	  bne-      .loc_0x164

	.loc_0x160:
	  li        r9, 0x1

	.loc_0x164:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,16,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x1B0
	  cmpwi     r4, 0x3
	  bne-      .loc_0x1B4

	.loc_0x1B0:
	  li        r9, 0x1

	.loc_0x1B4:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,24,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x200
	  cmpwi     r4, 0x3
	  bne-      .loc_0x204

	.loc_0x200:
	  li        r9, 0x1

	.loc_0x204:
	  or        r0, r0, r9
	  lwz       r10, -0x7158(r13)
	  or        r0, r3, r0
	  lis       r3, 0x8051
	  or        r0, r6, r0
	  lwz       r4, 0x8(r10)
	  or        r0, r5, r0
	  addi      r9, r3, 0x2094
	  or        r3, r8, r0
	  li        r6, 0x61
	  addi      r0, r4, 0x1
	  or        r3, r7, r3
	  stw       r0, 0x8(r10)
	  ori       r0, r3, 0
	  stb       r0, 0x0(r4)
	  lhz       r0, 0xC(r31)
	  lwz       r5, -0x7158(r13)
	  mulli     r0, r0, 0x3
	  lwz       r4, 0x8(r5)
	  add       r3, r9, r0
	  lbzx      r9, r9, r0
	  lbz       r8, 0x2(r3)
	  addi      r0, r4, 0x1
	  lbz       r7, 0x1(r3)
	  rlwinm    r3,r8,4,20,27
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r7,1,0,30
	  or        r0, r9, r0
	  stb       r6, 0x0(r4)
	  or        r0, r3, r0
	  oris      r8, r0, 0x4000
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007EFB4
 * Size:	0004E4
 */
void J3DPEBlockFull::load()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x0(r4)
	  lwz       r0, 0x8(r4)
	  sub       r0, r0, r3
	  stw       r0, 0x3C(r31)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x55
	  cmplw     r3, r0
	  ble-      .loc_0x4C
	  bl        0x62C44

	.loc_0x4C:
	  lwz       r0, 0x18(r31)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lbz       r3, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  lfs       f2, 0xC(r31)
	  lfs       f3, 0x10(r31)
	  lfs       f4, 0x14(r31)
	  bl        -0x8604
	  lbz       r3, 0x5(r31)
	  addi      r5, r31, 0x1C
	  lhz       r4, 0x6(r31)
	  bl        -0x82B4
	  lhz       r0, 0x30(r31)
	  lis       r3, 0x8051
	  lwz       r8, -0x7158(r13)
	  addi      r4, r3, 0x1D94
	  mulli     r5, r0, 0x3
	  lbz       r10, 0x33(r31)
	  lwz       r7, 0x8(r8)
	  li        r0, 0x61
	  li        r29, 0xFE
	  add       r3, r4, r5
	  lbzx      r9, r4, r5
	  addi      r5, r7, 0x1
	  lbz       r4, 0x2(r3)
	  li        r30, 0
	  lbz       r6, 0x1(r3)
	  rlwinm    r3,r10,8,16,23
	  lbz       r10, 0x32(r31)
	  rlwinm    r4,r4,19,0,12
	  rlwinm    r6,r6,22,0,9
	  li        r12, 0x1F
	  stw       r5, 0x8(r8)
	  rlwimi    r3,r10,0,24,31
	  rlwimi    r3,r9,16,8,15
	  li        r11, 0xE7
	  stb       r0, 0x0(r7)
	  or        r3, r4, r3
	  or        r3, r6, r3
	  lwz       r5, -0x7158(r13)
	  oris      r9, r3, 0xF300
	  rlwinm    r8,r9,8,24,31
	  lwz       r4, 0x8(r5)
	  rlwinm    r7,r9,16,24,31
	  rlwinm    r6,r9,24,24,31
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r10, -0x7158(r13)
	  lbz       r4, 0x34(r31)
	  lwz       r9, 0x8(r10)
	  lbz       r3, 0x3B(r31)
	  cmpwi     r4, 0x1
	  lbz       r7, 0x37(r31)
	  addi      r8, r9, 0x1
	  lbz       r6, 0x36(r31)
	  lbz       r5, 0x35(r31)
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r29, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r30, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r12, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r11, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  beq-      .loc_0x1E8
	  cmpwi     r4, 0x3
	  bne-      .loc_0x1EC

	.loc_0x1E8:
	  li        r30, 0x1

	.loc_0x1EC:
	  subfic    r9, r4, 0x3
	  rlwinm    r8,r30,0,24,31
	  subfic    r0, r4, 0x2
	  lwz       r11, -0x7158(r13)
	  cntlzw    r0, r0
	  rlwinm    r3,r3,2,22,29
	  rlwinm    r0,r0,28,23,30
	  rlwinm    r6,r6,5,0,26
	  or        r8, r0, r8
	  cntlzw    r30, r9
	  or        r8, r3, r8
	  lwz       r10, 0x8(r11)
	  or        r12, r6, r8
	  rlwinm    r5,r5,8,0,23
	  rlwinm    r8,r30,6,13,20
	  addi      r9, r10, 0x1
	  or        r12, r5, r12
	  rlwinm    r7,r7,12,0,19
	  or        r12, r8, r12
	  stw       r9, 0x8(r11)
	  or        r9, r7, r12
	  cmpwi     r4, 0x1
	  oris      r9, r9, 0x4100
	  rlwinm    r9,r9,8,24,31
	  stb       r9, 0x0(r10)
	  li        r9, 0
	  beq-      .loc_0x260
	  cmpwi     r4, 0x3
	  bne-      .loc_0x264

	.loc_0x260:
	  li        r9, 0x1

	.loc_0x264:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,16,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x2B0
	  cmpwi     r4, 0x3
	  bne-      .loc_0x2B4

	.loc_0x2B0:
	  li        r9, 0x1

	.loc_0x2B4:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,24,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x300
	  cmpwi     r4, 0x3
	  bne-      .loc_0x304

	.loc_0x300:
	  li        r9, 0x1

	.loc_0x304:
	  or        r0, r0, r9
	  lwz       r10, -0x7158(r13)
	  or        r0, r3, r0
	  lis       r3, 0x8051
	  or        r0, r6, r0
	  lwz       r4, 0x8(r10)
	  or        r0, r5, r0
	  addi      r9, r3, 0x2094
	  or        r3, r8, r0
	  li        r6, 0
	  or        r3, r7, r3
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r10)
	  ori       r3, r3, 0
	  li        r0, 0x61
	  li        r7, 0xFE
	  stb       r3, 0x0(r4)
	  lhz       r3, 0x38(r31)
	  lwz       r8, -0x7158(r13)
	  mulli     r3, r3, 0x3
	  lwz       r5, 0x8(r8)
	  add       r4, r9, r3
	  lbzx      r11, r9, r3
	  lbz       r10, 0x2(r4)
	  addi      r3, r5, 0x1
	  lbz       r9, 0x1(r4)
	  rlwinm    r4,r10,4,20,27
	  stw       r3, 0x8(r8)
	  rlwinm    r3,r9,1,0,30
	  or        r3, r11, r3
	  stb       r0, 0x0(r5)
	  or        r3, r4, r3
	  oris      r11, r3, 0x4000
	  lwz       r5, -0x7158(r13)
	  rlwinm    r10,r11,8,24,31
	  rlwinm    r9,r11,16,24,31
	  rlwinm    r8,r11,24,24,31
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lbz       r9, 0x3A(r31)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r8, -0x7158(r13)
	  rlwinm    r3,r9,6,18,25
	  oris      r10, r3, 0x4300
	  li        r9, 0x40
	  lwz       r4, 0x8(r8)
	  rlwinm    r7,r10,8,24,31
	  rlwinm    r6,r10,16,24,31
	  rlwinm    r5,r10,24,24,31
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r8)
	  stb       r9, 0x0(r4)
	  lwz       r8, -0x7158(r13)
	  lwz       r4, 0x8(r8)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r8)
	  stb       r0, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007F498
 * Size:	0000B0
 */
void J3DPEBlockFull::patch()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x3C(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x37
	  cmplw     r3, r0
	  ble-      .loc_0x48
	  bl        0x62764

	.loc_0x48:
	  lwz       r3, -0x7158(r13)
	  addi      r4, r1, 0x8
	  lwz       r0, 0x18(r30)
	  lwz       r31, 0x8(r3)
	  stw       r0, 0x8(r1)
	  lbz       r3, 0x4(r30)
	  lfs       f1, 0x8(r30)
	  lfs       f2, 0xC(r30)
	  lfs       f3, 0x10(r30)
	  lfs       f4, 0x14(r30)
	  bl        -0x8AEC
	  lbz       r3, 0x5(r30)
	  addi      r5, r30, 0x1C
	  lhz       r4, 0x6(r30)
	  bl        -0x879C
	  lwz       r4, -0x7158(r13)
	  mr        r3, r31
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r31
	  bl        0x6D21C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007F548
 * Size:	000078
 */
void J3DPEBlockFull::diffFog()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x37
	  cmplw     r3, r0
	  ble-      .loc_0x30
	  bl        0x626CC

	.loc_0x30:
	  lwz       r0, 0x18(r31)
	  addi      r4, r1, 0x8
	  stw       r0, 0x8(r1)
	  lbz       r3, 0x4(r31)
	  lfs       f1, 0x8(r31)
	  lfs       f2, 0xC(r31)
	  lfs       f3, 0x10(r31)
	  lfs       f4, 0x14(r31)
	  bl        -0x8B7C
	  lbz       r3, 0x5(r31)
	  addi      r5, r31, 0x1C
	  lhz       r4, 0x6(r31)
	  bl        -0x882C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007F5C0
 * Size:	0002F8
 */
void J3DPEBlockFull::diffBlend()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0xF
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x6264C

	.loc_0x38:
	  lwz       r10, -0x7158(r13)
	  li        r0, 0x61
	  lbz       r4, 0x34(r31)
	  li        r29, 0xFE
	  lwz       r9, 0x8(r10)
	  li        r30, 0
	  lbz       r3, 0x3B(r31)
	  li        r12, 0x1F
	  lbz       r7, 0x37(r31)
	  addi      r8, r9, 0x1
	  lbz       r6, 0x36(r31)
	  li        r11, 0xE7
	  lbz       r5, 0x35(r31)
	  cmpwi     r4, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r29, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r30, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r12, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r11, 0x0(r9)
	  lwz       r10, -0x7158(r13)
	  lwz       r9, 0x8(r10)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r10)
	  stb       r0, 0x0(r9)
	  beq-      .loc_0xE8
	  cmpwi     r4, 0x3
	  bne-      .loc_0xEC

	.loc_0xE8:
	  li        r30, 0x1

	.loc_0xEC:
	  subfic    r9, r4, 0x3
	  rlwinm    r8,r30,0,24,31
	  subfic    r0, r4, 0x2
	  lwz       r11, -0x7158(r13)
	  cntlzw    r0, r0
	  rlwinm    r3,r3,2,22,29
	  rlwinm    r0,r0,28,23,30
	  rlwinm    r6,r6,5,0,26
	  or        r8, r0, r8
	  cntlzw    r30, r9
	  or        r8, r3, r8
	  lwz       r10, 0x8(r11)
	  or        r12, r6, r8
	  rlwinm    r5,r5,8,0,23
	  rlwinm    r8,r30,6,13,20
	  addi      r9, r10, 0x1
	  or        r12, r5, r12
	  rlwinm    r7,r7,12,0,19
	  or        r12, r8, r12
	  stw       r9, 0x8(r11)
	  or        r9, r7, r12
	  cmpwi     r4, 0x1
	  oris      r9, r9, 0x4100
	  rlwinm    r9,r9,8,24,31
	  stb       r9, 0x0(r10)
	  li        r9, 0
	  beq-      .loc_0x160
	  cmpwi     r4, 0x3
	  bne-      .loc_0x164

	.loc_0x160:
	  li        r9, 0x1

	.loc_0x164:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,16,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x1B0
	  cmpwi     r4, 0x3
	  bne-      .loc_0x1B4

	.loc_0x1B0:
	  li        r9, 0x1

	.loc_0x1B4:
	  rlwinm    r9,r9,0,24,31
	  lwz       r12, -0x7158(r13)
	  or        r9, r0, r9
	  cmpwi     r4, 0x1
	  or        r9, r3, r9
	  lwz       r11, 0x8(r12)
	  or        r10, r6, r9
	  li        r9, 0
	  or        r30, r5, r10
	  addi      r10, r11, 0x1
	  or        r30, r8, r30
	  stw       r10, 0x8(r12)
	  or        r10, r7, r30
	  oris      r10, r10, 0x4100
	  rlwinm    r10,r10,24,24,31
	  stb       r10, 0x0(r11)
	  beq-      .loc_0x200
	  cmpwi     r4, 0x3
	  bne-      .loc_0x204

	.loc_0x200:
	  li        r9, 0x1

	.loc_0x204:
	  or        r0, r0, r9
	  lwz       r10, -0x7158(r13)
	  or        r0, r3, r0
	  lis       r3, 0x8051
	  or        r0, r6, r0
	  lwz       r4, 0x8(r10)
	  or        r0, r5, r0
	  addi      r9, r3, 0x2094
	  or        r3, r8, r0
	  li        r6, 0x61
	  addi      r0, r4, 0x1
	  or        r3, r7, r3
	  stw       r0, 0x8(r10)
	  ori       r0, r3, 0
	  stb       r0, 0x0(r4)
	  lhz       r0, 0x38(r31)
	  lwz       r5, -0x7158(r13)
	  mulli     r0, r0, 0x3
	  lwz       r4, 0x8(r5)
	  add       r3, r9, r0
	  lbzx      r9, r9, r0
	  lbz       r8, 0x2(r3)
	  addi      r0, r4, 0x1
	  lbz       r7, 0x1(r3)
	  rlwinm    r3,r8,4,20,27
	  stw       r0, 0x8(r5)
	  rlwinm    r0,r7,1,0,30
	  or        r0, r9, r0
	  stb       r6, 0x0(r4)
	  or        r0, r3, r0
	  oris      r8, r0, 0x4000
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007F8B8
 * Size:	000068
 */
void J3DPEBlockFull::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,3,3
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl

	.loc_0x34:
	  rlwinm.   r0,r31,0,2,2
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007F920
 * Size:	0000E4
 */
void J3DColorBlockLightOff::reset(J3DColorBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0xC(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x2
	  stb       r0, 0x4(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x5(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x6(r31)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x7(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x94:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  sth       r0, 0xE(r31)
	  addi      r31, r31, 0x2
	  blt+      .loc_0x94
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007FA04
 * Size:	000154
 */
void J3DColorBlockAmbientOn::reset(J3DColorBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0xC(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x2
	  stb       r0, 0x4(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x5(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x6(r31)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x7(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x94:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  sth       r0, 0xE(r31)
	  addi      r31, r31, 0x2
	  blt+      .loc_0x94
	  li        r30, 0
	  mr        r31, r28

	.loc_0xCC:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x20(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x21(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x22(r31)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x23(r31)

	.loc_0x124:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x2
	  blt+      .loc_0xCC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007FB58
 * Size:	000154
 */
void J3DColorBlockLightOn::reset(J3DColorBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x14(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x2
	  stb       r0, 0x4(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x5(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x6(r31)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x7(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x94:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  sth       r0, 0x16(r31)
	  addi      r31, r31, 0x2
	  blt+      .loc_0x94
	  li        r30, 0
	  mr        r31, r28

	.loc_0xCC:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x124
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0xC(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0xD(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xE(r31)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0xF(r31)

	.loc_0x124:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x2
	  blt+      .loc_0xCC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007FCAC
 * Size:	00011C
 */
void J3DTexGenBlockPatched::reset(J3DTexGenBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x8
	  stb       r0, 0x8(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x9(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xA(r31)
	  addi      r31, r31, 0x6
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x8C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r31)
	  li        r5, 0x94
	  bl        -0x7ABEC
	  lwz       r3, 0x38(r31)
	  li        r4, 0x94
	  bl        0x6C9B4

	.loc_0xEC:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x8
	  blt+      .loc_0x8C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007FDC8
 * Size:	000150
 */
void J3DTexGenBlock4::reset(J3DTexGenBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  stb       r0, 0x8(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x9(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xA(r31)
	  addi      r31, r31, 0x6
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x8C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r31)
	  li        r5, 0x94
	  bl        -0x7AD08
	  lwz       r3, 0x38(r31)
	  li        r4, 0x94
	  bl        0x6C898

	.loc_0xEC:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x4
	  blt+      .loc_0x8C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x5C(r28)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x60(r28)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x64(r28)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x68(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8007FF18
 * Size:	000150
 */
void J3DTexGenBlockBasic::reset(J3DTexGenBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x4(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x8
	  stb       r0, 0x8(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x9(r31)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xA(r31)
	  addi      r31, r31, 0x6
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x8C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xEC
	  lwz       r0, 0x38(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xEC
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x38(r31)
	  li        r5, 0x94
	  bl        -0x7AE58
	  lwz       r3, 0x38(r31)
	  li        r4, 0x94
	  bl        0x6C748

	.loc_0xEC:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmplwi    r30, 0x8
	  blt+      .loc_0x8C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x5C(r28)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x60(r28)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x64(r28)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x68(r28)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080068
 * Size:	0001B8
 */
void J3DTevBlockPatched::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0xD0(r28)
	  mr        r30, r28
	  li        r29, 0

	.loc_0x44:
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  addi      r29, r29, 0x1
	  sth       r3, 0x8(r30)
	  cmplwi    r29, 0x8
	  addi      r30, r30, 0x2
	  blt+      .loc_0x44
	  li        r29, 0
	  mr        r30, r28

	.loc_0x78:
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x0(r3)
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x4
	  sth       r0, 0x98(r30)
	  lha       r0, 0x2(r3)
	  sth       r0, 0x9A(r30)
	  lha       r0, 0x4(r3)
	  sth       r0, 0x9C(r30)
	  lha       r0, 0x6(r3)
	  sth       r0, 0x9E(r30)
	  addi      r30, r30, 0x8
	  blt+      .loc_0x78
	  li        r29, 0
	  mr        r30, r28

	.loc_0xC8:
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r29, r29, 0x1
	  cmplwi    r29, 0x4
	  stb       r0, 0xB8(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0xB9(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xBA(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0xBB(r30)
	  addi      r30, r30, 0x4
	  blt+      .loc_0xC8
	  mr        r30, r28
	  mr        r29, r28
	  li        r28, 0

	.loc_0x11C:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  mr        r4, r28
	  stb       r0, 0x39(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x3A(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x3B(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x3D(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x3E(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x3F(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x8
	  addi      r30, r30, 0x8
	  stw       r0, 0x78(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0x11C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080220
 * Size:	0000E8
 */
void J3DTevBlock1::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0x8(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0
	  stb       r0, 0xA(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0xB(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0xC(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0
	  stb       r0, 0xF(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x10(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x11(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x13(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x14(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x15(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x18(r30)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080308
 * Size:	000308
 */
void J3DTevBlock2::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x34(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0x8(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0xA(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0x1
	  stb       r0, 0x36(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x37(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x38(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x3A(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x3B(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x3C(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0
	  stb       r0, 0x3E(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x3F(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x40(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x42(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x43(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x44(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0x1
	  stw       r0, 0x60(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0
	  stw       r0, 0x64(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0x1
	  stb       r0, 0xC(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0xD(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0xE(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0
	  stb       r0, 0x10(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x11(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0x12(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x55(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x56(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x57(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x58(r30)
	  mr        r29, r30
	  li        r28, 0

	.loc_0x21C:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  sth       r0, 0x14(r29)
	  lha       r0, 0x2(r3)
	  sth       r0, 0x16(r29)
	  lha       r0, 0x4(r3)
	  sth       r0, 0x18(r29)
	  lha       r0, 0x6(r3)
	  sth       r0, 0x1A(r29)
	  addi      r29, r29, 0x8
	  blt+      .loc_0x21C
	  li        r28, 0
	  mr        r29, r30

	.loc_0x26C:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  stb       r0, 0x45(r29)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x46(r29)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x47(r29)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x48(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0x26C
	  li        r28, 0

	.loc_0x2B8:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r28, 0x59
	  lbz       r3, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  stbx      r3, r30, r0
	  blt+      .loc_0x2B8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080610
 * Size:	0004E0
 */
void J3DTevBlock4::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  mr        r3, r31
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x20(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0x8(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0xA(r30)
	  mr        r3, r31
	  li        r4, 0x2
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0xC(r30)
	  mr        r3, r31
	  li        r4, 0x3
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  sth       r3, 0xE(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0x1
	  stb       r0, 0x22(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x23(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x24(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x26(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x27(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x28(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0x2
	  stb       r0, 0x2A(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x2B(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x2C(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x2E(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x2F(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x30(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0x3
	  stb       r0, 0x32(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x33(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x34(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x36(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x37(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x38(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  li        r4, 0
	  stb       r0, 0x3A(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x3B(r30)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x3C(r30)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x3E(r30)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x3F(r30)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x40(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0x1
	  stw       r0, 0x80(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0x2
	  stw       r0, 0x84(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0x3
	  stw       r0, 0x88(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  mr        r3, r31
	  li        r4, 0
	  stw       r0, 0x8C(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0x1
	  stb       r0, 0x10(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x11(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0x12(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0x2
	  stb       r0, 0x14(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x15(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0x16(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0x3
	  stb       r0, 0x18(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x19(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0x1A(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  li        r4, 0
	  stb       r0, 0x1C(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x1D(r30)
	  lbz       r0, 0x2(r3)
	  mr        r3, r31
	  stb       r0, 0x1E(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x72(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x73(r30)
	  mr        r3, r31
	  li        r4, 0x2
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x74(r30)
	  mr        r3, r31
	  li        r4, 0x3
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x75(r30)
	  mr        r3, r31
	  li        r4, 0
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x76(r30)
	  mr        r3, r31
	  li        r4, 0x1
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x77(r30)
	  mr        r3, r31
	  li        r4, 0x2
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x78(r30)
	  mr        r3, r31
	  li        r4, 0x3
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x79(r30)
	  mr        r29, r30
	  li        r28, 0

	.loc_0x3F4:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  sth       r0, 0x42(r29)
	  lha       r0, 0x2(r3)
	  sth       r0, 0x44(r29)
	  lha       r0, 0x4(r3)
	  sth       r0, 0x46(r29)
	  lha       r0, 0x6(r3)
	  sth       r0, 0x48(r29)
	  addi      r29, r29, 0x8
	  blt+      .loc_0x3F4
	  li        r28, 0
	  mr        r29, r30

	.loc_0x444:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  stb       r0, 0x62(r29)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x63(r29)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x64(r29)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x65(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0x444
	  li        r28, 0

	.loc_0x490:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r28, 0x7A
	  lbz       r3, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x4
	  stbx      r3, r30, r0
	  blt+      .loc_0x490
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080AF0
 * Size:	00027C
 */
void J3DTevBlock16::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r4
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x58(r30)
	  mr        r29, r30
	  li        r28, 0

	.loc_0x38:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x1
	  sth       r3, 0x8(r29)
	  cmplwi    r28, 0x8
	  addi      r29, r29, 0x2
	  blt+      .loc_0x38
	  li        r28, 0
	  mr        r29, r30

	.loc_0x6C:
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r28, r28, 0x1
	  cmplwi    r28, 0x10
	  stb       r0, 0x18(r29)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x19(r29)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x1A(r29)
	  addi      r29, r29, 0x4
	  blt+      .loc_0x6C
	  mr        r29, r30
	  mr        r28, r30
	  li        r27, 0

	.loc_0xB8:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x1(r3)
	  mr        r4, r27
	  stb       r0, 0x5A(r29)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x5B(r29)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0x5C(r29)
	  lbz       r0, 0x5(r3)
	  stb       r0, 0x5E(r29)
	  lbz       r0, 0x6(r3)
	  stb       r0, 0x5F(r29)
	  lbz       r0, 0x7(r3)
	  mr        r3, r31
	  stb       r0, 0x60(r29)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xC4(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x0(r3)
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x10
	  addi      r29, r29, 0x8
	  stw       r0, 0x130(r28)
	  addi      r28, r28, 0x4
	  blt+      .loc_0xB8
	  li        r27, 0
	  mr        r28, r30

	.loc_0x13C:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lha       r0, 0x0(r3)
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x4
	  sth       r0, 0xDA(r28)
	  lha       r0, 0x2(r3)
	  sth       r0, 0xDC(r28)
	  lha       r0, 0x4(r3)
	  sth       r0, 0xDE(r28)
	  lha       r0, 0x6(r3)
	  sth       r0, 0xE0(r28)
	  addi      r28, r28, 0x8
	  blt+      .loc_0x13C
	  li        r27, 0
	  mr        r28, r30

	.loc_0x18C:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x74(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x4
	  stb       r0, 0xFA(r28)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0xFB(r28)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xFC(r28)
	  lbz       r0, 0x3(r3)
	  stb       r0, 0xFD(r28)
	  addi      r28, r28, 0x4
	  blt+      .loc_0x18C
	  li        r27, 0

	.loc_0x1D8:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x80(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r27, 0x10A
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x10
	  stbx      r3, r30, r0
	  blt+      .loc_0x1D8
	  li        r27, 0

	.loc_0x208:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8C(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r27, 0x11A
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x10
	  stbx      r3, r30, r0
	  blt+      .loc_0x208
	  li        r27, 0

	.loc_0x238:
	  mr        r3, r31
	  mr        r4, r27
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xB8(r12)
	  mtctr     r12
	  bctrl
	  addi      r0, r27, 0x12A
	  lbz       r3, 0x0(r3)
	  addi      r27, r27, 0x1
	  cmplwi    r27, 0x4
	  stbx      r3, r30, r0
	  blt+      .loc_0x238
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080D6C
 * Size:	000144
 */
void J3DIndBlockFull::reset(J3DIndBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x4(r28)
	  mr        r31, r28
	  li        r30, 0

	.loc_0x44:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  stb       r0, 0x5(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x6(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0x44
	  li        r30, 0
	  mr        r31, r28

	.loc_0x84:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x3
	  stfs      f0, 0x18(r31)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x1C(r31)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x20(r31)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x24(r31)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x28(r31)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x2C(r31)
	  lbz       r0, 0x18(r3)
	  stb       r0, 0x30(r31)
	  addi      r31, r31, 0x1C
	  blt+      .loc_0x84
	  li        r30, 0
	  mr        r31, r28

	.loc_0xEC:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  addi      r30, r30, 0x1
	  cmplwi    r30, 0x4
	  stb       r0, 0x6C(r31)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x6D(r31)
	  addi      r31, r31, 0x4
	  blt+      .loc_0xEC
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080EB0
 * Size:	000100
 */
void J3DPEBlockFogOff::reset(J3DPEBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x5045
	  addi      r0, r4, 0x464C
	  cmpw      r3, r0
	  beq-      .loc_0x54
	  bge-      .loc_0xE8
	  addi      r0, r4, 0x4647
	  cmpw      r3, r0
	  beq-      .loc_0x54
	  b         .loc_0xE8

	.loc_0x54:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  sth       r0, 0x4(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x6(r30)
	  lbz       r0, 0x3(r3)
	  mr        r3, r31
	  stb       r0, 0x7(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x8(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x9(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0xA(r30)
	  lbz       r0, 0x3(r3)
	  mr        r3, r31
	  stb       r0, 0xB(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  mr        r3, r31
	  sth       r0, 0xC(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0xE(r30)

	.loc_0xE8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80080FB0
 * Size:	0001D8
 */
void J3DPEBlockFull::reset(J3DPEBlock*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0xF4
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x4(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x5(r30)
	  lhz       r0, 0x2(r3)
	  sth       r0, 0x6(r30)
	  lfs       f0, 0x4(r3)
	  stfs      f0, 0x8(r30)
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0xC(r30)
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x10(r30)
	  lfs       f0, 0x10(r3)
	  stfs      f0, 0x14(r30)
	  lbz       r0, 0x14(r3)
	  stb       r0, 0x18(r30)
	  lbz       r0, 0x15(r3)
	  stb       r0, 0x19(r30)
	  lbz       r0, 0x16(r3)
	  stb       r0, 0x1A(r30)
	  lbz       r0, 0x17(r3)
	  stb       r0, 0x1B(r30)
	  lhz       r0, 0x18(r3)
	  sth       r0, 0x1C(r30)
	  lhz       r0, 0x1A(r3)
	  sth       r0, 0x1E(r30)
	  lhz       r0, 0x1C(r3)
	  sth       r0, 0x20(r30)
	  lhz       r0, 0x1E(r3)
	  sth       r0, 0x22(r30)
	  lhz       r0, 0x20(r3)
	  sth       r0, 0x24(r30)
	  lhz       r0, 0x22(r3)
	  sth       r0, 0x26(r30)
	  lhz       r0, 0x24(r3)
	  sth       r0, 0x28(r30)
	  lhz       r0, 0x26(r3)
	  sth       r0, 0x2A(r30)
	  lhz       r0, 0x28(r3)
	  sth       r0, 0x2C(r30)
	  lhz       r0, 0x2A(r3)
	  sth       r0, 0x2E(r30)

	.loc_0xF4:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lis       r4, 0x5045
	  addi      r0, r4, 0x464C
	  cmpw      r3, r0
	  beq-      .loc_0x12C
	  bge-      .loc_0x1C0
	  addi      r0, r4, 0x4647
	  cmpw      r3, r0
	  beq-      .loc_0x12C
	  b         .loc_0x1C0

	.loc_0x12C:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  sth       r0, 0x30(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x32(r30)
	  lbz       r0, 0x3(r3)
	  mr        r3, r31
	  stb       r0, 0x33(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x0(r3)
	  stb       r0, 0x34(r30)
	  lbz       r0, 0x1(r3)
	  stb       r0, 0x35(r30)
	  lbz       r0, 0x2(r3)
	  stb       r0, 0x36(r30)
	  lbz       r0, 0x3(r3)
	  mr        r3, r31
	  stb       r0, 0x37(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  lhz       r0, 0x0(r3)
	  mr        r3, r31
	  sth       r0, 0x38(r30)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x60(r12)
	  mtctr     r12
	  bctrl
	  stb       r3, 0x3A(r30)

	.loc_0x1C0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081188
 * Size:	0001B0
 */
void J3DTexGenBlockPatched::calc(const float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r27, r4
	  li        r28, 0
	  mr        r30, r3
	  mr        r29, r3
	  subi      r31, r5, 0xDD0

	.loc_0x28:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  lbz       r3, 0x1(r3)
	  lbz       r0, 0xA(r29)
	  rlwinm    r4,r3,0,26,31
	  cmplwi    r4, 0xB
	  sth       r0, 0xC(r29)
	  bgt-      .loc_0x178
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x20F0
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x88
	  lis       r3, 0x8051
	  mr        r4, r27
	  subi      r3, r3, 0xDD0
	  addi      r5, r1, 0x8
	  bl        0x690F8
	  b         .loc_0x98

	.loc_0x88:
	  lis       r3, 0x8051
	  addi      r4, r1, 0x8
	  subi      r3, r3, 0xDD0
	  bl        0x690B0

	.loc_0x98:
	  lfs       f0, -0x7884(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0x38(r30)
	  bl        -0x1C544
	  b         .loc_0x188
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0xD4
	  lwz       r3, 0x38(r30)
	  mr        r4, r27
	  bl        -0x1C560
	  b         .loc_0x188

	.loc_0xD4:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C574
	  b         .loc_0x188
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x118
	  lis       r3, 0x8051
	  mr        r4, r27
	  subi      r3, r3, 0xDD0
	  addi      r5, r1, 0x8
	  bl        0x69074
	  lwz       r3, 0x38(r30)
	  addi      r4, r1, 0x8
	  bl        -0x1C5A4
	  b         .loc_0x188

	.loc_0x118:
	  lis       r4, 0x8051
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0xDD0
	  bl        -0x1C5B8
	  b         .loc_0x188
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0x164
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  bl        0x69004
	  lfs       f0, -0x7884(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0x38(r30)
	  bl        -0x1C5F0
	  b         .loc_0x188

	.loc_0x164:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C604
	  b         .loc_0x188

	.loc_0x178:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C618

	.loc_0x188:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x6
	  cmpwi     r28, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x28
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081338
 * Size:	000140
 */
void J3DTexGenBlockPatched::calcWithoutViewMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r5, 0x8051
	  stw       r0, 0x54(r1)
	  stmw      r27, 0x3C(r1)
	  mr        r27, r4
	  li        r28, 0
	  mr        r30, r3
	  mr        r29, r3
	  subi      r31, r5, 0xDD0

	.loc_0x28:
	  lwz       r3, 0x38(r30)
	  cmplwi    r3, 0
	  beq-      .loc_0x118
	  lbz       r3, 0x1(r3)
	  lbz       r0, 0xA(r29)
	  rlwinm    r4,r3,0,26,31
	  cmplwi    r4, 0xB
	  sth       r0, 0xC(r29)
	  bgt-      .loc_0x108
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x2120
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C6B4
	  b         .loc_0x118
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x94
	  lwz       r3, 0x38(r30)
	  mr        r4, r27
	  bl        -0x1C6D0
	  b         .loc_0x118

	.loc_0x94:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C6E4
	  b         .loc_0x118
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C6F8
	  b         .loc_0x118
	  lwz       r0, 0x34(r31)
	  rlwinm.   r0,r0,0,28,28
	  bne-      .loc_0xF4
	  mr        r3, r27
	  addi      r4, r1, 0x8
	  bl        0x68EC4
	  lfs       f0, -0x7884(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x34(r1)
	  lwz       r3, 0x38(r30)
	  bl        -0x1C730
	  b         .loc_0x118

	.loc_0xF4:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C744
	  b         .loc_0x118

	.loc_0x108:
	  lis       r4, 0x8048
	  lwz       r3, 0x38(r30)
	  subi      r4, r4, 0x7794
	  bl        -0x1C758

	.loc_0x118:
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x6
	  cmpwi     r28, 0x8
	  addi      r30, r30, 0x4
	  blt+      .loc_0x28
	  lmw       r27, 0x3C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081478
 * Size:	000140
 */
void J3DTexGenBlockPatched::calcPostTexMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stw       r31, 0x7C(r1)
	  mr        r31, r3
	  stw       r30, 0x78(r1)
	  mr        r30, r3
	  stw       r29, 0x74(r1)
	  li        r29, 0

	.loc_0x24:
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x110
	  lbz       r3, 0x1(r3)
	  lbz       r0, 0xA(r30)
	  rlwinm    r4,r3,0,26,31
	  cmplwi    r4, 0xB
	  sth       r0, 0xC(r30)
	  bgt-      .loc_0xF8
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x2150
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x1E
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C4EC
	  b         .loc_0x110
	  lis       r3, 0x8051
	  addi      r4, r1, 0x38
	  subi      r3, r3, 0xDD0
	  bl        0x68F1C
	  li        r0, 0
	  addi      r4, r1, 0x38
	  sth       r0, 0xC(r30)
	  lwz       r3, 0x38(r31)
	  bl        -0x1C514
	  b         .loc_0x110
	  li        r0, 0
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C530
	  b         .loc_0x110
	  lis       r3, 0x8051
	  addi      r4, r1, 0x8
	  subi      r3, r3, 0xDD0
	  bl        0x68ED8
	  lfs       f0, -0x7884(r2)
	  li        r0, 0x1E
	  addi      r4, r1, 0x8
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x34(r1)
	  sth       r0, 0xC(r30)
	  lwz       r3, 0x38(r31)
	  bl        -0x1C568
	  b         .loc_0x110

	.loc_0xF8:
	  li        r0, 0x3C
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C584

	.loc_0x110:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x6
	  cmpwi     r29, 0x8
	  addi      r31, r31, 0x4
	  blt+      .loc_0x24
	  lwz       r0, 0x84(r1)
	  lwz       r31, 0x7C(r1)
	  lwz       r30, 0x78(r1)
	  lwz       r29, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800815B8
 * Size:	000118
 */
void J3DTexGenBlockPatched::calcPostTexMtxWithoutViewMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  li        r29, 0

	.loc_0x24:
	  lwz       r3, 0x38(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xE8
	  lbz       r3, 0x1(r3)
	  lbz       r0, 0xA(r30)
	  rlwinm    r4,r3,0,26,31
	  cmplwi    r4, 0xB
	  sth       r0, 0xC(r30)
	  bgt-      .loc_0xD0
	  lis       r3, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r3, r3, 0x2180
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x1E
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C62C
	  b         .loc_0xE8
	  li        r0, 0
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C648
	  b         .loc_0xE8
	  li        r0, 0
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C664
	  b         .loc_0xE8
	  li        r0, 0x1E
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C680
	  b         .loc_0xE8

	.loc_0xD0:
	  li        r0, 0x3C
	  lis       r3, 0x8048
	  sth       r0, 0xC(r30)
	  subi      r4, r3, 0x7794
	  lwz       r3, 0x38(r31)
	  bl        -0x1C69C

	.loc_0xE8:
	  addi      r29, r29, 0x1
	  addi      r30, r30, 0x6
	  cmpwi     r29, 0x8
	  addi      r31, r31, 0x4
	  blt+      .loc_0x24
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800816D0
 * Size:	00000C
 */
void J3DPEBlockFull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x464C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800816DC
 * Size:	0000AC
 */
void J3DPEBlockFull::setFog(J3DFog*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x4(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x5(r3)
	  lhz       r0, 0x2(r4)
	  sth       r0, 0x6(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x14(r3)
	  lbz       r0, 0x14(r4)
	  stb       r0, 0x18(r3)
	  lbz       r0, 0x15(r4)
	  stb       r0, 0x19(r3)
	  lbz       r0, 0x16(r4)
	  stb       r0, 0x1A(r3)
	  lbz       r0, 0x17(r4)
	  stb       r0, 0x1B(r3)
	  lhz       r0, 0x18(r4)
	  sth       r0, 0x1C(r3)
	  lhz       r0, 0x1A(r4)
	  sth       r0, 0x1E(r3)
	  lhz       r0, 0x1C(r4)
	  sth       r0, 0x20(r3)
	  lhz       r0, 0x1E(r4)
	  sth       r0, 0x22(r3)
	  lhz       r0, 0x20(r4)
	  sth       r0, 0x24(r3)
	  lhz       r0, 0x22(r4)
	  sth       r0, 0x26(r3)
	  lhz       r0, 0x24(r4)
	  sth       r0, 0x28(r3)
	  lhz       r0, 0x26(r4)
	  sth       r0, 0x2A(r3)
	  lhz       r0, 0x28(r4)
	  sth       r0, 0x2C(r3)
	  lhz       r0, 0x2A(r4)
	  sth       r0, 0x2E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081788
 * Size:	0000AC
 */
void J3DPEBlockFull::setFog(J3DFog)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  lbz       r5, 0x1(r4)
	  stb       r0, 0x4(r3)
	  lhz       r0, 0x2(r4)
	  stb       r5, 0x5(r3)
	  lfs       f1, 0x4(r4)
	  sth       r0, 0x6(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f1, 0x8(r3)
	  lfs       f1, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f1, 0x10(r3)
	  lbz       r5, 0x14(r4)
	  stfs      f0, 0x14(r3)
	  lbz       r0, 0x15(r4)
	  stb       r5, 0x18(r3)
	  lbz       r5, 0x16(r4)
	  stb       r0, 0x19(r3)
	  lbz       r0, 0x17(r4)
	  stb       r5, 0x1A(r3)
	  lhz       r6, 0x18(r4)
	  stb       r0, 0x1B(r3)
	  lhz       r5, 0x1A(r4)
	  sth       r6, 0x1C(r3)
	  lhz       r0, 0x1C(r4)
	  sth       r5, 0x1E(r3)
	  lhz       r5, 0x1E(r4)
	  sth       r0, 0x20(r3)
	  lhz       r0, 0x20(r4)
	  sth       r5, 0x22(r3)
	  lhz       r6, 0x22(r4)
	  sth       r0, 0x24(r3)
	  lhz       r5, 0x24(r4)
	  sth       r6, 0x26(r3)
	  lhz       r0, 0x26(r4)
	  sth       r5, 0x28(r3)
	  lhz       r5, 0x28(r4)
	  sth       r0, 0x2A(r3)
	  lhz       r0, 0x2A(r4)
	  sth       r5, 0x2C(r3)
	  sth       r0, 0x2E(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081834
 * Size:	000008
 */
void J3DPEBlockFull::getFog()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008183C
 * Size:	00001C
 */
void J3DPEBlockFull::setAlphaComp(const J3DAlphaComp&)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  lbz       r5, 0x2(r4)
	  sth       r0, 0x30(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x32(r3)
	  stb       r0, 0x33(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081858
 * Size:	00001C
 */
void J3DPEBlockFull::setAlphaComp(const J3DAlphaComp*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  lbz       r5, 0x2(r4)
	  sth       r0, 0x30(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x32(r3)
	  stb       r0, 0x33(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081874
 * Size:	000008
 */
void J3DPEBlockFull::getAlphaComp()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008187C
 * Size:	000024
 */
void J3DPEBlockFull::setBlend(const J3DBlend&)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x34(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x35(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x36(r3)
	  stb       r0, 0x37(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818A0
 * Size:	000024
 */
void J3DPEBlockFull::setBlend(const J3DBlend*)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x34(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x35(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x36(r3)
	  stb       r0, 0x37(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818C4
 * Size:	000008
 */
void J3DPEBlockFull::getBlend()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x34
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818CC
 * Size:	00000C
 */
void J3DPEBlockFull::setZMode(J3DZMode)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  sth       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818D8
 * Size:	00000C
 */
void J3DPEBlockFull::setZMode(const J3DZMode*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  sth       r0, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818E4
 * Size:	000008
 */
void J3DPEBlockFull::getZMode()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x38
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800818EC
 * Size:	000008
 */
void J3DPEBlockFull::setZCompLoc(unsigned char a1)
{
	// Generated from stb r4, 0x3A(r3)
	_3A = a1;
}

/*
 * --INFO--
 * Address:	800818F4
 * Size:	00000C
 */
void J3DPEBlockFull::setZCompLoc(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x3A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081900
 * Size:	000008
 */
void J3DPEBlockFull::getZCompLoc() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x3A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081908
 * Size:	000008
 */
void J3DPEBlockFull::setDither(unsigned char a1)
{
	// Generated from stb r4, 0x3B(r3)
	_3B = a1;
}

/*
 * --INFO--
 * Address:	80081910
 * Size:	00000C
 */
void J3DPEBlockFull::setDither(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x3B(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008191C
 * Size:	000008
 */
void J3DPEBlockFull::getDither() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x3B(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081924
 * Size:	000008
 */
void J3DPEBlockFull::getFogOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008192C
 * Size:	000008
 */
void J3DPEBlockFull::setFogOffset(unsigned long a1)
{
	// Generated from stw r4, 0x3C(r3)
	_3C = a1;
}

/*
 * --INFO--
 * Address:	80081934
 * Size:	00005C
 */
J3DPEBlockFull::~J3DPEBlockFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x21B0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5D8C0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081990
 * Size:	000034
 */
void J3DPEBlockFogOff::diff(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm.   r0,r4,0,2,2
	  beq-      .loc_0x24
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800819C4
 * Size:	00000C
 */
void J3DPEBlockFogOff::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x4647
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800819D0
 * Size:	00001C
 */
void J3DPEBlockFogOff::setAlphaComp(const J3DAlphaComp&)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  lbz       r5, 0x2(r4)
	  sth       r0, 0x4(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x6(r3)
	  stb       r0, 0x7(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800819EC
 * Size:	00001C
 */
void J3DPEBlockFogOff::setAlphaComp(const J3DAlphaComp*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  lbz       r5, 0x2(r4)
	  sth       r0, 0x4(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0x6(r3)
	  stb       r0, 0x7(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A08
 * Size:	000008
 */
void J3DPEBlockFogOff::getAlphaComp()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A10
 * Size:	000024
 */
void J3DPEBlockFogOff::setBlend(const J3DBlend&)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x8(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0xA(r3)
	  stb       r0, 0xB(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A34
 * Size:	000024
 */
void J3DPEBlockFogOff::setBlend(const J3DBlend*)
{
	/*
	.loc_0x0:
	  lbz       r5, 0x0(r4)
	  lbz       r0, 0x1(r4)
	  stb       r5, 0x8(r3)
	  lbz       r5, 0x2(r4)
	  stb       r0, 0x9(r3)
	  lbz       r0, 0x3(r4)
	  stb       r5, 0xA(r3)
	  stb       r0, 0xB(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A58
 * Size:	000008
 */
void J3DPEBlockFogOff::getBlend()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A60
 * Size:	00000C
 */
void J3DPEBlockFogOff::setZMode(J3DZMode)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  sth       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A6C
 * Size:	00000C
 */
void J3DPEBlockFogOff::setZMode(const J3DZMode*)
{
	/*
	.loc_0x0:
	  lhz       r0, 0x0(r4)
	  sth       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A78
 * Size:	000008
 */
void J3DPEBlockFogOff::getZMode()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A80
 * Size:	000008
 */
void J3DPEBlockFogOff::setZCompLoc(unsigned char a1)
{
	// Generated from stb r4, 0xE(r3)
	_0E = a1;
}

/*
 * --INFO--
 * Address:	80081A88
 * Size:	00000C
 */
void J3DPEBlockFogOff::setZCompLoc(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A94
 * Size:	000008
 */
void J3DPEBlockFogOff::getZCompLoc() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081A9C
 * Size:	000008
 */
void J3DPEBlockFogOff::setDither(unsigned char a1)
{
	// Generated from stb r4, 0xF(r3)
	_0F = a1;
}

/*
 * --INFO--
 * Address:	80081AA4
 * Size:	00000C
 */
void J3DPEBlockFogOff::setDither(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xF(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081AB0
 * Size:	000008
 */
void J3DPEBlockFogOff::getDither() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0xF(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081AB8
 * Size:	00005C
 */
J3DPEBlockFogOff::~J3DPEBlockFogOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x222C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5DA44

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081B14
 * Size:	0000A0
 */
void J3DTevBlock16::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)

	.loc_0x38:
	  lwz       r3, -0x7158(r13)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  bl        -0x1C800
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0x1C7EC
	  sth       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1C7F0
	  addi      r31, r31, 0x1
	  b         .loc_0x38

	.loc_0x70:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x6ABB4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081BB4
 * Size:	00000C
 */
void J3DTevBlock16::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x3136
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081BC0
 * Size:	000010
 */
void J3DTevBlock16::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081BD0
 * Size:	000014
 */
void J3DTevBlock16::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081BE4
 * Size:	000010
 */
void J3DTevBlock16::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081BF4
 * Size:	000024
 */
void J3DTevBlock16::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x18(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x19(r4)
	  stb       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081C18
 * Size:	000024
 */
void J3DTevBlock16::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x18(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x19(r4)
	  stb       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081C3C
 * Size:	000014
 */
void J3DTevBlock16::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x18
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081C50
 * Size:	00002C
 */
void J3DTevBlock16::setTevColor(unsigned long, J3DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0xDA(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0xDC(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0xDE(r4)
	  sth       r0, 0xE0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081C7C
 * Size:	00002C
 */
void J3DTevBlock16::setTevColor(unsigned long, const J3DGXColorS10*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0xDA(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0xDC(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0xDE(r4)
	  sth       r0, 0xE0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081CA8
 * Size:	000014
 */
void J3DTevBlock16::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0xDA
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081CBC
 * Size:	00002C
 */
void J3DTevBlock16::setTevKColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xFA(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xFB(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xFC(r4)
	  stb       r0, 0xFD(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081CE8
 * Size:	00002C
 */
void J3DTevBlock16::setTevKColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xFA(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xFB(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xFC(r4)
	  stb       r0, 0xFD(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D14
 * Size:	000014
 */
void J3DTevBlock16::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xFA
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D28
 * Size:	00000C
 */
void J3DTevBlock16::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x10A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D34
 * Size:	000010
 */
void J3DTevBlock16::setTevKColorSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x10A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D44
 * Size:	00000C
 */
void J3DTevBlock16::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x10A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D50
 * Size:	00000C
 */
void J3DTevBlock16::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x11A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D5C
 * Size:	000010
 */
void J3DTevBlock16::setTevKAlphaSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x11A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D6C
 * Size:	00000C
 */
void J3DTevBlock16::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x11A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D78
 * Size:	000008
 */
void J3DTevBlock16::setTevStageNum(unsigned char a1)
{
	// Generated from stb r4, 0x58(r3)
	_58 = a1;
}

/*
 * --INFO--
 * Address:	80081D80
 * Size:	00000C
 */
void J3DTevBlock16::setTevStageNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D8C
 * Size:	000008
 */
void J3DTevBlock16::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081D94
 * Size:	00003C
 */
void J3DTevBlock16::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x5A(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x5B(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x5C(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x5E(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x5F(r4)
	  stb       r0, 0x60(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081DD0
 * Size:	00003C
 */
void J3DTevBlock16::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x5A(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x5B(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x5C(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x5E(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x5F(r4)
	  stb       r0, 0x60(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081E0C
 * Size:	000014
 */
void J3DTevBlock16::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x59
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081E20
 * Size:	000038
 */
void J3DTevBlock16::setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x60(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x60(r6)
	  lbz       r3, 0x60(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x60(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081E58
 * Size:	000038
 */
void J3DTevBlock16::setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x60(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x60(r6)
	  lbz       r3, 0x60(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x60(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081E90
 * Size:	000010
 */
void J3DTevBlock16::setTevSwapModeTable(unsigned long, J3DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x12A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081EA0
 * Size:	000010
 */
void J3DTevBlock16::setTevSwapModeTable(unsigned long,
                                        const J3DTevSwapModeTable*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x12A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081EB0
 * Size:	000010
 */
void J3DTevBlock16::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x12A
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081EC0
 * Size:	000014
 */
void J3DTevBlock16::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x130(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081ED4
 * Size:	000014
 */
void J3DTevBlock16::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x130(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081EE8
 * Size:	000014
 */
void J3DTevBlock16::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x130
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081EFC
 * Size:	000008
 */
void J3DTevBlock16::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081F04
 * Size:	000008
 */
void J3DTevBlock16::getTevRegOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x170(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081F0C
 * Size:	000008
 */
void J3DTevBlock16::setTevRegOffset(unsigned long a1)
{
	// Generated from stw r4, 0x170(r3)
	_170 = a1;
}

/*
 * --INFO--
 * Address:	80081F14
 * Size:	00005C
 */
J3DTevBlock16::~J3DTevBlock16()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x22A8
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5DEA0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80081F70
 * Size:	000004
 */
void J3DTevBlock4::ptrToIndex() { }

/*
 * --INFO--
 * Address:	80081F74
 * Size:	0000A0
 */
void J3DTevBlock4::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)

	.loc_0x38:
	  lwz       r3, -0x7158(r13)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  bl        -0x1CC60
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0x1CC4C
	  sth       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1CC50
	  addi      r31, r31, 0x1
	  b         .loc_0x38

	.loc_0x70:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x6A754
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082014
 * Size:	00000C
 */
void J3DTevBlock4::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4234
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082020
 * Size:	000010
 */
void J3DTevBlock4::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082030
 * Size:	000014
 */
void J3DTevBlock4::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082044
 * Size:	000010
 */
void J3DTevBlock4::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082054
 * Size:	000024
 */
void J3DTevBlock4::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x10(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x11(r4)
	  stb       r0, 0x12(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082078
 * Size:	000024
 */
void J3DTevBlock4::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x10(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x11(r4)
	  stb       r0, 0x12(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008209C
 * Size:	000014
 */
void J3DTevBlock4::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x10
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800820B0
 * Size:	00002C
 */
void J3DTevBlock4::setTevColor(unsigned long, J3DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x42(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x44(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x46(r4)
	  sth       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800820DC
 * Size:	00002C
 */
void J3DTevBlock4::setTevColor(unsigned long, const J3DGXColorS10*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x42(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x44(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x46(r4)
	  sth       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082108
 * Size:	000014
 */
void J3DTevBlock4::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x42
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008211C
 * Size:	00002C
 */
void J3DTevBlock4::setTevKColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x62(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x63(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x64(r4)
	  stb       r0, 0x65(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082148
 * Size:	00002C
 */
void J3DTevBlock4::setTevKColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x62(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x63(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x64(r4)
	  stb       r0, 0x65(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082174
 * Size:	000014
 */
void J3DTevBlock4::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x62
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082188
 * Size:	00000C
 */
void J3DTevBlock4::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x72(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082194
 * Size:	000010
 */
void J3DTevBlock4::setTevKColorSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x72(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821A4
 * Size:	00000C
 */
void J3DTevBlock4::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x72(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821B0
 * Size:	00000C
 */
void J3DTevBlock4::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x76(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821BC
 * Size:	000010
 */
void J3DTevBlock4::setTevKAlphaSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x76(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821CC
 * Size:	00000C
 */
void J3DTevBlock4::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x76(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821D8
 * Size:	000008
 */
void J3DTevBlock4::setTevStageNum(unsigned char a1)
{
	// Generated from stb r4, 0x20(r3)
	_20 = a1;
}

/*
 * --INFO--
 * Address:	800821E0
 * Size:	00000C
 */
void J3DTevBlock4::setTevStageNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821EC
 * Size:	000008
 */
void J3DTevBlock4::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800821F4
 * Size:	00003C
 */
void J3DTevBlock4::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x22(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x23(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x24(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x26(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x27(r4)
	  stb       r0, 0x28(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082230
 * Size:	00003C
 */
void J3DTevBlock4::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x22(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x23(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x24(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x26(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x27(r4)
	  stb       r0, 0x28(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008226C
 * Size:	000014
 */
void J3DTevBlock4::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x21
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082280
 * Size:	000038
 */
void J3DTevBlock4::setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x28(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x28(r6)
	  lbz       r3, 0x28(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x28(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800822B8
 * Size:	000038
 */
void J3DTevBlock4::setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x28(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x28(r6)
	  lbz       r3, 0x28(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x28(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800822F0
 * Size:	000010
 */
void J3DTevBlock4::setTevSwapModeTable(unsigned long, J3DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x7A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082300
 * Size:	000010
 */
void J3DTevBlock4::setTevSwapModeTable(unsigned long,
                                       const J3DTevSwapModeTable*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x7A(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082310
 * Size:	000010
 */
void J3DTevBlock4::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x7A
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082320
 * Size:	000014
 */
void J3DTevBlock4::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x80(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082334
 * Size:	000014
 */
void J3DTevBlock4::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x80(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082348
 * Size:	000014
 */
void J3DTevBlock4::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x80
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008235C
 * Size:	000008
 */
void J3DTevBlock4::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082364
 * Size:	000008
 */
void J3DTevBlock4::getTevRegOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x90(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008236C
 * Size:	000008
 */
void J3DTevBlock4::setTevRegOffset(unsigned long a1)
{
	// Generated from stw r4, 0x90(r3)
	_90 = a1;
}

/*
 * --INFO--
 * Address:	80082374
 * Size:	00005C
 */
J3DTevBlock4::~J3DTevBlock4()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2384
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5E300

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800823D0
 * Size:	000004
 */
void J3DTevBlock2::ptrToIndex() { }

/*
 * --INFO--
 * Address:	800823D4
 * Size:	0000A0
 */
void J3DTevBlock2::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)

	.loc_0x38:
	  lwz       r3, -0x7158(r13)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  bl        -0x1D0C0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0x1D0AC
	  sth       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1D0B0
	  addi      r31, r31, 0x1
	  b         .loc_0x38

	.loc_0x70:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x6A2F4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082474
 * Size:	00000C
 */
void J3DTevBlock2::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4232
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082480
 * Size:	000010
 */
void J3DTevBlock2::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082490
 * Size:	000014
 */
void J3DTevBlock2::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800824A4
 * Size:	000010
 */
void J3DTevBlock2::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800824B4
 * Size:	000024
 */
void J3DTevBlock2::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xC(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xD(r4)
	  stb       r0, 0xE(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800824D8
 * Size:	000024
 */
void J3DTevBlock2::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xC(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xD(r4)
	  stb       r0, 0xE(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800824FC
 * Size:	000014
 */
void J3DTevBlock2::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xC
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082510
 * Size:	00002C
 */
void J3DTevBlock2::setTevColor(unsigned long, J3DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x14(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x16(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x18(r4)
	  sth       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008253C
 * Size:	00002C
 */
void J3DTevBlock2::setTevColor(unsigned long, const J3DGXColorS10*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x14(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x16(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x18(r4)
	  sth       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082568
 * Size:	000014
 */
void J3DTevBlock2::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x14
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008257C
 * Size:	00002C
 */
void J3DTevBlock2::setTevKColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x45(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x46(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x47(r4)
	  stb       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800825A8
 * Size:	00002C
 */
void J3DTevBlock2::setTevKColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x45(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x46(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x47(r4)
	  stb       r0, 0x48(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800825D4
 * Size:	000014
 */
void J3DTevBlock2::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x45
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800825E8
 * Size:	00000C
 */
void J3DTevBlock2::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x55(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800825F4
 * Size:	000010
 */
void J3DTevBlock2::setTevKColorSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x55(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082604
 * Size:	00000C
 */
void J3DTevBlock2::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x55(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082610
 * Size:	00000C
 */
void J3DTevBlock2::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0x57(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008261C
 * Size:	000010
 */
void J3DTevBlock2::setTevKAlphaSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x57(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008262C
 * Size:	00000C
 */
void J3DTevBlock2::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0x57(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082638
 * Size:	000008
 */
void J3DTevBlock2::setTevStageNum(unsigned char a1)
{
	// Generated from stb r4, 0x34(r3)
	_34 = a1;
}

/*
 * --INFO--
 * Address:	80082640
 * Size:	00000C
 */
void J3DTevBlock2::setTevStageNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008264C
 * Size:	000008
 */
void J3DTevBlock2::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x34(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082654
 * Size:	00003C
 */
void J3DTevBlock2::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x36(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x37(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x38(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x3A(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x3B(r4)
	  stb       r0, 0x3C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082690
 * Size:	00003C
 */
void J3DTevBlock2::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x36(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x37(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x38(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x3A(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x3B(r4)
	  stb       r0, 0x3C(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800826CC
 * Size:	000014
 */
void J3DTevBlock2::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x35
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800826E0
 * Size:	000038
 */
void J3DTevBlock2::setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x3C(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x3C(r6)
	  lbz       r3, 0x3C(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x3C(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082718
 * Size:	000038
 */
void J3DTevBlock2::setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r4, 0x1(r5)
	  add       r6, r3, r0
	  lbz       r0, 0x0(r5)
	  lbz       r5, 0x3C(r6)
	  rlwinm    r3,r4,2,0,29
	  rlwinm    r4,r5,0,30,27
	  or        r3, r4, r3
	  stb       r3, 0x3C(r6)
	  lbz       r3, 0x3C(r6)
	  rlwinm    r3,r3,0,0,29
	  or        r0, r3, r0
	  stb       r0, 0x3C(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082750
 * Size:	000010
 */
void J3DTevBlock2::setTevSwapModeTable(unsigned long, J3DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x59(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082760
 * Size:	000010
 */
void J3DTevBlock2::setTevSwapModeTable(unsigned long,
                                       const J3DTevSwapModeTable*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0x59(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082770
 * Size:	000010
 */
void J3DTevBlock2::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  mr        r0, r3
	  addi      r3, r4, 0x59
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082780
 * Size:	000014
 */
void J3DTevBlock2::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082794
 * Size:	000014
 */
void J3DTevBlock2::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x60(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800827A8
 * Size:	000014
 */
void J3DTevBlock2::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x60
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800827BC
 * Size:	000008
 */
void J3DTevBlock2::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800827C4
 * Size:	000008
 */
void J3DTevBlock2::getTevRegOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800827CC
 * Size:	000008
 */
void J3DTevBlock2::setTevRegOffset(unsigned long a1)
{
	// Generated from stw r4, 0x68(r3)
	_68 = a1;
}

/*
 * --INFO--
 * Address:	800827D4
 * Size:	00005C
 */
J3DTevBlock2::~J3DTevBlock2()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2460
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5E760

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082830
 * Size:	000004
 */
void J3DTevBlock1::ptrToIndex() { }

/*
 * --INFO--
 * Address:	80082834
 * Size:	0000A0
 */
void J3DTevBlock1::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)

	.loc_0x38:
	  lwz       r3, -0x7158(r13)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  bl        -0x1D520
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0x1D50C
	  sth       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1D510
	  addi      r31, r31, 0x1
	  b         .loc_0x38

	.loc_0x70:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x69E94
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800828D4
 * Size:	00000C
 */
void J3DTevBlock1::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4231
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800828E0
 * Size:	000010
 */
void J3DTevBlock1::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800828F0
 * Size:	000014
 */
void J3DTevBlock1::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082904
 * Size:	000010
 */
void J3DTevBlock1::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082914
 * Size:	000024
 */
void J3DTevBlock1::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xA(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xB(r4)
	  stb       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082938
 * Size:	000024
 */
void J3DTevBlock1::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0xA(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0xB(r4)
	  stb       r0, 0xC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008295C
 * Size:	000014
 */
void J3DTevBlock1::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xA
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082970
 * Size:	000004
 */
void J3DTevBlock1::setTevStageNum(unsigned char) { }

/*
 * --INFO--
 * Address:	80082974
 * Size:	000004
 */
void J3DTevBlock1::setTevStageNum(const unsigned char*) { }

/*
 * --INFO--
 * Address:	80082978
 * Size:	000008
 */
u32 J3DTevBlock1::getTevStageNum() const { return 0x1; }

/*
 * --INFO--
 * Address:	80082980
 * Size:	00003C
 */
void J3DTevBlock1::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0xF(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x10(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x11(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x13(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x14(r4)
	  stb       r0, 0x15(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800829BC
 * Size:	00003C
 */
void J3DTevBlock1::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0xF(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x10(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x11(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x13(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x14(r4)
	  stb       r0, 0x15(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800829F8
 * Size:	000014
 */
void J3DTevBlock1::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0xE
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082A0C
 * Size:	000014
 */
void J3DTevBlock1::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082A20
 * Size:	000014
 */
void J3DTevBlock1::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082A34
 * Size:	000014
 */
void J3DTevBlock1::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x18
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082A48
 * Size:	000008
 */
void J3DTevBlock1::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082A50
 * Size:	00005C
 */
J3DTevBlock1::~J3DTevBlock1()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x253C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5E9DC

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082AAC
 * Size:	000004
 */
void J3DTevBlockPatched::load() { }

/*
 * --INFO--
 * Address:	80082AB0
 * Size:	0000A0
 */
void J3DTevBlockPatched::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  lwz       r4, -0x7158(r13)
	  lwz       r0, 0x4(r3)
	  lwz       r3, 0x0(r4)
	  add       r0, r3, r0
	  stw       r0, 0x8(r4)
	  lwz       r3, -0x7158(r13)
	  lwz       r30, 0x8(r3)

	.loc_0x38:
	  lwz       r3, -0x7158(r13)
	  lwz       r29, 0x8(r3)
	  mr        r3, r29
	  bl        -0x1D79C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x70
	  mr        r3, r29
	  bl        -0x1D788
	  sth       r3, 0x8(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x1D78C
	  addi      r31, r31, 0x1
	  b         .loc_0x38

	.loc_0x70:
	  lwz       r4, -0x7158(r13)
	  mr        r3, r30
	  lwz       r0, 0x8(r4)
	  sub       r4, r0, r30
	  bl        0x69C18
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B50
 * Size:	00000C
 */
void J3DTevBlockPatched::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x5054
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B5C
 * Size:	000008
 */
void J3DTevBlockPatched::setTevStageNum(unsigned char a1)
{
	// Generated from stb r4, 0xD0(r3)
	_D0 = a1;
}

/*
 * --INFO--
 * Address:	80082B64
 * Size:	00000C
 */
void J3DTevBlockPatched::setTevStageNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xD0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B70
 * Size:	000008
 */
void J3DTevBlockPatched::getTevStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0xD0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B78
 * Size:	000010
 */
void J3DTevBlockPatched::setTexNo(unsigned long, unsigned short)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  sth       r5, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B88
 * Size:	000014
 */
void J3DTevBlockPatched::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082B9C
 * Size:	000010
 */
void J3DTevBlockPatched::getTexNo(unsigned long) const
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  add       r3, r3, r0
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082BAC
 * Size:	000024
 */
void J3DTevBlockPatched::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x18(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x19(r4)
	  stb       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082BD0
 * Size:	000024
 */
void J3DTevBlockPatched::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  lbz       r0, 0x0(r5)
	  add       r4, r3, r4
	  lbz       r3, 0x1(r5)
	  stb       r0, 0x18(r4)
	  lbz       r0, 0x2(r5)
	  stb       r3, 0x19(r4)
	  stb       r0, 0x1A(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082BF4
 * Size:	000014
 */
void J3DTevBlockPatched::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x18
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082C08
 * Size:	00003C
 */
void J3DTevBlockPatched::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x39(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x3A(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x3B(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x3D(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x3E(r4)
	  stb       r0, 0x3F(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082C44
 * Size:	00003C
 */
void J3DTevBlockPatched::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lbz       r6, 0x1(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x2(r5)
	  stb       r6, 0x39(r4)
	  lbz       r3, 0x3(r5)
	  stb       r0, 0x3A(r4)
	  lbz       r0, 0x5(r5)
	  stb       r3, 0x3B(r4)
	  lbz       r3, 0x6(r5)
	  stb       r0, 0x3D(r4)
	  lbz       r0, 0x7(r5)
	  stb       r3, 0x3E(r4)
	  stb       r0, 0x3F(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082C80
 * Size:	000014
 */
void J3DTevBlockPatched::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x38
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082C94
 * Size:	000014
 */
void J3DTevBlockPatched::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082CA8
 * Size:	000014
 */
void J3DTevBlockPatched::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lwz       r4, 0x0(r5)
	  add       r3, r3, r0
	  stw       r4, 0x78(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082CBC
 * Size:	000014
 */
void J3DTevBlockPatched::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x78
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082CD0
 * Size:	00002C
 */
void J3DTevBlockPatched::setTevColor(unsigned long, J3DGXColorS10)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x98(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x9A(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x9C(r4)
	  sth       r0, 0x9E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082CFC
 * Size:	00002C
 */
void J3DTevBlockPatched::setTevColor(unsigned long, const J3DGXColorS10*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,3,0,28
	  lha       r6, 0x0(r5)
	  add       r4, r3, r0
	  lha       r0, 0x2(r5)
	  sth       r6, 0x98(r4)
	  lha       r3, 0x4(r5)
	  sth       r0, 0x9A(r4)
	  lha       r0, 0x6(r5)
	  sth       r3, 0x9C(r4)
	  sth       r0, 0x9E(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082D28
 * Size:	000014
 */
void J3DTevBlockPatched::getTevColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,3,0,28
	  mr        r0, r3
	  addi      r3, r4, 0x98
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082D3C
 * Size:	00002C
 */
void J3DTevBlockPatched::setTevKColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xB8(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xB9(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xBA(r4)
	  stb       r0, 0xBB(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082D68
 * Size:	00002C
 */
void J3DTevBlockPatched::setTevKColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xB8(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xB9(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xBA(r4)
	  stb       r0, 0xBB(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082D94
 * Size:	000014
 */
void J3DTevBlockPatched::getTevKColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xB8
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DA8
 * Size:	00000C
 */
void J3DTevBlockPatched::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  stb       r5, 0xC8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DB4
 * Size:	000010
 */
void J3DTevBlockPatched::setTevKColorSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r5)
	  add       r3, r3, r4
	  stb       r0, 0xC8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DC4
 * Size:	00000C
 */
void J3DTevBlockPatched::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  add       r3, r3, r4
	  lbz       r3, 0xC8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DD0
 * Size:	000008
 */
void J3DTevBlockPatched::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DD8
 * Size:	000008
 */
void J3DTevBlockPatched::getTevRegOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0xD4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082DE0
 * Size:	000008
 */
void J3DTevBlockPatched::setTevRegOffset(unsigned long a1)
{
	// Generated from stw r4, 0xD4(r3)
	_D4 = a1;
}

/*
 * --INFO--
 * Address:	80082DE8
 * Size:	00005C
 */
J3DTevBlockPatched::~J3DTevBlockPatched()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2618
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5ED74

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082E44
 * Size:	00000C
 */
void J3DTexGenBlockBasic::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5447
	  addi      r3, r3, 0x4243
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082E50
 * Size:	000024
 */
void J3DTexGenBlockBasic::setNBTScale(J3DNBTScale)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  stb       r0, 0x5C(r3)
	  lfs       f1, 0x8(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f1, 0x64(r3)
	  stfs      f0, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082E74
 * Size:	000024
 */
void J3DTexGenBlockBasic::setNBTScale(const J3DNBTScale*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  stb       r0, 0x5C(r3)
	  lfs       f1, 0x8(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f1, 0x64(r3)
	  stfs      f0, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082E98
 * Size:	000008
 */
void J3DTexGenBlockBasic::getNBTScale()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x5C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082EA0
 * Size:	00006C
 */
J3DTexGenBlockBasic::~J3DTexGenBlockBasic()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x26F4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x27CC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x171C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x5EE3C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F0C
 * Size:	000008
 */
void J3DTexGenBlockPatched::setTexGenNum(unsigned long a1)
{
	// Generated from stw r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	80082F14
 * Size:	00000C
 */
void J3DTexGenBlockPatched::setTexGenNum(const unsigned long*)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x0(r4)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F20
 * Size:	000008
 */
void J3DTexGenBlockPatched::getTexGenNum() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F28
 * Size:	000024
 */
void J3DTexGenBlockPatched::setTexCoord(unsigned long, const J3DTexCoord*)
{
	/*
	.loc_0x0:
	  mulli     r7, r4, 0x6
	  lbz       r6, 0x0(r5)
	  lbz       r4, 0x1(r5)
	  lbz       r0, 0x2(r5)
	  add       r3, r3, r7
	  stb       r6, 0x8(r3)
	  stb       r4, 0x9(r3)
	  stb       r0, 0xA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F4C
 * Size:	000014
 */
void J3DTexGenBlockPatched::getTexCoord(unsigned long)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x6
	  mr        r0, r3
	  addi      r3, r4, 0x8
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F60
 * Size:	000010
 */
void J3DTexGenBlockPatched::setTexMtx(unsigned long, J3DTexMtx*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  stw       r5, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F70
 * Size:	000010
 */
void J3DTexGenBlockPatched::getTexMtx(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x38(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F80
 * Size:	000008
 */
void J3DTexGenBlockPatched::getTexMtxOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x58(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F88
 * Size:	000008
 */
void J3DTexGenBlockPatched::setTexMtxOffset(unsigned long a1)
{
	// Generated from stw r4, 0x58(r3)
	_58 = a1;
}

/*
 * --INFO--
 * Address:	80082F90
 * Size:	00000C
 */
void J3DTexGenBlock4::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5447
	  addi      r3, r3, 0x4234
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082F9C
 * Size:	000024
 */
void J3DTexGenBlock4::setNBTScale(J3DNBTScale)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  stb       r0, 0x5C(r3)
	  lfs       f1, 0x8(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f1, 0x64(r3)
	  stfs      f0, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082FC0
 * Size:	000024
 */
void J3DTexGenBlock4::setNBTScale(const J3DNBTScale*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  lfs       f0, 0x4(r4)
	  stb       r0, 0x5C(r3)
	  lfs       f1, 0x8(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f1, 0x64(r3)
	  stfs      f0, 0x68(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082FE4
 * Size:	000008
 */
void J3DTexGenBlock4::getNBTScale()
{
	/*
	.loc_0x0:
	  addi      r3, r3, 0x5C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80082FEC
 * Size:	00006C
 */
J3DTexGenBlock4::~J3DTexGenBlock4()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2760
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x27CC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x171C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x5EF88

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083058
 * Size:	000004
 */
void J3DTexGenBlockPatched::load() { }

/*
 * --INFO--
 * Address:	8008305C
 * Size:	00000C
 */
void J3DTexGenBlockPatched::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5447
	  addi      r3, r3, 0x5054
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083068
 * Size:	00000C
 */
void J3DColorBlockLightOn::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x434C
	  addi      r3, r3, 0x4F4E
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083074
 * Size:	00002C
 */
void J3DColorBlockLightOn::setMatColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x4(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x6(r4)
	  stb       r0, 0x7(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800830A0
 * Size:	00002C
 */
void J3DColorBlockLightOn::setMatColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x4(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x6(r4)
	  stb       r0, 0x7(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800830CC
 * Size:	000014
 */
void J3DColorBlockLightOn::getMatColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x4
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800830E0
 * Size:	00002C
 */
void J3DColorBlockLightOn::setAmbColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xC(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xD(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xE(r4)
	  stb       r0, 0xF(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008310C
 * Size:	00002C
 */
void J3DColorBlockLightOn::setAmbColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0xC(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0xD(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0xE(r4)
	  stb       r0, 0xF(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083138
 * Size:	000014
 */
void J3DColorBlockLightOn::getAmbColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0xC
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008314C
 * Size:	00000C
 */
void J3DColorBlockLightOn::setColorChanNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083158
 * Size:	000008
 */
void J3DColorBlockLightOn::setColorChanNum(unsigned char a1)
{
	// Generated from stb r4, 0x14(r3)
	_14 = a1;
}

/*
 * --INFO--
 * Address:	80083160
 * Size:	000008
 */
void J3DColorBlockLightOn::getColorChanNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083168
 * Size:	000014
 */
void J3DColorBlockLightOn::setColorChan(unsigned long, const J3DColorChan*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008317C
 * Size:	000014
 */
void J3DColorBlockLightOn::setColorChan(unsigned long, const J3DColorChan&)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083190
 * Size:	000014
 */
void J3DColorBlockLightOn::getColorChan(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,1,0,30
	  mr        r0, r3
	  addi      r3, r4, 0x16
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831A4
 * Size:	000010
 */
void J3DColorBlockLightOn::setLight(unsigned long, J3DLightObj*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  stw       r5, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831B4
 * Size:	000010
 */
void J3DColorBlockLightOn::getLight(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  add       r3, r3, r0
	  lwz       r3, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831C4
 * Size:	000008
 */
void J3DColorBlockLightOn::setCullMode(unsigned char a1)
{
	// Generated from stb r4, 0x40(r3)
	_40 = a1;
}

/*
 * --INFO--
 * Address:	800831CC
 * Size:	00000C
 */
void J3DColorBlockLightOn::setCullMode(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831D8
 * Size:	000008
 */
void J3DColorBlockLightOn::getCullMode() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x40(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831E0
 * Size:	000008
 */
void J3DColorBlockLightOn::getMatColorOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x44(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831E8
 * Size:	000008
 */
void J3DColorBlockLightOn::getColorChanOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x48(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800831F0
 * Size:	000008
 */
void J3DColorBlockLightOn::setMatColorOffset(unsigned long a1)
{
	// Generated from stw r4, 0x44(r3)
	_44 = a1;
}

/*
 * --INFO--
 * Address:	800831F8
 * Size:	000008
 */
void J3DColorBlockLightOn::setColorChanOffset(unsigned long a1)
{
	// Generated from stw r4, 0x48(r3)
	_48 = a1;
}

/*
 * --INFO--
 * Address:	80083200
 * Size:	00005C
 */
J3DColorBlockLightOn::~J3DColorBlockLightOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2838
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1788
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5F18C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008325C
 * Size:	00000C
 */
void J3DColorBlockAmbientOn::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x434C
	  addi      r3, r3, 0x4142
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083268
 * Size:	00002C
 */
void J3DColorBlockAmbientOn::setAmbColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x20(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x21(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x22(r4)
	  stb       r0, 0x23(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083294
 * Size:	00002C
 */
void J3DColorBlockAmbientOn::setAmbColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x20(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x21(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x22(r4)
	  stb       r0, 0x23(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800832C0
 * Size:	000014
 */
void J3DColorBlockAmbientOn::getAmbColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x20
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800832D4
 * Size:	00006C
 */
J3DColorBlockAmbientOn::~J3DColorBlockAmbientOn()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x28C0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2BE4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1788
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x5F270

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083340
 * Size:	00002C
 */
void J3DColorBlockLightOff::setMatColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x4(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x6(r4)
	  stb       r0, 0x7(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008336C
 * Size:	00002C
 */
void J3DColorBlockLightOff::setMatColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r6, 0x0(r5)
	  add       r4, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r6, 0x4(r4)
	  lbz       r3, 0x2(r5)
	  stb       r0, 0x5(r4)
	  lbz       r0, 0x3(r5)
	  stb       r3, 0x6(r4)
	  stb       r0, 0x7(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083398
 * Size:	000014
 */
void J3DColorBlockLightOff::getMatColor(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x4
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800833AC
 * Size:	00000C
 */
void J3DColorBlockLightOff::setColorChanNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800833B8
 * Size:	000008
 */
void J3DColorBlockLightOff::setColorChanNum(unsigned char a1)
{
	// Generated from stb r4, 0xC(r3)
	_0C = a1;
}

/*
 * --INFO--
 * Address:	800833C0
 * Size:	000008
 */
void J3DColorBlockLightOff::getColorChanNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800833C8
 * Size:	000014
 */
void J3DColorBlockLightOff::setColorChan(unsigned long, const J3DColorChan*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800833DC
 * Size:	000014
 */
void J3DColorBlockLightOff::setColorChan(unsigned long, const J3DColorChan&)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,1,0,30
	  lhz       r4, 0x0(r5)
	  add       r3, r3, r0
	  sth       r4, 0xE(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800833F0
 * Size:	000014
 */
void J3DColorBlockLightOff::getColorChan(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,1,0,30
	  mr        r0, r3
	  addi      r3, r4, 0xE
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083404
 * Size:	000008
 */
void J3DColorBlockLightOff::setCullMode(unsigned char a1)
{
	// Generated from stb r4, 0x16(r3)
	_16 = a1;
}

/*
 * --INFO--
 * Address:	8008340C
 * Size:	00000C
 */
void J3DColorBlockLightOff::setCullMode(const unsigned char*)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083418
 * Size:	000008
 */
void J3DColorBlockLightOff::getCullMode() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x16(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083420
 * Size:	000008
 */
void J3DColorBlockLightOff::getMatColorOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x18(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083428
 * Size:	000008
 */
void J3DColorBlockLightOff::getColorChanOffset() const
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083430
 * Size:	000008
 */
void J3DColorBlockLightOff::setMatColorOffset(unsigned long a1)
{
	// Generated from stw r4, 0x18(r3)
	_18 = a1;
}

/*
 * --INFO--
 * Address:	80083438
 * Size:	000008
 */
void J3DColorBlockLightOff::setColorChanOffset(unsigned long a1)
{
	// Generated from stw r4, 0x1C(r3)
	_1C = a1;
}

/*
 * --INFO--
 * Address:	80083440
 * Size:	00000C
 */
void J3DPEBlockXlu::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x584C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008344C
 * Size:	00005C
 */
J3DPEBlockXlu::~J3DPEBlockXlu()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2948
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5F3D8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800834A8
 * Size:	00000C
 */
void J3DPEBlockTexEdge::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x4544
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800834B4
 * Size:	00005C
 */
J3DPEBlockTexEdge::~J3DPEBlockTexEdge()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x29C4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5F440

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083510
 * Size:	00000C
 */
void J3DPEBlockOpa::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x4F50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008351C
 * Size:	00005C
 */
J3DPEBlockOpa::~J3DPEBlockOpa()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2A40
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x5F4A8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083578
 * Size:	00000C
 */
void J3DIndBlockFull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x4942
	  addi      r3, r3, 0x4C46
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083584
 * Size:	000008
 */
void J3DIndBlockFull::setIndTexStageNum(unsigned char a1)
{
	// Generated from stb r4, 0x4(r3)
	_04 = a1;
}

/*
 * --INFO--
 * Address:	8008358C
 * Size:	000008
 */
void J3DIndBlockFull::getIndTexStageNum() const
{
	/*
	.loc_0x0:
	  lbz       r3, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083594
 * Size:	00001C
 */
void J3DIndBlockFull::setIndTexOrder(unsigned long, J3DIndTexOrder)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x5(r3)
	  stb       r0, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800835B0
 * Size:	00001C
 */
void J3DIndBlockFull::setIndTexOrder(unsigned long, const J3DIndTexOrder*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x5(r3)
	  stb       r0, 0x6(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800835CC
 * Size:	000014
 */
void J3DIndBlockFull::getIndTexOrder(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x5
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800835E0
 * Size:	000044
 */
void J3DIndBlockFull::setIndTexMtx(unsigned long, J3DIndTexMtx)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x1C
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x8(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x18(r5)
	  stfs      f2, 0x18(r3)
	  lfs       f2, 0xC(r5)
	  stfs      f1, 0x1C(r3)
	  lfs       f1, 0x10(r5)
	  stfs      f0, 0x20(r3)
	  lfs       f0, 0x14(r5)
	  stfs      f2, 0x24(r3)
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stb       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083624
 * Size:	000044
 */
void J3DIndBlockFull::setIndTexMtx(unsigned long, const J3DIndTexMtx*)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x1C
	  lfs       f2, 0x0(r5)
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x8(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x18(r5)
	  stfs      f2, 0x18(r3)
	  lfs       f2, 0xC(r5)
	  stfs      f1, 0x1C(r3)
	  lfs       f1, 0x10(r5)
	  stfs      f0, 0x20(r3)
	  lfs       f0, 0x14(r5)
	  stfs      f2, 0x24(r3)
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stb       r0, 0x30(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083668
 * Size:	000014
 */
void J3DIndBlockFull::getIndTexMtx(unsigned long)
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x1C
	  mr        r0, r3
	  addi      r3, r4, 0x18
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008367C
 * Size:	00001C
 */
void J3DIndBlockFull::setIndTexCoordScale(unsigned long, J3DIndTexCoordScale)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x6C(r3)
	  stb       r0, 0x6D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083698
 * Size:	00001C
 */
void J3DIndBlockFull::setIndTexCoordScale(unsigned long,
                                          const J3DIndTexCoordScale*)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,2,0,29
	  lbz       r4, 0x0(r5)
	  add       r3, r3, r0
	  lbz       r0, 0x1(r5)
	  stb       r4, 0x6C(r3)
	  stb       r0, 0x6D(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800836B4
 * Size:	000014
 */
void J3DIndBlockFull::getIndTexCoordScale(unsigned long)
{
	/*
	.loc_0x0:
	  rlwinm    r4,r4,2,0,29
	  mr        r0, r3
	  addi      r3, r4, 0x6C
	  add       r3, r0, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800836C8
 * Size:	00009C
 */
J3DIndBlockFull::~J3DIndBlockFull()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x80
	  lis       r3, 0x804A
	  lis       r4, 0x8006
	  addi      r0, r3, 0x2ABC
	  li        r5, 0x4
	  stw       r0, 0x0(r30)
	  addi      r3, r30, 0x6C
	  addi      r4, r4, 0x2264
	  li        r6, 0x4
	  bl        0x3E0BC
	  lis       r4, 0x8006
	  addi      r3, r30, 0x18
	  addi      r4, r4, 0x22B8
	  li        r5, 0x1C
	  li        r6, 0x3
	  bl        0x3E0A4
	  cmplwi    r30, 0
	  beq-      .loc_0x70
	  lis       r3, 0x804A
	  addi      r0, r3, 0x16D0
	  stw       r0, 0x0(r30)

	.loc_0x70:
	  extsh.    r0, r31
	  ble-      .loc_0x80
	  mr        r3, r30
	  bl        -0x5F690

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083764
 * Size:	00000C
 */
void J3DColorBlockLightOff::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x434C
	  addi      r3, r3, 0x4F46
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80083770
 * Size:	000024
 */
void __sinit_J3DMatBlock_cpp(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7F48(r13)
	  lwz       r0, -0x7F4C(r13)
	  lwz       r4, -0x7F50(r13)
	  add       r0, r0, r3
	  add       r3, r4, r3
	  add       r0, r4, r0
	  stw       r3, -0x7668(r13)
	  stw       r0, -0x7664(r13)
	  blr
	*/
}
