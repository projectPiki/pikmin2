#ifndef _JSYSTEM_JAI_JAINTER_H
#define _JSYSTEM_JAI_JAINTER_H

#include "JSystem/JAI/JAInter/MoveParaSet.h"
#include "JSystem/JAS/JASTrack.h"
#include "types.h"
#include "Dolphin/mtx.h"

struct JAISequence;

namespace JAInter {

namespace SequenceMgr {
struct CustomHeapInfo {
};
} // namespace SequenceMgr

struct Actor {
	inline Actor(Vec* vec1, Vec* vec2, Vec* vec3, u32 unk)
	{
		m_vec1 = vec1;
		m_vec2 = vec2;
		m_vec3 = vec3;
		m_unk  = unk;
		// Actual condition is unknown
		if (m_vec1 == nullptr) {
			m_flag.boolView[0] = true;
		} else {
			m_flag.boolView[0] = true;
		}
	}

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
	inline Camera(Vec& vec1, Vec& vec2, Mtx& mtx)
	{
		m_vec1 = &vec1;
		m_vec2 = &vec2;
		m_mtx  = &mtx;
	}

	Vec* m_vec1; // _00
	Vec* m_vec2; // _04
	Mtx* m_mtx;  // _08
};

struct HeapBlock {
};

struct LinkSound {
};

struct MuteBit {
};

struct PlayerParameter {
};

struct SeParameter {
	SeParameter();

	u8 _00[0x20];                // _00 - unknown
	short _20;                   // _20
	u8 _22[0x2];                 // _22 - possibly padding
	MoveParaSet _24[16];         // _24
	MoveParaSet _124[8];         // _124
	MoveParaSetInitHalf _1A4[8]; // _1A4
	MoveParaSet _224[8];         // _224
	MoveParaSetInitZero _2A4[8]; // _2A4
	MoveParaSetInitZero _324[8]; // _324
	MoveParaSet _3A4[8];         // _3A4
	float* _424;                 // _424
	float* _428;                 // _428
	float* _42C;                 // _42C
	float* _430;                 // _430
	u32 _434;                    // _434
	float* _438;                 // _438
};

struct SeqUpdateData {
	u8 _00;                  // _00 - unknown
	u8 _01;                  // _01 - unknown
	u8 _02;                  // _02
	u8 _03;                  // _03 - could be padding
	uint _04;                // _04
	int _08;                 // _08
	u8 _0C[0x18];            // _0C - unknown
	void* _24;               // _24 - unknown pointer
	void* _28;               // _28 - unknown pointer
	void* _2C;               // _2C - unknown pointer
	void* _30;               // _30 - unknown pointer
	void* _34;               // _34 - unknown pointer
	u8 _38[0xC];             // _38 - unknown
	void* _44;               // _44 - unknown pointer
	JAISequence* m_sequence; // _48
	PlayerParameter* _4C;    // _4C - pointer to array of 33 parameters
};

struct SeqParameter {
	// might extend MoveParaSet?
	~SeqParameter();
	void init();

	float _00;                  // _00
	float _04;                  // _04 - tempo proportion?
	float _08;                  // _08 - affected by tempo?
	u32 _0C;                    // _0C
	MoveParaSet _10[16];        // _10
	MoveParaSet _110[20];       // _110
	MoveParaSet* _250;          // _250
	MoveParaSet* _254;          // _254
	MoveParaSet* _258;          // _258
	MoveParaSet* _25C;          // _25C
	MoveParaSet* _260;          // _260
	MoveParaSetInitHalf* _264;  // _264
	MoveParaSet* _268;          // _268
	MoveParaSetInitZero* _26C;  // _26C
	MoveParaSetInitZero* _270;  // _270
	void* _274;                 // _274 - unknown pointer
	u8 _278;                    // _278 - auto heap index?
	u8 _279;                    // _279
	short _27A;                 // _27A
	int _27C;                   // _27C
	u8 _280[0x34];              // _280
	void* _2B4;                 // _2B4 - unknown pointer
	void* _2B8;                 // _2B8 - unknown pointer
	MuteBit* _2BC;              // _2BC
	SeqUpdateData* _2C0;        // _2C0
	JASTrack m_track;           // _2C4
	JASOuterParam m_outerParam; // _62C
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
