#ifndef _JSYSTEM_JAI_JAINTER_SEMGR_H
#define _JSYSTEM_JAI_JAINTER_SEMGR_H

#include "types.h"
struct JAISound;
struct JAISe;
struct JAISequence;

namespace JAInter {
struct Actor;
struct LinkSound;
struct MoveParaSet;
struct SeqUpdateData;
struct SoundInfo;

namespace SeMgr {
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
void changeIDToCategory(u32);
void releaseSeRegist(JAISe*);
void storeSeBuffer(JAISe**, Actor*, u32, u32, u8, SoundInfo*);
void releaseSeBuffer(JAISe*, u32);
void setSeSequenceStartCallback(StartCallback);

// unused/inlined:
void clearSeqMuteFromSeStop(JAISound*);

static StartCallback seStartCallback;
static JAISequence* seHandle;
static LinkSound* seRegist;
} // namespace SeMgr
} // namespace JAInter

#endif
