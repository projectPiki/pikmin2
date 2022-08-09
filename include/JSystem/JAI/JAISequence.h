#ifndef _JSYSTEM_JAI_JAISEQUENCE_H
#define _JSYSTEM_JAI_JAISEQUENCE_H

#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAInter.h"

/**
 * @size{0x6A0}
 */
struct JAISequence : public JAISound {
	JAISequence();

	virtual void setPortData(u8, u16);           // _08 (weak)
	virtual short getPortData(u8);               // _0C (weak)
	virtual void stop(u32);                      // _14 (weak)
	virtual void setVolume(float, u32, u8);      // _1C (weak)
	virtual float getVolume(u8);                 // _20 (weak)
	virtual void setPan(float, u32, u8);         // _24 (weak)
	virtual float getPan(u8);                    // _28 (weak)
	virtual void setPitch(float, u32, u8);       // _2C (weak)
	virtual float getPitch(u8);                  // _30 (weak)
	virtual void setFxmix(float, u32, u8);       // _34 (weak)
	virtual float getFxmix(u8);                  // _38 (weak)
	virtual void setDolby(float, u32, u8);       // _3C (weak)
	virtual float getDolby(u8);                  // _40 (weak)
	virtual void setTempoProportion(float, u32); // _44 (weak)
	virtual float getTempoProportion();          // _48 (weak)
	virtual void setVolumeU7(u8, u32, u8);       // _4C (weak)
	virtual void getVolumeU7(u8);                // _50 (weak)
	virtual void setPanU7(u8, u32, u8);          // _54 (weak)
	virtual void getPanU7(u8);                   // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);        // _5C (weak)
	virtual void getFxmixU7(u8);                 // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);        // _64 (weak)
	virtual void getDolbyU7(u8);                 // _68 (weak)
	virtual void getFadeCounter();               // _A4
	virtual void setPrepareFlag(u8);             // _A8 (weak)
	virtual void checkReady();                   // _AC (weak)

	void setSeqInterVolume(u8, float, u32);
	void setSeqInterPan(u8, float, u32);
	void setSeqInterPitch(u8, float, u32);
	void setTrackInterruptSwitch(u8, u8);
	void setTrackFxmix(u8, float, u32);
	void setTrackPortData(u8, u8, u16);
	void setSeqPrepareFlag(u8);
	void checkSeqReady();
	void getSeqInterVolume(u8);

	JAInter::SeqParameter m_seqParameter; // _48
};

#endif
