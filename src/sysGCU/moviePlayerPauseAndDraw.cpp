#include "Game/MoviePlayer.h"
#include "Game/pelletMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/PikiMgr.h"
#include "Game/EnemyBase.h"
#include "Game/Navi.h"
#include "Game/Entities/ItemOnyon.h"
#include "Iterator.h"
#include "nans.h"

namespace Game {

/*
 * --INFO--
 * Address:	80436ED0
 * Size:	000070
 */
void MoviePlayer::setPauseAndDraw(MovieConfig* config)
{
	pikiMgr->setMovieDraw(config->isDrawFlag(1));
	naviMgr->setMovieDraw(config->isDrawFlag(8));
	pelletMgr->setMovieDraw(config->isDrawFlag(4));

	if (generalEnemyMgr) {
		generalEnemyMgr->setMovieDraw(config->isDrawFlag(2));
	}
}

/*
 * --INFO--
 * Address:	80436F40
 * Size:	000498
 */
void MoviePlayer::clearPauseAndDraw()
{
	pikiMgr->setMovieDraw(true);
	naviMgr->setMovieDraw(true);
	pelletMgr->setMovieDraw(true);

	if (generalEnemyMgr) {
		generalEnemyMgr->setMovieDraw(true);
	}

	Iterator<Piki> itPiki(pikiMgr);
	CI_LOOP(itPiki) { (*itPiki)->movie_end(false); }

	if (generalEnemyMgr) {
		GeneralMgrIterator<EnemyBase> itEnemy(generalEnemyMgr);

		CI_LOOP(itEnemy) { itEnemy.getObject()->movie_end(false); }
	}

	if (ItemOnyon::mgr) {
		Iterator<Onyon> itOnyon(ItemOnyon::mgr);
		CI_LOOP(itOnyon) { (*itOnyon)->movie_end(false); }
	}

	if (pelletMgr) {
		PelletIterator itPellet;
		CI_LOOP(itPellet) { (*itPellet)->movie_end(false); }
	}
}

} // namespace Game
