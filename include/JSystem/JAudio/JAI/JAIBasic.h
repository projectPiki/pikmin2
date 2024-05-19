#ifndef _JSYSTEM_JAI_JAIBASIC_H
#define _JSYSTEM_JAI_JAIBASIC_H

#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "types.h"

struct JAISe;
struct JAISequence;
struct JAISound;
struct JAIStream;
struct JKRHeap;

struct JAIBasic {
	struct Flags {
		bool _00 : 1;
		bool _01 : 1;
		bool _02 : 1;
		bool _03 : 1;
		bool _04 : 1;
	};

	JAIBasic();

	virtual JAISequence* makeSequence();       // _08
	virtual JAISe* makeSe();                   // _0C
	virtual JAIStream* makeStream();           // _10
	virtual u16 getMapInfoFxline(u32);         // _14
	virtual BOOL getMapInfoGround(u32);        // _18
	virtual f32 getMapInfoFxParameter(u32);    // _1C
	virtual void setSeExtParameter(JAISound*); // _20
	virtual void setRegisterTrackCallback();   // _24

	// void startSoundVecT<JAISound>(u32, JAISound**, Vec*, u32, u32, u8);
	// void startSoundActorT<JAISound>(u32, JAISound**, JAInter::Actor*, u32, u8);
	void initDriver(JKRSolidHeap*, u32, u8);
	void initInterface(u8);
	void initInterfaceMain();
	void initHeap();
	JKRArchive* initArchive();
	void initResourcePath();
	void setCameraInfo(Vec*, Vec*, f32 (*)[4], u32);
	void initAudioThread(JKRSolidHeap*, u32, u8);
	void initCamera();
	void setInitFileLoadSwitch(u8);
	BOOL initReadFile();
	void processFrameWork();
	void startSoundBasic(u32, JAISound**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAISequence**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAISe**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAIStream**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void stopSoundHandle(JAISound*, u32);
	void stopAllSe(u8);
	u16 getSoundOffsetNumberFromID(u32);
	static u8 checkAudioStopStatus();

	static void stopAudio(u32, bool);
	static s32 stopCallBack(void*);
	static u16 setParameterSeqSync(JASTrack*, u16);

	static JAIBasic* getInterface() { return msBasic; }
	static JKRHeap* getCurrentJAIHeap() { return msCurrentHeap; }

	template <typename T>
	void startSoundActorT(u32 id, T** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5);

	template <typename T>
	void startSoundVecReturnHandleT(T** handlePtr, u32 p2, Vec* p3, u32 p4, u32 p5, u8 p6);

	template <typename T>
	void startSoundVecT(u32 id, T** handlePtr, Vec* p3, u32 p4, u32 p5, u8 p6);

	template <typename T>
	void startSoundActorReturnHandleT(T**, u32, JAInter::Actor*, u32, u8);

	template <typename T>
	void prepareSoundVecT(u32, T**, Vec*, u32, u32, u8);

	// unused/inlined:
	void bootDSP();
	void getPlayingSoundHandle(JAISound**, u32);
	void stopPlayingObjectSe(void*);
	void stopPlayingIDObjectSe(u32, void*);
	void stopPlayingCategorySe(u8);
	void stopPlayingCategoryObjectSe(u8, void*);
	void stopAllSe(void*);
	void stopAllSe(u8, void*);
	void stopAllSeq(void*);
	void stopActorSoundOneBuffer(void*, JSULink<JAISound>*);
	void stopIDSoundOneBuffer(u32, JSULink<JAISound>*);
	void stopIDActorSoundOneBuffer(u32, void*, JSULink<JAISound>*);
	void stopAllSound(void*);
	void getPlayingSoundLinkHeadPointer(u32);
	void stopAllSound(u32);
	void stopAllSound(u32, void*);
	void deleteObject(void*);
	void setPauseFlagAll(u8);
	void changeSoundScene(u32);
	void setSeCancelSwitch(u8, u8);
	void setSeCategoryVolume(u8, u8);
	void allocStreamBuffer(void*, s32);
	void deallocStreamBuffer();
	void resumeAudio();

	// VT _00
	JAInter::Camera* mCameras; // _04
	JKRHeap* mHeap;            // _08
	u8 _0C;                    // _0C
	u8 mParamSoundOutputMode;  // _0D, see JASOutputMode enum
	Flags mFlags;              // _0E
	u32 _10;                   // _10
	u32 _14;                   // _14
	u8* _18;                   // _18
	u8** _1C;                  // _1C

	static JAIBasic* msBasic;
	static JKRHeap* msCurrentHeap;
	static bool msStopMode;
	static u32 msAudioStopTime;
	static f32 msDspLevel;
	static f32 msAutoLevel;
	static f32 msAutoDif;
	static f32 msDspDif;

	static u8 msStopStatus;
};

template <typename T>
void JAIBasic::startSoundVecT(u32 id, T** handlePtr, Vec* p3, u32 p4, u32 p5, u8 p6)
{
	JAInter::Actor actor(p3, p5);
	startSoundActorT(id, handlePtr, &actor, p4, p6);
}

template <typename T>
void JAIBasic::startSoundActorT(u32 id, T** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5)
{
	JAInter::SoundInfo* info = JAInter::SoundTable::getInfoPointer(id);
	if (info) {
		startSoundBasic(id, handlePtr, actor, p4, p5, info);
	}
}

template <typename T>
void JAIBasic::startSoundVecReturnHandleT(T** handlePtr, u32 p2, Vec* p3, u32 p4, u32 p5, u8 p6)
{
	T* tempHandle[1];
	*tempHandle = nullptr;
	if ((p2 & JAISoundID_TypeMask) == JAISoundID_Type_Se) {
		*tempHandle = (T*)(1);
	}
	JAIBasic::startSoundVecT(p2, tempHandle, p3, p4, p5, p6);
	*handlePtr = *tempHandle;
	if (*tempHandle) {
		(*tempHandle)->release();
	}
}

template <typename T>
void JAIBasic::startSoundActorReturnHandleT(T** handlePtr, u32 p2, JAInter::Actor* p3, u32 p4, u8 p6)
{
	T* tempHandle[1];
	*tempHandle = nullptr;
	if ((p2 & JAISoundID_TypeMask) == JAISoundID_Type_Se) {
		*tempHandle = (T*)(1);
	}
	JAIBasic::startSoundActorT(p2, tempHandle, p3, p4, p6);
	*handlePtr = *tempHandle;
	if (*tempHandle) {
		(*tempHandle)->release();
	}
}

template <typename T>
void JAIBasic::prepareSoundVecT(u32 p1, T** handlePtr, Vec* p3, u32 p4, u32 p5, u8 p6)
{
	JAIBasic::startSoundVecT(p1, handlePtr, p3, p4, p5, p6);
	if (*handlePtr) {
		(*handlePtr)->setPrepareFlag(1);
	}
}

static inline JKRHeap* JAIGetCurrentHeap() { return JAIBasic::msCurrentHeap; }

#endif
