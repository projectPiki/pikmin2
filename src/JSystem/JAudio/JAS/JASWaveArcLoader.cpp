#include "Dolphin/dvd.h"
#include "string.h"
#include "JSystem/JAudio/JAS/JASDisposer.h"
#include "JSystem/JAudio/JAS/JASDvd.h"
#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASKernel.h"
#include "JSystem/JAudio/JAS/JASMutexLock.h"
#include "JSystem/JAudio/JAS/JASThread.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JKernel/JKRDvdAramRipper.h"
#include "JSystem/JKernel/JKRDvdRipper.h"

char JASWaveArcLoader::sCurrentDir[0x40] = "/Banks/";
JASHeap* JASWaveArcLoader::sAramHeap;

/**
 * @note Address: 0x8009BA08
 * @note Size: 0x2C
 */
void JASWaveArcLoader::init(JASHeap* heap)
{
	if (heap == nullptr) {
		heap = JASKernel::getAramHeap();
	}
	sAramHeap = heap;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
JASHeap* JASWaveArcLoader::getRootHeap()
{
	// UNUSED FUNCTION
	return sAramHeap;
}

/**
 * @note Address: 0x8009BA34
 * @note Size: 0x60
 */
void JASWaveArcLoader::setCurrentDir(const char* path)
{
	strcpy(sCurrentDir, path);
	size_t length = strlen(sCurrentDir);
	if (sCurrentDir[length - 1] != '/') {
		sCurrentDir[length]     = '/';
		sCurrentDir[length + 1] = '\0';
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xC
 */
const char* JASWaveArcLoader::getCurrentDir()
{
	// UNUSED FUNCTION
	return sCurrentDir;
}

/**
 * @note Address: 0x8009BA94
 * @note Size: 0x6C
 * __ct__10JASWaveArcFv
 */
JASWaveArc::JASWaveArc()
    : JASDisposer()
    , mHeap(this)
    , _48(0)
    , _4C(0)
    , mFileNumber(-1)
    , mFileSize(0)
    , _58(0)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x84
 */
bool JASWaveArc::loadSetup(u32 p1)
{
	// UNUSED FUNCTION
	JASCriticalSection criticalSection;
	if (_58 != p1) {
		return false;
	}
	if (_4C != 1) {
		return false;
	}
	_48 = 1;
	_4C = 2;
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
bool JASWaveArc::eraseSetup()
{
	// UNUSED FUNCTION
	JASCriticalSection criticalSection;
	if (_4C == 0) {
		return false;
	}
	if (_4C == 1) {
		_4C = 0;
		return false;
	}
	_48 = 0;
	_4C = 0;
	return true;
}

/**
 * @note Address: 0x8009BB78
 * @note Size: 0xC8
 */
void JASWaveArc::loadToAramCallback(void* args)
{
	LoadToAramCallbackArgs* castedArgs = static_cast<LoadToAramCallbackArgs*>(args);
	if (JKRDvdAramRipper::loadToAram(castedArgs->mFileNumber, (u32)castedArgs->_08, Switch_0, 0, 0, nullptr) == 0) {
		return;
	}
	JASWaveArc* arc = castedArgs->mArc;
	if (arc->loadSetup(castedArgs->_0C)) {
		arc->onLoadDone();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA8
 */
bool JASWaveArc::sendLoadCmd()
{
	// UNUSED FUNCTION
	JASCriticalSection criticalSection;
	_48 = 0;
	_4C = 1;
	LoadToAramCallbackArgs args;
	args.mArc        = this;
	args.mFileNumber = mFileNumber;
	args._08         = mHeap.mBase;
	args._0C         = ++_58;
	if (JASDvd::getThreadPointer()->sendCmdMsg(loadToAramCallback, &args, 0x10) == false) {
		mHeap.free();
		return false;
	}
	return true;
}

/**
 * @note Address: N/A
 * @note Size: 0x128
 */
void JASWaveArc::execLoad()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8009BC40
 * @note Size: 0x128
 * load__10JASWaveArcFP7JASHeap
 */
bool JASWaveArc::load(JASHeap* fileHeap)
{
	if (mFileNumber < 0) {
		return false;
	}
	JASCriticalSection criticalSection;
	if (_4C != 0) {
		return false;
	}
	if (fileHeap == nullptr) {
		fileHeap = JASWaveArcLoader::sAramHeap;
	}
	if (mHeap.alloc(fileHeap, mFileSize) == false) {
		return false;
	}
	return sendLoadCmd();
}

/**
 * @note Address: 0x8009BD68
 * @note Size: 0x128
 * loadTail__10JASWaveArcFP7JASHeap
 */
bool JASWaveArc::loadTail(JASHeap* fileHeap)
{
	if (mFileNumber < 0) {
		return false;
	}
	JASCriticalSection criticalSection;
	if (_4C != 0) {
		return false;
	}
	if (fileHeap == nullptr) {
		fileHeap = JASWaveArcLoader::sAramHeap;
	}
	if (mHeap.allocTail(fileHeap, mFileSize) == false) {
		return false;
	}
	return sendLoadCmd();
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
bool JASWaveArc::loadBlock(JASHeap*)
{
	// UNUSED FUNCTION
	return false; // fake
}

/**
 * @note Address: N/A
 * @note Size: 0x19C
 */
bool JASWaveArc::loadBlockTail(JASHeap*)
{
	// UNUSED FUNCTION
	return false; // fake
}

/**
 * @note Address: 0x8009BE90
 * @note Size: 0x24
 * erase__10JASWaveArcFv
 */
bool JASWaveArc::erase() { return mHeap.free(); }

/**
 * @note Address: 0x8009BEB4
 * @note Size: 0x94
 * onDispose__10JASWaveArcFv
 */
void JASWaveArc::onDispose()
{
	if (eraseSetup()) {
		onEraseDone();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x60
 */
void JASWaveArc::setEntryNum(s32 entryNum)
{
	// UNUSED FUNCTION
	DVDFileInfo player;
	if (0 > entryNum) {
		return;
	}
	if (DVDFastOpen(entryNum, &player) == FALSE) {
		return;
	}
	mFileSize = player.length;
	DVDClose(&player);
	mFileNumber = entryNum;
}

/**
 * @note Address: 0x8009BF48
 * @note Size: 0xE4
 */
void JASWaveArc::setFileName(const char* fileName)
{
	size_t dirLength      = strlen(JASWaveArcLoader::sCurrentDir);
	size_t fileNameLength = strlen(fileName);
	size_t length         = dirLength + fileNameLength;
	char* buffer          = new (JASKernel::getSystemHeap(), -4) char[length + 1];
	strcpy(buffer, JASWaveArcLoader::sCurrentDir);
	strcat(buffer, fileName);
	buffer[length] = '\0';
	s32 entryNum   = DVDConvertPathToEntrynum(buffer);
	delete[] buffer;
	if (0 <= entryNum) {
		setEntryNum(entryNum);
	}
}
