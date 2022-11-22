#include "Game/Entities/Item.h"
#include "Game/Piki.h"
#include "Game/PikiMgr.h"
#include "Game/MoviePlayer.h"
#include "Game/gamePlayData.h"
#include "Game/gameStat.h"
#include "Game/BirthMgr.h"
#include "efx/TPod.h"
#include "efx/Container.h"
#include "efx/Arg.h"
#include "efx/TUfo.h"
#include "efx/TOnyon.h"
#include "efx/OnyonSpot.h"
#include "SysShape/Animator.h"
#include "Sys/DrawBuffers.h"
#include "nans.h"
#include "ParticleID.h"

namespace Game {

static const char someOnyonMgrArray[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char onyonMgrName[]      = "onyonMgr";

/*
 * --INFO--
 * Address:	80174CA0
 * Size:	00080C
 */
void Onyon::movieUserCommand(u32 code, MoviePlayer* player)
{
	switch (code) {
	case 100: // 0x64
	case 105: // 0x69
		if (!playData->hasBootContainer(m_onyonType)) {
			JUT_PANICLINE(534, "BIKKURI no boot!\n");
		}

		int allPikiCount = GameStat::getAllPikmins(m_onyonType);

		// checkZikatu inline needs SLIGHTLY fixing.
		if (code == 105 || !GameStat::checkZikatu(m_onyonType)) {
			playData->setContainer(m_onyonType);
			ItemPikihead::Item* pikiHead = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (pikiHead) {
				ItemPikihead::InitArg pikiHeadInitArg((EPikiKind)m_onyonType, Vector3f::zero);
				pikiHead->init(&pikiHeadInitArg);
				BirthMgr::inc(pikiHead->_1F4);
				pikiHead->movie_begin(false);
				doEmit(pikiHead, true);
				return;
			}

			gameSystem->m_section->_12C->frameInitAll();
			gameSystem->m_section->_130->frameInitAll();
			ItemPikihead::Item* targetPikihead = nullptr;
			f32 maxDist                        = 0.0f;
			Iterator<ItemPikihead::Item> iterSprout(ItemPikihead::mgr);

			CI_LOOP(iterSprout)
			{
				ItemPikihead::Item* item = (*iterSprout);
				if (item->isAlive()) {
					f32 sphereDist = item->calcSphereDistance(this);
					if (sphereDist > maxDist) {
						maxDist        = sphereDist;
						targetPikihead = item;
					}
				}
			}

			if (targetPikihead) {
				GameStat::mePikis.dec(targetPikihead->_1F4);
				int& pikiHeadCount = playData->m_pikiContainer.getCount(targetPikihead->_1F4, targetPikihead->_1F6);
				pikiHeadCount++;
				CreatureKillArg killArg(1);
				targetPikihead->kill(&killArg);
			} else {

				Iterator<Piki> iterPiki(pikiMgr);
				Piki* targetPiki = nullptr;
				CI_LOOP(iterPiki)
				{
					Piki* piki = (*iterPiki);
					if (piki->isAlive() && !piki->isZikatu()) {
						f32 sphereDist = piki->calcSphereDistance(this);
						if (sphereDist > maxDist) {
							maxDist    = sphereDist;
							targetPiki = piki;
						}
					}
				}

				if (targetPiki) {
					int& pikiCount = playData->m_pikiContainer.getCount(targetPiki->m_pikiKind, targetPiki->m_happaKind);
					pikiCount++;
					CreatureKillArg pikiKillArg(1);
					targetPiki->kill(&pikiKillArg);
				}
			}

			ItemPikihead::Item* sprout = static_cast<ItemPikihead::Item*>(ItemPikihead::mgr->birth());
			if (sprout) {
				ItemPikihead::InitArg sproutInitArg((EPikiKind)m_onyonType, Vector3f::zero);
				sprout->init(&sproutInitArg);
				BirthMgr::inc(sprout->_1F4);
				sprout->movie_begin(false);
				doEmit(sprout, true);
			} else {
				JUT_PANICLINE(641, "onyon supply failure!\n");
			}
		}
		break;

	case 101: // 0x65
		if (!(m_onyonType > ONYON_TYPE_YELLOW)) {
			if (moviePlayer->m_flags & 0x2) {
				setSpotState(SPOTSTATE_Unk3);
			} else {
				setSpotState(SPOTSTATE_Unk1);
			}
		} else if (m_onyonType == ONYON_TYPE_SHIP || m_onyonType == ONYON_TYPE_POD) {
			setSpotEffect(true);
		}
		break;

	case 102: // 0x66
		if (!(m_onyonType > ONYON_TYPE_YELLOW)) {
			if (moviePlayer->m_flags & 0x2) {
				setSpotState(SPOTSTATE_Unk0);
			} else {
				setSpotState(SPOTSTATE_Unk2);
			}
		} else if (m_onyonType == ONYON_TYPE_SHIP || m_onyonType == ONYON_TYPE_POD) {
			setSpotEffect(false);
		}
		break;

	case 103: // 0x67
		if (m_onyonType == ONYON_TYPE_SHIP) {
			startPropera();
		}
		break;

	case 104: // 0x68
		if (m_onyonType == ONYON_TYPE_SHIP) {
			stopPropera();
		}
		break;
	}
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	stw      r29, 0x84(r1)
	stw      r28, 0x80(r1)
	mr       r28, r4
	lis      r4, lbl_8047E620@ha
	cmpwi    r28, 0x67
	mr       r31, r3
	addi     r30, r4, lbl_8047E620@l
	beq      lbl_80175460
	bge      lbl_80174CF8
	cmpwi    r28, 0x65
	beq      lbl_801753B8
	bge      lbl_8017540C
	cmpwi    r28, 0x64
	bge      lbl_80174D08
	b        lbl_80175484

lbl_80174CF8:
	cmpwi    r28, 0x69
	beq      lbl_80174D08
	bge      lbl_80175484
	b        lbl_80175474

lbl_80174D08: // 0x64 or 0x69
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80174D30
	addi     r3, r30, 0x18
	addi     r5, r30, 0x28
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80174D30:
	lhz      r3, 0x22e(r31)
	bl       getAllPikmins__Q24Game8GameStatFi
	cmplwi   r28, 0x69
	beq      lbl_80174D64
	lhz      r3, 0x22e(r31)
	lis      r4, zikatuPikis__Q24Game8GameStat@ha
	addi     r4, r4, zikatuPikis__Q24Game8GameStat@l
	slwi     r0, r3, 2
	add      r4, r4, r0
	lwz      r29, 4(r4)
	bl       getAllPikmins__Q24Game8GameStatFi
	subf.    r0, r29, r3
	bgt      lbl_80175484

lbl_80174D64:
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       setContainer__Q24Game8PlayDataFi
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_80174E18
	lhz      r7, 0x22e(r31)
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	addi     r6, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, 0
	lis      r4, "zero__10Vector3<f>"@ha
	lfsu     f3, "zero__10Vector3<f>"@l(r4)
	lis      r5, __vt__Q24Game11ItemInitArg@ha
	stw      r6, 0x58(r1)
	addi     r6, r5, __vt__Q24Game11ItemInitArg@l
	lfs      f2, 4(r4)
	lfs      f1, 8(r4)
	lis      r5, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f0, lbl_80518A28@sda21(r2)
	addi     r5, r5, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r6, 0x58(r1)
	addi     r4, r1, 0x58
	stw      r5, 0x58(r1)
	stw      r7, 0x5c(r1)
	stfs     f3, 0x60(r1)
	stfs     f2, 0x64(r1)
	stfs     f1, 0x68(r1)
	stb      r0, 0x6c(r1)
	stw      r0, 0x70(r1)
	stfs     f0, 0x74(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lhz      r3, 0x1f4(r28)
	bl       inc__Q24Game8BirthMgrFi
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	mr       r3, r31
	mr       r4, r28
	li       r5, 1
	bl       doEmit__Q24Game5OnyonFPQ24Game8Creatureb
	b        lbl_80175484

lbl_80174E18:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r3, 0x12c(r3)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r3, 0x130(r3)
	bl       frameInitAll__Q23Sys11DrawBuffersFv
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	li       r29, 0
	lfs      f31, lbl_80518A2C@sda21(r2)
	cmplwi   r3, 0
	beq      lbl_80174E50
	addi     r3, r3, 0x30

lbl_80174E50:
	li       r0, 0
	lis      r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@ha
	addi     r4, r4, "__vt__36Iterator<Q34Game12ItemPikihead4Item>"@l
	stw      r0, 0x34(r1)
	cmplwi   r0, 0
	stw      r4, 0x28(r1)
	stw      r0, 0x2c(r1)
	stw      r3, 0x30(r1)
	bne      lbl_80174E8C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80175020

lbl_80174E8C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80174EF8

lbl_80174EA4:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80175020
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_80174EF8:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80174EA4
	b        lbl_80175020

lbl_80174F18:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80174F64
	mr       r3, r28
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f31
	ble      lbl_80174F64
	fmr      f31, f1
	mr       r29, r28

lbl_80174F64:
	lwz      r0, 0x34(r1)
	cmplwi   r0, 0
	bne      lbl_80174F90
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80175020

lbl_80174F90:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)
	b        lbl_80175004

lbl_80174FB0:
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80175020
	lwz      r3, 0x30(r1)
	lwz      r4, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x2c(r1)

lbl_80175004:
	lwz      r12, 0x28(r1)
	addi     r3, r1, 0x28
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80174FB0

lbl_80175020:
	lwz      r3, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x2c(r1)
	cmplw    r4, r3
	bne      lbl_80174F18
	cmplwi   r29, 0
	beq      lbl_8017509C
	lis      r3, mePikis__Q24Game8GameStat@ha
	lhz      r4, 0x1f4(r29)
	addi     r3, r3, mePikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat11PikiCounterFi
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x1f4(r29)
	lhz      r5, 0x1f6(r29)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r6, 0(r3)
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	addi     r5, r4, __vt__Q24Game15CreatureKillArg@l
	li       r0, 1
	addi     r6, r6, 1
	addi     r4, r1, 0x10
	stw      r6, 0(r3)
	mr       r3, r29
	stw      r5, 0x10(r1)
	stw      r0, 0x14(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	b        lbl_801752F8

lbl_8017509C:
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x24(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x18(r1)
	li       r29, 0
	stw      r0, 0x1c(r1)
	stw      r3, 0x20(r1)
	bne      lbl_801750E0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80175290

lbl_801750E0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_8017514C

lbl_801750F8:
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
	bne      lbl_80175290
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_8017514C:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801750F8
	b        lbl_80175290

lbl_8017516C:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r28, r3
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801751D4
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801751D4
	mr       r3, r28
	mr       r4, r31
	bl       calcSphereDistance__Q24Game8CreatureFPQ24Game8Creature
	fcmpo    cr0, f1, f31
	ble      lbl_801751D4
	fmr      f31, f1
	mr       r29, r28

lbl_801751D4:
	lwz      r0, 0x24(r1)
	cmplwi   r0, 0
	bne      lbl_80175200
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80175290

lbl_80175200:
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)
	b        lbl_80175274

lbl_80175220:
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
	bne      lbl_80175290
	lwz      r3, 0x20(r1)
	lwz      r4, 0x1c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x1c(r1)

lbl_80175274:
	lwz      r12, 0x18(r1)
	addi     r3, r1, 0x18
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80175220

lbl_80175290:
	lwz      r3, 0x20(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x1c(r1)
	cmplw    r4, r3
	bne      lbl_8017516C
	cmplwi   r29, 0
	beq      lbl_801752F8
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r29)
	lbz      r5, 0x2b9(r29)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r6, 0(r3)
	lis      r4, __vt__Q24Game15CreatureKillArg@ha
	addi     r5, r4, __vt__Q24Game15CreatureKillArg@l
	li       r0, 1
	addi     r6, r6, 1
	addi     r4, r1, 8
	stw      r6, 0(r3)
	mr       r3, r29
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg

lbl_801752F8:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_801753A0
	lhz      r7, 0x22e(r31)
	lis      r4, __vt__Q24Game15CreatureInitArg@ha
	addi     r6, r4, __vt__Q24Game15CreatureInitArg@l
	li       r0, 0
	lis      r4, "zero__10Vector3<f>"@ha
	lfsu     f3, "zero__10Vector3<f>"@l(r4)
	lis      r5, __vt__Q24Game11ItemInitArg@ha
	stw      r6, 0x38(r1)
	addi     r6, r5, __vt__Q24Game11ItemInitArg@l
	lfs      f2, 4(r4)
	lfs      f1, 8(r4)
	lis      r5, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f0, lbl_80518A28@sda21(r2)
	addi     r5, r5, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r6, 0x38(r1)
	addi     r4, r1, 0x38
	stw      r5, 0x38(r1)
	stw      r7, 0x3c(r1)
	stfs     f3, 0x40(r1)
	stfs     f2, 0x44(r1)
	stfs     f1, 0x48(r1)
	stb      r0, 0x4c(r1)
	stw      r0, 0x50(r1)
	stfs     f0, 0x54(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lhz      r3, 0x1f4(r28)
	bl       inc__Q24Game8BirthMgrFi
	mr       r3, r28
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	mr       r3, r31
	mr       r4, r28
	li       r5, 1
	bl       doEmit__Q24Game5OnyonFPQ24Game8Creatureb
	b        lbl_80175484

lbl_801753A0:
	addi     r3, r30, 0x18
	addi     r5, r30, 0x3c
	li       r4, 0x281
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80175484

lbl_801753B8: // 0x65
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_801753EC
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_801753E0
	li       r4, 3
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	b        lbl_80175484

lbl_801753E0:
	li       r4, 1
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	b        lbl_80175484

lbl_801753EC:
	cmplwi   r0, 4
	beq      lbl_801753FC
	cmplwi   r0, 3
	bne      lbl_80175484

lbl_801753FC:
	mr       r3, r31
	li       r4, 1
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_80175484

lbl_8017540C: // 0x66
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_80175440
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r4)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80175434
	li       r4, 0
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	b        lbl_80175484

lbl_80175434:
	li       r4, 2
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	b        lbl_80175484

lbl_80175440:
	cmplwi   r0, 4
	beq      lbl_80175450
	cmplwi   r0, 3
	bne      lbl_80175484

lbl_80175450:
	mr       r3, r31
	li       r4, 0
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_80175484

lbl_80175460: // 0x67
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 4
	bne      lbl_80175484
	bl       startPropera__Q24Game5OnyonFv
	b        lbl_80175484

lbl_80175474: // 0x68
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 4
	bne      lbl_80175484
	bl       stopPropera__Q24Game5OnyonFv

lbl_80175484:
	psq_l    f31, 152(r1), 0, qr0
	lwz      r0, 0xa4(r1)
	lfd      f31, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	lwz      r29, 0x84(r1)
	lwz      r28, 0x80(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000034
//  */
// void Onyon::openUFO(void)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000068
//  */
// void Onyon::closeUFO(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	801754AC
 * Size:	0000E4
 */
bool Onyon::isSuckReady()
{
	if (m_onyonType == ONYON_TYPE_SHIP) {
		if (m_suckState == SUCKSTATE_Opened || m_suckState == SUCKSTATE_GetPellet || m_suckState == SUCKSTATE_IdleOpen) {
			return true;
		} else if (m_suckState == SUCKSTATE_IdleClosed) {
			m_animator.startAnim(0, this);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->_2F & 1) {
				sound = PSSE_EV_PODGOLD_OPEN;
			} // debt repayed
			startSound(sound);

			m_animSpeed = 30.0f;
			m_suckState = SUCKSTATE_Opening;
			m_ufoPodOpen->create(nullptr);
			m_suckTimer = 0.0f;
		}
		return false;
	} else {
		return true;
	}
}

/*
 * --INFO--
 * Address:	80175590
 * Size:	000028
 * Matches!
 * Can either be C-style BOOL or weird if/else with temp and casting.
 */
BOOL Onyon::isSuckArriveWait() { return m_onyonType == ONYON_TYPE_SHIP ? m_suckState == SUCKSTATE_Closing : FALSE; }

/*
 * --INFO--
 * Address:	801755B8
 * Size:	00068C
 */
void Onyon::setType(int type)
{
	m_onyonType = type;
	setupTevRegAnim(type);
	m_container    = nullptr;
	m_containerAct = nullptr;
	m_ufoSpot      = nullptr;
	m_ufoSpotAct01 = nullptr;
	m_ufoPodOpen   = nullptr;
	SysShape::Joint* jnt;
	switch (m_onyonType) {
	case ONYON_TYPE_BLUE:
	case ONYON_TYPE_RED:
	case ONYON_TYPE_YELLOW:
		m_container    = new efx::Container;
		m_containerAct = new efx::ContainerAct;
		break;
	case ONYON_TYPE_POD:
		jnt = m_model->getJoint("pot_ctr");
		P2ASSERTLINE(788, jnt != nullptr);
		m_podOpenA = new ::efx::TPodOpenA;
		m_podOpenB = new ::efx::TPodOpenB;
		m_podSpot  = new ::efx::TPodSpot;
		m_podKira  = new ::efx::TPodKira;
		m_podKira->create(0);
		m_podOpenB->create(0);
		m_podSpot->create(0);
		::efx::Arg arg = ::efx::Arg(m_position);
		m_podOpenA->create(&arg);
		break;
	case ONYON_TYPE_SHIP:
		jnt              = m_model->getJoint("start1");
		m_ufoSpot        = new ::efx::TUfoSpot;
		m_ufoPodOpenSuck = new ::efx::TUfoPodOpenSuck;
		m_ufoSpotAct01   = new ::efx::TUfoSpotact_ver01;
		jnt              = m_model->getJoint("pmotion3");
		m_ufoPodOpen     = new ::efx::TUfoPodOpen;
		jnt              = m_model->getJoint("in1");
		m_ufoGasIn       = new ::efx::TUfoGasIn;
		jnt              = m_model->getJoint("out");
		m_ufoGasOut      = new ::efx::TUfoGasOut;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, lbl_8047E620@ha
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	addi     r29, r5, lbl_8047E620@l
	stw      r28, 0x20(r1)
	sth      r4, 0x22e(r3)
	lhz      r4, 0x22e(r3)
	bl       setupTevRegAnim__Q24Game5OnyonFi
	li       r0, 0
	stw      r0, 0x1ec(r31)
	stw      r0, 0x1f0(r31)
	stw      r0, 0x208(r31)
	stw      r0, 0x20c(r31)
	stw      r0, 0x210(r31)
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_801756BC
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80175688
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx8TForever@ha
	stw      r0, 4(r3)
	addi     r6, r4, __vt__Q23efx8TForever@l
	lis      r4, __vt__Q23efx9Container@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9Container@l
	li       r8, 0
	li       r7, 0x105
	stw      r0, 4(r3)
	addi     r5, r6, 0x14
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80175688:
	stw      r3, 0x1ec(r31)
	li       r3, 0x24
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801756B4
	li       r4, 0xf8
	li       r5, 0xf9
	bl       __ct__Q23efx9TForever2FUsUs
	lis      r3, __vt__Q23efx12ContainerAct@ha
	addi     r0, r3, __vt__Q23efx12ContainerAct@l
	stw      r0, 0(r28)

lbl_801756B4:
	stw      r28, 0x1f0(r31)
	b        lbl_80175C24

lbl_801756BC:
	cmplwi   r0, 4
	bne      lbl_801759A0
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_80518A34@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	mr       r0, r3
	li       r3, 0x2c
	mr       r28, r0
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80175710
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	mr       r3, r30
	li       r5, 0x1cc
	li       r6, 0x1cd
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx8TUfoSpot@ha
	addi     r0, r3, __vt__Q23efx8TUfoSpot@l
	stw      r0, 0(r30)

lbl_80175710:
	stw      r30, 0x208(r31)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801757A0
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r30)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r30)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx15TUfoPodOpenSuck@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r30)
	addi     r4, r4, __vt__Q23efx15TUfoPodOpenSuck@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r30)
	addi     r6, r7, 0x14
	li       r5, 0x1c8
	addi     r0, r4, 0x14
	stw      r9, 8(r30)
	sth      r8, 0xc(r30)
	stb      r9, 0xe(r30)
	stw      r7, 0(r30)
	stw      r6, 4(r30)
	stw      r3, 0x10(r30)
	sth      r5, 0xc(r30)
	stw      r4, 0(r30)
	stw      r0, 4(r30)

lbl_801757A0:
	stw      r30, 0x214(r31)
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801757DC
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	mr       r3, r30
	li       r5, 0x1ca
	li       r6, 0x1cb
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx17TUfoSpotact_ver01@ha
	addi     r0, r3, __vt__Q23efx17TUfoSpotact_ver01@l
	stw      r0, 0(r30)

lbl_801757DC:
	stw      r30, 0x20c(r31)
	addi     r4, r29, 0x54
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	mr       r30, r3
	li       r3, 0x2c
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80175828
	mr       r3, r30
	bl       getWorldMatrix__Q28SysShape5JointFv
	mr       r4, r3
	mr       r3, r28
	li       r5, 0x1c6
	li       r6, 0x1c7
	bl       __ct__Q23efx10TChaseMtx2FPA4_fUsUs
	lis      r3, __vt__Q23efx11TUfoPodOpen@ha
	addi     r0, r3, __vt__Q23efx11TUfoPodOpen@l
	stw      r0, 0(r28)

lbl_80175828:
	stw      r28, 0x210(r31)
	addi     r4, r2, lbl_80518A3C@sda21
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r28, r3, r3
	bne      lbl_80175854
	addi     r3, r29, 0x18
	addi     r5, r29, 0x60
	li       r4, 0x30e
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80175854:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_801758E0
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r30)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r30)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx9TUfoGasIn@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r30)
	addi     r4, r4, __vt__Q23efx9TUfoGasIn@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r30)
	addi     r6, r7, 0x14
	li       r5, 0x1c2
	addi     r0, r4, 0x14
	stw      r9, 8(r30)
	sth      r8, 0xc(r30)
	stb      r9, 0xe(r30)
	stw      r7, 0(r30)
	stw      r6, 4(r30)
	stw      r3, 0x10(r30)
	sth      r5, 0xc(r30)
	stw      r4, 0(r30)
	stw      r0, 4(r30)

lbl_801758E0:
	stw      r30, 0x218(r31)
	addi     r4, r2, lbl_80518A40@sda21
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r30, r3, r3
	bne      lbl_8017590C
	addi     r3, r29, 0x18
	addi     r5, r29, 0x60
	li       r4, 0x310
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017590C:
	li       r3, 0x14
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_80175998
	mr       r3, r30
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r28)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r28)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx10TUfoGasOut@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r28)
	addi     r4, r4, __vt__Q23efx10TUfoGasOut@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r28)
	addi     r6, r7, 0x14
	li       r5, 0x1c3
	addi     r0, r4, 0x14
	stw      r9, 8(r28)
	sth      r8, 0xc(r28)
	stb      r9, 0xe(r28)
	stw      r7, 0(r28)
	stw      r6, 4(r28)
	stw      r3, 0x10(r28)
	sth      r5, 0xc(r28)
	stw      r4, 0(r28)
	stw      r0, 4(r28)

lbl_80175998:
	stw      r28, 0x21c(r31)
	b        lbl_80175C24

lbl_801759A0:
	cmplwi   r0, 3
	bne      lbl_80175C24
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_80518A44@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	or.      r28, r3, r3
	bne      lbl_801759D0
	addi     r3, r29, 0x18
	addi     r5, r29, 0x60
	li       r4, 0x314
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801759D0:
	li       r3, 0x10
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_80175A48
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r3)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx8TForever@ha
	stw      r0, 4(r3)
	addi     r6, r4, __vt__Q23efx8TForever@l
	lis      r4, __vt__Q23efx9TPodOpenA@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r3)
	addi     r4, r4, __vt__Q23efx9TPodOpenA@l
	li       r8, 0
	li       r7, 0x181
	stw      r0, 4(r3)
	addi     r5, r6, 0x14
	addi     r0, r4, 0x14
	stw      r8, 8(r3)
	sth      r7, 0xc(r3)
	stb      r8, 0xe(r3)
	stw      r6, 0(r3)
	stw      r5, 4(r3)
	stw      r4, 0(r3)
	stw      r0, 4(r3)

lbl_80175A48:
	stw      r3, 0x1f8(r31)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80175AD8
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r30)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r30)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx9TPodOpenB@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r30)
	addi     r4, r4, __vt__Q23efx9TPodOpenB@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r30)
	addi     r6, r7, 0x14
	li       r5, 0x182
	addi     r0, r4, 0x14
	stw      r9, 8(r30)
	sth      r8, 0xc(r30)
	stb      r9, 0xe(r30)
	stw      r7, 0(r30)
	stw      r6, 4(r30)
	stw      r3, 0x10(r30)
	sth      r5, 0xc(r30)
	stw      r4, 0(r30)
	stw      r0, 4(r30)

lbl_80175AD8:
	stw      r30, 0x1fc(r31)
	li       r3, 0x34
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_80175B0C
	addi     r4, r31, 0x19c
	addi     r5, r31, 0x228
	li       r6, 0x183
	li       r7, 0x184
	bl       "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
	lis      r3, __vt__Q23efx8TPodSpot@ha
	addi     r0, r3, __vt__Q23efx8TPodSpot@l
	stw      r0, 0(r29)

lbl_80175B0C:
	stw      r29, 0x200(r31)
	li       r3, 0x14
	bl       __nw__FUl
	or.      r30, r3, r3
	beq      lbl_80175B9C
	mr       r3, r28
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r5, __vt__18JPAEmitterCallBack@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx5TSync@ha
	stw      r0, 0(r30)
	addi     r0, r5, __vt__18JPAEmitterCallBack@l
	addi     r5, r4, __vt__Q23efx5TSync@l
	lis      r4, __vt__Q23efx9TChaseMtx@ha
	stw      r0, 4(r30)
	addi     r7, r4, __vt__Q23efx9TChaseMtx@l
	lis      r4, __vt__Q23efx8TPodKira@ha
	addi     r0, r5, 0x14
	stw      r5, 0(r30)
	addi     r4, r4, __vt__Q23efx8TPodKira@l
	li       r9, 0
	li       r8, 0x2b2
	stw      r0, 4(r30)
	addi     r6, r7, 0x14
	li       r5, 0x180
	addi     r0, r4, 0x14
	stw      r9, 8(r30)
	sth      r8, 0xc(r30)
	stb      r9, 0xe(r30)
	stw      r7, 0(r30)
	stw      r6, 4(r30)
	stw      r3, 0x10(r30)
	sth      r5, 0xc(r30)
	stw      r4, 0(r30)
	stw      r0, 4(r30)

lbl_80175B9C:
	stw      r30, 0x204(r31)
	li       r4, 0
	lwz      r3, 0x204(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1fc(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x200(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r4, r1, 8
	addi     r0, r3, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80175C24:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game
namespace efx {

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000080
//  */
// TChasePosYRot2::~TChasePosYRot2(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80175C44
 * Size:	000084
 */
TChasePosYRot::~TChasePosYRot(void)
{
	/*
stwu     r1, -0x10(r1)
mflr     r0
stw      r0, 0x14(r1)
stw      r31, 0xc(r1)
mr       r31, r4
stw      r30, 8(r1)
or.      r30, r3, r3
beq      lbl_80175CAC
lis      r3, __vt__Q23efx13TChasePosYRot@ha
addi     r3, r3, __vt__Q23efx13TChasePosYRot@l
stw      r3, 0(r30)
addi     r0, r3, 0x14
stw      r0, 4(r30)
beq      lbl_80175C9C
lis      r4, __vt__Q23efx5TSync@ha
addi     r3, r30, 4
addi     r5, r4, __vt__Q23efx5TSync@l
li       r4, 0
stw      r5, 0(r30)
addi     r0, r5, 0x14
stw      r0, 4(r30)
bl       __dt__18JPAEmitterCallBackFv

lbl_80175C9C:
extsh.   r0, r31
ble      lbl_80175CAC
mr       r3, r30
bl       __dl__FPv

lbl_80175CAC:
lwz      r0, 0x14(r1)
mr       r3, r30
lwz      r31, 0xc(r1)
lwz      r30, 8(r1)
mtlr     r0
addi     r1, r1, 0x10
blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000080
//  */
// TForever2::~TForever2(void)
// {
// 	// UNUSED FUNCTION
// }

} // namespace efx
namespace Game {

/*
 * --INFO--
 * Address:	80175D4C
 * Size:	0000D0
 */
void Onyon::setupTevRegAnim(int type)
{
	if (m_onyonType <= ONYON_TYPE_YELLOW) {
		m_matAnim1->start(&ItemOnyon::mgr->m_onyonTevAnim[type]);
		m_onyonType = type;
	} else if (m_onyonType == ONYON_TYPE_SHIP) {
		m_matAnim1->start(&ItemOnyon::mgr->m_ufoTevAnim[0]);
		m_matAnim2 = new Sys::MatLoopAnimator;
		m_matAnim2->start(&ItemOnyon::mgr->m_ufoTevAnim[1]);
	}
}

/*
 * --INFO--
 * Address:	80175E1C
 * Size:	000074
 */
bool Onyon::stimulate(Interaction& act)
{
	if (!act.actCommon(this))
		return false;
	else
		return act.actOnyon(this);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r4, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80175E74
	mr       r3, r31
	mr       r4, r30
	lwz      r12, 0(r31)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80175E78

lbl_80175E74:
	li       r3, 0

lbl_80175E78:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80175E90
 * Size:	000158
 */
bool InteractSuckArrive::actOnyon(Onyon* item)
{
	if (item->m_onyonType == ONYON_TYPE_SHIP) {
		SysShape::Joint* jnt = item->m_model->getJoint("pmotion3");
		if (jnt != nullptr) {
			efx::TUfoPodSuck efx;
			efx.create(nullptr);
		}
		item->m_suckTimer = 0.0f;
		if (item->m_suckState == Onyon::SUCKSTATE_IdleClosed) {
			SysShape::MotionListener* mlisten = item;
			item->m_animator.startAnim(0, mlisten);

			SoundID sound = PSSE_EV_POD_OPEN;
			if (playData->_2F & 1) // debt repayed
				sound = PSSE_EV_PODGOLD_OPEN;
			item->startSound(sound);
			item->m_animSpeed = 30.0f;
			item->m_suckState = Onyon::SUCKSTATE_Opening;
			item->m_ufoPodOpen->create(0);
			return true;
		}
		if (item->SUCKSTATE_Closing) {
			JUT_PANICLINE(859, "damedayo !: arrive  ufoSuckState=%d\n", item->m_suckState);
		}
	}
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r3, lbl_8047E620@ha
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	addi     r30, r3, lbl_8047E620@l
	lhz      r0, 0x22e(r4)
	cmplwi   r0, 4
	bne      lbl_80175FCC
	lwz      r3, 0x174(r31)
	addi     r4, r30, 0x54
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_80175F24
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx11TUfoPodSuck@ha
	li       r7, 0x1c9
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx11TUfoPodSuck@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg

lbl_80175F24:
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x244(r31)
	lbz      r6, 0x240(r31)
	cmplwi   r6, 5
	bne      lbl_80175FB0
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_80175F48
	addi     r5, r31, 0x178

lbl_80175F48:
	addi     r3, r31, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x3836
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80175F6C
	li       r4, 0x382f

lbl_80175F6C:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r0, 0
	li       r4, 0
	stfs     f0, 0x1d4(r31)
	stb      r0, 0x240(r31)
	lwz      r3, 0x210(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80175FD0

lbl_80175FB0:
	cmplwi   r6, 4
	bne      lbl_80175FCC
	addi     r3, r30, 0x18
	addi     r5, r30, 0x6c
	li       r4, 0x35b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80175FCC:
	li       r3, 0

lbl_80175FD0:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80175FE8
 * Size:	000008
 */
bool Onyon::needShadow() { return false; }

/*
 * --INFO--
 * Address:	80175FF0
 * Size:	0000A4
 */
void Onyon::getShadowParam(ShadowParam& param)
{
	param.m_position = getPosition();
	if (m_onyonType == ONYON_TYPE_POD) {
		param.m_position.y += 80.0f;
		param.m_boundingSphere.m_radius = 100.0f;
		param._1C                       = 27.0f; // shadow size
	}
	param.m_boundingSphere.m_position = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	80176094
 * Size:	000034
 */
bool Onyon::sound_culling() { return (m_onyonType <= ONYON_TYPE_YELLOW) ? Creature::sound_culling() : false; }

/*
 * --INFO--
 * Address:	801760C8
 * Size:	000DBC
 */
bool InteractSuckDone::actOnyon(Onyon* item)
{
	// this right here is what causes the glitch to break the seeds from stuff brought to onions during cutscenes
	if (item->isMovieActor() && !item->isMovieExtra()) {
		return false;
	}
	P2ASSERTLINE(899, m_creature->isPellet());
	SysShape::MotionListener* mlisten;
	Pellet* pellet = static_cast<Pellet*>(m_creature);
	switch (item->m_onyonType) {
	case ONYON_TYPE_BLUE:
	case ONYON_TYPE_RED:
	case ONYON_TYPE_YELLOW:
		mlisten = item;
		item->m_animator.startAnim(3, mlisten);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		break;
	case ONYON_TYPE_POD:
		mlisten = item;
		item->m_animator.startAnim(2, mlisten);
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		efx::TPodGepu podefx;
		efx::Arg arg(item->m_position);
		podefx.create(&arg);
		if (moviePlayer && moviePlayer->m_demoState == 0) {
			Vector3f pos = item->getPosition();
			int money    = pellet->m_config->m_params.m_money.m_data;
			if (money > 0 && pellet->getKind() == 1 || pellet->getKind() == 3 || pellet->getKind() == 4) {
				pos.x += 0.0f; // bravo vince
				pos.z += 0.0f;
				pos.y += 80.0f;
				carryInfoMgr->appearPoko(pos, money);
			}
		}
		break;
	case ONYON_TYPE_SHIP:
		mlisten = item;
		item->m_animator.startAnim(0, mlisten);
		item->m_animator.setFrameByKeyType(0);
		item->m_suckState = Onyon::SUCKSTATE_GetPellet;
		item->m_animSpeed = 30.0f;
		item->startSound(PSSE_EV_HOME_PELLET_FINISH);
		item->m_suckTimer    = 0.0f;
		SysShape::Joint* jnt = item->m_model->getJoint("pmotion3");
		efx::TUfoPodGepu ufoefx;
		ufoefx.m_mtx = jnt->getWorldMatrix();
		ufoefx.create(nullptr);
		if (moviePlayer && moviePlayer->m_demoState == 0) {
			Vector3f pos = item->getPosition();
			int money    = pellet->m_config->m_params.m_money.m_data;
			pos.x += 0.0f; // this isnt 0.0, its actual math may beyond my sanity
			pos.z += 0.0f;
			pos.y += 117.0f;
			if (money > 0) {
				carryInfoMgr->appearPoko(pos, money);
			}
		}
		break;
	}

	item->m_pikminType = item->m_onyonType;
	if (item->m_onyonType < ONYON_TYPE_POD) {
		SysShape::Joint* jnt = item->m_model->getJoint("body_l");
		if (jnt) {
			::efx::TOnyonEatAB onyonefx;
			onyonefx.m_mtx = jnt->getWorldMatrix();
			onyonefx.create(nullptr);
		}

		/*
		if (gameSystem->isChallengeMode() && !strcmp(pellet->m_config->m_params.m_name.m_name, "key")) {
		    InteractGotKey act(item);
		    Iterator<ItemBigFountain::Item> iterFountain(ItemBigFountain::mgr);
		    CI_LOOP(iterFountain)
		    {
		        Game::ItemBigFountain::Item* cFountain = (*iterFountain);
		        cFountain->stimulate(act);
		    }
		    Iterator<ItemHole::Item> iterHole(ItemHole::mgr);
		    CI_LOOP(iterHole)
		    {
		        Game::ItemHole::Item* cHole = (*iterHole);
		        cHole->stimulate(act);
		    }
		}
		*/
	}

	/*
	stwu     r1, -0x140(r1)
	mflr     r0
	stw      r0, 0x144(r1)
	stmw     r27, 0x12c(r1)
	mr       r30, r4
	lis      r4, lbl_8047E620@ha
	mr       r29, r3
	mr       r3, r30
	addi     r28, r4, lbl_8047E620@l
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176128
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176128
	li       r3, 0
	b        lbl_80176E70

lbl_80176128:
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176158
	addi     r3, r28, 0x18
	addi     r5, r28, 0x60
	li       r4, 0x383
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80176158:
	lhz      r0, 0x22e(r30)
	lwz      r31, 4(r29)
	cmplwi   r0, 2
	bgt      lbl_801761A0
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_80176178
	addi     r5, r30, 0x178

lbl_80176178:
	addi     r3, r30, 0x1a8
	li       r4, 3
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	mr       r3, r30
	li       r4, 0x3805
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	b        lbl_80176550

lbl_801761A0:
	cmplwi   r0, 3
	bne      lbl_8017635C
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_801761B8
	addi     r5, r30, 0x178

lbl_801761B8:
	addi     r3, r30, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	mr       r3, r30
	li       r4, 0x3805
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx5TBase@ha
	li       r5, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r3, __vt__Q23efx8TPodGepu@ha
	li       r7, 0x17e
	stw      r0, 0xd4(r1)
	addi     r0, r3, __vt__Q23efx8TPodGepu@l
	li       r6, 0x17f
	mr       r4, r30
	sth      r7, 0xd8(r1)
	addi     r3, r1, 0x5c
	sth      r6, 0xda(r1)
	stw      r5, 0xdc(r1)
	stw      r5, 0xe0(r1)
	stw      r0, 0xd4(r1)
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x5c(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	lfs      f1, 0x60(r1)
	addi     r0, r3, __vt__Q23efx3Arg@l
	lfs      f0, 0x64(r1)
	addi     r3, r1, 0xd4
	stw      r0, 0xc4(r1)
	addi     r4, r1, 0xc4
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176550
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80176550
	mr       r4, r30
	addi     r3, r1, 0x50
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x50(r1)
	lfs      f1, 0x54(r1)
	lfs      f0, 0x58(r1)
	stfs     f2, 0xb8(r1)
	stfs     f1, 0xbc(r1)
	stfs     f0, 0xc0(r1)
	lwz      r3, 0x35c(r31)
	lwz      r28, 0x170(r3)
	cmpwi    r28, 0
	ble      lbl_80176550
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_8017631C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8017631C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80176550

lbl_8017631C:
	lfs      f1, 0xb8(r1)
	mr       r5, r28
	lfs      f4, lbl_80518A2C@sda21(r2)
	addi     r4, r1, 0xb8
	lfs      f0, 0xc0(r1)
	fadds    f3, f1, f4
	lfs      f2, 0xbc(r1)
	lfs      f1, lbl_80518A4C@sda21(r2)
	fadds    f0, f0, f4
	lwz      r3, carryInfoMgr@sda21(r13)
	fadds    f1, f2, f1
	stfs     f3, 0xb8(r1)
	stfs     f1, 0xbc(r1)
	stfs     f0, 0xc0(r1)
	bl       "appearPoko__12CarryInfoMgrFRC10Vector3<f>i"
	b        lbl_80176550

lbl_8017635C:
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_8017636C
	addi     r5, r30, 0x178

lbl_8017636C:
	addi     r3, r30, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	addi     r3, r30, 0x1a8
	li       r4, 0
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl
	li       r0, 2
	lfs      f0, lbl_80518A30@sda21(r2)
	stb      r0, 0x240(r30)
	mr       r3, r30
	li       r4, 0x3805
	stfs     f0, 0x1d4(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r28, 0x54
	stfs     f0, 0x244(r30)
	lwz      r3, 0x174(r30)
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xf8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx11TUfoPodGepu@ha
	stw      r0, 0xf8(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0x1c4
	li       r5, 0x1c5
	stw      r0, 0xf8(r1)
	addi     r0, r4, __vt__Q23efx11TUfoPodGepu@l
	li       r4, 0
	stw      r3, 0x108(r1)
	addi     r3, r1, 0xf8
	sth      r7, 0xfc(r1)
	sth      r5, 0xfe(r1)
	stw      r6, 0x100(r1)
	stw      r6, 0x104(r1)
	stw      r0, 0xf8(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176550
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_80176550
	mr       r4, r30
	addi     r3, r1, 0x44
	lwz      r12, 0(r30)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	mr       r3, r30
	lfs      f1, 0x48(r1)
	lfs      f0, 0x4c(r1)
	stfs     f2, 0xac(r1)
	stfs     f1, 0xb0(r1)
	stfs     f0, 0xb4(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80176490
	fneg     f2, f2

lbl_80176490:
	lfs      f3, lbl_80518A60@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f5, lbl_80518A5C@sda21(r2)
	fcmpo    cr0, f1, f0
	lfs      f4, 0xac(r1)
	fctiwz   f0, f2
	stfd     f0, 0x110(r1)
	lwz      r0, 0x114(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f6, f5, f0
	bge      lbl_801764F4
	lfs      f0, lbl_80518A64@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x118(r1)
	lwz      r0, 0x11c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8017650C

lbl_801764F4:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x120(r1)
	lwz      r0, 0x124(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8017650C:
	fmuls    f3, f5, f0
	lfs      f0, 0xb4(r1)
	lfs      f2, 0xb0(r1)
	lfs      f1, lbl_80518A68@sda21(r2)
	fadds    f0, f0, f6
	fadds    f3, f4, f3
	fadds    f1, f2, f1
	stfs     f0, 0xb4(r1)
	stfs     f3, 0xac(r1)
	stfs     f1, 0xb0(r1)
	lwz      r3, 0x35c(r31)
	lwz      r5, 0x170(r3)
	cmpwi    r5, 0
	ble      lbl_80176550
	lwz      r3, carryInfoMgr@sda21(r13)
	addi     r4, r1, 0xac
	bl       "appearPoko__12CarryInfoMgrFRC10Vector3<f>i"

lbl_80176550:
	lhz      r0, 0x22e(r30)
	sth      r0, 0x230(r30)
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 2
	bgt      lbl_801765D8
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_80518A6C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_801765D8
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx8TSimple2@ha
	stw      r0, 0xe4(r1)
	addi     r0, r4, __vt__Q23efx8TSimple2@l
	lis      r5, __vt__Q23efx11TSimpleMtx2@ha
	lis      r4, __vt__Q23efx11TOnyonEatAB@ha
	stw      r0, 0xe4(r1)
	addi     r0, r5, __vt__Q23efx11TSimpleMtx2@l
	li       r7, 0xfe
	li       r5, 0xff
	stw      r0, 0xe4(r1)
	addi     r0, r4, __vt__Q23efx11TOnyonEatAB@l
	li       r4, 0
	stw      r3, 0xf4(r1)
	addi     r3, r1, 0xe4
	sth      r7, 0xe8(r1)
	sth      r5, 0xea(r1)
	stw      r6, 0xec(r1)
	stw      r6, 0xf0(r1)
	stw      r0, 0xe4(r1)
	bl       create__Q23efx11TSimpleMtx2FPQ23efx3Arg

lbl_801765D8:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_801765F4
	cmpwi    r0, 3
	bne      lbl_801765F8

lbl_801765F4:
	li       r3, 1

lbl_801765F8:
	clrlwi.  r0, r3, 0x18
	beq      lbl_801769EC
	lwz      r3, 0x35c(r31)
	addi     r4, r2, lbl_80518A74@sda21
	lwz      r3, 0x40(r3)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801769EC
	lis      r4, __vt__Q24Game11Interaction@ha
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	addi     r0, r4, __vt__Q24Game11Interaction@l
	stw      r30, 0x34(r1)
	lis      r4, __vt__Q24Game14InteractGotKey@ha
	cmplwi   r3, 0
	stw      r0, 0x30(r1)
	addi     r0, r4, __vt__Q24Game14InteractGotKey@l
	stw      r0, 0x30(r1)
	beq      lbl_80176644
	addi     r3, r3, 0x30

lbl_80176644:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0xa8(r1)
	cmplwi   r0, 0
	stw      r4, 0x9c(r1)
	stw      r0, 0xa0(r1)
	stw      r3, 0xa4(r1)
	bne      lbl_80176680
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767F0

lbl_80176680:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801766EC

lbl_80176698:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801767F0
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)

lbl_801766EC:
	lwz      r12, 0x9c(r1)
	addi     r3, r1, 0x9c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176698
	b        lbl_801767F0

lbl_8017670C:
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 0x30
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0xa8(r1)
	cmplwi   r0, 0
	bne      lbl_80176760
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767F0

lbl_80176760:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)
	b        lbl_801767D4

lbl_80176780:
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0xa8(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801767F0
	lwz      r3, 0xa4(r1)
	lwz      r4, 0xa0(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xa0(r1)

lbl_801767D4:
	lwz      r12, 0x9c(r1)
	addi     r3, r1, 0x9c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176780

lbl_801767F0:
	lwz      r3, 0xa4(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xa0(r1)
	cmplw    r4, r3
	bne      lbl_8017670C
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80176820
	addi     r3, r3, 0x30

lbl_80176820:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x98(r1)
	cmplwi   r0, 0
	stw      r4, 0x8c(r1)
	stw      r0, 0x90(r1)
	stw      r3, 0x94(r1)
	bne      lbl_8017685C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769CC

lbl_8017685C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801768C8

lbl_80176874:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801769CC
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_801768C8:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176874
	b        lbl_801769CC

lbl_801768E8:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	addi     r4, r1, 0x30
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x98(r1)
	cmplwi   r0, 0
	bne      lbl_8017693C
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769CC

lbl_8017693C:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)
	b        lbl_801769B0

lbl_8017695C:
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x98(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801769CC
	lwz      r3, 0x94(r1)
	lwz      r4, 0x90(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x90(r1)

lbl_801769B0:
	lwz      r12, 0x8c(r1)
	addi     r3, r1, 0x8c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017695C

lbl_801769CC:
	lwz      r3, 0x94(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x90(r1)
	cmplw    r4, r3
	bne      lbl_801768E8

lbl_801769EC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80176C18
	lwz      r3, lbl_80520E60@sda21(r2)
	addi     r28, r1, 0x28
	lwz      r0, lbl_80520E64@sda21(r2)
	li       r27, 0
	stw      r3, 0x28(r1)
	lwz      r3, cBedamaRed__13VsOtakaraName@sda21(r13)
	stw      r0, 0x2c(r1)
	lwz      r0, cBedamaBlue__13VsOtakaraName@sda21(r13)
	stw      r3, 0x28(r1)
	stw      r0, 0x2c(r1)

lbl_80176A24:
	lwz      r4, 0x35c(r31)
	lwz      r3, 0(r28)
	lwz      r4, 0x40(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80176B5C
	lhz      r0, 0x22e(r30)
	subfic   r0, r0, 1
	cmpw     r27, r0
	bne      lbl_80176B18
	li       r0, 1
	mr       r4, r30
	stb      r0, 8(r29)
	addi     r3, r1, 0x38
	bl       getFlagSetPos__Q24Game5OnyonFv
	lfs      f2, 0x38(r1)
	mr       r3, r31
	lfs      f1, 0x3c(r1)
	lfs      f0, 0x40(r1)
	stfs     f2, 0x80(r1)
	stfs     f1, 0x84(r1)
	stfs     f0, 0x88(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f3, lbl_80518A7C@sda21(r2)
	mr       r3, r31
	lfs      f2, lbl_80518A78@sda21(r2)
	addi     r4, r1, 0x80
	lfs      f0, 0x84(r1)
	li       r5, 0
	fmadds   f1, f3, f1, f2
	fadds    f0, f0, f1
	stfs     f0, 0x84(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r31
	lfs      f0, lbl_80518A80@sda21(r2)
	addi     r4, r1, 0x74
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	stfs     f1, 0x7c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 1
	lwz      r12, 0(r31)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       finish_carrymotion__Q24Game6PelletFv
	lwz      r3, 0x3c8(r31)
	mr       r4, r31
	li       r5, 5
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	b        lbl_80176B5C

lbl_80176B18:
	lis      r4, __vt__Q24Game11GameMessage@ha
	lis      r3, __vt__Q24Game27GameMessageVsBattleFinished@ha
	addi     r4, r4, __vt__Q24Game11GameMessage@l
	subfic   r0, r27, 1
	stw      r4, 0x20(r1)
	addi     r5, r3, __vt__Q24Game27GameMessageVsBattleFinished@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	addi     r4, r1, 0x20
	stw      r5, 0x20(r1)
	stw      r0, 0x24(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176B5C:
	addi     r27, r27, 1
	addi     r28, r28, 4
	cmpwi    r27, 2
	blt      lbl_80176A24
	lbz      r0, 0x32c(r31)
	cmplwi   r0, 6
	bne      lbl_80176BC8
	lhz      r4, 0x22e(r30)
	lis      r3, __vt__Q24Game11GameMessage@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game23GameMessageVsGetOtakara@ha
	stw      r0, 0x68(r1)
	subfic   r5, r4, 1
	addi     r3, r3, __vt__Q24Game23GameMessageVsGetOtakara@l
	li       r0, 1
	stw      r3, 0x68(r1)
	addi     r4, r1, 0x68
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r5, 0x6c(r1)
	stw      r0, 0x70(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176BC8:
	cmplwi   r0, 3
	bne      lbl_80176C18
	lhz      r4, 0x22e(r30)
	lis      r3, __vt__Q24Game11GameMessage@ha
	addi     r0, r3, __vt__Q24Game11GameMessage@l
	lis      r3, __vt__Q24Game20GameMessageVsGotCard@ha
	stw      r0, 0x18(r1)
	subfic   r5, r4, 1
	addi     r0, r3, __vt__Q24Game20GameMessageVsGotCard@l
	lwz      r3, gameSystem__4Game@sda21(r13)
	stw      r0, 0x18(r1)
	addi     r4, r1, 0x18
	stw      r5, 0x1c(r1)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176C18:
	lwz      r5, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r5)
	cmpwi    r0, 1
	beq      lbl_80176C60
	lbz      r0, 0x48(r5)
	lwz      r3, 0x35c(r31)
	cmplwi   r0, 0
	lwz      r4, 0x170(r3)
	beq      lbl_80176C50
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r0, 0xec(r3)
	add      r0, r0, r4
	stw      r0, 0xec(r3)
	b        lbl_80176C60

lbl_80176C50:
	lwz      r3, 0x58(r5)
	lwz      r0, 0x48(r3)
	add      r0, r0, r4
	stw      r0, 0x48(r3)

lbl_80176C60:
	lwz      r4, gameSystem__4Game@sda21(r13)
	li       r3, 0
	lwz      r0, 0x44(r4)
	cmpwi    r0, 2
	beq      lbl_80176C7C
	cmpwi    r0, 3
	bne      lbl_80176C80

lbl_80176C7C:
	li       r3, 1

lbl_80176C80:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80176CAC
	lwz      r3, 0x58(r4)
	lwz      r4, 0x35c(r31)
	lwz      r12, 0(r3)
	lwz      r4, 0x170(r4)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80176E70

lbl_80176CAC:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80176D1C
	lhz      r29, 0x43e(r31)
	mr       r3, r31
	addi     r4, r1, 0x14
	addi     r5, r1, 0x10
	bl       getPikiBirthCount__Q24Game6PelletFRiRi
	lhz      r3, 0x22e(r30)
	cmplwi   r3, 3
	beq      lbl_80176CF4
	clrlwi   r0, r29, 0x10
	cmplw    r0, r3
	bne      lbl_80176D08

lbl_80176CF4:
	lhz      r3, 0x22c(r30)
	lwz      r0, 0x10(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176D08:
	lhz      r3, 0x22c(r30)
	lwz      r0, 0x14(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176D1C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80176D7C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	beq      lbl_80176D7C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80176E58

lbl_80176D7C:
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 3
	bne      lbl_80176DA8
	lwz      r3, 0x35c(r31)
	lwz      r0, 0x170(r3)
	cmpwi    r0, 0
	ble      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       obtainPellet_Cave__Q24Game8PlayDataFPQ24Game6Pellet
	b        lbl_80176E6C

lbl_80176DA8:
	cmplwi   r0, 4
	bne      lbl_80176E14
	lwz      r3, 0x35c(r31)
	lwz      r0, 0x170(r3)
	cmpwi    r0, 0
	ble      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	bl       obtainPellet_Main__Q24Game8PlayDataFPQ24Game6Pellet
	lwz      r4, 0x35c(r31)
	addi     r3, r2, lbl_80518A84@sda21
	lwz      r4, 0x180(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80176E6C
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r4, r3, r3
	beq      lbl_80176E6C
	lwz      r3, playData__4Game@sda21(r13)
	lwz      r4, 0x48(r4)
	bl       incGroundOtakara__Q24Game8PlayDataFi
	b        lbl_80176E6C

lbl_80176E14:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80176E6C
	mr       r3, r31
	addi     r4, r1, 0xc
	addi     r5, r1, 8
	bl       getPikiBirthCount__Q24Game6PelletFRiRi
	lhz      r3, 0x22c(r30)
	lwz      r0, 8(r1)
	add      r0, r3, r0
	sth      r0, 0x22c(r30)
	b        lbl_80176E6C

lbl_80176E58:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl

lbl_80176E6C:
	li       r3, 1

lbl_80176E70:
	lmw      r27, 0x12c(r1)
	lwz      r0, 0x144(r1)
	mtlr     r0
	addi     r1, r1, 0x140
	blr
	*/
}

/*
 * --INFO--
 * Address:	80176E84
 * Size:	00000C
 */
void Onyon::startPropera(void)
{
	/*
	lfs      f0, lbl_80518A5C@sda21(r2)
	stfs     f0, 0x25c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80176E90
 * Size:	00000C
 */
void Onyon::stopPropera(void)
{
	/*
	lfs      f0, lbl_80518A88@sda21(r2)
	stfs     f0, 0x25c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80176E9C
 * Size:	00016C
 */
void Onyon::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_80176FC0
	mr       r3, r31
	li       r4, 0
	bl       initPrimDraw__8GraphicsFP7Matrixf
	mr       r4, r30
	addi     r3, r1, 0x14
	bl       getInStart_UFO__Q24Game5OnyonFv
	lfs      f1, 0x14(r1)
	li       r5, 0
	lfs      f2, 0x18(r1)
	li       r0, 0xff
	lfs      f0, 0x1c(r1)
	mr       r3, r31
	stfs     f1, 0x2c(r1)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_80518A8C@sda21(r2)
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	stb      r5, 0x84(r31)
	stb      r0, 0x85(r31)
	stb      r5, 0x86(r31)
	stb      r0, 0x87(r31)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	mr       r4, r30
	addi     r3, r1, 8
	bl       getOutStart_UFO__Q24Game5OnyonFv
	lfs      f1, 8(r1)
	li       r6, 0x64
	lfs      f2, 0xc(r1)
	li       r5, 0xff
	lfs      f0, 0x10(r1)
	li       r0, 0
	stfs     f1, 0x2c(r1)
	mr       r3, r31
	lfs      f1, lbl_80518A8C@sda21(r2)
	addi     r4, r1, 0x2c
	stfs     f2, 0x30(r1)
	stfs     f0, 0x34(r1)
	stb      r6, 0x84(r31)
	stb      r5, 0x85(r31)
	stb      r0, 0x86(r31)
	stb      r5, 0x87(r31)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"
	lwz      r3, 0x174(r30)
	addi     r4, r2, lbl_80518A34@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f0, 0xc(r3)
	li       r6, 0x64
	li       r5, 0xff
	li       r0, 0
	stfs     f0, 0x2c(r1)
	addi     r4, r1, 0x2c
	lfs      f1, lbl_80518A5C@sda21(r2)
	lfs      f0, 0x1c(r3)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x2c(r3)
	mr       r3, r31
	stfs     f0, 0x34(r1)
	stb      r6, 0x84(r31)
	stb      r5, 0x85(r31)
	stb      r0, 0x86(r31)
	stb      r5, 0x87(r31)
	bl       "drawSphere__8GraphicsFR10Vector3<f>f"

lbl_80176FC0:
	lfs      f2, lbl_80518A90@sda21(r2)
	mr       r3, r30
	lfs      f1, 0x1a0(r30)
	mr       r4, r31
	lfs      f3, 0x1a4(r30)
	addi     r5, r1, 0x20
	lfs      f0, 0x19c(r30)
	fadds    f1, f2, f1
	stfs     f0, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f3, 0x28(r1)
	bl       "drawLODInfo__Q24Game8CreatureFR8GraphicsR10Vector3<f>"
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000B0
//  */
// Onyon::Onyon(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80177008
 * Size:	000034
 */
void Onyon::onInit(CreatureInitArg*)
{
	/*
	li       r4, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	sth      r4, 0x22c(r3)
	li       r0, 5
	stw      r4, 0x1d8(r3)
	stb      r4, 0x1e0(r3)
	stfs     f0, 0x1dc(r3)
	stw      r4, 0x1e8(r3)
	stw      r4, 0x1e4(r3)
	stw      r4, 0x24c(r3)
	stw      r4, 0x248(r3)
	stb      r0, 0x240(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017703C
 * Size:	000004
 */
void Onyon::onKill(Game::CreatureKillArg*) { }

/*
 * --INFO--
 * Address:	80177040
 * Size:	00023C
 */
void Onyon::onSetPosition(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lwz      r0, mapMgr__4Game@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8017707C
	mr       r3, r0
	addi     r4, r31, 0x19c
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x1a0(r31)

lbl_8017707C:
	lfs      f0, 0x19c(r31)
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f0, 0x28(r1)
	lfs      f0, lbl_80518A94@sda21(r2)
	cmplwi   r3, 0
	lfs      f1, 0x1a0(r31)
	stfs     f1, 0x2c(r1)
	lfs      f1, 0x1a4(r31)
	stfs     f1, 0x30(r1)
	stw      r0, 0x34(r1)
	stb      r0, 0x38(r1)
	stfs     f0, 0x3c(r1)
	beq      lbl_801770D0
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_801770D0
	addi     r4, r1, 0x28
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	stw      r3, 0x23c(r31)
	b        lbl_801770D8

lbl_801770D0:
	li       r0, 0
	stw      r0, 0x23c(r31)

lbl_801770D8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801770F8
	mr       r3, r31
	li       r4, 1
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_80177104

lbl_801770F8:
	mr       r3, r31
	li       r4, 0
	bl       setSpotEffect__Q24Game5OnyonFb

lbl_80177104:
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_801771B8
	lis      r4, __vt__20ModelEffectCreateArg@ha
	lis      r3, __vt__Q23efx12OnyonSpotArg@ha
	addi     r4, r4, __vt__20ModelEffectCreateArg@l
	stw      r0, 0x24(r1)
	addi     r0, r3, __vt__Q23efx12OnyonSpotArg@l
	lwz      r3, particleMgr@sda21(r13)
	stw      r4, 0x14(r1)
	addi     r4, r1, 0x14
	stw      r0, 0x14(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x18(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x20(r1)
	bl       createModelEffect__11ParticleMgrFP20ModelEffectCreateArg
	stw      r3, 0x1f4(r31)
	mr       r3, r31
	li       r4, 0
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_801771AC
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r31)
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017719C
	mr       r3, r31
	li       r4, 3
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	mr       r3, r31
	bl       startWaitMotion__Q24Game5OnyonFv
	b        lbl_801771B8

lbl_8017719C:
	mr       r3, r31
	li       r4, 0
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState
	b        lbl_801771B8

lbl_801771AC:
	mr       r3, r31
	li       r4, 3
	bl       setSpotState__Q24Game5OnyonFQ34Game5Onyon10cSpotState

lbl_801771B8:
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 4
	bne      lbl_801771E8
	lwz      r3, 0x174(r31)
	addi     r4, r2, lbl_80518A3C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x248(r31)
	addi     r4, r2, lbl_80518A40@sda21
	lwz      r3, 0x174(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	stw      r3, 0x24c(r31)
	b        lbl_801771F4

lbl_801771E8:
	li       r0, 0
	stw      r0, 0x24c(r31)
	stw      r0, 0x248(r31)

lbl_801771F4:
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_8017723C
	lis      r3, lbl_8047E6B4@ha
	rlwinm   r0, r0, 2, 0xe, 0x1d
	addi     r6, r3, lbl_8047E6B4@l
	addi     r4, r1, 8
	lwz      r8, 0(r6)
	mr       r3, r31
	lwz      r7, 4(r6)
	li       r5, 0
	lwz      r6, 8(r6)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	lwzx     r4, r4, r0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80177268

lbl_8017723C:
	cmplwi   r0, 3
	bne      lbl_80177258
	mr       r3, r31
	li       r4, 0xc
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl
	b        lbl_80177268

lbl_80177258:
	mr       r3, r31
	li       r4, 0xf
	li       r5, 0
	bl       entry__Q25Radar3MgrFPQ24Game15TPositionObjectQ25Radar10cRadarTypeUl

lbl_80177268:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017727C
 * Size:	000110
 */
void Onyon::setSpotState(Onyon::cSpotState)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 2
	bgt      lbl_80177378
	stb      r4, 0x224(r31)
	lwz      r3, 0x1f4(r31)
	cmplwi   r3, 0
	beq      lbl_801772B4
	li       r0, 0
	stb      r0, 0x3a(r3)

lbl_801772B4:
	lbz      r0, 0x224(r31)
	cmpwi    r0, 2
	beq      lbl_80177328
	bge      lbl_801772D4
	cmpwi    r0, 0
	beq      lbl_801772E0
	bge      lbl_80177310
	b        lbl_8017733C

lbl_801772D4:
	cmpwi    r0, 4
	bge      lbl_8017733C
	b        lbl_801772F8

lbl_801772E0:
	lfs      f0, lbl_80518A2C@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x220(r31)
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_8017733C

lbl_801772F8:
	lfs      f0, lbl_80518A58@sda21(r2)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x220(r31)
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_8017733C

lbl_80177310:
	lfs      f0, lbl_80518A2C@sda21(r2)
	mr       r3, r31
	li       r4, 0
	stfs     f0, 0x220(r31)
	bl       setSpotEffect__Q24Game5OnyonFb
	b        lbl_8017733C

lbl_80177328:
	lfs      f0, lbl_80518A58@sda21(r2)
	mr       r3, r31
	li       r4, 1
	stfs     f0, 0x220(r31)
	bl       setSpotEffect__Q24Game5OnyonFb

lbl_8017733C:
	lfs      f1, 0x220(r31)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, lbl_80518A58@sda21(r2)
	addi     r5, r3, "zero__10Vector3<f>"@l
	stfs     f1, 8(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 8
	addi     r6, r31, 0x19c
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x1f4(r31)
	addi     r3, r1, 0x14
	addi     r4, r4, 8
	bl       PSMTXCopy

lbl_80177378:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000154
//  */
// void Onyon::updateSpot(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8017738C
 * Size:	0000AC
 */
Vector3f Onyon::getSuckPos()
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stfd     f29, 0x10(r1)
	psq_st   f29, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	lhz      r0, 0x128(r4)
	mr       r31, r3
	lfs      f31, 0x19c(r4)
	cmplwi   r0, 0x403
	lfs      f30, 0x1a0(r4)
	lfs      f29, 0x1a4(r4)
	bne      lbl_801773F8
	lwz      r3, 0x174(r4)
	addi     r4, r2, lbl_80518A9C@sda21
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_80177400
	bl       getWorldMatrix__Q28SysShape5JointFv
	lfs      f31, 0xc(r3)
	lfs      f30, 0x1c(r3)
	lfs      f29, 0x2c(r3)
	b        lbl_80177400

lbl_801773F8:
	lfs      f0, lbl_80518AA4@sda21(r2)
	fadds    f30, f30, f0

lbl_80177400:
	stfs     f31, 0(r31)
	stfs     f30, 4(r31)
	stfs     f29, 8(r31)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	psq_l    f29, 24(r1), 0, qr0
	lfd      f29, 0x10(r1)
	lwz      r0, 0x44(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177438
 * Size:	0000D8
 */
Vector3f Onyon::getGoalPos()
{
	/*
	stwu     r1, -0x20(r1)
	lhz      r0, 0x128(r4)
	lfs      f3, 0x19c(r4)
	cmplwi   r0, 0x403
	lfs      f4, 0x1a0(r4)
	lfs      f5, 0x1a4(r4)
	bne      lbl_801774FC
	lfs      f6, 0x228(r4)
	lfs      f0, lbl_80518A2C@sda21(r2)
	lfs      f2, lbl_80518AA8@sda21(r2)
	fcmpo    cr0, f6, f0
	bge      lbl_80177494
	lfs      f0, lbl_80518A64@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_801774B8

lbl_80177494:
	lfs      f0, lbl_80518A60@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_801774B8:
	lfs      f0, lbl_80518A2C@sda21(r2)
	fmadds   f3, f2, f1, f3
	fcmpo    cr0, f6, f0
	bge      lbl_801774CC
	fneg     f6, f6

lbl_801774CC:
	lfs      f0, lbl_80518A60@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	lfs      f1, lbl_80518AA8@sda21(r2)
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r4, r4, r0
	lfs      f0, 4(r4)
	fmadds   f5, f1, f0, f5

lbl_801774FC:
	stfs     f3, 0(r3)
	stfs     f4, 4(r3)
	stfs     f5, 8(r3)
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177510
 * Size:	000318
 */
void Onyon::doAI(void)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stw      r31, 0x9c(r1)
	mr       r31, r3
	stw      r30, 0x98(r1)
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_8017753C
	lha      r0, 0x20(r3)
	b        lbl_80177540

lbl_8017753C:
	li       r0, -1

lbl_80177540:
	cmpwi    r0, 2
	bne      lbl_801775C8
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_801775C8
	lwz      r3, 0x17c(r31)
	li       r4, 0x2014
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_801775C0
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 0x20
	stfs     f5, 0x24(r1)
	lfs      f2, lbl_80518AAC@sda21(r2)
	stfs     f1, 0x20(r1)
	lfs      f3, lbl_80518AB0@sda21(r2)
	stfs     f5, 0x28(r1)
	lfs      f4, lbl_80518A80@sda21(r2)
	stfs     f5, 0x2c(r1)
	stfs     f5, 0x30(r1)
	stb      r0, 0x34(r1)
	stb      r0, 0x35(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r30
	addi     r4, r1, 0x20
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_801775C0:
	mr       r3, r31
	bl       efxPafuPafu__Q24Game5OnyonFv

lbl_801775C8:
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 2
	bgt      lbl_801776FC
	lbz      r0, 0x224(r31)
	cmpwi    r0, 2
	beq      lbl_8017767C
	bge      lbl_801776FC
	cmpwi    r0, 0
	beq      lbl_801776FC
	bge      lbl_801775F8
	b        lbl_801776FC
	b        lbl_801776FC

lbl_801775F8:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80518A98@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x220(r31)
	lfs      f0, lbl_80518A58@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0x220(r31)
	lfs      f1, 0x220(r31)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8017763C
	stfs     f0, 0x220(r31)
	li       r0, 3
	mr       r3, r31
	li       r4, 1
	stb      r0, 0x224(r31)
	bl       setSpotEffect__Q24Game5OnyonFb

lbl_8017763C:
	lfs      f1, 0x220(r31)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, lbl_80518A58@sda21(r2)
	addi     r5, r3, "zero__10Vector3<f>"@l
	stfs     f1, 8(r1)
	addi     r3, r1, 0x38
	addi     r4, r1, 8
	addi     r6, r31, 0x19c
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x1f4(r31)
	addi     r3, r1, 0x38
	addi     r4, r4, 8
	bl       PSMTXCopy
	b        lbl_801776FC

lbl_8017767C:
	lwz      r3, sys@sda21(r13)
	lfs      f3, lbl_80518A98@sda21(r2)
	lfs      f2, 0x54(r3)
	lfs      f1, 0x220(r31)
	lfs      f0, lbl_80518A2C@sda21(r2)
	fnmsubs  f1, f3, f2, f1
	stfs     f1, 0x220(r31)
	lfs      f1, 0x220(r31)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_801776C0
	stfs     f0, 0x220(r31)
	li       r0, 0
	mr       r3, r31
	li       r4, 0
	stb      r0, 0x224(r31)
	bl       setSpotEffect__Q24Game5OnyonFb

lbl_801776C0:
	lfs      f1, 0x220(r31)
	lis      r3, "zero__10Vector3<f>"@ha
	lfs      f0, lbl_80518A58@sda21(r2)
	addi     r5, r3, "zero__10Vector3<f>"@l
	stfs     f1, 0x14(r1)
	addi     r3, r1, 0x68
	addi     r4, r1, 0x14
	addi     r6, r31, 0x19c
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	bl       "makeSRT__7MatrixfFR10Vector3<f>R10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x1f4(r31)
	addi     r3, r1, 0x68
	addi     r4, r4, 8
	bl       PSMTXCopy

lbl_801776FC:
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 4
	bne      lbl_80177810
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80177740
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80177810

lbl_80177740:
	lbz      r0, 0x240(r31)
	cmplwi   r0, 4
	bne      lbl_80177764
	lfs      f1, 0x1d4(r31)
	lfs      f0, lbl_80518A58@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80177764
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)

lbl_80177764:
	lbz      r0, 0x240(r31)
	cmplwi   r0, 3
	bne      lbl_80177810
	lwz      r3, sys@sda21(r13)
	lfs      f2, 0x244(r31)
	lfs      f1, 0x54(r3)
	lfs      f0, lbl_80518AB4@sda21(r2)
	fadds    f1, f2, f1
	stfs     f1, 0x244(r31)
	lfs      f1, 0x244(r31)
	fcmpo    cr0, f1, f0
	ble      lbl_80177810
	addi     r3, r31, 0x1a8
	li       r4, 1
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl
	lbz      r0, 0x1c0(r31)
	lfs      f0, lbl_80518A30@sda21(r2)
	ori      r0, r0, 2
	stb      r0, 0x1c0(r31)
	stfs     f0, 0x1d4(r31)
	lwz      r3, 0x214(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 4
	li       r4, 0x3835
	stb      r0, 0x240(r31)
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_801777E8
	li       r4, 0x382e

lbl_801777E8:
	lwz      r12, 0(r31)
	mr       r3, r31
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x210(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80177810:
	lwz      r0, 0xa4(r1)
	lwz      r31, 0x9c(r1)
	lwz      r30, 0x98(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177828
 * Size:	000078
 */
void Onyon::forceClose(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_8017788C
	addi     r3, r31, 0x1a8
	li       r4, 0x3e8
	bl       setFrameByKeyType__Q28SysShape8AnimatorFUl
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x1d4(r31)
	lwz      r3, 0x214(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 5
	stb      r0, 0x240(r31)
	lwz      r3, 0x210(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8017788C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801778A0
 * Size:	000078
 */
void Onyon::do_updateLOD(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	bl       __ct__Q24Game9AILODParmFv
	lhz      r0, 0x22e(r31)
	cmplwi   r0, 3
	bne      lbl_801778D0
	li       r0, 1
	stb      r0, 0x10(r1)

lbl_801778D0:
	mr       r3, r31
	addi     r4, r1, 8
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80177904
	lbz      r0, 0xd8(r31)
	ori      r0, r0, 0x34
	stb      r0, 0xd8(r31)

lbl_80177904:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177918
 * Size:	000064
 */
void Onyon::getLODCylinder(Sys::Cylinder&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lfs      f0, lbl_80518A50@sda21(r2)
	stw      r0, 0x24(r1)
	mr       r0, r4
	lfs      f1, lbl_80518A90@sda21(r2)
	addi     r4, r1, 0x14
	lfs      f4, 0x19c(r3)
	addi     r5, r1, 8
	stfs     f4, 0x14(r1)
	lfs      f3, 0x1a0(r3)
	stfs     f3, 0x18(r1)
	fadds    f0, f3, f0
	lfs      f2, 0x1a4(r3)
	mr       r3, r0
	stfs     f2, 0x1c(r1)
	stfs     f0, 0x18(r1)
	stfs     f4, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f2, 0x10(r1)
	bl       "set__Q23Sys8CylinderFRC10Vector3<f>RC10Vector3<f>f"
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017797C
 * Size:	000470
 */
void Onyon::do_doAnimation(void)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r30, r3
	lis      r4, lbl_8047E620@ha
	lhz      r0, 0x22e(r3)
	addi     r31, r4, lbl_8047E620@l
	cmplwi   r0, 4
	bne      lbl_80177B6C
	lfs      f1, lbl_80518A2C@sda21(r2)
	lfs      f0, 0x25c(r30)
	fcmpu    cr0, f1, f0
	beq      lbl_80177A14
	li       r4, 2
	bl       getPMotionSpeed__Q24Game5OnyonFi
	lwz      r4, sys@sda21(r13)
	lfs      f3, 0x25c(r30)
	lfs      f2, 0x54(r4)
	lfs      f1, 0(r3)
	lfs      f0, lbl_80518A30@sda21(r2)
	fmadds   f1, f3, f2, f1
	stfs     f1, 0(r3)
	lfs      f1, 0(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_80177A04
	stfs     f0, 0(r3)
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x25c(r30)
	b        lbl_80177A14

lbl_80177A04:
	ble      lbl_80177A14
	stfs     f0, 0(r3)
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x25c(r30)

lbl_80177A14:
	mr       r3, r30
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	lfs      f1, 0(r3)
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_80177B6C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	li       r3, 0x2020
	bl       PSStartSoundVec__FUlP3Vec
	or.      r29, r3, r3
	beq      lbl_80177AA0
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 0x50
	stfs     f5, 0x54(r1)
	lfs      f2, lbl_80518AAC@sda21(r2)
	stfs     f1, 0x50(r1)
	lfs      f3, lbl_80518AB8@sda21(r2)
	stfs     f5, 0x58(r1)
	lfs      f4, lbl_80518A80@sda21(r2)
	stfs     f5, 0x5c(r1)
	stfs     f5, 0x60(r1)
	stb      r0, 0x64(r1)
	stb      r0, 0x65(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r29
	addi     r4, r1, 0x50
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_80177AA0:
	mr       r3, r30
	li       r4, 1
	bl       getPAnimator__Q24Game5OnyonFi
	lfs      f31, 8(r3)
	mr       r3, r30
	li       r4, 1
	bl       getPAnimator__Q24Game5OnyonFi
	lfs      f0, lbl_80518A8C@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80177B58
	lfs      f0, lbl_80518ABC@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_80177B58
	lbz      r0, sVolveFlag@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80177B58
	lwz      r3, 0x17c(r30)
	li       r4, 0x3807
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80177B4C
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 0x38
	stfs     f5, 0x3c(r1)
	lfs      f2, lbl_80518AC0@sda21(r2)
	stfs     f1, 0x38(r1)
	lfs      f3, lbl_80518A7C@sda21(r2)
	stfs     f5, 0x40(r1)
	lfs      f4, lbl_80518AC4@sda21(r2)
	stfs     f5, 0x44(r1)
	stfs     f5, 0x48(r1)
	stb      r0, 0x4c(r1)
	stb      r0, 0x4d(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r29
	addi     r4, r1, 0x38
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_80177B4C:
	li       r0, 1
	stb      r0, sVolveFlag@sda21(r13)
	b        lbl_80177B6C

lbl_80177B58:
	lfs      f0, lbl_80518A94@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_80177B6C
	li       r0, 0
	stb      r0, sVolveFlag@sda21(r13)

lbl_80177B6C:
	mr       r3, r30
	bl       update_pmotions__Q24Game5OnyonFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	lhz      r4, 0x22e(r30)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_80177DC8
	cmplwi   r4, 4
	bne      lbl_80177D40
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x3043
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80177BA8
	li       r4, 0x3028

lbl_80177BA8:
	lwz      r3, 0x17c(r30)
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80177DC8
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 0x20
	stfs     f5, 0x24(r1)
	lfs      f2, lbl_80518AC8@sda21(r2)
	stfs     f1, 0x20(r1)
	lfs      f3, lbl_80518A7C@sda21(r2)
	stfs     f5, 0x28(r1)
	lfs      f4, lbl_80518ACC@sda21(r2)
	stfs     f5, 0x2c(r1)
	stfs     f5, 0x30(r1)
	stb      r0, 0x34(r1)
	stb      r0, 0x35(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r29
	addi     r4, r1, 0x20
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80177C30
	addi     r3, r31, 0xa0
	addi     r5, r31, 0x60
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80177C30:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_80177C50
	addi     r3, r31, 0xa0
	addi     r5, r31, 0x60
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80177C50:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_80177C70
	addi     r3, r31, 0xac
	addi     r5, r31, 0x60
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80177C70:
	lwz      r3, 4(r30)
	lwz      r30, 4(r3)
	cmplwi   r30, 0
	bne      lbl_80177C94
	addi     r3, r31, 0xac
	addi     r5, r31, 0xb8
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80177C94:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80177CB4
	b        lbl_80177CB8

lbl_80177CB4:
	li       r30, 0

lbl_80177CB8:
	cmplwi   r30, 0
	beq      lbl_80177DC8
	lwz      r3, 0x4c(r30)
	cmplwi   r3, 0x186
	bge      lbl_80177D1C
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f1, lbl_80518AE0@sda21(r2)
	li       r3, 1
	stw      r0, 0x68(r1)
	lfs      f2, lbl_80518A2C@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f3, lbl_80518AD0@sda21(r2)
	fsubs    f1, f0, f1
	lfs      f4, lbl_80518AD4@sda21(r2)
	lfs      f5, lbl_80518A58@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r29
	li       r4, 0
	lwz      r12, 0x10(r29)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80177DC8

lbl_80177D1C:
	mr       r3, r29
	lfs      f1, lbl_80518A58@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_80177DC8

lbl_80177D40:
	cmplwi   r4, 3
	bne      lbl_80177DC8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x3044
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80177D60
	li       r4, 0x302b

lbl_80177D60:
	lwz      r3, 0x17c(r30)
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	beq      lbl_80177DC8
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 8
	stfs     f5, 0xc(r1)
	lfs      f2, lbl_80518A80@sda21(r2)
	stfs     f1, 8(r1)
	lfs      f3, lbl_80518AD8@sda21(r2)
	stfs     f5, 0x10(r1)
	lfs      f4, lbl_80518ACC@sda21(r2)
	stfs     f5, 0x14(r1)
	stfs     f5, 0x18(r1)
	stb      r0, 0x1c(r1)
	stb      r0, 0x1d(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r29
	addi     r4, r1, 8
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_80177DC8:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177DEC
 * Size:	000008
 */
Vector3f* BaseItem::getSound_PosPtr()
{
	/*
	addi     r3, r3, 0x19c
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	0000E0
//  */
// void Onyon::initTube(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80177DF4
 * Size:	000198
 */
void Onyon::startWaitMotion(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_80177ED4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r31, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r31, r3
	ble      lbl_80177E94
	lfs      f31, lbl_80518A30@sda21(r2)
	mr       r3, r30
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	li       r4, 0
	lwz      r3, 0x218(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80177F6C

lbl_80177E94:
	lwz      r3, 0x218(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_80518A2C@sda21(r2)
	mr       r3, r30
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	b        lbl_80177F6C

lbl_80177ED4:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r30)
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 3
	bne      lbl_80177EFC
	addi     r3, r30, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80177F6C

lbl_80177EFC:
	bl       getStoreCount__Q24Game5OnyonFv
	cmpwi    r3, 0
	ble      lbl_80177F50
	lwz      r3, 0x1b4(r30)
	cmplwi   r3, 0
	beq      lbl_80177F1C
	lha      r0, 0x20(r3)
	b        lbl_80177F20

lbl_80177F1C:
	li       r0, -1

lbl_80177F20:
	cmplwi   r0, 1
	ble      lbl_80177F30
	cmpwi    r0, 3
	bne      lbl_80177F6C

lbl_80177F30:
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_80177F40
	addi     r5, r30, 0x178

lbl_80177F40:
	addi     r3, r30, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80177F6C

lbl_80177F50:
	cmplwi   r30, 0
	mr       r5, r30
	beq      lbl_80177F60
	addi     r5, r30, 0x178

lbl_80177F60:
	addi     r3, r30, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_80177F6C:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80177F8C
 * Size:	000078
 */
void Onyon::onKeyEvent_UFO(const SysShape::KeyEvent&)
{
	/*
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 1
	beq      lbl_80177FD4
	bge      lbl_80177FA8
	cmpwi    r0, 0
	bge      lbl_80177FB4
	blr

lbl_80177FA8:
	cmpwi    r0, 0x3e8
	beq      lbl_80177FF8
	blr

lbl_80177FB4:
	lbz      r0, 0x240(r3)
	cmplwi   r0, 0
	bnelr
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r0, 1
	stfs     f0, 0x1d4(r3)
	stb      r0, 0x240(r3)
	blr

lbl_80177FD4:
	lbz      r0, 0x240(r3)
	cmplwi   r0, 2
	bnelr
	li       r0, 3
	lfs      f0, lbl_80518A2C@sda21(r2)
	stb      r0, 0x240(r3)
	stfs     f0, 0x244(r3)
	stfs     f0, 0x1d4(r3)
	blr

lbl_80177FF8:
	li       r0, 5
	stb      r0, 0x240(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178004
 * Size:	00013C
 */
void Onyon::getFlagSetPos(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	fmr      f2, f1
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_80178058
	fneg     f2, f2

lbl_80178058:
	lfs      f3, lbl_80518A60@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, lbl_80518A50@sda21(r2)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f31, f4, f0
	bge      lbl_801780B8
	lfs      f0, lbl_80518A64@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_801780D0

lbl_801780B8:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_801780D0:
	mr       r4, r31
	addi     r3, r1, 8
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, lbl_80518A50@sda21(r2)
	lfs      f4, 0x10(r1)
	fmuls    f1, f0, f30
	lfs      f2, 8(r1)
	lfs      f3, 0xc(r1)
	fadds    f4, f4, f31
	lfs      f0, lbl_80518A2C@sda21(r2)
	fadds    f2, f2, f1
	fadds    f3, f3, f0
	stfs     f2, 0(r30)
	stfs     f3, 4(r30)
	stfs     f4, 8(r30)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178140
 * Size:	00004C
 */
void Onyon::onKeyEvent(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_8017816C
	lwz      r12, 0(r3)
	lwz      r12, 0x224(r12)
	mtctr    r12
	bctrl
	b        lbl_8017817C

lbl_8017816C:
	lwz      r12, 0(r3)
	lwz      r12, 0x228(r12)
	mtctr    r12
	bctrl

lbl_8017817C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017818C
 * Size:	0000AC
 */
void Onyon::vsChargePikmin(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r4)
	cmpwi    r0, 1
	beq      lbl_801781CC
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0x6ff
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801781CC:
	lhz      r0, 0x22e(r31)
	sth      r0, 0x230(r31)
	lhz      r3, 0x22c(r31)
	addi     r0, r3, 1
	sth      r0, 0x22c(r31)
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_801781F4
	lha      r0, 0x20(r3)
	b        lbl_801781F8

lbl_801781F4:
	li       r0, -1

lbl_801781F8:
	cmpwi    r0, 0
	beq      lbl_80178208
	cmpwi    r0, 2
	bne      lbl_80178224

lbl_80178208:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_80178218
	addi     r5, r31, 0x178

lbl_80178218:
	addi     r3, r31, 0x1a8
	li       r4, 1
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_80178224:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178238
 * Size:	000648
 */
void Onyon::onKeyEvent_Onyon(SysShape::KeyEvent const&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stmw     r27, 0x6c(r1)
	mr       r27, r3
	lwz      r3, 0x1b4(r3)
	cmplwi   r3, 0
	beq      lbl_80178268
	lha      r3, 0x20(r3)
	b        lbl_8017826C

lbl_80178268:
	li       r3, -1

lbl_8017826C:
	lwz      r0, 0x1c(r4)
	cmpwi    r0, 0x64
	beq      lbl_8017842C
	bge      lbl_80178288
	cmpwi    r0, 1
	beq      lbl_80178440
	b        lbl_80178864

lbl_80178288:
	cmpwi    r0, 0x3e8
	beq      lbl_80178294
	b        lbl_80178864

lbl_80178294:
	lhz      r0, 0x22c(r27)
	cmplwi   r0, 0
	beq      lbl_801782CC
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 2
	bgt      lbl_80178864
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_801782BC
	addi     r5, r27, 0x178

lbl_801782BC:
	addi     r3, r27, 0x1a8
	li       r4, 1
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_801782CC:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017838C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r28, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r28, r3
	ble      lbl_8017834C
	lfs      f31, lbl_80518A30@sda21(r2)
	mr       r3, r27
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	li       r4, 0
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80178864

lbl_8017834C:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_80518A2C@sda21(r2)
	mr       r3, r27
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	b        lbl_80178864

lbl_8017838C:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 3
	bne      lbl_801783B4
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_801783B4:
	mr       r3, r27
	bl       getStoreCount__Q24Game5OnyonFv
	cmpwi    r3, 0
	ble      lbl_8017840C
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_801783D8
	lha      r0, 0x20(r3)
	b        lbl_801783DC

lbl_801783D8:
	li       r0, -1

lbl_801783DC:
	cmplwi   r0, 1
	ble      lbl_801783EC
	cmpwi    r0, 3
	bne      lbl_80178864

lbl_801783EC:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_801783FC
	addi     r5, r27, 0x178

lbl_801783FC:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_8017840C:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017841C
	addi     r5, r27, 0x178

lbl_8017841C:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_8017842C:
	cmpwi    r3, 2
	bne      lbl_80178864
	mr       r3, r27
	bl       efxPafuKira__Q24Game5OnyonFv
	b        lbl_80178864

lbl_80178440:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 2
	bgt      lbl_80178864
	cmpwi    r3, 2
	beq      lbl_8017870C
	bge      lbl_80178864
	cmpwi    r3, 1
	bge      lbl_80178464
	b        lbl_80178864

lbl_80178464:
	lhz      r0, 0x22c(r27)
	cmplwi   r0, 0
	beq      lbl_801786FC
	rlwinm.  r30, r0, 0x1f, 0x11, 0x1f
	bgt      lbl_8017847C
	li       r30, 1

lbl_8017847C:
	lis      r3, "zero__10Vector3<f>"@ha
	li       r29, 0
	addi     r31, r3, "zero__10Vector3<f>"@l
	b        lbl_801786F0

lbl_8017848C:
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801784FC
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801784FC
	li       r3, 1
	bl       getMapPikmins__Q24Game8GameStatFi
	mr       r28, r3
	li       r3, 0
	bl       getMapPikmins__Q24Game8GameStatFi
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 0
	bne      lbl_801784DC
	cmpwi    r3, 0x32
	blt      lbl_801784DC
	lhz      r3, 0x22c(r27)
	addi     r0, r3, -1
	sth      r0, 0x22c(r27)
	b        lbl_801786EC

lbl_801784DC:
	cmplwi   r0, 1
	bne      lbl_801784FC
	cmpwi    r28, 0x32
	blt      lbl_801784FC
	lhz      r3, 0x22c(r27)
	addi     r0, r3, -1
	sth      r0, 0x22c(r27)
	b        lbl_801786EC

lbl_801784FC:
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	or.      r28, r3, r3
	beq      lbl_801785AC
	lhz      r0, 0x22e(r27)
	lis      r7, __vt__Q24Game15CreatureInitArg@ha
	lis      r6, __vt__Q24Game11ItemInitArg@ha
	lis      r5, __vt__Q34Game12ItemPikihead7InitArg@ha
	sth      r0, 0x230(r27)
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r7, r7, __vt__Q24Game15CreatureInitArg@l
	addi     r6, r6, __vt__Q24Game11ItemInitArg@l
	lhz      r8, 0x230(r27)
	li       r0, 0
	lfs      f3, "zero__10Vector3<f>"@l(r4)
	addi     r5, r5, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r7, 0x14(r1)
	addi     r4, r1, 0x14
	lfs      f2, 4(r31)
	stw      r6, 0x14(r1)
	lfs      f1, 8(r31)
	lfs      f0, lbl_80518A28@sda21(r2)
	stw      r5, 0x14(r1)
	stw      r8, 0x18(r1)
	stfs     f3, 0x1c(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stb      r0, 0x28(r1)
	stw      r0, 0x2c(r1)
	stfs     f0, 0x30(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	lhz      r3, 0x22c(r27)
	addi     r0, r3, -1
	sth      r0, 0x22c(r27)
	lhz      r3, 0x1f4(r28)
	bl       inc__Q24Game8BirthMgrFi
	mr       r3, r27
	mr       r4, r28
	li       r5, 0
	bl       doEmit__Q24Game5OnyonFPQ24Game8Creatureb
	b        lbl_801786EC

lbl_801785AC:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_801786B0
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 7
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801786B0
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 7
	bl       setDemoFlag__Q24Game8PlayDataFi
	lis      r3, 0x8051
	lwzu     r12, 0x262c(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0
	lis      r4, lbl_8047E72C@ha
	addi     r6, r4, lbl_8047E72C@l
	ble      lbl_80178608
	lis      r3, lbl_8047E71C@ha
	addi     r6, r3, lbl_8047E71C@l

lbl_80178608:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	mr       r4, r27
	lwz      r5, 0x58(r3)
	addi     r3, r1, 8
	lwz      r5, 0xc8(r5)
	stw      r6, 0x34(r1)
	stw      r0, 0x38(r1)
	stw      r5, 0x40(r1)
	stfs     f0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	stfs     f0, 0x54(r1)
	stfs     f0, 0x58(r1)
	stw      r0, 0x5c(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x3c(r1)
	stw      r0, 0x60(r1)
	stw      r0, 0x48(r1)
	stw      r0, 0x64(r1)
	lwz      r12, 0(r27)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r27
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f0, 0x54(r1)
	lwz      r12, 0(r27)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x58(r1)
	mr       r3, r27
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x34
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_801786B0:
	lhz      r0, 0x22e(r27)
	li       r5, 0
	sth      r0, 0x230(r27)
	lwz      r3, playData__4Game@sda21(r13)
	lhz      r4, 0x230(r27)
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r4, 0(r3)
	addi     r0, r4, 1
	stw      r0, 0(r3)
	lhz      r3, 0x22e(r27)
	bl       inc__Q24Game8BirthMgrFi
	lhz      r3, 0x22c(r27)
	addi     r0, r3, -1
	sth      r0, 0x22c(r27)

lbl_801786EC:
	addi     r29, r29, 1

lbl_801786F0:
	cmpw     r29, r30
	blt      lbl_8017848C
	b        lbl_80178864

lbl_801786FC:
	lbz      r0, 0x1c0(r27)
	ori      r0, r0, 2
	stb      r0, 0x1c0(r27)
	b        lbl_80178864

lbl_8017870C:
	cmplwi   r0, 4
	bne      lbl_801787C8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r28, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r28, r3
	ble      lbl_80178788
	lfs      f31, lbl_80518A30@sda21(r2)
	mr       r3, r27
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	li       r4, 0
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80178864

lbl_80178788:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_80518A2C@sda21(r2)
	mr       r3, r27
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	b        lbl_80178864

lbl_801787C8:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 3
	bne      lbl_801787F0
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_801787F0:
	mr       r3, r27
	bl       getStoreCount__Q24Game5OnyonFv
	cmpwi    r3, 0
	ble      lbl_80178848
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_80178814
	lha      r0, 0x20(r3)
	b        lbl_80178818

lbl_80178814:
	li       r0, -1

lbl_80178818:
	cmplwi   r0, 1
	ble      lbl_80178828
	cmpwi    r0, 3
	bne      lbl_80178864

lbl_80178828:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_80178838
	addi     r5, r27, 0x178

lbl_80178838:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_80178864

lbl_80178848:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_80178858
	addi     r5, r27, 0x178

lbl_80178858:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_80178864:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	lmw      r27, 0x6c(r1)
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178880
 * Size:	000298
 */
void Onyon::doEmit(Game::Creature*, bool)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	lwz      r12, 0(r3)
	mr       r30, r4
	mr       r29, r3
	mr       r31, r5
	lwz      r12, 0x1c0(r12)
	li       r4, 0x2816
	mtctr    r12
	bctrl
	lfs      f3, 0x19c(r29)
	lis      r6, __vt__Q23efx5TBase@ha
	lis      r5, __vt__Q23efx8TSimple2@ha
	lis      r4, __vt__Q23efx9TOnyonLay@ha
	stfs     f3, 0x34(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r10, r6, __vt__Q23efx5TBase@l
	lfs      f0, lbl_80518AE8@sda21(r2)
	lfs      f2, 0x1a0(r29)
	addi     r9, r5, __vt__Q23efx8TSimple2@l
	addi     r5, r4, __vt__Q23efx9TOnyonLay@l
	addi     r0, r3, __vt__Q23efx3Arg@l
	stfs     f2, 0x38(r1)
	fadds    f0, f2, f0
	li       r8, 0x101
	li       r7, 0x102
	lfs      f1, 0x1a4(r29)
	li       r6, 0
	addi     r3, r1, 0x24
	stw      r10, 0x24(r1)
	addi     r4, r1, 0x14
	stw      r9, 0x24(r1)
	stfs     f1, 0x3c(r1)
	stfs     f0, 0x38(r1)
	sth      r8, 0x28(r1)
	sth      r7, 0x2a(r1)
	stw      r6, 0x2c(r1)
	stw      r6, 0x30(r1)
	stw      r5, 0x24(r1)
	stw      r0, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	mr       r3, r30
	addi     r4, r1, 0x34
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_80178998
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80178998
	lis      r4, lbl_8047E73C@ha
	addi     r4, r4, lbl_8047E73C@l
	bl       isPlaying__Q24Game11MoviePlayerFPc
	clrlwi.  r0, r3, 0x18
	beq      lbl_80178998
	mr       r3, r30
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_80178998:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801789FC
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	mr       r3, r29
	lwz      r12, 0(r29)
	stw      r0, 0x40(r1)
	lfd      f2, lbl_80518B08@sda21(r2)
	lfd      f1, 0x40(r1)
	lfs      f0, lbl_80518AEC@sda21(r2)
	fsubs    f1, f1, f2
	lwz      r12, 0x64(r12)
	fdivs    f31, f1, f0
	mtctr    r12
	bctrl
	lfs      f2, lbl_80518AF0@sda21(r2)
	lfs      f0, lbl_80518AF4@sda21(r2)
	fmsubs   f0, f2, f31, f0
	fadds    f1, f0, f1
	bl       roundAng__Ff
	b        lbl_80178A3C

lbl_801789FC:
	clrlwi.  r0, r31, 0x18
	beq      lbl_80178A0C
	lfs      f1, lbl_80518A2C@sda21(r2)
	b        lbl_80178A3C

lbl_80178A0C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_80518B08@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f1, lbl_80518AEC@sda21(r2)
	lfd      f2, 0x40(r1)
	lfs      f0, lbl_80518AF8@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fmuls    f1, f0, f1

lbl_80178A3C:
	lfs      f0, lbl_80518A2C@sda21(r2)
	fmr      f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80178A50
	fneg     f2, f1

lbl_80178A50:
	lfs      f3, lbl_80518A60@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518A2C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	lfs      f4, lbl_80518AFC@sda21(r2)
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f2, f4, f0
	bge      lbl_80178AB0
	lfs      f0, lbl_80518A64@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_80178AC8

lbl_80178AB0:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_80178AC8:
	fmuls    f1, f4, f0
	lfs      f0, lbl_80518B00@sda21(r2)
	stfs     f2, 0x10(r1)
	mr       r3, r30
	addi     r4, r1, 8
	stfs     f1, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	psq_l    f31, 120(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f31, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178B18
 * Size:	0000A0
 */
void Onyon::getLegPart(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	or.      r30, r4, r4
	lis      r4, lbl_8047E620@ha
	stw      r29, 0x24(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8047E620@l
	blt      lbl_80178B54
	cmpwi    r30, 2
	bgt      lbl_80178B54
	li       r0, 1

lbl_80178B54:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80178B70
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0x7d5
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80178B70:
	lwz      r3, 0x12c(r31)
	slwi     r0, r30, 2
	lwz      r6, 0x130(r31)
	addi     r4, r1, 8
	lwz      r5, 0x134(r31)
	stw      r3, 8(r1)
	lwz      r3, 0x114(r29)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	lwzx     r4, r4, r0
	bl       getCollPart__8CollTreeFUl
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178BB8
 * Size:	0000C0
 */
void Onyon::getFootPart(int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	li       r0, 0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	or.      r30, r4, r4
	lis      r4, lbl_8047E620@ha
	stw      r29, 0x24(r1)
	mr       r29, r3
	addi     r31, r4, lbl_8047E620@l
	blt      lbl_80178BF4
	cmpwi    r30, 2
	bgt      lbl_80178BF4
	li       r0, 1

lbl_80178BF4:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80178C10
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0x7de
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80178C10:
	lwz      r3, 0x138(r31)
	slwi     r0, r30, 2
	lwz      r6, 0x13c(r31)
	addi     r4, r1, 8
	lwz      r5, 0x140(r31)
	stw      r3, 8(r1)
	lwz      r3, 0x114(r29)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	lwzx     r4, r4, r0
	bl       getCollPart__8CollTreeFUl
	or.      r30, r3, r3
	bne      lbl_80178C58
	addi     r3, r31, 0x18
	addi     r5, r31, 0x144
	li       r4, 0x7e4
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80178C58:
	lwz      r0, 0x34(r1)
	mr       r3, r30
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178C78
 * Size:	00012C
 */
void Onyon::makeTrMatrix(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lfs      f0, lbl_80518A2C@sda21(r2)
	stw      r0, 0x34(r1)
	addi     r5, r1, 8
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r4, r31, 0x19c
	lfs      f1, 0x228(r3)
	addi     r3, r31, 0x138
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	mr       r3, r31
	bl       updateCollTree__Q24Game8BaseItemFv
	lwz      r3, gameSystem__4Game@sda21(r13)
	bl       paused__Q24Game10GameSystemFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80178D90
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	beq      lbl_80178CDC
	b        lbl_80178D90

lbl_80178CDC:
	lbz      r0, 0x1e0(r31)
	cmplwi   r0, 0
	beq      lbl_80178D90
	lfs      f1, 0x1dc(r31)
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f1, f0
	cror     2, 0, 2
	bne      lbl_80178D80
	mr       r3, r31
	bl       exitPiki__Q24Game5OnyonFv
	cmplwi   r3, 0
	beq      lbl_80178D70
	lwz      r3, 0x1d8(r31)
	addi     r0, r3, -1
	stw      r0, 0x1d8(r31)
	lwz      r0, 0x1d8(r31)
	cmpwi    r0, 0
	bgt      lbl_80178D2C
	li       r0, 0
	stb      r0, 0x1e0(r31)

lbl_80178D2C:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x1c(r1)
	lfd      f2, lbl_80518B08@sda21(r2)
	stw      r0, 0x18(r1)
	lfs      f3, lbl_80518AEC@sda21(r2)
	lfd      f0, 0x18(r1)
	lfs      f1, lbl_80518B14@sda21(r2)
	fsubs    f4, f0, f2
	lfs      f0, lbl_80518AB0@sda21(r2)
	lfs      f2, lbl_80518B10@sda21(r2)
	fdivs    f3, f4, f3
	fmadds   f0, f1, f3, f0
	fmuls    f0, f2, f0
	stfs     f0, 0x1dc(r31)
	b        lbl_80178D90

lbl_80178D70:
	li       r0, 0
	stw      r0, 0x1d8(r31)
	stb      r0, 0x1e0(r31)
	b        lbl_80178D90

lbl_80178D80:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x54(r3)
	fsubs    f0, f1, f0
	stfs     f0, 0x1dc(r31)

lbl_80178D90:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178DA4
 * Size:	000138
 */
void Onyon::changeMaterial(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 2
	bgt      lbl_80178E80
	lwz      r3, 0x1b4(r30)
	cmplwi   r3, 0
	beq      lbl_80178DDC
	lha      r31, 0x20(r3)
	b        lbl_80178DE0

lbl_80178DDC:
	li       r31, -1

lbl_80178DE0:
	lwz      r3, 0x234(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	beq      lbl_80178DF8
	bl       getFrameMax__Q23Sys16MatBaseAnimationFv
	b        lbl_80178DFC

lbl_80178DF8:
	lfs      f1, lbl_80518A2C@sda21(r2)

lbl_80178DFC:
	cmpwi    r31, 4
	bne      lbl_80178E68
	lwz      r3, 0x1b4(r30)
	lfs      f3, 0x1b0(r30)
	cmplwi   r3, 0
	beq      lbl_80178E3C
	lwz      r3, 0x18(r3)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	lha      r0, 6(r3)
	lfd      f2, lbl_80518B08@sda21(r2)
	xoris    r0, r0, 0x8000
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f2, f0, f2
	b        lbl_80178E40

lbl_80178E3C:
	lfs      f2, lbl_80518A2C@sda21(r2)

lbl_80178E40:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x234(r30)
	fcmpu    cr0, f0, f2
	beq      lbl_80178E58
	fdivs    f0, f3, f2
	b        lbl_80178E5C

lbl_80178E58:
	lfs      f0, lbl_80518A58@sda21(r2)

lbl_80178E5C:
	fmuls    f1, f1, f0
	bl       setCurrentFrame__Q23Sys15MatBaseAnimatorFf
	b        lbl_80178E70

lbl_80178E68:
	lwz      r3, 0x234(r30)
	bl       setCurrentFrame__Q23Sys15MatBaseAnimatorFf

lbl_80178E70:
	lwz      r3, 0x234(r30)
	lfs      f1, lbl_80518A2C@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	b        lbl_80178EC4

lbl_80178E80:
	cmplwi   r0, 4
	bne      lbl_80178EC4
	lwz      r3, 0x234(r30)
	lfs      f1, lbl_80518A30@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x238(r30)
	lfs      f1, lbl_80518A30@sda21(r2)
	bl       animate__Q23Sys15MatBaseAnimatorFf
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r30)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv

lbl_80178EC4:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80178EDC
 * Size:	0001D4
 */
void Onyon::setSpotEffect(bool)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lhz      r6, 0x22e(r3)
	cmplwi   r6, 4
	bne      lbl_80178F38
	clrlwi.  r0, r4, 0x18
	beq      lbl_80178F20
	lwz      r3, 0x208(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017909C

lbl_80178F20:
	lwz      r3, 0x208(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8017909C

lbl_80178F38:
	cmplwi   r6, 3
	bne      lbl_8017900C
	clrlwi.  r0, r4, 0x18
	beq      lbl_80178FB8
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r4, r1, 8
	addi     r0, r3, __vt__Q23efx3Arg@l
	stw      r0, 8(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1fc(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x200(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017909C

lbl_80178FB8:
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1fc(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x1f8(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x200(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8017909C

lbl_8017900C:
	bge      lbl_8017909C
	clrlwi.  r0, r4, 0x18
	beq      lbl_80179088
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	lis      r3, __vt__Q23efx7ArgType@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	addi     r0, r3, __vt__Q23efx7ArgType@l
	stw      r4, 0x18(r1)
	addi     r4, r1, 0x18
	lfs      f0, 8(r5)
	stfs     f2, 0x1c(r1)
	stfs     f1, 0x20(r1)
	stfs     f0, 0x24(r1)
	stw      r0, 0x18(r1)
	sth      r6, 0x28(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0x1c(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x24(r1)
	lwz      r3, 0x1ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017909C

lbl_80179088:
	lwz      r3, 0x1ec(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8017909C:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801790B0
 * Size:	000134
 */
void Onyon::setSpotEffectActive(bool)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	clrlwi.  r0, r4, 0x18
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	beq      lbl_801790F0
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801790F0
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_801790F0
	li       r31, 0

lbl_801790F0:
	lhz      r0, 0x22e(r30)
	cmplwi   r0, 4
	bne      lbl_80179134
	clrlwi.  r0, r31, 0x18
	beq      lbl_80179120
	lwz      r3, 0x20c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_80179134

lbl_80179120:
	lwz      r3, 0x20c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_80179134:
	lhz      r6, 0x22e(r30)
	cmplwi   r6, 3
	bge      lbl_801791CC
	clrlwi.  r0, r31, 0x18
	beq      lbl_801791B8
	lis      r4, __vt__Q23efx3Arg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	addi     r5, r3, "zero__10Vector3<f>"@l
	lis      r3, __vt__Q23efx7ArgType@ha
	addi     r4, r4, __vt__Q23efx3Arg@l
	lfs      f2, 0(r5)
	lfs      f1, 4(r5)
	addi     r0, r3, __vt__Q23efx7ArgType@l
	stw      r4, 8(r1)
	addi     r4, r1, 8
	lfs      f0, 8(r5)
	stfs     f2, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stw      r0, 8(r1)
	sth      r6, 0x18(r1)
	lfs      f0, 0x19c(r30)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x1a0(r30)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1a4(r30)
	stfs     f0, 0x14(r1)
	lwz      r3, 0x1f0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801791CC

lbl_801791B8:
	lwz      r3, 0x1f0(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_801791CC:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801791E4
 * Size:	000168
 */
void Onyon::efxSuikomi(void)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 2
	bgt      lbl_80179274
	lis      r4, __vt__Q23efx5TBase@ha
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r0, r4, __vt__Q23efx5TBase@l
	lis      r4, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 0x28(r1)
	addi     r0, r3, __vt__Q23efx8TSimple1@l
	lis      r3, __vt__Q23efx10TOnyonEatC@ha
	addi     r5, r31, 0x138
	stw      r0, 0x28(r1)
	addi     r0, r4, __vt__Q23efx11TSimpleMtx1@l
	li       r7, 0x100
	li       r6, 0
	stw      r0, 0x28(r1)
	addi     r0, r3, __vt__Q23efx10TOnyonEatC@l
	addi     r3, r1, 0x28
	li       r4, 0
	sth      r7, 0x2c(r1)
	stw      r6, 0x30(r1)
	stw      r5, 0x34(r1)
	stw      r0, 0x28(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	mr       r3, r31
	li       r4, 0x3804
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	b        lbl_80179338

lbl_80179274:
	cmplwi   r0, 3
	bne      lbl_80179304
	lwz      r12, 0(r3)
	li       r4, 0x381d
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lis      r3, __vt__Q23efx5TBase@ha
	li       r6, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple2@ha
	stw      r0, 0x18(r1)
	addi     r0, r3, __vt__Q23efx8TSimple2@l
	lis      r4, __vt__Q23efx8TPodSuck@ha
	lis      r3, __vt__Q23efx3Arg@ha
	stw      r0, 0x18(r1)
	addi     r5, r4, __vt__Q23efx8TPodSuck@l
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r3, 0x185
	li       r7, 0x186
	sth      r3, 0x1c(r1)
	addi     r3, r1, 0x18
	addi     r4, r1, 8
	sth      r7, 0x1e(r1)
	stw      r6, 0x20(r1)
	stw      r6, 0x24(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	lfs      f0, 0x19c(r31)
	stfs     f0, 0xc(r1)
	lfs      f0, 0x1a0(r31)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x1a4(r31)
	stfs     f0, 0x14(r1)
	bl       create__Q23efx8TSimple2FPQ23efx3Arg
	b        lbl_80179338

lbl_80179304:
	cmplwi   r0, 4
	bne      lbl_80179338
	lwz      r12, 0(r3)
	li       r4, 0x381d
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x214(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80179338:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017934C
 * Size:	0001A0
 */
void Onyon::efxPafuPafu(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	lfd      f3, lbl_80518B08@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f1, lbl_80518AEC@sda21(r2)
	lfd      f2, 0x40(r1)
	lfs      f0, lbl_80518B10@sda21(r2)
	fsubs    f2, f2, f3
	fdivs    f1, f2, f1
	fcmpo    cr0, f1, f0
	bgt      lbl_801794D8
	lis      r3, lbl_8047E794@ha
	addi     r5, r3, lbl_8047E794@l
	lwz      r4, 0(r5)
	lwz      r3, 4(r5)
	lwz      r0, 8(r5)
	stw      r4, 0x18(r1)
	stw      r3, 0x1c(r1)
	stw      r0, 0x20(r1)
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	addi     r4, r1, 0x18
	lfd      f3, lbl_80518B08@sda21(r2)
	stw      r0, 0x40(r1)
	lfs      f1, lbl_80518AEC@sda21(r2)
	lfd      f2, 0x40(r1)
	lfs      f0, lbl_80518AB4@sda21(r2)
	fsubs    f2, f2, f3
	lwz      r3, 0x174(r31)
	fdivs    f1, f2, f1
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	slwi     r0, r0, 2
	lwzx     r4, r4, r0
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_801794D8
	lbz      r0, 0xd8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_801794D8
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r5, __vt__Q23efx5TBase@ha
	lis      r4, __vt__Q23efx8TSimple1@ha
	addi     r0, r5, __vt__Q23efx5TBase@l
	lis      r5, __vt__Q23efx11TSimpleMtx1@ha
	stw      r0, 8(r1)
	addi     r0, r4, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx14TOnyonPuffPuff@ha
	li       r7, 0x104
	stw      r0, 8(r1)
	addi     r5, r5, __vt__Q23efx11TSimpleMtx1@l
	li       r6, 0
	addi     r0, r4, __vt__Q23efx14TOnyonPuffPuff@l
	stw      r5, 8(r1)
	li       r4, 0
	stw      r3, 0x14(r1)
	addi     r3, r1, 8
	sth      r7, 0xc(r1)
	stw      r6, 0x10(r1)
	stw      r0, 8(r1)
	bl       create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	lwz      r3, 0x17c(r31)
	li       r4, 0x3831
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_801794D8
	lfs      f5, lbl_80518A2C@sda21(r2)
	li       r0, 0
	lfs      f1, lbl_80518A58@sda21(r2)
	addi     r3, r1, 0x24
	stfs     f5, 0x28(r1)
	lfs      f2, lbl_80518AC0@sda21(r2)
	stfs     f1, 0x24(r1)
	lfs      f3, lbl_80518B18@sda21(r2)
	stfs     f5, 0x2c(r1)
	lfs      f4, lbl_80518AC4@sda21(r2)
	stfs     f5, 0x30(r1)
	stfs     f5, 0x34(r1)
	stb      r0, 0x38(r1)
	stb      r0, 0x39(r1)
	bl       set__Q36PSGame10SoundTable11SePerspInfoFfffff
	mr       r3, r31
	addi     r4, r1, 0x24
	bl specializePerspCalc__Q23PSM7SeSoundFRCQ36PSGame10SoundTable11SePerspInfo

lbl_801794D8:
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801794EC
 * Size:	0000B0
 */
void Onyon::efxPafuKira(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	addi     r4, r2, lbl_80518B1C@sda21
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r3, 0x174(r3)
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_80179588
	lbz      r0, 0xd8(r31)
	rlwinm.  r0, r0, 0, 0x1d, 0x1d
	beq      lbl_80179588
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, __vt__Q23efx5TBase@ha
	lfs      f0, 0xc(r3)
	lfs      f1, 0x1c(r3)
	addi     r0, r4, __vt__Q23efx5TBase@l
	lfs      f2, 0x2c(r3)
	lis      r3, __vt__Q23efx8TSimple1@ha
	addi     r5, r3, __vt__Q23efx8TSimple1@l
	lis      r4, __vt__Q23efx14TOnyonPuffKira@ha
	stw      r0, 0x18(r1)
	lis      r3, __vt__Q23efx3Arg@ha
	addi     r0, r3, __vt__Q23efx3Arg@l
	li       r7, 0x103
	li       r6, 0
	stw      r5, 0x18(r1)
	addi     r5, r4, __vt__Q23efx14TOnyonPuffKira@l
	addi     r3, r1, 0x18
	sth      r7, 0x1c(r1)
	addi     r4, r1, 8
	stw      r6, 0x20(r1)
	stw      r5, 0x18(r1)
	stw      r0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f2, 0x14(r1)
	bl       create__Q23efx8TSimple1FPQ23efx3Arg

lbl_80179588:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017959C
 * Size:	00002C
 */
void Onyon::getStoreCount(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, playData__4Game@sda21(r13)
	lhz      r4, 0x22e(r3)
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801795C8
 * Size:	000244
 */
void Onyon::enterPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x20(r1)
	psq_st   f31, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	lwz      r6, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r4)
	mr       r31, r3
	lbz      r5, 0x2b9(r30)
	addi     r3, r6, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r7, 0(r3)
	lis      r6, __vt__Q24Game15CreatureKillArg@ha
	lis      r4, __vt__Q24Game11PikiKillArg@ha
	li       r5, 1
	addi     r0, r7, 1
	addi     r6, r6, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0(r3)
	addi     r0, r4, __vt__Q24Game11PikiKillArg@l
	mr       r3, r30
	addi     r4, r1, 8
	stw      r6, 8(r1)
	stw      r5, 0xc(r1)
	stw      r0, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lhz      r3, 0x22e(r31)
	cmplwi   r3, 2
	bgt      lbl_80179690
	lhz      r0, 0x22c(r31)
	cmplwi   r0, 0
	beq      lbl_80179690
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_80179664
	lha      r0, 0x20(r3)
	b        lbl_80179668

lbl_80179664:
	li       r0, -1

lbl_80179668:
	cmpwi    r0, 1
	beq      lbl_801797EC
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_80179680
	addi     r5, r31, 0x178

lbl_80179680:
	addi     r3, r31, 0x1a8
	li       r4, 1
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801797EC

lbl_80179690:
	cmplwi   r3, 4
	bne      lbl_8017974C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r30, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r30, r3
	ble      lbl_8017970C
	lfs      f31, lbl_80518A30@sda21(r2)
	mr       r3, r31
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	li       r4, 0
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_801797EC

lbl_8017970C:
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_80518A2C@sda21(r2)
	mr       r3, r31
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	b        lbl_801797EC

lbl_8017974C:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)
	lhz      r4, 0x22e(r31)
	cmplwi   r4, 3
	bne      lbl_80179774
	addi     r3, r31, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801797EC

lbl_80179774:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_801797D0
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_8017979C
	lha      r0, 0x20(r3)
	b        lbl_801797A0

lbl_8017979C:
	li       r0, -1

lbl_801797A0:
	cmplwi   r0, 1
	ble      lbl_801797B0
	cmpwi    r0, 3
	bne      lbl_801797EC

lbl_801797B0:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801797C0
	addi     r5, r31, 0x178

lbl_801797C0:
	addi     r3, r31, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_801797EC

lbl_801797D0:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_801797E0
	addi     r5, r31, 0x178

lbl_801797E0:
	addi     r3, r31, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_801797EC:
	psq_l    f31, 40(r1), 0, qr0
	lwz      r0, 0x34(r1)
	lfd      f31, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017980C
 * Size:	000048
 */
void Onyon::exitPikis(int, int)
{
	/*
	li       r0, 1
	lfs      f0, lbl_80518A2C@sda21(r2)
	stb      r0, 0x1e0(r3)
	cmpwi    r5, 3
	lwz      r0, 0x1d8(r3)
	add      r0, r0, r4
	stw      r0, 0x1d8(r3)
	stfs     f0, 0x1dc(r3)
	bne      lbl_8017983C
	lwz      r0, 0x1e8(r3)
	add      r0, r0, r4
	stw      r0, 0x1e8(r3)

lbl_8017983C:
	cmpwi    r5, 4
	bnelr
	lwz      r0, 0x1e4(r3)
	add      r0, r0, r4
	stw      r0, 0x1e4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80179854
 * Size:	000454
 */
void Onyon::exitPiki(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stmw     r27, 0x5c(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lis      r5, lbl_8047E620@ha
	mr       r28, r3
	lbz      r0, 0x3c(r4)
	addi     r27, r5, lbl_8047E620@l
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_80179890
	li       r3, 0
	b        lbl_80179C8C

lbl_80179890:
	lhz      r0, 0x22e(r28)
	li       r30, -1
	cmplwi   r0, 4
	mr       r31, r0
	bne      lbl_801798E0
	lwz      r0, 0x1e4(r28)
	cmpwi    r0, 0
	ble      lbl_801798B8
	li       r31, 4
	b        lbl_801798E0

lbl_801798B8:
	lwz      r0, 0x1e8(r28)
	cmpwi    r0, 0
	ble      lbl_801798CC
	li       r31, 3
	b        lbl_801798E0

lbl_801798CC:
	addi     r3, r27, 0x18
	addi     r5, r27, 0x180
	li       r4, 0x8f8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801798E0:
	li       r29, 2

lbl_801798E4:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	mr       r5, r29
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r0, 0(r3)
	cmpwi    r0, 0
	ble      lbl_8017990C
	mr       r30, r29
	b        lbl_80179914

lbl_8017990C:
	addic.   r29, r29, -1
	bge      lbl_801798E4

lbl_80179914:
	cmpwi    r30, -1
	bne      lbl_80179924
	li       r3, 0
	b        lbl_80179C8C

lbl_80179924:
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r29, r3, r3
	bne      lbl_8017995C
	li       r0, 0
	li       r3, 0
	stw      r0, 0x1d8(r28)
	stw      r0, 0x1e4(r28)
	stw      r0, 0x1e8(r28)
	stb      r0, 0x1e0(r28)
	b        lbl_80179C8C

lbl_8017995C:
	cmpwi    r31, 4
	bne      lbl_80179974
	lwz      r3, 0x1e4(r28)
	addi     r0, r3, -1
	stw      r0, 0x1e4(r28)
	b        lbl_80179988

lbl_80179974:
	cmpwi    r31, 3
	bne      lbl_80179988
	lwz      r3, 0x1e8(r28)
	addi     r0, r3, -1
	stw      r0, 0x1e8(r28)

lbl_80179988:
	cmplwi   r29, 0
	bne      lbl_801799A4
	addi     r3, r27, 0x18
	addi     r5, r27, 0x60
	li       r4, 0x922
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801799A4:
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r31
	mr       r5, r30
	addi     r3, r3, 0xa8
	bl       getCount__Q24Game13PikiContainerFii
	lwz      r5, 0(r3)
	mr       r4, r31
	addi     r0, r5, -1
	stw      r0, 0(r3)
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	mr       r3, r29
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r29
	mr       r4, r31
	bl       changeShape__Q24Game4PikiFi
	mr       r3, r29
	mr       r4, r30
	bl       changeHappa__Q24Game4PikiFi
	lhz      r0, 0x22e(r28)
	cmplwi   r0, 4
	bne      lbl_80179C5C
	mr       r4, r28
	addi     r3, r1, 0x1c
	bl       getOutStart_UFO__Q24Game5OnyonFv
	lfs      f2, 0x1c(r1)
	mr       r4, r28
	lfs      f1, 0x20(r1)
	addi     r3, r1, 0x10
	lfs      f0, 0x24(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	lwz      r12, 0(r28)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	lfs      f0, 0x14(r1)
	lfs      f1, 0x40(r1)
	fsubs    f4, f2, f0
	lfs      f0, 0x10(r1)
	lfs      f3, 0x48(r1)
	fsubs    f2, f1, f0
	lfs      f0, 0x18(r1)
	fmuls    f5, f4, f4
	fsubs    f3, f3, f0
	lfs      f1, lbl_80518A2C@sda21(r2)
	fmuls    f0, f2, f2
	stfs     f2, 0x34(r1)
	fmuls    f6, f3, f3
	fadds    f0, f0, f5
	stfs     f4, 0x38(r1)
	stfs     f3, 0x3c(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80179AAC
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80179AB0
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80179AB0

lbl_80179AAC:
	fmr      f3, f1

lbl_80179AB0:
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80179AE8
	lfs      f0, lbl_80518A58@sda21(r2)
	lfs      f2, 0x34(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)

lbl_80179AE8:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x54(r1)
	mr       r3, r29
	lfd      f2, lbl_80518B08@sda21(r2)
	addi     r4, r1, 0x40
	stw      r0, 0x50(r1)
	li       r5, 0
	lfs      f0, lbl_80518AEC@sda21(r2)
	lfd      f1, 0x50(r1)
	lfs      f4, lbl_80518A30@sda21(r2)
	fsubs    f5, f1, f2
	lfs      f3, lbl_80518A50@sda21(r2)
	lfs      f2, 0x3c(r1)
	lfs      f1, 0x38(r1)
	fdivs    f5, f5, f0
	lfs      f0, 0x34(r1)
	fmadds   f3, f4, f5, f3
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x3c(r1)
	stfs     f0, 0x34(r1)
	stfs     f1, 0x38(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r29
	addi     r4, r1, 0x34
	lwz      r12, 0(r29)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r4, r28
	li       r5, 0x281e
	li       r6, 1
	bl       startSound__Q24Game4PikiFPQ24Game8CreatureUlb
	lfs      f0, 0x228(r28)
	stfs     f0, 0x1fc(r29)
	lwz      r3, 0x294(r29)
	bl       searchOrima__Q26PikiAI5BrainFv
	cmplwi   r3, 0
	beq      lbl_80179BE0
	stw      r3, 0x2c4(r29)
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	addi     r5, r4, __vt__Q26PikiAI9ActionArg@l
	li       r0, 0
	lis      r4, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r5, 0x28(r1)
	addi     r5, r4, __vt__Q26PikiAI17CreatureActionArg@l
	lis      r4, __vt__Q26PikiAI19ActFormationInitArg@ha
	stw      r5, 0x28(r1)
	addi     r6, r4, __vt__Q26PikiAI19ActFormationInitArg@l
	addi     r5, r1, 0x28
	li       r4, 0
	stw      r3, 0x2c(r1)
	stw      r6, 0x28(r1)
	stb      r0, 0x30(r1)
	stb      r0, 0x31(r1)
	lwz      r3, 0x294(r29)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	b        lbl_80179BF0

lbl_80179BE0:
	lwz      r3, 0x294(r29)
	li       r4, 1
	li       r5, 0
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_80179BF0:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r30, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r30, r3
	bne      lbl_80179C88
	lwz      r3, 0x218(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lfs      f31, lbl_80518A2C@sda21(r2)
	mr       r3, r28
	li       r4, 1
	bl       getPMotionSpeed__Q24Game5OnyonFi
	stfs     f31, 0(r3)
	b        lbl_80179C88

lbl_80179C5C:
	lis      r4, __vt__Q26PikiAI9ActionArg@ha
	lis      r3, __vt__Q26PikiAI17CreatureActionArg@ha
	addi     r4, r4, __vt__Q26PikiAI9ActionArg@l
	stw      r28, 0xc(r1)
	addi     r0, r3, __vt__Q26PikiAI17CreatureActionArg@l
	addi     r5, r1, 8
	stw      r4, 8(r1)
	li       r4, 3
	stw      r0, 8(r1)
	lwz      r3, 0x294(r29)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg

lbl_80179C88:
	mr       r3, r29

lbl_80179C8C:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	lmw      r27, 0x5c(r1)
	lwz      r0, 0x84(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80179CA8
 * Size:	0000B8
 */
void Onyon::insideAccessArea(Vector3f&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	lhz      r0, 0x22e(r3)
	cmplwi   r0, 4
	bne      lbl_80179D14
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 0x198(r12)
	mtctr    r12
	bctrl
	lfs      f1, 8(r31)
	lfs      f0, 0x10(r1)
	lfs      f2, 0(r31)
	fsubs    f3, f1, f0
	lfs      f1, 8(r1)
	lfs      f0, lbl_80518B24@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80179D48
	li       r3, 1
	b        lbl_80179D4C

lbl_80179D14:
	lfs      f1, 8(r31)
	lfs      f0, 0x1a4(r3)
	lfs      f2, 0(r31)
	fsubs    f3, f1, f0
	lfs      f1, 0x19c(r3)
	lfs      f0, lbl_80518B24@sda21(r2)
	fsubs    f2, f2, f1
	fmuls    f1, f3, f3
	fmadds   f1, f2, f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80179D48
	li       r3, 1
	b        lbl_80179D4C

lbl_80179D48:
	li       r3, 0

lbl_80179D4C:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000048
//  */
// void Onyon::insideBootArea(Vector3f&)
// {
// 	// UNUSED FUNCTION
// }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000088
//  */
// void Onyon::getOnyonState(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	80179D60
 * Size:	00011C
 */
BaseItem* ItemOnyon::Mgr::generatorBirth(Vector3f&, Vector3f&, GenItemParm*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r29, r6
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  li        r30, 0
	  lwz       r0, 0x4(r6)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x6C
	  bge-      .loc_0x44
	  cmpwi     r0, 0
	  beq-      .loc_0x54
	  bge-      .loc_0x60
	  b         .loc_0x84

	.loc_0x44:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x80
	  bge-      .loc_0x84
	  b         .loc_0x78

	.loc_0x54:
	  li        r31, 0
	  li        r30, 0
	  b         .loc_0x84

	.loc_0x60:
	  li        r31, 0
	  li        r30, 0x1
	  b         .loc_0x84

	.loc_0x6C:
	  li        r31, 0
	  li        r30, 0x2
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, 0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, 0x2

	.loc_0x84:
	  cmpwi     r31, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D22C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB4
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  beq-      .loc_0xB4
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xB4:
	  lbz       r0, 0x8(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0xDC
	  lwz       r3, -0x6B70(r13)
	  mr        r4, r30
	  bl        0x6D1F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xDC
	  li        r3, 0
	  b         .loc_0x108

	.loc_0xDC:
	  mr        r3, r26
	  mr        r4, r31
	  mr        r5, r30
	  bl        0x1094
	  lfs       f0, 0x4(r28)
	  mr        r30, r3
	  mr        r4, r27
	  li        r5, 0
	  stfs      f0, 0x228(r3)
	  bl        -0x3ECB8
	  mr        r3, r30

	.loc_0x108:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80179E7C
 * Size:	000004
 */
void ItemOnyon::Mgr::setupSoundViewerAndBas(void) { }

/*
 * --INFO--
 * Address:	80179E80
 * Size:	0000C4
 */
void Onyon::getInEnd_UFO(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x248(r4)
	cmplwi   r0, 0
	beq      lbl_80179EF8
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r0
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)
	b        lbl_80179F30

lbl_80179EF8:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7BC@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0x9f1
	addi     r5, r5, lbl_8047E7BC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 4(r31)
	lfs      f0, 8(r3)
	stfs     f0, 8(r31)

lbl_80179F30:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80179F44
 * Size:	000168
 */
void Onyon::getInStart_UFO(void)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stfd     f30, 0x40(r1)
	psq_st   f30, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r3, 0x248(r4)
	cmplwi   r3, 0
	beq      lbl_80179FBC
	lfs      f1, lbl_80518A2C@sda21(r2)
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f31, 8(r1)
	lfs      f30, 0x10(r1)
	lfs      f0, 0xc(r1)
	stfs     f31, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f30, 0x1c(r1)
	b        lbl_80179FE4

lbl_80179FBC:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7BC@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0x9f1
	addi     r5, r5, lbl_8047E7BC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f31, "zero__10Vector3<f>"@l(r3)
	lfs      f30, 8(r3)

lbl_80179FE4:
	mr       r4, r31
	addi     r3, r1, 0x20
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f7, 0x20(r1)
	lfs      f4, 0x28(r1)
	fsubs    f2, f31, f7
	lfs      f5, lbl_80518A2C@sda21(r2)
	fsubs    f6, f30, f4
	lfs      f3, 0x24(r1)
	fmadds   f0, f2, f2, f5
	fmuls    f1, f6, f6
	fadds    f1, f1, f0
	fcmpo    cr0, f1, f5
	ble      lbl_8017A038
	ble      lbl_8017A03C
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8017A03C

lbl_8017A038:
	fmr      f1, f5

lbl_8017A03C:
	lfs      f0, lbl_80518A2C@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_8017A05C
	lfs      f0, lbl_80518A58@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f5, f5, f0
	fmuls    f6, f6, f0

lbl_8017A05C:
	lfs      f0, lbl_80518B2C@sda21(r2)
	fmuls    f2, f2, f0
	fmuls    f1, f5, f0
	fmuls    f0, f6, f0
	fadds    f2, f7, f2
	fadds    f1, f3, f1
	fadds    f0, f4, f0
	stfs     f2, 0(r30)
	stfs     f1, 4(r30)
	stfs     f0, 8(r30)
	psq_l    f31, 88(r1), 0, qr0
	lfd      f31, 0x50(r1)
	psq_l    f30, 72(r1), 0, qr0
	lfd      f30, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r0, 0x64(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A0AC
 * Size:	0000C4
 */
void Onyon::getOutStart_UFO(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lwz      r0, 0x24c(r4)
	cmplwi   r0, 0
	beq      lbl_8017A124
	lfs      f1, lbl_80518A2C@sda21(r2)
	mr       r3, r0
	lfs      f0, lbl_80518B28@sda21(r2)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	stfs     f2, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)
	b        lbl_8017A15C

lbl_8017A124:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E7C8@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa09
	addi     r5, r5, lbl_8047E7C8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f0, "zero__10Vector3<f>"@l(r3)
	stfs     f0, 0(r31)
	lfs      f0, 4(r3)
	stfs     f0, 4(r31)
	lfs      f0, 8(r3)
	stfs     f0, 8(r31)

lbl_8017A15C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000124
//  */
// void Onyon::init_pmotions(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8017A1A4
 * Size:	00007C
 */
void Onyon::getPMotionSpeed(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_8017A1D8
	lwz      r0, 0x250(r30)
	cmpw     r31, r0
	bge      lbl_8017A1D8
	li       r3, 1

lbl_8017A1D8:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A1FC
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa2b
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A1FC:
	lwz      r3, 0x258(r30)
	slwi     r0, r31, 2
	add      r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A220
 * Size:	00007C
 */
void Onyon::getPAnimator(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	or.      r31, r4, r4
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 0
	blt      lbl_8017A254
	lwz      r0, 0x250(r30)
	cmpw     r31, r0
	bge      lbl_8017A254
	li       r3, 1

lbl_8017A254:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A278
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa31
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A278:
	mulli    r0, r31, 0x1c
	lwz      r3, 0x254(r30)
	add      r3, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000094
//  */
// void Onyon::start_pmotion(int, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8017A29C
 * Size:	000198
 */
void Onyon::update_pmotions(void)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r26, r3
	lwz      r3, sys@sda21(r13)
	lhz      r0, 0x22e(r26)
	lis      r4, lbl_8047E620@ha
	lfs      f31, 0x54(r3)
	addi     r31, r4, lbl_8047E620@l
	cmplwi   r0, 4
	bne      lbl_8017A418
	li       r30, 0
	addi     r28, r1, 8
	mr       r29, r30
	li       r27, 0
	b        lbl_8017A40C

lbl_8017A2E8:
	lwz      r5, 0x1cc(r31)
	cmpwi    r27, 0
	lwz      r4, 0x1d0(r31)
	li       r3, 0
	lwz      r0, 0x1d4(r31)
	stw      r5, 8(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	blt      lbl_8017A31C
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	bge      lbl_8017A31C
	li       r3, 1

lbl_8017A31C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A338
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A338:
	lwz      r0, 0x254(r26)
	cmpwi    r27, 0
	li       r3, 0
	add      r25, r0, r30
	blt      lbl_8017A35C
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	bge      lbl_8017A35C
	li       r3, 1

lbl_8017A35C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A378
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A378:
	mr       r3, r25
	lwz      r4, 0x258(r26)
	lwz      r12, 0(r25)
	lfsx     f0, r4, r29
	lwz      r12, 0xc(r12)
	fmuls    f1, f31, f0
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r26)
	lwz      r4, 0(r28)
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_8017A3E4
	lhz      r24, 0x38(r3)
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r25, 0x174(r26)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 8(r25)
	rlwinm   r0, r24, 2, 0xe, 0x1d
	lwz      r4, 4(r4)
	lwz      r4, 0x28(r4)
	lwzx     r4, r4, r0
	stw      r3, 0x54(r4)
	b        lbl_8017A3FC

lbl_8017A3E4:
	lwz      r6, 0(r28)
	addi     r3, r31, 0x18
	addi     r5, r31, 0x1d8
	li       r4, 0xa53
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017A3FC:
	addi     r30, r30, 0x1c
	addi     r29, r29, 4
	addi     r28, r28, 4
	addi     r27, r27, 1

lbl_8017A40C:
	lwz      r0, 0x250(r26)
	cmpw     r27, r0
	blt      lbl_8017A2E8

lbl_8017A418:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A434
 * Size:	0001E8
 */
void ItemOnyon::Mgr::initDependency(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	addi     r3, r3, 0x4c
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017A480
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5EC

lbl_8017A480:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A4EC

lbl_8017A498:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A5EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017A4EC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017A498
	b        lbl_8017A5EC

lbl_8017A50C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x1bc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017A55C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5EC

lbl_8017A55C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017A5D0

lbl_8017A57C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017A5EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017A5D0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017A57C

lbl_8017A5EC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017A50C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A61C
 * Size:	000004
 */
void BaseItem::initDependency() { }

/*
 * --INFO--
 * Address:	8017A620
 * Size:	00004C
 */
J3DModelData* ItemOnyon::Mgr::generatorGetShape(GenItemParm*)
{
	/*
	lwz      r0, 4(r4)
	cmpwi    r0, 3
	beq      lbl_8017A650
	bge      lbl_8017A63C
	cmpwi    r0, 0
	bge      lbl_8017A648
	b        lbl_8017A65C

lbl_8017A63C:
	cmpwi    r0, 5
	bge      lbl_8017A65C
	b        lbl_8017A658

lbl_8017A648:
	li       r4, 0
	b        lbl_8017A65C

lbl_8017A650:
	li       r4, 1
	b        lbl_8017A65C

lbl_8017A658:
	li       r4, 2

lbl_8017A65C:
	lwz      r3, 0x1c(r3)
	slwi     r0, r4, 2
	lwzx     r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A66C
 * Size:	000054
 */
GenItemParm* ItemOnyon::Mgr::generatorNewItemParm()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r3, 0xc
	stw      r0, 0x14(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8017A6B0
	lis      r4, __vt__Q24Game11GenItemParm@ha
	lis      r5, __vt__12GenOnyonParm@ha
	addi     r0, r4, __vt__Q24Game11GenItemParm@l
	li       r4, 0
	stw      r0, 0(r3)
	addi     r5, r5, __vt__12GenOnyonParm@l
	li       r0, 1
	stw      r5, 0(r3)
	stw      r4, 4(r3)
	stb      r0, 8(r3)

lbl_8017A6B0:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A6C0
 * Size:	00008C
 */
void ItemOnyon::Mgr::generatorWrite(Stream&, Game::GenItemParm*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	mr       r3, r30
	lwz      r4, 0x414(r4)
	bl       textWriteTab__6StreamFi
	lwz      r4, 4(r31)
	mr       r3, r30
	bl       writeInt__6StreamFi
	lis      r4, lbl_8047E808@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E808@l
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r4, 0x414(r30)
	mr       r3, r30
	bl       textWriteTab__6StreamFi
	lbz      r4, 8(r31)
	mr       r3, r30
	bl       writeByte__6StreamFUc
	lis      r4, lbl_8047E81C@ha
	mr       r3, r30
	addi     r4, r4, lbl_8047E81C@l
	crclr    6
	bl       textWriteText__6StreamFPce
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A74C
 * Size:	000078
 */
void ItemOnyon::Mgr::generatorRead(Stream&, Game::GenItemParm*, unsigned long)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	mr       r3, r29
	bl       readInt__6StreamFv
	lis      r4, 0x30303031@ha
	stw      r3, 4(r30)
	addi     r0, r4, 0x30303031@l
	cmplw    r31, r0
	blt      lbl_8017A7A8
	mr       r3, r29
	bl       readByte__6StreamFv
	clrlwi   r0, r3, 0x18
	subfic   r0, r0, 1
	cntlzw   r0, r0
	srwi     r0, r0, 5
	stb      r0, 8(r30)

lbl_8017A7A8:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017A7C4
 * Size:	000188
 */
ItemOnyon::Mgr::Mgr(void)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	extsh.   r0, r4
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	beq      lbl_8017A7F0
	addi     r0, r31, 0x118
	stw      r0, 4(r31)

lbl_8017A7F0:
	mr       r3, r31
	li       r4, 0
	li       r5, 1
	bl       __ct__Q24Game11BaseItemMgrFi
	addi     r29, r31, 0x30
	mr       r3, r29
	bl       __ct__5CNodeFv
	lis      r3, __vt__16GenericContainer@ha
	li       r5, 0
	addi     r0, r3, __vt__16GenericContainer@l
	addi     r30, r31, 0x4c
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	stw      r0, 0(r29)
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	stw      r0, 0(r29)
	lis      r3, __vt__Q34Game9ItemOnyon3Mgr@ha
	addi     r4, r3, __vt__Q34Game9ItemOnyon3Mgr@l
	stb      r5, 0x18(r29)
	addi     r0, r4, 0x74
	mr       r3, r30
	stw      r4, 0(r31)
	stw      r0, 0x30(r31)
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r5, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r30)
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	lis      r4, "__vt__24ObjectMgr<Q24Game5Onyon>"@ha
	lis      r3, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@ha
	stw      r0, 0(r30)
	li       r0, 0
	addi     r6, r4, "__vt__24ObjectMgr<Q24Game5Onyon>"@l
	addi     r4, r3, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@l
	stb      r0, 0x18(r30)
	addi     r0, r5, __vt__16GenericObjectMgr@l
	addi     r29, r30, 0x20
	addi     r5, r6, 0x2c
	stw      r0, 0x1c(r30)
	addi     r0, r4, 0x2c
	mr       r3, r29
	stw      r6, 0(r30)
	stw      r5, 0x1c(r30)
	stw      r4, 0(r30)
	stw      r0, 0x1c(r30)
	bl       __ct__5CNodeFv
	lis      r3, "__vt__26TObjectNode<Q24Game5Onyon>"@ha
	lis      r4, __ct__Q23Sys18MatTevRegAnimationFv@ha
	addi     r0, r3, "__vt__26TObjectNode<Q24Game5Onyon>"@l
	li       r5, 0
	stw      r0, 0(r29)
	addi     r3, r31, 0xb4
	addi     r4, r4, __ct__Q23Sys18MatTevRegAnimationFv@l
	li       r6, 0x14
	li       r7, 3
	bl       __construct_array
	lis      r4, __ct__Q23Sys18MatTevRegAnimationFv@ha
	addi     r3, r31, 0xf0
	addi     r4, r4, __ct__Q23Sys18MatTevRegAnimationFv@l
	li       r5, 0
	li       r6, 0x14
	li       r7, 2
	bl       __construct_array
	li       r4, 0
	addi     r0, r2, lbl_80518B30@sda21
	stw      r4, 0xa8(r31)
	li       r3, 0xc
	stw      r4, 0xa4(r31)
	stw      r4, 0xa0(r31)
	stw      r4, 0xb0(r31)
	stw      r4, 0xac(r31)
	stw      r0, 8(r31)
	bl       __nwa__FUl
	stw      r3, 0x1c(r31)
	li       r0, 0
	mr       r3, r31
	stw      r0, 0x88(r31)
	stw      r0, 0x8c(r31)
	stw      r0, 0x90(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017AB6C
 * Size:	00011C
 */
ItemOnyon::Mgr::~Mgr(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017AC6C
	lis      r3, __vt__Q34Game9ItemOnyon3Mgr@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, __vt__Q34Game9ItemOnyon3Mgr@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x74
	stw      r0, 0x30(r30)
	beq      lbl_8017AC28
	lis      r4, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@ha
	addic.   r3, r30, 0x6c
	addi     r4, r4, "__vt__28NodeObjectMgr<Q24Game5Onyon>"@l
	stw      r4, 0x4c(r30)
	addi     r0, r4, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8017ABD8
	lis      r4, "__vt__26TObjectNode<Q24Game5Onyon>"@ha
	addi     r0, r4, "__vt__26TObjectNode<Q24Game5Onyon>"@l
	stw      r0, 0x6c(r30)
	li       r4, 0
	bl       __dt__5CNodeFv

lbl_8017ABD8:
	addic.   r0, r30, 0x4c
	beq      lbl_8017AC28
	lis      r3, "__vt__24ObjectMgr<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x4c
	addi     r3, r3, "__vt__24ObjectMgr<Q24Game5Onyon>"@l
	stw      r3, 0x4c(r30)
	addi     r0, r3, 0x2c
	stw      r0, 0x68(r30)
	beq      lbl_8017AC28
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x4c
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	stw      r0, 0x4c(r30)
	beq      lbl_8017AC28
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x4c
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x4c(r30)
	bl       __dt__5CNodeFv

lbl_8017AC28:
	addic.   r0, r30, 0x30
	beq      lbl_8017AC5C
	lis      r3, "__vt__24Container<Q24Game5Onyon>"@ha
	addic.   r0, r30, 0x30
	addi     r0, r3, "__vt__24Container<Q24Game5Onyon>"@l
	stw      r0, 0x30(r30)
	beq      lbl_8017AC5C
	lis      r4, __vt__16GenericContainer@ha
	addi     r3, r30, 0x30
	addi     r0, r4, __vt__16GenericContainer@l
	li       r4, 0
	stw      r0, 0x30(r30)
	bl       __dt__5CNodeFv

lbl_8017AC5C:
	extsh.   r0, r31
	ble      lbl_8017AC6C
	mr       r3, r30
	bl       __dl__FPv

lbl_8017AC6C:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017AC88
 * Size:	000254
 */
void Onyon::on_movie_end(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lhz      r4, 0x22e(r3)
	cmplwi   r4, 4
	bne      lbl_8017ACC4
	lbz      r0, 0x240(r31)
	cmplwi   r0, 5
	bne      lbl_8017ACFC
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x1d4(r31)
	b        lbl_8017ACFC

lbl_8017ACC4:
	cmplwi   r4, 2
	li       r5, 0
	bgt      lbl_8017ACE4
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8017ACE4
	li       r5, 1

lbl_8017ACE4:
	clrlwi.  r0, r5, 0x18
	beq      lbl_8017ACF4
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasBootContainer__Q24Game8PlayDataFi

lbl_8017ACF4:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)

lbl_8017ACFC:
	lhz      r4, 0x22e(r31)
	cmplwi   r4, 2
	bgt      lbl_8017AD28
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_8017AD1C
	lha      r0, 0x20(r3)
	b        lbl_8017AD20

lbl_8017AD1C:
	li       r0, -1

lbl_8017AD20:
	cmpwi    r0, 1
	beq      lbl_8017AEC4

lbl_8017AD28:
	cmplwi   r4, 4
	bne      lbl_8017AE24
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r30, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r30, r3
	ble      lbl_8017ADC4
	lwz      r0, 0x250(r31)
	cmpwi    r0, 1
	bgt      lbl_8017AD84
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa2b
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017AD84:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r31)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017AEC4

lbl_8017ADC4:
	lwz      r3, 0x218(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r31)
	cmpwi    r0, 1
	bgt      lbl_8017AE14
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E680@ha
	addi     r3, r3, lbl_8047E638@l
	li       r4, 0xa2b
	addi     r5, r5, lbl_8047E680@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017AE14:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r31)
	stfs     f0, 4(r3)
	b        lbl_8017AEC4

lbl_8017AE24:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r31)
	lhz      r4, 0x22e(r31)
	cmplwi   r4, 3
	bne      lbl_8017AE4C
	addi     r3, r31, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017AEC4

lbl_8017AE4C:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017AEA8
	lwz      r3, 0x1b4(r31)
	cmplwi   r3, 0
	beq      lbl_8017AE74
	lha      r0, 0x20(r3)
	b        lbl_8017AE78

lbl_8017AE74:
	li       r0, -1

lbl_8017AE78:
	cmplwi   r0, 1
	ble      lbl_8017AE88
	cmpwi    r0, 3
	bne      lbl_8017AEC4

lbl_8017AE88:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8017AE98
	addi     r5, r31, 0x178

lbl_8017AE98:
	addi     r3, r31, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017AEC4

lbl_8017AEA8:
	cmplwi   r31, 0
	mr       r5, r31
	beq      lbl_8017AEB8
	addi     r5, r31, 0x178

lbl_8017AEB8:
	addi     r3, r31, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017AEC4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017AEDC
 * Size:	000BC0
 */
void ItemOnyon::Mgr::birth(int, int)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, lbl_8047E620@ha
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r30, r3
	mr       r28, r4
	mr       r26, r5
	addi     r31, r6, lbl_8047E620@l
	li       r25, 0
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_8017AF24
	bl       __ct__5CNodeFv
	lis      r3, "__vt__26TObjectNode<Q24Game5Onyon>"@ha
	addi     r0, r3, "__vt__26TObjectNode<Q24Game5Onyon>"@l
	stw      r0, 0(r29)

lbl_8017AF24:
	cmpwi    r28, 1
	beq      lbl_8017B2EC
	bge      lbl_8017AF3C
	cmpwi    r28, 0
	bge      lbl_8017AF48
	b        lbl_8017BA60

lbl_8017AF3C:
	cmpwi    r28, 3
	bge      lbl_8017BA60
	b        lbl_8017B600

lbl_8017AF48:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017AFD4
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017AF8C
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017AF8C:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r25, r3, r3
	beq      lbl_8017AFC4
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r25)

lbl_8017AFC4:
	stw      r25, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017AFD4:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B030
	lwz      r4, 0x1c(r30)
	li       r5, 0
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B030:
	stw      r0, 0x174(r27)
	mr       r3, r27
	mr       r4, r26
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lis      r4, 0x6C656731@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656731@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B078
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B078:
	lis      r4, 0x6C656732@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656732@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B098
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B098:
	lis      r4, 0x6C656733@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x6C656733@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	beq      lbl_8017B0B8
	li       r0, 1
	stb      r0, 0x58(r3)

lbl_8017B0B8:
	cmplwi   r3, 0
	bne      lbl_8017B0D4
	addi     r3, r31, 0x18
	addi     r5, r31, 0xdc
	li       r4, 0x695
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B0D4:
	lis      r4, 0x666F7431@ha
	lwz      r3, 0x114(r27)
	addi     r4, r4, 0x666F7431@l
	bl       getCollPart__8CollTreeFUl
	cmplwi   r3, 0
	bne      lbl_8017B100
	addi     r3, r31, 0x18
	addi     r5, r31, 0xe8
	li       r4, 0x69a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B100:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B1F0
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r28, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r28, r3
	ble      lbl_8017B198
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B158
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B158:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017B290

lbl_8017B198:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B1E0
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B1E0:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017B290

lbl_8017B1F0:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B218
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B290

lbl_8017B218:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017B274
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017B240
	lha      r0, 0x20(r3)
	b        lbl_8017B244

lbl_8017B240:
	li       r0, -1

lbl_8017B244:
	cmplwi   r0, 1
	ble      lbl_8017B254
	cmpwi    r0, 3
	bne      lbl_8017B290

lbl_8017B254:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B264
	addi     r5, r27, 0x178

lbl_8017B264:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B290

lbl_8017B274:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B284
	addi     r5, r27, 0x178

lbl_8017B284:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017B290:
	slwi     r0, r26, 2
	mr       r25, r27
	add      r3, r30, r0
	mr       r4, r26
	stw      r27, 0xa0(r3)
	lwz      r3, playData__4Game@sda21(r13)
	bl       hasBootContainer__Q24Game8PlayDataFi
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_8017BA60
	lwz      r3, playData__4Game@sda21(r13)
	mr       r4, r26
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017BA60
	addi     r3, r27, 0x1a8
	li       r4, 4
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0x1d4(r27)
	b        lbl_8017BA60

lbl_8017B2EC:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017B378
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B330
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017B330:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8017B368
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r26)

lbl_8017B368:
	stw      r26, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017B378:
	lwz      r3, shadowMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8017B398
	mr       r4, r27
	bl       createShadow__Q24Game9ShadowMgrFPQ24Game8Creature
	lwz      r3, shadowMgr__4Game@sda21(r13)
	mr       r4, r27
	bl       addShadow__Q24Game9ShadowMgrFPQ24Game8Creature

lbl_8017B398:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B3F4
	lwz      r4, 0x1c(r30)
	li       r5, 0
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B3F4:
	stw      r0, 0x174(r27)
	mr       r3, r27
	li       r4, 3
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B50C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r26, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r26, r3
	ble      lbl_8017B4B4
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B474
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B474:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017B5AC

lbl_8017B4B4:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B4FC
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B4FC:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017B5AC

lbl_8017B50C:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B534
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B5AC

lbl_8017B534:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017B590
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017B55C
	lha      r0, 0x20(r3)
	b        lbl_8017B560

lbl_8017B55C:
	li       r0, -1

lbl_8017B560:
	cmplwi   r0, 1
	ble      lbl_8017B570
	cmpwi    r0, 3
	bne      lbl_8017B5AC

lbl_8017B570:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B580
	addi     r5, r27, 0x178

lbl_8017B580:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017B5AC

lbl_8017B590:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017B5A0
	addi     r5, r27, 0x178

lbl_8017B5A0:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017B5AC:
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	stw      r27, 0xac(r30)
	mr       r25, r27
	b        lbl_8017BA60

lbl_8017B600:
	li       r3, 0x260
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_8017B68C
	li       r4, 0x402
	bl       __ct__Q24Game8BaseItemFi
	lis      r4, __vt__Q24Game5Onyon@ha
	li       r3, 8
	addi     r4, r4, __vt__Q24Game5Onyon@l
	stw      r4, 0(r27)
	addi     r0, r4, 0x1b0
	stw      r0, 0x178(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B644
	bl       __ct__8CollTreeFv
	mr       r0, r3

lbl_8017B644:
	stw      r0, 0x114(r27)
	li       r0, 0
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r3, 0xc
	stfs     f0, 0x118(r27)
	stw      r0, 0x23c(r27)
	stfs     f0, 0x228(r27)
	bl       __nw__FUl
	or.      r26, r3, r3
	beq      lbl_8017B67C
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	addi     r0, r3, __vt__Q23Sys15MatLoopAnimator@l
	stw      r0, 0(r26)

lbl_8017B67C:
	stw      r26, 0x234(r27)
	li       r0, 0
	stw      r0, 0x238(r27)
	stw      r0, 0x1f4(r27)

lbl_8017B68C:
	mr       r3, r27
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	slwi     r25, r28, 2
	addi     r3, r27, 0x1a8
	add      r5, r30, r25
	li       r4, 0
	lwz      r0, 0x88(r5)
	li       r5, 0
	stw      r0, 0x1b8(r27)
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A2C@sda21(r2)
	li       r0, 0x403
	li       r3, 0x14
	stfs     f0, 0x1d4(r27)
	sth      r0, 0x128(r27)
	bl       __nw__FUl
	or.      r0, r3, r3
	beq      lbl_8017B6F0
	lwz      r4, 0x1c(r30)
	lis      r5, 8
	li       r6, 2
	lwzx     r4, r4, r25
	bl       __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
	mr       r0, r3

lbl_8017B6F0:
	stw      r0, 0x174(r27)
	lis      r4, 0x100
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       newDifferedDisplayList__8J3DModelFUl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       makeDL__8J3DModelFv
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       lock__8J3DModelFv
	mr       r3, r27
	li       r4, 4
	bl       setType__Q24Game5OnyonFi
	add      r5, r30, r25
	lwz      r3, 0x114(r27)
	lwz      r4, 0x174(r27)
	li       r6, 0
	lwz      r5, 0x94(r5)
	bl
createFromFactory__8CollTreeFPQ28SysShape9MtxObjectP15CollPartFactoryP11CollPartMgr
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B8B8
	li       r0, 3
	stw      r0, 0x250(r27)
	lwz      r25, 0x250(r27)
	mulli    r3, r25, 0x1c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q28SysShape8AnimatorFv@ha
	mr       r7, r25
	addi     r4, r4, __ct__Q28SysShape8AnimatorFv@l
	li       r5, 0
	li       r6, 0x1c
	bl       __construct_new_array
	stw      r3, 0x254(r27)
	lwz      r0, 0x250(r27)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r5, 0
	stw      r3, 0x258(r27)
	mr       r6, r5
	mr       r7, r5
	b        lbl_8017B808

lbl_8017B7D0:
	lwz      r4, 0x1b8(r27)
	cmpwi    r5, 0
	lwz      r3, 0x254(r27)
	addi     r0, r6, 0x10
	stwx     r4, r3, r0
	bne      lbl_8017B7F0
	lfs      f0, lbl_80518A30@sda21(r2)
	b        lbl_8017B7F4

lbl_8017B7F0:
	lfs      f0, lbl_80518A2C@sda21(r2)

lbl_8017B7F4:
	lwz      r3, 0x258(r27)
	addi     r6, r6, 0x1c
	addi     r5, r5, 1
	stfsx    f0, r3, r7
	addi     r7, r7, 4

lbl_8017B808:
	lwz      r0, 0x250(r27)
	cmpw     r5, r0
	blt      lbl_8017B7D0
	cmpwi    r0, 0
	bgt      lbl_8017B830
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B830:
	lwz      r3, 0x254(r27)
	li       r4, 1
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B860
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B860:
	lwz      r3, 0x254(r27)
	li       r4, 2
	li       r5, 0
	addi     r3, r3, 0x1c
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lwz      r0, 0x250(r27)
	cmpwi    r0, 2
	bgt      lbl_8017B894
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa31
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B894:
	lwz      r3, 0x254(r27)
	li       r4, 3
	li       r5, 0
	addi     r3, r3, 0x38
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	lfs      f0, lbl_80518A30@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 8(r3)
	b        lbl_8017B8C8

lbl_8017B8B8:
	li       r0, 0
	stw      r0, 0x250(r27)
	stw      r0, 0x254(r27)
	stw      r0, 0x258(r27)

lbl_8017B8C8:
	lhz      r0, 0x22e(r27)
	cmplwi   r0, 4
	bne      lbl_8017B9B8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 4
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	lwz      r5, playData__4Game@sda21(r13)
	mr       r26, r3
	li       r4, 3
	addi     r3, r5, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	add.     r0, r26, r3
	ble      lbl_8017B960
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B920
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B920:
	lfs      f0, lbl_80518A30@sda21(r2)
	li       r4, 0
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8017BA58

lbl_8017B960:
	lwz      r3, 0x218(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x21c(r27)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x250(r27)
	cmpwi    r0, 1
	bgt      lbl_8017B9A8
	addi     r3, r31, 0x18
	addi     r5, r31, 0x60
	li       r4, 0xa2b
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017B9A8:
	lfs      f0, lbl_80518A2C@sda21(r2)
	lwz      r3, 0x258(r27)
	stfs     f0, 4(r3)
	b        lbl_8017BA58

lbl_8017B9B8:
	lfs      f0, lbl_80518A30@sda21(r2)
	stfs     f0, 0x1d4(r27)
	lhz      r4, 0x22e(r27)
	cmplwi   r4, 3
	bne      lbl_8017B9E0
	addi     r3, r27, 0x1a8
	li       r4, 0
	li       r5, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017BA58

lbl_8017B9E0:
	lwz      r3, playData__4Game@sda21(r13)
	addi     r3, r3, 0xa8
	bl       getColorSum__Q24Game13PikiContainerFi
	cmpwi    r3, 0
	ble      lbl_8017BA3C
	lwz      r3, 0x1b4(r27)
	cmplwi   r3, 0
	beq      lbl_8017BA08
	lha      r0, 0x20(r3)
	b        lbl_8017BA0C

lbl_8017BA08:
	li       r0, -1

lbl_8017BA0C:
	cmplwi   r0, 1
	ble      lbl_8017BA1C
	cmpwi    r0, 3
	bne      lbl_8017BA58

lbl_8017BA1C:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017BA2C
	addi     r5, r27, 0x178

lbl_8017BA2C:
	addi     r3, r27, 0x1a8
	li       r4, 2
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener
	b        lbl_8017BA58

lbl_8017BA3C:
	cmplwi   r27, 0
	mr       r5, r27
	beq      lbl_8017BA4C
	addi     r5, r27, 0x178

lbl_8017BA4C:
	addi     r3, r27, 0x1a8
	li       r4, 0
	bl       startAnim__Q28SysShape8AnimatorFiPQ28SysShape14MotionListener

lbl_8017BA58:
	mr       r25, r27
	stw      r27, 0xb0(r30)

lbl_8017BA60:
	stw      r25, 0x18(r29)
	mr       r4, r29
	addi     r3, r30, 0x6c
	bl       add__5CNodeFP5CNode
	lwz      r3, 0x18(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r3, r25
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BA9C
 * Size:	000060
 */
Onyon* ItemOnyon::Mgr::getOnyon(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmpwi    r4, 0
	stw      r0, 0x14(r1)
	blt      lbl_8017BAC8
	cmpwi    r4, 3
	bge      lbl_8017BAC8
	slwi     r0, r4, 2
	add      r3, r3, r0
	lwz      r3, 0xa0(r3)
	b        lbl_8017BAEC

lbl_8017BAC8:
	lis      r3, lbl_8047E638@ha
	lis      r5, lbl_8047E838@ha
	mr       r6, r4
	li       r4, 0xb72
	addi     r3, r3, lbl_8047E638@l
	addi     r5, r5, lbl_8047E838@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_8017BAEC:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BAFC
 * Size:	000020
 */
void ItemOnyon::Mgr::init(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       load__Q34Game9ItemOnyon3MgrFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017BB1C
 * Size:	000528
 */
void ItemOnyon::Mgr::load(void)
{
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r4, lbl_8047E620@ha
	li       r5, 0
	stw      r0, 0xb4(r1)
	stmw     r27, 0x9c(r1)
	mr       r31, r3
	addi     r30, r4, lbl_8047E620@l
	addi     r4, r30, 0x230
	lwz      r3, sys@sda21(r13)
	bl       heapStatusStart__6SystemFPcP7JKRHeap
	addi     r3, r1, 0x68
	addi     r4, r30, 0x23c
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r3, gLoadResourceMgr@sda21(r13)
	addi     r4, r1, 0x68
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BB70
	lwz      r29, 0x34(r3)
	b        lbl_8017BB74

lbl_8017BB70:
	li       r29, 0

lbl_8017BB74:
	lwz      r3, sys@sda21(r13)
	addi     r4, r30, 0x230
	bl       heapStatusEnd__6SystemFPc
	addi     r3, r30, 0x258
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BBA8
	addi     r3, r30, 0x18
	addi     r5, r30, 0x264
	li       r4, 0xb96
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BBA8:
	mr       r3, r27
	lis      r4, 0x24
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r4, 0x1c(r31)
	li       r28, 0
	li       r0, 0
	stw      r3, 0(r4)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x44(r3)
	cmpwi    r4, 2
	beq      lbl_8017BBDC
	cmpwi    r4, 3
	bne      lbl_8017BBE0

lbl_8017BBDC:
	li       r0, 1

lbl_8017BBE0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8017BBF4
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8017BCDC

lbl_8017BBF4:
	cmpwi    r4, 1
	beq      lbl_8017BCDC
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r1, 0x38
	addi     r4, r30, 0x298
	lbz      r0, 0x2f(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BC18
	addi     r4, r30, 0x27c

lbl_8017BC18:
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r4, r1, 0x38
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x50(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BC40
	lwz      r28, 0x34(r3)
	b        lbl_8017BC44

lbl_8017BC40:
	li       r28, 0

lbl_8017BC44:
	addi     r3, r2, lbl_80518B38@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BC6C
	addi     r3, r30, 0x18
	addi     r5, r30, 0x2b0
	li       r4, 0xbb6
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BC6C:
	mr       r3, r27
	li       r4, 0x30
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r5, 0x1c(r31)
	mr       r27, r3
	lis      r4, 4
	stw      r27, 4(r5)
	lwz      r3, 0x1c(r31)
	lwz      r3, 4(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r31)
	lwz      r3, 4(r3)
	bl       makeSharedDL__12J3DModelDataFv
	li       r4, 0
	b        lbl_8017BCC8

lbl_8017BCA8:
	lwz      r3, 0x80(r27)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8017BCC8:
	lhz      r0, 0x7c(r27)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8017BCA8
	b        lbl_8017BCE8

lbl_8017BCDC:
	lwz      r3, 0x1c(r31)
	li       r0, 0
	stw      r0, 4(r3)

lbl_8017BCE8:
	lwz      r3, 0x1c(r31)
	li       r4, 0
	lwz      r3, 0(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	addi     r3, r30, 0x2c8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xb4
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x2d8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xc8
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x2e8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	lwz      r5, 0x1c(r31)
	mr       r4, r3
	addi     r3, r31, 0xdc
	lwz      r5, 0(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r0, r30, 0x2fc
	mr       r3, r31
	stw      r0, 0x28(r31)
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	lwz      r4, 0x1c(r31)
	mr       r27, r3
	mr       r6, r29
	li       r7, 0
	lwz      r5, 0(r4)
	addi     r4, r30, 0x31c
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x88(r31)
	mr       r3, r27
	addi     r4, r30, 0x330
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x94(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r0, 0
	lwz      r4, 0x44(r3)
	cmpwi    r4, 2
	beq      lbl_8017BDC4
	cmpwi    r4, 3
	bne      lbl_8017BDC8

lbl_8017BDC4:
	li       r0, 1

lbl_8017BDC8:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8017BDDC
	lbz      r0, 0x48(r3)
	cmplwi   r0, 0
	beq      lbl_8017BE54

lbl_8017BDDC:
	cmpwi    r4, 1
	beq      lbl_8017BE54
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BE00
	addi     r0, r30, 0x340
	stw      r0, 0x28(r31)
	b        lbl_8017BE08

lbl_8017BE00:
	addi     r0, r30, 0x354
	stw      r0, 0x28(r31)

lbl_8017BE08:
	mr       r3, r31
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	lwz      r4, 0x1c(r31)
	mr       r27, r3
	mr       r6, r28
	li       r7, 0
	lwz      r5, 4(r4)
	addi     r4, r30, 0x364
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x8c(r31)
	mr       r3, r27
	addi     r4, r30, 0x370
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x98(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	b        lbl_8017BE60

lbl_8017BE54:
	li       r0, 0
	stw      r0, 0x8c(r31)
	stw      r0, 0x98(r31)

lbl_8017BE60:
	lwz      r5, playData__4Game@sda21(r13)
	addi     r3, r1, 8
	addi     r4, r30, 0x398
	lbz      r0, 0x2f(r5)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BE7C
	addi     r4, r30, 0x37c

lbl_8017BE7C:
	bl       __ct__Q212LoadResource3ArgFPCc
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, gLoadResourceMgr@sda21(r13)
	stw      r0, 0x20(r1)
	bl       mountArchive__Q212LoadResource3MgrFRQ212LoadResource3Arg
	cmplwi   r3, 0
	beq      lbl_8017BEA4
	lwz      r28, 0x34(r3)
	b        lbl_8017BEA8

lbl_8017BEA4:
	li       r28, 0

lbl_8017BEA8:
	addi     r3, r2, lbl_80518B40@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BED0
	addi     r3, r30, 0x18
	addi     r5, r30, 0x3b0
	li       r4, 0xc33
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BED0:
	lis      r4, 0x21020030@ha
	mr       r3, r27
	addi     r4, r4, 0x21020030@l
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	lwz      r5, 0x1c(r31)
	mr       r29, r3
	lis      r4, 4
	stw      r29, 8(r5)
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	bl       newSharedDisplayList__12J3DModelDataFUl
	lwz      r3, 0x1c(r31)
	lwz      r3, 8(r3)
	bl       makeSharedDL__12J3DModelDataFv
	li       r4, 0
	b        lbl_8017BF30

lbl_8017BF10:
	lwz      r3, 0x80(r29)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8017BF30:
	lhz      r0, 0x7c(r29)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8017BF10
	lwz      r3, 0x1c(r31)
	li       r4, 0
	lwz      r3, 8(r3)
	bl       enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
	addi     r3, r2, lbl_80518B48@sda21
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BF78
	addi     r3, r30, 0x18
	addi     r5, r30, 0x60
	li       r4, 0xc4f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BF78:
	lwz      r5, 0x1c(r31)
	mr       r4, r27
	addi     r3, r31, 0xf0
	lwz      r5, 8(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	addi     r3, r30, 0x3c4
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	or.      r27, r3, r3
	bne      lbl_8017BFB4
	addi     r3, r30, 0x18
	addi     r5, r30, 0x60
	li       r4, 0xc54
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8017BFB4:
	lwz      r5, 0x1c(r31)
	mr       r4, r27
	addi     r3, r31, 0x104
	lwz      r5, 8(r5)
	bl       attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r0, 0x2f(r3)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8017BFE4
	addi     r0, r30, 0x3d0
	stw      r0, 0x28(r31)
	b        lbl_8017BFEC

lbl_8017BFE4:
	addi     r0, r30, 0x3e4
	stw      r0, 0x28(r31)

lbl_8017BFEC:
	mr       r3, r31
	addi     r4, r30, 0x310
	bl       openTextArc__Q24Game11BaseItemMgrFPc
	mr       r5, r29
	mr       r27, r3
	mr       r6, r28
	addi     r4, r30, 0x3f4
	li       r7, 0
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	stw      r3, 0x90(r31)
	mr       r3, r27
	addi     r4, r30, 0x370
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	stw      r3, 0x9c(r31)
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game11BaseItemMgrFP10JKRArchive
	lmw      r27, 0x9c(r1)
	lwz      r0, 0xb4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C044
 * Size:	00000C
 */
u32 ItemOnyon::Mgr::generatorGetID()
{
	/*
	lis      r3, 0x6F6E796E@ha
	addi     r3, r3, 0x6F6E796E@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C050
 * Size:	00000C
 */
u32 ItemOnyon::Mgr::generatorLocalVersion()
{
	/*
	lis      r3, 0x30303031@ha
	addi     r3, r3, 0x30303031@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C05C
 * Size:	00002C
 */
void ItemOnyon::Mgr::doAnimation()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C088
 * Size:	00002C
 */
void ItemOnyon::Mgr::doEntry(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C0B4
 * Size:	00002C
 */
void ItemOnyon::Mgr::doSetView(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C0E0
 * Size:	00002C
 */
void ItemOnyon::Mgr::doViewCalc(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C10C
 * Size:	00002C
 */
void ItemOnyon::Mgr::doSimulation(float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x74(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C138
 * Size:	00002C
 */
void ItemOnyon::Mgr::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x78(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C164
 * Size:	000004
 */
void BaseItemMgr::killAll(void) { }

/*
 * --INFO--
 * Address:	8017C168
 * Size:	000004
 */
void BaseItemMgr::setup(Game::BaseItem*) { }

/*
 * --INFO--
 * Address:	8017C16C
 * Size:	000004
 */
void BaseItemMgr::onLoadResources(void) { }

/*
 * --INFO--
 * Address:	8017C170
 * Size:	000008
 */
bool BaseItemMgr::loadEverytime() { return true; }

/*
 * --INFO--
 * Address:	8017C178
 * Size:	000004
 */
void BaseItemMgr::onUpdateUseList(GenItemParm*, int) { }

/*
 * --INFO--
 * Address:	8017C17C
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getEnd()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C1A8
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getEnd() { return nullptr; }

namespace Game {

/*
 * --INFO--
 * Address:	8017C1B0
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C1DC
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getStart()
{
	/*
	lwz      r3, 0x30(r3)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C1E4
 * Size:	00002C
 */
void* ItemOnyon::Mgr::getNext(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C210
 * Size:	000008
 */
void* NodeObjectMgr<Game::Onyon>::getNext(void*)
{
	/*
	lwz      r3, 4(r4)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C218
 * Size:	00002C
 */
Onyon* ItemOnyon::Mgr::get(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwzu     r12, 0x4c(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C244
 * Size:	000008
 */
Game::Onyon* NodeObjectMgr<Game::Onyon>::get(void*)
{
	/*
	lwz      r3, 0x18(r4)
	blr
	*/
}

namespace Game {

/*
 * --INFO--
 * Address:	8017C24C
 * Size:	000008
 */
int GenItemParm::getShapeID(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C270
 * Size:	000008
 */
char* Onyon::getCreatureName()
{
	/*
	addi     r3, r2, lbl_80518B30@sda21
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C278
 * Size:	000008
 */
s32 BaseItem::getCreatureID() { return -0x1; }

/*
 * --INFO--
 * Address:	8017C280
 * Size:	000004
 */
void BaseItem::do_setLODParm(Game::AILODParm&) { }

/*
 * --INFO--
 * Address:	8017C284
 * Size:	000008
 */
f32 BaseItem::getMapCollisionRadius(void)
{
	/*
	lfs      f1, 0x1d0(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C28C
 * Size:	000008
 */
bool BaseItem::interactAttack(InteractAttack&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C294
 * Size:	000008
 */
bool BaseItem::interactBreakBridge(InteractBreakBridge&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C29C
 * Size:	000008
 */
bool BaseItem::interactEat(InteractEat&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2A4
 * Size:	000008
 */
bool BaseItem::interactFlockAttack(Game::InteractFlockAttack&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2AC
 * Size:	000008
 */
bool BaseItem::interactAbsorb(Game::InteractAbsorb&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2B4
 * Size:	000008
 */
bool BaseItem::interactFue(Game::InteractFue&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2BC
 * Size:	000008
 */
bool BaseItem::interactFarmKarero(Game::InteractFarmKarero&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2C4
 * Size:	000008
 */
bool BaseItem::interactFarmHaero(Game::InteractFarmHaero&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2CC
 * Size:	000008
 */
bool BaseItem::interactGotKey(Game::InteractGotKey&) { return 0x0; }

/*
 * --INFO--
 * Address:	8017C2D4
 * Size:	000008
 */
bool BaseItem::getVectorField(Sys::Sphere&, Vector3f&) { return 0x1; }

/*
 * --INFO--
 * Address:	8017C2DC
 * Size:	000008
 */
f32 BaseItem::getWorkDistance(Sys::Sphere&)
{
	/*
	lfs      f1, lbl_80518B58@sda21(r2)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C2E4
 * Size:	000004
 */
void BaseItem::bounceCallback(Sys::Triangle*) { }

/*
 * --INFO--
 * Address:	8017C2E8
 * Size:	000004
 */
void BaseItem::collisionCallback(Game::CollEvent&) { }

/*
 * --INFO--
 * Address:	8017C2EC
 * Size:	000004
 */
void BaseItem::platCallback(Game::PlatEvent&) { }

/*
 * --INFO--
 * Address:	8017C2F0
 * Size:	000004
 */
void BaseItem::updateBoundSphere(void) { }

/*
 * --INFO--
 * Address:	8017C2F4
 * Size:	000024
 */
void BaseItem::getBoundingSphere(Sys::Sphere&)
{
	/*
	lfs      f0, 0x1c4(r3)
	stfs     f0, 0(r4)
	lfs      f0, 0x1c8(r3)
	stfs     f0, 4(r4)
	lfs      f0, 0x1cc(r3)
	stfs     f0, 8(r4)
	lfs      f0, 0x1d0(r3)
	stfs     f0, 0xc(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C318
 * Size:	000044
 */
void BaseItem::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x19c(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x1a0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x1a4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x21c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C35C
 * Size:	000004
 */
void BaseItem::onSetPosition() { }

/*
 * --INFO--
 * Address:	8017C360
 * Size:	00001C
 */
Vector3f BaseItem::getVelocity()
{
	/*
	lfs      f0, 0x190(r4)
	stfs     f0, 0(r3)
	lfs      f0, 0x194(r4)
	stfs     f0, 4(r3)
	lfs      f0, 0x198(r4)
	stfs     f0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C37C
 * Size:	000014
 */
void BaseItem::getVelocityAt(Vector3f&, Vector3f&)
{
	/*
	lfs      f0, lbl_80518A2C@sda21(r2)
	stfs     f0, 0(r5)
	stfs     f0, 4(r5)
	stfs     f0, 8(r5)
	blr
	*/
}

} // namespace Game

namespace efx {

/*
 * --INFO--
 * Address:	8017C390
 * Size:	00009C
 */
TPodKira::~TPodKira(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C410
	lis      r3, __vt__Q23efx8TPodKira@ha
	addi     r3, r3, __vt__Q23efx8TPodKira@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C400
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C400
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C400:
	extsh.   r0, r31
	ble      lbl_8017C410
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C410:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C42C
 * Size:	00009C
 */
TPodOpenB::~TPodOpenB(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C4AC
	lis      r3, __vt__Q23efx9TPodOpenB@ha
	addi     r3, r3, __vt__Q23efx9TPodOpenB@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C49C
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C49C
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C49C:
	extsh.   r0, r31
	ble      lbl_8017C4AC
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C4AC:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C4C8
 * Size:	00009C
 */
TPodOpenA::~TPodOpenA(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C548
	lis      r3, __vt__Q23efx9TPodOpenA@ha
	addi     r3, r3, __vt__Q23efx9TPodOpenA@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C538
	lis      r3, __vt__Q23efx8TForever@ha
	addi     r3, r3, __vt__Q23efx8TForever@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C538
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C538:
	extsh.   r0, r31
	ble      lbl_8017C548
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C548:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C564
 * Size:	000004
 */
void TForever::doExecuteEmitterOperation(JPABaseEmitter*) { }

/*
 * --INFO--
 * Address:	8017C568
 * Size:	00009C
 */
TUfoGasOut::~TUfoGasOut(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C5E8
	lis      r3, __vt__Q23efx10TUfoGasOut@ha
	addi     r3, r3, __vt__Q23efx10TUfoGasOut@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C5D8
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C5D8
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C5D8:
	extsh.   r0, r31
	ble      lbl_8017C5E8
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C5E8:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C604
 * Size:	00009C
 */
TUfoGasIn::~TUfoGasIn(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C684
	lis      r3, __vt__Q23efx9TUfoGasIn@ha
	addi     r3, r3, __vt__Q23efx9TUfoGasIn@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C674
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C674
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C674:
	extsh.   r0, r31
	ble      lbl_8017C684
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C684:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C6A0
 * Size:	00009C
 */
TUfoPodOpenSuck::~TUfoPodOpenSuck(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8017C720
	lis      r3, __vt__Q23efx15TUfoPodOpenSuck@ha
	addi     r3, r3, __vt__Q23efx15TUfoPodOpenSuck@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C710
	lis      r3, __vt__Q23efx9TChaseMtx@ha
	addi     r3, r3, __vt__Q23efx9TChaseMtx@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x14
	stw      r0, 4(r30)
	beq      lbl_8017C710
	lis      r4, __vt__Q23efx5TSync@ha
	addi     r3, r30, 4
	addi     r5, r4, __vt__Q23efx5TSync@l
	li       r4, 0
	stw      r5, 0(r30)
	addi     r0, r5, 0x14
	stw      r0, 4(r30)
	bl       __dt__18JPAEmitterCallBackFv

lbl_8017C710:
	extsh.   r0, r31
	ble      lbl_8017C720
	mr       r3, r30
	bl       __dl__FPv

lbl_8017C720:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace efx

namespace Game {

/*
 * --INFO--
 * Address:	8017C73C
 * Size:	00000C
 */
const char* ItemPikihead::InitArg::getName()
{
	/*
	lis      r3, lbl_8047EA5C@ha
	addi     r3, r3, lbl_8047EA5C@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C748
 * Size:	00000C
 */
const char* ItemInitArg::getName()
{
	/*
	lis      r3, lbl_8047EA74@ha
	addi     r3, r3, lbl_8047EA74@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8017C754
 * Size:	000018
 */
void NodeObjectMgr<Game::Onyon>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x30(r3)
	stw      r0, 0x2c(r3)
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C76C
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017C7B4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C920

lbl_8017C7B4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C820

lbl_8017C7CC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017C920
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017C820:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C7CC
	b        lbl_8017C920

lbl_8017C840:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017C890
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C920

lbl_8017C890:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017C904

lbl_8017C8B0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017C920
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017C904:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C8B0

lbl_8017C920:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017C840
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017C950
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017C998
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CB04

lbl_8017C998:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CA04

lbl_8017C9B0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CB04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CA04:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017C9B0
	b        lbl_8017CB04

lbl_8017CA24:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CA74
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CB04

lbl_8017CA74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CAE8

lbl_8017CA94:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CB04
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CAE8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CA94

lbl_8017CB04:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CA24
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CB34
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CB84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCF4

lbl_8017CB84:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CBF0

lbl_8017CB9C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CCF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CBF0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CB9C
	b        lbl_8017CCF4

lbl_8017CC10:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CC64
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCF4

lbl_8017CC64:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CCD8

lbl_8017CC84:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CCF4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CCD8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CC84

lbl_8017CCF4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CC10
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CD28
 * Size:	0001E4
 */
void ObjectMgr<Game::Onyon>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CD70
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEDC

lbl_8017CD70:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CDDC

lbl_8017CD88:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CEDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CDDC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CD88
	b        lbl_8017CEDC

lbl_8017CDFC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017CE4C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEDC

lbl_8017CE4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CEC0

lbl_8017CE6C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017CEDC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CEC0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CE6C

lbl_8017CEDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CDFC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017CF0C
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__23Iterator<Q24Game5Onyon>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017CF5C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0CC

lbl_8017CF5C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017CFC8

lbl_8017CF74:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D0CC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017CFC8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017CF74
	b        lbl_8017D0CC

lbl_8017CFE8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017D03C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0CC

lbl_8017D03C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D0B0

lbl_8017D05C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D0CC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D0B0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D05C

lbl_8017D0CC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017CFE8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D100
 * Size:	0001F4
 */
void ObjectMgr<Game::Onyon>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__23Iterator<Q24Game5Onyon>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__23Iterator<Q24Game5Onyon>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017D150
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2C0

lbl_8017D150:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D1BC

lbl_8017D168:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D2C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D1BC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D168
	b        lbl_8017D2C0

lbl_8017D1DC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8017D230
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2C0

lbl_8017D230:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017D2A4

lbl_8017D250:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8017D2C0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017D2A4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017D250

lbl_8017D2C0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8017D1DC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D2F4
 * Size:	00002C
 */
void* Container<Game::Onyon>::getObject(void*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017D320
 * Size:	000008
 */
Game::Onyon* Container<Game::Onyon>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	8017D328
 * Size:	000008
 */
int Container<Game::Onyon>::getTo() { return 0x0; }
