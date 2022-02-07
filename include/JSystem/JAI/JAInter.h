#ifndef _JSYSTEM_JAI_JAINTER_H
#define _JSYSTEM_JAI_JAINTER_H

#include "types.h"
#include "Dolphin/Mtx.h"

namespace JAInter {
namespace SequenceMgr {
struct CustomHeapInfo {
};
} // namespace SequenceMgr
struct Actor {
	Vec* m_vec1; // _00
	Vec* m_vec2; // _04
	Vec* m_vec3; // _08
	u32 m_unk;   // _0C (might be a pointer?)
	// bool m_flag; // _10
	union {
		bool boolView[4];
		u32 longView;
	} m_flag; // _10
};
struct Camera {
	Vec* m_vec1; // _00
	Vec* m_vec2; // _04
	Mtx* m_mtx;  // _08
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
void init(u8*, u32);
SoundInfo* getInfoPointer(u32);
void getInfoFormat(u32);
void setInfoTrack(u32, u8);
u8 getCategotyMax(void);
void getSoundMax(u8);
void getSoundTablePointer(void);

extern u8 mVersion;
extern u8 mCategotyMax;
extern u16* mSoundMax;
extern u32 mDataSize;
extern SoundInfo** mPointerCategory;
extern u8* mAddress;
}; // namespace SoundTable

void deleteTmpDVDFile(u8**);
void loadTmpDVDFile(char*, u8**);
u8* transInitDataFile(u8*, u32);
u32 routeToTrack(u32);
} // namespace JAInter

#endif
