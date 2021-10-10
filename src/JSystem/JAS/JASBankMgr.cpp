

/*
 * --INFO--
 * Address:	80098F34
 * Size:	000138
 */
void JASBankMgr::init(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  rlwinm    r30,r3,2,0,29
	  mr        r3, r30
	  lwz       r4, -0x7548(r13)
	  bl        -0x74F14
	  stw       r3, -0x75E4(r13)
	  rlwinm    r3,r31,1,0,30
	  lwz       r4, -0x7548(r13)
	  li        r5, 0
	  bl        -0x74F28
	  stw       r3, -0x75E0(r13)
	  mr        r4, r30
	  lwz       r3, -0x75E4(r13)
	  bl        0xD2E4
	  cmpwi     r31, 0
	  li        r12, 0
	  ble-      .loc_0x11C
	  cmpwi     r31, 0x8
	  subi      r4, r31, 0x8
	  ble-      .loc_0xF0
	  addi      r0, r4, 0x7
	  lis       r3, 0x1
	  rlwinm    r0,r0,29,3,31
	  li        r11, 0
	  subi      r10, r3, 0x1
	  mtctr     r0
	  cmpwi     r4, 0
	  ble-      .loc_0xF0

	.loc_0x88:
	  lwz       r3, -0x75E0(r13)
	  addi      r8, r11, 0x2
	  addi      r7, r11, 0x4
	  addi      r6, r11, 0x6
	  sthx      r10, r3, r11
	  addi      r5, r11, 0x8
	  addi      r4, r11, 0xA
	  addi      r3, r11, 0xC
	  lwz       r9, -0x75E0(r13)
	  addi      r0, r11, 0xE
	  addi      r11, r11, 0x10
	  addi      r12, r12, 0x8
	  sthx      r10, r9, r8
	  lwz       r8, -0x75E0(r13)
	  sthx      r10, r8, r7
	  lwz       r7, -0x75E0(r13)
	  sthx      r10, r7, r6
	  lwz       r6, -0x75E0(r13)
	  sthx      r10, r6, r5
	  lwz       r5, -0x75E0(r13)
	  sthx      r10, r5, r4
	  lwz       r4, -0x75E0(r13)
	  sthx      r10, r4, r3
	  lwz       r3, -0x75E0(r13)
	  sthx      r10, r3, r0
	  bdnz+     .loc_0x88

	.loc_0xF0:
	  lis       r3, 0x1
	  sub       r0, r31, r12
	  rlwinm    r5,r12,1,0,30
	  subi      r4, r3, 0x1
	  mtctr     r0
	  cmpw      r12, r31
	  bge-      .loc_0x11C

	.loc_0x10C:
	  lwz       r3, -0x75E0(r13)
	  sthx      r4, r3, r5
	  addi      r5, r5, 0x2
	  bdnz+     .loc_0x10C

	.loc_0x11C:
	  stw       r31, -0x75E8(r13)
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
 * Size:	000014
 */
void JASBankMgr::registBank(int, JASBank*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009906C
 * Size:	000068
 */
void JASBankMgr::registBankBNK(int, void*)
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
	  lwz       r3, 0x8(r4)
	  mr        r4, r30
	  bl        0x54
	  mr        r3, r31
	  bl        0x1744
	  cmplwi    r3, 0
	  bne-      .loc_0x40
	  li        r3, 0
	  b         .loc_0x50

	.loc_0x40:
	  lwz       r4, -0x75E4(r13)
	  rlwinm    r0,r30,2,0,29
	  stwx      r3, r4, r0
	  li        r3, 0x1

	.loc_0x50:
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
 * Size:	000034
 */
void JASBankMgr::getBank(int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800990D4
 * Size:	000010
 */
void JASBankMgr::getPhysicalNumber(unsigned short)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x75E0(r13)
	  rlwinm    r0,r3,1,15,30
	  lhzx      r3, r4, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800990E4
 * Size:	000018
 */
void JASBankMgr::setVir2PhyTable(unsigned long, int)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0xFFFF
	  beqlr-
	  lwz       r5, -0x75E0(r13)
	  rlwinm    r0,r3,1,0,30
	  sthx      r4, r5, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800990FC
 * Size:	000084
 */
void JASBankMgr::assignWaveBank(int, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r3, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  bge-      .loc_0x20
	  li        r31, 0
	  b         .loc_0x40

	.loc_0x20:
	  lwz       r0, -0x75E8(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x34
	  li        r31, 0
	  b         .loc_0x40

	.loc_0x34:
	  lwz       r5, -0x75E4(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r31, r5, r0

	.loc_0x40:
	  cmplwi    r31, 0
	  bne-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x50:
	  mr        r3, r4
	  bl        0x2F48
	  cmplwi    r3, 0
	  bne-      .loc_0x68
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x68:
	  stw       r3, 0x4(r31)
	  li        r3, 0x1

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099180
 * Size:	000360
 */
void JASBankMgr::noteOn(int, int, unsigned char, unsigned char, unsigned short,
                        void (*)(unsigned long, JASChannel*, JASDsp::TChannel*,
                                 void*),
                        void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  mr        r10, r4
	  stw       r0, 0x64(r1)
	  cmpwi     r10, 0xEF
	  stmw      r24, 0x40(r1)
	  mr        r25, r5
	  mr        r27, r6
	  mr        r28, r7
	  mr        r29, r8
	  mr        r30, r9
	  ble-      .loc_0x50
	  mr        r4, r25
	  mr        r5, r27
	  mr        r6, r28
	  mr        r7, r29
	  mr        r8, r30
	  subi      r3, r10, 0xF0
	  bl        .loc_0x360
	  b         .loc_0x34C

	.loc_0x50:
	  cmpwi     r3, 0
	  bge-      .loc_0x60
	  li        r24, 0
	  b         .loc_0x80

	.loc_0x60:
	  lwz       r0, -0x75E8(r13)
	  cmpw      r3, r0
	  blt-      .loc_0x74
	  li        r24, 0
	  b         .loc_0x80

	.loc_0x74:
	  lwz       r4, -0x75E4(r13)
	  rlwinm    r0,r3,2,0,29
	  lwzx      r24, r4, r0

	.loc_0x80:
	  cmplwi    r24, 0
	  bne-      .loc_0x90
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x90:
	  mr        r3, r24
	  mr        r4, r10
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  bne-      .loc_0xB8
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0xB8:
	  lfs       f2, -0x76D8(r2)
	  li        r0, 0
	  lfs       f0, -0x76D0(r2)
	  rlwinm    r31,r25,0,24,31
	  lfs       f1, -0x76D4(r2)
	  mr        r4, r31
	  stb       r0, 0xC(r1)
	  rlwinm    r5,r27,0,24,31
	  addi      r6, r1, 0xC
	  stw       r0, 0x10(r1)
	  stw       r0, 0x14(r1)
	  stw       r0, 0x18(r1)
	  stfs      f2, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stb       r0, 0x30(r1)
	  sth       r0, 0x32(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x124
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x124:
	  lwz       r3, 0x4(r24)
	  cmplwi    r3, 0
	  bne-      .loc_0x138
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x138:
	  lwz       r12, 0x0(r3)
	  lwz       r4, 0x10(r1)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r25, r3
	  bne-      .loc_0x15C
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x15C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr.       r24, r3
	  bne-      .loc_0x17C
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x17C:
	  mr        r3, r25
	  lwz       r12, 0x0(r25)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr.       r25, r3
	  bne-      .loc_0x1A0
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x1A0:
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E8
	  bl        0x5590C
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x1E0
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x7540C
	  mr.       r26, r3
	  beq-      .loc_0x1DC
	  bl        0xDE2C

	.loc_0x1DC:
	  stw       r26, -0x75DC(r13)

	.loc_0x1E0:
	  lwz       r3, 0x8(r1)
	  bl        0x558FC

	.loc_0x1E8:
	  lwz       r3, -0x75DC(r13)
	  li        r4, 0x118
	  bl        0xDEBC
	  mr.       r26, r3
	  beq-      .loc_0x20C
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x9E80
	  mr        r26, r3

	.loc_0x20C:
	  cmplwi    r26, 0
	  bne-      .loc_0x21C
	  li        r3, 0
	  b         .loc_0x34C

	.loc_0x21C:
	  lfs       f1, -0x76D8(r2)
	  mr        r3, r26
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0xA2F0
	  sth       r28, 0xBC(r26)
	  stw       r24, 0xE8(r26)
	  stw       r25, 0xEC(r26)
	  lbz       r0, 0xC(r1)
	  stb       r0, 0xE4(r26)
	  bl        0xEE2C
	  lfs       f2, 0x4(r24)
	  lfs       f0, 0x20(r1)
	  fdivs     f1, f2, f1
	  fmuls     f0, f0, f1
	  stfs      f0, 0xF0(r26)
	  lfs       f0, 0xF0(r26)
	  stfs      f0, 0xF8(r26)
	  lbz       r0, 0x30(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x28C
	  lbz       r3, 0x1(r24)
	  addi      r0, r31, 0x3C
	  sub       r3, r0, r3
	  bl        0xB3DC
	  lfs       f0, 0xF8(r26)
	  fmuls     f0, f0, f1
	  stfs      f0, 0xF8(r26)

	.loc_0x28C:
	  rlwinm    r3,r27,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x3C(r1)
	  li        r25, 0
	  lfs       f3, 0x1C(r1)
	  li        r24, 0
	  stw       r0, 0x38(r1)
	  lfd       f2, -0x76C8(r2)
	  lfd       f1, 0x38(r1)
	  lfs       f0, -0x76CC(r2)
	  fsubs     f1, f1, f2
	  stfs      f3, 0xF4(r26)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xFC(r26)
	  lfs       f0, 0xFC(r26)
	  fmuls     f0, f0, f0
	  stfs      f0, 0xFC(r26)
	  lfs       f1, 0xFC(r26)
	  lfs       f0, 0xF4(r26)
	  fmuls     f0, f1, f0
	  stfs      f0, 0xFC(r26)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0xCC(r26)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0xD4(r26)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xDC(r26)
	  b         .loc_0x318

	.loc_0x2FC:
	  lwz       r5, 0x14(r1)
	  mr        r3, r26
	  mr        r4, r25
	  lwzx      r5, r5, r24
	  bl        0xA0B8
	  addi      r24, r24, 0x4
	  addi      r25, r25, 0x1

	.loc_0x318:
	  lwz       r0, 0x18(r1)
	  cmplw     r25, r0
	  blt+      .loc_0x2FC
	  lhz       r4, 0x32(r1)
	  mr        r3, r26
	  bl        0xA0DC
	  mr        r3, r26
	  bl        0xA20C
	  cmpwi     r3, 0
	  beq-      .loc_0x348
	  mr        r3, r26
	  b         .loc_0x34C

	.loc_0x348:
	  li        r3, 0

	.loc_0x34C:
	  lmw       r24, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr

	.loc_0x360:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JASCriticalSection::~JASCriticalSection()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800994E0
 * Size:	000174
 */
void JASBankMgr::noteOnOsc(int, unsigned char, unsigned char, unsigned short,
                           void (*)(unsigned long, JASChannel*,
                                    JASDsp::TChannel*, void*),
                           void*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r25, 0x24(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r7
	  mr        r30, r8
	  lwz       r0, -0x75DC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x70
	  bl        0x55724
	  lwz       r0, -0x75DC(r13)
	  stw       r3, 0x8(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  lwz       r4, -0x7548(r13)
	  li        r3, 0xC
	  li        r5, 0
	  bl        -0x755F4
	  mr.       r31, r3
	  beq-      .loc_0x64
	  bl        0xDC44

	.loc_0x64:
	  stw       r31, -0x75DC(r13)

	.loc_0x68:
	  lwz       r3, 0x8(r1)
	  bl        0x55714

	.loc_0x70:
	  lwz       r3, -0x75DC(r13)
	  li        r4, 0x118
	  bl        0xDCD4
	  mr.       r31, r3
	  beq-      .loc_0x94
	  mr        r4, r29
	  mr        r5, r30
	  bl        0x9C98
	  mr        r31, r3

	.loc_0x94:
	  cmplwi    r31, 0
	  bne-      .loc_0xA4
	  li        r3, 0
	  b         .loc_0x160

	.loc_0xA4:
	  lfs       f1, -0x76D8(r2)
	  mr        r3, r31
	  fmr       f2, f1
	  fmr       f3, f1
	  bl        0xA108
	  sth       r28, 0xBC(r31)
	  li        r0, 0x2
	  stw       r25, 0xEC(r31)
	  stb       r0, 0xE4(r31)
	  bl        0xEC48
	  lfs       f0, -0x76C0(r2)
	  rlwinm    r3,r26,0,24,31
	  fdivs     f0, f0, f1
	  stfs      f0, 0xF0(r31)
	  lfs       f0, 0xF0(r31)
	  stfs      f0, 0xF8(r31)
	  bl        0xB214
	  rlwinm    r3,r27,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  lis       r3, 0x8048
	  lfs       f0, 0xF8(r31)
	  subi      r5, r3, 0x753C
	  stw       r0, 0x10(r1)
	  mr        r3, r31
	  fmuls     f3, f0, f1
	  lfd       f2, -0x76C8(r2)
	  lfd       f1, 0x10(r1)
	  li        r4, 0
	  lfs       f0, -0x76CC(r2)
	  fsubs     f1, f1, f2
	  stfs      f3, 0xF8(r31)
	  lfs       f2, -0x76D8(r2)
	  fdivs     f0, f1, f0
	  stfs      f2, 0xF4(r31)
	  stfs      f0, 0xFC(r31)
	  lfs       f0, 0xFC(r31)
	  fmuls     f0, f0, f0
	  stfs      f0, 0xFC(r31)
	  bl        0x9F24
	  mr        r3, r31
	  bl        0xA098
	  cmpwi     r3, 0
	  beq-      .loc_0x15C
	  mr        r3, r31
	  b         .loc_0x160

	.loc_0x15C:
	  li        r3, 0

	.loc_0x160:
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80099654
 * Size:	0000A8
 */
void JASBankMgr::gateOn(JASChannel*, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lbz       r0, 0xE4(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x30
	  rlwinm    r3,r4,0,24,31
	  b         .loc_0x44

	.loc_0x30:
	  lwz       r5, 0xE8(r30)
	  rlwinm    r3,r4,0,24,31
	  addi      r0, r3, 0x3C
	  lbz       r3, 0x1(r5)
	  sub       r3, r0, r3

	.loc_0x44:
	  bl        0xB140
	  rlwinm    r3,r31,0,24,31
	  lis       r0, 0x4330
	  stw       r3, 0xC(r1)
	  lfs       f0, 0xF0(r30)
	  stw       r0, 0x8(r1)
	  lfd       f2, -0x76C8(r2)
	  fmuls     f3, f0, f1
	  lfd       f1, 0x8(r1)
	  lfs       f0, -0x76CC(r2)
	  fsubs     f1, f1, f2
	  stfs      f3, 0xF8(r30)
	  fdivs     f0, f1, f0
	  stfs      f0, 0xFC(r30)
	  lfs       f0, 0xFC(r30)
	  lfs       f1, 0xF4(r30)
	  fmuls     f0, f0, f0
	  fmuls     f0, f1, f0
	  stfs      f0, 0xFC(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void JASBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
}