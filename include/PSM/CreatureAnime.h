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
	virtual void getHandleArea(uchar);       // _2C
	// vtable 3 (JAIAnimeSound + self)
	virtual void startSound(ulong, ulong);             // _40
	virtual void startSound(uchar, ulong, ulong);      // _44
	virtual void startSound(JAISound**, ulong, ulong); // _48
	virtual void startAnimSound(ulong, JAISound**, JAInter::Actor*,
	                            uchar); // _4C
	virtual void playActorAnimSound(JAInter::Actor*, float,
	                                uchar); // _50
	virtual void onCalcTurnOn();            // _54
	virtual void onCalcTurnOff();           // _58

	float _AC; // _AC
	float _B0; // _B0
	u8 _B4[4]; // _B4
};
} // namespace PSM

#endif
