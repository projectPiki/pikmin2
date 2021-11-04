#include "types.h"

namespace ebi {

namespace Screen {

	/*
	 * --INFO--
	 * Address:	803ED2A8
	 * Size:	000274
	 */
	TOmake::TOmake(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x20(r1)
		  mflr      r0
		  lis       r4, 0x804F
		  li        r5, 0
		  stw       r0, 0x24(r1)
		  subi      r0, r4, 0x7818
		  stw       r31, 0x1C(r1)
		  stw       r30, 0x18(r1)
		  mr        r30, r3
		  lis       r3, 0x804F
		  stw       r29, 0x14(r1)
		  addi      r31, r30, 0xE0
		  stw       r0, 0x0(r30)
		  subi      r0, r3, 0x7370
		  lis       r3, 0x804F
		  stw       r0, 0x0(r30)
		  subi      r4, r3, 0x5E4C
		  li        r0, 0xFF
		  mr        r3, r31
		  stw       r5, 0x4(r30)
		  stw       r5, 0x8(r30)
		  stw       r4, 0x0(r30)
		  stw       r5, 0x14(r30)
		  stw       r5, 0x18(r30)
		  stw       r5, 0x40(r30)
		  stb       r5, 0x44(r30)
		  stb       r5, 0x45(r30)
		  stb       r5, 0x46(r30)
		  stb       r0, 0x47(r30)
		  stb       r0, 0x48(r30)
		  stw       r5, 0x4C(r30)
		  stw       r5, 0x50(r30)
		  stw       r5, 0x54(r30)
		  stw       r5, 0x58(r30)
		  bl        0x24060
		  lis       r3, 0x804D
		  lis       r6, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r5, 0x804F
		  stw       r0, 0x0(r31)
		  li        r0, 0
		  lis       r4, 0x804F
		  lis       r3, 0x804E
		  stw       r0, 0x18(r31)
		  addi      r0, r6, 0x7F2C
		  subi      r7, r5, 0x77D0
		  li        r6, 0x1
		  stw       r0, 0x0(r31)
		  subi      r5, r4, 0x75F4
		  addi      r0, r3, 0x798C
		  addi      r3, r31, 0x20
		  stw       r7, 0x0(r31)
		  li        r4, 0
		  stb       r6, 0x1C(r31)
		  stw       r5, 0x0(r31)
		  stw       r0, 0x20(r31)
		  bl        -0x385D10
		  addi      r31, r30, 0x11C
		  mr        r3, r31
		  bl        0x23FFC
		  lis       r3, 0x804D
		  lis       r6, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r5, 0x804F
		  stw       r0, 0x0(r31)
		  li        r0, 0
		  lis       r4, 0x804F
		  lis       r3, 0x804E
		  stw       r0, 0x18(r31)
		  addi      r0, r6, 0x7F2C
		  subi      r7, r5, 0x77D0
		  li        r6, 0x1
		  stw       r0, 0x0(r31)
		  subi      r5, r4, 0x75F4
		  addi      r0, r3, 0x798C
		  addi      r3, r31, 0x20
		  stw       r7, 0x0(r31)
		  li        r4, 0
		  stb       r6, 0x1C(r31)
		  stw       r5, 0x0(r31)
		  stw       r0, 0x20(r31)
		  bl        -0x385D74
		  addi      r29, r30, 0x158
		  mr        r3, r29
		  bl        0x23F98
		  lis       r3, 0x804D
		  lis       r5, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r4, 0x804F
		  stw       r0, 0x0(r29)
		  li        r0, 0
		  lis       r3, 0x804F
		  addi      r31, r30, 0x178
		  stw       r0, 0x18(r29)
		  addi      r0, r5, 0x7F2C
		  subi      r5, r4, 0x77D0
		  li        r4, 0x1
		  stw       r0, 0x0(r29)
		  subi      r0, r3, 0x77F4
		  mr        r3, r31
		  stw       r5, 0x0(r29)
		  stb       r4, 0x1C(r29)
		  stw       r0, 0x0(r29)
		  bl        0x23F4C
		  lis       r3, 0x804D
		  lis       r5, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r4, 0x804F
		  stw       r0, 0x0(r31)
		  li        r7, 0
		  lis       r3, 0x804F
		  addi      r6, r5, 0x7F2C
		  stw       r7, 0x18(r31)
		  subi      r5, r4, 0x77D0
		  li        r4, 0x1
		  subi      r0, r3, 0x7618
		  stw       r6, 0x0(r31)
		  addi      r3, r31, 0x48
		  stw       r5, 0x0(r31)
		  stb       r4, 0x1C(r31)
		  stw       r0, 0x0(r31)
		  stw       r7, 0x40(r31)
		  stw       r7, 0x44(r31)
		  bl        -0xC4690
		  lfs       f0, 0x1B00(r2)
		  lis       r4, 0x803F
		  lis       r3, 0x803D
		  li        r0, 0
		  stfs      f0, 0x64(r31)
		  subi      r5, r3, 0x1A4
		  subi      r4, r4, 0x14DC
		  addi      r3, r30, 0x1E4
		  stw       r0, 0x68(r31)
		  li        r6, 0x4C
		  li        r7, 0x7
		  bl        -0x32BC88
		  li        r0, -0x1
		  mr        r3, r30
		  stw       r0, 0x430(r30)
		  stw       r0, 0x434(r30)
		  stw       r0, 0x438(r30)
		  stw       r0, 0x43C(r30)
		  stw       r0, 0x440(r30)
		  stw       r0, 0x444(r30)
		  stw       r0, 0x448(r30)
		  stw       r0, 0x44C(r30)
		  stw       r0, 0x450(r30)
		  stw       r0, 0x454(r30)
		  stw       r0, 0x458(r30)
		  stw       r0, 0x45C(r30)
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
	 * Address:	803ED51C
	 * Size:	0005F0
	 */
	void TOmake::doSetArchive(JKRArchive*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  lis       r5, 0x8049
		  stw       r0, 0x64(r1)
		  stmw      r24, 0x40(r1)
		  mr        r29, r3
		  addi      r31, r5, 0x7A18
		  mr        r30, r4
		  li        r5, 0
		  addi      r4, r31, 0x10
		  lwz       r3, -0x6514(r13)
		  bl        0x35E14
		  li        r3, 0x148
		  bl        -0x3C96AC
		  mr.       r0, r3
		  beq-      .loc_0x48
		  bl        0x47850
		  mr        r0, r3

		.loc_0x48:
		  stw       r0, 0x58(r29)
		  mr        r6, r30
		  addi      r4, r31, 0x2C
		  lis       r5, 0x110
		  lwz       r3, 0x58(r29)
		  bl        -0x3ADF54
		  lwz       r3, -0x6514(r13)
		  addi      r4, r31, 0x10
		  bl        0x35DE0
		  lis       r4, 0x7769
		  lwz       r3, 0x58(r29)
		  addi      r6, r4, 0x6E30
		  li        r5, 0x4E
		  bl        -0x23240
		  stw       r3, 0x5C(r29)
		  lis       r3, 0x6974
		  addi      r6, r3, 0x6C30
		  li        r5, 0x4E74
		  lwz       r3, 0x58(r29)
		  bl        -0x23258
		  stw       r3, 0x60(r29)
		  lis       r3, 0x6162
		  addi      r6, r3, 0x746E
		  li        r5, 0x4E
		  lwz       r3, 0x58(r29)
		  bl        -0x23270
		  stw       r3, 0x64(r29)
		  lis       r3, 0x6262
		  addi      r6, r3, 0x746E
		  li        r5, 0x4E
		  lwz       r3, 0x58(r29)
		  bl        -0x23288
		  stw       r3, 0x68(r29)
		  li        r4, 0x1
		  lwz       r3, 0x60(r29)
		  bl        -0x2320C
		  lwz       r3, 0x64(r29)
		  li        r4, 0x1
		  bl        -0x23218
		  lwz       r3, 0x68(r29)
		  li        r4, 0x1
		  bl        -0x23224
		  lis       r3, 0x7473
		  mr        r28, r29
		  addi      r27, r3, 0x3030
		  li        r25, 0

		.loc_0x100:
		  addis     r4, r25, 0x4E6E
		  lwz       r3, 0x58(r29)
		  addi      r6, r4, 0x3030
		  li        r5, 0
		  bl        -0x232D4
		  stw       r3, 0x6C(r28)
		  addis     r3, r25, 0x5777
		  addi      r6, r3, 0x3030
		  li        r5, 0
		  lwz       r3, 0x58(r29)
		  bl        -0x232EC
		  stw       r3, 0x8C(r28)
		  addis     r3, r25, 0x5474
		  addi      r6, r3, 0x3030
		  li        r5, 0
		  lwz       r3, 0x58(r29)
		  bl        -0x23304
		  stw       r3, 0xA8(r28)
		  srawi     r3, r25, 0x1F
		  addc      r6, r25, r27
		  li        r0, 0x54
		  adde      r5, r3, r0
		  lwz       r3, 0x58(r29)
		  bl        -0x23320
		  addi      r25, r25, 0x1
		  stw       r3, 0xC4(r28)
		  cmpwi     r25, 0x7
		  addi      r28, r28, 0x4
		  blt+      .loc_0x100
		  lis       r5, 0x6C63
		  lis       r4, 0x57
		  lwz       r3, 0x58(r29)
		  addi      r6, r5, 0x7477
		  addi      r5, r4, 0x7365
		  bl        -0x2334C
		  stw       r3, 0x88(r29)
		  lis       r3, 0x4441
		  addi      r6, r3, 0x5441
		  li        r5, 0
		  lwz       r3, 0xA8(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x3FC(r29)
		  stw       r0, 0x3F8(r29)
		  lwz       r3, 0xAC(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x404(r29)
		  stw       r0, 0x400(r29)
		  lwz       r3, 0xB0(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x40C(r29)
		  stw       r0, 0x408(r29)
		  lwz       r3, 0xB4(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x414(r29)
		  stw       r0, 0x410(r29)
		  lwz       r3, 0xB8(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x41C(r29)
		  stw       r0, 0x418(r29)
		  lwz       r3, 0xBC(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x424(r29)
		  stw       r0, 0x420(r29)
		  lwz       r3, 0xC0(r29)
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  stw       r3, 0x42C(r29)
		  stw       r0, 0x428(r29)
		  lwz       r3, 0x58(r29)
		  bl        -0x233F0
		  li        r0, 0
		  addi      r4, r31, 0x38
		  stb       r0, 0xB0(r3)
		  li        r5, 0
		  lwz       r3, -0x6514(r13)
		  bl        0x35BFC
		  lwz       r3, 0x58(r29)
		  mr        r4, r3
		  bl        -0x22E50
		  lwz       r3, -0x6514(r13)
		  addi      r4, r31, 0x38
		  bl        0x35BEC
		  lwz       r3, 0x58(r29)
		  addi      r5, r29, 0xE0
		  mr        r4, r3
		  bl        0x474D4
		  lwz       r3, 0x58(r29)
		  addi      r5, r29, 0x11C
		  mr        r4, r3
		  bl        0x474C4
		  lwz       r3, 0x58(r29)
		  addi      r5, r29, 0x158
		  mr        r4, r3
		  bl        0x474B4
		  mr        r5, r30
		  addi      r3, r29, 0xE0
		  addi      r4, r31, 0x5C
		  li        r6, 0x15
		  li        r7, 0x28
		  bl        -0x1CCF0
		  mr        r5, r30
		  addi      r3, r29, 0x11C
		  addi      r4, r31, 0x5C
		  li        r6, 0
		  li        r7, 0x14
		  bl        -0x1CD08
		  lis       r5, 0x6C63
		  lis       r4, 0x57
		  lwz       r3, 0x58(r29)
		  addi      r6, r5, 0x7477
		  addi      r5, r4, 0x7365
		  addi      r7, r29, 0x178
		  bl        0x47330
		  mr        r26, r29
		  mr        r25, r29
		  li        r24, 0
		  lis       r27, 0x6F6C
		  lis       r28, 0x54
		  lis       r30, 0x5474

		.loc_0x2F4:
		  lwz       r3, 0x58(r29)
		  addi      r6, r27, 0x6F72
		  addi      r5, r28, 0x7363
		  bl        -0x234C4
		  mr        r31, r3
		  lwz       r3, 0x58(r29)
		  addi      r6, r30, 0x3030
		  li        r5, 0
		  bl        -0x234D8
		  mr        r4, r3
		  mr        r5, r31
		  addi      r3, r26, 0x1E4
		  bl        -0x2B11C
		  lwz       r3, 0x58(r29)
		  addi      r5, r26, 0x1E4
		  lwz       r4, 0xA8(r25)
		  bl        0x4740C
		  addi      r24, r24, 0x1
		  addi      r25, r25, 0x4
		  cmpwi     r24, 0x7
		  addi      r26, r26, 0x4C
		  blt+      .loc_0x2F4
		  lis       r5, 0x6F6C
		  lis       r4, 0x54
		  lwz       r3, 0x58(r29)
		  addi      r6, r5, 0x6F72
		  addi      r5, r4, 0x7363
		  bl        -0x23524
		  mr        r27, r3
		  addi      r3, r1, 0x30
		  lwz       r0, 0x104(r27)
		  mr        r4, r27
		  stw       r0, 0x28(r1)
		  lbz       r5, 0x28(r1)
		  lbz       r0, 0x29(r1)
		  stb       r5, 0x430(r29)
		  lbz       r5, 0x2A(r1)
		  stb       r0, 0x431(r29)
		  lbz       r0, 0x2B(r1)
		  stb       r5, 0x432(r29)
		  stb       r0, 0x433(r29)
		  lwz       r0, 0x108(r27)
		  stw       r0, 0x2C(r1)
		  lbz       r5, 0x2C(r1)
		  lbz       r0, 0x2D(r1)
		  stb       r5, 0x434(r29)
		  lbz       r5, 0x2E(r1)
		  stb       r0, 0x435(r29)
		  lbz       r0, 0x2F(r1)
		  stb       r5, 0x436(r29)
		  stb       r0, 0x437(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB4(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x30(r1)
		  mr        r4, r27
		  addi      r3, r1, 0x34
		  stb       r0, 0x438(r29)
		  lbz       r0, 0x31(r1)
		  stb       r0, 0x439(r29)
		  lbz       r0, 0x32(r1)
		  stb       r0, 0x43A(r29)
		  lbz       r0, 0x33(r1)
		  stb       r0, 0x43B(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB0(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x34(r1)
		  lis       r3, 0x5474
		  addi      r6, r3, 0x3030
		  li        r5, 0
		  stb       r0, 0x43C(r29)
		  lbz       r0, 0x35(r1)
		  stb       r0, 0x43D(r29)
		  lbz       r0, 0x36(r1)
		  stb       r0, 0x43E(r29)
		  lbz       r0, 0x37(r1)
		  stb       r0, 0x43F(r29)
		  lwz       r3, 0x58(r29)
		  bl        -0x235FC
		  mr        r27, r3
		  addi      r3, r1, 0x20
		  lwz       r0, 0x104(r27)
		  mr        r4, r27
		  stw       r0, 0x18(r1)
		  lbz       r5, 0x18(r1)
		  lbz       r0, 0x19(r1)
		  stb       r5, 0x440(r29)
		  lbz       r5, 0x1A(r1)
		  stb       r0, 0x441(r29)
		  lbz       r0, 0x1B(r1)
		  stb       r5, 0x442(r29)
		  stb       r0, 0x443(r29)
		  lwz       r0, 0x108(r27)
		  stw       r0, 0x1C(r1)
		  lbz       r5, 0x1C(r1)
		  lbz       r0, 0x1D(r1)
		  stb       r5, 0x444(r29)
		  lbz       r5, 0x1E(r1)
		  stb       r0, 0x445(r29)
		  lbz       r0, 0x1F(r1)
		  stb       r5, 0x446(r29)
		  stb       r0, 0x447(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB4(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x20(r1)
		  mr        r4, r27
		  addi      r3, r1, 0x24
		  stb       r0, 0x448(r29)
		  lbz       r0, 0x21(r1)
		  stb       r0, 0x449(r29)
		  lbz       r0, 0x22(r1)
		  stb       r0, 0x44A(r29)
		  lbz       r0, 0x23(r1)
		  stb       r0, 0x44B(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB0(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x24(r1)
		  lis       r4, 0x6F6C
		  lis       r3, 0x5468
		  stb       r0, 0x44C(r29)
		  addi      r6, r4, 0x6F72
		  addi      r5, r3, 0x7363
		  lbz       r0, 0x25(r1)
		  stb       r0, 0x44D(r29)
		  lbz       r0, 0x26(r1)
		  stb       r0, 0x44E(r29)
		  lbz       r0, 0x27(r1)
		  stb       r0, 0x44F(r29)
		  lwz       r3, 0x58(r29)
		  bl        -0x236D8
		  mr        r27, r3
		  addi      r3, r1, 0x10
		  lwz       r0, 0x104(r27)
		  mr        r4, r27
		  stw       r0, 0x8(r1)
		  lbz       r5, 0x8(r1)
		  lbz       r0, 0x9(r1)
		  stb       r5, 0x450(r29)
		  lbz       r5, 0xA(r1)
		  stb       r0, 0x451(r29)
		  lbz       r0, 0xB(r1)
		  stb       r5, 0x452(r29)
		  stb       r0, 0x453(r29)
		  lwz       r0, 0x108(r27)
		  stw       r0, 0xC(r1)
		  lbz       r5, 0xC(r1)
		  lbz       r0, 0xD(r1)
		  stb       r5, 0x454(r29)
		  lbz       r5, 0xE(r1)
		  stb       r0, 0x455(r29)
		  lbz       r0, 0xF(r1)
		  stb       r5, 0x456(r29)
		  stb       r0, 0x457(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB4(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x10(r1)
		  mr        r4, r27
		  addi      r3, r1, 0x14
		  stb       r0, 0x458(r29)
		  lbz       r0, 0x11(r1)
		  stb       r0, 0x459(r29)
		  lbz       r0, 0x12(r1)
		  stb       r0, 0x45A(r29)
		  lbz       r0, 0x13(r1)
		  stb       r0, 0x45B(r29)
		  lwz       r12, 0x0(r27)
		  lwz       r12, 0xB0(r12)
		  mtctr     r12
		  bctrl
		  lbz       r0, 0x14(r1)
		  stb       r0, 0x45C(r29)
		  lbz       r0, 0x15(r1)
		  stb       r0, 0x45D(r29)
		  lbz       r0, 0x16(r1)
		  stb       r0, 0x45E(r29)
		  lbz       r0, 0x17(r1)
		  stb       r0, 0x45F(r29)
		  lmw       r24, 0x40(r1)
		  lwz       r0, 0x64(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EDB0C
	 * Size:	0005F0
	 */
	void TOmake::doOpenScreen(ebi::Screen::ArgOpen*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0xC0(r1)
		  mflr      r0
		  stw       r0, 0xC4(r1)
		  stmw      r23, 0x9C(r1)
		  mr.       r24, r4
		  mr        r23, r3
		  bne-      .loc_0x38
		  lis       r3, 0x8049
		  lis       r5, 0x8049
		  addi      r3, r3, 0x7A80
		  li        r4, 0x6D
		  addi      r5, r5, 0x7A94
		  crclr     6, 0x6
		  bl        -0x3C3500

		.loc_0x38:
		  lbz       r27, 0x4(r24)
		  mr        r30, r23
		  lbz       r26, 0x5(r24)
		  mr        r29, r23
		  lbz       r25, 0x6(r24)
		  mr        r28, r23
		  li        r24, 0

		.loc_0x54:
		  li        r0, 0
		  stb       r0, 0x200(r30)
		  lwz       r3, 0x1FC(r30)
		  cmplwi    r3, 0
		  beq-      .loc_0x100
		  lwz       r7, 0x204(r30)
		  mr        r31, r3
		  addi      r4, r1, 0x38
		  stw       r7, 0xC(r1)
		  lbz       r5, 0xC(r1)
		  lbz       r0, 0xD(r1)
		  stb       r5, 0x104(r3)
		  lbz       r5, 0xE(r1)
		  stb       r0, 0x105(r3)
		  lbz       r0, 0xF(r1)
		  stb       r5, 0x106(r3)
		  stb       r0, 0x107(r3)
		  lwz       r6, 0x208(r30)
		  stw       r7, 0x30(r1)
		  stw       r6, 0x8(r1)
		  lbz       r5, 0x8(r1)
		  lbz       r0, 0x9(r1)
		  stb       r5, 0x108(r3)
		  lbz       r5, 0xA(r1)
		  stb       r0, 0x109(r3)
		  lbz       r0, 0xB(r1)
		  stb       r5, 0x10A(r3)
		  stb       r0, 0x10B(r3)
		  lwz       r0, 0x20C(r30)
		  stw       r6, 0x34(r1)
		  stw       r0, 0x38(r1)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0xA8(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x210(r30)
		  mr        r3, r31
		  addi      r4, r1, 0x3C
		  stw       r0, 0x3C(r1)
		  lwz       r12, 0x0(r31)
		  lwz       r12, 0xA4(r12)
		  mtctr     r12
		  bctrl

		.loc_0x100:
		  lwz       r0, 0x3F8(r29)
		  addi      r24, r24, 0x1
		  lwz       r4, 0x3FC(r29)
		  cmpwi     r24, 0x7
		  lwz       r3, 0xA8(r28)
		  addi      r30, r30, 0x4C
		  stw       r4, 0x1C(r3)
		  stw       r0, 0x18(r3)
		  lwz       r3, 0xC4(r28)
		  addi      r28, r28, 0x4
		  lwz       r0, 0x3F8(r29)
		  lwz       r4, 0x3FC(r29)
		  addi      r29, r29, 0x8
		  stw       r4, 0x1C(r3)
		  stw       r0, 0x18(r3)
		  blt+      .loc_0x54
		  cmplwi    r27, 0
		  bne-      .loc_0x224
		  lis       r4, 0x345F
		  lis       r3, 0x34
		  addi      r28, r23, 0x4
		  li        r24, 0x1
		  addi      r29, r4, 0x3030
		  addi      r27, r3, 0x3834

		.loc_0x160:
		  lwz       r7, 0x450(r23)
		  addi      r4, r1, 0x78
		  lwz       r31, 0xA8(r28)
		  stw       r7, 0x2C(r1)
		  mr        r3, r31
		  lbz       r5, 0x2C(r1)
		  lbz       r0, 0x2D(r1)
		  stb       r5, 0x104(r31)
		  lbz       r5, 0x2E(r1)
		  stb       r0, 0x105(r31)
		  lbz       r0, 0x2F(r1)
		  stb       r5, 0x106(r31)
		  stb       r0, 0x107(r31)
		  lwz       r6, 0x454(r23)
		  stw       r7, 0x70(r1)
		  stw       r6, 0x28(r1)
		  lbz       r5, 0x28(r1)
		  lbz       r0, 0x29(r1)
		  stb       r5, 0x108(r31)
		  lbz       r5, 0x2A(r1)
		  stb       r0, 0x109(r31)
		  lbz       r0, 0x2B(r1)
		  stb       r5, 0x10A(r31)
		  stb       r0, 0x10B(r31)
		  lwz       r0, 0x458(r23)
		  stw       r6, 0x74(r1)
		  stw       r0, 0x78(r1)
		  lwz       r12, 0x0(r31)
		  lwz       r12, 0xA8(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x45C(r23)
		  mr        r3, r31
		  addi      r4, r1, 0x7C
		  stw       r0, 0x7C(r1)
		  lwz       r12, 0x0(r31)
		  lwz       r12, 0xA4(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0xA8(r28)
		  addi      r24, r24, 0x1
		  cmpwi     r24, 0x3
		  stw       r29, 0x1C(r3)
		  stw       r27, 0x18(r3)
		  lwz       r3, 0xC4(r28)
		  addi      r28, r28, 0x4
		  stw       r29, 0x1C(r3)
		  stw       r27, 0x18(r3)
		  ble+      .loc_0x160

		.loc_0x224:
		  cmplwi    r26, 0
		  bne-      .loc_0x2F0
		  lwz       r7, 0x450(r23)
		  addi      r4, r1, 0x68
		  lwz       r24, 0xB8(r23)
		  stw       r7, 0x24(r1)
		  mr        r3, r24
		  lbz       r5, 0x24(r1)
		  lbz       r0, 0x25(r1)
		  stb       r5, 0x104(r24)
		  lbz       r5, 0x26(r1)
		  stb       r0, 0x105(r24)
		  lbz       r0, 0x27(r1)
		  stb       r5, 0x106(r24)
		  stb       r0, 0x107(r24)
		  lwz       r6, 0x454(r23)
		  stw       r7, 0x60(r1)
		  stw       r6, 0x20(r1)
		  lbz       r5, 0x20(r1)
		  lbz       r0, 0x21(r1)
		  stb       r5, 0x108(r24)
		  lbz       r5, 0x22(r1)
		  stb       r0, 0x109(r24)
		  lbz       r0, 0x23(r1)
		  stb       r5, 0x10A(r24)
		  stb       r0, 0x10B(r24)
		  lwz       r0, 0x458(r23)
		  stw       r6, 0x64(r1)
		  stw       r0, 0x68(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA8(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x45C(r23)
		  mr        r3, r24
		  addi      r4, r1, 0x6C
		  stw       r0, 0x6C(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA4(r12)
		  mtctr     r12
		  bctrl
		  lis       r4, 0x345F
		  lwz       r3, 0xB8(r23)
		  addi      r5, r4, 0x3030
		  lis       r4, 0x34
		  stw       r5, 0x1C(r3)
		  addi      r0, r4, 0x3834
		  stw       r0, 0x18(r3)
		  lwz       r3, 0xD4(r23)
		  stw       r5, 0x1C(r3)
		  stw       r0, 0x18(r3)

		.loc_0x2F0:
		  cmplwi    r25, 0
		  bne-      .loc_0x3BC
		  lwz       r7, 0x450(r23)
		  addi      r4, r1, 0x58
		  lwz       r24, 0xBC(r23)
		  stw       r7, 0x1C(r1)
		  mr        r3, r24
		  lbz       r5, 0x1C(r1)
		  lbz       r0, 0x1D(r1)
		  stb       r5, 0x104(r24)
		  lbz       r5, 0x1E(r1)
		  stb       r0, 0x105(r24)
		  lbz       r0, 0x1F(r1)
		  stb       r5, 0x106(r24)
		  stb       r0, 0x107(r24)
		  lwz       r6, 0x454(r23)
		  stw       r7, 0x50(r1)
		  stw       r6, 0x18(r1)
		  lbz       r5, 0x18(r1)
		  lbz       r0, 0x19(r1)
		  stb       r5, 0x108(r24)
		  lbz       r5, 0x1A(r1)
		  stb       r0, 0x109(r24)
		  lbz       r0, 0x1B(r1)
		  stb       r5, 0x10A(r24)
		  stb       r0, 0x10B(r24)
		  lwz       r0, 0x458(r23)
		  stw       r6, 0x54(r1)
		  stw       r0, 0x58(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA8(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x45C(r23)
		  mr        r3, r24
		  addi      r4, r1, 0x5C
		  stw       r0, 0x5C(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA4(r12)
		  mtctr     r12
		  bctrl
		  lis       r4, 0x345F
		  lwz       r3, 0xBC(r23)
		  addi      r5, r4, 0x3030
		  lis       r4, 0x34
		  stw       r5, 0x1C(r3)
		  addi      r0, r4, 0x3834
		  stw       r0, 0x18(r3)
		  lwz       r3, 0xD8(r23)
		  stw       r5, 0x1C(r3)
		  stw       r0, 0x18(r3)

		.loc_0x3BC:
		  lwz       r3, -0x6514(r13)
		  lwz       r0, 0xD4(r3)
		  cmpwi     r0, 0x5
		  beq-      .loc_0x49C
		  lwz       r7, 0x450(r23)
		  addi      r4, r1, 0x48
		  lwz       r24, 0xC0(r23)
		  stw       r7, 0x14(r1)
		  mr        r3, r24
		  lbz       r5, 0x14(r1)
		  lbz       r0, 0x15(r1)
		  stb       r5, 0x104(r24)
		  lbz       r5, 0x16(r1)
		  stb       r0, 0x105(r24)
		  lbz       r0, 0x17(r1)
		  stb       r5, 0x106(r24)
		  stb       r0, 0x107(r24)
		  lwz       r6, 0x454(r23)
		  stw       r7, 0x40(r1)
		  stw       r6, 0x10(r1)
		  lbz       r5, 0x10(r1)
		  lbz       r0, 0x11(r1)
		  stb       r5, 0x108(r24)
		  lbz       r5, 0x12(r1)
		  stb       r0, 0x109(r24)
		  lbz       r0, 0x13(r1)
		  stb       r5, 0x10A(r24)
		  stb       r0, 0x10B(r24)
		  lwz       r0, 0x458(r23)
		  stw       r6, 0x44(r1)
		  stw       r0, 0x48(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA8(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x45C(r23)
		  mr        r3, r24
		  addi      r4, r1, 0x4C
		  stw       r0, 0x4C(r1)
		  lwz       r12, 0x0(r24)
		  lwz       r12, 0xA4(r12)
		  mtctr     r12
		  bctrl
		  lis       r4, 0x345F
		  lwz       r3, 0xC0(r23)
		  addi      r5, r4, 0x3030
		  lis       r4, 0x34
		  stw       r5, 0x1C(r3)
		  addi      r4, r4, 0x3834
		  li        r0, 0
		  stw       r4, 0x18(r3)
		  lwz       r3, 0xDC(r23)
		  stw       r5, 0x1C(r3)
		  stw       r4, 0x18(r3)
		  lwz       r3, 0x84(r23)
		  stb       r0, 0xB0(r3)

		.loc_0x49C:
		  lwz       r5, -0x6514(r13)
		  addi      r3, r23, 0xE0
		  lfs       f1, 0x1B0C(r2)
		  li        r4, 0
		  lfs       f0, 0x54(r5)
		  li        r5, 0x1
		  fmuls     f1, f1, f0
		  bl        -0x1D42C
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x1698(r2)
		  lfs       f0, 0x54(r3)
		  fdivs     f1, f1, f0
		  bl        -0x32C48C
		  stw       r3, 0x50(r23)
		  li        r0, 0x1
		  stw       r3, 0x54(r23)
		  mr        r3, r23
		  stw       r0, 0x4C(r23)
		  bl        0x9A4
		  lwz       r3, 0x60(r23)
		  li        r4, 0xFF
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x64(r23)
		  li        r4, 0xFF
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x68(r23)
		  li        r4, 0xFF
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x24(r12)
		  mtctr     r12
		  bctrl
		  li        r0, 0
		  stw       r0, 0x3C(r23)
		  lwz       r0, 0x3C(r23)
		  rlwinm    r0,r0,2,0,29
		  add       r3, r23, r0
		  lwz       r3, 0x8C(r3)
		  bl        -0x3B5D34
		  lwz       r4, -0x6514(r13)
		  lwz       r6, 0x0(r3)
		  lfs       f1, 0x1B10(r2)
		  lfs       f0, 0x54(r4)
		  lwz       r5, 0x4(r3)
		  fdivs     f1, f1, f0
		  lwz       r4, 0x8(r3)
		  lwz       r0, 0xC(r3)
		  stw       r6, 0x88(r1)
		  stw       r5, 0x8C(r1)
		  stw       r4, 0x90(r1)
		  stw       r0, 0x94(r1)
		  bl        -0x32C53C
		  stw       r3, 0x1B8(r23)
		  li        r0, 0x1
		  lwz       r5, 0x90(r1)
		  stw       r3, 0x1BC(r23)
		  lwz       r6, 0x88(r1)
		  lwz       r3, 0x8C(r1)
		  stw       r6, 0x198(r23)
		  lwz       r4, 0x94(r1)
		  stw       r3, 0x19C(r23)
		  stw       r5, 0x1A0(r23)
		  stw       r4, 0x1A4(r23)
		  stw       r6, 0x1A8(r23)
		  stw       r3, 0x1AC(r23)
		  stw       r5, 0x1B0(r23)
		  stw       r4, 0x1B4(r23)
		  stb       r0, 0x194(r23)
		  lwz       r0, 0x3C(r23)
		  stw       r5, 0x80(r1)
		  rlwinm    r0,r0,2,0,29
		  add       r3, r23, r0
		  stw       r4, 0x84(r1)
		  lwz       r0, 0x6C(r3)
		  stw       r0, 0x1E0(r23)
		  lmw       r23, 0x9C(r1)
		  lwz       r0, 0xC4(r1)
		  mtlr      r0
		  addi      r1, r1, 0xC0
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE0FC
	 * Size:	00004C
	 */
	void TOmake::doCloseScreen(ebi::Screen::ArgClose*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lfs       f1, 0x1698(r2)
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r4, -0x6514(r13)
		  lfs       f0, 0x54(r4)
		  fdivs     f1, f1, f0
		  bl        -0x32C5D4
		  stw       r3, 0x50(r31)
		  li        r0, 0x2
		  stw       r3, 0x54(r31)
		  stw       r0, 0x4C(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE148
	 * Size:	000048
	 */
	void TOmake::doInitWaitState(void)
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x3C(r3)
		  li        r5, 0x1
		  lfs       f2, 0x1B14(r2)
		  li        r0, 0
		  mulli     r4, r4, 0x4C
		  lfs       f0, 0x1B04(r2)
		  addi      r6, r4, 0x1E4
		  add       r6, r3, r6
		  stb       r5, 0x1C(r6)
		  lwz       r4, -0x6514(r13)
		  lfs       f1, 0x54(r4)
		  fmuls     f1, f2, f1
		  stfs      f1, 0x44(r6)
		  stfs      f0, 0x40(r6)
		  stb       r5, 0x48(r6)
		  stb       r0, 0x49(r6)
		  stw       r0, 0xC(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE190
	 * Size:	000084
	 */
	void TOmake::doUpdateStateOpen(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r3, 0x58(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x30(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x4C(r31)
		  cmpwi     r0, 0
		  beq-      .loc_0x48
		  lwz       r3, 0x50(r31)
		  cmplwi    r3, 0
		  beq-      .loc_0x48
		  subi      r0, r3, 0x1
		  stw       r0, 0x50(r31)

		.loc_0x48:
		  addi      r3, r31, 0xE0
		  bl        -0x1D22C
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x6C
		  lwz       r0, 0x50(r31)
		  cmplwi    r0, 0
		  bne-      .loc_0x6C
		  li        r3, 0x1
		  b         .loc_0x70

		.loc_0x6C:
		  li        r3, 0

		.loc_0x70:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE214
	 * Size:	000484
	 */
	void TOmake::doUpdateStateWait(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x50(r1)
		  mflr      r0
		  stw       r0, 0x54(r1)
		  stfd      f31, 0x40(r1)
		  psq_st    f31,0x48(r1),0,0
		  stw       r31, 0x3C(r1)
		  stw       r30, 0x38(r1)
		  mr        r30, r3
		  lwz       r3, 0x58(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x30(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x4C(r30)
		  cmpwi     r0, 0
		  beq-      .loc_0x54
		  lwz       r3, 0x50(r30)
		  cmplwi    r3, 0
		  beq-      .loc_0x54
		  subi      r0, r3, 0x1
		  stw       r0, 0x50(r30)

		.loc_0x54:
		  lwz       r0, 0xC(r30)
		  cmplwi    r0, 0x6
		  bgt-      .loc_0x460
		  lis       r3, 0x804F
		  rlwinm    r0,r0,2,0,29
		  subi      r3, r3, 0x5E68
		  lwzx      r0, r3, r0
		  mtctr     r0
		  bctr
		  addi      r3, r30, 0x10
		  bl        -0x2C7F4
		  lbz       r0, 0x1D(r30)
		  cmplwi    r0, 0
		  beq-      .loc_0x254
		  lwz       r31, 0x2C(r30)
		  lwz       r0, 0x3C(r30)
		  cmpw      r31, r0
		  bge-      .loc_0x11C
		  b         .loc_0xC0

		.loc_0xA0:
		  lwz       r3, 0x3C(r30)
		  addi      r0, r3, 0x1
		  stw       r0, 0x3C(r30)
		  lwz       r0, 0x3C(r30)
		  cmpwi     r0, 0x7
		  blt-      .loc_0xD0
		  stw       r31, 0x3C(r30)
		  b         .loc_0x154

		.loc_0xC0:
		  lis       r4, 0x345F
		  lis       r3, 0x34
		  addi      r5, r4, 0x3030
		  addi      r4, r3, 0x3834

		.loc_0xD0:
		  lwz       r0, 0x3C(r30)
		  rlwinm    r3,r0,2,0,29
		  addi      r0, r3, 0xA8
		  lwzx      r3, r30, r0
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  xor       r0, r0, r4
		  xor       r3, r3, r5
		  or.       r0, r3, r0
		  beq+      .loc_0xA0
		  b         .loc_0x154

		.loc_0xFC:
		  lwz       r3, 0x3C(r30)
		  subi      r0, r3, 0x1
		  stw       r0, 0x3C(r30)
		  lwz       r0, 0x3C(r30)
		  cmpwi     r0, 0
		  bge-      .loc_0x12C
		  stw       r31, 0x3C(r30)
		  b         .loc_0x154

		.loc_0x11C:
		  lis       r4, 0x345F
		  lis       r3, 0x34
		  addi      r5, r4, 0x3030
		  addi      r4, r3, 0x3834

		.loc_0x12C:
		  lwz       r0, 0x3C(r30)
		  rlwinm    r3,r0,2,0,29
		  addi      r0, r3, 0xA8
		  lwzx      r3, r30, r0
		  lwz       r0, 0x18(r3)
		  lwz       r3, 0x1C(r3)
		  xor       r0, r0, r4
		  xor       r3, r3, r5
		  or.       r0, r3, r0
		  beq+      .loc_0xFC

		.loc_0x154:
		  lwz       r0, 0x3C(r30)
		  cmpw      r0, r31
		  beq-      .loc_0x254
		  rlwinm    r0,r0,2,0,29
		  add       r3, r30, r0
		  lwz       r3, 0x8C(r3)
		  bl        -0x3B6060
		  lwz       r8, 0x0(r3)
		  lwz       r7, 0x4(r3)
		  lwz       r6, 0x8(r3)
		  lwz       r5, 0xC(r3)
		  addi      r3, r30, 0x1C0
		  lwz       r4, 0x1A8(r30)
		  lwz       r0, 0x1AC(r30)
		  stw       r8, 0x8(r1)
		  lfs       f1, 0x1B10(r2)
		  stw       r4, 0x198(r30)
		  lfs       f2, 0x1B18(r2)
		  stw       r0, 0x19C(r30)
		  lfs       f3, 0x1B1C(r2)
		  lwz       r4, 0x1B0(r30)
		  lwz       r0, 0x1B4(r30)
		  stw       r7, 0xC(r1)
		  lfs       f4, 0x1B04(r2)
		  stw       r4, 0x1A0(r30)
		  stw       r0, 0x1A4(r30)
		  stw       r8, 0x1A8(r30)
		  stw       r7, 0x1AC(r30)
		  stw       r6, 0x1B0(r30)
		  stw       r5, 0x1B4(r30)
		  lwz       r0, 0x1BC(r30)
		  stw       r6, 0x10(r1)
		  stw       r5, 0x14(r1)
		  stw       r0, 0x1B8(r30)
		  bl        -0xC5518
		  lwz       r0, 0x3C(r30)
		  mulli     r4, r31, 0x4C
		  li        r7, 0
		  lfs       f2, 0x1B14(r2)
		  rlwinm    r0,r0,2,0,29
		  lfs       f0, 0x1B04(r2)
		  add       r3, r30, r0
		  lwz       r0, 0x6C(r3)
		  add       r3, r30, r4
		  li        r6, 0x1
		  li        r4, 0x1802
		  stw       r0, 0x1E0(r30)
		  li        r5, 0
		  stb       r7, 0x22C(r3)
		  stb       r6, 0x22D(r3)
		  lwz       r0, 0x3C(r30)
		  mulli     r3, r0, 0x4C
		  addi      r8, r3, 0x1E4
		  add       r8, r30, r8
		  stb       r6, 0x1C(r8)
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x54(r3)
		  fmuls     f1, f2, f1
		  stfs      f1, 0x44(r8)
		  stfs      f0, 0x40(r8)
		  stb       r6, 0x48(r8)
		  stb       r7, 0x49(r8)
		  lwz       r3, -0x67A8(r13)
		  bl        -0xB5E34

		.loc_0x254:
		  lwz       r0, 0x1B8(r30)
		  cmplwi    r0, 0
		  bne-      .loc_0x460
		  lwz       r3, 0x40(r30)
		  lwz       r3, 0x1C(r3)
		  rlwinm.   r0,r3,0,23,23
		  beq-      .loc_0x2EC
		  lwz       r3, -0x67A8(r13)
		  li        r4, 0x1800
		  li        r5, 0
		  bl        -0xB5E60
		  lwz       r0, 0x3C(r30)
		  cmpwi     r0, 0x6
		  beq-      .loc_0x290
		  b         .loc_0x2BC

		.loc_0x290:
		  lwz       r5, -0x6514(r13)
		  addi      r3, r30, 0x11C
		  lfs       f1, 0x1B0C(r2)
		  li        r4, 0
		  lfs       f0, 0x54(r5)
		  li        r5, 0x1
		  fmuls     f1, f1, f0
		  bl        -0x1D928
		  li        r0, 0x2
		  stw       r0, 0xC(r30)
		  b         .loc_0x460

		.loc_0x2BC:
		  lwz       r3, -0x6514(r13)
		  lfs       f1, 0x1698(r2)
		  lfs       f0, 0x54(r3)
		  fdivs     f1, f1, f0
		  bl        -0x32C994
		  stw       r3, 0x50(r30)
		  li        r4, 0x2
		  li        r0, 0x5
		  stw       r3, 0x54(r30)
		  stw       r4, 0x4C(r30)
		  stw       r0, 0xC(r30)
		  b         .loc_0x460

		.loc_0x2EC:
		  rlwinm.   r0,r3,0,22,22
		  beq-      .loc_0x460
		  lwz       r3, -0x67A8(r13)
		  li        r4, 0x1801
		  li        r5, 0
		  bl        -0xB5EE4
		  li        r3, 0x1
		  b         .loc_0x464
		  addi      r3, r30, 0x11C
		  bl        -0x1D624
		  lfs       f0, 0x1B00(r2)
		  lwz       r3, 0x60(r30)
		  fsubs     f1, f0, f1
		  lfs       f0, 0x1B20(r2)
		  lwz       r12, 0x0(r3)
		  fmuls     f31, f0, f1
		  lwz       r12, 0x24(r12)
		  fctiwz    f0, f31
		  stfd      f0, 0x18(r1)
		  lwz       r4, 0x1C(r1)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x64(r30)
		  fctiwz    f0, f31
		  lwz       r12, 0x0(r3)
		  stfd      f0, 0x20(r1)
		  lwz       r12, 0x24(r12)
		  lwz       r4, 0x24(r1)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x68(r30)
		  fctiwz    f0, f31
		  lwz       r12, 0x0(r3)
		  stfd      f0, 0x28(r1)
		  lwz       r12, 0x24(r12)
		  lwz       r4, 0x2C(r1)
		  mtctr     r12
		  bctrl
		  addi      r3, r30, 0x11C
		  bl        -0x1D5EC
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x460
		  mr        r3, r30
		  bl        0x44C
		  li        r0, 0x1
		  stw       r0, 0xC(r30)
		  b         .loc_0x460
		  addi      r3, r30, 0xE0
		  bl        -0x1D6C0
		  lfs       f0, 0x1B20(r2)
		  lwz       r3, 0x60(r30)
		  fmuls     f31, f0, f1
		  lwz       r12, 0x0(r3)
		  fctiwz    f0, f31
		  lwz       r12, 0x24(r12)
		  stfd      f0, 0x28(r1)
		  lwz       r4, 0x2C(r1)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x64(r30)
		  fctiwz    f0, f31
		  lwz       r12, 0x0(r3)
		  stfd      f0, 0x20(r1)
		  lwz       r12, 0x24(r12)
		  lwz       r4, 0x24(r1)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x68(r30)
		  fctiwz    f0, f31
		  lwz       r12, 0x0(r3)
		  stfd      f0, 0x18(r1)
		  lwz       r12, 0x24(r12)
		  lwz       r4, 0x1C(r1)
		  mtctr     r12
		  bctrl
		  addi      r3, r30, 0xE0
		  bl        -0x1D680
		  rlwinm.   r0,r3,0,24,31
		  beq-      .loc_0x460
		  li        r0, 0
		  stw       r0, 0xC(r30)
		  b         .loc_0x460
		  lwz       r0, 0x50(r30)
		  cmplwi    r0, 0
		  bne-      .loc_0x460
		  li        r0, 0x4
		  stw       r0, 0xC(r30)
		  b         .loc_0x460
		  lwz       r0, 0x50(r30)
		  cmplwi    r0, 0
		  bne-      .loc_0x460
		  li        r0, 0
		  stw       r0, 0xC(r30)

		.loc_0x460:
		  li        r3, 0

		.loc_0x464:
		  psq_l     f31,0x48(r1),0,0
		  lwz       r0, 0x54(r1)
		  lfd       f31, 0x40(r1)
		  lwz       r31, 0x3C(r1)
		  lwz       r30, 0x38(r1)
		  mtlr      r0
		  addi      r1, r1, 0x50
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE698
	 * Size:	000074
	 */
	void TOmake::doUpdateStateClose(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r3, 0x58(r3)
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x30(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x4C(r31)
		  cmpwi     r0, 0
		  beq-      .loc_0x48
		  lwz       r3, 0x50(r31)
		  cmplwi    r3, 0
		  beq-      .loc_0x48
		  subi      r0, r3, 0x1
		  stw       r0, 0x50(r31)

		.loc_0x48:
		  lwz       r0, 0x50(r31)
		  cmplwi    r0, 0
		  bne-      .loc_0x5C
		  li        r3, 0x1
		  b         .loc_0x60

		.loc_0x5C:
		  li        r3, 0

		.loc_0x60:
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE70C
	 * Size:	000244
	 */
	void TOmake::doDraw(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x60(r1)
		  mflr      r0
		  stw       r0, 0x64(r1)
		  stw       r31, 0x5C(r1)
		  stw       r30, 0x58(r1)
		  stw       r29, 0x54(r1)
		  mr        r29, r3
		  lwz       r4, -0x6514(r13)
		  lwz       r30, 0x24(r4)
		  addi      r31, r30, 0x190
		  lwz       r12, 0x0(r31)
		  mr        r3, r31
		  lwz       r12, 0x14(r12)
		  mtctr     r12
		  bctrl
		  lwz       r3, 0x58(r29)
		  mr        r4, r30
		  mr        r5, r31
		  lwz       r12, 0x0(r3)
		  lwz       r12, 0x9C(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x4C(r29)
		  cmpwi     r0, 0
		  beq-      .loc_0x228
		  lwz       r3, -0x6514(r13)
		  lwz       r3, 0x24(r3)
		  addi      r31, r3, 0x190
		  mr        r3, r31
		  lwz       r12, 0x0(r31)
		  lwz       r12, 0x14(r12)
		  mtctr     r12
		  bctrl
		  lwz       r0, 0x4C(r29)
		  lwz       r3, 0x44(r29)
		  cmpwi     r0, 0x2
		  stw       r3, 0x18(r1)
		  beq-      .loc_0x120
		  bge-      .loc_0x19C
		  cmpwi     r0, 0x1
		  bge-      .loc_0xA8
		  b         .loc_0x19C

		.loc_0xA8:
		  lwz       r4, 0x54(r29)
		  cmplwi    r4, 0
		  beq-      .loc_0xE8
		  lwz       r3, 0x50(r29)
		  lis       r0, 0x4330
		  stw       r0, 0x30(r1)
		  lfd       f2, 0x1B28(r2)
		  stw       r3, 0x34(r1)
		  lfd       f0, 0x30(r1)
		  stw       r4, 0x3C(r1)
		  fsubs     f1, f0, f2
		  stw       r0, 0x38(r1)
		  lfd       f0, 0x38(r1)
		  fsubs     f0, f0, f2
		  fdivs     f2, f1, f0
		  b         .loc_0xEC

		.loc_0xE8:
		  lfs       f2, 0x1B04(r2)

		.loc_0xEC:
		  lbz       r3, 0x48(r29)
		  lis       r0, 0x4330
		  stw       r0, 0x40(r1)
		  lfd       f1, 0x1B28(r2)
		  stw       r3, 0x44(r1)
		  lfd       f0, 0x40(r1)
		  fsubs     f0, f0, f1
		  fmuls     f0, f0, f2
		  fctiwz    f0, f0
		  stfd      f0, 0x48(r1)
		  lwz       r0, 0x4C(r1)
		  stb       r0, 0x1B(r1)
		  b         .loc_0x19C

		.loc_0x120:
		  lwz       r4, 0x54(r29)
		  cmplwi    r4, 0
		  beq-      .loc_0x160
		  lwz       r3, 0x50(r29)
		  lis       r0, 0x4330
		  stw       r0, 0x48(r1)
		  lfd       f2, 0x1B28(r2)
		  stw       r3, 0x4C(r1)
		  lfd       f0, 0x48(r1)
		  stw       r4, 0x44(r1)
		  fsubs     f1, f0, f2
		  stw       r0, 0x40(r1)
		  lfd       f0, 0x40(r1)
		  fsubs     f0, f0, f2
		  fdivs     f1, f1, f0
		  b         .loc_0x164

		.loc_0x160:
		  lfs       f1, 0x1B04(r2)

		.loc_0x164:
		  lbz       r3, 0x48(r29)
		  lis       r0, 0x4330
		  lfs       f0, 0x1B00(r2)
		  stw       r3, 0x3C(r1)
		  lfd       f2, 0x1B28(r2)
		  fsubs     f0, f0, f1
		  stw       r0, 0x38(r1)
		  lfd       f1, 0x38(r1)
		  fsubs     f1, f1, f2
		  fmuls     f0, f1, f0
		  fctiwz    f0, f0
		  stfd      f0, 0x30(r1)
		  lwz       r0, 0x34(r1)
		  stb       r0, 0x1B(r1)

		.loc_0x19C:
		  lwz       r0, 0x18(r1)
		  mr        r3, r31
		  addi      r4, r1, 0x8
		  addi      r5, r1, 0xC
		  stw       r0, 0x14(r1)
		  addi      r6, r1, 0x10
		  addi      r7, r1, 0x14
		  stw       r0, 0x10(r1)
		  stw       r0, 0xC(r1)
		  stw       r0, 0x8(r1)
		  bl        -0x3B8244
		  bl        0x34950
		  lhz       r30, 0x6(r3)
		  bl        0x34948
		  lhz       r4, 0x4(r3)
		  lis       r0, 0x4330
		  lfs       f3, 0x1B04(r2)
		  mr        r3, r31
		  stw       r4, 0x4C(r1)
		  addi      r4, r1, 0x1C
		  lfd       f2, 0x1B28(r2)
		  stw       r0, 0x48(r1)
		  lfd       f0, 0x48(r1)
		  stw       r30, 0x44(r1)
		  fsubs     f1, f0, f2
		  stw       r0, 0x40(r1)
		  lfd       f0, 0x40(r1)
		  fadds     f1, f3, f1
		  stfs      f3, 0x1C(r1)
		  fsubs     f0, f0, f2
		  stfs      f3, 0x20(r1)
		  fadds     f0, f3, f0
		  stfs      f1, 0x24(r1)
		  stfs      f0, 0x28(r1)
		  bl        -0x3B815C

		.loc_0x228:
		  lwz       r0, 0x64(r1)
		  lwz       r31, 0x5C(r1)
		  lwz       r30, 0x58(r1)
		  lwz       r29, 0x54(r1)
		  mtlr      r0
		  addi      r1, r1, 0x60
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE950
	 * Size:	000044
	 */
	void TOmake::setController(Controller*)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  mr        r5, r3
		  lfs       f1, 0x1B30(r2)
		  stw       r0, 0x14(r1)
		  addi      r7, r5, 0x3C
		  lfs       f2, 0x1B34(r2)
		  li        r6, 0x6
		  stw       r4, 0x40(r3)
		  addi      r3, r5, 0x10
		  li        r5, 0
		  li        r8, 0x3
		  bl        -0x2CF44
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE994
	 * Size:	000064
	 */
	void TOmake::showPanes_(void)
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x5C(r3)
		  li        r5, 0x1
		  li        r0, 0
		  stb       r5, 0xB0(r4)
		  lwz       r4, 0x60(r3)
		  stb       r5, 0xB0(r4)
		  lwz       r4, 0x64(r3)
		  stb       r5, 0xB0(r4)
		  lwz       r4, 0x68(r3)
		  stb       r5, 0xB0(r4)
		  lwz       r4, 0x8C(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x90(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x94(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x98(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x9C(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0xA0(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r3, 0xA4(r3)
		  stb       r0, 0xB0(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EE9F8
	 * Size:	000028
	 */
	void TOmake::hidePanes_(void)
	{
		/*
		.loc_0x0:
		  lwz       r4, 0x5C(r3)
		  li        r0, 0
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x60(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r4, 0x64(r3)
		  stb       r0, 0xB0(r4)
		  lwz       r3, 0x68(r3)
		  stb       r0, 0xB0(r3)
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EEA20
	 * Size:	000054
	 */
	void TOmake::openFromMovie_(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  lfs       f1, 0x1698(r2)
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r4, -0x6514(r13)
		  lfs       f0, 0x54(r4)
		  fdivs     f1, f1, f0
		  bl        -0x32CEF8
		  stw       r3, 0x50(r31)
		  li        r4, 0x1
		  li        r0, 0x6
		  stw       r3, 0x54(r31)
		  stw       r4, 0x4C(r31)
		  stw       r0, 0xC(r31)
		  lwz       r31, 0xC(r1)
		  lwz       r0, 0x14(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EEA74
	 * Size:	0000B0
	 */
	void TOmake::openFromCardE_(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  li        r7, 0x1
		  lfs       f1, 0x1B0C(r2)
		  stw       r0, 0x14(r1)
		  li        r0, 0
		  li        r5, 0x1
		  stw       r31, 0xC(r1)
		  mr        r31, r3
		  lwz       r4, 0x5C(r3)
		  addi      r3, r31, 0xE0
		  stb       r7, 0xB0(r4)
		  li        r4, 0
		  lwz       r6, 0x60(r31)
		  stb       r7, 0xB0(r6)
		  lwz       r6, 0x64(r31)
		  stb       r7, 0xB0(r6)
		  lwz       r6, 0x68(r31)
		  stb       r7, 0xB0(r6)
		  lwz       r6, 0x8C(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0x90(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0x94(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0x98(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0x9C(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0xA0(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, 0xA4(r31)
		  stb       r0, 0xB0(r6)
		  lwz       r6, -0x6514(r13)
		  lfs       f0, 0x54(r6)
		  fmuls     f1, f1, f0
		  bl        -0x1DF6C
		  li        r0, 0x3
		  stw       r0, 0xC(r31)
		  lwz       r0, 0x14(r1)
		  lwz       r31, 0xC(r1)
		  mtlr      r0
		  addi      r1, r1, 0x10
		  blr
		*/
	}

	/*
	 * --INFO--
	 * Address:	803EEB24
	 * Size:	0000BC
	 */
	E2DCallBack_BlinkFontColor::E2DCallBack_BlinkFontColor(void)
	{
		/*
		.loc_0x0:
		  stwu      r1, -0x10(r1)
		  mflr      r0
		  stw       r0, 0x14(r1)
		  stw       r31, 0xC(r1)
		  stw       r30, 0x8(r1)
		  mr        r30, r3
		  mr        r31, r30
		  bl        0x22850
		  lis       r3, 0x804D
		  lis       r4, 0x804D
		  addi      r0, r3, 0x7B0C
		  lis       r6, 0x804F
		  stw       r0, 0x0(r31)
		  li        r0, 0
		  lis       r3, 0x803D
		  li        r7, 0x1
		  stw       r0, 0x18(r31)
		  addi      r0, r4, 0x7F2C
		  subi      r4, r3, 0x114
		  subi      r3, r6, 0x77D0
		  stw       r0, 0x0(r31)
		  lis       r5, 0x804F
		  subi      r0, r5, 0x75AC
		  li        r6, 0x10
		  stw       r3, 0x0(r31)
		  addi      r3, r30, 0x20
		  li        r5, 0
		  stb       r7, 0x1C(r31)
		  li        r7, 0x2
		  stw       r0, 0x0(r30)
		  bl        -0x32D360
		  lfs       f1, 0x1B04(r2)
		  li        r4, 0x1
		  lfs       f0, 0x1B08(r2)
		  li        r0, 0
		  stfs      f1, 0x40(r30)
		  mr        r3, r30
		  stfs      f0, 0x44(r30)
		  stb       r4, 0x48(r30)
		  stb       r0, 0x49(r30)
		  stb       r0, 0x1C(r30)
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
	 * Address:	803EEBE0
	 * Size:	000008
	 */
	void TOmake::getName(void)
	{
		/*
		.loc_0x0:
		  addi      r3, r2, 0x1B38
		  blr
		*/
	}
} // namespace Screen
} // namespace ebi
