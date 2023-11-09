#ifndef _JSYSTEM_JAI_JAISE_H
#define _JSYSTEM_JAI_JAISE_H

#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "types.h"

struct JAISe : public JAISound {
	JAISe();

	virtual void setPortData(u8, u16);                                                 // _08 (weak)
	virtual u16 getPortData(u8);                                                       // _0C (weak)
	virtual void stop(u32 p1) { JAInter::SeMgr::releaseSeBuffer(this, p1); }           // _14 (weak)
	virtual void setVolume(f32 p1, u32 p2, u8 p3) { setSeInterVolume(p3, p1, p2, 0); } // _1C (weak)
	virtual f32 getVolume(u8);                                                         // _20 (weak)
	virtual void setPan(f32, u32, u8);                                                 // _24 (weak)
	virtual f32 getPan(u8);                                                            // _28 (weak)
	virtual void setPitch(f32, u32, u8);                                               // _2C (weak)
	virtual f32 getPitch(u8);                                                          // _30 (weak)
	virtual void setFxmix(f32, u32, u8);                                               // _34 (weak)
	virtual f32 getFxmix(u8);                                                          // _38 (weak)
	virtual void setDolby(f32, u32, u8);                                               // _3C (weak)
	virtual f32 getDolby(u8);                                                          // _40 (weak)
	virtual void setVolumeU7(u8, u32, u8);                                             // _4C (weak)
	virtual u8 getVolumeU7(u8);                                                        // _50 (weak)
	virtual void setPanU7(u8, u32, u8);                                                // _54 (weak)
	virtual u8 getPanU7(u8);                                                           // _58 (weak)
	virtual void setFxmixU7(u8, u32, u8);                                              // _5C (weak)
	virtual u8 getFxmixU7(u8);                                                         // _60 (weak)
	virtual void setDolbyU7(u8, u32, u8);                                              // _64 (weak)
	virtual u8 getDolbyU7(u8);                                                         // _68 (weak)
	virtual u32 getFadeCounter();                                                      // _A4
	virtual void setSeDistanceParameters();                                            // _D4
	virtual void setSeDistanceVolume(u8);                                              // _D8
	virtual void setSeDistancePan(u8);                                                 // _DC
	virtual void setSeDistancePitch(u8);                                               // _E0
	virtual void setSeDistanceFxmix(u8);                                               // _E4
	virtual void setSeDistanceFir(u8);                                                 // _E8
	virtual void setSeDistanceDolby(u8);                                               // _EC
	virtual void setSePositionDopplar();                                               // _F0

	u32 getSeCategoryNumber();
	void setSeInterVolume(u8, f32, u32, u8);
	void setSeInterPan(u8, f32, u32, u8);
	void setSeInterDolby(u8, f32, u32, u8);

	// unused/inlined:
	void setSeInterRandomPara(f32*, u32, f32, f32);
	void setSeInterPitch(u8, f32, u32, f32);
	void setSeInterFxmix(u8, f32, u32, u8);
	void setSeInterFir(u8, u8, u32, u8);
	void setSePortData(u8, u16);
	void getSePortData(u8);
	void getSeParametermeterF32(u8, u8);
	void getSeInfoPointer();

	// _00      = VTABLE
	// _04-_48  = JAISound
	JAInter::SeParameter mSeParam; // _48
};

#endif
