#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASBNKParser.h"
#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASChannel.h"
#include "JSystem/JAudio/JAS/JASDriver.h"
#include "JSystem/JAudio/JAS/JASGenericMemPool.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASInst.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "types.h"

namespace JASBankMgr {

static int sTableSize;
static JASBank** sBankArray;
static u16* sVir2PhyTable;

const s16 OSC_RELEASE_TABLE[6]    = { 1, 10, 0, 15, 0, 0 };
const JASOscillator::Data OSC_ENV = { 0, 1.0f, nullptr, OSC_RELEASE_TABLE, 1.0f, 0.0f };

/*
 * --INFO--
 * Address:	80098F34
 * Size:	000138
 */
void init(int tableSize)
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
bool registBank(int bankIndex, JASBank* bank)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009906C
 * Size:	000068
 */
bool registBankBNK(int bankIndex, void* data)
{
	JASBank* pJVar1;

	setVir2PhyTable(*(u32*)((int)data + 8), bankIndex); // pointer jank
	pJVar1 = (JASBank*)JASBNKParser::createBasicBank(data);
	if (!pJVar1) {
		return false;
	}
	sBankArray[bankIndex] = pJVar1;
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
JASBank* getBank(int bankIndex)
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
u16 getPhysicalNumber(u16 virtualNumber) { return sVir2PhyTable[virtualNumber]; }

/*
 * --INFO--
 * Address:	800990E4
 * Size:	000018
 */
void setVir2PhyTable(u32 virtualNumber, int physicalNumber)
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
bool assignWaveBank(int bankIndex, int waveBankIndex)
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
JASChannel* noteOn(int bankIndex, int instIndex, u8 p3, u8 p4, u16 p5, void (*p6)(u32, JASChannel*, JASDsp::TChannel*, void*), void* p7)
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
	JASChannel* channel
	    = new (JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded>::alloc())
	        JASChannel(p6, p7);
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
	channel->_FC *= channel->_FC;
	channel->_FC *= channel->_F4;
	channel->_CC = instParam._18;
	channel->_D4 = instParam._1C;
	channel->_DC = instParam._20;
	for (int i = 0; i < instParam.mOscCount; i++) {
		channel->setOscInit(i, instParam.mOscData[i]);
	}
	channel->directReleaseOsc(instParam._26);
	if (!channel->play()) {
		return nullptr;
	}
	return channel;
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
static JASChannel* noteOnOsc(int p1, u8 p2, u8 p3, u16 p4, void (*p5)(u32, JASChannel*, JASDsp::TChannel*, void*), void* p6)
{
	JASChannel* channel
	    = new (JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded>::alloc())
	        JASChannel(p5, p6);
	if (channel == nullptr) {
		return nullptr;
	}
	channel->setPanPower(1.0f, 1.0f, 1.0f);
	channel->_BC = p4;
	channel->_EC = (void*)p1;
	channel->_E4 = 2;
	channel->_F0 = 16736.015f / JASDriver::getDacRate();
	channel->_F8 = channel->_F0;
	channel->_F8 *= JASDriver::key2pitch_c5(p2);
	channel->_F4 = 1.0f;
	channel->_FC = p3 / 127.0f;
	channel->_FC *= channel->_FC;
	channel->setOscInit(0, &OSC_ENV);
	if (channel->play()) {
		return channel;
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	80099654
 * Size:	0000A8
 */
void gateOn(JASChannel* channel, u8 p2, u8 p3)
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
size_t getUsedHeapSize()
{
	// UNUSED FUNCTION
}
} // namespace JASBankMgr

// TODO: this probably should spawn automatically from a template header thing somehow but idk how yet - HP.
WEAKFUNC
JASMemPool<JASChannel, JASThreadingModel::SingleThreaded>*
    JASSingletonHolder<JASMemPool<JASChannel, JASThreadingModel::SingleThreaded>, JASCreationPolicy::NewFromRootHeap>::sInstance;
