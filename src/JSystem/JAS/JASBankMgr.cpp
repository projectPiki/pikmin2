#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global OSC_RELEASE_TABLE__10JASBankMgr
    OSC_RELEASE_TABLE__10JASBankMgr:
        .4byte 0x0001000A
        .4byte 0x0000000F
        .4byte 0x00000000
    .global OSC_ENV__10JASBankMgr
    OSC_ENV__10JASBankMgr:
        .4byte 0x00000000
        .float 1.0
        .4byte 0x00000000
        .4byte OSC_RELEASE_TABLE__10JASBankMgr
        .float 1.0
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global sTableSize__10JASBankMgr
    sTableSize__10JASBankMgr:
        .skip 0x4
    .global sBankArray__10JASBankMgr
    sBankArray__10JASBankMgr:
        .skip 0x4
    .global sVir2PhyTable__10JASBankMgr
    sVir2PhyTable__10JASBankMgr:
        .skip 0x4
    .global
   "sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>"
    "sInstance__123JASSingletonHolder<62JASMemPool<10JASChannel,Q217JASThreadingModel14SingleThreaded>,Q217JASCreationPolicy15NewFromRootHeap>":
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80516C88
    lbl_80516C88:
        .float 1.0
    .global lbl_80516C8C
    lbl_80516C8C:
        .float 0.5
    .global lbl_80516C90
    lbl_80516C90:
        .4byte 0x00000000
    .global lbl_80516C94
    lbl_80516C94:
        .4byte 0x42FE0000
    .global lbl_80516C98
    lbl_80516C98:
        .4byte 0x43300000
        .4byte 0x00000000
    .global lbl_80516CA0
    lbl_80516CA0:
        .4byte 0x4682C008
        .4byte 0x00000000
*/

/*
 * --INFO--
 * Address:	80098F34
 * Size:	000138
 */
void JASBankMgr::init(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	slwi     r30, r3, 2
	mr       r3, r30
	lwz      r4, JASDram@sda21(r13)
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, sBankArray__10JASBankMgr@sda21(r13)
	slwi     r3, r31, 1
	lwz      r4, JASDram@sda21(r13)
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	stw      r3, sVir2PhyTable__10JASBankMgr@sda21(r13)
	mr       r4, r30
	lwz      r3, sBankArray__10JASBankMgr@sda21(r13)
	bl       bzero__7JASCalcFPvUl
	cmpwi    r31, 0
	li       r12, 0
	ble      lbl_80099050
	cmpwi    r31, 8
	addi     r4, r31, -8
	ble      lbl_80099024
	addi     r0, r4, 7
	lis      r3, 0x0000FFFF@ha
	srwi     r0, r0, 3
	li       r11, 0
	addi     r10, r3, 0x0000FFFF@l
	mtctr    r0
	cmpwi    r4, 0
	ble      lbl_80099024

lbl_80098FBC:
	lwz      r3, sVir2PhyTable__10JASBankMgr@sda21(r13)
	addi     r8, r11, 2
	addi     r7, r11, 4
	addi     r6, r11, 6
	sthx     r10, r3, r11
	addi     r5, r11, 8
	addi     r4, r11, 0xa
	addi     r3, r11, 0xc
	lwz      r9, sVir2PhyTable__10JASBankMgr@sda21(r13)
	addi     r0, r11, 0xe
	addi     r11, r11, 0x10
	addi     r12, r12, 8
	sthx     r10, r9, r8
	lwz      r8, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r8, r7
	lwz      r7, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r7, r6
	lwz      r6, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r6, r5
	lwz      r5, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r5, r4
	lwz      r4, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r4, r3
	lwz      r3, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r10, r3, r0
	bdnz     lbl_80098FBC

lbl_80099024:
	lis      r3, 0x0000FFFF@ha
	subf     r0, r12, r31
	slwi     r5, r12, 1
	addi     r4, r3, 0x0000FFFF@l
	mtctr    r0
	cmpw     r12, r31
	bge      lbl_80099050

lbl_80099040:
	lwz      r3, sVir2PhyTable__10JASBankMgr@sda21(r13)
	sthx     r4, r3, r5
	addi     r5, r5, 2
	bdnz     lbl_80099040

lbl_80099050:
	stw      r31, sTableSize__10JASBankMgr@sda21(r13)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
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
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 8(r4)
	mr       r4, r30
	bl       setVir2PhyTable__10JASBankMgrFUli
	mr       r3, r31
	bl       createBasicBank__12JASBNKParserFPv
	cmplwi   r3, 0
	bne      lbl_800990AC
	li       r3, 0
	b        lbl_800990BC

lbl_800990AC:
	lwz      r4, sBankArray__10JASBankMgr@sda21(r13)
	slwi     r0, r30, 2
	stwx     r3, r4, r0
	li       r3, 1

lbl_800990BC:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
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
	lwz      r4, sVir2PhyTable__10JASBankMgr@sda21(r13)
	rlwinm   r0, r3, 1, 0xf, 0x1e
	lhzx     r3, r4, r0
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
	cmplwi   r3, 0xffff
	beqlr
	lwz      r5, sVir2PhyTable__10JASBankMgr@sda21(r13)
	slwi     r0, r3, 1
	sthx     r4, r5, r0
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
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r3, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	bge      lbl_8009911C
	li       r31, 0
	b        lbl_8009913C

lbl_8009911C:
	lwz      r0, sTableSize__10JASBankMgr@sda21(r13)
	cmpw     r3, r0
	blt      lbl_80099130
	li       r31, 0
	b        lbl_8009913C

lbl_80099130:
	lwz      r5, sBankArray__10JASBankMgr@sda21(r13)
	slwi     r0, r3, 2
	lwzx     r31, r5, r0

lbl_8009913C:
	cmplwi   r31, 0
	bne      lbl_8009914C
	li       r3, 0
	b        lbl_8009916C

lbl_8009914C:
	mr       r3, r4
	bl       getWaveBank__14JASWaveBankMgrFi
	cmplwi   r3, 0
	bne      lbl_80099164
	li       r3, 0
	b        lbl_8009916C

lbl_80099164:
	stw      r3, 4(r31)
	li       r3, 1

lbl_8009916C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80099180
 * Size:	000360
 */
void JASBankMgr::noteOn(int, int, unsigned char, unsigned char, unsigned short,
                        void (*)(unsigned long, JASChannel*, JASDsp::TChannel*, void*), void*)
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
JASCriticalSection::~JASCriticalSection()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800994E0
 * Size:	000174
 */
void JASBankMgr::noteOnOsc(int, unsigned char, unsigned char, unsigned short,
                           void (*)(unsigned long, JASChannel*, JASDsp::TChannel*, void*), void*)
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
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r3
	lbz      r0, 0xe4(r3)
	cmplwi   r0, 2
	bne      lbl_80099684
	clrlwi   r3, r4, 0x18
	b        lbl_80099698

lbl_80099684:
	lwz      r5, 0xe8(r30)
	clrlwi   r3, r4, 0x18
	addi     r0, r3, 0x3c
	lbz      r3, 1(r5)
	subf     r3, r3, r0

lbl_80099698:
	bl       key2pitch_c5__9JASDriverFi
	clrlwi   r3, r31, 0x18
	lis      r0, 0x4330
	stw      r3, 0xc(r1)
	lfs      f0, 0xf0(r30)
	stw      r0, 8(r1)
	lfd      f2, lbl_80516C98@sda21(r2)
	fmuls    f3, f0, f1
	lfd      f1, 8(r1)
	lfs      f0, lbl_80516C94@sda21(r2)
	fsubs    f1, f1, f2
	stfs     f3, 0xf8(r30)
	fdivs    f0, f1, f0
	stfs     f0, 0xfc(r30)
	lfs      f0, 0xfc(r30)
	lfs      f1, 0xf4(r30)
	fmuls    f0, f0, f0
	fmuls    f0, f1, f0
	stfs     f0, 0xfc(r30)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
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
