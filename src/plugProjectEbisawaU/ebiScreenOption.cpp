

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
 * Address:	803CADC8
 * Size:	000100
 */
void loadRam__Q33ebi6Screen16TOptionParameterFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  lwz       r4, -0x6514(r13)
  lwz       r5, 0x60(r4)
  lbz       r4, 0x3C(r5)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x0(r3)
  lbz       r4, 0x3B(r5)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x1(r3)
  lbz       r0, 0x38(r5)
  cmpwi     r0, 0x1
  beq-      .loc_0x68
  bge-      .loc_0x50
  cmpwi     r0, 0
  bge-      .loc_0x5C
  b         .loc_0x7C

.loc_0x50:
  cmpwi     r0, 0x3
  bge-      .loc_0x7C
  b         .loc_0x74

.loc_0x5C:
  li        r0, 0
  stw       r0, 0x4(r3)
  b         .loc_0x7C

.loc_0x68:
  li        r0, 0x1
  stw       r0, 0x4(r3)
  b         .loc_0x7C

.loc_0x74:
  li        r0, 0x2
  stw       r0, 0x4(r3)

.loc_0x7C:
  lbz       r4, 0x39(r5)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lfd       f2, 0x16A8(r2)
  stw       r4, 0xC(r1)
  lfs       f1, 0x16A4(r2)
  lfd       f0, 0x8(r1)
  lfs       f3, 0x16A0(r2)
  fsubs     f0, f0, f2
  stw       r0, 0x18(r1)
  fdivs     f0, f0, f1
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  stw       r0, 0x8(r3)
  lbz       r0, 0x3A(r5)
  stw       r0, 0x1C(r1)
  lfd       f0, 0x18(r1)
  fsubs     f0, f0, f2
  fdivs     f0, f0, f1
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  stw       r0, 0xC(r3)
  lbz       r4, 0x3D(r5)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r0,r0,1,31,31
  stb       r0, 0x10(r3)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803CAEC8
 * Size:	0000FC
 */
void saveRam__Q33ebi6Screen16TOptionParameterFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r4, -0x6514(r13)
  lbz       r0, 0x0(r3)
  lwz       r31, 0x60(r4)
  stb       r0, 0x3C(r31)
  lbz       r0, 0x1(r3)
  stb       r0, 0x3B(r31)
  lwz       r0, 0x4(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x64
  bge-      .loc_0x4C
  cmpwi     r0, 0
  bge-      .loc_0x58
  b         .loc_0x78

.loc_0x4C:
  cmpwi     r0, 0x3
  bge-      .loc_0x78
  b         .loc_0x70

.loc_0x58:
  mr        r3, r31
  bl        0x7C1A4
  b         .loc_0x78

.loc_0x64:
  mr        r3, r31
  bl        0x7C1CC
  b         .loc_0x78

.loc_0x70:
  mr        r3, r31
  bl        0x7C1F4

.loc_0x78:
  lwz       r4, 0x8(r30)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  mr        r3, r31
  xoris     r0, r4, 0x8000
  lfd       f2, 0x16B0(r2)
  stw       r0, 0xC(r1)
  lfs       f0, 0x16A0(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fdivs     f1, f1, f0
  bl        0x7C1F8
  lwz       r4, 0xC(r30)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  mr        r3, r31
  xoris     r0, r4, 0x8000
  lfd       f2, 0x16B0(r2)
  stw       r0, 0x14(r1)
  lfs       f0, 0x16A0(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fdivs     f1, f1, f0
  bl        0x7C2F4
  lbz       r4, 0x10(r30)
  mr        r3, r31
  bl        0x7C050
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
 * Address:	803CAFC4
 * Size:	000024
 */
void initParamForTest__Q33ebi6Screen16TOptionParameterFv(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, 0x1
  stb       r4, 0x0(r3)
  stb       r4, 0x1(r3)
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stb       r4, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CAFE8
 * Size:	0008D4
 */
void doSetArchive__Q33ebi6Screen7TOptionFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x64(r1)
  stmw      r19, 0x2C(r1)
  mr        r31, r3
  addi      r19, r5, 0x6448
  mr        r20, r4
  li        r5, 0
  addi      r4, r19, 0x10
  lwz       r3, -0x6514(r13)
  bl        0x58348
  lwz       r3, -0x6514(r13)
  addi      r4, r19, 0x2C
  li        r5, 0
  bl        0x58338
  li        r3, 0x148
  bl        -0x3A7188
  mr.       r0, r3
  beq-      .loc_0x58
  bl        0x69D74
  mr        r0, r3

.loc_0x58:
  stw       r0, 0x10C(r31)
  mr        r6, r20
  addi      r4, r19, 0x54
  lis       r5, 0x110
  lwz       r3, 0x10C(r31)
  bl        -0x38BA30
  lwz       r3, -0x6514(r13)
  addi      r4, r19, 0x2C
  bl        0x58304
  lis       r4, 0x696E
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x5F79
  li        r5, 0x5473
  bl        -0xD1C
  stw       r3, 0x110(r31)
  lis       r3, 0x696E
  addi      r6, r3, 0x5F6E
  li        r5, 0x5473
  lwz       r3, 0x10C(r31)
  bl        -0xD34
  stw       r3, 0x114(r31)
  lis       r3, 0x546D
  addi      r6, r3, 0x6F6E
  li        r5, 0
  lwz       r3, 0x10C(r31)
  bl        -0xD4C
  stw       r3, 0x118(r31)
  lis       r3, 0x5473
  addi      r6, r3, 0x7465
  li        r5, 0
  lwz       r3, 0x10C(r31)
  bl        -0xD64
  stw       r3, 0x11C(r31)
  lis       r3, 0x5473
  addi      r6, r3, 0x726F
  li        r5, 0
  lwz       r3, 0x10C(r31)
  bl        -0xD7C
  stw       r3, 0x120(r31)
  lis       r3, 0x6566
  addi      r6, r3, 0x5F79
  li        r5, 0x5464
  lwz       r3, 0x10C(r31)
  bl        -0xD94
  stw       r3, 0x124(r31)
  lis       r3, 0x6566
  addi      r6, r3, 0x5F6E
  li        r5, 0x5464
  lwz       r3, 0x10C(r31)
  bl        -0xDAC
  lis       r6, 0x6D6D
  lis       r5, 0x50
  lis       r4, 0x656D
  stw       r3, 0x128(r31)
  mr        r25, r31
  addi      r24, r6, 0x3030
  addi      r23, r5, 0x6267
  addi      r22, r4, 0x3030
  li        r27, 0
  li        r21, 0x5073

.loc_0x148:
  srawi     r26, r27, 0x1F
  lwz       r3, 0x10C(r31)
  addc      r6, r27, r24
  adde      r5, r26, r23
  bl        -0xDE8
  stw       r3, 0x154(r25)
  addc      r6, r27, r22
  adde      r5, r26, r21
  lwz       r3, 0x10C(r31)
  bl        -0xDFC
  addi      r27, r27, 0x1
  stw       r3, 0x12C(r25)
  cmpwi     r27, 0xA
  addi      r25, r25, 0x4
  blt+      .loc_0x148
  lis       r4, 0x4E44
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x4546
  li        r5, 0
  bl        -0xE24
  stw       r3, 0x17C(r31)
  lis       r5, 0x666D
  lis       r4, 0x54
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6730
  addi      r5, r4, 0x6465
  bl        -0xE40
  stw       r3, 0x19C(r31)
  lis       r5, 0x6D67
  lis       r4, 0x5464
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x3073
  addi      r5, r4, 0x6566
  bl        -0xE5C
  stw       r3, 0x1A0(r31)
  lis       r5, 0x7066
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7269
  addi      r5, r4, 0x6772
  bl        -0xE78
  stw       r3, 0x180(r31)
  lis       r5, 0x7073
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x696E
  addi      r5, r4, 0x6772
  bl        -0xE94
  stw       r3, 0x184(r31)
  lis       r5, 0x7073
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6F75
  addi      r5, r4, 0x6772
  bl        -0xEB0
  stw       r3, 0x188(r31)
  lis       r5, 0x7062
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x676D
  addi      r5, r4, 0x6772
  bl        -0xECC
  stw       r3, 0x18C(r31)
  lis       r3, 0x7270
  addi      r6, r3, 0x7365
  li        r5, 0x4E67
  lwz       r3, 0x10C(r31)
  bl        -0xEE4
  stw       r3, 0x190(r31)
  lis       r5, 0x7064
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6566
  addi      r5, r4, 0x6772
  bl        -0xF00
  stw       r3, 0x194(r31)
  lis       r5, 0x7073
  lis       r4, 0x4E
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6176
  addi      r5, r4, 0x6772
  bl        -0xF1C
  stw       r3, 0x198(r31)
  lis       r5, 0x6C63
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7477
  addi      r5, r4, 0x7365
  bl        -0xF38
  stw       r3, 0x1A4(r31)
  lis       r5, 0x7466
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7269
  addi      r5, r4, 0x7365
  bl        -0xF54
  stw       r3, 0x1A8(r31)
  lis       r5, 0x7473
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x696E
  addi      r5, r4, 0x7365
  bl        -0xF70
  stw       r3, 0x1AC(r31)
  lis       r5, 0x7473
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x726F
  addi      r5, r4, 0x7365
  bl        -0xF8C
  stw       r3, 0x1B0(r31)
  lis       r5, 0x7462
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x676D
  addi      r5, r4, 0x7365
  bl        -0xFA8
  stw       r3, 0x1B4(r31)
  lis       r3, 0x6574
  addi      r6, r3, 0x7365
  li        r5, 0x5773
  lwz       r3, 0x10C(r31)
  bl        -0xFC0
  stw       r3, 0x1B8(r31)
  lis       r5, 0x7464
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6566
  addi      r5, r4, 0x7365
  bl        -0xFDC
  stw       r3, 0x1BC(r31)
  lis       r5, 0x7473
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6176
  addi      r5, r4, 0x7365
  bl        -0xFF8
  stw       r3, 0x1C0(r31)
  addi      r4, r19, 0x60
  li        r5, 0
  lwz       r3, -0x6514(r13)
  bl        0x57FF8
  lwz       r3, 0x10C(r31)
  mr        r4, r3
  bl        -0xA54
  lwz       r3, -0x6514(r13)
  addi      r4, r19, 0x60
  bl        0x57FE8
  lwz       r3, 0x10C(r31)
  addi      r5, r31, 0x1E4
  mr        r4, r3
  bl        0x698D0
  lwz       r3, 0x10C(r31)
  addi      r5, r31, 0x220
  mr        r4, r3
  bl        0x698C0
  mr        r5, r20
  addi      r3, r31, 0x1E4
  addi      r4, r19, 0x80
  li        r6, 0x14
  li        r7, 0x29
  bl        0x571C
  lis       r5, 0x6E5F
  lis       r4, 0x50
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7963
  addi      r5, r4, 0x7369
  addi      r7, r31, 0x2EC
  bl        0x69754
  lis       r5, 0x6E5F
  lis       r4, 0x50
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6E63
  addi      r5, r4, 0x7369
  addi      r7, r31, 0x32C
  bl        0x69738
  lis       r4, 0x6D6F
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x6E63
  addi      r7, r31, 0x36C
  li        r5, 0x50
  bl        0x69720
  lis       r4, 0x7374
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x6563
  addi      r7, r31, 0x3AC
  li        r5, 0x50
  bl        0x69708
  lis       r4, 0x7372
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x6F63
  addi      r7, r31, 0x3EC
  li        r5, 0x50
  bl        0x696F0
  lis       r5, 0x665F
  lis       r4, 0x50
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7963
  addi      r5, r4, 0x6465
  addi      r7, r31, 0x42C
  bl        0x696D4
  lis       r5, 0x665F
  lis       r4, 0x50
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6E63
  addi      r5, r4, 0x6465
  addi      r7, r31, 0x46C
  bl        0x696B8
  lis       r6, 0x50
  lis       r7, 0x6D6D
  lis       r5, 0x6D30
  lis       r4, 0x5062
  lis       r3, 0x656D
  mr        r25, r31
  addi      r26, r7, 0x3030
  addi      r27, r6, 0x6267
  addi      r28, r5, 0x3063
  addi      r29, r4, 0x676D
  addi      r30, r3, 0x3030
  addi      r22, r6, 0x7365
  li        r23, 0
  li        r24, 0

.loc_0x4C0:
  srawi     r21, r23, 0x1F
  lwz       r3, 0x10C(r31)
  addc      r6, r23, r26
  addi      r7, r25, 0x4AC
  adde      r5, r21, r27
  bl        0x69668
  srawi     r20, r24, 0x1F
  lwz       r3, 0x10C(r31)
  addc      r6, r24, r28
  addi      r7, r25, 0x72C
  adde      r5, r20, r29
  bl        0x69650
  addc      r6, r23, r30
  li        r0, 0x5073
  lwz       r3, 0x10C(r31)
  adde      r5, r21, r0
  addi      r7, r25, 0x9AC
  bl        0x69638
  addc      r6, r24, r28
  lwz       r3, 0x10C(r31)
  adde      r5, r20, r22
  addi      r7, r25, 0xC2C
  bl        0x69624
  addi      r23, r23, 0x1
  addi      r24, r24, 0x100
  cmpwi     r23, 0xA
  addi      r25, r25, 0x40
  blt+      .loc_0x4C0
  lis       r4, 0x696E
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x5F79
  li        r5, 0x5473
  bl        -0x11D0
  mr        r20, r3
  addi      r3, r1, 0x20
  lwz       r0, 0x104(r20)
  mr        r4, r20
  stw       r0, 0x18(r1)
  lbz       r5, 0x18(r1)
  lbz       r0, 0x19(r1)
  stb       r5, 0x1C4(r31)
  lbz       r5, 0x1A(r1)
  stb       r0, 0x1C5(r31)
  lbz       r0, 0x1B(r1)
  stb       r5, 0x1C6(r31)
  stb       r0, 0x1C7(r31)
  lwz       r0, 0x108(r20)
  stw       r0, 0x1C(r1)
  lbz       r5, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r5, 0x1C8(r31)
  lbz       r5, 0x1E(r1)
  stb       r0, 0x1C9(r31)
  lbz       r0, 0x1F(r1)
  stb       r5, 0x1CA(r31)
  stb       r0, 0x1CB(r31)
  lwz       r12, 0x0(r20)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x20(r1)
  mr        r4, r20
  addi      r3, r1, 0x24
  stb       r0, 0x1CC(r31)
  lbz       r0, 0x21(r1)
  stb       r0, 0x1CD(r31)
  lbz       r0, 0x22(r1)
  stb       r0, 0x1CE(r31)
  lbz       r0, 0x23(r1)
  stb       r0, 0x1CF(r31)
  lwz       r12, 0x0(r20)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x24(r1)
  lis       r4, 0x6F6C
  lis       r3, 0x5468
  stb       r0, 0x1D0(r31)
  addi      r6, r4, 0x6F72
  addi      r5, r3, 0x7363
  lbz       r0, 0x25(r1)
  stb       r0, 0x1D1(r31)
  lbz       r0, 0x26(r1)
  stb       r0, 0x1D2(r31)
  lbz       r0, 0x27(r1)
  stb       r0, 0x1D3(r31)
  lwz       r3, 0x10C(r31)
  bl        -0x12AC
  mr        r20, r3
  addi      r3, r1, 0x10
  lwz       r0, 0x104(r20)
  mr        r4, r20
  stw       r0, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x1D4(r31)
  lbz       r5, 0xA(r1)
  stb       r0, 0x1D5(r31)
  lbz       r0, 0xB(r1)
  stb       r5, 0x1D6(r31)
  stb       r0, 0x1D7(r31)
  lwz       r0, 0x108(r20)
  stw       r0, 0xC(r1)
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x1D8(r31)
  lbz       r5, 0xE(r1)
  stb       r0, 0x1D9(r31)
  lbz       r0, 0xF(r1)
  stb       r5, 0x1DA(r31)
  stb       r0, 0x1DB(r31)
  lwz       r12, 0x0(r20)
  lwz       r12, 0xB4(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x10(r1)
  mr        r4, r20
  addi      r3, r1, 0x14
  stb       r0, 0x1DC(r31)
  lbz       r0, 0x11(r1)
  stb       r0, 0x1DD(r31)
  lbz       r0, 0x12(r1)
  stb       r0, 0x1DE(r31)
  lbz       r0, 0x13(r1)
  stb       r0, 0x1DF(r31)
  lwz       r12, 0x0(r20)
  lwz       r12, 0xB0(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x14(r1)
  lis       r4, 0x6F6C
  lis       r3, 0x54
  stb       r0, 0x1E0(r31)
  addi      r6, r4, 0x6F72
  addi      r5, r3, 0x7363
  lbz       r0, 0x15(r1)
  stb       r0, 0x1E1(r31)
  lbz       r0, 0x16(r1)
  stb       r0, 0x1E2(r31)
  lbz       r0, 0x17(r1)
  stb       r0, 0x1E3(r31)
  lwz       r3, 0x10C(r31)
  bl        -0x1388
  mr        r20, r3
  lis       r4, 0x696E
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x5F79
  li        r5, 0x5473
  bl        -0x13A0
  mr        r4, r3
  mr        r5, r20
  addi      r3, r31, 0x240
  bl        -0x8FE4
  li        r6, 0x1
  lfs       f2, 0x16B8(r2)
  stb       r6, 0x25C(r31)
  li        r0, 0
  lfs       f0, 0x16BC(r2)
  addi      r5, r31, 0x240
  lwz       r3, -0x6514(r13)
  li        r4, 0
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0x284(r31)
  stfs      f0, 0x280(r31)
  stb       r6, 0x288(r31)
  stb       r0, 0x289(r31)
  lwz       r3, 0x10C(r31)
  bl        0x69514
  lwz       r3, 0x10C(r31)
  addi      r5, r31, 0x28C
  li        r4, 0
  bl        0x69504
  li        r0, 0xFF
  lis       r3, 0x626F
  stb       r0, 0x2B8(r31)
  li        r0, 0x55
  li        r4, 0x1
  lfs       f2, 0x16B8(r2)
  stb       r0, 0x2B9(r31)
  li        r0, 0
  lfs       f0, 0x16BC(r2)
  addi      r6, r3, 0x746E
  stb       r4, 0x2A8(r31)
  li        r5, 0x4E
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0x2B0(r31)
  stfs      f0, 0x2AC(r31)
  stb       r4, 0x2B4(r31)
  stb       r0, 0x2B5(r31)
  lwz       r3, 0x10C(r31)
  bl        -0x1454
  mr        r0, r3
  lwz       r3, 0x10C(r31)
  mr        r20, r0
  addi      r5, r31, 0x2BC
  mr        r4, r20
  bl        0x69498
  mr        r3, r20
  li        r4, 0x1
  bl        -0x13EC
  lis       r5, 0x6C63
  lis       r4, 0x57
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x7477
  addi      r5, r4, 0x7365
  addi      r7, r31, 0xEAC
  bl        0x69338
  lwz       r3, 0x10C(r31)
  bl        -0x1238
  lis       r5, 0x7773
  lis       r4, 0x4E67
  lwz       r3, 0x10C(r31)
  addi      r6, r5, 0x6574
  addi      r5, r4, 0x7270
  bl        -0x14B4
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r21, 0
  mr        r20, r31

.loc_0x844:
  lwz       r3, 0x1A8(r20)
  li        r4, 0x1
  bl        -0x1450
  lwz       r3, 0x1A8(r20)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r21, r21, 0x1
  addi      r20, r20, 0x4
  cmpwi     r21, 0x7
  blt+      .loc_0x844
  lis       r4, 0x4441
  lwz       r3, 0x10C(r31)
  addi      r6, r4, 0x5441
  li        r5, 0
  bl        -0x1518
  bl        -0x1108
  lwz       r3, 0x17C(r31)
  li        r4, 0x1
  bl        -0x149C
  lwz       r3, 0x17C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  addi      r4, r19, 0x10
  bl        0x57AC0
  lmw       r19, 0x2C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803CB8BC
 * Size:	000134
 */
void doOpenScreen__Q33ebi6Screen7TOptionFPQ33ebi6Screen7ArgOpen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lfs       f1, 0x16C0(r2)
  li        r5, 0x1
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  addi      r3, r31, 0x1E4
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x54(r4)
  li        r4, 0
  fmuls     f1, f1, f0
  bl        0x52AC
  mr        r3, r31
  bl        0x113C
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1698(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x309DBC
  stw       r3, 0xFC(r31)
  li        r4, 0x1
  li        r0, 0
  stw       r3, 0x100(r31)
  stw       r4, 0xF8(r31)
  stw       r4, 0x104(r31)
  stw       r4, 0x108(r31)
  lwz       r3, 0x180(r31)
  stb       r0, 0xB0(r3)
  lwz       r0, 0x104(r31)
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  lwz       r3, 0x1A8(r3)
  bl        -0x393620
  lwz       r4, -0x6514(r13)
  lwz       r6, 0x0(r3)
  lfs       f1, 0x16C4(r2)
  lfs       f0, 0x54(r4)
  lwz       r5, 0x4(r3)
  fdivs     f1, f1, f0
  lwz       r4, 0x8(r3)
  lwz       r0, 0xC(r3)
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r4, 0x18(r1)
  stw       r0, 0x1C(r1)
  bl        -0x309E28
  stw       r3, 0xEEC(r31)
  li        r0, 0x1
  lwz       r4, 0x18(r1)
  stw       r3, 0xEF0(r31)
  mr        r3, r31
  lwz       r7, 0x10(r1)
  lwz       r6, 0x14(r1)
  stw       r7, 0xECC(r31)
  lwz       r5, 0x1C(r1)
  stw       r6, 0xED0(r31)
  stw       r4, 0xED4(r31)
  stw       r5, 0xED8(r31)
  stw       r7, 0xEDC(r31)
  stw       r6, 0xEE0(r31)
  stw       r4, 0xEE4(r31)
  stw       r5, 0xEE8(r31)
  stb       r0, 0xEC8(r31)
  lwz       r0, 0x104(r31)
  stw       r4, 0x8(r1)
  rlwinm    r0,r0,2,0,29
  add       r4, r31, r0
  stw       r5, 0xC(r1)
  lwz       r0, 0x180(r4)
  stw       r0, 0xF14(r31)
  bl        0xEE4
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803CB9F0
 * Size:	00004C
 */
void doCloseScreen__Q33ebi6Screen7TOptionFPQ33ebi6Screen8ArgClose(void)
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
  bl        -0x309EC8
  stw       r3, 0xFC(r31)
  li        r0, 0x2
  stw       r3, 0x100(r31)
  stw       r0, 0xF8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CBA3C
 * Size:	000024
 */
void doInitWaitState__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x1E4
  stw       r0, 0x14(r1)
  bl        0x5368
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CBA60
 * Size:	000084
 */
void doUpdateStateOpen__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xF8(r3)
  cmpwi     r0, 0
  beq-      .loc_0x34
  lwz       r3, 0xFC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x34
  subi      r0, r3, 0x1
  stw       r0, 0xFC(r31)

.loc_0x34:
  lwz       r3, 0x10C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x1E4
  bl        0x5504
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lwz       r0, 0xFC(r31)
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
 * Address:	803CBAE4
 * Size:	0009B4
 */
void doUpdateStateWait__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  bl        0xF30
  lwz       r3, 0x10C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x180
  addi      r3, r31, 0x98
  bl        -0xA08C
  lbz       r0, 0xA5(r31)
  cmplwi    r0, 0
  beq-      .loc_0x180
  lwz       r0, 0xB4(r31)
  stw       r0, 0x108(r31)
  lwz       r0, 0x104(r31)
  cmpwi     r0, 0
  bne-      .loc_0x70
  li        r0, 0x1
  stw       r0, 0x104(r31)

.loc_0x70:
  lwz       r0, 0x108(r31)
  lwz       r3, 0x104(r31)
  cmpw      r0, r3
  beq-      .loc_0x124
  rlwinm    r0,r3,2,0,29
  add       r3, r31, r0
  lwz       r3, 0x1A8(r3)
  bl        -0x393850
  lwz       r8, 0x0(r3)
  lwz       r7, 0x4(r3)
  lwz       r6, 0x8(r3)
  lwz       r5, 0xC(r3)
  addi      r3, r31, 0xEF4
  lwz       r4, 0xEDC(r31)
  lwz       r0, 0xEE0(r31)
  stw       r8, 0x8(r1)
  lfs       f1, 0x16C4(r2)
  stw       r4, 0xECC(r31)
  lfs       f2, 0x16C8(r2)
  stw       r0, 0xED0(r31)
  lfs       f3, 0x16CC(r2)
  lwz       r4, 0xEE4(r31)
  lwz       r0, 0xEE8(r31)
  stw       r7, 0xC(r1)
  lfs       f4, 0x16BC(r2)
  stw       r4, 0xED4(r31)
  stw       r0, 0xED8(r31)
  stw       r8, 0xEDC(r31)
  stw       r7, 0xEE0(r31)
  stw       r6, 0xEE4(r31)
  stw       r5, 0xEE8(r31)
  lwz       r0, 0xEF0(r31)
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stw       r0, 0xEEC(r31)
  bl        -0xA2D08
  lwz       r0, 0x104(r31)
  li        r4, 0x1802
  li        r5, 0
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  lwz       r0, 0x180(r3)
  stw       r0, 0xF14(r31)
  lwz       r3, -0x67A8(r13)
  bl        -0x935D4

.loc_0x124:
  lwz       r0, 0x104(r31)
  cmpwi     r0, 0x6
  bne-      .loc_0x164
  li        r4, 0x1
  lfs       f2, 0x16D0(r2)
  stb       r4, 0x2D8(r31)
  li        r0, 0
  lfs       f0, 0x16BC(r2)
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x54(r3)
  fmuls     f1, f2, f1
  stfs      f1, 0x2E0(r31)
  stfs      f0, 0x2DC(r31)
  stb       r4, 0x2E4(r31)
  stb       r0, 0x2E5(r31)
  b         .loc_0x180

.loc_0x164:
  lwz       r0, 0x108(r31)
  cmpwi     r0, 0x6
  bne-      .loc_0x180
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x2E4(r31)
  stb       r0, 0x2E5(r31)

.loc_0x180:
  li        r0, 0
  stw       r0, 0xC4(r31)
  lbz       r0, 0x10(r31)
  cmplwi    r0, 0
  beq-      .loc_0x610
  lwz       r0, 0xEEC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x610
  lwz       r3, 0xC(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x1C8
  li        r0, 0x9
  li        r4, 0x1801
  stw       r0, 0xC4(r31)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x93678

.loc_0x1C8:
  lwz       r0, 0x104(r31)
  cmplwi    r0, 0x6
  bgt-      .loc_0x610
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x78B0
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lwz       r3, 0xC(r31)
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x20C
  lfs       f1, 0x48(r3)
  lfs       f0, 0x16D4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x214

.loc_0x20C:
  li        r0, 0x1
  b         .loc_0x218

.loc_0x214:
  li        r0, 0

.loc_0x218:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x268
  lbz       r0, 0xC9(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x610
  li        r0, 0
  lfs       f1, 0x16D8(r2)
  stb       r0, 0xC9(r31)
  addi      r3, r31, 0x34C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA2E54
  li        r0, 0x2
  li        r4, 0x180E
  stw       r0, 0xC4(r31)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x93714
  b         .loc_0x610

.loc_0x268:
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x284
  lfs       f1, 0x48(r3)
  lfs       f0, 0x16DC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x28C

.loc_0x284:
  li        r0, 0x1
  b         .loc_0x290

.loc_0x28C:
  li        r0, 0

.loc_0x290:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x610
  lbz       r0, 0xC9(r31)
  cmplwi    r0, 0
  bne-      .loc_0x610
  li        r0, 0x1
  lfs       f1, 0x16D8(r2)
  stb       r0, 0xC9(r31)
  addi      r3, r31, 0x30C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA2ECC
  li        r0, 0x2
  li        r4, 0x180E
  stw       r0, 0xC4(r31)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x9378C
  b         .loc_0x610
  addi      r3, r31, 0x6C
  bl        -0xA32C
  lbz       r0, 0x79(r31)
  cmplwi    r0, 0
  beq-      .loc_0x610
  li        r0, 0x3
  stw       r0, 0xC4(r31)
  lwz       r0, 0xCC(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x350
  bge-      .loc_0x318
  cmpwi     r0, 0
  bge-      .loc_0x324
  b         .loc_0x610

.loc_0x318:
  cmpwi     r0, 0x3
  bge-      .loc_0x610
  b         .loc_0x37C

.loc_0x324:
  lfs       f1, 0x16D8(r2)
  addi      r3, r31, 0x38C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA2F44
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x937FC
  b         .loc_0x610

.loc_0x350:
  lfs       f1, 0x16D8(r2)
  addi      r3, r31, 0x3CC
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA2F70
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x93828
  b         .loc_0x610

.loc_0x37C:
  lfs       f1, 0x16D8(r2)
  addi      r3, r31, 0x40C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA2F9C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x93854
  b         .loc_0x610
  addi      r3, r31, 0x14
  bl        -0xA3F4
  lbz       r0, 0x21(r31)
  cmplwi    r0, 0
  beq-      .loc_0x610
  li        r0, 0x4
  stw       r0, 0xC4(r31)
  lwz       r3, 0xD0(r31)
  cmpwi     r3, 0
  beq-      .loc_0x41C
  subi      r0, r3, 0x1
  lfs       f1, 0x16D4(r2)
  rlwinm    r3,r0,6,0,25
  lfs       f2, 0x16C8(r2)
  addi      r3, r3, 0x4CC
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  add       r3, r31, r3
  bl        -0xA2FFC
  lwz       r3, 0xD0(r31)
  lfs       f1, 0x16D4(r2)
  subi      r0, r3, 0x1
  lfs       f2, 0x16C8(r2)
  rlwinm    r3,r0,6,0,25
  lfs       f3, 0x16CC(r2)
  addi      r3, r3, 0x74C
  lfs       f4, 0x16BC(r2)
  add       r3, r31, r3
  bl        -0xA3024

.loc_0x41C:
  mr        r30, r31
  li        r29, 0
  b         .loc_0x448

.loc_0x428:
  lwz       r3, 0x154(r30)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x448:
  lwz       r3, 0xD0(r31)
  subi      r0, r3, 0x1
  cmpw      r29, r0
  blt+      .loc_0x428
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x93918
  b         .loc_0x610
  addi      r3, r31, 0x40
  bl        -0xA4B8
  lbz       r0, 0x4D(r31)
  cmplwi    r0, 0
  beq-      .loc_0x610
  li        r0, 0x5
  stw       r0, 0xC4(r31)
  lwz       r3, 0xD4(r31)
  cmpwi     r3, 0
  beq-      .loc_0x4E0
  subi      r0, r3, 0x1
  lfs       f1, 0x16D4(r2)
  rlwinm    r3,r0,6,0,25
  lfs       f2, 0x16C8(r2)
  addi      r3, r3, 0x9CC
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  add       r3, r31, r3
  bl        -0xA30C0
  lwz       r3, 0xD4(r31)
  lfs       f1, 0x16D4(r2)
  subi      r0, r3, 0x1
  lfs       f2, 0x16C8(r2)
  rlwinm    r3,r0,6,0,25
  lfs       f3, 0x16CC(r2)
  addi      r3, r3, 0xC4C
  lfs       f4, 0x16BC(r2)
  add       r3, r31, r3
  bl        -0xA30E8

.loc_0x4E0:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x939A0
  b         .loc_0x610
  lwz       r3, 0xC(r31)
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x514
  lfs       f1, 0x48(r3)
  lfs       f0, 0x16D4(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x51C

.loc_0x514:
  li        r0, 0x1
  b         .loc_0x520

.loc_0x51C:
  li        r0, 0

.loc_0x520:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x570
  lbz       r0, 0xD8(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x610
  li        r0, 0
  lfs       f1, 0x16D8(r2)
  stb       r0, 0xD8(r31)
  addi      r3, r31, 0x48C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA315C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x93A14
  li        r0, 0x6
  stw       r0, 0xC4(r31)
  b         .loc_0x610

.loc_0x570:
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,31,31
  bne-      .loc_0x58C
  lfs       f1, 0x48(r3)
  lfs       f0, 0x16DC(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x594

.loc_0x58C:
  li        r0, 0x1
  b         .loc_0x598

.loc_0x594:
  li        r0, 0

.loc_0x598:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x610
  lbz       r0, 0xD8(r31)
  cmplwi    r0, 0
  bne-      .loc_0x610
  li        r0, 0x1
  lfs       f1, 0x16D8(r2)
  stb       r0, 0xD8(r31)
  addi      r3, r31, 0x44C
  lfs       f2, 0x16C8(r2)
  lfs       f3, 0x16CC(r2)
  lfs       f4, 0x16BC(r2)
  bl        -0xA31D4
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180E
  li        r5, 0
  bl        -0x93A8C
  li        r0, 0x6
  stw       r0, 0xC4(r31)
  b         .loc_0x610
  lwz       r3, 0xC(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x610
  li        r0, 0x7
  li        r4, 0x1800
  stw       r0, 0xC4(r31)
  li        r5, 0
  lwz       r3, -0x67A8(r13)
  bl        -0x93AC0

.loc_0x610:
  lbz       r0, 0xD8(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x630
  lis       r4, 0x355F
  lis       r3, 0x38
  addi      r4, r4, 0x3030
  addi      r0, r3, 0x3333
  b         .loc_0x640

.loc_0x630:
  lis       r4, 0x365F
  lis       r3, 0x38
  addi      r4, r4, 0x3030
  addi      r0, r3, 0x3333

.loc_0x640:
  lwz       r3, 0x19C(r31)
  stw       r4, 0x1C(r3)
  stw       r0, 0x18(r3)
  lwz       r3, 0x1A0(r31)
  stw       r4, 0x1C(r3)
  stw       r0, 0x18(r3)
  lwz       r0, 0x104(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x79C
  li        r3, 0
  li        r0, 0
  cmpwi     r3, 0x5
  beq-      .loc_0x684
  cmpwi     r3, 0x6
  beq-      .loc_0x684
  lwz       r3, 0x180(r31)
  stb       r0, 0xB0(r3)

.loc_0x684:
  li        r3, 0x1
  cmpwi     r3, 0x5
  beq-      .loc_0x6A0
  cmpwi     r3, 0x6
  beq-      .loc_0x6A0
  lwz       r3, 0x184(r31)
  stb       r0, 0xB0(r3)

.loc_0x6A0:
  li        r3, 0x2
  cmpwi     r3, 0x5
  beq-      .loc_0x6BC
  cmpwi     r3, 0x6
  beq-      .loc_0x6BC
  lwz       r3, 0x188(r31)
  stb       r0, 0xB0(r3)

.loc_0x6BC:
  li        r3, 0x3
  cmpwi     r3, 0x5
  beq-      .loc_0x6D8
  cmpwi     r3, 0x6
  beq-      .loc_0x6D8
  lwz       r3, 0x18C(r31)
  stb       r0, 0xB0(r3)

.loc_0x6D8:
  li        r3, 0x4
  cmpwi     r3, 0x5
  beq-      .loc_0x6F4
  cmpwi     r3, 0x6
  beq-      .loc_0x6F4
  lwz       r3, 0x190(r31)
  stb       r0, 0xB0(r3)

.loc_0x6F4:
  li        r3, 0x5
  b         .loc_0x708
  beq-      .loc_0x708
  lwz       r3, 0x194(r31)
  stb       r0, 0xB0(r3)

.loc_0x708:
  li        r3, 0x6
  cmpwi     r3, 0x5
  beq-      .loc_0x724
  cmpwi     r3, 0x6
  beq-      .loc_0x724
  lwz       r3, 0x198(r31)
  stb       r0, 0xB0(r3)

.loc_0x724:
  lwz       r4, 0xEF0(r31)
  cmplwi    r4, 0
  beq-      .loc_0x764
  lwz       r3, 0xEEC(r31)
  lis       r0, 0x4330
  stw       r0, 0x18(r1)
  lfd       f2, 0x16A8(r2)
  stw       r3, 0x1C(r1)
  lfd       f0, 0x18(r1)
  stw       r4, 0x24(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x20(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x768

.loc_0x764:
  lfs       f1, 0x16BC(r2)

.loc_0x768:
  lfs       f0, 0x16E0(r2)
  lwz       r3, 0x17C(r31)
  fsubs     f0, f0, f1
  lfs       f1, 0x16A4(r2)
  lwz       r12, 0x0(r3)
  fmuls     f0, f1, f0
  lwz       r12, 0x24(r12)
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r4, 0x2C(r1)
  mtctr     r12
  bctrl     
  b         .loc_0x8B4

.loc_0x79C:
  lwz       r0, 0x108(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x89C
  li        r3, 0
  li        r0, 0x1
  cmpwi     r3, 0x5
  beq-      .loc_0x7C0
  lwz       r3, 0x180(r31)
  stb       r0, 0xB0(r3)

.loc_0x7C0:
  li        r3, 0x1
  cmpwi     r3, 0x5
  beq-      .loc_0x7D4
  lwz       r3, 0x184(r31)
  stb       r0, 0xB0(r3)

.loc_0x7D4:
  li        r3, 0x2
  cmpwi     r3, 0x5
  beq-      .loc_0x7E8
  lwz       r3, 0x188(r31)
  stb       r0, 0xB0(r3)

.loc_0x7E8:
  li        r3, 0x3
  cmpwi     r3, 0x5
  beq-      .loc_0x7FC
  lwz       r3, 0x18C(r31)
  stb       r0, 0xB0(r3)

.loc_0x7FC:
  li        r3, 0x4
  cmpwi     r3, 0x5
  beq-      .loc_0x818
  lwz       r3, 0x190(r31)
  stb       r0, 0xB0(r3)
  b         .loc_0x818
  stb       r0, 0xB0(r3)

.loc_0x818:
  li        r3, 0x6
  cmpwi     r3, 0x5
  beq-      .loc_0x82C
  lwz       r3, 0x198(r31)
  stb       r0, 0xB0(r3)

.loc_0x82C:
  lwz       r4, 0xEF0(r31)
  cmplwi    r4, 0
  beq-      .loc_0x86C
  lwz       r3, 0xEEC(r31)
  lis       r0, 0x4330
  stw       r0, 0x28(r1)
  lfd       f2, 0x16A8(r2)
  stw       r3, 0x2C(r1)
  lfd       f0, 0x28(r1)
  stw       r4, 0x24(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x20(r1)
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f2
  fdivs     f1, f1, f0
  b         .loc_0x870

.loc_0x86C:
  lfs       f1, 0x16BC(r2)

.loc_0x870:
  lfs       f0, 0x16A4(r2)
  lwz       r3, 0x17C(r31)
  fmuls     f0, f0, f1
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0x18(r1)
  lwz       r4, 0x1C(r1)
  mtctr     r12
  bctrl     
  b         .loc_0x8B4

.loc_0x89C:
  lwz       r3, 0x17C(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x8B4:
  lwz       r3, 0x110(r31)
  lfs       f0, 0x328(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x114(r31)
  lfs       f0, 0x368(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x118(r31)
  lfs       f0, 0x3A8(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x11C(r31)
  lfs       f0, 0x3E8(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x120(r31)
  lfs       f0, 0x428(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x124(r31)
  lfs       f0, 0x468(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x128(r31)
  lfs       f0, 0x4A8(r31)
  stfs      f0, 0xCC(r3)
  stfs      f0, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x44(r1)
  li        r3, 0
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803CC498
 * Size:	000074
 */
void doUpdateStateClose__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x10C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xF8(r31)
  cmpwi     r0, 0
  beq-      .loc_0x48
  lwz       r3, 0xFC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x48
  subi      r0, r3, 0x1
  stw       r0, 0xFC(r31)

.loc_0x48:
  lwz       r0, 0xFC(r31)
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
 * Address:	803CC50C
 * Size:	000244
 */
void doDraw__Q33ebi6Screen7TOptionFv(void)
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
  lwz       r3, 0x10C(r29)
  mr        r4, r30
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0xF8(r29)
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
  lwz       r0, 0xF8(r29)
  lwz       r3, 0xF0(r29)
  cmpwi     r0, 0x2
  stw       r3, 0x18(r1)
  beq-      .loc_0x120
  bge-      .loc_0x19C
  cmpwi     r0, 0x1
  bge-      .loc_0xA8
  b         .loc_0x19C

.loc_0xA8:
  lwz       r4, 0x100(r29)
  cmplwi    r4, 0
  beq-      .loc_0xE8
  lwz       r3, 0xFC(r29)
  lis       r0, 0x4330
  stw       r0, 0x30(r1)
  lfd       f2, 0x16A8(r2)
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
  lfs       f2, 0x16BC(r2)

.loc_0xEC:
  lbz       r3, 0xF4(r29)
  lis       r0, 0x4330
  stw       r0, 0x40(r1)
  lfd       f1, 0x16A8(r2)
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
  lwz       r4, 0x100(r29)
  cmplwi    r4, 0
  beq-      .loc_0x160
  lwz       r3, 0xFC(r29)
  lis       r0, 0x4330
  stw       r0, 0x48(r1)
  lfd       f2, 0x16A8(r2)
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
  lfs       f1, 0x16BC(r2)

.loc_0x164:
  lbz       r3, 0xF4(r29)
  lis       r0, 0x4330
  lfs       f0, 0x16E0(r2)
  stw       r3, 0x3C(r1)
  lfd       f2, 0x16A8(r2)
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
  bl        -0x396044
  bl        0x56B50
  lhz       r30, 0x6(r3)
  bl        0x56B48
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x16BC(r2)
  mr        r3, r31
  stw       r4, 0x4C(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x16A8(r2)
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
  bl        -0x395F5C

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
 * Address:	803CC750
 * Size:	0000B0
 */
void loadResource__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  addi      r31, r4, 0x6448
  addi      r4, r31, 0x8C
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  mr        r29, r3
  lwz       r3, -0x6514(r13)
  bl        0x56BDC
  addi      r3, r1, 0x8
  addi      r4, r31, 0xA4
  bl        -0xB4840
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x3B1670
  mr.       r30, r3
  bne-      .loc_0x70
  addi      r3, r31, 0xB4
  addi      r5, r31, 0xC8
  li        r4, 0x2F5
  crclr     6, 0x6
  bl        -0x3A217C

.loc_0x70:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x8C
  bl        0x56B9C
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	803CC800
 * Size:	0000BC
 */
void setController__Q33ebi6Screen7TOptionFP10Controller(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x16E4(r2)
  li        r5, 0
  stw       r0, 0x14(r1)
  li        r6, 0xA
  lfs       f2, 0x16E8(r2)
  li        r8, 0x1
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r7, r31, 0xD0
  stw       r4, 0xC(r3)
  addi      r3, r31, 0x14
  lwz       r4, 0xC(r31)
  bl        -0xADFC
  lwz       r4, 0xC(r31)
  addi      r3, r31, 0x40
  lfs       f1, 0x16E4(r2)
  addi      r7, r31, 0xD4
  lfs       f2, 0x16E8(r2)
  li        r5, 0
  li        r6, 0xA
  li        r8, 0x1
  bl        -0xAE20
  lwz       r4, 0xC(r31)
  addi      r3, r31, 0x6C
  lfs       f1, 0x16E4(r2)
  addi      r7, r31, 0xCC
  lfs       f2, 0x16E8(r2)
  li        r5, 0
  li        r6, 0x2
  li        r8, 0x1
  bl        -0xAE44
  lwz       r4, 0xC(r31)
  addi      r3, r31, 0x98
  lfs       f1, 0x16E4(r2)
  addi      r7, r31, 0x104
  lfs       f2, 0x16E8(r2)
  li        r5, 0
  li        r6, 0x6
  li        r8, 0x3
  bl        -0xAE68
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CC8BC
 * Size:	000174
 */
void initScreen___Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r0, 0x258(r3)
  stw       r0, 0x2A4(r3)
  stb       r0, 0x2D8(r3)
  lwz       r3, 0x2D4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x4C
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
  mr        r31, r29
  li        r30, 0
  b         .loc_0x78

.loc_0x58:
  lwz       r3, 0x154(r31)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0x78:
  lwz       r0, 0xD0(r29)
  cmpw      r30, r0
  blt+      .loc_0x58
  mr        r31, r29
  li        r30, 0
  b         .loc_0xB0

.loc_0x90:
  lwz       r3, 0x12C(r31)
  li        r4, 0xFF
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  addi      r31, r31, 0x4
  addi      r30, r30, 0x1

.loc_0xB0:
  lwz       r0, 0xD4(r29)
  cmpw      r30, r0
  blt+      .loc_0x90
  li        r3, 0
  li        r0, 0x1
  cmpwi     r3, 0x5
  beq-      .loc_0xD4
  lwz       r3, 0x180(r29)
  stb       r0, 0xB0(r3)

.loc_0xD4:
  li        r3, 0x1
  cmpwi     r3, 0x5
  beq-      .loc_0xE8
  lwz       r3, 0x184(r29)
  stb       r0, 0xB0(r3)

.loc_0xE8:
  li        r3, 0x2
  cmpwi     r3, 0x5
  beq-      .loc_0xFC
  lwz       r3, 0x188(r29)
  stb       r0, 0xB0(r3)

.loc_0xFC:
  li        r3, 0x3
  cmpwi     r3, 0x5
  beq-      .loc_0x110
  lwz       r3, 0x18C(r29)
  stb       r0, 0xB0(r3)

.loc_0x110:
  li        r3, 0x4
  cmpwi     r3, 0x5
  beq-      .loc_0x12C
  lwz       r3, 0x190(r29)
  stb       r0, 0xB0(r3)
  b         .loc_0x12C
  stb       r0, 0xB0(r3)

.loc_0x12C:
  li        r3, 0x6
  cmpwi     r3, 0x5
  beq-      .loc_0x140
  lwz       r3, 0x198(r29)
  stb       r0, 0xB0(r3)

.loc_0x140:
  lwz       r3, 0x17C(r29)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
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
 * Address:	803CCA30
 * Size:	000C9C
 */
void setOptionParamToScreen___Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x1C0(r1)
  mflr      r0
  stw       r0, 0x1C4(r1)
  stmw      r27, 0x1AC(r1)
  mr        r31, r3
  lbz       r0, 0xC9(r3)
  cmplwi    r0, 0
  beq-      .loc_0x15C
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0x198
  lwz       r29, 0x110(r31)
  stw       r7, 0x8C(r1)
  mr        r3, r29
  lbz       r5, 0x8C(r1)
  lbz       r0, 0x8D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x8E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x8F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0x190(r1)
  stw       r6, 0x88(r1)
  lbz       r5, 0x88(r1)
  lbz       r0, 0x89(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x8A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x8B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0x194(r1)
  stw       r0, 0x198(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0x19C
  stw       r0, 0x19C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x188
  lwz       r29, 0x114(r31)
  stw       r7, 0x84(r1)
  mr        r3, r29
  lbz       r5, 0x84(r1)
  lbz       r0, 0x85(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x86(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x87(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x180(r1)
  stw       r6, 0x80(r1)
  lbz       r5, 0x80(r1)
  lbz       r0, 0x81(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x82(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x83(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x184(r1)
  stw       r0, 0x188(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x18C
  stw       r0, 0x18C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x294

.loc_0x15C:
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x178
  lwz       r29, 0x110(r31)
  stw       r7, 0x7C(r1)
  mr        r3, r29
  lbz       r5, 0x7C(r1)
  lbz       r0, 0x7D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x7E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x7F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x170(r1)
  stw       r6, 0x78(r1)
  lbz       r5, 0x78(r1)
  lbz       r0, 0x79(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x7A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x7B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x174(r1)
  stw       r0, 0x178(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x17C
  stw       r0, 0x17C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0x168
  lwz       r29, 0x114(r31)
  stw       r7, 0x74(r1)
  mr        r3, r29
  lbz       r5, 0x74(r1)
  lbz       r0, 0x75(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x76(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x77(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0x160(r1)
  stw       r6, 0x70(r1)
  lbz       r5, 0x70(r1)
  lbz       r0, 0x71(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x72(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x73(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0x164(r1)
  stw       r0, 0x168(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0x16C
  stw       r0, 0x16C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x294:
  lwz       r0, 0xCC(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x494
  bge-      .loc_0x2B0
  cmpwi     r0, 0
  bge-      .loc_0x2BC
  b         .loc_0x840

.loc_0x2B0:
  cmpwi     r0, 0x3
  bge-      .loc_0x840
  b         .loc_0x66C

.loc_0x2BC:
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0x158
  lwz       r29, 0x118(r31)
  stw       r7, 0x6C(r1)
  mr        r3, r29
  lbz       r5, 0x6C(r1)
  lbz       r0, 0x6D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x6E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x6F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0x150(r1)
  stw       r6, 0x68(r1)
  lbz       r5, 0x68(r1)
  lbz       r0, 0x69(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x6A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x6B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0x154(r1)
  stw       r0, 0x158(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0x15C
  stw       r0, 0x15C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x148
  lwz       r29, 0x11C(r31)
  stw       r7, 0x64(r1)
  mr        r3, r29
  lbz       r5, 0x64(r1)
  lbz       r0, 0x65(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x66(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x67(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x140(r1)
  stw       r6, 0x60(r1)
  lbz       r5, 0x60(r1)
  lbz       r0, 0x61(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x62(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x63(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x144(r1)
  stw       r0, 0x148(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x14C
  stw       r0, 0x14C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x138
  lwz       r29, 0x120(r31)
  stw       r7, 0x5C(r1)
  mr        r3, r29
  lbz       r5, 0x5C(r1)
  lbz       r0, 0x5D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x5E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x5F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x130(r1)
  stw       r6, 0x58(r1)
  lbz       r5, 0x58(r1)
  lbz       r0, 0x59(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x5A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x5B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x134(r1)
  stw       r0, 0x138(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x13C
  stw       r0, 0x13C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x840

.loc_0x494:
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x128
  lwz       r29, 0x118(r31)
  stw       r7, 0x54(r1)
  mr        r3, r29
  lbz       r5, 0x54(r1)
  lbz       r0, 0x55(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x56(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x57(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x120(r1)
  stw       r6, 0x50(r1)
  lbz       r5, 0x50(r1)
  lbz       r0, 0x51(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x52(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x53(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x124(r1)
  stw       r0, 0x128(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x12C
  stw       r0, 0x12C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0x118
  lwz       r29, 0x11C(r31)
  stw       r7, 0x4C(r1)
  mr        r3, r29
  lbz       r5, 0x4C(r1)
  lbz       r0, 0x4D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x4E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x4F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0x110(r1)
  stw       r6, 0x48(r1)
  lbz       r5, 0x48(r1)
  lbz       r0, 0x49(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x4A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x4B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0x114(r1)
  stw       r0, 0x118(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0x11C
  stw       r0, 0x11C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0x108
  lwz       r29, 0x120(r31)
  stw       r7, 0x44(r1)
  mr        r3, r29
  lbz       r5, 0x44(r1)
  lbz       r0, 0x45(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x46(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x47(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0x100(r1)
  stw       r6, 0x40(r1)
  lbz       r5, 0x40(r1)
  lbz       r0, 0x41(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x42(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x43(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0x104(r1)
  stw       r0, 0x108(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0x10C
  stw       r0, 0x10C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x840

.loc_0x66C:
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0xF8
  lwz       r29, 0x118(r31)
  stw       r7, 0x3C(r1)
  mr        r3, r29
  lbz       r5, 0x3C(r1)
  lbz       r0, 0x3D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x3E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x3F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0xF0(r1)
  stw       r6, 0x38(r1)
  lbz       r5, 0x38(r1)
  lbz       r0, 0x39(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x3A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x3B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0xF4(r1)
  stw       r0, 0xF8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0xFC
  stw       r0, 0xFC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0xE8
  lwz       r29, 0x11C(r31)
  stw       r7, 0x34(r1)
  mr        r3, r29
  lbz       r5, 0x34(r1)
  lbz       r0, 0x35(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x36(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x37(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0xE0(r1)
  stw       r6, 0x30(r1)
  lbz       r5, 0x30(r1)
  lbz       r0, 0x31(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x32(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x33(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0xE4(r1)
  stw       r0, 0xE8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0xEC
  stw       r0, 0xEC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0xD8
  lwz       r29, 0x120(r31)
  stw       r7, 0x2C(r1)
  mr        r3, r29
  lbz       r5, 0x2C(r1)
  lbz       r0, 0x2D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x2E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x2F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0xD0(r1)
  stw       r6, 0x28(r1)
  lbz       r5, 0x28(r1)
  lbz       r0, 0x29(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x2A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x2B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0xD4(r1)
  stw       r0, 0xD8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0xDC
  stw       r0, 0xDC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0x840:
  mr        r28, r31
  li        r27, 0
  li        r30, 0x1
  li        r29, 0

.loc_0x850:
  lwz       r0, 0xD0(r31)
  cmpw      r27, r0
  bge-      .loc_0x880
  lwz       r3, 0x154(r28)
  li        r4, 0xFF
  stb       r30, 0xB0(r3)
  lwz       r3, 0x154(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x888

.loc_0x880:
  lwz       r3, 0x154(r28)
  stb       r29, 0xB0(r3)

.loc_0x888:
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0xA
  blt+      .loc_0x850
  mr        r28, r31
  li        r27, 0
  li        r29, 0x1
  li        r30, 0

.loc_0x8A8:
  lwz       r0, 0xD4(r31)
  cmpw      r27, r0
  bge-      .loc_0x8D8
  lwz       r3, 0x12C(r28)
  li        r4, 0xFF
  stb       r29, 0xB0(r3)
  lwz       r3, 0x12C(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x8E0

.loc_0x8D8:
  lwz       r3, 0x12C(r28)
  stb       r30, 0xB0(r3)

.loc_0x8E0:
  addi      r27, r27, 0x1
  addi      r28, r28, 0x4
  cmpwi     r27, 0xA
  blt+      .loc_0x8A8
  lbz       r0, 0xD8(r31)
  cmplwi    r0, 0
  beq-      .loc_0xA38
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0xC8
  lwz       r29, 0x124(r31)
  stw       r7, 0x24(r1)
  mr        r3, r29
  lbz       r5, 0x24(r1)
  lbz       r0, 0x25(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x26(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x27(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0xC0(r1)
  stw       r6, 0x20(r1)
  lbz       r5, 0x20(r1)
  lbz       r0, 0x21(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x22(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x23(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0xC4(r1)
  stw       r0, 0xC8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0xCC
  stw       r0, 0xCC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0xB8
  lwz       r29, 0x128(r31)
  stw       r7, 0x1C(r1)
  mr        r3, r29
  lbz       r5, 0x1C(r1)
  lbz       r0, 0x1D(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x1E(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x1F(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0xB0(r1)
  stw       r6, 0x18(r1)
  lbz       r5, 0x18(r1)
  lbz       r0, 0x19(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x1A(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x1B(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0xB4(r1)
  stw       r0, 0xB8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0xBC
  stw       r0, 0xBC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xB70

.loc_0xA38:
  lwz       r7, 0x1D4(r31)
  addi      r4, r1, 0xA8
  lwz       r29, 0x124(r31)
  stw       r7, 0x14(r1)
  mr        r3, r29
  lbz       r5, 0x14(r1)
  lbz       r0, 0x15(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0x16(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0x17(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1D8(r31)
  stw       r7, 0xA0(r1)
  stw       r6, 0x10(r1)
  lbz       r5, 0x10(r1)
  lbz       r0, 0x11(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0x12(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0x13(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1DC(r31)
  stw       r6, 0xA4(r1)
  stw       r0, 0xA8(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1E0(r31)
  mr        r3, r29
  addi      r4, r1, 0xAC
  stw       r0, 0xAC(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     
  lwz       r7, 0x1C4(r31)
  addi      r4, r1, 0x98
  lwz       r29, 0x128(r31)
  stw       r7, 0xC(r1)
  mr        r3, r29
  lbz       r5, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r5, 0x104(r29)
  lbz       r5, 0xE(r1)
  stb       r0, 0x105(r29)
  lbz       r0, 0xF(r1)
  stb       r5, 0x106(r29)
  stb       r0, 0x107(r29)
  lwz       r6, 0x1C8(r31)
  stw       r7, 0x90(r1)
  stw       r6, 0x8(r1)
  lbz       r5, 0x8(r1)
  lbz       r0, 0x9(r1)
  stb       r5, 0x108(r29)
  lbz       r5, 0xA(r1)
  stb       r0, 0x109(r29)
  lbz       r0, 0xB(r1)
  stb       r5, 0x10A(r29)
  stb       r0, 0x10B(r29)
  lwz       r0, 0x1CC(r31)
  stw       r6, 0x94(r1)
  stw       r0, 0x98(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x1D0(r31)
  mr        r3, r29
  addi      r4, r1, 0x9C
  stw       r0, 0x9C(r1)
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA4(r12)
  mtctr     r12
  bctrl     

.loc_0xB70:
  lwz       r0, 0x104(r31)
  cmplwi    r0, 0x6
  bgt-      .loc_0xC7C
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x7894
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  lbz       r0, 0xC9(r31)
  cmplwi    r0, 0
  beq-      .loc_0xBAC
  lwz       r0, 0x110(r31)
  stw       r0, 0x258(r31)
  b         .loc_0xBB4

.loc_0xBAC:
  lwz       r0, 0x114(r31)
  stw       r0, 0x258(r31)

.loc_0xBB4:
  li        r0, 0
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88
  lwz       r3, 0xCC(r31)
  li        r0, 0
  rlwinm    r3,r3,2,0,29
  add       r3, r31, r3
  lwz       r3, 0x118(r3)
  stw       r3, 0x258(r31)
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88
  li        r3, 0
  stw       r3, 0x258(r31)
  lwz       r0, 0xD0(r31)
  cmpwi     r0, 0
  bne-      .loc_0xBFC
  stw       r3, 0x2A4(r31)
  b         .loc_0xC88

.loc_0xBFC:
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  lwz       r0, 0x150(r3)
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88
  li        r3, 0
  stw       r3, 0x258(r31)
  lwz       r0, 0xD4(r31)
  cmpwi     r0, 0
  bne-      .loc_0xC2C
  stw       r3, 0x2A4(r31)
  b         .loc_0xC88

.loc_0xC2C:
  rlwinm    r0,r0,2,0,29
  add       r3, r31, r0
  lwz       r0, 0x128(r3)
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88
  lbz       r0, 0xD8(r31)
  cmplwi    r0, 0
  beq-      .loc_0xC58
  lwz       r0, 0x124(r31)
  stw       r0, 0x258(r31)
  b         .loc_0xC60

.loc_0xC58:
  lwz       r0, 0x128(r31)
  stw       r0, 0x258(r31)

.loc_0xC60:
  li        r0, 0
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88
  li        r0, 0
  stw       r0, 0x258(r31)
  stw       r0, 0x2A4(r31)
  b         .loc_0xC88

.loc_0xC7C:
  li        r0, 0
  stw       r0, 0x258(r31)
  stw       r0, 0x2A4(r31)

.loc_0xC88:
  lmw       r27, 0x1AC(r1)
  lwz       r0, 0x1C4(r1)
  mtlr      r0
  addi      r1, r1, 0x1C0
  blr
*/
}

/*
 * --INFO--
 * Address:	803CD6CC
 * Size:	000008
 */
void getName__Q33ebi6Screen7TOptionFv(void)
{
/*
.loc_0x0:
  addi      r3, r2, 0x16EC
  blr
*/
}

/*
 * --INFO--
 * Address:	803CD6D4
 * Size:	000004
 */
void doKillScreen__Q33ebi6Screen11TScreenBaseFv(void)
{
/*
.loc_0x0:
  blr
*/
}