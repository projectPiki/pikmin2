

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
 * Address:	8031EBE8
 * Size:	000064
 */
void og::newScreen::ObjChallenge2P::__ct( (char const *))
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
  bl        0xDC9C
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x6B40
  mr        r3, r30
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x10
  stw       r4, 0x18(r30)
  stw       r31, 0x14(r30)
  stw       r0, 0x60(r30)
  stw       r0, 0x64(r30)
  stw       r0, 0x70(r30)
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
 * Address:	8031EC4C
 * Size:	000068
 */
void og::newScreen::ObjChallenge2P::__dt(void)
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
  subi      r5, r5, 0x6B40
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x10
  stw       r0, 0x18(r30)
  bl        0xDCB4
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x2FABE0

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
 * Address:	8031ECB4
 * Size:	0006C4
 */
void og::newScreen::ObjChallenge2P::doCreate( (JKRArchive *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  li        r3, 0x1C
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  subi      r29, r5, 0x1110
  stw       r28, 0x10(r1)
  bl        -0x2FAE40
  mr.       r28, r3
  beq-      .loc_0xD4
  li        r3, 0x148
  bl        -0x2FAE50
  mr.       r0, r3
  beq-      .loc_0x54
  bl        0x1160AC
  mr        r0, r3

.loc_0x54:
  stw       r0, 0x0(r28)
  li        r3, 0x9C
  bl        -0x2FAE6C
  mr.       r0, r3
  beq-      .loc_0x70
  bl        -0x18CE4
  mr        r0, r3

.loc_0x70:
  stw       r0, 0x4(r28)
  li        r3, 0x44
  bl        -0x2FAE88
  mr.       r0, r3
  beq-      .loc_0x8C
  bl        -0x1B034
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x8(r28)
  li        r3, 0x1C
  bl        -0x2FAEA4
  mr.       r0, r3
  beq-      .loc_0xA8
  bl        0xA0B0
  mr        r0, r3

.loc_0xA8:
  stw       r0, 0xC(r28)
  li        r3, 0x1C
  bl        -0x2FAEC0
  mr.       r0, r3
  beq-      .loc_0xC4
  bl        0xA094
  mr        r0, r3

.loc_0xC4:
  stw       r0, 0x10(r28)
  li        r0, 0
  stw       r0, 0x14(r28)
  stw       r0, 0x18(r28)

.loc_0xD4:
  stw       r28, 0x68(r31)
  li        r3, 0x1C
  bl        -0x2FAEEC
  mr.       r28, r3
  beq-      .loc_0x180
  li        r3, 0x148
  bl        -0x2FAEFC
  mr.       r0, r3
  beq-      .loc_0x100
  bl        0x116000
  mr        r0, r3

.loc_0x100:
  stw       r0, 0x0(r28)
  li        r3, 0x9C
  bl        -0x2FAF18
  mr.       r0, r3
  beq-      .loc_0x11C
  bl        -0x18D90
  mr        r0, r3

.loc_0x11C:
  stw       r0, 0x4(r28)
  li        r3, 0x44
  bl        -0x2FAF34
  mr.       r0, r3
  beq-      .loc_0x138
  bl        -0x1B0E0
  mr        r0, r3

.loc_0x138:
  stw       r0, 0x8(r28)
  li        r3, 0x1C
  bl        -0x2FAF50
  mr.       r0, r3
  beq-      .loc_0x154
  bl        0xA004
  mr        r0, r3

.loc_0x154:
  stw       r0, 0xC(r28)
  li        r3, 0x1C
  bl        -0x2FAF6C
  mr.       r0, r3
  beq-      .loc_0x170
  bl        0x9FE8
  mr        r0, r3

.loc_0x170:
  stw       r0, 0x10(r28)
  li        r0, 0
  stw       r0, 0x14(r28)
  stw       r0, 0x18(r28)

.loc_0x180:
  stw       r28, 0x6C(r31)
  mr        r3, r31
  bl        0x13516C
  lis       r4, 0x4F
  lis       r6, 0x414C
  li        r5, 0x4348
  mr        r28, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x3250
  bl        -0xFB3C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1B8
  stw       r28, 0x60(r31)
  b         .loc_0x2D0

.loc_0x1B8:
  lis       r4, 0x4F
  lis       r6, 0x554D
  mr        r3, r28
  li        r5, 0x44
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4D59
  bl        -0xFB68
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2BC
  li        r3, 0x78
  bl        -0x2FAFF0
  cmplwi    r3, 0
  beq-      .loc_0x2B4
  lis       r4, 0x804B
  lis       r5, 0x804C
  addi      r12, r4, 0x1148
  lis       r4, 0x804B
  stw       r12, 0x0(r3)
  li        r11, 0
  addi      r0, r5, 0xF74
  lfs       f3, -0x718(r2)
  stw       r11, 0x4(r3)
  li        r10, 0x4D2
  li        r9, 0x32
  lfs       f2, -0x714(r2)
  stw       r0, 0x0(r3)
  li        r8, 0x1
  li        r7, 0x2
  li        r6, 0xA
  stfs      f3, 0x8(r3)
  addi      r5, r4, 0x10C4
  lfs       f1, -0x710(r2)
  li        r4, 0x9EC
  stw       r11, 0xC(r3)
  li        r0, 0x1092
  lfs       f0, -0x70C(r2)
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

.loc_0x2B4:
  stw       r3, 0x60(r31)
  b         .loc_0x2D0

.loc_0x2BC:
  addi      r3, r29, 0
  addi      r5, r29, 0x18
  li        r4, 0x97
  crclr     6, 0x6
  bl        -0x2F4940

.loc_0x2D0:
  li        r3, 0x148
  bl        -0x2FB0E4
  mr.       r0, r3
  beq-      .loc_0x2E8
  bl        0x115E18
  mr        r0, r3

.loc_0x2E8:
  stw       r0, 0x70(r31)
  li        r3, 0xC
  bl        -0x2FB100
  mr.       r0, r3
  beq-      .loc_0x308
  li        r4, 0x3
  bl        -0x1002C
  mr        r0, r3

.loc_0x308:
  stw       r0, 0x64(r31)
  mr        r7, r30
  addi      r4, r29, 0x40
  lis       r6, 0x104
  lwz       r5, 0x68(r31)
  lwz       r3, 0x64(r31)
  lwz       r5, 0x0(r5)
  bl        -0xFFB8
  lwz       r5, 0x6C(r31)
  mr        r7, r30
  lwz       r3, 0x64(r31)
  addi      r4, r29, 0x54
  lwz       r5, 0x0(r5)
  lis       r6, 0x104
  bl        -0xFFD4
  lwz       r3, 0x64(r31)
  mr        r7, r30
  lwz       r5, 0x70(r31)
  addi      r4, r29, 0x68
  lis       r6, 0x104
  bl        -0xFFEC
  lwz       r6, 0x60(r31)
  mr        r5, r30
  lwz       r3, 0x68(r31)
  addi      r4, r6, 0x24
  bl        .loc_0x6C4
  lwz       r6, 0x60(r31)
  mr        r5, r30
  lwz       r3, 0x6C(r31)
  addi      r4, r6, 0x3C
  bl        .loc_0x6C4
  stw       r30, 0x8(r1)
  lis       r3, 0x6F6B
  addi      r6, r3, 0x6F31
  li        r5, 0x5070
  lwz       r4, 0x60(r31)
  li        r8, 0x6
  lwz       r3, 0x70(r31)
  li        r9, 0x1
  addi      r7, r4, 0x54
  li        r10, 0x1
  bl        -0x12A58
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
  lwz       r4, 0x60(r31)
  lwz       r3, 0x70(r31)
  addi      r7, r4, 0x64
  bl        -0x12A90
  lwz       r3, 0x60(r31)
  lfs       f1, 0x5C(r3)
  bl        -0x25D558
  stw       r3, 0x40(r31)
  lis       r3, 0x696D
  addi      r6, r3, 0x6531
  addi      r7, r31, 0x40
  stw       r30, 0x8(r1)
  li        r5, 0x5074
  li        r8, 0x6
  li        r9, 0x1
  lwz       r3, 0x70(r31)
  li        r10, 0x1
  bl        -0x12AC8
  li        r4, 0x1
  mr        r29, r3
  bl        -0x13800
  lwz       r3, 0x70(r31)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f1, -0x718(r2)
  addi      r28, r4, 0x3E38
  lfs       f0, -0x714(r2)
  stw       r3, 0x48(r28)
  cmplwi    r3, 0
  lfs       f4, 0xD4(r3)
  stfs      f4, 0x4C(r28)
  lfs       f3, 0xD8(r3)
  stfs      f3, 0x50(r28)
  lfs       f2, 0xCC(r3)
  stfs      f2, 0x54(r28)
  lfs       f2, 0xD0(r3)
  stfs      f2, 0x58(r28)
  stfs      f1, 0x5C(r28)
  stfs      f1, 0x60(r28)
  stfs      f0, 0x64(r28)
  stfs      f0, 0x68(r28)
  beq-      .loc_0x4F0
  fadds     f0, f4, f1
  fadds     f1, f3, f1
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

.loc_0x4F0:
  lwz       r3, 0x70(r31)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f1, -0x718(r2)
  addi      r28, r4, 0x3E38
  lfs       f0, -0x714(r2)
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
  beq-      .loc_0x5B4
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

.loc_0x5B4:
  lwz       r3, 0x70(r31)
  lis       r5, 0x6E75
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x6D65
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x8051
  lfs       f1, -0x718(r2)
  addi      r28, r4, 0x3E38
  lfs       f0, -0x714(r2)
  stw       r3, 0x6C(r28)
  cmplwi    r3, 0
  lfs       f4, 0xD4(r3)
  stfs      f4, 0x70(r28)
  lfs       f3, 0xD8(r3)
  stfs      f3, 0x74(r28)
  lfs       f2, 0xCC(r3)
  stfs      f2, 0x78(r28)
  lfs       f2, 0xD0(r3)
  stfs      f2, 0x7C(r28)
  stfs      f1, 0x80(r28)
  stfs      f1, 0x84(r28)
  stfs      f0, 0x88(r28)
  stfs      f0, 0x8C(r28)
  beq-      .loc_0x678
  fadds     f0, f4, f1
  fadds     f1, f3, f1
  stfs      f0, 0xD4(r3)
  stfs      f1, 0xD8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x78(r28)
  lfs       f0, 0x88(r28)
  lfs       f3, 0x7C(r28)
  lfs       f2, 0x8C(r28)
  fmuls     f0, f1, f0
  lwz       r3, 0x6C(r28)
  fmuls     f1, f3, f2
  stfs      f0, 0xCC(r3)
  stfs      f1, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x678:
  lwz       r4, 0x60(r31)
  mr        r3, r31
  lwz       r4, 0x14(r4)
  bl        0xD940
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  mr        r5, r29
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

.loc_0x6C4:
*/
}

/*
 * --INFO--
 * Address:	8031F378
 * Size:	0002BC
 */
void og::newScreen::ObjChallenge2P::ScreenSet::init( (og::Screen::DataNavi *, JKRArchive *, og::Screen::DispMemberChallenge2P *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r27, 0x2C(r1)
  mr        r29, r3
  mr        r30, r4
  mr        r31, r5
  mr        r27, r6
  li        r3, 0x44
  bl        -0x2FB4F8
  mr.       r28, r3
  beq-      .loc_0x38
  bl        -0x17B88
  mr        r28, r3

.loc_0x38:
  lis       r5, 0x7069
  lwz       r4, 0x0(r29)
  mr        r3, r28
  mr        r8, r31
  addi      r6, r5, 0x6B69
  addi      r7, r30, 0x8
  li        r5, 0
  bl        -0x17AF0
  lis       r4, 0x7069
  lwz       r3, 0x0(r29)
  mr        r7, r28
  li        r5, 0
  addi      r6, r4, 0x6B69
  bl        0x115740
  addi      r0, r30, 0x4
  lis       r3, 0x635F
  stw       r0, 0x8(r1)
  li        r0, 0x3
  addi      r8, r3, 0x6D6C
  li        r4, 0x2
  stw       r0, 0xC(r1)
  li        r0, 0x1
  mr        r10, r8
  addi      r6, r3, 0x6D72
  stw       r4, 0x10(r1)
  li        r5, 0
  li        r7, 0
  li        r9, 0
  stw       r0, 0x14(r1)
  stw       r31, 0x18(r1)
  lwz       r3, 0x0(r29)
  bl        -0x12EFC
  addi      r0, r27, 0x18
  lis       r3, 0x635F
  stw       r0, 0x8(r1)
  li        r0, 0x3
  addi      r8, r3, 0x6C6C
  li        r4, 0x2
  stw       r0, 0xC(r1)
  li        r0, 0x1
  mr        r10, r8
  addi      r6, r3, 0x6C72
  stw       r4, 0x10(r1)
  li        r5, 0
  li        r7, 0
  li        r9, 0
  stw       r0, 0x14(r1)
  stw       r31, 0x18(r1)
  lwz       r3, 0x0(r29)
  bl        -0x12F44
  li        r0, 0x1828
  lis       r4, 0x6472
  stw       r0, 0x94(r3)
  li        r0, 0x182A
  addi      r8, r4, 0x5F6C
  addi      r5, r30, 0xC
  stw       r0, 0x98(r3)
  li        r7, 0x3
  li        r3, 0x2
  li        r0, 0x1
  stw       r5, 0x8(r1)
  mr        r10, r8
  addi      r6, r4, 0x5F72
  li        r5, 0
  stw       r7, 0xC(r1)
  li        r7, 0
  li        r9, 0
  stw       r3, 0x10(r1)
  stw       r0, 0x14(r1)
  stw       r31, 0x18(r1)
  lwz       r3, 0x0(r29)
  bl        -0x12F9C
  li        r4, 0x1
  bl        -0x13BF8
  lwz       r3, 0x0(r29)
  lis       r4, 0x6472
  addi      r6, r4, 0x5F63
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6479
  stb       r0, 0xB0(r3)
  addi      r0, r30, 0x10
  addi      r8, r4, 0x5F6C
  li        r5, 0x3
  stw       r0, 0x8(r1)
  li        r3, 0x2
  li        r0, 0x1
  mr        r10, r8
  stw       r5, 0xC(r1)
  addi      r6, r4, 0x5F72
  li        r5, 0
  li        r7, 0
  stw       r3, 0x10(r1)
  li        r9, 0
  stw       r0, 0x14(r1)
  stw       r31, 0x18(r1)
  lwz       r3, 0x0(r29)
  bl        -0x13014
  li        r4, 0x1
  bl        -0x13C70
  lwz       r3, 0x0(r29)
  lis       r4, 0x6479
  addi      r6, r4, 0x5F63
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6F5F
  stb       r0, 0xB0(r3)
  lis       r4, 0x74
  addi      r6, r5, 0x3031
  lwz       r3, 0x0(r29)
  addi      r5, r4, 0x6F79
  bl        -0x1C6E0
  stw       r3, 0x14(r29)
  lis       r5, 0x6F5F
  lis       r4, 0x74
  lwz       r3, 0x0(r29)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6F79
  bl        -0x1C6FC
  stw       r3, 0x18(r29)
  lwz       r3, 0x8(r29)
  lwz       r4, 0x14(r29)
  lwz       r5, 0x18(r29)
  lwz       r6, 0xC(r29)
  lwz       r7, 0x10(r29)
  bl        -0x1B7C0
  lwz       r3, 0x4(r29)
  mr        r5, r30
  lwz       r4, 0x0(r29)
  li        r6, 0
  bl        -0x193D8
  lis       r4, 0x6261
  lwz       r3, 0x0(r29)
  lwz       r7, 0x4(r29)
  addi      r6, r4, 0x636B
  li        r5, 0
  bl        0x115534
  lis       r4, 0x8051
  lwz       r3, 0x4(r29)
  addi      r4, r4, 0x3F40
  lfs       f1, 0x8(r4)
  lfs       f2, 0xC(r4)
  bl        -0x18D10
  lis       r4, 0x6D65
  lwz       r3, 0x0(r29)
  addi      r6, r4, 0x7465
  li        r5, 0
  bl        0xE168
  lmw       r27, 0x2C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000EC
 */
void og::newScreen::ObjChallenge2P::ScreenSet::update( (og::Screen::DataNavi &))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8031F634
 * Size:	000260
 */
void og::newScreen::ObjChallenge2P::commonUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r31, r3
  lwz       r29, 0x68(r3)
  lwz       r30, 0x60(r3)
  lwz       r3, 0xC(r29)
  bl        0x9918
  fmr       f31, f1
  lwz       r3, 0x10(r29)
  bl        0x990C
  lwz       r3, 0x14(r29)
  fmr       f30, f1
  cmplwi    r3, 0
  beq-      .loc_0x70
  stfs      f31, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
  lwz       r3, 0x18(r29)
  cmplwi    r3, 0
  beq-      .loc_0x94
  stfs      f30, 0xCC(r3)
  stfs      f30, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x94:
  lwz       r3, 0x8(r29)
  lfs       f0, 0x24(r30)
  stfs      f0, 0x8(r3)
  lwz       r0, 0x28(r30)
  stw       r0, 0xC(r3)
  lwz       r0, 0x2C(r30)
  stw       r0, 0x10(r3)
  lwz       r0, 0x30(r30)
  stw       r0, 0x14(r3)
  lwz       r0, 0x34(r30)
  stw       r0, 0x18(r3)
  lbz       r0, 0x38(r30)
  stb       r0, 0x1C(r3)
  bl        -0x1B8B4
  lwz       r29, 0x6C(r31)
  lwz       r30, 0x60(r31)
  lwz       r3, 0xC(r29)
  bl        0x9878
  fmr       f30, f1
  lwz       r3, 0x10(r29)
  bl        0x986C
  lwz       r3, 0x14(r29)
  fmr       f31, f1
  cmplwi    r3, 0
  beq-      .loc_0x110
  stfs      f30, 0xCC(r3)
  stfs      f30, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lwz       r3, 0x18(r29)
  cmplwi    r3, 0
  beq-      .loc_0x134
  stfs      f31, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  lwz       r3, 0x8(r29)
  lfs       f0, 0x3C(r30)
  stfs      f0, 0x8(r3)
  lwz       r0, 0x40(r30)
  stw       r0, 0xC(r3)
  lwz       r0, 0x44(r30)
  stw       r0, 0x10(r3)
  lwz       r0, 0x48(r30)
  stw       r0, 0x14(r3)
  lwz       r0, 0x4C(r30)
  stw       r0, 0x18(r3)
  lbz       r0, 0x50(r30)
  stb       r0, 0x1C(r3)
  bl        -0x1B954
  lfs       f2, -0x708(r2)
  lfs       f1, 0x3C(r31)
  lfs       f0, -0x718(r2)
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x188
  fneg      f1, f1

.loc_0x188:
  lfs       f0, -0x704(r2)
  lis       r3, 0x8050
  lwz       r4, 0x68(r31)
  addi      r5, r3, 0x71A0
  fmuls     f1, f1, f0
  lfs       f8, -0x714(r2)
  lwz       r6, 0x0(r4)
  mr        r3, r31
  lfs       f6, -0x700(r2)
  fctiwz    f1, f1
  lfs       f0, -0x718(r2)
  lfs       f5, 0x243C(r2)
  stfd      f1, 0x8(r1)
  lfs       f3, 0x2440(r2)
  fadds     f4, f0, f5
  lwz       r0, 0xC(r1)
  lfs       f2, -0x6FC(r2)
  fadds     f0, f0, f3
  rlwinm    r0,r0,3,18,28
  lfs       f1, -0x6F8(r2)
  add       r4, r5, r0
  lfs       f7, 0x4(r4)
  fadds     f7, f8, f7
  stfs      f4, 0x140(r6)
  fmuls     f6, f7, f6
  fmadds    f2, f2, f6, f3
  fmuls     f1, f1, f6
  stfs      f2, 0x144(r6)
  fadds     f2, f1, f3
  lwz       r4, 0x6C(r31)
  fadds     f1, f1, f5
  lwz       r4, 0x0(r4)
  stfs      f4, 0x140(r4)
  stfs      f2, 0x144(r4)
  lwz       r4, 0x70(r31)
  stfs      f1, 0x140(r4)
  stfs      f0, 0x144(r4)
  lwz       r4, 0x60(r31)
  lfs       f1, 0x5C(r4)
  lfs       f2, 0x60(r4)
  bl        0xD24C
  lwz       r3, 0x64(r31)
  bl        -0x106BC
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8031F894
 * Size:	000024
 */
void og::newScreen::ObjChallenge2P::doUpdate(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x26C
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8031F8B8
 * Size:	0001F8
 */
void og::newScreen::ObjChallenge2P::doDraw( (Graphics &))
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  addi      r30, r4, 0x190
  stw       r29, 0x94(r1)
  mr        r29, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lis       r0, 0x4330
  addi      r3, r3, 0x3E38
  stw       r0, 0x40(r1)
  lwz       r0, 0x20(r3)
  mr        r3, r30
  lfd       f2, -0x6F0(r2)
  addi      r4, r1, 0xC
  stw       r0, 0x1C(r1)
  addi      r5, r1, 0x10
  lfs       f0, 0x3C(r29)
  addi      r6, r1, 0x14
  lbz       r0, 0x1F(r1)
  addi      r7, r1, 0x18
  stw       r0, 0x44(r1)
  lfd       f1, 0x40(r1)
  fsubs     f1, f1, f2
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x48(r1)
  lwz       r0, 0x4C(r1)
  stb       r0, 0x1F(r1)
  lwz       r0, 0x1C(r1)
  stw       r0, 0x8(r1)
  stw       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  bl        -0x2E92D0
  lis       r3, 0x8051
  lis       r7, 0x4330
  addi      r31, r3, 0x3E38
  stw       r7, 0x50(r1)
  lwz       r0, 0xC(r31)
  mr        r3, r30
  lwz       r6, 0x8(r31)
  addi      r4, r1, 0x30
  lwz       r5, 0x10(r31)
  xoris     r8, r0, 0x8000
  lwz       r0, 0x14(r31)
  xoris     r6, r6, 0x8000
  xoris     r5, r5, 0x8000
  stw       r8, 0x54(r1)
  xoris     r0, r0, 0x8000
  lfd       f2, -0x6E8(r2)
  lfd       f0, 0x50(r1)
  stw       r6, 0x5C(r1)
  fsubs     f4, f0, f2
  stw       r7, 0x58(r1)
  lfd       f0, 0x58(r1)
  stw       r5, 0x64(r1)
  fsubs     f3, f0, f2
  stw       r7, 0x60(r1)
  lfd       f0, 0x60(r1)
  stw       r0, 0x6C(r1)
  fsubs     f1, f0, f2
  stw       r7, 0x68(r1)
  lfd       f0, 0x68(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x30(r1)
  fsubs     f0, f0, f2
  stfs      f4, 0x34(r1)
  fadds     f0, f4, f0
  stfs      f1, 0x38(r1)
  stfs      f0, 0x3C(r1)
  bl        -0x2E921C
  lis       r3, 0x8051
  lis       r7, 0x4330
  addi      r4, r3, 0x3E38
  lwz       r0, 0xC(r31)
  lwz       r5, 0x18(r4)
  mr        r3, r30
  lwz       r4, 0x1C(r4)
  xoris     r8, r0, 0x8000
  lwz       r0, 0x14(r31)
  xoris     r6, r5, 0x8000
  xoris     r5, r4, 0x8000
  stw       r8, 0x74(r1)
  xoris     r0, r0, 0x8000
  lfd       f2, -0x6E8(r2)
  stw       r7, 0x70(r1)
  addi      r4, r1, 0x20
  lfd       f0, 0x70(r1)
  stw       r6, 0x7C(r1)
  fsubs     f4, f0, f2
  stw       r7, 0x78(r1)
  lfd       f0, 0x78(r1)
  stw       r5, 0x84(r1)
  fsubs     f3, f0, f2
  stw       r7, 0x80(r1)
  lfd       f0, 0x80(r1)
  stw       r0, 0x8C(r1)
  fsubs     f1, f0, f2
  stw       r7, 0x88(r1)
  lfd       f0, 0x88(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x20(r1)
  fsubs     f0, f0, f2
  stfs      f4, 0x24(r1)
  fadds     f0, f4, f0
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  bl        -0x2E92B0
  lwz       r3, 0x64(r29)
  mr        r4, r30
  bl        -0x10878
  lwz       r0, 0xA4(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  lwz       r29, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8031FAB0
 * Size:	000004
 */
void og::newScreen::ObjChallenge2P::doUpdateFadeinFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031FAB4
 * Size:	00000C
 */
void og::newScreen::ObjChallenge2P::doUpdateFinish(void)
{
/*
.loc_0x0:
  lfs       f0, -0x718(r2)
  stfs      f0, 0x38(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8031FAC0
 * Size:	000004
 */
void og::newScreen::ObjChallenge2P::doUpdateFadeoutFinish(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8031FAC4
 * Size:	000074
 */
void og::newScreen::ObjChallenge2P::doUpdateFadein(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x38(r3)
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x38(r3)
  lfs       f0, 0x38(r3)
  lfs       f1, 0x3E38(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x44
  stfs      f1, 0x38(r3)
  li        r31, 0x1

.loc_0x44:
  lis       r4, 0x8051
  lfs       f1, 0x38(r3)
  lfs       f0, 0x3E38(r4)
  fdivs     f0, f1, f0
  stfs      f0, 0x3C(r3)
  bl        -0x4E8
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
 * Address:	8031FB38
 * Size:	00007C
 */
void og::newScreen::ObjChallenge2P::doUpdateFadeout(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x3E38
  stw       r31, 0xC(r1)
  li        r31, 0
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x38(r3)
  lfs       f0, 0x54(r5)
  fadds     f0, f1, f0
  stfs      f0, 0x38(r3)
  lfs       f0, 0x38(r3)
  lfs       f1, 0x4(r4)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x48
  stfs      f1, 0x38(r3)
  li        r31, 0x1

.loc_0x48:
  lfs       f1, 0x38(r3)
  lfs       f0, 0x4(r4)
  lfs       f2, -0x714(r2)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  stfs      f0, 0x3C(r3)
  bl        -0x564
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
 * Address:	8031FBB4
 * Size:	000074
 */
void og::newScreen::ObjChallenge2P::doStart( (Screen::StartSceneArg const *))
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
  bl        0xCEB4
  cmplwi    r31, 0
  beq-      .loc_0x50
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x2724
  bne-      .loc_0x50
  lfs       f0, 0x4(r31)
  stfs      f0, 0x50(r30)
  b         .loc_0x58

.loc_0x50:
  lfs       f0, -0x718(r2)
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
 * Address:	8031FC28
 * Size:	0000D4
 */
void __sinit_ogObjChallenge2P_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  li        r0, -0x1
  addi      r7, r3, 0x3E38
  lfs       f3, -0x718(r2)
  lfs       f2, -0x714(r2)
  li        r6, 0
  stw       r0, 0x20(r7)
  li        r4, 0x280
  lfs       f1, -0x6E0(r2)
  li        r5, 0xDF
  lfs       f0, -0x6DC(r2)
  li        r3, 0x3
  li        r0, 0xC8
  stw       r6, 0x24(r7)
  stfs      f3, 0x28(r7)
  stfs      f3, 0x2C(r7)
  stfs      f2, 0x30(r7)
  stfs      f2, 0x34(r7)
  stfs      f3, 0x38(r7)
  stfs      f3, 0x3C(r7)
  stfs      f2, 0x40(r7)
  stfs      f2, 0x44(r7)
  stw       r6, 0x48(r7)
  stfs      f3, 0x4C(r7)
  stfs      f3, 0x50(r7)
  stfs      f2, 0x54(r7)
  stfs      f2, 0x58(r7)
  stfs      f3, 0x5C(r7)
  stfs      f3, 0x60(r7)
  stfs      f2, 0x64(r7)
  stfs      f2, 0x68(r7)
  stw       r6, 0x6C(r7)
  stfs      f3, 0x70(r7)
  stfs      f3, 0x74(r7)
  stfs      f2, 0x78(r7)
  stfs      f2, 0x7C(r7)
  stfs      f3, 0x80(r7)
  stfs      f3, 0x84(r7)
  stfs      f2, 0x88(r7)
  stfs      f2, 0x8C(r7)
  stfs      f1, 0x0(r7)
  stfs      f0, 0x4(r7)
  stw       r6, 0x8(r7)
  stw       r5, 0xC(r7)
  stw       r4, 0x10(r7)
  stw       r3, 0x14(r7)
  stw       r4, 0x18(r7)
  stw       r6, 0x1C(r7)
  stb       r6, 0x20(r7)
  stb       r6, 0x21(r7)
  stb       r6, 0x22(r7)
  stb       r0, 0x23(r7)
  blr
*/
}

/*
 * --INFO--
 * Address:	8031FCFC
 * Size:	000008
 */
void @24@og::newScreen::ObjChallenge2P::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x10B4
*/
}
