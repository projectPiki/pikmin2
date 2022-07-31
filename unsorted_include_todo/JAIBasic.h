#ifndef _JAIBASIC_H
#define _JAIBASIC_H

/*
    __vt__8JAIBasic:
    .4byte 0
    .4byte 0
    .4byte makeSequence__8JAIBasicFv
    .4byte makeSe__8JAIBasicFv
    .4byte makeStream__8JAIBasicFv
    .4byte getMapInfoFxline__8JAIBasicFUl
    .4byte getMapInfoGround__8JAIBasicFUl
    .4byte getMapInfoFxParameter__8JAIBasicFUl
    .4byte setSeExtParameter__8JAIBasicFP8JAISound
    .4byte setRegisterTrackCallback__8JAIBasicFv
*/

struct JAIBasic {
	virtual void makeSequence();                       // _08
	virtual void makeSe();                             // _0C
	virtual void makeStream();                         // _10
	virtual void getMapInfoFxline(unsigned long);      // _14
	virtual void getMapInfoGround(unsigned long);      // _18
	virtual void getMapInfoFxParameter(unsigned long); // _1C
	virtual void setSeExtParameter(JAISound*);         // _20
	virtual void setRegisterTrackCallback();           // _24

	void prepareSoundVecT<JAISound>(unsigned long, JAISound**, Vec*, unsigned long, unsigned long, unsigned char);
	void startSoundVecT<JAISound>(unsigned long, JAISound**, Vec*, unsigned long, unsigned long, unsigned char);
	void startSoundActorT<JAISound>(unsigned long, JAISound**, JAInter::Actor*, unsigned long, unsigned char);
	JAIBasic();
	void initDriver(JKRSolidHeap*, unsigned long, unsigned char);
	void initInterface(unsigned char);
	void initInterfaceMain();
	void initHeap();
	void initArchive();
	void initResourcePath();
	void setCameraInfo(Vec*, Vec*, float (*)[4], unsigned long);
	void initAudioThread(JKRSolidHeap*, unsigned long, unsigned char);
	void initCamera();
	void setInitFileLoadSwitch(unsigned char);
	void initReadFile();
	void processFrameWork();
	void startSoundBasic(unsigned long, JAISound**, JAInter::Actor*, unsigned long, unsigned char, JAInter::SoundInfo*);
	void startSoundBasic(unsigned long, JAISequence**, JAInter::Actor*, unsigned long, unsigned char, JAInter::SoundInfo*);
	void startSoundBasic(unsigned long, JAISe**, JAInter::Actor*, unsigned long, unsigned char, JAInter::SoundInfo*);
	void startSoundBasic(unsigned long, JAIStream**, JAInter::Actor*, unsigned long, unsigned char, JAInter::SoundInfo*);
	void stopSoundHandle(JAISound*, unsigned long);
	void stopAllSe(unsigned char);
	void getSoundOffsetNumberFromID(unsigned long);
	void setParameterSeqSync(JASTrack*, unsigned short);
	void stopAudio(unsigned long, bool);
	void checkAudioStopStatus();
	void stopCallBack(void*);
	void startSoundActorReturnHandleT<JAISe>(JAISe**, unsigned long, JAInter::Actor*, unsigned long, unsigned char);
	void startSoundActorT<JAISe>(unsigned long, JAISe**, JAInter::Actor*, unsigned long, unsigned char);
	void startSoundVecReturnHandleT<JAISound>(JAISound**, unsigned long, Vec*, unsigned long, unsigned long, unsigned char);
};

#endif
