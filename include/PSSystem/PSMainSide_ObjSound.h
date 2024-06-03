#ifndef _PSSYSTEM_PSMAINSIDE_OBJSOUND_H
#define _PSSYSTEM_PSMAINSIDE_OBJSOUND_H

#include "P2Macros.h"
#include "PSM/EnemyBase.h"
#include "PSM/EnemyBoss.h"
#include "PSM/Otakara.h"

namespace PSM {
inline void assertIsBoss(PSM::EnemyBase* soundObj)
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
		bossObj->mHasReset = true;
	}
}

inline void otakaraCheckEvent(Otakara* item) { P2ASSERTLINE(884, item->mOtaEvent); }

}; // namespace PSM

#endif
