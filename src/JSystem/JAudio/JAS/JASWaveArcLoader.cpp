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
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global sCurrentDir__16JASWaveArcLoader
    sCurrentDir__16JASWaveArcLoader:
        .4byte 0x2F42616E
        .4byte 0x6B732F00
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__10JASWaveArc
    __vt__10JASWaveArc:
        .4byte 0
        .4byte 0
        .4byte onDispose__10JASWaveArcFv
        .4byte onLoadDone__10JASWaveArcFv
        .4byte onEraseDone__10JASWaveArcFv
    .global __vt__11JASDisposer
    __vt__11JASDisposer:
        .4byte 0
        .4byte 0
        .4byte onDispose__11JASDisposerFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global sAramHeap__16JASWaveArcLoader
    sAramHeap__16JASWaveArcLoader:
        .skip 0x8
*/

char JASWaveArcLoader::sCurrentDir[0x40] = "/Banks/";
JASHeap* JASWaveArcLoader::sAramHeap;

/*
 * --INFO--
 * Address:	8009BA08
 * Size:	00002C
 */
void JASWaveArcLoader::init(JASHeap* heap)
{
	if (heap == nullptr) {
		heap = JASKernel::getAramHeap();
	}
	sAramHeap = heap;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
JASHeap* JASWaveArcLoader::getRootHeap()
{
	// UNUSED FUNCTION
	return sAramHeap;
}

/*
 * --INFO--
 * Address:	8009BA34
 * Size:	000060
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

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
const char* JASWaveArcLoader::getCurrentDir()
{
	// UNUSED FUNCTION
	return sCurrentDir;
}

/*
 * --INFO--
 * Address:	8009BA94
 * Size:	00006C
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

/*
 * --INFO--
 * Address:	8009BB00
 * Size:	000078
 * __dt__7JASHeapFv
 */
// JASHeap::~JASHeap() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000084
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

/*
 * --INFO--
 * Address:	........
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8009BB78
 * Size:	0000C8
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

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
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
	args._08         = mHeap._38;
	args._0C         = ++_58;
	if (JASDvd::getThreadPointer()->sendCmdMsg(loadToAramCallback, &args, 0x10) == false) {
		mHeap.free();
		return false;
	}
	return true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void JASWaveArc::execLoad()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8009BC40
 * Size:	000128
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

/*
 * --INFO--
 * Address:	8009BD68
 * Size:	000128
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

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
bool JASWaveArc::loadBlock(JASHeap*)
{
	// UNUSED FUNCTION
	return false; // fake
}

/*
 * --INFO--
 * Address:	........
 * Size:	00019C
 */
bool JASWaveArc::loadBlockTail(JASHeap*)
{
	// UNUSED FUNCTION
	return false; // fake
}

/*
 * --INFO--
 * Address:	8009BE90
 * Size:	000024
 * erase__10JASWaveArcFv
 */
bool JASWaveArc::erase() { return mHeap.free(); }

/*
 * --INFO--
 * Address:	8009BEB4
 * Size:	000094
 * onDispose__10JASWaveArcFv
 */
void JASWaveArc::onDispose()
{
	if (eraseSetup()) {
		onEraseDone();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void JASWaveArc::setEntryNum(long entryNum)
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

/*
 * --INFO--
 * Address:	8009BF48
 * Size:	0000E4
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
	long entryNum  = DVDConvertPathToEntrynum(buffer);
	delete[] buffer;
	if (0 <= entryNum) {
		setEntryNum(entryNum);
	}
}

/*
 * --INFO--
 * Address:	8009C02C
 * Size:	000004
 */
// void JASDisposer::onDispose() { }
