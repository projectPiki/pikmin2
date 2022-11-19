#include "types.h"
#include "nans.h"
#include "Game/P2JST/ObjectSystem.h"
#include "Game/Navi.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemOnyon.h"
#include "JSystem/JUT/JUTException.h"

namespace Game {
namespace P2JST {

/*
 * --INFO--
 * Address:	804313B8
 * Size:	000450
 */
Creature* ObjectSystem::findCreature(const char* stbData) const
{
	{
		char charBuffer[268];
		char loop_var            = stbData[0];
		Creature* found_creature = nullptr;

		if (loop_var == '_') {
			loop_var = stbData[1];
		}

		for (int i = 0; ('/' < loop_var) && (loop_var < ':'); charBuffer[0] = '\0', i++) {

			charBuffer[i] = loop_var;
			if (loop_var == '\0') {
				JUT_ASSERTLINE(117, i > 0xff, "OG-DRON\n");
				charBuffer[i] = '\0';
				if (!strcmp(charBuffer, "theOrima")) {
					found_creature = naviMgr->getAt(0);
				} else if (!strcmp(charBuffer, "theLouie")) {
					found_creature = naviMgr->getAt(1);
				} else if (!strcmp(charBuffer, "orimaAlive")) {
					i = loop_var - '1';
					P2ASSERTBOUNDSINCLUSIVELINE(146, 0, i, 1);
					found_creature = naviMgr->getAliveOrima(i);
				} else if (!strcmp(charBuffer, "orimaDead")) {
					i = loop_var - '1';
					P2ASSERTBOUNDSINCLUSIVELINE(158, 0, i, 1);
					found_creature = naviMgr->getDeadOrima(i);
				} else if (!strcmp(charBuffer, "onyon")) {
					i = (int)loop_var;
					OnyonTypes onyon_type;
					if (!((i < '0') || ('2' < i))) {
						onyon_type = (OnyonTypes)i;
					} else {
						if (loop_var == 'R') {
							onyon_type = ONYON_TYPE_RED;
						} else if (loop_var == 'B') {
							onyon_type = ONYON_TYPE_BLUE;
						} else if (loop_var == 'Y') {
							onyon_type = ONYON_TYPE_YELLOW;
						}
					}
					found_creature = ItemOnyon::mgr->getOnyon((int)onyon_type);
					if (!playData->hasBootContainer((EPikiKind)onyon_type)) {
						found_creature = nullptr;
					}
				} else if (!strcmp(charBuffer, "pikmin")) {
					found_creature = moviePlayer->m_targetObject;
					if (!found_creature->isPiki()) {
						found_creature = nullptr;
					}
				} else if (!strcmp(charBuffer, "target")) {
					found_creature = moviePlayer->m_targetObject;
				} else if (!strcmp(charBuffer, "ufo")) {
					found_creature = ItemOnyon::mgr->m_ufo;
				} else if (!strcmp(charBuffer, "pod")) {
					found_creature = ItemOnyon::mgr->m_pod;
				} else if (!strcmp(charBuffer, "orima")) {
					found_creature = moviePlayer->getActiveOrima();
				} else if (!strcmp(charBuffer, "player")) {
					found_creature = moviePlayer->getActiveOrima();
				} else if (!strcmp(charBuffer, "orima")) {
					found_creature = naviMgr->getAt((int)loop_var);
				} else if (!strcmp(charBuffer, "onyon")) {
					found_creature = ItemOnyon::mgr->getOnyon((int)(loop_var));
					if (!playData->hasBootContainer((EPikiKind)(loop_var))) {
						found_creature = nullptr;
					}
				} else if (!strcmp(charBuffer, "ufo")) {
					found_creature = ItemOnyon::mgr->m_ufo;
					P2ASSERTLINE(231, found_creature);
				} else if (!strcmp(charBuffer, "pod")) {
					found_creature = ItemOnyon::mgr->m_pod;
				}
			}
			return found_creature;
		};
	}
}

} // namespace P2JST
} // namespace Game
