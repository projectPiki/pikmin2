#ifndef _JASWAVEARC_H
#define _JASWAVEARC_H

/*
    __vt__10JASWaveArc:
    .4byte 0
    .4byte 0
    .4byte onDispose__10JASWaveArcFv
    .4byte onLoadDone__10JASWaveArcFv
    .4byte onEraseDone__10JASWaveArcFv
*/

struct JASWaveArc {
	virtual void onDispose();   // _08
	virtual void onLoadDone();  // _0C
	virtual void onEraseDone(); // _10

	// _00 VTBL
};

#endif
