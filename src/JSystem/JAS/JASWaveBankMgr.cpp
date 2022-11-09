#include "JSystem/JAS/JASCalc.h"
#include "JSystem/JAS/JASHeap.h"
#include "JSystem/JAS/JASWave.h"
#include "types.h"

int JASWaveBankMgr::sTableSize;
JASWaveBank** JASWaveBankMgr::sWaveBank;

/*
 * --INFO--
 * Address:	8009C044
 * Size:	000054
 */
void JASWaveBankMgr::init(int tableSize)
{
	sWaveBank = new (JASDram, 0) JASWaveBank*[tableSize];
	JASCalc::bzero(sWaveBank, tableSize * sizeof(JASWaveBank*));
	sTableSize = tableSize;
}

/*
 * --INFO--
 * Address:	8009C098
 * Size:	000034
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

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
bool JASWaveBankMgr::registWaveBank(int bankIndex, JASWaveBank* bank)
{
	// UNUSED FUNCTION
	// putting this here so the compiler stops complaining. this isn't real code.
	return false; // fake
}

/*
 * --INFO--
 * Address:	8009C0CC
 * Size:	000080
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

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8009C14C
 * Size:	000090
 */
bool JASWaveBankMgr::loadWave(int bankIndex, int arcIndex, JASHeap* heap)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->load(heap);
}

/*
 * --INFO--
 * Address:	8009C1DC
 * Size:	000090
 */
bool JASWaveBankMgr::loadWaveTail(int bankIndex, int arcIndex, JASHeap* heap)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->loadTail(heap);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
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

/*
 * --INFO--
 * Address:	........
 * Size:	000090
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

/*
 * --INFO--
 * Address:	8009C26C
 * Size:	000090
 */
bool JASWaveBankMgr::eraseWave(int bankIndex, int arcIndex)
{
	JASWaveArc* arc = getWaveArc(bankIndex, arcIndex);
	if (arc == nullptr) {
		return false;
	}
	return arc->erase() != false;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
size_t JASWaveBankMgr::getUsedHeapSize()
{
	// UNUSED FUNCTION
	// putting this here so the compiler stops complaining. this isn't real code.
	return sizeof(JKRExpHeap); // fake
}
