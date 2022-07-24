#ifndef _PSSYSTEM_ENVSE_PAUSEOFFRESERVATOR_H
#define _PSSYSTEM_ENVSE_PAUSEOFFRESERVATOR_H

/*
    __vt__Q28PSSystem24EnvSe_PauseOffReservator:
    .4byte 0
    .4byte 0
    .4byte reservatorTask__Q28PSSystem24EnvSe_PauseOffReservatorFv
*/

namespace PSSystem {
struct EnvSe_PauseOffReservator {
	virtual void reservatorTask(); // _08
};
} // namespace PSSystem

#endif
