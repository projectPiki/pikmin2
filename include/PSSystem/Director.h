#ifndef _PSSYSTEM_DIRECTOR_H
#define _PSSYSTEM_DIRECTOR_H

#include "Dolphin/os.h"
#include "JSystem/JAD/JADHioNode.h"
#include "PSSystem/PSBgm.h"
#include "JSystem/JAS/JASTrack.h"

namespace PSSystem {
struct SeqTrackBase;

struct DirectorBase : public JADHioNode {
	DirectorBase(int, const char*);

	virtual ~DirectorBase();                        // _08 (weak)
	virtual void exec();                            // _0C
	virtual void directOn();                        // _10
	virtual void directOff();                       // _14
	virtual void underDirection();                  // _18 (weak)
	virtual void execInner();                       // _1C (weak)
	virtual void directOnTrack(SeqTrackBase&)  = 0; // _20
	virtual void directOffTrack(SeqTrackBase&) = 0; // _24
	virtual void doUpdateRequest();                 // _28
	virtual void onPlayInit(JASTrack*);             // _2C (weak)
	virtual void onDirectOn();                      // _30 (weak)
	virtual void onDirectOff();                     // _34 (weak)

	void isUnderDirection();
	void setTrack(u8, SeqTrackBase*);
	void directOnInner();
	void directOffInner();
	void powerOn();

	void* _04;         // _04 - unknown
	int _08;           // _08
	OSMutexObject _0C; // _0C
	OSMutexObject _24; // _24
	u8 _3C;            // _3C
	u8 _3D[0x3];       // _3D - padding?
	u8 _40;            // _40
	u8 _41;            // _41
	u8 _42[0x2];       // _42 - padding?
	u8 _44[4];         // _44
};

struct OneShotDirector : public DirectorBase {
	virtual ~OneShotDirector();                    // _08 (weak)
	virtual void exec();                           // _0C
	virtual void directOnTrack(SeqTrackBase&) = 0; // _20
	virtual void directOffTrack(SeqTrackBase&);    // _24 (weak)
};

struct SwitcherDirector : public DirectorBase {
	virtual ~SwitcherDirector();                    // _08 (weak)
	virtual void directOnTrack(SeqTrackBase&)  = 0; // _20
	virtual void directOffTrack(SeqTrackBase&) = 0; // _24
	virtual void doUpdateRequest();                 // _28
};

// this is only here for the vtable in PSDirector.cpp - probably not necessary
// since DirectorCopyActor is the only child
struct DirectorActorBase {
	virtual void exec(DirectorBase*) = 0; // _08
};

struct DirectorCopyActor : public DirectorActorBase {
	DirectorCopyActor(DirectorBase*, DirectorBase*);

	virtual void exec(DirectorBase*);   // _08
	virtual void onUpdateFromMasterD(); // _0C (weak)
	virtual void onUpdateFromSlaveD();  // _10 (weak)

	DirectorBase* _04; // _04
	DirectorBase* _08; // _08
};

struct DirectorMgrBase : public JADHioNode {
	DirectorMgrBase(u8);

	virtual ~DirectorMgrBase(); // _08 (weak)
	// virtual void _0C() = 0;		// _0C - possibly?

	void initAndAdaptToBgm(DirectedBgm&);
	void playInit(JASTrack*);
	void exec();
	void off(DirectedBgm*);

	DirectorBase** _04; // _04
	u8 _08;             // _08
};

} // namespace PSSystem

#endif
