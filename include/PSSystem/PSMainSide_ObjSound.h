#ifndef _PSSYSTEM_PSMAINSIDE_OBJSOUND_H
#define _PSSYSTEM_PSMAINSIDE_OBJSOUND_H

#include "JSystem/JUT/JUTException.h"
#include "PSM/EnemyBase.h"

// idk what else goes in this file (if anything? maybe this is in the PSGame folder??)
// but these use the file name in the exception check so :shrug:
namespace PSM {
inline void checkBoss(PSM::EnemyBase* soundObj)
{
	bool isBoss = false;
	if (soundObj->getCastType() == CCT_Unknown5 || soundObj->getCastType() == CCT_EnemyMidBoss
	    || soundObj->getCastType() == CCT_EnemyBigBoss) {
		isBoss = true;
	}

	P2ASSERTLINE(1108, isBoss);
}

inline void checkMidBoss(PSM::EnemyBase* soundObj) { P2ASSERTLINE(1114, soundObj->getCastType() == CCT_EnemyMidBoss); }

}; // namespace PSM

#endif
