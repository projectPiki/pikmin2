#ifndef _JSYSTEM_JAI_JAINTER_SEMGR_H
#define _JSYSTEM_JAI_JAINTER_SEMGR_H

#include "JSystem/JAudio/JAI/JAInter.h"
#include "types.h"

struct JAISound;
struct JAISe;
struct JAISequence;

namespace JAInter {
struct Actor;
struct LinkSound;
struct MoveParaSet;
struct SeqUpdateData;

namespace SeMgr {
/** @fabricatedName */
struct TrackUpdate {
	u8 _00;             // _00
	f32 mPlayingVolume; // _04
	f32 mPlayingPitch;  // _08
	f32 mPlayingFxmix;  // _0C
	f32 mPlayingPan;    // _10
	f32 mPlayingDolby;  // _14
};

// fabricated name
struct SeHelper {
	void operator=(const SeHelper& other)
	{
		_04    = other._04;
		mSound = other.mSound;
		mState = other.mState;
	}

	u8 mState;     // _00
	u32 _04;       // _04
	JAISe* mSound; // _08
};

typedef void (*StartCallback)();
void init();
void startSeSequence();
void processGFrameSe();
void checkNextFrameSe();
void checkPlayingSe();
void setSeqMuteFromSeStart(JAISound*);
void checkSeMovePara();
void sendSeAllParameter(JAISe*);
void checkPlayingSeUpdateMultiplication(JAISe*, SeqUpdateData*, f32*, MoveParaSet*, f32, u8, f32*);
void checkPlayingSeUpdateAddition(JAISe*, SeqUpdateData*, f32*, MoveParaSet*, u8, f32*, f32);
u8 changeIDToCategory(u32);
void releaseSeRegist(JAISe*);
void storeSeBuffer(JAISe**, Actor*, u32, u32, u8, SoundInfo*);
void releaseSeBuffer(JAISe* se, u32 fadeTime);
void setSeSequenceStartCallback(StartCallback);

// unused/inlined:
void clearSeqMuteFromSeStop(JAISound*);

extern StartCallback seStartCallback;

extern TrackUpdate* seTrackUpdate;
extern u8** categoryInfoTable;
extern JAISound*** sePlaySound;
extern LinkSound* seRegist;
extern JAISequence* seHandle;
extern u8 seScene;
extern u32 seqMuteFlagFromSe;
extern f32* seCategoryVolume;
extern u8* seEntryCancel;
} // namespace SeMgr
} // namespace JAInter

#endif
