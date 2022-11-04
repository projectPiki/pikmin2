#include "JSystem/JAS/JASBank.h"
#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASChannel.h"
#include "JSystem/JAS/JASDriver.h"
#include "JSystem/JAS/JASGenericMemPool.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASInst.h"
#include "JSystem/JAS/JASMutexLock.h"
#include "JSystem/JAS/JASWave.h"
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
void JASBankMgr::init(int tableSize)
{
	sBankArray    = new (JASDram, 0) JASBank*[tableSize];
	sVir2PhyTable = new (JASDram, 0) u16[tableSize];
	JASCalc::bzero(sBankArray, tableSize * sizeof(JASBank*));
	for (int i = 0; i < tableSize; i++) {
		sVir2PhyTable[i] = 0xFFFF;
	}
	sTableSize = tableSize;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
bool JASBankMgr::registBank(int bankIndex, JASBank* bank)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009906C
 * Size:	000068
 */
bool JASBankMgr::registBankBNK(int bankIndex, void* data)
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
JASBank* JASBankMgr::getBank(int bankIndex)
{
	// UNUSED FUNCTION
	if (bankIndex < 0) {
		return nullptr;
	}
	if (bankIndex >= sTableSize) {
		return nullptr;
	}
	return sBankArray[bankIndex];
}

/*
 * --INFO--
 * Address:	800990D4
 * Size:	000010
 */
u16 JASBankMgr::getPhysicalNumber(unsigned short virtualNumber) { return sVir2PhyTable[virtualNumber]; }

/*
 * --INFO--
 * Address:	800990E4
 * Size:	000018
 */
void JASBankMgr::setVir2PhyTable(unsigned long virtualNumber, int physicalNumber)
{
	if (virtualNumber == 0xFFFF) {
		return;
	}
	sVir2PhyTable[virtualNumber] = physicalNumber;
}

/*
 * --INFO--
 * Address:	800990FC
 * Size:	000084
 */
bool JASBankMgr::assignWaveBank(int bankIndex, int waveBankIndex)
{
	JASBank* bank = getBank(bankIndex);
	if (bank == nullptr) {
		return false;
	}
	JASWaveBank* waveBank = JASWaveBankMgr::getWaveBank(waveBankIndex);
	if (waveBank == nullptr) {
		return false;
	}
	bank->_04 = waveBank;
	return true;
}

/*
 * --INFO--
 * Address:	80099180
 * Size:	000360
 */
JASChannel* JASBankMgr::noteOn(int bankIndex, int instIndex, unsigned char p3, unsigned char p4, unsigned short p5,
                               void (*p6)(unsigned long, JASChannel*, JASDsp::TChannel*, void*), void* p7)
{
	if (instIndex > 0xEF) {
		return noteOnOsc(instIndex - 0xF0, p3, p4, p5, p6, p7);
	}
	JASBank* bank = getBank(bankIndex);
	if (bank == nullptr) {
		return nullptr;
	}
	JASInst* inst = bank->getInst(instIndex);
	if (inst == nullptr) {
		return nullptr;
	}
	JASInstParam instParam;
	if (inst->getParam(p3, p4, &instParam) == false) {
		return nullptr;
	}
	JASWaveBank* waveBank = bank->_04;
	if (waveBank == nullptr) {
		return nullptr;
	}
	JASWaveHandle* waveHandle = waveBank->getWaveHandle(instParam._04);
	if (waveHandle == nullptr) {
		return nullptr;
	}
	const JASWaveInfo* waveInfo = waveHandle->getWaveInfo();
	if (waveInfo == nullptr) {
		return nullptr;
	}
	void* wavePtr = waveHandle->getWavePtr();
	if (wavePtr == nullptr) {
		return nullptr;
	}
	// JASMemPool<JASChannel, JASThreadingModel::SingleThreaded>* channelMemPool = JASSingletonHolder<JASMemPool<JASChannel,
	// JASThreadingModel::SingleThreaded>, JASCreationPolicy::NewFromRootHeap>::getInstance(); channelMemPool->alloc(sizeof(JASChannel));
	JASChannel* channel = new (JASPoolAllocObject<JASChannel, NewFromRootHeap, SingleThreaded>::alloc()) JASChannel(p6, p7);
	if (channel == nullptr) {
		return nullptr;
	}
	channel->setPanPower(1.0f, 1.0f, 1.0f);
	channel->_BC = p5;
	channel->_E8 = waveInfo;
	channel->_EC = wavePtr;
	channel->_E4 = instParam._00;
	channel->_F0 = instParam._14 * (waveInfo->_04 / JASDriver::getDacRate());
	channel->_F8 = channel->_F0;
	if (instParam._24 == 0) {
		channel->_F8 *= JASDriver::key2pitch_c5(p3 + 60 - waveInfo->_01);
	}
	channel->_F4 = instParam._10;
	channel->_FC = p4 / 127.0f;
	channel->_FC = channel->_FC * channel->_FC * channel->_F4;
	channel->_CC = instParam._18;
	channel->_D4 = instParam._1C;
	channel->_DC = instParam._20;
	for (int i = 0; i < instParam.m_oscCount; i++) {
		channel->setOscInit(i, instParam.m_oscData[i]);
	}
	channel->directReleaseOsc(instParam._26);
	if (!channel->play()) {
		return nullptr;
	}
	return channel;
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
// JASCriticalSection::~JASCriticalSection()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	800994E0
 * Size:	000174
 */
JASChannel* JASBankMgr::noteOnOsc(int p1, unsigned char p2, unsigned char p3, unsigned short p4,
                                  void (*p5)(unsigned long, JASChannel*, JASDsp::TChannel*, void*), void* p6)
{
	JASChannel* channel = new (JASPoolAllocObject<JASChannel, NewFromRootHeap, SingleThreaded>::alloc()) JASChannel(p5, p6);
	if (channel == nullptr) {
		return nullptr;
	}
	channel->setPanPower(1.0f, 1.0f, 1.0f);
	channel->_BC = p4;
	channel->_EC = (void*)p1;
	channel->_E4 = 2;
	channel->_F0 = 16736.02f / JASDriver::getDacRate();
	channel->_F8 = channel->_F0;
	channel->_F8 *= JASDriver::key2pitch_c5(p2);
	channel->_F4 = 1.0f;
	channel->_FC = p3 / 127.0f;
	channel->_FC *= channel->_FC;
	channel->setOscInit(0, &OSC_ENV);
	if (channel->play() != false) {
		return channel;
	}
	return nullptr;
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
void JASBankMgr::gateOn(JASChannel* channel, unsigned char p2, unsigned char p3)
{
	channel->_F8 = channel->_F0 * JASDriver::key2pitch_c5(channel->_E4 == 2 ? p2 : p2 + 60 - channel->_E8->_01);
	channel->_FC = p3 / 127.0f;
	channel->_FC = channel->_FC * channel->_FC * channel->_F4;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
size_t JASBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
}
