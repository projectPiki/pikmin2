

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80312EF8
 * Size:	00007C
 */
void og::newScreen::ObjSMenuItem::__ct( (char const *))
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
  bl        0x32FC
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x7930
  mr        r3, r30
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x10
  stw       r4, 0x18(r30)
  stw       r0, 0xA8(r30)
  stw       r0, 0xAC(r30)
  stw       r0, 0xB4(r30)
  stw       r0, 0xB8(r30)
  stw       r0, 0xB0(r30)
  stw       r0, 0xBC(r30)
  stw       r0, 0xC0(r30)
  stw       r0, 0xC4(r30)
  stw       r0, 0xC8(r30)
  stw       r31, 0x14(r30)
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
 * Address:	80312F74
 * Size:	0000C4
 */
void og::newScreen::ObjSMenuItem::__dt(void)
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
  beq-      .loc_0xA8
  lis       r4, 0x804E
  subi      r4, r4, 0x7930
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7650
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xFE5E0
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x2F5FC8
  mr        r3, r30
  li        r4, 0
  bl        0xFE580

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x2EEF64

.loc_0xA8:
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
 * Address:	80313038
 * Size:	000924
 */
void og::newScreen::ObjSMenuItem::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0xD4(r1)
  stmw      r14, 0x88(r1)
  mr        r31, r3
  subi      r23, r5, 0x1BC8
  stw       r4, 0x20(r1)
  bl        0x140F50
  lis       r4, 0x4F
  lis       r6, 0x4954
  lis       r5, 0x53
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x454D
  addi      r5, r5, 0x4D5F
  bl        -0x3BB4
  stw       r3, 0xA8(r31)
  lwz       r0, 0xA8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x84
  li        r3, 0xC4
  bl        -0x2EF1E8
  cmplwi    r3, 0
  beq-      .loc_0x64
  bl        -0xFDDA0

.loc_0x64:
  lis       r4, 0x4F
  lis       r6, 0x4954
  lis       r5, 0x53
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x454D
  addi      r5, r5, 0x4D5F
  bl        -0x3BF4
  stw       r3, 0xA8(r31)

.loc_0x84:
  li        r3, 0x148
  bl        -0x2EF21C
  cmplwi    r3, 0
  beq-      .loc_0x98
  bl        0x121CE0

.loc_0x98:
  stw       r3, 0xAC(r31)
  addi      r4, r23, 0x14
  lwz       r6, 0x20(r1)
  lis       r5, 0x104
  lwz       r3, 0xAC(r31)
  bl        -0x2D3AC0
  li        r3, 0x118
  bl        -0x2EF248
  mr.       r24, r3
  beq-      .loc_0xC8
  bl        -0x2D3C84
  mr        r24, r3

.loc_0xC8:
  lwz       r6, 0x20(r1)
  mr        r3, r24
  addi      r4, r23, 0x28
  lis       r5, 0x104
  bl        -0x2D3AEC
  lis       r9, 0x6666
  lis       r8, 0x656D
  lis       r7, 0x4E
  lis       r6, 0x6F6E
  lis       r5, 0x50
  lis       r4, 0x6D62
  lis       r3, 0x5069
  addi      r22, r9, 0x6667
  addi      r20, r8, 0x3030
  addi      r19, r7, 0x6974
  addi      r17, r6, 0x3030
  addi      r16, r5, 0x6963
  addi      r15, r4, 0x3030
  addi      r14, r3, 0x7465
  li        r27, 0

.loc_0x118:
  mulhw     r5, r22, r27
  lwz       r3, 0xAC(r31)
  srawi     r0, r5, 0x2
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  mulli     r0, r0, 0xA
  sub       r21, r27, r0
  srawi     r26, r21, 0x1F
  addc      r6, r21, r20
  adde      r7, r26, r19
  srawi     r0, r5, 0x2
  rlwinm    r4,r0,1,31,31
  add       r5, r0, r4
  mulhw     r0, r22, r5
  srawi     r0, r0, 0x2
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  mulli     r0, r0, 0xA
  sub       r0, r5, r0
  rlwinm    r18,r0,8,0,23
  srawi     r25, r18, 0x1F
  addc      r6, r6, r18
  adde      r5, r7, r25
  bl        -0x10300
  addc      r4, r21, r17
  mr        r5, r3
  adde      r0, r26, r16
  mr        r3, r24
  addc      r6, r4, r18
  mr        r28, r5
  adde      r5, r0, r25
  bl        -0x10320
  addc      r4, r21, r15
  mr        r5, r3
  adde      r0, r26, r14
  lwz       r3, 0xAC(r31)
  addc      r6, r4, r18
  mr        r18, r5
  adde      r5, r0, r25
  bl        -0x10340
  mr        r0, r3
  mr        r3, r18
  mr        r21, r0
  lbz       r4, 0xB7(r21)
  bl        -0x2DA544
  mr        r3, r28
  mr        r4, r18
  bl        -0x2DBB48
  mr        r3, r21
  bl        -0x2DAEF4
  mr        r4, r3
  mr        r3, r18
  bl        -0x2DB2E8
  addi      r27, r27, 0x1
  cmpwi     r27, 0xC
  blt+      .loc_0x118
  li        r3, 0x138
  bl        -0x2EF390
  cmplwi    r3, 0
  beq-      .loc_0x20C
  bl        0x121880

.loc_0x20C:
  stw       r3, 0xB0(r31)
  addi      r4, r23, 0x40
  lwz       r6, 0x20(r1)
  lis       r5, 0x104
  lwz       r3, 0xB0(r31)
  bl        -0x2D3C34
  lis       r5, 0x6179
  lis       r4, 0x4E73
  lwz       r3, 0xAC(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x7072
  bl        -0x103C4
  stw       r3, 0xBC(r31)
  lis       r5, 0x6179
  lis       r4, 0x4E73
  lwz       r3, 0xAC(r31)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x7072
  bl        -0x103E0
  stw       r3, 0xC0(r31)
  lis       r5, 0x6179
  lis       r4, 0x4E73
  lwz       r3, 0xB0(r31)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x7072
  bl        -0x103FC
  stw       r3, 0xC4(r31)
  lis       r5, 0x6179
  lis       r4, 0x4E73
  lwz       r3, 0xB0(r31)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x7072
  bl        -0x10418
  stw       r3, 0xC8(r31)
  lis       r3, 0x8051
  addi      r4, r3, 0x3C90
  lwz       r3, 0xBC(r31)
  lfs       f1, 0x8(r4)
  lwz       r12, 0x0(r3)
  lfs       f2, 0xC(r4)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lis       r4, 0x8051
  addi      r4, r4, 0x3C90
  lwz       r12, 0x0(r3)
  lfs       f1, 0x10(r4)
  lwz       r12, 0x10(r12)
  lfs       f2, 0x14(r4)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA8(r31)
  lbz       r4, 0x24(r3)
  cmplwi    r4, 0
  bne-      .loc_0x378
  lbz       r0, 0x25(r3)
  cmplwi    r0, 0
  bne-      .loc_0x378
  lis       r4, 0x7769
  lwz       r3, 0xAC(r31)
  addi      r6, r4, 0x6E30
  li        r5, 0x4E
  bl        -0x10494
  li        r0, 0
  lis       r4, 0x7769
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6E31
  li        r5, 0x4E
  lwz       r3, 0xAC(r31)
  bl        -0x104B0
  li        r0, 0
  lis       r5, 0x5F30
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E55
  addi      r6, r5, 0x3032
  lwz       r3, 0xAC(r31)
  addi      r5, r4, 0x4C4C
  bl        -0x104D0
  lwz       r12, 0x0(r3)
  lfs       f1, -0xB30(r2)
  lwz       r12, 0x14(r12)
  lfs       f2, -0xB2C(r2)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xC8(r31)
  stb       r0, 0xB0(r3)
  b         .loc_0x434

.loc_0x378:
  cmplwi    r4, 0
  bne-      .loc_0x3D8
  lis       r4, 0x7769
  lwz       r3, 0xAC(r31)
  addi      r6, r4, 0x6E30
  li        r5, 0x4E
  bl        -0x1051C
  li        r0, 0
  lis       r4, 0x7769
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6E31
  li        r5, 0x4E
  lwz       r3, 0xAC(r31)
  bl        -0x10538
  lwz       r12, 0x0(r3)
  lfs       f1, -0xB2C(r2)
  lwz       r12, 0x14(r12)
  lfs       f2, -0xB28(r2)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  li        r0, 0
  stb       r0, 0xB0(r3)
  b         .loc_0x434

.loc_0x3D8:
  lbz       r0, 0x25(r3)
  cmplwi    r0, 0
  bne-      .loc_0x434
  lis       r4, 0x7769
  lwz       r3, 0xAC(r31)
  addi      r6, r4, 0x6E30
  li        r5, 0x4E
  bl        -0x10580
  lwz       r12, 0x0(r3)
  lfs       f1, -0xB2C(r2)
  lwz       r12, 0x14(r12)
  lfs       f2, -0xB24(r2)
  mtctr     r12
  bctrl     
  lis       r4, 0x7769
  lwz       r3, 0xAC(r31)
  addi      r6, r4, 0x6E31
  li        r5, 0x4E
  bl        -0x105AC
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xC8(r31)
  stb       r0, 0xB0(r3)

.loc_0x434:
  li        r3, 0x1C
  bl        -0x2EF5CC
  cmplwi    r3, 0
  beq-      .loc_0x44C
  li        r4, 0x5
  bl        -0xE028

.loc_0x44C:
  stw       r3, 0xB4(r31)
  lis       r3, 0x8051
  addi      r7, r3, 0x3CF4
  lwz       r4, 0x20(r1)
  lwz       r3, 0xB4(r31)
  addi      r6, r23, 0x58
  lwz       r5, 0xAC(r31)
  lfs       f1, 0x0(r7)
  bl        -0xDB0C
  lis       r4, 0x8051
  lwz       r3, 0xB4(r31)
  lfs       f1, 0x3CF4(r4)
  addi      r6, r23, 0x6C
  lwz       r5, 0xAC(r31)
  lwz       r4, 0x20(r1)
  bl        -0xDB28
  lis       r4, 0x8051
  lwz       r3, 0xB4(r31)
  lfs       f1, 0x3CF4(r4)
  addi      r6, r23, 0x84
  lwz       r5, 0xAC(r31)
  lwz       r4, 0x20(r1)
  bl        -0xDB44
  lis       r4, 0x8051
  lwz       r3, 0xB4(r31)
  lfs       f1, 0x3CF4(r4)
  addi      r6, r23, 0x9C
  lwz       r5, 0xAC(r31)
  lwz       r4, 0x20(r1)
  bl        -0xDB60
  lis       r4, 0x8051
  lwz       r3, 0xB4(r31)
  lfs       f1, 0x3CF4(r4)
  addi      r6, r23, 0xB4
  lwz       r5, 0xAC(r31)
  lwz       r4, 0x20(r1)
  bl        -0xDB7C
  li        r3, 0x1C
  bl        -0x2EF678
  cmplwi    r3, 0
  beq-      .loc_0x4F8
  li        r4, 0x1
  bl        -0xE0D4

.loc_0x4F8:
  stw       r3, 0xB8(r31)
  addi      r6, r23, 0xCC
  lwz       r4, 0x20(r1)
  lfs       f1, -0xB20(r2)
  lwz       r3, 0xB8(r31)
  lwz       r5, 0xB0(r31)
  bl        -0xDBB0
  lwz       r5, 0xA8(r31)
  lis       r3, 0x7570
  addi      r8, r3, 0x5F32
  li        r4, 0x3
  addi      r5, r5, 0x8
  li        r0, 0
  stw       r5, 0x8(r1)
  addi      r6, r3, 0x5F31
  mr        r10, r8
  li        r5, 0x50
  stw       r4, 0xC(r1)
  li        r7, 0x50
  li        r9, 0x50
  stw       r4, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  lwz       r3, 0xAC(r31)
  bl        -0x7064
  lwz       r5, 0xA8(r31)
  lis       r3, 0x7053
  addi      r8, r3, 0x5F32
  li        r4, 0x2
  addi      r5, r5, 0xC
  li        r0, 0
  stw       r5, 0x8(r1)
  addi      r6, r3, 0x5F31
  mr        r10, r8
  li        r5, 0x5075
  stw       r4, 0xC(r1)
  li        r7, 0x5075
  li        r9, 0x5075
  stw       r4, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  lwz       r3, 0xAC(r31)
  bl        -0x70B0
  lwz       r5, 0xA8(r31)
  lis       r4, 0x776E
  addi      r8, r4, 0x5F32
  li        r11, 0x3
  addi      r0, r5, 0x10
  lis       r3, 0x50
  stw       r0, 0x8(r1)
  addi      r5, r3, 0x646F
  li        r0, 0
  mr        r10, r8
  stw       r11, 0xC(r1)
  mr        r7, r5
  mr        r9, r5
  addi      r6, r4, 0x5F31
  stw       r11, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  lwz       r3, 0xAC(r31)
  bl        -0x7100
  lwz       r5, 0xA8(r31)
  lis       r4, 0x6E53
  addi      r8, r4, 0x5F32
  li        r11, 0x2
  addi      r0, r5, 0x14
  lis       r3, 0x5064
  stw       r0, 0x8(r1)
  addi      r5, r3, 0x6F77
  li        r0, 0
  mr        r10, r8
  stw       r11, 0xC(r1)
  mr        r7, r5
  mr        r9, r5
  addi      r6, r4, 0x5F31
  stw       r11, 0x10(r1)
  stw       r0, 0x14(r1)
  lwz       r0, 0x20(r1)
  stw       r0, 0x18(r1)
  lwz       r3, 0xAC(r31)
  bl        -0x7150
  li        r0, 0xFF
  lis       r6, 0x6D30
  lis       r4, 0x804E
  lis       r5, 0x5469
  lis       r3, 0x804E
  stb       r0, 0x38(r1)
  subi      r22, r4, 0x7990
  lis       r4, 0x6F6E
  li        r11, 0
  subi      r20, r3, 0x79C0
  li        r12, 0xA0
  lis       r10, 0x8051
  lis       r9, 0x6666
  lis       r8, 0x6D62
  lis       r7, 0x5069
  stb       r0, 0x39(r1)
  lis       r3, 0x50
  addi      r21, r1, 0x48
  stb       r0, 0x3A(r1)
  addi      r0, r6, 0x3030
  addi      r24, r10, 0x3C90
  addi      r25, r9, 0x6667
  stw       r0, 0x78(r1)
  addi      r0, r5, 0x7465
  addi      r27, r8, 0x3030
  addi      r14, r7, 0x7465
  stw       r0, 0x7C(r1)
  addi      r0, r4, 0x3030
  li        r17, 0
  stw       r0, 0x80(r1)
  addi      r0, r3, 0x6963
  stb       r12, 0x3B(r1)
  stw       r0, 0x84(r1)
  stb       r11, 0x34(r1)
  stb       r11, 0x35(r1)
  stb       r11, 0x36(r1)
  stb       r11, 0x37(r1)

.loc_0x6E0:
  mulhw     r5, r25, r17
  lwz       r3, 0xAC(r31)
  srawi     r0, r5, 0x2
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  mulli     r0, r0, 0xA
  sub       r26, r17, r0
  srawi     r18, r26, 0x1F
  addc      r6, r26, r27
  adde      r7, r18, r14
  srawi     r0, r5, 0x2
  rlwinm    r4,r0,1,31,31
  add       r5, r0, r4
  mulhw     r0, r25, r5
  srawi     r0, r0, 0x2
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r4
  mulli     r0, r0, 0xA
  sub       r0, r5, r0
  rlwinm    r28,r0,8,0,23
  srawi     r19, r28, 0x1F
  addc      r6, r6, r28
  adde      r5, r7, r19
  bl        -0x108C8
  lwz       r0, 0x78(r1)
  mr        r5, r3
  lwz       r3, 0xAC(r31)
  addc      r4, r26, r0
  lwz       r0, 0x7C(r1)
  adde      r0, r18, r0
  addc      r29, r4, r28
  mr        r4, r5
  adde      r30, r0, r19
  mr        r16, r4
  mr        r6, r29
  mr        r5, r30
  bl        -0x108FC
  lwz       r4, 0x0(r22)
  mr        r15, r3
  lwz       r5, 0x4(r22)
  lwz       r0, 0x80(r1)
  stw       r5, 0x1C(r15)
  addc      r3, r26, r0
  lwz       r0, 0x84(r1)
  stw       r4, 0x18(r15)
  adde      r0, r18, r0
  addc      r6, r3, r28
  lwz       r3, 0xAC(r31)
  adde      r5, r0, r19
  bl        -0x10930
  stw       r3, 0x0(r21)
  lwz       r0, 0x0(r21)
  cmplwi    r0, 0
  beq-      .loc_0x8D4
  lis       r4, 0x8051
  mr        r3, r16
  addi      r5, r4, 0x3C90
  addi      r4, r1, 0x30
  lwz       r0, 0x0(r5)
  lwz       r18, 0x0(r20)
  stw       r0, 0x30(r1)
  lwz       r12, 0x0(r16)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r24)
  mr        r3, r16
  addi      r4, r1, 0x2C
  stw       r0, 0x2C(r1)
  lwz       r12, 0x0(r16)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA8(r31)
  addi      r0, r18, 0x18
  lbzx      r0, r3, r0
  cmplwi    r0, 0
  beq-      .loc_0x834
  lwz       r3, 0x0(r21)
  li        r0, 0x1
  cmplwi    r15, 0
  stb       r0, 0xB0(r3)
  beq-      .loc_0x8E8
  stb       r0, 0xB0(r15)
  b         .loc_0x8E8

.loc_0x834:
  lwz       r3, 0x0(r21)
  li        r5, 0x1
  lwz       r0, 0x38(r1)
  addi      r4, r1, 0x28
  stb       r5, 0xB0(r3)
  stw       r0, 0x28(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x34(r1)
  addi      r4, r1, 0x24
  lwz       r3, 0x0(r21)
  stw       r0, 0x24(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  cmplwi    r15, 0
  beq-      .loc_0x8C0
  li        r0, 0x1
  lis       r3, 0x305F
  stb       r0, 0xB0(r15)
  addi      r0, r3, 0x3030
  lis       r4, 0x36
  mr        r3, r15
  stw       r0, 0x1C(r15)
  addi      r0, r4, 0x3133
  li        r4, 0x80
  stw       r0, 0x18(r15)
  lwz       r12, 0x0(r15)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x8E8

.loc_0x8C0:
  mr        r4, r29
  mr        r3, r30
  addi      r5, r1, 0x3C
  bl        -0x10D38
  b         .loc_0x8E8

.loc_0x8D4:
  addi      r3, r23, 0
  addi      r5, r23, 0xE4
  li        r4, 0x182
  crclr     6, 0x6
  bl        -0x2E92DC

.loc_0x8E8:
  addi      r17, r17, 0x1
  addi      r21, r21, 0x4
  cmpwi     r17, 0xC
  addi      r20, r20, 0x4
  addi      r22, r22, 0x8
  blt+      .loc_0x6E0
  lwz       r5, 0xAC(r31)
  mr        r3, r31
  lwz       r4, 0x20(r1)
  bl        0x2A34
  lmw       r14, 0x88(r1)
  lwz       r0, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	8031395C
 * Size:	000128
 */
void og::newScreen::ObjSMenuItem::doUpdateLAction(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x44(r1)
  addi      r4, r4, 0x3CF4
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lbz       r0, 0x18(r4)
  cmplwi    r0, 0
  beq-      .loc_0x70
  bl        0x140624
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x272B
  stw       r0, 0x28(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x34(r1)
  mr        r3, r31
  addi      r4, r1, 0x28
  stw       r7, 0x28(r1)
  stw       r6, 0x2C(r1)
  stb       r5, 0x30(r1)
  stb       r0, 0x31(r1)
  bl        0x2E34
  b         .loc_0x114

.loc_0x70:
  bl        0x1405DC
  lbz       r0, 0xA5(r3)
  cmplwi    r0, 0
  beq-      .loc_0xCC
  mr        r3, r31
  bl        0x1405C8
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x271B
  stw       r0, 0x18(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x24(r1)
  mr        r3, r31
  addi      r4, r1, 0x18
  stw       r7, 0x18(r1)
  stw       r6, 0x1C(r1)
  stb       r5, 0x20(r1)
  stb       r0, 0x21(r1)
  bl        0x2DD8
  b         .loc_0x114

.loc_0xCC:
  mr        r3, r31
  bl        0x14057C
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x271A
  stw       r0, 0x8(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x14(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stb       r5, 0x10(r1)
  stb       r0, 0x11(r1)
  bl        0x2D8C

.loc_0x114:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80313A84
 * Size:	00006C
 */
void og::newScreen::ObjSMenuItem::doUpdateRAction(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  bl        0x140510
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r6, 0x271D
  stw       r0, 0x8(r1)
  subi      r7, r4, 0x7BA8
  li        r5, 0
  li        r0, 0x1
  stw       r3, 0x14(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  stw       r7, 0x8(r1)
  stw       r6, 0xC(r1)
  stb       r5, 0x10(r1)
  stb       r0, 0x11(r1)
  bl        0x2E04
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80313AF0
 * Size:	0000E8
 */
void og::newScreen::ObjSMenuItem::commonUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x2A38
  lis       r4, 0x8051
  mr        r3, r31
  addi      r4, r4, 0x3C90
  lfs       f1, 0x18(r4)
  lfs       f2, 0x1C(r4)
  bl        0x281C
  lwz       r3, 0xBC(r31)
  lis       r4, 0x8051
  addi      r4, r4, 0x3C90
  lwz       r12, 0x0(r3)
  lfs       f1, 0x8(r4)
  lwz       r12, 0x10(r12)
  lfs       f2, 0xC(r4)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lis       r4, 0x8051
  addi      r4, r4, 0x3C90
  lwz       r12, 0x0(r3)
  lfs       f1, 0x10(r4)
  lwz       r12, 0x10(r12)
  lfs       f2, 0x14(r4)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB4(r31)
  bl        -0xE684
  lwz       r3, 0xB8(r31)
  bl        -0xE68C
  lfs       f3, 0x40(r31)
  lfs       f2, 0x243C(r2)
  lfs       f1, -0xB2C(r2)
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r3, 0xAC(r31)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0xAC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB0(r31)
  lwz       r12, 0x0(r3)
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
 * Address:	80313BD8
 * Size:	000054
 */
void og::newScreen::ObjSMenuItem::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x295C
  mr        r0, r3
  lwz       r3, 0xAC(r31)
  mr        r31, r0
  bl        -0x2D30E4
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
 * Address:	80313C2C
 * Size:	0000D4
 */
void og::newScreen::ObjSMenuItem::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r31, r30, 0x190
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xAC(r29)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x0(r3)
  mr        r4, r30
  mr        r5, r31
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  lwz       r0, 0xB0(r29)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  lwz       r3, 0xBC(r29)
  lwz       r4, 0xC4(r29)
  addi      r3, r3, 0x80
  addi      r4, r4, 0x50
  bl        -0x2299D8
  lwz       r3, 0xC0(r29)
  lwz       r4, 0xC8(r29)
  addi      r3, r3, 0x80
  addi      r4, r4, 0x50
  bl        -0x2299EC
  lwz       r3, 0xB0(r29)
  mr        r4, r30
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0xAC:
  mr        r3, r29
  mr        r4, r30
  bl        0x31AC
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
 * Address:	80313D00
 * Size:	000014
 */
void og::newScreen::ObjSMenuItem::in_L(void)
{
/*
.loc_0x0:
  li        r0, 0
  lfs       f0, -0xB1C(r2)
  stw       r0, 0x38(r3)
  stfs      f0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80313D14
 * Size:	000014
 */
void og::newScreen::ObjSMenuItem::in_R(void)
{
/*
.loc_0x0:
  li        r0, 0x1
  lfs       f0, -0xB1C(r2)
  stw       r0, 0x38(r3)
  stfs      f0, 0x4C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80313D28
 * Size:	00000C
 */
void og::newScreen::ObjSMenuItem::wait(void)
{
/*
.loc_0x0:
  li        r0, 0x4
  stw       r0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80313D34
 * Size:	00002C
 */
void og::newScreen::ObjSMenuItem::out_L(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stw       r0, 0x38(r3)
  lwz       r3, -0x6858(r13)
  bl        -0x7104
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80313D60
 * Size:	00002C
 */
void og::newScreen::ObjSMenuItem::out_R(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x3
  stw       r0, 0x38(r3)
  lwz       r3, -0x6858(r13)
  bl        -0x7130
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80313D8C
 * Size:	0000D0
 */
void og::newScreen::ObjSMenuItem::doStart( (Screen::StartSceneArg const *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, -0xB2C(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, 0xB4(r3)
  bl        -0xE650
  lwz       r3, 0xB4(r30)
  li        r4, 0x1
  bl        -0xE6B8
  lwz       r3, 0xB4(r30)
  lfs       f1, -0xB20(r2)
  bl        -0xE720
  lwz       r3, 0xB4(r30)
  bl        -0xE518
  lwz       r3, 0xB8(r30)
  lfs       f1, -0xB2C(r2)
  bl        -0xE67C
  lwz       r3, 0xB8(r30)
  li        r4, 0x1
  bl        -0xE6E4
  lwz       r3, 0xB8(r30)
  lfs       f1, -0xB20(r2)
  bl        -0xE74C
  lwz       r3, 0xB8(r30)
  bl        -0xE544
  lis       r3, 0x36
  lis       r6, 0x325F
  addi      r5, r3, 0x3035
  lis       r8, 0x305F
  lis       r4, 0x315F
  mr        r3, r30
  mr        r7, r5
  mr        r9, r5
  addi      r6, r6, 0x3030
  addi      r8, r8, 0x3030
  addi      r10, r4, 0x3030
  bl        0x2CE4
  mr        r3, r30
  bl        0x2D48
  mr        r3, r30
  mr        r4, r31
  bl        0x2B80
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
 * Address:	80313E5C
 * Size:	000008
 */
void og::newScreen::ObjSMenuItem::doEnd( (Screen::EndSceneArg const *))
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80313E64
 * Size:	000020
 */
void og::newScreen::ObjSMenuItem::doUpdateFinish(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x2818
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80313E84
 * Size:	00004C
 */
void og::newScreen::ObjSMenuItem::doUpdateFadeout(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA0(r12)
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
 * Address:	80313ED0
 * Size:	000004
 */
void og::newScreen::ObjSMenuItem::doUpdateCancelAction(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80313ED4
 * Size:	000070
 */
void __sinit_ogObjSMenuItem_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  li        r4, -0x1
  addi      r7, r3, 0x3C90
  lfs       f2, -0xB18(r2)
  lfs       f1, -0xB14(r2)
  li        r6, 0
  stw       r4, 0x4(r7)
  li        r3, 0xFF
  lfs       f0, -0xB10(r2)
  li        r0, 0x64
  stw       r4, 0x0(r7)
  li        r5, 0x6E
  li        r4, 0xB0
  stb       r6, 0x0(r7)
  stb       r5, 0x1(r7)
  stb       r4, 0x2(r7)
  stb       r3, 0x3(r7)
  stb       r6, 0x4(r7)
  stb       r6, 0x5(r7)
  stb       r0, 0x6(r7)
  stb       r3, 0x7(r7)
  stfs      f2, 0x8(r7)
  stfs      f2, 0xC(r7)
  stfs      f2, 0x10(r7)
  stfs      f2, 0x14(r7)
  stfs      f1, 0x18(r7)
  stfs      f0, 0x1C(r7)
  blr
*/
}

/*
 * --INFO--
 * Address:	80313F44
 * Size:	000008
 */
void @24@og::newScreen::ObjSMenuItem::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xFD4
*/
}
