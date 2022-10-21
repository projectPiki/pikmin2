#ifndef _JSYSTEM_JAI_JAIBASIC_H
#define _JSYSTEM_JAI_JAIBASIC_H

#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JAI/JAIStream.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JAI/JAISe.h"
#include "JSystem/JAS/JASTrack.h"
#include "types.h"

struct JKRHeap;

struct JAIBasic {
	JAIBasic();

	virtual void makeSequence();               // _08
	virtual void makeSe();                     // _0C
	virtual void makeStream();                 // _10
	virtual void getMapInfoFxline(u32);        // _14
	virtual void getMapInfoGround(u32);        // _18
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
	void initArchive();
	void initResourcePath();
	void setCameraInfo(Vec*, Vec*, float (*)[4], u32);
	void initAudioThread(JKRSolidHeap*, u32, u8);
	void initCamera();
	void setInitFileLoadSwitch(u8);
	bool initReadFile();
	void processFrameWork();
	void startSoundBasic(u32, JAISound**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAISequence**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAISe**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void startSoundBasic(u32, JAIStream**, JAInter::Actor*, u32, u8, JAInter::SoundInfo*);
	void stopSoundHandle(JAISound*, u32);
	void stopAllSe(u8);
	void getSoundOffsetNumberFromID(u32);
	void setParameterSeqSync(JASTrack*, u16);
	void stopAudio(u32, bool);
	void checkAudioStopStatus();
	void stopCallBack(void*);
	// void startSoundActorReturnHandleT<JAISe>(JAISe**, u32, JAInter::Actor*, u32, u8);
	// void startSoundActorT<JAISe>(u32, JAISe**, JAInter::Actor*, u32, u8);
	// void startSoundVecReturnHandleT<JAISound>(JAISound**, u32, Vec*, u32, u32, u8);

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
	u8 _0E;                     // _0E
	u32 _10;                    // _10
	u32 _14;                    // _14
	u32 _18;                    // _18
	u32 _1C;                    // _1C

	static JAIBasic* msBasic;
	static JKRHeap* msCurrentHeap;
	static bool msStopMode;
	static u32 msAudioStopTime;
	static float msDspLevel;
	static float msAutoLevel;
	static float msAutoDif;
};

#endif
