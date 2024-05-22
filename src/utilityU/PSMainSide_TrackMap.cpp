#include "P2Macros.h"
#include "PSM/BgmTrackMap.h"
#include "stream.h"

#define TRACKMAP_MAX_COUNT 32

namespace PSM {

/**
 * @note Address: 0x804718D0
 * @note Size: 0xA8
 */
BgmTrackMapFile::BgmTrackMapFile(bool doUseTrackList)
{
	mTrackMaps             = nullptr;
	mMapCount              = 0;
	mIsTrackMapListEnabled = doUseTrackList;
	if (doUseTrackList) {
		mTrackMaps = new BgmTrackMap[TRACKMAP_MAX_COUNT];
	}
}

/**
 * @note Address: 0x80471978
 * @note Size: 0x77C
 */
BgmTrackMap BgmTrackMapFile::readTrackMap(const char* path)
{
	JUT_ASSERTLINE(119, mFile, "not loaded\n");

	RamStream input(mFile, -1);
	input.setMode(STREAM_MODE_TEXT, 1);

	BgmTrackMap map;

	for (u8 i = 0; i < TRACKMAP_MAX_COUNT; i++) {
		char* name = input.readString(nullptr, 0);

		if (!strcmp(name, "endoffile")) {
			JUT_PANICLINE(135, "not find\ntrack map\n(%s)", path);
			return map;
		}

		strcpy(map.mFileName, name);
		u8 nrm               = input.readByte();
		map.mBasicTrackCount = nrm;
		JUT_ASSERTLINE(142, nrm < 16, "basic trk over\n(%s)\n(Cur=%d)", path, i);

		u8 evt               = input.readByte();
		map.mEventTrackCount = evt;
		JUT_ASSERTLINE(145, evt < 16, "event trk over\n(%s)\n(Cur=%d)", path, i);

		u8 ota                 = input.readByte();
		map.mOtakaraTrackCount = ota;
		JUT_ASSERTLINE(148, ota < 16, "otakara trk over\n(%s)\n(Cur=%d)", path, i);

		u8 keh               = input.readByte();
		map.mKehaiTrackCount = keh;
		JUT_ASSERTLINE(151, keh < 16, "kehai trk over\n(%s)\n(Cur=%d)", path, i);

		u8 btl                = input.readByte();
		map.mBattleTrackCount = btl;
		JUT_ASSERTLINE(154, btl < 16, "battle trk over\n(%s)\n(Cur=%d)", path, i);

		u8 grn                = input.readByte();
		map.mGroundTrackCount = grn;
		JUT_ASSERTLINE(157, grn < 16, "ground trk over\n(%s)\n(Cur=%d)", path, i);

		for (u8 j = 0; j < 16; j++) {
			map.mPikNum[j] = input.readByte();
			JUT_ASSERTLINE(161, map.mPikNum[j] <= 1, "abnormal pik num\n(%s)\n(Cur=%d)", path, i);
		}

		for (u8 j = 0; j < 8; j++) {
			map.mPikMask[j] = input.readByte();
			JUT_ASSERTLINE(166, map.mPikMask[j] <= 1, "abnormal pik mask\n(%s)\n(Cur=%d)", path, i);
		}

		if (!strcmp(name, path)) {
			return map;
		}
	}
	JUT_PANICLINE(179, "file num over\ntrack map\n(%s)", path);
	return map;
}

static const char* unused  = "P2Assert";
static const char* unused2 = "not find info\n";

/**
 * @note Address: 0x804720F4
 * @note Size: 0x294
 */
bool BgmTrackMapFile::read(Stream& input)
{
	P2ASSERTLINE(205, mIsTrackMapListEnabled == true);

	for (mMapCount = 0; mMapCount < TRACKMAP_MAX_COUNT; mMapCount++) {
		int currentMapNumber = mMapCount;
		char* s1             = input.readString(nullptr, 0);
		if (strcmp(s1, "endoffile") == 0) {
			return true;
		}
		BgmTrackMap& dest = mTrackMaps[currentMapNumber];
		strcpy(dest.mFileName, s1);
		dest.mBasicTrackCount = input.readByte();
		JUT_ASSERTLINE(223, dest.mBasicTrackCount < 16, "basic trk over\n(Cur=%d)\n", currentMapNumber);
		dest.mEventTrackCount = input.readByte();
		JUT_ASSERTLINE(226, dest.mEventTrackCount < 16, "event trk over\n(Cur=%d)\n", currentMapNumber);
		dest.mOtakaraTrackCount = input.readByte();
		JUT_ASSERTLINE(229, dest.mOtakaraTrackCount < 16, "otakara trk over\n(Cur=%d)\n", currentMapNumber);
		dest.mKehaiTrackCount = input.readByte();
		JUT_ASSERTLINE(232, dest.mKehaiTrackCount < 16, "kehai trk over\n(Cur=%d)\n", currentMapNumber);
		dest.mBattleTrackCount = input.readByte();
		JUT_ASSERTLINE(235, dest.mBattleTrackCount < 16, "battle trk over\n(Cur=%d)\n", currentMapNumber);
		dest.mGroundTrackCount = input.readByte();
		JUT_ASSERTLINE(238, dest.mGroundTrackCount < 16, "ground trk over\n(Cur=%d)\n", currentMapNumber);
		for (u8 i = 0; i < 16; i++) {
			u8 byte         = input.readByte();
			dest.mPikNum[i] = byte;
			JUT_ASSERTLINE(242, dest.mPikNum[i] <= 1, "abnormal pik num\n(Cur=%d)\n", currentMapNumber);
		}
		for (u8 i = 0; i < 8; i++) {
			u8 byte          = input.readByte();
			dest.mPikMask[i] = byte;
			JUT_ASSERTLINE(246, dest.mPikMask[i] <= 1, "abnormal pik mask\n(Cur=%d)\n", currentMapNumber);
		}
	}

	JUT_PANICLINE(250, "file num over\n");
	return false;
}

} // namespace PSM
