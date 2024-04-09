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

namespace JASBankMgr {

static int sTableSize;
static JASBank** sBankArray;
static u16* sVir2PhyTable;

const s16 OSC_RELEASE_TABLE[6]    = { 1, 10, 0, 15, 0, 0 };
const JASOscillator::Data OSC_ENV = { 0, 1.0f, nullptr, OSC_RELEASE_TABLE, 1.0f, 0.0f };

/**
 * @note Address: 0x80098F34
 * @note Size: 0x138
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

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool registBank(int bankIndex, JASBank* bank)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009906C
 * @note Size: 0x68
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

/**
 * @note Address: N/A
 * @note Size: 0x34
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

/**
 * @note Address: 0x800990D4
 * @note Size: 0x10
 */
u16 getPhysicalNumber(u16 virtualNumber) { return sVir2PhyTable[virtualNumber]; }

/**
 * @note Address: 0x800990E4
 * @note Size: 0x18
 */
void setVir2PhyTable(u32 virtualNumber, int physicalNumber)
{
	if (virtualNumber == 0xFFFF) {
		return;
	}
	sVir2PhyTable[virtualNumber] = physicalNumber;
}

/**
 * @note Address: 0x800990FC
 * @note Size: 0x84
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

/**
 * @note Address: 0x80099180
 * @note Size: 0x360
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
	JASWaveHandle* waveHandle = waveBank->getWaveHandle(instParam.mWaveID);
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
	channel->mPriority      = p5;
	channel->mWaveInfo      = waveInfo;
	channel->mWaveData      = wavePtr;
	channel->mWaveFormat    = instParam.mWaveFormat;
	channel->mActivePitch   = instParam.mPitch * (waveInfo->mSampleRate / JASDriver::getDacRate());
	channel->mModifiedPitch = channel->mActivePitch;
	if (instParam.mIsPercussion == 0) {
		channel->mModifiedPitch *= JASDriver::key2pitch_c5(p3 + 60 - waveInfo->mKey);
	}
	channel->mVolume = instParam.mVolume;
	channel->_FC     = p4 / 127.0f;
	channel->_FC *= channel->_FC;
	channel->_FC *= channel->mVolume;
	channel->mPanSound   = instParam.mPan;
	channel->mFxMixSound = instParam.mFxMix;
	channel->mDolbySound = instParam.mDolby;
	for (int i = 0; i < instParam.mOscCount; i++) {
		channel->setOscInit(i, instParam.mOscData[i]);
	}
	channel->directReleaseOsc(instParam.mRelease);
	if (!channel->play()) {
		return nullptr;
	}
	return channel;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
// JASCriticalSection::~JASCriticalSection()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x800994E0
 * @note Size: 0x174
 */
static JASChannel* noteOnOsc(int wavePtr, u8 p2, u8 p3, u16 p4, void (*p5)(u32, JASChannel*, JASDsp::TChannel*, void*), void* p6)
{
	JASChannel* channel
	    = new (JASPoolAllocObject<JASChannel, JASCreationPolicy::NewFromRootHeap, JASThreadingModel::SingleThreaded>::alloc())
	        JASChannel(p5, p6);
	if (channel == nullptr) {
		return nullptr;
	}
	channel->setPanPower(1.0f, 1.0f, 1.0f);
	channel->mPriority      = p4;
	channel->mWaveData      = (void*)wavePtr;
	channel->mWaveFormat    = 2;
	channel->mActivePitch   = 16736.015f / JASDriver::getDacRate();
	channel->mModifiedPitch = channel->mActivePitch;
	channel->mModifiedPitch *= JASDriver::key2pitch_c5(p2);
	channel->mVolume = 1.0f;
	channel->_FC     = p3 / 127.0f;
	channel->_FC *= channel->_FC;
	channel->setOscInit(0, &OSC_ENV);
	if (channel->play()) {
		return channel;
	}
	return nullptr;
}

/**
 * @note Address: 0x80099654
 * @note Size: 0xA8
 */
void gateOn(JASChannel* channel, u8 p2, u8 p3)
{
	channel->mModifiedPitch
	    = channel->mActivePitch * JASDriver::key2pitch_c5(channel->mWaveFormat == 2 ? p2 : p2 + 60 - channel->mWaveInfo->mKey);
	channel->_FC = p3 / 127.0f;
	channel->_FC = channel->_FC * channel->_FC * channel->mVolume;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
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
