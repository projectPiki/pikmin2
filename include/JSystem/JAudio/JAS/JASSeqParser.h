#ifndef _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H
#define _JSYSTEM_JAUDIO_JAS_JASSEQPARSER_H

#include "types.h"

struct JASSeqParser {
	int parseSeq(struct JASTrack*);
	void cmdOpenTrack(JASTrack*, unsigned long*);
	void cmdOpenTrackBros(JASTrack*, unsigned long*);
	void cmdCall(JASTrack*, unsigned long*);
	void cmdRet(JASTrack*, unsigned long*);
	void cmdJmp(JASTrack*, unsigned long*);
	void cmdLoopS(JASTrack*, unsigned long*);
	void cmdLoopE(JASTrack*, unsigned long*);
	void cmdReadPort(JASTrack*, unsigned long*);
	void cmdWritePort(JASTrack*, unsigned long*);
	void cmdParentWritePort(JASTrack*, unsigned long*);
	void cmdChildWritePort(JASTrack*, unsigned long*);
	void cmdCheckPortImport(JASTrack*, unsigned long*);
	void cmdCheckPortExport(JASTrack*, unsigned long*);
	void cmdWait(JASTrack*, unsigned long*);
	void cmdSetLastNote(JASTrack*, unsigned long*);
	void cmdTimeRelate(JASTrack*, unsigned long*);
	void cmdSimpleOsc(JASTrack*, unsigned long*);
	void cmdSimpleEnv(JASTrack*, unsigned long*);
	void cmdSimpleADSR(JASTrack*, unsigned long*);
	void cmdTranspose(JASTrack*, unsigned long*);
	void cmdCloseTrack(JASTrack*, unsigned long*);
	void cmdOutSwitch(JASTrack*, unsigned long*);
	void cmdUpdateSync(JASTrack*, unsigned long*);
	void cmdBusConnect(JASTrack*, unsigned long*);
	void cmdPauseStatus(JASTrack*, unsigned long*);
	void cmdVolumeMode(JASTrack*, unsigned long*);
	void cmdSetInterrupt(JASTrack*, unsigned long*);
	void cmdDisInterrupt(JASTrack*, unsigned long*);
	void cmdClrI(JASTrack*, unsigned long*);
	void cmdSetI(JASTrack*, unsigned long*);
	void cmdRetI(JASTrack*, unsigned long*);
	void cmdIntTimer(JASTrack*, unsigned long*);
	void cmdSyncCPU(JASTrack*, unsigned long*);
	u32 cmdFlushAll(JASTrack*, unsigned long*);
	u32 cmdFlushRelease(JASTrack*, unsigned long*);
	void cmdTimeBase(JASTrack*, unsigned long*);
	void cmdTempo(JASTrack*, unsigned long*);
	u32 cmdFinish(JASTrack*, unsigned long*);
	u32 cmdNop(JASTrack*, unsigned long*);
	void cmdPanPowSet(JASTrack*, unsigned long*);
	void cmdFIRSet(JASTrack*, unsigned long*);
	void cmdEXTSet(JASTrack*, unsigned long*);
	void cmdPanSwSet(JASTrack*, unsigned long*);
	void cmdOscRoute(JASTrack*, unsigned long*);
	void cmdVibDepth(JASTrack*, unsigned long*);
	void cmdVibDepthMidi(JASTrack*, unsigned long*);
	void cmdVibPitch(JASTrack*, unsigned long*);
	void cmdIIRSet(JASTrack*, unsigned long*);
	void cmdIIRCutOff(JASTrack*, unsigned long*);
	void cmdOscFull(JASTrack*, unsigned long*);
	void cmdCheckWave(JASTrack*, unsigned long*);
	void cmdPrintf(JASTrack*, unsigned long*);
	void cmdSetParam(JASTrack*, unsigned char);
	void cmdWait(JASTrack*, unsigned char);
	void cmdNoteOff(JASTrack*, unsigned char);
	void cmdNoteOn(JASTrack*, unsigned char);

	void conditionCheck(JASTrack*, unsigned char);

	void Cmd_Process(JASTrack*, unsigned char, unsigned short);
	void RegCmd_Process(JASTrack*, int, int);
};

#endif
