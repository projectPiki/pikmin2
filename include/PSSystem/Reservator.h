#ifndef _PSSYSTEM_RESERVATOR_H
#define _PSSYSTEM_RESERVATOR_H

namespace PSSystem {
struct BgmSeq;
struct EnvSeMgr;
struct SeqBase;

struct Reservator {
	inline Reservator()
	    : _04(0)
	{
	}

	virtual void reservatorTask() = 0; // _08

	// VTBL _00
	u16 _04; // _04
};

struct SeqPlayReservator : public Reservator {
	inline SeqPlayReservator(SeqBase* seq)
	    : Reservator()
	    , mSequence(seq)
	{
	}

	virtual void reservatorTask(); // _08

	SeqBase* mSequence; // _08
};

struct SeqPauseOffReservator : public Reservator {
	inline SeqPauseOffReservator(SeqBase* seq)
	    : Reservator()
	    , mSequence(seq)
	{
	}

	virtual void reservatorTask(); // _08

	SeqBase* mSequence; // _08
};

struct EnvSe_PauseOffReservator : public Reservator {
	virtual void reservatorTask(); // _08

	EnvSeMgr* mMgr; // _08
};
} // namespace PSSystem

#endif
