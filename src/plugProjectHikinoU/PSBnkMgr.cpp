#include "PSSystem/BankMgr.h"
#include "PSSystem/WaveScene.h"
#include "JSystem/JAudio/JAI/JAInter/BankWave.h"
#include "JSystem/JAudio/JAI/JAInter/InitData.h"
#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JAudio/JAS/JASDvd.h"

namespace PSSystem {

BankMgr* BankMgr::sBankMgr;

/*
 * --INFO--
 * Address:	8033D738
 * Size:	000064
 */
BankMgr* BankMgr::createInstance()
{
	P2ASSERTLINE(14, !sBankMgr);
	BankMgr* bankMgr = new BankMgr();
	sBankMgr         = bankMgr;
	return bankMgr;
}

/*
 * --INFO--
 * Address:	8033D79C
 * Size:	000058
 */
BankMgr::BankMgr()
{
	_1A       = 0;
	mBankData = nullptr;
	_20       = 0;
	mWsData   = nullptr;
	_18       = 0;
	_19       = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void BankMgr::setBankData(u32* data)
{
	// need to match using setBankDataS
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void BankMgr::setWsData(u32* data)
{
	// need to match using setWsDataS
	u32* aafPtr = (u32*)JAInter::InitData::aafPointer;
	P2ASSERTLINE(89, aafPtr);
	P2ASSERTLINE(90, !mWsData);

	u32 dataStart = data[0];
	int count     = 0;
	u32 start     = aafPtr[dataStart];
	while (aafPtr[dataStart + count]) {
		count += 3;
	}
}

/*
 * --INFO--
 * Address:	8033D7F4
 * Size:	000094
 */
void BankMgr::preInit()
{
	P2ASSERTLINE(119, !_18);
	_18 = 1;
	JAInter::InitData::setBnkInitCallback(&setBankDataS);
	JAInter::InitData::setWsInitCallback(&setWsDataS);
	JAInter::BankWave::setInitCallback(&initS);
	JAInter::BankWave::setFirstLoadCallback(&firstLoadS);
	JAInter::BankWave::setSecondLoadCallback(&secondLoadS);
}

/*
 * --INFO--
 * Address:	8033D888
 * Size:	000178
 */
void BankMgr::init()
{
	P2ASSERTLINE(132, !_19);
	_19        = 1;
	bool check = false;

	if (_20 && _1A) {
		check = true;
	}

	P2ASSERTLINE(134, check);
	JASWaveArcLoader::setCurrentDir("/AudioRes/Banks");
	JASWaveBankMgr::init(_20);
	JASWaveArcLoader::init(nullptr);

	if (mWsData) {
		for (u8 i = 0; i < _20; i++) {
			u32* ptr = mWsData[i * 3];
			if (ptr) {
				JASWaveBankMgr::registWaveBankWS(i, ptr);
			}
		}
	}

	JASBankMgr::init(256);
	if (mBankData) {
		for (u8 i = 0; i < _1A; i++) {
			u32* ptr = mBankData[i * 3];
			if (ptr) {
				JASBankMgr::registBankBNK(i, ptr);
			}
		}

		for (u8 i = 0; mBankData[i][0]; i++) {
			JASBankMgr::assignWaveBank(i, mBankData[i][2]);
		}
	}
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
void WaveScene::load(u16 p1, u16 p2, AreaArg areaArg, TaskChecker* taskChecker)
{
	P2ASSERTLINE(197, areaArg < 2);
	_18[areaArg].loadWave(p1, p2, taskChecker);
}

/*
 * --INFO--
 * Address:	8033DA78
 * Size:	000028
 */
WaveScene::WaveArea::WaveArea()
{
	mChecker = nullptr;
	mBankIdx = 0;
	mArcIdx  = 0;
	_0C      = 0;
	_10      = 0;
}

/*
 * --INFO--
 * Address:	8033DAA0
 * Size:	000114
 */
bool WaveScene::WaveArea::loadWave(u16 bankIdx, u16 arcIdx, TaskChecker* checker)
{
	deleteWave();
	if (checker) {
		OSLockMutex(&checker->mMutex);
		checker->_18++;
		OSUnlockMutex(&checker->mMutex);
	}
	_10 = 1;
	bool isWave;
	if (_0C) {
		isWave = JASWaveBankMgr::loadWaveTail(bankIdx, arcIdx, nullptr);
	} else {
		isWave = JASWaveBankMgr::loadWave(bankIdx, arcIdx, nullptr);
	}

	if (isWave == true) {
		WaveAreaLoader* loader = new (JKRGetSystemHeap(), -4) WaveAreaLoader(bankIdx, arcIdx, this);
		mChecker               = checker;
		JASDvd::checkPassDvdT((u32)loader, nullptr, &waveLoadCallback);
	} else {
		_10 = 0;
		if (checker) {
			OSLockMutex(&checker->mMutex);
			checker->_18--;
			OSUnlockMutex(&checker->mMutex);
		}
	}

	return isWave;
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
	switch (_10) {
	case 0:
		return;
	case 1:
		return;
	case 2:
		P2ASSERTLINE(255, JASWaveBankMgr::eraseWave(mBankIdx, mArcIdx));
		break;
	default:
		P2ASSERTLINE(259, false);
		break;
	}

	_10 = 0;
}

/*
 * --INFO--
 * Address:	8033DC64
 * Size:	00007C
 */
void WaveScene::WaveArea::waveLoadCallback(u32 areaLoader)
{
	TaskChecker* checker;
	WaveAreaLoader* loader = (WaveAreaLoader*)(areaLoader);
	WaveArea* wave         = loader->mWaveArea;
	wave->mBankIdx         = loader->mBankIdx;
	wave->mArcIdx          = loader->mArcIdx;
	wave->_10              = 2;

	checker = wave->mChecker;
	if (checker) {
		OSLockMutex(&checker->mMutex);
		checker->_18--;
		OSUnlockMutex(&checker->mMutex);
	}

	delete loader;
}

} // namespace PSSystem
