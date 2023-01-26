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

ItemTreasure::Mgr* ItemTreasure::mgr;

/*
 * --INFO--
 * Address:	801F316C
 * Size:	000084
 */
void ItemTreasure::FSM::init(ItemTreasure::Item* item)
{
	create(1);
	registerState(new NormalState);
}

/*
 * --INFO--
 * Address:	801F31F0
 * Size:	00000C
 */
void ItemTreasure::NormalState::init(ItemTreasure::Item* item, Game::StateArg*) { item->mAnimSpeed = 0.0f; }

/*
 * --INFO--
 * Address:	801F31FC
 * Size:	000004
 */
void ItemTreasure::NormalState::exec(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F3200
 * Size:	000004
 */
void ItemTreasure::NormalState::cleanup(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F3204
 * Size:	0003C8
 */
void ItemTreasure::NormalState::onDamage(ItemTreasure::Item* item, f32 damage)
{
	if (gameSystem->mFlags & GAMESYS_Unk6 && gameSystem->mMode == GSM_STORY_MODE && !playData->isDemoFlag(DEMO_Whites_Digging)) {
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
				if ((int)piki->mPikiKind == White) {
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

/*
 * --INFO--
 * Address:	801F35CC
 * Size:	000298
 */
void ItemTreasure::Item::releasePellet()
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
		velocity.y = 15.0f;

		mPellet->setVelocity(velocity);

		if (gameSystem->isVersusMode()) {
			f32 test = randFloat() * 3.0f;
			GameMessageVsBirthTekiTreasure mesg;
			mesg.mPosition = mPosition;
			mesg._14       = false;
			mesg._10       = (int)test + 1;
			gameSystem->mSection->sendMessage(mesg);
		}

		mSoundEvent.finish();

		P2ASSERTLINE(327, mSoundObj->getCastType() == PSM::CCT_WorkItem);
		static_cast<PSM::WorkItem*>(mSoundObj)->eventFinish();

		setAlive(false);
		mPellet = nullptr;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
ItemTreasure::Item::Item()
    : WorkItem(OBJTYPE_Treasure)
{
	mMass               = 0.0f;
	mDummyShape.mMatrix = &mObjMatrix;
	mPellet             = nullptr;
}

/*
 * --INFO--
 * Address:	801F3864
 * Size:	000048
 */
void ItemTreasure::Item::constructor() { mSoundObj = new PSM::WorkItem(this); }

/*
 * --INFO--
 * Address:	801F38AC
 * Size:	000080
 */
void ItemTreasure::Item::onInit(CreatureInitArg*)
{
	mModel = nullptr;
	mFsm->start(this, 0, nullptr);
	setAlive(true);
	mCollTree->createSingleSphere(&mDummyShape, 0, mBoundingSphere, nullptr);
}

/*
 * --INFO--
 * Address:	801F392C
 * Size:	000034
 */
void StateMachine<Game::ItemTreasure::Item>::start(ItemTreasure::Item* item, int id, StateArg* arg)
{
	item->mCurrentState = nullptr;
	transit(item, id, arg);
}

/*
 * --INFO--
 * Address:	801F3960
 * Size:	000044
 */
void ItemTreasure::Item::onSetPosition()
{
	updateBoundSphere();
	mObjMatrix.makeT(mPosition);
}

/*
 * --INFO--
 * Address:	801F39A4
 * Size:	000048
 */
void ItemTreasure::Item::updateBoundSphere()
{
	f32 rad                   = getWorkRadius();
	mBoundingSphere.mPosition = mPosition;
	mBoundingSphere.mRadius   = rad;
}

/*
 * --INFO--
 * Address:	801F39EC
 * Size:	000180
 */
void ItemTreasure::Item::doAI()
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
		PSMTXCopy(mPellet->mObjMatrix.mMatrix.mtxView, mtx.mMatrix.mtxView);
		mtx.mMatrix.structView.ty = depth;
		mtx.mMatrix.structView.tx = 0.0f;
		mtx.mMatrix.structView.tz = 0.0f;
		mPellet->updateCapture(mtx);

		if (mTotalLife >= mPellet->getBuryDepthMax()) {
			mPellet->mLod.mFlags &= ~(AILOD_FLAG_NEED_SHADOW | AILOD_FLAG_VISIBLE_VP0 | AILOD_FLAG_VISIBLE_VP1);
		}
		mPellet->mDepth = mTotalLife;
	}

	if (isAlive()) {
		int state = mSoundEvent.update();
		switch (state) {
		case 2:
			P2ASSERTLINE(406, mSoundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStop();
			break;
		}
	}
}

/*
 * --INFO--
 * Address:	801F3B6C
 * Size:	000050
 */
void ItemTreasure::Item::doDirectDraw(Graphics& gfx)
{
	gfx.initPrimDraw(nullptr);
	gfx.drawSphere(mBoundingSphere.mPosition, mBoundingSphere.mRadius);
}

/*
 * --INFO--
 * Address:	801F3BBC
 * Size:	00011C
 */
bool ItemTreasure::Item::getVectorField(Sys::Sphere& bounds, Vector3f& pos)
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

/*
 * --INFO--
 * Address:	801F3CD8
 * Size:	000088
 */
f32 ItemTreasure::Item::getWorkDistance(Sys::Sphere& bounds)
{
	f32 dist = _distanceBetween(mPosition, bounds.mPosition);
	return dist - getWorkRadius();
}

/*
 * --INFO--
 * Address:	801F3D60
 * Size:	0000B8
 */
void ItemTreasure::Item::setTreasure(Game::Pellet* pelt)
{
	Vector3f pos = mPosition;
	mMatrix.makeT(pos);
	mPellet = pelt;
	if (mPellet) {
		mPellet->startCapture(&mMatrix);
		mTotalLife = mPellet->getBuryDepth();
		if (gameSystem->mMode == GSM_VERSUS_MODE && mPellet->mPelletFlag == Pellet::FLAG_VS_BEDAMA_YELLOW) {
			mTotalLife = VsOtakaraName::cBedamaYellowDepth;
		}
		mPellet->mDepth = mTotalLife;
		setLife();
	}
}

/*
 * --INFO--
 * Address:	801F3E18
 * Size:	000030
 */
void ItemTreasure::Item::setLife() { mCurrStageLife = getCurrMaxLife(); }

/*
 * --INFO--
 * Address:	801F3E48
 * Size:	000098
 */
f32 ItemTreasure::Item::getCurrMaxLife()
{
	f32 depth = mPellet->getBuryDepthMax();
	f32 test  = mTotalLife / depth;

	if (test < 0.25f) {
		return mgr->mParameters->mParms.mP003.mValue;
	} else if (test < 0.5f) {
		return mgr->mParameters->mParms.mP002.mValue;
	} else if (test < 0.75f) {
		return mgr->mParameters->mParms.mP001.mValue;
	} else {
		return mgr->mParameters->mParms.mP000.mValue;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000144
 */
void ItemTreasure::Item::createTreasure()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F3EE0
 * Size:	00011C
 */
bool ItemTreasure::Item::interactAttack(Game::InteractAttack& act)
{
	State* cState = mCurrentState;
	if (cState) {
		cState->onDamage(this, act.mDamage);

		int id = mSoundEvent.event();
		switch (id) {
		case 1:
			P2ASSERTLINE(555, mSoundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventStart();
			break;
		case 3:
			P2ASSERTLINE(561, mSoundObj->getCastType() == 10);
			static_cast<PSM::WorkItem*>(mSoundObj)->eventRestart();
			break;
		}
	}
	return true;
}

/*
 * --INFO--
 * Address:	801F4000
 * Size:	000058
 */
f32 ItemTreasure::Item::getWorkRadius()
{
	if (!mPellet) {
		return 10.0f;
	}

	return mPellet->getBuryRadius(1.0f - mTotalLife / mPellet->getBuryDepthMax());
}

/*
 * --INFO--
 * Address:	801F4058
 * Size:	000060
 */
bool ItemTreasure::Item::isVisible() { return (!mPellet) ? false : !(mTotalLife / mPellet->getBuryDepthMax() > 0.85f); }

/*
 * --INFO--
 * Address:	801F40B8
 * Size:	0000B0
 */
bool ItemTreasure::Item::ignoreAtari(Game::Creature* obj)
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
		if (piki->isPiki() && (int)piki->mPikiKind == White) {
			return false;
		} else {
			return true;
		}
	} else {
		return false;
	}
	return false;
}

/*
 * --INFO--
 * Address:	801F4168
 * Size:	000114
 */
ItemTreasure::Mgr::Mgr()
{
	mItemName            = "Treasure";
	mObjectPathComponent = "user/kando/objects/treasure";
	mParameters          = new TreasureParms;

	void* file = JKRDvdRipper::loadToMainRAM("user/Abe/item/treasureParms.txt", nullptr, (JKRExpandSwitch)0, 0, nullptr,
	                                         (JKRDvdRipper::EAllocDirection)2, 0, nullptr, nullptr);
	if (file) {
		RamStream stm(file, -1);
		stm.resetPosition(true, 1);
		mParameters->read(stm);
		delete[] file;
	}
}

/*
 * --INFO--
 * Address:	801F4540
 * Size:	000130
 */
BaseItem* ItemTreasure::Mgr::birth()
{
	Item* item = new Item;
	entry(item);
	return item;
}

/*
 * --INFO--
 * Address:	801F4670
 * Size:	000060
 */
BaseItem* ItemTreasure::Mgr::generatorBirth(Vector3f& pos, Vector3f&, GenItemParm*)
{
	BaseItem* item = birth();
	item->init(nullptr);
	item->setPosition(pos, false);
	return item;
}

/*
 * --INFO--
 * Address:	801F46D0
 * Size:	000004
 */
void ItemTreasure::Mgr::onLoadResources() { }

/*
 * --INFO--
 * Address:	801F49D4
 * Size:	000004
 */
void StateMachine<ItemTreasure::Item>::init(ItemTreasure::Item*) { }

/*
 * --INFO--
 * Address:	801F49D8
 * Size:	000038
 */
void StateMachine<ItemTreasure::Item>::exec(ItemTreasure::Item* item)
{
	if (item->mCurrentState) {
		item->mCurrentState->exec(item);
	}
}

/*
 * --INFO--
 * Address:	801F4A10
 * Size:	000064
 */
void StateMachine<ItemTreasure::Item>::create(int count)
{
	mLimit          = count;
	mCount          = 0;
	mStates         = new FSMState<ItemTreasure::Item>*[mLimit];
	mIndexToIDArray = new int[mLimit];
	mIdToIndexArray = new int[mLimit];
}

/*
 * --INFO--
 * Address:	801F4A74
 * Size:	00009C
 */
void StateMachine<ItemTreasure::Item>::transit(ItemTreasure::Item* obj, int id, StateArg* arg)
{
	int index                  = mIdToIndexArray[id];
	ItemTreasure::State* state = obj->mCurrentState;
	if (state) {
		state->cleanup(obj);
		mCurrentID = state->mId;
	}

	ASSERT_HANG(index < mLimit);

	state              = static_cast<ItemTreasure::State*>(mStates[index]);
	obj->mCurrentState = state;
	state->init(obj, arg);
}

/*
 * --INFO--
 * Address:	801F4B10
 * Size:	000084
 */
void StateMachine<ItemTreasure::Item>::registerState(FSMState<Game::ItemTreasure::Item>* newState)
{
	// copied all this from enemyFSM.cpp, do we actually need it here? no idea
	bool check;
	if (mCount >= mLimit) {
		return;
	}
	mStates[mCount] = newState;
	// TODO: This looks weird. How would they really have written it?
	if (!(0 <= newState->mId && newState->mId < mLimit)) {
		check = false;
	} else {
		check = true;
	}
	if (check == false) {
		return;
	}
	newState->mStateMachine        = this;
	mIndexToIDArray[mCount]        = newState->mId;
	mIdToIndexArray[newState->mId] = mCount;
	mCount++;
}

// /*
//  * --INFO--
//  * Address:	801F4B94
//  * Size:	000044
//  */
// void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::onKeyEvent(const SysShape::KeyEvent& event)
// {
// 	ItemState<ItemTreasure::Item>* state = mCurrentState;
// 	if (state) {
// 		state->onKeyEvent((ItemTreasure::Item*)this, event);
// 	}
// }

// /*
//  * --INFO--
//  * Address:	801F4BD8
//  * Size:	000044
//  */
// void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::platCallback(PlatEvent& event)
// {
// 	ItemState<ItemTreasure::Item>* state = mCurrentState;
// 	if (state) {
// 		state->onPlatCollision((ItemTreasure::Item*)this, event);
// 	}
// }

// /*
//  * --INFO--
//  * Address:	801F4C1C
//  * Size:	000044
//  */
// void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::collisionCallback(CollEvent& event)
// {
// 	ItemState<ItemTreasure::Item>* state = mCurrentState;
// 	if (state) {
// 		state->onCollision((ItemTreasure::Item*)this, event);
// 	}
// }

// /*
//  * --INFO--
//  * Address:	801F4C60
//  * Size:	000044
//  */
// void FSMItem<ItemTreasure::Item, ItemTreasure::FSM, ItemTreasure::State>::bounceCallback(Sys::Triangle* tri)
// {
// 	ItemState<ItemTreasure::Item>* state = mCurrentState;
// 	if (state) {
// 		state->onBounce((ItemTreasure::Item*)this, tri);
// 	}
// }

} // namespace Game
