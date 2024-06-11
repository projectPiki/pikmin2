#ifndef _PSM_BGMTRACKMAP_H
#define _PSM_BGMTRACKMAP_H

#include "PSSystem/SeqData.h"
#include "string.h"

namespace PSM {
struct BgmTrackMap {
	BgmTrackMap()
	{
		mBasicTrackCount   = 0;
		mEventTrackCount   = 0;
		mOtakaraTrackCount = 0;
		mKehaiTrackCount   = 0;
		mBattleTrackCount  = 0;
		mGroundTrackCount  = 0;
		for (u8 i = 0; i < 16; i++) {
			mPikNum[i] = 0;
		}
		for (u8 i = 0; i < 8; i++) {
			mPikMask[i] = 0;
		}
		strcpy(mFileName, "");
	};

	BgmTrackMap(BgmTrackMap& other)
	{
		mBasicTrackCount   = other.mBasicTrackCount;
		mEventTrackCount   = other.mEventTrackCount;
		mOtakaraTrackCount = other.mOtakaraTrackCount;
		mKehaiTrackCount   = other.mKehaiTrackCount;
		mBattleTrackCount  = other.mBattleTrackCount;
		mGroundTrackCount  = other.mGroundTrackCount;
		for (u8 i = 0; i < 16; i++) {
			mPikNum[i] = other.mPikNum[i];
		}
		for (u8 i = 0; i < 8; i++) {
			mPikMask[i] = other.mPikMask[i];
		}
		strcpy(mFileName, other.mFileName);
	};

	inline int getPikNum()
	{
		int num = 0;
		for (u8 i = 0; i < 16; i++) {
			if (mPikNum[i]) {
				num++;
			}
		}
		return num;
	}

	inline u8 getPikMaskFlag()
	{
		u8 num = 0;
		for (u8 i = 0; i < 8; i++) {
			u8 val = (u32)mPikMask[i];
			if (val) {
				num |= val << i;
			}
		}
		return num;
	}

	char mFileName[32];    // _00
	u8 mBasicTrackCount;   // _20
	u8 mEventTrackCount;   // _21
	u8 mOtakaraTrackCount; // _22
	u8 mKehaiTrackCount;   // _23
	u8 mBattleTrackCount;  // _24
	u8 mGroundTrackCount;  // _25
	u8 mPikNum[16];        // _26
	u8 mPikMask[8];        // _36
};

struct BgmTrackMapFile : public ::PSSystem::TextDataBase, public ::PSSystem::SingletonBase<BgmTrackMapFile> {
	BgmTrackMapFile(bool flag);

	virtual ~BgmTrackMapFile() { }    // _08 (weak)
	virtual bool read(Stream& input); // _0C

	BgmTrackMap readTrackMap(const char*);

	// _00     = VTBL 1
	// _1C     = VTBL 2
	// _00-_1C = PSSystem::TextDataBase
	// _1C-_20 = PSSystem::SingletonBase
	BgmTrackMap* mTrackMaps;     // _20, array of 32 track maps
	int mMapCount;               // _24, number of track maps in array
	bool mIsTrackMapListEnabled; // _28
};
} // namespace PSM

#endif
