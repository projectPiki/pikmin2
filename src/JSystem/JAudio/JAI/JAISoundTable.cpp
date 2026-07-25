#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAI/JAIBasic.h"
#include "JSystem/JAudio/JAI/JAIGlobalParameter.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "types.h"

u8 JAInter::SoundTable::mVersion;
u8 JAInter::SoundTable::mCategotyMax;
u16* JAInter::SoundTable::mSoundMax;
u32 JAInter::SoundTable::mDatasize;
JAInter::SoundInfo** JAInter::SoundTable::mPointerCategory;
u8* JAInter::SoundTable::mAddress;

/**
 * @note Address: 0x800B744C
 * @note Size: 0xCC
 */
void JAInter::SoundTable::init(u8* data, u32 dataSize)
{
	mAddress  = data;
	mDatasize = dataSize;
	mVersion  = mAddress[3];

	mSoundMax        = new (JAIBasic::msCurrentHeap, 4) u16[0x12];
	mPointerCategory = new (JAIBasic::msCurrentHeap, 4) SoundInfo*[0x12];
	for (u8 i = 0; i < 0x12; i++) {
		// looks disgusting but it matches
		mSoundMax[i]        = *reinterpret_cast<u16*>(&mAddress[6 + i * 4]);
		mPointerCategory[i] = &((SoundInfo*)&mAddress[0x50])[*(u16*)(&mAddress[8 + i * 4])];
		if (i < 0x10 && mSoundMax[i] != 0) {
			mCategotyMax = i + 1;
		}
	}
}

/**
 * @note Address: 0x800B7518
 * @note Size: 0xC4
 */
JAInter::SoundInfo* JAInter::SoundTable::getInfoPointer(u32 soundID)
{
	SoundInfo* info = nullptr;
	u32 category;
	switch (soundID & JAISoundID_TypeMask) {
	case JAISoundID_Type_Se:
		category = soundID >> 0xC & 0xFF;
		JAIGlobalParameter::getParamSeCategoryMax();
		break;
	case JAISoundID_Type_Sequence:
		category = 0x10;
		break;
	case JAISoundID_Type_Stream:
		category = 0x11;
		break;
	}
	u32 maskedID = soundID & 0x3FF;
	if (mAddress != nullptr && maskedID < mSoundMax[category]) {
		info = mPointerCategory[category] + maskedID;
	}
	return info;
}

/**
 * @note Address: 0x800B75DC
 * @note Size: 0x58
 */
u32 JAInter::SoundTable::getInfoFormat(u32 id)
{
	u32 retval = 0;
	switch (id & JAISoundID_TypeMask) {
	case JAISoundID_Type_Se:
		retval = mAddress[0];
		break;
	case JAISoundID_Type_Sequence:
		retval = mAddress[1];
		break;
	case JAISoundID_Type_Stream:
		retval = mAddress[2];
		break;
	}
	return retval;
}

/**
 * @note Address: N/A
 * @note Size: 0xE4
 */
void JAInter::SoundTable::setInfoTrack(u32, u8)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800B7634
 * @note Size: 0x8
 */
u8 JAInter::SoundTable::getCategotyMax()
{
	return mCategotyMax;
}

/**
 * @note Address: 0x800B763C
 * @note Size: 0x10
 */
u16 JAInter::SoundTable::getSoundMax(u8 cat)
{
	return mSoundMax[cat];
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void JAInter::SoundTable::getSoundTablePointer()
{
	// UNUSED FUNCTION
}
