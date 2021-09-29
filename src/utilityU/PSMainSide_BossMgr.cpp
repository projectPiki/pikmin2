

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void __ct__Q33PSM12BossBgmFader9TypedProcFff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046C6B8
 * Size:	0001D8
 */
void update__Q33PSM12BossBgmFader9TypedProcFv(void)
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
  mr        r30, r3
  li        r0, 0
  lfs       f1, 0x2C(r3)
  lfs       f31, 0x295C(r2)
  stw       r0, 0x28(r3)
  lwz       r3, 0x0(r3)
  b         .loc_0x6C

.loc_0x44:
  lwz       r4, 0x0(r3)
  lbz       r0, 0xFC(r4)
  cmplwi    r0, 0
  beq-      .loc_0x68
  lfs       f0, 0xE0(r4)
  fcmpo     cr0, f0, f31
  bge-      .loc_0x68
  fmr       f31, f0
  stw       r4, 0x28(r30)

.loc_0x68:
  lwz       r3, 0xC(r3)

.loc_0x6C:
  cmplwi    r3, 0
  bne+      .loc_0x44
  lfs       f0, 0x2964(r2)
  fcmpo     cr0, f31, f0
  ble-      .loc_0x84
  fmr       f31, f1

.loc_0x84:
  lfs       f30, 0x2968(r2)
  li        r31, 0
  lwz       r29, 0x0(r30)
  b         .loc_0xD8

.loc_0x94:
  lwz       r3, 0x0(r29)
  lwz       r12, 0x28(r3)
  lwz       r12, 0xDC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x0(r29)
  bl        -0xC848
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xD4
  lwz       r3, 0x0(r29)
  lfs       f0, 0xE0(r3)
  fcmpo     cr0, f0, f30
  cror      2, 0, 0x2
  bne-      .loc_0xD4
  fmr       f30, f0
  mr        r31, r3

.loc_0xD4:
  lwz       r29, 0xC(r29)

.loc_0xD8:
  cmplwi    r29, 0
  bne+      .loc_0x94
  lwz       r0, 0x28(r30)
  cmplwi    r0, 0
  beq-      .loc_0x164
  lfs       f0, 0x1C(r30)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x110
  li        r0, 0
  stw       r0, 0x20(r30)
  lwz       r0, 0x20(r30)
  ori       r0, r0, 0x3
  stw       r0, 0x20(r30)
  b         .loc_0x16C

.loc_0x110:
  lfs       f0, 0x14(r30)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x134
  li        r0, 0
  stw       r0, 0x20(r30)
  lwz       r0, 0x20(r30)
  ori       r0, r0, 0x2
  stw       r0, 0x20(r30)
  b         .loc_0x16C

.loc_0x134:
  lfs       f0, 0x10(r30)
  fcmpo     cr0, f31, f0
  bge-      .loc_0x158
  li        r0, 0
  stw       r0, 0x20(r30)
  lwz       r0, 0x20(r30)
  ori       r0, r0, 0x1
  stw       r0, 0x20(r30)
  b         .loc_0x16C

.loc_0x158:
  li        r0, 0
  stw       r0, 0x20(r30)
  b         .loc_0x16C

.loc_0x164:
  li        r0, 0
  stw       r0, 0x20(r30)

.loc_0x16C:
  cmplwi    r31, 0
  beq-      .loc_0x1A8
  lfs       f0, 0x10(r30)
  fcmpo     cr0, f30, f0
  bge-      .loc_0x1A8
  lwz       r0, 0x20(r30)
  cmpwi     r0, 0
  bne-      .loc_0x1A8
  li        r0, 0
  fmr       f31, f30
  stw       r0, 0x20(r30)
  lwz       r0, 0x20(r30)
  ori       r0, r0, 0x4
  stw       r0, 0x20(r30)
  stw       r31, 0x28(r30)

.loc_0x1A8:
  stfs      f31, 0x2C(r30)
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
 * Address:	........
 * Size:	00000C
 */
void endUpdate__Q33PSM12BossBgmFader9TypedProcFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000100
 */
void getBossFadeVolume__Q33PSM12BossBgmFader9TypedProcFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
void __ct__Q33PSM12BossBgmFader17TypedProc_MidBossFff(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __dt__Q33PSM12BossBgmFader9TypedProcFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046C890
 * Size:	00003C
 */
void update__Q33PSM12BossBgmFader17TypedProc_MidBossFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x1EC
  lwz       r3, 0x30(r31)
  cmplwi    r3, 0
  beq-      .loc_0x28
  bl        -0x14334

.loc_0x28:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C8CC
 * Size:	0000EC
 */
void __ct__Q33PSM12BossBgmFader3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804F
  stw       r0, 0x14(r1)
  subi      r0, r4, 0xB30
  stw       r31, 0xC(r1)
  mr        r31, r3
  lis       r3, 0x804F
  stw       r30, 0x8(r1)
  addi      r30, r31, 0x4
  stw       r0, 0x0(r31)
  subi      r0, r3, 0xB24
  mr        r3, r30
  stw       r31, -0x6E50(r13)
  stw       r0, 0x0(r31)
  bl        -0x446038
  lis       r3, 0x804F
  lfs       f2, 0x2970(r2)
  subi      r0, r3, 0x91C
  lfs       f1, 0x2974(r2)
  stw       r0, 0xC(r30)
  li        r0, 0
  lfs       f0, 0x2978(r2)
  stfs      f2, 0x10(r30)
  lfs       f2, 0x2958(r2)
  stfs      f1, 0x14(r30)
  lfs       f1, 0x295C(r2)
  stfs      f0, 0x18(r30)
  lfs       f0, 0x2960(r2)
  lfs       f3, 0x14(r30)
  fmuls     f2, f3, f2
  stfs      f2, 0x1C(r30)
  stw       r0, 0x20(r30)
  stw       r0, 0x24(r30)
  stw       r0, 0x28(r30)
  stfs      f1, 0x2C(r30)
  lfs       f1, 0x18(r30)
  fcmpo     cr0, f1, f0
  bgt-      .loc_0xB8
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x2658
  li        r4, 0x2F
  subi      r5, r5, 0x2640
  crclr     6, 0x6
  bl        -0x442340

.loc_0xB8:
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0x928
  mr        r3, r31
  stw       r4, 0xC(r30)
  stw       r0, 0x30(r30)
  stb       r0, 0x38(r31)
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
 * Address:	........
 * Size:	000074
 */
void __dt__Q33PSM12BossBgmFader17TypedProc_MidBossFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8046C9B8
 * Size:	000024
 */
void appendTarget__Q33PSM12BossBgmFader3MgrFP25JSULink<PSM::EnemyBoss>(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r3, 0x4
  stw       r0, 0x14(r1)
  bl        -0x4460E4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8046C9DC
 * Size:	000768
 */
void exec__Q33PSM12BossBgmFader3MgrFv(void)
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
  stmw      r26, 0x8(r1)
  mr        r27, r3
  lis       r4, 0x804A
  addi      r3, r27, 0x4
  lwz       r12, 0x10(r27)
  subi      r31, r4, 0x2658
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  bl        -0x134AE0
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, -0x6780(r13)
  lwz       r30, 0x0(r3)
  cmplwi    r0, 0
  bne-      .loc_0x78
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x442410

.loc_0x78:
  lwz       r28, -0x6780(r13)
  cmplwi    r28, 0
  bne-      .loc_0x98
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x442430

.loc_0x98:
  lwz       r0, 0x4(r28)
  cmplwi    r0, 0
  bne-      .loc_0xB8
  addi      r3, r31, 0x30
  addi      r5, r31, 0x18
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x442450

.loc_0xB8:
  lwz       r3, 0x4(r28)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0xD0
  li        r3, 0
  b         .loc_0xD4

.loc_0xD0:
  bl        -0x13742C

.loc_0xD4:
  cmplwi    r3, 0
  beq-      .loc_0xF4
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r29, 0x0(r3)
  b         .loc_0xF8

.loc_0xF4:
  li        r29, 0

.loc_0xF8:
  lwz       r0, -0x6780(r13)
  li        r28, 0
  cmplwi    r0, 0
  bne-      .loc_0x11C
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x4424B4

.loc_0x11C:
  lwz       r26, -0x6780(r13)
  cmplwi    r26, 0
  bne-      .loc_0x13C
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4424D4

.loc_0x13C:
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x15C
  addi      r3, r31, 0x30
  addi      r5, r31, 0x18
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x4424F4

.loc_0x15C:
  lwz       r3, 0x4(r26)
  lwz       r26, 0x4(r3)
  cmplwi    r26, 0
  bne-      .loc_0x180
  addi      r3, r31, 0x30
  addi      r5, r31, 0x3C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x442518

.loc_0x180:
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0x40(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1A0
  b         .loc_0x1A4

.loc_0x1A0:
  li        r26, 0

.loc_0x1A4:
  cmplwi    r26, 0
  beq-      .loc_0x278
  mr        r3, r26
  bl        -0x5478
  lbz       r0, 0x6(r3)
  cmplwi    r0, 0x6
  bne-      .loc_0x278
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x1E0
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x442578

.loc_0x1E0:
  lwz       r26, -0x6780(r13)
  cmplwi    r26, 0
  bne-      .loc_0x200
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x442598

.loc_0x200:
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x220
  addi      r3, r31, 0x30
  addi      r5, r31, 0x18
  li        r4, 0xCF
  crclr     6, 0x6
  bl        -0x4425B8

.loc_0x220:
  lwz       r3, 0x4(r26)
  lwz       r26, 0x4(r3)
  cmplwi    r26, 0
  bne-      .loc_0x244
  addi      r3, r31, 0x30
  addi      r5, r31, 0x3C
  li        r4, 0xD1
  crclr     6, 0x6
  bl        -0x4425DC

.loc_0x244:
  addi      r3, r26, 0x10
  li        r4, 0x2
  bl        -0x138D8C
  cmplwi    r3, 0
  beq-      .loc_0x270
  lwz       r12, 0x10(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x0(r3)
  b         .loc_0x274

.loc_0x270:
  li        r0, 0

.loc_0x274:
  mr        r28, r0

.loc_0x278:
  lwz       r0, 0x24(r27)
  cmpwi     r0, 0x3
  bne-      .loc_0x2B4
  lwz       r0, 0x28(r27)
  cmpwi     r0, 0x3
  beq-      .loc_0x2E0
  li        r3, 0x1
  bl        -0x145C4
  cmplwi    r3, 0
  beq-      .loc_0x2E0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x2E0

.loc_0x2B4:
  lwz       r0, 0x28(r27)
  cmpwi     r0, 0x3
  bne-      .loc_0x2E0
  li        r3, 0x1
  bl        -0x145F4
  cmplwi    r3, 0
  beq-      .loc_0x2E0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x2E0:
  lbz       r0, 0x38(r27)
  cmplwi    r0, 0
  bne-      .loc_0x464
  lwz       r3, 0x24(r27)
  cmpwi     r3, 0
  bne-      .loc_0x3A4
  lwz       r0, 0x28(r27)
  cmpwi     r0, 0
  beq-      .loc_0x3A4
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x324
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x4426BC

.loc_0x324:
  lwz       r26, -0x6780(r13)
  cmplwi    r26, 0
  bne-      .loc_0x344
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4426DC

.loc_0x344:
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x364
  addi      r3, r31, 0x30
  addi      r5, r31, 0x18
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x4426FC

.loc_0x364:
  lwz       r3, 0x4(r26)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x37C
  li        r3, 0
  b         .loc_0x380

.loc_0x37C:
  bl        -0x1376D8

.loc_0x380:
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0
  beq-      .loc_0x464
  lwz       r12, 0x10(r3)
  li        r4, 0
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x464

.loc_0x3A4:
  cmpwi     r3, 0x3
  beq-      .loc_0x3B4
  cmpwi     r3, 0x2
  bne-      .loc_0x464

.loc_0x3B4:
  lwz       r0, 0x28(r27)
  cmpwi     r0, 0x1
  beq-      .loc_0x3C8
  cmpwi     r0, 0
  bne-      .loc_0x464

.loc_0x3C8:
  lwz       r0, -0x6780(r13)
  cmplwi    r0, 0
  bne-      .loc_0x3E8
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1D3
  crclr     6, 0x6
  bl        -0x442780

.loc_0x3E8:
  lwz       r26, -0x6780(r13)
  cmplwi    r26, 0
  bne-      .loc_0x408
  addi      r3, r31, 0x24
  addi      r5, r31, 0x18
  li        r4, 0x1DC
  crclr     6, 0x6
  bl        -0x4427A0

.loc_0x408:
  lwz       r0, 0x4(r26)
  cmplwi    r0, 0
  bne-      .loc_0x428
  addi      r3, r31, 0x30
  addi      r5, r31, 0x18
  li        r4, 0xC7
  crclr     6, 0x6
  bl        -0x4427C0

.loc_0x428:
  lwz       r3, 0x4(r26)
  lwz       r3, 0x4(r3)
  cmplwi    r3, 0
  bne-      .loc_0x440
  li        r3, 0
  b         .loc_0x444

.loc_0x440:
  bl        -0x13779C

.loc_0x444:
  lhz       r0, 0x130(r3)
  cmplwi    r0, 0
  bne-      .loc_0x464
  lwz       r12, 0x10(r3)
  li        r4, 0x1
  lwz       r12, 0x54(r12)
  mtctr     r12
  bctrl     

.loc_0x464:
  lwz       r0, 0x24(r27)
  cmpwi     r0, 0x1
  beq-      .loc_0x508
  bge-      .loc_0x480
  cmpwi     r0, 0
  bge-      .loc_0x640
  b         .loc_0x734

.loc_0x480:
  cmpwi     r0, 0x4
  beq-      .loc_0x6BC
  bge-      .loc_0x734
  cmplwi    r30, 0
  beq-      .loc_0x4B4
  mr        r3, r30
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x4B4:
  cmplwi    r28, 0
  beq-      .loc_0x4DC
  mr        r3, r28
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r28)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x4DC:
  cmplwi    r29, 0
  beq-      .loc_0x734
  mr        r3, r29
  lfs       f1, 0x296C(r2)
  lwz       r12, 0x10(r29)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x734

.loc_0x508:
  lfs       f2, 0x30(r27)
  li        r0, 0
  lfs       f1, 0x18(r27)
  lfs       f0, 0x2960(r2)
  fsubs     f31, f2, f1
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x53C
  lfs       f0, 0x1C(r27)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x53C
  li        r0, 0x1

.loc_0x53C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x558
  addi      r3, r31, 0
  addi      r5, r31, 0x18
  li        r4, 0xA7
  crclr     6, 0x6
  bl        -0x4428F0

.loc_0x558:
  lfs       f2, 0x2960(r2)
  fmr       f1, f31
  lfs       f3, 0x1C(r27)
  li        r3, 0
  fmr       f5, f2
  lfs       f4, 0x296C(r2)
  bl        -0x3B2D08
  fmr       f31, f1
  lfs       f0, 0x2960(r2)
  li        r0, 0
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x5A0
  lfs       f0, 0x296C(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x5A0
  li        r0, 0x1

.loc_0x5A0:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5BC
  addi      r3, r31, 0
  addi      r5, r31, 0x18
  li        r4, 0xAC
  crclr     6, 0x6
  bl        -0x442954

.loc_0x5BC:
  lfs       f0, 0x296C(r2)
  cmplwi    r30, 0
  fsubs     f30, f0, f31
  beq-      .loc_0x5EC
  mr        r3, r30
  fmr       f1, f30
  lwz       r12, 0x10(r30)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x5EC:
  cmplwi    r28, 0
  beq-      .loc_0x614
  mr        r3, r28
  fmr       f1, f30
  lwz       r12, 0x10(r28)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x614:
  cmplwi    r29, 0
  beq-      .loc_0x734
  mr        r3, r29
  fmr       f1, f31
  lwz       r12, 0x10(r29)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x734

.loc_0x640:
  cmplwi    r30, 0
  beq-      .loc_0x668
  mr        r3, r30
  lfs       f1, 0x296C(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x668:
  cmplwi    r28, 0
  beq-      .loc_0x690
  mr        r3, r28
  lfs       f1, 0x296C(r2)
  lwz       r12, 0x10(r28)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x690:
  cmplwi    r29, 0
  beq-      .loc_0x734
  mr        r3, r29
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r29)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x734

.loc_0x6BC:
  cmplwi    r30, 0
  beq-      .loc_0x6E4
  mr        r3, r30
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r30)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x6E4:
  cmplwi    r28, 0
  beq-      .loc_0x70C
  mr        r3, r28
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r28)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x70C:
  cmplwi    r29, 0
  beq-      .loc_0x734
  mr        r3, r29
  lfs       f1, 0x2960(r2)
  lwz       r12, 0x10(r29)
  li        r4, 0x28
  li        r5, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x734:
  lwz       r3, 0x24(r27)
  li        r0, 0
  stw       r3, 0x28(r27)
  stb       r0, 0x38(r27)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lmw       r26, 0x8(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}