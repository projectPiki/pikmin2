

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
 * Address:	80327D48
 * Size:	000074
 */
void og::newScreen::ObjChallenge1P::__ct( (char const *))
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
  bl        0x4B3C
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x64EC
  mr        r3, r30
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x10
  stw       r4, 0x18(r30)
  stw       r31, 0x14(r30)
  stw       r0, 0x60(r30)
  stw       r0, 0x64(r30)
  stw       r0, 0x68(r30)
  stw       r0, 0x6C(r30)
  stw       r0, 0x70(r30)
  stw       r0, 0x74(r30)
  stw       r0, 0x78(r30)
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
 * Address:	80327DBC
 * Size:	000068
 */
void og::newScreen::ObjChallenge1P::__dt(void)
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
  beq-      .loc_0x4C
  lis       r5, 0x804E
  li        r4, 0
  subi      r5, r5, 0x64EC
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0x18(r30)
  bl        0x4B44
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x303D50

.loc_0x4C:
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
 * Address:	80327E24
 * Size:	000678
 */
void og::newScreen::ObjChallenge1P::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0xBD8
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  bl        0x12C158
  lis       r4, 0x4F
  lis       r6, 0x414C
  li        r5, 0x4348
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x3150
  bl        -0x18B50
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x5C
  stw       r28, 0x60(r29)
  b         .loc_0x174

.loc_0x5C:
  lis       r4, 0x4F
  lis       r6, 0x554D
  mr        r3, r28
  li        r5, 0x44
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4D59
  bl        -0x18B7C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x160
  li        r3, 0x78
  bl        -0x304004
  cmplwi    r3, 0
  beq-      .loc_0x158
  lis       r4, 0x804B
  lis       r5, 0x804C
  addi      r12, r4, 0x1148
  lis       r4, 0x804B
  stw       r12, 0x0(r3)
  li        r11, 0
  addi      r0, r5, 0xF2C
  lfs       f3, -0x538(r2)
  stw       r11, 0x4(r3)
  li        r10, 0x4D2
  li        r9, 0x32
  lfs       f2, -0x534(r2)
  stw       r0, 0x0(r3)
  li        r8, 0x1
  li        r7, 0x2
  li        r6, 0xA
  stfs      f3, 0x8(r3)
  addi      r5, r4, 0x10C4
  lfs       f1, -0x530(r2)
  li        r4, 0x9EC
  stw       r11, 0xC(r3)
  li        r0, 0x1092
  lfs       f0, -0x52C(r2)
  stw       r11, 0x14(r3)
  stw       r10, 0x10(r3)
  stw       r9, 0x18(r3)
  stb       r11, 0x1C(r3)
  stw       r11, 0x20(r3)
  stfs      f2, 0x24(r3)
  stw       r8, 0x28(r3)
  stw       r7, 0x2C(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x34(r3)
  stb       r8, 0x38(r3)
  stfs      f2, 0x3C(r3)
  stw       r8, 0x40(r3)
  stw       r7, 0x44(r3)
  stw       r6, 0x48(r3)
  stw       r6, 0x4C(r3)
  stb       r8, 0x50(r3)
  stw       r12, 0x68(r3)
  stw       r11, 0x6C(r3)
  stw       r5, 0x68(r3)
  stfs      f1, 0x74(r3)
  stfs      f1, 0x70(r3)
  stw       r4, 0x54(r3)
  stb       r11, 0x58(r3)
  stfs      f0, 0x5C(r3)
  stw       r0, 0x64(r3)
  stfs      f3, 0x60(r3)

.loc_0x158:
  stw       r3, 0x60(r29)
  b         .loc_0x174

.loc_0x160:
  addi      r3, r31, 0xC
  addi      r5, r31, 0x24
  li        r4, 0x7A
  crclr     6, 0x6
  bl        -0x2FD954

.loc_0x174:
  li        r3, 0x198
  bl        -0x3040F8
  mr.       r0, r3
  beq-      .loc_0x18C
  bl        -0x2499C
  mr        r0, r3

.loc_0x18C:
  stw       r0, 0x68(r29)
  li        r3, 0x158
  bl        -0x304114
  mr.       r28, r3
  beq-      .loc_0x1C0
  bl        0x10CDE8
  lis       r3, 0x804D
  li        r0, 0
  addi      r3, r3, 0x7E70
  stw       r3, 0x0(r28)
  stw       r0, 0x148(r28)
  stw       r0, 0x14C(r28)
  stw       r0, 0x150(r28)

.loc_0x1C0:
  stw       r28, 0x6C(r29)
  li        r3, 0x158
  bl        -0x304148
  mr.       r28, r3
  beq-      .loc_0x1F4
  bl        0x10CDB4
  lis       r3, 0x804D
  li        r0, 0
  addi      r3, r3, 0x7E70
  stw       r3, 0x0(r28)
  stw       r0, 0x148(r28)
  stw       r0, 0x14C(r28)
  stw       r0, 0x150(r28)

.loc_0x1F4:
  stw       r28, 0x70(r29)
  li        r3, 0x1A8
  bl        -0x30417C
  mr.       r28, r3
  beq-      .loc_0x218
  bl        -0x23E10
  lis       r3, 0x804D
  addi      r0, r3, 0x7BF8
  stw       r0, 0x0(r28)

.loc_0x218:
  stw       r28, 0x74(r29)
  li        r3, 0x148
  bl        -0x3041A0
  mr.       r0, r3
  beq-      .loc_0x234
  bl        0x10CD5C
  mr        r0, r3

.loc_0x234:
  stw       r0, 0x78(r29)
  li        r3, 0xC
  bl        -0x3041BC
  mr.       r0, r3
  beq-      .loc_0x254
  li        r4, 0x5
  bl        -0x190E8
  mr        r0, r3

.loc_0x254:
  stw       r0, 0x64(r29)
  mr        r7, r30
  addi      r4, r31, 0x4C
  lis       r6, 0x104
  lwz       r3, 0x64(r29)
  lwz       r5, 0x68(r29)
  bl        -0x19070
  lwz       r3, 0x64(r29)
  mr        r7, r30
  lwz       r5, 0x6C(r29)
  addi      r4, r31, 0x58
  lis       r6, 0x104
  bl        -0x19088
  lwz       r3, 0x64(r29)
  mr        r7, r30
  lwz       r5, 0x70(r29)
  addi      r4, r31, 0x58
  lis       r6, 0x104
  bl        -0x190A0
  lwz       r3, 0x64(r29)
  mr        r7, r30
  lwz       r5, 0x74(r29)
  addi      r4, r31, 0x64
  lis       r6, 0x104
  bl        -0x190B8
  lwz       r3, 0x64(r29)
  mr        r7, r30
  lwz       r5, 0x78(r29)
  addi      r4, r31, 0x74
  lis       r6, 0x104
  bl        -0x190D0
  lwz       r3, 0x68(r29)
  mr        r4, r30
  bl        -0x249FC
  lwz       r4, 0x60(r29)
  li        r5, 0
  lwz       r3, 0x6C(r29)
  addi      r4, r4, 0x24
  bl        -0x21168
  lwz       r4, 0x60(r29)
  li        r5, 0x1
  lwz       r3, 0x70(r29)
  addi      r4, r4, 0x3C
  bl        -0x2117C
  lwz       r3, 0x74(r29)
  mr        r4, r30
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA0(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x68(r29)
  li        r4, 0x1
  li        r5, 0x1
  bl        -0x244B8
  stw       r30, 0x8(r1)
  lis       r3, 0x6F6B
  addi      r6, r3, 0x6F31
  li        r5, 0x5070
  lwz       r4, 0x60(r29)
  li        r8, 0x6
  lwz       r3, 0x78(r29)
  li        r9, 0x1
  addi      r7, r4, 0x54
  li        r10, 0x1
  bl        -0x1BB70
  li        r0, 0x1814
  lis       r4, 0x6164
  stw       r0, 0x94(r3)
  lis       r3, 0x50
  addi      r6, r4, 0x5031
  li        r8, 0x6
  stw       r30, 0x8(r1)
  addi      r5, r3, 0x6465
  li        r9, 0x1
  li        r10, 0x1
  lwz       r4, 0x60(r29)
  lwz       r3, 0x78(r29)
  addi      r7, r4, 0x64
  bl        -0x1BBA8
  lfs       f1, 0x44(r29)
  bl        -0x26666C
  stw       r3, 0x40(r29)
  lis       r3, 0x696D
  addi      r6, r3, 0x6531
  addi      r7, r29, 0x40
  stw       r30, 0x8(r1)
  li        r5, 0x5074
  li        r8, 0x6
  li        r9, 0x1
  lwz       r3, 0x78(r29)
  li        r10, 0x1
  bl        -0x1BBDC
  li        r4, 0x1
  mr        r31, r3
  bl        -0x1C914
  lwz       r3, 0x78(r29)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f1, -0x538(r2)
  addi      r28, r4, 0x3F74
  lfs       f0, -0x534(r2)
  stw       r3, 0x24(r28)
  cmplwi    r3, 0
  lfs       f4, 0xD4(r3)
  stfs      f4, 0x28(r28)
  lfs       f3, 0xD8(r3)
  stfs      f3, 0x2C(r28)
  lfs       f2, 0xCC(r3)
  stfs      f2, 0x30(r28)
  lfs       f2, 0xD0(r3)
  stfs      f2, 0x34(r28)
  stfs      f1, 0x38(r28)
  stfs      f1, 0x3C(r28)
  stfs      f0, 0x40(r28)
  stfs      f0, 0x44(r28)
  beq-      .loc_0x494
  fadds     f0, f4, f1
  fadds     f1, f3, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x30(r28)
  lfs       f0, 0x40(r28)
  lfs       f3, 0x34(r28)
  lfs       f2, 0x44(r28)
  fmuls     f0, f1, f0
  lwz       r3, 0x24(r28)
  fmuls     f1, f3, f2
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x494:
  lwz       r3, 0x78(r29)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f2, -0x528(r2)
  addi      r28, r4, 0x3F74
  lfs       f1, -0x524(r2)
  stw       r3, 0x0(r28)
  cmplwi    r3, 0
  lfs       f0, -0x534(r2)
  lfs       f5, 0xD4(r3)
  stfs      f5, 0x4(r28)
  lfs       f4, 0xD8(r3)
  stfs      f4, 0x8(r28)
  lfs       f3, 0xCC(r3)
  stfs      f3, 0xC(r28)
  lfs       f3, 0xD0(r3)
  stfs      f3, 0x10(r28)
  stfs      f2, 0x14(r28)
  stfs      f1, 0x18(r28)
  stfs      f0, 0x1C(r28)
  stfs      f0, 0x20(r28)
  beq-      .loc_0x564
  fadds     f0, f5, f2
  fadds     f1, f4, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r28)
  lis       r3, 0x8051
  lfs       f0, 0x1C(r28)
  addi      r3, r3, 0x3F74
  lfs       f3, 0x10(r28)
  lfs       f2, 0x20(r28)
  fmuls     f0, f1, f0
  lwz       r3, 0x0(r3)
  fmuls     f1, f3, f2
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x564:
  lwz       r3, 0x78(r29)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f2, -0x520(r2)
  addi      r28, r4, 0x3F74
  lfs       f1, -0x51C(r2)
  stw       r3, 0x48(r28)
  cmplwi    r3, 0
  lfs       f0, -0x534(r2)
  lfs       f5, 0xD4(r3)
  stfs      f5, 0x4C(r28)
  lfs       f4, 0xD8(r3)
  stfs      f4, 0x50(r28)
  lfs       f3, 0xCC(r3)
  stfs      f3, 0x54(r28)
  lfs       f3, 0xD0(r3)
  stfs      f3, 0x58(r28)
  stfs      f2, 0x5C(r28)
  stfs      f1, 0x60(r28)
  stfs      f0, 0x64(r28)
  stfs      f0, 0x68(r28)
  beq-      .loc_0x62C
  fadds     f0, f5, f2
  fadds     f1, f4, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x54(r28)
  lfs       f0, 0x64(r28)
  lfs       f3, 0x58(r28)
  lfs       f2, 0x68(r28)
  fmuls     f0, f1, f0
  lwz       r3, 0x48(r28)
  fmuls     f1, f3, f2
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x62C:
  lwz       r4, 0x60(r29)
  mr        r3, r29
  lwz       r4, 0x14(r4)
  bl        0x481C
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  mr        r5, r31
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
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
 * Size:	0001CC
 */
void og::newScreen::ObjChallenge1P::commonUpdate(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8032849C
 * Size:	0001D4
 */
void og::newScreen::ObjChallenge1P::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  mr        r29, r3
  lwz       r4, 0x60(r3)
  cmplwi    r4, 0
  beq-      .loc_0x78
  lfs       f1, 0x5C(r4)
  lfs       f2, 0x60(r4)
  bl        0x45DC
  lwz       r4, 0x60(r29)
  lwz       r3, 0x68(r29)
  addi      r4, r4, 0x24
  bl        -0x24B10
  lwz       r5, 0x60(r29)
  lbz       r0, 0x38(r5)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lwz       r3, 0x74(r29)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x24
  bl        -0x24224
  b         .loc_0x78

.loc_0x68:
  lwz       r3, 0x74(r29)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x3C
  bl        -0x24238

.loc_0x78:
  lfs       f2, -0x518(r2)
  lfs       f1, 0x3C(r29)
  lfs       f0, -0x538(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x94
  fneg      f1, f1

.loc_0x94:
  lfs       f0, -0x514(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f4, -0x534(r2)
  fmuls     f0, f1, f0
  addi      r30, r3, 0x4
  lfs       f1, -0x538(r2)
  lfs       f3, -0x50C(r2)
  fctiwz    f6, f0
  lfs       f0, 0x2440(r2)
  lfs       f5, -0x510(r2)
  fadds     f0, f1, f0
  lfs       f2, 0x243C(r2)
  stfd      f6, 0x8(r1)
  lwz       r3, 0x78(r29)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r30, r0
  fadds     f1, f4, f1
  fmuls     f1, f1, f3
  fmuls     f1, f5, f1
  fadds     f1, f1, f2
  stfs      f1, 0x140(r3)
  stfs      f0, 0x144(r3)
  bl        0xFAC94
  lhz       r31, 0x4(r3)
  bl        0xFAC8C
  lhz       r3, 0x6(r3)
  lis       r0, 0x4330
  stw       r31, 0x14(r1)
  li        r4, 0x7A
  lfd       f4, -0x500(r2)
  stw       r0, 0x10(r1)
  lfs       f2, -0x50C(r2)
  lfd       f0, 0x10(r1)
  stw       r3, 0x1C(r1)
  fsubs     f1, f0, f4
  lwz       r3, 0x64(r29)
  stw       r0, 0x18(r1)
  lfs       f3, -0x538(r2)
  lfd       f0, 0x18(r1)
  fmuls     f1, f1, f2
  fsubs     f0, f0, f4
  fmuls     f2, f0, f2
  bl        -0x194DC
  lfs       f1, -0x534(r2)
  lfs       f0, 0x3C(r29)
  lfs       f3, -0x518(r2)
  fadds     f2, f1, f0
  lfs       f1, -0x50C(r2)
  lfs       f0, -0x538(r2)
  fmuls     f2, f3, f2
  fmuls     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x174
  fneg      f2, f2

.loc_0x174:
  lfs       f0, -0x514(r2)
  lfs       f1, -0x534(r2)
  fmuls     f0, f2, f0
  lfs       f2, -0x508(r2)
  lwz       r3, 0x64(r29)
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r30, r0
  fneg      f0, f0
  fsubs     f0, f1, f0
  fmadds    f1, f2, f0, f1
  bl        -0x19584
  lwz       r3, 0x64(r29)
  bl        -0x194A4
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
 * Address:	80328670
 * Size:	000030
 */
void og::newScreen::ObjChallenge1P::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x64(r3)
  cmplwi    r3, 0
  beq-      .loc_0x20
  addi      r4, r4, 0x190
  bl        -0x19474

.loc_0x20:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803286A0
 * Size:	000228
 */
void og::newScreen::ObjChallenge1P::doUpdateFadein(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  li        r31, 0
  stw       r30, 0x38(r1)
  mr        r30, r3
  lis       r3, 0x8051
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x38(r30)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x38(r30)
  lfs       f0, 0x38(r30)
  lfs       f1, 0x3FE0(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x54
  stfs      f1, 0x38(r30)
  li        r31, 0x1

.loc_0x54:
  lis       r3, 0x8051
  lfs       f1, 0x38(r30)
  lfs       f0, 0x3FE0(r3)
  fdivs     f0, f1, f0
  stfs      f0, 0x3C(r30)
  lwz       r4, 0x60(r30)
  cmplwi    r4, 0
  beq-      .loc_0xC8
  lfs       f1, 0x5C(r4)
  mr        r3, r30
  lfs       f2, 0x60(r4)
  bl        0x4388
  lwz       r4, 0x60(r30)
  lwz       r3, 0x68(r30)
  addi      r4, r4, 0x24
  bl        -0x24D64
  lwz       r5, 0x60(r30)
  lbz       r0, 0x38(r5)
  cmplwi    r0, 0
  beq-      .loc_0xB8
  lwz       r3, 0x74(r30)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x24
  bl        -0x24478
  b         .loc_0xC8

.loc_0xB8:
  lwz       r3, 0x74(r30)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x3C
  bl        -0x2448C

.loc_0xC8:
  lfs       f2, -0x518(r2)
  lfs       f1, 0x3C(r30)
  lfs       f0, -0x538(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xE4
  fneg      f1, f1

.loc_0xE4:
  lfs       f0, -0x514(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f4, -0x534(r2)
  fmuls     f0, f1, f0
  addi      r28, r3, 0x4
  lfs       f1, -0x538(r2)
  lfs       f3, -0x50C(r2)
  fctiwz    f6, f0
  lfs       f0, 0x2440(r2)
  lfs       f5, -0x510(r2)
  fadds     f0, f1, f0
  lfs       f2, 0x243C(r2)
  stfd      f6, 0x8(r1)
  lwz       r3, 0x78(r30)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r28, r0
  fadds     f1, f4, f1
  fmuls     f1, f1, f3
  fmuls     f1, f5, f1
  fadds     f1, f1, f2
  stfs      f1, 0x140(r3)
  stfs      f0, 0x144(r3)
  bl        0xFAA40
  lhz       r29, 0x4(r3)
  bl        0xFAA38
  lhz       r3, 0x6(r3)
  lis       r0, 0x4330
  stw       r29, 0x14(r1)
  li        r4, 0x7A
  lfd       f4, -0x500(r2)
  stw       r0, 0x10(r1)
  lfs       f2, -0x50C(r2)
  lfd       f0, 0x10(r1)
  stw       r3, 0x1C(r1)
  fsubs     f1, f0, f4
  lwz       r3, 0x64(r30)
  stw       r0, 0x18(r1)
  lfs       f3, -0x538(r2)
  lfd       f0, 0x18(r1)
  fmuls     f1, f1, f2
  fsubs     f0, f0, f4
  fmuls     f2, f0, f2
  bl        -0x19730
  lfs       f1, -0x534(r2)
  lfs       f0, 0x3C(r30)
  lfs       f3, -0x518(r2)
  fadds     f2, f1, f0
  lfs       f1, -0x50C(r2)
  lfs       f0, -0x538(r2)
  fmuls     f2, f3, f2
  fmuls     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1C4
  fneg      f2, f2

.loc_0x1C4:
  lfs       f0, -0x514(r2)
  lfs       f1, -0x534(r2)
  fmuls     f0, f2, f0
  lfs       f2, -0x508(r2)
  lwz       r3, 0x64(r30)
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r28, r0
  fneg      f0, f0
  fsubs     f0, f1, f0
  fmadds    f1, f2, f0, f1
  bl        -0x197D8
  lwz       r3, 0x64(r30)
  bl        -0x196F8
  lwz       r0, 0x44(r1)
  mr        r3, r31
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
 * Address:	803288C8
 * Size:	000004
 */
void og::newScreen::ObjChallenge1P::doUpdateFadeinFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803288CC
 * Size:	00000C
 */
void og::newScreen::ObjChallenge1P::doUpdateFinish(void)
{
/*
.loc_0x0:
  lfs       f0, -0x538(r2)
  stfs      f0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803288D8
 * Size:	000230
 */
void og::newScreen::ObjChallenge1P::doUpdateFadeout(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  li        r31, 0
  stw       r30, 0x38(r1)
  mr        r30, r3
  lis       r3, 0x8051
  stw       r29, 0x34(r1)
  addi      r3, r3, 0x3FE0
  stw       r28, 0x30(r1)
  lwz       r4, -0x6514(r13)
  lfs       f1, 0x38(r30)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x38(r30)
  lfs       f0, 0x38(r30)
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x58
  stfs      f1, 0x38(r30)
  li        r31, 0x1

.loc_0x58:
  lfs       f1, 0x38(r30)
  lfs       f0, 0x4(r3)
  lfs       f2, -0x534(r2)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  stfs      f0, 0x3C(r30)
  lwz       r4, 0x60(r30)
  cmplwi    r4, 0
  beq-      .loc_0xD0
  lfs       f1, 0x5C(r4)
  mr        r3, r30
  lfs       f2, 0x60(r4)
  bl        0x4148
  lwz       r4, 0x60(r30)
  lwz       r3, 0x68(r30)
  addi      r4, r4, 0x24
  bl        -0x24FA4
  lwz       r5, 0x60(r30)
  lbz       r0, 0x38(r5)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  lwz       r3, 0x74(r30)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x24
  bl        -0x246B8
  b         .loc_0xD0

.loc_0xC0:
  lwz       r3, 0x74(r30)
  addi      r4, r5, 0x8
  addi      r5, r5, 0x3C
  bl        -0x246CC

.loc_0xD0:
  lfs       f2, -0x518(r2)
  lfs       f1, 0x3C(r30)
  lfs       f0, -0x538(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xEC
  fneg      f1, f1

.loc_0xEC:
  lfs       f0, -0x514(r2)
  lis       r3, 0x8050
  addi      r3, r3, 0x71A0
  lfs       f4, -0x534(r2)
  fmuls     f0, f1, f0
  addi      r28, r3, 0x4
  lfs       f1, -0x538(r2)
  lfs       f3, -0x50C(r2)
  fctiwz    f6, f0
  lfs       f0, 0x2440(r2)
  lfs       f5, -0x510(r2)
  fadds     f0, f1, f0
  lfs       f2, 0x243C(r2)
  stfd      f6, 0x8(r1)
  lwz       r3, 0x78(r30)
  lwz       r0, 0xC(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f1, r28, r0
  fadds     f1, f4, f1
  fmuls     f1, f1, f3
  fmuls     f1, f5, f1
  fadds     f1, f1, f2
  stfs      f1, 0x140(r3)
  stfs      f0, 0x144(r3)
  bl        0xFA800
  lhz       r29, 0x4(r3)
  bl        0xFA7F8
  lhz       r3, 0x6(r3)
  lis       r0, 0x4330
  stw       r29, 0x14(r1)
  li        r4, 0x7A
  lfd       f4, -0x500(r2)
  stw       r0, 0x10(r1)
  lfs       f2, -0x50C(r2)
  lfd       f0, 0x10(r1)
  stw       r3, 0x1C(r1)
  fsubs     f1, f0, f4
  lwz       r3, 0x64(r30)
  stw       r0, 0x18(r1)
  lfs       f3, -0x538(r2)
  lfd       f0, 0x18(r1)
  fmuls     f1, f1, f2
  fsubs     f0, f0, f4
  fmuls     f2, f0, f2
  bl        -0x19970
  lfs       f1, -0x534(r2)
  lfs       f0, 0x3C(r30)
  lfs       f3, -0x518(r2)
  fadds     f2, f1, f0
  lfs       f1, -0x50C(r2)
  lfs       f0, -0x538(r2)
  fmuls     f2, f3, f2
  fmuls     f2, f2, f1
  fcmpo     cr0, f2, f0
  bge-      .loc_0x1CC
  fneg      f2, f2

.loc_0x1CC:
  lfs       f0, -0x514(r2)
  lfs       f1, -0x534(r2)
  fmuls     f0, f2, f0
  lfs       f2, -0x508(r2)
  lwz       r3, 0x64(r30)
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r28, r0
  fneg      f0, f0
  fsubs     f0, f1, f0
  fmadds    f1, f2, f0, f1
  bl        -0x19A18
  lwz       r3, 0x64(r30)
  bl        -0x19938
  lwz       r0, 0x44(r1)
  mr        r3, r31
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
 * Address:	80328B08
 * Size:	000004
 */
void og::newScreen::ObjChallenge1P::doUpdateFadeoutFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80328B0C
 * Size:	000074
 */
void og::newScreen::ObjChallenge1P::doStart( (Screen::StartSceneArg const *))
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
  bl        0x3F5C
  cmplwi    r31, 0
  beq-      .loc_0x50
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2727
  bne-      .loc_0x50
  lfs       f0, 0x4(r31)
  stfs      f0, 0x50(r30)
  b         .loc_0x58

.loc_0x50:
  lfs       f0, -0x538(r2)
  stfs      f0, 0x50(r30)

.loc_0x58:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80328B80
 * Size:	0000A8
 */
void __sinit_ogObjChallenge1P_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  li        r0, 0
  addi      r5, r3, 0x48B0
  lis       r4, 0x804E
  lfs       f2, 0x0(r5)
  lis       r3, 0x8051
  stwu      r0, 0x3F74(r3)
  li        r5, -0x1
  lfs       f1, -0x538(r2)
  lfs       f0, -0x534(r2)
  stfsu     f2, -0x64F8(r4)
  stw       r5, -0x67F0(r13)
  stfs      f2, -0x67EC(r13)
  stfs      f2, 0x4(r4)
  stfs      f2, 0x8(r4)
  stfs      f1, 0x4(r3)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)
  stfs      f0, 0x10(r3)
  stfs      f1, 0x14(r3)
  stfs      f1, 0x18(r3)
  stfs      f0, 0x1C(r3)
  stfs      f0, 0x20(r3)
  stw       r0, 0x24(r3)
  stfs      f1, 0x28(r3)
  stfs      f1, 0x2C(r3)
  stfs      f0, 0x30(r3)
  stfs      f0, 0x34(r3)
  stfs      f1, 0x38(r3)
  stfs      f1, 0x3C(r3)
  stfs      f0, 0x40(r3)
  stfs      f0, 0x44(r3)
  stw       r0, 0x48(r3)
  stfs      f1, 0x4C(r3)
  stfs      f1, 0x50(r3)
  stfs      f0, 0x54(r3)
  stfs      f0, 0x58(r3)
  stfs      f1, 0x5C(r3)
  stfs      f1, 0x60(r3)
  stfs      f0, 0x64(r3)
  stfs      f0, 0x68(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80328C28
 * Size:	000008
 */
void @24@og::newScreen::ObjChallenge1P::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xE70
*/
}
