

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
 * Address:	8043D49C
 * Size:	00006C
 */
void ModelEffectData::entry()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x65E8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x4C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x53E0
  li        r4, 0x2C
  subi      r5, r5, 0x53D0
  crclr     6, 0x6
  bl        -0x412EA4

.loc_0x4C:
  lwz       r3, -0x65E8(r13)
  mr        r4, r31
  bl        0x124
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
 * Size:	000090
 */
void ModelEffectData::create(ModelEffectCreateArg *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D508
 * Size:	00010C
 */
void ModelEffectData::allocModelData(int)
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
  stw       r31, 0x18(r3)
  lwz       r0, 0x18(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x419584
  cmpwi     r31, 0
  stw       r3, 0x1C(r30)
  li        r12, 0
  ble-      .loc_0xF4
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0xCC
  addi      r0, r3, 0x7
  li        r11, 0
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0
  ble-      .loc_0xCC

.loc_0x60:
  lwz       r3, 0x1C(r30)
  li        r10, 0
  addi      r8, r11, 0x4
  addi      r7, r11, 0x8
  stwx      r10, r3, r11
  addi      r6, r11, 0xC
  addi      r5, r11, 0x10
  addi      r4, r11, 0x14
  lwz       r9, 0x1C(r30)
  addi      r3, r11, 0x18
  addi      r0, r11, 0x1C
  addi      r11, r11, 0x20
  stwx      r10, r9, r8
  addi      r12, r12, 0x8
  lwz       r8, 0x1C(r30)
  stwx      r10, r8, r7
  lwz       r7, 0x1C(r30)
  stwx      r10, r7, r6
  lwz       r6, 0x1C(r30)
  stwx      r10, r6, r5
  lwz       r5, 0x1C(r30)
  stwx      r10, r5, r4
  lwz       r4, 0x1C(r30)
  stwx      r10, r4, r3
  lwz       r3, 0x1C(r30)
  stwx      r10, r3, r0
  bdnz+     .loc_0x60

.loc_0xCC:
  sub       r0, r31, r12
  rlwinm    r5,r12,2,0,29
  li        r4, 0
  mtctr     r0
  cmpw      r12, r31
  bge-      .loc_0xF4

.loc_0xE4:
  lwz       r3, 0x1C(r30)
  stwx      r4, r3, r5
  addi      r5, r5, 0x4
  bdnz+     .loc_0xE4

.loc_0xF4:
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
 * Address:	8043D614
 * Size:	000024
 */
void ParticleMgr::entryModelEffect(ModelEffectData *)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x60
  stw       r0, 0x14(r1)
  bl        -0x2C21C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void ParticleMgr::getModelEffectData(unsigned long long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D638
 * Size:	00011C
 */
void ParticleMgr::createModelEffect(ModelEffectCreateArg *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  mr        r28, r4
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r29, 0x70(r29)
  mr        r30, r4
  mr        r31, r3
  b         .loc_0x74

.loc_0x48:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  xor       r4, r30, r4
  xor       r0, r31, r3
  or.       r0, r4, r0
  bne-      .loc_0x70
  b         .loc_0x80

.loc_0x70:
  lwz       r29, 0x4(r29)

.loc_0x74:
  cmplwi    r29, 0
  bne+      .loc_0x48
  li        r29, 0

.loc_0x80:
  cmplwi    r29, 0
  beq-      .loc_0xF8
  mr        r3, r29
  mr        r4, r28
  lwz       r12, 0x0(r29)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  mr.       r29, r3
  beq-      .loc_0xF0
  li        r3, 0x1C
  bl        -0x419840
  mr.       r30, r3
  beq-      .loc_0xCC
  bl        -0x2C360
  lis       r3, 0x804E
  addi      r0, r3, 0x76D8
  stw       r0, 0x0(r30)
  stw       r29, 0x18(r30)

.loc_0xCC:
  lwz       r3, -0x65E8(r13)
  mr        r4, r30
  addi      r3, r3, 0x3C
  bl        -0x2C308
  lwz       r3, 0x18(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xF0:
  mr        r3, r29
  b         .loc_0xFC

.loc_0xF8:
  li        r3, 0

.loc_0xFC:
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
 * Size:	000178
 */
void ParticleMgr::testCreateModelEffect(int, int, Vector3<float> &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043D754
 * Size:	0001A8
 */
void ModelEffect::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r3
  stw       r28, 0x40(r1)
  lwz       r4, 0x4(r3)
  addi      r3, r29, 0x8
  lwz       r4, 0x8(r4)
  addi      r4, r4, 0x24
  bl        -0x3534B8
  lwz       r3, 0x4(r29)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lbz       r0, 0x3A(r29)
  cmplwi    r0, 0
  beq-      .loc_0x88
  li        r5, 0
  li        r4, 0
  b         .loc_0x70

.loc_0x64:
  addi      r0, r5, 0x38
  addi      r5, r5, 0x1
  stbx      r4, r29, r0

.loc_0x70:
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  lwz       r0, 0x264(r3)
  cmpw      r5, r0
  blt+      .loc_0x64
  b         .loc_0x188

.loc_0x88:
  mr        r3, r29
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  li        r30, 0
  lwz       r31, 0x24(r3)
  b         .loc_0x17C

.loc_0xB0:
  mr        r3, r31
  mr        r4, r30
  bl        -0x1821C
  mr        r28, r3
  bl        -0x185D4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xDC
  addi      r0, r30, 0x38
  li        r3, 0
  stbx      r3, r29, r0
  b         .loc_0x178

.loc_0xDC:
  mr        r3, r29
  lwz       r28, 0x44(r28)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x148
  mr        r3, r29
  addi      r4, r1, 0x18
  lwz       r12, 0x0(r29)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  mr        r3, r28
  addi      r4, r1, 0x18
  bl        -0x23670
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x138
  addi      r0, r30, 0x38
  li        r3, 0x1
  stbx      r3, r29, r0
  b         .loc_0x178

.loc_0x138:
  addi      r0, r30, 0x38
  li        r3, 0
  stbx      r3, r29, r0
  b         .loc_0x178

.loc_0x148:
  mr        r3, r28
  addi      r4, r1, 0x8
  bl        -0x23714
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x16C
  addi      r0, r30, 0x38
  li        r3, 0x1
  stbx      r3, r29, r0
  b         .loc_0x178

.loc_0x16C:
  addi      r0, r30, 0x38
  li        r3, 0
  stbx      r3, r29, r0

.loc_0x178:
  addi      r30, r30, 0x1

.loc_0x17C:
  lwz       r0, 0x264(r31)
  cmpw      r30, r0
  blt+      .loc_0xB0

.loc_0x188:
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
 * Address:	8043D8FC
 * Size:	000004
 */
void ModelEffect::getLODCylinder(Sys::Cylinder &)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8043D900
 * Size:	000008
 */
void ModelEffect::useCylinderLOD()
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	8043D908
 * Size:	000098
 */
void ModelEffect::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x38(r3)
  cmplwi    r0, 0
  bne-      .loc_0x2C
  lbz       r0, 0x39(r31)
  cmplwi    r0, 0
  beq-      .loc_0x44

.loc_0x2C:
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x58

.loc_0x44:
  lwz       r3, 0x4(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x58:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x4(r31)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
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
 * Address:	8043D9A0
 * Size:	000004
 */
void ModelEffect::changeMaterial()
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8043D9A4
 * Size:	000078
 */
void ModelEffect::doSetView(int)
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
  lwz       r3, 0x4(r3)
  bl        0x16FC
  add       r3, r30, r31
  lbz       r0, 0x38(r3)
  cmplwi    r0, 0
  beq-      .loc_0x4C
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x60

.loc_0x4C:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
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
 * Address:	8043DA1C
 * Size:	000024
 */
void ModelEffect::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  bl        0x162C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DA40
 * Size:	00002C
 */
void ParticleMgr::doAnimation()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x1C(r3)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DA6C
 * Size:	00002C
 */
void ParticleMgr::doEntry()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x1C(r3)
  lwz       r12, 0x68(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DA98
 * Size:	00002C
 */
void ParticleMgr::doSetView(int)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x1C(r3)
  lwz       r12, 0x6C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DAC4
 * Size:	00002C
 */
void ParticleMgr::doViewCalc()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwzu      r12, 0x1C(r3)
  lwz       r12, 0x70(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8043DAF0
 * Size:	000028
 */
void __sinit_modelEffect_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6420(r13)
  stfsu     f0, -0x3460(r3)
  stfs      f0, -0x641C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}