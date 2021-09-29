

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
 * Address:	802617E0
 * Size:	000098
 */
void __ct__Q34Game8MaroFrog3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x3C
  addi      r0, r31, 0x2E0
  lis       r3, 0x804B
  stw       r0, 0x17C(r31)
  subi      r3, r3, 0x5988
  li        r0, 0
  stw       r3, 0x2E0(r31)
  stw       r0, 0x2E4(r31)
  stw       r0, 0x2E8(r31)

.loc_0x3C:
  mr        r3, r31
  li        r4, 0
  bl        -0x92DC
  lis       r3, 0x804C
  addi      r0, r31, 0x2E0
  addi      r5, r3, 0x3B80
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r4, r5, 0x1B0
  addi      r5, r5, 0x304
  stw       r4, 0x178(r31)
  lwz       r4, 0x17C(r31)
  stw       r5, 0x0(r4)
  lwz       r4, 0x17C(r31)
  sub       r0, r0, r4
  stw       r0, 0xC(r4)
  bl        0x478
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
 * Address:	80261878
 * Size:	00045C
 */
void attackNaviPosition__Q34Game8MaroFrog3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x110(r1)
  mflr      r0
  stw       r0, 0x114(r1)
  stfd      f31, 0x100(r1)
  psq_st    f31,0x108(r1),0,0
  stfd      f30, 0xF0(r1)
  psq_st    f30,0xF8(r1),0,0
  stfd      f29, 0xE0(r1)
  psq_st    f29,0xE8(r1),0,0
  stfd      f28, 0xD0(r1)
  psq_st    f28,0xD8(r1),0,0
  stfd      f27, 0xC0(r1)
  psq_st    f27,0xC8(r1),0,0
  stfd      f26, 0xB0(r1)
  psq_st    f26,0xB8(r1),0,0
  stw       r31, 0xAC(r1)
  stw       r30, 0xA8(r1)
  stw       r29, 0xA4(r1)
  li        r4, 0
  lwz       r0, -0x6D20(r13)
  lis       r5, 0x804B
  stw       r4, 0x98(r1)
  subi      r5, r5, 0x434C
  cmplwi    r4, 0
  stw       r5, 0x8C(r1)
  mr        r31, r3
  stw       r4, 0x90(r1)
  stw       r0, 0x94(r1)
  bne-      .loc_0x90
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)
  b         .loc_0x3F0

.loc_0x90:
  mr        r3, r0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)
  b         .loc_0x100

.loc_0xAC:
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3F0
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)

.loc_0x100:
  lwz       r12, 0x8C(r1)
  addi      r3, r1, 0x8C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0xAC
  b         .loc_0x3F0

.loc_0x120:
  lwz       r3, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0x0(r3)
  mr        r30, r3
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x334
  mr        r4, r30
  lwz       r5, 0xC0(r31)
  lwz       r12, 0x0(r30)
  addi      r3, r1, 0x68
  lfs       f30, 0x58C(r5)
  lwz       r12, 0x8(r12)
  lfs       f31, 0x564(r5)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f2, 0x68(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x74
  lfs       f1, 0x6C(r1)
  lfs       f0, 0x70(r1)
  lwz       r12, 0x8(r12)
  stfs      f2, 0x50(r1)
  stfs      f1, 0x54(r1)
  stfs      f0, 0x58(r1)
  mtctr     r12
  bctrl     
  lfs       f5, 0x74(r1)
  lis       r3, 0x8051
  lfs       f3, 0x7C(r1)
  subi      r3, r3, 0x2E20
  lfs       f1, 0x50(r1)
  lfs       f0, 0x58(r1)
  lfs       f4, 0x78(r1)
  fsubs     f1, f1, f5
  fsubs     f2, f0, f3
  stfs      f5, 0x5C(r1)
  stfs      f4, 0x60(r1)
  stfs      f3, 0x64(r1)
  bl        -0x22C944
  bl        0x1B0180
  lwz       r12, 0x0(r31)
  fmr       f26, f1
  mr        r3, r31
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  fmr       f2, f1
  fmr       f1, f26
  bl        0x1B0188
  mr        r4, r31
  fmr       f28, f1
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x14
  li        r29, 0
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r30)
  lfs       f29, 0x14(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x8(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x2C
  fsubs     f26, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x20
  lwz       r12, 0x0(r30)
  lfs       f29, 0x30(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r31
  lfs       f0, 0x24(r1)
  lwz       r12, 0x0(r31)
  addi      r3, r1, 0x44
  fsubs     f27, f0, f29
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r30
  addi      r3, r1, 0x38
  lwz       r12, 0x0(r30)
  lfs       f29, 0x4C(r1)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  fmuls     f1, f27, f27
  lfs       f2, 0x40(r1)
  fmuls     f0, f31, f31
  fsubs     f2, f2, f29
  fmadds    f1, f26, f26, f1
  fmadds    f1, f2, f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0x2FC
  lfs       f0, -0x361C(r2)
  fabs      f2, f28
  lfs       f1, -0x3620(r2)
  fmuls     f0, f0, f30
  frsp      f2, f2
  fmuls     f0, f1, f0
  fcmpo     cr0, f2, f0
  cror      2, 0, 0x2
  bne-      .loc_0x2FC
  li        r29, 0x1

.loc_0x2FC:
  rlwinm.   r0,r29,0,24,31
  beq-      .loc_0x334
  mr        r4, r30
  addi      r3, r1, 0x80
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x84(r1)
  lfs       f2, 0x88(r1)
  lfs       f0, 0x80(r1)
  stfs      f0, 0x2C8(r31)
  stfs      f1, 0x2CC(r31)
  stfs      f2, 0x2D0(r31)

.loc_0x334:
  lwz       r0, 0x98(r1)
  cmplwi    r0, 0
  bne-      .loc_0x360
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)
  b         .loc_0x3F0

.loc_0x360:
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)
  b         .loc_0x3D4

.loc_0x380:
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x98(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3F0
  lwz       r3, 0x94(r1)
  lwz       r4, 0x90(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x90(r1)

.loc_0x3D4:
  lwz       r12, 0x8C(r1)
  addi      r3, r1, 0x8C
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x380

.loc_0x3F0:
  lwz       r3, 0x94(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x90(r1)
  cmplw     r4, r3
  bne+      .loc_0x120
  psq_l     f31,0x108(r1),0,0
  lfd       f31, 0x100(r1)
  psq_l     f30,0xF8(r1),0,0
  lfd       f30, 0xF0(r1)
  psq_l     f29,0xE8(r1),0,0
  lfd       f29, 0xE0(r1)
  psq_l     f28,0xD8(r1),0,0
  lfd       f28, 0xD0(r1)
  psq_l     f27,0xC8(r1),0,0
  lfd       f27, 0xC0(r1)
  psq_l     f26,0xB8(r1),0,0
  lfd       f26, 0xB0(r1)
  lwz       r31, 0xAC(r1)
  lwz       r30, 0xA8(r1)
  lwz       r0, 0x114(r1)
  lwz       r29, 0xA4(r1)
  mtlr      r0
  addi      r1, r1, 0x110
  blr
*/
}

/*
 * --INFO--
 * Address:	80261CD4
 * Size:	0000B0
 */
void createEffect__Q34Game8MaroFrog3ObjFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x14
  bl        -0x23DE48
  cmplwi    r3, 0
  beq-      .loc_0x98
  lis       r4, 0x804B
  lis       r5, 0x804A
  subi      r0, r4, 0x5808
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  subi      r0, r5, 0x1D84
  addi      r5, r4, 0x698C
  lis       r4, 0x804E
  stw       r0, 0x4(r3)
  addi      r7, r4, 0x6940
  lis       r4, 0x804C
  addi      r0, r5, 0x14
  stw       r5, 0x0(r3)
  addi      r4, r4, 0x245C
  li        r9, 0
  li        r8, 0x2B2
  stw       r0, 0x4(r3)
  addi      r6, r7, 0x14
  li        r5, 0x62
  addi      r0, r4, 0x14
  stw       r9, 0x8(r3)
  sth       r8, 0xC(r3)
  stb       r9, 0xE(r3)
  stw       r7, 0x0(r3)
  stw       r6, 0x4(r3)
  stw       r9, 0x10(r3)
  sth       r5, 0xC(r3)
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)

.loc_0x98:
  stw       r3, 0x2DC(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80261D84
 * Size:	000008
 */
void getEnemyTypeID__Q34Game8MaroFrog3ObjFv(void)
{
/*
.loc_0x0:
  li        r3, 0x12
  blr
*/
}