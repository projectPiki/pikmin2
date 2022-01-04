#ifndef _JSYSTEM_JAI_JAINTER_H
#define _JSYSTEM_JAI_JAINTER_H

#include "types.h"

namespace JAInter {
namespace SequenceMgr {
	struct CustomHeapInfo {
	};
} // namespace SequenceMgr
struct Actor {
};
struct Camera {
};
struct HeapBlock {
};
struct LinkSound {
};
struct MoveParaSet {
};
struct MoveParaSetInitHalf {
};
struct MoveParaSetInitZero {
};
struct MuteBit {
};
struct Object {
};
struct ObjectBase {
};
struct PlayerParameter {
};
struct SeParameter {
};
struct SeqParameter {
};
struct SeqUpdateData {
};
struct SoundInfo {
	int unk1;
	unsigned long count;
	unsigned long pitch;
	union volume_t {
		unsigned long v1;
		unsigned char v2;
	} volume;
};
namespace SoundTable {
	void init(u8*, ulong);
	SoundInfo* getInfoPointer(ulong);
	void getInfoFormat(ulong);
	void setInfoTrack(ulong, u8);
	u8 getCategotyMax(void);
	void getSoundMax(u8);
	void getSoundTablePointer(void);

	extern u8 mVersion;
	extern u8 mCategotyMax;
	extern u16* mSoundMax;
	extern ulong mDataSize;
	extern SoundInfo** mPointerCategory;
	extern u8* mAddress;
}; // namespace SoundTable

void deleteTmpDVDFile(u8**);
void loadTmpDVDFile(char*, u8**);
void transInitDataFile(u8*, ulong);
void routeToTrack(ulong);
} // namespace JAInter

#endif
