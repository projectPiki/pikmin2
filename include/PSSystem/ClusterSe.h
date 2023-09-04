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
	PartInitArg()
	{
		_00[0]   = 0xff;
		_00[1]   = 0xff;
		_00[2]   = 0xff;
		_00[3]   = 0xff;
		mSoundID = (SoundID)0xFFFFFFFF;
	}
	u8 _00[0x4];      // _00 - unknown
	SoundID mSoundID; // _04
};

/**
 * @size = 0xC
 */
struct Part {
	Part();

	virtual void callSe(JAInter::Object*); // _08

	PartInitArg mInitArg;
};

struct Factory {
	Factory(u8);

	virtual void constructPart();      // _08
	virtual void identifyPart(u8) = 0; // _0C

	struct Mgr* _04; // _04 - unknown
};

/**
 * @size = 0x8
 */
struct Mgr {
	void constructParts(PSSystem::ClusterSe::Factory& factory);

	u8 _00[0x4]; // _00 - unknown
	Part* mPart; // _04
};

} // namespace ClusterSe
} // namespace PSSystem

#endif
