#ifndef _PSM_GROUNDDIRECTOR_CAVE_H
#define _PSM_GROUNDDIRECTOR_CAVE_H

namespace PSSystem {
struct DirectorBase {
	virtual void _00() = 0;        // _00
	virtual void exec();           // _04
	virtual void _08() = 0;        // _08
	virtual void _0C() = 0;        // _0C
	virtual void underDirection(); // _10
	virtual void _14() = 0;        // _14
	virtual void _18() = 0;        // _18
	virtual void _1C() = 0;        // _1C
	virtual void _20() = 0;        // _20
	virtual void _24() = 0;        // _24
	virtual void onDirectOn();     // _28
	virtual void onDirectOff();    // _2C

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct ActorDirector_TrackOn {
	virtual void _00() = 0;   // _00
	virtual void _04() = 0;   // _04
	virtual void _08() = 0;   // _08
	virtual void _0C() = 0;   // _0C
	virtual void _10() = 0;   // _10
	virtual void execInner(); // _14

	// _00 VTBL
};
} // namespace PSM

namespace PSM {
struct TrackOnDirectorBase {
	virtual void _00() = 0;                               // _00
	virtual void _04() = 0;                               // _04
	virtual void _08() = 0;                               // _08
	virtual void _0C() = 0;                               // _0C
	virtual void _10() = 0;                               // _10
	virtual void _14() = 0;                               // _14
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C
	virtual void _20() = 0;                               // _20
	virtual void onPlayInit(JASTrack*);                   // _24

	// _00 VTBL
};
} // namespace PSM

namespace PSSystem {
struct SwitcherDirector {
	virtual void _00() = 0;         // _00
	virtual void _04() = 0;         // _04
	virtual void _08() = 0;         // _08
	virtual void _0C() = 0;         // _0C
	virtual void _10() = 0;         // _10
	virtual void _14() = 0;         // _14
	virtual void _18() = 0;         // _18
	virtual void _1C() = 0;         // _1C
	virtual void doUpdateRequest(); // _20

	// _00 VTBL
};
} // namespace PSSystem

namespace PSM {
struct GroundDirector_Cave : public DirectorBase,
                             public ActorDirector_TrackOn,
                             public TrackOnDirectorBase,
                             public SwitcherDirector {
	virtual ~GroundDirector_Cave();                       // _00
	virtual void exec();                                  // _04
	virtual void directOn();                              // _08
	virtual void directOff();                             // _0C
	virtual void underDirection();                        // _10
	virtual void execInner();                             // _14
	virtual void directOnTrack(PSSystem::SeqTrackBase&);  // _18
	virtual void directOffTrack(PSSystem::SeqTrackBase&); // _1C
	virtual void doUpdateRequest();                       // _20
	virtual void onPlayInit(JASTrack*);                   // _24
	virtual void onDirectOn();                            // _28
	virtual void onDirectOff();                           // _2C

	// _00 VTBL
};
} // namespace PSM

#endif
