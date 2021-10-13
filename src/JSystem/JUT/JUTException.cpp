

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void JUTException::JUTException(JUTDirectPrint*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002A30C
 * Size:	000110
 */
void JUTException::create(JUTDirectPrint*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r0, -0x7770(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0xA4
	  li        r5, 0
	  bl        -0x63FC
	  mr.       r31, r3
	  beq-      .loc_0xE8
	  li        r4, 0x4000
	  li        r5, 0x10
	  li        r6, 0
	  bl        -0x4D1C
	  lis       r3, 0x804A
	  lis       r4, 0x8003
	  addi      r0, r3, 0x42C
	  stw       r0, 0x0(r31)
	  li        r3, 0x2
	  subi      r4, r4, 0x5AC4
	  stw       r30, 0x80(r31)
	  bl        0xC3524
	  lis       r4, 0x8003
	  li        r3, 0x3
	  subi      r4, r4, 0x5AC4
	  bl        0xC3514
	  lis       r4, 0x8003
	  li        r3, 0x6
	  subi      r4, r4, 0x5AC4
	  bl        0xC3504
	  lis       r4, 0x8003
	  li        r3, 0x5
	  subi      r4, r4, 0x5AC4
	  bl        0xC34F4
	  lis       r4, 0x8003
	  li        r3, 0xF
	  subi      r4, r4, 0x5AC4
	  bl        0xC34E4
	  li        r3, 0
	  bl        0x424
	  li        r5, 0
	  li        r4, -0x1
	  stw       r5, -0x776C(r13)
	  li        r3, 0xA
	  li        r0, 0x1F
	  stw       r5, -0x7768(r13)
	  stw       r5, 0x84(r31)
	  stw       r4, 0x88(r31)
	  stw       r3, 0x8C(r31)
	  stw       r3, 0x90(r31)
	  stw       r4, 0x94(r31)
	  stw       r5, 0x98(r31)
	  stw       r0, 0x9C(r31)

	.loc_0xE8:
	  stw       r31, -0x7770(r13)
	  lwz       r3, 0x2C(r31)
	  bl        0xC80F8

	.loc_0xF4:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r3, -0x7770(r13)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002A41C
 * Size:	000120
 */
void JUTException::run()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r31, r3
	  bl        0xAA128
	  li        r0, -0x901
	  and       r3, r3, r0
	  bl        0xAA124
	  lis       r3, 0x804A
	  subi      r4, r13, 0x7FD0
	  addi      r3, r3, 0x3A8
	  li        r5, 0x1
	  bl        0xC506C
	  lis       r3, 0x804A
	  addi      r30, r3, 0x3A8

	.loc_0x40:
	  mr        r3, r30
	  addi      r4, r1, 0x8
	  li        r5, 0x1
	  bl        0xC517C
	  li        r3, 0
	  bl        0xA65EC
	  li        r3, 0
	  bl        0xA6628
	  lwz       r3, 0x8(r1)
	  lhz       r28, 0x4(r3)
	  lwz       r29, 0x0(r3)
	  cmplwi    r28, 0x11
	  lwz       r27, 0x8(r3)
	  lwz       r26, 0xC(r3)
	  lwz       r25, 0x10(r3)
	  bge-      .loc_0x88
	  lwz       r0, 0x4(r27)
	  stw       r0, 0xA0(r31)

	.loc_0x88:
	  bl        0xA7C1C
	  stw       r3, 0x7C(r31)
	  lwz       r0, 0x7C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lwz       r3, -0x7770(r13)
	  bl        0x21F0

	.loc_0xA4:
	  lwz       r3, -0x7770(r13)
	  lwz       r4, 0x7C(r31)
	  lwz       r3, 0x80(r3)
	  lhz       r5, 0x4(r3)
	  lhz       r6, 0x6(r3)
	  bl        -0x548
	  cmplwi    r29, 0
	  beq-      .loc_0xE0
	  mr        r12, r29
	  mr        r3, r28
	  mr        r4, r27
	  mr        r5, r26
	  mr        r6, r25
	  mtctr     r12
	  bctrl

	.loc_0xE0:
	  bl        0xC473C
	  bl        0xA7BC0
	  stw       r3, 0x7C(r31)
	  lwz       r3, -0x7770(r13)
	  lwz       r4, 0x7C(r31)
	  lwz       r3, 0x80(r3)
	  lhz       r5, 0x4(r3)
	  lhz       r6, 0x6(r3)
	  bl        -0x590
	  lwz       r3, -0x7770(r13)
	  mr        r4, r28
	  mr        r5, r27
	  mr        r6, r26
	  mr        r7, r25
	  bl        0x1C0C
	  b         .loc_0x40
	*/
}

/*
 * --INFO--
 * Address:	8002A53C
 * Size:	000104
 */
void JUTException::errorHandler(unsigned short, OSContext*, unsigned long,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0xA9FF0
	  stw       r3, -0x7758(r13)
	  mr        r3, r29
	  lwz       r0, 0x194(r29)
	  stw       r0, -0x7754(r13)
	  bl        0xC3044
	  mr        r3, r28
	  li        r4, 0
	  bl        0xC3310
	  rlwinm    r0,r28,0,16,31
	  cmplwi    r0, 0xF
	  bne-      .loc_0xAC
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  bl        0xC5294
	  li        r3, 0x1
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  bl        0xC5280
	  li        r3, 0x2
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  bl        0xC526C
	  li        r3, 0x3
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x3
	  bl        0xC5258

	.loc_0xAC:
	  lis       r3, 0x804F
	  lwz       r0, -0x776C(r13)
	  addi      r4, r3, 0x108
	  li        r5, 0x1
	  lis       r3, 0x804A
	  stw       r0, 0x0(r4)
	  addi      r3, r3, 0x3A8
	  sth       r28, 0x4(r4)
	  stw       r29, 0x8(r4)
	  stw       r30, 0xC(r4)
	  stw       r31, 0x10(r4)
	  bl        0xC4F08
	  bl        0xC742C
	  bl        0xC7974
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
 * Address:	........
 * Size:	000134
 */
void JUTException::panic_f_va(const char*, int, const char*, __va_list_struct*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002A640
 * Size:	0001A0
 */
void JUTException::panic_f(const char*, int, const char*, ...)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x190(r1)
	  mflr      r0
	  stw       r0, 0x194(r1)
	  stw       r31, 0x18C(r1)
	  mr        r31, r4
	  stw       r30, 0x188(r1)
	  mr        r30, r3
	  stw       r29, 0x184(r1)
	  bne-      cr1, .loc_0x44
	  stfd      f1, 0x28(r1)
	  stfd      f2, 0x30(r1)
	  stfd      f3, 0x38(r1)
	  stfd      f4, 0x40(r1)
	  stfd      f5, 0x48(r1)
	  stfd      f6, 0x50(r1)
	  stfd      f7, 0x58(r1)
	  stfd      f8, 0x60(r1)

	.loc_0x44:
	  addi      r11, r1, 0x198
	  addi      r0, r1, 0x8
	  lis       r12, 0x300
	  stw       r3, 0x8(r1)
	  addi      r29, r1, 0x68
	  addi      r3, r1, 0x74
	  stw       r4, 0xC(r1)
	  li        r4, 0xFF
	  stw       r6, 0x14(r1)
	  mr        r6, r29
	  stw       r5, 0x10(r1)
	  stw       r7, 0x18(r1)
	  stw       r8, 0x1C(r1)
	  stw       r9, 0x20(r1)
	  stw       r10, 0x24(r1)
	  stw       r12, 0x68(r1)
	  stw       r11, 0x6C(r1)
	  stw       r0, 0x70(r1)
	  bl        0x9CF98
	  lwz       r0, -0x7770(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  mr        r3, r30
	  mr        r4, r31
	  addi      r5, r1, 0x74
	  crclr     6, 0x6
	  bl        0xC3080

	.loc_0xB0:
	  bl        0xC2910
	  lis       r5, 0x804F
	  mr        r4, r3
	  addi      r3, r5, 0x128
	  li        r5, 0x2C8
	  bl        -0x25568
	  bl        0xC2A5C
	  lwz       r7, -0x7770(r13)
	  lis       r6, 0x804F
	  lis       r4, 0x804F
	  li        r5, 0xFF
	  stw       r3, 0xA0(r7)
	  addi      r6, r6, 0x108
	  li        r0, 0
	  addi      r3, r4, 0x128
	  lwz       r7, -0x775C(r13)
	  lwz       r4, -0x776C(r13)
	  cmplwi    r7, 0
	  sth       r5, 0x4(r6)
	  stw       r4, 0x0(r6)
	  stw       r3, 0x8(r6)
	  stw       r0, 0xC(r6)
	  stw       r0, 0x10(r6)
	  beq-      .loc_0x120
	  beq-      .loc_0x13C
	  lwz       r0, 0x58(r7)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x13C

	.loc_0x120:
	  lis       r3, 0x8047
	  mr        r5, r30
	  addi      r3, r3, 0x3CD4
	  mr        r6, r31
	  addi      r4, r1, 0x74
	  crclr     6, 0x6
	  bl        0xC2F74

	.loc_0x13C:
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  lis       r4, 0x8047
	  mr        r6, r30
	  addi      r4, r4, 0x3CD4
	  mr        r7, r31
	  addi      r5, r1, 0x74
	  crclr     6, 0x6
	  bl        -0x1E00

	.loc_0x164:
	  lis       r3, 0x804A
	  lis       r4, 0x804F
	  addi      r3, r3, 0x3A8
	  li        r5, 0x1
	  addi      r4, r4, 0x108
	  bl        0xC4D64
	  bl        0xC7208
	  bl        0xC7FBC
	  lwz       r0, 0x194(r1)
	  lwz       r31, 0x18C(r1)
	  lwz       r30, 0x188(r1)
	  lwz       r29, 0x184(r1)
	  mtlr      r0
	  addi      r1, r1, 0x190
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002A7E0
 * Size:	000048
 */
void JUTException::setFPException(unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x14(r1)
	  stw       r3, -0x7C98(r13)
	  beq-      .loc_0x2C
	  lis       r4, 0x8003
	  li        r3, 0x10
	  subi      r4, r4, 0x5AC4
	  bl        0xC3094
	  b         .loc_0x38

	.loc_0x2C:
	  li        r3, 0x10
	  li        r4, 0
	  bl        0xC3084

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000184
 */
void JUTException::showFloatSub(int, float)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002A828
 * Size:	000770
 */
void JUTException::showFloat(OSContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x64(r1)
	  stmw      r27, 0x4C(r1)
	  mr        r27, r4
	  addi      r30, r5, 0x3C18
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x75C
	  addi      r4, r30, 0x128
	  bl        -0x1E28
	  mr        r29, r27
	  li        r28, 0
	  lis       r31, 0x7F80

	.loc_0x3C:
	  lfd       f0, 0x90(r29)
	  frsp      f1, f0
	  stfs      f1, 0x2C(r1)
	  lwz       r3, 0x2C(r1)
	  stfs      f1, 0x40(r1)
	  rlwinm    r0,r3,0,1,8
	  cmpw      r0, r31
	  beq-      .loc_0x6C
	  bge-      .loc_0x9C
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  b         .loc_0x9C

	.loc_0x6C:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x7C
	  li        r0, 0x1
	  b         .loc_0xA0

	.loc_0x7C:
	  li        r0, 0x2
	  b         .loc_0xA0

	.loc_0x84:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x94
	  li        r0, 0x5
	  b         .loc_0xA0

	.loc_0x94:
	  li        r0, 0x3
	  b         .loc_0xA0

	.loc_0x9C:
	  li        r0, 0x4

	.loc_0xA0:
	  cmpwi     r0, 0x1
	  bne-      .loc_0xC0
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  addi      r4, r30, 0xD4
	  crclr     6, 0x6
	  bl        -0x1F40
	  b         .loc_0x198

	.loc_0xC0:
	  stfs      f1, 0x28(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x28(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0xE8
	  bge-      .loc_0x118
	  cmpwi     r3, 0
	  beq-      .loc_0x100
	  b         .loc_0x118

	.loc_0xE8:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0xF8
	  li        r0, 0x1
	  b         .loc_0x11C

	.loc_0xF8:
	  li        r0, 0x2
	  b         .loc_0x11C

	.loc_0x100:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x110
	  li        r0, 0x5
	  b         .loc_0x11C

	.loc_0x110:
	  li        r0, 0x3
	  b         .loc_0x11C

	.loc_0x118:
	  li        r0, 0x4

	.loc_0x11C:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x160
	  lbz       r0, 0x40(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x148
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  addi      r4, r30, 0xE8
	  crclr     6, 0x6
	  bl        -0x1FC8
	  b         .loc_0x198

	.loc_0x148:
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  addi      r4, r30, 0xF8
	  crclr     6, 0x6
	  bl        -0x1FE0
	  b         .loc_0x198

	.loc_0x160:
	  lfs       f0, -0x7D38(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x184
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  addi      r4, r30, 0x108
	  crclr     6, 0x6
	  bl        -0x2004
	  b         .loc_0x198

	.loc_0x184:
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  addi      r4, r30, 0x11C
	  crset     6, 0x6
	  bl        -0x201C

	.loc_0x198:
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D34
	  bl        -0x1F9C
	  lfd       f0, 0xE8(r29)
	  frsp      f1, f0
	  stfs      f1, 0x24(r1)
	  lwz       r3, 0x24(r1)
	  stfs      f1, 0x3C(r1)
	  rlwinm    r0,r3,0,1,8
	  cmpw      r0, r31
	  beq-      .loc_0x1D4
	  bge-      .loc_0x204
	  cmpwi     r0, 0
	  beq-      .loc_0x1EC
	  b         .loc_0x204

	.loc_0x1D4:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x1E4
	  li        r0, 0x1
	  b         .loc_0x208

	.loc_0x1E4:
	  li        r0, 0x2
	  b         .loc_0x208

	.loc_0x1EC:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x1FC
	  li        r0, 0x5
	  b         .loc_0x208

	.loc_0x1FC:
	  li        r0, 0x3
	  b         .loc_0x208

	.loc_0x204:
	  li        r0, 0x4

	.loc_0x208:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x228
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xD4
	  addi      r5, r28, 0xB
	  crclr     6, 0x6
	  bl        -0x20A8
	  b         .loc_0x300

	.loc_0x228:
	  stfs      f1, 0x20(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x20(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x250
	  bge-      .loc_0x280
	  cmpwi     r3, 0
	  beq-      .loc_0x268
	  b         .loc_0x280

	.loc_0x250:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x260
	  li        r0, 0x1
	  b         .loc_0x284

	.loc_0x260:
	  li        r0, 0x2
	  b         .loc_0x284

	.loc_0x268:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x278
	  li        r0, 0x5
	  b         .loc_0x284

	.loc_0x278:
	  li        r0, 0x3
	  b         .loc_0x284

	.loc_0x280:
	  li        r0, 0x4

	.loc_0x284:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x2C8
	  lbz       r0, 0x3C(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x2B0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xE8
	  addi      r5, r28, 0xB
	  crclr     6, 0x6
	  bl        -0x2130
	  b         .loc_0x300

	.loc_0x2B0:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xF8
	  addi      r5, r28, 0xB
	  crclr     6, 0x6
	  bl        -0x2148
	  b         .loc_0x300

	.loc_0x2C8:
	  lfs       f0, -0x7D38(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x2EC
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x108
	  addi      r5, r28, 0xB
	  crclr     6, 0x6
	  bl        -0x216C
	  b         .loc_0x300

	.loc_0x2EC:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x11C
	  addi      r5, r28, 0xB
	  crset     6, 0x6
	  bl        -0x2184

	.loc_0x300:
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D34
	  bl        -0x2104
	  lfd       f0, 0x140(r29)
	  frsp      f1, f0
	  stfs      f1, 0x1C(r1)
	  lwz       r3, 0x1C(r1)
	  stfs      f1, 0x38(r1)
	  rlwinm    r0,r3,0,1,8
	  cmpw      r0, r31
	  beq-      .loc_0x33C
	  bge-      .loc_0x36C
	  cmpwi     r0, 0
	  beq-      .loc_0x354
	  b         .loc_0x36C

	.loc_0x33C:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x34C
	  li        r0, 0x1
	  b         .loc_0x370

	.loc_0x34C:
	  li        r0, 0x2
	  b         .loc_0x370

	.loc_0x354:
	  rlwinm.   r0,r3,0,9,31
	  beq-      .loc_0x364
	  li        r0, 0x5
	  b         .loc_0x370

	.loc_0x364:
	  li        r0, 0x3
	  b         .loc_0x370

	.loc_0x36C:
	  li        r0, 0x4

	.loc_0x370:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x390
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xD4
	  addi      r5, r28, 0x16
	  crclr     6, 0x6
	  bl        -0x2210
	  b         .loc_0x468

	.loc_0x390:
	  stfs      f1, 0x18(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x18(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x3B8
	  bge-      .loc_0x3E8
	  cmpwi     r3, 0
	  beq-      .loc_0x3D0
	  b         .loc_0x3E8

	.loc_0x3B8:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x3C8
	  li        r0, 0x1
	  b         .loc_0x3EC

	.loc_0x3C8:
	  li        r0, 0x2
	  b         .loc_0x3EC

	.loc_0x3D0:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x3E0
	  li        r0, 0x5
	  b         .loc_0x3EC

	.loc_0x3E0:
	  li        r0, 0x3
	  b         .loc_0x3EC

	.loc_0x3E8:
	  li        r0, 0x4

	.loc_0x3EC:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x430
	  lbz       r0, 0x38(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x418
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xE8
	  addi      r5, r28, 0x16
	  crclr     6, 0x6
	  bl        -0x2298
	  b         .loc_0x468

	.loc_0x418:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xF8
	  addi      r5, r28, 0x16
	  crclr     6, 0x6
	  bl        -0x22B0
	  b         .loc_0x468

	.loc_0x430:
	  lfs       f0, -0x7D38(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x454
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x108
	  addi      r5, r28, 0x16
	  crclr     6, 0x6
	  bl        -0x22D4
	  b         .loc_0x468

	.loc_0x454:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x11C
	  addi      r5, r28, 0x16
	  crset     6, 0x6
	  bl        -0x22EC

	.loc_0x468:
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x226C
	  addi      r28, r28, 0x1
	  addi      r29, r29, 0x8
	  cmpwi     r28, 0xA
	  blt+      .loc_0x3C
	  lfd       f0, 0xE0(r27)
	  lis       r0, 0x7F80
	  frsp      f1, f0
	  stfs      f1, 0x14(r1)
	  lwz       r4, 0x14(r1)
	  stfs      f1, 0x34(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x4B8
	  bge-      .loc_0x4E8
	  cmpwi     r3, 0
	  beq-      .loc_0x4D0
	  b         .loc_0x4E8

	.loc_0x4B8:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x4C8
	  li        r0, 0x1
	  b         .loc_0x4EC

	.loc_0x4C8:
	  li        r0, 0x2
	  b         .loc_0x4EC

	.loc_0x4D0:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x4E0
	  li        r0, 0x5
	  b         .loc_0x4EC

	.loc_0x4E0:
	  li        r0, 0x3
	  b         .loc_0x4EC

	.loc_0x4E8:
	  li        r0, 0x4

	.loc_0x4EC:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x50C
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xD4
	  li        r5, 0xA
	  crclr     6, 0x6
	  bl        -0x238C
	  b         .loc_0x5E4

	.loc_0x50C:
	  stfs      f1, 0x10(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x10(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x534
	  bge-      .loc_0x564
	  cmpwi     r3, 0
	  beq-      .loc_0x54C
	  b         .loc_0x564

	.loc_0x534:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x544
	  li        r0, 0x1
	  b         .loc_0x568

	.loc_0x544:
	  li        r0, 0x2
	  b         .loc_0x568

	.loc_0x54C:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x55C
	  li        r0, 0x5
	  b         .loc_0x568

	.loc_0x55C:
	  li        r0, 0x3
	  b         .loc_0x568

	.loc_0x564:
	  li        r0, 0x4

	.loc_0x568:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x5AC
	  lbz       r0, 0x34(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x594
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xE8
	  li        r5, 0xA
	  crclr     6, 0x6
	  bl        -0x2414
	  b         .loc_0x5E4

	.loc_0x594:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xF8
	  li        r5, 0xA
	  crclr     6, 0x6
	  bl        -0x242C
	  b         .loc_0x5E4

	.loc_0x5AC:
	  lfs       f0, -0x7D38(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x5D0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x108
	  li        r5, 0xA
	  crclr     6, 0x6
	  bl        -0x2450
	  b         .loc_0x5E4

	.loc_0x5D0:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x11C
	  li        r5, 0xA
	  crset     6, 0x6
	  bl        -0x2468

	.loc_0x5E4:
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D34
	  bl        -0x23E8
	  lfd       f0, 0x138(r27)
	  lis       r0, 0x7F80
	  frsp      f1, f0
	  stfs      f1, 0xC(r1)
	  lwz       r4, 0xC(r1)
	  stfs      f1, 0x30(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x624
	  bge-      .loc_0x654
	  cmpwi     r3, 0
	  beq-      .loc_0x63C
	  b         .loc_0x654

	.loc_0x624:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x634
	  li        r0, 0x1
	  b         .loc_0x658

	.loc_0x634:
	  li        r0, 0x2
	  b         .loc_0x658

	.loc_0x63C:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x64C
	  li        r0, 0x5
	  b         .loc_0x658

	.loc_0x64C:
	  li        r0, 0x3
	  b         .loc_0x658

	.loc_0x654:
	  li        r0, 0x4

	.loc_0x658:
	  cmpwi     r0, 0x1
	  bne-      .loc_0x678
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xD4
	  li        r5, 0x15
	  crclr     6, 0x6
	  bl        -0x24F8
	  b         .loc_0x750

	.loc_0x678:
	  stfs      f1, 0x8(r1)
	  lis       r0, 0x7F80
	  lwz       r4, 0x8(r1)
	  rlwinm    r3,r4,0,1,8
	  cmpw      r3, r0
	  beq-      .loc_0x6A0
	  bge-      .loc_0x6D0
	  cmpwi     r3, 0
	  beq-      .loc_0x6B8
	  b         .loc_0x6D0

	.loc_0x6A0:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x6B0
	  li        r0, 0x1
	  b         .loc_0x6D4

	.loc_0x6B0:
	  li        r0, 0x2
	  b         .loc_0x6D4

	.loc_0x6B8:
	  rlwinm.   r0,r4,0,9,31
	  beq-      .loc_0x6C8
	  li        r0, 0x5
	  b         .loc_0x6D4

	.loc_0x6C8:
	  li        r0, 0x3
	  b         .loc_0x6D4

	.loc_0x6D0:
	  li        r0, 0x4

	.loc_0x6D4:
	  cmpwi     r0, 0x2
	  bne-      .loc_0x718
	  lbz       r0, 0x30(r1)
	  rlwinm.   r0,r0,0,24,24
	  beq-      .loc_0x700
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xE8
	  li        r5, 0x15
	  crclr     6, 0x6
	  bl        -0x2580
	  b         .loc_0x750

	.loc_0x700:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0xF8
	  li        r5, 0x15
	  crclr     6, 0x6
	  bl        -0x2598
	  b         .loc_0x750

	.loc_0x718:
	  lfs       f0, -0x7D38(r2)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0x73C
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x108
	  li        r5, 0x15
	  crclr     6, 0x6
	  bl        -0x25BC
	  b         .loc_0x750

	.loc_0x73C:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x11C
	  li        r5, 0x15
	  crset     6, 0x6
	  bl        -0x25D4

	.loc_0x750:
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x2554

	.loc_0x75C:
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void JUTException::searchPartialModule(unsigned long, unsigned long*,
                                       unsigned long*, unsigned long*,
                                       unsigned long*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void search_name_part(unsigned char*, unsigned char*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002AF98
 * Size:	0000FC
 */
void JUTException::showStack(OSContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8047
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r4, 0x3C18
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r0, -0x775C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  mr        r3, r0
	  addi      r4, r31, 0x150
	  bl        -0x25A8
	  lwz       r29, 0xA0(r28)
	  addi      r4, r31, 0x178
	  lwz       r3, -0x775C(r13)
	  crclr     6, 0x6
	  bl        -0x2648
	  li        r30, 0
	  b         .loc_0xBC

	.loc_0x5C:
	  lwz       r0, 0x94(r28)
	  cmplw     r30, r0
	  ble-      .loc_0x78
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x198
	  bl        -0x25DC
	  b         .loc_0xDC

	.loc_0x78:
	  lwz       r3, -0x775C(r13)
	  mr        r5, r29
	  lwz       r6, 0x0(r29)
	  addi      r4, r31, 0x1AC
	  lwz       r7, 0x4(r29)
	  crclr     6, 0x6
	  bl        -0x2688
	  lwz       r4, 0x4(r29)
	  mr        r3, r28
	  li        r5, 0
	  bl        0x2A0
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x1F40
	  lwz       r3, 0x90(r28)
	  bl        0x15D8
	  lwz       r29, 0x0(r29)

	.loc_0xBC:
	  cmplwi    r29, 0
	  beq-      .loc_0xDC
	  addis     r0, r29, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xDC
	  cmplwi    r30, 0x10
	  addi      r30, r30, 0x1
	  blt+      .loc_0x5C

	.loc_0xDC:
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
 * Address:	8002B094
 * Size:	000244
 */
void JUTException::showMainInfo(unsigned short, OSContext*, unsigned long,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r8, 0x8047
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  addi      r31, r8, 0x3C18
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x230
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x11
	  bge-      .loc_0x60
	  lis       r4, 0x804A
	  rlwinm    r0,r30,2,14,29
	  addi      r4, r4, 0x3E8
	  lwzx      r6, r4, r0
	  addi      r4, r31, 0x1C4
	  crclr     6, 0x6
	  bl        -0x274C
	  b         .loc_0x6C

	.loc_0x60:
	  addi      r4, r31, 0x1E4
	  crclr     6, 0x6
	  bl        -0x275C

	.loc_0x6C:
	  rlwinm    r0,r30,0,16,31
	  cmplwi    r0, 0x10
	  bne-      .loc_0x200
	  lwz       r3, -0x7754(r13)
	  rlwinm    r0,r3,22,2,6
	  oris      r0, r0, 0x1F8
	  ori       r0, r0, 0x700
	  and       r30, r3, r0
	  rlwinm.   r0,r30,0,2,2
	  beq-      .loc_0x1A0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x1F4
	  crclr     6, 0x6
	  bl        -0x2794
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,7,7
	  beq-      .loc_0xC0
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D2C
	  crclr     6, 0x6
	  bl        -0x27B0

	.loc_0xC0:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,8,8
	  beq-      .loc_0xDC
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x210
	  crclr     6, 0x6
	  bl        -0x27CC

	.loc_0xDC:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,9,9
	  beq-      .loc_0xF8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x228
	  crclr     6, 0x6
	  bl        -0x27E8

	.loc_0xF8:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,10,10
	  beq-      .loc_0x114
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D24
	  crclr     6, 0x6
	  bl        -0x2804

	.loc_0x114:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,11,11
	  beq-      .loc_0x130
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x240
	  crclr     6, 0x6
	  bl        -0x2820

	.loc_0x130:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,12,12
	  beq-      .loc_0x14C
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x250
	  crclr     6, 0x6
	  bl        -0x283C

	.loc_0x14C:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,21,21
	  beq-      .loc_0x168
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x264
	  crclr     6, 0x6
	  bl        -0x2858

	.loc_0x168:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x184
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x278
	  crclr     6, 0x6
	  bl        -0x2874

	.loc_0x184:
	  lwz       r0, -0x7754(r13)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x1A0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x290
	  crclr     6, 0x6
	  bl        -0x2890

	.loc_0x1A0:
	  rlwinm.   r0,r30,0,3,3
	  beq-      .loc_0x1B8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2AC
	  crclr     6, 0x6
	  bl        -0x28A8

	.loc_0x1B8:
	  rlwinm.   r0,r30,0,4,4
	  beq-      .loc_0x1D0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2BC
	  crclr     6, 0x6
	  bl        -0x28C0

	.loc_0x1D0:
	  rlwinm.   r0,r30,0,5,5
	  beq-      .loc_0x1E8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2D0
	  crclr     6, 0x6
	  bl        -0x28D8

	.loc_0x1E8:
	  rlwinm.   r0,r30,0,6,6
	  beq-      .loc_0x200
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x2E8
	  crclr     6, 0x6
	  bl        -0x28F0

	.loc_0x200:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x300
	  lwz       r5, 0x198(r27)
	  lwz       r6, 0x19C(r27)
	  crclr     6, 0x6
	  bl        -0x2908
	  lwz       r3, -0x775C(r13)
	  mr        r5, r28
	  mr        r6, r29
	  addi      r4, r31, 0x31C
	  crclr     6, 0x6
	  bl        -0x2920

	.loc_0x230:
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void JUTException::showGPR(OSContext*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002B2D8
 * Size:	000258
 */
void JUTException::showMapInfo_subroutine(unsigned long, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  stw       r0, 0x164(r1)
	  lis       r0, 0x8000
	  stw       r31, 0x15C(r1)
	  mr        r31, r4
	  cmplw     r31, r0
	  stw       r30, 0x158(r1)
	  blt-      .loc_0x34
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r31, r0
	  ble-      .loc_0x3C

	.loc_0x34:
	  li        r3, 0
	  b         .loc_0x240

	.loc_0x3C:
	  rlwinm.   r3,r5,0,24,31
	  subi      r0, r2, 0x7D30
	  bne-      .loc_0x4C
	  subi      r0, r2, 0x7D1C

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x5C
	  li        r30, 0
	  b         .loc_0x108

	.loc_0x5C:
	  lis       r3, 0x8000
	  lwz       r8, 0x30C8(r3)
	  b         .loc_0xFC

	.loc_0x68:
	  lwz       r3, 0xC(r8)
	  li        r6, 0
	  lwz       r7, 0x10(r8)
	  mtctr     r3
	  cmplwi    r3, 0
	  ble-      .loc_0xF8

	.loc_0x80:
	  lwz       r9, 0x4(r7)
	  cmplwi    r9, 0
	  beq-      .loc_0xEC
	  lwz       r3, 0x0(r7)
	  rlwinm    r4,r3,0,0,30
	  cmplw     r4, r31
	  bgt-      .loc_0xEC
	  add       r3, r4, r9
	  cmplw     r31, r3
	  bge-      .loc_0xEC
	  addic.    r3, r1, 0x20
	  beq-      .loc_0xB8
	  lwz       r3, 0x0(r8)
	  stw       r3, 0x20(r1)

	.loc_0xB8:
	  addic.    r3, r1, 0x1C
	  beq-      .loc_0xC4
	  stw       r6, 0x1C(r1)

	.loc_0xC4:
	  addic.    r3, r1, 0x18
	  beq-      .loc_0xD4
	  sub       r3, r31, r4
	  stw       r3, 0x18(r1)

	.loc_0xD4:
	  addic.    r3, r1, 0x24
	  beq-      .loc_0xE4
	  lwz       r3, 0x14(r8)
	  stw       r3, 0x24(r1)

	.loc_0xE4:
	  li        r30, 0x1
	  b         .loc_0x108

	.loc_0xEC:
	  addi      r7, r7, 0x8
	  addi      r6, r6, 0x1
	  bdnz+     .loc_0x80

	.loc_0xF8:
	  lwz       r8, 0x4(r8)

	.loc_0xFC:
	  cmplwi    r8, 0
	  bne+      .loc_0x68
	  li        r30, 0

	.loc_0x108:
	  rlwinm    r3,r30,0,24,31
	  cmplwi    r3, 0x1
	  bne-      .loc_0x1B8
	  lwz       r5, 0x24(r1)
	  addi      r6, r1, 0x28
	  mr        r3, r5
	  b         .loc_0x134

	.loc_0x124:
	  cmpwi     r4, 0x5C
	  bne-      .loc_0x130
	  mr        r5, r3

	.loc_0x130:
	  addi      r3, r3, 0x1

	.loc_0x134:
	  lbz       r4, 0x0(r3)
	  cmplwi    r4, 0
	  bne+      .loc_0x124
	  lbz       r3, 0x0(r5)
	  cmpwi     r3, 0x5C
	  bne-      .loc_0x150
	  addi      r5, r5, 0x1

	.loc_0x150:
	  li        r4, 0
	  b         .loc_0x174

	.loc_0x158:
	  cmpwi     r3, 0x2E
	  beq-      .loc_0x188
	  lbz       r3, 0x0(r5)
	  addi      r4, r4, 0x1
	  addi      r5, r5, 0x1
	  stb       r3, 0x0(r6)
	  addi      r6, r6, 0x1

	.loc_0x174:
	  lbz       r3, 0x0(r5)
	  cmplwi    r3, 0
	  beq-      .loc_0x188
	  cmpwi     r4, 0x20
	  blt+      .loc_0x158

	.loc_0x188:
	  li        r5, 0
	  lis       r3, 0x8047
	  stb       r5, 0x0(r6)
	  addi      r4, r3, 0x3FBC
	  lwz       r3, -0x775C(r13)
	  mr        r5, r0
	  lwz       r7, 0x18(r1)
	  addi      r6, r1, 0x28
	  lwz       r8, 0x1C(r1)
	  crclr     6, 0x6
	  bl        -0x2AE8
	  li        r5, 0

	.loc_0x1B8:
	  lis       r3, 0x8050
	  lwz       r0, 0x6E74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x23C
	  rlwinm    r0,r30,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x200
	  stw       r5, 0x8(r1)
	  addi      r3, r1, 0x28
	  lwz       r4, 0x18(r1)
	  addi      r6, r1, 0x14
	  lwz       r5, 0x1C(r1)
	  addi      r7, r1, 0x10
	  addi      r8, r1, 0x4C
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0x1374
	  b         .loc_0x228

	.loc_0x200:
	  stw       r5, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x14
	  addi      r7, r1, 0x10
	  addi      r8, r1, 0x4C
	  li        r3, 0
	  li        r5, -0x1
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0x1348

	.loc_0x228:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x23C
	  li        r3, 0x1
	  b         .loc_0x240

	.loc_0x23C:
	  li        r3, 0

	.loc_0x240:
	  lwz       r0, 0x164(r1)
	  lwz       r31, 0x15C(r1)
	  lwz       r30, 0x158(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002B530
 * Size:	0002F4
 */
void JUTException::showGPRMap(OSContext*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x170(r1)
	  mflr      r0
	  lis       r5, 0x8047
	  stw       r0, 0x174(r1)
	  stmw      r24, 0x150(r1)
	  mr        r24, r3
	  mr        r25, r4
	  addi      r30, r5, 0x3C18
	  lwz       r0, -0x775C(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x2E0
	  mr        r3, r0
	  addi      r4, r30, 0x3BC
	  li        r27, 0
	  bl        -0x2B3C
	  mr        r28, r25
	  li        r26, 0
	  lis       r31, 0x8000

	.loc_0x48:
	  lwz       r25, 0x0(r28)
	  cmplw     r25, r31
	  blt-      .loc_0x2BC
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r25, r0
	  bgt-      .loc_0x2BC
	  lwz       r3, -0x775C(r13)
	  mr        r5, r26
	  mr        r6, r25
	  addi      r4, r30, 0x3E8
	  li        r27, 0x1
	  crclr     6, 0x6
	  bl        -0x2C0C
	  lis       r4, 0x8000
	  li        r6, 0x1
	  cmplw     r25, r4
	  blt-      .loc_0xA0
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r25, r0
	  ble-      .loc_0xA8

	.loc_0xA0:
	  li        r0, 0
	  b         .loc_0x294

	.loc_0xA8:
	  cmplwi    r25, 0
	  subi      r5, r2, 0x7D30
	  bne-      .loc_0xBC
	  li        r29, 0
	  b         .loc_0x164

	.loc_0xBC:
	  lwz       r8, 0x30C8(r4)
	  b         .loc_0x158

	.loc_0xC4:
	  lwz       r0, 0xC(r8)
	  li        r4, 0
	  lwz       r7, 0x10(r8)
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x154

	.loc_0xDC:
	  lwz       r9, 0x4(r7)
	  cmplwi    r9, 0
	  beq-      .loc_0x148
	  lwz       r0, 0x0(r7)
	  rlwinm    r3,r0,0,0,30
	  cmplw     r3, r25
	  bgt-      .loc_0x148
	  add       r0, r3, r9
	  cmplw     r25, r0
	  bge-      .loc_0x148
	  addic.    r0, r1, 0x14
	  beq-      .loc_0x114
	  lwz       r0, 0x0(r8)
	  stw       r0, 0x14(r1)

	.loc_0x114:
	  addic.    r0, r1, 0x18
	  beq-      .loc_0x120
	  stw       r4, 0x18(r1)

	.loc_0x120:
	  addic.    r0, r1, 0x1C
	  beq-      .loc_0x130
	  sub       r0, r25, r3
	  stw       r0, 0x1C(r1)

	.loc_0x130:
	  addic.    r0, r1, 0x10
	  beq-      .loc_0x140
	  lwz       r0, 0x14(r8)
	  stw       r0, 0x10(r1)

	.loc_0x140:
	  li        r29, 0x1
	  b         .loc_0x164

	.loc_0x148:
	  addi      r7, r7, 0x8
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0xDC

	.loc_0x154:
	  lwz       r8, 0x4(r8)

	.loc_0x158:
	  cmplwi    r8, 0
	  bne+      .loc_0xC4
	  li        r29, 0

	.loc_0x164:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x20C
	  lwz       r4, 0x10(r1)
	  addi      r6, r1, 0x28
	  mr        r3, r4
	  b         .loc_0x190

	.loc_0x180:
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x18C
	  mr        r4, r3

	.loc_0x18C:
	  addi      r3, r3, 0x1

	.loc_0x190:
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x180
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x1AC
	  addi      r4, r4, 0x1

	.loc_0x1AC:
	  li        r3, 0
	  b         .loc_0x1D0

	.loc_0x1B4:
	  cmpwi     r0, 0x2E
	  beq-      .loc_0x1E4
	  lbz       r0, 0x0(r4)
	  addi      r3, r3, 0x1
	  addi      r4, r4, 0x1
	  stb       r0, 0x0(r6)
	  addi      r6, r6, 0x1

	.loc_0x1D0:
	  lbz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x1E4
	  cmpwi     r3, 0x20
	  blt+      .loc_0x1B4

	.loc_0x1E4:
	  li        r0, 0
	  lwz       r3, -0x775C(r13)
	  stb       r0, 0x0(r6)
	  addi      r4, r30, 0x3A4
	  lwz       r7, 0x1C(r1)
	  addi      r6, r1, 0x28
	  lwz       r8, 0x18(r1)
	  crclr     6, 0x6
	  bl        -0x2D94
	  li        r6, 0

	.loc_0x20C:
	  lis       r3, 0x8050
	  lwz       r0, 0x6E74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x290
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x254
	  stw       r6, 0x8(r1)
	  addi      r3, r1, 0x28
	  lwz       r4, 0x1C(r1)
	  addi      r6, r1, 0x20
	  lwz       r5, 0x18(r1)
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0x10C8
	  b         .loc_0x27C

	.loc_0x254:
	  stw       r6, 0x8(r1)
	  mr        r4, r25
	  addi      r6, r1, 0x20
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r3, 0
	  li        r5, -0x1
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0x109C

	.loc_0x27C:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x290
	  li        r0, 0x1
	  b         .loc_0x294

	.loc_0x290:
	  li        r0, 0

	.loc_0x294:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x2A8
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x3F8
	  bl        -0x2DA8

	.loc_0x2A8:
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x26DC
	  lwz       r3, 0x90(r24)
	  bl        0xE3C

	.loc_0x2BC:
	  addi      r26, r26, 0x1
	  addi      r28, r28, 0x4
	  cmpwi     r26, 0x1F
	  blt+      .loc_0x48
	  rlwinm.   r0,r27,0,24,31
	  bne-      .loc_0x2E0
	  lwz       r3, -0x775C(r13)
	  addi      r4, r30, 0x40C
	  bl        -0x2DE0

	.loc_0x2E0:
	  lmw       r24, 0x150(r1)
	  lwz       r0, 0x174(r1)
	  mtlr      r0
	  addi      r1, r1, 0x170
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002BC
 */
void JUTException::showSRR0Map(OSContext*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002B824
 * Size:	0003AC
 */
void JUTException::printDebugInfo(JUTException::EInfoPage, unsigned short,
                                  OSContext*, unsigned long, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x160(r1)
	  mflr      r0
	  cmpwi     r4, 0x3
	  lis       r5, 0x8047
	  stw       r0, 0x164(r1)
	  stw       r31, 0x15C(r1)
	  addi      r31, r5, 0x3C18
	  stw       r30, 0x158(r1)
	  stw       r29, 0x154(r1)
	  stw       r28, 0x150(r1)
	  mr        r28, r6
	  beq-      .loc_0xF8
	  bge-      .loc_0x44
	  cmpwi     r4, 0x1
	  beq-      .loc_0x54
	  bge-      .loc_0xCC
	  b         .loc_0x38C

	.loc_0x44:
	  cmpwi     r4, 0x5
	  beq-      .loc_0x110
	  bge-      .loc_0x38C
	  b         .loc_0x104

	.loc_0x54:
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  addi      r4, r31, 0x338
	  bl        -0x2E5C
	  li        r30, 0
	  mr        r29, r28

	.loc_0x70:
	  lwz       r3, -0x775C(r13)
	  mr        r5, r30
	  lwz       r6, 0x0(r29)
	  addi      r4, r31, 0x360
	  lwz       r8, 0x2C(r29)
	  addi      r7, r30, 0xB
	  lwz       r10, 0x58(r29)
	  addi      r9, r30, 0x16
	  crclr     6, 0x6
	  bl        -0x2F18
	  addi      r30, r30, 0x1
	  addi      r29, r29, 0x4
	  cmpwi     r30, 0xA
	  blt+      .loc_0x70
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x388
	  lwz       r6, 0x28(r28)
	  li        r5, 0xA
	  lwz       r8, 0x54(r28)
	  li        r7, 0x15
	  crclr     6, 0x6
	  bl        -0x2F48
	  b         .loc_0x38C

	.loc_0xCC:
	  mr        r4, r28
	  bl        -0x10CC
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  lwz       r5, -0x7758(r13)
	  addi      r4, r31, 0x46C
	  lwz       r6, -0x7754(r13)
	  crclr     6, 0x6
	  bl        -0x2F74
	  b         .loc_0x38C

	.loc_0xF8:
	  mr        r4, r28
	  bl        -0x988
	  b         .loc_0x38C

	.loc_0x104:
	  mr        r4, r28
	  bl        -0x3FC
	  b         .loc_0x38C

	.loc_0x110:
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38C
	  addi      r4, r31, 0x434
	  bl        -0x2F18
	  lwz       r30, 0x198(r28)
	  lis       r0, 0x8000
	  cmplw     r30, r0
	  blt-      .loc_0x38C
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r30, r0
	  bgt-      .loc_0x38C
	  lwz       r3, -0x775C(r13)
	  mr        r5, r30
	  addi      r4, r31, 0x460
	  crclr     6, 0x6
	  bl        -0x2FD8
	  lis       r4, 0x8000
	  li        r6, 0x1
	  cmplw     r30, r4
	  blt-      .loc_0x178
	  lis       r3, 0x8300
	  subi      r0, r3, 0x1
	  cmplw     r30, r0
	  ble-      .loc_0x180

	.loc_0x178:
	  li        r0, 0
	  b         .loc_0x36C

	.loc_0x180:
	  cmplwi    r30, 0
	  subi      r5, r2, 0x7D30
	  bne-      .loc_0x194
	  li        r29, 0
	  b         .loc_0x23C

	.loc_0x194:
	  lwz       r8, 0x30C8(r4)
	  b         .loc_0x230

	.loc_0x19C:
	  lwz       r0, 0xC(r8)
	  li        r4, 0
	  lwz       r7, 0x10(r8)
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x22C

	.loc_0x1B4:
	  lwz       r9, 0x4(r7)
	  cmplwi    r9, 0
	  beq-      .loc_0x220
	  lwz       r0, 0x0(r7)
	  rlwinm    r3,r0,0,0,30
	  cmplw     r3, r30
	  bgt-      .loc_0x220
	  add       r0, r3, r9
	  cmplw     r30, r0
	  bge-      .loc_0x220
	  addic.    r0, r1, 0x14
	  beq-      .loc_0x1EC
	  lwz       r0, 0x0(r8)
	  stw       r0, 0x14(r1)

	.loc_0x1EC:
	  addic.    r0, r1, 0x18
	  beq-      .loc_0x1F8
	  stw       r4, 0x18(r1)

	.loc_0x1F8:
	  addic.    r0, r1, 0x1C
	  beq-      .loc_0x208
	  sub       r0, r30, r3
	  stw       r0, 0x1C(r1)

	.loc_0x208:
	  addic.    r0, r1, 0x10
	  beq-      .loc_0x218
	  lwz       r0, 0x14(r8)
	  stw       r0, 0x10(r1)

	.loc_0x218:
	  li        r29, 0x1
	  b         .loc_0x23C

	.loc_0x220:
	  addi      r7, r7, 0x8
	  addi      r4, r4, 0x1
	  bdnz+     .loc_0x1B4

	.loc_0x22C:
	  lwz       r8, 0x4(r8)

	.loc_0x230:
	  cmplwi    r8, 0
	  bne+      .loc_0x19C
	  li        r29, 0

	.loc_0x23C:
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x2E4
	  lwz       r4, 0x10(r1)
	  addi      r6, r1, 0x28
	  mr        r3, r4
	  b         .loc_0x268

	.loc_0x258:
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x264
	  mr        r4, r3

	.loc_0x264:
	  addi      r3, r3, 0x1

	.loc_0x268:
	  lbz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x258
	  lbz       r0, 0x0(r4)
	  cmpwi     r0, 0x5C
	  bne-      .loc_0x284
	  addi      r4, r4, 0x1

	.loc_0x284:
	  li        r3, 0
	  b         .loc_0x2A8

	.loc_0x28C:
	  cmpwi     r0, 0x2E
	  beq-      .loc_0x2BC
	  lbz       r0, 0x0(r4)
	  addi      r3, r3, 0x1
	  addi      r4, r4, 0x1
	  stb       r0, 0x0(r6)
	  addi      r6, r6, 0x1

	.loc_0x2A8:
	  lbz       r0, 0x0(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x2BC
	  cmpwi     r3, 0x20
	  blt+      .loc_0x28C

	.loc_0x2BC:
	  li        r0, 0
	  lwz       r3, -0x775C(r13)
	  stb       r0, 0x0(r6)
	  addi      r4, r31, 0x3A4
	  lwz       r7, 0x1C(r1)
	  addi      r6, r1, 0x28
	  lwz       r8, 0x18(r1)
	  crclr     6, 0x6
	  bl        -0x3160
	  li        r6, 0

	.loc_0x2E4:
	  lis       r3, 0x8050
	  lwz       r0, 0x6E74(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x368
	  rlwinm    r0,r29,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x32C
	  stw       r6, 0x8(r1)
	  addi      r3, r1, 0x28
	  lwz       r4, 0x1C(r1)
	  addi      r6, r1, 0x20
	  lwz       r5, 0x18(r1)
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0xCFC
	  b         .loc_0x354

	.loc_0x32C:
	  stw       r6, 0x8(r1)
	  mr        r4, r30
	  addi      r6, r1, 0x20
	  addi      r7, r1, 0x24
	  addi      r8, r1, 0x4C
	  li        r3, 0
	  li        r5, -0x1
	  li        r9, 0x100
	  li        r10, 0x1
	  bl        0xCD0

	.loc_0x354:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x368
	  li        r0, 0x1
	  b         .loc_0x36C

	.loc_0x368:
	  li        r0, 0

	.loc_0x36C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x380
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x3F8
	  bl        -0x3174

	.loc_0x380:
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x2AA8

	.loc_0x38C:
	  lwz       r0, 0x164(r1)
	  lwz       r31, 0x15C(r1)
	  lwz       r30, 0x158(r1)
	  lwz       r29, 0x154(r1)
	  lwz       r28, 0x150(r1)
	  mtlr      r0
	  addi      r1, r1, 0x160
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JUTException::isEnablePad() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002BBD0
 * Size:	000570
 */
void JUTException::readPad(unsigned long*, unsigned long*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x3A0(r1)
	  mflr      r0
	  stw       r0, 0x3A4(r1)
	  stmw      r22, 0x378(r1)
	  mr        r29, r3
	  mr        r26, r4
	  mr        r25, r5
	  li        r22, 0
	  bl        0xC6FA0
	  lis       r5, 0x1062
	  mr        r28, r4
	  mr        r27, r3
	  lis       r23, 0x8000
	  addi      r24, r5, 0x4DD3
	  li        r31, 0x32
	  li        r30, 0

	.loc_0x40:
	  bl        0xC6F80
	  lwz       r0, 0xF8(r23)
	  subc      r4, r4, r28
	  subfe     r3, r27, r3
	  li        r5, 0
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r24, r0
	  rlwinm    r6,r0,26,6,31
	  bl        0x96194
	  xoris     r5, r3, 0x8000
	  xoris     r3, r30, 0x8000
	  subc      r0, r4, r31
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  bne+      .loc_0x40
	  lwz       r3, 0x84(r29)
	  addis     r0, r3, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x434
	  addi      r3, r1, 0x2C8
	  li        r4, 0
	  bl        0x17F0
	  addi      r3, r1, 0x218
	  li        r4, 0x1
	  bl        0x17E4
	  addi      r3, r1, 0x168
	  li        r4, 0x2
	  bl        0x17D8
	  addi      r3, r1, 0xB8
	  li        r4, 0x3
	  bl        0x17CC
	  bl        0x19D0
	  lha       r0, 0x344(r1)
	  li        r3, 0
	  cmpwi     r0, -0x1
	  beq-      .loc_0xE4
	  lbz       r0, 0x360(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0xE4
	  li        r3, 0x1

	.loc_0xE4:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x11C
	  lis       r3, 0x804A
	  li        r5, 0
	  addi      r4, r3, 0x3C8
	  lwz       r3, 0x0(r4)
	  lwz       r4, 0x4(r4)
	  xor       r0, r3, r5
	  xor       r5, r4, r5
	  or.       r0, r5, r0
	  beq-      .loc_0x114
	  b         .loc_0x124

	.loc_0x114:
	  bl        0xC6EAC
	  b         .loc_0x124

	.loc_0x11C:
	  li        r4, 0
	  mr        r3, r4

	.loc_0x124:
	  lha       r0, 0x294(r1)
	  lis       r5, 0x804A
	  addi      r6, r5, 0x3C8
	  li        r5, 0
	  cmpwi     r0, -0x1
	  stw       r4, 0x4(r6)
	  stw       r3, 0x0(r6)
	  beq-      .loc_0x154
	  lbz       r0, 0x2B0(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x154
	  li        r5, 0x1

	.loc_0x154:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x18C
	  lis       r3, 0x804A
	  li        r5, 0
	  addi      r4, r3, 0x3C8
	  lwz       r3, 0x8(r4)
	  lwz       r4, 0xC(r4)
	  xor       r0, r3, r5
	  xor       r5, r4, r5
	  or.       r0, r5, r0
	  beq-      .loc_0x184
	  b         .loc_0x194

	.loc_0x184:
	  bl        0xC6E3C
	  b         .loc_0x194

	.loc_0x18C:
	  li        r4, 0
	  mr        r3, r4

	.loc_0x194:
	  lha       r0, 0x1E4(r1)
	  lis       r5, 0x804A
	  addi      r29, r5, 0x3C8
	  li        r5, 0
	  cmpwi     r0, -0x1
	  stw       r4, 0xC(r29)
	  stw       r3, 0x8(r29)
	  beq-      .loc_0x1C4
	  lbz       r0, 0x200(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x1C4
	  li        r5, 0x1

	.loc_0x1C4:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x1FC
	  lis       r3, 0x804A
	  li        r5, 0
	  addi      r4, r3, 0x3C8
	  lwz       r3, 0x10(r4)
	  lwz       r4, 0x14(r4)
	  xor       r0, r3, r5
	  xor       r5, r4, r5
	  or.       r0, r5, r0
	  beq-      .loc_0x1F4
	  b         .loc_0x204

	.loc_0x1F4:
	  bl        0xC6DCC
	  b         .loc_0x204

	.loc_0x1FC:
	  li        r4, 0
	  mr        r3, r4

	.loc_0x204:
	  lha       r0, 0x134(r1)
	  lis       r5, 0x804A
	  addi      r30, r5, 0x3C8
	  li        r5, 0
	  cmpwi     r0, -0x1
	  stw       r4, 0x14(r30)
	  stw       r3, 0x10(r30)
	  beq-      .loc_0x234
	  lbz       r0, 0x150(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x234
	  li        r5, 0x1

	.loc_0x234:
	  rlwinm.   r0,r5,0,24,31
	  beq-      .loc_0x26C
	  lis       r3, 0x804A
	  li        r5, 0
	  addi      r4, r3, 0x3C8
	  lwz       r3, 0x18(r4)
	  lwz       r4, 0x1C(r4)
	  xor       r0, r3, r5
	  xor       r5, r4, r5
	  or.       r0, r5, r0
	  beq-      .loc_0x264
	  b         .loc_0x274

	.loc_0x264:
	  bl        0xC6D5C
	  b         .loc_0x274

	.loc_0x26C:
	  li        r4, 0
	  mr        r3, r4

	.loc_0x274:
	  lis       r5, 0x804A
	  li        r27, 0
	  addi      r31, r5, 0x3C8
	  lwz       r0, 0x0(r31)
	  lwz       r5, 0x4(r31)
	  stw       r4, 0x1C(r31)
	  xor       r0, r0, r27
	  xor       r4, r5, r27
	  or.       r0, r4, r0
	  stw       r3, 0x18(r31)
	  beq-      .loc_0x2C0
	  bl        0xC6D20
	  lis       r5, 0x804A
	  addi      r6, r5, 0x3C8
	  lwz       r5, 0x4(r6)
	  lwz       r0, 0x0(r6)
	  subc      r27, r4, r5
	  subfe     r24, r0, r3
	  b         .loc_0x2C4

	.loc_0x2C0:
	  mr        r24, r27

	.loc_0x2C4:
	  lwz       r0, 0x8(r29)
	  li        r28, 0
	  lwz       r3, 0xC(r29)
	  xor       r0, r0, r28
	  xor       r3, r3, r28
	  or.       r0, r3, r0
	  beq-      .loc_0x2F8
	  bl        0xC6CE0
	  lwz       r5, 0xC(r29)
	  lwz       r0, 0x8(r29)
	  subc      r28, r4, r5
	  subfe     r29, r0, r3
	  b         .loc_0x2FC

	.loc_0x2F8:
	  mr        r29, r28

	.loc_0x2FC:
	  lwz       r0, 0x10(r30)
	  li        r23, 0
	  lwz       r3, 0x14(r30)
	  xor       r0, r0, r23
	  xor       r3, r3, r23
	  or.       r0, r3, r0
	  beq-      .loc_0x330
	  bl        0xC6CA8
	  lwz       r5, 0x14(r30)
	  lwz       r0, 0x10(r30)
	  subc      r23, r4, r5
	  subfe     r22, r0, r3
	  b         .loc_0x334

	.loc_0x330:
	  mr        r22, r23

	.loc_0x334:
	  lwz       r0, 0x18(r31)
	  li        r30, 0
	  lwz       r3, 0x1C(r31)
	  xor       r0, r0, r30
	  xor       r3, r3, r30
	  or.       r0, r3, r0
	  beq-      .loc_0x368
	  bl        0xC6C70
	  lwz       r5, 0x1C(r31)
	  lwz       r0, 0x18(r31)
	  subc      r30, r4, r5
	  subfe     r31, r0, r3
	  b         .loc_0x36C

	.loc_0x368:
	  mr        r31, r30

	.loc_0x36C:
	  mr        r6, r27
	  mr        r5, r24
	  addi      r3, r1, 0x2C8
	  bl        0x1A88
	  mr        r6, r28
	  mr        r5, r29
	  addi      r3, r1, 0x218
	  bl        0x1A78
	  mr        r6, r23
	  mr        r5, r22
	  addi      r3, r1, 0x168
	  bl        0x1A68
	  mr        r6, r30
	  mr        r5, r31
	  addi      r3, r1, 0xB8
	  bl        0x1A58
	  cmplwi    r26, 0
	  beq-      .loc_0x3D4
	  lwz       r3, 0x2E4(r1)
	  lwz       r0, 0x234(r1)
	  lwz       r4, 0x184(r1)
	  or        r0, r3, r0
	  lwz       r3, 0xD4(r1)
	  or        r0, r4, r0
	  or        r0, r3, r0
	  stw       r0, 0x0(r26)

	.loc_0x3D4:
	  cmplwi    r25, 0
	  beq-      .loc_0x3FC
	  lwz       r3, 0x2E0(r1)
	  lwz       r0, 0x230(r1)
	  lwz       r4, 0x180(r1)
	  or        r0, r3, r0
	  lwz       r3, 0xD0(r1)
	  or        r0, r4, r0
	  or        r0, r3, r0
	  stw       r0, 0x0(r25)

	.loc_0x3FC:
	  addi      r3, r1, 0xB8
	  li        r22, 0x1
	  li        r4, -0x1
	  bl        0x1554
	  addi      r3, r1, 0x168
	  li        r4, -0x1
	  bl        0x1548
	  addi      r3, r1, 0x218
	  li        r4, -0x1
	  bl        0x153C
	  addi      r3, r1, 0x2C8
	  li        r4, -0x1
	  bl        0x1530
	  b         .loc_0x558

	.loc_0x434:
	  lwz       r4, 0x88(r29)
	  cmpwi     r4, 0
	  blt-      .loc_0x520
	  addi      r3, r1, 0x8
	  bl        0x1444
	  lha       r0, 0x84(r1)
	  lis       r3, 0x804A
	  addi      r23, r3, 0x3C8
	  li        r3, 0
	  cmpwi     r0, -0x1
	  beq-      .loc_0x470
	  lbz       r0, 0xA0(r1)
	  cmplwi    r0, 0
	  beq-      .loc_0x470
	  li        r3, 0x1

	.loc_0x470:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4A0
	  lwz       r3, 0x0(r23)
	  li        r5, 0
	  lwz       r4, 0x4(r23)
	  xor       r0, r3, r5
	  xor       r5, r4, r5
	  or.       r0, r5, r0
	  beq-      .loc_0x498
	  b         .loc_0x4A8

	.loc_0x498:
	  bl        0xC6B28
	  b         .loc_0x4A8

	.loc_0x4A0:
	  li        r4, 0
	  mr        r3, r4

	.loc_0x4A8:
	  li        r6, 0
	  stw       r4, 0x4(r23)
	  xor       r4, r4, r6
	  xor       r0, r3, r6
	  stw       r3, 0x0(r23)
	  or.       r0, r4, r0
	  beq-      .loc_0x4DC
	  bl        0xC6AFC
	  lwz       r5, 0x4(r23)
	  lwz       r0, 0x0(r23)
	  subc      r6, r4, r5
	  subfe     r5, r0, r3
	  b         .loc_0x4E0

	.loc_0x4DC:
	  mr        r5, r6

	.loc_0x4E0:
	  addi      r3, r1, 0x8
	  bl        0x191C
	  bl        0x15A8
	  cmplwi    r26, 0
	  beq-      .loc_0x4FC
	  lwz       r0, 0x24(r1)
	  stw       r0, 0x0(r26)

	.loc_0x4FC:
	  cmplwi    r25, 0
	  beq-      .loc_0x50C
	  lwz       r0, 0x20(r1)
	  stw       r0, 0x0(r25)

	.loc_0x50C:
	  addi      r3, r1, 0x8
	  li        r22, 0x1
	  li        r4, -0x1
	  bl        0x1444
	  b         .loc_0x558

	.loc_0x520:
	  cmplwi    r3, 0
	  beq-      .loc_0x558
	  bl        0x1568
	  cmplwi    r26, 0
	  beq-      .loc_0x540
	  lwz       r3, 0x84(r29)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x0(r26)

	.loc_0x540:
	  cmplwi    r25, 0
	  beq-      .loc_0x554
	  lwz       r3, 0x84(r29)
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x0(r25)

	.loc_0x554:
	  li        r22, 0x1

	.loc_0x558:
	  mr        r3, r22
	  lmw       r22, 0x378(r1)
	  lwz       r0, 0x3A4(r1)
	  mtlr      r0
	  addi      r1, r1, 0x3A0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002C140
 * Size:	0004E4
 */
void JUTException::printContext(unsigned short, OSContext*, unsigned long,
                                unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r22, 0x18(r1)
	  mr        r24, r3
	  lis       r3, 0x8047
	  mr        r25, r4
	  mr        r26, r5
	  mr        r27, r6
	  mr        r28, r7
	  addi      r31, r3, 0x3C18
	  lwz       r8, 0x84(r24)
	  addis     r0, r8, 0x1
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x44
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x44:
	  lwz       r0, 0x88(r24)
	  cmpwi     r0, 0
	  blt-      .loc_0x58
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x58:
	  cmplwi    r8, 0
	  beq-      .loc_0x68
	  li        r0, 0x1
	  b         .loc_0x6C

	.loc_0x68:
	  li        r0, 0

	.loc_0x6C:
	  lwz       r3, -0x7770(r13)
	  rlwinm    r0,r0,0,24,31
	  cntlzw    r0, r0
	  lwz       r3, 0x80(r3)
	  rlwinm    r30,r0,27,5,31
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4D0
	  li        r3, 0
	  bl        0xA488C
	  li        r3, 0
	  bl        0xA48C8
	  li        r3, 0
	  bl        0xA5EE8
	  bl        0xA5D40
	  lwz       r3, -0x775C(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x4D0
	  rlwinm    r0,r25,0,16,31
	  cmplwi    r0, 0x11
	  bge-      .loc_0xD4
	  lwz       r5, 0x7C(r24)
	  addi      r4, r31, 0x488
	  crclr     6, 0x6
	  bl        -0x386C
	  b         .loc_0xE4

	.loc_0xD4:
	  lwz       r5, 0x7C(r24)
	  addi      r4, r31, 0x4C0
	  crclr     6, 0x6
	  bl        -0x3880

	.loc_0xE4:
	  li        r29, 0
	  rlwinm    r23,r30,0,24,31

	.loc_0xEC:
	  mr        r3, r24
	  mr        r4, r25
	  mr        r5, r26
	  mr        r6, r27
	  mr        r7, r28
	  bl        -0x11AC
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3148
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x154
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x1
	  bl        -0xA58
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3184
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x154:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,29,29
	  beq-      .loc_0x190
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x5
	  bl        -0xA94
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x31C0
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x190:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,30,30
	  beq-      .loc_0x1CC
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x4
	  bl        -0xAD0
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x31FC
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x1CC:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,28,28
	  beq-      .loc_0x208
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x2
	  bl        -0xB0C
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3238
	  lwz       r3, 0x8C(r24)
	  bl        .loc_0x4E4

	.loc_0x208:
	  lwz       r0, 0x9C(r24)
	  rlwinm.   r0,r0,0,27,27
	  beq-      .loc_0x244
	  mr        r3, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  li        r4, 0x3
	  bl        -0xB48
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3274
	  lwz       r3, 0x90(r24)
	  bl        .loc_0x4E4

	.loc_0x244:
	  lwz       r3, -0x775C(r13)
	  addi      r4, r31, 0x4F0
	  bl        -0x3960
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3294
	  cmpwi     r29, 0
	  bne-      .loc_0x2A0
	  lwz       r0, -0x7768(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x2A0
	  bl        0xC289C
	  lwz       r12, -0x7768(r13)
	  mr        r22, r3
	  mr        r3, r25
	  mr        r4, r26
	  mr        r5, r27
	  mr        r6, r28
	  li        r29, 0x1
	  mtctr     r12
	  bctrl
	  mr        r3, r22
	  bl        0xC2884

	.loc_0x2A0:
	  lwz       r0, 0x98(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C8
	  cmplwi    r23, 0
	  beq-      .loc_0x2C8
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x58(r3)
	  rlwinm    r0,r0,0,31,31
	  stw       r0, 0x58(r3)
	  b         .loc_0xEC

	.loc_0x2C8:
	  rlwinm.   r0,r30,0,24,31
	  bne-      .loc_0x410
	  bl        0xC283C
	  li        r22, 0
	  li        r23, 0

	.loc_0x2DC:
	  mr        r3, r24
	  addi      r4, r1, 0x8
	  addi      r5, r1, 0xC
	  bl        -0x858
	  lwz       r0, 0x8(r1)
	  li        r3, 0
	  cmplwi    r0, 0x100
	  bne-      .loc_0x30C
	  lwz       r3, -0x775C(r13)
	  lwz       r4, 0x24(r3)
	  bl        -0x36D0
	  li        r3, 0x1

	.loc_0x30C:
	  lwz       r0, 0x8(r1)
	  cmplwi    r0, 0x200
	  bne-      .loc_0x32C
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x24(r3)
	  neg       r4, r0
	  bl        -0x36F0
	  li        r3, 0x1

	.loc_0x32C:
	  lwz       r0, 0xC(r1)
	  cmplwi    r0, 0x8
	  bne-      .loc_0x380
	  cmpwi     r22, 0x3
	  lwz       r3, -0x775C(r13)
	  bge-      .loc_0x34C
	  li        r4, -0x1
	  b         .loc_0x36C

	.loc_0x34C:
	  cmpwi     r22, 0x5
	  bge-      .loc_0x35C
	  li        r4, -0x2
	  b         .loc_0x36C

	.loc_0x35C:
	  cmpwi     r22, 0x7
	  li        r4, -0x8
	  bge-      .loc_0x36C
	  li        r4, -0x4

	.loc_0x36C:
	  bl        -0x3738
	  li        r3, 0x1
	  li        r23, 0
	  addi      r22, r22, 0x1
	  b         .loc_0x3D8

	.loc_0x380:
	  cmplwi    r0, 0x4
	  bne-      .loc_0x3D0
	  cmpwi     r23, 0x3
	  lwz       r3, -0x775C(r13)
	  bge-      .loc_0x39C
	  li        r4, 0x1
	  b         .loc_0x3BC

	.loc_0x39C:
	  cmpwi     r23, 0x5
	  bge-      .loc_0x3AC
	  li        r4, 0x2
	  b         .loc_0x3BC

	.loc_0x3AC:
	  cmpwi     r23, 0x7
	  li        r4, 0x8
	  bge-      .loc_0x3BC
	  li        r4, 0x4

	.loc_0x3BC:
	  bl        -0x3788
	  li        r3, 0x1
	  li        r22, 0
	  addi      r23, r23, 0x1
	  b         .loc_0x3D8

	.loc_0x3D0:
	  li        r22, 0
	  li        r23, 0

	.loc_0x3D8:
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x404
	  bl        0xA5C20
	  mr        r25, r3

	.loc_0x3EC:
	  bl        0xA5C18
	  cmplw     r25, r3
	  beq+      .loc_0x3EC
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x343C

	.loc_0x404:
	  li        r3, 0x1E
	  bl        .loc_0x4E4
	  b         .loc_0x2DC

	.loc_0x410:
	  lwz       r3, -0x775C(r13)
	  lwz       r0, 0x24(r3)
	  neg       r4, r0
	  bl        -0x37E8
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3464
	  li        r3, 0x7D0
	  bl        .loc_0x4E4

	.loc_0x434:
	  lwz       r3, -0x775C(r13)
	  lwz       r22, 0x48(r3)
	  b         .loc_0x490

	.loc_0x440:
	  lwz       r3, -0x775C(r13)
	  li        r4, 0x1
	  bl        -0x3814
	  lwz       r3, -0x7790(r13)
	  li        r4, 0x1
	  bl        -0x3490
	  lwz       r25, -0x775C(r13)
	  lwz       r23, 0x48(r25)
	  mr        r3, r25
	  bl        -0x3730
	  mr        r24, r3
	  mr        r3, r25
	  bl        -0x3760
	  sub       r3, r3, r23
	  addi      r0, r3, 0x1
	  cmplw     r0, r24
	  ble-      .loc_0x498
	  li        r3, 0x14
	  bl        .loc_0x4E4
	  subi      r22, r22, 0x1

	.loc_0x490:
	  cmplwi    r22, 0
	  bne+      .loc_0x440

	.loc_0x498:
	  li        r3, 0xBB8
	  bl        .loc_0x4E4
	  lwz       r25, -0x775C(r13)
	  lwz       r23, 0x48(r25)
	  mr        r3, r25
	  bl        -0x3778
	  mr        r24, r3
	  mr        r3, r25
	  bl        -0x37A8
	  sub       r3, r3, r23
	  addi      r0, r3, 0x1
	  cmplw     r0, r24
	  ble+      .loc_0x410
	  b         .loc_0x434

	.loc_0x4D0:
	  lmw       r22, 0x18(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr

	.loc_0x4E4:
	*/
}

/*
 * --INFO--
 * Address:	8002C624
 * Size:	000088
 */
void JUTException::waitTime(long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr.       r26, r3
	  beq-      .loc_0x74
	  bl        0xC6554
	  lis       r5, 0x1062
	  mr        r28, r4
	  mr        r29, r3
	  srawi     r27, r26, 0x1F
	  addi      r30, r5, 0x4DD3
	  lis       r31, 0x8000

	.loc_0x34:
	  bl        0xC6538
	  lwz       r0, 0xF8(r31)
	  subc      r4, r4, r28
	  subfe     r3, r29, r3
	  li        r5, 0
	  rlwinm    r0,r0,30,2,31
	  mulhwu    r0, r30, r0
	  rlwinm    r6,r0,26,6,31
	  bl        0x9574C
	  xoris     r5, r3, 0x8000
	  xoris     r3, r27, 0x8000
	  subc      r0, r4, r26
	  subfe     r3, r3, r5
	  subfe     r3, r5, r5
	  neg.      r3, r3
	  bne+      .loc_0x34

	.loc_0x74:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002C6AC
 * Size:	0000F4
 */
void JUTException::createFB()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804B
	  stw       r0, 0x24(r1)
	  subi      r0, r4, 0x7BC4
	  stw       r31, 0x1C(r1)
	  mr        r31, r0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        0xBFD4C
	  lis       r4, 0x804B
	  subi      r5, r4, 0x7BC4
	  lhz       r4, 0x4(r5)
	  lhz       r0, 0x8(r5)
	  addi      r4, r4, 0xF
	  rlwinm    r4,r4,0,16,27
	  mullw     r0, r4, r0
	  rlwinm    r7,r0,1,0,30
	  sub       r0, r3, r7
	  rlwinm    r30,r0,0,0,26
	  subi      r0, r30, 0x14
	  rlwinm.   r29,r0,0,0,26
	  beq-      .loc_0x78
	  mr        r3, r29
	  mr        r4, r31
	  mr        r6, r30
	  li        r5, 0x1
	  bl        0x620

	.loc_0x78:
	  lwz       r3, 0x80(r28)
	  mr        r4, r30
	  lhz       r5, 0x4(r31)
	  lhz       r6, 0x6(r31)
	  bl        -0x27A8
	  mr        r3, r31
	  bl        0xA4FC0
	  mr        r3, r30
	  bl        0xA5910
	  li        r3, 0
	  bl        0xA597C
	  bl        0xA57D4
	  bl        0xA57D0
	  li        r30, 0

	.loc_0xB0:
	  bl        0xA59E8
	  mr        r31, r3

	.loc_0xB8:
	  bl        0xA59E0
	  cmplw     r31, r3
	  beq+      .loc_0xB8
	  addi      r30, r30, 0x1
	  cmpwi     r30, 0x3
	  blt+      .loc_0xB0
	  stw       r29, 0x7C(r28)
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
 * Address:	........
 * Size:	000028
 */
void JUTException::getFpscr()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JUTException::setFpscr(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002C7A0
 * Size:	000010
 */
void JUTException::setPreUserCallback(void (*)(unsigned short, OSContext*,
                                               unsigned long, unsigned long))
{
	/*
	.loc_0x0:
	  lwz       r0, -0x776C(r13)
	  stw       r3, -0x776C(r13)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void JUTException::setPostUserCallback(void (*)(unsigned short, OSContext*,
                                                unsigned long, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002C7B0
 * Size:	000094
 */
void JUTException::appendMapFile(const char*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x7C
	  lis       r3, 0x8050
	  lwz       r31, 0x6E74(r3)
	  b         .loc_0x44

	.loc_0x28:
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  lwz       r4, 0x0(r4)
	  bl        0x9DEDC
	  cmpwi     r3, 0
	  beq-      .loc_0x7C
	  lwz       r31, 0xC(r31)

	.loc_0x44:
	  cmplwi    r31, 0
	  bne+      .loc_0x28
	  li        r3, 0x14
	  bl        -0x895C
	  mr.       r31, r3
	  beq-      .loc_0x6C
	  mr        r4, r31
	  addi      r3, r31, 0x4
	  bl        -0x605C
	  stw       r30, 0x0(r31)

	.loc_0x6C:
	  lis       r3, 0x8050
	  addi      r4, r31, 0x4
	  addi      r3, r3, 0x6E74
	  bl        -0x5F44

	.loc_0x7C:
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
 * Address:	........
 * Size:	000054
 */
void JSULink<JUTException::JUTExMapFile>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002C844
 * Size:	0000E0
 */
void JUTException::queryMapAddress(char*, unsigned long, long, unsigned long*,
                                   unsigned long*, char*, unsigned long, bool,
                                   bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  cmplwi    r3, 0
	  stw       r0, 0x84(r1)
	  stmw      r24, 0x60(r1)
	  mr        r24, r4
	  lbz       r31, 0x8B(r1)
	  mr        r25, r5
	  mr        r26, r6
	  mr        r27, r7
	  mr        r28, r8
	  mr        r29, r9
	  mr        r30, r10
	  beq-      .loc_0x8C
	  mr        r4, r3
	  addi      r3, r1, 0x10
	  bl        0x9DFD4
	  addi      r3, r1, 0x10
	  subi      r4, r2, 0x7D18
	  bl        0x9DF58
	  stw       r31, 0x8(r1)
	  mr        r4, r24
	  mr        r5, r25
	  mr        r6, r26
	  mr        r7, r27
	  mr        r8, r28
	  mr        r9, r29
	  mr        r10, r30
	  addi      r3, r1, 0x10
	  bl        .loc_0xE0
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xC8
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0x8C:
	  lis       r3, 0x8050
	  addi      r3, r3, 0x6E74
	  lwz       r3, 0x0(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  stw       r31, 0x8(r1)
	  li        r5, -0x1
	  lwz       r3, 0x0(r3)
	  lwz       r3, 0x0(r3)
	  bl        .loc_0xE0
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xC8
	  li        r3, 0x1
	  b         .loc_0xCC

	.loc_0xC8:
	  li        r3, 0

	.loc_0xCC:
	  lmw       r24, 0x60(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr

	.loc_0xE0:
	*/
}

/*
 * --INFO--
 * Address:	8002C924
 * Size:	00033C
 */
void JUTException::queryMapAddress_single(char*, unsigned long, long,
                                          unsigned long*, unsigned long*, char*,
                                          unsigned long, bool, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xAD0(r1)
	  mflr      r0
	  stw       r0, 0xAD4(r1)
	  stmw      r16, 0xA90(r1)
	  mr.       r16, r3
	  lbz       r19, 0xADB(r1)
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  mr        r18, r9
	  mr        r31, r10
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x328

	.loc_0x40:
	  addi      r3, r1, 0x218
	  bl        -0x313C
	  mr        r4, r16
	  addi      r3, r1, 0x218
	  li        r22, 0
	  bl        -0x30E4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  addi      r3, r1, 0x218
	  li        r4, -0x1
	  bl        -0x313C
	  li        r3, 0
	  b         .loc_0x328

	.loc_0x74:
	  addi      r25, r1, 0x19
	  addi      r24, r1, 0x2B
	  addi      r23, r1, 0x23
	  addi      r16, r1, 0x36
	  li        r17, 0

	.loc_0x88:
	  li        r20, 0
	  addi      r22, r22, 0x1

	.loc_0x90:
	  addi      r3, r1, 0x218
	  addi      r4, r1, 0x18
	  li        r5, 0x200
	  bl        -0x3024
	  cmpwi     r3, 0
	  blt-      .loc_0x140
	  lbz       r0, 0x18(r1)
	  cmpwi     r0, 0x2E
	  bne+      .loc_0x90
	  mr        r3, r25
	  addi      r4, r1, 0x8
	  li        r6, 0
	  b         .loc_0xE8

	.loc_0xC4:
	  lbz       r0, 0x0(r3)
	  stb       r5, 0x0(r4)
	  cmpwi     r0, 0x20
	  beq-      .loc_0xF4
	  cmpwi     r6, 0xF
	  beq-      .loc_0xF4
	  addi      r4, r4, 0x1
	  addi      r6, r6, 0x1
	  addi      r3, r3, 0x1

	.loc_0xE8:
	  lbz       r5, 0x0(r3)
	  extsb.    r0, r5
	  bne+      .loc_0xC4

	.loc_0xF4:
	  lbz       r0, 0x0(r3)
	  addi      r4, r1, 0x8
	  li        r5, 0
	  extsb.    r0, r0
	  stbx      r5, r4, r6
	  beq-      .loc_0x140
	  lbz       r0, 0x1(r3)
	  cmpwi     r0, 0x73
	  bne+      .loc_0x90
	  lbz       r0, 0x2(r3)
	  cmpwi     r0, 0x65
	  bne+      .loc_0x90
	  lbz       r0, 0x3(r3)
	  cmpwi     r0, 0x63
	  bne+      .loc_0x90
	  lbz       r0, 0x4(r3)
	  cmpwi     r0, 0x74
	  bne+      .loc_0x90
	  li        r20, 0x1

	.loc_0x140:
	  rlwinm.   r0,r20,0,24,31
	  beq-      .loc_0x300
	  cmpwi     r27, 0
	  blt-      .loc_0x158
	  cmpw      r27, r22
	  bne+      .loc_0x88

	.loc_0x158:
	  addi      r3, r1, 0x218
	  addi      r4, r1, 0x18
	  li        r5, 0x200
	  bl        -0x30EC
	  cmpwi     r3, 0x4
	  ble-      .loc_0x2D4
	  cmpwi     r3, 0x1C
	  blt+      .loc_0x158
	  lbz       r0, 0x34(r1)
	  cmpwi     r0, 0x34
	  bne+      .loc_0x158
	  mr        r3, r24
	  li        r4, 0
	  li        r5, 0x10
	  bl        0x9EE84
	  lbz       r0, 0x2A(r1)
	  li        r4, 0
	  li        r5, 0x10
	  extsb     r6, r0
	  subi      r0, r6, 0x30
	  rlwinm    r0,r0,28,0,3
	  or        r21, r0, r3
	  mr        r3, r23
	  bl        0x9EE60
	  cmplw     r21, r26
	  mr        r20, r3
	  bgt+      .loc_0x158
	  add       r0, r21, r20
	  cmplw     r26, r0
	  bge+      .loc_0x158
	  cmplwi    r28, 0
	  beq-      .loc_0x1DC
	  stw       r21, 0x0(r28)

	.loc_0x1DC:
	  cmplwi    r29, 0
	  beq-      .loc_0x1E8
	  stw       r20, 0x0(r29)

	.loc_0x1E8:
	  cmplwi    r30, 0
	  beq-      .loc_0x2D0
	  mr        r5, r16
	  mr        r6, r30
	  subi      r0, r18, 0x1
	  li        r7, 0
	  li        r3, 0x20
	  b         .loc_0x260

	.loc_0x208:
	  lbz       r4, 0x0(r5)
	  cmplwi    r4, 0x20
	  bge-      .loc_0x21C
	  cmplwi    r4, 0x9
	  bne-      .loc_0x268

	.loc_0x21C:
	  cmpwi     r4, 0x20
	  beq-      .loc_0x22C
	  cmplwi    r4, 0x9
	  bne-      .loc_0x250

	.loc_0x22C:
	  cmplwi    r7, 0
	  beq-      .loc_0x250
	  lbz       r4, -0x1(r6)
	  cmpwi     r4, 0x20
	  beq-      .loc_0x25C
	  stb       r3, 0x0(r6)
	  addi      r6, r6, 0x1
	  addi      r7, r7, 0x1
	  b         .loc_0x25C

	.loc_0x250:
	  stb       r4, 0x0(r6)
	  addi      r6, r6, 0x1
	  addi      r7, r7, 0x1

	.loc_0x25C:
	  addi      r5, r5, 0x1

	.loc_0x260:
	  cmplw     r7, r0
	  blt+      .loc_0x208

	.loc_0x268:
	  cmplwi    r7, 0
	  beq-      .loc_0x280
	  lbz       r0, -0x1(r6)
	  cmpwi     r0, 0x20
	  bne-      .loc_0x280
	  subi      r6, r6, 0x1

	.loc_0x280:
	  li        r3, 0
	  rlwinm.   r0,r31,0,24,31
	  stb       r3, 0x0(r6)
	  beq-      .loc_0x2D0
	  rlwinm.   r0,r19,0,24,31
	  beq-      .loc_0x2A4
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x4198

	.loc_0x2A4:
	  lis       r4, 0x8047
	  lwz       r3, -0x775C(r13)
	  addi      r4, r4, 0x412C
	  mr        r5, r26
	  mr        r7, r21
	  mr        r8, r20
	  mr        r9, r30
	  addi      r6, r1, 0x8
	  crclr     6, 0x6
	  bl        -0x424C
	  li        r19, 0

	.loc_0x2D0:
	  li        r17, 0x1

	.loc_0x2D4:
	  cmpwi     r27, 0
	  blt+      .loc_0x88
	  cmpw      r27, r22
	  bne+      .loc_0x88
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x300
	  rlwinm.   r0,r19,0,24,31
	  beq-      .loc_0x300
	  lwz       r3, -0x775C(r13)
	  subi      r4, r2, 0x7D30
	  bl        -0x41F4

	.loc_0x300:
	  addi      r3, r1, 0x218
	  bl        -0x32EC
	  rlwinm    r5,r17,0,24,31
	  addi      r3, r1, 0x218
	  neg       r0, r5
	  li        r4, -0x1
	  or        r0, r0, r5
	  rlwinm    r16,r0,1,31,31
	  bl        -0x33F4
	  mr        r3, r16

	.loc_0x328:
	  lmw       r16, 0xA90(r1)
	  lwz       r0, 0xAD4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xAD0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002CC60
 * Size:	0000E0
 */
void JUTException::createConsole(void*, unsigned long)
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
	  beq-      .loc_0xC8
	  cmplwi    r31, 0
	  bne-      .loc_0x2C
	  b         .loc_0xC8

	.loc_0x2C:
	  mr        r3, r31
	  li        r4, 0x32
	  bl        -0x4918
	  cmplwi    r3, 0
	  beq-      .loc_0xC8
	  stw       r30, -0x7764(r13)
	  mr        r4, r30
	  mr        r5, r31
	  li        r3, 0x32
	  stw       r31, -0x7760(r13)
	  bl        -0x4B50
	  mr        r4, r3
	  lwz       r3, -0x7790(r13)
	  stw       r4, -0x775C(r13)
	  bl        -0x3B44
	  lwz       r5, -0x775C(r13)
	  li        r4, 0xF
	  lfs       f1, -0x7D10(r2)
	  li        r3, 0x1A
	  lfs       f0, -0x7D0C(r2)
	  li        r0, 0x17
	  stfs      f1, 0x50(r5)
	  stfs      f0, 0x54(r5)
	  lwz       r5, -0x775C(r13)
	  stw       r4, 0x40(r5)
	  stw       r3, 0x44(r5)
	  lwz       r3, -0x775C(r13)
	  stw       r0, 0x48(r3)
	  lwz       r0, 0x48(r3)
	  lwz       r4, 0x24(r3)
	  cmplw     r0, r4
	  ble-      .loc_0xB0
	  stw       r4, 0x48(r3)

	.loc_0xB0:
	  lwz       r3, -0x775C(r13)
	  li        r4, 0x1
	  li        r0, 0x3
	  stb       r4, 0x68(r3)
	  lwz       r3, -0x775C(r13)
	  stw       r0, 0x58(r3)

	.loc_0xC8:
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
 * Address:	8002CD40
 * Size:	000020
 */
void JUTExternalFB::JUTExternalFB(_GXRenderModeObj*, _GXGamma, void*,
                                  unsigned long)
{
	/*
	.loc_0x0:
	  stw       r4, 0x0(r3)
	  li        r4, 0x1
	  li        r0, 0
	  stw       r7, 0x4(r3)
	  sth       r4, 0xC(r3)
	  sth       r5, 0xE(r3)
	  stb       r0, 0x10(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JUTException::enableFpuException()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void JUTException::disableFpuException()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8002CD60
 * Size:	000060
 */
void JUTException::~JUTException()
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
	  beq-      .loc_0x44
	  lis       r5, 0x804A
	  li        r4, 0
	  addi      r0, r5, 0x42C
	  stw       r0, 0x0(r30)
	  bl        -0x7558
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x8CEC

	.loc_0x44:
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
 * Address:	8002CDC0
 * Size:	000048
 */
void __sinit_JUTException_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8050
	  li        r4, 0
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E74
	  bl        -0x65A8
	  lis       r3, 0x8050
	  lis       r4, 0x8003
	  lis       r5, 0x804F
	  addi      r3, r3, 0x6E74
	  subi      r4, r4, 0x31F8
	  addi      r5, r5, 0x11C
	  bl        0x9490C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8002CE08
 * Size:	000054
 */
void JSUList<JUTException::JUTExMapFile>::~JSUList()
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
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        -0x65C4
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x8D88

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}