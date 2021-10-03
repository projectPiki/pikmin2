

/*
 * --INFO--
 * Address:	8030C9B0
 * Size:	000028
 */
void og::Sound::setSE( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BC6C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030C9D8
 * Size:	00002C
 */
void og::Sound::setLifeDanger(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1819
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BC40
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CA04
 * Size:	0000F4
 */
void og::Sound::setChimeNoon(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x1FD0
  li        r4, 0x1816
  stw       r30, 0x8(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BC04
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2E240C

.loc_0x4C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x6C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x2E242C

.loc_0x6C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x2E244C

.loc_0x8C:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xB0
  addi      r3, r31, 0x18
  addi      r5, r31, 0x24
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x2E2470

.loc_0xB0:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD0
  b         .loc_0xD4

.loc_0xD0:
  li        r30, 0

.loc_0xD4:
  mr        r3, r30
  bl        0x15D368
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
 * Address:	8030CAF8
 * Size:	00002C
 */
void og::Sound::setChime(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1815
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BB20
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CB24
 * Size:	00002C
 */
void og::Sound::setDecide(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1800
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BAF4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CB50
 * Size:	00002C
 */
void og::Sound::setCancel(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1801
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BAC8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CB7C
 * Size:	00002C
 */
void og::Sound::setCursor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1802
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BA9C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CBA8
 * Size:	00002C
 */
void og::Sound::setOpen(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1803
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BA70
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CBD4
 * Size:	00002C
 */
void og::Sound::setClose(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1804
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2BA44
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void og::Sound::setPause(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CC00
 * Size:	000048
 */
void og::Sound::setPlusMinus( (bool))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  rlwinm.   r0,r4,0,24,31
  beq-      .loc_0x28
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1020
  li        r5, 0
  bl        0x2BA10
  b         .loc_0x38

.loc_0x28:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1806
  li        r5, 0
  bl        0x2B9FC

.loc_0x38:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CC48
 * Size:	00002C
 */
void og::Sound::setSMenuLR(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1806
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B9D0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CC74
 * Size:	00002C
 */
void og::Sound::setError(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1807
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B9A4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CCA0
 * Size:	00002C
 */
void og::Sound::setZoomIn(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1008
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B978
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CCCC
 * Size:	00002C
 */
void og::Sound::setZoomOut(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1009
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B94C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CCF8
 * Size:	00002C
 */
void og::Sound::setScroll(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x100A
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B920
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CD24
 * Size:	00002C
 */
void og::Sound::setOpenDoukutu(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1811
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B8F4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CD50
 * Size:	00002C
 */
void og::Sound::setSaveCave(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x4006
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B8C8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CD7C
 * Size:	00002C
 */
void og::Sound::setOpenWMapMenu(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1811
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B89C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CDA8
 * Size:	00002C
 */
void og::Sound::setOpenTotalPoko(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1813
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B870
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CDD4
 * Size:	00002C
 */
void og::Sound::setCloseTotalPoko(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x181D
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B844
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CE00
 * Size:	00002C
 */
void og::Sound::setPlusTotalPoko(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1814
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B818
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CE2C
 * Size:	00002C
 */
void og::Sound::setOpenFinalMsg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1811
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B7EC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CE58
 * Size:	00002C
 */
void og::Sound::setSprayAdd(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1832
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B7C0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CE84
 * Size:	00002C
 */
void og::Sound::setTimeCarry(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1829
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B794
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void og::Sound::setSensorSE(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CEB0
 * Size:	00002C
 */
void og::Sound::setGetSensor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x187E
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B768
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CEDC
 * Size:	00002C
 */
void og::Sound::setFloorComplete(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1886
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B73C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CF08
 * Size:	00002C
 */
void og::Sound::setGraySensor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1881
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B710
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CF34
 * Size:	00002C
 */
void og::Sound::setGetSpray(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1880
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B6E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void og::Sound::setItemName(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CF60
 * Size:	00002C
 */
void og::Sound::setKanteiExit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1892
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B6B8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CF8C
 * Size:	000004
 */
void og::Sound::setFloorTitle(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CF90
 * Size:	00002C
 */
void og::Sound::setVsTitle(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x108B
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B688
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CFBC
 * Size:	00002C
 */
void og::Sound::setBdamaGet(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1889
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B65C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8030CFE8
 * Size:	000004
 */
void og::Sound::setNaviChange( (int))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void og::Sound::setVsTitleAbutton(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void og::Sound::stopSound(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8030CFEC
 * Size:	0000E0
 */
void og::Sound::setVsWin1P(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0xC001
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x1043
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x1FD0
  stw       r30, 0x8(r1)
  bl        0x15E760
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2E29F0

.loc_0x48:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x2E2A10

.loc_0x68:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x88
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x2E2A30

.loc_0x88:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xAC
  addi      r3, r31, 0x18
  addi      r5, r31, 0x24
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x2E2A54

.loc_0xAC:
  mr        r3, r30
  li        r4, 0x2
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  bl        0x15EE38
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
 * Address:	8030D0CC
 * Size:	0000E0
 */
void og::Sound::setVsWin2P(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0xC001
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x1044
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x1FD0
  stw       r30, 0x8(r1)
  bl        0x15E680
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2E2AD0

.loc_0x48:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x2E2AF0

.loc_0x68:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x88
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x2E2B10

.loc_0x88:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xAC
  addi      r3, r31, 0x18
  addi      r5, r31, 0x24
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x2E2B34

.loc_0xAC:
  mr        r3, r30
  li        r4, 0x2
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  bl        0x15ED58
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
 * Address:	8030D1AC
 * Size:	0000E0
 */
void og::Sound::setVsDraw(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0xC001
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x1045
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x1FD0
  stw       r30, 0x8(r1)
  bl        0x15E5A0
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x2E2BB0

.loc_0x48:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x68
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x2E2BD0

.loc_0x68:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x88
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x2E2BF0

.loc_0x88:
  lwz       r3, 0x4(r30)
  lwz       r30, 0x4(r3)
  cmplwi    r30, 0
  bne-      .loc_0xAC
  addi      r3, r31, 0x18
  addi      r5, r31, 0x24
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x2E2C14

.loc_0xAC:
  mr        r3, r30
  li        r4, 0x2
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  bl        0x15EC78
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
 * Address:	8030D28C
 * Size:	00002C
 */
void og::Sound::setWarning(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r4, 0x1893
  li        r5, 0
  stw       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  bl        0x2B38C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
