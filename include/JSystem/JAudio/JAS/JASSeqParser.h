#ifndef _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H
#define _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H

#include "types.h"

struct JASSeqParser {
	int parseSeq(struct JASTrack*);
	void cmdOpenTrack(JASTrack*, u32*);
	void cmdOpenTrackBros(JASTrack*, u32*);
	void cmdCall(JASTrack*, u32*);
	void cmdRet(JASTrack*, u32*);
	void cmdJmp(JASTrack*, u32*);
	void cmdLoopS(JASTrack*, u32*);
	void cmdLoopE(JASTrack*, u32*);
	void cmdReadPort(JASTrack*, u32*);
	void cmdWritePort(JASTrack*, u32*);
	void cmdParentWritePort(JASTrack*, u32*);
	void cmdChildWritePort(JASTrack*, u32*);
	void cmdCheckPortImport(JASTrack*, u32*);
	void cmdCheckPortExport(JASTrack*, u32*);
	void cmdWait(JASTrack*, u32*);
	void cmdSetLastNote(JASTrack*, u32*);
	void cmdTimeRelate(JASTrack*, u32*);
	void cmdSimpleOsc(JASTrack*, u32*);
	void cmdSimpleEnv(JASTrack*, u32*);
	void cmdSimpleADSR(JASTrack*, u32*);
	void cmdTranspose(JASTrack*, u32*);
	void cmdCloseTrack(JASTrack*, u32*);
	void cmdOutSwitch(JASTrack*, u32*);
	void cmdUpdateSync(JASTrack*, u32*);
	void cmdBusConnect(JASTrack*, u32*);
	void cmdPauseStatus(JASTrack*, u32*);
	void cmdVolumeMode(JASTrack*, u32*);
	void cmdSetInterrupt(JASTrack*, u32*);
	void cmdDisInterrupt(JASTrack*, u32*);
	void cmdClrI(JASTrack*, u32*);
	void cmdSetI(JASTrack*, u32*);
	void cmdRetI(JASTrack*, u32*);
	void cmdIntTimer(JASTrack*, u32*);
	void cmdSyncCPU(JASTrack*, u32*);
	u32 cmdFlushAll(JASTrack*, u32*);
	u32 cmdFlushRelease(JASTrack*, u32*);
	void cmdTimeBase(JASTrack*, u32*);
	void cmdTempo(JASTrack*, u32*);
	u32 cmdFinish(JASTrack*, u32*);
	u32 cmdNop(JASTrack*, u32*);
	void cmdPanPowSet(JASTrack*, u32*);
	void cmdFIRSet(JASTrack*, u32*);
	void cmdEXTSet(JASTrack*, u32*);
	void cmdPanSwSet(JASTrack*, u32*);
	void cmdOscRoute(JASTrack*, u32*);
	void cmdVibDepth(JASTrack*, u32*);
	void cmdVibDepthMidi(JASTrack*, u32*);
	void cmdVibPitch(JASTrack*, u32*);
	void cmdIIRSet(JASTrack*, u32*);
	void cmdIIRCutOff(JASTrack*, u32*);
	void cmdOscFull(JASTrack*, u32*);
	void cmdCheckWave(JASTrack*, u32*);
	void cmdPrintf(JASTrack*, u32*);
	void cmdSetParam(JASTrack*, u8);
	void cmdWait(JASTrack*, u8);
	void cmdNoteOff(JASTrack*, u8);
	void cmdNoteOn(JASTrack*, u8);

	void conditionCheck(JASTrack*, u8);

	void Cmd_Process(JASTrack*, u8, u16);
	void RegCmd_Process(JASTrack*, int, int);
};

#endif
