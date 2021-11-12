#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048FEF0
    lbl_8048FEF0:
        .4byte 0x5053426E
        .4byte 0x6B4D6772
        .4byte 0x2E637070
        .4byte 0x00000000
    .global lbl_8048FF00
    lbl_8048FF00:
        .asciz "P2Assert"
        .skip 3
        .4byte 0x2F417564
        .4byte 0x696F5265
        .4byte 0x732F4261
        .4byte 0x6E6B7300

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q38PSSystem9WaveScene8WaveArea
    __vt__Q38PSSystem9WaveScene8WaveArea:
        .4byte 0
        .4byte 0
        .4byte __dt__Q38PSSystem9WaveScene8WaveAreaFv
    .global __vt__Q28PSSystem7BankMgr
    __vt__Q28PSSystem7BankMgr:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28PSSystem7BankMgrFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sBankMgr__Q28PSSystem7BankMgr
    sBankMgr__Q28PSSystem7BankMgr:
        .skip 0x8
*/

namespace PSSystem {

/*
 * --INFO--
 * Address:	8033D738
 * Size:	000064
 */
void BankMgr::createInstance()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r0, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8033D76C
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0xe
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D76C:
	li       r3, 0x28
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8033D784
	bl       __ct__Q28PSSystem7BankMgrFv
	mr       r0, r3

lbl_8033D784:
	stw      r0, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	mr       r3, r0
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D79C
 * Size:	000058
 */
BankMgr::BankMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q28PSSystem7BankMgr@ha
	li       r0, 0
	addi     r4, r3, __vt__Q28PSSystem7BankMgr@l
	mr       r3, r31
	stw      r4, 0(r31)
	stb      r0, 0x1a(r31)
	stw      r0, 0x1c(r31)
	stb      r0, 0x20(r31)
	stw      r0, 0x24(r31)
	stb      r0, 0x18(r31)
	stb      r0, 0x19(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D7F4
 * Size:	000094
 */
void BankMgr::preInit()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lbz      r0, 0x18(r3)
	cmplwi   r0, 0
	beq      lbl_8033D830
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x77
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D830:
	li       r0, 1
	lis      r3, setBankDataS__Q28PSSystem7BankMgrFPUl@ha
	stb      r0, 0x18(r31)
	addi     r3, r3, setBankDataS__Q28PSSystem7BankMgrFPUl@l
	bl       setBnkInitCallback__Q27JAInter8InitDataFPFPUl_v
	lis      r3, setWsDataS__Q28PSSystem7BankMgrFPUl@ha
	addi     r3, r3, setWsDataS__Q28PSSystem7BankMgrFPUl@l
	bl       setWsInitCallback__Q27JAInter8InitDataFPFPUl_v
	lis      r3, initS__Q28PSSystem7BankMgrFv@ha
	addi     r3, r3, initS__Q28PSSystem7BankMgrFv@l
	bl       setInitCallback__Q27JAInter8BankWaveFPFv_v
	lis      r3, firstLoadS__Q28PSSystem7BankMgrFv@ha
	addi     r3, r3, firstLoadS__Q28PSSystem7BankMgrFv@l
	bl       setFirstLoadCallback__Q27JAInter8BankWaveFPFv_v
	lis      r3, secondLoadS__Q28PSSystem7BankMgrFv@ha
	addi     r3, r3, secondLoadS__Q28PSSystem7BankMgrFv@l
	bl       setSecondLoadCallback__Q27JAInter8BankWaveFPFv_v
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033D888
 * Size:	000178
 */
void BankMgr::init()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, lbl_8048FEF0@ha
	stw      r30, 8(r1)
	addi     r30, r3, lbl_8048FEF0@l
	lbz      r0, 0x19(r31)
	cmplwi   r0, 0
	beq      lbl_8033D8C8
	addi     r3, r30, 0
	addi     r5, r30, 0x10
	li       r4, 0x84
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D8C8:
	li       r4, 1
	li       r3, 0
	stb      r4, 0x19(r31)
	lbz      r0, 0x20(r31)
	cmplwi   r0, 0
	beq      lbl_8033D8F0
	lbz      r0, 0x1a(r31)
	cmplwi   r0, 0
	beq      lbl_8033D8F0
	mr       r3, r4

lbl_8033D8F0:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8033D90C
	addi     r3, r30, 0
	addi     r5, r30, 0x10
	li       r4, 0x86
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033D90C:
	addi     r3, r30, 0x1c
	bl       setCurrentDir__16JASWaveArcLoaderFPCc
	lbz      r3, 0x20(r31)
	bl       init__14JASWaveBankMgrFi
	li       r3, 0
	bl       init__16JASWaveArcLoaderFP7JASHeap
	lwz      r0, 0x24(r31)
	cmplwi   r0, 0
	beq      lbl_8033D968
	li       r30, 0
	b        lbl_8033D958

lbl_8033D938:
	clrlwi   r3, r30, 0x18
	lwz      r4, 0x24(r31)
	mulli    r0, r3, 0xc
	lwzx     r4, r4, r0
	cmplwi   r4, 0
	beq      lbl_8033D954
	bl       registWaveBankWS__14JASWaveBankMgrFiPv

lbl_8033D954:
	addi     r30, r30, 1

lbl_8033D958:
	lbz      r0, 0x20(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_8033D938

lbl_8033D968:
	li       r3, 0x100
	bl       init__10JASBankMgrFi
	lwz      r0, 0x1c(r31)
	cmplwi   r0, 0
	beq      lbl_8033D9E8
	li       r30, 0
	b        lbl_8033D9A4

lbl_8033D984:
	clrlwi   r3, r30, 0x18
	lwz      r4, 0x1c(r31)
	mulli    r0, r3, 0xc
	lwzx     r4, r4, r0
	cmplwi   r4, 0
	beq      lbl_8033D9A0
	bl       registBankBNK__10JASBankMgrFiPv

lbl_8033D9A0:
	addi     r30, r30, 1

lbl_8033D9A4:
	lbz      r0, 0x1a(r31)
	clrlwi   r3, r30, 0x18
	cmplw    r3, r0
	blt      lbl_8033D984
	li       r30, 0
	b        lbl_8033D9CC

lbl_8033D9BC:
	lwz      r4, 8(r3)
	clrlwi   r3, r30, 0x18
	bl       assignWaveBank__10JASBankMgrFii
	addi     r30, r30, 1

lbl_8033D9CC:
	clrlwi   r0, r30, 0x18
	lwz      r3, 0x1c(r31)
	mulli    r0, r0, 0xc
	add      r3, r3, r0
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8033D9BC

lbl_8033D9E8:
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
 * Address:	8033DA00
 * Size:	000078
 */
void WaveScene::load(unsigned short, unsigned short,
                     PSSystem::WaveScene::AreaArg, PSSystem::TaskChecker*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r6
	  cmpwi     r30, 0x2
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r31, r7
	  blt-      .loc_0x48
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x110
	  li        r4, 0xC5
	  subi      r5, r5, 0x100
	  crclr     6, 0x6
	  bl        -0x313404

	.loc_0x48:
	  mulli     r3, r30, 0x14
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r31
	  addi      r3, r3, 0x18
	  add       r3, r27, r3
	  bl        0x40
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033DA78
 * Size:	000028
 */
WaveScene::WaveArea::WaveArea()
{
	/*
	lis      r4, __vt__Q38PSSystem9WaveScene8WaveArea@ha
	li       r0, 0
	addi     r4, r4, __vt__Q38PSSystem9WaveScene8WaveArea@l
	stw      r4, 0(r3)
	stw      r0, 4(r3)
	sth      r0, 8(r3)
	sth      r0, 0xa(r3)
	stb      r0, 0xc(r3)
	stw      r0, 0x10(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033DAA0
 * Size:	000114
 */
void WaveScene::WaveArea::loadWave(unsigned short, unsigned short,
                                   PSSystem::TaskChecker*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  bl        .loc_0x114
	  cmplwi    r30, 0
	  beq-      .loc_0x48
	  mr        r3, r30
	  bl        -0x24DF68
	  lbz       r4, 0x18(r30)
	  mr        r3, r30
	  addi      r0, r4, 0x1
	  stb       r0, 0x18(r30)
	  bl        -0x24DEA0

	.loc_0x48:
	  li        r0, 0x1
	  stw       r0, 0x10(r27)
	  lbz       r0, 0xC(r27)
	  cmplwi    r0, 0
	  beq-      .loc_0x74
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r29,0,16,31
	  li        r5, 0
	  bl        -0x2A192C
	  mr        r31, r3
	  b         .loc_0x88

	.loc_0x74:
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r4,r29,0,16,31
	  li        r5, 0
	  bl        -0x2A19D4
	  mr        r31, r3

	.loc_0x88:
	  rlwinm    r0,r31,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0xD0
	  lwz       r4, -0x77D8(r13)
	  li        r3, 0x8
	  li        r5, -0x4
	  bl        -0x319C00
	  cmplwi    r3, 0
	  beq-      .loc_0xB8
	  sth       r28, 0x0(r3)
	  sth       r29, 0x2(r3)
	  stw       r27, 0x4(r3)

	.loc_0xB8:
	  lis       r4, 0x8034
	  stw       r30, 0x4(r27)
	  subi      r5, r4, 0x239C
	  li        r4, 0
	  bl        -0x297158
	  b         .loc_0xFC

	.loc_0xD0:
	  li        r0, 0
	  cmplwi    r30, 0
	  stw       r0, 0x10(r27)
	  beq-      .loc_0xFC
	  mr        r3, r30
	  bl        -0x24E01C
	  lbz       r4, 0x18(r30)
	  mr        r3, r30
	  subi      r0, r4, 0x1
	  stb       r0, 0x18(r30)
	  bl        -0x24DF54

	.loc_0xFC:
	  rlwinm    r3,r31,0,24,31
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x114:
	*/
}

/*
 * --INFO--
 * Address:	8033DBB4
 * Size:	0000B0
 */
void WaveScene::WaveArea::deleteWave()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r0, 0x10(r3)
	cmpwi    r0, 1
	beq      lbl_8033DC50
	bge      lbl_8033DBE4
	cmpwi    r0, 0
	bge      lbl_8033DC50
	b        lbl_8033DC2C

lbl_8033DBE4:
	cmpwi    r0, 3
	bge      lbl_8033DC2C
	b        lbl_8033DBF8
	b        lbl_8033DC50
	b        lbl_8033DC50

lbl_8033DBF8:
	lhz      r3, 8(r31)
	lhz      r4, 0xa(r31)
	bl       eraseWave__14JASWaveBankMgrFii
	clrlwi.  r0, r3, 0x18
	bne      lbl_8033DC48
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0xff
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033DC48

lbl_8033DC2C:
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x103
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033DC48:
	li       r0, 0
	stw      r0, 0x10(r31)

lbl_8033DC50:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033DC64
 * Size:	00007C
 */
void WaveScene::WaveArea::waveLoadCallback(unsigned long)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 2
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 4(r3)
	lhz      r3, 0(r3)
	sth      r3, 8(r4)
	lhz      r3, 2(r30)
	sth      r3, 0xa(r4)
	stw      r0, 0x10(r4)
	lwz      r31, 4(r4)
	cmplwi   r31, 0
	beq      lbl_8033DCC0
	mr       r3, r31
	bl       OSLockMutex
	lbz      r4, 0x18(r31)
	mr       r3, r31
	addi     r0, r4, -1
	stb      r0, 0x18(r31)
	bl       OSUnlockMutex

lbl_8033DCC0:
	mr       r3, r30
	bl       __dl__FPv
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
 * Address:	8033DCE0
 * Size:	000090
 */
BankMgr::~BankMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033DD54
	lis      r3, __vt__Q28PSSystem7BankMgr@ha
	addi     r0, r3, __vt__Q28PSSystem7BankMgr@l
	stw      r0, 0(r30)
	lwz      r3, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8033DD38
	beq      lbl_8033DD30
	lwz      r12, 0(r3)
	li       r4, 1
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8033DD30:
	li       r0, 0
	stw      r0, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)

lbl_8033DD38:
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8033DD54
	mr       r3, r30
	bl       __dl__FPv

lbl_8033DD54:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033DD70
 * Size:	000004
 */
void BankMgr::secondLoadS() { }

/*
 * --INFO--
 * Address:	8033DD74
 * Size:	000004
 */
void BankMgr::firstLoadS() { }

/*
 * --INFO--
 * Address:	8033DD78
 * Size:	000024
 */
void BankMgr::initS()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	bl       init__Q28PSSystem7BankMgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033DD9C
 * Size:	0001C8
 */
void BankMgr::setWsDataS(unsigned long*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lwz      r29, aafPointer__Q27JAInter8InitData@sda21(r13)
	lwz      r30, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8033DDDC
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x59
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033DDDC:
	lwz      r0, 0x24(r30)
	cmplwi   r0, 0
	beq      lbl_8033DE04
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x5a
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033DE04:
	lwz      r31, 0(r27)
	li       r6, 0
	slwi     r0, r31, 2
	add      r28, r29, r0
	b        lbl_8033DE1C

lbl_8033DE18:
	addi     r6, r6, 3

lbl_8033DE1C:
	add      r0, r31, r6
	slwi     r0, r0, 2
	lwzx     r0, r29, r0
	cmplwi   r0, 0
	bne      lbl_8033DE18
	lis      r3, 0xAAAAAAAB@ha
	lwz      r4, JASDram@sda21(r13)
	addi     r0, r3, 0xAAAAAAAB@l
	li       r5, 0x20
	mulhwu   r0, r0, r6
	srwi     r0, r0, 1
	mulli    r3, r0, 0xc
	addi     r26, r3, 4
	mr       r3, r26
	bl       __nwa__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_8033DF08
	cmplwi   r26, 0
	li       r6, 0
	ble      lbl_8033DF08
	cmplwi   r26, 8
	addi     r4, r26, -8
	ble      lbl_8033DEDC
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r4, 0
	ble      lbl_8033DEDC

lbl_8033DE8C:
	add      r4, r28, r6
	add      r5, r3, r6
	lbz      r0, 0(r4)
	addi     r6, r6, 8
	stb      r0, 0(r5)
	lbz      r0, 1(r4)
	stb      r0, 1(r5)
	lbz      r0, 2(r4)
	stb      r0, 2(r5)
	lbz      r0, 3(r4)
	stb      r0, 3(r5)
	lbz      r0, 4(r4)
	stb      r0, 4(r5)
	lbz      r0, 5(r4)
	stb      r0, 5(r5)
	lbz      r0, 6(r4)
	stb      r0, 6(r5)
	lbz      r0, 7(r4)
	stb      r0, 7(r5)
	bdnz     lbl_8033DE8C

lbl_8033DEDC:
	subf     r0, r6, r26
	add      r5, r28, r6
	add      r4, r3, r6
	mtctr    r0
	cmplw    r6, r26
	bge      lbl_8033DF08

lbl_8033DEF4:
	lbz      r0, 0(r5)
	addi     r5, r5, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_8033DEF4

lbl_8033DF08:
	stw      r3, 0x24(r30)
	li       r5, 0
	b        lbl_8033DF38

lbl_8033DF14:
	clrlwi   r0, r5, 0x18
	lwz      r4, 0x24(r30)
	mulli    r3, r0, 0xc
	addi     r5, r5, 1
	addi     r28, r28, 0xc
	addi     r31, r31, 3
	lwzx     r0, r4, r3
	add      r0, r29, r0
	stwx     r0, r4, r3

lbl_8033DF38:
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	bne      lbl_8033DF14
	stb      r5, 0x20(r30)
	addi     r0, r31, 1
	stw      r0, 0(r27)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033DF64
 * Size:	0001C8
 */
void BankMgr::setBankDataS(unsigned long*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r27, r3
	lwz      r29, aafPointer__Q27JAInter8InitData@sda21(r13)
	lwz      r30, sBankMgr__Q28PSSystem7BankMgr@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8033DFA4
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x38
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033DFA4:
	lwz      r0, 0x1c(r30)
	cmplwi   r0, 0
	beq      lbl_8033DFCC
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x39
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033DFCC:
	lwz      r31, 0(r27)
	li       r6, 0
	slwi     r0, r31, 2
	add      r28, r29, r0
	b        lbl_8033DFE4

lbl_8033DFE0:
	addi     r6, r6, 3

lbl_8033DFE4:
	add      r0, r31, r6
	slwi     r0, r0, 2
	lwzx     r0, r29, r0
	cmplwi   r0, 0
	bne      lbl_8033DFE0
	lis      r3, 0xAAAAAAAB@ha
	lwz      r4, JASDram@sda21(r13)
	addi     r0, r3, 0xAAAAAAAB@l
	li       r5, 0x20
	mulhwu   r0, r0, r6
	srwi     r0, r0, 1
	mulli    r3, r0, 0xc
	addi     r26, r3, 4
	mr       r3, r26
	bl       __nwa__FUlP7JKRHeapi
	cmplwi   r3, 0
	beq      lbl_8033E0D0
	cmplwi   r26, 0
	li       r6, 0
	ble      lbl_8033E0D0
	cmplwi   r26, 8
	addi     r4, r26, -8
	ble      lbl_8033E0A4
	addi     r0, r4, 7
	srwi     r0, r0, 3
	mtctr    r0
	cmplwi   r4, 0
	ble      lbl_8033E0A4

lbl_8033E054:
	add      r4, r28, r6
	add      r5, r3, r6
	lbz      r0, 0(r4)
	addi     r6, r6, 8
	stb      r0, 0(r5)
	lbz      r0, 1(r4)
	stb      r0, 1(r5)
	lbz      r0, 2(r4)
	stb      r0, 2(r5)
	lbz      r0, 3(r4)
	stb      r0, 3(r5)
	lbz      r0, 4(r4)
	stb      r0, 4(r5)
	lbz      r0, 5(r4)
	stb      r0, 5(r5)
	lbz      r0, 6(r4)
	stb      r0, 6(r5)
	lbz      r0, 7(r4)
	stb      r0, 7(r5)
	bdnz     lbl_8033E054

lbl_8033E0A4:
	subf     r0, r6, r26
	add      r5, r28, r6
	add      r4, r3, r6
	mtctr    r0
	cmplw    r6, r26
	bge      lbl_8033E0D0

lbl_8033E0BC:
	lbz      r0, 0(r5)
	addi     r5, r5, 1
	stb      r0, 0(r4)
	addi     r4, r4, 1
	bdnz     lbl_8033E0BC

lbl_8033E0D0:
	stw      r3, 0x1c(r30)
	li       r5, 0
	b        lbl_8033E100

lbl_8033E0DC:
	clrlwi   r0, r5, 0x18
	lwz      r4, 0x1c(r30)
	mulli    r3, r0, 0xc
	addi     r5, r5, 1
	addi     r28, r28, 0xc
	addi     r31, r31, 3
	lwzx     r0, r4, r3
	add      r0, r29, r0
	stwx     r0, r4, r3

lbl_8033E100:
	lwz      r0, 0(r28)
	cmplwi   r0, 0
	bne      lbl_8033E0DC
	stb      r5, 0x1a(r30)
	addi     r0, r31, 1
	stw      r0, 0(r27)
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033E12C
 * Size:	0000CC
 */
WaveScene::WaveArea::~WaveArea()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033E1DC
	lis      r3, __vt__Q38PSSystem9WaveScene8WaveArea@ha
	addi     r0, r3, __vt__Q38PSSystem9WaveScene8WaveArea@l
	stw      r0, 0(r30)
	lwz      r0, 0x10(r30)
	cmpwi    r0, 2
	beq      lbl_8033E174
	bge      lbl_8033E1A8
	cmpwi    r0, 0
	bge      lbl_8033E1CC
	b        lbl_8033E1A8

lbl_8033E174:
	lhz      r3, 8(r30)
	lhz      r4, 0xa(r30)
	bl       eraseWave__14JASWaveBankMgrFii
	clrlwi.  r0, r3, 0x18
	bne      lbl_8033E1C4
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0xff
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8033E1C4

lbl_8033E1A8:
	lis      r3, lbl_8048FEF0@ha
	lis      r5, lbl_8048FF00@ha
	addi     r3, r3, lbl_8048FEF0@l
	li       r4, 0x103
	addi     r5, r5, lbl_8048FF00@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033E1C4:
	li       r0, 0
	stw      r0, 0x10(r30)

lbl_8033E1CC:
	extsh.   r0, r31
	ble      lbl_8033E1DC
	mr       r3, r30
	bl       __dl__FPv

lbl_8033E1DC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace PSSystem
