#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
        .4byte __sinit_moviePlayerPauseAndDraw_cpp

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC810
    lbl_804EC810:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_80516240
    lbl_80516240:
        .skip 0x4
    .global lbl_80516244
    lbl_80516244:
        .skip 0x4
*/

namespace Game {

/*
 * --INFO--
 * Address:	80436ED0
 * Size:	000070
 */
void MoviePlayer::setPauseAndDraw(Game::MovieConfig*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lhz      r0, 0xbe(r4)
	lwz      r3, pikiMgr__4Game@sda21(r13)
	clrlwi   r4, r0, 0x1f
	bl       setMovieDraw__Q24Game7PikiMgrFb
	lhz      r0, 0xbe(r31)
	lwz      r3, naviMgr__4Game@sda21(r13)
	rlwinm   r4, r0, 0x1d, 0x1f, 0x1f
	bl       setMovieDraw__Q24Game7NaviMgrFb
	lhz      r0, 0xbe(r31)
	lwz      r3, pelletMgr__4Game@sda21(r13)
	rlwinm   r4, r0, 0x1e, 0x1f, 0x1f
	bl       setMovieDraw__Q24Game9PelletMgrFb
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80436F2C
	lhz      r0, 0xbe(r31)
	rlwinm   r4, r0, 0x1f, 0x1f, 0x1f
	bl       setMovieDraw__Q24Game15GeneralEnemyMgrFb

lbl_80436F2C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80436F40
 * Size:	000498
 */
void MoviePlayer::clearPauseAndDraw(void)
{
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

/*
 * --INFO--
 * Address:	804373D8
 * Size:	000028
 */
void __sinit_moviePlayerPauseAndDraw_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804EC810@ha
	stw      r0, lbl_80516240@sda21(r13)
	stfsu    f0, lbl_804EC810@l(r3)
	stfs     f0, lbl_80516244@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
