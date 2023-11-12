#include "Game/GameConfig.h"
#include "Game/gamePlayData.h"
#include "Game/GameSystem.h"
#include "Game/pelletMgr.h"
#include "Game/shadowMgr.h"
#include "Game/EnemyBase.h"
#include "Game/Stickers.h"
#include "Game/GameMessage.h"
#include "Game/gameStat.h"
#include "Game/DynParticle.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/Entities/ItemTreasure.h"
#include "Game/Entities/PelletCarcass.h"
#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletNumber.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Entities/ItemHole.h"
#include "Game/Entities/ItemBigFountain.h"
#include "Game/PikiMgr.h"
#include "Game/PlatInstance.h"
#include "Game/MoviePlayer.h"
#include "Game/AIConstants.h"
#include "Game/BaseHIO.h"
#include "Dolphin/rand.h"
#include "efx/TFruitsDown.h"
#include "efx/TOtakara.h"
#include "PSM/Otakara.h"
#include "PSSystem/PSMainSide_Scene.h"
#include "ObjectTypes.h"
#include "CollInfo.h"
#include "Radar.h"
#include "VsOtakaraName.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "nans.h"

namespace {
struct NotOff : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint* wp) // 08
	{
		if (wp->isFlag(Game::WPF_Closed)) {
			return false;
		}

		Vector3f wpPos = wp->mPosition;
		if (Game::ItemHole::mgr) {
			Iterator<Game::BaseItem> iterHole(Game::ItemHole::mgr);
			CI_LOOP(iterHole)
			{
				Game::BaseItem* item = *iterHole;
				Vector3f holePos     = item->getPosition();
				Vector2f sep         = Vector2f(holePos.x - wpPos.x, holePos.z - wpPos.z);
				if (sep.length() < 70.0f) {
					return false;
				}
			}
		}

		if (Game::ItemBigFountain::mgr) {
			Iterator<Game::BaseItem> iterGeyser(Game::ItemBigFountain::mgr);
			CI_LOOP(iterGeyser)
			{
				Game::BaseItem* item = *iterGeyser;
				Vector3f geyserPos   = item->getPosition();
				Vector2f sep         = Vector2f(geyserPos.x - wpPos.x, geyserPos.z - wpPos.z);
				if (sep.length() < 70.0f) {
					return false;
				}
			}
		}
		return true;
	}
};
} // namespace

namespace Game {

PelletMgr* pelletMgr;

bool PelletMgr::mDebug          = false;
bool PelletMgr::disableDynamics = false;
bool Pellet::sFromTekiEnable    = true;

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "pelletMgr";

/*
 * --INFO--
 * Address:	801658EC
 * Size:	000020
 */
char* Pellet::getCreatureName()
{
	if (mConfig) {
		return mConfig->mParams.mName.mData;
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
	if (mConfig) {
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
	mBaseTrMatrix.getBasis(1, col);

	if (-(SQUARE(FABS(col.y)) - 1.0f) > 0.0f) {
		col.y = col.y;
	}

	f32 pickRadius    = getPickRadius();
	Vector3f position = getPosition();
	Vector3f shadowPos;
	if (col.y > 0.0f) {
		f32 midHeight      = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position - scaledCol;
	} else {
		f32 midHeight      = 0.5f * getCylinderHeight();
		Vector3f scaledCol = col * midHeight;
		shadowPos          = position + scaledCol;
	}

	f32 absY = FABS(col.y);
	shadowPos.y += 0.2f;
	shadow.mPosition                 = shadowPos;
	shadow.mBoundingSphere.mPosition = col;
	shadow.mBoundingSphere.mRadius   = 90.0f;
	shadow.mSize                     = pickRadius * FABS(col.y);
}

/*
 * --INFO--
 * Address:	80165AD0
 * Size:	000074
 */
bool Pellet::needShadow()
{
	return (!pelletMgr->mMovieDrawDisabled || (pelletMgr->mMovieDrawDisabled && isMovieActor() && mLod.isFlag(AILOD_IsVisible)));
}

/*
 * --INFO--
 * Address:	80165B44
 * Size:	000008
 */
u8 Pellet::getWallTimer() { return mWallTimer; }

/*
 * --INFO--
 * Address:	80165B4C
 * Size:	000034
 */
PelletViewArg::PelletViewArg()
{
	_18        = Vector3f(1.0f);
	mEnemy     = nullptr;
	mMatrix    = nullptr;
	mPosition  = Vector3f(0.0f);
	mEnemyName = 0;
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
	initArg.mTextIdentifier = viewArg->mEnemyName;
	initArg.mPelletColor    = 0;
	initArg.mPelletIndex    = -1;
	initArg.mPelletType     = PELTYPE_CARCASS;
	initArg.mPelView        = this;

	Pellet* newPellet = pelletMgr->birth(&initArg);
	if (newPellet) {
		Vector3f position = viewArg->mPosition;
		position.y += 0.5f * newPellet->getCylinderHeight();

		Vector3f offset = newPellet->mConfig->mParams.mOffset.mData;

		Vector3f resultVec;
		Vector3f* vecPtr = &resultVec;
		*vecPtr          = offset;

		Vector3f row1;
		viewArg->mMatrix->getRow(0, row1);
		vecPtr->x = dot(offset, row1);
		Vector3f row2;
		viewArg->mMatrix->getRow(1, row2);
		vecPtr->y = dot(offset, row2);
		Vector3f row3;
		viewArg->mMatrix->getRow(2, row3);
		vecPtr->z = dot(offset, row3);
		position  = position + resultVec;

		newPellet->setPosition(position, false);
		mPellet = newPellet;

		newPellet->mIsBounced = true;
		newPellet->setOrientation(*viewArg->mMatrix);
		newPellet->mScale = viewArg->_18;
		newPellet->mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);

		viewStartPreCarryMotion();

		mCreature = static_cast<Creature*>(viewArg->mEnemy);
		P2ASSERTLINE(895, mCreature);
	} else {
		mPellet   = nullptr;
		mCreature = nullptr;
	}

	return mPellet;
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
	Vector3f translation(0.0f, -0.5f * mPellet->getCylinderHeight(), 0.0f);
	Matrixf srtMatrix;
	srtMatrix.makeSRT(mPellet->mScale, Vector3f::zero, translation);
	PSMTXConcat(mPellet->mBaseTrMatrix.mMatrix.mtxView, srtMatrix.mMatrix.mtxView, outMat.mMatrix.mtxView);
}

/*
 * --INFO--
 * Address:	80165E24
 * Size:	00000C
 */
void Pellet::clearClaim() { mClaim = 0; }

/*
 * --INFO--
 * Address:	80165E30
 * Size:	000018
 */
void Pellet::sendClaim()
{
	if (mClaim < 10) {
		mClaim++;
	}
}

/*
 * --INFO--
 * Address:	80165E48
 * Size:	0003F4
 */
void Pellet::updateClaim()
{
	if (mClaim >= 10) {
		int count = 0;
		Vector3f meanPosition(0.0f);
		Stickers sticker(this);
		Iterator<Creature> iterator(&sticker);

		CI_LOOP(iterator)
		{
			meanPosition += iterator.mContainer->get(iterator.mIndex)->getPosition();
			count++;
		}

		if (count > 0) {
			f32 norm = 1.0f / count;
			meanPosition *= norm;
			Vector3f diff;
			Vector3f* diffPtr = &diff;
			*diffPtr          = meanPosition - mPelletPosition;
			diff.normalise();

			diff *= 30.0f;

			Vector3f velocity    = getVelocity();
			Vector3f newVelocity = velocity;
			newVelocity += diff;
			setVelocity(newVelocity);
			mClaim = 0;
		}
	}
}

/*
 * --INFO--
 * Address:	8016623C
 * Size:	00000C
 */
f32 Pellet::getBuryDepthMax() { return mConfig->mParams.mDepthMax.mData; }

/*
 * --INFO--
 * Address:	80166248
 * Size:	00000C
 */
f32 Pellet::getBuryDepth() { return mConfig->mParams.mDepth.mData; }

/*
 * --INFO--
 * Address:	80166254
 * Size:	000124
 */
// WIP: https://decomp.me/scratch/HVCzF
f32 Pellet::getBuryRadius(f32 p1)
{
	bool check             = false;
	int index              = (int)(4.0f * p1);
	f32 buryRadiusArray[5] = { 0.0f, 0.0f, 0.0f, 0.0f, 0.0f };

	buryRadiusArray[0] = mConfig->mParams.mDepthA.mData;
	buryRadiusArray[1] = mConfig->mParams.mDepthB.mData;
	buryRadiusArray[2] = mConfig->mParams.mDepthC.mData;
	buryRadiusArray[3] = mConfig->mParams.mDepthD.mData;
	buryRadiusArray[4] = mConfig->mParams.mDepthD.mData;

	f32 factor1 = 0.25f * (f32)index;
	f32 factor  = 4.0f * (p1 - factor1);
	check       = (index >= 0) && (index <= 4);
	P2ASSERTLINE(1006, check);
	return ((1.0f - factor) * buryRadiusArray[index]) + (factor * buryRadiusArray[index + 1]);
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
bool Pellet::stimulate(Interaction& interaction)
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
		pellet->startDiscoverDisable(mWaitTimer / sys->mDeltaTime);
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

		if (pellet->mPelletColor == 0) {
			efx::TFruitsDownR spicy;
			spicy.create(&arg);
		} else {
			efx::TFruitsDownP bitter;
			bitter.create(&arg);
		}

		pellet->mSoundMgr->startSound(PSSE_EV_FRUIT_POP, 0);
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
bool InteractSuck::actPellet(Pellet* pellet)
{
	PelletGoalStateArg pelletGoalArg(mCreature);
	if (mCreature) {
		mCreature->getTypeName();
	}
	pellet->mPelletSM->transit(pellet, PELSTATE_GoalWait, &pelletGoalArg);
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
    : mPickFlags(0)
    , mSlots()
{
	mCaster       = nullptr;
	mModel        = nullptr;
	mObjectTypeID = OBJTYPE_Pellet;
	mCollTree     = new CollTree;
	mPelletSM     = new PelletFSM;
	mPelletSM->init(this);
	mCollisionBuffer.alloc(this, 8);
	mPelletColor = 4;
	mPelletView  = nullptr;
	clearCarryColor();
	mPelletCarry = new PelletCarry;
}

/*
 * --INFO--
 * Address:	80166830
 * Size:	00006C
 */
void Pellet::constructor() { mSoundMgr = new PSM::EventBase(this, 2); }

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
JAInter::Object* Pellet::getJAIObject() { return mSoundMgr; }

/*
 * --INFO--
 * Address:	801669B4
 * Size:	000008
 */
PSM::Creature* Pellet::getPSCreature() { return mSoundMgr; }

/*
 * --INFO--
 * Address:	801669BC
 * Size:	00000C
 */
f32 Pellet::getBottomRadius() { return mConfig->mParams.mRadius.mData; }

/*
 * --INFO--
 * Address:	801669C8
 * Size:	00000C
 */
f32 Pellet::getPickRadius() { return mConfig->mParams.mPRadius.mData; }

/*
 * --INFO--
 * Address:	801669D4
 * Size:	00000C
 */
f32 Pellet::getCylinderHeight() { return mConfig->mParams.mHeight.mData; }

/*
 * --INFO--
 * Address:	801669E0
 * Size:	000058
 */
int Pellet::getConfigIndex()
{
	P2ASSERTLINE(1433, mConfig);
	return mConfig->mParams.mIndex;
}

/*
 * --INFO--
 * Address:	80166A38
 * Size:	00000C
 */
char* Pellet::getConfigName() { return mConfig->mParams.mName.mData; }

/*
 * --INFO--
 * Address:	80166A44
 * Size:	000130
 */
PelletIndexInitArg::PelletIndexInitArg(int idx)
{
	int code;
	pelletMgr->decode(idx, mPelletType, code);

	BasePelletMgr* newPelletMgr = pelletMgr->getMgrByID(mPelletType);
	P2ASSERTLINE(1465, newPelletMgr);
	PelletConfig* config = newPelletMgr->getPelletConfig(code);

	mTextIdentifier = config->mParams.mName.mData;
	mPelletIndex    = code;
	mPelletColor    = (int)(3.0f * randFloat());
}

/*
 * --INFO--
 * Address:	80166B74
 * Size:	0000F0
 */
PelletNumberInitArg::PelletNumberInitArg(int pelNumber, int pelColor)
{
	switch (pelNumber) {
	case PELLET_NUMBER_ONE:
		mTextIdentifier = "number1";
		mPelletIndex    = 0;
		break;
	case PELLET_NUMBER_FIVE:
		mTextIdentifier = "number5";
		mPelletIndex    = 1;
		break;
	case PELLET_NUMBER_TEN:
		mTextIdentifier = "number10";
		mPelletIndex    = 2;
		break;
	case PELLET_NUMBER_TWENTY:
		mTextIdentifier = "number20";
		mPelletIndex    = 3;
		break;
	default:
		mTextIdentifier = "number1";
		mPelletIndex    = 0;
		break;
	}

	mPelletColor = pelColor;
	mPelletType  = PELTYPE_NUMBER;
}

/*
 * --INFO--
 * Address:	80166C64
 * Size:	000040
 */
bool Pellet::isPickable()
{
	if (mCurrentState) {
		return mCurrentState->isPickable();
	}
	return false;
}

/*
 * --INFO--
 * Address:	80166CAC
 * Size:	000288
 */
void Pellet::onKill(CreatureKillArg* killArg)
{
	if (gameSystem->isVersusMode()) {
		mPelletSM->start(this, 0, nullptr);
	}

	setAlive(false);

	if (shadowMgr) {
		shadowMgr->delShadow(this);
	}

	if (gameSystem->isVersusMode()) {
		GameMessagePelletDead msg(this);
		gameSystem->mSection->sendMessage(msg);
	}

	Vector3f scale(1.0f);
	Vector3f rotation(0.0f);
	Vector3f translation(0.0f);
	mBaseTrMatrix.makeSRT(scale, rotation, translation);

	if (mModel) {
		mLodSphere.mPosition = Vector3f(0.0f);
		mLodSphere.mRadius   = 128000.0f;
		mScale               = Vector3f(1.0f);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mScale.setVec(mModel->mJ3dModel->mModelScale);
		mModel->clearAnimatorAll();
		mModel->mJ3dModel->calc();
	}

	releaseParticles();
	mCollTree->release();
	mMgr->kill(this);

	if (((killArg != nullptr) && (static_cast<PelletKillArg*>(killArg)->_08 != 0))
	    || ((gameSystem->isVersusMode()) && (mPelletFlag == FLAG_VS_CHERRY))) {
		mMgr->setRevival(this);
	}

	finishDisplayCarryInfo();

	if (mPelletView) {
		mPelletView->viewOnPelletKilled();
		mPelletView->mPellet = nullptr;
		mPelletView          = nullptr;
	}

	if (getKind() == PELTYPE_TREASURE || getKind() == PELTYPE_UPGRADE) {
		Radar::Mgr::exit(this);
	}
}

/*
 * --INFO--
 * Address:	80166F68
 * Size:	000620
 */
void Pellet::onInit(CreatureInitArg* initArg)
{
	mMaxCarriers = -1;
	mMinCarriers = -1;
	mWallTimer   = 0;
	mIsBounced   = false;
	mIsInWater   = false;

	clearDiscoverDisable();

	mClaim          = 0;
	mAngleOffset    = 0.0f;
	mBounceTriangle = nullptr;
	_311            = 0;
	mFaceDir        = 0.0f;
	mAnimSpeed      = 0.0f;
	mIsCaptured     = 0;
	mPickFlags      = 0;
	mCarryInfoList  = nullptr;

	clearCapture();

	mCarryPower = 0.0f;

	P2ASSERTLINE(1632, initArg);

	u16 stateType = static_cast<PelletInitArg*>(initArg)->mState;
	if (stateType == 0) {
		mPelletSM->start(this, PELSTATE_Normal, nullptr);
		mScale = Vector3f(1.0f);
	} else if (stateType == 3) {
		mPelletSM->start(this, PELSTATE_Zukan, nullptr);
	} else if (stateType == 1) {
		mPelletSM->start(this, PELSTATE_Appear, nullptr);
		mScale = Vector3f(0.01f);
	} else {
		mPelletSM->start(this, PELSTATE_ScaleAppear, nullptr);
		mScale = Vector3f(0.01f);
	}

	mPikminCount[Blue]    = 0;
	mPikminCount[Red]     = 0;
	mPikminCount[Yellow]  = 0;
	mPikminCount[Purple]  = 0;
	mPikminCount[White]   = 0;
	mPikminCount[Bulbmin] = 0;
	mPikminCount[Carrot]  = 0;
	mTotalCarriers        = 0;
	mPelletSizeType       = (u16) static_cast<PelletInitArg*>(initArg)->mPelletIndex;

	mConfig = mMgr->mConfigList->getPelletConfig(static_cast<PelletInitArg*>(initArg)->mTextIdentifier);

	if (!(mConfig->mParams.mCode.mData & 1)) {
		shadowOn();
	}

	if (static_cast<PelletInitArg*>(initArg)->mAdjustWeightForSquad) {
		mMinCarriers = GameStat::getMapPikmins(-1);
		int minPikis = mConfig->mParams.mMin.mData;
		if (mMinCarriers > minPikis) {
			mMinCarriers = minPikis;
		}
	} else {
		mMinCarriers = -1;
	}

	if ((static_cast<PelletInitArg*>(initArg)->mMinCarriers != -1) && (static_cast<PelletInitArg*>(initArg)->mMaxCarriers != -1)) {
		mMinCarriers = static_cast<PelletInitArg*>(initArg)->mMinCarriers;
		mMaxCarriers = static_cast<PelletInitArg*>(initArg)->mMaxCarriers;
	}

	mRigid.mFlags.unset(0x01);
	mRigid.mFlags.unset(0x80);
	mPelletColor = static_cast<PelletInitArg*>(initArg)->mPelletColor;

	if (!strcmp(mConfig->mParams.mName.mData, "loozy")) {
		mPelletFlag = FLAG_LOOZY;
	} else if (!strcmp(mConfig->mParams.mName.mData, "orima")) {
		mPelletFlag = FLAG_NAVI_NAPSACK;
	} else {
		mPelletFlag = FLAG_NONE;
	}

	if (!strcmp(mConfig->mParams.mName.mData, VsOtakaraName::cBedamaYellow)) {
		mPelletFlag = FLAG_VS_BEDAMA_YELLOW;
	} else if (!strcmp(mConfig->mParams.mName.mData, VsOtakaraName::cBedamaRed)) {
		mPelletFlag = FLAG_VS_BEDAMA_RED;
	} else if (!strcmp(mConfig->mParams.mName.mData, VsOtakaraName::cBedamaBlue)) {
		mPelletFlag = FLAG_VS_BEDAMA_BLUE;
	} else if (!strcmp(mConfig->mParams.mName.mData, VsOtakaraName::cCoin)) {
		mPelletFlag = FLAG_VS_CHERRY;
	}

	if (static_cast<PelletInitArg*>(initArg)->_1C == 0) {
		mModel = mMgr->createShape(mPelletSizeType, mSlotIndex);
		onCreateShape();
	}

	if (mModel) {
		mCarryAnim.mAnimMgr = mMgr->mAnimMgr[mPelletSizeType];
		mRadius             = 2.0f * mModel->getRoughBoundingRadius();
	} else {
		mRadius = mConfig->mParams.mRadius.mData;
	}

	if (mCarryAnim.mAnimMgr) {
		SysShape::MotionListener* listener = this;
		mCarryAnim.startAnim(0, listener);
		stop_carrymotion();
		init_pmotions();
		start_pmotions();
		if ((gameSystem->isZukanMode()) && (mPelletFlag == FLAG_LOOZY)) {
			mAnimSpeed = 30.0f;
		}
	}

	mMgr->setCollTree(this, mPelletSizeType);

	if (strcmp(mConfig->mParams.mDynamics.mData, "never") == 0) {
		mDynamicType = 2;
		mIsDynamic   = false;

		mConfig->mParams.mNumParticles.mData = 0;
	} else if (strcmp(mConfig->mParams.mDynamics.mData, "lod") == 0) {
		mDynamicType = 1;
		mIsDynamic   = true;
	} else {
		mDynamicType = 0;
		mIsDynamic   = true;
	}

	mSlots.mSlots[0]  = 0;
	mSlots.mSlots[1]  = 0;
	mSlots.mSlots[2]  = 0;
	mSlots.mSlots[3]  = 0;
	mSlots.mSlots[4]  = 0;
	mSlots.mSlots[5]  = 0;
	mSlots.mSlots[6]  = 0;
	mSlots.mSlots[7]  = 0;
	mSlots.mSlots[8]  = 0;
	mSlots.mSlots[9]  = 0;
	mSlots.mSlots[10] = 0;
	mSlots.mSlots[11] = 0;
	mSlots.mSlots[12] = 0;
	mSlots.mSlots[13] = 0;
	mSlots.mSlots[14] = 0;
	mSlots.mSlots[15] = 0;
	_3F6              = 0;

	mSlotCount = getPelletConfigMax();

	if (mSlotCount > 128) {
		mSlotCount = 128;
	}

	// For Doomsday Apparatus (because it couldnt just have 1000 in the config... apparently)
	if (mConfig->mParams.mMin.mData == 128) {
		mMinCarriers = 1000;
		mMaxCarriers = 1000;
	}

	mDynParticle = nullptr;
	setupParticles();
	do_onInit(initArg);

	if (getKind() == PELTYPE_TREASURE) {
		Radar::Mgr::entry(this, Radar::MAP_TREASURE, 0);
	} else if (getKind() == PELTYPE_UPGRADE) {
		Radar::Mgr::entry(this, Radar::MAP_UPGRADE, 0);
	}

	setAlive(true);

	if (gameSystem->isVersusMode()) {
		GameMessagePelletBorn msg(this);
		gameSystem->mSection->sendMessage(msg);
	}
}

/*
 * --INFO--
 * Address:	80167590
 * Size:	000020
 */
int Pellet::getPelletConfigMin()
{
	if (mMinCarriers > 0) {
		return mMinCarriers;
	}
	return mConfig->mParams.mMin.mData;
}

/*
 * --INFO--
 * Address:	801675B0
 * Size:	000020
 */
int Pellet::getPelletConfigMax()
{
	if (mMaxCarriers > 0) {
		return mMaxCarriers;
	}
	return mConfig->mParams.mMax.mData;
}

/*
 * --INFO--
 * Address:	801675D0
 * Size:	000354
 */
// WIP: https://decomp.me/scratch/SWcqK
void Pellet::setupParticles()
{
	f32 radius       = mConfig->mParams.mRadius.mData; // 35C->A0
	f32 nil          = 0.0f;
	_2F4             = nil;
	mMaxCollParticle = mConfig->mParams.mNumParticles.mData;

	if (mMaxCollParticle != 0) {
		if (strcmp("simple", mConfig->mParams.mParticleType.mData) == 0) {
			if (2.0f * (0.5f * mConfig->mParams.mHeight.mData) > radius) {
				setupParticles_tall();
			} else {
				setupParticles_simple();
			}
		} else {
			mDynamicType      = 0;
			mIsDynamic        = true;
			int particleCount = mMaxCollParticle;
			mMaxCollParticle++;

			createParticles(mMaxCollParticle);

			for (int i = 0; i < particleCount; i++) {
				f32 mid       = mConfig->mParams.mHeight.mData / 2;
				f32 midRadius = radius - mid;
				f32 theta     = (TAU / (f32)particleCount) * (f32)i;
				f32 cos       = midRadius * cosf(theta);
				f32 sin       = midRadius * sinf(theta);
				Vector3f rotation(sin, 0.0f, cos);
				// _2F4                        = _2F4 + rotation;
				setupDynParticle(i, mid, rotation);
				// mDynParticle->getAt(i)->_00 = rotation;
				// mDynParticle->getAt(i)->_18 = mid;
			}
			Vector3f rotation = Vector3f(0.0f, 0.0f, 0.0f);

			f32 configHeight = mConfig->mParams.mHeight.mData / 2;

			setupDynParticle(particleCount, configHeight, rotation);
			// _2F4               = _2F4 + Vector3f(0.0f, 0.0f, 0.0f);
			// f32 height = configHeight / 2;
			// mDynParticle->getAt(particleCount)->_00 = Vector3f(0.0f, 0.0f, 0.0f);
			// mDynParticle->getAt(particleCount)->_18 = configHeight;
		}

		f32 inverse = 1.0f / mMaxCollParticle;
		_2F4        = _2F4 * inverse;
	}
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
	f32 radius = mConfig->mParams.mRadius.mData;
	createParticles(mMaxCollParticle);

	f32 endIndex = (f32)mMaxCollParticle;
	f32 mid      = 0.5f * mConfig->mParams.mHeight.mData;
	f32 diff     = radius - mid;

	for (int i = 0; i < mMaxCollParticle; i++) {
		f32 theta = (TAU / endIndex) * (f32)i;
		Vector3f rotation(diff * sinf(theta), 0.0f, diff * cosf(theta));
		// _2F4                        = _2F4 + rotation;
		setupDynParticle(i, mid, rotation);
		// mDynParticle->getAt(i)->_00 = rotation;
		// mDynParticle->getAt(i)->_18 = mid;
	}
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
	f32 radius = mConfig->mParams.mRadius.mData;
	f32 mid    = 0.5f * mConfig->mParams.mHeight.mData;

	f32 height = mid;
	if (mid > 10.0f) {
		height = 10.0f;
	}

	int count = mMaxCollParticle;
	createParticles(count);
	f32 heightDiff = -(mid - height);
	f32 endIndex   = (f32)count;
	mid            = radius - height;

	for (int i = 0; i < count; i++) {
		f32 theta = (TAU / endIndex) * (f32)i;
		Vector3f rotation(mid * sinf(theta), heightDiff, mid * cosf(theta));
		setupDynParticle(i, height, rotation);
	}
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
bool Pellet::panmodokiCarryable() { return !(mConfig->mParams.mCode.mData & 1); }

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
 * Address:	80167DE4
 * Size:	000044
 */
void Pellet::finishDisplayCarryInfo()
{
	if (mCarryInfoList) {
		mCarryInfoList->mParam.mCarryInfo.disappear();
		mCarryInfoList = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80167E28
 * Size:	0000A0
 */
void Pellet::getCarryInfoParam(CarryInfoParam& infoParam)
{
	infoParam.mUseType    = 0;
	infoParam.mPosition   = mRigid.mConfigs[0].mPosition;
	infoParam.mYOffsetMax = 30.0f + mConfig->mParams.mHeight.mData;
	infoParam._14         = 1;
	infoParam.mIsTopFirst = TRUE;
	infoParam.mValue2     = getTotalCarryPikmins();
	int minVal;
	if (mMinCarriers > 0) {
		minVal = mMinCarriers;
	} else {
		minVal = mConfig->mParams.mMin.mData;
	}
	infoParam.mValue1 = minVal;
	infoParam.mColor  = mCarryColor;
}

/*
 * --INFO--
 * Address:	80167EC8
 * Size:	000068
 */
void Pellet::setCarryColor(int color)
{
	if ((gameSystem->isVersusMode()) && (color != mCarryColor)) {
		mCarryColor = color;
		sound_otakaraEventStart();
	}
	mCarryColor = color;
}

/*
 * --INFO--
 * Address:	80167F34
 * Size:	00000C
 */
void Pellet::clearCarryColor() { mCarryColor = 5; }

/*
 * --INFO--
 * Address:	80167F40
 * Size:	00001C
 */
Vector3f Pellet::getVelocity() { return mRigid.mConfigs[0].mVelocity; }

/*
 * --INFO--
 * Address:	80167F5C
 * Size:	00001C
 */
void Pellet::setVelocity(Vector3f& velocity) { mRigid.mConfigs[0].mVelocity = velocity; }

/*
 * --INFO--
 * Address:	80167F78
 * Size:	000104
 */
void Pellet::allocateTexCaster()
{
	if ((getKind() == PELTYPE_TREASURE || getKind() == PELTYPE_UPGRADE) && mCaster == nullptr) {
		f32 radius = mConfig->mParams.mPRadius.mData;
		Sys::Sphere sphere(mPelletPosition, 2.0f * radius);
		mCaster = TexCaster::Mgr::sInstance->create(sphere, TAU * randFloat());

		if (mCaster) {
			if (mCaptureMatrix) {
				mCaster->hide();
			} else {
				mCaster->fadein(0.5f);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8016807C
 * Size:	0002F0
 */
void Pellet::onSetPosition()
{
	if (!gameSystem->isZukanMode()) {
		// this probably needs a better name
		if (isTreasurePosition()) {
			ItemTreasure::Item* item = (ItemTreasure::Item*)ItemTreasure::mgr->birth();
			if (item) {
				mPelletPosition.y = mapMgr->getMinY(mPelletPosition);
				item->init(nullptr);
				item->setPosition(mPelletPosition, false);
				item->setTreasure(this);
			} else {
				JUT_PANICLINE(2326, "がっかり\n"); // 'disappointed' lol
			}
		}
	}

	mRigid.initPosition(mPelletPosition, Vector3f::zero);
	mBaseTrMatrix        = mRigid._04;
	mLodSphere.mPosition = mPelletPosition;
	updateParticlePositions();
	mRigid.mTimeStep = 1.0f;

	mMass = 0.0f;
	if (mPelletFlag == FLAG_NAVI_NAPSACK) {
		mMass = 0.1f;
	}

	f32 inertiaScaling = mConfig->mParams.mInertiaScaling.mData;
	f32 heightScaling  = mConfig->mParams.mHeight.mData / inertiaScaling;
	f32 z              = 1.0f;
	f32 radSquared     = SQUARE(mConfig->mParams.mRadius.mData / inertiaScaling);

	f32 horizontal = ((radSquared / 4) + (SQUARE(heightScaling) / 12.0f)) * z;
	f32 vertical   = z * (radSquared / 2);

	mRigid._144(0, 0) *= horizontal;
	mRigid._144(0, 1) *= horizontal;
	mRigid._144(0, 2) *= horizontal;
	mRigid._144(1, 0) *= vertical;
	mRigid._144(1, 1) *= vertical;
	mRigid._144(1, 2) *= vertical;
	mRigid._144(2, 0) *= horizontal;
	mRigid._144(2, 1) *= horizontal;
	mRigid._144(2, 2) *= horizontal;
	mLodSphere.mPosition = mPelletPosition;
	mRigid.mFlags.set(1);
}

/*
 * --INFO--
 * Address:	8016836C
 * Size:	000160
 */
void Pellet::setPanModokiRotation(f32 direction)
{
	mFaceDir = direction;

	Vector3f yVec;
	mBaseTrMatrix.getBasis(1, yVec);
	yVec.normalise();

	Matrixf mat;
	mat.makeNaturalPosture(yVec, direction);
	mBaseTrMatrix = mat;
	mRigid.mConfigs[0]._48.fromMatrixf(mBaseTrMatrix);
	mRigid.mConfigs[0]._48.normalise();
	mBaseTrMatrix.setTranslation(mPelletPosition);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mRigid._04.mMatrix.mtxView);
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
	mRigid.mConfigs[0]._48 = quat;

	mBaseTrMatrix.makeQ(quat);
	mBaseTrMatrix.setTranslation(mPelletPosition);
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mRigid._04.mMatrix.mtxView);

	f32 x;
	f32 z;
	if (mBaseTrMatrix(1, 1) > 0.0f) {
		x = mBaseTrMatrix(0, 2);
		z = mBaseTrMatrix(2, 2);
	} else {
		x = mBaseTrMatrix(0, 0);
		z = mBaseTrMatrix(2, 0);
	}

	if (z < -1.0f) {
		z = -1.0f;
	} else if (z > 1.0f) {
		z = 1.0f;
	}

	if (x > 0.0f) {
		P2ASSERTLINE(2504, checkASinCosBounds(z));
		mFaceDir = acosf(z);
	} else {
		P2ASSERTLINE(2507, checkASinCosBounds(z));
		mFaceDir = -acosf(z);
	}

	mFaceDir = roundAng(mFaceDir);
}

/*
 * --INFO--
 * Address:	8016879C
 * Size:	000028
 */
int Pellet::getStateID() { return mPelletSM->getCurrID(this); }

/*
 * --INFO--
 * Address:	801687C4
 * Size:	000260
 */
void Pellet::bounceCallback(Sys::Triangle* triangle)
{
	f32 pRadius       = mConfig->mParams.mPRadius.mData;
	Vector3f position = getPosition();

	Sys::Sphere ball;
	ball.mPosition = position;
	f32 height     = mConfig->mParams.mHeight.mData;
	ball.mRadius   = height;
	ball.mPosition.y -= height;

	int fallType = 0;
	if (pRadius > 30.0f) {
		fallType = 2;
	} else if (pRadius > 10.0f) {
		fallType = 1;
	}

	WaterBox* wbox = checkWater(nullptr, ball);

	if (checkWater(nullptr, ball)) {
		if (!mIsBounced) {
			efx::TOtakaraDive diveEffect;
			ball.mPosition.y = *wbox->getSeaHeightPtr();

			f32 scale = mConfig->mParams.mPRadius.mData;
			efx::ArgScale arg(ball.mPosition, scale);
			diveEffect.create(&arg);
			mSoundMgr->startSound(fallType + 0x380B, 0);
			onBounce();
		}
		mIsBounced = true;
		return;
	}
	if (!mIsBounced && (getKind() != PELTYPE_CARCASS)) {
		mSoundMgr->startSound(fallType + 0x3808, 0);
		mIsBounced = 1;
		onBounce();
	}
}

/*
 * --INFO--
 * Address:	80168A28
 * Size:	000F84
 */
// WIP: https://decomp.me/scratch/jL72g
void Pellet::update()
{
	Vector3f position = getPosition();
	Sys::Sphere ball;
	ball.mPosition = position;

	f32 height       = mConfig->mParams.mHeight.mData;
	ball.mRadius     = height;
	ball.mPosition.y = position.y - height;

	if (checkWater(nullptr, ball)) {
		mIsInWater = true;
	} else {
		mIsInWater = false;
	}

	updateDiscoverDisable();

	if (mSoundMgr) {
		mSoundMgr->exec();
		if ((gameSystem->isStoryMode()) && !(moviePlayer->isFlag(MVP_IsActive)) && (!isPicked())
		    && (getKind() == PELTYPE_TREASURE || getKind() == PELTYPE_UPGRADE)) {
			PSSystem::SceneMgr* mgr = PSSystem::getSceneMgr();
			PSSystem::checkSceneMgr(mgr);

			PSM::Scene_Game* currScene = (PSM::Scene_Game*)mgr->getChildScene();
			PSSystem::checkGameScene(currScene);

			if (!currScene->isCave()) {
				mSoundMgr->startSound(PSSE_MP_INSECT_OTAKARA_01, 0);
			}
		}
	}

	Vector3f frameworkVec; // A4
	if (mPelletCarry->frameWork(frameworkVec) != 0) {
		if (mSticked == nullptr) {
			mPelletCarry->reset();
		} else {
			Vector3f velocity = getVelocity();
			frameworkVec.y    = velocity.y;
			setVelocity(frameworkVec);
		}
	}

	if (!(mPickFlags & 1)) {
		updateClaim();
	}

	if (mPickFlags & 1) {
		if (getTotalCarryPikmins() < getPelletConfigMin()) {
			endPick(false);
			mPelletCarry->reset();
			if (_3F6 == 0) {
				setVelocity(Vector3f::zero);
			}
		}
	}

	mCollTree->getBoundingSphere(mLodSphere);
	updateCell();
	if (mPelletView) {
		mCollTree->update();
		mCollTree->getBoundingSphere(mLodSphere);
		mCollTree->mPart->mModel->getMatrix(0);
	}

	mPelletSM->exec(this);
	if (mPelletSM->getCurrID(this) == PELSTATE_Zukan) {
		AILODParm parm1;
		updateLOD(parm1);
		return;
	}

	if (!isAlive()) {
		AILODParm parm2;
		updateLOD(parm2);
		if (isMovieActor()) {
			mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
		}
		return;
	}

	if (mCaptureMatrix) {
		AILODParm parm3;
		updateLOD(parm3);
		return;
	}

	AILODParm parm4;
	updateLOD(parm4);
	if (isMovieActor()) {
		mLod.setFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
	}
	bool check;
	int type = 2;
	if (mDynamicType == 0) {
		check = true;
	} else if (mDynamicType == 2) {
		check = false;
	} else if ((mLod.isFlag(AILOD_IsMid | AILOD_IsFar)) >= 2) {
		check = false;
	} else {
		check = true;
	}

	if (!(mLod.isFlag(AILOD_IsVisible)) || ((mLod.isFlag(AILOD_IsMid | AILOD_IsFar)) >= 1)) {
		type = 1;
	}
	mIsDynamic = check;

	if ((PelletMgr::disableDynamics != 0) || (!mIsDynamic)) {
		f32 frametime = sys->mDeltaTime;
		Sys::Sphere ball2;
		ball2.mPosition = mPelletPosition;
		if (mPickFlags & 1) {
			ball2.mPosition.y -= 4.0f;
		}
		Vector3f* velocityPtr  = &mRigid.mConfigs[0].mVelocity;
		ball2.mRadius          = 0.5f * mConfig->mParams.mHeight.mData;
		mRigid.mConfigs[0]._30 = Vector3f(0.0f);
		mRigid.mConfigs[0]._24 = Vector3f(0.0f);

		if (((_3F6 == 0) && !(mPickFlags & 1)) || (mBounceTriangle == nullptr)) {
			velocityPtr->y = -((frametime * _aiConstants->mGravity.mData) - velocityPtr->y);
		}
		mAcceleration.y = 0.0f;
		Vector3f vec    = *velocityPtr;
		if (isCollisionFlick() && (mPelletFlag != 1) && !(mPickFlags & 1) && (_3F6 == 0)) {
			vec += mAcceleration;
		}

		mAcceleration = Vector3f(0.0f);

		MoveInfo info(&ball2, &vec, 0.5f);
		info.mInfoOrigin = this;
		mapMgr->traceMove(info, frametime);

		if (mPickFlags & 1) {
			bool check = (info.mWallTriangle != nullptr);
			if (check && (dot(vec, info.mReflectPosition) > 0.5f)) {
				check = false;
			}
			if (check) {
				if (mWallTimer < 100) {
					mWallTimer += 2;
				}
			} else {
				if (mWallTimer != 0) {
					mWallTimer--;
				}
			}
		} else {
			mWallTimer = 0;
		}
		*velocityPtr   = vec;
		info.mVelocity = velocityPtr;
		info._19       = 0;
		if (platMgr) {
			platMgr->traceMove(info, frametime);
		}

		if (info.mBounceTriangle) {
			if (mBounceTriangle == nullptr) {
				bounceCallback(info.mBounceTriangle);
			}

			mBounceTriangle = info.mBounceTriangle;

			if (!(mPickFlags & 1) && (_3F6 == 0)) {
				/////// this bit is full of regswaps
				Vector3f currVel = *velocityPtr;
				f32 dotVelocity  = dot(currVel, info.mPosition);
				Vector3f impulse(0.0f, -(_aiConstants->mGravity.mData * sys->mDeltaTime), 0.0f);
				f32 dotImpulse = dot(impulse, info.mPosition);

				Vector3f res = info.mPosition * dotVelocity;
				res          = currVel - res;
				res          = res * frametime * 10.0f;
				*velocityPtr = currVel - res;

				Vector3f res2 = info.mPosition * dotImpulse;
				res2          = impulse - res2;
				res2.x        = -res2.x;
				res2.y        = -res2.y;
				res2.z        = -res2.z;
				res2          = res2 * 1.0f;
				velocityPtr->x += res2.x;
				velocityPtr->y += res2.y;
				velocityPtr->z += res2.z;
			}
		} else {
			mBounceTriangle = nullptr;
		}

		if (mPickFlags & 1) {
			ball2.mPosition.y += 4.0f;
		}

		mPelletPosition              = ball2.mPosition;
		mRigid.mConfigs[0].mPosition = mPelletPosition;
	} else if (type > 0) {
		mRigid.computeForces(0);

		if (!(mPickFlags & 1) && (_3F6 == 0)) {
			computeForces(mConfig->mParams.mFriction.mData);
		}

		bool someCheck           = true;
		mRigid.mConfigs[0]._18.y = -_aiConstants->mGravity.mData;
		if ((mPelletSM->getCurrID(this) == 0) && (_311 != 0) && !isPicked()) {
			Vector3f rigidVelocity = mRigid.mConfigs[0].mVelocity;
			f32 mag                = rigidVelocity.length();

			if (mag < 10.0f) {
				Vector3f anotherVec = mRigid.mConfigs[0]._30;
				f32 anotherMag      = anotherVec.length();

				if ((anotherMag < 100.0f) && (_3F6 == 0)) {
					f32 time = sys->mDeltaTime;

					Sys::Sphere ball3;
					ball3.mPosition = mRigid.mConfigs[0].mPosition;
					f32 halfHeight  = 0.5f * mConfig->mParams.mHeight.mData;
					ball3.mRadius   = halfHeight;
					ball3.mPosition.y -= halfHeight;

					Vector3f anotherImpulse(0.0f, -_aiConstants->mGravity.mData, 0.0f);

					MoveInfo info2(&ball3, &anotherImpulse, 0.0f);
					mapMgr->traceMove(info2, time);
					if (info2.mBounceTriangle == nullptr) {
						if (platMgr) {
							platMgr->traceMove(info2, time);
						}
					}

					if (info2.mBounceTriangle) {
						someCheck = false;
					}
				}
			}
		}

		Vector3f someVec = mRigid.mConfigs[0].mPosition;
		f32 halfFrame    = sys->mDeltaTime / 2;

		if (someCheck) {
			if (isCollisionFlick() && !(mPickFlags & 1) && (_3F6 == 0)) {
				mAcceleration.y = 0.0f;
				mRigid.mConfigs[0].mVelocity += mAcceleration;
			}
			for (int i = 0; i < 2; i++) {
				simulate(halfFrame);
			}
		}
		f32 frametimeagain = sys->mDeltaTime;
		f32 frames         = 1.0f / frametimeagain;
		Sys::Sphere ball4;
		ball4.mPosition = someVec;
		ball4.mRadius   = 0.5f * mConfig->mParams.mHeight.mData;

		Vector3f anotherMoveVec = mRigid.mConfigs[0].mPosition;
		anotherMoveVec          = anotherMoveVec - someVec;
		anotherMoveVec          = anotherMoveVec * frames;

		MoveInfo info3(&ball4, &anotherMoveVec, 0.5f);

		mapMgr->traceMove(info3, frametimeagain);
		if (platMgr != nullptr) {
			platMgr->traceMove(info3, frametimeagain);
		}

		if (mPickFlags & 1) {
			bool check = (info3.mWallTriangle != nullptr);
			if (check && (dot(anotherMoveVec, info3.mReflectPosition) > 0.5f)) {
				check = false;
			}
			if (check) {
				if (mWallTimer < 100) {
					mWallTimer += 2;
				}
			} else {
				if (mWallTimer != 0) {
					mWallTimer--;
				}
			}
		} else {
			mWallTimer = 0;
		}

		f32 x                          = info3.mMoveSphere->mPosition.x;
		f32 z                          = info3.mMoveSphere->mPosition.z;
		mRigid.mConfigs[0].mPosition.x = x;
		mRigid.mConfigs[0].mPosition.z = z;

		f32 anotherVelMag = mRigid.mConfigs[0].mVelocity.normalise();

		f32 reallyAnotherMag = mAcceleration.length();

		if (anotherVelMag > reallyAnotherMag) {
			f32 diff = anotherVelMag - reallyAnotherMag;
			mRigid.mConfigs[0].mVelocity *= diff;
		} else {
			mRigid.mConfigs[0].mVelocity *= anotherVelMag;
		}

		mAcceleration = Vector3f(0.0f);
	}

	do_update();

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
 * Address:	801699B8
 * Size:	00001C
 */
void Pellet::getPikiBirthCount(int& min, int& max)
{
	min = mConfig->mParams.mPikiCountMin.mData;
	max = mConfig->mParams.mPikiCountMax.mData;
}

/*
 * --INFO--
 * Address:	801699D4
 * Size:	000014
 */
void PelletMgr::setMovieDraw(bool check) { mMovieDrawDisabled = !check; }

/*
 * --INFO--
 * Address:	801699E8
 * Size:	00012C
 */
void Pellet::doSimulation(f32 constraint)
{
	Creature::CheckHellArg hellArg;
	hellArg.mIsKillPiki = false;
	if (checkHell(hellArg) == CREATURE_HELL_DEATH) {
		Vector3f position   = getPosition();
		Vector3f wpPosition = position;
		wpPosition.y        = 0.0f;

		NotOff condition;
		WPSearchArg searchArg(wpPosition, &condition, false, 10.0f);

		WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(searchArg);
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
	if (mCaptureMatrix == nullptr) {
		mPelletPosition = mRigid.mConfigs[0].mPosition;
		Vector3f vec    = _2F4 * -1.0f;
		Matrixf T;
		T.makeT(vec);

		Matrixf Q;
		Q.makeQ(mRigid.mConfigs[0]._48);

		Matrixf mat;
		PSMTXConcat(Q.mMatrix.mtxView, T.mMatrix.mtxView, mat.mMatrix.mtxView);

		mat.setTranslation(mPelletPosition);
		mBaseTrMatrix = mat;
	}
}

/*
 * --INFO--
 * Address:	80169C28
 * Size:	00027C
 */
void Pellet::doAnimation()
{
	if (!pelletMgr->mMovieDrawDisabled || isMovieActor()) {
		if (gameSystem != nullptr && gameSystem->mFlags.isSet(0x20)) {
			update();
		} else {
			if (mCollTree) {
				mCollTree->getBoundingSphere(mLodSphere);
			}
			AILODParm parm;
			updateLOD(parm);
		}

		if (mPelletSM->getCurrID(this) == 6) {
			mCarryAnim.animate(mAnimSpeed);

			SysShape::Model* model  = mModel;
			J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(mCarryAnim.getCalc());

			J3DJoint* joint = model->mJ3dModel->mModelData->mJointTree.mJoints[0];
			joint->mMtxCalc = calc;
			update_pmotions();
		} else if (mCaptureMatrix == nullptr) {
			if (mPelletView == nullptr && mModel != nullptr && mCarryAnim.mAnimMgr) {
				mCarryAnim.animate(mAnimSpeed);

				SysShape::Model* model  = mModel;
				J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(mCarryAnim.getCalc());

				J3DJoint* joint = model->mJ3dModel->mModelData->mJointTree.mJoints[0];
				joint->mMtxCalc = calc;
				update_pmotions();
			}

			mPelletPosition   = mRigid.mConfigs[0].mPosition;
			Vector3f opposite = _2F4 * -1.0f;

			Matrixf matT;
			matT.makeT(opposite);

			Matrixf matQ;
			matQ.makeQ(mRigid.mConfigs[0]._48);

			Matrixf outMat;
			PSMTXConcat(matQ.mMatrix.mtxView, matT.mMatrix.mtxView, outMat.mMatrix.mtxView);
			outMat.setTranslation(mPelletPosition);

			mBaseTrMatrix = outMat;

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
	if (!pelletMgr->mMovieDrawDisabled || isMovieActor()) {
		if (mPelletView == nullptr) {
			if (mLod.isFlag(AILOD_IsVisible)) {
				mModel->show();
				changeMaterial();
			} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
				return;
			} else {
				mModel->hide();
			}
		}

		theEntry();
	}
}

/*
 * --INFO--
 * Address:	80169F98
 * Size:	000020
 */
void Pellet::doSetView(int viewportNumber) { Creature::doSetView(viewportNumber); }

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
	if (mModel) {
		if (mLod.isFlag(AILOD_IsVisible)) {
			mModel->show();
		} else if (BaseHIOParms::sEntryOpt && !gameSystem->isMultiplayerMode()) {
			return;
		} else {
			mModel->hide();
		}
		changeMaterial();
		mModel->mJ3dModel->entry();
		mModel->mJ3dModel->calcDiffTexMtx();
	}
}

/*
 * --INFO--
 * Address:	8016A0B4
 * Size:	00009C
 */
void Pellet::entryShape()
{
	if (mPelletView == nullptr) {
		if (mModel) {
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			mScale.setVec(mModel->mJ3dModel->mModelScale);
			mModel->mJ3dModel->calc();
			mCollTree->update();
		}
	} else {
		mCollTree->update();
	}
}

/*
 * --INFO--
 * Address:	8016A150
 * Size:	000024
 */
void Pellet::getBoundingSphere(Sys::Sphere& sphere) { sphere = mLodSphere; }

/*
 * --INFO--
 * Address:	8016A174
 * Size:	00003C
 */
void Pellet::getLODSphere(Sys::Sphere& sphere)
{
	sphere.mPosition = mLodSphere.mPosition;
	if (mPelletView == nullptr) {
		sphere.mRadius = mRadius;
	} else {
		sphere.mRadius = mLodSphere.mRadius;
	}
}

/*
 * --INFO--
 * Address:	8016A1B0
 * Size:	000058
 */
void Pellet::init_pmotions()
{
	int numPMotions = mConfig->mParams.mNumPMotions.mData;
	if (numPMotions > 0) {
		mNumPMotions          = numPMotions;
		mPmotionAnim.mAnimMgr = mCarryAnim.mAnimMgr;
		mPmotionAnim.startAnim(0, nullptr);
	} else {
		mNumPMotions = 0;
	}
}

/*
 * --INFO--
 * Address:	8016A208
 * Size:	0000B4
 */
void Pellet::update_pmotions()
{
	SysShape::Animator* animator = &mPmotionAnim;
	animate_pmotions(animator);
}

/*
 * --INFO--
 * Address:	8016A2BC
 * Size:	000044
 */
void Pellet::start_pmotions()
{
	if (mNumPMotions > 0) {
		SysShape::Animator* animator = &mPmotionAnim;
		animator->startAnim(1, this);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
// void Pellet::start_carrymotion()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016A300
 * Size:	00000C
 */
void Pellet::stop_carrymotion() { mAnimSpeed = 0.0f; }

/*
 * --INFO--
 * Address:	8016A30C
 * Size:	000054
 */
void Pellet::finish_carrymotion()
{
	if (mCarryAnim.mAnimMgr) {
		mCarryAnim.mFlags |= 2;
		return;
	}

	if (mPelletView) {
		mPelletView->view_finish_carrymotion();
	}
}

/*
 * --INFO--
 * Address:	8016A360
 * Size:	000088
 */
void Pellet::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	if ((keyEvent.mType == KEYEVENT_END) && (mCarryAnim.mFlags & 2)) {
		mCarryAnim.startAnim(0, this);
		if (mPickFlags & 1) {
			mAnimSpeed = 30.0f * sys->mDeltaTime;
			return;
		}
		mAnimSpeed = 0.0f;
	}
}

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

	bool validSlot = (slot >= 0 && slot < mSlotCount);
	P2ASSERTLINE(3686, validSlot);

	u32 index = slot >> 3;
	u32 flag  = 1 << slot - index * 8;
	return !(flag & mSlots.mSlots[15 - index]);
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
s16 Pellet::getFreeStickSlot()
{
	for (int slot = 0; slot < mSlotCount; slot++) {
		u32 index = slot >> 3;
		u32 flag  = 1 << slot - index * 8;
		if (!(flag & mSlots.mSlots[15 - index])) {
			return slot;
		}
	}
	return -1;
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
s16 Pellet::getNearFreeStickSlot(Vector3f& position)
{
	f32 minDist      = 12800.0f;
	short returnSlot = -1;

	for (short slot = 0; slot < mSlotCount; slot++) {
		u32 index = slot >> 3;
		u32 flag  = 1 << slot - index * 8;
		if (!(flag & mSlots.mSlots[15 - index])) {
			Vector3f slotPosition;
			calcStickSlotGlobal(slot, slotPosition);
			Vector3f diff = Vector3f(slotPosition.y - position.y, slotPosition.z - position.z, slotPosition.x - position.x);
			f32 dist      = _length2(diff);
			if (dist < minDist) {
				minDist    = dist;
				returnSlot = slot;
			}
		}
	}
	return returnSlot;
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
	short slotCap    = mSlotCount;
	short randomSlot = (int)((f32)slotCap * randFloat());
	int slotByte     = 128;
	short returnSlot = -1;
	for (short slot = 0; slot < slotCap; slot++) {
		u32 index = slot >> 3;
		u32 flag  = 1 << slot - index * 8;
		if (!(flag & mSlots.mSlots[15 - index])) {
			u32 slotDiff    = slot - randomSlot;
			u32 slotShift   = slotDiff >> 31;
			int newSlotByte = (slotShift ^ slotDiff) - slotShift;
			if (newSlotByte < slotByte) {
				slotByte   = newSlotByte;
				returnSlot = slot;
			}
		}
	}
	return returnSlot;
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

	if ((gameSystem->isVersusMode())
	    || ((getKind() != PELTYPE_TREASURE) && (getKind() != PELTYPE_BERRY) && (getKind() != PELTYPE_UPGRADE))) {
		int maxCount = -1;
		int counter  = 0;
		int i        = 0;

		for (int j = 0; j < 3; j++) {
			if (maxCount < (int)mPikminCount[j]) {
				maxCount = mPikminCount[j];
			}
		}

		int onyonType[3];
		for (int j = 0; j < 3; j++) {
			if (maxCount == (int)mPikminCount[j]) {
				onyonType[i++] = j;
				counter++;
			}
		}

		int idx = (int)((f32)counter * randFloat());
		if (idx >= counter) {
			idx = ONYON_TYPE_BLUE;
		}

		int type  = onyonType[idx];
		goalOnyon = ItemOnyon::mgr->getOnyon(type);
		if ((gameSystem->isStoryMode()) && (!playData->hasBootContainer(type))) {
			goalOnyon = nullptr;
		}

		if (goalOnyon == nullptr) {
			goalOnyon = ItemOnyon::mgr->getOnyon(ONYON_TYPE_RED);
			if (goalOnyon == nullptr) {
				goalOnyon = ItemOnyon::mgr->mPod;
			}
		}
	} else {
		goalOnyon = ItemOnyon::mgr->mUfo;
		if (ItemOnyon::mgr->mUfo == nullptr) {
			goalOnyon = ItemOnyon::mgr->mPod;
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
	int count = mPikminCount[0];
	for (int i = 1; i < PikiColorCount; i++) {
		count += mPikminCount[i];
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
		total += mPikminCount[i] * pikiMgr->getColorTransportScale(i);
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
	return mPikminCount[color];
}

/*
 * --INFO--
 * Address:	8016AA54
 * Size:	0001D4
 */
void Pellet::onSlotStickStart(Creature* creature, short slot)
{
	if (slot != 9999) {
		bool validSlot = (slot >= 0 && slot < mSlotCount);
		P2ASSERTLINE(3917, validSlot);
		P2ASSERTLINE(3918, isSlotFree(slot));
		setSlotOccupied(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->mPikiKind;
		bool validType = (pikminType >= 0 && pikminType < PikiColorCount);
		P2ASSERTLINE(3925, validType);

		mPikminCount[pikminType]++;
		mCarryPower += static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		mTotalCarriers++;
	}

	int max = mMaxCarriers > 0 ? mMaxCarriers : mConfig->mParams.mMax.mData;
	if (max != 1) {
		mCarryColor    = 5;
		mCarryInfoList = carryInfoMgr->appear(this);
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
		bool validSlot = (slot >= 0 && slot < mSlotCount);
		P2ASSERTLINE(3952, validSlot);
		if (isSlotFree(slot)) {
			JUT_PANICLINE(3956, "onSlotStickEnd\n");
		}
		setSlotFree(slot);
	}

	if (creature->isPiki()) {
		int pikminType = static_cast<Piki*>(creature)->mPikiKind;
		bool validType = (pikminType >= 0 && pikminType < PikiColorCount);
		P2ASSERTLINE(3964, validType);

		mPikminCount[pikminType]--;
		mCarryPower -= static_cast<Piki*>(creature)->getPelletCarryPower();
	} else {
		mTotalCarriers--;
	}

	if (getTotalPikmins() == 0) {
		if (mCarryInfoList) {
			mCarryInfoList->mParam.mCarryInfo.disappear();
			mCarryInfoList = nullptr;
		}
		mPelletCarry->giveup(0);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00018C
 * calcStickSlotLocal__Q24Game6PelletFsR10Vector3f
 */
// void calcStickSlotLocal__Q24Game6PelletFsR10Vector3f()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8016AE10
 * Size:	00021C
 */
void Pellet::calcStickSlotGlobal(s16 slot, Vector3f& stickPosition)
{
	Vector3f pos; // sp14
	if (slot == 9999) {
		pos = Vector3f(0.0f);
	} else {
		bool validSlot = (slot >= 0) && (slot < mSlotCount);
		P2ASSERTLINE(4016, validSlot);
		f32 radius = mConfig->mParams.mPRadius.mData;
		f32 theta  = ((TAU / (f32)mSlotCount) * slot) + mAngleOffset;
		pos        = Vector3f(radius * sinf(theta), 0.0f, radius * cosf(theta));
		int face   = getFace();
		f32 mid    = (0.5f * mConfig->mParams.mHeight.mData) + 1.0f;

		if (face == 0) {
			f32 negMid = -mid;
			pos.y      = negMid;
			if (mPickFlags & 1) {
				pos.y -= 4.0f;
			}
		} else {
			pos.y = mid;
			if (mPickFlags & 1) {
				pos.y += 4.0f;
			}
		}
	}

	Vector3f outVec;
	PSMTXMultVec(mBaseTrMatrix.mMatrix.mtxView, (Vec*)&pos, (Vec*)&outVec);
	stickPosition = Vector3f(outVec);
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
int Pellet::getFace()
{
	if (mDynamicType == 2) {
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
	if (!(mPickFlags & 1)) {
		if (mConfig->mParams.mCode.mData & 1) {
			shadowOn();
		}

		if (mCarryAnim.mAnimMgr) {
			if (!(mCarryAnim.mFlags & 2)) {
				mCarryAnim.startAnim(0, this);
				mAnimSpeed = 30.0f * sys->mDeltaTime;
			}
		} else if (mPelletView) {
			mPelletView->view_start_carrymotion();
		}

		Vector3f vec2;
		Vector3f vec1;
		int ySign;

		if (mDynamicType != 2) {
			getYVector(vec1);
		}

		getYVector(vec2);
		vec2 *= 4.0f;

		if (getFace() == 0) {
			mRigid.mConfigs[0].mPosition += vec2;
		} else {
			mRigid.mConfigs[0].mPosition -= vec2;
		}

		DynParticle* particle = mDynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->_00.y -= 4.0f;
			} else {
				particle->_00.y += 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->mNext);
		}

		if (mPickFlags & 2) {
			sound_otakaraEventRestart();
		} else {
			sound_otakaraEventStart();
			mPickFlags |= 2;
		}
		mPickFlags |= 1;
	}
}

/*
 * --INFO--
 * Address:	8016B344
 * Size:	00017C
 */
void Pellet::endPick(bool b)
{
	if (mPickFlags & 1) {
		mPelletCarry->reset();
		mCarryColor = 5;
		sound_otakaraEventStop();

		if (!b) {
			if (mCarryAnim.mAnimMgr) {
				mCarryAnim.mFlags |= 2;
			} else if (mPelletView) {
				mPelletView->view_finish_carrymotion();
			}
			if (mConfig->mParams.mCode.mData & 1) {
				shadowOff();
			}
		}

		mPickFlags &= ~0x1;

		Vector3f yVec;
		if (mDynamicType != 2) {
			getYVector(yVec);
		}

		DynParticle* particle = mDynParticle;
		while (particle) {
			if (getFace() == 0) {
				particle->_00.y += 4.0f;
			} else {
				particle->_00.y -= 4.0f;
			}
			particle = static_cast<DynParticle*>(particle->mNext);
		}
	}
}

/*
 * --INFO--
 * Address:	8016B4C4
 * Size:	00000C
 */
void Pellet::clearDiscoverDisable() { mDiscoverDisable = 0; }

/*
 * --INFO--
 * Address:	8016B4D0
 * Size:	000008
 */
void Pellet::startDiscoverDisable(u8 start) { mDiscoverDisable = start; }

/*
 * --INFO--
 * Address:	8016B4D8
 * Size:	000018
 */
void Pellet::updateDiscoverDisable()
{
	if (mDiscoverDisable == 0) {
		return;
	}
	mDiscoverDisable--;
}

/*
 * --INFO--
 * Address:	8016B4F0
 * Size:	00002C
 */
bool Pellet::discoverDisabled()
{
	if (gameSystem->isStoryMode()) {
		return mDiscoverDisable > 0;
	}
	return false;
}

/*
 * --INFO--
 * Address:	8016B51C
 * Size:	00002C
 */
void Pellet::doSave(Stream& stream) { stream.writeByte((u8)mIsCaptured); }

/*
 * --INFO--
 * Address:	8016B548
 * Size:	0001DC
 */
void Pellet::doLoad(Stream& stream)
{
	u8 byte     = stream.readByte();
	mIsCaptured = byte != 0;

	Vector3f pelletPosition = getPosition();
	WPSearchArg arg(pelletPosition, nullptr, false, 10.0f);
	WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(arg);

	bool isOnyonNearest = false;
	for (int i = 0; i < 3; i++) {
		Onyon* onyon = ItemOnyon::mgr->getOnyon(i);
		if (onyon != nullptr && wayPoint == onyon->mGoalWayPoint) {
			isOnyonNearest = true;
		}
	}
	if (ItemOnyon::mgr->mUfo->mGoalWayPoint == wayPoint) {
		isOnyonNearest = true;
	}

	if (isOnyonNearest) {
		WPExcludeSpot exclude;
		WPSearchArg arg(pelletPosition, &exclude, false, 10.0f);
		WayPoint* wayPoint = mapMgr->mRouteMgr->getNearestWayPoint(arg);
		if (wayPoint != nullptr) {
			Vector3f newPosition = wayPoint->getPosition();
			f32 y                = 0.5f * mConfig->mParams.mHeight.mData;
			newPosition.y += y;
			setPosition(newPosition, false);
		}
	}
}

/*
 * --INFO--
 * Address:	8016B724
 * Size:	0000F4
 */
void Pellet::onStartCapture()
{
	Vector3f captureVec;
	mCaptureMatrix->getTranslation(captureVec);
	mRigid.mConfigs[0].mVelocity = Vector3f(0.0f);
	mRigid.mConfigs[0].mPosition = captureVec;
	mLodSphere.mPosition         = captureVec;
	mPelletPosition              = captureVec;

	if (mModel) {
		mBaseTrMatrix.makeT(mPelletPosition);
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);

		mScale.setVec(mModel->mJ3dModel->mModelScale);
		mModel->mJ3dModel->calc();

		if (mCollTree) {
			mCollTree->update();
		}
	}
	shadowOff();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
// void Pellet::getCurrentBuryDepth()
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
	if (mCarryAnim.mAnimMgr) {
		mCarryAnim.animate(0.0f);
	}

	SysShape::Model* model = mModel;
	if (model) {
		J3DMtxCalcAnmBase* calc = static_cast<J3DMtxCalcAnmBase*>(mCarryAnim.getCalc());
		J3DJoint* joint         = model->mJ3dModel->mModelData->mJointTree.mJoints[0];

		joint->mMtxCalc = calc;
	}

	if (mPelletView == nullptr) {
		if (mModel) {
			PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
			J3DModel* j3dModel = mModel->mJ3dModel;
			mScale.setVec(mModel->mJ3dModel->mModelScale);
			mModel->mJ3dModel->calc();
			mCollTree->update();
		}
	} else {
		mCollTree->update();
	}

	if (!mPelletFlag) {
		mDiscoverDisable = 90;
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
	PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView);
	mIsCaptured = 1;
	shadowOn();
	setPosition(mRigid.mConfigs[0].mPosition, false);
	createKiraEffect(mPelletPosition);
	if (mDynamicType == 2) {
		PSMTXIdentity(mtx.mMatrix.mtxView);
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
	mConfigList = PelletList::Mgr::getConfigList(kind);
	int count   = mConfigList->mConfigCnt;
	mEntries    = count;

	mModelData  = new J3DModelData*[count];
	mAnimMgr    = new SysShape::AnimMgr*[count];
	mCollParts  = new CollPart*[count];
	mIsUsedList = new bool[count];

	for (int i = 0; i < count; i++) {
		if (PelletMgr::mDebug) {
			mIsUsedList[i] = true;
		} else {
			mIsUsedList[i] = false;
		}
	}

	for (int j = 0; j < count; j++) {
		mModelData[j] = nullptr;
		mAnimMgr[j]   = nullptr;
		mCollParts[j] = nullptr;
	}

	mModelMgr = nullptr;
}

/*
 * --INFO--
 * Address:	8016BD88
 * Size:	000030
 */
PelletConfig* BasePelletMgr::getPelletConfig(int i)
{
	if (i < 0 || i >= mConfigList->mConfigCnt) {
		return nullptr;
	}
	return &mConfigList->mConfigs[i];
}

/*
 * --INFO--
 * Address:	8016BDB8
 * Size:	00007C
 */
void BasePelletMgr::setUse(int i)
{
	P2ASSERTBOUNDSLINE(4419, 0, i, mEntries);
	mIsUsedList[i] = true;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
bool BasePelletMgr::used(int i)
{
	bool validIndex = false;
	if (i >= 0 && i < mEntries) {
		validIndex = true;
	}
	P2ASSERTBOUNDSLINE(4425, 0, validIndex, mEntries);
	return validIndex;
}

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

	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
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

	for (int i = 0; i < mConfigList->mConfigCnt; i++) {

		PelletConfig* config   = &mConfigList->mConfigs[i];
		JKRArchive* archive    = nullptr;
		config->mParams.mIndex = i;
		char* archiveName      = config->mParams.mArchive.mData;
		if (strcmp("null", archiveName)) {
			sprintf(buffer2, "%s%s", file, config->mParams.mArchive.mData);
			archive = JKRArchive::mount(buffer2, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
		}

		J3DModelData* data = nullptr;

		if (strcmp("null", config->mParams.mBmd.mData) == 0) {
			mModelData[i] = nullptr;
		} else {
			sprintf(buffer2, "%s", config->mParams.mBmd.mData);

			void* resource = JKRFileLoader::getGlbResource(buffer2, nullptr);
			if (resource == nullptr) {
				JUT_PANICLINE(4560, "meck ** %s : is not foun !\n", buffer2);
			}

			u32 flags = 0x21020010;
			if (config->mParams.mCode.mData & 2) {
				flags |= 0x20;
			}

			data = J3DModelLoaderDataBase::load(resource, flags);

			if (config->mParams.mCode.mData & 2) {
				for (u16 i = 0; i < data->mShapeTable.mCount; i++) {
					data->mShapeTable.mItems[i]->mFlags = data->mShapeTable.mItems[i]->mFlags & 0xFFFF0FFF | 0x2000;
				}
			}

			mModelData[i] = data;
		}

		if (config->mParams.mAnimMgr.mData) {
			sprintf(buffer2, "%s%s", file, config->mParams.mAnimMgr.mData);
			mAnimMgr[i] = SysShape::AnimMgr::load(buffer2, data, archive);
		}

		if (config->mParams.mColltree.mData) {
			sprintf(buffer2, "%s%s", file, config->mParams.mColltree.mData);
			mCollParts[i] = CollPartFactory::load(buffer2);
		}
	}
}

/*
 * --INFO--
 * Address:	8016C0CC
 * Size:	0003E4
 */
// WIP: https://decomp.me/scratch/Ltrad
void BasePelletMgr::load_texArc(char* filename)
{
	char buffer[512];
	char* directory = nullptr;

	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
		case System::LANG_JAPANESE:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "jpn");
			directory = buffer;
			break;
		case System::LANG_ENGLISH:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "us");
			directory = buffer;
			break;
		case System::LANG_FRENCH:
		case System::LANG_GERMAN:
		// case System::LANG_HOL_UNUSED:
		case System::LANG_ITALIAN:
		case System::LANG_SPANISH:
			sprintf(buffer, "/user/Abe/Pellet/%s/", "pal");
			directory = buffer;
			break;
		}
	} else {
		directory = "user/Kando/pellet/";
	}

	char path[512];
	sprintf(path, "%s%s", directory, filename);

	JKRArchive* textArc = openTextArc(path);
	JUT_ASSERTLINE(4728, textArc, "%s: not found !\n", path);

	for (int i = 0; i < mConfigList->mConfigCnt; i++) {
		PelletConfig* config = &mConfigList->mConfigs[i];

		used(i);

		if (mIsUsedList[i]) {
			config->mParams.mIndex = i;

			JKRArchive* archive = nullptr;
			if (strcmp("null", config->mParams.mArchive.mData)) {
				sprintf(path, "%s%s", directory, config->mParams.mArchive.mData);
				archive = JKRArchive::mount(path, JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
			}

			J3DModelData* data = nullptr;

			if (strcmp("null", config->mParams.mBmd.mData) == 0) {
				mModelData[i] = nullptr;
			} else {
				JUT_ASSERTLINE(4776, archive, "archive not found\n");
				sprintf(path, "%s", config->mParams.mBmd.mData);
				void* resourceLoad = JKRFileLoader::getGlbResource(path, nullptr);
				void* resource     = resourceLoad;
				if (resourceLoad == nullptr) {
					resource = archive->getResource(path);
					JUT_PANICLINE(4786, "%s : is not foun !\n", path);
				}

				if (config->mParams.mIndirectState != PelletConfig::Indirect_No) {
					u32 flags = 0x21020010;
					if (config->mParams.mCode.mData & 2) {
						flags |= 0x20;
					}
					data = J3DModelLoaderDataBase::load(resource, flags);
				} else {
					u32 flags = 0x20020010;
					if (config->mParams.mCode.mData & 2) {
						flags |= 0x20;
					}
					data = J3DModelLoaderDataBase::load(resource, flags);
				}

				mModelData[i] = data;

				if (config->mParams.mCode.mData & 2) {
					for (u16 i = 0; i < data->mShapeTable.mCount; i++) {
						data->mShapeTable.mItems[i]->mFlags = data->mShapeTable.mItems[i]->mFlags & 0xFFFF0FFF | 0x2000;
					}
				}
			}

			if (config->mParams.mAnimMgr.mData != 0) {
				sprintf(path, "%s/%s", config->mParams.mName.mData, config->mParams.mAnimMgr.mData);
				mAnimMgr[i] = SysShape::AnimMgr::load(textArc, path, data, archive, nullptr);
				if (mAnimMgr[i] == nullptr) {
					mAnimMgr[i] = SysShape::AnimMgr::load(textArc, path, data, archive, nullptr);
				}
			}

			if (config->mParams.mColltree.mData != 0) {
				sprintf(path, "%s/%s", config->mParams.mName.mData, config->mParams.mColltree.mData);
				mCollParts[i] = CollPartFactory::load(textArc, path);
			}
		}
	}
	closeTextArc(textArc);
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
JKRArchive* BasePelletMgr::openTextArc(char* arc)
{
	char directory[512];
	char* file = nullptr;
	if (gGameConfig.mParms.mPelletMultiLang.mData != 0) {
		switch (sys->mRegion) {
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
	return JKRArchive::mount(filePath, JKRArchive::EMM_Mem, JKRHeap::sCurrentHeap, JKRArchive::EMD_Tail);
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
	if (gameSystem && gameSystem->mSection->mPlayerMode == 1) {
		modelType = 1;
	}

	mModelMgr = new SysShape::ModelMgr(mConfigList->mConfigCnt, mModelData, arg1, arg2, modelType,
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
	if (gameSystem && gameSystem->mSection->mPlayerMode == 1) {
		modelType = 1;
	}

	SysShape::Model* model;
	if (mModelMgr) {
		model = mModelMgr->createModel(modelDataIndex, arg2);
	} else {
		if (mModelData[modelDataIndex] == nullptr) {
			JUT_PANICLINE(5061, "bpmgr:no modelData!%d\n", modelDataIndex);
		}
		model = new SysShape::Model(mModelData[modelDataIndex], 0, modelType);
		model->mJ3dModel->newDifferedTexMtx(TexDiff_0);
	}
	return model;
}

/*
 * --INFO--
 * Address:	8016C7E4
 * Size:	000158
 */
void BasePelletMgr::setCollTree(Pellet* pellet, int partIndex)
{
	SysShape::Model* pelletModel = pellet->mModel;

	if (pelletModel == nullptr) {
		SysShape::Model* pelletViewModel = pellet->mPelletView->viewGetShape();
		Sys::Sphere sphere(Vector3f::zero, pellet->mConfig->mParams.mPRadius.mData);
		pellet->mCollTree->createSingleSphere(pelletViewModel, pellet->mPelletView->viewGetCollTreeJointIndex(), sphere, &mCollPartMgr);

		CollPart* part = pellet->mCollTree->mPart;
		if (part) {
			part->mOffset = pellet->mPelletView->viewGetCollTreeOffset();
		}
	} else {
		CollPart* part = mCollParts[partIndex];
		if (part) {
			pellet->mCollTree->createFromFactory(pelletModel, (CollPartFactory*)part, &mCollPartMgr);
			return;
		}

		Sys::Sphere sphere(Vector3f::zero, pellet->mConfig->mParams.mRadius.mData);
		pellet->mCollTree->createSingleSphere(pelletModel, 0, sphere, &mCollPartMgr);
	}
}

/*
 * --INFO--
 * Address:	8016C93C
 * Size:	000024
 */
GenPelletParm* BasePelletMgr::generatorNewPelletParm() { return reinterpret_cast<GenPelletParm*>(::operator new(4)); }

/*
 * --INFO--
 * Address:	8016C960
 * Size:	000008
 */
J3DModelData* BasePelletMgr::generatorGetShape(GenPelletParm*) { return nullptr; }

/*
 * --INFO--
 * Address:	8016C968
 * Size:	000018
 */
PelletIterator::PelletIterator()
{
	_00    = 0;
	mNode  = nullptr;
	mIndex = 0;
	mMgr   = nullptr;
}

/*
 * --INFO--
 * Address:	8016C980
 * Size:	00004C
 */
void PelletIterator::first()
{
	mNode = static_cast<TObjectNode<GenericObjectMgr>*>(pelletMgr->mNode.mChild);
	if (mNode) {
		mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
	} else {
		mMgr = nullptr;
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
	P2ASSERTLINE(5197, mMgr);
	return mMgr->getObjectPtr((void*)mIndex);
}

/*
 * --INFO--
 * Address:	8016CA34
 * Size:	0000C0
 */
void PelletIterator::next()
{
	if (_00 == 0) {
		mIndex = (int)mMgr->getNext((void*)mIndex);
	} else {
		JUT_PANICLINE(5206, "manda!\n");
	}

	if (mIndex == (u32)mMgr->getEnd()) {
		mNode = mNode->getNext();
		if (mNode) {
			mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
			setFirst();
			return;
		}
		mMgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	8016CAF4
 * Size:	000010
 */
bool PelletIterator::isDone() { return mMgr == nullptr; }

/*
 * --INFO--
 * Address:	8016CB04
 * Size:	000350
 */
void PelletIterator::setFirst()
{
	if (mMgr) {
		if (_00 == 0) {
			mIndex = (int)mMgr->getStart();
		} else {
			JUT_PANICLINE(5233, "manda!\n");
		}

		if (mIndex == (u32)mMgr->getEnd()) {
			mNode = mNode->getNext();
			if (mNode) {
				mMgr = (FixedSizePelletMgr<Pellet>*)mNode->mContents;
				setFirst();
				return;
			}
			mMgr = nullptr;
		}

	} else {
		mIndex = 0;
	}
}

/*
 * --INFO--
 * Address:	8016CE5C
 * Size:	0000CC
 */
PelletMgr::PelletMgr()
{
	mName              = "ペレットマネージャ"; // pellet manager
	mMovieDrawDisabled = false;
}

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

/*
 * --INFO--
 * Address:	8016D3A8
 * Size:	000080
 */
void PelletMgr::setupResources()
{
	PelletNumber::mgr->setupResources();
	PelletCarcass::mgr->setupResources();
	PelletFruit::mgr->setupResources();
	PelletOtakara::mgr->setupResources();
	PelletItem::mgr->setupResources();
}

/*
 * --INFO--
 * Address:	........
 * Size:	00050C
 * calcNearestTreasure__Q24Game9PelletMgrFR10Vector3<f>f
 */
void PelletMgr::calcNearestTreasure(Vector3f&, f32)
{
	// these are here to spawn the weak functions from these templates
	Iterator<PelletOtakara::Object> iterOta(PelletOtakara::mgr);
	CI_LOOP(iterOta) { }
	Iterator<PelletItem::Object> iterItem(PelletItem::mgr);
	CI_LOOP(iterItem) { }
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8016D4C0
 * Size:	00021C
 */
Pellet* PelletMgr::birth(PelletInitArg* arg)
{
	P2ASSERTBOOLLINE(5394, arg && arg->mPelletType != 255);

	BasePelletMgr* mgr = getMgrByID(arg->mPelletType);
	P2ASSERTLINE(5396, mgr);

	PelletConfig* config;
	if (!gameSystem->isZukanMode() && !gameSystem->isVersusMode() && !PelletMgr::mDebug && !arg->_17) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
		if (strcmp("yes", config->mParams.mUnique.mData) == 0) {
			int unk = arg->mPelletIndex;
			if (arg->mPelletType == PelletList::OTAKARA) {
				u8* result = playData->mZukanStat->mOtakara(unk);
				if (*result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return nullptr;
				}
			} else if (arg->mPelletType == PelletList::ITEM) {
				u8* result = playData->mZukanStat->mItem(unk);
				if (*result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return nullptr;
				}
			}
		}
	}

	Pellet* pellet;
	if (arg->mFromEnemy) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
		pellet = mgr->birthFromTeki(config);
		if (pellet) {
			mgr->setComeAlive(pellet->mSlotIndex);
			arg->_1C = 1;
			pellet->init(arg);
			return pellet;
		}
		return nullptr;
	} else {
		pellet = mgr->birth();
		if (pellet) {
			pellet->mPelletView = arg->mPelView;
			pellet->mMgr        = mgr;
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
	P2ASSERTBOOLLINE(5531, arg && arg->mPelletType != 255);

	BasePelletMgr* mgr = getMgrByID(arg->mPelletType);
	P2ASSERTLINE(5533, mgr);

	PelletConfig* config;
	if (!gameSystem->isZukanMode() && !arg->_17) {
		config = mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
		if (strcmp("yes", config->mParams.mUnique.mData) == 0) {
			int unk = arg->mPelletIndex;
			if (arg->mPelletType == PelletList::OTAKARA) {
				u8* result = playData->mZukanStat->mOtakara(unk);
				if (*result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return false;
				}
			} else if (arg->mPelletType == PelletList::ITEM) {
				u8* result = playData->mZukanStat->mItem(unk);
				if (*result & 2) {
					mgr->mConfigList->getPelletConfig(arg->mTextIdentifier);
					return false;
				}
			}
		}
	}

	int index = arg->mPelletIndex;
	P2ASSERTBOUNDSLINE(4419, 0, index, mgr->mEntries);
	mgr->mIsUsedList[index] = true;
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
	if (mValue == 0) {
		return true;
	}

	u8 code = mValue >> 8;
	mgr     = nullptr;
	if (code == 3) {
		mgr = PelletOtakara::mgr;
	} else if (code == 4) {
		mgr = PelletItem::mgr;
	}

	JUT_ASSERTLINE(5574, mgr, "illegal code (%x)\n", mValue);

	code = mValue;
	if ((mValue & 0xFF) < 0 || code >= mgr->mConfigList->mConfigCnt) {
		config = nullptr;
	} else {
		config = mgr->mConfigList->mConfigs + code;
	}

	JUT_ASSERTLINE(5578, config, "illegal code no config found (%x) index %d\n", mValue, code);

	if (strcmp("yes", config->mParams.mUnique.mData) == 0) {
		u8 code = mValue;
		if ((u8)(mValue >> 8) == 3) {
			u8* result = playData->mZukanStat->mOtakara(code);
			if (*result & 2) {
				return true;
			}
		} else {
			u8* result = playData->mZukanStat->mItem(code);
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
	PelletConfig* otakaraConfig = mgr->mConfigList->getPelletConfig(identifier);
	PelletConfig* config        = otakaraConfig;

	if (otakaraConfig == nullptr) {
		mgr    = PelletItem::mgr;
		config = mgr->mConfigList->getPelletConfig(identifier);
	}

	JUT_ASSERTLINE(5614, config, "no config found(%s)\n", identifier);

	arg.mTextIdentifier = identifier;
	arg.mPelletType     = mgr->getMgrID();
	arg.mPelletIndex    = config->mParams.mIndex;
	arg.mPelView        = 0;

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
	if (gameSystem != nullptr && gameSystem->isVersusMode()) {
		if (strcmp(VsOtakaraName::cBedamaYellow, name) == 0) {
			arg.mMinCarriers = 1;
			arg.mMaxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cBedamaRed, name) == 0) {
			arg.mMinCarriers = 1;
			arg.mMaxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cBedamaBlue, name) == 0) {
			arg.mMinCarriers = 1;
			arg.mMaxCarriers = 8;
		} else if (strcmp(VsOtakaraName::cCoin, name) == 0) {
			arg.mMinCarriers = 1;
			arg.mMaxCarriers = 1;
		}
	}
}

/*
 * --INFO--
 * Address:	8016DB90
 * Size:	0002EC
 */
bool PelletMgr::makePelletInitArg(PelletInitArg& arg, PelletMgr::OtakaraItemCode& itemCode)
{
	if (itemCode.isNull()) {
		return false;
	}

	BasePelletMgr* mgr;
	PelletConfig* config;

	u8 code = itemCode.mValue >> 8;
	mgr     = nullptr;
	if (code == 3) {
		mgr = PelletOtakara::mgr;
	} else if (code == 4) {
		mgr = PelletItem::mgr;
	}

	JUT_ASSERTLINE(5672, mgr, "illegal code (%x)\n", itemCode.mValue);

	code = itemCode.mValue;
	if ((itemCode.mValue & 0xFF) < 0 || code >= mgr->mConfigList->mConfigCnt) {
		config = nullptr;
	} else {
		config = mgr->mConfigList->mConfigs + code;
	}

	JUT_ASSERTLINE(5676, config, "illegal code no config found (%x) index %d\n", itemCode.mValue, code);

	arg.mTextIdentifier = config->mParams.mName.mData;
	arg.mPelletType     = itemCode.mValue >> 8;
	arg.mPelletIndex    = itemCode.mValue & 0xFF;
	arg.mPelView        = 0;
	makeVsCarryMinMax(arg, arg.mTextIdentifier);
	return true;
}

/*
 * --INFO--
 * Address:	8016DE7C
 * Size:	000060
 */
void PelletMgr::makeOtakaraItemCode(char* configName, OtakaraItemCode& code)
{
	PelletList::cKind kind;
	PelletConfig* config = PelletList::Mgr::getConfigAndKind(configName, kind);
	if (config) {
		code.mValue = (kind << 8 & 0xFF00) + (u8)config->mParams.mIndex;
	} else {
		code.mValue = 0;
	}
}

/*
 * --INFO--
 * Address:	8016DEDC
 * Size:	000034
 */
void PelletMgr::OtakaraItemCode::read(Stream& stream) { mValue = stream.readShort(); }

/*
 * --INFO--
 * Address:	8016DF10
 * Size:	000060
 */
void PelletMgr::OtakaraItemCode::write(Stream& stream)
{
	stream.textWriteTab(stream.mTabCount);
	stream.writeShort(mValue);
	stream.textWriteText("# お宝アイテムコード\r\n"); // 'treasure item code'
}

/*
 * --INFO--
 * Address:	8016DF70
 * Size:	00006C
 */
void PelletMgr::addMgr(BasePelletMgr* mgr)
{
	TObjectNode<GenericObjectMgr>* node = new TObjectNode<GenericObjectMgr>;
	node->mContents                     = mgr;
	mNode.add(node);
}

/*
 * --INFO--
 * Address:	8016DFDC
 * Size:	0001E4
 */
void PelletMgr::doAnimation()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { (*iter)->doAnimation(); }
}

/*
 * --INFO--
 * Address:	8016E20C
 * Size:	0001E4
 */
void PelletMgr::doEntry()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { (*iter)->doEntry(); }
}

/*
 * --INFO--
 * Address:	8016E3F0
 * Size:	0001F4
 */
void PelletMgr::doSetView(int viewportNumber)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { (*iter)->doSetView(viewportNumber); }
}

/*
 * --INFO--
 * Address:	8016E5E4
 * Size:	0001E4
 */
void PelletMgr::doViewCalc()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { (*iter)->doViewCalc(); }
}

/*
 * --INFO--
 * Address:	8016E7C8
 * Size:	0001F4
 */
void PelletMgr::doSimulation(f32 constraint)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { (*iter)->doSimulation(constraint); }
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
	CI_LOOP(iter) { (*iter)->doSimpleDraw(viewport); }
}

/*
 * --INFO--
 * Address:	8016EBB4
 * Size:	0001D4
 */
void PelletMgr::setupSoundViewerAndBas()
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter) { *iter; }
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
	P2ASSERTLINE(5881, mgr);
	PelletConfig* config = mgr->getPelletConfig(idx);
	P2ASSERTLINE(5883, config);
	return config->mParams.mName.mData;
}

/*
 * --INFO--
 * Address:	8016EE5C
 * Size:	000270
 */
int PelletMgr::getCaveID(char* name)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		BasePelletMgr* mgr = (BasePelletMgr*)*iter;

		for (int i = 0; i < mgr->mConfigList->mConfigCnt; i++) {
			PelletConfig* config = mgr->getPelletConfig(i);
			char* currName       = mgr->getPelletConfig(i)->mParams.mName.mData;

			if (!strncmp(currName, name, strlen(name))) {
				int id = (mgr->getMgrID() << 24);
				id |= i;
				return id;
			}
		}
	}
	return -1;
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
BasePelletMgr* PelletMgr::getMgrByID(u8 id)
{
	Iterator<GenericObjectMgr> iter(this);
	CI_LOOP(iter)
	{
		GenericObjectMgr* genMgr = iter.mContainer->get(iter.mIndex);
		BasePelletMgr* mgr       = static_cast<BasePelletMgr*>(genMgr);
		if (mgr->getMgrID() == id) {
			return mgr;
		}
	}
	return nullptr;
}

} // namespace Game
