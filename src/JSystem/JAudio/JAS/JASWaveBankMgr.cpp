#include "JSystem/JAudio/JAS/JASCalc.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASWave.h"

int JASWaveBankMgr::sTableSize;
JASWaveBank** JASWaveBankMgr::sWaveBank;

/**
 * @note Address: 0x8009C044
 * @note Size: 0x54
 */
void JASWaveBankMgr::init(int tableSize)
{
	sWaveBank = new (JASDram, 0) JASWaveBank*[tableSize];
	JASCalc::bzero(sWaveBank, tableSize * sizeof(JASWaveBank*));
	sTableSize = tableSize;
}

/**
 * @note Address: 0x8009C098
 * @note Size: 0x34
 */
JASWaveBank* JASWaveBankMgr::getWaveBank(int bankIndex)
{
	if (bankIndex < 0) {
		return nullptr;
	}
	if (bankIndex >= sTableSize) {
		return nullptr;
	}
	return sWaveBank[bankIndex];
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
bool JASWaveBankMgr::registWaveBank(int bankIndex, JASWaveBank* bank)
{
	// UNUSED FUNCTION
	// putting this here so the compiler stops complaining. this isn't real code.
	return false; // fake
}

/**
 * @note Address: 0x8009C0CC
 * @note Size: 0x80
 */
bool JASWaveBankMgr::registWaveBankWS(int index, void* data)
{
	JASWaveBank* bank;
	if (JASWSParser::getGroupCount(data) == 1) {
		bank = JASWSParser::createSimpleWaveBank(data);
	} else {
		bank = JASWSParser::createBasicWaveBank(data);
	}
	if (bank == nullptr) {
		return false;
	}
	sWaveBank[index] = bank;
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
JASWaveArc* JASWaveBankMgr::getWaveArc(int bankIndex, int arcIndex)
{
	// UNUSED FUNCTION
	JASWaveBank* bank = getWaveBank(bankIndex);
	if (bank == nullptr) {
		return nullptr;
	}
	return bank->getWaveArc(arcIndex);
}

/**
 * @note Address: 0x8009C14C
 * @note Size: 0x90
 */
bool JASWaveBankMgr::loadWave(int bankIndex, int arcIndex, JASHeap* heap)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->load(heap);
}

/**
 * @note Address: 0x8009C1DC
 * @note Size: 0x90
 */
bool JASWaveBankMgr::loadWaveTail(int bankIndex, int arcIndex, JASHeap* heap)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->loadTail(heap);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
bool JASWaveBankMgr::loadWaveBlock(int bankIndex, int arcIndex, JASHeap* heap)
{
	// UNUSED FUNCTION
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->loadBlock(heap);
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
bool JASWaveBankMgr::loadWaveBlockTail(int bankIndex, int arcIndex, JASHeap* heap)
{
	// UNUSED FUNCTION
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->loadBlockTail(heap);
}

/**
 * @note Address: 0x8009C26C
 * @note Size: 0x90
 */
bool JASWaveBankMgr::eraseWave(int bankIndex, int arcIndex)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->erase() != false;
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
size_t JASWaveBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
	// putting this here so the compiler stops complaining. this isn't real code.
	return sizeof(JKRExpHeap); // fake
}
