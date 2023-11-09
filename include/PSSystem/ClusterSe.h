#ifndef _PSSYSTEM_CLUSTERSE_H
#define _PSSYSTEM_CLUSTERSE_H

#include "types.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "SoundID.h"

namespace JAInter {
struct Object;
} // namespace JAInter

namespace PSSystem {
namespace ClusterSe {

/**
 * @size = 0x8
 */
struct PartInitArg {
	PartInitArg();
	u8 _00[0x4];      // _00 - unknown
	SoundID mSoundID; // _04
};

/**
 * @size = 0xC
 */
struct Part {
	Part();

	virtual void callSe(JAInter::Object* obj); // _08

	PartInitArg mInitArg;
};

struct Factory {
	Factory(u8);

	virtual Part* constructPart();     // _08
	virtual void identifyPart(u8) = 0; // _0C

	u8 _04; // _04
};

/**
 * @size = 0x8
 */
struct Mgr {
	void constructParts(PSSystem::ClusterSe::Factory& factory);
	void play(u8, JAInter::Object*);

	u8 _00[0x4]; // _00 - unknown
	Part* mPart; // _04
};

} // namespace ClusterSe
} // namespace PSSystem

#endif
