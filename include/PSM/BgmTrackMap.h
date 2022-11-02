#ifndef _PSM_BGMTRACKMAP_H
#define _PSM_BGMTRACKMAP_H

#include "PSSystem/SeqData.h"

namespace PSM {
struct BgmTrackMap {
	char m_fileName[32];    // _00
	u8 m_basicTrackCount;   // _20
	u8 m_eventTrackCount;   // _21
	u8 m_otakaraTrackCount; // _22
	u8 m_kehaiTrackCount;   // _23
	u8 m_battleTrackCount;  // _24
	u8 m_groundTrackCount;  // _25
	u8 m_pikNum[16];        // _26
	u8 m_pikMask[8];        // _36
};

struct BgmTrackMapFile : public PSSystem::TextDataBase, public PSSystem::SingletonBase<BgmTrackMapFile> {
	BgmTrackMapFile(bool);

	virtual ~BgmTrackMapFile(); // _08 (weak)
	virtual void read(Stream&); // _0C

	// _00     = VTBL 1
	// _1C     = VTBL 2
	// _00-_1C = PSSystem::TextDataBase
	// _1C-_20 = PSSystem::SingletonBase
	BgmTrackMap* m_trackMaps; // _20, array of 32 track maps
	int m_mapCount;           // _24, number of track maps in array
	bool _28;                 // _28
};
} // namespace PSM

#endif
