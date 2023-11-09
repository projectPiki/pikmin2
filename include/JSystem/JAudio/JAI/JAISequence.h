#ifndef _JSYSTEM_JAI_JAISEQUENCE_H
#define _JSYSTEM_JAI_JAISEQUENCE_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"

/**
 * @size{0x6A0}
 */
struct JAISequence : public JAISound {
	JAISequence();

	virtual void setPortData(u8, u16);                                               // _08 (weak)
	virtual u16 getPortData(u8);                                                     // _0C (weak)
	virtual void stop(u32);                                                          // _14 (weak)
	virtual void setVolume(f32 p1, u32 p2, u8 p3) { setSeqInterVolume(p3, p1, p2); } // _1C (weak)
	virtual f32 getVolume(u8 p1) { return getSeqInterVolume(p1); }                   // _20 (weak)
	virtual void setPan(f32, u32, u8);                                               // _24 (weak)
	virtual f32 getPan(u8);                                                          // _28 (weak)
	virtual void setPitch(f32, u32, u8);                                             // _2C (weak)
	virtual f32 getPitch(u8);                                                        // _30 (weak)
	virtual void setFxmix(f32, u32, u8);                                             // _34 (weak)
	virtual f32 getFxmix(u8);                                                        // _38 (weak)
	virtual void setDolby(f32, u32, u8);                                             // _3C (weak)
	virtual f32 getDolby(u8);                                                        // _40 (weak)
	virtual void setTempoProportion(f32, u32);                                       // _44 (weak)
	virtual f32 getTempoProportion();                                                // _48 (weak)
	virtual void setVolumeU7(u8, u32, u8);                                           // _4C (weak)
	virtual u8 getVolumeU7(u8);                                                      // _50 (weak)
	virtual void setPanU7(u8, u32, u8);                                              // _54 (weak)
	virtual u8 getPanU7(u8);                                                         // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);                                            // _5C (weak)
	virtual u8 getFxmixU7(u8);                                                       // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);                                            // _64 (weak)
	virtual u8 getDolbyU7(u8);                                                       // _68 (weak)
	virtual u32 getFadeCounter();                                                    // _A4
	virtual void setPrepareFlag(u8);                                                 // _A8 (weak)
	virtual void checkReady();                                                       // _AC (weak)

	void setSeqInterVolume(u8, f32, u32);
	void setSeqInterPan(u8, f32, u32);
	void setSeqInterPitch(u8, f32, u32);
	void setTrackInterruptSwitch(u8, u8);
	void setTrackFxmix(u8, f32, u32);
	void setTrackPortData(u8, u8, u16);
	void setSeqPrepareFlag(u8);
	bool checkSeqReady();
	f32 getSeqInterVolume(u8);

	// unused/inlined:
	void setSeqInterFxmix(unsigned char, f32, unsigned long);
	void setSeqInterDolby(unsigned char, f32, unsigned long);
	void setSeqTempoProportion(f32, unsigned long);
	void setSeqPortData(unsigned char, unsigned short, unsigned long);
	void setWaveReadMode(long, long);
	void setTrackVolume(unsigned char, f32, unsigned long);
	void setTrackVolumeMulti(unsigned char, unsigned long, f32, unsigned long);
	void setTrackMuteSwitch(unsigned char, unsigned char);
	void setTrackMuteSwitchMulti(unsigned long, unsigned char);
	void setTrackPan(unsigned char, f32, unsigned long);
	void setTrackPanMulti(unsigned char, unsigned long, f32, unsigned long);
	void setTrackPitch(unsigned char, f32, unsigned long);
	void setTrackPitchMulti(unsigned char, unsigned long, f32, unsigned long);
	void setTrackFxmixMulti(unsigned char, unsigned long, f32, unsigned long);
	void setTrackDolby(unsigned char, f32, unsigned long);
	void setTrackDolbyMulti(unsigned char, unsigned long, f32, unsigned long);
	void getSeqInterPan(unsigned char);
	void getSeqInterPitch(unsigned char);
	void getSeqInterFxmix(unsigned char);
	void getSeqInterDolby(unsigned char);
	void getSeqTempoProportion();
	void getSeqPortData(unsigned char);
	void getTrackParameterU7(unsigned char, char);
	void getTrackParameterF32(unsigned char, char);
	void getTrackPortData(unsigned char, unsigned char);

	JAInter::SeqParameter mSeqParameter; // _48
};

#endif
