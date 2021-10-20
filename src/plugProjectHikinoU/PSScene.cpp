

/*
 * --INFO--
 * Address:	8034147C
 * Size:	00007C
 */
void PSSystem::WaveScene::~WaveScene()
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
  beq-      .loc_0x60
  lis       r3, 0x804E
  lis       r4, 0x8034
  subi      r0, r3, 0x50CC
  li        r5, 0x14
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x18
  subi      r4, r4, 0x1ED4
  li        r6, 0x2
  bl        -0x27FCF8
  mr        r3, r30
  li        r4, 0
  bl        -0x324494
  extsh.    r0, r31
  ble-      .loc_0x60
  mr        r3, r30
  bl        -0x31D424

.loc_0x60:
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
 * Address:	803414F8
 * Size:	000040
 */
void PSSystem::WaveLoader::loadWave(PSSystem::TaskChecker *, PSSystem::WaveScene::AreaArg)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r6, r5
  stw       r0, 0x14(r1)
  add       r5, r3, r6
  lbz       r5, 0x4(r5)
  cmplwi    r5, 0xFF
  beq-      .loc_0x30
  mr        r7, r4
  addi      r3, r3, 0x8
  li        r4, 0
  bl        -0x3B24

.loc_0x30:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341538
 * Size:	000118
 */
void PSSystem::Scene::Scene(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804E
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  subi      r3, r5, 0x5100
  stw       r30, 0x18(r1)
  addi      r30, r31, 0x10
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  stw       r3, 0x0(r31)
  mr        r3, r30
  stw       r0, 0x4(r31)
  stw       r0, 0x8(r31)
  stw       r0, 0xC(r31)
  bl        -0x31ACB0
  lis       r3, 0x804E
  rlwinm    r0,r29,0,24,31
  subi      r3, r3, 0x5B80
  stw       r3, 0xC(r30)
  cmplwi    r0, 0xFF
  stw       r31, 0x10(r30)
  beq-      .loc_0xF4
  li        r3, 0x48
  bl        -0x31D700
  mr.       r30, r3
  beq-      .loc_0xC8
  lis       r3, 0x804E
  addi      r28, r30, 0x8
  subi      r0, r3, 0x50D8
  stw       r0, 0x0(r30)
  mr        r3, r28
  bl        -0x3245F8
  lis       r3, 0x804E
  lis       r4, 0x8034
  subi      r0, r3, 0x50CC
  li        r6, 0x14
  lis       r3, 0x8034
  stw       r0, 0x0(r28)
  subi      r5, r3, 0x1ED4
  subi      r4, r4, 0x2588
  addi      r3, r28, 0x18
  li        r7, 0x2
  bl        -0x27FDB4
  stb       r29, 0x4(r30)
  li        r0, 0xFF
  stb       r0, 0x5(r30)

.loc_0xC8:
  stw       r30, 0x8(r31)
  lwz       r0, 0x8(r31)
  cmplwi    r0, 0
  bne-      .loc_0xF4
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x120
  li        r4, 0x40
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x316FE8

.loc_0xF4:
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
 * Address:	80341650
 * Size:	0000C4
 */
void PSSystem::Scene::~Scene()
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
  mr.       r29, r3
  beq-      .loc_0xA4
  lis       r3, 0x804E
  subi      r0, r3, 0x5100
  stw       r0, 0x0(r29)
  lwz       r31, 0x8(r29)
  cmplwi    r31, 0
  beq-      .loc_0x88
  lis       r3, 0x804E
  addic.    r0, r31, 0x8
  subi      r0, r3, 0x50D8
  stw       r0, 0x0(r31)
  beq-      .loc_0x80
  lis       r3, 0x804E
  lis       r4, 0x8034
  subi      r0, r3, 0x50CC
  li        r5, 0x14
  stw       r0, 0x8(r31)
  addi      r3, r31, 0x20
  subi      r4, r4, 0x1ED4
  li        r6, 0x2
  bl        -0x27FEFC
  addi      r3, r31, 0x8
  li        r4, 0
  bl        -0x324698

.loc_0x80:
  mr        r3, r31
  bl        -0x31D620

.loc_0x88:
  addi      r3, r29, 0x10
  li        r4, -0x1
  bl        -0xDCDC
  extsh.    r0, r30
  ble-      .loc_0xA4
  mr        r3, r29
  bl        -0x31D63C

.loc_0xA4:
  lwz       r0, 0x24(r1)
  mr        r3, r29
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
 * Address:	80341714
 * Size:	0000BC
 */
void PSSystem::Scene::adaptChildScene(PSSystem::Scene *)
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
  addi      r3, r3, 0x120
  li        r4, 0x6D
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x31710C

.loc_0x3C:
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  beq-      .loc_0x64
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x120
  li        r4, 0x6E
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x317134

.loc_0x64:
  stw       r31, 0x4(r30)
  mr        r3, r31
  addi      r4, r30, 0x4
  bl        .loc_0xBC
  lwz       r0, 0x4(r30)
  cmplwi    r0, 0
  bne-      .loc_0x9C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x120
  li        r4, 0x71
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x31716C

.loc_0x9C:
  lwz       r3, -0x6780(r13)
  stw       r31, 0x8(r3)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xBC:
*/
}


/*
 * --INFO--
 * Address:	803417D0
 * Size:	000070
 */
void PSSystem::Scene::adaptTo(PSSystem::Scene **)
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
  lwz       r0, 0xC(r3)
  cmplwi    r0, 0
  beq-      .loc_0x44
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x120
  li        r4, 0x7F
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x3171D0

.loc_0x44:
  bl        -0x252BDC
  stw       r31, 0xC(r30)
  lwz       r3, -0x6780(r13)
  bl        0x2A4
  bl        -0x252BD8
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
 * Address:	80341840
 * Size:	000058
 */
void PSSystem::Scene::detach()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x252C1C
  lwz       r3, 0xC(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r0, 0x0(r3)
  cmplw     r0, r31
  bne-      .loc_0x38
  li        r0, 0
  stw       r0, 0x0(r3)

.loc_0x38:
  lwz       r3, -0x6780(r13)
  bl        0x248
  bl        -0x252C34
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341898
 * Size:	000060
 */
void PSSystem::Scene::appendSeq(PSSystem::SeqBase *)
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
  addi      r3, r3, 0x120
  li        r4, 0x92
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x317290

.loc_0x3C:
  mr        r4, r31
  addi      r3, r30, 0x10
  bl        -0x31AFF8
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
 * Address:	803418F8
 * Size:	00003C
 */
void PSSystem::Scene::startMainSeq()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r3, 0x0(r3)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341934
 * Size:	00003C
 */
void PSSystem::Scene::stopMainSeq(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x2C
  lwz       r3, 0x0(r3)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x2C:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341970
 * Size:	000024
 */
void PSSystem::Scene::stopAllSound(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x10
  stw       r0, 0x14(r1)
  bl        -0xDD44
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341994
 * Size:	000088
 */
void PSSystem::Scene::scene1st(PSSystem::TaskChecker *)
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
  lwz       r31, 0x8(r3)
  cmplwi    r31, 0
  beq-      .loc_0x60
  mr        r3, r31
  li        r5, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  li        r5, 0x1
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x60:
  mr        r4, r30
  addi      r3, r29, 0x10
  bl        -0xDD64
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
 * Address:	80341A1C
 * Size:	00005C
 */
void PSSystem::Scene::scene1stLoadSync()
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  bl        -0x251F04
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x20(r1)
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x3C:
  lbz       r0, 0x20(r1)
  cmplwi    r0, 0
  bne+      .loc_0x3C
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}


/*
 * --INFO--
 * Address:	80341A78
 * Size:	00004C
 */
void PSSystem::Scene::exec()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0x10
  bl        -0xDED4
  lwz       r3, 0x4(r31)
  cmplwi    r3, 0
  beq-      .loc_0x38
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80341AC4
 * Size:	000034
 */
void PSSystem::SceneMgr::refreshCurEndScene()
{
/*
.loc_0x0:
  lwz       r4, 0x4(r3)
  cmplwi    r4, 0
  bne-      .loc_0x20
  li        r0, 0
  stw       r0, 0x8(r3)
  blr       
  b         .loc_0x20

.loc_0x1C:
  mr        r4, r0

.loc_0x20:
  lwz       r0, 0x4(r4)
  cmplwi    r0, 0
  bne+      .loc_0x1C
  stw       r4, 0x8(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80341AF8
 * Size:	000154
 */
void PSSystem::SceneMgr::findSeq(JASTrack *)
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
  lis       r3, 0x8049
  lwz       r0, 0x4(r29)
  addi      r31, r3, 0x120
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x3174FC

.loc_0x48:
  lwz       r3, 0x4(r29)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108
  cmplwi    r3, 0
  bne-      .loc_0x74
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x317528

.loc_0x74:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  lwz       r3, 0x4(r3)
  addi      r3, r3, 0x10
  bl        -0xDE88
  cmplwi    r3, 0
  beq-      .loc_0x94
  b         .loc_0x138

.loc_0x94:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0xB4
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x317568

.loc_0xB4:
  lwz       r4, 0x4(r29)
  lwz       r3, 0x4(r4)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108
  cmplwi    r4, 0
  bne-      .loc_0xE4
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x317598

.loc_0xE4:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  addi      r3, r3, 0x10
  bl        -0xDEFC
  cmplwi    r3, 0
  beq-      .loc_0x108
  b         .loc_0x138

.loc_0x108:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x128
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x148
  crclr     6, 0x6
  bl        -0x3175DC

.loc_0x128:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  addi      r3, r3, 0x10
  bl        -0xDF38

.loc_0x138:
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
 * Address:	80341C4C
 * Size:	000154
 */
void PSSystem::SceneMgr::getPlayingSeq(JASTrack *)
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
  lis       r3, 0x8049
  lwz       r0, 0x4(r29)
  addi      r31, r3, 0x120
  cmplwi    r0, 0
  bne-      .loc_0x48
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x317650

.loc_0x48:
  lwz       r3, 0x4(r29)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108
  cmplwi    r3, 0
  bne-      .loc_0x74
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x31767C

.loc_0x74:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  lwz       r3, 0x4(r3)
  addi      r3, r3, 0x10
  bl        -0xDEF4
  cmplwi    r3, 0
  beq-      .loc_0x94
  b         .loc_0x138

.loc_0x94:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0xB4
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x3176BC

.loc_0xB4:
  lwz       r4, 0x4(r29)
  lwz       r3, 0x4(r4)
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  beq-      .loc_0x108
  cmplwi    r4, 0
  bne-      .loc_0xE4
  addi      r3, r31, 0x18
  addi      r5, r31, 0xC
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x3176EC

.loc_0xE4:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  lwz       r3, 0x4(r3)
  lwz       r3, 0x4(r3)
  addi      r3, r3, 0x10
  bl        -0xDF68
  cmplwi    r3, 0
  beq-      .loc_0x108
  b         .loc_0x138

.loc_0x108:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x128
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x15D
  crclr     6, 0x6
  bl        -0x317730

.loc_0x128:
  lwz       r3, 0x4(r29)
  mr        r4, r30
  addi      r3, r3, 0x10
  bl        -0xDFA4

.loc_0x138:
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
 * Address:	80341DA0
 * Size:	000440
 */
void PSSystem::SceneMgr::deleteScene(PSSystem::Scene *)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr.       r29, r4
  lis       r4, 0x8049
  mr        r28, r3
  addi      r31, r4, 0x120
  bne-      .loc_0x38
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x166
  crclr     6, 0x6
  bl        -0x317794

.loc_0x38:
  lwz       r30, 0x4(r29)
  cmplwi    r30, 0
  beq-      .loc_0x32C
  bne-      .loc_0x5C
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x166
  crclr     6, 0x6
  bl        -0x3177B8

.loc_0x5C:
  lwz       r27, 0x4(r30)
  cmplwi    r27, 0
  beq-      .loc_0x220
  bne-      .loc_0x80
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x166
  crclr     6, 0x6
  bl        -0x3177DC

.loc_0x80:
  lwz       r26, 0x4(r27)
  cmplwi    r26, 0
  beq-      .loc_0x14C
  bne-      .loc_0xA4
  addi      r3, r31, 0
  addi      r5, r31, 0xC
  li        r4, 0x166
  crclr     6, 0x6
  bl        -0x317800

.loc_0xA4:
  mr        r3, r26
  bl        0x408
  mr.       r4, r3
  beq-      .loc_0xBC
  mr        r3, r28
  bl        .loc_0x0

.loc_0xBC:
  mr        r3, r26
  li        r4, 0xA
  lwz       r12, 0x0(r26)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  b         .loc_0xEC

.loc_0xDC:
  bl        0x424
  mr        r4, r28
  bl        -0x2954DC
  addi      r28, r28, 0x1

.loc_0xEC:
  bl        -0x28A858
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r28,0,24,31
  cmplw     r0, r3
  blt+      .loc_0xDC
  b         .loc_0x110

.loc_0x104:
  bl        0x3B4
  bl        -0x975C
  bl        -0x270C78

.loc_0x110:
  mr        r3, r26
  bl        0x394
  bl        -0xE514
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x104
  mr        r3, r26
  bl        -0x688
  cmplwi    r26, 0
  beq-      .loc_0x14C
  mr        r3, r26
  li        r4, 0x1
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x14C:
  mr        r3, r27
  li        r4, 0xA
  lwz       r12, 0x0(r27)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  b         .loc_0x17C

.loc_0x16C:
  lwz       r3, -0x67A8(r13)
  mr        r4, r28
  bl        -0x29556C
  addi      r28, r28, 0x1

.loc_0x17C:
  bl        -0x28A8E8
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r28,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x16C
  b         .loc_0x1C0

.loc_0x194:
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x1B4
  addi      r3, r31, 0x24
  addi      r5, r31, 0xC
  li        r4, 0x18B
  crclr     6, 0x6
  bl        -0x317910

.loc_0x1B4:
  lwz       r3, -0x67A8(r13)
  bl        -0x980C
  bl        -0x270D28

.loc_0x1C0:
  addi      r3, r27, 0x10
  bl        -0xE5C0
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x194
  bl        -0x253338
  lwz       r3, 0xC(r27)
  cmplwi    r3, 0
  beq-      .loc_0x1F4
  lwz       r0, 0x0(r3)
  cmplw     r0, r27
  bne-      .loc_0x1F4
  li        r0, 0
  stw       r0, 0x0(r3)

.loc_0x1F4:
  lwz       r3, -0x6780(r13)
  bl        -0x4D4
  bl        -0x253350
  cmplwi    r27, 0
  beq-      .loc_0x220
  mr        r3, r27
  li        r4, 0x1
  lwz       r12, 0x0(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x220:
  mr        r3, r30
  li        r4, 0xA
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r28, 0
  b         .loc_0x250

.loc_0x240:
  lwz       r3, -0x67A8(r13)
  mr        r4, r28
  bl        -0x295640
  addi      r28, r28, 0x1

.loc_0x250:
  bl        -0x28A9BC
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r28,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x240
  b         .loc_0x294

.loc_0x268:
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x288
  addi      r3, r31, 0x24
  addi      r5, r31, 0xC
  li        r4, 0x18B
  crclr     6, 0x6
  bl        -0x3179E4

.loc_0x288:
  lwz       r3, -0x67A8(r13)
  bl        -0x98E0
  bl        -0x270DFC

.loc_0x294:
  addi      r3, r30, 0x10
  bl        -0xE694
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x268
  bl        -0x25340C
  lwz       r3, 0xC(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2C8
  lwz       r0, 0x0(r3)
  cmplw     r0, r30
  bne-      .loc_0x2C8
  li        r0, 0
  stw       r0, 0x0(r3)

.loc_0x2C8:
  lwz       r26, -0x6780(r13)
  lwz       r28, 0x4(r26)
  cmplwi    r28, 0
  bne-      .loc_0x2F4
  li        r0, 0
  stw       r0, 0x8(r26)
  b         .loc_0x308
  b         .loc_0x2F4

.loc_0x2E8:
  mr        r3, r28
  bl        0x1C4
  mr        r28, r3

.loc_0x2F4:
  mr        r3, r28
  bl        0x1B8
  cmplwi    r3, 0
  bne+      .loc_0x2E8
  stw       r28, 0x8(r26)

.loc_0x308:
  bl        -0x25345C
  cmplwi    r30, 0
  beq-      .loc_0x32C
  mr        r3, r30
  li        r4, 0x1
  lwz       r12, 0x0(r30)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x32C:
  mr        r3, r29
  li        r4, 0xA
  lwz       r12, 0x0(r29)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  li        r26, 0
  b         .loc_0x35C

.loc_0x34C:
  lwz       r3, -0x67A8(r13)
  mr        r4, r26
  bl        -0x29574C
  addi      r26, r26, 0x1

.loc_0x35C:
  bl        -0x28AAC8
  rlwinm    r3,r3,0,24,31
  rlwinm    r0,r26,0,24,31
  cmplw     r0, r3
  blt+      .loc_0x34C
  b         .loc_0x3A0

.loc_0x374:
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x394
  addi      r3, r31, 0x24
  addi      r5, r31, 0xC
  li        r4, 0x18B
  crclr     6, 0x6
  bl        -0x317AF0

.loc_0x394:
  lwz       r3, -0x67A8(r13)
  bl        -0x99EC
  bl        -0x270F08

.loc_0x3A0:
  addi      r3, r29, 0x10
  bl        -0xE7A0
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x374
  bl        -0x253518
  lwz       r3, 0xC(r29)
  cmplwi    r3, 0
  beq-      .loc_0x3D4
  lwz       r0, 0x0(r3)
  cmplw     r0, r29
  bne-      .loc_0x3D4
  li        r0, 0
  stw       r0, 0x0(r3)

.loc_0x3D4:
  lwz       r4, -0x6780(r13)
  lwz       r3, 0x4(r4)
  cmplwi    r3, 0
  bne-      .loc_0x3F8
  li        r0, 0
  stw       r0, 0x8(r4)
  b         .loc_0x408
  b         .loc_0x3F8

.loc_0x3F4:
  mr        r3, r0

.loc_0x3F8:
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  bne+      .loc_0x3F4
  stw       r3, 0x8(r4)

.loc_0x408:
  bl        -0x25355C
  cmplwi    r29, 0
  beq-      .loc_0x42C
  mr        r3, r29
  li        r4, 0x1
  lwz       r12, 0x0(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x42C:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}


/*
 * --INFO--
 * Address:	803421E0
 * Size:	000068
 */
void PSSystem::SceneMgr::deleteCurrentScene()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x120
  li        r4, 0x18D
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x317BD8

.loc_0x3C:
  lwz       r3, 0x4(r31)
  lwz       r4, 0x4(r3)
  cmplwi    r4, 0
  beq-      .loc_0x54
  mr        r3, r31
  bl        -0x490

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80342248
 * Size:	000008
 */
void PSSystem::Scene::getSeqMgr()
{
/*
.loc_0x0:
  addi      r3, r3, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	80342250
 * Size:	000008
 */
void PSSystem::Scene::getChildScene()
{
/*
.loc_0x0:
  lwz       r3, 0x4(r3)
  blr
*/
}


/*
 * --INFO--
 * Address:	80342258
 * Size:	000048
 */
void PSGetSystemIFA()
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0x34
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x144
  li        r4, 0x18B
  addi      r5, r5, 0x12C
  crclr     6, 0x6
  bl        -0x317C48

.loc_0x34:
  lwz       r0, 0x14(r1)
  lwz       r3, -0x67A8(r13)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}


/*
 * --INFO--
 * Address:	803422A0
 * Size:	000008
 */
void PSGetSystemIF()
{
/*
.loc_0x0:
  lwz       r3, -0x67A8(r13)
  blr
*/
}
