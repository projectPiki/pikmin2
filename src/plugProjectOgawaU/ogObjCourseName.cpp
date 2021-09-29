

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
 * Address:	8031741C
 * Size:	0000A8
 */
void __ct__Q32og9newScreen13ObjCourseNameFPCc(void)
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
  bl        0x13C6B0
  lis       r4, 0x804E
  lis       r3, 0x8051
  subi      r4, r4, 0x7578
  lfs       f1, -0xA90(r2)
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  li        r6, -0x1
  li        r5, 0
  stw       r0, 0x18(r30)
  addi      r4, r3, 0x3D10
  li        r0, 0xFF
  mr        r3, r30
  stfs      f1, 0x44(r30)
  stfs      f1, 0x48(r30)
  stw       r6, 0x54(r30)
  stw       r31, 0x14(r30)
  stw       r5, 0x38(r30)
  stw       r5, 0x3C(r30)
  stw       r5, 0x40(r30)
  lfs       f0, 0xC(r4)
  stfs      f0, 0x4C(r30)
  stb       r5, 0x50(r30)
  stb       r5, 0x54(r30)
  stb       r5, 0x55(r30)
  stb       r5, 0x56(r30)
  stb       r0, 0x57(r30)
  stb       r5, 0x58(r30)
  stfs      f1, 0x5C(r30)
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
 * Address:	803174C4
 * Size:	0000AC
 */
void __dt__Q32og9newScreen13ObjCourseNameFv(void)
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
  beq-      .loc_0x90
  lis       r4, 0x804E
  subi      r4, r4, 0x7578
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804F
  subi      r4, r4, 0x28A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x80
  lis       r4, 0x804E
  subi      r4, r4, 0x7DC0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  bl        0xFA0A8
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x2FA500
  mr        r3, r30
  li        r4, 0
  bl        0xFA048

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x2F349C

.loc_0x90:
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
 * Address:	80317570
 * Size:	000334
 */
void doCreate__Q32og9newScreen13ObjCourseNameFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r5, 0x8049
  stw       r0, 0x54(r1)
  stmw      r27, 0x3C(r1)
  mr        r29, r3
  mr        r30, r4
  subi      r31, r5, 0x1900
  bl        0x13CA18
  lis       r4, 0x4F
  lis       r6, 0x5552
  li        r5, 0x434F
  mr        r27, r3
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5345
  bl        -0x8290
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  stw       r27, 0x38(r29)
  b         .loc_0xCC

.loc_0x50:
  lis       r4, 0x4F
  lis       r6, 0x554D
  mr        r3, r27
  li        r5, 0x44
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x4D59
  bl        -0x82BC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB8
  li        r3, 0x10
  bl        -0x2F3744
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lis       r5, 0x804B
  lis       r4, 0x804C
  addi      r0, r5, 0x1148
  li        r5, 0
  stw       r0, 0x0(r3)
  addi      r0, r4, 0x15CC
  stw       r5, 0x4(r3)
  stw       r0, 0x0(r3)
  stw       r5, 0x8(r3)
  stb       r5, 0xC(r3)
  stb       r5, 0xD(r3)

.loc_0xB0:
  stw       r3, 0x38(r29)
  b         .loc_0xCC

.loc_0xB8:
  addi      r3, r31, 0
  addi      r5, r31, 0x38
  li        r4, 0x65
  crclr     6, 0x6
  bl        -0x2ECFF8

.loc_0xCC:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  lis       r3, 0x804E
  lwz       r0, 0x220(r28)
  subi      r4, r3, 0x74C8
  li        r3, 0x148
  rlwinm    r0,r0,2,0,29
  lwzx      r27, r4, r0
  bl        -0x2F37C8
  mr.       r0, r3
  beq-      .loc_0x110
  bl        0x11D734
  mr        r0, r3

.loc_0x110:
  stw       r0, 0x3C(r29)
  mr        r4, r27
  mr        r6, r30
  lis       r5, 0x104
  lwz       r3, 0x3C(r29)
  bl        -0x2D8070
  li        r3, 0x1C
  bl        -0x2F37F8
  mr.       r0, r3
  beq-      .loc_0x144
  li        r4, 0x5
  bl        -0x12254
  mr        r0, r3

.loc_0x144:
  stw       r0, 0x40(r29)
  lis       r3, 0x804E
  subi      r3, r3, 0x7478
  lwz       r0, 0x220(r28)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  lwz       r6, 0x0(r3)
  mr        r27, r3
  b         .loc_0x180

.loc_0x168:
  lwz       r3, 0x40(r29)
  mr        r4, r30
  lwz       r5, 0x3C(r29)
  lfs       f1, -0xA8C(r2)
  bl        -0x11D50
  lwzu      r6, 0x4(r27)

.loc_0x180:
  cmplwi    r6, 0
  bne+      .loc_0x168
  lwz       r3, 0x3C(r29)
  bl        -0x143E8
  li        r5, 0x1
  li        r4, 0x7
  li        r3, 0x6
  li        r0, 0
  stb       r5, 0x14(r1)
  addi      r30, r1, 0x18
  lfd       f3, 0x18(r31)
  stb       r4, 0x15(r1)
  lfd       f2, 0x20(r31)
  stb       r3, 0x16(r1)
  lfd       f1, 0x28(r31)
  stb       r0, 0x17(r1)
  lfd       f0, 0x30(r31)
  lwz       r0, 0x14(r1)
  stfd      f3, 0x18(r1)
  lwz       r31, 0x3C(r29)
  stw       r0, 0x10(r1)
  lbz       r5, 0x10(r1)
  lbz       r4, 0x11(r1)
  lbz       r3, 0x12(r1)
  lbz       r0, 0x13(r1)
  stfd      f2, 0x20(r1)
  stfd      f1, 0x28(r1)
  stfd      f0, 0x30(r1)
  stb       r5, 0x8(r1)
  stb       r4, 0x9(r1)
  stb       r3, 0xA(r1)
  stb       r0, 0xB(r1)

.loc_0x200:
  lwz       r5, 0x0(r30)
  li        r3, 0
  lwz       r6, 0x4(r30)
  xor       r0, r5, r3
  xor       r3, r6, r3
  or.       r0, r3, r0
  beq-      .loc_0x278
  lwz       r12, 0x0(r31)
  mr        r3, r31
  lwz       r12, 0x3C(r12)
  mtctr     r12
  addi      r30, r30, 0x8
  bctrl     
  cmplwi    r3, 0
  beq+      .loc_0x200
  lwz       r12, 0x0(r3)
  lwz       r0, 0x8(r1)
  lwz       r12, 0x13C(r12)
  stw       r0, 0xC(r1)
  mtctr     r12
  bctrl     
  lbz       r4, 0xC(r1)
  lbz       r0, 0xD(r1)
  stb       r4, 0x7C(r3)
  lbz       r4, 0xE(r1)
  stb       r0, 0x7D(r3)
  lbz       r0, 0xF(r1)
  stb       r4, 0x7E(r3)
  stb       r0, 0x7F(r3)
  b         .loc_0x200

.loc_0x278:
  lwz       r3, 0x3C(r29)
  lis       r5, 0x5F74
  lis       r4, 0x6E75
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x6578
  addi      r5, r4, 0x6B69
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r27, r3
  beq-      .loc_0x320
  lwz       r3, 0x3C(r29)
  lis       r5, 0x745F
  lis       r4, 0x6566
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x6563
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  lwz       r3, 0x3C(r29)
  lis       r5, 0x745F
  lis       r4, 0x6566
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6563
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r30, r3
  lwz       r3, 0x3C(r29)
  mr        r4, r27
  bl        -0x2E00F0
  cmplwi    r31, 0
  beq-      .loc_0x310
  li        r0, 0
  stb       r0, 0xB0(r31)

.loc_0x310:
  cmplwi    r30, 0
  beq-      .loc_0x320
  li        r0, 0
  stb       r0, 0xB0(r30)

.loc_0x320:
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void commonUpdate__Q32og9newScreen13ObjCourseNameFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803178A4
 * Size:	0000F0
 */
void doUpdate__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r3, 0x40(r3)
  bl        -0x123E0
  lwz       r3, 0x3C(r29)
  bl        -0x2D6DA4
  lwz       r3, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x50(r29)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x4C(r29)
  lfs       f1, 0x54(r3)
  lfs       f0, -0xA90(r2)
  fsubs     f1, f2, f1
  stfs      f1, 0x4C(r29)
  lfs       f1, 0x4C(r29)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xD0
  li        r30, 0x1
  b         .loc_0xD0

.loc_0x7C:
  mr        r3, r29
  bl        0x13C684
  lis       r4, 0x4F
  lis       r6, 0x5552
  mr        r31, r3
  li        r5, 0x434F
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5345
  bl        -0x8624
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD0
  lbz       r0, 0xC(r31)
  cmplwi    r0, 0
  beq-      .loc_0xBC
  li        r0, 0x1
  stb       r0, 0x50(r29)

.loc_0xBC:
  lbz       r0, 0xD(r31)
  cmplwi    r0, 0
  beq-      .loc_0xD0
  li        r0, 0x1
  stb       r0, 0x58(r29)

.loc_0xD0:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	80317994
 * Size:	000170
 */
void doDraw__Q32og9newScreen13ObjCourseNameFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stmw      r27, 0x4C(r1)
  mr        r27, r3
  mr        r28, r4
  bl        0x3E4
  addi      r31, r28, 0x190
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  bl        0x10B85C
  lhz       r30, 0x4(r3)
  bl        0x10B854
  li        r0, 0xFF
  lhz       r29, 0x6(r3)
  stb       r0, 0x18(r1)
  mr        r3, r31
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  stb       r0, 0x19(r1)
  addi      r6, r1, 0x10
  addi      r7, r1, 0x14
  stb       r0, 0x1A(r1)
  stb       r0, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x2E1388
  li        r3, 0
  bl        -0x22E8F0
  li        r3, 0x1
  bl        -0x22E8CC
  lis       r0, 0x4330
  lfs       f3, -0xA90(r2)
  stw       r30, 0x34(r1)
  mr        r3, r31
  lfd       f2, -0xA80(r2)
  addi      r4, r1, 0x1C
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r29, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x2E12A0
  li        r3, 0x1
  bl        -0x22E950
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, -0xA88(r2)
  lfs       f0, 0x48(r27)
  lwz       r3, 0x3C(r27)
  fmuls     f0, f1, f0
  lwz       r12, 0x0(r3)
  fctiwz    f0, f0
  lwz       r12, 0x24(r12)
  stfd      f0, 0x40(r1)
  lwz       r4, 0x44(r1)
  mtctr     r12
  bctrl     
  lwz       r3, 0x3C(r27)
  mr        r4, r28
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0x4C(r1)
  lwz       r0, 0x64(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B04
 * Size:	000014
 */
void doStart__Q32og9newScreen13ObjCourseNameFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0xA90(r2)
  stfs      f0, 0x44(r3)
  stfs      f0, 0x48(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B18
 * Size:	000010
 */
void doEnd__Q32og9newScreen13ObjCourseNameFPCQ26Screen11EndSceneArg(void)
{
/*
.loc_0x0:
  lfs       f0, -0xA90(r2)
  stfs      f0, 0x44(r3)
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B28
 * Size:	000004
 */
void doUpdateFadeinFinish__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B2C
 * Size:	00000C
 */
void doUpdateFinish__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  lfs       f0, -0xA90(r2)
  stfs      f0, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B38
 * Size:	000004
 */
void doUpdateFadeoutFinish__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80317B3C
 * Size:	000120
 */
void doUpdateFadein__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  lis       r3, 0x8051
  lwz       r4, -0x6514(r13)
  addi      r3, r3, 0x3D10
  lfs       f1, 0x44(r29)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r29)
  lfs       f0, 0x44(r29)
  lfs       f1, 0x4(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x54
  stfs      f1, 0x44(r29)
  li        r30, 0x1

.loc_0x54:
  lfs       f1, 0x44(r29)
  lfs       f0, 0x4(r3)
  fdivs     f0, f1, f0
  stfs      f0, 0x48(r29)
  lwz       r3, 0x40(r29)
  bl        -0x126BC
  lwz       r3, 0x3C(r29)
  bl        -0x2D7080
  lwz       r3, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x50(r29)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x4C(r29)
  lfs       f1, 0x54(r3)
  fsubs     f1, f2, f1
  stfs      f1, 0x4C(r29)
  b         .loc_0x100

.loc_0xAC:
  mr        r3, r29
  bl        0x13C3BC
  lis       r4, 0x4F
  lis       r6, 0x5552
  mr        r31, r3
  li        r5, 0x434F
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5345
  bl        -0x88EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x100
  lbz       r0, 0xC(r31)
  cmplwi    r0, 0
  beq-      .loc_0xEC
  li        r0, 0x1
  stb       r0, 0x50(r29)

.loc_0xEC:
  lbz       r0, 0xD(r31)
  cmplwi    r0, 0
  beq-      .loc_0x100
  li        r0, 0x1
  stb       r0, 0x58(r29)

.loc_0x100:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	80317C5C
 * Size:	000134
 */
void doUpdateFadeout__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r3
  lis       r3, 0x8051
  lwz       r4, -0x6514(r13)
  addi      r3, r3, 0x3D10
  lfs       f1, 0x44(r29)
  lfs       f0, 0x54(r4)
  fadds     f0, f1, f0
  stfs      f0, 0x44(r29)
  lfs       f0, 0x44(r29)
  lfs       f1, 0x8(r3)
  fcmpo     cr0, f0, f1
  ble-      .loc_0x60
  stfs      f1, 0x44(r29)
  lbz       r0, 0x58(r29)
  cmplwi    r0, 0
  bne-      .loc_0x60
  li        r30, 0x1

.loc_0x60:
  lfs       f1, 0x44(r29)
  lfs       f0, 0x8(r3)
  lfs       f2, -0xA8C(r2)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  stfs      f0, 0x48(r29)
  lwz       r3, 0x40(r29)
  bl        -0x127F0
  lwz       r3, 0x3C(r29)
  bl        -0x2D71B4
  lwz       r3, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x50(r29)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  lwz       r3, -0x6514(r13)
  lfs       f2, 0x4C(r29)
  lfs       f1, 0x54(r3)
  fsubs     f1, f2, f1
  stfs      f1, 0x4C(r29)
  b         .loc_0x114

.loc_0xC0:
  mr        r3, r29
  bl        0x13C288
  lis       r4, 0x4F
  lis       r6, 0x5552
  mr        r31, r3
  li        r5, 0x434F
  addi      r4, r4, 0x4741
  addi      r6, r6, 0x5345
  bl        -0x8A20
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x114
  lbz       r0, 0xC(r31)
  cmplwi    r0, 0
  beq-      .loc_0x100
  li        r0, 0x1
  stb       r0, 0x50(r29)

.loc_0x100:
  lbz       r0, 0xD(r31)
  cmplwi    r0, 0
  beq-      .loc_0x114
  li        r0, 0x1
  stb       r0, 0x58(r29)

.loc_0x114:
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	80317D90
 * Size:	000168
 */
void drawBG__Q32og9newScreen13ObjCourseNameFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  addi      r31, r4, 0x190
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  stw       r28, 0x40(r1)
  mr        r28, r3
  lbz       r0, 0x58(r3)
  cmplwi    r0, 0
  beq-      .loc_0x90
  lwz       r4, -0x6514(r13)
  lis       r3, 0x8051
  lfs       f1, 0x5C(r28)
  lfs       f0, 0x54(r4)
  lfs       f3, -0xA8C(r2)
  fadds     f1, f1, f0
  lfs       f0, -0xA90(r2)
  stfs      f1, 0x5C(r28)
  lfs       f2, 0x5C(r28)
  lfs       f1, 0x3D10(r3)
  fdivs     f1, f2, f1
  fsubs     f1, f3, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x84
  lfs       f0, -0xA88(r2)
  fmuls     f0, f0, f1
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  stb       r0, 0x57(r28)
  b         .loc_0x90

.loc_0x84:
  li        r0, 0
  stb       r0, 0x57(r28)
  stb       r0, 0x58(r28)

.loc_0x90:
  lbz       r0, 0x57(r28)
  cmplwi    r0, 0
  beq-      .loc_0x148
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  bl        0x10B3E4
  lhz       r30, 0x4(r3)
  bl        0x10B3DC
  lhz       r29, 0x6(r3)
  mr        r3, r31
  lwz       r0, 0x54(r28)
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  addi      r6, r1, 0x10
  stw       r0, 0x18(r1)
  addi      r7, r1, 0x14
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x2E17F0
  li        r3, 0
  bl        -0x22ED2C
  lis       r0, 0x4330
  lfs       f3, -0xA90(r2)
  stw       r30, 0x34(r1)
  mr        r3, r31
  lfd       f2, -0xA80(r2)
  addi      r4, r1, 0x1C
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r29, 0x3C(r1)
  fsubs     f1, f0, f2
  stw       r0, 0x38(r1)
  lfd       f0, 0x38(r1)
  fadds     f1, f3, f1
  stfs      f3, 0x1C(r1)
  fsubs     f0, f0, f2
  stfs      f3, 0x20(r1)
  fadds     f0, f3, f0
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x2E1700

.loc_0x148:
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
 * Address:	80317EF8
 * Size:	000028
 */
void __sinit_ogObjCourseName_cpp(void)
{
/*
.loc_0x0:
  lfs       f3, -0xA78(r2)
  lis       r3, 0x8051
  lfs       f2, -0xA8C(r2)
  stfsu     f3, 0x3D10(r3)
  lfs       f1, -0xA74(r2)
  lfs       f0, -0xA70(r2)
  stfs      f2, 0x4(r3)
  stfs      f1, 0x8(r3)
  stfs      f0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80317F20
 * Size:	000008
 */
void @24@__dt__Q32og9newScreen13ObjCourseNameFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0xA60
*/
}