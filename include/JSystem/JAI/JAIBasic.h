#ifndef _JSYSTEM_JAI_JAIBASIC_H
#define _JSYSTEM_JAI_JAIBASIC_H

#include "JSystem/JAI/JAInter.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JAS/JASTrack.h"
#include "types.h"

struct JAISe;
struct JAISequence;
struct JAISound;
struct JAIStream;
struct JKRHeap;

struct JAIBasic {
	JAIBasic();

	virtual JAISequence* makeSequence();       // _08
	virtual JAISe* makeSe();                   // _0C
	virtual JAIStream* makeStream();           // _10
	virtual BOOL getMapInfoFxline(u32);        // _14
	virtual BOOL getMapInfoGround(u32);        // _18
	virtual float getMapInfoFxParameter(u32);  // _1C
	virtual void setSeExtParameter(JAISound*); // _20
	virtual void setRegisterTrackCallback();   // _24

	// void prepareSoundVecT<JAISound>(u32, JAISound**, Vec*, u32, u32, u8);
	// void startSoundVecT<JAISound>(u32, JAISound**, Vec*, u32, u32, u8);
	// void startSoundActorT<JAISound>(u32, JAISound**, JAInter::Actor*, u32, u8);
	void initDriver(JKRSolidHeap*, u32, u8);
	void initInterface(u8);
	void initInterfaceMain();
	void initHeap();
	JKRArchive* initArchive();
	void initResourcePath();
	void setCameraInfo(Vec*, Vec*, float (*)[4], u32);
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
	u32 getSoundOffsetNumberFromID(u32);
	void stopAudio(u32, bool);
	int checkAudioStopStatus();
	void stopCallBack(void*);

	static u16 setParameterSeqSync(JASTrack*, u16);

	// void startSoundActorReturnHandleT<JAISe>(JAISe**, u32, JAInter::Actor*, u32, u8);

	// void startSoundActorT<JAISe>(u32, JAISe**, JAInter::Actor*, u32, u8);
	template <typename T>
	void startSoundActorT(u32 id, T** handlePtr, JAInter::Actor* actor, u32 p4, u8 p5)
	{
		JAInter::SoundInfo* info = JAInter::SoundTable::getInfoPointer(id);
		if (info != nullptr) {
			startSoundBasic(id, handlePtr, actor, p4, p5, info);
		}
	}

	// void startSoundVecReturnHandleT<JAISound>(JAISound**, u32, Vec*, u32, u32, u8);
	template <typename T>
	T* startSoundVecReturnHandleT(T** handlePtr, u32 p2, Vec* p3, u32 p4, u32 p5, u8 p6);

	template <typename T>
	void startSoundVecT(u32 id, T** handlePtr, Vec* p3, u32 p4, u32 p5, u8 p6)
	{
		JAInter::Actor actor(p3, p3, p3, p5);
		startSoundActorT(id, handlePtr, &actor, p4, p6);
	}

	// unused/inlined:
	void bootDSP();
	void getPlayingSoundHandle(JAISound**, unsigned long);
	void stopPlayingObjectSe(void*);
	void stopPlayingIDObjectSe(unsigned long, void*);
	void stopPlayingCategorySe(unsigned char);
	void stopPlayingCategoryObjectSe(unsigned char, void*);
	void stopAllSe(void*);
	void stopAllSe(unsigned char, void*);
	void stopAllSeq(void*);
	void stopActorSoundOneBuffer(void*, JSULink<JAISound>*);
	void stopIDSoundOneBuffer(unsigned long, JSULink<JAISound>*);
	void stopIDActorSoundOneBuffer(unsigned long, void*, JSULink<JAISound>*);
	void stopAllSound(void*);
	void getPlayingSoundLinkHeadPointer(unsigned long);
	void stopAllSound(unsigned long);
	void stopAllSound(unsigned long, void*);
	void deleteObject(void*);
	void setPauseFlagAll(unsigned char);
	void changeSoundScene(unsigned long);
	void setSeCancelSwitch(unsigned char, unsigned char);
	void setSeCategoryVolume(unsigned char, unsigned char);
	void allocStreamBuffer(void*, long);
	void deallocStreamBuffer();
	void resumeAudio();

	// VT _00
	JAInter::Camera* m_cameras; // _04
	JKRHeap* m_heap;            // _08
	u8 _0C;                     // _0C
	u8 m_paramSoundOutputMode;  // _0D
	struct Flags {
		bool _0 : 1;
		bool _1 : 1;
		bool _2 : 1;
		bool _3 : 1;
		bool _4 : 1;
	} _0E;   // _0E
	u32 _10; // _10
	u32 _14; // _14
	u32 _18; // _18
	u32 _1C; // _1C

	static JAIBasic* msBasic;
	static JKRHeap* msCurrentHeap;
	static bool msStopMode;
	static u32 msAudioStopTime;
	static float msDspLevel;
	static float msAutoLevel;
	static float msAutoDif;

	static u8 msStopStatus;
};

#endif
