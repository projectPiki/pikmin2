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

/**
 * @note Address: 0x80436ED0
 * @note Size: 0x70
 */
void MoviePlayer::setPauseAndDraw(MovieConfig* config)
{
	pikiMgr->setMovieDraw(config->isDrawFlag(MVDP_DrawPikmin));
	naviMgr->setMovieDraw(config->isDrawFlag(MVDP_DrawNavi));
	pelletMgr->setMovieDraw(config->isDrawFlag(MVDP_DrawPellet));

	if (generalEnemyMgr) {
		generalEnemyMgr->setMovieDraw(config->isDrawFlag(MVDP_DrawEnemy));
	}
}

/**
 * @note Address: 0x80436F40
 * @note Size: 0x498
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
