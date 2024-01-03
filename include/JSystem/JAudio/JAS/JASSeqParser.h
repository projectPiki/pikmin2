#ifndef _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H
#define _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H

#include "types.h"

struct JASSeqParser {
	int parseSeq(struct JASTrack*);
	int cmdOpenTrack(JASTrack*, u32*);
	int cmdOpenTrackBros(JASTrack*, u32*);
	int cmdCall(JASTrack*, u32*);
	int cmdRet(JASTrack*, u32*);
	int cmdJmp(JASTrack*, u32*);
	int cmdLoopS(JASTrack*, u32*);
	int cmdLoopE(JASTrack*, u32*);
	int cmdReadPort(JASTrack*, u32*);
	int cmdWritePort(JASTrack*, u32*);
	int cmdParentWritePort(JASTrack*, u32*);
	int cmdChildWritePort(JASTrack*, u32*);
	int cmdCheckPortImport(JASTrack*, u32*);
	int cmdCheckPortExport(JASTrack*, u32*);
	int cmdWait(JASTrack*, u32*);
	int cmdSetLastNote(JASTrack*, u32*);
	int cmdTimeRelate(JASTrack*, u32*);
	int cmdSimpleOsc(JASTrack*, u32*);
	int cmdSimpleEnv(JASTrack*, u32*);
	int cmdSimpleADSR(JASTrack*, u32*);
	int cmdTranspose(JASTrack*, u32*);
	int cmdCloseTrack(JASTrack*, u32*);
	int cmdOutSwitch(JASTrack*, u32*);
	int cmdUpdateSync(JASTrack*, u32*);
	int cmdBusConnect(JASTrack*, u32*);
	int cmdPauseStatus(JASTrack*, u32*);
	int cmdVolumeMode(JASTrack*, u32*);
	int cmdSetInterrupt(JASTrack*, u32*);
	int cmdDisInterrupt(JASTrack*, u32*);
	int cmdClrI(JASTrack*, u32*);
	int cmdSetI(JASTrack*, u32*);
	int cmdRetI(JASTrack*, u32*);
	int cmdIntTimer(JASTrack*, u32*);
	int cmdSyncCPU(JASTrack*, u32*);
	u32 cmdFlushAll(JASTrack*, u32*);
	u32 cmdFlushRelease(JASTrack*, u32*);
	int cmdTimeBase(JASTrack*, u32*);
	int cmdTempo(JASTrack*, u32*);
	u32 cmdFinish(JASTrack*, u32*);
	u32 cmdNop(JASTrack*, u32*);
	int cmdPanPowSet(JASTrack*, u32*);
	int cmdFIRSet(JASTrack*, u32*);
	int cmdEXTSet(JASTrack*, u32*);
	int cmdPanSwSet(JASTrack*, u32*);
	int cmdOscRoute(JASTrack*, u32*);
	int cmdVibDepth(JASTrack*, u32*);
	int cmdVibDepthMidi(JASTrack*, u32*);
	int cmdVibPitch(JASTrack*, u32*);
	int cmdIIRSet(JASTrack*, u32*);
	int cmdIIRCutOff(JASTrack*, u32*);
	int cmdOscFull(JASTrack*, u32*);
	int cmdCheckWave(JASTrack*, u32*);
	int cmdPrintf(JASTrack*, u32*);
	int cmdSetParam(JASTrack*, u8);
	int cmdWait(JASTrack*, u8);
	int cmdNoteOff(JASTrack*, u8);
	int cmdNoteOn(JASTrack*, u8);

	bool conditionCheck(JASTrack*, u8);

	void Cmd_Process(JASTrack*, u8, u16);
	void RegCmd_Process(JASTrack*, int, int);
};

#endif
