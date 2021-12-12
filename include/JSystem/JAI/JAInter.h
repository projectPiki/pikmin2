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
};
namespace SoundTable {
	void init(uchar*, ulong);
	SoundInfo* getInfoPointer(ulong);
	void getInfoFormat(ulong);
	void setInfoTrack(ulong, uchar);
	uchar getCategotyMax(void);
	void getSoundMax(uchar);
	void getSoundTablePointer(void);

	extern u8 mVersion;
	extern u8 mCategotyMax;
	extern ushort* mSoundMax;
	extern ulong mDataSize;
	extern SoundInfo** mPointerCategory;
	extern uchar* mAddress;
}; // namespace SoundTable

void deleteTmpDVDFile(uchar**);
void loadTmpDVDFile(char*, uchar**);
void transInitDataFile(uchar*, ulong);
void routeToTrack(ulong);
} // namespace JAInter

#endif
