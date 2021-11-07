#ifndef _PSSYSTEM_SWITCHERDIRECTOR_H
#define _PSSYSTEM_SWITCHERDIRECTOR_H

namespace PSSystem {
struct DirectorBase {
	virtual void _00() = 0;             // _00
	virtual void exec();                // _04
	virtual void directOn();            // _08
	virtual void directOff();           // _0C
	virtual void underDirection();      // _10
	virtual void execInner();           // _14
	virtual void _18() = 0;             // _18
	virtual void _1C() = 0;             // _1C
	virtual void _20() = 0;             // _20
	virtual void onPlayInit(JASTrack*); // _24
	virtual void onDirectOn();          // _28
	virtual void onDirectOff();         // _2C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSSystem {
struct SwitcherDirector : public DirectorBase {
	virtual ~SwitcherDirector();        // _00
	virtual void exec();                // _04
	virtual void directOn();            // _08
	virtual void directOff();           // _0C
	virtual void underDirection();      // _10
	virtual void execInner();           // _14
	virtual void _18() = 0;             // _18
	virtual void _1C() = 0;             // _1C
	virtual void doUpdateRequest();     // _20
	virtual void onPlayInit(JASTrack*); // _24
	virtual void onDirectOn();          // _28
	virtual void onDirectOff();         // _2C

	// _00 VTBL
};
} // namespace PSSystem

#endif
