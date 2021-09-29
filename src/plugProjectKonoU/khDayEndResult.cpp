

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
 * Address:	8040284C
 * Size:	00008C
 */
void __ct__Q32kh6Screen20DispDayEndResultItemFPQ34Game6Result5TNodeiib(void)
{
/*
.loc_0x0:
  lis       r10, 0x804B
  lis       r8, 0x804F
  addi      r10, r10, 0x1148
  li        r9, 0
  stw       r10, 0x0(r3)
  subi      r0, r8, 0x4E60
  stw       r9, 0x4(r3)
  stw       r0, 0x0(r3)
  stw       r4, 0x8(r3)
  stw       r9, 0x14(r3)
  stw       r9, 0x10(r3)
  stw       r9, 0xC(r3)
  lwz       r4, 0x8(r3)
  lwz       r8, 0x24(r4)
  b         .loc_0x6C

.loc_0x3C:
  lwz       r4, 0xC(r3)
  addi      r0, r4, 0x1
  stw       r0, 0xC(r3)
  lwz       r4, 0x10(r3)
  lwz       r0, 0x30(r8)
  add       r0, r4, r0
  stw       r0, 0x10(r3)
  lwz       r4, 0x14(r3)
  lwz       r0, 0x38(r8)
  add       r0, r4, r0
  stw       r0, 0x14(r3)
  lwz       r8, 0x18(r8)

.loc_0x6C:
  cmplwi    r8, 0
  bne+      .loc_0x3C
  stw       r5, 0x18(r3)
  li        r0, 0
  stw       r6, 0x1C(r3)
  stb       r7, 0x20(r3)
  stb       r0, 0x21(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804028D8
 * Size:	000294
 */
void __ct__Q32kh6Screen4IncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  stw       r0, 0x10(r3)
  stw       r0, 0x14(r3)
  stw       r0, 0x18(r3)
  stw       r0, 0x1C(r3)
  stw       r0, 0x20(r3)
  stw       r0, 0x24(r3)
  stw       r0, 0x28(r3)
  stw       r0, 0x2C(r3)
  stw       r0, 0x30(r3)
  stw       r0, 0x34(r3)
  stw       r0, 0x38(r3)
  stw       r0, 0x3C(r3)
  stw       r0, 0x40(r3)
  stw       r0, 0x44(r3)
  stw       r0, 0x48(r3)
  stw       r0, 0x4C(r3)
  stw       r0, 0x50(r3)
  stw       r0, 0x54(r3)
  stw       r0, 0x58(r3)
  stw       r0, 0x5C(r3)
  stw       r0, 0x60(r3)
  stw       r0, 0x64(r3)
  stw       r0, 0x68(r3)
  stw       r0, 0x6C(r3)
  lwz       r3, -0x6B70(r13)
  bl        -0x218B68
  stw       r3, 0x0(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  bl        -0x218B78
  stw       r3, 0x4(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  bl        -0x218B88
  stw       r3, 0x8(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  bl        -0x218B98
  stw       r3, 0xC(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  bl        -0x218BA8
  stw       r3, 0x10(r30)
  li        r4, 0x5
  lwz       r3, -0x6B70(r13)
  bl        -0x218BB8
  stw       r3, 0x14(r30)
  li        r4, 0x1
  lwz       r3, -0x6B70(r13)
  bl        -0x218C40
  stw       r3, 0x18(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  bl        -0x218C50
  stw       r3, 0x1C(r30)
  li        r4, 0
  lwz       r3, -0x6B70(r13)
  bl        -0x218C60
  stw       r3, 0x20(r30)
  li        r4, 0x4
  lwz       r3, -0x6B70(r13)
  bl        -0x218C70
  stw       r3, 0x24(r30)
  li        r4, 0x3
  lwz       r3, -0x6B70(r13)
  bl        -0x218C80
  stw       r3, 0x28(r30)
  li        r4, 0x5
  lwz       r3, -0x6B70(r13)
  bl        -0x218C90
  stw       r3, 0x2C(r30)
  li        r3, 0
  bl        -0x1D1BDC
  stw       r3, 0x30(r30)
  li        r3, 0x1
  bl        -0x1D1BE8
  stw       r3, 0x34(r30)
  li        r3, 0x2
  bl        -0x1D1BF4
  stw       r3, 0x38(r30)
  li        r3, 0x3
  bl        -0x1D1C00
  stw       r3, 0x3C(r30)
  li        r3, 0x4
  bl        -0x1D1C0C
  stw       r3, 0x40(r30)
  li        r3, 0x5
  bl        -0x1D1C18
  stw       r3, 0x44(r30)
  li        r3, 0x6
  bl        -0x1D1C24
  stw       r3, 0x48(r30)
  li        r3, 0x7
  bl        -0x1D1C30
  stw       r3, 0x4C(r30)
  bl        -0x1D1F1C
  li        r3, 0
  bl        -0x1D1B58
  stw       r3, 0x50(r30)
  li        r3, 0x1
  bl        -0x1D1B64
  stw       r3, 0x54(r30)
  li        r3, 0x2
  bl        -0x1D1B70
  stw       r3, 0x58(r30)
  li        r3, 0x3
  bl        -0x1D1B7C
  stw       r3, 0x5C(r30)
  li        r3, 0x4
  bl        -0x1D1B88
  stw       r3, 0x60(r30)
  li        r3, 0x5
  bl        -0x1D1B94
  stw       r3, 0x64(r30)
  li        r3, 0x6
  bl        -0x1D1BA0
  stw       r3, 0x68(r30)
  li        r3, 0x7
  bl        -0x1D1BAC
  stw       r3, 0x6C(r30)
  li        r4, 0x2
  lwz       r3, -0x6B70(r13)
  bl        -0x21BAD0
  rlwinm    r31,r3,1,23,30
  lwz       r3, -0x6B70(r13)
  li        r4, 0x1
  bl        -0x21BAE0
  or        r31, r3, r31
  lwz       r3, -0x6B70(r13)
  li        r4, 0
  bl        -0x21BAF0
  rlwinm    r0,r3,2,22,29
  lwz       r3, -0x6B70(r13)
  or        r31, r0, r31
  li        r4, 0x4
  bl        -0x21BB04
  rlwinm    r0,r3,3,21,28
  lwz       r3, -0x6B70(r13)
  or        r31, r0, r31
  li        r4, 0x3
  bl        -0x21BB18
  rlwinm    r0,r3,4,20,27
  or        r0, r0, r31
  stb       r0, 0x70(r30)
  lwz       r3, -0x6B70(r13)
  bl        -0x218BC8
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
 * Address:	80402B6C
 * Size:	000030
 */
void __ct__Q32kh6Screen20DispDayEndResultIncPFPCQ32kh6Screen4IncP(void)
{
/*
.loc_0x0:
  lis       r6, 0x804B
  lis       r5, 0x804F
  addi      r0, r6, 0x1148
  li        r6, 0
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x4E78
  stw       r6, 0x4(r3)
  stw       r0, 0x0(r3)
  stw       r4, 0x8(r3)
  stb       r6, 0xD(r3)
  stb       r6, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80402B9C
 * Size:	000050
 */
void __ct__Q32kh6Screen20DispDayEndResultMailFP7JKRHeapQ32kh6Screen12MailCategory(void)
{
/*
.loc_0x0:
  lis       r7, 0x804B
  lis       r6, 0x804F
  addi      r0, r7, 0x1148
  li        r7, 0
  stw       r0, 0x0(r3)
  subi      r6, r6, 0x4E90
  li        r0, -0x1
  stw       r7, 0x4(r3)
  stw       r6, 0x0(r3)
  stw       r4, 0x8(r3)
  stw       r7, 0xC(r3)
  stw       r5, 0x10(r3)
  stw       r7, 0x14(r3)
  stb       r7, 0x18(r3)
  stw       r0, 0x1C(r3)
  lwz       r4, -0x6C18(r13)
  lwz       r4, 0x40(r4)
  lwz       r0, 0x218(r4)
  stw       r0, 0x20(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __ct__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80402BEC
 * Size:	0000FC
 */
void doCreate__Q32kh6Screen19ObjDayEndResultBaseFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r5, 0x77D0
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  li        r3, 0x148
  bl        -0x3DED74
  mr.       r0, r3
  beq-      .loc_0x40
  bl        0x32188
  mr        r0, r3

.loc_0x40:
  stw       r0, 0x38(r29)
  mr        r6, r30
  addi      r4, r31, 0x14
  lis       r5, 0x104
  lwz       r3, 0x38(r29)
  bl        -0x3C361C
  mr        r4, r30
  addi      r3, r31, 0x28
  bl        -0x3DFC34
  bl        -0x3BB334
  stw       r3, 0x3C(r29)
  mr        r4, r30
  addi      r3, r31, 0x3C
  bl        -0x3DFC48
  bl        -0x3BB348
  stw       r3, 0x40(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x6274
  lwz       r3, 0x38(r29)
  addi      r6, r4, 0x6E32
  li        r5, 0x4E
  li        r7, 0x8
  bl        0x8E34
  stw       r3, 0x8C(r29)
  lwz       r3, 0x8C(r29)
  bl        0x9134
  lwz       r3, 0x8C(r29)
  li        r4, 0
  bl        0x9148
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
 * Address:	80402CE8
 * Size:	000098
 */
void doStart__Q32kh6Screen19ObjDayEndResultBaseFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x38
  lbz       r0, 0x4(r4)
  cmplwi    r0, 0
  beq-      .loc_0x38
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x90(r31)
  b         .loc_0x44

.loc_0x38:
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x8
  stw       r0, 0x90(r31)

.loc_0x44:
  mr        r3, r31
  bl        0x62C
  lwz       r3, 0x70(r31)
  lis       r4, 0x4E61
  addi      r6, r4, 0x6C6C
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x899C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xCA734
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80402D80
 * Size:	000044
 */
void doUpdateFinish__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x660
  lwz       r3, 0x8C(r31)
  bl        0x9054
  lwz       r3, -0x67A8(r13)
  li        r4, 0x181D
  li        r5, 0
  bl        -0xCA77C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80402DC4
 * Size:	0000F4
 */
void doUpdateFadein__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r31)
  lis       r3, 0x7465
  lwz       r4, 0x50(r31)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3C9818
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r31)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r31)
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x7C(r31)
  lfs       f1, 0x60(r31)
  lfs       f0, 0x80(r31)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r31)
  lfs       f0, 0x80(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  mfcr      r0
  lwz       r31, 0x1C(r1)
  rlwinm    r3,r0,3,31,31
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80402EB8
 * Size:	000010
 */
void doUpdateFadeinFinish__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0x94(r3)
  stb       r0, 0x95(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80402EC8
 * Size:	0000FC
 */
void doUpdateFadeout__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r31)
  lis       r3, 0x7465
  lwz       r4, 0x50(r31)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3C991C
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r31)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r31)
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x84(r31)
  lfs       f1, 0x60(r31)
  lfs       f0, 0x88(r31)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D50(r2)
  lfs       f3, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r31)
  lfs       f0, 0x88(r31)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  mfcr      r0
  lwz       r31, 0x1C(r1)
  rlwinm    r3,r0,3,31,31
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80402FC4
 * Size:	000118
 */
void doDraw__Q32kh6Screen19ObjDayEndResultBaseFR8Graphics(void)
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
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x1C(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x38(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x14(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x70(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x18(r3)
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r3, 0x4C(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
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
 * Address:	804030DC
 * Size:	000280
 */
void updateCommon__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r31)
  bl        -0x3C25E0
  lfs       f0, 0x44(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x44(r31)
  lfs       f0, 0x48(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x48(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x44(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x8C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x44(r31)

.loc_0x8C:
  lwz       r3, 0x40(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x48(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xC8
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x48(r31)

.loc_0xC8:
  lfs       f0, 0x68(r31)
  lwz       r3, 0x58(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x6C(r31)
  lwz       r3, 0x5C(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x4C(r31)
  bl        -0x3C2694
  lfs       f0, 0x68(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x68(r31)
  lfs       f0, 0x6C(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x6C(r31)
  lwz       r3, 0x58(r31)
  lfs       f2, 0x68(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x140
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x68(r31)

.loc_0x140:
  lwz       r3, 0x5C(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x6C(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x17C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x6C(r31)

.loc_0x17C:
  lfs       f0, 0x64(r31)
  lis       r3, 0x6974
  lwz       r4, 0x54(r31)
  addi      r6, r3, 0x6C65
  li        r5, 0x4E74
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3C9C88
  lfs       f1, 0x64(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x64(r31)
  lwz       r3, 0x54(r31)
  lfs       f2, 0x64(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1F8
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x64(r31)

.loc_0x1F8:
  lfs       f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x70(r31)
  bl        -0x3C27B8
  lfs       f1, 0x78(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  lfs       f2, 0x78(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x258
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x78(r31)

.loc_0x258:
  lwz       r3, 0x38(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8040335C
 * Size:	000098
 */
void setFadeinFrm__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x90(r3)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)
  b         .loc_0x7C

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)

.loc_0x7C:
  lfs       f0, 0x7C(r31)
  stfs      f0, 0x60(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804033F4
 * Size:	000098
 */
void setFadeoutFrm__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x90(r3)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x50
  lwz       r12, 0x0(r3)
  lwz       r12, 0x94(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x84(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x98(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x88(r31)
  b         .loc_0x7C

.loc_0x50:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x84(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x84(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x88(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x88(r31)

.loc_0x7C:
  lfs       f0, 0x84(r31)
  stfs      f0, 0x60(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040348C
 * Size:	000144
 */
void __ct__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x50648
  lis       r3, 0x804F
  lis       r4, 0x804F
  subi      r5, r3, 0x4F38
  lis       r3, 0x8051
  stw       r5, 0x0(r31)
  addi      r0, r5, 0x10
  subi      r7, r4, 0x4FE0
  li        r9, 0
  stw       r0, 0x18(r31)
  li        r8, 0xFF
  lfs       f0, 0x1D48(r2)
  addi      r6, r7, 0x10
  stw       r9, 0x38(r31)
  li        r5, 0x3
  li        r0, -0x6
  addi      r4, r3, 0x4134
  stw       r9, 0x3C(r31)
  mr        r3, r31
  stw       r9, 0x40(r31)
  stw       r9, 0x4C(r31)
  stw       r9, 0x50(r31)
  stw       r9, 0x54(r31)
  stw       r9, 0x58(r31)
  stw       r9, 0x5C(r31)
  stw       r9, 0x70(r31)
  stw       r9, 0x74(r31)
  stfs      f0, 0x78(r31)
  stfs      f0, 0x6C(r31)
  stfs      f0, 0x68(r31)
  stfs      f0, 0x64(r31)
  stfs      f0, 0x60(r31)
  stfs      f0, 0x48(r31)
  stfs      f0, 0x44(r31)
  stfs      f0, 0x88(r31)
  stfs      f0, 0x84(r31)
  stfs      f0, 0x80(r31)
  stfs      f0, 0x7C(r31)
  stw       r9, 0x8C(r31)
  stb       r8, 0x95(r31)
  stb       r8, 0x94(r31)
  stw       r9, 0x90(r31)
  stw       r7, 0x0(r31)
  stw       r6, 0x18(r31)
  stw       r5, 0x98(r31)
  stw       r9, 0x9C(r31)
  stfs      f0, 0xA0(r31)
  stw       r9, 0xA8(r31)
  stw       r9, 0xA4(r31)
  stw       r9, 0xB0(r31)
  stw       r9, 0xAC(r31)
  stw       r9, 0xD0(r31)
  stw       r9, 0xCC(r31)
  stw       r9, 0xC8(r31)
  stw       r9, 0xC4(r31)
  stw       r9, 0xB4(r31)
  stw       r9, 0xB8(r31)
  stw       r9, 0xC0(r31)
  stw       r9, 0xBC(r31)
  stfs      f0, 0xD4(r31)
  stfs      f0, 0xDC(r31)
  stw       r0, 0xE0(r31)
  stw       r9, 0xD8(r31)
  lwz       r0, 0x24(r4)
  stw       r0, 0xE4(r31)
  stw       r9, 0xE8(r31)
  stw       r9, 0xF0(r31)
  stw       r9, 0xEC(r31)
  stw       r9, 0xF4(r31)
  stb       r9, 0xF9(r31)
  stb       r9, 0xF8(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804035D0
 * Size:	0000AC
 */
void __dt__Q32kh6Screen19ObjDayEndResultBaseFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x4F38
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
  bl        0xDF9C
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3E660C
  mr        r3, r30
  li        r4, 0
  bl        0xDF3C

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3DF5A8

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
 * Address:	8040367C
 * Size:	0007AC
 */
void doCreate__Q32kh6Screen19ObjDayEndResultItemFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stmw      r27, 0x1C(r1)
  lis       r5, 0x804A
  mr        r29, r3
  mr        r30, r4
  li        r3, 0x148
  subi      r31, r5, 0x77D0
  bl        -0x3DF804
  mr.       r0, r3
  beq-      .loc_0x40
  bl        0x316F8
  mr        r0, r3

.loc_0x40:
  stw       r0, 0x38(r29)
  mr        r6, r30
  addi      r4, r31, 0x14
  lis       r5, 0x104
  lwz       r3, 0x38(r29)
  bl        -0x3C40AC
  mr        r4, r30
  addi      r3, r31, 0x28
  bl        -0x3E06C4
  bl        -0x3BBDC4
  stw       r3, 0x3C(r29)
  mr        r4, r30
  addi      r3, r31, 0x3C
  bl        -0x3E06D8
  bl        -0x3BBDD8
  stw       r3, 0x40(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x6274
  lwz       r3, 0x38(r29)
  addi      r6, r4, 0x6E32
  li        r5, 0x4E
  li        r7, 0x8
  bl        0x83A4
  stw       r3, 0x8C(r29)
  lwz       r3, 0x8C(r29)
  bl        0x86A4
  lwz       r3, 0x8C(r29)
  li        r4, 0
  bl        0x86B8
  li        r3, 0x148
  bl        -0x3DF8BC
  mr.       r0, r3
  beq-      .loc_0xF8
  bl        0x31640
  mr        r0, r3

.loc_0xF8:
  stw       r0, 0x4C(r29)
  mr        r6, r30
  addi      r4, r31, 0x50
  lis       r5, 0x4
  lwz       r3, 0x4C(r29)
  bl        -0x3C4164
  mr        r4, r30
  addi      r3, r31, 0x60
  bl        -0x3E077C
  mr        r28, r3
  bl        -0x3BBE80
  stw       r3, 0x50(r29)
  mr        r3, r28
  bl        -0x3BBE8C
  stw       r3, 0x54(r29)
  mr        r3, r28
  bl        -0x3BBE98
  stw       r3, 0x9C(r29)
  mr        r4, r30
  addi      r3, r31, 0x70
  bl        -0x3E07AC
  bl        -0x3BBEAC
  stw       r3, 0x58(r29)
  mr        r4, r30
  addi      r3, r31, 0x80
  bl        -0x3E07C0
  bl        -0x3BBEC0
  stw       r3, 0x5C(r29)
  lwz       r3, 0x4C(r29)
  lwz       r4, 0x58(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  lwz       r4, 0x5C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  lis       r4, 0x7465
  addi      r6, r4, 0x6D57
  li        r5, 0x4E69
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r29)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  lis       r4, 0x6974
  addi      r6, r4, 0x6C65
  li        r5, 0x4E74
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x54(r29)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  lis       r4, 0x4E5F
  addi      r6, r4, 0x3364
  li        r5, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x9C(r29)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x148
  bl        -0x3DFA10
  mr.       r0, r3
  beq-      .loc_0x24C
  bl        0x314EC
  mr        r0, r3

.loc_0x24C:
  stw       r0, 0x70(r29)
  mr        r6, r30
  addi      r4, r31, 0x90
  lis       r5, 0x4
  lwz       r3, 0x70(r29)
  bl        -0x3C42B8
  mr        r4, r30
  addi      r3, r31, 0xB0
  bl        -0x3E08D0
  bl        -0x3BBFD0
  stw       r3, 0x74(r29)
  lwz       r3, 0x70(r29)
  lwz       r4, 0x74(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r29)
  bl        -0xF9B10
  mr        r3, r29
  bl        0x50690
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF4614
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2D4
  addi      r3, r31, 0
  addi      r5, r31, 0xD0
  li        r4, 0x1F5
  crclr     6, 0x6
  bl        -0x3D930C

.loc_0x2D4:
  mr        r3, r29
  bl        0x50654
  mr        r31, r3
  lwz       r0, 0x1C(r3)
  cmplwi    r0, 0x6
  ble-      .loc_0x304
  lwz       r0, 0x90(r29)
  ori       r0, r0, 0x1
  stw       r0, 0x90(r29)
  lwz       r3, 0x1C(r31)
  subi      r0, r3, 0x6
  stw       r0, 0xD8(r29)

.loc_0x304:
  lwz       r3, 0x4C(r29)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CB684
  lfs       f31, 0x4(r3)
  lis       r5, 0x7470
  lwz       r3, 0x4C(r29)
  lis       r4, 0x4E
  addi      r6, r5, 0x3031
  lwz       r12, 0x0(r3)
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CB6B0
  lfs       f0, 0x4(r3)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  fsubs     f0, f0, f31
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0xDC(r29)
  lwz       r0, 0xE0(r29)
  lfs       f2, 0xDC(r29)
  subfic    r0, r0, 0x1
  xoris     r0, r0, 0x8000
  stw       r0, 0x14(r1)
  lfd       f0, 0x10(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f2, f0
  stfs      f0, 0xD4(r29)
  lbz       r0, 0x30(r31)
  cmplwi    r0, 0
  beq-      .loc_0x40C
  lwz       r3, 0x4C(r29)
  lis       r5, 0x5F6D
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x656E
  addi      r5, r4, 0x696E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6D65
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E63
  addi      r6, r5, 0x6E75
  lwz       r3, 0x4C(r29)
  addi      r5, r4, 0x6F5F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x6D70
  lis       r4, 0x50
  stb       r0, 0xB0(r3)
  addi      r27, r5, 0x3031
  addi      r28, r4, 0x636F
  b         .loc_0x470

.loc_0x40C:
  lwz       r3, 0x4C(r29)
  lis       r5, 0x5F6D
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x656E
  addi      r5, r4, 0x696E
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  lis       r5, 0x6D65
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E63
  addi      r6, r5, 0x6E75
  lwz       r3, 0x4C(r29)
  addi      r5, r4, 0x6F5F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x696E
  stb       r0, 0xB0(r3)
  addi      r27, r4, 0x3031
  li        r28, 0x5066

.loc_0x470:
  li        r0, 0
  lis       r4, 0x796F
  stw       r0, 0xC8(r29)
  lis       r3, 0x5074
  addi      r6, r4, 0x7031
  addi      r7, r29, 0xC8
  lwz       r4, 0x24(r31)
  addi      r5, r3, 0x6F6B
  lwz       r0, 0x2C(r31)
  li        r8, 0x9
  li        r9, 0x1
  li        r10, 0
  sub       r0, r0, r4
  stw       r0, 0xC4(r29)
  stw       r30, 0x8(r1)
  lwz       r3, 0x4C(r29)
  bl        -0xF7524
  stw       r3, 0xA4(r29)
  mr        r6, r27
  mr        r5, r28
  addi      r7, r29, 0xC4
  stw       r30, 0x8(r1)
  li        r8, 0x9
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r29)
  bl        -0xF754C
  stw       r3, 0xA8(r29)
  lis       r4, 0x3030
  lis       r3, 0x506D
  addi      r7, r29, 0xCC
  stw       r30, 0x8(r1)
  addi      r6, r4, 0x5F31
  addi      r5, r3, 0x6164
  li        r8, 0x9
  lwz       r3, 0x4C(r29)
  li        r9, 0
  li        r10, 0
  bl        -0xF757C
  stw       r3, 0xAC(r29)
  lis       r4, 0x3031
  lis       r3, 0x506D
  addi      r7, r29, 0xD0
  stw       r30, 0x8(r1)
  addi      r6, r4, 0x5F31
  addi      r5, r3, 0x6164
  li        r8, 0x9
  lwz       r3, 0x4C(r29)
  li        r9, 0
  li        r10, 0
  bl        -0xF75AC
  stw       r3, 0xB0(r29)
  lis       r6, 0x50
  mr        r3, r30
  li        r5, 0
  lwz       r4, 0x4C(r29)
  addi      r6, r6, 0x3364
  bl        -0xD6A9C
  mr        r0, r3
  li        r3, 0x8
  mr        r27, r0
  bl        -0x3DFD3C
  mr.       r0, r3
  beq-      .loc_0x57C
  mr        r4, r27
  bl        -0xD6884
  mr        r0, r3

.loc_0x57C:
  stw       r0, 0xB4(r29)
  lwz       r3, 0xB4(r29)
  bl        -0xD66C8
  lis       r5, 0x6D65
  lis       r4, 0x4E
  lwz       r3, 0x4C(r29)
  addi      r6, r5, 0x5F75
  addi      r5, r4, 0x7961
  li        r7, 0x10
  bl        0x7EC8
  stw       r3, 0xBC(r29)
  lwz       r3, 0xBC(r29)
  bl        0x81C8
  lis       r5, 0x6D65
  lis       r4, 0x4E
  lwz       r3, 0x4C(r29)
  addi      r6, r5, 0x5F6C
  addi      r5, r4, 0x7961
  li        r7, 0x10
  bl        0x7EA0
  stw       r3, 0xC0(r29)
  lwz       r3, 0xC0(r29)
  bl        0x81A0
  lis       r4, 0x50
  lwz       r3, 0x4C(r29)
  addi      r6, r4, 0x3364
  li        r5, 0
  li        r7, 0x10
  bl        0x7E7C
  stw       r3, 0xB8(r29)
  lis       r3, 0x4E5F
  addi      r6, r3, 0x3364
  li        r5, 0
  lwz       r3, 0x4C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0xB8(r29)
  bl        0x8080
  lwz       r3, 0xB8(r29)
  bl        0x8150
  lwz       r3, 0x4C(r29)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7470
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3033
  lwz       r3, 0x4C(r29)
  addi      r5, r4, 0x7365
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7470
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3034
  lwz       r3, 0x4C(r29)
  addi      r5, r4, 0x7365
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7470
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3035
  lwz       r3, 0x4C(r29)
  addi      r5, r4, 0x7365
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6274
  stb       r0, 0xB0(r3)
  addi      r6, r4, 0x6E31
  li        r5, 0x4E
  lwz       r3, 0x38(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  stb       r4, 0xB0(r3)
  lbz       r0, 0x31(r31)
  cmplwi    r0, 0
  beq-      .loc_0x788
  stw       r4, 0x98(r29)
  lwz       r0, 0x24(r31)
  stw       r0, 0xC8(r29)
  lwz       r0, 0x2C(r31)
  stw       r0, 0xC4(r29)
  lwz       r3, 0xA4(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA8(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8C(r29)
  bl        0x8008
  li        r0, 0
  lfs       f0, 0x1D48(r2)
  stw       r0, 0xE0(r29)
  stfs      f0, 0xD4(r29)
  lwz       r0, 0x90(r29)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x77C
  lwz       r3, 0xC0(r29)
  bl        0x7FE4
  lwz       r3, 0xB8(r29)
  bl        0x7FDC

.loc_0x77C:
  lwz       r0, 0x90(r29)
  ori       r0, r0, 0x40
  stw       r0, 0x90(r29)

.loc_0x788:
  li        r0, 0x1
  stb       r0, 0x31(r31)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80403E28
 * Size:	000108
 */
void doStart__Q32kh6Screen19ObjDayEndResultItemFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x38
  lbz       r0, 0x4(r4)
  cmplwi    r0, 0
  beq-      .loc_0x38
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x90(r31)
  b         .loc_0x44

.loc_0x38:
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x8
  stw       r0, 0x90(r31)

.loc_0x44:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x84
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)
  b         .loc_0xB4

.loc_0x84:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)

.loc_0xB4:
  lfs       f0, 0x7C(r31)
  lis       r3, 0x4E61
  addi      r6, r3, 0x6C6C
  li        r5, 0
  stfs      f0, 0x60(r31)
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x77EC
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xCB8E4
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80403F30
 * Size:	00011C
 */
void doUpdateFadein__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r30)
  lis       r3, 0x7465
  lwz       r4, 0x50(r30)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CA988
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r30)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r30)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x7C(r30)
  lfs       f1, 0x60(r30)
  lfs       f0, 0x80(r30)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r30)
  lfs       f0, 0x80(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xE8
  li        r31, 0x1
  b         .loc_0xEC

.loc_0xE8:
  li        r31, 0

.loc_0xEC:
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8040404C
 * Size:	0002CC
 */
void doUpdate__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0x3
  beq-      .loc_0x94
  bge-      .loc_0x60
  cmpwi     r0, 0x1
  beq-      .loc_0x7C
  bge-      .loc_0x88
  cmpwi     r0, 0
  bge-      .loc_0x70
  b         .loc_0xB4

.loc_0x60:
  cmpwi     r0, 0x5
  beq-      .loc_0xAC
  bge-      .loc_0xB4
  b         .loc_0xA0

.loc_0x70:
  mr        r3, r31
  bl        0xA40
  b         .loc_0xB4

.loc_0x7C:
  mr        r3, r31
  bl        0xC08
  b         .loc_0xB4

.loc_0x88:
  mr        r3, r31
  bl        0xCF0
  b         .loc_0xB4

.loc_0x94:
  mr        r3, r31
  bl        0xDD8
  b         .loc_0xB4

.loc_0xA0:
  mr        r3, r31
  bl        0xFA0
  b         .loc_0xB4

.loc_0xAC:
  mr        r3, r31
  bl        0xFB0

.loc_0xB4:
  mr        r3, r31
  bl        0x4FF3C
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x1C0
  mr        r3, r31
  bl        0x4FF28
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0xF4
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,25,25
  bne-      .loc_0xF4
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x20
  stw       r0, 0x90(r31)

.loc_0xF4:
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0
  bne-      .loc_0x1C0
  mr        r3, r31
  bl        0x4FE58
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r5, 0x4E24
  stw       r0, 0x10(r1)
  subi      r6, r4, 0x7BA8
  li        r4, 0
  li        r0, 0x1
  stw       r3, 0x1C(r1)
  mr        r3, r31
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stb       r4, 0x18(r1)
  stb       r0, 0x19(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x10
  bl        0x4DD90
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1C0
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r5, 0x804F
  stw       r0, 0x8(r1)
  subi      r0, r3, 0x7588
  lis       r3, 0x804F
  li        r4, 0x1
  stw       r0, 0x8(r1)
  subi      r5, r5, 0x4FF0
  subi      r0, r3, 0x5000
  mr        r3, r31
  stw       r5, 0x8(r1)
  stb       r4, 0xC(r1)
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  bl        0x4DD64
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,28,26
  stw       r0, 0x90(r31)

.loc_0x1C0:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x2B4
  lwz       r4, 0xD8(r31)
  lis       r0, 0x4330
  stw       r0, 0x20(r1)
  li        r0, 0
  lfd       f1, 0x1D58(r2)
  mr        r3, r31
  stw       r4, 0xE0(r31)
  lwz       r4, 0xE0(r31)
  lfs       f0, 0xDC(r31)
  xoris     r4, r4, 0x8000
  stw       r4, 0x24(r1)
  fneg      f2, f0
  lfd       f0, 0x20(r1)
  fsubs     f0, f0, f1
  fmuls     f0, f2, f0
  stfs      f0, 0xD4(r31)
  stw       r0, 0xE8(r31)
  stw       r0, 0x98(r31)
  bl        0x4FD48
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF4F5C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x254
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x298
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3D9C5C

.loc_0x254:
  mr        r3, r31
  bl        0x4FD04
  lwz       r0, 0x24(r3)
  lfs       f1, 0x1D50(r2)
  stw       r0, 0xC8(r31)
  lwz       r0, 0x2C(r3)
  stw       r0, 0xC4(r31)
  lwz       r3, 0xA4(r31)
  bl        -0xF8AC8
  lwz       r3, 0xA8(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xF8AD4
  lwz       r3, 0x8C(r31)
  bl        0x7AFC
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1814
  li        r5, 0
  bl        -0xCBCB4
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,27,25
  stw       r0, 0x90(r31)
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x40
  stw       r0, 0x90(r31)

.loc_0x2B4:
  lwz       r0, 0x34(r1)
  li        r3, 0
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80404318
 * Size:	000124
 */
void doUpdateFadeout__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r30)
  lis       r3, 0x7465
  lwz       r4, 0x50(r30)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CAD70
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r30)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r30)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x84(r30)
  lfs       f1, 0x60(r30)
  lfs       f0, 0x88(r30)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D50(r2)
  lfs       f3, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r30)
  lfs       f0, 0x88(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xF0
  li        r31, 0x1
  b         .loc_0xF4

.loc_0xF0:
  li        r31, 0

.loc_0xF4:
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x24(r1)
  mr        r3, r31
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8040443C
 * Size:	0006C4
 */
void doDraw__Q32kh6Screen19ObjDayEndResultItemFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0xA0(r1)
  mflr      r0
  stw       r0, 0xA4(r1)
  stfd      f31, 0x90(r1)
  psq_st    f31,0x98(r1),0,0
  stfd      f30, 0x80(r1)
  psq_st    f30,0x88(r1),0,0
  stmw      r20, 0x50(r1)
  mr        r31, r4
  mr        r30, r3
  addi      r3, r31, 0xBC
  lis       r4, 0x804A
  lwz       r12, 0xBC(r31)
  subi      r26, r4, 0x77D0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x1C(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x38(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x14(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x70(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x18(r3)
  addi      r3, r31, 0xBC
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r4, 0x4C(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r4)
  stfs      f0, 0x144(r4)
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x4FA40
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF5264
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x164
  addi      r3, r26, 0
  addi      r5, r26, 0xD0
  li        r4, 0x2D0
  crclr     6, 0x6
  bl        -0x3D9F5C

.loc_0x164:
  mr        r3, r30
  bl        0x4FA04
  mr        r29, r3
  lwz       r3, 0x4C(r30)
  lis       r4, 0x414C
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r4, 0x4C32
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r27, r3
  lwz       r3, 0x4C(r30)
  lis       r4, 0x4E5F
  li        r5, 0
  lwz       r12, 0x0(r3)
  addi      r6, r4, 0x3364
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r28, r3
  lwz       r3, 0x4C(r30)
  lwz       r7, 0x2B68(r2)
  lis       r5, 0x7470
  lwz       r12, 0x0(r3)
  lis       r4, 0x4E
  lwz       r0, 0x2B6C(r2)
  addi      r6, r5, 0x3030
  lwz       r12, 0x3C(r12)
  addi      r5, r4, 0x7365
  stw       r7, 0x18(r1)
  stw       r0, 0x1C(r1)
  mtctr     r12
  bctrl     
  stw       r3, 0x18(r1)
  lis       r5, 0x7470
  lwz       r3, 0x4C(r30)
  lis       r4, 0x4E
  addi      r6, r5, 0x3031
  lwz       r12, 0x0(r3)
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfd       f3, 0xE0(r26)
  li        r7, 0x1
  lfd       f2, 0xE8(r26)
  li        r0, 0
  lfd       f1, 0xF0(r26)
  mr        r4, r31
  lfd       f0, 0xF8(r26)
  addi      r20, r1, 0x18
  stfd      f3, 0x30(r1)
  addi      r5, r31, 0xBC
  lwz       r6, 0x18(r1)
  stfd      f2, 0x38(r1)
  stfd      f1, 0x20(r1)
  stfd      f0, 0x28(r1)
  stb       r7, 0xB0(r27)
  stb       r0, 0xB0(r28)
  stb       r0, 0xB0(r6)
  stb       r0, 0xB0(r3)
  stw       r3, 0x1C(r1)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  addi      r3, r1, 0x14
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x10
  addi      r5, r1, 0xC
  addi      r6, r1, 0x8
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x31AE84
  lwz       r3, 0x14(r1)
  lwz       r4, 0xEC(r30)
  lwz       r5, 0xC(r1)
  lwz       r6, 0xF0(r30)
  bl        -0x31AF10
  li        r0, 0
  lfs       f1, 0x1D60(r2)
  stb       r0, 0xB0(r27)
  li        r21, 0
  stb       r0, 0xB0(r28)
  lfs       f0, 0xDC(r30)
  fmuls     f30, f1, f0

.loc_0x2CC:
  lwz       r3, 0x0(r20)
  lfs       f0, 0xD4(r30)
  lwz       r12, 0x0(r3)
  fsubs     f2, f0, f30
  lfs       f1, 0x1D48(r2)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  addi      r21, r21, 0x1
  addi      r20, r20, 0x4
  cmpwi     r21, 0x2
  blt+      .loc_0x2CC
  mr        r22, r30
  addi      r20, r1, 0x30
  addi      r21, r1, 0x20
  li        r23, 0

.loc_0x30C:
  lwz       r3, 0x4C(r30)
  lwz       r5, 0x0(r20)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r20)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r3, 0x4C(r30)
  lwz       r5, 0x0(r21)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r21)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r3, 0xAC(r22)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  addi      r23, r23, 0x1
  addi      r21, r21, 0x8
  cmpwi     r23, 0x2
  addi      r22, r22, 0x4
  addi      r20, r20, 0x8
  blt+      .loc_0x30C
  lwz       r3, 0x18(r29)
  li        r22, 0
  lfd       f31, 0x1D68(r2)
  lis       r29, 0x4330
  lwz       r21, 0x24(r3)
  b         .loc_0x53C

.loc_0x398:
  stw       r22, 0x44(r1)
  rlwinm    r24,r22,0,31,31
  lfs       f3, 0xDC(r30)
  stw       r29, 0x40(r1)
  lfs       f1, 0xD4(r30)
  fneg      f0, f3
  lfd       f2, 0x40(r1)
  lwz       r20, 0x38(r21)
  fsubs     f2, f2, f31
  fmadds    f1, f2, f3, f1
  fcmpo     cr0, f1, f0
  blt-      .loc_0x3E8
  lwz       r3, 0xF0(r30)
  lis       r0, 0x4330
  stw       r0, 0x40(r1)
  stw       r3, 0x44(r1)
  lfd       f0, 0x40(r1)
  fsubs     f0, f0, f31
  fcmpo     cr0, f0, f1
  bge-      .loc_0x410

.loc_0x3E8:
  rlwinm    r0,r24,2,0,29
  addi      r3, r1, 0x18
  lwzx      r3, r3, r0
  fmr       f2, f30
  lfs       f1, 0x1D48(r2)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x534

.loc_0x410:
  cntlzw    r0, r24
  addi      r3, r1, 0x18
  rlwinm    r0,r0,29,22,29
  rlwinm    r23,r24,2,0,29
  lwzx      r4, r3, r0
  li        r5, 0
  lwzx      r3, r3, r23
  li        r0, 0x1
  stb       r5, 0xB0(r4)
  fmr       f2, f30
  lfs       f1, 0x1D48(r2)
  stb       r0, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x2C(r21)
  rlwinm    r24,r24,3,0,28
  addi      r0, r1, 0x30
  lwz       r3, 0x4C(r30)
  add       r6, r0, r24
  lwz       r7, 0x20(r4)
  lwz       r5, 0x0(r6)
  lwz       r6, 0x4(r6)
  bl        0x6B94
  lwz       r26, 0x40(r21)
  li        r3, 0
  lwz       r25, 0x44(r21)
  xor       r0, r26, r3
  xor       r3, r25, r3
  or.       r0, r3, r0
  bne-      .loc_0x4C0
  lwz       r3, 0x4C(r30)
  addi      r0, r1, 0x20
  add       r6, r0, r24
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r6)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  b         .loc_0x4FC

.loc_0x4C0:
  lwz       r3, 0x4C(r30)
  addi      r0, r1, 0x20
  add       r6, r0, r24
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r6)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  li        r4, 0
  addc      r0, r25, r0
  stw       r0, 0x1C(r3)
  adde      r0, r26, r4
  stw       r0, 0x18(r3)

.loc_0x4FC:
  add       r3, r30, r23
  stw       r20, 0xCC(r3)
  lwz       r3, 0xAC(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x534:
  lwz       r21, 0x18(r21)
  addi      r22, r22, 0x1

.loc_0x53C:
  cmplwi    r21, 0
  bne+      .loc_0x398
  addi      r24, r1, 0x18
  addi      r21, r1, 0x30
  addi      r20, r1, 0x20
  b         .loc_0x620

.loc_0x554:
  rlwinm    r25,r22,0,31,31
  rlwinm    r23,r22,2,29,29
  cntlzw    r0, r25
  li        r5, 0
  rlwinm    r0,r0,29,22,29
  lwzx      r3, r24, r23
  lwzx      r4, r24, r0
  li        r0, 0x1
  fmr       f2, f30
  lfs       f1, 0x1D48(r2)
  stb       r5, 0xB0(r4)
  stb       r0, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  rlwinm    r25,r25,3,0,28
  add       r6, r21, r25
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r6)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r6)
  mtctr     r12
  bctrl     
  li        r0, 0
  add       r6, r20, r25
  stb       r0, 0xB0(r3)
  lwz       r3, 0x4C(r30)
  lwz       r5, 0x0(r6)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r6)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r4, 0
  addi      r0, r23, 0xAC
  stb       r4, 0xB0(r3)
  lwzx      r3, r30, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r22, r22, 0x1

.loc_0x620:
  cmplwi    r22, 0x6
  blt+      .loc_0x554
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r5, 0xC(r1)
  lwz       r6, 0x8(r1)
  bl        -0x31B29C
  lwz       r0, 0x90(r30)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x6A0
  lwz       r0, 0x98(r30)
  cmpwi     r0, 0x3
  beq-      .loc_0x6A0
  cmpwi     r0, 0x4
  beq-      .loc_0x6A0
  cmpwi     r0, 0x5
  beq-      .loc_0x6A0
  li        r7, 0
  li        r0, 0x1
  stb       r7, 0xB0(r27)
  mr        r4, r31
  lwz       r6, 0x18(r1)
  addi      r5, r31, 0xBC
  stb       r0, 0xB0(r28)
  lwz       r3, 0x1C(r1)
  stb       r7, 0xB0(r6)
  stb       r7, 0xB0(r3)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     

.loc_0x6A0:
  psq_l     f31,0x98(r1),0,0
  lfd       f31, 0x90(r1)
  psq_l     f30,0x88(r1),0,0
  lfd       f30, 0x80(r1)
  lmw       r20, 0x50(r1)
  lwz       r0, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0xA0
  blr
*/
}

/*
 * --INFO--
 * Address:	80404B00
 * Size:	0001D4
 */
void statusNormal__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x90(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x94
  lwz       r3, 0xE0(r31)
  cmpwi     r3, 0
  bne-      .loc_0x48
  lwz       r3, 0xBC(r31)
  bl        0x72C0
  lwz       r3, 0xC0(r31)
  bl        0x7298
  lwz       r3, 0xB4(r31)
  bl        -0xD76F0
  b         .loc_0x88

.loc_0x48:
  lwz       r0, 0xD8(r31)
  cmpw      r3, r0
  bne-      .loc_0x70
  lwz       r3, 0xBC(r31)
  bl        0x7278
  lwz       r3, 0xC0(r31)
  bl        0x7290
  lwz       r3, 0xB4(r31)
  bl        -0xD77EC
  b         .loc_0x88

.loc_0x70:
  lwz       r3, 0xBC(r31)
  bl        0x725C
  lwz       r3, 0xC0(r31)
  bl        0x7254
  lwz       r3, 0xB4(r31)
  bl        -0xD764C

.loc_0x88:
  lwz       r3, 0xB8(r31)
  bl        0x7244
  b         .loc_0xAC

.loc_0x94:
  lwz       r3, 0xBC(r31)
  bl        0x7258
  lwz       r3, 0xC0(r31)
  bl        0x7250
  lwz       r3, 0xB8(r31)
  bl        0x7248

.loc_0xAC:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x1C0
  mr        r3, r31
  bl        0x4F484
  lis       r4, 0x800
  lwz       r3, 0x18(r3)
  addi      r0, r4, 0x8
  and.      r0, r3, r0
  beq-      .loc_0x12C
  lwz       r3, 0xE0(r31)
  cmpwi     r3, 0
  beq-      .loc_0x12C
  subi      r0, r3, 0x1
  stw       r0, 0xE0(r31)
  lbz       r3, 0xF8(r31)
  cmplwi    r3, 0x1
  blt-      .loc_0x108
  lis       r3, 0x8051
  addi      r3, r3, 0x4134
  lwz       r0, 0x28(r3)
  stw       r0, 0xE4(r31)
  b         .loc_0x110

.loc_0x108:
  addi      r0, r3, 0x1
  stb       r0, 0xF8(r31)

.loc_0x110:
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0xF9(r31)
  mr        r3, r31
  stw       r0, 0x98(r31)
  bl        .loc_0x1D4
  b         .loc_0x1C0

.loc_0x12C:
  mr        r3, r31
  bl        0x4F410
  lis       r4, 0x400
  lwz       r3, 0x18(r3)
  addi      r0, r4, 0x4
  and.      r0, r3, r0
  beq-      .loc_0x1A4
  lwz       r3, 0xE0(r31)
  lwz       r0, 0xD8(r31)
  cmpw      r3, r0
  beq-      .loc_0x1A4
  addi      r0, r3, 0x1
  stw       r0, 0xE0(r31)
  lbz       r3, 0xF9(r31)
  cmplwi    r3, 0x1
  blt-      .loc_0x180
  lis       r3, 0x8051
  addi      r3, r3, 0x4134
  lwz       r0, 0x28(r3)
  stw       r0, 0xE4(r31)
  b         .loc_0x188

.loc_0x180:
  addi      r0, r3, 0x1
  stb       r0, 0xF9(r31)

.loc_0x188:
  li        r3, 0
  li        r0, 0x2
  stb       r3, 0xF8(r31)
  mr        r3, r31
  stw       r0, 0x98(r31)
  bl        0x12C
  b         .loc_0x1C0

.loc_0x1A4:
  li        r0, 0
  lis       r3, 0x8051
  stb       r0, 0xF9(r31)
  addi      r3, r3, 0x4134
  stb       r0, 0xF8(r31)
  lwz       r0, 0x24(r3)
  stw       r0, 0xE4(r31)

.loc_0x1C0:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x1D4:
*/
}

/*
 * --INFO--
 * Address:	80404CD4
 * Size:	0000F4
 */
void statusScrollUp__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x4330
  lfd       f4, 0x1D58(r2)
  stw       r0, 0x34(r1)
  lwz       r4, 0xE0(r3)
  stw       r6, 0x18(r1)
  addi      r0, r4, 0x1
  xoris     r5, r4, 0x8000
  xoris     r0, r0, 0x8000
  lwz       r8, 0xE4(r3)
  stw       r0, 0x1C(r1)
  lwz       r7, 0xE8(r3)
  lfd       f0, 0x18(r1)
  sub       r0, r8, r7
  stw       r5, 0x14(r1)
  xoris     r4, r0, 0x8000
  fsubs     f0, f0, f4
  stw       r6, 0x10(r1)
  xoris     r7, r7, 0x8000
  lfs       f3, 0xDC(r3)
  xoris     r0, r8, 0x8000
  lfd       f2, 0x10(r1)
  stw       r4, 0x24(r1)
  fmuls     f1, f3, f0
  fsubs     f2, f2, f4
  stw       r6, 0x20(r1)
  lfd       f0, 0x20(r1)
  fmuls     f2, f3, f2
  stw       r7, 0xC(r1)
  fsubs     f0, f0, f4
  stw       r6, 0x8(r1)
  lfd       f3, 0x8(r1)
  fmuls     f1, f1, f0
  stw       r0, 0x2C(r1)
  fsubs     f3, f3, f4
  stw       r6, 0x28(r1)
  lfd       f0, 0x28(r1)
  fmadds    f1, f3, f2, f1
  fsubs     f0, f0, f4
  fdivs     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0xD4(r3)
  lwz       r4, 0xE8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0xE8(r3)
  lwz       r0, 0xE4(r3)
  cmpw      r4, r0
  bne-      .loc_0xD4
  li        r4, 0x1
  li        r0, 0
  stw       r4, 0xE8(r3)
  stw       r0, 0x98(r3)

.loc_0xD4:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x101A
  li        r5, 0
  bl        -0xCC784
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80404DC8
 * Size:	0000F4
 */
void statusScrollDown__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x4330
  lfd       f4, 0x1D58(r2)
  stw       r0, 0x34(r1)
  lwz       r4, 0xE0(r3)
  stw       r6, 0x18(r1)
  subi      r0, r4, 0x1
  xoris     r5, r4, 0x8000
  xoris     r0, r0, 0x8000
  lwz       r8, 0xE4(r3)
  stw       r0, 0x1C(r1)
  lwz       r7, 0xE8(r3)
  lfd       f0, 0x18(r1)
  sub       r0, r8, r7
  stw       r5, 0x14(r1)
  xoris     r4, r0, 0x8000
  fsubs     f0, f0, f4
  stw       r6, 0x10(r1)
  xoris     r7, r7, 0x8000
  lfs       f3, 0xDC(r3)
  xoris     r0, r8, 0x8000
  lfd       f2, 0x10(r1)
  stw       r4, 0x24(r1)
  fmuls     f1, f3, f0
  fsubs     f2, f2, f4
  stw       r6, 0x20(r1)
  lfd       f0, 0x20(r1)
  fmuls     f2, f3, f2
  stw       r7, 0xC(r1)
  fsubs     f0, f0, f4
  stw       r6, 0x8(r1)
  lfd       f3, 0x8(r1)
  fmuls     f1, f1, f0
  stw       r0, 0x2C(r1)
  fsubs     f3, f3, f4
  stw       r6, 0x28(r1)
  lfd       f0, 0x28(r1)
  fmadds    f1, f3, f2, f1
  fsubs     f0, f0, f4
  fdivs     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0xD4(r3)
  lwz       r4, 0xE8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0xE8(r3)
  lwz       r0, 0xE4(r3)
  cmpw      r4, r0
  bne-      .loc_0xD4
  li        r4, 0x1
  li        r0, 0
  stw       r4, 0xE8(r3)
  stw       r0, 0x98(r3)

.loc_0xD4:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x101A
  li        r5, 0
  bl        -0xCC878
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80404EBC
 * Size:	0001D4
 */
void statusForceScroll__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r6, 0x4330
  lfd       f4, 0x1D58(r2)
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r4, 0xE0(r3)
  stw       r6, 0x18(r1)
  subi      r0, r4, 0x1
  xoris     r5, r4, 0x8000
  xoris     r0, r0, 0x8000
  lwz       r8, 0xE4(r3)
  stw       r0, 0x1C(r1)
  lwz       r7, 0xE8(r3)
  lfd       f0, 0x18(r1)
  sub       r0, r8, r7
  stw       r5, 0x14(r1)
  xoris     r4, r0, 0x8000
  fsubs     f0, f0, f4
  stw       r6, 0x10(r1)
  xoris     r7, r7, 0x8000
  lfs       f3, 0xDC(r3)
  xoris     r0, r8, 0x8000
  lfd       f2, 0x10(r1)
  stw       r4, 0x24(r1)
  fmuls     f1, f3, f0
  fsubs     f2, f2, f4
  stw       r6, 0x20(r1)
  lfd       f0, 0x20(r1)
  fmuls     f2, f3, f2
  stw       r7, 0xC(r1)
  fsubs     f0, f0, f4
  stw       r6, 0x8(r1)
  lfd       f3, 0x8(r1)
  fmuls     f1, f1, f0
  stw       r0, 0x2C(r1)
  fsubs     f3, f3, f4
  stw       r6, 0x28(r1)
  lfd       f0, 0x28(r1)
  fmadds    f1, f3, f2, f1
  fsubs     f0, f0, f4
  fdivs     f0, f1, f0
  fneg      f0, f0
  stfs      f0, 0xD4(r3)
  lwz       r4, 0xE8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0xE8(r3)
  lwz       r0, 0xE4(r3)
  cmpw      r4, r0
  bne-      .loc_0x1B0
  lwz       r4, 0xE0(r31)
  lwz       r0, 0xD8(r31)
  cmpw      r4, r0
  bne-      .loc_0xF0
  li        r3, 0x1
  li        r0, 0x4
  stw       r3, 0xE8(r31)
  stw       r0, 0x98(r31)
  b         .loc_0x1B0

.loc_0xF0:
  bl        0x4EFFC
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF5CA8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x130
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x3BE
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DA9A8

.loc_0x130:
  mr        r3, r31
  bl        0x4EFB8
  lwz       r3, 0x18(r3)
  li        r4, 0
  lwz       r5, 0x24(r3)
  b         .loc_0x150

.loc_0x148:
  lwz       r5, 0x18(r5)
  addi      r4, r4, 0x1

.loc_0x150:
  cmplwi    r5, 0
  beq-      .loc_0x168
  lwz       r3, 0xE0(r31)
  addi      r0, r3, 0x6
  cmpw      r4, r0
  bne+      .loc_0x148

.loc_0x168:
  cmplwi    r5, 0
  beq-      .loc_0x19C
  lwz       r0, 0x34(r5)
  cmpwi     r0, 0
  bne-      .loc_0x19C
  lwz       r3, 0xC8(r31)
  li        r4, 0x181E
  lwz       r0, 0x38(r5)
  li        r5, 0
  add       r0, r3, r0
  stw       r0, 0xC8(r31)
  lwz       r3, -0x67A8(r13)
  bl        -0xCCA24

.loc_0x19C:
  li        r0, 0x1
  stw       r0, 0xE8(r31)
  lwz       r3, 0xE0(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xE0(r31)

.loc_0x1B0:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x101A
  li        r5, 0
  bl        -0xCCA48
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80405090
 * Size:	00001C
 */
void statusDrumRoll__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, 0x5
  addi      r4, r4, 0x4134
  lbz       r4, 0x50(r4)
  stw       r4, 0xF4(r3)
  stw       r0, 0x98(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804050AC
 * Size:	0000C8
 */
void statusTotalValue__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0xF4(r3)
  cmpwi     r4, 0
  bne-      .loc_0xAC
  bl        0x4EEDC
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF5DC8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x3F3
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DAAC8

.loc_0x60:
  mr        r3, r31
  bl        0x4EE98
  lwz       r0, 0x2C(r3)
  lfs       f1, 0x1D50(r2)
  stw       r0, 0xC4(r31)
  lwz       r3, 0xA8(r31)
  bl        -0xF992C
  lwz       r3, 0x8C(r31)
  bl        0x6CA4
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1814
  li        r5, 0
  bl        -0xCCB0C
  li        r0, 0
  stw       r0, 0x98(r31)
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x40
  stw       r0, 0x90(r31)
  b         .loc_0xB4

.loc_0xAC:
  subi      r0, r4, 0x1
  stw       r0, 0xF4(r31)

.loc_0xB4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80405174
 * Size:	0003C8
 */
void updateCommon__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  mr        r31, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r31)
  bl        -0x3C4680
  lfs       f0, 0x44(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x38(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x44(r31)
  lfs       f0, 0x48(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x48(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x44(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x94
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x44(r31)

.loc_0x94:
  lwz       r3, 0x40(r31)
  lis       r0, 0x4330
  stw       r0, 0x38(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x48(r31)
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xD0
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x48(r31)

.loc_0xD0:
  lfs       f0, 0x68(r31)
  lwz       r3, 0x58(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x6C(r31)
  lwz       r3, 0x5C(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x4C(r31)
  bl        -0x3C4734
  lfs       f0, 0x68(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x38(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x68(r31)
  lfs       f0, 0x6C(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x6C(r31)
  lwz       r3, 0x58(r31)
  lfs       f2, 0x68(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x148
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x68(r31)

.loc_0x148:
  lwz       r3, 0x5C(r31)
  lis       r0, 0x4330
  stw       r0, 0x38(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x6C(r31)
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x184
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x6C(r31)

.loc_0x184:
  lfs       f0, 0x64(r31)
  lis       r3, 0x6974
  lwz       r4, 0x54(r31)
  addi      r6, r3, 0x6C65
  li        r5, 0x4E74
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CBD28
  lfs       f1, 0x64(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x38(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x64(r31)
  lwz       r3, 0x54(r31)
  lfs       f2, 0x64(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x200
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x64(r31)

.loc_0x200:
  lfs       f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x70(r31)
  bl        -0x3C4858
  lfs       f1, 0x78(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x38(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  lfs       f2, 0x78(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x260
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x78(r31)

.loc_0x260:
  lwz       r3, 0x38(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r4, 0x6D61
  addi      r6, r4, 0x736B
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x14
  li        r5, 0
  bl        -0x3CC47C
  lwz       r3, 0x4C(r31)
  lis       r4, 0x6D61
  lwz       r7, 0x14(r1)
  addi      r6, r4, 0x736B
  lwz       r12, 0x0(r3)
  li        r5, 0x4E
  lwz       r4, 0x18(r1)
  lwz       r0, 0x1C(r1)
  lwz       r12, 0x3C(r12)
  stw       r7, 0x2C(r1)
  stw       r4, 0x30(r1)
  stw       r0, 0x34(r1)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, 0x3
  bl        -0x3CC4C4
  lfs       f0, 0x1D70(r2)
  lfs       f31, 0x30(r1)
  lwz       r4, 0x8(r1)
  lwz       r3, 0xC(r1)
  fadds     f1, f0, f31
  lwz       r0, 0x10(r1)
  stw       r4, 0x20(r1)
  stw       r3, 0x24(r1)
  stw       r0, 0x28(r1)
  bl        -0x343938
  lfs       f0, 0x24(r1)
  stw       r3, 0xEC(r31)
  fsubs     f1, f0, f31
  bl        -0x343948
  stw       r3, 0xF0(r31)
  lwz       r3, 0x4C(r31)
  bl        -0x3C4974
  lfs       f0, 0xA0(r31)
  lis       r3, 0x4E5F
  lwz       r4, 0x9C(r31)
  addi      r6, r3, 0x3364
  li        r5, 0
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CBED4
  lfs       f1, 0xA0(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x38(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0xA0(r31)
  lwz       r3, 0x9C(r31)
  lfs       f2, 0xA0(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0x3C(r1)
  lfd       f0, 0x38(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x3AC
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0xA0(r31)

.loc_0x3AC:
  psq_l     f31,0x58(r1),0,0
  lwz       r0, 0x64(r1)
  lfd       f31, 0x50(r1)
  lwz       r31, 0x4C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	8040553C
 * Size:	00019C
 */
void __ct__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4E598
  lis       r3, 0x804F
  lis       r4, 0x804F
  subi      r5, r3, 0x4F38
  lis       r3, 0x8051
  stw       r5, 0x0(r31)
  addi      r0, r5, 0x10
  subi      r7, r4, 0x50A8
  li        r9, 0
  stw       r0, 0x18(r31)
  li        r8, 0xFF
  lfs       f2, 0x1D48(r2)
  addi      r6, r7, 0x10
  stw       r9, 0x38(r31)
  li        r5, 0x4
  lfs       f1, 0x1D74(r2)
  li        r0, 0xA
  stw       r9, 0x3C(r31)
  addi      r4, r3, 0x4134
  lfs       f0, 0x1D78(r2)
  mr        r3, r31
  stw       r9, 0x40(r31)
  stw       r9, 0x4C(r31)
  stw       r9, 0x50(r31)
  stw       r9, 0x54(r31)
  stw       r9, 0x58(r31)
  stw       r9, 0x5C(r31)
  stw       r9, 0x70(r31)
  stw       r9, 0x74(r31)
  stfs      f2, 0x78(r31)
  stfs      f2, 0x6C(r31)
  stfs      f2, 0x68(r31)
  stfs      f2, 0x64(r31)
  stfs      f2, 0x60(r31)
  stfs      f2, 0x48(r31)
  stfs      f2, 0x44(r31)
  stfs      f2, 0x88(r31)
  stfs      f2, 0x84(r31)
  stfs      f2, 0x80(r31)
  stfs      f2, 0x7C(r31)
  stw       r9, 0x8C(r31)
  stb       r8, 0x95(r31)
  stb       r8, 0x94(r31)
  stw       r9, 0x90(r31)
  stw       r7, 0x0(r31)
  stw       r6, 0x18(r31)
  stw       r9, 0xCC(r31)
  stw       r9, 0xD0(r31)
  stw       r9, 0xD4(r31)
  stw       r9, 0xD8(r31)
  stw       r9, 0xDC(r31)
  stw       r9, 0xE0(r31)
  stw       r9, 0xE4(r31)
  stw       r9, 0xE8(r31)
  stw       r9, 0xEC(r31)
  stw       r9, 0xF0(r31)
  stw       r9, 0xF4(r31)
  stw       r9, 0xF8(r31)
  stw       r9, 0xFC(r31)
  stw       r9, 0x100(r31)
  stw       r9, 0x104(r31)
  stw       r9, 0x108(r31)
  stw       r9, 0x10C(r31)
  stw       r9, 0x110(r31)
  stw       r9, 0x114(r31)
  stw       r9, 0x118(r31)
  stw       r9, 0x11C(r31)
  stw       r9, 0x120(r31)
  stw       r9, 0x124(r31)
  stw       r9, 0x128(r31)
  stw       r9, 0x12C(r31)
  stw       r9, 0x130(r31)
  stw       r9, 0x134(r31)
  stw       r9, 0x138(r31)
  stw       r5, 0x98(r31)
  stw       r9, 0x4C(r31)
  stw       r9, 0xA0(r31)
  stw       r9, 0x9C(r31)
  stfs      f1, 0xA4(r31)
  stfs      f0, 0xA8(r31)
  stw       r9, 0xAC(r31)
  stw       r0, 0xB8(r31)
  stw       r9, 0xB4(r31)
  stw       r9, 0xB0(r31)
  stw       r9, 0xC8(r31)
  lbz       r0, 0x50(r4)
  stw       r0, 0x154(r31)
  stfs      f2, 0x13C(r31)
  stfs      f2, 0x140(r31)
  stfs      f2, 0x144(r31)
  stfs      f2, 0x148(r31)
  stfs      f2, 0x14C(r31)
  stfs      f2, 0x150(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804056D8
 * Size:	001374
 */
void doCreate__Q32kh6Screen19ObjDayEndResultIncPFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x70(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x74(r1)
  stmw      r22, 0x48(r1)
  mr        r30, r3
  mr        r31, r4
  li        r3, 0x148
  subi      r27, r5, 0x77D0
  bl        -0x3E1858
  mr.       r0, r3
  beq-      .loc_0x38
  bl        0x2F6A4
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x38(r30)
  mr        r6, r31
  addi      r4, r27, 0x14
  lis       r5, 0x104
  lwz       r3, 0x38(r30)
  bl        -0x3C6100
  mr        r4, r31
  addi      r3, r27, 0x28
  bl        -0x3E2718
  bl        -0x3BDE18
  stw       r3, 0x3C(r30)
  mr        r4, r31
  addi      r3, r27, 0x3C
  bl        -0x3E272C
  bl        -0x3BDE2C
  stw       r3, 0x40(r30)
  lwz       r3, 0x38(r30)
  lwz       r4, 0x3C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r30)
  lwz       r4, 0x40(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x6274
  lwz       r3, 0x38(r30)
  addi      r6, r4, 0x6E32
  li        r5, 0x4E
  li        r7, 0x8
  bl        0x6350
  stw       r3, 0x8C(r30)
  lwz       r3, 0x8C(r30)
  bl        0x6650
  lwz       r3, 0x8C(r30)
  li        r4, 0
  bl        0x6664
  li        r3, 0x148
  bl        -0x3E1910
  mr.       r0, r3
  beq-      .loc_0xF0
  bl        0x2F5EC
  mr        r0, r3

.loc_0xF0:
  stw       r0, 0x4C(r30)
  mr        r6, r31
  addi      r4, r27, 0x130
  lis       r5, 0x4
  lwz       r3, 0x4C(r30)
  bl        -0x3C61B8
  mr        r4, r31
  addi      r3, r27, 0x148
  bl        -0x3E27D0
  mr        r22, r3
  bl        -0x3BDED4
  stw       r3, 0x50(r30)
  mr        r3, r22
  bl        -0x3BDEE0
  stw       r3, 0x54(r30)
  mr        r3, r22
  bl        -0x3BDEEC
  stw       r3, 0x9C(r30)
  mr        r3, r22
  bl        -0x3BDEF8
  stw       r3, 0xA0(r30)
  mr        r4, r31
  addi      r3, r27, 0x160
  bl        -0x3E280C
  bl        -0x3BDF0C
  stw       r3, 0x58(r30)
  mr        r4, r31
  addi      r3, r27, 0x178
  bl        -0x3E2820
  bl        -0x3BDF20
  stw       r3, 0x5C(r30)
  lwz       r3, 0x4C(r30)
  lwz       r4, 0x58(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lwz       r4, 0x5C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x656D
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5731
  addi      r5, r4, 0x6974
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x9C(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r4, 0x7465
  addi      r6, r4, 0x6D57
  li        r5, 0x4E69
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3033
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3034
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3035
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r4, 0x6974
  addi      r6, r4, 0x6C65
  li        r5, 0x4E74
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x54(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r4, 0x6465
  addi      r6, r4, 0x6164
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0xA0(r30)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x148
  bl        -0x3E1BF8
  mr.       r0, r3
  beq-      .loc_0x3D8
  bl        0x2F304
  mr        r0, r3

.loc_0x3D8:
  stw       r0, 0x70(r30)
  mr        r6, r31
  addi      r4, r27, 0x190
  lis       r5, 0x4
  lwz       r3, 0x70(r30)
  bl        -0x3C64A0
  mr        r4, r31
  addi      r3, r27, 0x1B0
  bl        -0x3E2AB8
  bl        -0x3BE1B8
  stw       r3, 0x74(r30)
  lwz       r3, 0x70(r30)
  lwz       r4, 0x74(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  bl        -0xFBCF8
  mr        r3, r30
  bl        0x4E4A8
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF67FC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x460
  addi      r3, r27, 0
  addi      r5, r27, 0xD0
  li        r4, 0x486
  crclr     6, 0x6
  bl        -0x3DB4F4

.loc_0x460:
  mr        r3, r30
  bl        0x4E46C
  mr        r28, r3
  lwz       r3, 0x3C(r3)
  lwz       r0, 0x0(r3)
  stw       r0, 0xCC(r30)
  lwz       r0, 0x4(r3)
  stw       r0, 0xD0(r30)
  lwz       r0, 0x8(r3)
  stw       r0, 0xD4(r30)
  lwz       r0, 0xC(r3)
  stw       r0, 0xD8(r30)
  lwz       r0, 0x10(r3)
  stw       r0, 0xDC(r30)
  lwz       r0, 0x14(r3)
  stw       r0, 0xE0(r30)
  lwz       r3, 0x3C(r28)
  lwz       r0, 0x18(r3)
  stw       r0, 0xE4(r30)
  lwz       r0, 0x1C(r3)
  stw       r0, 0xE8(r30)
  lwz       r0, 0x20(r3)
  stw       r0, 0xEC(r30)
  lwz       r0, 0x24(r3)
  stw       r0, 0xF0(r30)
  lwz       r0, 0x28(r3)
  stw       r0, 0xF4(r30)
  lwz       r0, 0x2C(r3)
  stw       r0, 0xF8(r30)
  lwz       r3, 0x3C(r28)
  lwz       r0, 0x30(r3)
  stw       r0, 0xFC(r30)
  lwz       r0, 0x34(r3)
  stw       r0, 0x100(r30)
  lwz       r0, 0x38(r3)
  stw       r0, 0x104(r30)
  lwz       r0, 0x3C(r3)
  stw       r0, 0x108(r30)
  lwz       r0, 0x40(r3)
  stw       r0, 0x10C(r30)
  lwz       r0, 0x44(r3)
  stw       r0, 0x110(r30)
  lwz       r0, 0x48(r3)
  stw       r0, 0x114(r30)
  lwz       r0, 0x4C(r3)
  stw       r0, 0x118(r30)
  lwz       r3, 0x3C(r28)
  lwz       r0, 0x50(r3)
  stw       r0, 0x11C(r30)
  lwz       r0, 0x54(r3)
  stw       r0, 0x120(r30)
  lwz       r0, 0x58(r3)
  stw       r0, 0x124(r30)
  lwz       r0, 0x5C(r3)
  stw       r0, 0x128(r30)
  lwz       r0, 0x60(r3)
  stw       r0, 0x12C(r30)
  lwz       r0, 0x64(r3)
  stw       r0, 0x130(r30)
  lwz       r0, 0x68(r3)
  stw       r0, 0x134(r30)
  lwz       r0, 0x6C(r3)
  stw       r0, 0x138(r30)
  lwz       r3, 0x3C(r28)
  lbz       r29, 0x70(r3)
  rlwinm.   r26,r29,0,31,31
  bne-      .loc_0x5FC
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7265
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6B69
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3031
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x7069
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7069
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3031
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x746F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xB8(r30)
  subi      r0, r3, 0x2
  stw       r0, 0xB8(r30)

.loc_0x5FC:
  rlwinm.   r25,r29,0,30,30
  bne-      .loc_0x694
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7265
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6B69
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3032
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x7069
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7069
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3032
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x746F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xB8(r30)
  subi      r0, r3, 0x2
  stw       r0, 0xB8(r30)

.loc_0x694:
  rlwinm.   r24,r29,0,29,29
  bne-      .loc_0x72C
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7265
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3033
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6B69
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3033
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x7069
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7069
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3033
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x746F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xB8(r30)
  subi      r0, r3, 0x2
  stw       r0, 0xB8(r30)

.loc_0x72C:
  rlwinm.   r23,r29,0,28,28
  bne-      .loc_0x7C4
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7265
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3034
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6B69
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3034
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x7069
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7069
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3034
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x746F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xB8(r30)
  subi      r0, r3, 0x2
  stw       r0, 0xB8(r30)

.loc_0x7C4:
  rlwinm.   r29,r29,0,27,27
  bne-      .loc_0x85C
  lwz       r3, 0x4C(r30)
  lis       r5, 0x7265
  lis       r4, 0x4E66
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3035
  addi      r5, r4, 0x6967
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x6B69
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3035
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x7069
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r5, 0x7069
  stb       r0, 0xB0(r3)
  lis       r4, 0x4E
  addi      r6, r5, 0x3035
  lwz       r3, 0x4C(r30)
  addi      r5, r4, 0x746F
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r3, 0xB8(r30)
  subi      r0, r3, 0x2
  stw       r0, 0xB8(r30)

.loc_0x85C:
  lwz       r0, 0xB8(r30)
  li        r22, 0
  rlwinm    r3,r0,2,0,29
  bl        -0x3E1F94
  cmpwi     r26, 0
  stw       r3, 0xAC(r30)
  beq-      .loc_0x8F0
  stw       r31, 0x8(r1)
  lis       r5, 0x6B79
  lis       r4, 0x50
  addi      r7, r30, 0xCC
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x7270
  li        r8, 0x5
  li        r9, 0x1
  li        r10, 0
  bl        -0xDAECC
  lwz       r6, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5072
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x706D
  addi      r7, r30, 0xE4
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x1
  bl        -0xDAF08
  lwz       r4, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  li        r22, 0x2
  stwx      r3, r4, r0

.loc_0x8F0:
  cmpwi     r25, 0
  beq-      .loc_0x970
  stw       r31, 0x8(r1)
  lis       r5, 0x6B79
  lis       r4, 0x50
  addi      r7, r30, 0xD0
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x7970
  li        r8, 0x5
  li        r9, 0x1
  li        r10, 0
  bl        -0xDAF4C
  lwz       r6, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5079
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x706D
  addi      r7, r30, 0xE8
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  addi      r22, r22, 0x1
  bl        -0xDAF88
  lwz       r4, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  addi      r22, r22, 0x1
  stwx      r3, r4, r0

.loc_0x970:
  cmpwi     r24, 0
  beq-      .loc_0x9F0
  stw       r31, 0x8(r1)
  lis       r5, 0x6B79
  lis       r4, 0x50
  addi      r7, r30, 0xD4
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6270
  li        r8, 0x5
  li        r9, 0x1
  li        r10, 0
  bl        -0xDAFCC
  lwz       r6, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5062
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x706D
  addi      r7, r30, 0xEC
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  addi      r22, r22, 0x1
  bl        -0xDB008
  lwz       r4, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  addi      r22, r22, 0x1
  stwx      r3, r4, r0

.loc_0x9F0:
  cmpwi     r23, 0
  beq-      .loc_0xA70
  stw       r31, 0x8(r1)
  lis       r5, 0x6B79
  lis       r4, 0x50
  addi      r7, r30, 0xD8
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x7770
  li        r8, 0x5
  li        r9, 0x1
  li        r10, 0
  bl        -0xDB04C
  lwz       r6, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5077
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x706D
  addi      r7, r30, 0xF0
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  addi      r22, r22, 0x1
  bl        -0xDB088
  lwz       r4, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  addi      r22, r22, 0x1
  stwx      r3, r4, r0

.loc_0xA70:
  cmpwi     r29, 0
  beq-      .loc_0xAEC
  stw       r31, 0x8(r1)
  lis       r5, 0x6B79
  lis       r4, 0x5062
  addi      r7, r30, 0xDC
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6C70
  li        r8, 0x5
  li        r9, 0x1
  li        r10, 0
  bl        -0xDB0CC
  lwz       r6, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6D61
  lis       r4, 0x5062
  stwx      r3, r6, r0
  addi      r6, r5, 0x6431
  addi      r5, r4, 0x6C70
  addi      r7, r30, 0xF4
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  addi      r22, r22, 0x1
  bl        -0xDB108
  lwz       r4, 0xAC(r30)
  rlwinm    r0,r22,2,0,29
  stwx      r3, r4, r0

.loc_0xAEC:
  stw       r31, 0x8(r1)
  lis       r5, 0x7970
  lis       r4, 0x5074
  addi      r7, r30, 0xE0
  lwz       r3, 0x4C(r30)
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6F6B
  li        r8, 0x5
  li        r9, 0
  li        r10, 0
  bl        -0xF9BE4
  stw       r3, 0xB0(r30)
  lis       r4, 0x6470
  lis       r3, 0x5074
  addi      r7, r30, 0xF8
  stw       r31, 0x8(r1)
  addi      r6, r4, 0x6F31
  addi      r5, r3, 0x6F6D
  li        r8, 0x8
  lwz       r3, 0x4C(r30)
  li        r9, 0
  li        r10, 0
  bl        -0xF9C14
  stw       r3, 0xB4(r30)
  lwz       r3, 0xB0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r23, 0
  li        r22, 0
  b         .loc_0xBA0

.loc_0xB80:
  lwz       r3, 0xAC(r30)
  lfs       f1, 0x1D7C(r2)
  lwzx      r3, r3, r22
  lfs       f2, 0x1D80(r2)
  lfs       f3, 0x1D84(r2)
  bl        -0xDBAE8
  addi      r22, r22, 0x4
  addi      r23, r23, 0x1

.loc_0xBA0:
  lwz       r0, 0xB8(r30)
  cmpw      r23, r0
  blt+      .loc_0xB80
  li        r22, 0
  li        r3, 0x38
  bl        -0x3E22E0
  stw       r3, 0xBC(r30)
  lis       r4, 0x6B79
  lis       r3, 0x50
  addi      r7, r30, 0xFC
  stw       r31, 0x8(r1)
  addi      r6, r4, 0x6F31
  addi      r5, r3, 0x7461
  li        r8, 0x4
  lwz       r3, 0x4C(r30)
  li        r9, 0x1
  li        r10, 0
  bl        -0xDB210
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5074
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x616D
  addi      r7, r30, 0x11C
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x1
  bl        -0xDB24C
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x50
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6E69
  addi      r7, r30, 0x100
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x2
  bl        -0xDB288
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x506E
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x696D
  addi      r7, r30, 0x120
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x3
  bl        -0xDB2C4
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x50
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x686F
  addi      r7, r30, 0x104
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x4
  bl        -0xDB300
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5068
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x6F6D
  addi      r7, r30, 0x124
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x5
  bl        -0xDB33C
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x50
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x7375
  addi      r7, r30, 0x108
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x6
  bl        -0xDB378
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6164
  lis       r4, 0x5073
  stwx      r3, r6, r0
  addi      r6, r5, 0x6531
  addi      r5, r4, 0x756D
  addi      r7, r30, 0x128
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x7
  bl        -0xDB3B4
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x5064
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6570
  addi      r7, r30, 0x10C
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x8
  bl        -0xDB3F0
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6D61
  lis       r4, 0x5064
  stwx      r3, r6, r0
  addi      r6, r5, 0x6431
  addi      r5, r4, 0x6570
  addi      r7, r30, 0x12C
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0x9
  bl        -0xDB42C
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x5062
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6170
  addi      r7, r30, 0x110
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0xA
  bl        -0xDB468
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6D61
  lis       r4, 0x5062
  stwx      r3, r6, r0
  addi      r6, r5, 0x6431
  addi      r5, r4, 0x6170
  addi      r7, r30, 0x130
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0xB
  bl        -0xDB4A4
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x5064
  stwx      r3, r6, r0
  addi      r6, r5, 0x6F31
  addi      r5, r4, 0x6F70
  addi      r7, r30, 0x114
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0xC
  bl        -0xDB4E0
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6D61
  lis       r4, 0x5064
  stwx      r3, r6, r0
  addi      r6, r5, 0x6431
  addi      r5, r4, 0x6F70
  addi      r7, r30, 0x134
  stw       r31, 0x8(r1)
  li        r8, 0x8
  li        r9, 0x1
  li        r10, 0
  lwz       r3, 0x4C(r30)
  li        r22, 0xD
  bl        -0xDB51C
  lwz       r6, 0xBC(r30)
  rlwinm    r0,r22,2,0,29
  lis       r5, 0x6B79
  lis       r4, 0x5064
  stwx      r3, r6, r0
  addi      r6, r5, 0x7031
  addi      r5, r4, 0x746F
  addi      r7, r30, 0x118
  stw       r31, 0x8(r1)
  li        r8, 0x4
  li        r9, 0
  li        r10, 0
  lwz       r3, 0x4C(r30)
  bl        -0xF9FF8
  stw       r3, 0xC0(r30)
  lis       r4, 0x6D64
  lis       r3, 0x5064
  addi      r7, r30, 0x138
  stw       r31, 0x8(r1)
  addi      r6, r4, 0x7031
  addi      r5, r3, 0x746F
  li        r8, 0x8
  lwz       r3, 0x4C(r30)
  li        r9, 0
  li        r10, 0
  bl        -0xFA028
  stw       r3, 0xC4(r30)
  lwz       r3, 0xC0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r23, 0
  li        r22, 0

.loc_0xF90:
  lwz       r3, 0xBC(r30)
  lfs       f1, 0x1D7C(r2)
  lwzx      r3, r3, r22
  lfs       f2, 0x1D80(r2)
  lfs       f3, 0x1D84(r2)
  bl        -0xDBEF8
  addi      r23, r23, 0x1
  addi      r22, r22, 0x4
  cmpwi     r23, 0xE
  blt+      .loc_0xF90
  li        r3, 0x1C
  bl        -0x3E27F0
  mr.       r0, r3
  beq-      .loc_0xFD0
  bl        -0xDD89C
  mr        r0, r3

.loc_0xFD0:
  lis       r3, 0x804F
  stw       r0, 0xC8(r30)
  subi      r23, r3, 0x5288
  li        r25, 0
  li        r22, 0
  mr        r24, r23

.loc_0xFE8:
  lwz       r3, 0x4C(r30)
  lwz       r5, 0x0(r24)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r24)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  addi      r25, r25, 0x1
  stb       r22, 0xB0(r3)
  cmpwi     r25, 0x6
  addi      r24, r24, 0x8
  blt+      .loc_0xFE8
  lwz       r29, 0x100(r27)
  li        r0, 0x2
  lwz       r26, 0x104(r27)
  mr        r4, r30
  lwz       r25, 0x108(r27)
  addi      r3, r1, 0x10
  lwz       r24, 0x10C(r27)
  li        r5, 0
  lwz       r22, 0x110(r27)
  lwz       r12, 0x114(r27)
  lwz       r11, 0x118(r27)
  lwz       r10, 0x11C(r27)
  lwz       r9, 0x120(r27)
  lwz       r8, 0x124(r27)
  lwz       r7, 0x128(r27)
  lwz       r6, 0x12C(r27)
  lfs       f0, 0x1D88(r2)
  stw       r29, 0x10(r1)
  lwz       r27, 0xCC(r30)
  fneg      f1, f0
  stw       r26, 0x14(r1)
  lwz       r26, 0xE4(r30)
  stw       r25, 0x18(r1)
  lwz       r25, 0xD0(r30)
  stw       r24, 0x1C(r1)
  lwz       r24, 0xE8(r30)
  stw       r22, 0x20(r1)
  lwz       r22, 0xD4(r30)
  stw       r12, 0x24(r1)
  lwz       r12, 0xEC(r30)
  stw       r11, 0x28(r1)
  lwz       r11, 0xD8(r30)
  stw       r10, 0x2C(r1)
  lwz       r10, 0xF0(r30)
  stw       r9, 0x30(r1)
  lwz       r9, 0xDC(r30)
  stw       r8, 0x34(r1)
  lwz       r8, 0xF4(r30)
  stw       r7, 0x38(r1)
  lwz       r7, 0xE0(r30)
  stw       r6, 0x3C(r1)
  lwz       r6, 0xF8(r30)
  stw       r27, 0x10(r1)
  stw       r26, 0x14(r1)
  stw       r25, 0x18(r1)
  stw       r24, 0x1C(r1)
  stw       r22, 0x20(r1)
  stw       r12, 0x24(r1)
  stw       r11, 0x28(r1)
  stw       r10, 0x2C(r1)
  stw       r9, 0x30(r1)
  stw       r8, 0x34(r1)
  stw       r7, 0x38(r1)
  stw       r6, 0x3C(r1)
  mtctr     r0

.loc_0x10F4:
  lwz       r6, 0x0(r3)
  lwz       r0, 0x4(r3)
  cmplw     r6, r0
  bge-      .loc_0x110C
  stfs      f0, 0x13C(r4)
  b         .loc_0x1114

.loc_0x110C:
  ble-      .loc_0x1114
  stfs      f1, 0x13C(r4)

.loc_0x1114:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmplw     r6, r0
  bge-      .loc_0x112C
  stfs      f0, 0x140(r4)
  b         .loc_0x1134

.loc_0x112C:
  ble-      .loc_0x1134
  stfs      f1, 0x140(r4)

.loc_0x1134:
  lwz       r6, 0x10(r3)
  lwz       r0, 0x14(r3)
  cmplw     r6, r0
  bge-      .loc_0x114C
  stfs      f0, 0x144(r4)
  b         .loc_0x1154

.loc_0x114C:
  ble-      .loc_0x1154
  stfs      f1, 0x144(r4)

.loc_0x1154:
  addi      r3, r3, 0x18
  addi      r4, r4, 0xC
  addi      r5, r5, 0x2
  bdnz+     .loc_0x10F4
  lbz       r0, 0x40(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1240
  li        r5, 0
  li        r6, 0
  stw       r5, 0x98(r30)
  li        r4, 0x1
  b         .loc_0x11A4

.loc_0x1184:
  lwz       r3, 0xAC(r30)
  addi      r6, r6, 0x1
  lwzx      r3, r3, r5
  stb       r4, 0xAC(r3)
  lwz       r3, 0xAC(r30)
  lwzx      r3, r3, r5
  addi      r5, r5, 0x4
  stb       r4, 0xA9(r3)

.loc_0x11A4:
  lwz       r0, 0xB8(r30)
  cmpw      r6, r0
  blt+      .loc_0x1184
  lwz       r3, 0xB0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8C(r30)
  bl        0x551C
  li        r24, 0
  li        r22, 0x1

.loc_0x11E8:
  cmpwi     r24, 0x5
  beq-      .loc_0x1204
  lwz       r3, 0x3C(r28)
  slw       r0, r22, r24
  lbz       r3, 0x70(r3)
  and.      r0, r3, r0
  beq-      .loc_0x1224

.loc_0x1204:
  lwz       r3, 0x4C(r30)
  lwz       r5, 0x0(r23)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r23)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stb       r22, 0xB0(r3)

.loc_0x1224:
  addi      r24, r24, 0x1
  addi      r23, r23, 0x8
  cmpwi     r24, 0x6
  blt+      .loc_0x11E8
  lwz       r0, 0x90(r30)
  ori       r0, r0, 0x40
  stw       r0, 0x90(r30)

.loc_0x1240:
  li        r0, 0x1
  stb       r0, 0x40(r28)
  lbz       r0, 0x41(r28)
  cmplwi    r0, 0
  beq-      .loc_0x1360
  li        r0, 0x2
  li        r3, 0
  mtctr     r0

.loc_0x1260:
  lwz       r4, 0xBC(r30)
  li        r0, 0x1
  addi      r10, r3, 0x4
  addi      r9, r3, 0x8
  lwzx      r4, r4, r3
  addi      r8, r3, 0xC
  addi      r7, r3, 0x10
  addi      r6, r3, 0x14
  stb       r0, 0xAC(r4)
  addi      r5, r3, 0x18
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r3
  addi      r3, r3, 0x1C
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r10
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r10
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r9
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r9
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r8
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r8
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r7
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r7
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r6
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r6
  stb       r0, 0xA9(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r5
  stb       r0, 0xAC(r4)
  lwz       r4, 0xBC(r30)
  lwzx      r4, r4, r5
  stb       r0, 0xA9(r4)
  bdnz+     .loc_0x1260
  lwz       r3, 0xC0(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x90(r30)
  ori       r0, r0, 0x100
  stw       r0, 0x90(r30)

.loc_0x1360:
  lmw       r22, 0x48(r1)
  lwz       r0, 0x74(r1)
  mtlr      r0
  addi      r1, r1, 0x70
  blr
*/
}

/*
 * --INFO--
 * Address:	80406A4C
 * Size:	00017C
 */
void doUpdateFadein__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stmw      r27, 0x1C(r1)
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r27)
  lis       r3, 0x7465
  lwz       r4, 0x50(r27)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CD4A8
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r27)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r27)
  lwz       r3, 0x70(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x7C(r27)
  lfs       f1, 0x60(r27)
  lfs       f0, 0x80(r27)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r27)
  lfs       f0, 0x80(r27)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xEC
  li        r31, 0x1
  b         .loc_0xF0

.loc_0xEC:
  li        r31, 0

.loc_0xF0:
  lwz       r3, 0x4C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  mr        r30, r27
  subi      r29, r3, 0x5288
  li        r28, 0

.loc_0x114:
  lwz       r3, 0x4C(r27)
  lfs       f31, 0x13C(r30)
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r29)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r29)
  mtctr     r12
  bctrl     
  stfs      f31, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r29, r29, 0x8
  cmpwi     r28, 0x6
  addi      r30, r30, 0x4
  blt+      .loc_0x114
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80406BC8
 * Size:	00047C
 */
void doUpdate__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r3
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0x3
  beq-      .loc_0x88
  bge-      .loc_0x54
  cmpwi     r0, 0x1
  beq-      .loc_0x70
  bge-      .loc_0x7C
  cmpwi     r0, 0
  bge-      .loc_0x64
  b         .loc_0xA8

.loc_0x54:
  cmpwi     r0, 0x5
  beq-      .loc_0xA0
  bge-      .loc_0xA8
  b         .loc_0x94

.loc_0x64:
  mr        r3, r31
  bl        0x6E0
  b         .loc_0xA8

.loc_0x70:
  mr        r3, r31
  bl        0x724
  b         .loc_0xA8

.loc_0x7C:
  mr        r3, r31
  bl        0x818
  b         .loc_0xA8

.loc_0x88:
  mr        r3, r31
  bl        0x85C
  b         .loc_0xA8

.loc_0x94:
  mr        r3, r31
  bl        0x8B4
  b         .loc_0xA8

.loc_0xA0:
  mr        r3, r31
  bl        0x9E8

.loc_0xA8:
  mr        r3, r31
  bl        0x4D3CC
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,23
  beq-      .loc_0x2EC
  mr        r3, r31
  bl        0x4D3B8
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0xF4
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0x4
  bne-      .loc_0xF4
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,25,25
  bne-      .loc_0xF4
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x20
  stw       r0, 0x90(r31)

.loc_0xF4:
  mr        r3, r31
  bl        0x4D380
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x12C
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0x5
  bne-      .loc_0x12C
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,23,23
  bne-      .loc_0x12C
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x80
  stw       r0, 0x90(r31)

.loc_0x12C:
  lwz       r0, 0x98(r31)
  cmpwi     r0, 0
  beq-      .loc_0x140
  cmpwi     r0, 0x2
  bne-      .loc_0x2EC

.loc_0x140:
  mr        r3, r31
  bl        0x4D334
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x218
  mr        r3, r31
  bl        0x4D288
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r5, 0x4E25
  stw       r0, 0x28(r1)
  subi      r6, r4, 0x7BA8
  li        r4, 0
  li        r0, 0x1
  stw       r3, 0x34(r1)
  mr        r3, r31
  stw       r6, 0x28(r1)
  stw       r5, 0x2C(r1)
  stb       r4, 0x30(r1)
  stb       r0, 0x31(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x28
  bl        0x4B1C0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2EC
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r5, 0x804F
  stw       r0, 0x10(r1)
  subi      r0, r3, 0x7588
  lis       r3, 0x804F
  li        r4, 0x1
  stw       r0, 0x10(r1)
  subi      r5, r5, 0x4FF0
  subi      r0, r3, 0x50B8
  mr        r3, r31
  stw       r5, 0x10(r1)
  stb       r4, 0x14(r1)
  stw       r0, 0x10(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x10
  bl        0x4B194
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,28,26
  stw       r0, 0x90(r31)
  b         .loc_0x2EC

.loc_0x218:
  mr        r3, r31
  bl        0x4D25C
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x2EC
  mr        r3, r31
  bl        0x4D1B0
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r5, 0x4E23
  stw       r0, 0x18(r1)
  subi      r6, r4, 0x7BA8
  li        r4, 0
  li        r0, 0x1
  stw       r3, 0x24(r1)
  mr        r3, r31
  stw       r6, 0x18(r1)
  stw       r5, 0x1C(r1)
  stb       r4, 0x20(r1)
  stb       r0, 0x21(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x18
  bl        0x4B0E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x2EC
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r5, 0x804F
  stw       r0, 0x8(r1)
  subi      r0, r3, 0x7588
  lis       r3, 0x804F
  li        r4, 0
  stw       r0, 0x8(r1)
  subi      r5, r5, 0x4FF0
  subi      r0, r3, 0x50C8
  mr        r3, r31
  stw       r5, 0x8(r1)
  stb       r4, 0xC(r1)
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  bl        0x4B0BC
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x10
  stw       r0, 0x90(r31)

.loc_0x2EC:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x370
  li        r29, 0
  li        r30, 0
  b         .loc_0x334

.loc_0x304:
  lwz       r3, 0xAC(r31)
  lwzx      r3, r3, r30
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  beq-      .loc_0x324
  lbz       r0, 0xA8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x32C

.loc_0x324:
  lfs       f1, 0x1D48(r2)
  bl        -0xDC458

.loc_0x32C:
  addi      r30, r30, 0x4
  addi      r29, r29, 0x1

.loc_0x334:
  lwz       r0, 0xB8(r31)
  cmpw      r29, r0
  blt+      .loc_0x304
  mr        r3, r31
  bl        0x9B8
  lwz       r3, 0x8C(r31)
  bl        0x4EBC
  lwz       r3, 0x90(r31)
  li        r0, 0
  rlwinm    r3,r3,0,27,25
  stw       r3, 0x90(r31)
  lwz       r3, 0x90(r31)
  ori       r3, r3, 0x40
  stw       r3, 0x90(r31)
  stw       r0, 0x98(r31)

.loc_0x370:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,24,24
  beq-      .loc_0x45C
  li        r29, 0
  li        r30, 0

.loc_0x384:
  lwz       r3, 0xBC(r31)
  lwzx      r3, r3, r30
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3A4
  lbz       r0, 0xA8(r3)
  cmplwi    r0, 0
  beq-      .loc_0x3AC

.loc_0x3A4:
  lfs       f1, 0x1D48(r2)
  bl        -0xDC4D8

.loc_0x3AC:
  addi      r29, r29, 0x1
  addi      r30, r30, 0x4
  cmpwi     r29, 0xE
  blt+      .loc_0x384
  lwz       r3, 0xC0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFB7BC
  lwz       r3, 0xC4(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFB7C8
  lwz       r0, 0x118(r31)
  cmplwi    r0, 0
  bne-      .loc_0x41C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1806
  li        r5, 0
  bl        -0xCE9AC
  b         .loc_0x43C

.loc_0x41C:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x182B
  li        r5, 0
  bl        -0xCE9C0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x2860
  li        r5, 0
  bl        -0xCE9D0

.loc_0x43C:
  lwz       r3, 0x90(r31)
  li        r0, 0x2
  rlwinm    r3,r3,0,25,23
  stw       r3, 0x90(r31)
  lwz       r3, 0x90(r31)
  ori       r3, r3, 0x100
  stw       r3, 0x90(r31)
  stw       r0, 0x98(r31)

.loc_0x45C:
  lwz       r0, 0x54(r1)
  li        r3, 0
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80407044
 * Size:	000184
 */
void doUpdateFadeout__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stmw      r27, 0x1C(r1)
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r27)
  lis       r3, 0x7465
  lwz       r4, 0x50(r27)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CDAA0
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r27)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r27)
  lwz       r3, 0x70(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x84(r27)
  lfs       f1, 0x60(r27)
  lfs       f0, 0x88(r27)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D50(r2)
  lfs       f3, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r27)
  lfs       f0, 0x88(r27)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xF4
  li        r31, 0x1
  b         .loc_0xF8

.loc_0xF4:
  li        r31, 0

.loc_0xF8:
  lwz       r3, 0x4C(r27)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804F
  mr        r30, r27
  subi      r29, r3, 0x5288
  li        r28, 0

.loc_0x11C:
  lwz       r3, 0x4C(r27)
  lfs       f31, 0x13C(r30)
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r29)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r29)
  mtctr     r12
  bctrl     
  stfs      f31, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r29, r29, 0x8
  cmpwi     r28, 0x6
  addi      r30, r30, 0x4
  blt+      .loc_0x11C
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  lmw       r27, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	804071C8
 * Size:	000148
 */
void doDraw__Q32kh6Screen19ObjDayEndResultIncPFR8Graphics(void)
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
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x1C(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x38(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x14(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x70(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x18(r3)
  addi      r3, r31, 0xBC
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r4, 0x4C(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r4)
  stfs      f0, 0x144(r4)
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
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
 * Address:	80407310
 * Size:	000050
 */
void statusNormal__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4CD1C
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x3C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xCED10
  li        r0, 0x1
  stw       r0, 0x98(r31)

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80407360
 * Size:	000100
 */
void statusFadeout__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x1D78(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f1, 0xA4(r3)
  lwz       r4, 0x9C(r3)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xA4(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x40
  lfs       f0, 0x1D50(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xA4(r31)
  b         .loc_0xEC

.loc_0x40:
  lfs       f1, 0xA8(r31)
  lwz       r4, 0xA0(r31)
  lfs       f0, 0x1D8C(r2)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xA8(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x6C
  lfs       f0, 0x1D50(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xA8(r31)
  b         .loc_0xEC

.loc_0x6C:
  bl        0x4CBDC
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF80C8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xAC
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x605
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DCDC8

.loc_0xAC:
  mr        r3, r31
  bl        0x4CB98
  lbz       r0, 0x41(r3)
  cmplwi    r0, 0
  bne-      .loc_0xE4
  li        r0, 0x1
  lis       r4, 0x8051
  stb       r0, 0x41(r3)
  addi      r3, r4, 0x4134
  li        r0, 0x5
  lbz       r3, 0x50(r3)
  stw       r3, 0x154(r31)
  stw       r0, 0x98(r31)
  b         .loc_0xEC

.loc_0xE4:
  li        r0, 0x2
  stw       r0, 0x98(r31)

.loc_0xEC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80407460
 * Size:	000050
 */
void statusDecP__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x4CBCC
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,27,27
  beq-      .loc_0x3C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xCEE60
  li        r0, 0x3
  stw       r0, 0x98(r31)

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804074B0
 * Size:	000064
 */
void statusFadein__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0xA8(r3)
  lwz       r4, 0xA0(r3)
  lfs       f0, 0x1D78(r2)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xA8(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2C
  lfs       f0, 0x1D50(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0xA8(r3)
  blr       

.loc_0x2C:
  lfs       f1, 0xA4(r3)
  lwz       r4, 0x9C(r3)
  lfs       f0, 0x1D74(r2)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xA4(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x58
  lfs       f0, 0x1D50(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0xA4(r3)
  blr       

.loc_0x58:
  li        r0, 0
  stw       r0, 0x98(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80407514
 * Size:	000140
 */
void statusSlot__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  addi      r30, r4, 0x4134
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  li        r28, 0
  b         .loc_0xB8

.loc_0x34:
  cmpwi     r28, 0
  bne-      .loc_0x68
  lwz       r4, 0xAC(r31)
  lwz       r3, 0x0(r4)
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  bne-      .loc_0x68
  lwzx      r3, r4, r29
  lfs       f1, 0x10(r30)
  bl        -0xDCAD4
  mr        r3, r31
  mr        r4, r28
  bl        0x278

.loc_0x68:
  lwz       r5, 0xAC(r31)
  add       r4, r5, r29
  lwz       r3, -0x4(r4)
  lbz       r0, 0xAA(r3)
  cmplwi    r0, 0
  beq-      .loc_0xB0
  lwz       r3, 0x0(r4)
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  bne-      .loc_0xB0
  rlwinm    r0,r28,2,0,29
  lfs       f1, 0x10(r30)
  lwzx      r3, r5, r0
  bl        -0xDCB18
  mr        r3, r31
  mr        r4, r28
  bl        0x234
  b         .loc_0xC4

.loc_0xB0:
  addi      r29, r29, 0x4
  addi      r28, r28, 0x1

.loc_0xB8:
  lwz       r0, 0xB8(r31)
  cmpw      r28, r0
  blt+      .loc_0x34

.loc_0xC4:
  lwz       r0, 0xB8(r31)
  lwz       r3, 0xAC(r31)
  rlwinm    r0,r0,2,0,29
  add       r3, r3, r0
  lwz       r3, -0x4(r3)
  lbz       r0, 0xAA(r3)
  cmplwi    r0, 0
  beq-      .loc_0x120
  lwz       r3, 0x154(r31)
  cmpwi     r3, 0
  bne-      .loc_0x118
  mr        r3, r31
  bl        0x2BC
  lwz       r3, 0x8C(r31)
  bl        0x47C0
  li        r0, 0
  stw       r0, 0x98(r31)
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x40
  stw       r0, 0x90(r31)
  b         .loc_0x120

.loc_0x118:
  subi      r0, r3, 0x1
  stw       r0, 0x154(r31)

.loc_0x120:
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
 * Address:	80407654
 * Size:	00019C
 */
void statusDecPSlot__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8051
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  addi      r30, r4, 0x4134
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  li        r28, 0

.loc_0x30:
  cmpwi     r28, 0
  bne-      .loc_0x64
  lwz       r4, 0xBC(r31)
  lwz       r3, 0x0(r4)
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  bne-      .loc_0x64
  lwzx      r3, r4, r29
  lfs       f1, 0x10(r30)
  bl        -0xDCC10
  mr        r3, r31
  mr        r4, r28
  bl        0x1C4

.loc_0x64:
  lwz       r5, 0xBC(r31)
  add       r4, r5, r29
  lwz       r3, -0x4(r4)
  lbz       r0, 0xAA(r3)
  cmplwi    r0, 0
  beq-      .loc_0xAC
  lwz       r3, 0x0(r4)
  lbz       r0, 0xA9(r3)
  cmplwi    r0, 0
  bne-      .loc_0xAC
  rlwinm    r0,r28,2,0,29
  lfs       f1, 0x10(r30)
  lwzx      r3, r5, r0
  bl        -0xDCC54
  mr        r3, r31
  mr        r4, r28
  bl        0x180
  b         .loc_0xBC

.loc_0xAC:
  addi      r28, r28, 0x1
  addi      r29, r29, 0x4
  cmpwi     r28, 0xE
  blt+      .loc_0x30

.loc_0xBC:
  lwz       r3, 0xBC(r31)
  lwz       r3, 0x34(r3)
  lbz       r0, 0xAA(r3)
  cmplwi    r0, 0
  beq-      .loc_0x17C
  lwz       r3, 0x154(r31)
  cmpwi     r3, 0
  bne-      .loc_0x174
  lwz       r3, 0xC0(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC0(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFBF68
  lwz       r3, 0xC4(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFBF74
  lwz       r0, 0x118(r31)
  cmplwi    r0, 0
  bne-      .loc_0x13C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1806
  li        r5, 0
  bl        -0xCF158
  b         .loc_0x15C

.loc_0x13C:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x182B
  li        r5, 0
  bl        -0xCF16C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x2860
  li        r5, 0
  bl        -0xCF17C

.loc_0x15C:
  lwz       r3, 0x90(r31)
  li        r0, 0x2
  ori       r3, r3, 0x100
  stw       r3, 0x90(r31)
  stw       r0, 0x98(r31)
  b         .loc_0x17C

.loc_0x174:
  subi      r0, r3, 0x1
  stw       r0, 0x154(r31)

.loc_0x17C:
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
 * Address:	804077F0
 * Size:	000088
 */
void callIncPSE__Q32kh6Screen19ObjDayEndResultIncPFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r5,r4,1,31,31
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,0,31,31
  xor       r0, r0, r5
  sub.      r0, r0, r5
  beq-      .loc_0x68
  lwz       r3, 0xAC(r3)
  rlwinm    r0,r4,2,0,29
  add       r4, r3, r0
  lwzx      r3, r3, r0
  lwz       r4, -0x4(r4)
  lwz       r3, 0x20(r3)
  lwz       r4, 0x20(r4)
  lwz       r3, 0x0(r3)
  lwz       r0, 0x0(r4)
  cmplw     r0, r3
  bge-      .loc_0x54
  li        r4, 0x1828
  b         .loc_0x6C

.loc_0x54:
  ble-      .loc_0x60
  li        r4, 0x182A
  b         .loc_0x6C

.loc_0x60:
  li        r4, 0x1806
  b         .loc_0x6C

.loc_0x68:
  li        r4, 0x1806

.loc_0x6C:
  lwz       r3, -0x67A8(r13)
  li        r5, 0
  bl        -0xCF234
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80407878
 * Size:	00004C
 */
void callDecPSE__Q32kh6Screen19ObjDayEndResultIncPFi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,2,0,28
  li        r4, 0x182A
  lwz       r5, 0xBC(r3)
  lwz       r3, -0x67A8(r13)
  lwzx      r5, r5, r0
  lwz       r5, 0x20(r5)
  lwz       r0, 0x0(r5)
  cmplwi    r0, 0
  bne-      .loc_0x34
  li        r4, 0x1806

.loc_0x34:
  li        r5, 0
  bl        -0xCF280
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804078C4
 * Size:	000188
 */
void effectCommon__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0xB0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xB0(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFC110
  lwz       r3, 0xB4(r31)
  lfs       f1, 0x1D50(r2)
  bl        -0xFC11C
  mr        r3, r31
  bl        0x4C68C
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF8618
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x6C2
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DD318

.loc_0x98:
  mr        r3, r31
  bl        0x4C648
  lis       r4, 0x804F
  mr        r29, r3
  subi      r28, r4, 0x5288
  li        r27, 0
  li        r30, 0x1

.loc_0xB4:
  cmpwi     r27, 0x5
  beq-      .loc_0xD0
  lwz       r3, 0x3C(r29)
  slw       r0, r30, r27
  lbz       r3, 0x70(r3)
  and.      r0, r3, r0
  beq-      .loc_0xF0

.loc_0xD0:
  lwz       r3, 0x4C(r31)
  lwz       r5, 0x0(r28)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r28)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stb       r30, 0xB0(r3)

.loc_0xF0:
  addi      r27, r27, 0x1
  addi      r28, r28, 0x8
  cmpwi     r27, 0x6
  blt+      .loc_0xB4
  lwz       r3, 0xC8(r31)
  bl        -0xDEB80
  lwz       r3, 0xE0(r31)
  lwz       r0, 0xF8(r31)
  cmplw     r3, r0
  bge-      .loc_0x13C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1829
  li        r5, 0
  bl        -0xCF3B8
  lwz       r3, -0x67A8(r13)
  li        r4, 0x285F
  li        r5, 0
  bl        -0xCF3C8
  b         .loc_0x174

.loc_0x13C:
  ble-      .loc_0x164
  lwz       r3, -0x67A8(r13)
  li        r4, 0x182B
  li        r5, 0
  bl        -0xCF3E0
  lwz       r3, -0x67A8(r13)
  li        r4, 0x2860
  li        r5, 0
  bl        -0xCF3F0
  b         .loc_0x174

.loc_0x164:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1806
  li        r5, 0
  bl        -0xCF404

.loc_0x174:
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80407A4C
 * Size:	00036C
 */
void updateCommon__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r31, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r31)
  bl        -0x3C6F64
  lfs       f0, 0x44(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x44(r31)
  lfs       f0, 0x48(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x48(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x44(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xA0
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x44(r31)

.loc_0xA0:
  lwz       r3, 0x40(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x48(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xDC
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x48(r31)

.loc_0xDC:
  lfs       f0, 0x68(r31)
  lwz       r3, 0x58(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x6C(r31)
  lwz       r3, 0x5C(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x4C(r31)
  bl        -0x3C7018
  lfs       f0, 0x68(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x68(r31)
  lfs       f0, 0x6C(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x6C(r31)
  lwz       r3, 0x58(r31)
  lfs       f2, 0x68(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x154
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x68(r31)

.loc_0x154:
  lwz       r3, 0x5C(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x6C(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x190
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x6C(r31)

.loc_0x190:
  lfs       f0, 0x64(r31)
  lis       r3, 0x6974
  lwz       r4, 0x54(r31)
  addi      r6, r3, 0x6C65
  li        r5, 0x4E74
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CE60C
  lfs       f1, 0x64(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x64(r31)
  lwz       r3, 0x54(r31)
  lfs       f2, 0x64(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x20C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x64(r31)

.loc_0x20C:
  lfs       f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x70(r31)
  bl        -0x3C713C
  lfs       f1, 0x78(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  lfs       f2, 0x78(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x26C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x78(r31)

.loc_0x26C:
  lwz       r3, 0x38(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xC8(r31)
  bl        -0xDED60
  lis       r3, 0x804F
  fmr       f31, f1
  subi      r29, r3, 0x5288
  li        r28, 0
  mr        r30, r29

.loc_0x2B0:
  lwz       r3, 0x4C(r31)
  lwz       r5, 0x0(r30)
  lwz       r12, 0x0(r3)
  lwz       r6, 0x4(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stfs      f31, 0xCC(r3)
  stfs      f31, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r30, r30, 0x8
  cmpwi     r28, 0x6
  blt+      .loc_0x2B0
  mr        r30, r31
  li        r28, 0

.loc_0x2FC:
  lwz       r3, 0x4C(r31)
  lfs       f31, 0x13C(r30)
  lwz       r12, 0x0(r3)
  lwz       r5, 0x0(r29)
  lwz       r12, 0x3C(r12)
  lwz       r6, 0x4(r29)
  mtctr     r12
  bctrl     
  stfs      f31, 0xC0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  addi      r28, r28, 0x1
  addi      r29, r29, 0x8
  cmpwi     r28, 0x6
  addi      r30, r30, 0x4
  blt+      .loc_0x2FC
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void __ct__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80407DB8
 * Size:	0008B4
 */
void doCreate__Q32kh6Screen19ObjDayEndResultMailFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x140(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x144(r1)
  stmw      r22, 0x118(r1)
  mr        r31, r3
  mr        r25, r4
  li        r3, 0x148
  subi      r28, r5, 0x77D0
  bl        -0x3E3F38
  mr.       r0, r3
  beq-      .loc_0x38
  bl        0x2CFC4
  mr        r0, r3

.loc_0x38:
  stw       r0, 0x38(r31)
  mr        r6, r25
  addi      r4, r28, 0x14
  lis       r5, 0x104
  lwz       r3, 0x38(r31)
  bl        -0x3C87E0
  mr        r4, r25
  addi      r3, r28, 0x28
  bl        -0x3E4DF8
  bl        -0x3C04F8
  stw       r3, 0x3C(r31)
  mr        r4, r25
  addi      r3, r28, 0x3C
  bl        -0x3E4E0C
  bl        -0x3C050C
  stw       r3, 0x40(r31)
  lwz       r3, 0x38(r31)
  lwz       r4, 0x3C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r31)
  lwz       r4, 0x40(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x6274
  lwz       r3, 0x38(r31)
  addi      r6, r4, 0x6E32
  li        r5, 0x4E
  li        r7, 0x8
  bl        0x3C70
  stw       r3, 0x8C(r31)
  lwz       r3, 0x8C(r31)
  bl        0x3F70
  lwz       r3, 0x8C(r31)
  li        r4, 0
  bl        0x3F84
  li        r3, 0x148
  bl        -0x3E3FF0
  mr.       r0, r3
  beq-      .loc_0xF0
  bl        0x2CF0C
  mr        r0, r3

.loc_0xF0:
  stw       r0, 0x4C(r31)
  mr        r6, r25
  addi      r4, r28, 0x2D0
  lis       r5, 0x104
  lwz       r3, 0x4C(r31)
  bl        -0x3C8898
  mr        r4, r25
  addi      r3, r28, 0x2E0
  bl        -0x3E4EB0
  mr        r24, r3
  bl        -0x3C05B4
  stw       r3, 0x50(r31)
  mr        r3, r24
  bl        -0x3C05C0
  stw       r3, 0x54(r31)
  mr        r3, r24
  bl        -0x3C05CC
  stw       r3, 0xA8(r31)
  mr        r3, r24
  bl        -0x3C05D8
  stw       r3, 0xAC(r31)
  mr        r4, r25
  addi      r3, r28, 0x2F0
  bl        -0x3E4EEC
  bl        -0x3C05EC
  stw       r3, 0x58(r31)
  mr        r4, r25
  addi      r3, r28, 0x300
  bl        -0x3E4F00
  bl        -0x3C0600
  stw       r3, 0x5C(r31)
  lwz       r3, 0x4C(r31)
  lwz       r4, 0x58(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lwz       r4, 0x5C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x656D
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5731
  addi      r5, r4, 0x6974
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0xA8(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r4, 0x7465
  addi      r6, r4, 0x6D57
  li        r5, 0x4E69
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3030
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3031
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3032
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3033
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3034
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x7470
  lis       r4, 0x4E
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x3035
  addi      r5, r4, 0x7365
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x50(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r4, 0x6574
  addi      r6, r4, 0x5F70
  li        r5, 0x5073
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0xAC(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r4, 0x6974
  addi      r6, r4, 0x6C65
  li        r5, 0x4E74
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0x54(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r4, 0x6963
  addi      r6, r4, 0x6F6E
  li        r5, 0x4E
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0xA8(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x148
  bl        -0x3E430C
  mr.       r0, r3
  beq-      .loc_0x40C
  bl        0x2CBF0
  mr        r0, r3

.loc_0x40C:
  stw       r0, 0x9C(r31)
  mr        r6, r25
  addi      r4, r28, 0x310
  lis       r5, 0x104
  lwz       r3, 0x9C(r31)
  bl        -0x3C8BB4
  mr        r4, r25
  addi      r3, r28, 0x32C
  bl        -0x3E51CC
  bl        -0x3C08CC
  stw       r3, 0xA0(r31)
  lis       r3, 0x7465
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  lwz       r3, 0x9C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r4, 0xA0(r31)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x148
  bl        -0x3E4384
  mr.       r0, r3
  beq-      .loc_0x484
  bl        0x2CB78
  mr        r0, r3

.loc_0x484:
  stw       r0, 0x70(r31)
  mr        r6, r25
  addi      r4, r28, 0x348
  lis       r5, 0x4
  lwz       r3, 0x70(r31)
  bl        -0x3C8C2C
  mr        r4, r25
  addi      r3, r28, 0x368
  bl        -0x3E5244
  bl        -0x3C0944
  stw       r3, 0x74(r31)
  lwz       r3, 0x70(r31)
  lwz       r4, 0x74(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0x4BD24
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF8F80
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x504
  addi      r3, r28, 0
  addi      r5, r28, 0xD0
  li        r4, 0x76E
  crclr     6, 0x6
  bl        -0x3DDC78

.loc_0x504:
  mr        r3, r31
  bl        0x4BCE8
  mr        r29, r3
  bl        -0x2BA58
  stw       r3, 0xA4(r31)
  lwz       r24, 0xA4(r31)
  addi      r3, r24, 0x18
  bl        -0x2A924
  lwz       r23, -0x77D4(r13)
  addi      r3, r24, 0x100
  mr        r4, r23
  bl        -0x46038
  lwz       r3, -0x6514(r13)
  mr        r4, r23
  lwz       r3, 0x5C(r3)
  bl        0x3A8D4
  mr        r3, r31
  bl        0x4BD40
  lwz       r9, 0xA4(r31)
  lis       r8, 0x7932
  lis       r5, 0x50
  lis       r4, 0x6461
  stw       r3, 0x3D0(r9)
  addi      r5, r5, 0x6461
  addi      r11, r31, 0xBC
  li        r0, 0x3
  stw       r3, 0x24(r9)
  mr        r7, r5
  addi      r6, r8, 0x5F31
  addi      r8, r8, 0x5F32
  stw       r3, 0x104(r9)
  addi      r10, r4, 0x7931
  li        r9, 0x50
  lwz       r3, 0x64(r29)
  stw       r3, 0xBC(r31)
  stw       r3, 0xB8(r31)
  stw       r11, 0x8(r1)
  stw       r0, 0xC(r1)
  stw       r25, 0x10(r1)
  lwz       r3, 0x4C(r31)
  bl        -0xFAD38
  stw       r3, 0xB4(r31)
  li        r4, 0x1
  lwz       r3, 0xB4(r31)
  bl        -0xFCB94
  lwz       r4, 0x4C(r31)
  mr        r3, r31
  bl        0x1DFC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4C(r29)
  mr        r30, r3
  cmplwi    r0, 0
  beq-      .loc_0x784
  lwz       r0, 0x224(r30)
  li        r3, 0xB0
  stw       r0, 0xC0(r31)
  bl        -0x3E4400
  lis       r4, 0x8041
  li        r5, 0
  subi      r4, r4, 0x7994
  li        r6, 0x8
  li        r7, 0x14
  bl        -0x3469D4
  stw       r3, 0xC4(r31)
  addi      r24, r30, 0x228
  li        r25, 0
  li        r26, 0

.loc_0x620:
  lbz       r0, 0x0(r24)
  extsb     r0, r0
  cmpwi     r0, -0x1
  beq-      .loc_0x764
  cmpwi     r0, -0x2
  bne-      .loc_0x654
  lwz       r3, 0xC4(r31)
  addi      r0, r26, 0x4
  li        r4, 0
  stwx      r4, r3, r0
  lwz       r3, 0xC4(r31)
  stwx      r4, r3, r26
  b         .loc_0x750

.loc_0x654:
  lwz       r4, 0x220(r30)
  rlwinm    r3,r0,2,0,29
  li        r0, 0x20
  addi      r5, r1, 0x14
  lwzx      r3, r4, r3
  addi      r4, r28, 0x1CC
  lwz       r27, 0xC(r3)
  mtctr     r0

.loc_0x674:
  lwz       r3, 0x4(r4)
  lwzu      r0, 0x8(r4)
  stw       r3, 0x4(r5)
  stwu      r0, 0x8(r5)
  bdnz+     .loc_0x674

.loc_0x688:
  lwz       r6, 0xC4(r31)
  mr        r5, r27
  addi      r3, r1, 0x18
  addi      r4, r28, 0x388
  addi      r7, r6, 0x4
  lwzx      r6, r26, r7
  addi      r0, r6, 0x1
  stwx      r0, r26, r7
  crclr     6, 0x6
  bl        -0x34102C
  lwz       r4, 0xC0(r31)
  addi      r3, r1, 0x18
  bl        -0x3E5458
  cmplwi    r3, 0
  bne+      .loc_0x688
  lwz       r5, 0xC4(r31)
  addi      r4, r26, 0x4
  lwzx      r3, r5, r4
  subi      r0, r3, 0x1
  stwx      r0, r5, r4
  lwz       r3, 0xC4(r31)
  lwzx      r0, r3, r4
  cmpwi     r0, 0
  beq-      .loc_0x6F8
  rlwinm    r3,r0,2,0,29
  bl        -0x3E44F8
  lwz       r4, 0xC4(r31)
  stwx      r3, r4, r26

.loc_0x6F8:
  li        r22, 0
  li        r23, 0
  b         .loc_0x73C

.loc_0x704:
  mr        r5, r27
  mr        r6, r22
  addi      r3, r1, 0x18
  addi      r4, r28, 0x388
  crclr     6, 0x6
  bl        -0x341098
  lwz       r4, 0xC0(r31)
  addi      r3, r1, 0x18
  bl        -0x3E54C4
  lwz       r0, 0xC4(r31)
  addi      r22, r22, 0x1
  lwzx      r4, r26, r0
  stwx      r3, r4, r23
  addi      r23, r23, 0x4

.loc_0x73C:
  lwz       r3, 0xC4(r31)
  addi      r0, r3, 0x4
  lwzx      r0, r26, r0
  cmpw      r22, r0
  blt+      .loc_0x704

.loc_0x750:
  addi      r25, r25, 0x1
  addi      r24, r24, 0x1
  cmpwi     r25, 0x14
  addi      r26, r26, 0x8
  blt+      .loc_0x620

.loc_0x764:
  lwz       r4, 0xC4(r31)
  lis       r5, 0x6574
  lwz       r3, 0x4C(r31)
  addi      r6, r5, 0x5F70
  lwz       r4, 0x0(r4)
  li        r5, 0x5073
  lwz       r7, 0x0(r4)
  bl        0x2F08

.loc_0x784:
  lbz       r0, 0x228(r30)
  lis       r4, 0x7465
  lwz       r3, 0x4C(r31)
  addi      r6, r4, 0x7874
  extsb     r0, r0
  lwz       r4, 0x220(r30)
  lwz       r12, 0x0(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r4, r4, r0
  li        r5, 0x54
  lwz       r12, 0x3C(r12)
  lwz       r24, 0x0(r4)
  lwz       r25, 0x4(r4)
  mtctr     r12
  bctrl     
  stw       r25, 0x1C(r3)
  lis       r5, 0x6A69
  lis       r4, 0x4E
  li        r7, 0x20
  stw       r24, 0x18(r3)
  addi      r6, r5, 0x5F6C
  addi      r5, r4, 0x7961
  lwz       r3, 0x4C(r31)
  bl        0x354C
  stw       r3, 0xCC(r31)
  lis       r5, 0x6A69
  lis       r4, 0x4E
  li        r7, 0x20
  lwz       r3, 0x4C(r31)
  addi      r6, r5, 0x5F72
  addi      r5, r4, 0x7961
  bl        0x352C
  stw       r3, 0xD0(r31)
  lwz       r0, 0xB8(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x828
  lwz       r3, 0xCC(r31)
  bl        0x3820
  lwz       r3, 0xCC(r31)
  li        r4, 0
  bl        0x3834

.loc_0x828:
  lwz       r3, 0xD0(r31)
  bl        0x380C
  lwz       r3, 0xD0(r31)
  li        r4, 0
  bl        0x3820
  lwz       r3, 0x9C(r31)
  lis       r4, 0x7465
  addi      r6, r4, 0x6D57
  li        r5, 0x4E69
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x30DC
  mr        r3, r31
  bl        0x12EC
  lbz       r0, 0x5C(r29)
  cmplwi    r0, 0
  beq-      .loc_0x8A0
  li        r3, 0
  li        r0, 0xFF
  stw       r3, 0x98(r31)
  mr        r3, r31
  stw       r0, 0xE8(r31)
  bl        0x12C8
  lwz       r3, 0x8C(r31)
  bl        0x3788
  lfs       f0, 0x1D50(r2)
  stfs      f0, 0xDC(r31)
  stfs      f0, 0xD8(r31)

.loc_0x8A0:
  lmw       r22, 0x118(r1)
  lwz       r0, 0x144(r1)
  mtlr      r0
  addi      r1, r1, 0x140
  blr
*/
}

/*
 * --INFO--
 * Address:	8040866C
 * Size:	000010
 */
void __ct__Q42kh6Screen19ObjDayEndResultMail11MailIconAnmFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040867C
 * Size:	000170
 */
void doStart__Q32kh6Screen19ObjDayEndResultMailFPCQ26Screen13StartSceneArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  cmplwi    r4, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x38
  lbz       r0, 0x4(r4)
  cmplwi    r0, 0
  beq-      .loc_0x38
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,29,27
  stw       r0, 0x90(r31)
  b         .loc_0x44

.loc_0x38:
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x8
  stw       r0, 0x90(r31)

.loc_0x44:
  lwz       r0, 0x90(r31)
  rlwinm.   r0,r0,0,28,28
  beq-      .loc_0x84
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)
  b         .loc_0xB4

.loc_0x84:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x7C(r31)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x80(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x80(r31)

.loc_0xB4:
  lfs       f0, 0x7C(r31)
  lis       r3, 0x4E61
  addi      r6, r3, 0x6C6C
  li        r5, 0
  stfs      f0, 0x60(r31)
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        0x2F98
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xD0138
  mr        r3, r31
  bl        0x4B838
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF946C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x134
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x7E6
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DE16C

.loc_0x134:
  mr        r3, r31
  bl        0x4B7F4
  lbz       r0, 0x5C(r3)
  cmplwi    r0, 0
  bne-      .loc_0x158
  lwz       r3, -0x67A8(r13)
  li        r4, 0x187D
  li        r5, 0
  bl        -0xD01A0

.loc_0x158:
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804087EC
 * Size:	0001B8
 */
void doUpdateFadein__Q32kh6Screen19ObjDayEndResultMailFv(void)
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
  mr        r30, r3
  lfs       f0, 0x60(r3)
  lwz       r4, 0xAC(r3)
  stfs      f0, 0x8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r30)
  lis       r3, 0x7465
  lwz       r4, 0x50(r30)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CF260
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r30)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r30)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x7C(r30)
  lfs       f1, 0x60(r30)
  lfs       f0, 0x80(r30)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fmuls     f0, f2, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r30)
  lfs       f0, 0x80(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x104
  li        r31, 0x1
  b         .loc_0x108

.loc_0x104:
  li        r31, 0

.loc_0x108:
  lwz       r4, 0xA0(r30)
  lis       r3, 0x7465
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f1, 0x8(r4)
  lwz       r3, 0x9C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CF320
  lwz       r3, 0x4C(r30)
  lis       r5, 0x656D
  lis       r4, 0x4E
  lfs       f30, 0xDC(r30)
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5730
  addi      r5, r4, 0x6974
  lfs       f31, 0xD8(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stfs      f31, 0xCC(r3)
  stfs      f30, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x44(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	804089A4
 * Size:	000280
 */
void doUpdate__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r31, r3
  bl        0x4B5DC
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF96C8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x80E
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DE3C8

.loc_0x68:
  mr        r3, r31
  bl        0x4B598
  lwz       r0, 0x90(r31)
  mr        r30, r3
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0xF0
  lwz       r3, 0xA4(r31)
  bl        -0x2BC94
  lwz       r3, 0xA4(r31)
  bl        -0x2BD50
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x240
  lwz       r3, 0xA4(r31)
  lwz       r0, 0x474(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xC8
  bge-      .loc_0xBC
  cmpwi     r0, 0
  beq-      .loc_0xC8
  bge-      .loc_0xD4
  b         .loc_0x240

.loc_0xBC:
  cmpwi     r0, 0x4
  bge-      .loc_0x240
  b         .loc_0xE4

.loc_0xC8:
  li        r0, 0x1
  stw       r0, 0x58(r30)
  b         .loc_0x240

.loc_0xD4:
  lwz       r0, 0x90(r31)
  rlwinm    r0,r0,0,30,28
  stw       r0, 0x90(r31)
  b         .loc_0x240

.loc_0xE4:
  li        r0, 0x2
  stw       r0, 0x58(r30)
  b         .loc_0x240

.loc_0xF0:
  lwz       r0, 0x98(r31)
  cmplwi    r0, 0x7
  bgt-      .loc_0x170
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x5258
  lwzx      r0, r3, r0
  mtctr     r0
  bctr      
  mr        r3, r31
  bl        0x31C
  b         .loc_0x170
  mr        r3, r31
  bl        0x524
  b         .loc_0x170
  mr        r3, r31
  bl        0x5C0
  b         .loc_0x170
  mr        r3, r31
  bl        0x5EC
  b         .loc_0x170
  mr        r3, r31
  bl        0x698
  b         .loc_0x170
  mr        r3, r31
  bl        0x6C4
  b         .loc_0x170
  mr        r3, r31
  bl        0x7E4
  b         .loc_0x170
  mr        r3, r31
  bl        0x8AC

.loc_0x170:
  lwz       r3, 0xC8(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xC8(r31)
  srawi     r0, r0, 0x2
  addze     r6, r0
  lwz       r3, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  lwz       r4, 0xC4(r31)
  sub       r0, r0, r3
  rlwinm    r0,r0,3,0,28
  add       r3, r4, r0
  lwz       r0, 0x4(r3)
  cmpw      r6, r0
  blt-      .loc_0x1B4
  li        r0, 0
  li        r6, 0
  stw       r0, 0xC8(r31)

.loc_0x1B4:
  lwz       r4, 0xBC(r31)
  lis       r5, 0x6574
  lwz       r3, 0xB8(r31)
  rlwinm    r0,r6,2,0,29
  lwz       r7, 0xC4(r31)
  addi      r6, r5, 0x5F70
  sub       r4, r3, r4
  lwz       r3, 0x4C(r31)
  rlwinm    r4,r4,3,0,28
  li        r5, 0x5073
  lwzx      r4, r7, r4
  lwzx      r7, r4, r0
  bl        0x28B8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  lis       r5, 0x656D
  lis       r4, 0x4E
  lfs       f30, 0xDC(r31)
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5730
  addi      r5, r4, 0x6974
  lfs       f31, 0xD8(r31)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stfs      f31, 0xCC(r3)
  stfs      f30, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     

.loc_0x240:
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r3, 0
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x34(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80408C24
 * Size:	0001B4
 */
void doUpdateFadeout__Q32kh6Screen19ObjDayEndResultMailFv(void)
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
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0x78(r12)
  mtctr     r12
  bctrl     
  lfs       f0, 0x60(r30)
  lis       r3, 0x7465
  lwz       r4, 0x50(r30)
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CF68C
  lis       r4, 0x8051
  lis       r3, 0x4E61
  addi      r4, r4, 0x4134
  lfs       f1, 0x60(r30)
  lfs       f0, 0x8(r4)
  addi      r6, r3, 0x6C6C
  li        r5, 0
  fadds     f0, f1, f0
  stfs      f0, 0x60(r30)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x84(r30)
  lfs       f1, 0x60(r30)
  lfs       f0, 0x88(r30)
  fsubs     f1, f1, f2
  lwz       r12, 0x0(r3)
  fsubs     f0, f0, f2
  lfs       f2, 0x1D50(r2)
  lfs       f3, 0x1D4C(r2)
  lwz       r12, 0x24(r12)
  fdivs     f0, f1, f0
  fsubs     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r4, 0xC(r1)
  mtctr     r12
  bctrl     
  lfs       f1, 0x60(r30)
  lfs       f0, 0x88(r30)
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x100
  li        r31, 0x1
  b         .loc_0x104

.loc_0x100:
  li        r31, 0

.loc_0x104:
  lwz       r4, 0xA0(r30)
  lis       r3, 0x7465
  addi      r6, r3, 0x6D57
  li        r5, 0x4E69
  stfs      f1, 0x8(r4)
  lwz       r3, 0x9C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3CF754
  lwz       r3, 0x4C(r30)
  lis       r5, 0x656D
  lis       r4, 0x4E
  lfs       f30, 0xDC(r30)
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x5730
  addi      r5, r4, 0x6974
  lfs       f31, 0xD8(r30)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  stfs      f31, 0xCC(r3)
  stfs      f30, 0xD0(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x2C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x44(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80408DD8
 * Size:	000214
 */
void statusNormal__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        0x4B254
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x3C
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x4
  stw       r0, 0x90(r31)
  lwz       r3, 0xA4(r31)
  bl        -0x2C210
  b         .loc_0x200

.loc_0x3C:
  mr        r3, r31
  bl        0x4B228
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x114
  mr        r3, r31
  bl        0x4B17C
  lis       r5, 0x804E
  lis       r4, 0x804E
  subi      r0, r5, 0x7B98
  li        r5, 0x4E24
  stw       r0, 0x10(r1)
  subi      r6, r4, 0x7BA8
  li        r4, 0
  li        r0, 0x1
  stw       r3, 0x1C(r1)
  mr        r3, r31
  stw       r6, 0x10(r1)
  stw       r5, 0x14(r1)
  stb       r4, 0x18(r1)
  stb       r0, 0x19(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x10
  bl        0x490B4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x200
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x7B98
  lis       r5, 0x804F
  stw       r0, 0x8(r1)
  subi      r0, r3, 0x7588
  lis       r3, 0x804F
  li        r4, 0
  stw       r0, 0x8(r1)
  subi      r5, r5, 0x4FF0
  subi      r0, r3, 0x5000
  mr        r3, r31
  stw       r5, 0x8(r1)
  stb       r4, 0xC(r1)
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  bl        0x49088
  lwz       r0, 0x90(r31)
  ori       r0, r0, 0x10
  stw       r0, 0x90(r31)
  b         .loc_0x200

.loc_0x114:
  mr        r3, r31
  bl        0x4B150
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,25,25
  beq-      .loc_0x1B4
  lwz       r3, 0xBC(r31)
  cmplwi    r3, 0x1
  ble-      .loc_0x200
  lwz       r0, 0xB8(r31)
  subi      r3, r3, 0x1
  sub       r0, r0, r3
  cmplwi    r0, 0x14
  bge-      .loc_0x200
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xBC(r31)
  addi      r5, r3, 0x228
  lwz       r0, 0xB8(r31)
  subi      r3, r4, 0x1
  sub       r0, r0, r3
  cmplwi    r0, 0x13
  bne-      .loc_0x188
  lbzx      r0, r5, r0
  extsb     r0, r0
  cmpwi     r0, -0x2
  beq-      .loc_0x200

.loc_0x188:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xD093C
  lwz       r3, 0xD0(r31)
  bl        0x2E5C
  li        r0, 0x3
  lfs       f0, 0x1D74(r2)
  stw       r0, 0x98(r31)
  stfs      f0, 0xB0(r31)
  b         .loc_0x200

.loc_0x1B4:
  mr        r3, r31
  bl        0x4B0B0
  lwz       r0, 0x18(r3)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x200
  lwz       r3, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  cmplw     r3, r0
  bge-      .loc_0x200
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1811
  li        r5, 0
  bl        -0xD098C
  lwz       r3, 0xCC(r31)
  bl        0x2E0C
  li        r0, 0x1
  lfs       f0, 0x1D90(r2)
  stw       r0, 0x98(r31)
  stfs      f0, 0xB0(r31)

.loc_0x200:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80408FEC
 * Size:	0000A8
 */
void statusFadeoutToLeft__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x1D94(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f1, 0xB0(r3)
  lwz       r4, 0xA8(r3)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xB0(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x40
  lfs       f0, 0x1D50(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0xB0(r31)
  b         .loc_0x94

.loc_0x40:
  lwz       r4, 0xBC(r31)
  addi      r0, r4, 0x1
  stw       r0, 0xBC(r31)
  bl        0x1160
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  lwz       r3, 0xBC(r31)
  addi      r0, r3, 0x1
  stw       r0, 0xBC(r31)

.loc_0x64:
  lwz       r3, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  cmplw     r3, r0
  blt-      .loc_0x7C
  lwz       r3, 0xD0(r31)
  bl        0x2D8C

.loc_0x7C:
  mr        r3, r31
  bl        0x41C
  li        r0, 0x2
  lfs       f0, 0x1D78(r2)
  stw       r0, 0x98(r31)
  stfs      f0, 0xB0(r31)

.loc_0x94:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80409094
 * Size:	000038
 */
void statusFadeinFromLeft__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0xB0(r3)
  lwz       r4, 0xA8(r3)
  lfs       f0, 0x1D74(r2)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xB0(r3)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x2C
  lfs       f0, 0x1D50(r2)
  fsubs     f0, f1, f0
  stfs      f0, 0xB0(r3)
  blr       

.loc_0x2C:
  li        r0, 0
  stw       r0, 0x98(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804090CC
 * Size:	0000B8
 */
void statusFadeoutToRight__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x1D78(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lfs       f1, 0xB0(r3)
  lwz       r4, 0xA8(r3)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xB0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x40
  lfs       f0, 0x1D50(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xB0(r31)
  b         .loc_0xA4

.loc_0x40:
  lwz       r4, 0xBC(r31)
  subi      r0, r4, 0x1
  stw       r0, 0xBC(r31)
  bl        0x1080
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  lwz       r3, 0xBC(r31)
  subi      r0, r3, 0x1
  stw       r0, 0xBC(r31)

.loc_0x64:
  lwz       r3, 0xBC(r31)
  cmplwi    r3, 0x1
  ble-      .loc_0x84
  lwz       r0, 0xB8(r31)
  subi      r3, r3, 0x1
  sub       r0, r0, r3
  cmplwi    r0, 0x14
  blt-      .loc_0x8C

.loc_0x84:
  lwz       r3, 0xCC(r31)
  bl        0x2C9C

.loc_0x8C:
  mr        r3, r31
  bl        0x32C
  li        r0, 0x4
  lfs       f0, 0x1D94(r2)
  stw       r0, 0x98(r31)
  stfs      f0, 0xB0(r31)

.loc_0xA4:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80409184
 * Size:	000038
 */
void statusFadeinFromRight__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0xB0(r3)
  lwz       r4, 0xA8(r3)
  lfs       f0, 0x1D90(r2)
  stfs      f1, 0x8(r4)
  lfs       f1, 0xB0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2C
  lfs       f0, 0x1D50(r2)
  fadds     f0, f1, f0
  stfs      f0, 0xB0(r3)
  blr       

.loc_0x2C:
  li        r0, 0
  stw       r0, 0x98(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804091BC
 * Size:	00012C
 */
void statusWaitOpen__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x4ADD4
  lis       r4, 0x5253
  lis       r5, 0x44
  addi      r6, r4, 0x4C54
  li        r4, 0x4B48
  addi      r5, r5, 0x455F
  bl        -0xF9ED0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x58
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x77D0
  li        r4, 0x8F1
  subi      r5, r5, 0x7700
  crclr     6, 0x6
  bl        -0x3DEBD0

.loc_0x58:
  mr        r3, r30
  bl        0x4AD90
  mr        r31, r3
  li        r0, 0x1
  stb       r0, 0x5C(r3)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x60(r31)
  lwz       r3, 0x220(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  lbz       r0, 0xA(r3)
  extsb     r0, r0
  cmpwi     r0, 0x3
  beq-      .loc_0xE4
  bge-      .loc_0xBC
  cmpwi     r0, 0x1
  beq-      .loc_0xD4
  bge-      .loc_0xDC
  cmpwi     r0, 0
  bge-      .loc_0xCC
  b         .loc_0xFC

.loc_0xBC:
  cmpwi     r0, 0x5
  beq-      .loc_0xF4
  bge-      .loc_0xFC
  b         .loc_0xEC

.loc_0xCC:
  li        r4, 0x1876
  b         .loc_0x100

.loc_0xD4:
  li        r4, 0x1877
  b         .loc_0x100

.loc_0xDC:
  li        r4, 0x1878
  b         .loc_0x100

.loc_0xE4:
  li        r4, 0x1879
  b         .loc_0x100

.loc_0xEC:
  li        r4, 0x187A
  b         .loc_0x100

.loc_0xF4:
  li        r4, 0x187B
  b         .loc_0x100

.loc_0xFC:
  li        r4, 0x187C

.loc_0x100:
  lwz       r3, -0x67A8(r13)
  li        r5, 0
  bl        -0xD0C94
  li        r0, 0x6
  stw       r0, 0x98(r30)
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
 * Address:	804092E8
 * Size:	0000D4
 */
void statusOpenW__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  lfs       f2, 0x1D98(r2)
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x4134
  lfs       f4, 0x1D50(r2)
  lfs       f1, 0xE0(r3)
  lfs       f0, 0x48(r4)
  fmuls     f1, f1, f0
  lfs       f0, 0x1D48(r2)
  stfs      f1, 0xE0(r3)
  lfs       f3, 0xDC(r3)
  lfs       f1, 0x3C(r4)
  fsubs     f2, f2, f3
  fmadds    f1, f2, f1, f3
  stfs      f1, 0xDC(r3)
  lfs       f1, 0xD8(r3)
  lfs       f2, 0x3C(r4)
  fsubs     f3, f4, f1
  lfs       f1, 0xE0(r3)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0xE0(r3)
  lfs       f2, 0xD8(r3)
  lfs       f1, 0xE0(r3)
  fadds     f1, f2, f1
  stfs      f1, 0xD8(r3)
  lfs       f1, 0xE0(r3)
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA0
  lfs       f1, 0xD8(r3)
  lfs       f0, 0x1D9C(r2)
  fsubs     f1, f1, f4
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA0
  stfs      f4, 0xD8(r3)
  li        r0, 0x7
  lfs       f0, 0x40(r4)
  stfs      f0, 0xE4(r3)
  stw       r0, 0x98(r3)

.loc_0xA0:
  lwz       r4, 0xE8(r3)
  addi      r0, r4, 0x20
  stw       r0, 0xE8(r3)
  lwz       r0, 0xE8(r3)
  cmpwi     r0, 0xFF
  ble-      .loc_0xC0
  li        r0, 0xFF
  stw       r0, 0xE8(r3)

.loc_0xC0:
  bl        0x560
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804093BC
 * Size:	0000CC
 */
void statusOpenH__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8051
  lfs       f4, 0x1D50(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r4, 0x4134
  lfs       f1, 0xE4(r31)
  lfs       f0, 0x48(r3)
  fmuls     f1, f1, f0
  lfs       f0, 0x1D48(r2)
  stfs      f1, 0xE4(r31)
  lfs       f1, 0xDC(r31)
  lfs       f2, 0x44(r3)
  fsubs     f3, f4, f1
  lfs       f1, 0xE4(r31)
  fmadds    f1, f3, f2, f1
  stfs      f1, 0xE4(r31)
  lfs       f2, 0xDC(r31)
  lfs       f1, 0xE4(r31)
  fadds     f1, f2, f1
  stfs      f1, 0xDC(r31)
  lfs       f1, 0xE4(r31)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x90
  lfs       f1, 0xDC(r31)
  lfs       f0, 0x1D9C(r2)
  fsubs     f1, f1, f4
  fcmpo     cr0, f1, f0
  bge-      .loc_0x90
  stfs      f4, 0xDC(r31)
  lwz       r3, 0x8C(r31)
  bl        0x2990
  li        r0, 0
  stw       r0, 0x98(r31)

.loc_0x90:
  lwz       r3, 0xE8(r31)
  addi      r0, r3, 0x20
  stw       r0, 0xE8(r31)
  lwz       r0, 0xE8(r31)
  cmpwi     r0, 0xFF
  ble-      .loc_0xB0
  li        r0, 0xFF
  stw       r0, 0xE8(r31)

.loc_0xB0:
  mr        r3, r31
  bl        0x498
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80409488
 * Size:	000480
 */
void changeMail__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stw       r31, 0x7C(r1)
  mr        r31, r3
  stw       r30, 0x78(r1)
  stw       r29, 0x74(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lis       r4, 0x6574
  stw       r0, 0xC8(r31)
  mr        r30, r3
  addi      r6, r4, 0x5F70
  li        r5, 0x5073
  lwz       r3, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  lwz       r4, 0xC4(r31)
  sub       r0, r0, r3
  lwz       r3, 0x4C(r31)
  rlwinm    r0,r0,3,0,28
  lwzx      r4, r4, r0
  lwz       r7, 0x0(r4)
  bl        0x1F54
  lwz       r4, 0xBC(r31)
  lis       r3, 0x7465
  lwz       r0, 0xB8(r31)
  addi      r6, r3, 0x7874
  lwz       r3, 0x4C(r31)
  li        r5, 0x54
  sub       r0, r0, r4
  lwz       r7, 0x220(r30)
  add       r4, r30, r0
  lwz       r12, 0x0(r3)
  lbz       r0, 0x228(r4)
  lwz       r12, 0x3C(r12)
  extsb     r0, r0
  rlwinm    r0,r0,2,0,29
  lwzx      r4, r7, r0
  lwz       r30, 0x0(r4)
  lwz       r29, 0x4(r4)
  mtctr     r12
  bctrl     
  stw       r29, 0x1C(r3)
  stw       r30, 0x18(r3)
  lwz       r3, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  cmplw     r3, r0
  bne-      .loc_0x268
  lwz       r4, 0xD4(r31)
  li        r0, 0xFF
  lfs       f0, 0x1D50(r2)
  lis       r3, 0x6574
  stb       r0, 0x4C(r1)
  addi      r6, r3, 0x5F70
  li        r5, 0x5073
  stfs      f0, 0x38(r4)
  stfs      f0, 0x3C(r4)
  stfs      f0, 0x40(r4)
  stfs      f0, 0x44(r4)
  lwz       r3, 0x4C(r31)
  stb       r0, 0x4D(r1)
  lwz       r12, 0x0(r3)
  stb       r0, 0x4E(r1)
  lwz       r12, 0x3C(r12)
  stb       r0, 0x4F(r1)
  mtctr     r12
  bctrl     
  lwz       r8, 0x4C(r1)
  lis       r5, 0x6F6E
  lis       r4, 0x50
  stw       r8, 0x38(r1)
  addi      r6, r5, 0x5F62
  addi      r5, r4, 0x6963
  lbz       r4, 0x38(r1)
  stw       r8, 0x3C(r1)
  lbz       r0, 0x39(r1)
  stb       r4, 0x150(r3)
  lbz       r4, 0x3A(r1)
  stb       r0, 0x151(r3)
  lbz       r0, 0x3B(r1)
  stb       r4, 0x152(r3)
  lbz       r4, 0x3C(r1)
  stb       r0, 0x153(r3)
  lbz       r0, 0x3D(r1)
  stb       r4, 0x154(r3)
  lbz       r4, 0x3E(r1)
  stb       r0, 0x155(r3)
  lbz       r0, 0x3F(r1)
  stw       r8, 0x40(r1)
  stb       r4, 0x156(r3)
  lbz       r4, 0x40(r1)
  stb       r0, 0x157(r3)
  lbz       r0, 0x41(r1)
  stb       r4, 0x158(r3)
  lbz       r7, 0x42(r1)
  stw       r8, 0x44(r1)
  lbz       r4, 0x43(r1)
  stb       r0, 0x159(r3)
  lbz       r0, 0x44(r1)
  stb       r7, 0x15A(r3)
  lbz       r7, 0x45(r1)
  stb       r4, 0x15B(r3)
  lbz       r4, 0x46(r1)
  stb       r0, 0x15C(r3)
  lbz       r0, 0x47(r1)
  stb       r7, 0x15D(r3)
  stb       r4, 0x15E(r3)
  stb       r0, 0x15F(r3)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r6, 0x4C(r1)
  stw       r6, 0x28(r1)
  lbz       r4, 0x28(r1)
  stw       r6, 0x2C(r1)
  lbz       r0, 0x29(r1)
  stb       r4, 0x150(r3)
  lbz       r4, 0x2A(r1)
  stb       r0, 0x151(r3)
  lbz       r0, 0x2B(r1)
  stb       r4, 0x152(r3)
  lbz       r4, 0x2C(r1)
  stb       r0, 0x153(r3)
  lbz       r0, 0x2D(r1)
  stb       r4, 0x154(r3)
  lbz       r4, 0x2E(r1)
  stb       r0, 0x155(r3)
  lbz       r0, 0x2F(r1)
  stw       r6, 0x30(r1)
  stb       r4, 0x156(r3)
  lbz       r4, 0x30(r1)
  stb       r0, 0x157(r3)
  lbz       r0, 0x31(r1)
  stb       r4, 0x158(r3)
  lbz       r5, 0x32(r1)
  stw       r6, 0x34(r1)
  lbz       r4, 0x33(r1)
  stb       r0, 0x159(r3)
  lbz       r0, 0x34(r1)
  stb       r5, 0x15A(r3)
  lbz       r5, 0x35(r1)
  stb       r4, 0x15B(r3)
  lbz       r4, 0x36(r1)
  stb       r0, 0x15C(r3)
  lbz       r0, 0x37(r1)
  stb       r5, 0x15D(r3)
  stb       r4, 0x15E(r3)
  stb       r0, 0x15F(r3)
  b         .loc_0x464

.loc_0x268:
  lis       r4, 0x8051
  lis       r3, 0x6574
  addi      r4, r4, 0x4134
  lwz       r7, 0xD4(r31)
  lfs       f3, 0x38(r4)
  addi      r6, r3, 0x5F70
  lfs       f2, 0x34(r4)
  li        r5, 0x5073
  lfs       f1, 0x30(r4)
  lfs       f0, 0x2C(r4)
  lfs       f4, 0x1D4C(r2)
  stfs      f0, 0x38(r7)
  stfs      f1, 0x3C(r7)
  stfs      f2, 0x40(r7)
  stfs      f3, 0x44(r7)
  lfs       f0, 0x2C(r4)
  lfs       f2, 0x30(r4)
  lfs       f1, 0x34(r4)
  fmuls     f3, f4, f0
  lfs       f0, 0x38(r4)
  fmuls     f2, f4, f2
  fmuls     f1, f4, f1
  lwz       r3, 0x4C(r31)
  fmuls     f0, f4, f0
  fctiwz    f3, f3
  lwz       r12, 0x0(r3)
  fctiwz    f2, f2
  fctiwz    f1, f1
  lwz       r12, 0x3C(r12)
  fctiwz    f0, f0
  stfd      f3, 0x50(r1)
  stfd      f2, 0x58(r1)
  lwz       r8, 0x54(r1)
  stfd      f1, 0x60(r1)
  lwz       r7, 0x5C(r1)
  stfd      f0, 0x68(r1)
  lwz       r4, 0x64(r1)
  lwz       r0, 0x6C(r1)
  stb       r8, 0x48(r1)
  stb       r7, 0x49(r1)
  stb       r4, 0x4A(r1)
  stb       r0, 0x4B(r1)
  mtctr     r12
  bctrl     
  lwz       r8, 0x48(r1)
  lis       r5, 0x6F6E
  lis       r4, 0x50
  stw       r8, 0x18(r1)
  addi      r6, r5, 0x5F62
  addi      r5, r4, 0x6963
  lbz       r4, 0x18(r1)
  stw       r8, 0x1C(r1)
  lbz       r0, 0x19(r1)
  stb       r4, 0x150(r3)
  lbz       r4, 0x1A(r1)
  stb       r0, 0x151(r3)
  lbz       r0, 0x1B(r1)
  stb       r4, 0x152(r3)
  lbz       r4, 0x1C(r1)
  stb       r0, 0x153(r3)
  lbz       r0, 0x1D(r1)
  stb       r4, 0x154(r3)
  lbz       r4, 0x1E(r1)
  stb       r0, 0x155(r3)
  lbz       r0, 0x1F(r1)
  stw       r8, 0x20(r1)
  stb       r4, 0x156(r3)
  lbz       r4, 0x20(r1)
  stb       r0, 0x157(r3)
  lbz       r0, 0x21(r1)
  stb       r4, 0x158(r3)
  lbz       r7, 0x22(r1)
  stw       r8, 0x24(r1)
  lbz       r4, 0x23(r1)
  stb       r0, 0x159(r3)
  lbz       r0, 0x24(r1)
  stb       r7, 0x15A(r3)
  lbz       r7, 0x25(r1)
  stb       r4, 0x15B(r3)
  lbz       r4, 0x26(r1)
  stb       r0, 0x15C(r3)
  lbz       r0, 0x27(r1)
  stb       r7, 0x15D(r3)
  stb       r4, 0x15E(r3)
  stb       r0, 0x15F(r3)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r6, 0x48(r1)
  stw       r6, 0x8(r1)
  lbz       r4, 0x8(r1)
  stw       r6, 0xC(r1)
  lbz       r0, 0x9(r1)
  stb       r4, 0x150(r3)
  lbz       r4, 0xA(r1)
  stb       r0, 0x151(r3)
  lbz       r0, 0xB(r1)
  stb       r4, 0x152(r3)
  lbz       r4, 0xC(r1)
  stb       r0, 0x153(r3)
  lbz       r0, 0xD(r1)
  stb       r4, 0x154(r3)
  lbz       r4, 0xE(r1)
  stb       r0, 0x155(r3)
  lbz       r0, 0xF(r1)
  stw       r6, 0x10(r1)
  stb       r4, 0x156(r3)
  lbz       r4, 0x10(r1)
  stb       r0, 0x157(r3)
  lbz       r0, 0x11(r1)
  stb       r4, 0x158(r3)
  lbz       r5, 0x12(r1)
  stw       r6, 0x14(r1)
  lbz       r4, 0x13(r1)
  stb       r0, 0x159(r3)
  lbz       r0, 0x14(r1)
  stb       r5, 0x15A(r3)
  lbz       r5, 0x15(r1)
  stb       r4, 0x15B(r3)
  lbz       r4, 0x16(r1)
  stb       r0, 0x15C(r3)
  lbz       r0, 0x17(r1)
  stb       r5, 0x15D(r3)
  stb       r4, 0x15E(r3)
  stb       r0, 0x15F(r3)

.loc_0x464:
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
 * Address:	80409908
 * Size:	000064
 */
void changeAlpha__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x7465
  li        r5, 0x4E69
  stw       r0, 0x14(r1)
  addi      r6, r4, 0x6D57
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x9C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  lwz       r0, 0xE8(r31)
  lwz       r12, 0x24(r12)
  subfic    r0, r0, 0xFF
  rlwinm    r4,r0,0,24,31
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
 * Address:	8040996C
 * Size:	0001C4
 */
void doDraw__Q32kh6Screen19ObjDayEndResultMailFR8Graphics(void)
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
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x1C(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x38(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x38(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x14(r3)
  mr        r4, r31
  lfs       f0, 0x2440(r2)
  addi      r5, r31, 0xBC
  fadds     f2, f3, f2
  lwz       r3, 0x70(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r3)
  stfs      f0, 0x144(r3)
  lwz       r3, 0x70(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x8051
  lfs       f2, 0x243C(r2)
  addi      r3, r3, 0x4134
  lfs       f1, 0x1D48(r2)
  lfs       f3, 0x18(r3)
  addi      r3, r31, 0xBC
  lfs       f0, 0x2440(r2)
  fadds     f2, f3, f2
  lwz       r4, 0x4C(r30)
  fadds     f0, f1, f0
  stfs      f2, 0x140(r4)
  stfs      f0, 0x144(r4)
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xBC
  lwz       r12, 0xBC(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x9C(r30)
  mr        r4, r31
  addi      r5, r31, 0xBC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x90(r30)
  rlwinm.   r0,r0,0,29,29
  beq-      .loc_0x1AC
  addi      r3, r31, 0x190
  lwz       r12, 0x190(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r30)
  lis       r5, 0x706F
  lis       r4, 0x4E73
  lwz       r12, 0x0(r3)
  addi      r6, r5, 0x696E
  addi      r5, r4, 0x6574
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xA4(r30)
  bl        -0x2CCE8

.loc_0x1AC:
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
 * Address:	80409B30
 * Size:	000288
 */
void updateCommon__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r31)
  bl        -0x3C9034
  lfs       f0, 0x44(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x44(r31)
  lfs       f0, 0x48(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x48(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x44(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x8C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x44(r31)

.loc_0x8C:
  lwz       r3, 0x40(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x48(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xC8
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x48(r31)

.loc_0xC8:
  lfs       f0, 0x68(r31)
  lwz       r3, 0x58(r31)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x6C(r31)
  lwz       r3, 0x5C(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x4C(r31)
  bl        -0x3C90E8
  lfs       f0, 0x68(r31)
  lis       r0, 0x4330
  lfs       f2, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f0, f2
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x68(r31)
  lfs       f0, 0x6C(r31)
  fadds     f0, f0, f2
  stfs      f0, 0x6C(r31)
  lwz       r3, 0x58(r31)
  lfs       f2, 0x68(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x140
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x68(r31)

.loc_0x140:
  lwz       r3, 0x5C(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  lha       r0, 0x6(r3)
  lfd       f1, 0x1D58(r2)
  xoris     r0, r0, 0x8000
  lfs       f2, 0x6C(r31)
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x17C
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x6C(r31)

.loc_0x17C:
  lfs       f0, 0x64(r31)
  lis       r3, 0x6974
  lwz       r4, 0x54(r31)
  addi      r6, r3, 0x6C65
  li        r5, 0x4E74
  stfs      f0, 0x8(r4)
  lwz       r3, 0x4C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  bl        -0x3D06DC
  lfs       f1, 0x64(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x64(r31)
  lwz       r3, 0x54(r31)
  lfs       f2, 0x64(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x1F8
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x64(r31)

.loc_0x1F8:
  lfs       f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x70(r31)
  bl        -0x3C920C
  lfs       f1, 0x78(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x78(r31)
  lwz       r3, 0x74(r31)
  lfs       f2, 0x78(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x258
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x78(r31)

.loc_0x258:
  lwz       r3, 0x38(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4C(r31)
  bl        -0x3C9274
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80409DB8
 * Size:	0003BC
 */
void setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3MgrP7J2DPane(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r23, 0x1C(r1)
  mr        r26, r5
  mr        r31, r3
  mr        r30, r4
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0xBC
  lwz       r0, 0x18(r26)
  li        r3, 0
  lwz       r4, 0x1C(r26)
  xor       r0, r0, r3
  xor       r3, r4, r3
  or.       r0, r3, r0
  beq-      .loc_0xBC
  li        r3, 0x48
  bl        -0x3E5F70
  mr.       r24, r3
  beq-      .loc_0x70
  bl        -0x10080C
  mr        r24, r3

.loc_0x70:
  lwz       r25, 0x10(r26)
  mr        r3, r30
  lwz       r27, 0x14(r26)
  mr        r7, r24
  mr        r5, r25
  mr        r6, r27
  bl        0x2ACE4
  mr        r3, r26
  addi      r4, r2, 0x1DA0
  crclr     6, 0x6
  bl        -0x3C7EDC
  lis       r3, 0x7465
  li        r0, 0x54
  addi      r3, r3, 0x7874
  xor       r3, r27, r3
  xor       r0, r25, r0
  or.       r0, r3, r0
  bne-      .loc_0xBC
  stw       r24, 0xD4(r31)

.loc_0xBC:
  lwz       r29, 0xDC(r26)
  cmplwi    r29, 0
  beq-      .loc_0x3A0
  subi      r29, r29, 0xC
  b         .loc_0x3A0

.loc_0xD0:
  lwz       r24, 0xC(r29)
  mr        r3, r24
  lwz       r12, 0x0(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x174
  lwz       r0, 0x18(r24)
  li        r3, 0
  lwz       r4, 0x1C(r24)
  xor       r0, r0, r3
  xor       r3, r4, r3
  or.       r0, r3, r0
  beq-      .loc_0x174
  li        r3, 0x48
  bl        -0x3E6028
  mr.       r25, r3
  beq-      .loc_0x128
  bl        -0x1008C4
  mr        r25, r3

.loc_0x128:
  lwz       r26, 0x10(r24)
  mr        r3, r30
  lwz       r27, 0x14(r24)
  mr        r7, r25
  mr        r5, r26
  mr        r6, r27
  bl        0x2AC2C
  mr        r3, r24
  addi      r4, r2, 0x1DA0
  crclr     6, 0x6
  bl        -0x3C7F94
  lis       r3, 0x7465
  li        r0, 0x54
  addi      r3, r3, 0x7874
  xor       r3, r27, r3
  xor       r0, r26, r0
  or.       r0, r3, r0
  bne-      .loc_0x174
  stw       r25, 0xD4(r31)

.loc_0x174:
  addi      r3, r24, 0xDC
  bl        -0x3E6310
  cmplwi    r3, 0
  beq-      .loc_0x188
  subi      r3, r3, 0xC

.loc_0x188:
  mr        r28, r3
  b         .loc_0x388

.loc_0x190:
  mr        r3, r28
  bl        -0x3D1610
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x238
  lwz       r0, 0x18(r27)
  li        r3, 0
  lwz       r4, 0x1C(r27)
  xor       r0, r0, r3
  xor       r3, r4, r3
  or.       r0, r3, r0
  beq-      .loc_0x238
  li        r3, 0x48
  bl        -0x3E60EC
  mr.       r24, r3
  beq-      .loc_0x1EC
  bl        -0x100988
  mr        r24, r3

.loc_0x1EC:
  lwz       r25, 0x10(r27)
  mr        r3, r30
  lwz       r26, 0x14(r27)
  mr        r7, r24
  mr        r5, r25
  mr        r6, r26
  bl        0x2AB68
  mr        r3, r27
  addi      r4, r2, 0x1DA0
  crclr     6, 0x6
  bl        -0x3C8058
  lis       r3, 0x7465
  li        r0, 0x54
  addi      r3, r3, 0x7874
  xor       r3, r26, r3
  xor       r0, r25, r0
  or.       r0, r3, r0
  bne-      .loc_0x238
  stw       r24, 0xD4(r31)

.loc_0x238:
  addi      r26, r27, 0xDC
  mr        r3, r26
  bl        -0x3D16D0
  stw       r3, 0xC(r1)
  b         .loc_0x364

.loc_0x24C:
  addi      r3, r1, 0xC
  bl        -0x106B20
  lwz       r12, 0x0(r3)
  mr        r27, r3
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x2FC
  mr        r3, r27
  bl        -0x100298
  li        r0, 0
  xor       r4, r4, r0
  xor       r0, r3, r0
  or.       r0, r4, r0
  beq-      .loc_0x2FC
  li        r3, 0x48
  bl        -0x3E61A8
  mr.       r23, r3
  beq-      .loc_0x2A8
  bl        -0x100A44
  mr        r23, r3

.loc_0x2A8:
  mr        r3, r27
  bl        -0x106B68
  mr        r25, r3
  mr        r24, r4
  mr        r3, r30
  mr        r7, r23
  mr        r6, r24
  mr        r5, r25
  bl        0x2AAA4
  mr        r3, r27
  addi      r4, r2, 0x1DA0
  crclr     6, 0x6
  bl        -0x3C811C
  lis       r3, 0x7465
  li        r0, 0x54
  addi      r3, r3, 0x7874
  xor       r3, r24, r3
  xor       r0, r25, r0
  or.       r0, r3, r0
  bne-      .loc_0x2FC
  stw       r23, 0xD4(r31)

.loc_0x2FC:
  mr        r3, r27
  bl        -0x106BC4
  mr        r27, r3
  bl        -0x3D1798
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x3D17B8
  b         .loc_0x33C

.loc_0x31C:
  addi      r3, r1, 0x8
  bl        -0x106BF0
  mr        r5, r3
  mr        r3, r31
  mr        r4, r30
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x3D17F8

.loc_0x33C:
  mr        r3, r27
  bl        -0x3D1808
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x3D182C
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x31C
  lwz       r3, 0xC(r1)
  bl        -0x3D1850
  stw       r3, 0xC(r1)

.loc_0x364:
  mr        r3, r26
  bl        -0x3D1830
  lwz       r0, 0xC(r1)
  cmplw     r0, r3
  bne+      .loc_0x24C
  lwz       r28, 0x18(r28)
  cmplwi    r28, 0
  beq-      .loc_0x388
  subi      r28, r28, 0xC

.loc_0x388:
  cmplwi    r28, 0
  bne+      .loc_0x190
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x3A0
  subi      r29, r29, 0xC

.loc_0x3A0:
  cmplwi    r29, 0
  bne+      .loc_0xD0
  lmw       r23, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A174
 * Size:	000024
 */
void setCallBackMessage__Q32kh6Screen19ObjDayEndResultMailFPQ29P2DScreen3Mgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r4
  stw       r0, 0x14(r1)
  bl        -0x3CC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A198
 * Size:	00005C
 */
void skipped__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0xBC(r31)
  lwz       r0, 0xB8(r31)
  sub       r0, r0, r4
  add       r3, r3, r0
  lbz       r0, 0x228(r3)
  extsb     r0, r0
  subfic    r0, r0, -0x2
  cntlzw    r0, r0
  rlwinm    r3,r0,27,5,31
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A1F4
 * Size:	000068
 */
void __ct__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x498E0
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x51E8
  lfs       f0, 0x1D48(r2)
  stw       r3, 0x0(r31)
  addi      r4, r3, 0x10
  mr        r3, r31
  stw       r4, 0x18(r31)
  stw       r0, 0x38(r31)
  stw       r0, 0x3C(r31)
  stw       r0, 0x40(r31)
  stfs      f0, 0x48(r31)
  stfs      f0, 0x44(r31)
  stw       r0, 0x4C(r31)
  stb       r0, 0x50(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A25C
 * Size:	0001BC
 */
void doCreate__Q32kh6Screen19ObjDayEndResultTitlFP10JKRArchive(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  mr        r31, r4
  stw       r30, 0x48(r1)
  subi      r30, r5, 0x77D0
  stw       r29, 0x44(r1)
  mr        r29, r3
  li        r3, 0x148
  bl        -0x3E63E4
  mr.       r0, r3
  beq-      .loc_0x40
  bl        0x2AB18
  mr        r0, r3

.loc_0x40:
  stw       r0, 0x38(r29)
  mr        r6, r31
  addi      r4, r30, 0x3B8
  lis       r5, 0x104
  lwz       r3, 0x38(r29)
  bl        -0x3CAC8C
  mr        r4, r31
  addi      r3, r30, 0x3D0
  bl        -0x3E72A4
  bl        -0x3C29A4
  stw       r3, 0x3C(r29)
  mr        r4, r31
  addi      r3, r30, 0x3E8
  bl        -0x3E72B8
  bl        -0x3C29B8
  stw       r3, 0x40(r29)
  lwz       r3, 0x38(r29)
  lwz       r4, 0x3C(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x60(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  lwz       r4, 0x40(r29)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r29)
  bl        0x13E0
  li        r5, 0x1
  li        r4, 0x7
  li        r3, 0x6
  li        r0, 0
  stb       r5, 0x14(r1)
  addi      r31, r1, 0x18
  lfd       f3, 0x398(r30)
  stb       r4, 0x15(r1)
  lfd       f2, 0x3A0(r30)
  stb       r3, 0x16(r1)
  lfd       f1, 0x3A8(r30)
  stb       r0, 0x17(r1)
  lfd       f0, 0x3B0(r30)
  lwz       r0, 0x14(r1)
  stfd      f3, 0x18(r1)
  lwz       r30, 0x38(r29)
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

.loc_0x128:
  lwz       r5, 0x0(r31)
  li        r3, 0
  lwz       r6, 0x4(r31)
  xor       r0, r5, r3
  xor       r3, r6, r3
  or.       r0, r3, r0
  beq-      .loc_0x1A0
  lwz       r12, 0x0(r30)
  mr        r3, r30
  lwz       r12, 0x3C(r12)
  mtctr     r12
  addi      r31, r31, 0x8
  bctrl     
  cmplwi    r3, 0
  beq+      .loc_0x128
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
  b         .loc_0x128

.loc_0x1A0:
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A418
 * Size:	000078
 */
void doUpdateFadein__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x34C
  lwz       r3, 0x38(r31)
  lbz       r4, 0x50(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  subi      r3, r13, 0x6548
  lbz       r4, 0x50(r31)
  lbz       r3, 0x4(r3)
  subfic    r0, r3, 0xFF
  cmpw      r4, r0
  ble-      .loc_0x58
  li        r0, 0xFF
  li        r3, 0x1
  stb       r0, 0x50(r31)
  b         .loc_0x64

.loc_0x58:
  add       r0, r4, r3
  li        r3, 0
  stb       r0, 0x50(r31)

.loc_0x64:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A490
 * Size:	000064
 */
void doUpdate__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x2D4
  lwz       r3, 0x4C(r31)
  addi      r3, r3, 0x1
  stw       r3, 0x4C(r31)
  lwz       r0, -0x6548(r13)
  cmplw     r3, r0
  bge-      .loc_0x44
  mr        r3, r31
  bl        0x49B7C
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,23,23
  beq-      .loc_0x4C

.loc_0x44:
  li        r3, 0x1
  b         .loc_0x50

.loc_0x4C:
  li        r3, 0

.loc_0x50:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A4F4
 * Size:	000074
 */
void doUpdateFadeout__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x270
  lwz       r3, 0x38(r31)
  lbz       r4, 0x50(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  subi      r3, r13, 0x6548
  lbz       r0, 0x50(r31)
  lbz       r3, 0x4(r3)
  cmplw     r0, r3
  bge-      .loc_0x54
  li        r0, 0
  li        r3, 0x1
  stb       r0, 0x50(r31)
  b         .loc_0x60

.loc_0x54:
  sub       r0, r0, r3
  li        r3, 0
  stb       r0, 0x50(r31)

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
 * Address:	8040A568
 * Size:	0000CC
 */
void doUpdateFadeoutFinish__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  bl        0x49A2C
  lis       r4, 0x804E
  li        r6, 0x1
  subi      r9, r4, 0x7B98
  lis       r4, 0x804E
  stw       r9, 0x8(r1)
  subi      r0, r4, 0x7588
  lis       r4, 0x804F
  lis       r7, 0x804E
  stw       r0, 0x8(r1)
  subi      r5, r4, 0x4FF0
  lis       r4, 0x804F
  li        r8, 0x4E23
  stw       r9, 0x10(r1)
  subi      r9, r7, 0x7BA8
  li        r7, 0
  subi      r0, r4, 0x50C8
  stw       r5, 0x8(r1)
  stw       r3, 0x1C(r1)
  mr        r3, r31
  stw       r9, 0x10(r1)
  stw       r8, 0x14(r1)
  stb       r7, 0x18(r1)
  stb       r6, 0x19(r1)
  stb       r6, 0xC(r1)
  stw       r0, 0x8(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x10
  bl        0x47938
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  addi      r4, r1, 0x8
  bl        0x47944

.loc_0xB8:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A634
 * Size:	000144
 */
void doDraw__Q32kh6Screen19ObjDayEndResultTitlFR8Graphics(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r4
  addi      r31, r29, 0xBC
  stw       r28, 0x40(r1)
  mr        r28, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0xFF
  mr        r3, r31
  stb       r0, 0x18(r1)
  addi      r4, r1, 0x8
  addi      r5, r1, 0xC
  addi      r6, r1, 0x10
  stb       r0, 0x19(r1)
  addi      r7, r1, 0x14
  stb       r0, 0x1A(r1)
  stb       r0, 0x1B(r1)
  lwz       r0, 0x18(r1)
  stw       r0, 0x14(r1)
  stw       r0, 0x10(r1)
  stw       r0, 0xC(r1)
  stw       r0, 0x8(r1)
  bl        -0x3D4020
  li        r3, 0
  bl        -0x321588
  li        r3, 0x1
  bl        -0x321564
  bl        0x18B64
  lhz       r30, 0x6(r3)
  bl        0x18B5C
  lhz       r4, 0x4(r3)
  lis       r0, 0x4330
  lfs       f3, 0x1D48(r2)
  mr        r3, r31
  stw       r4, 0x34(r1)
  addi      r4, r1, 0x1C
  lfd       f2, 0x1D68(r2)
  stw       r0, 0x30(r1)
  lfd       f0, 0x30(r1)
  stw       r30, 0x3C(r1)
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
  bl        -0x3D3F48
  li        r3, 0x1
  bl        -0x3215F8
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x38(r28)
  mr        r4, r29
  mr        r5, r31
  lwz       r12, 0x0(r3)
  lwz       r12, 0x9C(r12)
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
 * Address:	8040A778
 * Size:	0000E0
 */
void updateCommon__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  lfs       f0, 0x44(r3)
  lwz       r3, 0x3C(r3)
  stfs      f0, 0x8(r3)
  lfs       f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  stfs      f0, 0x8(r3)
  lwz       r3, 0x38(r31)
  bl        -0x3C9C7C
  lfs       f1, 0x44(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x44(r31)
  lwz       r3, 0x3C(r31)
  lfs       f2, 0x44(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x80
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x44(r31)

.loc_0x80:
  lfs       f1, 0x48(r31)
  lis       r0, 0x4330
  lfs       f0, 0x1D50(r2)
  stw       r0, 0x8(r1)
  fadds     f0, f1, f0
  lfd       f1, 0x1D58(r2)
  stfs      f0, 0x48(r31)
  lwz       r3, 0x40(r31)
  lfs       f2, 0x48(r31)
  lha       r0, 0x6(r3)
  xoris     r0, r0, 0x8000
  stw       r0, 0xC(r1)
  lfd       f0, 0x8(r1)
  fsubs     f0, f0, f1
  fcmpo     cr0, f2, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xCC
  lfs       f0, 0x1D48(r2)
  stfs      f0, 0x48(r31)

.loc_0xCC:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A858
 * Size:	000048
 */
void __ct__Q32kh6Screen21SceneDayEndResultMailFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x46F24
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0x5238
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x220(r31)
  stw       r0, 0x224(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040A8A0
 * Size:	00058C
 */
void doUserCallBackFunc__Q32kh6Screen21SceneDayEndResultMailFPQ28Resource10MgrCommand(void)
{
/*
.loc_0x0:
  stwu      r1, -0xD0(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0xD4(r1)
  stmw      r24, 0xB0(r1)
  subi      r30, r4, 0x77D0
  mr        r24, r3
  addi      r3, r1, 0x78
  addi      r4, r30, 0x400
  li        r28, 0
  bl        0x41D10
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x78
  bl        0x41E40
  cmplwi    r3, 0
  beq-      .loc_0x54
  lwz       r4, 0x34(r3)
  addi      r3, r30, 0x41C
  bl        -0x3E78D0
  mr        r28, r3
  b         .loc_0x68

.loc_0x54:
  addi      r3, r30, 0
  li        r4, 0xA72
  addi      r5, r2, 0x1DA4
  crclr     6, 0x6
  bl        -0x3E02C4

.loc_0x68:
  lwz       r7, -0x6B70(r13)
  li        r29, 0x4
  lwz       r27, 0x0(r28)
  lwz       r6, 0x84(r7)
  lwz       r5, 0x88(r7)
  rlwinm    r3,r27,2,0,29
  lwz       r4, 0x8C(r7)
  lwz       r0, 0x90(r7)
  stw       r6, 0x8(r1)
  stw       r5, 0xC(r1)
  stw       r4, 0x10(r1)
  stw       r0, 0x14(r1)
  bl        -0x3E698C
  stw       r3, 0x220(r24)
  li        r26, 0
  li        r31, 0
  b         .loc_0x168

.loc_0xAC:
  li        r3, 0x18
  bl        -0x3E6AAC
  cmplwi    r3, 0
  beq-      .loc_0x124
  add       r9, r28, r29
  srawi     r5, r26, 0x3
  lwz       r0, 0x0(r9)
  rlwinm    r7,r5,3,0,28
  lwz       r4, 0x4(r9)
  subfic    r6, r5, 0xF
  addi      r5, r1, 0x8
  sub       r7, r26, r7
  stw       r4, 0x4(r3)
  li        r8, 0x1
  lbzx      r4, r5, r6
  slw       r5, r8, r7
  stw       r0, 0x0(r3)
  addi      r0, r9, 0xC
  and       r6, r5, r4
  lbz       r4, 0x8(r9)
  neg       r5, r6
  or        r5, r5, r6
  stb       r4, 0x8(r3)
  rlwinm    r5,r5,1,31,31
  lbz       r4, 0x9(r9)
  stb       r4, 0x9(r3)
  lbz       r4, 0xA(r9)
  stb       r4, 0xA(r3)
  stw       r0, 0xC(r3)
  stb       r5, 0x10(r3)

.loc_0x124:
  lwz       r4, 0x220(r24)
  li        r5, 0
  stwx      r3, r4, r31
  lwz       r3, 0x220(r24)
  lwzx      r3, r3, r31
  lwz       r3, 0xC(r3)
  b         .loc_0x148

.loc_0x140:
  addi      r3, r3, 0x1
  addi      r5, r5, 0x1

.loc_0x148:
  lbz       r0, 0x0(r3)
  cmplwi    r0, 0
  bne+      .loc_0x140
  addi      r0, r5, 0x10
  addi      r31, r31, 0x4
  rlwinm    r0,r0,0,0,29
  addi      r26, r26, 0x1
  add       r29, r29, r0

.loc_0x168:
  cmplw     r26, r27
  blt+      .loc_0xAC
  lis       r5, 0x5253
  lis       r4, 0x44
  lwz       r3, 0x21C(r24)
  addi      r6, r5, 0x4C54
  addi      r5, r4, 0x455F
  li        r4, 0x4B48
  bl        -0xFB70C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x1A8
  addi      r3, r30, 0
  addi      r5, r30, 0xD0
  li        r4, 0xA82
  crclr     6, 0x6
  bl        -0x3E0404

.loc_0x1A8:
  lwz       r31, 0x21C(r24)
  lwz       r4, 0x4C(r31)
  cmplwi    r4, 0
  beq-      .loc_0x3E0
  lwz       r0, 0x50(r31)
  cmplwi    r0, 0
  bne-      .loc_0x3E0
  li        r3, -0x1
  li        r5, 0
  bl        -0x3E5CFC
  stw       r3, 0x50(r31)
  li        r26, -0x1
  li        r6, 0
  li        r5, 0
  mtctr     r27
  cmplwi    r27, 0
  ble-      .loc_0x230

.loc_0x1EC:
  lwz       r3, 0x220(r24)
  lwz       r4, 0x54(r31)
  lwzx      r3, r3, r5
  lbz       r0, 0x8(r3)
  cmpw      r4, r0
  bne-      .loc_0x224
  lbz       r0, 0x10(r3)
  cmplwi    r0, 0
  beq-      .loc_0x21C
  lbz       r0, 0x9(r3)
  extsb.    r0, r0
  bge-      .loc_0x224

.loc_0x21C:
  mr        r26, r6
  b         .loc_0x230

.loc_0x224:
  addi      r5, r5, 0x4
  addi      r6, r6, 0x1
  bdnz+     .loc_0x1EC

.loc_0x230:
  cmpwi     r26, -0x1
  bne-      .loc_0x24C
  addi      r3, r30, 0
  li        r4, 0xA96
  addi      r5, r2, 0x1DAC
  crclr     6, 0x6
  bl        -0x3E04A8

.loc_0x24C:
  rlwinm    r28,r26,2,0,29
  li        r25, 0
  li        r29, 0
  b         .loc_0x2F0

.loc_0x25C:
  lwz       r5, 0x220(r24)
  lwz       r3, 0x54(r31)
  lwzx      r4, r5, r29
  lbz       r0, 0x8(r4)
  cmpw      r3, r0
  bne-      .loc_0x2E8
  lbz       r0, 0x10(r4)
  cmplwi    r0, 0
  beq-      .loc_0x28C
  lbz       r0, 0x9(r4)
  extsb.    r0, r0
  bge-      .loc_0x2E8

.loc_0x28C:
  lwzx      r3, r28, r5
  lbz       r4, 0x9(r4)
  lbz       r0, 0x9(r3)
  extsb     r3, r4
  extsb     r0, r0
  cmpw      r3, r0
  bgt-      .loc_0x2E0
  bne-      .loc_0x2E8
  bl        -0x3415AC
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0xAC(r1)
  lfd       f3, 0x1D58(r2)
  stw       r0, 0xA8(r1)
  lfs       f1, 0x1DB4(r2)
  lfd       f2, 0xA8(r1)
  lfs       f0, 0x1D70(r2)
  fsubs     f2, f2, f3
  fdivs     f1, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2E8

.loc_0x2E0:
  mr        r26, r25
  b         .loc_0x2F8

.loc_0x2E8:
  addi      r29, r29, 0x4
  addi      r25, r25, 0x1

.loc_0x2F0:
  cmplw     r25, r27
  blt+      .loc_0x25C

.loc_0x2F8:
  stw       r26, 0x60(r31)
  lwz       r7, 0x60(r31)
  cmpwi     r7, 0x80
  bge-      .loc_0x330
  srawi     r0, r7, 0x3
  addi      r5, r1, 0x8
  subfic    r6, r0, 0xF
  li        r3, 0x1
  rlwinm    r0,r0,3,0,28
  lbzx      r4, r5, r6
  sub       r0, r7, r0
  slw       r0, r3, r0
  or        r0, r4, r0
  stbx      r0, r5, r6

.loc_0x330:
  lwz       r4, -0x6B70(r13)
  lwz       r3, 0x8(r1)
  lwz       r0, 0xC(r1)
  stw       r3, 0x84(r4)
  lwz       r3, 0x10(r1)
  stw       r0, 0x88(r4)
  lwz       r0, 0x14(r1)
  stw       r3, 0x8C(r4)
  stw       r0, 0x90(r4)
  lwz       r3, -0x6B70(r13)
  lwz       r0, 0x60(r31)
  addi      r3, r3, 0x84
  extsb     r4, r0
  bl        0x6588
  lwz       r6, -0x6B70(r13)
  addi      r3, r1, 0x48
  addi      r4, r30, 0x42C
  lwz       r5, 0x94(r6)
  lwz       r0, 0x98(r6)
  stw       r5, 0x228(r24)
  stw       r0, 0x22C(r24)
  lwz       r5, 0x9C(r6)
  lwz       r0, 0xA0(r6)
  stw       r5, 0x230(r24)
  stw       r0, 0x234(r24)
  lwz       r0, 0xA4(r6)
  stw       r0, 0x238(r24)
  bl        0x4199C
  lwz       r0, 0x50(r31)
  addi      r4, r1, 0x48
  lwz       r3, -0x63D8(r13)
  stw       r0, 0x60(r1)
  bl        0x41AC4
  cmplwi    r3, 0
  beq-      .loc_0x3C8
  lwz       r0, 0x34(r3)
  stw       r0, 0x224(r24)
  b         .loc_0x40C

.loc_0x3C8:
  addi      r3, r30, 0
  addi      r5, r30, 0x448
  li        r4, 0xABD
  crclr     6, 0x6
  bl        -0x3E0638
  b         .loc_0x40C

.loc_0x3E0:
  lwz       r4, -0x6B70(r13)
  lwz       r3, 0x94(r4)
  lwz       r0, 0x98(r4)
  stw       r3, 0x228(r24)
  stw       r0, 0x22C(r24)
  lwz       r3, 0x9C(r4)
  lwz       r0, 0xA0(r4)
  stw       r3, 0x230(r24)
  stw       r0, 0x234(r24)
  lwz       r0, 0xA4(r4)
  stw       r0, 0x238(r24)

.loc_0x40C:
  addi      r3, r24, 0x4
  addi      r4, r30, 0x454
  bl        -0xF2D68
  addi      r3, r1, 0x18
  addi      r4, r24, 0x4
  bl        0x41918
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x18
  bl        0x41A48
  mr.       r25, r3
  beq-      .loc_0x564
  li        r3, 0xEC
  bl        -0x3E6E38
  mr.       r26, r3
  beq-      .loc_0x550
  bl        0x48E00
  lis       r3, 0x804F
  lis       r4, 0x804F
  subi      r5, r3, 0x4F38
  lis       r3, 0x8051
  stw       r5, 0x0(r26)
  addi      r0, r5, 0x10
  subi      r6, r4, 0x5170
  li        r8, 0
  stw       r0, 0x18(r26)
  li        r7, 0xFF
  lfs       f1, 0x1D48(r2)
  addi      r5, r6, 0x10
  stw       r8, 0x38(r26)
  li        r4, 0x5
  li        r0, 0x1
  addi      r3, r3, 0x4134
  stw       r8, 0x3C(r26)
  stw       r8, 0x40(r26)
  stw       r8, 0x4C(r26)
  stw       r8, 0x50(r26)
  stw       r8, 0x54(r26)
  stw       r8, 0x58(r26)
  stw       r8, 0x5C(r26)
  stw       r8, 0x70(r26)
  stw       r8, 0x74(r26)
  stfs      f1, 0x78(r26)
  stfs      f1, 0x6C(r26)
  stfs      f1, 0x68(r26)
  stfs      f1, 0x64(r26)
  stfs      f1, 0x60(r26)
  stfs      f1, 0x48(r26)
  stfs      f1, 0x44(r26)
  stfs      f1, 0x88(r26)
  stfs      f1, 0x84(r26)
  stfs      f1, 0x80(r26)
  stfs      f1, 0x7C(r26)
  stw       r8, 0x8C(r26)
  stb       r7, 0x95(r26)
  stb       r7, 0x94(r26)
  stw       r8, 0x90(r26)
  stw       r6, 0x0(r26)
  stw       r5, 0x18(r26)
  stw       r4, 0x98(r26)
  stw       r8, 0x9C(r26)
  stw       r8, 0xA0(r26)
  stw       r8, 0xA4(r26)
  stw       r8, 0x4C(r26)
  stw       r8, 0xAC(r26)
  stw       r8, 0xA8(r26)
  stfs      f1, 0xB0(r26)
  stw       r8, 0xB4(r26)
  stw       r0, 0xBC(r26)
  stw       r0, 0xB8(r26)
  stw       r8, 0xC0(r26)
  stw       r8, 0xC4(r26)
  stw       r8, 0xC8(r26)
  stw       r8, 0xD0(r26)
  stw       r8, 0xCC(r26)
  stw       r8, 0xD4(r26)
  stfs      f1, 0xDC(r26)
  stfs      f1, 0xD8(r26)
  lfs       f0, 0x40(r3)
  stfs      f0, 0xE0(r26)
  stfs      f1, 0xE4(r26)
  stw       r8, 0xE8(r26)

.loc_0x550:
  lwz       r5, 0x34(r25)
  mr        r3, r24
  mr        r4, r26
  bl        0x46F78
  b         .loc_0x578

.loc_0x564:
  addi      r3, r30, 0
  li        r4, 0xACC
  addi      r5, r2, 0x1DA4
  crclr     6, 0x6
  bl        -0x3E07D4

.loc_0x578:
  lmw       r24, 0xB0(r1)
  lwz       r0, 0xD4(r1)
  mtlr      r0
  addi      r1, r1, 0xD0
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE2C
 * Size:	000008
 */
void getResName__Q32kh6Screen21SceneDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  addi      r3, r2, 0x1DA0
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE34
 * Size:	000008
 */
void getSceneType__Q32kh6Screen21SceneDayEndResultMailFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4E25
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE3C
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen21SceneDayEndResultMailFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE44
 * Size:	000014
 */
void getMemberID__Q32kh6Screen21SceneDayEndResultMailFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4D41
  lis       r3, 0x4445
  addi      r4, r4, 0x494C
  addi      r3, r3, 0x525F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE58
 * Size:	000004
 */
void doCreateObj__Q32kh6Screen21SceneDayEndResultMailFP10JKRArchive(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AE5C
 * Size:	0000AC
 */
void __dt__Q32kh6Screen19ObjDayEndResultTitlFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x51E8
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
  bl        0x6710
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3EDE98
  mr        r3, r30
  li        r4, 0
  bl        0x66B0

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3E6E34

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
 * Address:	8040AF08
 * Size:	0000C4
 */
void __dt__Q32kh6Screen19ObjDayEndResultMailFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x5170
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x4F38
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
  bl        0x664C
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3EDF5C
  mr        r3, r30
  li        r4, 0
  bl        0x65EC

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x3E6EF8

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
 * Address:	8040AFCC
 * Size:	000008
 */
void getFadeinUpMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D48(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFD4
 * Size:	000008
 */
void getFadeinUpMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DB8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFDC
 * Size:	000008
 */
void getFadeoutUpMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DBC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFE4
 * Size:	000008
 */
void getFadeoutUpMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DC0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFEC
 * Size:	000008
 */
void getFadeinDownMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DC4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFF4
 * Size:	000008
 */
void getFadeinDownMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DC8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040AFFC
 * Size:	000008
 */
void getFadeoutDownMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DCC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B004
 * Size:	000008
 */
void getFadeoutDownMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B00C
 * Size:	000008
 */
void getStarWTagNum__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x12
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B014
 * Size:	000008
 */
void getPStarWMinFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D48(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B01C
 * Size:	000008
 */
void getPStarWMaxFrm__Q32kh6Screen19ObjDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B024
 * Size:	000008
 */
void getClassSize__Q32kh6Screen20SArgDayEndResultItemFv(void)
{
/*
.loc_0x0:
  li        r3, 0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B02C
 * Size:	000008
 */
void getSceneType__Q32kh6Screen20SArgDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4E23
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B034
 * Size:	000008
 */
void getClassSize__Q32kh6Screen20SArgDayEndResultMailFv(void)
{
/*
.loc_0x0:
  li        r3, 0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B03C
 * Size:	000008
 */
void getSceneType__Q32kh6Screen20SArgDayEndResultMailCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4E25
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B044
 * Size:	0000C4
 */
void __dt__Q32kh6Screen19ObjDayEndResultIncPFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x50A8
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x4F38
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
  bl        0x6510
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3EE098
  mr        r3, r30
  li        r4, 0
  bl        0x64B0

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x3E7034

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
 * Address:	8040B108
 * Size:	000008
 */
void getFadeinUpMinFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D48(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B110
 * Size:	000008
 */
void getFadeinUpMaxFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D88(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B118
 * Size:	000008
 */
void getFadeoutUpMinFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B120
 * Size:	000008
 */
void getFadeoutUpMaxFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DDC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B128
 * Size:	000008
 */
void getFadeinDownMinFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DE0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B130
 * Size:	000008
 */
void getFadeinDownMaxFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DC8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B138
 * Size:	000008
 */
void getFadeoutDownMinFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DE4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B140
 * Size:	000008
 */
void getFadeoutDownMaxFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B148
 * Size:	000008
 */
void getStarWTagNum__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x13
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B150
 * Size:	000008
 */
void getPStarWMinFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D48(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B158
 * Size:	000008
 */
void getPStarWMaxFrm__Q32kh6Screen19ObjDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B160
 * Size:	000008
 */
void getClassSize__Q32kh6Screen20SArgDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  li        r3, 0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B168
 * Size:	000008
 */
void getSceneType__Q32kh6Screen20SArgDayEndResultIncPCFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4E24
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B170
 * Size:	000008
 */
void getClassSize__Q32kh6Screen20SArgDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  li        r3, 0x8
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B178
 * Size:	0000C4
 */
void __dt__Q32kh6Screen19ObjDayEndResultItemFv(void)
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
  lis       r4, 0x804F
  subi      r4, r4, 0x4FE0
  stw       r4, 0x0(r30)
  addi      r0, r4, 0x10
  stw       r0, 0x18(r30)
  beq-      .loc_0x98
  lis       r4, 0x804F
  subi      r4, r4, 0x4F38
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
  bl        0x63DC
  addi      r3, r30, 0x18
  li        r4, 0
  bl        -0x3EE1CC
  mr        r3, r30
  li        r4, 0
  bl        0x637C

.loc_0x98:
  extsh.    r0, r31
  ble-      .loc_0xA8
  mr        r3, r30
  bl        -0x3E7168

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
 * Address:	8040B23C
 * Size:	000008
 */
void getFadeinUpMinFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1D48(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B244
 * Size:	000008
 */
void getFadeinUpMaxFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DE8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B24C
 * Size:	000008
 */
void getFadeoutUpMinFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD8(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B254
 * Size:	000008
 */
void getFadeoutUpMaxFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DDC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B25C
 * Size:	000008
 */
void getFadeinDownMinFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DE0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B264
 * Size:	000008
 */
void getFadeinDownMaxFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DEC(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B26C
 * Size:	000008
 */
void getFadeoutDownMinFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DE4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B274
 * Size:	000008
 */
void getFadeoutDownMaxFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B27C
 * Size:	000008
 */
void getStarWTagNum__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  li        r3, 0xF
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B284
 * Size:	000008
 */
void getPStarWMinFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DF0(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B28C
 * Size:	000008
 */
void getPStarWMaxFrm__Q32kh6Screen19ObjDayEndResultItemCFv(void)
{
/*
.loc_0x0:
  lfs       f1, 0x1DD4(r2)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B294
 * Size:	000008
 */
void getSize__Q32kh6Screen20DispDayEndResultMailFv(void)
{
/*
.loc_0x0:
  li        r3, 0x24
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B29C
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen20DispDayEndResultMailFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2A4
 * Size:	000014
 */
void getMemberID__Q32kh6Screen20DispDayEndResultMailFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4D41
  lis       r3, 0x4445
  addi      r4, r4, 0x494C
  addi      r3, r3, 0x525F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2B8
 * Size:	000008
 */
void getSize__Q32kh6Screen20DispDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  li        r3, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2C0
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen20DispDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2C8
 * Size:	000014
 */
void getMemberID__Q32kh6Screen20DispDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x494E
  lis       r3, 0x4445
  addi      r4, r4, 0x4350
  addi      r3, r3, 0x525F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2DC
 * Size:	000008
 */
void getSize__Q32kh6Screen20DispDayEndResultItemFv(void)
{
/*
.loc_0x0:
  li        r3, 0x24
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2E4
 * Size:	000008
 */
void getOwnerID__Q32kh6Screen20DispDayEndResultItemFv(void)
{
/*
.loc_0x0:
  li        r3, 0x4B48
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B2EC
 * Size:	000014
 */
void getMemberID__Q32kh6Screen20DispDayEndResultItemFv(void)
{
/*
.loc_0x0:
  lis       r4, 0x4954
  lis       r3, 0x4445
  addi      r4, r4, 0x454D
  addi      r3, r3, 0x525F
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B300
 * Size:	0000CC
 */
void __sinit_khDayEndResult_cpp(void)
{
/*
.loc_0x0:
  lis       r3, 0x8051
  lfs       f12, 0x1DF4(r2)
  addi      r11, r3, 0x4134
  lfs       f9, 0x1D9C(r2)
  lfs       f10, 0x1D50(r2)
  li        r7, 0x5A
  lfs       f7, 0x1D48(r2)
  li        r10, 0x8
  lfs       f11, 0x1DF8(r2)
  li        r9, 0x3
  lfs       f8, 0x1DFC(r2)
  li        r8, 0x1E
  lfs       f6, 0x1E00(r2)
  li        r6, 0xA0
  lfs       f5, 0x1E04(r2)
  li        r5, 0x20
  lfs       f4, 0x1E08(r2)
  li        r4, 0x14
  lfs       f3, 0x1E0C(r2)
  li        r0, 0x10
  lfs       f2, 0x1E10(r2)
  subi      r3, r13, 0x6548
  lfs       f1, 0x1E14(r2)
  lfs       f0, 0x1E18(r2)
  stfs      f12, 0x0(r11)
  stfs      f11, 0x4(r11)
  stfs      f10, 0x8(r11)
  stfs      f10, 0xC(r11)
  stfs      f9, 0x10(r11)
  stw       r10, 0x24(r11)
  stw       r9, 0x28(r11)
  stb       r8, 0x4C(r11)
  stb       r7, 0x4D(r11)
  stb       r6, 0x4E(r11)
  stb       r5, 0x4F(r11)
  stb       r4, 0x50(r11)
  stfs      f8, 0x14(r11)
  stfs      f7, 0x18(r11)
  stfs      f7, 0x1C(r11)
  stfs      f6, 0x20(r11)
  stfs      f5, 0x2C(r11)
  stfs      f4, 0x30(r11)
  stfs      f3, 0x34(r11)
  stfs      f2, 0x38(r11)
  stfs      f1, 0x40(r11)
  stfs      f0, 0x48(r11)
  stfs      f9, 0x3C(r11)
  stfs      f9, 0x44(r11)
  stw       r7, -0x6548(r13)
  stb       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8040B3CC
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen19ObjDayEndResultBaseFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x7E00
*/
}

/*
 * --INFO--
 * Address:	8040B3D4
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen19ObjDayEndResultItemFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x260
*/
}

/*
 * --INFO--
 * Address:	8040B3DC
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen19ObjDayEndResultIncPFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x39C
*/
}

/*
 * --INFO--
 * Address:	8040B3E4
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen19ObjDayEndResultMailFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x4E0
*/
}

/*
 * --INFO--
 * Address:	8040B3EC
 * Size:	000008
 */
void @24@__dt__Q32kh6Screen19ObjDayEndResultTitlFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x18
  b         -0x594
*/
}