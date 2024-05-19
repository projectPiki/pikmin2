#include "JSystem/JAudio/JAS/JASTrack.h"

/**
 * @note Address: 0x8009C310
 * @note Size: 0x88
 */
void JASTrackPort::init()
{
	for (int i = 0; i < TRACKPORT_MAX; i++) {
		mImportFlag[i] = 0;
		mExportFlag[i] = 0;
		mValue[i]      = 0;
	}
}

/**
 * @note Address: 0x8009C398
 * @note Size: 0x18
 */
u16 JASTrackPort::readImport(int portNo)
{
	mImportFlag[portNo] = 0;
	return mValue[portNo];
}

/**
 * @note Address: 0x8009C3B0
 * @note Size: 0x1C
 */
u16 JASTrackPort::readExport(int portNo)
{
	mExportFlag[portNo] = 0;
	return mValue[portNo];
}

/**
 * @note Address: 0x8009C3CC
 * @note Size: 0x18
 */
void JASTrackPort::writeImport(int portNo, u16 value)
{
	mImportFlag[portNo] = 1;
	mValue[portNo]      = value;
}

/**
 * @note Address: 0x8009C3E4
 * @note Size: 0x1C
 */
void JASTrackPort::writeExport(int portNo, u16 value)
{
	mExportFlag[portNo] = 1;
	mValue[portNo]      = value;
}
