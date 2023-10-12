#ifndef _PSSYSTEM_PSMAINSIDE_OBJSOUND_H
#define _PSSYSTEM_PSMAINSIDE_OBJSOUND_H

#include "P2Macros.h"
#include "PSM/EnemyBase.h"
#include "PSM/EnemyBoss.h"

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

inline void disableAppearFlag(PSM::EnemyBase* soundObj)
{
	checkMidBoss(soundObj);
	PSM::EnemyBoss* bossObj = static_cast<PSM::EnemyBoss*>(soundObj);
	if (bossObj) {
		bossObj->setAppearFlag(false);
		bossObj->_FF = true;
	}
}

}; // namespace PSM

#endif
