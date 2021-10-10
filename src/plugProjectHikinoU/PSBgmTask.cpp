

/*
 * --INFO--
 * Address:	8033E6B4
 * Size:	000124
 */
void PSSystem::ModParamWithFade::task((JASTrack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r0, 0x28(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  lwz       r0, 0x1C(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x80
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x1C(r30)
	  lis       r0, 0x4330
	  lfs       f0, 0x20(r30)
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x1E8(r2)
	  fsubs     f3, f0, f1
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fdivs     f0, f3, f0
	  stfs      f0, 0x24(r30)
	  lfs       f0, 0x24(r30)
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r30)
	  b         .loc_0x9C

	.loc_0x80:
	  lwz       r12, 0x0(r3)
	  lfs       f1, 0x20(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r3, -0x1
	  b         .loc_0x10C

	.loc_0x9C:
	  lwz       r3, 0x28(r30)
	  lwz       r0, 0x1C(r30)
	  cmplw     r3, r0
	  bge-      .loc_0xEC
	  lfs       f1, 0x2C(r30)
	  mr        r3, r30
	  lfs       f0, 0x24(r30)
	  mr        r4, r31
	  fadds     f0, f1, f0
	  stfs      f0, 0x2C(r30)
	  lwz       r12, 0x0(r30)
	  lfs       f1, 0x2C(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x28(r30)
	  li        r3, 0
	  addi      r0, r4, 0x1
	  stw       r0, 0x28(r30)
	  b         .loc_0x10C

	.loc_0xEC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lfs       f1, 0x20(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  li        r3, -0x1

	.loc_0x10C:
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
 * Address:	8033E7D8
 * Size:	0000F4
 */
void PSSystem::ModParamWithTableTask::task((JASTrack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lfs       f1, 0x24(r3)
	  lfs       f0, 0x20(r3)
	  fadds     f0, f1, f0
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x24(r3)
	  lwz       r12, 0x0(r3)
	  fctiwz    f0, f0
	  lwz       r12, 0x10(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r31, 0xC(r1)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r3,0,24,31
	  rlwinm    r0,r31,0,24,31
	  cmplw     r0, r3
	  blt-      .loc_0x9C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r3,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfd       f2, -0x1E8(r2)
	  stw       r0, 0x8(r1)
	  lfs       f0, 0x24(r29)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fsubs     f0, f0, f1
	  stfs      f0, 0x24(r29)

	.loc_0x9C:
	  lfs       f0, 0x24(r29)
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  fctiwz    f0, f0
	  lwz       r12, 0xC(r12)
	  stfd      f0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  mtctr     r12
	  bctrl
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x14(r12)
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
 * Address:	8033E8CC
 * Size:	000030
 */
void PSSystem::PitchModTask::tableTask((JASTrack&, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  li        r4, 0x1
	  stw       r0, 0x14(r1)
	  li        r5, -0x1
	  bl        -0x29DAEC
	  lwz       r0, 0x14(r1)
	  li        r3, -0x10
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E8FC
 * Size:	0000D4
 */
void PSSystem::OuterParamTask::getPreParam((JASTrack&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x30(r3)
	  cmpwi     r0, 0x8
	  beq-      .loc_0x8C
	  bge-      .loc_0x44
	  cmpwi     r0, 0x3
	  beq-      .loc_0xA4
	  bge-      .loc_0x38
	  cmpwi     r0, 0x1
	  beq-      .loc_0x5C
	  bge-      .loc_0x68
	  b         .loc_0xA4

	.loc_0x38:
	  cmpwi     r0, 0x5
	  bge-      .loc_0xA4
	  b         .loc_0x74

	.loc_0x44:
	  cmpwi     r0, 0x40
	  beq-      .loc_0x98
	  bge-      .loc_0xA4
	  cmpwi     r0, 0x10
	  beq-      .loc_0x80
	  b         .loc_0xA4

	.loc_0x5C:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0x4(r3)
	  b         .loc_0xC4

	.loc_0x68:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0x8(r3)
	  b         .loc_0xC4

	.loc_0x74:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0xC(r3)
	  b         .loc_0xC4

	.loc_0x80:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0x10(r3)
	  b         .loc_0xC4

	.loc_0x8C:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0x14(r3)
	  b         .loc_0xC4

	.loc_0x98:
	  lwz       r3, 0x33C(r4)
	  lfs       f1, 0x18(r3)
	  b         .loc_0xC4

	.loc_0xA4:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x10
	  li        r4, 0x87
	  addi      r5, r5, 0
	  crclr     6, 0x6
	  bl        -0x314378
	  lfs       f1, -0x1E0(r2)

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033E9D0
 * Size:	000098
 */
void PSSystem::OuterParamTask::timeTask((JASTrack&, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  fmr       f31, f1
	  lwz       r0, 0x30(r3)
	  mr        r31, r4
	  cmpwi     r0, 0x2
	  beq-      .loc_0x58
	  lfs       f0, -0x1E0(r2)
	  fcmpo     cr0, f31, f0
	  bge-      .loc_0x48
	  fmr       f31, f0
	  b         .loc_0x58

	.loc_0x48:
	  lfs       f0, -0x1DC(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x58
	  fmr       f31, f0

	.loc_0x58:
	  lwz       r3, 0x33C(r31)
	  rlwinm    r4,r0,0,16,31
	  bl        -0x2A24F4
	  lwz       r0, 0x30(r30)
	  fmr       f1, f31
	  lwz       r3, 0x33C(r31)
	  rlwinm    r4,r0,0,24,31
	  bl        -0x2A25A4
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033EA68
 * Size:	000028
 */
void PSSystem::SimpleWaitTask::task((JASTrack&))
{
	/*
	.loc_0x0:
	  lwz       r4, 0x1C(r3)
	  lwz       r0, 0x20(r3)
	  cmplw     r4, r0
	  blt-      .loc_0x18
	  li        r3, -0x1
	  blr

	.loc_0x18:
	  addi      r0, r4, 0x1
	  stw       r0, 0x1C(r3)
	  li        r3, -0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void PSSystem::BeatWaitTask::task((JASTrack&))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033EA90
 * Size:	000074
 */
void PSSystem::BankRandPrm::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r6, 0x804A
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  lis       r4, 0x804A
	  addi      r0, r4, 0x3838
	  addi      r6, r6, 0x3810
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lfs       f1, -0x1DC(r2)
	  li        r4, 0x1
	  stw       r6, 0x0(r3)
	  lfs       f0, -0x1E0(r2)
	  stb       r5, 0x4(r3)
	  stw       r0, 0x0(r3)
	  stfs      f1, 0x8(r3)
	  stfs      f0, 0xC(r3)
	  bl        -0x2A35F8
	  lfs       f1, -0x1DC(r2)
	  mr        r3, r31
	  lfs       f0, -0x1E0(r2)
	  stfs      f1, 0x8(r31)
	  stfs      f0, 0xC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
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
void PSSystem::BankRandPrm::initBankRandomize((int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void PSSystem::TaskEntry_BankRandTask::makeEntry((float, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033EB04
 * Size:	000080
 */
void PSSystem::TaskEntry_OuterParam::makeEntry((float, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r4
	  bl        -0x24FEF4
	  stfs      f31, 0x58(r30)
	  li        r3, 0x1
	  li        r0, 0
	  lfs       f0, -0x1E0(r2)
	  stw       r31, 0x54(r30)
	  stb       r3, 0x4C(r30)
	  stw       r0, 0x60(r30)
	  stfs      f0, 0x64(r30)
	  stfs      f0, 0x5C(r30)
	  bl        -0x24FF08
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0x914
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void PSSystem::TaskEntry_Wait_Volume::makeEntry((float, unsigned long,
                                                 unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033EB84
 * Size:	000054
 */
void PSSystem::TaskEntry_IdMask::makeEntry((unsigned char))
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
	  bl        -0x24FF68
	  stb       r31, 0x54(r30)
	  li        r0, 0x1
	  stb       r0, 0x4C(r30)
	  bl        -0x24FF64
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0x970
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
 * Address:	........
 * Size:	0000AC
 */
void PSSystem::TaskEntry_BeatWait_Volume::makeEntry(
    (PSSystem::BeatWaitTask::BeatAtt, float, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8033EBD8
 * Size:	000110
 */
void PSSystem::TaskEntry_PitMod::makeEntry((float, float, unsigned long))
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
	  mr.       r31, r4
	  fmr       f30, f1
	  fmr       f31, f2
	  mr        r30, r3
	  beq-      .loc_0xA0
	  bl        -0x24FFD8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x7C(r30)
	  stw       r31, 0x80(r30)
	  stb       r0, 0x74(r30)
	  bl        -0x24FFDC
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x75(r30)
	  addi      r4, r30, 0x60
	  bl        -0x9F0
	  bl        -0x250008
	  stfs      f30, 0x54(r30)
	  li        r0, 0x1
	  lfs       f0, -0x1E0(r2)
	  stfs      f31, 0x58(r30)
	  stb       r0, 0x4C(r30)
	  stfs      f0, 0x5C(r30)
	  bl        -0x250010
	  addi      r0, r30, 0x64
	  mr        r3, r30
	  stw       r0, 0x50(r30)
	  addi      r4, r30, 0x38
	  bl        -0xA24
	  b         .loc_0xCC

	.loc_0xA0:
	  bl        -0x250040
	  stfs      f30, 0x54(r30)
	  li        r0, 0x1
	  lfs       f0, -0x1E0(r2)
	  stfs      f31, 0x58(r30)
	  stb       r0, 0x4C(r30)
	  stfs      f0, 0x5C(r30)
	  bl        -0x250048
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0xA54

	.loc_0xCC:
	  bl        -0x25006C
	  li        r0, 0x1
	  stb       r0, 0x98(r30)
	  bl        -0x250064
	  mr        r3, r30
	  addi      r4, r30, 0x84
	  bl        -0xA70
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
 * Address:	8033ECE8
 * Size:	0000A4
 */
void PSSystem::TaskEntry_MuteVolume::makeEntry((float, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r4
	  bl        -0x2500D8
	  li        r3, 0
	  li        r0, 0x1
	  stb       r3, 0x54(r30)
	  stb       r0, 0x4C(r30)
	  bl        -0x2500D8
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0xAE4
	  bl        -0x2500FC
	  stfs      f31, 0x78(r30)
	  li        r3, 0x1
	  li        r0, 0
	  lfs       f0, -0x1E0(r2)
	  stw       r31, 0x74(r30)
	  stb       r3, 0x6C(r30)
	  stw       r0, 0x80(r30)
	  stfs      f0, 0x84(r30)
	  stfs      f0, 0x7C(r30)
	  bl        -0x250110
	  mr        r3, r30
	  addi      r4, r30, 0x58
	  bl        -0xB1C
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033ED8C
 * Size:	00008C
 */
void PSSystem::TaskEntry_MuteOnVolume::makeEntry((unsigned long))
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
	  bl        -0x250170
	  lfs       f0, -0x1E0(r2)
	  li        r3, 0x1
	  li        r0, 0
	  stfs      f0, 0x58(r30)
	  stw       r31, 0x54(r30)
	  stb       r3, 0x4C(r30)
	  stw       r0, 0x60(r30)
	  stfs      f0, 0x64(r30)
	  stfs      f0, 0x5C(r30)
	  bl        -0x250184
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0xB90
	  bl        -0x2501A8
	  li        r0, 0x1
	  stb       r0, 0x88(r30)
	  stb       r0, 0x80(r30)
	  bl        -0x2501A4
	  mr        r3, r30
	  addi      r4, r30, 0x6C
	  bl        -0xBB0
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
 * Address:	8033EE18
 * Size:	000080
 */
void PSSystem::TaskEntry_Tempo::makeEntry((float, unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  mr        r31, r4
	  bl        -0x250208
	  stfs      f31, 0x58(r30)
	  li        r3, 0x1
	  li        r0, 0
	  lfs       f0, -0x1E0(r2)
	  stw       r31, 0x54(r30)
	  stb       r3, 0x4C(r30)
	  stw       r0, 0x60(r30)
	  stfs      f0, 0x64(r30)
	  stfs      f0, 0x5C(r30)
	  bl        -0x25021C
	  mr        r3, r30
	  addi      r4, r30, 0x38
	  bl        -0xC28
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
