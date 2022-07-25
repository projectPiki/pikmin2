#ifndef _PSM_BGMTRACKMAPFILE_H
#define _PSM_BGMTRACKMAPFILE_H

/*
    __vt__Q23PSM15BgmTrackMapFile:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23PSM15BgmTrackMapFileFv
    .4byte read__Q23PSM15BgmTrackMapFileFR6Stream
    .4byte 0
    .4byte 0
    .4byte "@28@__dt__Q23PSM15BgmTrackMapFileFv"
    .4byte 0
*/

namespace PSM {
struct BgmTrackMapFile {
	virtual ~BgmTrackMapFile(); // _08 (weak)
	virtual void read(Stream&); // _0C
	virtual void _10() = 0;     // _10
	virtual void _14() = 0;     // _14
	virtual void _1C() = 0;     // _1C

	BgmTrackMapFile(bool);
	void readTrackMap(const char*);
};
} // namespace PSM

#endif
