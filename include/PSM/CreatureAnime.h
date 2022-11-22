#ifndef _PSM_CREATUREANIME_H
#define _PSM_CREATUREANIME_H

#include "JSystem/JAI/JAIAnimeSound.h"
#include "PSM/Creature.h"

namespace PSM {
struct CreatureAnime : public Creature, public JAIAnimeSound {
	// vtable 1 (JKRDisposer, _10)
	// vtable 2 (Creature, _28)
	virtual ~CreatureAnime() { }            // _14 (weak)
	virtual void frameEnd_onPlaySe();       // _18
	virtual CreatureCastType getCastType(); // _1C (weak)
	virtual void exec();                    // _20 (weak)
	virtual JAInter::Object* getJAIObject() // _24 (weak)
	{
		return static_cast<JAInter::Object*>(this);
	}
	virtual void onCalcOn();                 // _18
	virtual JAISound** getHandleArea(u8 idx) // _2C
	{
		return &m_sounds[idx];
	}
	// vtable 3 (JAIAnimeSound + self, _28)
	virtual JAISound* startSound(u32, u32);                            // _88 (weak)
	virtual void startSound(u8, u32, u32);                             // _8C (weak)
	virtual void startSound(JAISound**, u32, u32);                     // _90 (weak)
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*, u8); // _94 (weak)
	virtual void playActorAnimSound(JAInter::Actor*, f32, u8);         // _98 (weak)
	virtual void onCalcTurnOn();                                       // _9C
	virtual void onCalcTurnOff();                                      // _A0

	void setAnime(JAIAnimeSoundData*, u32, f32, f32);

	// _10     = VTBL 1
	// _28     = VTBL 2
	// _00-_30 = Creature
	// _30-_AC = JAIAnimeSound
	f32 _AC;   // _AC
	f32 _B0;   // _B0
	u8 _B4[4]; // _B4
};
} // namespace PSM

#endif
