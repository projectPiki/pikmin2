#include "JSystem/JAudio/JAS/JASHeap.h"
#include "JSystem/JAudio/JAS/JASWave.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q217JASSimpleWaveBank11TWaveHandle
    __vt__Q217JASSimpleWaveBank11TWaveHandle:
        .4byte 0
        .4byte 0
        .4byte __dt__Q217JASSimpleWaveBank11TWaveHandleFv
        .4byte getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv
        .4byte getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv
    .global __vt__17JASSimpleWaveBank
    __vt__17JASSimpleWaveBank:
        .4byte 0
        .4byte 0
        .4byte __dt__17JASSimpleWaveBankFv
        .4byte getWaveHandle__17JASSimpleWaveBankCFUl
        .4byte getWaveArc__17JASSimpleWaveBankFi
        .4byte 0
        .4byte 0
        .4byte onDispose__10JASWaveArcFv
        .4byte onLoadDone__10JASWaveArcFv
        .4byte onEraseDone__10JASWaveArcFv
        .4byte 0
*/

/**
 * @note Address: 0x8009B6C4
 * @note Size: 0x60
 */
JASSimpleWaveBank::JASSimpleWaveBank()
    : JASWaveBank()
    , JASWaveArc()
    , mHandles(nullptr)
    , mHandleCount(0)
{
}

/**
 * @note Address: 0x8009B724
 * @note Size: 0xD4
 * __dt__17JASSimpleWaveBankFv
 */
JASSimpleWaveBank::~JASSimpleWaveBank() { delete[] mHandles; }

/**
 * @note Address: 0x8009B7F8
 * @note Size: 0x5C
 * __dt__Q217JASSimpleWaveBank11TWaveHandleFv
 */
JASSimpleWaveBank::TWaveHandle::~TWaveHandle() { }

/**
 * @note Address: 0x8009B854
 * @note Size: 0x84
 */
void JASSimpleWaveBank::setWaveTableSize(u32 tableSize)
{
	delete[] mHandles;
	mHandles     = new (getCurrentHeap(), 0) TWaveHandle[tableSize];
	mHandleCount = tableSize;
}

/**
 * @note Address: 0x8009B8D8
 * @note Size: 0x24
 * __ct__Q217JASSimpleWaveBank11TWaveHandleFv
 */
JASSimpleWaveBank::TWaveHandle::TWaveHandle() { mHeap = nullptr; }

/**
 * @note Address: 0x8009B8FC
 * @note Size: 0x24
 */
JASWaveHandle* JASSimpleWaveBank::getWaveHandle(u32 handleIndex) const
{
	if (handleIndex >= mHandleCount) {
		return nullptr;
	}
	return mHandles + handleIndex;
}

/**
 * @note Address: 0x8009B920
 * @note Size: 0x94
 */
void JASSimpleWaveBank::setWaveInfo(u32 handleIndex, const JASWaveInfo& info)
{
	mHandles[handleIndex].mInfo     = info;
	mHandles[handleIndex].mInfo._24 = &_48;
	mHandles[handleIndex].mHeap     = &mHeap;
}

/**
 * @note Address: 0x8009B9B4
 * @note Size: 0x20
 */
JASWaveArc* JASSimpleWaveBank::getWaveArc(int arcIndex)
{
	if (arcIndex != 0) {
		return nullptr;
	}
	return this;
}

/**
 * @note Address: 0x8009B9D4
 * @note Size: 0x8
 */
const JASWaveInfo* JASSimpleWaveBank::TWaveHandle::getWaveInfo() const { return &mInfo; }

/**
 * @note Address: 0x8009B9DC
 * @note Size: 0x24
 */
void* JASSimpleWaveBank::TWaveHandle::getWavePtr() const
{
	if (mHeap->_38 == nullptr) {
		return nullptr;
	}
	return mHeap->_38 + mInfo._08;
}

/**
 * @note Address: 0x8009BA00
 * @note Size: 0x4
 */
void JASWaveArc::onLoadDone() { }

/**
 * @note Address: 0x8009BA04
 * @note Size: 0x4
 */
void JASWaveArc::onEraseDone() { }
