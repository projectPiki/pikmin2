#ifndef _JASWAVEHANDLE_H
#define _JASWAVEHANDLE_H

struct JASWaveHandle {
	virtual ~JASWaveHandle(); // _00
	virtual void _04() = 0;   // _04
	virtual void _08() = 0;   // _08

	// _00 VTBL
};

#endif
