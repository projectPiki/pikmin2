

/*
 * --INFO--
 * Address:	8033836C
 * Size:	000050
 */
void PSSystem::getObject(JASTrack *, unsigned char)
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
  bl        -0x296B7C
  addi      r0, r31, 0x1
  mr        r31, r3
  mr        r3, r30
  rlwinm    r4,r0,0,24,31
  bl        -0x296B90
  lwz       r0, 0x14(r1)
  rlwimi    r3,r31,16,0,15
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803383BC
 * Size:	000060
 */
void PSSystem::setObject(JASTrack *, void *, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r5
  rlwinm    r5,r4,16,16,31
  stw       r30, 0x18(r1)
  mr        r30, r4
  mr        r4, r31
  stw       r29, 0x14(r1)
  mr        r29, r3
  bl        -0x2969C4
  addi      r0, r31, 0x1
  rlwinm    r5,r30,0,16,31
  mr        r3, r29
  rlwinm    r4,r0,0,24,31
  bl        -0x2969D8
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
 * Address:	8033841C
 * Size:	000134
 */
void __ct__Q28PSSystem5SysIFFRCQ28PSSystem8SetupArg(void)
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
  bl        -0x28C2E0
  lis       r4, 0x804E
  addi      r3, r30, 0x28
  subi      r0, r4, 0x5558
  stw       r0, 0x0(r30)
  bl        -0x24891C
  li        r0, 0
  addi      r3, r30, 0x44
  stw       r0, 0x40(r30)
  bl        0x520
  lwz       r0, 0x0(r31)
  li        r3, 0
  stw       r3, 0x48(r30)
  cmplwi    r0, 0
  bne-      .loc_0x74
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1D8
  li        r4, 0x8D
  subi      r5, r5, 0x1C8
  crclr     6, 0x6
  bl        -0x30DE4C

.loc_0x74:
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x9C
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1D8
  li        r4, 0x8E
  subi      r5, r5, 0x1C8
  crclr     6, 0x6
  bl        -0x30DE74

.loc_0x9C:
  mr        r3, r30
  li        r4, 0x2
  bl        -0x28BE1C
  lwz       r3, 0x10(r31)
  bl        -0x28AB78
  li        r3, 0x1
  bl        -0x28AB1C
  lbz       r3, -0x7AD0(r13)
  bl        -0x28AAF0
  bl        0x525C
  bl        0x5314
  lis       r3, 0x8034
  subi      r3, r3, 0x74E8
  bl        -0x2881B4
  lwz       r4, 0x0(r31)
  mr        r3, r30
  lwz       r5, 0x4(r31)
  li        r6, 0x1
  bl        -0x28C32C
  mr        r3, r30
  li        r4, 0x1
  bl        -0x28C318
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  lfs       f0, -0x210(r2)
  mr        r3, r30
  stfs      f0, 0x20(r30)
  stfs      f0, 0x24(r30)
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
 * Address:	80338550
 * Size:	0000E0
 */
void stopSoundSystem__Q28PSSystem5SysIFFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r3, 0x1D8
  stw       r30, 0x8(r1)
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x10
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x30DF48

.loc_0x3C:
  lwz       r30, -0x6780(r13)
  cmplwi    r30, 0
  bne-      .loc_0x5C
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x10
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x30DF68

.loc_0x5C:
  lwz       r30, 0x4(r30)
  cmplwi    r30, 0
  bne-      .loc_0x7C
  addi      r3, r31, 0
  addi      r5, r31, 0x10
  li        r4, 0xB7
  crclr     6, 0x6
  bl        -0x30DF88

.loc_0x7C:
  mr        r3, r30
  li        r4, 0x5
  lwz       r12, 0x0(r30)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xB0

.loc_0x98:
  lwz       r12, 0x0(r3)
  li        r4, 0x5
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r30, 0x4(r30)

.loc_0xB0:
  lwz       r3, 0x4(r30)
  cmplwi    r3, 0
  bne+      .loc_0x98
  li        r3, 0xA
  li        r4, 0x1
  bl        -0x28B6C8
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
 * Size:	00004C
 */
void isAudioThreadTerminated__Q28PSSystem5SysIFFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void waitForAudioThreadTermination__Q28PSSystem5SysIFFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80338630
 * Size:	000040
 */
void playSystemSe__Q28PSSystem5SysIFFUlUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r5
  mr        r5, r4
  stw       r0, 0x14(r1)
  li        r0, 0
  addi      r4, r1, 0x8
  li        r6, 0
  stw       r0, 0x8(r1)
  li        r8, 0x4
  bl        0x65C
  lwz       r0, 0x14(r1)
  lwz       r3, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80338670
 * Size:	00002C
 */
void playSystemSe__Q28PSSystem5SysIFFUlPP8JAISoundUl(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r7, r6
  li        r6, 0
  stw       r0, 0x14(r1)
  li        r8, 0x4
  bl        -0x322DBC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8033869C
 * Size:	000078
 */
void initIF__Q28PSSystem5SysIFFRCQ28PSSystem8SetupArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  bl        -0x28C3DC
  lis       r3, 0x8033
  addi      r3, r3, 0x123C
  bl        -0x287618
  lfs       f1, -0x20C(r2)
  lfs       f3, -0x208(r2)
  fmr       f2, f1
  bl        -0x293EC4
  lwz       r3, 0xC(r31)
  bl        -0x295F88
  lwz       r0, -0x6788(r13)
  cmplwi    r0, 0
  bne-      .loc_0x64
  li        r3, 0x10
  bl        -0x314844
  mr.       r0, r3
  beq-      .loc_0x60
  bl        0x639C
  mr        r0, r3

.loc_0x60:
  stw       r0, -0x6788(r13)

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
 * Address:	80338714
 * Size:	000038
 */
void makeSe__Q28PSSystem5SysIFFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, -0x67A0(r13)
  cmplwi    r12, 0
  beq-      .loc_0x24
  mtctr     r12
  bctrl     
  b         .loc_0x28

.loc_0x24:
  bl        -0x28B8CC

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8033874C
 * Size:	0000DC
 */
void mainLoop__Q28PSSystem5SysIFFv(void)
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
  lwz       r0, 0x40(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0xC0
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1BC
  li        r4, 0x1D3
  subi      r5, r5, 0x1C8
  crclr     6, 0x6
  bl        -0x30E158

.loc_0x50:
  lwz       r3, -0x6780(r13)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6E38(r13)
  cmplwi    r0, 0
  bne-      .loc_0x8C
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1BC
  li        r4, 0x237
  subi      r5, r5, 0x1C8
  crclr     6, 0x6
  bl        -0x30E194

.loc_0x8C:
  lwz       r30, -0x6E38(r13)
  li        r31, 0
  b         .loc_0xAC

.loc_0x98:
  rlwinm    r3,r31,2,22,29
  addi      r0, r3, 0x4
  lwzx      r3, r30, r0
  bl        0x7090
  addi      r31, r31, 0x1

.loc_0xAC:
  rlwinm    r0,r31,0,24,31
  cmplwi    r0, 0x8
  blt+      .loc_0x98
  mr        r3, r29
  bl        -0x28C0F0

.loc_0xC0:
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
 * Address:	80338828
 * Size:	00008C
 */
void setConfigVol_Se__Q28PSSystem5SysIFFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stfd      f31, 0x8(r1)
  fmr       f31, f1
  stfs      f31, 0x20(r3)
  lwz       r3, -0x6780(r13)
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0x78
  addi      r3, r3, 0x10
  bl        -0x4A00
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r12, 0x10(r3)
  fmr       f1, f31
  li        r4, 0x3
  li        r5, 0x8
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x78:
  lwz       r0, 0x14(r1)
  lfd       f31, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803388B4
 * Size:	0000C8
 */
void setConfigVol_Bgm__Q28PSSystem5SysIFFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  stfs      f31, 0x24(r3)
  lwz       r31, -0x6780(r13)
  cmplwi    r31, 0
  beq-      .loc_0xB0
  lwz       r0, 0x4(r31)
  cmplwi    r0, 0
  bne-      .loc_0x50
  lis       r3, 0x8049
  lis       r5, 0x8049
  subi      r3, r3, 0x1B0
  li        r4, 0xC7
  subi      r5, r5, 0x1C8
  crclr     6, 0x6
  bl        -0x30E2C0

.loc_0x50:
  lwz       r3, 0x4(r31)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  beq-      .loc_0xB0
  lwz       r31, 0x10(r3)
  b         .loc_0xA8

.loc_0x68:
  lwz       r3, 0x0(r31)
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r3)
  cmplwi    r3, 0
  beq-      .loc_0xA4
  lwz       r12, 0x10(r3)
  fmr       f1, f31
  li        r4, 0x3
  li        r5, 0x8
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xA4:
  lwz       r31, 0xC(r31)

.loc_0xA8:
  cmplwi    r31, 0
  bne+      .loc_0x68

.loc_0xB0:
  lwz       r0, 0x24(r1)
  lfd       f31, 0x18(r1)
  lwz       r31, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8033897C
 * Size:	000004
 */
void __ct__Q28PSSystem5FxMgrFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80338980
 * Size:	000044
 */
void __ct__Q28PSSystem12TextDataBaseFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x31B9C8
  lis       r3, 0x804E
  li        r0, 0
  subi      r4, r3, 0x5568
  mr        r3, r31
  stw       r4, 0x0(r31)
  stw       r0, 0x18(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803389C4
 * Size:	000070
 */
void __dt__Q28PSSystem12TextDataBaseFv(void)
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
  lis       r3, 0x804E
  li        r4, 0
  subi      r0, r3, 0x5568
  stw       r0, 0x0(r30)
  lwz       r3, 0x18(r30)
  bl        -0x31538C
  mr        r3, r30
  li        r4, 0
  bl        -0x31B9D0
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x314960

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
 * Address:	80338A34
 * Size:	00007C
 */
void load__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  bl        .loc_0x7C
  lwz       r4, 0x18(r31)
  cmplwi    r4, 0
  beq-      .loc_0x64
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0xDCE98
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x48
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x48:
  mr        r3, r31
  addi      r4, r1, 0x8
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x68

.loc_0x64:
  li        r3, 0

.loc_0x68:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr       

.loc_0x7C:
*/
}

/*
 * --INFO--
 * Address:	80338AB0
 * Size:	000068
 */
void onlyLoad__Q28PSSystem12TextDataBaseFPCcQ212JKRDvdRipper15EAllocDirection(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r8, r5
  li        r5, 0
  stw       r0, 0x24(r1)
  li        r0, 0
  li        r6, 0
  li        r7, 0
  stw       r31, 0x1C(r1)
  mr        r31, r3
  mr        r3, r4
  li        r4, 0
  stw       r0, 0x8(r1)
  li        r9, 0
  li        r10, 0
  bl        -0x319964
  stw       r3, 0x18(r31)
  lwz       r3, 0x18(r31)
  lwz       r31, 0x1C(r1)
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r3,r0,1,31,31
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80338B18
 * Size:	00000C
 */
void start1stSeq__Q28PSSystem5SysIFFv(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, -0x7420(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	80338B24
 * Size:	000070
 */
void makeSequence__Q28PSSystem5SysIFFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  li        r3, 0x6A8
  li        r5, 0
  bl        -0x314C04
  mr.       r0, r3
  beq-      .loc_0x34
  bl        .loc_0x70
  mr        r0, r3

.loc_0x34:
  mr        r3, r0
  b         .loc_0x60

.loc_0x3C:
  lwz       r4, -0x7548(r13)
  li        r3, 0x6A8
  li        r5, 0
  bl        -0x314C2C
  mr.       r0, r3
  beq-      .loc_0x5C
  bl        .loc_0x70
  mr        r0, r3

.loc_0x5C:
  mr        r3, r0

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	80338B94
 * Size:	000058
 */
void __ct__Q28PSSystem8SeqSoundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x285370
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5744
  li        r5, 0
  stw       r0, 0x6A0(r31)
  subi      r4, r3, 0x582C
  addi      r0, r4, 0xD4
  mr        r3, r31
  stw       r5, 0x6A4(r31)
  stw       r4, 0x10(r31)
  stw       r0, 0x6A0(r31)
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
 * Size:	000090
 */
void JAISequence::~JAISequence()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80338BEC
 * Size:	000070
 */
void makeStream__Q28PSSystem5SysIFFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r4, 0x8(r3)
  cmplwi    r4, 0
  beq-      .loc_0x3C
  li        r3, 0x1E0
  li        r5, 0
  bl        -0x314CCC
  mr.       r0, r3
  beq-      .loc_0x34
  bl        .loc_0x70
  mr        r0, r3

.loc_0x34:
  mr        r3, r0
  b         .loc_0x60

.loc_0x3C:
  lwz       r4, -0x7548(r13)
  li        r3, 0x1E0
  li        r5, 0
  bl        -0x314CF4
  mr.       r0, r3
  beq-      .loc_0x5C
  bl        .loc_0x70
  mr        r0, r3

.loc_0x5C:
  mr        r3, r0

.loc_0x60:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	80338C5C
 * Size:	000058
 */
void __ct__Q28PSSystem11StreamSoundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x2851F8
  lis       r4, 0x804E
  lis       r3, 0x804E
  subi      r0, r4, 0x5744
  li        r5, 0
  stw       r0, 0x1D8(r31)
  subi      r4, r3, 0x5914
  addi      r0, r4, 0xD4
  mr        r3, r31
  stw       r5, 0x1DC(r31)
  stw       r4, 0x10(r31)
  stw       r0, 0x1D8(r31)
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
 * Size:	000074
 */
void JAIStream::~JAIStream()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80338CB4
 * Size:	000070
 */
void JAIBasic::startSoundActorReturnHandleT<JAISe>(JAISe **, unsigned long, JAInter::Actor *, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  li        r9, 0
  stw       r0, 0x24(r1)
  rlwinm.   r0,r5,0,0,1
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r9, 0x8(r1)
  bne-      .loc_0x2C
  li        r0, 0x1
  stw       r0, 0x8(r1)

.loc_0x2C:
  mr        r4, r5
  addi      r5, r1, 0x8
  bl        .loc_0x70
  lwz       r0, 0x8(r1)
  stw       r0, 0x0(r31)
  lwz       r3, 0x8(r1)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x10(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x5C:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x70:
*/
}

/*
 * --INFO--
 * Address:	80338D24
 * Size:	000068
 */
void JAIBasic::startSoundActorT<JAISe>(unsigned long, JAISe **, JAInter::Actor *, unsigned long, unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r4
  mr        r26, r3
  mr        r28, r5
  mr        r29, r6
  mr        r30, r7
  mr        r31, r8
  mr        r3, r27
  bl        -0x281838
  mr.       r9, r3
  beq-      .loc_0x54
  mr        r3, r26
  mr        r4, r27
  mr        r5, r28
  mr        r6, r29
  mr        r7, r30
  mr        r8, r31
  bl        -0x28C510

.loc_0x54:
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80338D8C
 * Size:	000028
 */
void __sinit_PSSystemIF_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  subi      r3, r13, 0x67A4
  li        r4, 0
  stw       r0, 0x14(r1)
  bl        -0x303CA0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}