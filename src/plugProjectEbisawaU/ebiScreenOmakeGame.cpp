

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803F0CF4
 * Size:	000278
 */
void ebi::Screen::TOmakeGame::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x804F
	  stw       r0, 0x14(r1)
	  subi      r0, r4, 0x7818
	  li        r4, 0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lis       r3, 0x804F
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x7370
	  lis       r3, 0x804F
	  addi      r31, r30, 0x8C
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x5CB0
	  mr        r3, r31
	  stw       r4, 0x4(r30)
	  stw       r4, 0x8(r30)
	  stw       r0, 0x0(r30)
	  stw       r4, 0xC(r30)
	  stw       r4, 0x18(r30)
	  stw       r4, 0x1C(r30)
	  stw       r4, 0x44(r30)
	  bl        0x2063C
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
	  bl        -0x389734
	  addi      r31, r30, 0xC8
	  mr        r3, r31
	  bl        0x205D8
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
	  bl        -0x389798
	  addi      r31, r30, 0x104
	  mr        r3, r31
	  bl        0x20574
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
	  bl        -0x3897FC
	  addi      r31, r30, 0x140
	  mr        r3, r31
	  bl        0x20510
	  lis       r4, 0x804D
	  lis       r3, 0x804D
	  addi      r0, r4, 0x7B0C
	  lis       r5, 0x804F
	  stw       r0, 0x0(r31)
	  li        r0, 0
	  lis       r4, 0x803F
	  lis       r6, 0x804F
	  stw       r0, 0x18(r31)
	  addi      r0, r3, 0x7F2C
	  lis       r3, 0x803D
	  subi      r4, r4, 0x14DC
	  stw       r0, 0x0(r31)
	  subi      r0, r5, 0x77D0
	  subi      r5, r3, 0x1A4
	  li        r3, 0x1
	  stw       r0, 0x0(r31)
	  subi      r0, r6, 0x77F4
	  li        r6, 0x4C
	  li        r7, 0x3
	  stb       r3, 0x1C(r31)
	  addi      r3, r30, 0x160
	  stw       r0, 0x0(r31)
	  bl        -0x32F6A4
	  addi      r31, r30, 0x244
	  mr        r3, r31
	  bl        0x204A4
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
	  bl        -0xC8138
	  lfs       f0, 0x1B68(r2)
	  li        r0, 0
	  mr        r3, r30
	  stfs      f0, 0x64(r31)
	  stw       r0, 0x68(r31)
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
 * Address:	803F0F6C
 * Size:	0002F4
 */
void ebi::Screen::TOmakeGame::doSetArchive((JKRArchive*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x44(r1)
	  stmw      r18, 0x8(r1)
	  mr        r31, r3
	  addi      r19, r5, 0x7BE8
	  mr        r18, r4
	  li        r5, 0
	  addi      r4, r19, 0x14
	  lwz       r3, -0x6514(r13)
	  bl        0x323C4
	  li        r3, 0x148
	  bl        -0x3CD0FC
	  mr.       r0, r3
	  beq-      .loc_0x48
	  bl        0x43E00
	  mr        r0, r3

	.loc_0x48:
	  stw       r0, 0x44(r31)
	  mr        r6, r18
	  addi      r4, r19, 0x34
	  lis       r5, 0x110
	  lwz       r3, 0x44(r31)
	  bl        -0x3B19A4
	  lwz       r3, -0x6514(r13)
	  addi      r4, r19, 0x14
	  bl        0x32390
	  lis       r4, 0x4441
	  lwz       r3, 0x44(r31)
	  addi      r6, r4, 0x5441
	  li        r5, 0
	  bl        -0x26C90
	  li        r0, 0
	  lis       r11, 0x6761
	  lis       r10, 0x4E67
	  lis       r9, 0x7467
	  lis       r8, 0x57
	  lis       r7, 0x616D
	  lis       r6, 0x655F
	  lis       r5, 0x5467
	  lis       r4, 0x6762
	  stb       r0, 0xB0(r3)
	  mr        r24, r31
	  addi      r25, r11, 0x6D31
	  addi      r26, r10, 0x7270
	  addi      r27, r9, 0x6131
	  addi      r28, r8, 0x7365
	  addi      r29, r7, 0x6531
	  addi      r22, r6, 0x7331
	  addi      r21, r5, 0x616D
	  addi      r20, r4, 0x3031
	  li        r30, 0

	.loc_0xD0:
	  srawi     r23, r30, 0x1F
	  lwz       r3, 0x44(r31)
	  addc      r6, r30, r25
	  adde      r5, r23, r26
	  bl        -0x26CF4
	  stw       r3, 0x48(r24)
	  addc      r6, r30, r27
	  adde      r5, r23, r28
	  lwz       r3, 0x44(r31)
	  bl        -0x26D08
	  stw       r3, 0x54(r24)
	  addc      r6, r30, r29
	  li        r0, 0x5467
	  lwz       r3, 0x44(r31)
	  adde      r5, r23, r0
	  bl        -0x26D20
	  stw       r3, 0x68(r24)
	  addc      r6, r30, r22
	  adde      r5, r23, r21
	  lwz       r3, 0x44(r31)
	  bl        -0x26D34
	  stw       r3, 0x74(r24)
	  addc      r6, r30, r20
	  li        r0, 0x5061
	  lwz       r3, 0x44(r31)
	  adde      r5, r23, r0
	  bl        -0x26D4C
	  addi      r30, r30, 0x1
	  stw       r3, 0x80(r24)
	  cmpwi     r30, 0x3
	  addi      r24, r24, 0x4
	  blt+      .loc_0xD0
	  lwz       r4, 0x54(r31)
	  li        r0, 0
	  lis       r3, 0x5473
	  li        r5, 0
	  stb       r0, 0xB0(r4)
	  addi      r6, r3, 0x6574
	  lwz       r3, 0x58(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x5C(r31)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x44(r31)
	  bl        -0x26D90
	  stw       r3, 0x60(r31)
	  lis       r3, 0x6574
	  addi      r6, r3, 0x5F73
	  li        r5, 0x5473
	  lwz       r3, 0x44(r31)
	  bl        -0x26DA8
	  stw       r3, 0x64(r31)
	  addi      r4, r19, 0x44
	  li        r5, 0
	  lwz       r3, -0x6514(r13)
	  bl        0x32248
	  lwz       r3, 0x44(r31)
	  mr        r4, r3
	  bl        -0x26804
	  lwz       r3, -0x6514(r13)
	  addi      r4, r19, 0x44
	  bl        0x32238
	  lwz       r3, 0x44(r31)
	  addi      r5, r31, 0x8C
	  mr        r4, r3
	  bl        0x43B20
	  lwz       r3, 0x44(r31)
	  addi      r5, r31, 0xC8
	  mr        r4, r3
	  bl        0x43B10
	  lis       r4, 0x6377
	  lwz       r3, 0x44(r31)
	  addi      r6, r4, 0x696E
	  addi      r7, r31, 0x104
	  li        r5, 0x7069
	  bl        0x439C0
	  lwz       r3, 0x44(r31)
	  addi      r5, r31, 0x140
	  mr        r4, r3
	  bl        0x43AE8
	  mr        r5, r18
	  addi      r3, r31, 0x8C
	  addi      r4, r19, 0x6C
	  li        r6, 0x15
	  li        r7, 0x28
	  bl        -0x206BC
	  mr        r5, r18
	  addi      r3, r31, 0xC8
	  addi      r4, r19, 0x6C
	  li        r6, 0
	  li        r7, 0x14
	  bl        -0x206D4
	  mr        r5, r18
	  addi      r3, r31, 0x104
	  addi      r4, r19, 0x6C
	  li        r6, 0x50
	  li        r7, 0x64
	  bl        -0x206EC
	  mr        r22, r31
	  mr        r23, r31
	  li        r24, 0
	  lis       r21, 0x6F6C
	  lis       r20, 0x54
	  lis       r18, 0x616D

	.loc_0x26C:
	  lwz       r3, 0x44(r31)
	  addi      r6, r21, 0x6F72
	  addi      r5, r20, 0x7363
	  bl        -0x26E8C
	  mr        r19, r3
	  lwz       r3, 0x44(r31)
	  addi      r6, r18, 0x6531
	  li        r5, 0x5467
	  bl        -0x26EA0
	  mr        r4, r3
	  mr        r5, r19
	  addi      r3, r22, 0x160
	  bl        -0x2EAE4
	  lwz       r3, 0x44(r31)
	  addi      r5, r22, 0x160
	  lwz       r4, 0x68(r23)
	  bl        0x43A44
	  addi      r24, r24, 0x1
	  addi      r23, r23, 0x4
	  cmpwi     r24, 0x3
	  addi      r22, r22, 0x4C
	  blt+      .loc_0x26C
	  lis       r5, 0x6C63
	  lis       r4, 0x57
	  lwz       r3, 0x44(r31)
	  addi      r6, r5, 0x7477
	  addi      r5, r4, 0x7365
	  addi      r7, r31, 0x244
	  bl        0x438DC
	  lmw       r18, 0x8(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F1260
 * Size:	000294
 */
void ebi::Screen::TOmakeGame::doOpenScreen((ebi::Screen::ArgOpen*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lfs       f1, 0x1B70(r2)
	  li        r4, 0
	  stw       r0, 0x54(r1)
	  li        r0, 0x1
	  li        r5, 0x1
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  stw       r28, 0x40(r1)
	  stb       r0, 0x10(r3)
	  addi      r3, r29, 0x8C
	  lwz       r6, -0x6514(r13)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0x2070C
	  lwz       r5, -0x6514(r13)
	  addi      r3, r29, 0x104
	  lfs       f1, 0x1B70(r2)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  li        r5, 0x1
	  fmuls     f1, f1, f0
	  bl        -0x2072C
	  li        r3, 0x1
	  li        r0, 0
	  stb       r3, 0x2B0(r29)
	  stw       r0, 0x40(r29)
	  lwz       r0, 0x40(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x54(r3)
	  bl        -0x3B8FC8
	  lwz       r4, -0x6514(r13)
	  lwz       r6, 0x0(r3)
	  lfs       f1, 0x1B74(r2)
	  lfs       f0, 0x54(r4)
	  lwz       r5, 0x4(r3)
	  fdivs     f1, f1, f0
	  lwz       r4, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  stw       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r4, 0x30(r1)
	  stw       r0, 0x34(r1)
	  bl        -0x32F7D0
	  stw       r3, 0x284(r29)
	  li        r0, 0x1
	  lwz       r5, 0x30(r1)
	  mr        r31, r29
	  stw       r3, 0x288(r29)
	  li        r30, 0
	  lwz       r6, 0x28(r1)
	  lwz       r3, 0x2C(r1)
	  stw       r6, 0x264(r29)
	  lwz       r4, 0x34(r1)
	  stw       r3, 0x268(r29)
	  stw       r5, 0x26C(r29)
	  stw       r4, 0x270(r29)
	  stw       r6, 0x274(r29)
	  stw       r3, 0x278(r29)
	  stw       r5, 0x27C(r29)
	  stw       r4, 0x280(r29)
	  stb       r0, 0x260(r29)
	  lwz       r0, 0x40(r29)
	  stw       r5, 0x20(r1)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  stw       r4, 0x24(r1)
	  lwz       r0, 0x48(r3)
	  stw       r0, 0x2AC(r29)

	.loc_0x124:
	  li        r0, 0
	  stb       r0, 0x17C(r31)
	  lwz       r3, 0x178(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D0
	  lwz       r7, 0x180(r31)
	  mr        r28, r3
	  addi      r4, r1, 0x18
	  stw       r7, 0xC(r1)
	  lbz       r5, 0xC(r1)
	  lbz       r0, 0xD(r1)
	  stb       r5, 0x104(r3)
	  lbz       r5, 0xE(r1)
	  stb       r0, 0x105(r3)
	  lbz       r0, 0xF(r1)
	  stb       r5, 0x106(r3)
	  stb       r0, 0x107(r3)
	  lwz       r6, 0x184(r31)
	  stw       r7, 0x10(r1)
	  stw       r6, 0x8(r1)
	  lbz       r5, 0x8(r1)
	  lbz       r0, 0x9(r1)
	  stb       r5, 0x108(r3)
	  lbz       r5, 0xA(r1)
	  stb       r0, 0x109(r3)
	  lbz       r0, 0xB(r1)
	  stb       r5, 0x10A(r3)
	  stb       r0, 0x10B(r3)
	  lwz       r0, 0x188(r31)
	  stw       r6, 0x14(r1)
	  stw       r0, 0x18(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x18C(r31)
	  mr        r3, r28
	  addi      r4, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl

	.loc_0x1D0:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4C
	  cmpwi     r30, 0x3
	  blt+      .loc_0x124
	  lwz       r3, 0x40(r29)
	  li        r6, 0x1
	  lfs       f2, 0x1B78(r2)
	  li        r0, 0
	  mulli     r5, r3, 0x4C
	  lfs       f0, 0x1B6C(r2)
	  mr        r3, r29
	  li        r4, 0
	  addi      r7, r5, 0x160
	  add       r7, r29, r7
	  stb       r6, 0x1C(r7)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x54(r5)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x44(r7)
	  stfs      f0, 0x40(r7)
	  stb       r6, 0x48(r7)
	  stb       r0, 0x49(r7)
	  bl        0x4E4
	  lwz       r3, 0x80(r29)
	  li        r0, 0
	  li        r4, 0x1
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x84(r29)
	  stb       r0, 0xB0(r3)
	  lwz       r3, 0x88(r29)
	  stb       r0, 0xB0(r3)
	  lwz       r0, 0x40(r29)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r29, r0
	  lwz       r3, 0x80(r3)
	  stb       r4, 0xB0(r3)
	  lwz       r3, 0x44(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F14F4
 * Size:	00003C
 */
void ebi::Screen::TOmakeGame::doCloseScreen((ebi::Screen::ArgClose*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1B70(r2)
	  addi      r3, r3, 0xC8
	  stw       r0, 0x14(r1)
	  li        r5, 0x1
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  li        r4, 0
	  fmuls     f1, f1, f0
	  bl        -0x20984
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F1530
 * Size:	000054
 */
void ebi::Screen::TOmakeGame::doUpdateStateOpen(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x8C
	  bl        -0x205AC
	  rlwinm    r3,r3,0,24,31
	  lwz       r31, 0xC(r1)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F1584
 * Size:	000258
 */
void ebi::Screen::TOmakeGame::doUpdateStateWait(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  lwz       r3, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x10(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C4
	  addi      r3, r31, 0x14
	  bl        -0x2FB24
	  lbz       r0, 0x21(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x178
	  lwz       r0, 0x40(r31)
	  lwz       r30, 0x30(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r3, r31, r0
	  lwz       r3, 0x54(r3)
	  bl        -0x3B92C4
	  lwz       r8, 0x0(r3)
	  lwz       r7, 0x4(r3)
	  lwz       r6, 0x8(r3)
	  lwz       r5, 0xC(r3)
	  addi      r3, r31, 0x28C
	  lwz       r4, 0x274(r31)
	  lwz       r0, 0x278(r31)
	  stw       r8, 0x8(r1)
	  lfs       f1, 0x1B74(r2)
	  stw       r4, 0x264(r31)
	  lfs       f2, 0x1B7C(r2)
	  stw       r0, 0x268(r31)
	  lfs       f3, 0x1B80(r2)
	  lwz       r4, 0x27C(r31)
	  lwz       r0, 0x280(r31)
	  stw       r7, 0xC(r1)
	  lfs       f4, 0x1B6C(r2)
	  stw       r4, 0x26C(r31)
	  stw       r0, 0x270(r31)
	  stw       r8, 0x274(r31)
	  stw       r7, 0x278(r31)
	  stw       r6, 0x27C(r31)
	  stw       r5, 0x280(r31)
	  lwz       r0, 0x288(r31)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stw       r0, 0x284(r31)
	  bl        -0xC877C
	  lwz       r0, 0x40(r31)
	  mulli     r4, r30, 0x4C
	  li        r7, 0
	  lfs       f2, 0x1B78(r2)
	  rlwinm    r0,r0,2,0,29
	  lfs       f0, 0x1B6C(r2)
	  add       r3, r31, r0
	  lwz       r0, 0x48(r3)
	  add       r5, r31, r4
	  li        r6, 0x1
	  mr        r3, r31
	  stw       r0, 0x2AC(r31)
	  li        r4, 0
	  stb       r7, 0x1A8(r5)
	  stb       r6, 0x1A9(r5)
	  lwz       r0, 0x40(r31)
	  mulli     r5, r0, 0x4C
	  addi      r8, r5, 0x160
	  add       r8, r31, r8
	  stb       r6, 0x1C(r8)
	  lwz       r5, -0x6514(r13)
	  lfs       f1, 0x54(r5)
	  fmuls     f1, f2, f1
	  stfs      f1, 0x44(r8)
	  stfs      f0, 0x40(r8)
	  stb       r6, 0x48(r8)
	  stb       r7, 0x49(r8)
	  bl        0x2A8
	  lwz       r5, -0x6514(r13)
	  addi      r3, r31, 0x104
	  lfs       f1, 0x1B70(r2)
	  li        r4, 0
	  lfs       f0, 0x54(r5)
	  fmuls     f1, f1, f0
	  bl        -0x20A3C
	  li        r0, 0
	  li        r4, 0x1802
	  stb       r0, 0x2B0(r31)
	  li        r5, 0
	  lwz       r3, -0x67A8(r13)
	  bl        -0xB90C8

	.loc_0x178:
	  lwz       r0, 0x284(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x1C4
	  lwz       r3, 0xC(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x19C
	  li        r0, 0
	  stb       r0, 0x10(r31)

	.loc_0x19C:
	  lwz       r3, 0xC(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x1C4
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1801
	  li        r5, 0
	  bl        -0xB910C
	  li        r3, 0x1
	  b         .loc_0x240

	.loc_0x1C4:
	  addi      r3, r31, 0x104
	  bl        -0x2079C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x23C
	  lbz       r0, 0x2B0(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x23C
	  lwz       r3, 0x80(r31)
	  li        r0, 0
	  li        r7, 0x1
	  lfs       f1, 0x1B70(r2)
	  stb       r0, 0xB0(r3)
	  addi      r3, r31, 0x104
	  li        r4, 0
	  li        r5, 0x1
	  lwz       r6, 0x84(r31)
	  stb       r0, 0xB0(r6)
	  lwz       r6, 0x88(r31)
	  stb       r0, 0xB0(r6)
	  lwz       r0, 0x40(r31)
	  rlwinm    r0,r0,2,0,29
	  add       r6, r31, r0
	  lwz       r6, 0x80(r6)
	  stb       r7, 0xB0(r6)
	  lwz       r6, -0x6514(r13)
	  lfs       f0, 0x54(r6)
	  fmuls     f1, f1, f0
	  bl        -0x20C1C
	  li        r0, 0x1
	  stb       r0, 0x2B0(r31)

	.loc_0x23C:
	  li        r3, 0

	.loc_0x240:
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
 * Address:	803F17DC
 * Size:	000054
 */
void ebi::Screen::TOmakeGame::doUpdateStateClose(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x44(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xC8
	  bl        -0x20858
	  rlwinm    r3,r3,0,24,31
	  lwz       r31, 0xC(r1)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F1830
 * Size:	000074
 */
void ebi::Screen::TOmakeGame::doDraw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, -0x6514(r13)
	  lwz       r31, 0x24(r4)
	  addi      r30, r31, 0x190
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x44(r29)
	  mr        r4, r31
	  mr        r5, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x9C(r12)
	  mtctr     r12
	  bctrl
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
 * Address:	803F18A4
 * Size:	000044
 */
void ebi::Screen::TOmakeGame::setController((Controller*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r5, r3
	  lfs       f1, 0x1B84(r2)
	  stw       r0, 0x14(r1)
	  addi      r7, r5, 0x40
	  lfs       f2, 0x1B88(r2)
	  li        r6, 0x2
	  stw       r4, 0xC(r3)
	  addi      r3, r5, 0x14
	  li        r5, 0
	  li        r8, 0x3
	  bl        -0x2FE98
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F18E8
 * Size:	000048
 */
void ebi::Screen::TOmakeGame::isDelegateControl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  lbz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x30
	  bl        -0x1DF5C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x30
	  li        r31, 0x1

	.loc_0x30:
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
 * Address:	803F1930
 * Size:	00003C
 */
void ebi::Screen::TOmakeGame::setSelfControl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f1, 0x1B74(r2)
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  lfs       f2, 0x1B7C(r2)
	  stb       r0, 0x10(r3)
	  addi      r3, r3, 0x28C
	  lfs       f3, 0x1B80(r2)
	  lfs       f4, 0x1B6C(r2)
	  bl        -0xC8A80
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F196C
 * Size:	000108
 */
void ebi::Screen::TOmakeGame::openMsg((long))
{
	/*
	.loc_0x0:
	  cmpwi     r4, 0x2
	  beq-      .loc_0xA4
	  bge-      .loc_0x1C
	  cmpwi     r4, 0
	  beq-      .loc_0x2C
	  bge-      .loc_0x90
	  b         .loc_0xE0

	.loc_0x1C:
	  cmpwi     r4, 0x4
	  beq-      .loc_0xCC
	  bge-      .loc_0xE0
	  b         .loc_0xB8

	.loc_0x2C:
	  lwz       r0, 0x40(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0xE8

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xE8
	  b         .loc_0x7C

	.loc_0x54:
	  lis       r5, 0x305F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3830
	  b         .loc_0xE8

	.loc_0x68:
	  lis       r5, 0x315F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3830
	  b         .loc_0xE8

	.loc_0x7C:
	  lis       r5, 0x325F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3830
	  b         .loc_0xE8

	.loc_0x90:
	  lis       r5, 0x335F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3832
	  b         .loc_0xE8

	.loc_0xA4:
	  lis       r5, 0x345F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3832
	  b         .loc_0xE8

	.loc_0xB8:
	  lis       r5, 0x365F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3832
	  b         .loc_0xE8

	.loc_0xCC:
	  lis       r5, 0x355F
	  lis       r4, 0x34
	  addi      r6, r5, 0x3030
	  addi      r5, r4, 0x3832
	  b         .loc_0xE8

	.loc_0xE0:
	  li        r3, 0
	  blr

	.loc_0xE8:
	  lwz       r4, 0x60(r3)
	  stw       r6, 0x1C(r4)
	  stw       r5, 0x18(r4)
	  lwz       r4, 0x64(r3)
	  li        r3, 0x1
	  stw       r6, 0x1C(r4)
	  stw       r5, 0x18(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803F1A74
 * Size:	00000C
 */
void ebi::Screen::TOmakeGame::getName(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8049
	  addi      r3, r3, 0x7C64
	  blr
	*/
}
