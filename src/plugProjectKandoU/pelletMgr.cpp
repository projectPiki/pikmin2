#include "Dolphin/arith.h"
#include "Dolphin/rand.h"
#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "Game/pelletMgr.h"
#include "Game/PelletView.h"
#include "Game/shadowMgr.h"
#include "Game/EnemyBase.h"
#include "Game/Stickers.h"
#include "Game/GameMessage.h"
#include "Game/gameStat.h"
#include "Game/DynParticle.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemTreasure.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/PikiMgr.h"
#include "Game/PlatInstance.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "Game/BaseHIO.h"
#include "efx/TFruitsDown.h"
#include "efx/TOtakara.h"
#include "PSM/Otakara.h"
#include "PSM/Scene.h"
#include "PSSystem/PSGame.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "Iterator.h"
#include "System.h"
#include "ObjectTypes.h"
#include "CollInfo.h"
#include "Radar.h"
#include "VsOtakaraName.h"

namespace {
struct NotOff : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint*); // 08
};
} // namespace

namespace Game {

/*
 * --INFO--
 * Address:	801658EC
 * Size:	000020
 */
char* Pellet::getCreatureName()
{
	if (m_config) {
		return m_config->m_params.m_name.m_data;
	}
	return "no config pellet";
}

/*
 * --INFO--
 * Address:	8016590C
 * Size:	000034
 */
s32 Pellet::getCreatureID()
{
	if (m_config) {
		return getConfigIndex();
	}
	return -1;
}

/*
 * --INFO--
 * Address:	80165940
 * Size:	000190
 */
void Pellet::getShadowParam(ShadowParam& shadow)
{
	Vector3f col;
	m_mainMatrix.getBasis(1, col);

	if (-(SQUARE(FABS(col.y)) - 1.0f) > 0.0f) {
		col.y = col.y;
	}

	float pickRadius  = getPickRadius();
	Vector3f position = getPosition();
	Vector3f shadowPos;
	if (col.y > 0.0f) {
		float midHeight    = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position - scaledCol;
	} else {
		float midHeight    = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position + scaledCol;
	}

	float absY = FABS(col.y);
	shadowPos.y += 0.2f;
	shadow.m_position                  = shadowPos;
	shadow.m_boundingSphere.m_position = col;
	shadow.m_boundingSphere.m_radius   = 90.0f;
	shadow.m_size                      = pickRadius * FABS(col.y);
}

/*
 * --INFO--
 * Address:	80165AD0
 * Size:	000074
 */
bool Pellet::needShadow()
{
	return (!pelletMgr->m_movieDrawDisabled
	        || (pelletMgr->m_movieDrawDisabled && isMovieActor() && (m_lod.m_flags & AILOD_FLAG_NEED_SHADOW)));
}

/*
 * --INFO--
 * Address:	80165B44
 * Size:	000008
 */
u8 Pellet::getWallTimer() { return m_wallTimer; }

/*
 * --INFO--
 * Address:	80165B4C
 * Size:	000034
 */
PelletViewArg::PelletViewArg()
{
	_18         = Vector3f(1.0f);
	m_enemy     = nullptr;
	m_matrix    = nullptr;
	m_position  = Vector3f(0.0f);
	m_enemyName = 0;
}

/*
 * --INFO--
 * Address:	80165B80
 * Size:	000220
 */
// WIP: https://decomp.me/scratch/a4K8T
// regswaps
Pellet* PelletView::becomePellet(PelletViewArg* viewArg)
{
	PelletInitArg initArg;
	initArg.m_textIdentifier = viewArg->m_enemyName;
	initArg._0C              = 0;
	initArg._10              = -1;
	initArg.m_pelletType     = PELTYPE_CARCASS;
	initArg._18              = this;

	Pellet* newPellet = pelletMgr->birth(&initArg);
	if (newPellet) {
		Vector3f position = viewArg->m_position;
		position.y += 0.5f * newPellet->getCylinderHeight();

		PelletConfig* config = newPellet->m_config;
		Vector3f offset      = config->m_params.m_offset.m_data;

		Vector3f resultVec;
		Vector3f* vecPtr = &resultVec;
		*vecPtr          = offset;

		Vector3f row1;
		viewArg->m_matrix->getRow(0, row1);
		vecPtr->x = dot(offset, row1);
		Vector3f row2;
		viewArg->m_matrix->getRow(1, row2);
		vecPtr->y = dot(offset, row2);
		Vector3f row3;
		viewArg->m_matrix->getRow(2, row3);
		vecPtr->z = dot(offset, row3);
		position  = position + resultVec;

		newPellet->setPosition(position, false);
		m_pellet = newPellet;

		newPellet->_324 = 1;
		newPellet->setOrientation(*viewArg->m_matrix);
		newPellet->m_scale = viewArg->_18;
		newPellet->m_lod.m_flags |= (AILOD_FLAG_VISIBLE_VP0 + AILOD_FLAG_VISIBLE_VP1 + AILOD_FLAG_NEED_SHADOW);

		viewStartPreCarryMotion();

		m_creature = static_cast<Creature*>(viewArg->m_enemy);
		P2ASSERTLINE(895, m_creature != nullptr);
	} else {
		m_pellet   = nullptr;
		m_creature = nullptr;
	}

	return m_pellet;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lis      r6, __vt__Q24Game13PelletInitArg@ha
	lis      r5, __vt__Q24Game15CreatureInitArg@ha
	stw      r0, 0x64(r1)
	addi     r0, r5, __vt__Q24Game15CreatureInitArg@l
	addi     r8, r6, __vt__Q24Game13PelletInitArg@l
	li       r7, 0
	stw      r31, 0x5c(r1)
	li       r5, -1
	li       r6, 1
	mr       r31, r3
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r29, r4
	addi     r4, r1, 0x20
	stw      r0, 0x20(r1)
	li       r0, 0xff
	lwz      r3, pelletMgr__4Game@sda21(r13)
	stw      r8, 0x20(r1)
	stb      r7, 0x3c(r1)
	sth      r7, 0x34(r1)
	stb      r0, 0x36(r1)
	stw      r7, 0x38(r1)
	stb      r7, 0x37(r1)
	stb      r6, 0x24(r1)
	stb      r7, 0x3d(r1)
	stw      r5, 0x44(r1)
	stw      r5, 0x40(r1)
	stb      r7, 0x3e(r1)
	stb      r7, 0x3f(r1)
	lwz      r0, 0(r29)
	stw      r0, 0x28(r1)
	stw      r7, 0x2c(r1)
	stw      r5, 0x30(r1)
	stb      r6, 0x36(r1)
	stw      r31, 0x38(r1)
	bl       birth__Q24Game9PelletMgrFPQ24Game13PelletInitArg
	or.      r30, r3, r3
	beq      lbl_80165D74
	lfs      f0, 4(r29)
	stfs     f0, 0x14(r1)
	lfs      f0, 8(r29)
	stfs     f0, 0x18(r1)
	lfs      f0, 0xc(r29)
	stfs     f0, 0x1c(r1)
	bl       getCylinderHeight__Q24Game6PelletFv
	lfs      f3, lbl_80518918@sda21(r2)
	mr       r3, r30
	lfs      f0, 0x18(r1)
	addi     r4, r1, 0x14
	lfs      f2, 0x1c(r1)
	li       r5, 0
	fmadds   f9, f3, f1, f0
	lfs      f0, 0x14(r1)
	stfs     f9, 0x18(r1)
	lwz      r7, 0x10(r29)
	lwz      r6, 0x35c(r30)
	lfs      f4, 4(r7)
	lfs      f10, 0x214(r6)
	lfs      f3, 0x14(r7)
	lfs      f1, 0x24(r7)
	fmuls    f6, f10, f4
	lfs      f8, 0x210(r6)
	fmuls    f4, f10, f3
	lfs      f7, 0(r7)
	fmuls    f1, f10, f1
	lfs      f5, 0x10(r7)
	lfs      f3, 0x20(r7)
	fmadds   f6, f8, f7, f6
	lfs      f11, 0x218(r6)
	fmadds   f4, f8, f5, f4
	lfs      f7, 8(r7)
	fmadds   f1, f8, f3, f1
	lfs      f5, 0x18(r7)
	lfs      f3, 0x28(r7)
	fmadds   f6, f11, f7, f6
	fmadds   f4, f11, f5, f4
	stfs     f8, 8(r1)
	fmadds   f1, f11, f3, f1
	fadds    f0, f0, f6
	stfs     f10, 0xc(r1)
	fadds    f3, f9, f4
	fadds    f2, f2, f1
	stfs     f11, 0x10(r1)
	stfs     f6, 8(r1)
	stfs     f4, 0xc(r1)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stfs     f3, 0x18(r1)
	stfs     f2, 0x1c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	stw      r30, 4(r31)
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x324(r30)
	lwz      r4, 0x10(r29)
	bl       setOrientation__Q24Game6PelletFR7Matrixf
	lfs      f0, 0x18(r29)
	mr       r3, r31
	stfs     f0, 0x168(r30)
	lfs      f0, 0x1c(r29)
	stfs     f0, 0x16c(r30)
	lfs      f0, 0x20(r29)
	stfs     f0, 0x170(r30)
	lbz      r0, 0xd8(r30)
	ori      r0, r0, 0x34
	stb      r0, 0xd8(r30)
	lwz      r12, 0(r31)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r29)
	stw      r0, 8(r31)
	lwz      r0, 8(r31)
	cmplwi   r0, 0
	bne      lbl_80165D80
	lis      r3, lbl_8047E344@ha
	lis      r5, lbl_8047E354@ha
	addi     r3, r3, lbl_8047E344@l
	li       r4, 0x37f
	addi     r5, r5, lbl_8047E354@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_80165D80

lbl_80165D74:
	li       r0, 0
	stw      r0, 4(r31)
	stw      r0, 8(r31)

lbl_80165D80:
	lwz      r0, 0x64(r1)
	lwz      r3, 4(r31)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80165DA0
 * Size:	000084
 */
void PelletView::viewMakeMatrix(Matrixf& outMat)
{
	Vector3f translation(0.0f, -0.5f * m_pellet->getCylinderHeight(), 0.0f);
	Matrixf srtMatrix;
	srtMatrix.makeSRT(m_pellet->m_scale, Vector3f::zero, translation);
	PSMTXConcat(m_pellet->m_mainMatrix.m_matrix.mtxView, srtMatrix.m_matrix.mtxView, outMat.m_matrix.mtxView);
}

/*
 * --INFO--
 * Address:	80165E24
 * Size:	00000C
 */
void Pellet::clearClaim() { m_claim = 0; }

/*
 * --INFO--
 * Address:	80165E30
 * Size:	000018
 */
void Pellet::sendClaim()
{
	if (m_claim < 10) {
		m_claim++;
	}
}

/*
 * --INFO--
 * Address:	80165E48
 * Size:	0003F4
 */
// should match when Vector3f::length() matches: https://decomp.me/scratch/lHISE
void Pellet::updateClaim()
{
	if (m_claim >= 10) {
		int count = 0;
		Vector3f meanPosition(0.0f);
		Stickers sticker(this);
		Iterator<Creature> iterator(&sticker);

		iterator.first();
		while (iterator.m_index != iterator.m_container->getEnd()) {
			meanPosition += iterator.m_container->get(iterator.m_index)->getPosition();
			count++;
			iterator.next();
		}

		if (count > 0) {
			float norm = 1.0f / count;
			meanPosition *= norm;
			Vector3f diff;
			Vector3f* diffPtr = &diff;
			*diffPtr          = meanPosition - m_pelletPosition;
			float len         = diff.length(); // should match when this inline matches

			if (len > 0.0f) {
				float vecNorm = 1.0f / len;
				diff.x *= vecNorm;
				diff.y *= vecNorm;
				diff.z *= vecNorm;
			} else {
				len = 0.0f;
			}

			diff.x *= 30.0f;
			diff.y *= 30.0f;
			diff.z *= 30.0f;

			Vector3f velocity    = getVelocity();
			Vector3f newVelocity = velocity;
			newVelocity += diff;
			setVelocity(newVelocity);
			m_claim = 0;
		}
	}
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	stw      r0, 0xb4(r1)
	stfd     f31, 0xa0(r1)
	psq_st   f31, 168(r1), 0, qr0
	stfd     f30, 0x90(r1)
	psq_st   f30, 152(r1), 0, qr0
	stfd     f29, 0x80(r1)
	psq_st   f29, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	mr       r31, r3
	lwz      r0, 0x3c0(r3)
	cmpwi    r0, 0xa
	blt      lbl_8016620C
	lfs      f31, lbl_80518914@sda21(r2)
	mr       r4, r31
	addi     r3, r1, 0x48
	li       r30, 0
	fmr      f30, f31
	fmr      f29, f31
	bl       __ct__Q24Game8StickersFPQ24Game8Creature
	li       r0, 0
	lis      r3, "__vt__26Iterator<Q24Game8Creature>"@ha
	addi     r4, r3, "__vt__26Iterator<Q24Game8Creature>"@l
	addi     r3, r1, 0x48
	cmplwi   r0, 0
	stw      r4, 0x38(r1)
	stw      r0, 0x44(r1)
	stw      r0, 0x3c(r1)
	stw      r3, 0x40(r1)
	bne      lbl_80165EE0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80166070

lbl_80165EE0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80165F4C

lbl_80165EF8:
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
	bne      lbl_80166070
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80165F4C:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80165EF8
	b        lbl_80166070

lbl_80165F6C:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	addi     r30, r30, 1
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	fadds    f31, f31, f2
	lwz      r0, 0x44(r1)
	fadds    f30, f30, f1
	fadds    f29, f29, f0
	cmplwi   r0, 0
	bne      lbl_80165FE0
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80166070

lbl_80165FE0:
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)
	b        lbl_80166054

lbl_80166000:
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
	bne      lbl_80166070
	lwz      r3, 0x40(r1)
	lwz      r4, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x3c(r1)

lbl_80166054:
	lwz      r12, 0x38(r1)
	addi     r3, r1, 0x38
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80166000

lbl_80166070:
	lwz      r3, 0x40(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x3c(r1)
	cmplw    r4, r3
	bne      lbl_80165F6C
	cmpwi    r30, 0
	ble      lbl_80166200
	xoris    r3, r30, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x6c(r1)
	lfd      f1, lbl_80518930@sda21(r2)
	stw      r0, 0x68(r1)
	lfs      f5, lbl_80518910@sda21(r2)
	lfd      f0, 0x68(r1)
	lfs      f3, 0x3b0(r31)
	fsubs    f2, f0, f1
	lfs      f0, 0x3ac(r31)
	lfs      f4, 0x3b4(r31)
	lfs      f1, lbl_80518914@sda21(r2)
	fdivs    f2, f5, f2
	fmuls    f31, f31, f2
	fmuls    f30, f30, f2
	fmuls    f29, f29, f2
	fsubs    f2, f31, f0
	fsubs    f3, f30, f3
	fsubs    f4, f29, f4
	fmuls    f0, f2, f2
	stfs     f2, 0x2c(r1)
	fmuls    f5, f3, f3
	fmuls    f6, f4, f4
	stfs     f3, 0x30(r1)
	fadds    f0, f0, f5
	stfs     f4, 0x34(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80166128
	fmadds   f0, f2, f2, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_8016612C
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_8016612C

lbl_80166128:
	fmr      f3, f1

lbl_8016612C:
	lfs      f0, lbl_80518914@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80166164
	lfs      f0, lbl_80518910@sda21(r2)
	lfs      f2, 0x2c(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)

lbl_80166164:
	mr       r4, r31
	lfs      f2, 0x2c(r1)
	lfs      f3, lbl_80518928@sda21(r2)
	addi     r3, r1, 8
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	fmuls    f2, f2, f3
	lwz      r12, 0(r31)
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	lwz      r12, 0x6c(r12)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	mtctr    r12
	bctrl
	lfs      f5, 8(r1)
	mr       r3, r31
	lfs      f4, 0xc(r1)
	addi     r4, r1, 0x20
	lfs      f3, 0x10(r1)
	lfs      f2, 0x2c(r1)
	lfs      f1, 0x30(r1)
	lfs      f0, 0x34(r1)
	fadds    f2, f5, f2
	stfs     f5, 0x20(r1)
	fadds    f1, f4, f1
	fadds    f0, f3, f0
	stfs     f4, 0x24(r1)
	stfs     f3, 0x28(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x3c0(r31)

lbl_80166200:
	addi     r3, r1, 0x48
	li       r4, -1
	bl       __dt__Q24Game8StickersFv

lbl_8016620C:
	psq_l    f31, 168(r1), 0, qr0
	lfd      f31, 0xa0(r1)
	psq_l    f30, 152(r1), 0, qr0
	lfd      f30, 0x90(r1)
	psq_l    f29, 136(r1), 0, qr0
	lfd      f29, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r0, 0xb4(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016623C
 * Size:	00000C
 */
float Pellet::getBuryDepthMax() { return m_config->m_params.m_depthMax.m_data; }

/*
 * --INFO--
 * Address:	80166248
 * Size:	00000C
 */
float Pellet::getBuryDepth() { return m_config->m_params.m_depth.m_data; }

/*
 * --INFO--
 * Address:	80166254
 * Size:	000124
 */
// WIP: https://decomp.me/scratch/HVCzF
f32 Pellet::getBuryRadius(float)
{
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	lfs      f4, lbl_80518938@sda21(r2)
	lis      r4, 0x4330
	lwz      r5, 0x35c(r3)
	lis      r3, lbl_8047E318@ha
	fmuls    f0, f4, f1
	addi     r11, r3, lbl_8047E318@l
	lwz      r10, 0x48(r11)
	li       r0, 0
	lwz      r9, 0x4c(r11)
	fctiwz   f0, f0
	lwz      r8, 0x50(r11)
	lwz      r7, 0x54(r11)
	stfd     f0, 0x20(r1)
	lwz      r6, 0x58(r11)
	lwz      r31, 0x24(r1)
	stw      r4, 0x28(r1)
	xoris    r3, r31, 0x8000
	lfd      f2, lbl_80518930@sda21(r2)
	stw      r3, 0x2c(r1)
	cmpwi    r31, 0
	lfs      f3, lbl_8051893C@sda21(r2)
	lfd      f0, 0x28(r1)
	stw      r10, 8(r1)
	fsubs    f0, f0, f2
	lfs      f6, 0x1d0(r5)
	stw      r9, 0xc(r1)
	lfs      f5, 0x1e0(r5)
	fmuls    f0, f3, f0
	stw      r8, 0x10(r1)
	lfs      f2, 0x1f0(r5)
	stw      r7, 0x14(r1)
	fsubs    f0, f1, f0
	lfs      f1, 0x200(r5)
	stw      r6, 0x18(r1)
	fmuls    f31, f4, f0
	stfs     f6, 8(r1)
	stfs     f5, 0xc(r1)
	stfs     f2, 0x10(r1)
	stfs     f1, 0x14(r1)
	stfs     f1, 0x18(r1)
	blt      lbl_8016631C
	cmpwi    r31, 4
	bgt      lbl_8016631C
	li       r0, 1

lbl_8016631C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80166338
	addi     r3, r11, 0x2c
	addi     r5, r11, 0x3c
	li       r4, 0x3ee
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80166338:
	slwi     r0, r31, 2
	addi     r3, r1, 0xc
	lfs      f1, lbl_80518910@sda21(r2)
	addi     r4, r1, 8
	lfsx     f0, r3, r0
	fsubs    f2, f1, f31
	lfsx     f1, r4, r0
	fmuls    f0, f31, f0
	fmadds   f1, f2, f1, f0
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	80166378
 * Size:	000074
 */
bool Pellet::stimulate(Game::Interaction& interaction)
{
	if (interaction.actCommon(this)) {
		return interaction.actPellet(this);
	}
	return false;
}

/*
 * --INFO--
 * Address:	801663EC
 * Size:	000088
 */
bool InteractMattuan::actPellet(Pellet* pellet)
{
	if (pellet->getKind() == PELTYPE_UPGRADE) {
		pellet->startDiscoverDisable(_08 / sys->m_deltaTime);
	} else {
		pellet->clearDiscoverDisable();
	}
	return true;
}

/*
 * --INFO--
 * Address:	80166474
 * Size:	000188
 */
bool InteractEat::actPellet(Pellet* pellet)
{
	if ((pellet->getKind() == PELTYPE_BERRY) && pellet->isAlive()) {
		// this is very dumb but also necessary to get a second vector on the stack??????
		Vector3f position = pellet->getPosition();
		Vector3f position2;
		Vector3f* posPtr = &position2;
		*posPtr          = position;

		efx::Arg arg(position2);

		// m_pelletColor apparently isn't just for onyon destination? maybe mislabeled.
		if (pellet->m_pelletColor == 0) {
			efx::TFruitsDownR spicy;
			spicy.create(&arg);
		} else {
			efx::TFruitsDownP bitter;
			bitter.create(&arg);
		}

		pellet->m_soundMgr->startSound(PSSE_EV_FRUIT_POP, 0);
		pellet->kill(nullptr);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801665FC
 * Size:	000080
 */
bool InteractSuck::actPellet(Game::Pellet* pellet)
{
	PelletGoalStateArg pelletGoalArg(m_creature);
	if (m_creature) {
		m_creature->getTypeName();
	}
	pellet->m_pelletSM->transit(pellet, 7, &pelletGoalArg);
	pellet->finishDisplayCarryInfo();
	return true;
}

/*
 * --INFO--
 * Address:	8016667C
 * Size:	000004
 */
void Pellet::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80166680
 * Size:	0001B0
 */
Pellet::Pellet()
    : _3D0(0)
    , m_slots()
{
	m_caster       = nullptr;
	m_model        = nullptr;
	m_objectTypeID = OBJTYPE_Pellet;
	m_collTree     = new CollTree;
	m_pelletSM     = new PelletFSM;
	m_pelletSM->init(this);
	m_collisionBuffer.alloc(this, 8);
	m_pelletColor = 4;
	m_pelletView  = nullptr;
	clearCarryColor();
	m_pelletCarry = new PelletCarry;
}

/*
 * --INFO--
 * Address:	80166830
 * Size:	00006C
 */
void Pellet::constructor() { m_soundMgr = new PSM::EventBase(this, 2); }

// namespace PSM {

// /*
//  * --INFO--
//  * Address:	8016689C
//  * Size:	00009C
//  */
// // WEAK - in header
// CreatureObj::~CreatureObj() { }

// } // namespace PSM

/*
 * --INFO--
 * Address:	80166938
 * Size:	000034
 */
void Pellet::shadowOn()
{
	if (shadowMgr) {
		shadowMgr->addShadow(this);
	}
}

/*
 * --INFO--
 * Address:	8016696C
 * Size:	000034
 */
void Pellet::shadowOff()
{
	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}
}

/*
 * --INFO--
 * Address:	801669A0
 * Size:	000014
 */
JAInter::Object* Pellet::getJAIObject() { return m_soundMgr; }

/*
 * --INFO--
 * Address:	801669B4
 * Size:	000008
 */
PSM::Creature* Pellet::getPSCreature() { return m_soundMgr; }

/*
 * --INFO--
 * Address:	801669BC
 * Size:	00000C
 */
float Pellet::getBottomRadius() { return m_config->m_params.m_radius.m_data; }

/*
 * --INFO--
 * Address:	801669C8
 * Size:	00000C
 */
float Pellet::getPickRadius() { return m_config->m_params.m_pRadius.m_data; }

/*
 * --INFO--
 * Address:	801669D4
 * Size:	00000C
 */
float Pellet::getCylinderHeight() { return m_config->m_params.m_height.m_data; }

/*
 * --INFO--
 * Address:	801669E0
 * Size:	000058
 */
s16 Pellet::getConfigIndex()
{
	P2ASSERTLINE(1433, m_config != nullptr);
	return m_config->m_params.m_index;
}

/*
 * --INFO--
 * Address:	80166A38
 * Size:	00000C
 */
char* Pellet::getConfigName() { return m_config->m_params.m_name.m_data; }

/*
 * --INFO--
 * Address:	80166A44
 * Size:	000130
 */
PelletIndexInitArg::PelletIndexInitArg(int idx)
{
	int code;
	pelletMgr->decode(idx, m_pelletType, code);

	BasePelletMgr* newPelletMgr = pelletMgr->getMgrByID(m_pelletType);
	P2ASSERTLINE(1465, newPelletMgr != nullptr);
	PelletConfig* config = newPelletMgr->getPelletConfig(code);

	m_textIdentifier = config->m_params.m_name.m_data;
	_10              = code;
	_0C              = (int)(3.0f * randFloat());
}

/*
 * --INFO--
 * Address:	80166B74
 * Size:	0000F0
 */
PelletNumberInitArg::PelletNumberInitArg(int p1, int p2)
{
	switch (p1) {
	case PELLET_NUMBER_ONE:
		m_textIdentifier = "number1";
		_10              = 0;
		break;
	case PELLET_NUMBER_FIVE:
		m_textIdentifier = "number5";
		_10              = 1;
		break;
	case PELLET_NUMBER_TEN:
		m_textIdentifier = "number10";
		_10              = 2;
		break;
	case PELLET_NUMBER_TWENTY:
		m_textIdentifier = "number20";
		_10              = 3;
		break;
	default:
		m_textIdentifier = "number1";
		_10              = 0;
		break;
	}

	_0C          = p2;
	m_pelletType = 0;
}

/*
 * --INFO--
 * Address:	80166C64
 * Size:	000040
 */
bool Pellet::isPickable()
{
	if (m_pelletState) {
		return m_pelletState->isPickable();
	}
	return false;
}

// /*
//  * --INFO--
//  * Address:	80166CA4
//  * Size:	000008
//  */
// // WEAK - in header
// bool PelletState::isPickable() { return false; }

/*
 * --INFO--
 * Address:	80166CAC
 * Size:	000288
 */
void Pellet::onKill(CreatureKillArg* killArg)
{
	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		m_pelletSM->start(this, 0, nullptr);
	}

	setAlive(false);

	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}

	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		GameMessagePelletDead msg(this);
		gameSystem->m_section->sendMessage(msg);
	}

	Vector3f scale(1.0f);
	Vector3f rotation(0.0f);
	Vector3f translation(0.0f);
	m_mainMatrix.makeSRT(scale, rotation, translation);

	if (m_model) {
		m_lodSphere.m_position = Vector3f(0.0f);
		m_lodSphere.m_radius   = 128000.0f;
		m_scale                = Vector3f(1.0f);
		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
		m_scale.setTVec(m_model->m_j3dModel->m_modelScale);
		m_model->clearAnimatorAll();
		m_model->m_j3dModel->calc();
	}

	releaseParticles();
	m_collTree->release();
	m_mgr->kill(this);

	if (((killArg != nullptr) && (static_cast<PelletKillArg*>(killArg)->_08 != 0))
	    || ((gameSystem->m_mode == GSM_VERSUS_MODE) && (_32C == 3))) {
		m_mgr->setRevival(this);
	}

	finishDisplayCarryInfo();

	if (m_pelletView) {
		m_pelletView->viewOnPelletKilled();
		m_pelletView->m_pellet = nullptr;
		m_pelletView           = nullptr;
	}

	if (getKind() == PELTYPE_TREASURE || getKind() == PELTYPE_UPGRADE) {
		Radar::Mgr::exit(this);
	}
}

/*
 * --INFO--
 * Address:	80166F34
 * Size:	000034
 */
// should be weak, but also not generalisable to a template? who knows
void StateMachine<Game::Pellet>::start(Pellet* pellet, int stateID, StateArg* arg)
{
	pellet->m_pelletState = 0;
	transit(pellet, stateID, arg);
}

/*
 * --INFO--
 * Address:	80166F68
 * Size:	000620
 */
void Pellet::onInit(Game::CreatureInitArg* initArg)
{
	_3DC        = -1;
	_3D8        = -1;
	m_wallTimer = 0;
	_324        = 0;
	m_isInWater = false;

	clearDiscoverDisable();

	m_claim        = 0;
	_3E0           = 0.0f;
	m_curTriangle  = nullptr;
	_311           = 0;
	m_faceDir      = 0.0f;
	_438           = 0.0f;
	_3C4           = 0;
	_3D0           = 0;
	m_carryInfoMgr = nullptr;

	clearCapture();

	m_carryPower = 0.0f;

	P2ASSERTLINE(1632, initArg != nullptr);

	u16 stateType = static_cast<PelletInitArg*>(initArg)->_14;
	if (stateType == 0) {
		m_pelletSM->start(this, 0, nullptr);
		m_scale = Vector3f(1.0f);
	} else if (stateType == 3) {
		m_pelletSM->start(this, 6, nullptr);
	} else if (stateType == 1) {
		m_pelletSM->start(this, 4, nullptr);
		m_scale = Vector3f(0.01f);
	} else {
		m_pelletSM->start(this, 5, nullptr);
		m_scale = Vector3f(0.01f);
	}

	m_pikminCount[0] = 0;
	m_pikminCount[1] = 0;
	m_pikminCount[2] = 0;
	m_pikminCount[3] = 0;
	m_pikminCount[4] = 0;
	m_pikminCount[5] = 0;
	m_pikminCount[6] = 0;
	_414             = 0;
	_43C             = (u16) static_cast<PelletInitArg*>(initArg)->_10;

	m_config = m_mgr->m_configList->getPelletConfig(static_cast<PelletInitArg*>(initArg)->m_textIdentifier);

	if (!(m_config->m_params.m_code.m_data & 1)) {
		shadowOn();
	}

	if (static_cast<PelletInitArg*>(initArg)->_1D != 0) {
		_3D8         = GameStat::getMapPikmins(-1);
		int minPikis = m_config->m_params.m_min.m_data;
		if (_3D8 > minPikis) {
			_3D8 = minPikis;
		}
	} else {
		_3D8 = -1;
	}

	// temp_r3_6 = arg0->unk20;
	if ((static_cast<PelletInitArg*>(initArg)->m_minCarriers != -1) && (static_cast<PelletInitArg*>(initArg)->m_maxCarriers != -1)) {
		_3D8 = static_cast<PelletInitArg*>(initArg)->m_minCarriers;
		_3DC = static_cast<PelletInitArg*>(initArg)->m_maxCarriers;
	}

	m_rigid._175 &= ~0x01;
	m_rigid._175 &= ~0x80;
	m_pelletColor = static_cast<PelletInitArg*>(initArg)->_0C;

	if (strcmp(m_config->m_params.m_name.m_data, "loozy") == 0) {
		_32C = 0;
	} else if (strcmp(m_config->m_params.m_name.m_data, "orima") == 0) {
		_32C = 1;
	} else {
		_32C = 2;
	}

	if (strcmp(m_config->m_params.m_name.m_data, VsOtakaraName::cBedamaYellow) == 0) {
		_32C = 6;
	} else if (strcmp(m_config->m_params.m_name.m_data, VsOtakaraName::cBedamaRed) == 0) {
		_32C = 4;
	} else if (strcmp(m_config->m_params.m_name.m_data, VsOtakaraName::cBedamaBlue) == 0) {
		_32C = 5;
	} else if (strcmp(m_config->m_params.m_name.m_data, VsOtakaraName::cCoin) == 0) {
		_32C = 3;
	}

	if (static_cast<PelletInitArg*>(initArg)->_1C == 0) {
		m_model = m_mgr->createShape(_43C, m_slotIndex);
		onCreateShape();
	}

	if (m_model) {
		_41C.m_animMgr = m_mgr->m_animMgr[_43C];
		m_radius       = 2.0f * m_model->getRoughBoundingRadius();
	} else {
		m_radius = m_config->m_params.m_radius.m_data;
	}

	if (_41C.m_animMgr) {
		SysShape::MotionListener* listener = this;
		_41C.startAnim(0, listener);
		stop_carrymotion();
		init_pmotions();
		start_pmotions();
		if ((gameSystem->m_mode == GSM_PIKLOPEDIA) && (_32C == 0)) {
			_438 = 30.0f;
		}
	}

	m_mgr->setCollTree(this, _43C);

	if (strcmp(m_config->m_params.m_dynamics.m_data, "never") == 0) {
		_364                                     = 2;
		_39C                                     = 0;
		m_config->m_params.m_numParticles.m_data = 0;
	} else if (strcmp(m_config->m_params.m_dynamics.m_data, "lod") == 0) {
		_364 = 1;
		_39C = 1;
	} else {
		_364 = 0;
		_39C = 1;
	}

	m_slots[0]  = 0;
	m_slots[1]  = 0;
	m_slots[2]  = 0;
	m_slots[3]  = 0;
	m_slots[4]  = 0;
	m_slots[5]  = 0;
	m_slots[6]  = 0;
	m_slots[7]  = 0;
	m_slots[8]  = 0;
	m_slots[9]  = 0;
	m_slots[10] = 0;
	m_slots[11] = 0;
	m_slots[12] = 0;
	m_slots[13] = 0;
	m_slots[14] = 0;
	m_slots[15] = 0;
	_3F6        = 0;

	m_slotCount = getPelletConfigMax();

	if (m_slotCount > 128) {
		m_slotCount = 128;
	}

	if (m_config->m_params.m_min.m_data == 128) {
		_3D8 = 1000;
		_3DC = 1000;
	}

	m_dynParticle = nullptr;
	setupParticles();
	do_onInit(initArg);

	if (getKind() == PELTYPE_TREASURE) {
		Radar::Mgr::entry(this, Radar::MAP_TREASURE, 0);
	} else if (getKind() == PELTYPE_UPGRADE) {
		Radar::Mgr::entry(this, Radar::MAP_UPGRADE, 0);
	}

	setAlive(true);

	if (gameSystem->m_mode == GSM_VERSUS_MODE) {
		GameMessagePelletBorn msg(this);
		gameSystem->m_section->sendMessage(msg);
	}
}

/*
 * --INFO--
 * Address:	80167588
 * Size:	000004
 */
// WEAK - in header
// void Pellet::do_onInit(CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	8016758C
 * Size:	000004
 */
// WEAK - in header
// void Pellet::onCreateShape() { }

/*
 * --INFO--
 * Address:	80167590
 * Size:	000020
 */
int Pellet::getPelletConfigMin()
{
	if (_3D8 > 0) {
		return _3D8;
	}
	return m_config->m_params.m_min.m_data;
}

/*
 * --INFO--
 * Address:	801675B0
 * Size:	000020
 */
int Pellet::getPelletConfigMax()
{
	if (_3DC > 0) {
		return _3DC;
	}
	return m_config->m_params.m_max.m_data;
}

/*
 * --INFO--
 * Address:	801675D0
 * Size:	000354
 */
// WIP: https://decomp.me/scratch/SWcqK
void Pellet::setupParticles()
{
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stfd     f31, 0xd0(r1)
	psq_st   f31, 216(r1), 0, qr0
	stfd     f30, 0xc0(r1)
	psq_st   f30, 200(r1), 0, qr0
	stfd     f29, 0xb0(r1)
	psq_st   f29, 184(r1), 0, qr0
	stfd     f28, 0xa0(r1)
	psq_st   f28, 168(r1), 0, qr0
	stfd     f27, 0x90(r1)
	psq_st   f27, 152(r1), 0, qr0
	stfd     f26, 0x80(r1)
	psq_st   f26, 136(r1), 0, qr0
	stfd     f25, 0x70(r1)
	psq_st   f25, 120(r1), 0, qr0
	stfd     f24, 0x60(r1)
	psq_st   f24, 104(r1), 0, qr0
	stfd     f23, 0x50(r1)
	psq_st   f23, 88(r1), 0, qr0
	stmw     r26, 0x38(r1)
	mr       r27, r3
	lfs      f0, lbl_80518914@sda21(r2)
	lwz      r3, 0x35c(r3)
	lfs      f25, 0xa0(r3)
	stfs     f0, 0x2f4(r27)
	stfs     f0, 0x2f8(r27)
	stfs     f0, 0x2fc(r27)
	lwz      r3, 0x35c(r27)
	lwz      r0, 0xf0(r3)
	stw      r0, 0x360(r27)
	lwz      r0, 0x360(r27)
	cmpwi    r0, 0
	beq      lbl_801678C8
	lwz      r4, 0x35c(r27)
	addi     r3, r2, lbl_80518980@sda21
	lwz      r4, 0xe0(r4)
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_801676AC
	lwz      r3, 0x35c(r27)
	lfs      f1, lbl_80518918@sda21(r2)
	lfs      f0, 0xc0(r3)
	lfs      f2, lbl_80518970@sda21(r2)
	fmuls    f0, f1, f0
	fmuls    f0, f2, f0
	fcmpo    cr0, f0, f25
	ble      lbl_801676A0
	mr       r3, r27
	bl       setupParticles_tall__Q24Game6PelletFv
	b        lbl_8016787C

lbl_801676A0:
	mr       r3, r27
	bl       setupParticles_simple__Q24Game6PelletFv
	b        lbl_8016787C

lbl_801676AC:
	li       r3, 0
	li       r0, 1
	stb      r3, 0x364(r27)
	mr       r3, r27
	stb      r0, 0x39c(r27)
	lwz      r29, 0x360(r27)
	addi     r0, r29, 1
	stw      r0, 0x360(r27)
	lwz      r4, 0x360(r27)
	bl       createParticles__Q24Game11DynCreatureFi
	lis      r3, sincosTable___5JMath@ha
	lfs      f27, lbl_80518988@sda21(r2)
	lfd      f28, lbl_80518930@sda21(r2)
	xoris    r30, r29, 0x8000
	lfs      f29, lbl_80518918@sda21(r2)
	addi     r26, r3, sincosTable___5JMath@l
	lfs      f30, lbl_80518914@sda21(r2)
	li       r28, 0
	lfs      f31, lbl_8051898C@sda21(r2)
	lis      r31, 0x4330
	b        lbl_80167814

lbl_80167700:
	stw      r30, 0xc(r1)
	xoris    r0, r28, 0x8000
	lwz      r3, 0x35c(r27)
	stw      r31, 8(r1)
	lfs      f0, 0xc0(r3)
	lfd      f1, 8(r1)
	fmuls    f24, f29, f0
	stw      r0, 0x14(r1)
	fsubs    f0, f1, f28
	stw      r31, 0x10(r1)
	fsubs    f2, f25, f24
	fdivs    f1, f27, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f28
	fmuls    f1, f1, f0
	fmr      f0, f1
	fcmpo    cr0, f1, f30
	bge      lbl_8016774C
	fneg     f0, f1

lbl_8016774C:
	fmuls    f0, f0, f31
	fcmpo    cr0, f1, f30
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r26, r0
	lfs      f0, 4(r3)
	fmuls    f26, f2, f0
	bge      lbl_801677A0
	lfs      f0, lbl_80518990@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_801677C0

lbl_801677A0:
	fmuls    f0, f1, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_801677C0:
	fmuls    f23, f2, f0
	lfs      f0, 0x2f4(r27)
	lfs      f1, 0x2f8(r27)
	mr       r4, r28
	lfs      f2, 0x2fc(r27)
	fadds    f0, f0, f23
	fadds    f1, f1, f30
	fadds    f2, f2, f26
	stfs     f0, 0x2f4(r27)
	stfs     f1, 0x2f8(r27)
	stfs     f2, 0x2fc(r27)
	lwz      r3, 0x178(r27)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f23, 0(r3)
	mr       r4, r28
	stfs     f30, 4(r3)
	stfs     f26, 8(r3)
	lwz      r3, 0x178(r27)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f24, 0x18(r3)
	addi     r28, r28, 1

lbl_80167814:
	cmpw     r28, r29
	blt      lbl_80167700
	lfs      f25, lbl_80518914@sda21(r2)
	mr       r4, r29
	lfs      f0, 0x2f4(r27)
	lwz      r3, 0x35c(r27)
	lfs      f1, 0x2f8(r27)
	fadds    f0, f0, f25
	lfs      f2, 0x2fc(r27)
	lfs      f23, 0xc0(r3)
	fadds    f1, f1, f25
	fadds    f2, f2, f25
	lfs      f24, lbl_80518918@sda21(r2)
	stfs     f0, 0x2f4(r27)
	stfs     f1, 0x2f8(r27)
	stfs     f2, 0x2fc(r27)
	lwz      r3, 0x178(r27)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f25, 0(r3)
	fmuls    f24, f24, f23
	mr       r4, r29
	stfs     f25, 4(r3)
	stfs     f25, 8(r3)
	lwz      r3, 0x178(r27)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f24, 0x18(r3)

lbl_8016787C:
	lwz      r3, 0x360(r27)
	lis      r0, 0x4330
	stw      r0, 0x28(r1)
	xoris    r0, r3, 0x8000
	lfd      f2, lbl_80518930@sda21(r2)
	stw      r0, 0x2c(r1)
	lfs      f4, lbl_80518910@sda21(r2)
	lfd      f1, 0x28(r1)
	lfs      f0, 0x2f4(r27)
	fsubs    f3, f1, f2
	lfs      f1, 0x2f8(r27)
	lfs      f2, 0x2fc(r27)
	fdivs    f3, f4, f3
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0x2f4(r27)
	stfs     f1, 0x2f8(r27)
	stfs     f2, 0x2fc(r27)

lbl_801678C8:
	psq_l    f31, 216(r1), 0, qr0
	lfd      f31, 0xd0(r1)
	psq_l    f30, 200(r1), 0, qr0
	lfd      f30, 0xc0(r1)
	psq_l    f29, 184(r1), 0, qr0
	lfd      f29, 0xb0(r1)
	psq_l    f28, 168(r1), 0, qr0
	lfd      f28, 0xa0(r1)
	psq_l    f27, 152(r1), 0, qr0
	lfd      f27, 0x90(r1)
	psq_l    f26, 136(r1), 0, qr0
	lfd      f26, 0x80(r1)
	psq_l    f25, 120(r1), 0, qr0
	lfd      f25, 0x70(r1)
	psq_l    f24, 104(r1), 0, qr0
	lfd      f24, 0x60(r1)
	psq_l    f23, 88(r1), 0, qr0
	lfd      f23, 0x50(r1)
	lmw      r26, 0x38(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80167924
 * Size:	000220
 */
// WIP: https://decomp.me/scratch/DzVGu
void Pellet::setupParticles_simple()
{
	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stfd     f25, 0x50(r1)
	psq_st   f25, 88(r1), 0, qr0
	stfd     f24, 0x40(r1)
	psq_st   f24, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r29, r3
	lwz      r5, 0x35c(r3)
	lwz      r4, 0x360(r3)
	lfs      f24, 0xa0(r5)
	bl       createParticles__Q24Game11DynCreatureFi
	lwz      r0, 0x360(r29)
	lis      r31, 0x4330
	lwz      r4, 0x35c(r29)
	lis      r3, sincosTable___5JMath@ha
	xoris    r0, r0, 0x8000
	stw      r31, 8(r1)
	lfd      f29, lbl_80518930@sda21(r2)
	addi     r28, r3, sincosTable___5JMath@l
	stw      r0, 0xc(r1)
	li       r30, 0
	lfs      f3, lbl_80518988@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f1, lbl_80518918@sda21(r2)
	fsubs    f2, f0, f29
	lfs      f0, 0xc0(r4)
	lfs      f30, lbl_80518914@sda21(r2)
	fmuls    f25, f1, f0
	lfs      f31, lbl_8051898C@sda21(r2)
	fdivs    f26, f3, f2
	fsubs    f27, f24, f25
	b        lbl_80167AD8

lbl_801679E8:
	xoris    r0, r30, 0x8000
	stw      r31, 8(r1)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f29
	fmuls    f1, f26, f0
	fmr      f0, f1
	fcmpo    cr0, f1, f30
	bge      lbl_80167A10
	fneg     f0, f1

lbl_80167A10:
	fmuls    f0, f0, f31
	fcmpo    cr0, f1, f30
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r28, r0
	lfs      f0, 4(r3)
	fmuls    f28, f27, f0
	bge      lbl_80167A64
	lfs      f0, lbl_80518990@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80167A84

lbl_80167A64:
	fmuls    f0, f1, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80167A84:
	fmuls    f24, f27, f0
	lfs      f0, 0x2f4(r29)
	lfs      f1, 0x2f8(r29)
	mr       r4, r30
	lfs      f2, 0x2fc(r29)
	fadds    f0, f0, f24
	fadds    f1, f1, f30
	fadds    f2, f2, f28
	stfs     f0, 0x2f4(r29)
	stfs     f1, 0x2f8(r29)
	stfs     f2, 0x2fc(r29)
	lwz      r3, 0x178(r29)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f24, 0(r3)
	mr       r4, r30
	stfs     f30, 4(r3)
	stfs     f28, 8(r3)
	lwz      r3, 0x178(r29)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f25, 0x18(r3)
	addi     r30, r30, 1

lbl_80167AD8:
	lwz      r0, 0x360(r29)
	cmpw     r30, r0
	blt      lbl_801679E8
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	psq_l    f25, 88(r1), 0, qr0
	lfd      f25, 0x50(r1)
	psq_l    f24, 72(r1), 0, qr0
	lfd      f24, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r0, 0xc4(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80167B44
 * Size:	000230
 */
// WIP: https://decomp.me/scratch/jVGhn
void Pellet::setupParticles_tall()
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	stfd     f31, 0xc0(r1)
	psq_st   f31, 200(r1), 0, qr0
	stfd     f30, 0xb0(r1)
	psq_st   f30, 184(r1), 0, qr0
	stfd     f29, 0xa0(r1)
	psq_st   f29, 168(r1), 0, qr0
	stfd     f28, 0x90(r1)
	psq_st   f28, 152(r1), 0, qr0
	stfd     f27, 0x80(r1)
	psq_st   f27, 136(r1), 0, qr0
	stfd     f26, 0x70(r1)
	psq_st   f26, 120(r1), 0, qr0
	stfd     f25, 0x60(r1)
	psq_st   f25, 104(r1), 0, qr0
	stfd     f24, 0x50(r1)
	psq_st   f24, 88(r1), 0, qr0
	stfd     f23, 0x40(r1)
	psq_st   f23, 72(r1), 0, qr0
	stmw     r27, 0x2c(r1)
	mr       r30, r3
	lfs      f1, lbl_80518918@sda21(r2)
	lwz      r3, 0x35c(r3)
	lfs      f0, lbl_80518994@sda21(r2)
	lfs      f2, 0xc0(r3)
	lfs      f23, 0xa0(r3)
	fmuls    f24, f1, f2
	fmr      f25, f24
	fcmpo    cr0, f24, f0
	ble      lbl_80167BC8
	fmr      f25, f0

lbl_80167BC8:
	lwz      r31, 0x360(r30)
	mr       r3, r30
	mr       r4, r31
	bl       createParticles__Q24Game11DynCreatureFi
	xoris    r0, r31, 0x8000
	lis      r28, 0x4330
	stw      r0, 0xc(r1)
	fsubs    f0, f24, f25
	lis      r3, sincosTable___5JMath@ha
	lfd      f29, lbl_80518930@sda21(r2)
	stw      r28, 8(r1)
	fsubs    f27, f23, f25
	lfs      f2, lbl_80518988@sda21(r2)
	lfd      f1, 8(r1)
	fneg     f26, f0
	lfs      f30, lbl_80518914@sda21(r2)
	addi     r29, r3, sincosTable___5JMath@l
	fsubs    f0, f1, f29
	lfs      f31, lbl_8051898C@sda21(r2)
	li       r27, 0
	fdivs    f24, f2, f0
	b        lbl_80167D10

lbl_80167C20:
	xoris    r0, r27, 0x8000
	stw      r28, 8(r1)
	stw      r0, 0xc(r1)
	lfd      f0, 8(r1)
	fsubs    f0, f0, f29
	fmuls    f1, f24, f0
	fmr      f0, f1
	fcmpo    cr0, f1, f30
	bge      lbl_80167C48
	fneg     f0, f1

lbl_80167C48:
	fmuls    f0, f0, f31
	fcmpo    cr0, f1, f30
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r29, r0
	lfs      f0, 4(r3)
	fmuls    f28, f27, f0
	bge      lbl_80167C9C
	lfs      f0, lbl_80518990@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0
	fneg     f0, f0
	b        lbl_80167CBC

lbl_80167C9C:
	fmuls    f0, f1, f31
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r3, r0

lbl_80167CBC:
	fmuls    f23, f27, f0
	lfs      f0, 0x2f4(r30)
	lfs      f1, 0x2f8(r30)
	mr       r4, r27
	lfs      f2, 0x2fc(r30)
	fadds    f0, f0, f23
	fadds    f1, f1, f26
	fadds    f2, f2, f28
	stfs     f0, 0x2f4(r30)
	stfs     f1, 0x2f8(r30)
	stfs     f2, 0x2fc(r30)
	lwz      r3, 0x178(r30)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f23, 0(r3)
	mr       r4, r27
	stfs     f26, 4(r3)
	stfs     f28, 8(r3)
	lwz      r3, 0x178(r30)
	bl       getAt__Q24Game11DynParticleFi
	stfs     f25, 0x18(r3)
	addi     r27, r27, 1

lbl_80167D10:
	cmpw     r27, r31
	blt      lbl_80167C20
	psq_l    f31, 200(r1), 0, qr0
	lfd      f31, 0xc0(r1)
	psq_l    f30, 184(r1), 0, qr0
	lfd      f30, 0xb0(r1)
	psq_l    f29, 168(r1), 0, qr0
	lfd      f29, 0xa0(r1)
	psq_l    f28, 152(r1), 0, qr0
	lfd      f28, 0x90(r1)
	psq_l    f27, 136(r1), 0, qr0
	lfd      f27, 0x80(r1)
	psq_l    f26, 120(r1), 0, qr0
	lfd      f26, 0x70(r1)
	psq_l    f25, 104(r1), 0, qr0
	lfd      f25, 0x60(r1)
	psq_l    f24, 88(r1), 0, qr0
	lfd      f24, 0x50(r1)
	psq_l    f23, 72(r1), 0, qr0
	lfd      f23, 0x40(r1)
	lmw      r27, 0x2c(r1)
	lwz      r0, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80167D74
 * Size:	000018
 */
bool Pellet::panmodokiCarryable() { return !(m_config->m_params.m_code.m_data & 1); }

/*
 * --INFO--
 * Address:	80167D8C
 * Size:	00004C
 */
bool Pellet::isCarried()
{
	if (_3F6 || isPicked()) {
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	80167DD8
 * Size:	00000C
 */
// WEAK - in header
// void Pellet::isPicked() { return _3D0 & 1; }

/*
 * --INFO--
 * Address:	80167DE4
 * Size:	000044
 */
void Pellet::finishDisplayCarryInfo()
{
	if (m_carryInfoMgr) {
		m_carryInfoMgr->m_activeList.m_param.m_carryInfo.disappear();
		m_carryInfoMgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80167E28
 * Size:	0000A0
 */
void Pellet::getCarryInfoParam(CarryInfoParam& infoParam)
{
	infoParam._00        = 0;
	infoParam.m_position = m_rigid.m_configs[0]._00;
	infoParam._10        = 30.0f + m_config->m_params.m_height.m_data;
	infoParam._14        = 1;
	infoParam._1C        = 1;
	infoParam._18        = getTotalCarryPikmins();

	int minVal;
	if (_3D8 > 0) {
		minVal = _3D8;
	} else {
		minVal = m_config->m_params.m_min.m_data;
	}
	infoParam._16 = minVal;

	infoParam._15 = m_carryColor;
}

/*
 * --INFO--
 * Address:	80167EC8
 * Size:	000068
 */
void Pellet::setCarryColor(int color)
{
	if ((gameSystem->m_mode == GSM_VERSUS_MODE) && (color != m_carryColor)) {
		m_carryColor = color;
		sound_otakaraEventStart();
	}
	m_carryColor = color;
}

/*
 * --INFO--
 * Address:	80167F30
 * Size:	000004
 */
// WEAK - in header
// void Pellet::sound_otakaraEventStart() { }

/*
 * --INFO--
 * Address:	80167F34
 * Size:	00000C
 */
void Pellet::clearCarryColor() { m_carryColor = 5; }

/*
 * --INFO--
 * Address:	80167F40
 * Size:	00001C
 */
Vector3f Pellet::getVelocity() { return m_rigid.m_configs[0].m_velocity; }

/*
 * --INFO--
 * Address:	80167F5C
 * Size:	00001C
 */
void Pellet::setVelocity(Vector3f& velocity) { m_rigid.m_configs[0].m_velocity = velocity; }

/*
 * --INFO--
 * Address:	80167F78
 * Size:	000104
 */
void Pellet::allocateTexCaster()
{
	if ((getKind() == PELTYPE_TREASURE || getKind() == PELTYPE_UPGRADE) && m_caster == nullptr) {
		float radius = m_config->m_params.m_pRadius.m_data;
		Sys::Sphere sphere(m_pelletPosition, 2.0f * radius);
		m_caster = TexCaster::Mgr::sInstance->create(sphere, TAU * randFloat());

		if (m_caster) {
			if (m_captureMatrix) {
				m_caster->hide();
			} else {
				m_caster->fadein(0.5f);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8016807C
 * Size:	0002F0
 */
// WIP: https://decomp.me/scratch/hKxSS
// matches aside from a dumb instruction swap in the pop????
void Pellet::onSetPosition()
{
	if (gameSystem->m_mode != GSM_PIKLOPEDIA) {
		// this probably needs a better name
		if (isTreasurePosition()) {
			ItemTreasure::Item* item = (ItemTreasure::Item*)ItemTreasure::mgr->birth();
			if (item) {
				m_pelletPosition.y = mapMgr->getMinY(m_pelletPosition);
				item->init(nullptr);
				item->setPosition(m_pelletPosition, false);
				item->setTreasure(this);
			} else {
				JUT_PANICLINE(2326, "????????\n"); // 'disappointed' lol
			}
		}
	}

	m_rigid.initPosition(m_pelletPosition, Vector3f::zero);
	m_mainMatrix           = m_rigid._04;
	m_lodSphere.m_position = m_pelletPosition;
	updateParticlePositions();
	m_rigid._00 = 1.0f;

	m_mass = 0.0f;
	if (_32C == 1) {
		m_mass = 0.01f;
	}

	float inertiaScaling = m_config->m_params.m_inertiaScaling.m_data;
	float heightScaling  = m_config->m_params.m_height.m_data / inertiaScaling;
	float z              = 1.0f;
	float radSquared     = SQUARE(m_config->m_params.m_radius.m_data / inertiaScaling);

	float horizontal = ((radSquared / 4) + (SQUARE(heightScaling) / 12.0f)) * z;
	float vertical   = z * (radSquared / 2);

	m_rigid._144(0, 0) *= horizontal;
	m_rigid._144(0, 1) *= horizontal;
	m_rigid._144(0, 2) *= horizontal;
	m_rigid._144(1, 0) *= vertical;
	m_rigid._144(1, 1) *= vertical;
	m_rigid._144(1, 2) *= vertical;
	m_rigid._144(2, 0) *= horizontal;
	m_rigid._144(2, 1) *= horizontal;
	m_rigid._144(2, 2) *= horizontal;
	m_lodSphere.m_position = m_pelletPosition;
	m_rigid._175 |= 1;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	lwz      r4, 0x44(r4)
	cmpwi    r4, 4
	beq      lbl_801681C8
	lwz      r5, 0xb8(r31)
	li       r30, 0
	cmplwi   r5, 0
	bne      lbl_801680E4
	lbz      r0, mDebug__Q24Game9PelletMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_801680E4
	lwz      r3, 0x35c(r31)
	lfs      f0, lbl_80518914@sda21(r2)
	lfs      f1, 0x1b0(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_801680E4
	lbz      r0, 0x3c4(r31)
	cmplwi   r0, 0
	bne      lbl_801680E4
	li       r30, 1

lbl_801680E4:
	cmpwi    r4, 1
	bne      lbl_80168140
	cmplwi   r5, 0
	bne      lbl_80168140
	lbz      r0, 0x3c4(r31)
	cmplwi   r0, 0
	bne      lbl_80168140
	lbz      r0, 0x32c(r31)
	cmplwi   r0, 4
	bne      lbl_80168114
	li       r30, 0
	b        lbl_80168140

lbl_80168114:
	cmplwi   r0, 5
	bne      lbl_80168124
	li       r30, 0
	b        lbl_80168140

lbl_80168124:
	cmplwi   r0, 6
	bne      lbl_80168140
	mr       r3, r31
	bl       getStateID__Q24Game6PelletFv
	cmpwi    r3, 5
	beq      lbl_80168140
	li       r30, 1

lbl_80168140:
	clrlwi.  r0, r30, 0x18
	beq      lbl_801681C8
	lwz      r3, mgr__Q24Game12ItemTreasure@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xbc(r12)
	mtctr    r12
	bctrl
	or.      r30, r3, r3
	beq      lbl_801681AC
	lwz      r3, mapMgr__4Game@sda21(r13)
	addi     r4, r31, 0x3ac
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x3b0(r31)
	mr       r3, r30
	li       r4, 0
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r30
	addi     r4, r31, 0x3ac
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	mr       r3, r30
	mr       r4, r31
	bl       setTreasure__Q34Game12ItemTreasure4ItemFPQ24Game6Pellet
	b        lbl_801681C8

lbl_801681AC:
	lis      r3, lbl_8047E344@ha
	lis      r5, lbl_8047E38C@ha
	addi     r3, r3, lbl_8047E344@l
	li       r4, 0x916
	addi     r5, r5, lbl_8047E38C@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801681C8:
	lis      r4, "zero__10Vector3<f>"@ha
	addi     r3, r31, 0x17c
	addi     r5, r4, "zero__10Vector3<f>"@l
	addi     r4, r31, 0x3ac
	bl       "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>"
	lwz      r4, 0x180(r31)
	mr       r3, r31
	lwz      r0, 0x184(r31)
	stw      r4, 0x138(r31)
	stw      r0, 0x13c(r31)
	lwz      r4, 0x188(r31)
	lwz      r0, 0x18c(r31)
	stw      r4, 0x140(r31)
	stw      r0, 0x144(r31)
	lwz      r4, 0x190(r31)
	lwz      r0, 0x194(r31)
	stw      r4, 0x148(r31)
	stw      r0, 0x14c(r31)
	lwz      r4, 0x198(r31)
	lwz      r0, 0x19c(r31)
	stw      r4, 0x150(r31)
	stw      r0, 0x154(r31)
	lwz      r4, 0x1a0(r31)
	lwz      r0, 0x1a4(r31)
	stw      r4, 0x158(r31)
	stw      r0, 0x15c(r31)
	lwz      r4, 0x1a8(r31)
	lwz      r0, 0x1ac(r31)
	stw      r4, 0x160(r31)
	stw      r0, 0x164(r31)
	lfs      f0, 0x3ac(r31)
	stfs     f0, 0x444(r31)
	lfs      f0, 0x3b0(r31)
	stfs     f0, 0x448(r31)
	lfs      f0, 0x3b4(r31)
	stfs     f0, 0x44c(r31)
	bl       updateParticlePositions__Q24Game11DynCreatureFv
	lfs      f1, lbl_80518910@sda21(r2)
	lfs      f0, lbl_80518914@sda21(r2)
	stfs     f1, 0x17c(r31)
	stfs     f0, 0x118(r31)
	lbz      r0, 0x32c(r31)
	cmplwi   r0, 1
	bne      lbl_80168280
	lfs      f0, lbl_80518998@sda21(r2)
	stfs     f0, 0x118(r31)

lbl_80168280:
	lwz      r3, 0x35c(r31)
	lfs      f2, lbl_8051899C@sda21(r2)
	lfs      f6, 0xd0(r3)
	lfs      f0, 0xc0(r3)
	lfs      f3, 0xa0(r3)
	fdivs    f7, f0, f6
	lfs      f4, lbl_8051893C@sda21(r2)
	lfs      f5, lbl_80518910@sda21(r2)
	lfs      f0, 0x2c0(r31)
	lfs      f1, lbl_80518918@sda21(r2)
	fdivs    f6, f3, f6
	fmuls    f3, f7, f7
	fmuls    f6, f6, f6
	fdivs    f2, f3, f2
	fmadds   f2, f6, f4, f2
	fmuls    f1, f6, f1
	fmuls    f2, f5, f2
	fmuls    f1, f5, f1
	fmuls    f0, f0, f2
	stfs     f0, 0x2c0(r31)
	lfs      f0, 0x2c4(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2c4(r31)
	lfs      f0, 0x2c8(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2c8(r31)
	lfs      f0, 0x2d0(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d0(r31)
	lfs      f0, 0x2d4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d4(r31)
	lfs      f0, 0x2d8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 0x2d8(r31)
	lfs      f0, 0x2e0(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2e0(r31)
	lfs      f0, 0x2e4(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2e4(r31)
	lfs      f0, 0x2e8(r31)
	fmuls    f0, f0, f2
	stfs     f0, 0x2e8(r31)
	lfs      f0, 0x3ac(r31)
	stfs     f0, 0x444(r31)
	lfs      f0, 0x3b0(r31)
	stfs     f0, 0x448(r31)
	lfs      f0, 0x3b4(r31)
	stfs     f0, 0x44c(r31)
	lbz      r0, 0x2f1(r31)
	ori      r0, r0, 1
	stb      r0, 0x2f1(r31)
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
 * Address:	8016836C
 * Size:	000160
 */
// WIP: https://decomp.me/scratch/n0RrF
// probably matches once normalise matches
void Pellet::setPanModokiRotation(float direction)
{
	m_faceDir = direction;

	Vector3f yVec;
	m_mainMatrix.getBasis(1, yVec);
	yVec.normalise();

	Matrixf mat;
	mat.makeNaturalPosture(yVec);
	m_mainMatrix = mat;
	m_rigid.m_configs[0]._48.fromMatrixf(m_mainMatrix);
	m_rigid.m_configs[0]._48.normalise();
	m_mainMatrix.setTranslation(m_pelletPosition);
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_rigid._04.m_matrix.mtxView);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lfs      f2, lbl_80518914@sda21(r2)
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	mr       r31, r3
	stfs     f1, 0x3b8(r3)
	lfs      f4, 0x13c(r3)
	stfs     f4, 8(r1)
	fmuls    f0, f4, f4
	lfs      f3, 0x14c(r3)
	stfs     f3, 0xc(r1)
	fmuls    f5, f3, f3
	lfs      f3, 0x15c(r3)
	fadds    f0, f0, f5
	fmuls    f6, f3, f3
	stfs     f3, 0x10(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f2
	ble      lbl_801683D8
	fmadds   f0, f4, f4, f5
	fadds    f4, f6, f0
	fcmpo    cr0, f4, f2
	ble      lbl_801683DC
	frsqrte  f0, f4
	fmuls    f4, f0, f4
	b        lbl_801683DC

lbl_801683D8:
	fmr      f4, f2

lbl_801683DC:
	lfs      f0, lbl_80518914@sda21(r2)
	fcmpo    cr0, f4, f0
	ble      lbl_80168414
	lfs      f0, lbl_80518910@sda21(r2)
	lfs      f3, 8(r1)
	fdivs    f4, f0, f4
	lfs      f2, 0xc(r1)
	lfs      f0, 0x10(r1)
	fmuls    f3, f3, f4
	fmuls    f2, f2, f4
	fmuls    f0, f0, f4
	stfs     f3, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)

lbl_80168414:
	addi     r3, r1, 0x14
	addi     r4, r1, 8
	bl       "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
	lwz      r5, 0x14(r1)
	addi     r3, r31, 0x1f8
	lwz      r0, 0x18(r1)
	addi     r4, r31, 0x138
	stw      r5, 0x138(r31)
	stw      r0, 0x13c(r31)
	lwz      r5, 0x1c(r1)
	lwz      r0, 0x20(r1)
	stw      r5, 0x140(r31)
	stw      r0, 0x144(r31)
	lwz      r5, 0x24(r1)
	lwz      r0, 0x28(r1)
	stw      r5, 0x148(r31)
	stw      r0, 0x14c(r31)
	lwz      r5, 0x2c(r1)
	lwz      r0, 0x30(r1)
	stw      r5, 0x150(r31)
	stw      r0, 0x154(r31)
	lwz      r5, 0x34(r1)
	lwz      r0, 0x38(r1)
	stw      r5, 0x158(r31)
	stw      r0, 0x15c(r31)
	lwz      r5, 0x3c(r1)
	lwz      r0, 0x40(r1)
	stw      r5, 0x160(r31)
	stw      r0, 0x164(r31)
	bl       fromMatrixf__4QuatFR7Matrixf
	addi     r3, r31, 0x1f8
	bl       normalise__4QuatFv
	lfs      f0, 0x3ac(r31)
	addi     r3, r31, 0x138
	addi     r4, r31, 0x180
	stfs     f0, 0x144(r31)
	lfs      f0, 0x3b0(r31)
	stfs     f0, 0x154(r31)
	lfs      f0, 0x3b4(r31)
	stfs     f0, 0x164(r31)
	bl       PSMTXCopy
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801684CC
 * Size:	0002D0
 */
void Pellet::setOrientation(Matrixf& mat)
{
	Quat quat;
	quat.fromMatrixf(mat);
	quat.normalise();
	m_rigid.m_configs[0]._48 = quat;

	m_mainMatrix.makeQ(quat);
	m_mainMatrix.setTranslation(m_pelletPosition);
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_rigid._04.m_matrix.mtxView);

	float x;
	float z;
	if (m_mainMatrix(1, 1) > 0.0f) {
		x = m_mainMatrix(0, 2);
		z = m_mainMatrix(2, 2);
	} else {
		x = m_mainMatrix(0, 0);
		z = m_mainMatrix(2, 0);
	}

	if (z < -1.0f) {
		z = -1.0f;
	} else if (z > 1.0f) {
		z = 1.0f;
	}

	if (x > 0.0f) {
		P2ASSERTLINE(2504, checkASinCosBounds(z));
		m_faceDir = pikmin2_acos(z);
	} else {
		P2ASSERTLINE(2507, checkASinCosBounds(z));
		m_faceDir = -pikmin2_acos(z);
	}

	m_faceDir = roundAng(m_faceDir);
}

/*
 * --INFO--
 * Address:	8016879C
 * Size:	000028
 */
int Pellet::getStateID() { return m_pelletSM->getCurrID(this); }

/*
 * --INFO--
 * Address:	801687C4
 * Size:	000260
 */
// WIP: https://decomp.me/scratch/O341Q
void Pellet::bounceCallback(Sys::Triangle*)
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
	mr       r30, r3
	addi     r3, r1, 0x14
	mr       r4, r30
	lwz      r5, 0x35c(r30)
	lwz      r12, 0(r30)
	lfs      f31, 0xb0(r5)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x14(r1)
	li       r31, 0
	lfs      f2, 0x18(r1)
	lfs      f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	lfs      f0, lbl_80518928@sda21(r2)
	stfs     f2, 0x24(r1)
	fcmpo    cr0, f31, f0
	stfs     f1, 0x28(r1)
	lwz      r3, 0x35c(r30)
	lfs      f1, 0xc0(r3)
	fsubs    f0, f2, f1
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x24(r1)
	ble      lbl_8016884C
	li       r31, 2
	b        lbl_8016885C

lbl_8016884C:
	lfs      f0, lbl_80518994@sda21(r2)
	fcmpo    cr0, f31, f0
	ble      lbl_8016885C
	li       r31, 1

lbl_8016885C:
	mr       r3, r30
	addi     r5, r1, 0x20
	li       r4, 0
	bl       checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
	mr       r0, r3
	mr       r3, r30
	mr       r29, r0
	addi     r5, r1, 0x20
	li       r4, 0
	bl       checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_8016899C
	lbz      r0, 0x324(r30)
	cmplwi   r0, 0
	bne      lbl_80168990
	lis      r3, __vt__Q23efx5TBase@ha
	li       r4, 0
	addi     r0, r3, __vt__Q23efx5TBase@l
	lis      r3, __vt__Q23efx8TSimple3@ha
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx8TSimple3@l
	lis      r3, __vt__Q23efx12TOtakaraDive@ha
	li       r7, 0x279
	stw      r0, 0x44(r1)
	addi     r0, r3, __vt__Q23efx12TOtakaraDive@l
	li       r6, 0x27a
	li       r5, 0x27b
	sth      r7, 0x48(r1)
	mr       r3, r29
	sth      r6, 0x4a(r1)
	sth      r5, 0x4c(r1)
	stw      r4, 0x50(r1)
	stw      r4, 0x54(r1)
	stw      r4, 0x58(r1)
	stw      r0, 0x44(r1)
	lwz      r12, 0(r29)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0(r3)
	lis      r4, __vt__Q23efx3Arg@ha
	lwz      r8, 0x20(r1)
	lis      r3, __vt__Q23efx8ArgScale@ha
	stfs     f0, 0x24(r1)
	addi     r5, r4, __vt__Q23efx3Arg@l
	lwz      r6, 0x28(r1)
	addi     r0, r3, __vt__Q23efx8ArgScale@l
	lwz      r9, 0x35c(r30)
	addi     r3, r1, 0x44
	lwz      r7, 0x24(r1)
	addi     r4, r1, 0x30
	lfs      f3, 0xb0(r9)
	stw      r8, 8(r1)
	stw      r7, 0xc(r1)
	lfs      f2, 8(r1)
	stw      r6, 0x10(r1)
	lfs      f1, 0xc(r1)
	stw      r5, 0x30(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f0, 0x3c(r1)
	stw      r0, 0x30(r1)
	stfs     f3, 0x40(r1)
	bl       create__Q23efx12TOtakaraDiveFPQ23efx3Arg
	lwz      r3, 0x330(r30)
	addi     r4, r31, 0x380b
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl

lbl_80168990:
	li       r0, 1
	stb      r0, 0x324(r30)
	b        lbl_80168A00

lbl_8016899C:
	lbz      r0, 0x324(r30)
	cmplwi   r0, 0
	bne      lbl_80168A00
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 1
	beq      lbl_80168A00
	lwz      r3, 0x330(r30)
	addi     r4, r31, 0x3808
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	mr       r3, r30
	stb      r0, 0x324(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x1d8(r12)
	mtctr    r12
	bctrl

lbl_80168A00:
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
 * Address:	80168A24
 * Size:	000004
 */
// WEAK - in header
// void Pellet::onBounce() { }

/*
 * --INFO--
 * Address:	80168A28
 * Size:	000F84
 */
// WIP: https://decomp.me/scratch/jL72g
void Pellet::update()
{
	/*
	stwu     r1, -0x2f0(r1)
	mflr     r0
	stw      r0, 0x2f4(r1)
	stfd     f31, 0x2e0(r1)
	psq_st   f31, 744(r1), 0, qr0
	stfd     f30, 0x2d0(r1)
	psq_st   f30, 728(r1), 0, qr0
	stfd     f29, 0x2c0(r1)
	psq_st   f29, 712(r1), 0, qr0
	stfd     f28, 0x2b0(r1)
	psq_st   f28, 696(r1), 0, qr0
	stw      r31, 0x2ac(r1)
	stw      r30, 0x2a8(r1)
	stw      r29, 0x2a4(r1)
	mr       r30, r3
	lis      r5, lbl_8047E318@ha
	mr       r4, r30
	addi     r3, r1, 0x14
	lwz      r12, 0(r30)
	addi     r31, r5, lbl_8047E318@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x14(r1)
	mr       r3, r30
	lfs      f2, 0x18(r1)
	addi     r5, r1, 0xb0
	lfs      f0, 0x1c(r1)
	li       r4, 0
	stfs     f1, 0xb0(r1)
	stfs     f2, 0xb4(r1)
	stfs     f0, 0xb8(r1)
	lwz      r6, 0x35c(r30)
	lfs      f1, 0xc0(r6)
	fsubs    f0, f2, f1
	stfs     f1, 0xbc(r1)
	stfs     f0, 0xb4(r1)
	bl       checkWater__Q24Game8CreatureFPQ24Game8WaterBoxRQ23Sys6Sphere
	cmplwi   r3, 0
	beq      lbl_80168AD4
	li       r0, 1
	stb      r0, 0x325(r30)
	b        lbl_80168ADC

lbl_80168AD4:
	li       r0, 0
	stb      r0, 0x325(r30)

lbl_80168ADC:
	mr       r3, r30
	bl       updateDiscoverDisable__Q24Game6PelletFv
	lwz      r3, 0x330(r30)
	cmplwi   r3, 0
	beq      lbl_80168C68
	lwz      r12, 0x28(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 0
	bne      lbl_80168C68
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80168C68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80168C68
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_80168B7C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_80168C68

lbl_80168B7C:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80168B9C
	addi     r3, r31, 0x80
	addi     r5, r31, 0x3c
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80168B9C:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_80168BBC
	addi     r3, r31, 0x80
	addi     r5, r31, 0x3c
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80168BBC:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_80168BDC
	addi     r3, r31, 0x8c
	addi     r5, r31, 0x3c
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80168BDC:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_80168C00
	addi     r3, r31, 0x8c
	addi     r5, r31, 0x98
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80168C00:
	lwz      r12, 0(r29)
	mr       r3, r29
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80168C30
	addi     r3, r31, 0xbc
	addi     r5, r31, 0x3c
	li       r4, 0x177
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80168C30:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80168C68
	lwz      r3, 0x330(r30)
	li       r4, 0x4002
	li       r5, 0
	lwz      r12, 0x28(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl

lbl_80168C68:
	lwz      r3, 0x334(r30)
	addi     r4, r1, 0xa4
	bl       "frameWork__Q24Game11PelletCarryFR10Vector3<f>"
	clrlwi.  r0, r3, 0x18
	beq      lbl_80168CCC
	lwz      r0, 0xf0(r30)
	cmplwi   r0, 0
	bne      lbl_80168C94
	lwz      r3, 0x334(r30)
	bl       reset__Q24Game11PelletCarryFv
	b        lbl_80168CCC

lbl_80168C94:
	mr       r4, r30
	addi     r3, r1, 8
	lwz      r12, 0(r30)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0xc(r1)
	mr       r3, r30
	addi     r4, r1, 0xa4
	stfs     f0, 0xa8(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0x68(r12)
	mtctr    r12
	bctrl

lbl_80168CCC:
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80168CE0
	mr       r3, r30
	bl       updateClaim__Q24Game6PelletFv

lbl_80168CE0:
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80168D5C
	lwz      r29, 0x3d8(r30)
	cmpwi    r29, 0
	ble      lbl_80168CFC
	b        lbl_80168D04

lbl_80168CFC:
	lwz      r3, 0x35c(r30)
	lwz      r29, 0x120(r3)

lbl_80168D04:
	mr       r3, r30
	bl       getTotalCarryPikmins__Q24Game6PelletFv
	cmpw     r3, r29
	bge      lbl_80168D5C
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0(r30)
	lwz      r12, 0x14c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x334(r30)
	bl       reset__Q24Game11PelletCarryFv
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_80168D5C
	lwz      r12, 0(r30)
	lis      r4, "zero__10Vector3<f>"@ha
	mr       r3, r30
	lwz      r12, 0x68(r12)
	addi     r4, r4, "zero__10Vector3<f>"@l
	mtctr    r12
	bctrl

lbl_80168D5C:
	lwz      r3, 0x114(r30)
	addi     r4, r30, 0x444
	bl       getBoundingSphere__8CollTreeFRQ23Sys6Sphere
	mr       r3, r30
	bl       updateCell__Q24Game8CreatureFv
	lwz      r0, 0x358(r30)
	cmplwi   r0, 0
	beq      lbl_80168DB0
	lwz      r3, 0x114(r30)
	bl       update__8CollTreeFv
	lwz      r3, 0x114(r30)
	addi     r4, r30, 0x444
	bl       getBoundingSphere__8CollTreeFRQ23Sys6Sphere
	lwz      r3, 0x114(r30)
	li       r4, 0
	lwz      r3, 0(r3)
	lwz      r3, 0x5c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80168DB0:
	lwz      r3, 0x3c8(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x3c8(r30)
	mr       r4, r30
	bl       "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
	cmpwi    r3, 6
	bne      lbl_80168DF4
	addi     r3, r1, 0x98
	bl       __ct__Q24Game9AILODParmFv
	mr       r3, r30
	addi     r4, r1, 0x98
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	b        lbl_80169970

lbl_80168DF4:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80168E50
	addi     r3, r1, 0x8c
	bl       __ct__Q24Game9AILODParmFv
	mr       r3, r30
	addi     r4, r1, 0x8c
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80169970
	lbz      r0, 0xd8(r30)
	ori      r0, r0, 0x34
	stb      r0, 0xd8(r30)
	b        lbl_80169970

lbl_80168E50:
	lwz      r0, 0xb8(r30)
	cmplwi   r0, 0
	beq      lbl_80168E74
	addi     r3, r1, 0x80
	bl       __ct__Q24Game9AILODParmFv
	mr       r3, r30
	addi     r4, r1, 0x80
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	b        lbl_80169970

lbl_80168E74:
	addi     r3, r1, 0x74
	bl       __ct__Q24Game9AILODParmFv
	mr       r3, r30
	addi     r4, r1, 0x74
	bl       updateLOD__Q24Game8CreatureFRQ24Game9AILODParm
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80168EB0
	lbz      r0, 0xd8(r30)
	ori      r0, r0, 0x34
	stb      r0, 0xd8(r30)

lbl_80168EB0:
	lbz      r0, 0x364(r30)
	li       r5, 2
	cmplwi   r0, 0
	bne      lbl_80168EC8
	li       r4, 1
	b        lbl_80168EF4

lbl_80168EC8:
	cmplwi   r0, 2
	bne      lbl_80168ED8
	li       r4, 0
	b        lbl_80168EF4

lbl_80168ED8:
	lbz      r0, 0xd8(r30)
	clrlwi   r0, r0, 0x1e
	cmpwi    r0, 2
	blt      lbl_80168EF0
	li       r4, 0
	b        lbl_80168EF4

lbl_80168EF0:
	li       r4, 1

lbl_80168EF4:
	lbz      r3, 0xd8(r30)
	rlwinm.  r0, r3, 0, 0x1d, 0x1d
	beq      lbl_80168F0C
	clrlwi   r0, r3, 0x1e
	cmpwi    r0, 1
	blt      lbl_80168F10

lbl_80168F0C:
	li       r5, 1

lbl_80168F10:
	stb      r4, 0x39c(r30)
	lbz      r0, disableDynamics__Q24Game9PelletMgr@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_80168F2C
	lbz      r0, 0x39c(r30)
	cmplwi   r0, 0
	bne      lbl_80169364

lbl_80168F2C:
	lwz      r3, sys@sda21(r13)
	lfs      f0, 0x3ac(r30)
	lfs      f31, 0x54(r3)
	stfs     f0, 0x64(r1)
	lfs      f1, 0x3b0(r30)
	stfs     f1, 0x68(r1)
	lfs      f0, 0x3b4(r30)
	stfs     f0, 0x6c(r1)
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80168F64
	lfs      f0, lbl_80518938@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x68(r1)

lbl_80168F64:
	lwz      r3, 0x35c(r30)
	addi     r31, r30, 0x1bc
	lfs      f2, lbl_80518918@sda21(r2)
	lfs      f1, 0xc0(r3)
	lfs      f0, lbl_80518914@sda21(r2)
	fmuls    f1, f2, f1
	stfs     f1, 0x70(r1)
	stfs     f0, 0x1e0(r30)
	stfs     f0, 0x1e4(r30)
	stfs     f0, 0x1e8(r30)
	stfs     f0, 0x1d4(r30)
	stfs     f0, 0x1d8(r30)
	stfs     f0, 0x1dc(r30)
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_80168FB0
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80168FBC

lbl_80168FB0:
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	bne      lbl_80168FD0

lbl_80168FBC:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	lfs      f0, 4(r31)
	lfs      f1, 0x28(r3)
	fnmsubs  f0, f31, f1, f0
	stfs     f0, 4(r31)

lbl_80168FD0:
	lfs      f0, lbl_80518914@sda21(r2)
	mr       r3, r30
	stfs     f0, 0x120(r30)
	lfs      f0, 0(r31)
	stfs     f0, 0x58(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0x5c(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x60(r1)
	lwz      r12, 0(r30)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80169060
	lbz      r0, 0x32c(r30)
	cmplwi   r0, 1
	beq      lbl_80169060
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80169060
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_80169060
	lfs      f1, 0x58(r1)
	lfs      f0, 0x11c(r30)
	lfs      f2, 0x5c(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x60(r1)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x120(r30)
	fadds    f0, f2, f0
	stfs     f0, 0x5c(r1)
	lfs      f0, 0x124(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x60(r1)

lbl_80169060:
	lfs      f4, lbl_80518914@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	li       r5, 0
	stfs     f4, 0x11c(r30)
	addi     r7, r1, 0x64
	lfs      f3, lbl_80518918@sda21(r2)
	addi     r6, r1, 0x58
	stfs     f4, 0x120(r30)
	li       r0, -1
	lfs      f0, lbl_805189B0@sda21(r2)
	fmr      f1, f31
	stfs     f4, 0x124(r30)
	addi     r4, r1, 0x1f8
	stw      r5, 0x20c(r1)
	lfs      f2, 0x800(r3)
	stw      r7, 0x1f8(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r6, 0x1fc(r1)
	stfs     f3, 0x200(r1)
	stfs     f4, 0x204(r1)
	stw      r5, 0x208(r1)
	stw      r5, 0x23c(r1)
	stb      r5, 0x26c(r1)
	stb      r5, 0x211(r1)
	stb      r5, 0x210(r1)
	stw      r5, 0x240(r1)
	stb      r5, 0x288(r1)
	stw      r5, 0x28c(r1)
	stfs     f2, 0x224(r1)
	stfs     f0, 0x228(r1)
	stw      r0, 0x290(r1)
	stw      r5, 0x244(r1)
	stb      r5, 0x212(r1)
	stw      r30, 0x20c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80169188
	lwz      r3, 0x240(r1)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_80169150
	lfs      f1, 0x5c(r1)
	lfs      f0, 0x258(r1)
	lfs      f2, 0x58(r1)
	fmuls    f0, f1, f0
	lfs      f1, 0x254(r1)
	lfs      f4, 0x60(r1)
	lfs      f3, 0x25c(r1)
	fmadds   f1, f2, f1, f0
	lfs      f0, lbl_80518918@sda21(r2)
	fmadds   f1, f4, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80169150
	li       r0, 0

lbl_80169150:
	clrlwi.  r0, r0, 0x18
	beq      lbl_80169170
	lbz      r3, 0x3bc(r30)
	cmplwi   r3, 0x64
	bge      lbl_80169190
	addi     r0, r3, 2
	stb      r0, 0x3bc(r30)
	b        lbl_80169190

lbl_80169170:
	lbz      r3, 0x3bc(r30)
	cmplwi   r3, 0
	beq      lbl_80169190
	addi     r0, r3, -1
	stb      r0, 0x3bc(r30)
	b        lbl_80169190

lbl_80169188:
	li       r0, 0
	stb      r0, 0x3bc(r30)

lbl_80169190:
	lfs      f0, 0x58(r1)
	li       r0, 0
	stfs     f0, 0(r31)
	lfs      f0, 0x5c(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x60(r1)
	stfs     f0, 8(r31)
	lwz      r3, platMgr__4Game@sda21(r13)
	stw      r31, 0x1fc(r1)
	cmplwi   r3, 0
	stb      r0, 0x211(r1)
	beq      lbl_801691CC
	fmr      f1, f31
	addi     r4, r1, 0x1f8
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_801691CC:
	lwz      r4, 0x23c(r1)
	cmplwi   r4, 0
	beq      lbl_8016930C
	lwz      r0, 0xc8(r30)
	cmplwi   r0, 0
	bne      lbl_801691F8
	lwz      r12, 0(r30)
	mr       r3, r30
	lwz      r12, 0xe8(r12)
	mtctr    r12
	bctrl

lbl_801691F8:
	lwz      r0, 0x23c(r1)
	stw      r0, 0xc8(r30)
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80169314
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_80169314
	lfs      f1, 0x24c(r1)
	lfs      f4, 4(r31)
	lwz      r4, _aiConstants__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	fmuls    f0, f4, f1
	lfs      f13, 0x248(r1)
	lfs      f28, 0(r31)
	lfs      f7, 0x28(r4)
	lfs      f6, 0x54(r3)
	fmadds   f5, f28, f13, f0
	lfs      f2, 0x250(r1)
	lfs      f3, 8(r31)
	fmuls    f6, f7, f6
	lfs      f0, lbl_80518914@sda21(r2)
	fmadds   f11, f3, f2, f5
	lfs      f10, lbl_80518994@sda21(r2)
	fneg     f12, f6
	lfs      f5, lbl_80518910@sda21(r2)
	fmuls    f6, f13, f11
	fmuls    f9, f12, f1
	fmuls    f7, f1, f11
	fsubs    f8, f28, f6
	fmuls    f6, f2, f11
	fmadds   f11, f0, f13, f9
	fsubs    f7, f4, f7
	fmuls    f9, f8, f31
	fmadds   f11, f0, f2, f11
	fsubs    f6, f3, f6
	fmuls    f8, f7, f31
	fmuls    f9, f9, f10
	fmuls    f7, f6, f31
	fmuls    f8, f8, f10
	fmuls    f6, f13, f11
	fsubs    f9, f28, f9
	fmuls    f7, f7, f10
	fsubs    f6, f0, f6
	fmuls    f1, f1, f11
	stfs     f9, 0(r31)
	fsubs    f8, f4, f8
	fneg     f6, f6
	fsubs    f4, f12, f1
	fmuls    f1, f2, f11
	stfs     f8, 4(r31)
	fsubs    f3, f3, f7
	fneg     f2, f4
	fsubs    f0, f0, f1
	stfs     f3, 8(r31)
	fmuls    f3, f6, f5
	fmuls    f1, f2, f5
	lfs      f2, 0(r31)
	fneg     f0, f0
	fadds    f2, f2, f3
	fmuls    f0, f0, f5
	stfs     f2, 0(r31)
	lfs      f2, 4(r31)
	fadds    f1, f2, f1
	stfs     f1, 4(r31)
	lfs      f1, 8(r31)
	fadds    f0, f1, f0
	stfs     f0, 8(r31)
	b        lbl_80169314

lbl_8016930C:
	li       r0, 0
	stw      r0, 0xc8(r30)

lbl_80169314:
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80169330
	lfs      f1, 0x68(r1)
	lfs      f0, lbl_80518938@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x68(r1)

lbl_80169330:
	lfs      f0, 0x64(r1)
	stfs     f0, 0x3ac(r30)
	lfs      f0, 0x68(r1)
	stfs     f0, 0x3b0(r30)
	lfs      f0, 0x6c(r1)
	stfs     f0, 0x3b4(r30)
	lfs      f0, 0x3ac(r30)
	stfs     f0, 0x1b0(r30)
	lfs      f0, 0x3b0(r30)
	stfs     f0, 0x1b4(r30)
	lfs      f0, 0x3b4(r30)
	stfs     f0, 0x1b8(r30)
	b        lbl_8016995C

lbl_80169364:
	cmpwi    r5, 0
	ble      lbl_8016995C
	addi     r3, r30, 0x17c
	li       r4, 0
	bl       computeForces__Q24Game5RigidFi
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_801693A0
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_801693A0
	lwz      r4, 0x35c(r30)
	mr       r3, r30
	lfs      f1, 0x110(r4)
	bl       computeForces__Q24Game11DynCreatureFf

lbl_801693A0:
	lwz      r3, _aiConstants__4Game@sda21(r13)
	mr       r4, r30
	li       r31, 1
	lfs      f0, 0x28(r3)
	fneg     f0, f0
	stfs     f0, 0x1cc(r30)
	lwz      r3, 0x3c8(r30)
	bl       "getCurrID__Q24Game28StateMachine<Q24Game6Pellet>FPQ24Game6Pellet"
	cmpwi    r3, 0
	bne      lbl_801695BC
	lbz      r0, 0x311(r30)
	cmplwi   r0, 0
	beq      lbl_801695BC
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x208(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801695BC
	lfs      f2, 0x1bc(r30)
	lfs      f1, 0x1c0(r30)
	fmuls    f0, f2, f2
	lfs      f3, 0x1c4(r30)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518914@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80169438
	fmadds   f0, f2, f2, f4
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_8016943C
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_8016943C

lbl_80169438:
	fmr      f2, f1

lbl_8016943C:
	lfs      f0, lbl_80518994@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801695BC
	lfs      f2, 0x1e0(r30)
	lfs      f1, 0x1e4(r30)
	fmuls    f0, f2, f2
	lfs      f3, 0x1e8(r30)
	fmuls    f4, f1, f1
	lfs      f1, lbl_80518914@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80169490
	fmadds   f0, f2, f2, f4
	fadds    f2, f3, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80169494
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80169494

lbl_80169490:
	fmr      f2, f1

lbl_80169494:
	lfs      f0, lbl_805189B4@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_801695BC
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_801695BC
	lwz      r4, sys@sda21(r13)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f0, 0x1b0(r30)
	lfs      f28, 0x54(r4)
	addi     r7, r1, 0x48
	lfs      f5, lbl_80518918@sda21(r2)
	addi     r6, r1, 0x3c
	stfs     f0, 0x48(r1)
	li       r5, 0
	lwz      r8, _aiConstants__4Game@sda21(r13)
	li       r0, -1
	lfs      f6, 0x1b4(r30)
	fmr      f1, f28
	lfs      f4, lbl_80518914@sda21(r2)
	addi     r4, r1, 0x15c
	stfs     f6, 0x4c(r1)
	lfs      f2, 0x800(r3)
	lfs      f3, 0x1b8(r30)
	lfs      f0, lbl_805189B0@sda21(r2)
	stfs     f3, 0x50(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lwz      r9, 0x35c(r30)
	lfs      f3, 0xc0(r9)
	fmuls    f5, f5, f3
	fsubs    f3, f6, f5
	stfs     f5, 0x54(r1)
	stfs     f3, 0x4c(r1)
	lfs      f3, 0x28(r8)
	fneg     f3, f3
	stfs     f4, 0x3c(r1)
	stfs     f4, 0x44(r1)
	stfs     f3, 0x40(r1)
	stw      r7, 0x15c(r1)
	stw      r6, 0x160(r1)
	stfs     f4, 0x164(r1)
	stfs     f4, 0x168(r1)
	stw      r5, 0x16c(r1)
	stw      r5, 0x1a0(r1)
	stb      r5, 0x1d0(r1)
	stb      r5, 0x175(r1)
	stb      r5, 0x174(r1)
	stw      r5, 0x1a4(r1)
	stw      r5, 0x170(r1)
	stb      r5, 0x1ec(r1)
	stw      r5, 0x1f0(r1)
	stfs     f2, 0x188(r1)
	stfs     f0, 0x18c(r1)
	stw      r0, 0x1f4(r1)
	stw      r5, 0x1a8(r1)
	stb      r5, 0x176(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x1a0(r1)
	cmplwi   r0, 0
	bne      lbl_801695AC
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801695AC
	fmr      f1, f28
	addi     r4, r1, 0x15c
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_801695AC:
	lwz      r0, 0x1a0(r1)
	cmplwi   r0, 0
	beq      lbl_801695BC
	li       r31, 0

lbl_801695BC:
	lwz      r3, sys@sda21(r13)
	clrlwi.  r0, r31, 0x18
	lfs      f0, lbl_80518918@sda21(r2)
	lfs      f1, 0x54(r3)
	lfs      f30, 0x1b0(r30)
	fmuls    f31, f1, f0
	lfs      f29, 0x1b4(r30)
	lfs      f28, 0x1b8(r30)
	beq      lbl_80169668
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0xb0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016964C
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8016964C
	lbz      r0, 0x3f6(r30)
	cmplwi   r0, 0
	bne      lbl_8016964C
	lfs      f0, lbl_80518914@sda21(r2)
	stfs     f0, 0x120(r30)
	lfs      f1, 0x1bc(r30)
	lfs      f0, 0x11c(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1bc(r30)
	lfs      f1, 0x1c0(r30)
	lfs      f0, 0x120(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1c0(r30)
	lfs      f1, 0x1c4(r30)
	lfs      f0, 0x124(r30)
	fadds    f0, f1, f0
	stfs     f0, 0x1c4(r30)

lbl_8016964C:
	li       r29, 0

lbl_80169650:
	fmr      f1, f31
	mr       r3, r30
	bl       simulate__Q24Game11DynCreatureFf
	addi     r29, r29, 1
	cmpwi    r29, 2
	blt      lbl_80169650

lbl_80169668:
	lwz      r4, sys@sda21(r13)
	lis      r3, sincosTable___5JMath@ha
	addi     r3, r3, sincosTable___5JMath@l
	lfs      f6, lbl_80518918@sda21(r2)
	lfs      f31, 0x54(r4)
	addi     r7, r1, 0x2c
	lfs      f0, lbl_80518910@sda21(r2)
	addi     r6, r1, 0x20
	stfs     f30, 0x2c(r1)
	li       r5, 0
	fdivs    f9, f0, f31
	lfs      f3, lbl_80518914@sda21(r2)
	stfs     f29, 0x30(r1)
	li       r0, -1
	lfs      f2, 0x800(r3)
	addi     r4, r1, 0xc0
	stfs     f28, 0x34(r1)
	fmr      f1, f31
	lfs      f0, lbl_805189B0@sda21(r2)
	lwz      r8, 0x35c(r30)
	lwz      r3, mapMgr__4Game@sda21(r13)
	lfs      f4, 0xc0(r8)
	fmuls    f4, f6, f4
	stfs     f4, 0x38(r1)
	lfs      f4, 0x1b0(r30)
	stfs     f4, 0x20(r1)
	fsubs    f4, f4, f30
	lfs      f5, 0x1b4(r30)
	fmuls    f30, f4, f9
	stfs     f5, 0x24(r1)
	fsubs    f7, f5, f29
	lfs      f5, 0x1b8(r30)
	fmuls    f29, f7, f9
	fsubs    f8, f5, f28
	stfs     f5, 0x28(r1)
	stfs     f4, 0x20(r1)
	fmuls    f28, f8, f9
	stfs     f7, 0x24(r1)
	stfs     f8, 0x28(r1)
	stfs     f30, 0x20(r1)
	stfs     f29, 0x24(r1)
	stfs     f28, 0x28(r1)
	stw      r7, 0xc0(r1)
	stw      r6, 0xc4(r1)
	stfs     f6, 0xc8(r1)
	stfs     f3, 0xcc(r1)
	stw      r5, 0xd0(r1)
	stw      r5, 0x104(r1)
	stb      r5, 0x134(r1)
	stb      r5, 0xd9(r1)
	stb      r5, 0xd8(r1)
	stw      r5, 0x108(r1)
	stw      r5, 0xd4(r1)
	stb      r5, 0x150(r1)
	stw      r5, 0x154(r1)
	stfs     f2, 0xec(r1)
	stfs     f0, 0xf0(r1)
	stw      r0, 0x158(r1)
	stw      r5, 0x10c(r1)
	stb      r5, 0xda(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r3, platMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80169780
	fmr      f1, f31
	addi     r4, r1, 0xc0
	bl       traceMove__Q24Game7PlatMgrFRQ24Game8MoveInfof

lbl_80169780:
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80169800
	lwz      r3, 0x108(r1)
	neg      r0, r3
	or       r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	beq      lbl_801697C8
	lfs      f0, 0x120(r1)
	lfs      f2, 0x11c(r1)
	fmuls    f1, f29, f0
	lfs      f3, 0x124(r1)
	lfs      f0, lbl_80518918@sda21(r2)
	fmadds   f1, f30, f2, f1
	fmadds   f1, f28, f3, f1
	fcmpo    cr0, f1, f0
	ble      lbl_801697C8
	li       r0, 0

lbl_801697C8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801697E8
	lbz      r3, 0x3bc(r30)
	cmplwi   r3, 0x64
	bge      lbl_80169808
	addi     r0, r3, 2
	stb      r0, 0x3bc(r30)
	b        lbl_80169808

lbl_801697E8:
	lbz      r3, 0x3bc(r30)
	cmplwi   r3, 0
	beq      lbl_80169808
	addi     r0, r3, -1
	stb      r0, 0x3bc(r30)
	b        lbl_80169808

lbl_80169800:
	li       r0, 0
	stb      r0, 0x3bc(r30)

lbl_80169808:
	lwz      r3, 0xc0(r1)
	lfs      f1, lbl_80518914@sda21(r2)
	lfs      f3, 8(r3)
	lfs      f0, 0(r3)
	stfs     f0, 0x1b0(r30)
	stfs     f3, 0x1b8(r30)
	lfs      f3, 0x1bc(r30)
	lfs      f2, 0x1c0(r30)
	lfs      f4, 0x1c4(r30)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80169864
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80169868
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80169868

lbl_80169864:
	fmr      f2, f1

lbl_80169868:
	lfs      f0, lbl_80518914@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_801698A4
	lfs      f1, lbl_80518910@sda21(r2)
	lfs      f0, 0x1bc(r30)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0x1bc(r30)
	lfs      f0, 0x1c0(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c0(r30)
	lfs      f0, 0x1c4(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c4(r30)
	b        lbl_801698A8

lbl_801698A4:
	fmr      f2, f0

lbl_801698A8:
	lfs      f3, 0x11c(r30)
	lfs      f1, 0x120(r30)
	fmuls    f0, f3, f3
	lfs      f4, 0x124(r30)
	fmuls    f5, f1, f1
	lfs      f1, lbl_80518914@sda21(r2)
	fmuls    f4, f4, f4
	fadds    f0, f0, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801698F0
	fmadds   f0, f3, f3, f5
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_801698F4
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_801698F4

lbl_801698F0:
	fmr      f0, f1

lbl_801698F4:
	fcmpo    cr0, f2, f0
	ble      lbl_80169928
	fsubs    f1, f2, f0
	lfs      f0, 0x1bc(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1bc(r30)
	lfs      f0, 0x1c0(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c0(r30)
	lfs      f0, 0x1c4(r30)
	fmuls    f0, f0, f1
	stfs     f0, 0x1c4(r30)
	b        lbl_8016994C

lbl_80169928:
	lfs      f0, 0x1bc(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x1bc(r30)
	lfs      f0, 0x1c0(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x1c0(r30)
	lfs      f0, 0x1c4(r30)
	fmuls    f0, f0, f2
	stfs     f0, 0x1c4(r30)

lbl_8016994C:
	lfs      f0, lbl_80518914@sda21(r2)
	stfs     f0, 0x11c(r30)
	stfs     f0, 0x120(r30)
	stfs     f0, 0x124(r30)

lbl_8016995C:
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x1ec(r12)
	mtctr    r12
	bctrl

lbl_80169970:
	psq_l    f31, 744(r1), 0, qr0
	lfd      f31, 0x2e0(r1)
	psq_l    f30, 728(r1), 0, qr0
	lfd      f30, 0x2d0(r1)
	psq_l    f29, 712(r1), 0, qr0
	lfd      f29, 0x2c0(r1)
	psq_l    f28, 696(r1), 0, qr0
	lfd      f28, 0x2b0(r1)
	lwz      r31, 0x2ac(r1)
	lwz      r30, 0x2a8(r1)
	lwz      r0, 0x2f4(r1)
	lwz      r29, 0x2a4(r1)
	mtlr     r0
	addi     r1, r1, 0x2f0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801699AC
 * Size:	000004
 */
// WEAK - in header
// void Pellet::do_update() { }

// } // namespace Game

// namespace PSM {

/*
 * --INFO--
 * Address:	801699B0
 * Size:	000008
 */
// WEAK - in header
// bool Scene_Game::isCave() { return false; }

// namespace Game {

// } // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void Pellet::move_noDynamics(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	801699B8
 * Size:	00001C
 */
void Pellet::getPikiBirthCount(int& min, int& max)
{
	min = m_config->m_params.m_pikiCountMin.m_data;
	max = m_config->m_params.m_pikiCountMax.m_data;
}

/*
 * --INFO--
 * Address:	801699D4
 * Size:	000014
 */
void PelletMgr::setMovieDraw(bool check) { m_movieDrawDisabled = !check; }

/*
 * --INFO--
 * Address:	801699E8
 * Size:	00012C
 */
void Pellet::doSimulation(float constraint)
{
	Creature::CheckHellArg hellArg;
	hellArg._00 = false;
	if (checkHell(hellArg) == 2) {
		Vector3f position   = getPosition();
		Vector3f wpPosition = position;
		wpPosition.y        = 0.0f;

		NotOff condition;
		WPSearchArg searchArg;
		searchArg.m_position  = wpPosition;
		searchArg.m_condition = &condition;
		searchArg._10         = 0;
		searchArg._14         = 10.0f;

		WayPoint* wayPoint = mapMgr->m_routeMgr->getNearestWayPoint(searchArg);
		if (wayPoint) {
			wpPosition   = wayPoint->getPosition();
			wpPosition.y = 100.0f + mapMgr->getMinY(wpPosition);

			setPosition(wpPosition, false);
		}
	}
}

/*
 * --INFO--
 * Address:	80169B14
 * Size:	000114
 */
void Pellet::updateTrMatrix()
{
	if (m_captureMatrix == nullptr) {
		m_pelletPosition = m_rigid.m_configs[0]._00;
		Vector3f vec     = _2F4 * -1.0f;
		Matrixf T;
		T.makeT(vec);

		Matrixf Q;
		Q.makeQ(m_rigid.m_configs[0]._48);

		Matrixf mat;
		PSMTXConcat(Q.m_matrix.mtxView, T.m_matrix.mtxView, mat.m_matrix.mtxView);

		mat.setTranslation(m_pelletPosition);
		m_mainMatrix = mat;
	}
}

/*
 * --INFO--
 * Address:	80169C28
 * Size:	00027C
 */
void Pellet::doAnimation()
{
	if (!pelletMgr->m_movieDrawDisabled || isMovieActor()) {
		if (gameSystem != nullptr && gameSystem->m_flags & 0x20) {
			update();
		} else {
			if (m_collTree) {
				m_collTree->getBoundingSphere(m_lodSphere);
			}
			AILODParm parm;
			updateLOD(parm);
		}

		if (m_pelletSM->getCurrID(this) == 6) {
			_41C.animate(_438);

			SysShape::Model* model  = m_model;
			J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(_41C.getCalc());

			J3DJoint* joint  = model->m_j3dModel->m_modelData->m_jointTree.m_joints[0];
			joint->m_mtxCalc = calc;
			update_pmotions();
		} else if (m_captureMatrix == nullptr) {
			if (m_pelletView == nullptr && m_model != nullptr && _41C.m_animMgr) {
				_41C.animate(_438);

				SysShape::Model* model  = m_model;
				J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(_41C.getCalc());

				J3DJoint* joint  = model->m_j3dModel->m_modelData->m_jointTree.m_joints[0];
				joint->m_mtxCalc = calc;
				update_pmotions();
			}

			m_pelletPosition  = m_rigid.m_configs[0]._00;
			Vector3f opposite = _2F4 * -1.0f;

			Matrixf matT;
			matT.makeT(opposite);

			Matrixf matQ;
			matQ.makeQ(m_rigid.m_configs[0]._48);

			Matrixf outMat;
			PSMTXConcat(matQ.m_matrix.mtxView, matT.m_matrix.mtxView, outMat.m_matrix.mtxView);
			outMat.setTranslation(m_pelletPosition);

			m_mainMatrix = outMat;

			updateParticlePositions();
		} else {
			return;
		}

		entryShape();
	}
}

/*
 * --INFO--
 * Address:	80169EA4
 * Size:	0000F0
 */
void Pellet::doEntry()
{
	if (!pelletMgr->m_movieDrawDisabled || isMovieActor()) {
		if (m_pelletView == nullptr) {
			if (m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
				m_model->show();
				changeMaterial();
			} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
				return;
			} else {
				m_model->hide();
			}
		}

		theEntry();
	}
}

/*
 * --INFO--
 * Address:	80169F94
 * Size:	000004
 */
// WEAK - in header
// void Pellet::changeMaterial() { }

/*
 * --INFO--
 * Address:	80169F98
 * Size:	000020
 */
void Pellet::doSetView(int view) { Creature::doSetView(view); }

/*
 * --INFO--
 * Address:	80169FB8
 * Size:	000020
 */
void Pellet::doViewCalc() { Creature::doViewCalc(); }

/*
 * --INFO--
 * Address:	80169FD8
 * Size:	0000DC
 */
void Pellet::theEntry()
{
	if (m_model) {
		if (m_lod.m_flags & AILOD_FLAG_NEED_SHADOW) {
			m_model->show();
		} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
			return;
		} else {
			m_model->hide();
		}
		changeMaterial();
		m_model->m_j3dModel->entry();
		m_model->m_j3dModel->calcDiffTexMtx();
	}
}

/*
 * --INFO--
 * Address:	8016A0B4
 * Size:	00009C
 */
void Pellet::entryShape()
{
	if (m_pelletView == nullptr) {
		if (m_model) {
			PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
			m_scale.setTVec(m_model->m_j3dModel->m_modelScale);
			m_model->m_j3dModel->calc();
			m_collTree->update();
		}
	} else {
		m_collTree->update();
	}
}

/*
 * --INFO--
 * Address:	8016A150
 * Size:	000024
 */
void Pellet::getBoundingSphere(Sys::Sphere& sphere) { sphere = m_lodSphere; }

/*
 * --INFO--
 * Address:	8016A174
 * Size:	00003C
 */
void Pellet::getLODSphere(Sys::Sphere& sphere)
{
	sphere.m_position = m_lodSphere.m_position;
	if (m_pelletView == nullptr) {
		sphere.m_radius = m_radius;
	} else {
		sphere.m_radius = m_lodSphere.m_radius;
	}
}

/*
 * --INFO--
 * Address:	8016A1B0
 * Size:	000058
 */
void Pellet::init_pmotions()
{
	int numPMotions = m_config->m_params.m_numPMotions.m_data;
	if (numPMotions > 0) {
		m_numPMotions  = numPMotions;
		_33C.m_animMgr = _41C.m_animMgr;
		_33C.startAnim(0, nullptr);
	} else {
		m_numPMotions = 0;
	}
}

/*
 * --INFO--
 * Address:	8016A208
 * Size:	0000B4
 */
void Pellet::update_pmotions()
{
	SysShape::Animator* animator = &_33C;
	animate_pmotions(animator);
}

/*
 * --INFO--
 * Address:	8016A2BC
 * Size:	000044
 */
void Pellet::start_pmotions()
{
	if (m_numPMotions > 0) {
		SysShape::Animator* animator = &_33C;
		animator->startAnim(1, this);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void Pellet::stop_pmotions(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
// void Pellet::start_carrymotion(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016A300
 * Size:	00000C
 */
void Pellet::stop_carrymotion() { _438 = 0.0f; }

/*
 * --INFO--
 * Address:	8016A30C
 * Size:	000054
 */
void Pellet::finish_carrymotion()
{
	if (_41C.m_animMgr) {
		_41C.m_flags |= 2;
		return;
	}

	if (m_pelletView) {
		m_pelletView->view_finish_carrymotion();
	}
}

/*
 * --INFO--
 * Address:	8016A360
 * Size:	000088
 */
// WEAK - in header
// void Pellet::onKeyEvent(SysShape::KeyEvent const&)
// {
//     if ((keyEvent.m_type == 1000U) && (_41C.m_flags & 2)) {
//         _41C.startAnim(0, this);
//         if (_3D0 & 1) {
//             _438 = 30.0f * sys->m_secondsPerFrame;
//             return;
//         }
//         _438 = 0.0f;
//     }
// }

/*
 * --INFO--
 * Address:	8016A3E8
 * Size:	0000C0
 */
bool Pellet::isSlotFree(short slot)
{
	if (slot == 9999) {
		return (_3F6 == 0);
	}

	bool validSlot = (slot >= 0 && slot < m_slotCount);
	P2ASSERTLINE(3686, validSlot);

	u32 index = slot >> 3;
	u32 flag  = 1 << slot - index * 8;
	return !(flag & m_slots[15 - index]);
}

/*
 * --INFO--
 * Address:	8016A4A8
 * Size:	00001C
 */
int Pellet::getSpeicalSlot()
{
	short slot = 9999;
	if (_3F6 > 0) {
		slot = -1;
	}
	return slot;
}

/*
 * --INFO--
 * Address:	8016A4C4
 * Size:	000054
 */
s16 Pellet::getFreeStickSlot(void)
{
	/*
	lha      r0, 0x3f4(r3)
	li       r7, 0
	li       r6, 1
	mtctr    r0
	cmpwi    r0, 0
	ble      lbl_8016A510

lbl_8016A4DC:
	srawi    r4, r7, 3
	subfic   r0, r4, 0xf
	slwi     r5, r4, 3
	add      r4, r3, r0
	subf     r5, r5, r7
	lbz      r0, 0x3e4(r4)
	slw      r4, r6, r5
	and.     r0, r4, r0
	bne      lbl_8016A508
	extsh    r3, r7
	blr

lbl_8016A508:
	addi     r7, r7, 1
	bdnz     lbl_8016A4DC

lbl_8016A510:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016A518
 * Size:	000128
 */
s16 Pellet::getNearFreeStickSlot(Vector3f&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	lfs      f31, lbl_805189C0@sda21(r2)
	mr       r28, r3
	mr       r29, r4
	li       r31, -1
	li       r30, 0
	b        lbl_8016A604

lbl_8016A554:
	extsh    r6, r30
	li       r5, 1
	srawi    r3, r6, 3
	subfic   r0, r3, 0xf
	slwi     r4, r3, 3
	add      r3, r28, r0
	subf     r4, r4, r6
	lbz      r0, 0x3e4(r3)
	slw      r3, r5, r4
	and.     r0, r3, r0
	bne      lbl_8016A600
	mr       r3, r28
	mr       r4, r30
	lwz      r12, 0(r28)
	addi     r5, r1, 8
	lwz      r12, 0x180(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0xc(r1)
	lfs      f0, 4(r29)
	lfs      f3, 8(r1)
	fsubs    f4, f1, f0
	lfs      f2, 0(r29)
	lfs      f1, 0x10(r1)
	lfs      f0, 8(r29)
	fsubs    f3, f3, f2
	fmuls    f4, f4, f4
	fsubs    f2, f1, f0
	lfs      f0, lbl_80518914@sda21(r2)
	fmadds   f1, f3, f3, f4
	fmuls    f2, f2, f2
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8016A5EC
	ble      lbl_8016A5F0
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_8016A5F0

lbl_8016A5EC:
	fmr      f1, f0

lbl_8016A5F0:
	fcmpo    cr0, f1, f31
	bge      lbl_8016A600
	fmr      f31, f1
	mr       r31, r30

lbl_8016A600:
	addi     r30, r30, 1

lbl_8016A604:
	lha      r0, 0x3f4(r28)
	extsh    r3, r30
	cmpw     r3, r0
	blt      lbl_8016A554
	mr       r3, r31
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016A640
 * Size:	0000E8
 */
s16 Pellet::getRandomFreeStickSlot()
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	mr       r30, r3
	lha      r31, 0x3f4(r3)
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0xc(r1)
	xoris    r0, r31, 0x8000
	lfd      f2, lbl_80518930@sda21(r2)
	li       r9, 0x80
	stw      r4, 8(r1)
	li       r3, -1
	lfs      f0, lbl_80518940@sda21(r2)
	li       r10, 0
	lfd      f1, 8(r1)
	li       r6, 1
	stw      r0, 0x14(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x10(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r8, 0x1c(r1)
	b        lbl_8016A704

lbl_8016A6BC:
	srawi    r4, r7, 3
	subfic   r0, r4, 0xf
	slwi     r5, r4, 3
	add      r4, r30, r0
	subf     r5, r5, r7
	lbz      r0, 0x3e4(r4)
	slw      r4, r6, r5
	and.     r0, r4, r0
	bne      lbl_8016A700
	subf     r0, r8, r7
	srawi    r4, r0, 0x1f
	xor      r0, r4, r0
	subf     r0, r4, r0
	cmpw     r0, r9
	bge      lbl_8016A700
	mr       r9, r0
	mr       r3, r10

lbl_8016A700:
	addi     r10, r10, 1

lbl_8016A704:
	extsh    r7, r10
	cmpw     r7, r31
	blt      lbl_8016A6BC
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
 * Address:	8016A728
 * Size:	00020C
 */
Onyon* Pellet::getPelletGoal()
{
	Onyon* goalOnyon;

	if ((gameSystem->m_mode == GSM_VERSUS_MODE)
	    || ((getKind() != PELTYPE_TREASURE) && (getKind() != PELTYPE_BERRY) && (getKind() != PELTYPE_UPGRADE))) {
		int maxCount = -1;
		int counter  = 0;
		int i        = 0;

		for (int j = 0; j < 3; j++) {
			if (maxCount < (int)m_pikminCount[j]) {
				maxCount = m_pikminCount[j];
			}
		}

		int onyonType[3];
		for (int j = 0; j < 3; j++) {
			if (maxCount == (int)m_pikminCount[j]) {
				onyonType[i++] = j;
				counter++;
			}
		}

		int idx = (int)((float)counter * randFloat());
		if (idx >= counter) {
			idx = ONYON_TYPE_BLUE;
		}

		int type  = onyonType[idx];
		goalOnyon = ItemOnyon::mgr->getOnyon(type);
		if ((gameSystem->m_mode == GSM_STORY_MODE) && (!playData->hasBootContainer(type))) {
			goalOnyon = nullptr;
		}

		if (goalOnyon == nullptr) {
			goalOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
			if (goalOnyon == nullptr) {
				goalOnyon = ItemOnyon::mgr->m_pod;
			}
		}
	} else {
		goalOnyon = ItemOnyon::mgr->m_ufo;
		if (ItemOnyon::mgr->m_ufo == nullptr) {
			goalOnyon = ItemOnyon::mgr->m_pod;
		}
	}

	return goalOnyon;
}

/*
 * --INFO--
 * Address:	8016A934
 * Size:	00003C
 */
int Pellet::getTotalPikmins()
{
	int count = m_pikminCount[0];
	for (int i = 1; i < PikiColorCount; i++) {
		count += m_pikminCount[i];
	}
	return count;
}

/*
 * --INFO--
 * Address:	8016A970
 * Size:	00006C
 */
int Pellet::getTotalCarryPikmins()
{
	int total = 0;
	for (int i = 0; i < PikiColorCount; i++) {
		total += m_pikminCount[i] * pikiMgr->getColorTransportScale(i);
	}
	return total;
}

/*
 * --INFO--
 * Address:	8016A9DC
 * Size:	000078
 */
int Pellet::getPikmins(int color)
{
	bool validColor = (color >= 0 && color < PikiColorCount);
	P2ASSERTLINE(3902, validColor);
	return m_pikminCount[color];
}

/*
 * --INFO--
 * Address:	8016AA54
 * Size:	0001D4
 */
void Pellet::onSlotStickStart(Creature* creature, short slot)
{
	if (slot != 9999) {
		bool validSlot = (slot >= 0 && slot < m_slotCount);
		P2ASSERTLINE(3917, validSlot);
		P2ASSERTLINE(3918, isSlotFree(slot));
		setSlotOccupied(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->m_pikiKind;
		bool validType = (pikminType >= 0 && pikminType < PikiColorCount);
		P2ASSERTLINE(3925, validType);

		m_pikminCount[pikminType]++;
		m_carryPower += static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		_414++;
	}

	int max = _3DC > 0 ? _3DC : m_config->m_params.m_max.m_data;
	if (max != 1) {
		m_carryColor   = 5;
		m_carryInfoMgr = carryInfoMgr->appear(this);
	}
}

/*
 * --INFO--
 * Address:	8016AC28
 * Size:	0001E8
 */
void Pellet::onSlotStickEnd(Creature* creature, short slot)
{
	if (slot != 9999) {
		bool validSlot = (slot >= 0 && slot < m_slotCount);
		P2ASSERTLINE(3952, validSlot);
		if (isSlotFree(slot)) {
			JUT_PANICLINE(3956, "onSlotStickEnd\n");
		}
		setSlotFree(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->m_pikiKind;
		bool validType = (pikminType >= 0 && pikminType < PikiColorCount);
		P2ASSERTLINE(3964, validType);

		m_pikminCount[pikminType]--;
		m_carryPower -= static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		_414--;
	}

	if (getTotalPikmins() == 0) {
		if (m_carryInfoMgr) {
			m_carryInfoMgr->m_activeList.m_param.m_carryInfo.disappear();
			m_carryInfoMgr = nullptr;
		}
		m_pelletCarry->giveup(0);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 * calcStickSlotLocal__Q24Game6PelletFsR10Vector3f
 */
// void calcStickSlotLocal__Q24Game6PelletFsR10Vector3f(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016AE10
 * Size:	00021C
 */
void Pellet::calcStickSlotGlobal(short, Vector3f&)
{
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r5
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	mr       r29, r4
	extsh    r4, r29
	cmpwi    r4, 0x270f
	bne      lbl_8016AE54
	lfs      f0, lbl_80518914@sda21(r2)
	stfs     f0, 0x14(r1)
	stfs     f0, 0x18(r1)
	stfs     f0, 0x1c(r1)
	b        lbl_8016AFE8

lbl_8016AE54:
	extsh.   r0, r29
	li       r3, 0
	blt      lbl_8016AE70
	lha      r0, 0x3f4(r30)
	cmpw     r4, r0
	bge      lbl_8016AE70
	li       r3, 1

lbl_8016AE70:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016AE94
	lis      r3, lbl_8047E344@ha
	lis      r5, lbl_8047E354@ha
	addi     r3, r3, lbl_8047E344@l
	li       r4, 0xfb0
	addi     r5, r5, lbl_8047E354@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8016AE94:
	lha      r5, 0x3f4(r30)
	lis      r4, 0x4330
	extsh    r0, r29
	lwz      r3, 0x35c(r30)
	xoris    r5, r5, 0x8000
	stw      r4, 0x20(r1)
	xoris    r0, r0, 0x8000
	lfd      f3, lbl_80518930@sda21(r2)
	stw      r5, 0x24(r1)
	lfs      f4, lbl_80518988@sda21(r2)
	lfd      f0, 0x20(r1)
	stw      r0, 0x2c(r1)
	fsubs    f2, f0, f3
	lfs      f1, 0x3e0(r30)
	stw      r4, 0x28(r1)
	lfs      f0, lbl_80518914@sda21(r2)
	fdivs    f4, f4, f2
	lfd      f2, 0x28(r1)
	lfs      f5, 0xb0(r3)
	fsubs    f2, f2, f3
	fmadds   f4, f4, f2, f1
	fmr      f1, f4
	fcmpo    cr0, f4, f0
	bge      lbl_8016AEF8
	fneg     f1, f4

lbl_8016AEF8:
	lfs      f2, lbl_8051898C@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518914@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f1, f1, f2
	fcmpo    cr0, f4, f0
	fctiwz   f0, f1
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fmuls    f3, f5, f0
	bge      lbl_8016AF54
	lfs      f0, lbl_80518990@sda21(r2)
	fmuls    f0, f4, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f0, f0
	b        lbl_8016AF6C

lbl_8016AF54:
	fmuls    f0, f4, f2
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0

lbl_8016AF6C:
	fmuls    f1, f5, f0
	lfs      f0, lbl_80518914@sda21(r2)
	stfs     f3, 0x1c(r1)
	mr       r3, r30
	stfs     f1, 0x14(r1)
	stfs     f0, 0x18(r1)
	bl       getFace__Q24Game6PelletFv
	lwz      r4, 0x35c(r30)
	cmpwi    r3, 0
	lfs      f2, lbl_80518918@sda21(r2)
	lfs      f1, 0xc0(r4)
	lfs      f0, lbl_80518910@sda21(r2)
	fmadds   f1, f2, f1, f0
	bne      lbl_8016AFCC
	fneg     f0, f1
	stfs     f0, 0x18(r1)
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8016AFE8
	frsp     f1, f0
	lfs      f0, lbl_80518938@sda21(r2)
	fsubs    f0, f1, f0
	stfs     f0, 0x18(r1)
	b        lbl_8016AFE8

lbl_8016AFCC:
	stfs     f1, 0x18(r1)
	lbz      r0, 0x3d0(r30)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8016AFE8
	lfs      f0, lbl_80518938@sda21(r2)
	fadds    f0, f1, f0
	stfs     f0, 0x18(r1)

lbl_8016AFE8:
	addi     r3, r30, 0x138
	addi     r4, r1, 0x14
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016B02C
 * Size:	000068
 */
inline int Pellet::getFace()
{
	if (_364 == 2) {
		return 0;
	}
	Vector3f yVec;
	getYVector(yVec);
	if (yVec.y > 0.0f) {
		return 0;
	} else if (yVec.y < -0.0f) {
		return 1;
	} else {
		return 2;
	}
}

/*
 * --INFO--
 * Address:	8016B094
 * Size:	0002AC
 */
void Pellet::startPick()
{
	if (!(_3D0 & 1)) {
		if (m_config->m_params.m_code.m_data & 1) {
			shadowOn();
		}

		if (_41C.m_animMgr) {
			if (!(_41C.m_flags & 2)) {
				_41C.startAnim(0, this);
				_438 = 30.0f * sys->m_deltaTime;
			}
		} else if (m_pelletView) {
			m_pelletView->view_start_carrymotion();
		}

		Vector3f vec2;
		Vector3f vec1;
		int ySign;

		if (_364 != 2) {
			getYVector(vec1);
		}

		getYVector(vec2);
		vec2 *= 4.0f;

		if (getFace() == 0) {
			m_rigid.m_configs[0]._00 += vec2;
		} else {
			m_rigid.m_configs[0]._00 -= vec2;
		}

		DynParticle* particle = m_dynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->_00.y -= 4.0f;
			} else {
				particle->_00.y += 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->m_next);
		}

		if (_3D0 & 2) {
			sound_otakaraEventRestart();
		} else {
			sound_otakaraEventStart();
			_3D0 |= 2;
		}
		_3D0 |= 1;
	}
}

/*
 * --INFO--
 * Address:	8016B340
 * Size:	000004
 */
// WEAK - in header
// void Pellet::sound_otakaraEventRestart() { }

/*
 * --INFO--
 * Address:	8016B344
 * Size:	00017C
 */
void Pellet::endPick(bool b)
{
	if (_3D0 & 1) {
		m_pelletCarry->reset();
		m_carryColor = 5;
		sound_otakaraEventStop();

		if (!b) {
			if (_41C.m_animMgr) {
				_41C.m_flags |= 2;
			} else if (m_pelletView) {
				m_pelletView->view_finish_carrymotion();
			}
			if (m_config->m_params.m_code.m_data & 1) {
				shadowOff();
			}
		}

		_3D0 &= ~0x1;

		Vector3f yVec;
		if (_364 != 2) {
			getYVector(yVec);
		}

		DynParticle* particle = m_dynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->_00.y += 4.0f;
			} else {
				particle->_00.y -= 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->m_next);
		}
	}
}

/*
 * --INFO--
 * Address:	8016B4C0
 * Size:	000004
 */
// WEAK - in header
// void Pellet::sound_otakaraEventStop() { }

/*
 * --INFO--
 * Address:	8016B4C4
 * Size:	00000C
 */
void Pellet::clearDiscoverDisable() { m_discoverDisable = 0; }

/*
 * --INFO--
 * Address:	8016B4D0
 * Size:	000008
 */
void Pellet::startDiscoverDisable(u8 start) { m_discoverDisable = start; }

/*
 * --INFO--
 * Address:	8016B4D8
 * Size:	000018
 */
void Pellet::updateDiscoverDisable()
{
	if (m_discoverDisable == 0) {
		return;
	}
	m_discoverDisable--;
}

/*
 * --INFO--
 * Address:	8016B4F0
 * Size:	00002C
 */
bool Pellet::discoverDisabled()
{
	if (gameSystem->m_mode == GSM_STORY_MODE) {
		return m_discoverDisable > 0;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8016B51C
 * Size:	00002C
 */
void Pellet::doSave(Stream& stream) { stream.writeByte((u8)_3C4); }

/*
 * --INFO--
 * Address:	8016B548
 * Size:	0001DC
 */
void Pellet::doLoad(Stream&)
{
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stfd     f30, 0x80(r1)
	psq_st   f30, 136(r1), 0, qr0
	stfd     f29, 0x70(r1)
	psq_st   f29, 120(r1), 0, qr0
	stw      r31, 0x6c(r1)
	stw      r30, 0x68(r1)
	stw      r29, 0x64(r1)
	stw      r28, 0x60(r1)
	mr       r31, r3
	mr       r3, r4
	bl       readByte__6StreamFv
	clrlwi   r5, r3, 0x18
	mr       r4, r31
	neg      r0, r5
	addi     r3, r1, 0xc
	or       r0, r0, r5
	srwi     r0, r0, 0x1f
	stb      r0, 0x3c4(r31)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f29, 0xc(r1)
	li       r0, 0
	lfs      f31, 0x10(r1)
	addi     r4, r1, 0x3c
	lfs      f30, 0x14(r1)
	lfs      f0, lbl_80518994@sda21(r2)
	stfs     f29, 0x3c(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f31, 0x40(r1)
	stfs     f30, 0x44(r1)
	stw      r0, 0x48(r1)
	stb      r0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	mr       r30, r3
	li       r29, 0
	li       r28, 0

lbl_8016B5FC:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	mr       r4, r28
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_8016B620
	lwz      r0, 0x23c(r3)
	cmplw    r30, r0
	bne      lbl_8016B620
	li       r29, 1

lbl_8016B620:
	addi     r28, r28, 1
	cmpwi    r28, 3
	blt      lbl_8016B5FC
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r3, 0xb0(r3)
	lwz      r0, 0x23c(r3)
	cmplw    r0, r30
	bne      lbl_8016B644
	li       r29, 1

lbl_8016B644:
	clrlwi.  r0, r29, 0x18
	beq      lbl_8016B6EC
	lis      r4, "__vt__27Condition<Q24Game8WayPoint>"@ha
	lis      r3, __vt__Q24Game11WPCondition@ha
	addi     r0, r4, "__vt__27Condition<Q24Game8WayPoint>"@l
	lfs      f0, lbl_80518994@sda21(r2)
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q24Game11WPCondition@l
	lis      r3, __vt__13WPExcludeSpot@ha
	addi     r5, r1, 8
	stw      r0, 8(r1)
	addi     r4, r3, __vt__13WPExcludeSpot@l
	li       r0, 0
	lwz      r3, mapMgr__4Game@sda21(r13)
	stw      r4, 8(r1)
	addi     r4, r1, 0x24
	stfs     f29, 0x24(r1)
	stfs     f31, 0x28(r1)
	stfs     f30, 0x2c(r1)
	stw      r5, 0x30(r1)
	stb      r0, 0x34(r1)
	stfs     f0, 0x38(r1)
	lwz      r3, 8(r3)
	bl       getNearestWayPoint__Q24Game8RouteMgrFRQ24Game11WPSearchArg
	cmplwi   r3, 0
	beq      lbl_8016B6EC
	lfs      f2, 0x50(r3)
	addi     r4, r1, 0x18
	lfs      f3, 0x54(r3)
	li       r5, 0
	lfs      f0, 0x4c(r3)
	mr       r3, r31
	lfs      f1, lbl_80518918@sda21(r2)
	stfs     f0, 0x18(r1)
	stfs     f2, 0x1c(r1)
	stfs     f3, 0x20(r1)
	lwz      r6, 0x35c(r31)
	lfs      f0, 0xc0(r6)
	fmuls    f0, f1, f0
	fadds    f0, f2, f0
	stfs     f0, 0x1c(r1)
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"

lbl_8016B6EC:
	psq_l    f31, 152(r1), 0, qr0
	lfd      f31, 0x90(r1)
	psq_l    f30, 136(r1), 0, qr0
	lfd      f30, 0x80(r1)
	psq_l    f29, 120(r1), 0, qr0
	lfd      f29, 0x70(r1)
	lwz      r31, 0x6c(r1)
	lwz      r30, 0x68(r1)
	lwz      r29, 0x64(r1)
	lwz      r0, 0xa4(r1)
	lwz      r28, 0x60(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016B724
 * Size:	0000F4
 */
void Pellet::onStartCapture()
{
	Vector3f captureVec;
	m_captureMatrix->getTranslation(captureVec);
	m_rigid.m_configs[0].m_velocity = Vector3f(0.0f);
	m_rigid.m_configs[0]._00        = captureVec;
	m_lodSphere.m_position          = captureVec;
	m_pelletPosition                = captureVec;

	if (m_model) {
		m_mainMatrix.makeT(m_pelletPosition);
		PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);

		m_scale.setTVec(m_model->m_j3dModel->m_modelScale);
		m_model->m_j3dModel->calc();

		if (m_collTree) {
			m_collTree->update();
		}
	}
	shadowOff();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
// void Pellet::getCurrentBuryDepth(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016B818
 * Size:	000110
 */
void Pellet::onUpdateCapture(Matrixf& matrix)
{
	if (_41C.m_animMgr) {
		_41C.animate(0.0f);
	}

	SysShape::Model* model = m_model;
	if (model) {
		J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(_41C.getCalc());
		J3DJoint* joint         = model->m_j3dModel->m_modelData->m_jointTree.m_joints[0];

		joint->m_mtxCalc = calc;
	}

	if (m_pelletView == nullptr) {
		if (m_model) {
			PSMTXCopy(m_mainMatrix.m_matrix.mtxView, m_model->m_j3dModel->_24);
			J3DModel* j3dModel = m_model->m_j3dModel;
			m_scale.setTVec(m_model->m_j3dModel->m_modelScale);
			m_model->m_j3dModel->calc();
			m_collTree->update();
		}
	} else {
		m_collTree->update();
	}

	if (!_32C) {
		m_discoverDisable = 90;
	}
}

/*
 * --INFO--
 * Address:	8016B928
 * Size:	000098
 */
void Pellet::onEndCapture()
{
	Matrixf mtx;
	PSMTXCopy(m_mainMatrix.m_matrix.mtxView, mtx.m_matrix.mtxView);
	_3C4 = 1;
	shadowOn();
	setPosition(m_rigid.m_configs[0]._00, false);
	createKiraEffect(m_pelletPosition);
	if (_364 == 2) {
		PSMTXIdentity(mtx.m_matrix.mtxView);
	}
	setOrientation(mtx);
}

/*
 * --INFO--
 * Address:	8016B9C0
 * Size:	000270
 */
BasePelletMgr::BasePelletMgr(PelletList::cKind kind)
{
	m_configList = PelletList::Mgr::getConfigList(kind);
	int count    = m_configList->m_configCnt;
	_50          = count;

	m_modelData = new J3DModelData*[count];
	m_animMgr   = new SysShape::AnimMgr*[count];
	m_collParts = new CollPart*[count];
	_4C         = new bool[count];

	for (int i = 0; i < count; i++) {
		if (PelletMgr::mDebug) {
			_4C[i] = true;
		} else {
			_4C[i] = false;
		}
	}

	for (int j = 0; j < count; j++) {
		m_modelData[j] = nullptr;
		m_animMgr[j]   = nullptr;
		m_collParts[j] = nullptr;
	}

	m_modelMgr = nullptr;
}

// } // namespace Game

/*
 * --INFO--
 * Address:	8016BC30
 * Size:	0000B8
 */
// WEAK - in header
// CollPartMgr::~CollPartMgr() {}

/*
 * --INFO--
 * Address:	8016BCE8
 * Size:	0000A0
 */
// WEAK - in header
// void MonoObjectMgr<CollPart>::~MonoObjectMgr() { }

// namespace Game {

/*
 * --INFO--
 * Address:	8016BD88
 * Size:	000030
 */
PelletConfig* BasePelletMgr::getPelletConfig(int i)
{
	if (i < 0 || i >= m_configList->m_configCnt) {
		return nullptr;
	}
	return &m_configList->m_configs[i];
}

/*
 * --INFO--
 * Address:	8016BDB8
 * Size:	00007C
 */
void BasePelletMgr::setUse(int i)
{
	bool validIndex = false;
	if (i >= 0 && i < _50) {
		validIndex = true;
	}
	P2ASSERTLINE(4419, validIndex);
	_4C[i] = true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
// void BasePelletMgr::used(int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
// void BasePelletMgr::setUseFlagAll(bool)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016BE34
 * Size:	000298
 */
void BasePelletMgr::load()
{
	char buffer[512];
	char* file = nullptr;

	if (gGameConfig.m_parms.m_pelletMultiLang.m_data != 0) {
		switch (sys->m_region) {
		case System::LANG_JAPANESE:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "jpn");
			file = buffer;
			break;
		case System::LANG_ENGLISH:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "us");
			file = buffer;
			break;
		case System::LANG_FRENCH:
		case System::LANG_GERMAN:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_ITALIAN:
		case System::LANG_SPANISH:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
			file = buffer;
			break;
		}
	} else {
		file = "user/Kando/pellet/";
	}

	char buffer2[512];

	for (int i = 0; i < m_configList->m_configCnt; i++) {

		PelletConfig* config     = &m_configList->m_configs[i];
		JKRArchive* archive      = nullptr;
		config->m_params.m_index = i;
		char* archiveName        = config->m_params.m_archive.m_data;
		if (strcmp("null", archiveName)) {
			sprintf(buffer2, "%s%s", file, config->m_params.m_archive.m_data);
			archive = JKRArchive::mount(buffer2, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
		}

		J3DModelData* data = nullptr;

		if (strcmp("null", config->m_params.m_bmd.m_data) == 0) {
			m_modelData[i] = nullptr;
		} else {
			sprintf(buffer2, "%s", config->m_params.m_bmd.m_data);

			void* resource = JKRFileLoader::getGlbResource(buffer2, nullptr);
			if (resource == nullptr) {
				JUT_PANICLINE(4560, "meck ** %s : is not foun !\n", buffer2);
			}

			u32 flags = 0x21020010;
			if (config->m_params.m_code.m_data & 2) {
				flags |= 0x20;
			}

			data = J3DModelLoaderDataBase::load(resource, flags);

			if (config->m_params.m_code.m_data & 2) {
				for (u16 i = 0; i < data->m_shapeCnt; i++) {
					data->m_shapes[i]->m_flags = data->m_shapes[i]->m_flags & 0xFFFF0FFF | 0x2000;
				}
			}

			m_modelData[i] = data;
		}

		if (config->m_params.m_animMgr.m_data) {
			sprintf(buffer2, "%s%s", file, config->m_params.m_animMgr.m_data);
			m_animMgr[i] = SysShape::AnimMgr::load(buffer2, data, archive);
		}

		if (config->m_params.m_colltree.m_data) {
			sprintf(buffer2, "%s%s", file, config->m_params.m_colltree.m_data);
			m_collParts[i] = CollPartFactory::load(buffer2);
		}
	}
}

/*
 * --INFO--
 * Address:	8016C0CC
 * Size:	0003E4
 */
// WIP: https://decomp.me/scratch/Ltrad
void BasePelletMgr::load_texArc(char*)
{
	/*
	stwu     r1, -0x430(r1)
	mflr     r0
	lis      r5, gGameConfig__4Game@ha
	lis      r6, lbl_8047E318@ha
	stw      r0, 0x434(r1)
	addi     r5, r5, gGameConfig__4Game@l
	stmw     r22, 0x408(r1)
	mr       r31, r3
	mr       r22, r4
	addi     r30, r6, lbl_8047E318@l
	li       r24, 0
	lwz      r0, 0x158(r5)
	cmpwi    r0, 0
	beq      lbl_8016C190
	lwz      r3, sys@sda21(r13)
	lwz      r0, 0xd4(r3)
	cmpwi    r0, 4
	beq      lbl_8016C174
	bge      lbl_8016C130
	cmpwi    r0, 0
	beq      lbl_8016C158
	blt      lbl_8016C194
	cmpwi    r0, 3
	bge      lbl_8016C194
	b        lbl_8016C174

lbl_8016C130:
	cmpwi    r0, 6
	beq      lbl_8016C174
	bge      lbl_8016C194
	addi     r3, r1, 0x208
	addi     r4, r30, 0xe0
	addi     r5, r2, lbl_805189C8@sda21
	crclr    6
	bl       sprintf
	addi     r24, r1, 0x208
	b        lbl_8016C194

lbl_8016C158:
	addi     r3, r1, 0x208
	addi     r4, r30, 0xe0
	addi     r5, r2, lbl_805189CC@sda21
	crclr    6
	bl       sprintf
	addi     r24, r1, 0x208
	b        lbl_8016C194

lbl_8016C174:
	addi     r3, r1, 0x208
	addi     r4, r30, 0xe0
	addi     r5, r2, lbl_805189D0@sda21
	crclr    6
	bl       sprintf
	addi     r24, r1, 0x208
	b        lbl_8016C194

lbl_8016C190:
	addi     r24, r30, 0xf8

lbl_8016C194:
	mr       r5, r24
	mr       r6, r22
	addi     r3, r1, 8
	addi     r4, r2, lbl_805189DC@sda21
	crclr    6
	bl       sprintf
	mr       r3, r31
	addi     r4, r1, 8
	bl       openTextArc__Q24Game13BasePelletMgrFPc
	or.      r27, r3, r3
	bne      lbl_8016C1D8
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x128
	addi     r6, r1, 8
	li       r4, 0x1278
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8016C1D8:
	li       r29, 0
	li       r26, 0
	mr       r28, r29
	b        lbl_8016C480

lbl_8016C1E8:
	lwz      r0, 0x1c(r3)
	cmpwi    r26, 0
	li       r3, 0
	add      r25, r0, r29
	blt      lbl_8016C20C
	lwz      r0, 0x50(r31)
	cmpw     r26, r0
	bge      lbl_8016C20C
	li       r3, 1

lbl_8016C20C:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016C228
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x3c
	li       r4, 0x1149
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8016C228:
	lwz      r3, 0x4c(r31)
	lbzx     r0, r3, r26
	cmplwi   r0, 0
	beq      lbl_8016C474
	sth      r26, 0x258(r25)
	li       r23, 0
	addi     r3, r2, lbl_805189D4@sda21
	lwz      r4, 0x50(r25)
	bl       strcmp
	cmpwi    r3, 0
	beq      lbl_8016C284
	lwz      r6, 0x50(r25)
	mr       r5, r24
	addi     r3, r1, 8
	addi     r4, r2, lbl_805189DC@sda21
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	li       r4, 1
	li       r5, 0
	li       r6, 1
	bl
mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
	mr       r23, r3

lbl_8016C284:
	lwz      r4, 0x70(r25)
	li       r22, 0
	addi     r3, r2, lbl_805189D4@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8016C2AC
	lwz      r3, 0xc(r31)
	li       r0, 0
	stwx     r0, r3, r28
	b        lbl_8016C3D0

lbl_8016C2AC:
	cmplwi   r23, 0
	bne      lbl_8016C2C8
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x13c
	li       r4, 0x12a8
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8016C2C8:
	lwz      r5, 0x70(r25)
	addi     r3, r1, 8
	addi     r4, r2, lbl_805189E4@sda21
	crclr    6
	bl       sprintf
	addi     r3, r1, 8
	li       r4, 0
	bl       getGlbResource__13JKRFileLoaderFPCcP13JKRFileLoader
	cmplwi   r3, 0
	mr       r22, r3
	bne      lbl_8016C32C
	mr       r3, r23
	addi     r4, r1, 8
	lwz      r12, 0(r23)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	addi     r3, r30, 0x2c
	mr       r22, r0
	addi     r5, r30, 0x150
	addi     r6, r1, 8
	li       r4, 0x12b2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8016C32C:
	lbz      r0, 0x25a(r25)
	cmplwi   r0, 0
	beq      lbl_8016C360
	lhz      r0, 0x244(r25)
	lis      r3, 0x21020010@ha
	addi     r4, r3, 0x21020010@l
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8016C350
	ori      r4, r4, 0x20

lbl_8016C350:
	mr       r3, r22
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	mr       r22, r3
	b        lbl_8016C384

lbl_8016C360:
	lhz      r0, 0x244(r25)
	lis      r3, 0x20020010@ha
	addi     r4, r3, 0x20020010@l
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8016C378
	ori      r4, r4, 0x20

lbl_8016C378:
	mr       r3, r22
	bl       load__22J3DModelLoaderDataBaseFPCvUl
	mr       r22, r3

lbl_8016C384:
	lwz      r3, 0xc(r31)
	stwx     r22, r3, r28
	lhz      r0, 0x244(r25)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8016C3D0
	li       r4, 0
	b        lbl_8016C3C0

lbl_8016C3A0:
	lwz      r3, 0x80(r22)
	rlwinm   r0, r4, 2, 0xe, 0x1d
	addi     r4, r4, 1
	lwzx     r3, r3, r0
	lwz      r0, 0xc(r3)
	rlwinm   r0, r0, 0, 0x14, 0xf
	ori      r0, r0, 0x2000
	stw      r0, 0xc(r3)

lbl_8016C3C0:
	lhz      r0, 0x7c(r22)
	clrlwi   r3, r4, 0x10
	cmplw    r3, r0
	blt      lbl_8016C3A0

lbl_8016C3D0:
	lwz      r6, 0x80(r25)
	cmplwi   r6, 0
	beq      lbl_8016C440
	lwz      r5, 0x40(r25)
	addi     r3, r1, 8
	addi     r4, r2, lbl_805189E8@sda21
	crclr    6
	bl       sprintf
	mr       r3, r27
	mr       r5, r22
	mr       r6, r23
	addi     r4, r1, 8
	li       r7, 0
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	lwz      r4, 0x10(r31)
	stwx     r3, r4, r28
	lwz      r3, 0x10(r31)
	lwzx     r0, r3, r28
	cmplwi   r0, 0
	bne      lbl_8016C440
	mr       r3, r27
	mr       r5, r22
	mr       r6, r23
	addi     r4, r1, 8
	li       r7, 0
	bl
load__Q28SysShape7AnimMgrFP13JKRFileLoaderPcP12J3DModelDataP13JKRFileLoaderPc
	lwz      r4, 0x10(r31)
	stwx     r3, r4, r28

lbl_8016C440:
	lwz      r6, 0x90(r25)
	cmplwi   r6, 0
	beq      lbl_8016C474
	lwz      r5, 0x40(r25)
	addi     r3, r1, 8
	addi     r4, r2, lbl_805189E8@sda21
	crclr    6
	bl       sprintf
	mr       r3, r27
	addi     r4, r1, 8
	bl       load__15CollPartFactoryFP13JKRFileLoaderPc
	lwz      r4, 0x14(r31)
	stwx     r3, r4, r28

lbl_8016C474:
	addi     r29, r29, 0x260
	addi     r28, r28, 4
	addi     r26, r26, 1

lbl_8016C480:
	lwz      r3, 8(r31)
	lwz      r0, 0x18(r3)
	cmpw     r26, r0
	blt      lbl_8016C1E8
	mr       r3, r31
	mr       r4, r27
	bl       closeTextArc__Q24Game13BasePelletMgrFP10JKRArchive
	lmw      r22, 0x408(r1)
	lwz      r0, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x430
	blr
	*/
}

/*
 * --INFO--
 * Address:	8016C4B0
 * Size:	00010C
 */
void BasePelletMgr::openTextArc(char* arc)
{
	char directory[512];
	char* file = nullptr;
	if (gGameConfig.m_parms.m_pelletMultiLang.m_data != 0) {
		switch (sys->m_region) {
		case System::LANG_JAPANESE:
			sprintf(directory, "/user/Abe/Pellet/%s/", "jpn");
			file = directory;
			break;
		case System::LANG_ENGLISH:
			sprintf(directory, "/user/Abe/Pellet/%s/", "us");
			file = directory;
			break;
		case System::LANG_FRENCH:
		case System::LANG_GERMAN:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_ITALIAN:
		case System::LANG_SPANISH:
			sprintf(directory, "/user/Abe/Pellet/%s/", "pal");
			file = directory;
			break;
		}
	} else {
		file = "user/Kando/pellet/";
	}

	char filePath[512];

	sprintf(filePath, "%s/%s", file, arc);
	JKRArchive::mount(filePath, JKRArchive::EMM_Unk1, JKRHeap::sCurrentHeap, JKRArchive::EMD_Unk2);
}

/*
 * --INFO--
 * Address:	8016C5BC
 * Size:	000030
 */
void BasePelletMgr::closeTextArc(JKRArchive* archive) { archive->unmount(); }

/*
 * --INFO--
 * Address:	8016C5EC
 * Size:	0000E4
 */
void BasePelletMgr::useModelMgr(int arg1, u32 arg2)
{
	int modelType = 2;
	if (gameSystem != nullptr && gameSystem->m_section->m_playerMode == 1) {
		modelType = 1;
	}

	m_modelMgr = new SysShape::ModelMgr(m_configList->m_configCnt, m_modelData, arg1, arg2, modelType,
	                                    new Delegate1<BasePelletMgr, SysShape::Model*>(this, &createModelCallback));
}

/*
 * --INFO--
 * Address:	8016C700
 * Size:	0000E4
 */
SysShape::Model* BasePelletMgr::createShape(int modelDataIndex, int arg2)
{
	int modelType = 2;
	if (gameSystem != nullptr && gameSystem->m_section->m_playerMode == 1) {
		modelType = 1;
	}

	SysShape::Model* model;
	if (m_modelMgr) {
		model = m_modelMgr->createModel(modelDataIndex, arg2);
	} else {
		if (m_modelData[modelDataIndex] == nullptr) {
			JUT_PANICLINE(5061, "bpmgr:no modelData!%d\n", modelDataIndex);
		}
		model = new SysShape::Model(m_modelData[modelDataIndex], 0, modelType);
		model->m_j3dModel->newDifferedTexMtx((J3DTexDiffFlag)0);
	}
	return model;
}

/*
 * --INFO--
 * Address:	8016C7E4
 * Size:	000158
 */
void BasePelletMgr::setCollTree(Game::Pellet* pellet, int partIndex)
{
	SysShape::Model* pelletModel = pellet->m_model;

	if (pelletModel == nullptr) {
		SysShape::Model* pelletViewModel = pellet->m_pelletView->viewGetShape();
		Sys::Sphere sphere(Vector3f::zero, pellet->m_config->m_params.m_pRadius.m_data);
		pellet->m_collTree->createSingleSphere(pelletViewModel, pellet->m_pelletView->viewGetCollTreeJointIndex(), sphere, &m_collPartMgr);

		CollPart* part = pellet->m_collTree->m_part;
		if (part) {
			part->m_offset = pellet->m_pelletView->viewGetCollTreeOffset();
		}
	} else {
		CollPart* part = m_collParts[partIndex];
		if (part) {
			pellet->m_collTree->createFromFactory(pelletModel, (CollPartFactory*)part, &m_collPartMgr);
			return;
		}

		Sys::Sphere sphere(Vector3f::zero, pellet->m_config->m_params.m_radius.m_data);
		pellet->m_collTree->createSingleSphere(pelletModel, 0, sphere, &m_collPartMgr);
	}
}

/*
 * --INFO--
 * Address:	8016C93C
 * Size:	000024
 */
void* BasePelletMgr::generatorNewPelletParm() { return ::operator new(4); }

/*
 * --INFO--
 * Address:	8016C960
 * Size:	000008
 */
J3DModelData* BasePelletMgr::generatorGetShape(Game::GenPelletParm*) { return nullptr; }

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void BasePelletMgr::setupSoundViewerAndBas(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016C968
 * Size:	000018
 */
PelletIterator::PelletIterator()
{
	_00     = 0;
	m_node  = nullptr;
	m_index = 0;
	m_mgr   = nullptr;
}

/*
 * --INFO--
 * Address:	8016C980
 * Size:	00004C
 */
void PelletIterator::first()
{
	m_node = static_cast<TObjectNode<GenericObjectMgr>*>(pelletMgr->m_node.m_child);
	if (m_node) {
		m_mgr = (FixedSizePelletMgr<Pellet>*)m_node->m_contents;
	} else {
		m_mgr = nullptr;
	}
	setFirst();
}

/*
 * --INFO--
 * Address:	8016C9CC
 * Size:	000068
 */
Pellet* PelletIterator::operator*()
{
	P2ASSERTLINE(5197, m_mgr != nullptr);
	return m_mgr->getObjectPtr((void*)m_index);
}

/*
 * --INFO--
 * Address:	8016CA34
 * Size:	0000C0
 */
void PelletIterator::next()
{
	if (_00 == 0) {
		m_index = (int)m_mgr->getNext((void*)m_index);
	} else {
		JUT_PANICLINE(5206, "manda!\n");
	}

	if (m_index == (u32)m_mgr->getEnd()) {
		m_node = m_node->getNext();
		if (m_node) {
			m_mgr = (FixedSizePelletMgr<Pellet>*)m_node->m_contents;
			setFirst();
			return;
		}
		m_mgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8016CAF4
 * Size:	000010
 */
bool PelletIterator::isDone() { return m_mgr == nullptr; }

/*
 * --INFO--
 * Address:	8016CB04
 * Size:	000350
 */
void PelletIterator::setFirst()
{
	if (m_mgr) {
		if (_00 == 0) {
			m_index = (int)m_mgr->getStart();
		} else {
			JUT_PANICLINE(5233, "manda!\n");
		}

		if (m_index == (u32)m_mgr->getEnd()) {
			m_node = m_node->getNext();
			if (m_node) {
				m_mgr = (FixedSizePelletMgr<Pellet>*)m_node->m_contents;
				setFirst();
				return;
			}
			m_mgr = nullptr;
		}

	} else {
		m_index = 0;
	}
}

// } // namespace Game

/*
 * --INFO--
 * Address:	8016CE54
 * Size:	000008
 */
// WEAK - in header
// TObjectNode<GenericObjectMgr>* TObjectNode<GenericObjectMgr>::getNext() { return static_cast<TObjectNode<GenericObjectMgr>*>(m_next); }

// namespace Game {

/*
 * --INFO--
 * Address:	8016CE5C
 * Size:	0000CC
 */
PelletMgr::PelletMgr()
{
	m_name              = "ペレットマネージャ"; // pellet manager
	m_movieDrawDisabled = false;
}

// } // namespace Game

/*
 * --INFO--
 * Address:	8016CF28
 * Size:	0000C8
 */
// WEAK - in header
// NodeObjectMgr<GenericObjectMgr>::~NodeObjectMgr() { }

/*
 * --INFO--
 * Address:	8016CFF0
 * Size:	000060
 */
// WEAK - in header
// TObjectNode<GenericObjectMgr>::~TObjectNode() { }

/*
 * --INFO--
 * Address:	8016D050
 * Size:	000088
 */
// WEAK - in header
// ObjectMgr<GenericObjectMgr>::~ObjectMgr() { }

/*
 * --INFO--
 * Address:	8016D0D8
 * Size:	000070
 */
// WEAK - in header
// Container<GenericObjectMgr>::~Container() { }

// namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
// void PelletMgr::setUseFlagAll(bool)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016D148
 * Size:	0000F0
 */
void PelletMgr::createManagers(u32)
{
	PelletNumber::Mgr* numberMgr = new PelletNumber::Mgr();
	PelletNumber::mgr            = numberMgr;
	addMgr(numberMgr);

	PelletCarcass::Mgr* carcassMgr = new PelletCarcass::Mgr();
	PelletCarcass::mgr             = carcassMgr;
	addMgr(carcassMgr);

	PelletFruit::Mgr* fruitMgr = new PelletFruit::Mgr();
	PelletFruit::mgr           = fruitMgr;
	addMgr(fruitMgr);

	PelletOtakara::Mgr* otakaraMgr = new PelletOtakara::Mgr();
	PelletOtakara::mgr             = otakaraMgr;
	addMgr(otakaraMgr);

	PelletItem::Mgr* itemMgr = new PelletItem::Mgr();
	PelletItem::mgr          = itemMgr;
	addMgr(itemMgr);
}

/*
 * --INFO--
 * Address:	8016D238
 * Size:	000080
 */
void PelletMgr::resetMgrs()
{
	PelletNumber::mgr->resetMgr();
	PelletCarcass::mgr->resetMgr();
	PelletFruit::mgr->resetMgr();
	PelletItem::mgr->resetMgrAndResources();
	PelletOtakara::mgr->resetMgrAndResources();
}

// } // namespace Game

/*
 * --INFO--
 * Address:	8016D2B8
 * Size:	000050
 */
// WEAK - in header
// void FixedSizePelletMgr<PelletFruit::Object>::resetMgr()
// {
// 	m_monoObjectMgr.resetMgr();
// 	m_collPartMgr.resetMgr();
// }

/*
 * --INFO--
 * Address:	8016D308
 * Size:	000050
 */
// WEAK - in header
// void FixedSizePelletMgr<PelletCarcass::Object>::resetMgr()
// {
// 	m_monoObjectMgr.resetMgr();
// 	m_collPartMgr.resetMgr();
// }

/*
 * --INFO--
 * Address:	8016D358
 * Size:	000050
 */
// WEAK - in header
// void FixedSizePelletMgr<PelletNumber::Object>::resetMgr()
// {
// 	m_monoObjectMgr.resetMgr();
// 	m_collPartMgr.resetMgr();
// }

// namespace Game {

/*
 * --INFO--
 * Address:	8016D3A8
 * Size:	000080
 */
void Game::PelletMgr::setupResources()
{
	PelletNumber::mgr->setupResources();
	PelletCarcass::mgr->setupResources();
	PelletFruit::mgr->setupResources();
	PelletOtakara::mgr->setupResources();
	PelletItem::mgr->setupResources();
}

// } // namespace Game

/*
 * --INFO--
 * Address:	........
 * Size:	00050C
 * calcNearestTreasure__Q24Game9PelletMgrFR10Vector3<f>f
 */
// void calcNearestTreasure__Q24Game9PelletMgrFR10Vector3f f(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016D428
 * Size:	00004C
 */
// WEAK - in header
// bool Iterator<Game::PelletItem::Object>::isDone() { return (m_index == m_container->getEnd()); }

/*
 * --INFO--
 * Address:	8016D474
 * Size:	00004C
 */
// WEAK - in header
// bool Iterator<Game::PelletOtakara::Object>::isDone() { return (m_index == m_container->getEnd()); }

// namespace Game {

/*
 * --INFO--
 * Address:	8016D4C0
 * Size:	00021C
 */
Pellet* PelletMgr::birth(PelletInitArg* arg)
{
	bool validType = false;
	if (arg != nullptr && arg->m_pelletType != 0xFF) {
		validType = true;
	}
	P2ASSERTLINE(5394, validType);

	BasePelletMgr* mgr = getMgrByID(arg->m_pelletType);
	P2ASSERTLINE(5396, mgr != nullptr);

	PelletConfig* config;
	if (gameSystem->m_mode != GSM_PIKLOPEDIA && gameSystem->m_mode != GSM_VERSUS_MODE && !PelletMgr::mDebug && !arg->_17) {
		config = mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
		if (strcmp("yes", config->m_params.m_unique.m_data) == 0) {
			int unk = arg->_10;
			if (arg->m_pelletType == PelletList::OTAKARA) {
				u8* result = playData->_B0->_04(unk);
				if (*result & 2) {
					mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
					return nullptr;
				}
			} else if (arg->m_pelletType == PelletList::ITEM) {
				u8* result = playData->_B0->_0C(unk);
				if (*result & 2) {
					mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
					return nullptr;
				}
			}
		}
	}

	Pellet* pellet;
	if (arg->_1F != 0) {
		config = mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
		pellet = mgr->birthFromTeki(config);
		if (pellet) {
			mgr->setComeAlive(pellet->m_slotIndex);
			arg->_1C = 1;
			pellet->init(arg);
			return pellet;
		}
		return nullptr;
	} else {
		pellet = mgr->birth();
		if (pellet) {
			pellet->m_pelletView = arg->_18;
			pellet->m_mgr        = mgr;
			pellet->init(arg);
		}
		return pellet;
	}
}

/*
 * --INFO--
 * Address:	8016D6DC
 * Size:	0001AC
 */
bool PelletMgr::setUse(PelletInitArg* arg)
{
	bool validType = false;
	if (arg != nullptr && arg->m_pelletType != 0xFF) {
		validType = true;
	}
	P2ASSERTLINE(5531, validType);

	BasePelletMgr* mgr = getMgrByID(arg->m_pelletType);
	P2ASSERTLINE(5533, mgr != nullptr);

	PelletConfig* config;
	if (gameSystem->m_mode != GSM_PIKLOPEDIA && !arg->_17) {
		config = mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
		if (strcmp("yes", config->m_params.m_unique.m_data) == 0) {
			int unk = arg->_10;
			if (arg->m_pelletType == PelletList::OTAKARA) {
				u8* result = playData->_B0->_04(unk);
				if (*result & 2) {
					mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
					return false;
				}
			} else if (arg->m_pelletType == PelletList::ITEM) {
				u8* result = playData->_B0->_0C(unk);
				if (*result & 2) {
					mgr->m_configList->getPelletConfig(arg->m_textIdentifier);
					return false;
				}
			}
		}
	}

	int index = arg->_10;

	bool validIndex = false;
	if (index >= 0 && index < mgr->_50) {
		validIndex = true;
	}
	P2ASSERTLINE(4419, validIndex);

	mgr->_4C[index] = true;
	return true;
}

/*
 * --INFO--
 * Address:	8016D888
 * Size:	00015C
 */
bool PelletMgr::OtakaraItemCode::isNull()
{
	BasePelletMgr* mgr;
	PelletConfig* config;
	if (m_value == 0) {
		return true;
	}

	u8 code = m_value >> 8;
	mgr     = nullptr;
	if (code == 3) {
		mgr = PelletOtakara::mgr;
	} else if (code == 4) {
		mgr = PelletItem::mgr;
	}
	if (mgr == nullptr) {
		JUT_PANICLINE(5574, "illegal code (%x)\n", m_value);
	}

	code = m_value;
	if ((m_value & 0xFF) < 0 || code >= mgr->m_configList->m_configCnt) {
		config = nullptr;
	} else {
		config = mgr->m_configList->m_configs + code;
	}

	if (config == nullptr) {
		JUT_PANICLINE(5578, "illegal code no config found (%x) index %d\n", m_value, code);
	}

	if (strcmp("yes", config->m_params.m_unique.m_data) == 0) {
		u8 code = m_value;
		if ((u8)(m_value >> 8) == 3) {
			u8* result = playData->_B0->_04(code);
			if (*result & 2) {
				return true;
			}
		} else {
			u8* result = playData->_B0->_0C(code);
			if (*result & 2) {
				return true;
			}
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	8016D9E4
 * Size:	0000C8
 */
bool PelletMgr::makePelletInitArg(PelletInitArg& arg, char* identifier)
{
	BasePelletMgr* mgr          = PelletOtakara::mgr;
	PelletConfig* otakaraConfig = mgr->m_configList->getPelletConfig(identifier);
	PelletConfig* config        = otakaraConfig;

	if (otakaraConfig == nullptr) {
		mgr    = PelletItem::mgr;
		config = mgr->m_configList->getPelletConfig(identifier);
	}

	if (config == nullptr) {
		JUT_PANICLINE(5614, "no config found(%s)\n", identifier);
	}

	arg.m_textIdentifier = identifier;
	arg.m_pelletType     = mgr->getMgrID();
	arg._10              = config->m_params.m_index;
	arg._18              = 0;

	makeVsCarryMinMax(arg, identifier);
	return true;
}

/*
 * --INFO--
 * Address:	8016DAAC
 * Size:	0000E4
 */
void PelletMgr::makeVsCarryMinMax(PelletInitArg& arg, char* name)
{
	if (gameSystem != nullptr && gameSystem->m_mode == GSM_VERSUS_MODE) {
		if (strcmp(VsOtakaraName::cBedamaYellow, name) == 0) {
			arg.m_minCarriers = 1;
			arg.m_maxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cBedamaRed, name) == 0) {
			arg.m_minCarriers = 1;
			arg.m_maxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cBedamaBlue, name) == 0) {
			arg.m_minCarriers = 1;
			arg.m_maxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cCoin, name) == 0) {
			arg.m_minCarriers = 1;
			arg.m_maxCarriers = 1;
		}
	}
}

/*
 * --INFO--
 * Address:	8016DB90
 * Size:	0002EC
 */
bool PelletMgr::makePelletInitArg(Game::PelletInitArg& arg, Game::PelletMgr::OtakaraItemCode& itemCode)
{
	if (itemCode.isNull()) {
		return false;
	}

	BasePelletMgr* mgr;
	PelletConfig* config;

	u8 code = itemCode.m_value >> 8;
	mgr     = nullptr;
	if (code == 3) {
		mgr = PelletOtakara::mgr;
	} else if (code == 4) {
		mgr = PelletItem::mgr;
	}
	if (mgr == nullptr) {
		JUT_PANICLINE(5672, "illegal code (%x)\n", itemCode.m_value);
	}

	code = itemCode.m_value;
	if ((itemCode.m_value & 0xFF) < 0 || code >= mgr->m_configList->m_configCnt) {
		config = nullptr;
	} else {
		config = mgr->m_configList->m_configs + code;
	}

	if (config == nullptr) {
		JUT_PANICLINE(5676, "illegal code no config found (%x) index %d\n", itemCode.m_value, code);
	}

	arg.m_textIdentifier = config->m_params.m_name.m_data;
	arg.m_pelletType     = itemCode.m_value >> 8;
	arg._10              = itemCode.m_value & 0xFF;
	arg._18              = 0;
	makeVsCarryMinMax(arg, arg.m_textIdentifier);
	return true;
}

/*
 * --INFO--
 * Address:	8016DE7C
 * Size:	000060
 */
void PelletMgr::makeOtakaraItemCode(char* configName, PelletMgr::OtakaraItemCode& code)
{
	PelletList::cKind kind;
	PelletConfig* config = PelletList::Mgr::getConfigAndKind(configName, kind);
	if (config) {
		code.m_value = (kind << 8 & 0xFF00) + (u8)config->m_params.m_index;
	} else {
		code.m_value = 0;
	}
}

/*
 * --INFO--
 * Address:	8016DEDC
 * Size:	000034
 */
void PelletMgr::OtakaraItemCode::read(Stream& stream) { m_value = stream.readShort(); }

/*
 * --INFO--
 * Address:	8016DF10
 * Size:	000060
 */
void PelletMgr::OtakaraItemCode::write(Stream& stream)
{
	stream.textWriteTab(stream.m_tabCount);
	stream.writeShort(m_value);
	stream.textWriteText("# ?ｿｽ?ｿｽ?ｿｽ?ｿｽA?ｿｽC?ｿｽe?ｿｽ?ｿｽ?ｿｽR?ｿｽ[?ｿｽh\r\n");
}

/*
 * --INFO--
 * Address:	8016DF70
 * Size:	00006C
 */
void PelletMgr::addMgr(BasePelletMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>();
	node->m_contents                    = mgr;
	m_node.add(node);
}

/*
 * --INFO--
 * Address:	8016DFDC
 * Size:	0001E4
 */
void PelletMgr::doAnimation()
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doAnimation();
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016E20C
 * Size:	0001E4
 */
void PelletMgr::doEntry()
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doEntry();
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016E3F0
 * Size:	0001F4
 */
void PelletMgr::doSetView(int p1)
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doSetView(p1);
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016E5E4
 * Size:	0001E4
 */
void PelletMgr::doViewCalc()
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doViewCalc();
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016E7C8
 * Size:	0001F4
 */
void PelletMgr::doSimulation(float constraint)
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doSimulation(constraint);
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016E9BC
 * Size:	000004
 */
void PelletMgr::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	8016E9C0
 * Size:	0001F4
 */
void PelletMgr::doSimpleDraw(Viewport* viewport)
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index)->doSimpleDraw(viewport);
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016EBB4
 * Size:	0001D4
 */
void PelletMgr::setupSoundViewerAndBas()
{
	Iterator<GenericObjectMgr> iter(this);
	iter.first();
	while (iter.m_index != iter.m_container->getEnd()) {
		iter.m_container->get(iter.m_index);
		iter.next();
	}
}

/*
 * --INFO--
 * Address:	8016ED88
 * Size:	000014
 */
void PelletMgr::decode(long index, u8& pelletType, int& code)
{
	pelletType = (index >> 24) & 0xFF;
	code       = index & 0xFFFFFF;
}

/*
 * --INFO--
 * Address:	8016ED9C
 * Size:	00000C
 */
int PelletMgr::encode(u8 pelletType, int code) { return (pelletType << 24) | code; }

/*
 * --INFO--
 * Address:	8016EDA8
 * Size:	0000B4
 */
char* PelletMgr::getCaveName(int caveID)
{
	int idx            = caveID & 0xFFFFFF;
	BasePelletMgr* mgr = getMgrByID((caveID >> 24) & 0xFF);
	P2ASSERTLINE(5881, mgr != nullptr);
	PelletConfig* config = mgr->getPelletConfig(idx);
	P2ASSERTLINE(5883, config != nullptr);
	return config->m_params.m_name.m_data;
}

/*
 * --INFO--
 * Address:	8016EE5C
 * Size:	000270
 */
u8 PelletMgr::getCaveID(char*)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stmw     r27, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8016EEAC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F094

lbl_8016EEAC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016EF18

lbl_8016EEC4:
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
	bne      lbl_8016F094
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8016EF18:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016EEC4
	b        lbl_8016F094

lbl_8016EF38:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	li       r27, 0
	li       r29, 0
	mr       r28, r3
	b        lbl_8016EFC8

lbl_8016EF5C:
	cmpwi    r27, 0
	blt      lbl_8016EF6C
	cmpw     r27, r0
	blt      lbl_8016EF74

lbl_8016EF6C:
	li       r3, 0
	b        lbl_8016EF7C

lbl_8016EF74:
	lwz      r0, 0x1c(r3)
	add      r3, r0, r29

lbl_8016EF7C:
	lwz      r30, 0x40(r3)
	mr       r3, r31
	bl       strlen
	mr       r5, r3
	mr       r3, r30
	mr       r4, r31
	bl       strncmp
	cmpwi    r3, 0
	bne      lbl_8016EFC0
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	slwi     r0, r3, 0x18
	or       r3, r0, r27
	b        lbl_8016F0B8

lbl_8016EFC0:
	addi     r29, r29, 0x260
	addi     r27, r27, 1

lbl_8016EFC8:
	lwz      r3, 8(r28)
	lwz      r0, 0x18(r3)
	cmpw     r27, r0
	blt      lbl_8016EF5C
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8016F004
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F094

lbl_8016F004:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F078

lbl_8016F024:
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
	bne      lbl_8016F094
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8016F078:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016F024

lbl_8016F094:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8016EF38
	li       r3, -1

lbl_8016F0B8:
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000200
 */
// void PelletMgr::getMgrByIndex(int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016F0CC
 * Size:	00021C
 */
Game::BasePelletMgr* PelletMgr::getMgrByID(unsigned char)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8016F120
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F1A8

lbl_8016F120:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F18C

lbl_8016F138:
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
	bne      lbl_8016F1A8
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8016F18C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016F138

lbl_8016F1A8:
	clrlwi   r31, r30, 0x18
	b        lbl_8016F2AC

lbl_8016F1B0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r0, r3
	mr       r30, r0
	lwz      r12, 0x5c(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplw    r31, r0
	bne      lbl_8016F1F0
	mr       r3, r30
	b        lbl_8016F2D0

lbl_8016F1F0:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8016F21C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F2AC

lbl_8016F21C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8016F290

lbl_8016F23C:
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
	bne      lbl_8016F2AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8016F290:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016F23C

lbl_8016F2AC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8016F1B0
	li       r3, 0

lbl_8016F2D0:
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
 * Address:	........
 * Size:	0000BC
 */
// void PelletMgr::dumpAllPellets(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016F2E8
 * Size:	0000E0
 */
// WEAK - in header
// PelletMgr::~PelletMgr() { }

/*
 * --INFO--
 * Address:	8016F3C8
 * Size:	00000C
 */
char* PelletMgr::getMgrName(void)
{
	/*
	lis      r3, lbl_8047E494@ha
	addi     r3, r3, lbl_8047E494@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	8016F3D4
 * Size:	000038
 */
// void Iterator<GenericObjectMgr>::operator*()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F40C
 * Size:	0000E4
 */
// void Iterator<GenericObjectMgr>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F44C
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F4DC

// lbl_8016F44C:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F4C0

// lbl_8016F46C:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F4DC
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F4C0:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F46C

// lbl_8016F4DC:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F4F0
 * Size:	0000DC
 */
// void Iterator<GenericObjectMgr>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F52C
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F5B8

// lbl_8016F52C:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F59C

// lbl_8016F548:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F5B8
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F59C:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F548

// lbl_8016F5B8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F5CC
 * Size:	000038
 */
// void Iterator<Game::PelletItem::Object>::operator*()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F604
 * Size:	0000E4
 */
// void Iterator<Game::PelletItem::Object>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F644
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F6D4

// lbl_8016F644:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F6B8

// lbl_8016F664:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F6D4
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F6B8:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F664

// lbl_8016F6D4:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F6E8
 * Size:	0000DC
 */
// void Iterator<Game::PelletItem::Object>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F724
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F7B0

// lbl_8016F724:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F794

// lbl_8016F740:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F7B0
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F794:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F740

// lbl_8016F7B0:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F7C4
 * Size:	000038
 */
// void Iterator<Game::PelletOtakara::Object>::operator*()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F7FC
 * Size:	0000E4
 */
// void Iterator<Game::PelletOtakara::Object>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F83C
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F8CC

// lbl_8016F83C:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F8B0

// lbl_8016F85C:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F8CC
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F8B0:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F85C

// lbl_8016F8CC:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8016F8E0
 * Size:	0000DC
 */
// void Iterator<Game::PelletOtakara::Object>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_8016F91C
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F9A8

// lbl_8016F91C:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_8016F98C

// lbl_8016F938:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_8016F9A8
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_8016F98C:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_8016F938

// lbl_8016F9A8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

namespace Game {

/*
 * --INFO--
 * Address:	8016F9BC
 * Size:	000008
 * generatorBirth__Q24Game13BasePelletMgrFR10Vector3<f>R10Vector3<f>PQ24Game13GenPelletParm
 */
// WEAK - in header
// Pellet* BasePelletMgr::generatorBirth(Vector3f&, Vector3f&, GenPelletParm*) { return nullptr; }

/*
 * --INFO--
 * Address:	8016F9C4
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::generatorWrite(Stream&, Game::GenPelletParm*) { }

/*
 * --INFO--
 * Address:	8016F9C8
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::generatorRead(Stream&, Game::GenPelletParm*, u32) { }

/*
 * --INFO--
 * Address:	8016F9CC
 * Size:	00000C
 */
// WEAK - in header
// u32 BasePelletMgr::generatorLocalVersion() { return '0000'; }

/*
 * --INFO--
 * Address:	8016F9D8
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doAnimation() { }

/*
 * --INFO--
 * Address:	8016F9DC
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doEntry() { }

/*
 * --INFO--
 * Address:	8016F9E0
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doSetView(int) { }

/*
 * --INFO--
 * Address:	8016F9E4
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doViewCalc() { }

/*
 * --INFO--
 * Address:	8016F9E8
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doSimulation(float) { }

/*
 * --INFO--
 * Address:	8016F9EC
 * Size:	000004
 */
// WEAK - in header
// void BasePelletMgr::doDirectDraw(Graphics&) { }

} // namespace Game

/*
 * --INFO--
 * Address:	8016F9F0
 * Size:	000070
 */
// void Container<CollPart>::~Container() {}

/*
 * --INFO--
 * Address:	8016FA60
 * Size:	000088
 */
// void ObjectMgr<CollPart>::~ObjectMgr() {}

/*
 * --INFO--
 * Address:	8016FAE8
 * Size:	000084
 */
bool WPExcludeSpot::satisfy(Game::WayPoint*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	li       r31, 0
	stw      r30, 8(r1)
	mr       r30, r4

lbl_8016FB04:
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	mr       r4, r31
	bl       getOnyon__Q34Game9ItemOnyon3MgrFi
	cmplwi   r3, 0
	beq      lbl_8016FB2C
	lwz      r0, 0x23c(r3)
	cmplw    r30, r0
	bne      lbl_8016FB2C
	li       r3, 0
	b        lbl_8016FB54

lbl_8016FB2C:
	addi     r31, r31, 1
	cmpwi    r31, 3
	blt      lbl_8016FB04
	lwz      r3, mgr__Q24Game9ItemOnyon@sda21(r13)
	lwz      r3, 0xb0(r3)
	lwz      r0, 0x23c(r3)
	subf     r3, r0, r30
	subf     r0, r30, r0
	or       r0, r3, r0
	srwi     r3, r0, 0x1f

lbl_8016FB54:
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
 * Address:	8016FB6C
 * Size:	0004DC
 */
void satisfy__Q223 @unnamed @pelletMgr_cpp @6NotOffFPQ24Game8WayPoint(void)
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stfd     f28, 0x40(r1)
	psq_st   f28, 72(r1), 0, qr0
	lbz      r0, 0x34(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_8016FBAC
	li       r3, 0
	b        lbl_80170018

lbl_8016FBAC:
	lwz      r3, mgr__Q24Game8ItemHole@sda21(r13)
	lfs      f29, 0x4c(r4)
	cmplwi   r3, 0
	lfs      f28, 0x54(r4)
	beq      lbl_8016FDE4
	beq      lbl_8016FBC8
	addi     r3, r3, 0x30

lbl_8016FBC8:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x3c(r1)
	cmplwi   r0, 0
	stw      r4, 0x30(r1)
	stw      r0, 0x34(r1)
	stw      r3, 0x38(r1)
	bne      lbl_8016FC04
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8016FC8C

lbl_8016FC04:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8016FC70

lbl_8016FC1C:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016FC8C
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_8016FC70:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016FC1C

lbl_8016FC8C:
	lfs      f31, lbl_80518914@sda21(r2)
	lfs      f30, lbl_805189FC@sda21(r2)
	b        lbl_8016FDC4

lbl_8016FC98:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x1c(r1)
	lfs      f1, 0x14(r1)
	fsubs    f0, f0, f28
	fsubs    f1, f1, f29
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_8016FCF4
	ble      lbl_8016FCF8
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8016FCF8

lbl_8016FCF4:
	fmr      f0, f31

lbl_8016FCF8:
	fcmpo    cr0, f0, f30
	bge      lbl_8016FD08
	li       r3, 0
	b        lbl_80170018

lbl_8016FD08:
	lwz      r0, 0x3c(r1)
	cmplwi   r0, 0
	bne      lbl_8016FD34
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8016FDC4

lbl_8016FD34:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)
	b        lbl_8016FDA8

lbl_8016FD54:
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x3c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016FDC4
	lwz      r3, 0x38(r1)
	lwz      r4, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x34(r1)

lbl_8016FDA8:
	lwz      r12, 0x30(r1)
	addi     r3, r1, 0x30
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016FD54

lbl_8016FDC4:
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x34(r1)
	cmplw    r4, r3
	bne      lbl_8016FC98

lbl_8016FDE4:
	lwz      r3, mgr__Q24Game15ItemBigFountain@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80170014
	beq      lbl_8016FDF8
	addi     r3, r3, 0x30

lbl_8016FDF8:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x2c(r1)
	cmplwi   r0, 0
	stw      r4, 0x20(r1)
	stw      r0, 0x24(r1)
	stw      r3, 0x28(r1)
	bne      lbl_8016FE34
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8016FEBC

lbl_8016FE34:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8016FEA0

lbl_8016FE4C:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016FEBC
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8016FEA0:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016FE4C

lbl_8016FEBC:
	lfs      f30, lbl_80518914@sda21(r2)
	lfs      f31, lbl_805189FC@sda21(r2)
	b        lbl_8016FFF4

lbl_8016FEC8:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f1, 8(r1)
	fsubs    f0, f0, f28
	fsubs    f1, f1, f29
	fmuls    f0, f0, f0
	fmadds   f0, f1, f1, f0
	fcmpo    cr0, f0, f30
	ble      lbl_8016FF24
	ble      lbl_8016FF28
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_8016FF28

lbl_8016FF24:
	fmr      f0, f30

lbl_8016FF28:
	fcmpo    cr0, f0, f31
	bge      lbl_8016FF38
	li       r3, 0
	b        lbl_80170018

lbl_8016FF38:
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	bne      lbl_8016FF64
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8016FFF4

lbl_8016FF64:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)
	b        lbl_8016FFD8

lbl_8016FF84:
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x2c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8016FFF4
	lwz      r3, 0x28(r1)
	lwz      r4, 0x24(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x24(r1)

lbl_8016FFD8:
	lwz      r12, 0x20(r1)
	addi     r3, r1, 0x20
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8016FF84

lbl_8016FFF4:
	lwz      r3, 0x28(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x24(r1)
	cmplw    r4, r3
	bne      lbl_8016FEC8

lbl_80170014:
	li       r3, 1

lbl_80170018:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	psq_l    f28, 72(r1), 0, qr0
	lwz      r0, 0x84(r1)
	lfd      f28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

namespace Game {

namespace Game {

/*
 * --INFO--
 * Address:	80170048
 * Size:	000044
 * onSetPosition__Q24Game6PelletFR10Vector3<f>
 */
void Pellet::onSetPosition(Vector3f&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lfs      f0, 0(r4)
	stfs     f0, 0x3ac(r3)
	lfs      f0, 4(r4)
	stfs     f0, 0x3b0(r3)
	lfs      f0, 8(r4)
	stfs     f0, 0x3b4(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x1b0(r12)
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
 * Address:	8017008C
 * Size:	000008
 */
// void Pellet::inWater(void)
// {
// 	/*
// 	lbz      r3, 0x325(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80170094
 * Size:	000008
 */
// s32 Pellet::getBedamaColor(void) { return -0x1; }

/*
 * --INFO--
 * Address:	8017009C
 * Size:	000008
 */
// void Pellet::getSound_PosPtr(void)
// {
// 	/*
// 	addi     r3, r3, 0x3ac
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801700A4
 * Size:	000008
 */
// void Pellet::getFaceDir(void)
// {
// 	/*
// 	lfs      f1, 0x3b8(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801700AC
 * Size:	000008
 */
// u32 Pellet::deferPikiCollision(void) { return 0x1; }

/*
 * --INFO--
 * Address:	801700B4
 * Size:	000004
 */
// void Pellet::sound_otakaraEventFinish(void) { }

// namespace PSM {

/*
 * --INFO--
 * Address:	801700B8
 * Size:	0000BC
 */
// WEAK - in header
// EventBase::~EventBase() {}

// } // namespace PSM

/*
 * --INFO--
 * Address:	80170174
 * Size:	000008
 */
// u32 CreatureObj::getCastType(void) { return 0x0; }

/*
 * --INFO--
 * Address:	8017017C
 * Size:	000010
 */
// void CreatureObj::getJAIObject()
// {
// 	/*
// 	cmplwi   r3, 0
// 	beqlr
// 	addi     r3, r3, 0x30
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8017018C
 * Size:	000010
 */
// void CreatureObj::getHandleArea(unsigned char)
// {
// 	/*
// 	lwz      r3, 0x4c(r3)
// 	rlwinm   r0, r4, 2, 0x16, 0x1d
// 	add      r3, r3, r0
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8017019C
 * Size:	000004
 */
// void CreatureObj::onCalcOn(void) { }

namespace Game {

/*
 * --INFO--
 * Address:	801701A0
 * Size:	00000C
 */
void PelletGoalStateArg::getName(void)
{
	/*
	lis      r3, lbl_8047E534@ha
	addi     r3, r3, lbl_8047E534@l
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	801701AC
 * Size:	000004
 */
void init__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	801701B0
 * Size:	000008
 */
// void NodeObjectMgr<GenericObjectMgr>::get(void*)
// {
// 	/*
// 	lwz      r3, 0x18(r4)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801701B8
 * Size:	000008
 */
// void NodeObjectMgr<GenericObjectMgr>::getNext(void*)
// {
// 	/*
// 	lwz      r3, 4(r4)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801701C0
 * Size:	000008
 */
// void NodeObjectMgr<GenericObjectMgr>::getStart()
// {
// 	/*
// 	lwz      r3, 0x30(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801701C8
 * Size:	000008
 */
// u32 NodeObjectMgr<GenericObjectMgr>::getEnd() { return 0x0; }

/*
 * --INFO--
 * Address:	801701D0
 * Size:	000018
 */
// void NodeObjectMgr<GenericObjectMgr>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x30(r3)
// 	stw      r0, 0x2c(r3)
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801701E8
 * Size:	000018
 */
// void MonoObjectMgr<Game::PelletFruit::Object>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r0, 0x2c(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80170200
 * Size:	000018
 */
// void MonoObjectMgr<Game::PelletCarcass::Object>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r0, 0x2c(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80170218
 * Size:	000018
 */
// void MonoObjectMgr<Game::PelletNumber::Object>::resetMgr()
// {
// 	/*
// 	li       r0, 0
// 	stw      r0, 0x28(r3)
// 	stw      r0, 0x24(r3)
// 	stw      r0, 0x20(r3)
// 	stw      r0, 0x2c(r3)
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80170230
 * Size:	000040
 */
void MonoObjectMgr<CollPart>::getNext(void*)
{
	/*
	lwz      r5, 0x24(r3)
	addi     r6, r4, 1
	subf     r0, r6, r5
	mtctr    r0
	cmpw     r6, r5
	bge      lbl_80170268

lbl_80170248:
	lwz      r4, 0x2c(r3)
	lbzx     r0, r4, r6
	cmplwi   r0, 0
	bne      lbl_80170260
	mr       r3, r6
	blr

lbl_80170260:
	addi     r6, r6, 1
	bdnz     lbl_80170248

lbl_80170268:
	mr       r3, r5
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170270
 * Size:	000030
 */
void MonoObjectMgr<CollPart>::getStart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r4, -1
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
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
 * Address:	801702A0
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::getEnd()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801702A8
 * Size:	000010
 */
void MonoObjectMgr<CollPart>::getAt(int)
{
	/*
	mulli    r0, r4, 0x64
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801702B8
 * Size:	000008
 */
void MonoObjectMgr<CollPart>::getTo()
{
	/*
	lwz      r3, 0x24(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801702C0
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80170318

lbl_801702E8:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80170310
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_80170310:
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_80170318:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_801702E8
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
 * Address:	80170340
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_80170398

lbl_80170368:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_80170390
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl

lbl_80170390:
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_80170398:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80170368
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
 * Address:	801703C0
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	li       r29, 0
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_80170424

lbl_801703F0:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r29
	cmplwi   r0, 0
	bne      lbl_8017041C
	lwz      r0, 0x28(r28)
	mr       r4, r30
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl

lbl_8017041C:
	addi     r31, r31, 0x64
	addi     r29, r29, 1

lbl_80170424:
	lwz      r0, 0x24(r28)
	cmpw     r29, r0
	blt      lbl_801703F0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170450
 * Size:	000080
 */
void MonoObjectMgr<CollPart>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r3
	b        lbl_801704A8

lbl_80170478:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801704A0
	lwz      r0, 0x28(r29)
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl

lbl_801704A0:
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_801704A8:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80170478
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
 * Address:	801704D0
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	stw      r31, 0x14(r1)
	li       r31, 0
	stw      r30, 0x10(r1)
	li       r30, 0
	stw      r29, 0xc(r1)
	mr       r29, r3
	b        lbl_80170534

lbl_80170500:
	lwz      r3, 0x2c(r29)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_8017052C
	lwz      r0, 0x28(r29)
	fmr      f1, f31
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8017052C:
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_80170534:
	lwz      r0, 0x24(r29)
	cmpw     r30, r0
	blt      lbl_80170500
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	lwz      r31, 0x14(r1)
	lwz      r30, 0x10(r1)
	lwz      r29, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170560
 * Size:	000090
 */
void MonoObjectMgr<CollPart>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	li       r30, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	b        lbl_801705C4

lbl_80170590:
	lwz      r3, 0x2c(r28)
	lbzx     r0, r3, r30
	cmplwi   r0, 0
	bne      lbl_801705BC
	lwz      r0, 0x28(r28)
	mr       r4, r29
	add      r3, r0, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl

lbl_801705BC:
	addi     r31, r31, 0x64
	addi     r30, r30, 1

lbl_801705C4:
	lwz      r0, 0x24(r28)
	cmpw     r30, r0
	blt      lbl_80170590
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801705F0
 * Size:	000018
 */
void MonoObjectMgr<CollPart>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170608
 * Size:	000030
 */
void MonoObjectMgr<CollPart>::clearMgr()
{
	/*
	li       r0, 0
	li       r6, 0
	stw      r0, 0x20(r3)
	li       r5, 1
	b        lbl_80170628

lbl_8017061C:
	lwz      r4, 0x2c(r3)
	stbx     r5, r4, r6
	addi     r6, r6, 1

lbl_80170628:
	lwz      r0, 0x24(r3)
	cmpw     r6, r0
	blt      lbl_8017061C
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170638
 * Size:	000004
 */
void MonoObjectMgr<CollPart>::onAlloc() { }

/*
 * --INFO--
 * Address:	8017063C
 * Size:	000010
 */
void MonoObjectMgr<CollPart>::get(void*)
{
	/*
	mulli    r0, r4, 0x64
	lwz      r3, 0x28(r3)
	add      r3, r3, r0
	blr
	*/
}

/*
 * --INFO--
 * Address:	8017064C
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80170694
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170800

lbl_80170694:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170700

lbl_801706AC:
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
	bne      lbl_80170800
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170700:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801706AC
	b        lbl_80170800

lbl_80170720:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80170770
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170800

lbl_80170770:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801707E4

lbl_80170790:
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
	bne      lbl_80170800
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801707E4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170790

lbl_80170800:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80170720
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170830
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80170878
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801709E4

lbl_80170878:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801708E4

lbl_80170890:
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
	bne      lbl_801709E4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801708E4:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170890
	b        lbl_801709E4

lbl_80170904:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80170954
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801709E4

lbl_80170954:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801709C8

lbl_80170974:
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
	bne      lbl_801709E4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801709C8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170974

lbl_801709E4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80170904
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170A14
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80170A64
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170BD4

lbl_80170A64:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170AD0

lbl_80170A7C:
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
	bne      lbl_80170BD4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170AD0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170A7C
	b        lbl_80170BD4

lbl_80170AF0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80170B44
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170BD4

lbl_80170B44:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170BB8

lbl_80170B64:
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
	bne      lbl_80170BD4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170BB8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170B64

lbl_80170BD4:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80170AF0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170C08
 * Size:	0001E4
 */
void ObjectMgr<GenericObjectMgr>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80170C50
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170DBC

lbl_80170C50:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170CBC

lbl_80170C68:
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
	bne      lbl_80170DBC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170CBC:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170C68
	b        lbl_80170DBC

lbl_80170CDC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80170D2C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170DBC

lbl_80170D2C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170DA0

lbl_80170D4C:
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
	bne      lbl_80170DBC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170DA0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170D4C

lbl_80170DBC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80170CDC
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170DEC
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__28Iterator<16GenericObjectMgr>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80170E3C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170FAC

lbl_80170E3C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170EA8

lbl_80170E54:
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
	bne      lbl_80170FAC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170EA8:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170E54
	b        lbl_80170FAC

lbl_80170EC8:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80170F1C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170FAC

lbl_80170F1C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80170F90

lbl_80170F3C:
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
	bne      lbl_80170FAC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80170F90:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80170F3C

lbl_80170FAC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80170EC8
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80170FE0
 * Size:	0001F4
 */
void ObjectMgr<GenericObjectMgr>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__28Iterator<16GenericObjectMgr>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__28Iterator<16GenericObjectMgr>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80171030
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801711A0

lbl_80171030:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017109C

lbl_80171048:
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
	bne      lbl_801711A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8017109C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171048
	b        lbl_801711A0

lbl_801710BC:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80171110
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801711A0

lbl_80171110:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171184

lbl_80171130:
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
	bne      lbl_801711A0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171184:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171130

lbl_801711A0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801710BC
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801711D4
 * Size:	00002C
 */
// void Container<GenericObjectMgr>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	80171200
 * Size:	000008
 */
// u32 Container<GenericObjectMgr>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80171208
 * Size:	000008
 */
// u32 Container<GenericObjectMgr>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	80171210
 * Size:	00002C
 */
// void Container<CollPart>::getObject(void*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8017123C
 * Size:	000008
 */
// u32 Container<CollPart>::getAt(int) { return 0x0; }

/*
 * --INFO--
 * Address:	80171244
 * Size:	000008
 */
// u32 Container<CollPart>::getTo() { return 0x0; }

/*
 * --INFO--
 * Address:	8017124C
 * Size:	000030
 */
// void Delegate1<Game::BasePelletMgr, SysShape::Model*>::invoke(SysShape::Model*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r5, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r5, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	8017127C
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doDirectDraw(Graphics&)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__19Iterator<8CollPart>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801712CC
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017143C

lbl_801712CC:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171338

lbl_801712E4:
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
	bne      lbl_8017143C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171338:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801712E4
	b        lbl_8017143C

lbl_80171358:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801713AC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017143C

lbl_801713AC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171420

lbl_801713CC:
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
	bne      lbl_8017143C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171420:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801713CC

lbl_8017143C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171358
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171470
 * Size:	00004C
 */
// void Iterator<CollPart>::isDone()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r3, 8(r3)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 4(r31)
// 	subf     r0, r0, r3
// 	cntlzw   r0, r0
// 	srwi     r3, r0, 5
// 	lwz      r31, 0xc(r1)
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801714BC
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doSimulation(float)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__19Iterator<8CollPart>"@l
	stfd     f31, 0x18(r1)
	fmr      f31, f1
	cmplwi   r0, 0
	stw      r4, 8(r1)
	stw      r0, 0x14(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_8017150C
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017167C

lbl_8017150C:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171578

lbl_80171524:
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
	bne      lbl_8017167C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171578:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171524
	b        lbl_8017167C

lbl_80171598:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	fmr      f1, f31
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801715EC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8017167C

lbl_801715EC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171660

lbl_8017160C:
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
	bne      lbl_8017167C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171660:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8017160C

lbl_8017167C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171598
	lwz      r0, 0x24(r1)
	lfd      f31, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	801716B0
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doViewCalc()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__19Iterator<8CollPart>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801716F8
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171864

lbl_801716F8:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171764

lbl_80171710:
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
	bne      lbl_80171864
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171764:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171710
	b        lbl_80171864

lbl_80171784:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801717D4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171864

lbl_801717D4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171848

lbl_801717F4:
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
	bne      lbl_80171864
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171848:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801717F4

lbl_80171864:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171784
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171894
 * Size:	0001F4
 */
void ObjectMgr<CollPart>::doSetView(int)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r5, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r5, r5, "__vt__19Iterator<8CollPart>"@l
	stw      r31, 0x1c(r1)
	cmplwi   r0, 0
	mr       r31, r4
	stw      r0, 0x14(r1)
	stw      r5, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_801718E4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171A54

lbl_801718E4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171950

lbl_801718FC:
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
	bne      lbl_80171A54
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171950:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801718FC
	b        lbl_80171A54

lbl_80171970:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801719C4
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171A54

lbl_801719C4:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171A38

lbl_801719E4:
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
	bne      lbl_80171A54
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171A38:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801719E4

lbl_80171A54:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171970
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171A88
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doEntry()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__19Iterator<8CollPart>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80171AD0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171C3C

lbl_80171AD0:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171B3C

lbl_80171AE8:
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
	bne      lbl_80171C3C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171B3C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171AE8
	b        lbl_80171C3C

lbl_80171B5C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80171BAC
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171C3C

lbl_80171BAC:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171C20

lbl_80171BCC:
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
	bne      lbl_80171C3C
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171C20:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171BCC

lbl_80171C3C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171B5C
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171C6C
 * Size:	0001E4
 */
void ObjectMgr<CollPart>::doAnimation()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r4, "__vt__19Iterator<8CollPart>"@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	addi     r4, r4, "__vt__19Iterator<8CollPart>"@l
	cmplwi   r0, 0
	stw      r0, 0x14(r1)
	stw      r4, 8(r1)
	stw      r0, 0xc(r1)
	stw      r3, 0x10(r1)
	bne      lbl_80171CB4
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171E20

lbl_80171CB4:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171D20

lbl_80171CCC:
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
	bne      lbl_80171E20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171D20:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171CCC
	b        lbl_80171E20

lbl_80171D40:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_80171D90
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171E20

lbl_80171D90:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_80171E04

lbl_80171DB0:
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
	bne      lbl_80171E20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_80171E04:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80171DB0

lbl_80171E20:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_80171D40
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171E50
 * Size:	00009C
 */
void MonoObjectMgr<CollPart>::MonoObjectMgr()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       __ct__5CNodeFv
	lis      r4, __vt__16GenericContainer@ha
	lis      r3, "__vt__20Container<8CollPart>"@ha
	addi     r0, r4, __vt__16GenericContainer@l
	lis      r6, __vt__16GenericObjectMgr@ha
	stw      r0, 0(r31)
	addi     r0, r3, "__vt__20Container<8CollPart>"@l
	lis      r4, "__vt__20ObjectMgr<8CollPart>"@ha
	lis      r3, "__vt__24MonoObjectMgr<8CollPart>"@ha
	stw      r0, 0(r31)
	li       r8, 0
	addi     r7, r4, "__vt__20ObjectMgr<8CollPart>"@l
	addi     r5, r3, "__vt__24MonoObjectMgr<8CollPart>"@l
	stb      r8, 0x18(r31)
	addi     r0, r6, __vt__16GenericObjectMgr@l
	addi     r6, r7, 0x2c
	addi     r4, r5, 0x2c
	stw      r0, 0x1c(r31)
	li       r0, 1
	mr       r3, r31
	stw      r7, 0(r31)
	stw      r6, 0x1c(r31)
	stw      r5, 0(r31)
	stw      r4, 0x1c(r31)
	stb      r0, 0x18(r31)
	stw      r8, 0x24(r31)
	stw      r8, 0x20(r31)
	stw      r8, 0x28(r31)
	stw      r8, 0x2c(r31)
	lwz      r31, 0xc(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171EEC
 * Size:	00009C
 */
void transit__Q24Game28StateMachine<Game::Pellet> FPQ24Game6PelletiPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,2,0,29
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r6
	  lwz       r30, 0x3CC(r4)
	  lwz       r3, 0x14(r3)
	  cmplwi    r30, 0
	  lwzx      r31, r3, r0
	  beq-      .loc_0x50
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x4(r30)
	  stw       r0, 0x18(r27)

	.loc_0x50:
	  lwz       r0, 0xC(r27)
	  cmpw      r31, r0
	  blt-      .loc_0x60

	.loc_0x5C:
	  b         .loc_0x5C

	.loc_0x60:
	  lwz       r3, 0x4(r27)
	  rlwinm    r0,r31,2,0,29
	  mr        r4, r28
	  mr        r5, r29
	  lwzx      r3, r3, r0
	  stw       r3, 0x3CC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80171F88
 * Size:	000004
 */
void init__Q24Game24FSMState<Game::Pellet> FPQ24Game6PelletPQ24Game8StateArg(void) { }

/*
 * --INFO--
 * Address:	80171F8C
 * Size:	000004
 */
void cleanup__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	80171F90
 * Size:	00001C
 */
void getCurrID__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void)
{
	/*
	lwz      r3, 0x3cc(r4)
	cmplwi   r3, 0
	beq      lbl_80171FA4
	lwz      r3, 4(r3)
	blr

lbl_80171FA4:
	li       r3, -1
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171FAC
 * Size:	000038
 */
void exec__Q24Game28StateMachine<Game::Pellet> FPQ24Game6Pellet(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x3cc(r4)
	cmplwi   r3, 0
	beq      lbl_80171FD4
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_80171FD4:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80171FE4
 * Size:	000004
 */
void exec__Q24Game24FSMState<Game::Pellet> FPQ24Game6Pellet(void) { }

/*
 * --INFO--
 * Address:	80171FE8
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r9, 0
	  mr        r7, r8
	  mr        r6, r8
	  mr        r5, r8
	  mr        r4, r8
	  b         .loc_0x68

	.loc_0x40:
	  lwz       r3, 0xC(r31)
	  stwx      r7, r3, r8
	  lwz       r3, 0x10(r31)
	  stwx      r6, r3, r8
	  lwz       r3, 0x14(r31)
	  stwx      r5, r3, r8
	  addi      r8, r8, 0x4
	  lwz       r3, 0x4C(r31)
	  stbx      r4, r3, r9
	  addi      r9, r9, 0x1

	.loc_0x68:
	  lwz       r0, 0x50(r31)
	  cmpw      r9, r0
	  blt+      .loc_0x40
	  lwz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172084
 * Size:	000050
 */
void resetMgr__Q24Game49FixedSizePelletMgr<Game::PelletOtakara::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x70
	lwz      r12, 0x70(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	lwz      r12, 0x18(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801720D4
 * Size:	00009C
 */
void resetMgrAndResources__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  li        r8, 0
	  li        r9, 0
	  mr        r7, r8
	  mr        r6, r8
	  mr        r5, r8
	  mr        r4, r8
	  b         .loc_0x68

	.loc_0x40:
	  lwz       r3, 0xC(r31)
	  stwx      r7, r3, r8
	  lwz       r3, 0x10(r31)
	  stwx      r6, r3, r8
	  lwz       r3, 0x14(r31)
	  stwx      r5, r3, r8
	  addi      r8, r8, 0x4
	  lwz       r3, 0x4C(r31)
	  stbx      r4, r3, r9
	  addi      r9, r9, 0x1

	.loc_0x68:
	  lwz       r0, 0x50(r31)
	  cmpw      r9, r0
	  blt+      .loc_0x40
	  lwz       r0, 0x48(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  li        r0, 0
	  stw       r0, 0x48(r31)

	.loc_0x88:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80172170
 * Size:	000050
 */
void resetMgr__Q24Game46FixedSizePelletMgr<Game::PelletItem::Object> Fv(void)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r3, r31, 0x70
	lwz      r12, 0x70(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	addi     r3, r31, 0x18
	lwz      r12, 0x18(r31)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801721C0
 * Size:	000038
 */
// void Iterator<CollPart>::operator*()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	lwz      r3, 8(r3)
// 	lwz      r4, 4(r4)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801721F8
 * Size:	0000E4
 */
// void Iterator<CollPart>::next()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_80172238
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801722C8

// lbl_80172238:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801722AC

// lbl_80172258:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801722C8
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_801722AC:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80172258

// lbl_801722C8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801722DC
 * Size:	0000DC
 */
// void Iterator<CollPart>::first()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	lwz      r0, 0xc(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_80172318
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_801723A4

// lbl_80172318:
// 	lwz      r3, 8(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)
// 	b        lbl_80172388

// lbl_80172334:
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0xc(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801723A4
// 	lwz      r3, 8(r31)
// 	lwz      r4, 4(r31)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 4(r31)

// lbl_80172388:
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_80172334

// lbl_801723A4:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	801723B8
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletItem::Object>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801723D0
 * Size:	000018
 */
void MonoObjectMgr<Game::PelletOtakara::Object>::resetMgr()
{
	/*
	li       r0, 0
	stw      r0, 0x28(r3)
	stw      r0, 0x24(r3)
	stw      r0, 0x20(r3)
	stw      r0, 0x2c(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801723E8
 * Size:	000028
 */
void __sinit_pelletMgr_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B1A60@ha
	stw      r0, lbl_80515998@sda21(r13)
	stfsu    f0, lbl_804B1A60@l(r3)
	stfs     f0, lbl_8051599C@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
