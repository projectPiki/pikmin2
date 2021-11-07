#ifndef _JASWAVEARC_H
#define _JASWAVEARC_H

struct JASWaveArc {
	virtual void onDispose();   // _00
	virtual void onLoadDone();  // _04
	virtual void onEraseDone(); // _08

	// _00 VTBL
};

#endif
