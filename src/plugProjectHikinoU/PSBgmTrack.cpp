

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void __ct__Q28PSSystem7BeatMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void setBeatOn__Q28PSSystem7BeatMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803422A8
 * Size:	00002C
 */
void proc__Q28PSSystem7BeatMgrFv(void)
{
/*
.loc_0x0:
  lbz       r4, 0x0(r3)
  rlwinm.   r0,r4,0,25,25
  beq-      .loc_0x18
  rlwinm    r0,r4,0,31,31
  stb       r0, 0x0(r3)
  blr       

.loc_0x18:
  rlwinm.   r0,r4,0,24,24
  beqlr-    
  ori       r0, r4, 0x40
  stb       r0, 0x0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __ct__Q28PSSystem12SeqTrackBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void __dt__Q28PSSystem12TaskEntryMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __dt__Q28PSSystem32MutexList<PSSystem::TaskEntry>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<PSSystem::TaskEntry>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803422D4
 * Size:	000028
 */
void update__Q28PSSystem12SeqTrackBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x4
  stw       r0, 0x14(r1)
  bl        -0x4040
  lwz       r0, 0x14(r1)
  li        r3, 0
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803422FC
 * Size:	000008
 */
void init__Q28PSSystem12SeqTrackBaseFP8JASTrack(void)
{
/*
.loc_0x0:
  stw       r4, 0x28(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80342304
 * Size:	000008
 */
void getTaskEntryList__Q28PSSystem12SeqTrackBaseFv(void)
{
/*
.loc_0x0:
  addi      r3, r3, 0x4
  blr
*/
}

/*
 * --INFO--
 * Address:	8034230C
 * Size:	0003A4
 */
void __ct__Q28PSSystem12SeqTrackRootFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804E
  stw       r0, 0x24(r1)
  subi      r0, r4, 0x5078
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  addi      r30, r31, 0x4
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  stw       r0, 0x0(r3)
  mr        r3, r30
  bl        -0x31BA70
  addi      r3, r30, 0xC
  bl        -0x252818
  li        r4, 0
  lis       r3, 0x804E
  stw       r4, 0x24(r30)
  subi      r0, r3, 0x5094
  addi      r29, r31, 0x40
  lfs       f0, -0x188(r2)
  stw       r0, 0x0(r31)
  li        r0, 0x3C
  mr        r30, r29
  mr        r3, r29
  stfs      f0, 0x34(r31)
  stw       r4, 0x38(r31)
  stb       r4, 0x3C(r31)
  sth       r0, 0x3E(r31)
  bl        -0x31BAB4
  addi      r3, r30, 0xC
  bl        -0x25285C
  li        r0, 0
  mr        r4, r29
  stw       r0, 0x24(r29)
  addi      r3, r29, 0x28
  bl        -0x31BBE8
  addi      r30, r29, 0x38
  mr        r3, r30
  bl        -0x41B4
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  addi      r28, r29, 0x6C
  stw       r0, 0x0(r30)
  li        r5, 0
  lfs       f0, -0x184(r2)
  subi      r4, r3, 0x5274
  stw       r5, 0x1C(r30)
  li        r0, 0x40
  mr        r3, r28
  stfs      f0, 0x20(r30)
  stfs      f0, 0x24(r30)
  stw       r5, 0x28(r30)
  stfs      f0, 0x2C(r30)
  stw       r4, 0x0(r30)
  stw       r0, 0x30(r30)
  bl        -0x41FC
  lis       r3, 0x804E
  addi      r29, r29, 0x8C
  subi      r3, r3, 0x5AEC
  li        r0, -0x10
  stw       r3, 0x0(r28)
  mr        r3, r29
  stw       r0, 0x1C(r28)
  bl        -0x421C
  lis       r3, 0x804E
  addi      r28, r31, 0x100
  subi      r0, r3, 0x5230
  li        r5, 0
  stw       r0, 0x0(r29)
  lis       r3, 0x804E
  subi      r4, r3, 0x5274
  lfs       f0, -0x184(r2)
  stw       r5, 0x1C(r29)
  li        r0, 0x40
  mr        r30, r28
  mr        r3, r28
  stfs      f0, 0x20(r29)
  stfs      f0, 0x24(r29)
  stw       r5, 0x28(r29)
  stfs      f0, 0x2C(r29)
  stw       r4, 0x0(r29)
  stw       r0, 0x30(r29)
  bl        -0x31BB90
  addi      r3, r28, 0xC
  bl        -0x252938
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31BCC4
  addi      r28, r28, 0x38
  mr        r3, r28
  bl        -0x4290
  lis       r3, 0x804E
  addi      r29, r31, 0x16C
  subi      r0, r3, 0x5230
  li        r5, 0
  stw       r0, 0x0(r28)
  lis       r3, 0x804E
  subi      r4, r3, 0x5274
  lfs       f0, -0x184(r2)
  stw       r5, 0x1C(r28)
  li        r0, 0x2
  mr        r30, r29
  mr        r3, r29
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r5, 0x28(r28)
  stfs      f0, 0x2C(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x30(r28)
  bl        -0x31BC04
  addi      r3, r29, 0xC
  bl        -0x2529AC
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31BD38
  addi      r28, r29, 0x38
  mr        r3, r28
  bl        -0x4304
  lis       r3, 0x804E
  lis       r4, 0x804E
  subi      r0, r3, 0x5248
  lis       r3, 0x804E
  stw       r0, 0x0(r28)
  addi      r30, r29, 0x60
  lfs       f0, -0x184(r2)
  subi      r4, r4, 0x5B10
  subi      r0, r3, 0x5260
  mr        r3, r30
  stfs      f0, 0x1C(r28)
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x0(r28)
  bl        -0x4344
  lis       r3, 0x804E
  addi      r28, r29, 0x84
  subi      r3, r3, 0x5280
  li        r0, 0
  stw       r3, 0x0(r30)
  mr        r3, r28
  stw       r0, 0x1C(r30)
  stw       r0, 0x20(r30)
  bl        -0x4368
  lis       r3, 0x804E
  addi      r29, r31, 0x20C
  subi      r0, r3, 0x5AF8
  stw       r0, 0x0(r28)
  mr        r28, r29
  mr        r3, r29
  bl        -0x31BCAC
  addi      r3, r28, 0xC
  bl        -0x252A54
  li        r0, 0
  mr        r4, r29
  stw       r0, 0x24(r29)
  addi      r3, r29, 0x28
  bl        -0x31BDE0
  addi      r28, r29, 0x38
  mr        r3, r28
  bl        -0x43AC
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  li        r4, 0
  stw       r0, 0x0(r28)
  subi      r0, r3, 0x5AD4
  lfs       f0, -0x184(r2)
  stw       r4, 0x1C(r28)
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r4, 0x28(r28)
  stfs      f0, 0x2C(r28)
  stw       r0, 0x0(r28)
  lwz       r0, -0x6788(r13)
  cmplwi    r0, 0
  bne-      .loc_0x2F8
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x158
  li        r4, 0x15F
  addi      r5, r5, 0x164
  crclr     6, 0x6
  bl        -0x317FC0

.loc_0x2F8:
  addi      r28, r29, 0x68
  mr        r3, r28
  bl        -0x4414
  lis       r3, 0x804E
  li        r0, -0x10
  subi      r3, r3, 0x5AEC
  addi      r29, r29, 0x88
  stw       r3, 0x0(r28)
  mr        r3, r29
  stw       r0, 0x1C(r28)
  bl        -0x4434
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  li        r4, 0
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x5AD4
  lfs       f0, -0x184(r2)
  stw       r4, 0x1C(r29)
  stfs      f0, 0x20(r29)
  stfs      f0, 0x24(r29)
  stw       r4, 0x28(r29)
  stfs      f0, 0x2C(r29)
  stw       r0, 0x0(r29)
  lwz       r0, -0x6788(r13)
  cmplwi    r0, 0
  bne-      .loc_0x380
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x158
  li        r4, 0x15F
  addi      r5, r5, 0x164
  crclr     6, 0x6
  bl        -0x318048

.loc_0x380:
  lwz       r0, 0x24(r1)
  mr        r3, r31
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
 * Size:	000150
 */
void __dt__Q28PSSystem22TaskEntry_BankRandTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __dt__Q28PSSystem12BankRandTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void __dt__Q28PSSystem16TaskEntry_PitModFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem14PitchResetTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem14SimpleWaitTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void __dt__Q28PSSystem12PitchModTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __dt__Q28PSSystem20TriangleTableModTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem21ModParamWithTableTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000CC
 */
void __dt__Q28PSSystem20TaskEntry_OuterParamFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000150
 */
void __dt__Q28PSSystem15TaskEntry_TempoFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem12FlagWaitTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void __dt__Q28PSSystem14OuterParamTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem16ModParamWithFadeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void __dt__Q28PSSystem8TaskBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void __dt__Q28PSSystem9TaskEntryFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<PSSystem::TaskEntry>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void __dt__Q28PSSystem31MutexList<PSSystem::TaskBase>Fv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<PSSystem::TaskBase>::~JSUList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem12SeqTrackBaseFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803426B0
 * Size:	000078
 */
void init__Q28PSSystem12SeqTrackRootFP8JASTrack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr.       r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x170
  li        r4, 0xE5
  addi      r5, r5, 0x164
  crclr     6, 0x6
  bl        -0x3180A8

.loc_0x3C:
  stw       r31, 0x28(r30)
  li        r0, 0
  mr        r3, r30
  lhz       r4, 0x352(r31)
  sth       r4, 0x2C(r30)
  lhz       r4, 0x2C(r30)
  sth       r4, 0x2E(r30)
  stb       r0, 0x3C(r30)
  bl        .loc_0x78
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x78:
*/
}

/*
 * --INFO--
 * Address:	80342728
 * Size:	00007C
 */
void initSwingRatio__Q28PSSystem12SeqTrackRootFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  lis       r0, 0x4330
  lfd       f4, -0x178(r2)
  lhz       r4, 0x2C(r3)
  stw       r0, 0x8(r1)
  lfs       f2, -0x180(r2)
  stw       r4, 0xC(r1)
  lfs       f1, 0x34(r3)
  lfd       f0, 0x8(r1)
  fadds     f1, f2, f1
  stw       r0, 0x18(r1)
  fsubs     f3, f0, f4
  lfs       f0, -0x17C(r2)
  fmuls     f1, f3, f1
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x10(r1)
  lwz       r0, 0x14(r1)
  sth       r0, 0x32(r3)
  lhz       r0, 0x32(r3)
  lfs       f0, 0x34(r3)
  stw       r0, 0x1C(r1)
  lfd       f1, 0x18(r1)
  fsubs     f1, f1, f4
  fdivs     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  sth       r0, 0x30(r3)
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void bankRandmizer__Q28PSSystem12SeqTrackRootFfUlPQ28PSSystem12DirectorBase(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void pitchShift__Q28PSSystem12SeqTrackRootFfUlPQ28PSSystem12DirectorBase(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803427A4
 * Size:	000088
 */
void pitchModulation__Q28PSSystem12SeqTrackRootFffUlPQ28PSSystem12DirectorBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x28(r1)
  fmr       f31, f2
  stfd      f30, 0x20(r1)
  fmr       f30, f1
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  addi      r3, r29, 0x4
  addi      r4, r29, 0x16C
  bl        -0x434C
  fmr       f1, f30
  mr        r4, r30
  fmr       f2, f31
  addi      r3, r29, 0x16C
  bl        -0x3C1C
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x16C
  bl        -0x4410
  lwz       r0, 0x34(r1)
  lfd       f31, 0x28(r1)
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	8034282C
 * Size:	000078
 */
void tempoChange__Q28PSSystem12SeqTrackRootFfUlPQ28PSSystem12DirectorBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r5
  stw       r30, 0x10(r1)
  mr        r30, r4
  stw       r29, 0xC(r1)
  mr        r29, r3
  addi      r3, r29, 0x4
  addi      r4, r29, 0x40
  bl        -0x43CC
  fmr       f1, f31
  mr        r4, r30
  addi      r3, r29, 0x40
  bl        -0x3A58
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x40
  bl        -0x448C
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803428A4
 * Size:	000024
 */
void onStopSeq__Q28PSSystem12SeqTrackRootFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x4
  stw       r0, 0x14(r1)
  bl        -0x43AC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803428C8
 * Size:	00009C
 */
void beatUpdate__Q28PSSystem12SeqTrackRootFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0x3C(r3)
  rlwinm    r0,r0,0,31,31
  xori      r0, r0, 0x1
  rlwinm    r0,r0,0,24,31
  ori       r0, r0, 0x80
  stb       r0, 0x3C(r3)
  lwz       r0, 0x38(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x5C
  lbz       r0, 0x3C(r31)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x50
  lhz       r0, 0x30(r31)
  sth       r0, 0x2E(r31)
  b         .loc_0x64

.loc_0x50:
  lhz       r0, 0x32(r31)
  sth       r0, 0x2E(r31)
  b         .loc_0x64

.loc_0x5C:
  lhz       r0, 0x2C(r31)
  sth       r0, 0x2E(r31)

.loc_0x64:
  lwz       r3, 0x28(r31)
  lhz       r4, 0x2E(r31)
  bl        -0x2A0398
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lhz       r3, 0x3E(r31)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80342964
 * Size:	0002EC
 */
void __ct__Q28PSSystem13SeqTrackChildFRCQ28PSSystem12SeqTrackRoot(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804E
  stw       r0, 0x24(r1)
  subi      r0, r4, 0x5078
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  addi      r29, r31, 0x4
  mr        r30, r29
  stw       r28, 0x10(r1)
  stw       r0, 0x0(r3)
  mr        r3, r29
  bl        -0x31C0CC
  addi      r3, r30, 0xC
  bl        -0x252E74
  li        r0, 0
  lis       r3, 0x804E
  stw       r0, 0x24(r29)
  subi      r0, r3, 0x50C0
  addi      r30, r31, 0x2C
  stw       r0, 0x0(r31)
  mr        r29, r30
  mr        r3, r30
  bl        -0x31C0F8
  addi      r3, r29, 0xC
  bl        -0x252EA0
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31C22C
  addi      r29, r30, 0x38
  mr        r3, r29
  bl        -0x47F8
  lis       r3, 0x804E
  addi      r28, r30, 0x58
  subi      r3, r3, 0x50A0
  li        r0, 0
  stw       r3, 0x0(r29)
  mr        r3, r28
  stb       r0, 0x1C(r29)
  bl        -0x4818
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  addi      r29, r30, 0x8C
  stw       r0, 0x0(r28)
  li        r5, 0
  lfs       f0, -0x184(r2)
  subi      r4, r3, 0x5274
  stw       r5, 0x1C(r28)
  li        r0, 0x1
  mr        r3, r29
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r5, 0x28(r28)
  stfs      f0, 0x2C(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x30(r28)
  bl        -0x4860
  lis       r3, 0x804E
  addi      r28, r30, 0xAC
  subi      r3, r3, 0x5AEC
  li        r0, -0x10
  stw       r3, 0x0(r29)
  mr        r3, r28
  stw       r0, 0x1C(r29)
  bl        -0x4880
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  addi      r29, r30, 0xE0
  stw       r0, 0x0(r28)
  li        r5, 0
  lfs       f0, -0x184(r2)
  subi      r4, r3, 0x5274
  stw       r5, 0x1C(r28)
  li        r0, 0x1
  mr        r3, r29
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r5, 0x28(r28)
  stfs      f0, 0x2C(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x30(r28)
  bl        -0x48C8
  lis       r3, 0x804E
  addi      r28, r31, 0x12C
  subi      r3, r3, 0x50A0
  li        r0, 0
  stw       r3, 0x0(r29)
  mr        r30, r28
  mr        r3, r28
  stb       r0, 0x1C(r29)
  bl        -0x31C214
  addi      r3, r28, 0xC
  bl        -0x252FBC
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31C348
  addi      r29, r28, 0x38
  mr        r3, r29
  bl        -0x4914
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5230
  addi      r28, r28, 0x6C
  stw       r0, 0x0(r29)
  li        r5, 0
  lfs       f0, -0x184(r2)
  subi      r4, r3, 0x5274
  stw       r5, 0x1C(r29)
  li        r0, 0x1
  mr        r3, r28
  stfs      f0, 0x20(r29)
  stfs      f0, 0x24(r29)
  stw       r5, 0x28(r29)
  stfs      f0, 0x2C(r29)
  stw       r4, 0x0(r29)
  stw       r0, 0x30(r29)
  bl        -0x495C
  lis       r3, 0x804E
  addi      r29, r31, 0x1B8
  subi      r3, r3, 0x50A0
  li        r0, 0
  stw       r3, 0x0(r28)
  mr        r30, r29
  mr        r3, r29
  stb       r0, 0x1C(r28)
  bl        -0x31C2A8
  addi      r3, r29, 0xC
  bl        -0x253050
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31C3DC
  addi      r28, r29, 0x38
  mr        r3, r28
  bl        -0x49A8
  lis       r3, 0x804E
  addi      r29, r31, 0x224
  subi      r0, r3, 0x5230
  li        r5, 0
  stw       r0, 0x0(r28)
  lis       r3, 0x804E
  subi      r4, r3, 0x5274
  lfs       f0, -0x184(r2)
  stw       r5, 0x1C(r28)
  li        r0, 0x1
  mr        r30, r29
  mr        r3, r29
  stfs      f0, 0x20(r28)
  stfs      f0, 0x24(r28)
  stw       r5, 0x28(r28)
  stfs      f0, 0x2C(r28)
  stw       r4, 0x0(r28)
  stw       r0, 0x30(r28)
  bl        -0x31C31C
  addi      r3, r29, 0xC
  bl        -0x2530C4
  li        r0, 0
  mr        r4, r30
  stw       r0, 0x24(r30)
  addi      r3, r30, 0x28
  bl        -0x31C450
  addi      r28, r29, 0x38
  mr        r3, r28
  bl        -0x4A1C
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x50AC
  mr        r3, r31
  stw       r4, 0x0(r28)
  stb       r0, 0x1C(r28)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void __dt__Q28PSSystem16TaskEntry_IdMaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem10IdMaskTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void __dt__Q28PSSystem22TaskEntry_MuteOnVolumeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C0
 */
void __dt__Q28PSSystem20TaskEntry_MuteVolumeFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __dt__Q28PSSystem8MuteTaskFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80342C50
 * Size:	000084
 */
void muteOffAndFadeIn__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r5
  stw       r30, 0x10(r1)
  mr        r30, r4
  stw       r29, 0xC(r1)
  mr        r29, r3
  addi      r3, r29, 0x4
  addi      r4, r29, 0x2C
  bl        -0x47F0
  addi      r3, r29, 0x4
  addi      r4, r29, 0x12C
  bl        -0x47FC
  fmr       f1, f31
  mr        r4, r30
  addi      r3, r29, 0x2C
  bl        -0x3FB8
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x2C
  bl        -0x48BC
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80342CD4
 * Size:	000074
 */
void fadeoutAndMute__Q28PSSystem13SeqTrackChildFUlPQ28PSSystem12DirectorBase(void)
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
  addi      r3, r29, 0x4
  addi      r4, r29, 0x2C
  bl        -0x486C
  addi      r3, r29, 0x4
  addi      r4, r29, 0x12C
  bl        -0x4878
  mr        r4, r30
  addi      r3, r29, 0x12C
  bl        -0x3F8C
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x12C
  bl        -0x4934
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
 * Address:	80342D48
 * Size:	000078
 */
void fade__Q28PSSystem13SeqTrackChildFfUlPQ28PSSystem12DirectorBase(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r5
  stw       r30, 0x10(r1)
  mr        r30, r4
  stw       r29, 0xC(r1)
  mr        r29, r3
  addi      r3, r29, 0x4
  addi      r4, r29, 0x1B8
  bl        -0x48E8
  fmr       f1, f31
  mr        r4, r30
  addi      r3, r29, 0x1B8
  bl        -0x4288
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x1B8
  bl        -0x49A8
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  lwz       r30, 0x10(r1)
  lwz       r29, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80342DC0
 * Size:	000068
 */
void setIdMask__Q28PSSystem13SeqTrackChildFUcPQ28PSSystem12DirectorBase(void)
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
  addi      r3, r29, 0x4
  addi      r4, r29, 0x224
  bl        -0x4958
  mr        r4, r30
  addi      r3, r29, 0x224
  bl        -0x4274
  mr        r5, r31
  addi      r3, r29, 0x4
  addi      r4, r29, 0x224
  bl        -0x4A14
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
 * Address:	80342E28
 * Size:	000024
 */
void onStopSeq__Q28PSSystem13SeqTrackChildFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x4
  stw       r0, 0x14(r1)
  bl        -0x4930
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80342E4C
 * Size:	000030
 */
void task__Q28PSSystem10IdMaskTaskFR8JASTrack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  mr        r0, r4
  lbz       r4, 0x1C(r3)
  mr        r3, r0
  bl        -0x2A1C00
  lwz       r0, 0x14(r1)
  li        r3, -0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80342E7C
 * Size:	000038
 */
void task__Q28PSSystem8MuteTaskFR8JASTrack(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r5, 0x1C(r3)
  mr        r3, r4
  neg       r0, r5
  or        r0, r0, r5
  rlwinm    r4,r0,1,31,31
  bl        -0x2A1BB8
  lwz       r0, 0x14(r1)
  li        r3, -0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}