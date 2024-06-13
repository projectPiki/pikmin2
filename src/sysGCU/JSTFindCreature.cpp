#include "nans.h"
#include "Game/P2JST/ObjectSystem.h"
#include "Game/Navi.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/Entities/ItemOnyon.h"
#include "P2Macros.h"

static const u32 filler[] = { 0, 0, 0 };
const char filename[]     = "JSTFindCreature";

namespace Game {
namespace P2JST {

/**
 * @note Address: 0x804313B8
 * @note Size: 0x450
 */
Creature* ObjectSystem::findCreature(const char* query) const
{
	char targetChar    = '0';
	Creature* creature = nullptr;
	char* queryPtr     = (char*)&query[1];
	char stringBuffer[PATH_MAX];
	char* bufferPtr = stringBuffer;

	int i           = 0;
	stringBuffer[0] = '\0';

	while (true) {
		char currchar = queryPtr[0];
		if (currchar == '\0') {
			bufferPtr[0] = '\0';
			break;
		}

		if (currchar == '_') {
			targetChar   = queryPtr[1];
			bufferPtr[0] = '\0';
			break;
		}
		if (currchar >= '0' && currchar <= '9') {
			targetChar   = currchar;
			bufferPtr[0] = '\0';
			break;
		}
		(bufferPtr++)[0] = (queryPtr++)[0];
		i++;
		JUT_ASSERTLINE(117, i < 0xff, "OG-DRON\n");
	}

	if (!strcmp(stringBuffer, "theOrima")) {
		creature = naviMgr->getAt(NAVIID_Olimar);

	} else if (!strcmp(stringBuffer, "theLouie")) {
		creature = naviMgr->getAt(NAVIID_Louie);

	} else if (!strcmp(stringBuffer, "orimaAlive")) {
		int i = targetChar - '1';
		P2ASSERTBOUNDSINCLUSIVELINE(146, 0, i, 1);
		creature = naviMgr->getAliveOrima(i);

	} else if (!strcmp(stringBuffer, "orimaDead")) {
		int i = targetChar - '1';
		P2ASSERTBOUNDSINCLUSIVELINE(158, 0, i, 1);
		creature = naviMgr->getDeadOrima(i);

	} else if (!strcmp(stringBuffer, "onyon")) {
		int i = (int)targetChar;
		OnyonTypes onyon_type;
		if (!((i < '0') || ('2' < i))) {
			onyon_type = (OnyonTypes)(i - '0'); // converts ascii char into integer
		} else if (targetChar == 'R') {
			onyon_type = ONYON_TYPE_RED;
		} else if (targetChar == 'B') {
			onyon_type = ONYON_TYPE_BLUE;
		} else if (targetChar == 'Y') {
			onyon_type = ONYON_TYPE_YELLOW;
		}
		creature = ItemOnyon::mgr->getOnyon((int)onyon_type);
		if (!playData->hasBootContainer((EPikiKind)onyon_type)) {
			creature = nullptr;
		}

	} else if (!strcmp(stringBuffer, "pikmin")) {
		creature = moviePlayer->mTargetObject;
		if (!moviePlayer->mTargetObject->isPiki()) {
			creature = nullptr;
		}

	} else if (!strcmp(stringBuffer, "target")) {
		creature = moviePlayer->mTargetObject;

	} else if (!strcmp(stringBuffer, "ufo")) {
		creature = ItemOnyon::mgr->mUfo;

	} else if (!strcmp(stringBuffer, "pod")) {
		creature = ItemOnyon::mgr->mPod;

	} else if (!strcmp(stringBuffer, "orima")) {
		creature = moviePlayer->getActiveOrima();

	} else if (!strcmp(stringBuffer, "player")) {
		creature = moviePlayer->getActiveOrima();

	} else if (!strcmp(stringBuffer, "orima")) {
		creature = naviMgr->getAt((int)targetChar - '0'); // converts ascii char into integer

	} else if (!strcmp(stringBuffer, "onyon")) {
		int j    = targetChar - '0';
		creature = ItemOnyon::mgr->getOnyon(j);            // converts ascii char into integer
		if (!playData->hasBootContainer((EPikiKind)(j))) { // converts ascii char into integer
			creature = nullptr;
		}

	} else if (!strcmp(stringBuffer, "ufo")) {
		creature = ItemOnyon::mgr->mUfo;
		P2ASSERTLINE(231, creature);

	} else if (!strcmp(stringBuffer, "pod")) {
		creature = ItemOnyon::mgr->mPod;
	}

	return creature;
}

} // namespace P2JST
} // namespace Game
