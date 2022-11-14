#include "types.h"
#include "nans.h"
#include "Game/SingleGame.h"
#include "Game/gameStat.h"

namespace Game {
namespace SingleGame {

/*
 * --INFO--
 * Address:	8023A250
 * Size:	0004A0
 */
void DayEndState::init(SingleGameSection* gs, StateArg* arg)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	lwz      r6, gameSystem__4Game@sda21(r13)
	mr       r29, r3
	mr       r31, r4
	mr       r30, r5
	lbz      r0, 0x3c(r6)
	rlwinm   r0, r0, 0, 0x1b, 0x19
	stb      r0, 0x3c(r6)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	ori      r0, r0, 0x10
	stb      r0, 0x3c(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       reset__Q24Game11MoviePlayerFv
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       clearSuspendedDemo__Q24Game11MoviePlayerFv
	cmplwi   r30, 0
	bne      lbl_8023A2D0
	lis      r3, lbl_80483D8C@ha
	lis      r5, lbl_80483DA0@ha
	addi     r3, r3, lbl_80483D8C@l
	li       r4, 0x43
	addi     r5, r5, lbl_80483DA0@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023A2D0:
	lhz      r0, 0(r30)
	li       r4, 1
	lfs      f0, lbl_8051A538@sda21(r2)
	addi     r5, r2, lbl_8051A53C@sda21
	sth      r0, 0x10(r29)
	li       r6, 3
	stfs     f0, 0x14(r29)
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 0
	addi     r3, r29, 0x18
	sth      r0, 0x12(r29)
	bl       clear__Q24Game13PikiContainerFv
	lwz      r0, 0xfc(r31)
	cmplwi   r0, 0
	beq      lbl_8023A314
	bl       PSMCancelToPauseOffMainBgm__Fv

lbl_8023A314:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8023A324
	addi     r3, r3, 0x30

lbl_8023A324:
	li       r0, 0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r0, 0x24(r1)
	cmplwi   r0, 0
	stw      r4, 0x18(r1)
	stw      r0, 0x1c(r1)
	stw      r3, 0x20(r1)
	bne      lbl_8023A360
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_8023A3E8

lbl_8023A360:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_8023A3CC

lbl_8023A378:
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
	bne      lbl_8023A3E8
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_8023A3CC:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A378

lbl_8023A3E8:
	lfs      f31, lbl_8051A544@sda21(r2)
	b        lbl_8023A500

lbl_8023A3F0:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	bl       setSpotEffectActive__Q24Game5OnyonFb
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	stfs     f31, 0x244(r3)
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	bl       forceClose__Q24Game5OnyonFv
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	bne      lbl_8023A470
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_8023A500

lbl_8023A470:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_8023A4E4

lbl_8023A490:
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
	bne      lbl_8023A500
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_8023A4E4:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A490

lbl_8023A500:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r1)
	cmplw    r4, r3
	bne      lbl_8023A3F0
	lwz      r4, 0x22c(r31)
	mr       r3, r31
	bl       saveToGeneratorCache__Q24Game15BaseGameSectionFPQ24Game10CourseInfo
	addi     r3, r1, 8
	bl       __ct__Q24Game14PelletIteratorFv
	addi     r3, r1, 8
	bl       first__Q24Game14PelletIteratorFv
	b        lbl_8023A584

lbl_8023A540:
	addi     r3, r1, 8
	bl       __ml__Q24Game14PelletIteratorFv
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A57C
	lwz      r0, 0xb8(r31)
	cmplwi   r0, 0
	bne      lbl_8023A57C
	mr       r3, r31
	li       r4, 0
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_8023A57C:
	addi     r3, r1, 8
	bl       next__Q24Game14PelletIteratorFv

lbl_8023A584:
	addi     r3, r1, 8
	bl       isDone__Q24Game14PelletIteratorFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A540
	lwz      r3, mgr__Q24Game13PelletCarcass@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game11PelletFruit@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game10PelletItem@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game13PelletOtakara@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A658
	lwz      r3, 0x270(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0x2d0(r31)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0(r31)
	bl       killHamonA___Q23efx11TNaviEffectFv
	mr       r3, r31
	bl       killHamonB___Q23efx11TNaviEffectFv

lbl_8023A658:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r31, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023A6CC
	lwz      r3, 0x270(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r31, 0x2d0(r31)
	lwz      r0, 0(r31)
	mr       r3, r31
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0(r31)
	bl       killHamonA___Q23efx11TNaviEffectFv
	mr       r3, r31
	bl       killHamonB___Q23efx11TNaviEffectFv

lbl_8023A6CC:
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023A6F0
 * Size:	00040C
 */
void DayEndState::exec(SingleGameSection* gs)
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stmw     r26, 0xa8(r1)
	mr       r29, r3
	lis      r3, lbl_80483D70@ha
	mr       r30, r4
	addi     r31, r3, lbl_80483D70@l
	lhz      r0, 0x12(r29)
	cmpwi    r0, 1
	beq      lbl_8023AA34
	bge      lbl_8023AAD8
	cmpwi    r0, 0
	bge      lbl_8023A72C
	b        lbl_8023AAD8

lbl_8023A72C:
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x14(r29)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_8051A538@sda21(r2)
	fsubs    f1, f2, f1
	stfs     f1, 0x14(r29)
	lfs      f1, 0x14(r29)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_8023AAD8
	addi     r3, r29, 0x18
	bl       clear__Q24Game13PikiContainerFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	lwz      r0, 0x218(r3)
	cmplwi   r0, 0
	beq      lbl_8023A77C
	lwz      r3, pikiMgr__4Game@sda21(r13)
	addi     r4, r29, 0x18
	bl       killDayEndPikmins__Q24Game7PikiMgrFRQ24Game13PikiContainer

lbl_8023A77C:
	lhz      r0, 0x10(r29)
	cmpwi    r0, 1
	beq      lbl_8023A934
	bge      lbl_8023A798
	cmpwi    r0, 0
	bge      lbl_8023A7A4
	b        lbl_8023AAD8

lbl_8023A798:
	cmpwi    r0, 3
	bge      lbl_8023AAD8
	b        lbl_8023A9B4

lbl_8023A7A4:
	lwz      r4, 0x22c(r30)
	addi     r3, r31, 0x3c
	lwz      r5, 0xc8(r30)
	li       r0, 0
	lwz      r4, 0x14(r4)
	li       r28, 0
	lfs      f0, lbl_8051A538@sda21(r2)
	li       r26, 0
	stw      r3, 0x70(r1)
	lwz      r3, playData__4Game@sda21(r13)
	stw      r4, 0x74(r1)
	stw      r5, 0x7c(r1)
	stfs     f0, 0x88(r1)
	stfs     f0, 0x8c(r1)
	stfs     f0, 0x90(r1)
	stfs     f0, 0x94(r1)
	stw      r0, 0x98(r1)
	stw      r0, 0x80(r1)
	stw      r0, 0x78(r1)
	stw      r0, 0x9c(r1)
	stw      r0, 0x84(r1)
	stw      r0, 0xa0(r1)
	lwz      r3, 0xb4(r3)
	addi     r27, r3, 0xc
	b        lbl_8023A820

lbl_8023A808:
	mr       r3, r27
	mr       r4, r26
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	addi     r26, r26, 1
	add      r28, r28, r0

lbl_8023A820:
	lhz      r0, 0(r27)
	cmpw     r26, r0
	blt      lbl_8023A808
	lwz      r3, playData__4Game@sda21(r13)
	li       r27, 0
	lwz      r3, 0xb4(r3)
	addi     r26, r3, 4
	b        lbl_8023A858

lbl_8023A840:
	mr       r3, r26
	mr       r4, r27
	bl       __cl__Q24Game11KindCounterFi
	lbz      r0, 0(r3)
	addi     r27, r27, 1
	add      r28, r28, r0

lbl_8023A858:
	lhz      r0, 0(r26)
	cmpw     r27, r0
	blt      lbl_8023A840
	cmpwi    r28, 0
	bne      lbl_8023A87C
	lis      r3, 0xC0011004@ha
	addi     r0, r3, 0xC0011004@l
	stw      r0, 0x9c(r1)
	b        lbl_8023A8A0

lbl_8023A87C:
	cmpwi    r28, 0xe
	bgt      lbl_8023A894
	lis      r3, 0xC0011002@ha
	addi     r0, r3, 0xC0011002@l
	stw      r0, 0x9c(r1)
	b        lbl_8023A8A0

lbl_8023A894:
	lis      r3, 0xC0011003@ha
	addi     r0, r3, 0xC0011003@l
	stw      r0, 0x9c(r1)

lbl_8023A8A0:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r4, 0
	bl       getAliveOrima__Q24Game7NaviMgrFi
	cmplwi   r3, 0
	bne      lbl_8023A8C8
	addi     r3, r31, 0x1c
	addi     r5, r31, 0x48
	li       r4, 0xde
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8023A8C8:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	li       r4, 0
	beq      lbl_8023A8FC
	lhz      r4, 0x2dc(r3)
	cmpwi    r4, 1
	bne      lbl_8023A8FC
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8023A8FC
	addi     r4, r4, 1

lbl_8023A8FC:
	stw      r4, 0x78(r1)
	addi     r4, r1, 0x70
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0xcc(r30)
	stw      r0, 0x80(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x3c
	li       r4, 1
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 1
	sth      r0, 0x12(r29)
	b        lbl_8023AAD8

lbl_8023A934:
	lwz      r4, 0x22c(r30)
	addi     r3, r31, 0x5c
	lwz      r5, 0xc8(r30)
	li       r0, 0
	lwz      r6, 0x14(r4)
	addi     r4, r1, 0x3c
	lfs      f0, lbl_8051A538@sda21(r2)
	stw      r3, 0x3c(r1)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r6, 0x40(r1)
	stw      r5, 0x48(r1)
	stfs     f0, 0x54(r1)
	stfs     f0, 0x58(r1)
	stfs     f0, 0x5c(r1)
	stfs     f0, 0x60(r1)
	stw      r0, 0x64(r1)
	stw      r0, 0x4c(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x68(r1)
	stw      r0, 0x50(r1)
	stw      r0, 0x6c(r1)
	lwz      r0, 0xcc(r30)
	stw      r0, 0x4c(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x74
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 1
	sth      r0, 0x12(r29)
	b        lbl_8023AAD8

lbl_8023A9B4:
	lwz      r4, 0x22c(r30)
	addi     r3, r31, 0x80
	lwz      r5, 0xc8(r30)
	li       r0, 0
	lwz      r6, 0x14(r4)
	addi     r4, r1, 8
	lfs      f0, lbl_8051A538@sda21(r2)
	stw      r3, 8(r1)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r6, 0xc(r1)
	stw      r5, 0x14(r1)
	stfs     f0, 0x20(r1)
	stfs     f0, 0x24(r1)
	stfs     f0, 0x28(r1)
	stfs     f0, 0x2c(r1)
	stw      r0, 0x30(r1)
	stw      r0, 0x18(r1)
	stw      r0, 0x10(r1)
	stw      r0, 0x34(r1)
	stw      r0, 0x1c(r1)
	stw      r0, 0x38(r1)
	lwz      r0, 0xcc(r30)
	stw      r0, 0x18(r1)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0x98
	li       r4, 0
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	li       r0, 1
	sth      r0, 0x12(r29)
	b        lbl_8023AAD8

lbl_8023AA34:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8023AAD8
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8023AAD8
	lwz      r3, pikiMgr__4Game@sda21(r13)
	li       r4, 0
	bl       forceEnterPikmins__Q24Game7PikiMgrFUc
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r31, 0xa4
	li       r4, 1
	li       r6, 3
	bl       setPause__Q24Game10GameSystemFbPci
	mr       r3, r30
	bl       advanceDayCount__Q24Game15BaseGameSectionFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x40(r3)
	bl       setStartTime__Q24Game7TimeMgrFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, generalEnemyMgr__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r4, mapMgr__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_8023AA9C
	lwz      r4, 0(r4)

lbl_8023AA9C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       detachObjectMgr__Q24Game10GameSystemFP16GenericObjectMgr
	lwz      r7, gameSystem__4Game@sda21(r13)
	mr       r3, r29
	mr       r4, r30
	li       r5, 7
	lbz      r0, 0x3c(r7)
	li       r6, 0
	ori      r0, r0, 4
	stb      r0, 0x3c(r7)
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8023AAE8

lbl_8023AAD8:
	mr       r3, r30
	bl       doUpdate__Q24Game15BaseGameSectionFv
	mr       r3, r30
	bl       updateMainMapScreen__Q24Game17SingleGameSectionFv

lbl_8023AAE8:
	lmw      r26, 0xa8(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023AAFC
 * Size:	0005B8
 */
void DayEndState::onMovieStart(SingleGameSection* gs, MovieConfig* cfg, u32, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x210(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x214(r1)
	  stmw      r25, 0x1F4(r1)
	  mr        r25, r5
	  addi      r31, r4, 0x3D70
	  lwz       r3, -0x6560(r13)
	  bl        0x1C2D30
	  lwz       r3, -0x6560(r13)
	  bl        0x1C2DE0
	  lwz       r3, -0x6C18(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x113A14
	  mr        r3, r25
	  addi      r4, r31, 0x3C
	  bl        0x1F6D90
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x580
	  lwz       r3, -0x6560(r13)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  beq-      .loc_0x84
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x30
	  li        r4, 0x14F
	  crclr     6, 0x6
	  bl        -0x21053C

	.loc_0x84:
	  lfs       f2, -0x3E18(r2)
	  lfs       f1, -0x3E28(r2)
	  lfs       f0, -0x3E14(r2)
	  stfs      f2, 0x48(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f1, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x5A4
	  lwz       r3, -0x6CF8(r13)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r4, r1, 0x48
	  addi      r5, r1, 0x10
	  bl        -0x14FFF8
	  li        r29, 0
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lis       r3, 0x804B
	  lfs       f0, 0x18(r1)
	  subi      r0, r3, 0x4364
	  lwz       r3, -0x6D0C(r13)
	  cmplwi    r29, 0
	  stfs      f2, 0x48(r1)
	  li        r30, 0
	  stfs      f1, 0x4C(r1)
	  stfs      f0, 0x50(r1)
	  stw       r0, 0x38(r1)
	  stw       r29, 0x44(r1)
	  stw       r29, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  bne-      .loc_0x134
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2BC

	.loc_0x134:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x1A0

	.loc_0x14C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2BC
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x1A0:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x14C
	  b         .loc_0x2BC

	.loc_0x1C0:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r27, r3
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x200
	  addi      r3, r1, 0x54
	  addi      r30, r30, 0x1
	  stwx      r27, r3, r29
	  addi      r29, r29, 0x4

	.loc_0x200:
	  lwz       r0, 0x44(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x22C
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2BC

	.loc_0x22C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)
	  b         .loc_0x2A0

	.loc_0x24C:
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x44(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x2BC
	  lwz       r3, 0x40(r1)
	  lwz       r4, 0x3C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x3C(r1)

	.loc_0x2A0:
	  lwz       r12, 0x38(r1)
	  addi      r3, r1, 0x38
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x24C

	.loc_0x2BC:
	  lwz       r3, 0x40(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x3C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x1C0
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r26, r1, 0x54
	  li        r25, 0
	  subi      r29, r4, 0x5D30
	  addi      r27, r3, 0x1160
	  li        r28, 0x1
	  b         .loc_0x31C

	.loc_0x2FC:
	  stw       r29, 0x8(r1)
	  addi      r4, r1, 0x8
	  lwz       r3, 0x0(r26)
	  stw       r28, 0xC(r1)
	  stw       r27, 0x8(r1)
	  bl        -0xFFD1C
	  addi      r26, r26, 0x4
	  addi      r25, r25, 0x1

	.loc_0x31C:
	  cmpw      r25, r30
	  blt+      .loc_0x2FC
	  lwz       r3, -0x6D0C(r13)
	  addi      r4, r1, 0x48
	  lfs       f1, -0x3E10(r2)
	  li        r5, 0
	  bl        -0xDB4C8
	  li        r0, 0
	  lwz       r3, -0x6D0C(r13)
	  lis       r4, 0x804B
	  stw       r0, 0x34(r1)
	  subi      r4, r4, 0x4364
	  cmplwi    r0, 0
	  stw       r4, 0x28(r1)
	  stw       r0, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  bne-      .loc_0x378
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x400

	.loc_0x378:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x3E4

	.loc_0x390:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x400
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x3E4:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x390

	.loc_0x400:
	  lis       r5, 0x804B
	  lis       r4, 0x804B
	  lis       r3, 0x804B
	  addi      r28, r5, 0x530
	  addi      r30, r4, 0x524
	  addi      r29, r3, 0xD44
	  b         .loc_0x55C

	.loc_0x41C:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r26, r3
	  lwz       r3, -0x6D20(r13)
	  li        r4, 0
	  bl        -0xDFC6C
	  mr.       r27, r3
	  bne-      .loc_0x45C
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0xB4
	  li        r4, 0x178
	  crclr     6, 0x6
	  bl        -0x210914

	.loc_0x45C:
	  stw       r28, 0x1C(r1)
	  li        r3, 0
	  li        r0, 0x1
	  addi      r5, r1, 0x1C
	  stw       r30, 0x1C(r1)
	  li        r4, 0
	  stw       r27, 0x20(r1)
	  stw       r29, 0x1C(r1)
	  stb       r3, 0x24(r1)
	  stb       r3, 0x25(r1)
	  stw       r27, 0x2C4(r26)
	  stb       r0, 0x24(r1)
	  lwz       r3, 0x294(r26)
	  bl        -0xA3FF8
	  mr        r3, r26
	  li        r4, 0
	  bl        -0xFF548
	  lwz       r0, 0x34(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x4CC
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x55C

	.loc_0x4CC:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)
	  b         .loc_0x540

	.loc_0x4EC:
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x34(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x55C
	  lwz       r3, 0x30(r1)
	  lwz       r4, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x2C(r1)

	.loc_0x540:
	  lwz       r12, 0x28(r1)
	  addi      r3, r1, 0x28
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x4EC

	.loc_0x55C:
	  lwz       r3, 0x30(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x2C(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x41C
	  b         .loc_0x5A4

	.loc_0x580:
	  mr        r3, r25
	  addi      r4, r31, 0xC4
	  bl        0x1F6848
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5A4
	  lwz       r3, -0x6D38(r13)
	  bl        -0xE2D9C
	  lwz       r3, -0x6E20(r13)
	  bl        -0x12D2C8

	.loc_0x5A4:
	  lmw       r25, 0x1F4(r1)
	  lwz       r0, 0x214(r1)
	  mtlr      r0
	  addi      r1, r1, 0x210
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023B0B4
 * Size:	0000F4
 */
void DayEndState::onMovieDone(SingleGameSection* gs, MovieConfig* cfg, u32, u32)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r3, 0x8048
	  stw       r0, 0x54(r1)
	  addi      r0, r3, 0x3DAC
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  mr        r3, r31
	  stw       r30, 0x48(r1)
	  mr        r30, r4
	  mr        r4, r0
	  bl        0x1F67EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x44
	  lwz       r3, -0x6D0C(r13)
	  li        r4, 0
	  bl        -0xDB440

	.loc_0x44:
	  lis       r4, 0x8048
	  mr        r3, r31
	  addi      r4, r4, 0x3E34
	  bl        0x1F67C8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lwz       r3, -0x6C18(r13)
	  lbz       r0, 0x3C(r3)
	  rlwinm    r0,r0,0,27,25
	  stb       r0, 0x3C(r3)
	  lwz       r3, -0x6D0C(r13)
	  bl        -0xDABCC
	  b         .loc_0xDC

	.loc_0x78:
	  lwz       r4, 0x22C(r30)
	  lis       r3, 0x8048
	  lwz       r5, 0xC8(r30)
	  addi      r3, r3, 0x3E34
	  lwz       r6, 0x14(r4)
	  li        r0, 0
	  lfs       f0, -0x3E28(r2)
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  lwz       r3, -0x64AC(r13)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x14(r1)
	  stfs      f0, 0x20(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  stfs      f0, 0x2C(r1)
	  stw       r0, 0x30(r1)
	  stw       r0, 0x18(r1)
	  stw       r0, 0x10(r1)
	  stw       r0, 0x34(r1)
	  stw       r0, 0x1C(r1)
	  stw       r0, 0x38(r1)
	  lwz       r0, 0xCC(r30)
	  stw       r0, 0x18(r1)
	  bl        0x1F1844

	.loc_0xDC:
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8023B1A8
 * Size:	0002C0
 */
void DayEndState::onMovieCommand(SingleGameSection* gs, int)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	cmpwi    r5, 1
	stw      r0, 0x84(r1)
	stmw     r27, 0x6c(r1)
	mr       r27, r3
	beq      lbl_8023B1C8
	b        lbl_8023B454

lbl_8023B1C8:
	lfs      f0, lbl_8051A538@sda21(r2)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x3c(r1)
	stfs     f0, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_8023B248
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r12, 4(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x3c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	addi     r4, r1, 0x3c
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x3c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x40(r1)

lbl_8023B248:
	lfs      f3, 0x3c(r1)
	addi     r4, r1, 0x2c
	lfs      f2, 0x40(r1)
	lfs      f1, 0x44(r1)
	lfs      f0, lbl_8051A554@sda21(r2)
	stfs     f3, 0x2c(r1)
	lwz      r3, generalEnemyMgr__4Game@sda21(r13)
	stfs     f2, 0x30(r1)
	stfs     f1, 0x34(r1)
	stfs     f0, 0x38(r1)
	bl       createDayendEnemies__Q24Game15GeneralEnemyMgrFRQ23Sys6Sphere
	li       r31, 0

lbl_8023B278:
	li       r30, 0

lbl_8023B27C:
	li       r29, 0
	b        lbl_8023B420

lbl_8023B284:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_8023B41C
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	lis      r4, __vt__Q24Game11PikiInitArg@ha
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	li       r5, 0x1f
	stw      r0, 0x20(r1)
	addi     r6, r4, __vt__Q24Game11PikiInitArg@l
	li       r0, 0
	addi     r4, r1, 0x20
	stw      r6, 0x20(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x28(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x4c(r1)
	lfd      f3, lbl_8051A570@sda21(r2)
	stw      r0, 0x48(r1)
	lfs      f2, lbl_8051A558@sda21(r2)
	lfd      f0, 0x48(r1)
	lfs      f1, lbl_8051A55C@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, lbl_8051A538@sda21(r2)
	fdivs    f2, f3, f2
	fmuls    f4, f1, f2
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8023B314
	fneg     f1, f4

lbl_8023B314:
	lfs      f2, lbl_8051A564@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051A538@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	lfs      f3, lbl_8051A560@sda21(r2)
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f5, f3, f0
	bge      lbl_8023B374
	lfs      f0, lbl_8051A568@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8023B38C

lbl_8023B374:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8023B38C:
	fmuls    f4, f3, f0
	lfs      f3, lbl_8051A538@sda21(r2)
	lfs      f2, 0x44(r1)
	lfs      f1, 0x40(r1)
	lfs      f0, 0x3c(r1)
	fadds    f2, f5, f2
	lwz      r3, mapMgr__4Game@sda21(r13)
	fadds    f1, f3, f1
	stfs     f3, 0x18(r1)
	fadds    f0, f4, f0
	cmplwi   r3, 0
	stfs     f4, 0x14(r1)
	stfs     f5, 0x1c(r1)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	beq      lbl_8023B3E8
	lwz      r12, 4(r3)
	addi     r4, r1, 0x14
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x18(r1)

lbl_8023B3E8:
	mr       r3, r28
	addi     r4, r1, 0x14
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r28
	mr       r4, r31
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r28
	mr       r4, r30
	bl       changeHappa__Q24Game4PikiFi
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_8023B41C:
	addi     r29, r29, 1

lbl_8023B420:
	mr       r4, r31
	mr       r5, r30
	addi     r3, r27, 0x18
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0(r3)
	cmpw     r29, r0
	blt      lbl_8023B284
	addi     r30, r30, 1
	cmpwi    r30, 2
	ble      lbl_8023B27C
	addi     r31, r31, 1
	cmpwi    r31, 4
	ble      lbl_8023B278

lbl_8023B454:
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023B468
 * Size:	000028
 */
void DayEndState::draw(SingleGameSection* gs, Graphics& gfx) { static_cast<BaseGameSection*>(gs)->doDraw(gfx); }

/*
 * --INFO--
 * Address:	8023B490
 * Size:	00007C
 */
void DayEndState::cleanup(SingleGameSection* gs)
{
	playData->setPikminCounts_Today();
	GameStat::getMapPikmins(-1);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, playData__4Game@sda21(r13)
	bl       setPikminCounts_Today__Q24Game8PlayDataFv
	li       r3, -1
	bl       getMapPikmins__Q24Game8GameStatFi
	lis      r3, alivePikis__Q24Game8GameStat@ha
	lwzu     r12, alivePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r4, lbl_80483E48@ha
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r5, r4, lbl_80483E48@l
	li       r6, 3
	li       r4, 0
	bl       setPause__Q24Game10GameSystemFbPci
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm   r0, r0, 0, 0x1c, 0x1a
	stb      r0, 0x3c(r3)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace SingleGame
} // namespace Game
