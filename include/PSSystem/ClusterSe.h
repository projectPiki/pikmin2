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

	void check();

	u8 _00;           // _00
	u8 _01;           // _01
	u8 _02;           // _02
	u8 _03;           // _03
	SoundID mSoundID; // _04
};

/**
 * @size = 0xC
 */
struct Part {
	Part();

	virtual JAISound* callSe(JAInter::Object* obj); // _08

	void identify(PartInitArg initArg);
	void play(u8, JAInter::Object*);

	PartInitArg mInitArg; // _04
};

struct Factory {
	Factory(u8 count);

	virtual Part* constructPart();            // _08
	virtual PartInitArg identifyPart(u8) = 0; // _0C

	u8 mCount; // _04
};

/**
 * @size = 0x8
 */
struct Mgr {
	Mgr()
	{
		mCount = 0;
		mParts = nullptr;
	}
	void constructParts(PSSystem::ClusterSe::Factory& factory);
	void play(u8, JAInter::Object*);

	u8 mCount;    // _00, number of parts in array
	Part* mParts; // _04
};

} // namespace ClusterSe
} // namespace PSSystem

#endif
