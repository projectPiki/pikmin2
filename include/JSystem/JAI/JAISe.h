#ifndef _JSYSTEM_JAI_JAISE_H
#define _JSYSTEM_JAI_JAISE_H

#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAInter.h"
#include "types.h"

struct JAISe : public JAISound {
	JAISe();

	virtual void setPortData(u8, u16);      // _08 (weak)
	virtual void getPortData(u8);           // _0C (weak)
	virtual void stop(u32);                 // _14 (weak)
	virtual void setVolume(float, u32, u8); // _1C (weak)
	virtual void getVolume(u8);             // _20 (weak)
	virtual void setPan(float, u32, u8);    // _24 (weak)
	virtual void getPan(u8);                // _28 (weak)
	virtual void setPitch(float, u32, u8);  // _2C (weak)
	virtual void getPitch(u8);              // _30 (weak)
	virtual void setFxmix(float, u32, u8);  // _34 (weak)
	virtual void getFxmix(u8);              // _38 (weak)
	virtual void setDolby(float, u32, u8);  // _3C (weak)
	virtual void getDolby(u8);              // _40 (weak)
	virtual void setVolumeU7(u8, u32, u8);  // _4C (weak)
	virtual void getVolumeU7(u8);           // _50 (weak)
	virtual void setPanU7(u8, u32, u8);     // _54 (weak)
	virtual void getPanU7(u8);              // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);   // _5C (weak)
	virtual void getFxmixU7(u8);            // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);   // _64 (weak)
	virtual void getDolbyU7(u8);            // _68 (weak)
	virtual void getFadeCounter();          // _A4
	virtual void setSeDistanceParameters(); // _D4
	virtual void setSeDistanceVolume(u8);   // _D8
	virtual void setSeDistancePan(u8);      // _DC
	virtual void setSeDistancePitch(u8);    // _E0
	virtual void setSeDistanceFxmix(u8);    // _E4
	virtual void setSeDistanceFir(u8);      // _E8
	virtual void setSeDistanceDolby(u8);    // _EC
	virtual void setSePositionDopplar();    // _F0

	void getSeCategoryNumber();
	void setSeInterVolume(u8, float, u32, u8);
	void setSeInterPan(u8, float, u32, u8);
	void setSeInterDolby(u8, float, u32, u8);

	// _00      = VTABLE
	// _04-_48  = JAISound
	JAInter::SeParameter m_seParam; // _48
};

#endif
