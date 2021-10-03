

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
 * Address:	........
 * Size:	00007C
 */
void efx::OnyonSpot::initAnimators( (Sys::MatTexAnimation *, Sys::MatTevRegAnimation *))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	802055A4
 * Size:	000024
 */
void efx::OnyonSpot::getLODSphere( (Sys::Sphere &))
{
/*
.loc_0x0:
  lfs       f1, 0x14(r3)
  lfs       f0, -0x45F0(r2)
  stfs      f1, 0x0(r4)
  lfs       f1, 0x24(r3)
  stfs      f1, 0x4(r4)
  lfs       f1, 0x34(r3)
  stfs      f1, 0x8(r4)
  stfs      f0, 0xC(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	802055C8
 * Size:	000054
 */
void efx::OnyonSpot::getLODCylinder( (Sys::Cylinder &))
{
/*
.loc_0x0:
  lfs       f0, 0x14(r3)
  lfs       f3, -0x45EC(r2)
  stfs      f0, 0x0(r4)
  lfs       f2, -0x45E8(r2)
  lfs       f0, 0x24(r3)
  lfs       f4, -0x45E4(r2)
  stfs      f0, 0x4(r4)
  lfs       f1, -0x45E0(r2)
  lfs       f5, 0x34(r3)
  lfs       f0, -0x45DC(r2)
  stfs      f5, 0x8(r4)
  stfs      f3, 0x1C(r4)
  stfs      f2, 0x18(r4)
  lfs       f3, 0x18(r4)
  lfs       f2, 0x4(r4)
  fmadds    f2, f4, f3, f2
  stfs      f2, 0x4(r4)
  stfs      f1, 0xC(r4)
  stfs      f0, 0x10(r4)
  stfs      f1, 0x14(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	8020561C
 * Size:	000050
 */
void efx::OnyonSpot::changeMaterial(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, -0x6C18(r13)
  bl        -0x5066C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x30
  lfs       f1, -0x45D8(r2)
  addi      r3, r31, 0x3C
  bl        0x22EF04

.loc_0x30:
  lfs       f1, -0x45E0(r2)
  addi      r3, r31, 0x48
  bl        0x22EEF8
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8020566C
 * Size:	0001A4
 */
void efx::OnyonSpotData::loadResources(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0x1C88
  li        r4, 0x1
  stw       r30, 0x18(r1)
  mr        r30, r3
  stw       r29, 0x14(r1)
  bl        0x237E74
  addi      r3, r31, 0x10
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x1EA578
  cmplwi    r3, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x34
  addi      r5, r31, 0x48
  li        r4, 0x5C
  crclr     6, 0x6
  bl        -0x1DB084

.loc_0x5C:
  addi      r3, r31, 0x54
  li        r4, 0
  bl        -0x1E26B8
  mr.       r29, r3
  bne-      .loc_0x84
  addi      r3, r31, 0x34
  addi      r5, r31, 0x48
  li        r4, 0x5F
  crclr     6, 0x6
  bl        -0x1DB0AC

.loc_0x84:
  mr        r3, r29
  lis       r4, 0x2102
  bl        -0x195E64
  lwz       r4, 0x1C(r30)
  li        r0, 0x1
  stw       r3, 0x0(r4)
  stw       r0, 0x20(r30)
  lwz       r29, 0x20(r30)
  rlwinm    r3,r29,4,0,27
  addi      r3, r3, 0x10
  bl        -0x1E176C
  lis       r4, 0x8043
  mr        r7, r29
  addi      r4, r4, 0x4134
  li        r5, 0
  li        r6, 0x10
  bl        -0x143D40
  stw       r3, 0x24(r30)
  li        r0, 0x3
  stw       r0, 0x28(r30)
  lwz       r29, 0x28(r30)
  mulli     r3, r29, 0x14
  addi      r3, r3, 0x10
  bl        -0x1E17A0
  lis       r4, 0x8043
  mr        r7, r29
  addi      r4, r4, 0x4240
  li        r5, 0
  li        r6, 0x14
  bl        -0x143D74
  stw       r3, 0x2C(r30)
  addi      r3, r31, 0x64
  li        r4, 0
  bl        -0x1E275C
  lwz       r5, 0x1C(r30)
  mr        r4, r3
  lwz       r3, 0x24(r30)
  lwz       r5, 0x0(r5)
  bl        0x22E898
  addi      r3, r31, 0x74
  li        r4, 0
  bl        -0x1E277C
  lwz       r5, 0x1C(r30)
  mr        r4, r3
  lwz       r3, 0x2C(r30)
  lwz       r5, 0x0(r5)
  bl        0x22E878
  addi      r3, r31, 0x88
  li        r4, 0
  bl        -0x1E279C
  lwz       r4, 0x1C(r30)
  lwz       r6, 0x2C(r30)
  lwz       r5, 0x0(r4)
  mr        r4, r3
  addi      r3, r6, 0x14
  bl        0x22E854
  addi      r3, r31, 0x9C
  li        r4, 0
  bl        -0x1E27C0
  lwz       r4, 0x1C(r30)
  lwz       r6, 0x2C(r30)
  lwz       r5, 0x0(r4)
  mr        r4, r3
  addi      r3, r6, 0x28
  bl        0x22E830
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
 * Address:	80205810
 * Size:	000180
 */
void efx::OnyonSpotData::onCreate( (ModelEffectCreateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stmw      r27, 0x3C(r1)
  mr        r29, r3
  mr        r30, r4
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r31, r3
  mr        r3, r30
  lwz       r12, 0x0(r30)
  mr        r28, r4
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  xor       r4, r4, r28
  xor       r0, r3, r31
  or.       r0, r4, r0
  beq-      .loc_0x70
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1CBC
  li        r4, 0x81
  addi      r5, r5, 0x1CD0
  crclr     6, 0x6
  bl        -0x1DB23C

.loc_0x70:
  li        r3, 0x14
  bl        -0x1E19E0
  mr.       r28, r3
  beq-      .loc_0x98
  lwz       r4, 0x1C(r29)
  li        r5, 0
  li        r6, 0x2
  lwz       r4, 0x0(r4)
  bl        0x238938
  mr        r28, r3

.loc_0x98:
  lwz       r27, 0x10(r30)
  li        r3, 0x54
  bl        -0x1E1A0C
  mr.       r31, r3
  beq-      .loc_0x100
  lis       r4, 0x804F
  lis       r3, 0x804C
  subi      r0, r4, 0x3454
  li        r5, 0x1
  stw       r0, 0x0(r31)
  li        r4, 0
  subi      r0, r3, 0x10D4
  addi      r3, r31, 0x3C
  stb       r5, 0x39(r31)
  stb       r5, 0x38(r31)
  stb       r4, 0x3A(r31)
  stw       r0, 0x0(r31)
  bl        0x22EA68
  lis       r4, 0x804F
  addi      r3, r31, 0x48
  subi      r0, r4, 0x3B74
  stw       r0, 0x3C(r31)
  bl        0x22EA54
  lis       r3, 0x804F
  subi      r0, r3, 0x3B74
  stw       r0, 0x48(r31)

.loc_0x100:
  stw       r28, 0x4(r31)
  addi      r3, r1, 0x8
  addi      r4, r30, 0x4
  bl        0x222F24
  addi      r3, r1, 0x8
  addi      r4, r31, 0x8
  bl        -0x11B65C
  mulli     r0, r27, 0x14
  lwz       r5, 0x2C(r29)
  lwz       r28, 0x24(r29)
  li        r4, 0
  lwz       r3, 0x4(r31)
  add       r29, r5, r0
  bl        0x238AD4
  addi      r3, r31, 0x48
  mr        r4, r29
  lwz       r12, 0x48(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x3C
  mr        r4, r28
  lwz       r12, 0x3C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	80205990
 * Size:	000014
 */
void efx::OnyonSpotData::getID(void)
{
/*
.loc_0x0:
  lis       r4, 0x5350
  lis       r3, 0x4F4E
  addi      r4, r4, 0x4F54
  addi      r3, r3, 0x595F
  blr
*/
}

/*
 * --INFO--
 * Address:	802059A4
 * Size:	000070
 */
void efx::OnyonSpotData::__dt(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804C
  subi      r0, r4, 0x10F0
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0xCEC
  stw       r0, 0x0(r30)
  bl        0x20BBA4

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x1E1940

.loc_0x54:
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
 * Address:	80205A14
 * Size:	000008
 */
void efx::OnyonSpot::useCylinderLOD(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80205A1C
 * Size:	000004
 */
void ModelEffect::constructor()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80205A20
 * Size:	000004
 */
void ModelEffect::doSimulation(float)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80205A24
 * Size:	000004
 */
void ModelEffect::doDirectDraw(Graphics &)
{
/*
.loc_0x0:
  blr
*/
}
