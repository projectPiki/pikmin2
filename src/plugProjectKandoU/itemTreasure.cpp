#include "Game/Entities/ItemTreasure.h"
#include "Game/GameSystem.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/PikiMgr.h"
#include "efx/TOtakara.h"
#include "Dolphin/rand.h"
#include "PSM/WorkItem.h"
#include "VsOtakaraName.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "nans.h"

// Don't be fooled by this files name, it is NOT related to actual treasures, those are pellets/otakara
// ItemTreasure is specifically for buried treasures, its an invisible object that effectively holds
// the actual treasure in place until you kill, where the treasure becomes freed
// Why they handled buried treasures this way is beyond me

static const char UNUSED_1[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
static const char name[]     = "itemTreasure";

namespace Game {
namespace ItemTreasure {

Mgr* mgr;

/**
 * @note Address: 0x801F316C
 * @note Size: 0x84
 */
void FSM::init(Item* item)
{
	create(1);
	registerState(new NormalState);
}

/**
 * @note Address: 0x801F31F0
 * @note Size: 0xC
 */
void NormalState::init(Item* item, StateArg*) { item->mAnimSpeed = 0.0f; }

/**
 * @note Address: 0x801F31FC
 * @note Size: 0x4
 */
void NormalState::exec(Item*) { }

/**
 * @note Address: 0x801F3200
 * @note Size: 0x4
 */
void NormalState::cleanup(Item*) { }

/**
 * @note Address: 0x801F3204
 * @note Size: 0x3C8
 */
void NormalState::onDamage(Item* item, f32 damage)
{
	if (gameSystem->isFlag(GAMESYS_IsGameWorldActive) && gameSystem->isStoryMode() && !playData->isDemoFlag(DEMO_Whites_Digging)) {
		f32 depth = item->mPellet->getBuryDepth();
		f32 max   = item->mPellet->getBuryDepthMax();

		// if fully buried, do the whole Whites Can See Buried Things cutscene
		if (max == depth) {
			playData->setDemoFlag(DEMO_Whites_Digging);
			MoviePlayArg arg("x14_white_dig", nullptr, nullptr, 0);
			Iterator<Piki> itPiki(pikiMgr);
			CI_LOOP(itPiki)
			{
				Piki* piki = *itPiki;
				if (piki->getKind() == White) {
					piki->movie_begin(false);
				}
			}
			item->movie_begin(false);
			arg.mOrigin                = item->mPellet->getPosition();
			arg.mAngle                 = item->mPellet->getFaceDir();
			moviePlayer->mTargetObject = item->mPellet;
			moviePlayer->play(arg);
		}
	}

	item->mInstantDamage += damage;
	item->mCurrStageLife -= item->mInstantDamage;
	item->mInstantDamage = 0.0f;

	f32 maxlife  = item->getCurrMaxLife();
	f32 depthmax = item->mPellet->getBuryDepthMax();

	item->mTotalLife = -((depthmax * 0.25f) * (damage / maxlife) - item->mTotalLife);

	if (item->mCurrStageLife <= 0.0f) {
		item->mSoundObj->startSound(PSSE_EV_TREASURE_RISE_UP, 0);
		item->setLife();
	}

	if (item->mTotalLife <= 0.0f) {
		item->mTotalLife = 0.0f;
		item->releasePellet();
	}
}

/**
 * @note Address: 0x801F35CC
 * @note Size: 0x298
 */
void Item::releasePellet()
{
	if (mPellet) {
		mPellet->endCapture();
		TexCaster::Caster* caster = mPellet->mCaster;
		if (caster) {
			caster->fadein(0.5f);
		}

		f32 scale = mPellet->getPickRadius();

		efx::ArgScale arg(mPosition, scale);
		efx::TOtakaraAp efx;
		efx.create(&arg);

		mSoundObj->startSound(PSSE_EV_TREASURE_JUMP_OUT, 0);

		Vector3f velocity;
		velocity.x = 10.0f * (randFloat() - 0.5f);
		velocity.z = 10.0f * (randFloat() - 0.5f);
		velocity.y = 150.0f;

		mPellet->setVelocity(velocity);

		if (gameSystem->isVersusMode()) {
			f32 test = randFloat() * 3.0f;
			GameMessageVsBirthTekiTreasure mesg;
			mesg.mPosition       = mPosition;
			mesg.mDoSetExitTimer = false;
			mesg.mTekiBirthNum   = (int)test + 1;
			gameSystem->mSection->sendMessage(mesg);
		}

		mSoundEvent.finish();

		P2ASSERTLINE(327, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventFinish();

		setAlive(false);
		mPellet = nullptr;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
Item::Item()
    : WorkItem(OBJTYPE_Treasure)
{
	mMass               = 0.0f;
	mDummyShape.mMatrix = &mBaseTrMatrix;
	mPellet             = nullptr;
}

/**
 * @note Address: 0x801F3864
 * @note Size: 0x48
 */
void Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/**
 * @note Address: 0x801F38AC
 * @note Size: 0x80
 */
void Item::onInit(CreatureInitArg*)
{
	mModel = nullptr;
	mFsm->start(this, 0, nullptr);
	setAlive(true);
	mCollTree->createSingleSphere(&mDummyShape, 0, mBoundingSphere, nullptr);
}

/**
 * @note Address: 0x801F3960
 * @note Size: 0x44
 */
void Item::onSetPosition()
{
	updateBoundSphere();
	mBaseTrMatrix.makeT(mPosition);
}

/**
 * @note Address: 0x801F39A4
 * @note Size: 0x48
 */
void Item::updateBoundSphere()
{
	f32 rad                   = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = rad;
}

/**
 * @note Address: 0x801F39EC
 * @note Size: 0x180
 */
void Item::doAI()
{
	mFsm->exec(this);
	mBoundingSphere.mRadius = getWorkRadius();
	updateCollTree();
	CollPart* part = mCollTree->mPart;
	part->mRadius  = getWorkRadius();

	if (mPellet) {
		f32 halfMax = (mPellet->getBuryDepthMax() * 0.5f);
		f32 depth   = halfMax - mTotalLife;

		Matrixf mtx;
		PSMTXCopy(mPellet->mBaseTrMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView);
		mtx.mMatrix.structView.ty = depth;
		mtx.mMatrix.structView.tx = 0.0f;
		mtx.mMatrix.structView.tz = 0.0f;
		mPellet->updateCapture(mtx);

		if (mTotalLife >= mPellet->getBuryDepthMax()) {
			mPellet->mLod.resetFlag(AILOD_IsVisible | AILOD_IsVisVP0 | AILOD_IsVisVP1);
		}
		mPellet->mDepth = mTotalLife;
	}

	if (isAlive()) {
		int state = mSoundEvent.update();
		switch (state) {
		case TSE_ApplyTransition:
			P2ASSERTLINE(406, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
			break;
		}
	}
}

/**
 * @note Address: 0x801F3B6C
 * @note Size: 0x50
 */
void Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	gfx.drawSphere(mBoundingSphere.mPosition, mBoundingSphere.mRadius);
}

/**
 * @note Address: 0x801F3BBC
 * @note Size: 0x11C
 */
bool Item::getVectorField(Sys::Sphere& bounds, Vector3f& pos)
{
	Vector3f diff = mPosition - bounds.mPosition;
	f32 dist      = _normalise2(diff); // needs tweaking

	if (dist > getWorkRadius() + 5.0f) {
		pos = diff;
	} else {
		pos = Vector3f(0.0f);
	}
	return true;
}

/**
 * @note Address: 0x801F3CD8
 * @note Size: 0x88
 */
f32 Item::getWorkDistance(Sys::Sphere& bounds)
{
	f32 dist = Vector3f::distance(mPosition, bounds.mPosition);
	return dist - getWorkRadius();
}

/**
 * @note Address: 0x801F3D60
 * @note Size: 0xB8
 */
void Item::setTreasure(Pellet* pelt)
{
	Vector3f pos = mPosition;
	mMatrix.makeT(pos);
	mPellet = pelt;
	if (mPellet) {
		mPellet->startCapture(&mMatrix);
		mTotalLife = mPellet->getBuryDepth();
		if (gameSystem->isVersusMode() && mPellet->mPelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			mTotalLife = VsOtakaraName::cBedamaYellowDepth;
		}
		mPellet->mDepth = mTotalLife;
		setLife();
	}
}

/**
 * @note Address: 0x801F3E18
 * @note Size: 0x30
 */
void Item::setLife() { mCurrStageLife = getCurrMaxLife(); }

/**
 * @note Address: 0x801F3E48
 * @note Size: 0x98
 */
f32 Item::getCurrMaxLife()
{
	f32 depth = mPellet->getBuryDepthMax();
	f32 test  = mTotalLife / depth;

	if (test < 0.25f) {
		return mgr->mParameters->mParms.mLife3.mValue;
	} else if (test < 0.5f) {
		return mgr->mParameters->mParms.mLife2.mValue;
	} else if (test < 0.75f) {
		return mgr->mParameters->mParms.mLife1.mValue;
	} else {
		return mgr->mParameters->mParms.mLife0.mValue;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x144
 */
void Item::createTreasure()
{
	// obvs more to it than this, but this is required to generate PelletInitArg text
	PelletInitArg initArg;
	pelletMgr->makePelletInitArg(initArg, 0);
}

/**
 * @note Address: 0x801F3EE0
 * @note Size: 0x11C
 */
bool Item::interactAttack(InteractAttack& act)
{
	State* cState = mCurrentState;
	if (cState) {
		cState->onDamage(this, act.mDamage);

		int id = mSoundEvent.event();
		switch (id) {
		case 1:
			P2ASSERTLINE(555, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
			break;
		case 3:
			P2ASSERTLINE(561, mSoundObj->getCastType() == PSM::CCT_WorkItem);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
			break;
		}
	}
	return true;
}

/**
 * @note Address: 0x801F4000
 * @note Size: 0x58
 */
f32 Item::getWorkRadius()
{
	if (!mPellet) {
		return 10.0f;
	}

	return mPellet->getBuryRadius(1.0f - mTotalLife / mPellet->getBuryDepthMax());
}

/**
 * @note Address: 0x801F4058
 * @note Size: 0x60
 */
bool Item::isVisible() { return (!mPellet) ? false : !(mTotalLife / mPellet->getBuryDepthMax() > 0.85f); }

/**
 * @note Address: 0x801F40B8
 * @note Size: 0xB0
 */
bool Item::ignoreAtari(Creature* obj)
{
	bool check;
	if (!mPellet) {
		check = false;
	} else if (mTotalLife / mPellet->getBuryDepthMax() > 0.85f) {
		check = false;
	} else {
		check = true;
	}

	if (!check) {
		Piki* piki = static_cast<Piki*>(obj);
		if (piki->isPiki() && piki->getKind() == White) {
			return false;
		} else {
			return true;
		}
	} else {
		return false;
	}
	return false;
}

/**
 * @note Address: 0x801F4168
 * @note Size: 0x114
 */
Mgr::Mgr()
{
	mItemName            = "Treasure";
	mObjectPathComponent = "user/Kando/objects/treasure";
	mParameters          = new TreasureParms;

	void* file = JKRDvdRipper::loadToMainRAM("user/Abe/item/treasureParms.txt", nullptr, (JKRExpandSwitch)0, 0, nullptr,
	                                         (JKRDvdRipper::EAllocDirection)2, 0, nullptr, nullptr);
	if (file) {
		RamStream stm(file, -1);
		stm.setMode(STREAM_MODE_TEXT, 1);
		mParameters->read(stm);
		delete[] file;
	}
}

/**
 * @note Address: 0x801F4540
 * @note Size: 0x130
 */
BaseItem* Mgr::birth()
{
	Item* item = new Item;
	entry(item);
	return item;
}

/**
 * @note Address: 0x801F4670
 * @note Size: 0x60
 */
BaseItem* Mgr::generatorBirth(Vector3f& pos, Vector3f&, GenItemParm*)
{
	BaseItem* item = birth();
	item->init(nullptr);
	item->setPosition(pos, false);
	return item;
}

/**
 * @note Address: 0x801F46D0
 * @note Size: 0x4
 */
void Mgr::onLoadResources() { }
} // namespace ItemTreasure
} // namespace Game
