

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8042B46C
 * Size:	0000C4
 */
void LightObj::LightObj(char *, _GXLightID, ELightTypeFlag, JUtility::TColor)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r5
  mr        r30, r6
  mr        r31, r7
  bl        -0x1A100
  lis       r3, 0x804F
  lfs       f6, 0x2248(r2)
  subi      r0, r3, 0x414C
  lfs       f5, 0x224C(r2)
  stw       r0, 0x0(r27)
  li        r5, 0x1
  lfs       f4, 0x2250(r2)
  li        r4, 0x3
  stb       r29, 0x18(r27)
  li        r0, 0
  lwz       r6, 0x0(r31)
  mr        r3, r27
  stb       r30, 0x19(r27)
  lfs       f3, 0x2254(r2)
  stfs      f6, 0x1C(r27)
  lfs       f2, 0x2258(r2)
  stfs      f5, 0x20(r27)
  lfs       f1, 0x225C(r2)
  stfs      f6, 0x24(r27)
  lfs       f0, 0x2260(r2)
  stfs      f6, 0x28(r27)
  stfs      f4, 0x2C(r27)
  stfs      f6, 0x30(r27)
  stw       r6, 0x34(r27)
  stfs      f3, 0x38(r27)
  stfs      f5, 0x3C(r27)
  stfs      f3, 0x40(r27)
  stfs      f2, 0x44(r27)
  stb       r5, 0x48(r27)
  stb       r4, 0x49(r27)
  stfs      f1, 0x4C(r27)
  stfs      f0, 0x50(r27)
  stb       r0, 0x54(r27)
  stw       r28, 0x14(r27)
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B530
 * Size:	0002DC
 */
void LightObj::set(Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  li        r5, -0x1
  lfd       f3, 0x2270(r2)
  stw       r0, 0x144(r1)
  lis       r0, 0x4330
  lfs       f0, 0x2264(r2)
  stw       r31, 0x13C(r1)
  mr        r31, r4
  stw       r30, 0x138(r1)
  mr        r30, r3
  lbz       r3, 0x34(r3)
  stw       r0, 0xF0(r1)
  lfs       f1, 0x38(r30)
  stw       r3, 0xF4(r1)
  lfd       f2, 0xF0(r1)
  stw       r5, 0xC(r1)
  fsubs     f2, f2, f3
  fmuls     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x58
  fmr       f1, f0

.loc_0x58:
  lbz       r3, 0x35(r30)
  lis       r0, 0x4330
  fctiwz    f3, f1
  stw       r0, 0x100(r1)
  lfd       f2, 0x2270(r2)
  stw       r3, 0x104(r1)
  lfs       f1, 0x38(r30)
  lfd       f0, 0x100(r1)
  stfd      f3, 0xF8(r1)
  fsubs     f2, f0, f2
  lfs       f0, 0x2264(r2)
  lwz       r0, 0xFC(r1)
  fmuls     f1, f2, f1
  stb       r0, 0xC(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x9C
  fmr       f1, f0

.loc_0x9C:
  lbz       r3, 0x36(r30)
  lis       r0, 0x4330
  fctiwz    f3, f1
  stw       r0, 0x110(r1)
  lfd       f2, 0x2270(r2)
  stw       r3, 0x114(r1)
  lfs       f1, 0x38(r30)
  lfd       f0, 0x110(r1)
  stfd      f3, 0x108(r1)
  fsubs     f2, f0, f2
  lfs       f0, 0x2264(r2)
  lwz       r0, 0x10C(r1)
  fmuls     f1, f2, f1
  stb       r0, 0xD(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0xE0
  fmr       f1, f0

.loc_0xE0:
  lbz       r3, 0x37(r30)
  lis       r0, 0x4330
  fctiwz    f3, f1
  stw       r0, 0x120(r1)
  lfd       f2, 0x2270(r2)
  stw       r3, 0x124(r1)
  lfs       f1, 0x38(r30)
  lfd       f0, 0x120(r1)
  stfd      f3, 0x118(r1)
  fsubs     f2, f0, f2
  lfs       f0, 0x2264(r2)
  lwz       r0, 0x11C(r1)
  fmuls     f1, f2, f1
  stb       r0, 0xE(r1)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x124
  fmr       f1, f0

.loc_0x124:
  fctiwz    f0, f1
  addi      r3, r1, 0xAC
  addi      r4, r1, 0x8
  stfd      f0, 0x128(r1)
  lwz       r0, 0x12C(r1)
  stb       r0, 0xF(r1)
  lwz       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x344A78
  lbz       r0, 0x19(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x2B8
  bge-      .loc_0x168
  cmpwi     r0, 0x1
  beq-      .loc_0x174
  bge-      .loc_0x1A8
  b         .loc_0x2B8

.loc_0x168:
  cmpwi     r0, 0x5
  bge-      .loc_0x2B8
  b         .loc_0x248

.loc_0x174:
  mr        r3, r31
  addi      r4, r30, 0x1C
  addi      r5, r1, 0x34
  bl        -0x340AD8
  lfs       f1, 0x34(r1)
  addi      r3, r1, 0xAC
  lfs       f2, 0x38(r1)
  lfs       f3, 0x3C(r1)
  stfs      f1, 0x40(r1)
  stfs      f2, 0x44(r1)
  stfs      f3, 0x48(r1)
  bl        -0x344BE4
  b         .loc_0x2B8

.loc_0x1A8:
  mr        r3, r31
  addi      r4, r30, 0x1C
  addi      r5, r1, 0x28
  bl        -0x340B0C
  lfs       f1, 0x28(r1)
  addi      r3, r1, 0xAC
  lfs       f2, 0x2C(r1)
  lfs       f3, 0x30(r1)
  stfs      f1, 0x40(r1)
  stfs      f2, 0x44(r1)
  stfs      f3, 0x48(r1)
  bl        -0x344C18
  mr        r3, r31
  addi      r4, r1, 0x7C
  bl        -0x3412F4
  addi      r3, r1, 0x7C
  addi      r4, r1, 0x4C
  bl        -0x341350
  addi      r3, r1, 0x4C
  addi      r4, r30, 0x28
  addi      r5, r1, 0x1C
  bl        -0x340B54
  lfs       f1, 0x1C(r1)
  addi      r3, r1, 0xAC
  lfs       f2, 0x20(r1)
  lfs       f3, 0x24(r1)
  stfs      f1, 0x40(r1)
  stfs      f2, 0x44(r1)
  stfs      f3, 0x48(r1)
  bl        -0x344C50
  lfs       f1, 0x44(r30)
  addi      r3, r1, 0xAC
  lbz       r4, 0x49(r30)
  bl        -0x344ED0
  lfs       f1, 0x3C(r30)
  addi      r3, r1, 0xAC
  lfs       f2, 0x40(r30)
  lbz       r4, 0x48(r30)
  bl        -0x344D54
  b         .loc_0x2B8

.loc_0x248:
  mr        r3, r31
  addi      r4, r1, 0x7C
  bl        -0x341364
  addi      r3, r1, 0x7C
  addi      r4, r1, 0x4C
  bl        -0x3413C0
  addi      r3, r1, 0x4C
  addi      r4, r30, 0x28
  addi      r5, r1, 0x10
  bl        -0x340BC4
  lfs       f1, 0x10(r1)
  addi      r3, r1, 0xAC
  lfs       f2, 0x14(r1)
  lfs       f3, 0x18(r1)
  stfs      f1, 0x40(r1)
  stfs      f2, 0x44(r1)
  stfs      f3, 0x48(r1)
  bl        -0x344CA4
  lfs       f2, 0x4C(r30)
  addi      r3, r1, 0xAC
  lfs       f0, 0x2268(r2)
  lfs       f1, 0x2248(r2)
  fmuls     f4, f2, f0
  lfs       f3, 0x2254(r2)
  fmr       f2, f1
  fmr       f5, f1
  fsubs     f6, f3, f4
  bl        -0x344F74

.loc_0x2B8:
  lbz       r4, 0x18(r30)
  addi      r3, r1, 0xAC
  bl        -0x344BE8
  lwz       r0, 0x144(r1)
  lwz       r31, 0x13C(r1)
  lwz       r30, 0x138(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	8042B80C
 * Size:	00005C
 */
void LightObj::drawPos(Graphics &)
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
  lwz       r3, 0x25C(r4)
  li        r4, 0
  bl        -0x66D4
  lwz       r12, 0x0(r30)
  mr        r5, r3
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
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
 * Address:	8042B868
 * Size:	00007C
 */
void LightObj::drawPos(Graphics &, Camera &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r31
  bl        -0x10B4C
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0x48(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r29)
  mr        r5, r3
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x1C(r12)
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
 * Address:	8042B8E4
 * Size:	0001A8
 */
void LightObj::drawPos(Graphics &, Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  mr        r30, r3
  lbz       r0, 0x54(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x190
  mr        r3, r31
  mr        r4, r5
  bl        -0x60F8
  addi      r3, r1, 0x14
  addi      r4, r30, 0x1C
  bl        -0x30E0
  lbz       r5, 0x37(r30)
  lbz       r4, 0x36(r30)
  lbz       r3, 0x35(r30)
  lbz       r0, 0x34(r30)
  stb       r0, 0x84(r31)
  stb       r3, 0x85(r31)
  stb       r4, 0x86(r31)
  stb       r5, 0x87(r31)
  lbz       r0, 0x19(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x190
  bge-      .loc_0x80
  cmpwi     r0, 0x1
  beq-      .loc_0x168
  bge-      .loc_0xF4
  b         .loc_0x190

.loc_0x80:
  cmpwi     r0, 0x5
  bge-      .loc_0x190
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  lfs       f0, 0x50(r30)
  addi      r4, r30, 0x1C
  lfs       f4, 0x28(r30)
  addi      r5, r1, 0x8
  fmuls     f3, f1, f0
  lfs       f5, 0x2C(r30)
  lfs       f6, 0x30(r30)
  lfs       f2, 0x24(r30)
  fmuls     f6, f6, f3
  lfs       f1, 0x20(r30)
  fmuls     f5, f5, f3
  lfs       f0, 0x1C(r30)
  fmuls     f4, f4, f3
  fadds     f2, f2, f6
  fadds     f1, f1, f5
  fadds     f0, f0, f4
  stfs      f2, 0x10(r1)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  bl        -0x5FD8
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  addi      r4, r1, 0x14
  bl        -0x598C
  b         .loc_0x190

.loc_0xF4:
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  addi      r4, r1, 0x14
  bl        -0x59A0
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  lfs       f0, 0x50(r30)
  addi      r4, r30, 0x1C
  lfs       f3, 0x28(r30)
  addi      r5, r1, 0x8
  fmuls     f1, f1, f0
  lfs       f4, 0x2C(r30)
  lfs       f5, 0x30(r30)
  li        r6, 0x10
  lfs       f2, 0x24(r30)
  fmuls     f5, f5, f1
  fmuls     f3, f3, f1
  lfs       f0, 0x1C(r30)
  fmuls     f4, f4, f1
  lfs       f1, 0x20(r30)
  fadds     f2, f2, f5
  fadds     f0, f0, f3
  fadds     f1, f1, f4
  stfs      f2, 0x10(r1)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  lfs       f1, 0x44(r30)
  bl        -0x4D8C
  b         .loc_0x190

.loc_0x168:
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  addi      r4, r1, 0x14
  bl        -0x5A14
  lfs       f1, 0x2278(r2)
  mr        r3, r31
  lfs       f0, 0x50(r30)
  addi      r4, r1, 0x14
  fmuls     f1, f1, f0
  bl        -0x5A2C

.loc_0x190:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8042BA8C
 * Size:	0000D8
 */
void LightMgr::LightMgr(char *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x804F
  lis       r7, 0x804F
  stw       r0, 0x14(r1)
  subi      r11, r5, 0x4AD8
  lis       r6, 0x804A
  li        r10, 0
  stw       r31, 0xC(r1)
  subi      r8, r6, 0x6108
  mr        r31, r3
  subi      r9, r7, 0x416C
  stw       r11, 0x0(r3)
  lis       r5, 0x804B
  subi      r7, r5, 0x3BA0
  li        r6, 0x80
  stw       r10, 0x10(r3)
  li        r5, 0xFF
  addi      r0, r2, 0x227C
  addi      r12, r31, 0x18
  stw       r10, 0xC(r3)
  stw       r10, 0x8(r3)
  stw       r10, 0x4(r3)
  stw       r4, 0x14(r3)
  mr        r4, r12
  stw       r9, 0x0(r3)
  stw       r11, 0x18(r3)
  stw       r10, 0x28(r3)
  stw       r10, 0x24(r3)
  stw       r10, 0x20(r3)
  stw       r10, 0x1C(r3)
  stw       r8, 0x2C(r3)
  stw       r7, 0x18(r3)
  stb       r6, 0x30(r3)
  stb       r6, 0x31(r3)
  stb       r6, 0x32(r3)
  stb       r5, 0x33(r3)
  stw       r11, 0x34(r3)
  stw       r10, 0x44(r3)
  stw       r10, 0x40(r3)
  stw       r10, 0x3C(r3)
  stw       r10, 0x38(r3)
  stw       r0, 0x48(r3)
  stw       r10, 0x4C(r3)
  bl        -0x1A734
  mr        r3, r31
  addi      r4, r31, 0x34
  bl        -0x1A740
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
 * Address:	8042BB64
 * Size:	00003C
 */
void LightMgr::registLightObj(LightObj *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x34
  bl        -0x1A774
  lwz       r3, 0x4C(r31)
  addi      r0, r3, 0x1
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
 * Address:	8042BBA0
 * Size:	000050
 */
void LightMgr::set(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x25C(r4)
  li        r4, 0x1
  bl        -0x6A60
  lwz       r12, 0x0(r31)
  mr        r0, r3
  mr        r3, r31
  lwz       r12, 0x18(r12)
  mr        r4, r0
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
 * Address:	8042BBF0
 * Size:	000094
 */
void LightMgr::set(Matrixf &)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r4
  addi      r4, r1, 0xC
  lbz       r7, 0x30(r3)
  lbz       r6, 0x31(r3)
  li        r3, 0x4
  lbz       r5, 0x32(r31)
  lbz       r0, 0x33(r31)
  stb       r7, 0x8(r1)
  stb       r6, 0x9(r1)
  stb       r5, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0xC(r1)
  bl        -0x344FB8
  lwz       r31, 0x44(r31)
  b         .loc_0x74

.loc_0x58:
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r31)

.loc_0x74:
  cmplwi    r31, 0
  bne+      .loc_0x58
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
 * Address:	8042BC84
 * Size:	00005C
 */
void LightMgr::drawDebugInfo(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lwz       r31, 0x44(r3)
  b         .loc_0x3C

.loc_0x20:
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r31, 0x4(r31)

.loc_0x3C:
  cmplwi    r31, 0
  bne+      .loc_0x20
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
 * Address:	8042BCE0
 * Size:	000004
 */
void LightMgr::update()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8042BCE4
 * Size:	000028
 */
void __sinit_light_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x64C8(r13)
  stfsu     f0, -0x4178(r3)
  stfs      f0, -0x64C4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
