#include "Game/MoviePlayer.h"
#include "Game/pelletMgr.h"
#include "Game/generalEnemyMgr.h"
#include "Game/PikiMgr.h"
#include "Game/EnemyBase.h"
#include "Game/Navi.h"
#include "Iterator.h"
#include "nans.h"

namespace Game {

/*
 * --INFO--
 * Address:	80436ED0
 * Size:	000070
 */
void MoviePlayer::setPauseAndDraw(Game::MovieConfig* config)
{
	pikiMgr->setMovieDraw(config->m_drawFlags & 1);
	naviMgr->setMovieDraw((config->m_drawFlags >> 3) & 1);
	pelletMgr->setMovieDraw((config->m_drawFlags & 4) != 0);

	if (generalEnemyMgr) {
		generalEnemyMgr->setMovieDraw((config->m_drawFlags & 2) != 0);
	}
}

/*
 * --INFO--
 * Address:	80436F40
 * Size:	000498
 */
void MoviePlayer::clearPauseAndDraw(void)
{
	pikiMgr->setMovieDraw(true);
	naviMgr->setMovieDraw(true);
	pelletMgr->setMovieDraw(true);

	if (generalEnemyMgr) {
		generalEnemyMgr->setMovieDraw(true);
	}

	Iterator<Piki> iter(pikiMgr, 0, 0);
	for (iter.first(); iter.isDone(); iter.next()) {
		(*iter)->movie_end(false);
	}

	if (generalEnemyMgr) {
		GeneralMgrIterator<EnemyBase> git((Container<EnemyBase>*)&generalEnemyMgr->_04, 0, 0);

		EnemyBase* base = nullptr;
		git.first();
		while (base) {
			(*git)->movie_end(false);
			git.next();
		}
	}

	if (pelletMgr) {
		PelletIterator it;
		for (it.first(); it.isDone(); it.next()) {
			((Creature*)*it)->movie_end(false);
		}
	}

	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	li       r4, 1
	stw      r0, 0x54(r1)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	bl       setMovieDraw__Q24Game7PikiMgrFb
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	bl       setMovieDraw__Q24Game7NaviMgrFb
	lwz      r3, pelletMgr__4Game@sda21(r13)
	li       r4, 1
	bl       setMovieDraw__Q24Game9PelletMgrFb
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80436F84
	li       r4, 1
	bl       setMovieDraw__Q24Game15GeneralEnemyMgrFb

lbl_80436F84:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x44(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_80436FC4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80437128

lbl_80436FC4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80437030

lbl_80436FDC:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437128
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80437030:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80436FDC
	b        lbl_80437128

lbl_80437050:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	lwz      r0, 0x44(r1)
	cmplwi   r0, 0
	bne      lbl_80437098
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80437128

lbl_80437098:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_8043710C

lbl_804370B8:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x44(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437128
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_8043710C:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804370B8

lbl_80437128:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80437050
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_804371AC
	beq      lbl_8043715C
	addi     r3, r3, 4

lbl_8043715C:
	li       r0, 0
	stw      r3, 0x30(r1)
	addi     r3, r1, 0x28
	stw      r0, 0x34(r1)
	stw      r0, 0x28(r1)
	stw      r0, 0x2c(r1)
	bl       "first__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"
	b        lbl_804371A0

lbl_8043717C:
	lwz      r12, 0(r3)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	addi     r3, r1, 0x28
	bl       "next__37GeneralMgrIterator<Q24Game9EnemyBase>Fv"

lbl_804371A0:
	lwz      r3, 0x28(r1)
	cmplwi   r3, 0
	bne      lbl_8043717C

lbl_804371AC:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80437380
	beq      lbl_804371C0
	addi     r3, r3, 0x30

lbl_804371C0:
	li       r0, 0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r0, 0x24(r1)
	cmplwi   r0, 0
	stw      r4, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r3, 0x20(r1)
	bne      lbl_804371FC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80437360

lbl_804371FC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80437268

lbl_80437214:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437360
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_80437268:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80437214
	b        lbl_80437360

lbl_80437288:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	bne      lbl_804372D0
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80437360

lbl_804372D0:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80437344

lbl_804372F0:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80437360
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_80437344:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804372F0

lbl_80437360:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r1)
	cmplw    r4, r3
	bne      lbl_80437288

lbl_80437380:
	lwz      r0, pelletMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_804373C8
	addi     r3, r1, 8
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 8
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_804373B8

lbl_804373A0:
	addi     r3, r1, 8
	bl       __ml__Q24Game14PelletIteratorFv
	li       r4, 0
	bl       movie_end__Q24Game8CreatureFb
	addi     r3, r1, 8
	bl       next__Q24Game14PelletIteratorFv

lbl_804373B8:
	addi     r3, r1, 8
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_804373A0

lbl_804373C8:
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

} // namespace Game
