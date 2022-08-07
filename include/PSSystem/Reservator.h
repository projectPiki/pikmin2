#ifndef _PSSYSTEM_RESERVATOR_H
#define _PSSYSTEM_RESERVATOR_H

namespace PSSystem {
struct BgmSeq;
struct EnvSeMgr;

struct Reservator {
	virtual void reservatorTask() = 0; // _08

	// VTBL _00
	short _04; // _04
};

struct SeqPlayReservator : public Reservator {
	virtual void reservatorTask(); // _08

	BgmSeq* m_sequence; // _08
};

struct SeqPauseOffReservator : public Reservator {
	virtual void reservatorTask(); // _08

	BgmSeq* m_sequence; // _08
};

struct EnvSe_PauseOffReservator : public Reservator {
	virtual void reservatorTask(); // _08

	EnvSeMgr* m_mgr; // _08
};
} // namespace PSSystem

#endif
