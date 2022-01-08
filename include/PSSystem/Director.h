#ifndef _PSSYSTEM_DIRECTOR_H
#define _PSSYSTEM_DIRECTOR_H

#include "Dolphin/os.h"

struct JASTrack;

namespace PSSystem {
struct SeqTrackBase;

struct DirectorBase {
	DirectorBase(int, const char*);

	virtual ~DirectorBase();                        // _00
	virtual void exec();                            // _04
	virtual void directOn();                        // _08
	virtual void directOff();                       // _0C
	virtual void underDirection();                  // _10
	virtual void execInner();                       // _14
	virtual void directOnTrack(SeqTrackBase&)  = 0; // _18
	virtual void directOffTrack(SeqTrackBase&) = 0; // _1C
	virtual void doUpdateRequest();                 // _20
	virtual void onPlayInit(JASTrack*);             // _24
	virtual void onDirectOn();                      // _28
	virtual void onDirectOff();                     // _2C

	void directOffInner();
	void directOnInner();
	void isUnderDirection();
	void powerOn();
	void setTrack(unsigned char, SeqTrackBase*);

	void* _04;         // _04
	int _08;           // _08
	OSMutexObject _0C; // _0C
	OSMutexObject _24; // _24
	u8 _3C;            // _3C
	u32 : 0;
	u8 _40; // _40
	u8 _41; // _41
	u32 : 0;
	u8 _44[4]; // _44
};

struct OneShotDirector : public DirectorBase {
	virtual ~OneShotDirector();                 // _00
	virtual void exec();                        // _04
	virtual void directOffTrack(SeqTrackBase&); // _1C
};

struct SwitcherDirector : public DirectorBase {
	virtual ~SwitcherDirector();    // _00
	virtual void doUpdateRequest(); // _20
};
} // namespace PSSystem

#endif
