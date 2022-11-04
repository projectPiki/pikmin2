#ifndef _JSYSTEM_JAI_JAISEQUENCE_H
#define _JSYSTEM_JAI_JAISEQUENCE_H

#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAInter.h"

/**
 * @size{0x6A0}
 */
struct JAISequence : public JAISound {
	JAISequence();

	virtual void setPortData(u8, u16);                               // _08 (weak)
	virtual u16 getPortData(u8);                                     // _0C (weak)
	virtual void stop(u32);                                          // _14 (weak)
	virtual void setVolume(float, u32, u8);                          // _1C (weak)
	virtual float getVolume(u8 p1) { return getSeqInterVolume(p1); } // _20 (weak)
	virtual void setPan(float, u32, u8);                             // _24 (weak)
	virtual float getPan(u8);                                        // _28 (weak)
	virtual void setPitch(float, u32, u8);                           // _2C (weak)
	virtual float getPitch(u8);                                      // _30 (weak)
	virtual void setFxmix(float, u32, u8);                           // _34 (weak)
	virtual float getFxmix(u8);                                      // _38 (weak)
	virtual void setDolby(float, u32, u8);                           // _3C (weak)
	virtual float getDolby(u8);                                      // _40 (weak)
	virtual void setTempoProportion(float, u32);                     // _44 (weak)
	virtual float getTempoProportion();                              // _48 (weak)
	virtual void setVolumeU7(u8, u32, u8);                           // _4C (weak)
	virtual u8 getVolumeU7(u8);                                      // _50 (weak)
	virtual void setPanU7(u8, u32, u8);                              // _54 (weak)
	virtual u8 getPanU7(u8);                                         // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);                            // _5C (weak)
	virtual u8 getFxmixU7(u8);                                       // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);                            // _64 (weak)
	virtual u8 getDolbyU7(u8);                                       // _68 (weak)
	virtual u32 getFadeCounter();                                    // _A4
	virtual void setPrepareFlag(u8);                                 // _A8 (weak)
	virtual void checkReady();                                       // _AC (weak)

	void setSeqInterVolume(u8, float, u32);
	void setSeqInterPan(u8, float, u32);
	void setSeqInterPitch(u8, float, u32);
	void setTrackInterruptSwitch(u8, u8);
	void setTrackFxmix(u8, float, u32);
	void setTrackPortData(u8, u8, u16);
	void setSeqPrepareFlag(u8);
	bool checkSeqReady();
	float getSeqInterVolume(u8);

	// unused/inlined:
	void setSeqInterFxmix(unsigned char, float, unsigned long);
	void setSeqInterDolby(unsigned char, float, unsigned long);
	void setSeqTempoProportion(float, unsigned long);
	void setSeqPortData(unsigned char, unsigned short, unsigned long);
	void setWaveReadMode(long, long);
	void setTrackVolume(unsigned char, float, unsigned long);
	void setTrackVolumeMulti(unsigned char, unsigned long, float, unsigned long);
	void setTrackMuteSwitch(unsigned char, unsigned char);
	void setTrackMuteSwitchMulti(unsigned long, unsigned char);
	void setTrackPan(unsigned char, float, unsigned long);
	void setTrackPanMulti(unsigned char, unsigned long, float, unsigned long);
	void setTrackPitch(unsigned char, float, unsigned long);
	void setTrackPitchMulti(unsigned char, unsigned long, float, unsigned long);
	void setTrackFxmixMulti(unsigned char, unsigned long, float, unsigned long);
	void setTrackDolby(unsigned char, float, unsigned long);
	void setTrackDolbyMulti(unsigned char, unsigned long, float, unsigned long);
	void getSeqInterPan(unsigned char);
	void getSeqInterPitch(unsigned char);
	void getSeqInterFxmix(unsigned char);
	void getSeqInterDolby(unsigned char);
	void getSeqTempoProportion();
	void getSeqPortData(unsigned char);
	void getTrackParameterU7(unsigned char, char);
	void getTrackParameterF32(unsigned char, char);
	void getTrackPortData(unsigned char, unsigned char);

	JAInter::SeqParameter m_seqParameter; // _48
};

#endif
