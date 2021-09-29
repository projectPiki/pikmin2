

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
 * Address:	803BA18C
 * Size:	00007C
 */
void create__Q25efx2d9T2DCursorFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f0, 0x1380(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r5, -0x6514(r13)
  lfs       f1, 0x54(r5)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x30
  li        r0, 0x1
  sth       r0, 0xC(r31)

.loc_0x30:
  mr        r3, r31
  bl        -0x320
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x64
  lfs       f0, 0x18(r31)
  li        r3, 0x1
  lwz       r4, 0x10(r31)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  b         .loc_0x68

.loc_0x64:
  li        r3, 0

.loc_0x68:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803BA208
 * Size:	00005C
 */
void create__Q25efx2d12T2DCountKiraFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x7F4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  lfs       f0, 0x14(r31)
  li        r3, 0x1
  lwz       r4, 0x10(r31)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  b         .loc_0x48

.loc_0x44:
  li        r3, 0

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void create__Q25efx2d18T2DSensorAct_forVSFPQ25efx2d3Arg(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803BA264
 * Size:	0000D8
 */
void create__Q25efx2d18T2DSensorGet_forVSFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0xC
  bl        -0x2EFBE8
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0x3B
  crclr     6, 0x6
  bl        -0x38FC88

.loc_0x68:
  mr        r3, r29
  mr        r4, r30
  bl        -0xA0C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB8
  lfs       f0, 0xC(r30)
  li        r3, 0x1
  lwz       r4, 0xC(r29)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  lwz       r4, 0x10(r29)
  stfs      f0, 0x98(r4)
  stfs      f0, 0x9C(r4)
  stfs      f0, 0xA0(r4)
  stfs      f0, 0xB0(r4)
  stfs      f0, 0xB4(r4)
  b         .loc_0xBC

.loc_0xB8:
  li        r3, 0

.loc_0xBC:
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
 * Address:	803BA33C
 * Size:	000140
 */
void create__Q25efx2d17T2DSprayset_forVSFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  lis       r4, 0x8049
  lwz       r12, 0x8(r29)
  mr        r3, r29
  addi      r30, r4, 0x5B68
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0x34
  bl        -0x2EFCC0
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r30, 0x18
  addi      r5, r30, 0x28
  li        r4, 0x4F
  crclr     6, 0x6
  bl        -0x38FD60

.loc_0x68:
  mr        r3, r31
  mr        r4, r29
  bl        -0xAE4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x120
  lwz       r4, 0x10(r29)
  li        r3, 0x1
  lwz       r0, 0x14(r29)
  lfs       f0, 0xC(r29)
  lwz       r5, 0xC(r31)
  stw       r4, 0xC(r1)
  stfs      f0, 0x98(r5)
  lbz       r4, 0xC(r1)
  stfs      f0, 0x9C(r5)
  lbz       r6, 0xD(r1)
  stfs      f0, 0xA0(r5)
  lbz       r7, 0xE(r1)
  stfs      f0, 0xB0(r5)
  stfs      f0, 0xB4(r5)
  lwz       r5, 0xC(r31)
  stw       r0, 0x8(r1)
  stb       r4, 0xB8(r5)
  lbz       r0, 0x8(r1)
  stb       r6, 0xB9(r5)
  lbz       r8, 0x9(r1)
  stb       r7, 0xBA(r5)
  lbz       r9, 0xA(r1)
  lwz       r5, 0xC(r31)
  stb       r0, 0xBC(r5)
  stb       r8, 0xBD(r5)
  stb       r9, 0xBE(r5)
  lwz       r5, 0x10(r31)
  stfs      f0, 0x98(r5)
  stfs      f0, 0x9C(r5)
  stfs      f0, 0xA0(r5)
  stfs      f0, 0xB0(r5)
  stfs      f0, 0xB4(r5)
  lwz       r5, 0x10(r31)
  stb       r4, 0xB8(r5)
  stb       r6, 0xB9(r5)
  stb       r7, 0xBA(r5)
  lwz       r5, 0x10(r31)
  stb       r0, 0xBC(r5)
  stb       r8, 0xBD(r5)
  stb       r9, 0xBE(r5)
  b         .loc_0x124

.loc_0x120:
  li        r3, 0

.loc_0x124:
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
 * Address:	803BA47C
 * Size:	0000C8
 */
void create__Q35efx2d10FileSelect13T2DFilecopiedFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x48
  bl        -0x2EFE00
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0x6F
  crclr     6, 0x6
  bl        -0x38FEA0

.loc_0x68:
  lwz       r0, 0xC(r30)
  mr        r3, r29
  mr        r4, r30
  stw       r0, 0x8(r1)
  bl        -0xCC4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r5, 0xC(r29)
  li        r3, 0x1
  lbz       r0, 0x8(r1)
  lbz       r4, 0x9(r1)
  stb       r0, 0xBC(r5)
  lbz       r0, 0xA(r1)
  stb       r4, 0xBD(r5)
  stb       r0, 0xBE(r5)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
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
 * Address:	803BA544
 * Size:	0000C8
 */
void create__Q35efx2d10FileSelect13T2DFiledeleteFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x48
  bl        -0x2EFEC8
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0x7F
  crclr     6, 0x6
  bl        -0x38FF68

.loc_0x68:
  lwz       r0, 0xC(r30)
  mr        r3, r29
  mr        r4, r30
  stw       r0, 0x8(r1)
  bl        -0xD8C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r5, 0xC(r29)
  li        r3, 0x1
  lbz       r0, 0x8(r1)
  lbz       r4, 0x9(r1)
  stb       r0, 0xBC(r5)
  lbz       r0, 0xA(r1)
  stb       r4, 0xBD(r5)
  stb       r0, 0xBE(r5)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
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
 * Address:	803BA60C
 * Size:	0000C8
 */
void create__Q35efx2d10FileSelect14T2DFiledeleteMFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  lis       r4, 0x8049
  stw       r29, 0x14(r1)
  mr        r29, r3
  mr        r3, r30
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x48
  bl        -0x2EFF90
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x68
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0x8F
  crclr     6, 0x6
  bl        -0x390030

.loc_0x68:
  lwz       r0, 0xC(r30)
  mr        r3, r29
  mr        r4, r30
  stw       r0, 0x8(r1)
  bl        -0xE54
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xA8
  lwz       r5, 0xC(r29)
  li        r3, 0x1
  lbz       r0, 0x8(r1)
  lbz       r4, 0x9(r1)
  stb       r0, 0xBC(r5)
  lbz       r0, 0xA(r1)
  stb       r4, 0xBD(r5)
  stb       r0, 0xBE(r5)
  b         .loc_0xAC

.loc_0xA8:
  li        r3, 0

.loc_0xAC:
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
 * Address:	803BA6D4
 * Size:	0001CC
 */
void create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x8(r30)
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0x54
  bl        -0x2F0060
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0xA0
  crclr     6, 0x6
  bl        -0x390100

.loc_0x70:
  lfs       f4, 0x4(r30)
  lfs       f0, 0x10(r30)
  lwz       r0, 0x14(r30)
  fsubs     f6, f0, f4
  lfs       f3, 0x0(r30)
  lfs       f0, 0xC(r30)
  lfs       f1, 0x1384(r2)
  fsubs     f5, f0, f3
  stw       r0, 0x8(r1)
  fmuls     f8, f6, f6
  fmadds    f2, f5, f5, f8
  fcmpo     cr0, f2, f1
  ble-      .loc_0xB8
  ble-      .loc_0xB4
  fsqrte    f0, f2
  fmuls     f1, f0, f2
  b         .loc_0xB8

.loc_0xB4:
  fmr       f1, f2

.loc_0xB8:
  lfs       f0, 0x1388(r2)
  lfs       f7, 0x1384(r2)
  fdivs     f31, f1, f0
  fadds     f0, f7, f2
  fcmpo     cr0, f0, f7
  ble-      .loc_0xEC
  fmadds    f0, f5, f5, f8
  fadds     f1, f7, f0
  fcmpo     cr0, f1, f7
  ble-      .loc_0xF0
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0xF0

.loc_0xEC:
  fmr       f1, f7

.loc_0xF0:
  lfs       f0, 0x1384(r2)
  fcmpo     cr0, f1, f0
  ble-      .loc_0x110
  lfs       f0, 0x138C(r2)
  fdivs     f0, f0, f1
  fmuls     f5, f5, f0
  fmuls     f6, f6, f0
  fmuls     f7, f7, f0

.loc_0x110:
  fneg      f2, f6
  lfs       f1, 0x1384(r2)
  lfs       f0, 0x138C(r2)
  mr        r3, r29
  stfs      f5, 0xC(r1)
  mr        r4, r30
  stfs      f2, 0x10(r1)
  stfs      f1, 0x14(r1)
  stfs      f3, 0x18(r1)
  stfs      f6, 0x1C(r1)
  stfs      f5, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f4, 0x28(r1)
  stfs      f7, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  stfs      f1, 0x38(r1)
  bl        -0xE00
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1A4
  lwz       r5, 0x10(r29)
  addi      r3, r1, 0xC
  lbz       r0, 0x8(r1)
  lbz       r4, 0x9(r1)
  stb       r0, 0xBC(r5)
  lbz       r0, 0xA(r1)
  stb       r4, 0xBD(r5)
  stb       r0, 0xBE(r5)
  lwz       r4, 0x10(r29)
  addi      r4, r4, 0x68
  bl        -0x326B68
  lwz       r4, 0x10(r29)
  li        r3, 0x1
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  b         .loc_0x1A8

.loc_0x1A4:
  li        r3, 0

.loc_0x1A8:
  psq_l     f31,0x58(r1),0,0
  lwz       r0, 0x64(r1)
  lfd       f31, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	803BA8A0
 * Size:	0000DC
 */
void create__Q35efx2d8WorldMap10T2DShstar2FPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x8(r30)
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0xC
  bl        -0x2F022C
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0xC9
  crclr     6, 0x6
  bl        -0x3902CC

.loc_0x70:
  lfs       f31, 0xC(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x10EC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xB4
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x8(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xC(r1)
  stfs      f31, 0x10(r1)
  stfs      f31, 0xB4(r4)
  b         .loc_0xB8

.loc_0xB4:
  li        r3, 0

.loc_0xB8:
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803BA97C
 * Size:	0000F4
 */
void create__Q35efx2d8WorldMap9T2DNewmapFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r30, r4
  mr        r29, r3
  mr        r3, r30
  lis       r4, 0x8049
  lwz       r12, 0x8(r30)
  addi      r31, r4, 0x5B68
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r31, 0xC
  bl        -0x2F0308
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  bne-      .loc_0x70
  addi      r3, r31, 0x18
  addi      r5, r31, 0x28
  li        r4, 0xDB
  crclr     6, 0x6
  bl        -0x3903A8

.loc_0x70:
  lfs       f31, 0xC(r30)
  mr        r3, r29
  mr        r4, r30
  bl        -0x1130
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  lwz       r4, 0xC(r29)
  li        r3, 0x1
  stfs      f31, 0x8(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0xB4(r4)
  lwz       r4, 0x10(r29)
  stfs      f31, 0xC(r1)
  stfs      f31, 0x98(r4)
  stfs      f31, 0x9C(r4)
  stfs      f31, 0xA0(r4)
  stfs      f31, 0xB0(r4)
  stfs      f31, 0x10(r1)
  stfs      f31, 0xB4(r4)
  b         .loc_0xD0

.loc_0xCC:
  li        r3, 0

.loc_0xD0:
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803BAA70
 * Size:	0000AC
 */
void create__Q35efx2d8WorldMap19TSimple_ArgDirScaleFPQ25efx2d3Arg(void)
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
  stfd      f29, 0x10(r1)
  psq_st    f29,0x18(r1),0,0
  stw       r31, 0xC(r1)
  lfs       f31, 0xC(r4)
  mr        r31, r3
  lfs       f30, 0x10(r4)
  lfs       f29, 0x14(r4)
  bl        -0x1278
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x7C
  lwz       r4, 0xC(r31)
  li        r3, 0x1
  lfs       f0, 0x1384(r2)
  stfs      f29, 0xB0(r4)
  stfs      f29, 0xB4(r4)
  lwz       r4, 0xC(r31)
  stfs      f29, 0x98(r4)
  stfs      f29, 0x9C(r4)
  stfs      f29, 0xA0(r4)
  lwz       r4, 0xC(r31)
  stfs      f31, 0x18(r4)
  stfs      f30, 0x1C(r4)
  stfs      f0, 0x20(r4)
  b         .loc_0x80

.loc_0x7C:
  li        r3, 0

.loc_0x80:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  psq_l     f29,0x18(r1),0,0
  lfd       f29, 0x10(r1)
  lwz       r0, 0x44(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	803BAB1C
 * Size:	00005C
 */
void create__Q35efx2d8WorldMap12T2DOnyonKiraFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0xB90
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  lwz       r4, 0x10(r31)
  li        r3, 0x1
  lfs       f0, 0x0(r4)
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x20(r31)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x24(r31)
  b         .loc_0x48

.loc_0x44:
  li        r3, 0

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803BAB78
 * Size:	000040
 */
void setGlobalParticleScale__Q35efx2d8WorldMap12T2DOnyonKiraFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0x10(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f0, 0x1C(r3)
  lfs       f2, 0x20(r3)
  lfs       f3, 0x24(r3)
  fmuls     f0, f0, f1
  fmuls     f2, f2, f1
  stfs      f1, 0xB0(r4)
  fmuls     f3, f3, f1
  stfs      f1, 0xB4(r4)
  lwz       r3, 0x10(r3)
  stfs      f0, 0x0(r3)
  stfs      f2, 0x4(r3)
  stfs      f3, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803BABB8
 * Size:	000018
 */
void setGlobalParticleScale__Q35efx2d8WorldMap13T2DRocketGlowFf(void)
{
/*
.loc_0x0:
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beqlr-    
  stfs      f1, 0xB0(r3)
  stfs      f1, 0xB4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803BABD0
 * Size:	00005C
 */
void create__Q35efx2d8WorldMap10T2DRocketBFPQ25efx2d3Arg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0xC44
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x44
  lwz       r4, 0x10(r31)
  li        r3, 0x1
  lfs       f0, 0x0(r4)
  stfs      f0, 0x1C(r31)
  lfs       f0, 0x4(r4)
  stfs      f0, 0x20(r31)
  lfs       f0, 0x8(r4)
  stfs      f0, 0x24(r31)
  b         .loc_0x48

.loc_0x44:
  li        r3, 0

.loc_0x48:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803BAC2C
 * Size:	000040
 */
void setGlobalParticleScale__Q35efx2d8WorldMap10T2DRocketBFf(void)
{
/*
.loc_0x0:
  lwz       r4, 0x10(r3)
  cmplwi    r4, 0
  beqlr-    
  lfs       f0, 0x1C(r3)
  lfs       f2, 0x20(r3)
  lfs       f3, 0x24(r3)
  fmuls     f0, f0, f1
  fmuls     f2, f2, f1
  stfs      f1, 0xB0(r4)
  fmuls     f3, f3, f1
  stfs      f1, 0xB4(r4)
  lwz       r3, 0x10(r3)
  stfs      f0, 0x0(r3)
  stfs      f2, 0x4(r3)
  stfs      f3, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803BAC6C
 * Size:	00009C
 */
void __dt__Q35efx2d8WorldMap10T2DRocketBFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x74A0
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x7390
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32B03C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x396C34

.loc_0x80:
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
 * Address:	803BAD08
 * Size:	00009C
 */
void __dt__Q35efx2d8WorldMap12T2DOnyonKiraFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x74DC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x7390
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32B0D8

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x396CD0

.loc_0x80:
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
 * Address:	803BADA4
 * Size:	000084
 */
void __dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804E
  addi      r3, r3, 0x7560
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32B15C

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x396D54

.loc_0x68:
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
 * Address:	803BAE28
 * Size:	000084
 */
void __dt__Q25efx2d12T2DCountKiraFv(void)
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
  beq-      .loc_0x68
  lis       r3, 0x804E
  addi      r3, r3, 0x7610
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x58
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32B1E0

.loc_0x58:
  extsh.    r0, r31
  ble-      .loc_0x68
  mr        r3, r30
  bl        -0x396DD8

.loc_0x68:
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
 * Address:	803BAEAC
 * Size:	00009C
 */
void __dt__Q25efx2d9T2DCursorFv(void)
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
  beq-      .loc_0x80
  lis       r3, 0x804E
  addi      r3, r3, 0x7648
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r3, 0x804E
  addi      r3, r3, 0x73CC
  stw       r3, 0x0(r30)
  addi      r0, r3, 0x18
  stw       r0, 0x8(r30)
  beq-      .loc_0x70
  lis       r4, 0x804E
  addi      r3, r30, 0x8
  addi      r5, r4, 0x7420
  li        r4, 0
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x18
  stw       r0, 0x8(r30)
  bl        -0x32B27C

.loc_0x70:
  extsh.    r0, r31
  ble-      .loc_0x80
  mr        r3, r30
  bl        -0x396E74

.loc_0x80:
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
 * Address:	803BAF48
 * Size:	000008
 */
void @8@__dt__Q25efx2d9T2DCursorFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0xA0
*/
}

/*
 * --INFO--
 * Address:	803BAF50
 * Size:	000008
 */
void @8@__dt__Q25efx2d12T2DCountKiraFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x12C
*/
}

/*
 * --INFO--
 * Address:	803BAF58
 * Size:	000008
 */
void @8@__dt__Q35efx2d10FileSelect15T2DFilecopyBaseFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x1B8
*/
}

/*
 * --INFO--
 * Address:	803BAF60
 * Size:	000008
 */
void @8@__dt__Q35efx2d8WorldMap12T2DOnyonKiraFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x25C
*/
}

/*
 * --INFO--
 * Address:	803BAF68
 * Size:	000008
 */
void @8@__dt__Q35efx2d8WorldMap10T2DRocketBFv(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x8
  b         -0x300
*/
}