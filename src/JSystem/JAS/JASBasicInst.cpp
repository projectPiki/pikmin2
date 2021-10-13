

/*
 * --INFO--
 * Address:	80099888
 * Size:	000044
 */
void JASBasicInst::JASBasicInst()
{
	/*
	.loc_0x0:
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x3790
	  lfs       f0, -0x76B8(r2)
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x3778
	  li        r0, 0
	  stw       r4, 0x0(r3)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800998CC
 * Size:	000048
 */
void JASInst::~JASInst()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x3790
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x75844

	.loc_0x30:
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
 * Address:	80099914
 * Size:	00008C
 */
void JASBasicInst::~JASBasicInst()
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
	  beq-      .loc_0x70
	  lis       r4, 0x804A
	  lis       r3, 0x800A
	  addi      r0, r4, 0x3778
	  stw       r0, 0x0(r30)
	  subi      r4, r3, 0x62A0
	  lwz       r3, 0x20(r30)
	  bl        0x27DFC
	  lwz       r3, 0xC(r30)
	  bl        -0x7587C
	  lwz       r3, 0x14(r30)
	  bl        -0x75884
	  cmplwi    r30, 0
	  beq-      .loc_0x60
	  lis       r3, 0x804A
	  addi      r0, r3, 0x3790
	  stw       r0, 0x0(r30)

	.loc_0x60:
	  extsh.    r0, r31
	  ble-      .loc_0x70
	  mr        r3, r30
	  bl        -0x758CC

	.loc_0x70:
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
 * Address:	........
 * Size:	000038
 */
void JASBasicInst::searchKeymap(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800999A0
 * Size:	0001E8
 */
void JASBasicInst::getParam(int, int, JASInstParam*) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  li        r0, 0
	  stmw      r24, 0x10(r1)
	  mr        r24, r3
	  lwz       r28, 0xC(r3)
	  mr        r31, r6
	  lwz       r3, 0x14(r3)
	  mr        r25, r4
	  lfs       f1, 0x4(r24)
	  mr        r30, r5
	  lfs       f0, 0x8(r24)
	  li        r27, 0
	  lwz       r29, 0x10(r24)
	  stb       r0, 0x0(r6)
	  stb       r0, 0x24(r6)
	  lwz       r0, 0x18(r24)
	  stw       r3, 0x8(r6)
	  stw       r0, 0xC(r6)
	  stfs      f1, 0x10(r6)
	  stfs      f0, 0x14(r6)
	  b         .loc_0x114

	.loc_0x5C:
	  lwz       r26, 0x0(r28)
	  cmplwi    r26, 0
	  beq-      .loc_0x10C
	  mr        r3, r26
	  mr        r4, r25
	  lwz       r12, 0x0(r26)
	  mr        r5, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x4(r26)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xD4
	  bge-      .loc_0xA4
	  cmpwi     r0, 0
	  beq-      .loc_0xB4
	  bge-      .loc_0xC4
	  b         .loc_0x10C

	.loc_0xA4:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x100
	  bge-      .loc_0x10C
	  b         .loc_0xF0

	.loc_0xB4:
	  lfs       f0, 0x10(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x10(r31)
	  b         .loc_0x10C

	.loc_0xC4:
	  lfs       f0, 0x14(r31)
	  fmuls     f0, f0, f1
	  stfs      f0, 0x14(r31)
	  b         .loc_0x10C

	.loc_0xD4:
	  lfd       f0, -0x76B0(r2)
	  lfs       f2, 0x18(r31)
	  fsub      f0, f1, f0
	  fadd      f0, f2, f0
	  frsp      f0, f0
	  stfs      f0, 0x18(r31)
	  b         .loc_0x10C

	.loc_0xF0:
	  lfs       f0, 0x1C(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x1C(r31)
	  b         .loc_0x10C

	.loc_0x100:
	  lfs       f0, 0x20(r31)
	  fadds     f0, f0, f1
	  stfs      f0, 0x20(r31)

	.loc_0x10C:
	  addi      r28, r28, 0x4
	  addi      r27, r27, 0x1

	.loc_0x114:
	  cmplw     r27, r29
	  blt+      .loc_0x5C
	  lwz       r4, 0x20(r24)
	  li        r26, 0
	  lwz       r0, 0x1C(r24)
	  li        r5, 0
	  mr        r3, r4
	  mtctr     r0
	  cmplwi    r0, 0
	  ble-      .loc_0x160

	.loc_0x13C:
	  lwz       r0, 0x0(r3)
	  cmpw      r25, r0
	  bgt-      .loc_0x154
	  mulli     r0, r5, 0xC
	  add       r26, r4, r0
	  b         .loc_0x160

	.loc_0x154:
	  addi      r3, r3, 0xC
	  addi      r5, r5, 0x1
	  bdnz+     .loc_0x13C

	.loc_0x160:
	  cmplwi    r26, 0
	  bne-      .loc_0x170
	  li        r3, 0
	  b         .loc_0x1D4

	.loc_0x170:
	  li        r27, 0
	  b         .loc_0x1C4

	.loc_0x178:
	  mr        r3, r26
	  mr        r4, r27
	  bl        0x310
	  lwz       r0, 0x0(r3)
	  cmpw      r30, r0
	  bgt-      .loc_0x1C0
	  lfs       f1, 0x10(r31)
	  lfs       f0, 0x8(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x10(r31)
	  lfs       f1, 0x14(r31)
	  lfs       f0, 0xC(r3)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x14(r31)
	  lwz       r0, 0x4(r3)
	  li        r3, 0x1
	  stw       r0, 0x4(r31)
	  b         .loc_0x1D4

	.loc_0x1C0:
	  addi      r27, r27, 0x1

	.loc_0x1C4:
	  lwz       r0, 0x4(r26)
	  cmplw     r27, r0
	  blt+      .loc_0x178
	  li        r3, 0

	.loc_0x1D4:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099B88
 * Size:	000008
 */
void JASBasicInst::getKeymapIndex(int) const
{
	/*
	.loc_0x0:
	  mr        r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099B90
 * Size:	000084
 */
void JASBasicInst::setKeyRegionCount(unsigned long)
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
	  lis       r3, 0x800A
	  subi      r0, r3, 0x62A0
	  lwz       r3, 0x20(r30)
	  mr        r4, r0
	  bl        0x27B8C
	  bl        0x273C
	  mulli     r6, r31, 0xC
	  mr        r4, r3
	  li        r5, 0
	  addi      r3, r6, 0x10
	  bl        -0x75B8C
	  lis       r4, 0x800A
	  lis       r5, 0x800A
	  subi      r4, r4, 0x63EC
	  mr        r7, r31
	  subi      r5, r5, 0x62A0
	  li        r6, 0xC
	  bl        0x27E00
	  stw       r3, 0x20(r30)
	  stw       r31, 0x1C(r30)
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
 * Address:	80099C14
 * Size:	000018
 */
void JASBasicInst::TKeymap::__ct(void)
{
	/*
	.loc_0x0:
	  li        r4, -0x1
	  li        r0, 0
	  stw       r4, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099C2C
 * Size:	000078
 */
void JASBasicInst::setEffectCount(unsigned long)
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
	  lwz       r3, 0xC(r3)
	  bl        -0x75B74
	  cmplwi    r31, 0
	  stw       r31, 0x10(r30)
	  bne-      .loc_0x3C
	  li        r0, 0
	  stw       r0, 0xC(r30)
	  b         .loc_0x60

	.loc_0x3C:
	  bl        0x2694
	  mr        r4, r3
	  rlwinm    r3,r31,2,0,29
	  li        r5, 0
	  bl        -0x75C30
	  stw       r3, 0xC(r30)
	  rlwinm    r4,r31,2,0,29
	  lwz       r3, 0xC(r30)
	  bl        0xC5DC

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
 * Address:	80099CA4
 * Size:	000010
 */
void JASBasicInst::setEffect(int, JASInstEffect*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  rlwinm    r0,r4,2,0,29
	  stwx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getEffect(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099CB4
 * Size:	000078
 */
void JASBasicInst::setOscCount(unsigned long)
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
	  lwz       r3, 0x14(r3)
	  bl        -0x75BFC
	  cmplwi    r31, 0
	  stw       r31, 0x18(r30)
	  bne-      .loc_0x3C
	  li        r0, 0
	  stw       r0, 0x14(r30)
	  b         .loc_0x60

	.loc_0x3C:
	  bl        0x260C
	  mr        r4, r3
	  rlwinm    r3,r31,2,0,29
	  li        r5, 0
	  bl        -0x75CB8
	  stw       r3, 0x14(r30)
	  rlwinm    r4,r31,2,0,29
	  lwz       r3, 0x14(r30)
	  bl        0xC554

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
 * Address:	80099D2C
 * Size:	000010
 */
void JASBasicInst::setOsc(int, JASOscillator::Data*)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x14(r3)
	  rlwinm    r0,r4,2,0,29
	  stwx      r5, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getOsc(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099D3C
 * Size:	000024
 */
void JASBasicInst::getKeyRegion(int)
{
	/*
	.loc_0x0:
	  lwz       r0, 0x1C(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  mulli     r0, r4, 0xC
	  lwz       r3, 0x20(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void JASBasicInst::getKeyRegion(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80099D60
 * Size:	000054
 */
void JASBasicInst::TKeymap::__dt(void)
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
	  beq-      .loc_0x38
	  lwz       r3, 0x8(r30)
	  bl        -0x75CAC
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x75CE0

	.loc_0x38:
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
 * Address:	80099DB4
 * Size:	000058
 */
void JASBasicInst::TKeymap::setVeloRegionCount((unsigned long))
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
	  lwz       r3, 0x8(r3)
	  bl        -0x75CFC
	  bl        0x2524
	  mr        r4, r3
	  rlwinm    r3,r31,4,0,27
	  li        r5, 0
	  bl        -0x75DA0
	  stw       r3, 0x8(r30)
	  stw       r31, 0x4(r30)
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
 * Address:	80099E0C
 * Size:	000024
 */
void JASBasicInst::TKeymap::getVeloRegion((int))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r3, 0x8(r3)
	  rlwinm    r0,r4,4,0,27
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099E30
 * Size:	000024
 */
void JASBasicInst::TKeymap::getVeloRegion(const(int))
{
	/*
	.loc_0x0:
	  lwz       r0, 0x4(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x14
	  li        r3, 0
	  blr

	.loc_0x14:
	  lwz       r3, 0x8(r3)
	  rlwinm    r0,r4,4,0,27
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099E54
 * Size:	00000C
 */
void JASBasicInst::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x4253
	  addi      r3, r3, 0x4943
	  blr
	*/
}
