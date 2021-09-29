

/*
 * --INFO--
 * Address:	80470F0C
 * Size:	000078
 */
void makeSeSound__Q23PSM7SeSoundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r3, 0x4A4
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  bl        -0x44D07C
  mr.       r31, r3
  beq-      .loc_0x60
  bl        -0x3BD608
  lis       r3, 0x804F
  lfs       f1, 0x2A30(r2)
  subi      r0, r3, 0x64C
  lfs       f0, 0x2A34(r2)
  stw       r0, 0x10(r31)
  li        r0, 0
  stfs      f1, 0x484(r31)
  stfs      f0, 0x488(r31)
  stfs      f0, 0x48C(r31)
  stfs      f0, 0x490(r31)
  stfs      f0, 0x494(r31)
  stb       r0, 0x498(r31)
  stb       r0, 0x499(r31)
  stb       r0, 0x49C(r31)
  stfs      f1, 0x4A0(r31)

.loc_0x60:
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
 * Address:	........
 * Size:	000074
 */
void JAISe::~JAISe()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void psACos__Q23PSM7SeSoundFf(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80470F84
 * Size:	000004
 */
void onGet__Q23PSM7SeSoundFv(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80470F88
 * Size:	0000A4
 */
void onRelease__Q23PSM7SeSoundFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x23D0
  stw       r30, 0x8(r1)
  lbz       r0, 0x1A(r3)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  lwz       r0, 0x38(r3)
  cmplwi    r0, 0
  beq-      .loc_0x8C
  mr        r30, r0
  bne-      .loc_0x50
  addi      r3, r31, 0x1A0
  addi      r5, r31, 0x1B8
  li        r4, 0xB8
  crclr     6, 0x6
  bl        -0x446994

.loc_0x50:
  mr        r3, r30
  bl        -0x13D88
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x8C
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  bne-      .loc_0x80
  addi      r3, r31, 0x1C4
  addi      r5, r31, 0x1B8
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x4469C4

.loc_0x80:
  lwz       r3, -0x6E44(r13)
  mr        r4, r30
  bl        -0x44A3EC

.loc_0x8C:
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
 * Address:	8047102C
 * Size:	000154
 */
void initParameter__Q23PSM7SeSoundFPvPQ27JAInter5ActorUlUlUcPQ27JAInter9SoundInfo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r10, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r10, 0x23D0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r9
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        -0x3BBA44
  li        r0, 0
  stb       r0, 0x498(r28)
  lbz       r0, 0x1A(r28)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  lwz       r0, 0x38(r28)
  cmplwi    r0, 0
  beq-      .loc_0xA8
  mr        r30, r0
  bne-      .loc_0x6C
  addi      r3, r31, 0x1A0
  addi      r5, r31, 0x1B8
  li        r4, 0xD0
  crclr     6, 0x6
  bl        -0x446A54

.loc_0x6C:
  mr        r3, r30
  bl        -0x13E48
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xA8
  lwz       r0, -0x6E44(r13)
  cmplwi    r0, 0
  bne-      .loc_0x9C
  addi      r3, r31, 0x1C4
  addi      r5, r31, 0x1B8
  li        r4, 0x89
  crclr     6, 0x6
  bl        -0x446A84

.loc_0x9C:
  lwz       r3, -0x6E44(r13)
  mr        r4, r30
  bl        -0x44A7EC

.loc_0xA8:
  cmplwi    r29, 0
  bne-      .loc_0xC4
  addi      r3, r31, 0x1A0
  addi      r5, r31, 0x1B8
  li        r4, 0xD7
  crclr     6, 0x6
  bl        -0x446AAC

.loc_0xC4:
  lwz       r0, 0x0(r29)
  rlwinm.   r30,r0,4,28,31
  beq-      .loc_0x12C
  bl        -0x3B6C08
  lis       r0, 0x4330
  stw       r30, 0xC(r1)
  lfd       f3, 0x2A40(r2)
  stw       r0, 0x8(r1)
  lfs       f0, 0x2A3C(r2)
  lfd       f2, 0x8(r1)
  lfs       f4, 0x2A34(r2)
  fsubs     f2, f2, f3
  fdivs     f0, f2, f0
  fmuls     f0, f0, f1
  stfs      f0, 0x4A0(r28)
  lfs       f0, 0x4A0(r28)
  fcmpo     cr0, f0, f4
  bge-      .loc_0x110
  b         .loc_0x124

.loc_0x110:
  lfs       f4, 0x2A30(r2)
  fcmpo     cr0, f0, f4
  ble-      .loc_0x120
  b         .loc_0x124

.loc_0x120:
  fmr       f4, f0

.loc_0x124:
  stfs      f4, 0x4A0(r28)
  b         .loc_0x134

.loc_0x12C:
  lfs       f0, 0x2A34(r2)
  stfs      f0, 0x4A0(r28)

.loc_0x134:
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
 * Address:	80471180
 * Size:	0002D8
 */
void setDistanceVolumeCommon__Q23PSM7SeSoundFfUc(void)
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
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  lwz       r12, 0x10(r3)
  lis       r5, 0x804A
  mr        r29, r4
  mr        r31, r3
  lwz       r12, 0x34(r12)
  subi      r30, r5, 0x23D0
  lfs       f1, 0x2ABC(r2)
  li        r4, 0
  li        r5, 0x1
  mtctr     r12
  bctrl     
  lwz       r0, 0x20(r31)
  lwz       r3, 0x34(r31)
  rlwinm.   r4,r0,2,30,31
  lfs       f31, 0x18(r3)
  rlwinm    r3,r0,20,28,31
  bne-      .loc_0x70
  b         .loc_0xC4

.loc_0x70:
  cmplwi    r4, 0x2
  bne-      .loc_0x90
  addi      r3, r30, 0x1D0
  addi      r5, r30, 0x1B8
  li        r4, 0x1F
  crclr     6, 0x6
  bl        -0x446BC8
  b         .loc_0xAC

.loc_0x90:
  cmplwi    r4, 0x3
  bne-      .loc_0xAC
  addi      r3, r30, 0x1D0
  addi      r5, r30, 0x1B8
  li        r4, 0x23
  crclr     6, 0x6
  bl        -0x446BE8

.loc_0xAC:
  addi      r3, r30, 0x1D0
  addi      r5, r30, 0x1B8
  li        r4, 0x25
  crclr     6, 0x6
  bl        -0x446BFC
  li        r3, 0

.loc_0xC4:
  lbz       r0, 0x498(r31)
  rlwinm    r4,r3,0,24,31
  cmplwi    r0, 0x1
  bne-      .loc_0xE4
  fmr       f1, f31
  mr        r3, r31
  bl        0x240
  b         .loc_0xF0

.loc_0xE4:
  fmr       f1, f31
  mr        r3, r29
  bl        0x29C

.loc_0xF0:
  lfs       f0, 0x4A0(r31)
  lbz       r0, 0x1A(r31)
  fsubs     f30, f1, f0
  cmplwi    r0, 0
  beq-      .loc_0x110
  lwz       r0, 0x38(r31)
  cmplwi    r0, 0
  beq-      .loc_0x288

.loc_0x110:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x130
  addi      r3, r30, 0x1E0
  addi      r5, r30, 0x1B8
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x446C6C

.loc_0x130:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x150
  addi      r3, r30, 0x1E0
  addi      r5, r30, 0x1B8
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x446C8C

.loc_0x150:
  lwz       r0, 0x8(r29)
  cmplwi    r0, 0
  bne-      .loc_0x170
  addi      r3, r30, 0x1EC
  addi      r5, r30, 0x1B8
  li        r4, 0xA1
  crclr     6, 0x6
  bl        -0x446CAC

.loc_0x170:
  lwz       r29, 0x8(r29)
  cmplwi    r29, 0
  bne-      .loc_0x190
  addi      r3, r30, 0x1A0
  addi      r5, r30, 0x1B8
  li        r4, 0x105
  crclr     6, 0x6
  bl        -0x446CCC

.loc_0x190:
  mr        r3, r29
  lbz       r4, 0x49C(r31)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  fmr       f31, f1
  lfs       f0, 0x2A34(r2)
  fcmpu     cr0, f0, f31
  bne-      .loc_0x1D0
  lwz       r6, 0x20(r31)
  addi      r3, r30, 0x1A0
  addi      r5, r30, 0x1F8
  li        r4, 0x10D
  crclr     6, 0x6
  bl        -0x446D0C

.loc_0x1D0:
  lwz       r0, -0x6780(r13)
  fmuls     f30, f30, f31
  cmplwi    r0, 0
  bne-      .loc_0x1F4
  addi      r3, r30, 0x1E0
  addi      r5, r30, 0x1B8
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x446D30

.loc_0x1F4:
  lwz       r29, -0x6780(r13)
  cmplwi    r29, 0
  bne-      .loc_0x214
  addi      r3, r30, 0x1E0
  addi      r5, r30, 0x1B8
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x446D50

.loc_0x214:
  lwz       r0, 0x4(r29)
  cmplwi    r0, 0
  bne-      .loc_0x234
  addi      r3, r30, 0x1EC
  addi      r5, r30, 0x1B8
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x446D70

.loc_0x234:
  lwz       r3, 0x4(r29)
  lwz       r29, 0x4(r3)
  cmplwi    r29, 0
  bne-      .loc_0x258
  addi      r3, r30, 0x1EC
  addi      r5, r30, 0x220
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x446D94

.loc_0x258:
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x30(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x10(r31)
  li        r5, 0x2
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     

.loc_0x288:
  lfs       f1, 0x2A34(r2)
  fcmpo     cr0, f30, f1
  bge-      .loc_0x298
  b         .loc_0x2AC

.loc_0x298:
  lfs       f1, 0x2A30(r2)
  fcmpo     cr0, f30, f1
  ble-      .loc_0x2A8
  b         .loc_0x2AC

.loc_0x2A8:
  fmr       f1, f30

.loc_0x2AC:
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80471458
 * Size:	000044
 */
void specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo(void)
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  li        r0, 0x1
  lfs       f1, 0x4(r4)
  stfs      f0, 0x484(r3)
  lfs       f0, 0x8(r4)
  stfs      f1, 0x488(r3)
  lfs       f1, 0xC(r4)
  stfs      f0, 0x48C(r3)
  lfs       f0, 0x10(r4)
  stfs      f1, 0x490(r3)
  lbz       r5, 0x14(r4)
  stfs      f0, 0x494(r3)
  lbz       r4, 0x15(r4)
  stb       r5, 0x498(r3)
  stb       r4, 0x499(r3)
  stb       r0, 0x498(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8047149C
 * Size:	00006C
 */
void calcVolumeSpecialized__Q23PSM7SeSoundFf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  mr        r31, r3
  lbz       r0, 0x498(r3)
  cmplwi    r0, 0x1
  beq-      .loc_0x44
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2230
  li        r4, 0x126
  subi      r5, r5, 0x2218
  crclr     6, 0x6
  bl        -0x446E9C

.loc_0x44:
  fmr       f1, f31
  addi      r3, r31, 0x484
  li        r4, 0
  bl        -0x13C988
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
 * Address:	80471508
 * Size:	00008C
 */
void calcVolume__Q23PSM7SeSoundFfUcUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stfd      f31, 0x18(r1)
  fmr       f31, f1
  stw       r31, 0x14(r1)
  stw       r30, 0x10(r1)
  rlwinm    r30,r4,2,22,29
  stw       r29, 0xC(r1)
  mr        r29, r3
  lwz       r31, -0x6E3C(r13)
  add       r3, r31, r30
  lwz       r0, 0x4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x58
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x21F0
  li        r4, 0x5D
  subi      r5, r5, 0x2218
  crclr     6, 0x6
  bl        -0x446F1C

.loc_0x58:
  add       r3, r31, r30
  fmr       f1, f31
  lwz       r3, 0x4(r3)
  mr        r4, r29
  bl        -0x13CA0C
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
 * Address:	80471594
 * Size:	0000B8
 */
void setSeDistancePan__Q23PSM7SeSoundFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lfs       f1, 0x2A48(r2)
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lbz       r0, 0x1A(r3)
  cmplwi    r0, 0
  bne-      .loc_0x40
  lwz       r3, 0x34(r29)
  lfs       f1, 0x18(r3)
  bl        .loc_0xB8
  b         .loc_0x88

.loc_0x40:
  lwz       r0, 0x38(r29)
  cmplwi    r0, 0
  beq-      .loc_0x88
  mr        r31, r0
  bne-      .loc_0x70
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2230
  li        r4, 0x151
  subi      r5, r5, 0x2218
  crclr     6, 0x6
  bl        -0x446FC0

.loc_0x70:
  mr        r3, r31
  lwz       r12, 0x28(r31)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x38(r3)

.loc_0x88:
  mr        r3, r29
  rlwinm    r5,r30,0,24,31
  li        r4, 0x4
  li        r6, 0
  bl        -0x3BCE78
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0xB8:
*/
}

/*
 * --INFO--
 * Address:	8047164C
 * Size:	0000C8
 */
void calcPan__Q23PSM7SeSoundFRC3Vecf(void)
{
/*
.loc_0x0:
  lfs       f0, 0x2A34(r2)
  stwu      r1, -0x10(r1)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1C
  lfs       f2, -0x7918(r13)
  b         .loc_0x80

.loc_0x1C:
  lfs       f0, 0x0(r3)
  lfs       f2, 0x2A30(r2)
  fneg      f0, f0
  lfs       f3, 0x2A38(r2)
  fdivs     f0, f0, f1
  fadds     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmpwi     r0, 0
  bge-      .loc_0x58
  lis       r3, 0x804A
  lfs       f2, -0x23C4(r3)
  b         .loc_0x80

.loc_0x58:
  cmpwi     r0, 0x65
  blt-      .loc_0x70
  lis       r3, 0x804A
  subi      r3, r3, 0x23C4
  lfs       f2, 0x190(r3)
  b         .loc_0x80

.loc_0x70:
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x23C4
  lfsx      f2, r3, r0

.loc_0x80:
  lbz       r0, -0x6344(r13)
  extsb.    r0, r0
  bne-      .loc_0xA4
  lfs       f1, -0x791C(r13)
  li        r0, 0x1
  lfs       f0, 0x2A4C(r2)
  stb       r0, -0x6344(r13)
  fdivs     f0, f1, f0
  stfs      f0, -0x6348(r13)

.loc_0xA4:
  lfs       f0, -0x6348(r13)
  lfs       f1, 0x2A30(r2)
  fmuls     f0, f0, f2
  fcmpo     cr0, f0, f1
  ble-      .loc_0xBC
  b         .loc_0xC0

.loc_0xBC:
  fmr       f1, f0

.loc_0xC0:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80471714
 * Size:	000088
 */
void setSeDistanceDolby__Q23PSM7SeSoundFUc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x2A34(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  stw       r30, 0x8(r1)
  mr        r30, r3
  lbz       r0, 0x1A(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lwz       r3, 0x34(r30)
  lfs       f1, 0x18(r3)
  bl        .loc_0x88
  b         .loc_0x5C

.loc_0x3C:
  lwz       r3, 0x38(r30)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r12, 0x28(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x3C(r3)

.loc_0x5C:
  mr        r3, r30
  rlwinm    r5,r31,0,24,31
  li        r4, 0x4
  li        r6, 0
  bl        -0x3BCE74
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x88:
*/
}

/*
 * --INFO--
 * Address:	8047179C
 * Size:	00010C
 */
void calcDolby__Q23PSM7SeSoundFRC3Vecf(void)
{
/*
.loc_0x0:
  lfs       f0, 0x2A34(r2)
  stwu      r1, -0x10(r1)
  fcmpo     cr0, f1, f0
  cror      2, 0, 0x2
  bne-      .loc_0x1C
  fmr       f1, f0
  b         .loc_0x104

.loc_0x1C:
  lfs       f0, 0x8(r3)
  lfs       f2, 0x2A30(r2)
  fneg      f0, f0
  lfs       f3, 0x2A38(r2)
  fdivs     f0, f0, f1
  fadds     f0, f2, f0
  fmuls     f0, f3, f0
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  cmpwi     r0, 0
  bge-      .loc_0x58
  lis       r3, 0x804A
  lfs       f0, -0x23C4(r3)
  b         .loc_0x80

.loc_0x58:
  cmpwi     r0, 0x65
  blt-      .loc_0x70
  lis       r3, 0x804A
  subi      r3, r3, 0x23C4
  lfs       f0, 0x190(r3)
  b         .loc_0x80

.loc_0x70:
  lis       r3, 0x804A
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x23C4
  lfsx      f0, r3, r0

.loc_0x80:
  lfs       f3, -0x7928(r13)
  fcmpo     cr0, f0, f3
  bge-      .loc_0x94
  lfs       f0, 0x2A34(r2)
  b         .loc_0xE0

.loc_0x94:
  lfs       f4, -0x7924(r13)
  fcmpo     cr0, f0, f4
  bge-      .loc_0xB8
  fsubs     f1, f4, f3
  lfs       f2, 0x2A48(r2)
  fsubs     f0, f0, f3
  fdivs     f1, f2, f1
  fmuls     f0, f1, f0
  b         .loc_0xE0

.loc_0xB8:
  lfs       f1, -0x7920(r13)
  fcmpo     cr0, f0, f1
  bge-      .loc_0xDC
  fsubs     f1, f1, f4
  lfs       f2, 0x2A48(r2)
  fsubs     f0, f0, f4
  fdivs     f1, f2, f1
  fmadds    f0, f1, f0, f2
  b         .loc_0xE0

.loc_0xDC:
  lfs       f0, 0x2A30(r2)

.loc_0xE0:
  lfs       f1, 0x2A30(r2)
  fcmpo     cr0, f0, f1
  ble-      .loc_0xF0
  b         .loc_0x104

.loc_0xF0:
  lfs       f1, 0x2A34(r2)
  fcmpo     cr0, f0, f1
  bge-      .loc_0x100
  b         .loc_0x104

.loc_0x100:
  fmr       f1, f0

.loc_0x104:
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804718A8
 * Size:	000028
 */
void __sinit_PSMainSide_Sound_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6350(r13)
  stfsu     f0, -0x658(r3)
  stfs      f0, -0x634C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}