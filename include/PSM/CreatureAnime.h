#ifndef _PSM_CREATUREANIME_H
#define _PSM_CREATUREANIME_H

#include "JSystem/JAI/JAIAnimeSound.h"
#include "PSM/Creature.h"

namespace PSM {
struct CreatureAnime : public Creature, public JAIAnimeSound {
	// vtable 2 (Creature)
	virtual ~CreatureAnime();                // _04
	virtual void frameEnd_onPlaySe();        // _08
	virtual CreatureCastType getCastType();  // _0C
	virtual void exec();                     // _10
	virtual JAInter::Object* getJAIObject(); // _14
	virtual void onCalcOn();                 // _18
	virtual void getHandleArea(u8);          // _2C
	// vtable 3 (JAIAnimeSound + self)
	virtual void startSound(u32, u32);             // _40
	virtual void startSound(u8, u32, u32);         // _44
	virtual void startSound(JAISound**, u32, u32); // _48
	virtual void startAnimSound(u32, JAISound**, JAInter::Actor*,
	                            u8); // _4C
	virtual void playActorAnimSound(JAInter::Actor*, float,
	                                u8); // _50
	virtual void onCalcTurnOn();         // _54
	virtual void onCalcTurnOff();        // _58

	float _AC; // _AC
	float _B0; // _B0
	u8 _B4[4]; // _B4
};
} // namespace PSM

#endif
