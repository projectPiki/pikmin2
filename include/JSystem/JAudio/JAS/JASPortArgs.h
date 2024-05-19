#ifndef _JSYSTEM_JAS_JASPORTARGS_H
#define _JSYSTEM_JAS_JASPORTARGS_H

#include "JSystem/JAudio/JAS/JASTrack.h"
#include "types.h"

struct JASPortArgs {
	JASTrack* mTrack; // _00
	u32 _04;          // _04
	u32 mFlags;       // _08
	f32 mTrackVolume; // _0C
	f32 mTrackPitch;  // _10
	f32 mTrackPan;    // _14
	f32 mTrackFxmix;  // _18
	f32 mTrackDolby;  // _1C
	f32 _20;          // _20
	u32 _24;          // _24
	f32 mTrackTempo;  // _28
};

#endif
