#include "ebi/title/Entities/TPikmin.h"
#include "ebi/title/TTitle.h"
#include "types.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/Piki.h"
#include "nans.h"
#include "Dolphin/rand.h"

namespace ebi {
namespace title {

static const int unusedArray[]            = { 0, 0, 0 };
static const char unusedPikminTitleName[] = "ebiP2TitlePikmin";

/**
 * @note Address: N/A
 * @note Size: 0xD4
 */
Pikmin::TBoidParamMgr::TBoidParamMgr()
    : CNode("TBoidParamMgr")
{
	mCounter            = 0;
	mCounter2           = 0;
	mCurrWalkSpeed      = 0.0f;
	mCurrMaxTurnSpeed   = 0.0f;
	mCurrTurnMag        = 0.0f;
	mCurrBoidCenter     = 0.0f;
	mCurrBoidSpeedMatch = 0.0f;
	mCurrBoidColl       = 0.0f;
	mCurrGroupCenter    = 0.0f;
	mCurrBoidNeighbor   = 0.0f;

	u32 time      = 0.0f / sys->mDeltaTime;
	mCounter      = time;
	mCounter2     = time;
	mPrevState    = 0;
	mCurrentState = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
/* void Pikmin::TBoidParamMgr::startState((ebi::title::Pikmin::TBoidParamMgr::enumState, f32))
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: N/A
 * @note Size: 0x130
 */
void Pikmin::TBoidParamMgr::update()
{
	if (mCounter != 0) {
		mCounter--;
	}

	TBoidParam& param1 = mParams[mPrevState];
	TBoidParam& param2 = mParams[mCurrentState];

	f32 factor2, factor1;

	factor1 = 1.0f - ((mCounter2 != 0) ? (f32)mCounter / (f32)mCounter2 : 0.0f);
	factor2 = 1.0f - factor1;

	mCurrWalkSpeed    = factor2 * param1.mMaxWalkSpeed() + factor1 * param2.mMaxWalkSpeed();
	mCurrMaxTurnSpeed = factor2 * param1.mMaxTurnVec() + factor1 * param2.mMaxTurnVec();
	mCurrTurnMag      = factor2 * param1.mTurnMag() + factor1 * param2.mTurnMag();

	mCurrBoidCenter     = factor2 * param1.mBoidCenter() + factor1 * param2.mBoidCenter();
	mCurrBoidSpeedMatch = factor2 * param1.mBoidSpeedMatch() + factor1 * param2.mBoidSpeedMatch();
	mCurrBoidColl       = factor2 * param1.mBoidColl() + factor1 * param2.mBoidColl();

	mCurrGroupCenter  = factor2 * param1.mGroupCenter() + factor1 * param2.mGroupCenter();
	mCurrBoidNeighbor = factor2 * param1.mBoidNeighbor() + factor1 * param2.mBoidNeighbor();
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
Pikmin::TAnimator::TAnimator()
{
	mModelDataRed    = nullptr;
	mModelDataYellow = nullptr;
	mModelDataBlue   = nullptr;
	mModelDataPurple = nullptr;
	mModelDataWhite  = nullptr;
	mWaitAnim        = nullptr;
	mWaveAnim        = nullptr;
	mAnmCalcWait     = nullptr;
	mAnmCalcWave     = nullptr;
}

/**
 * @note Address: 0x803E3DE8
 * @note Size: 0x2D8
 */
void Pikmin::TAnimator::setArchive(JKRArchive* arc)
{
	void* file;
	file = arc->getResource("pikmin/title_red_piki.bmd");
	P2ASSERTLINE(176, file);
	mModelDataRed = J3DModelLoaderDataBase::load(file, 0x20100000);
	file          = arc->getResource("pikmin/title_yellow_piki.bmd");
	P2ASSERTLINE(186, file);
	mModelDataYellow = J3DModelLoaderDataBase::load(file, 0x20100000);
	file             = arc->getResource("pikmin/title_blue_piki.bmd");
	P2ASSERTLINE(196, file);
	mModelDataBlue = J3DModelLoaderDataBase::load(file, 0x20100000);
	file           = arc->getResource("pikmin/title_black_piki.bmd");
	P2ASSERTLINE(206, file);
	mModelDataPurple = J3DModelLoaderDataBase::load(file, 0x20100000);
	file             = arc->getResource("pikmin/title_white_piki.bmd");
	P2ASSERTLINE(216, file);
	mModelDataWhite = J3DModelLoaderDataBase::load(file, 0x20100000);
	file            = arc->getResource("pikmin/wait.bck");
	P2ASSERTLINE(228, file);
	mWaitAnim = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(file);
	file      = arc->getResource("pikmin/wave.bck");
	P2ASSERTLINE(233, file);
	mWaveAnim           = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(file);
	mAnmCalcWait        = J3DNewMtxCalcAnm(mModelDataRed->mJointTree.mFlags & J3DMLF_MtxTypeMask, mWaitAnim);
	mAnmCalcWave        = J3DUNewMtxCalcAnm(mModelDataRed->mJointTree.mFlags & J3DMLF_MtxTypeMask, mWaitAnim, mWaveAnim, nullptr, nullptr,
                                     (J3DMtxCalcFlag)0);
	J3DModelData* model = mModelDataBlue;
	model->doMakeShared();
	mModelDataRed->doMakeShared();
	mModelDataYellow->doMakeShared();
	mModelDataPurple->doMakeShared();
	mModelDataWhite->doMakeShared();
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void Pikmin::TAnimator::setAnmWait(J3DModel* model, f32 frame)
{
	mWaitAnim->mCurrentFrame                           = frame;
	model->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnmCalcWait;
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void Pikmin::TAnimator::setAnmWave(J3DModel* model, f32 weight, f32 frameA, f32 frameB)
{
	mWaveAnim->mCurrentFrame = frameB;
	mWaitAnim->mCurrentFrame = frameA;

	J3DMtxCalc* calc = mAnmCalcWave;
	calc->setWeight(0, 1.0f - weight);
	calc->setWeight(1, weight);

	model->mModelData->mJointTree.mJoints[0]->mMtxCalc = calc;
}

/**
 * @note Address: N/A
 * @note Size: 0x218
 */
J3DModel* Pikmin::TAnimator::newJ3DModel(s32 color)
{
	P2ASSERTBOUNDSLINE(292, 0, color, Game::AllPikmin);
	switch (color) {
	case Game::Red:
		return new J3DModel(mModelDataRed, 0x20000, 1);
	case Game::Yellow:
		return new J3DModel(mModelDataYellow, 0x20000, 1);
	case Game::Blue:
		return new J3DModel(mModelDataBlue, 0x20000, 1);
	case Game::Purple:
		return new J3DModel(mModelDataPurple, 0x20000, 1);
	case Game::White:
		return new J3DModel(mModelDataWhite, 0x20000, 1);
	}

	return nullptr;
}

/**
 * @note Address: 0x803E40C0
 * @note Size: 0x198
 */
Pikmin::TMgr::TMgr()
    : CNode("PikminMgr")
{
	mAnimator         = new TAnimator;
	mUnits            = new TUnit[TITLE_PIKI_TOTAL];
	mGroupAvgPosition = Vector2f(0.0f);
	add((CNode*)&mBoidParamMgr);
}

/**
 * @note Address: 0x803E42CC
 * @note Size: 0xD8
 */
void Pikmin::TMgr::setArchive(JKRArchive* arc)
{
	mParams.loadSettingFile(arc, "param/param_pikmin.txt");
	mAnimator->setArchive(arc);
	void* file = arc->getResource("param/param_boid.txt");
	if (file != nullptr) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, true);
		mBoidParamMgr.mParams[0].read(stream);
		mBoidParamMgr.mParams[1].read(stream);
		mBoidParamMgr.mParams[2].read(stream);
		mBoidParamMgr.mParams[3].read(stream);
		mBoidParamMgr.mParams[4].read(stream);
	}
}

/**
 * @note Address: 0x803E43A4
 * @note Size: 0x11C
 */
void Pikmin::TMgr::initUnit()
{
	for (int i = 0; i < TITLE_PIKI_TYPE_MAX; i++) {
		(mUnits[i]).init(this, Game::Blue);
	}
	for (int i = TITLE_PIKI_TYPE_MAX; i < 2 * TITLE_PIKI_TYPE_MAX; i++) {
		(mUnits[i]).init(this, Game::Red);
	}
	for (int i = 2 * TITLE_PIKI_TYPE_MAX; i < 3 * TITLE_PIKI_TYPE_MAX; i++) {
		(mUnits[i]).init(this, Game::Yellow);
	}
	for (int i = 3 * TITLE_PIKI_TYPE_MAX; i < 4 * TITLE_PIKI_TYPE_MAX; i++) {
		(mUnits[i]).init(this, Game::Purple);
	}
	for (int i = 4 * TITLE_PIKI_TYPE_MAX; i < TITLE_PIKI_TOTAL; i++) {
		(mUnits[i]).init(this, Game::White);
	}
}

/**
 * @note Address: 0x803E44C0
 * @note Size: 0x1A8
 */
void Pikmin::TMgr::update()
{
	mBoidParamMgr.update();

	updateCalcBoid_();
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		(mUnits[i]).update();
	}
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		titleMgr->inField((TObjBase*)&mUnits[i]);
	}
}

/**
 * @note Address: 0x803E4930
 * @note Size: 0xC0
 */
void Pikmin::TMgr::forceArriveDest()
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		(mUnits[i]).alive();
	}
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 0;
	u32 time                    = 0.0f / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		TUnit* unit     = &mUnits[i];
		unit->mPosition = unit->mDestPos;
		unit->startState(TUnit::STATE_Unk1);
	}
}

/**
 * @note Address: 0x803E49F0
 * @note Size: 0x88
 */
void Pikmin::TMgr::assemble()
{
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 0;
	u32 time                    = 2.0f / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].goDestination();
	}
}

/**
 * @note Address: 0x803E4A78
 * @note Size: 0x88
 */
void Pikmin::TMgr::quickAssemble()
{
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 1;
	u32 time                    = 1.0f / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].goDestination();
	}
}

/**
 * @note Address: 0x803E4B00
 * @note Size: 0x90
 */
void Pikmin::TMgr::startBoid1(f32 arg)
{
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 2;
	u32 time                    = (arg / 2) / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].startState(TUnit::STATE_Unk4);
	}
}

/**
 * @note Address: 0x803E4B90
 * @note Size: 0x90
 */
void Pikmin::TMgr::startBoid2(f32 arg)
{
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 3;
	u32 time                    = (arg / 2) / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].startState(TUnit::STATE_Unk4);
	}
}

/**
 * @note Address: 0x803E4C20
 * @note Size: 0x90
 */
void Pikmin::TMgr::startBoid3(f32 arg)
{
	mBoidParamMgr.mPrevState    = mBoidParamMgr.mCurrentState;
	mBoidParamMgr.mCurrentState = 4;
	u32 time                    = (arg / 2) / sys->mDeltaTime;
	mBoidParamMgr.mCounter      = time;
	mBoidParamMgr.mCounter2     = time;
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].startState(TUnit::STATE_Unk4);
	}
}

/**
 * @note Address: 0x803E4CB0
 * @note Size: 0x9C
 */
void Pikmin::TMgr::startWindBlow(ebi::EGEBox2f& box)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		TUnit* unit = &mUnits[i];
		if (unit->isCalc()) {
			Vector2f unitPos = Vector2f(unit->mPosition.x, unit->mPosition.y);
			if (!box.isOut(unitPos)) {
				(mUnits[i]).startState(TUnit::STATE_Unk3);
			}
		}
	}
}

/**
 * @note Address: 0x803E4D4C
 * @note Size: 0xAC
 */
void Pikmin::TMgr::startDemo()
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].alive();
	}
	quickAssemble();
}

/**
 * @note Address: 0x803E4DF8
 * @note Size: 0x6C
 */
void Pikmin::TMgr::enemyPushOut(ebi::title::TObjBase* obj)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		obj->pushOut(&mUnits[i]);
	}
}

/**
 * @note Address: 0x803E4E64
 * @note Size: 0x3B8
 */
void Pikmin::TMgr::updateCalcBoid_()
{
	// non-matching
	static int boidCalcTimer = 0;
	if (++boidCalcTimer >= 10) {
		boidCalcTimer     = 0;
		mGroupAvgPosition = Vector2f(0.0f);

		int counter = 0;
		for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
			if (mUnits[i].isCalc()) {
				mGroupAvgPosition = mGroupAvgPosition + Vector2f(mUnits[i].mPosition.x, mUnits[i].mPosition.y);
				counter++;
			}
		}

		if (counter != 0) {
			f32 norm = 1.0f / (f32)counter;
			mGroupAvgPosition *= norm;
		}
	}

	int max   = (boidCalcTimer * TITLE_PIKI_TOTAL) / 10;
	int limit = (boidCalcTimer == 9) ? TITLE_PIKI_TOTAL : (((boidCalcTimer + 1) * TITLE_PIKI_TOTAL) / 10);

	for (int i = max; i < limit; i++) {
		TUnit* unit = &mUnits[i];
		if (!unit->isWalk()) {
			continue;
		}

		f32 factor1 = mBoidParamMgr.mCurrGroupCenter;
		f32 factor2 = 1.0f - factor1;

		Vector2f goalPos = mGroupAvgPosition * factor1 + unit->mDestPos * factor2; // f31, f30
		Vector2f vec2(0.0f);
		Vector2f vec3(0.0f);
		int counter = 0;
		for (int j = 0; j < TITLE_PIKI_TOTAL; j++) {
			TUnit* curUnit = &mUnits[j];
			if (curUnit->isCalc()) {
				Vector2f sep = unit->mPosition - curUnit->mPosition;
				f32 dist     = sep.length();
				if (dist < mBoidParamMgr.mCurrBoidColl) {
					vec2 += curUnit->mAngle * curUnit->mParms[0];
					if (dist < 1.0f) {
						dist = 1.0f;
					}

					sep.normalise();

					vec3 += sep * (1.0f / SQUARE(dist));
					counter++;
				}
			}
		}

		Vector2f vec4;
		Vector2f vec5;
		if (counter == 0) {
			vec4 = Vector2f(0.0f);
			vec5 = Vector2f(0.0f);
		} else {
			vec4 = vec2 * (1.0f / (f32)counter);
			vec5 = vec3 * (1.0f / (f32)counter);
		}
		unit->mTargetPos          = goalPos;
		unit->mVelocity           = vec4;
		unit->mGroupPosDifference = vec5;
	}
}

/**
 * @note Address: 0x803E521C
 * @note Size: 0x70
 */
bool Pikmin::TMgr::isAssemble()
{

	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		TUnit* unit = &mUnits[i];
		if (!unit->isAssemble()) {
			return false;
		}
	}
	return true;
}

/**
 * @note Address: 0x803E528C
 * @note Size: 0x10
 */
Pikmin::TUnit* Pikmin::TMgr::getUnit(s32 idx) { return &mUnits[idx]; }

/**
 * @note Address: 0x803E529C
 * @note Size: 0x360
 */
void Pikmin::TUnit::init(ebi::title::Pikmin::TMgr* mgr, s32 color)
{
	mManager = mgr;
	f32 min, max;
	max = mManager->mParams.mAnimMaxWaitTime();
	min = mManager->mParams.mAnimMinWaitTime();

	mRandAnimSpeeds.x = (max - min) * randEbisawaFloat() + min;

	mModel = mManager->mAnimator->newJ3DModel(color);

	mFrameControlA.init(mManager->mAnimator->mWaitAnim->mTotalFrameCount);
	mFrameControlB.init(mManager->mAnimator->mWaveAnim->mTotalFrameCount);

	switch (sys->mRegion) {
	case System::LANG_Japanese:
		mParms[1] = mManager->mParams.mJpnScale();
		break;
	default:
		mParms[1] = mManager->mParams.mIntScale();
		break;
	}

	mParms[2] = mManager->mParams.mCollRadius();

	mFrameControlA.mFrame = 5.0f * randEbisawaFloat();
	mRandAnimSpeeds.y     = 0.8f * randEbisawaFloat() + 0.40000004f;
	mIsDead               = false;
}

/**
 * @note Address: 0x803E55FC
 * @note Size: 0x98
 */
void Pikmin::TUnit::goDestination()
{
	Vector2f Diff(mDestPos.x - mPosition.x, mDestPos.y - mPosition.y);
	f32 comp = _lenVec2D(Diff);
	if (comp < mManager->mParams.mStopDist.mValue) {
		startState(STATE_Unk1);
		return;
	}

	if (comp < mManager->mParams.mConvDist.mValue) {
		startState(STATE_Unk2);
		return;
	}
	startState(STATE_Unk2);
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
/* void Pikmin::TUnit::chaseKogane(ebi::title::TObjBase*)
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: 0x803E5694
 * @note Size: 0x6C
 */
bool Pikmin::TUnit::beAttacked()
{
	if (mIsDead) {
		return false;
	}
	mIsDead       = true;
	mCurrentState = STATE_Hidden;
	mPosition     = titleMgr->getPosOutOfViewField();
	return true;
}

/**
 * @note Address: 0x803E5700
 * @note Size: 0xC
 */
void Pikmin::TUnit::alive() { mIsDead = false; }

/**
 * @note Address: 0x803E570C
 * @note Size: 0x14
 */
bool Pikmin::TUnit::isCalc() { return (bool)(mCurrentState != STATE_Hidden); }

/**
 * @note Address: 0x803E5720
 * @note Size: 0x24
 */
bool Pikmin::TUnit::isAssemble()
{
	if ((mCurrentState == STATE_Hidden) || (mCurrentState == STATE_Unk1)) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x803E5744
 * @note Size: 0x24
 */
bool Pikmin::TUnit::isWalk()
{
	if ((mCurrentState == STATE_Unk2) || (mCurrentState == STATE_Unk4)) {
		return true;
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
/* void Pikmin::TUnit::isBoid()
{
    // UNUSED FUNCTION
} */

/**
 * @note Address: 0x803E5768
 * @note Size: 0x150
 */
void Pikmin::TUnit::startState(TUnit::enumState state)
{
	if (state == mCurrentState) {
		return;
	}

	if (mIsDead == true) {
		mCurrentState = STATE_Hidden;
	} else {
		mPreviousState = mCurrentState;
		mCurrentState  = state;
	}
	switch (mCurrentState) {
	case STATE_Hidden:
		mPosition = mDestPos;
		break;

	case STATE_Unk3:
		mAngle = Vector2f(1.0f, 0.0f);

		u32 time              = mManager->mParams.mWindTimer.mValue / sys->mDeltaTime;
		mCounter              = time;
		mCounter2             = time;
		mFrameControlB.mFrame = 5.0f * randEbisawaFloat();
		mFrameControlB.mRate  = mManager->mParams.mAnimSpeedStyle.mValue * (sys->mDeltaTime * 60.f * 0.5f);
		break;

	case STATE_Unk1:
		mParms[0]            = 0.0f;
		mFrameControlA.mRate = mRandAnimSpeeds.x * (sys->mDeltaTime * 60.0f * 0.5f);
		break;
	}
}

/**
 * @note Address: 0x803E58B8
 * @note Size: 0xDD4
 */
void Pikmin::TUnit::update()
{
	if (titleMgr->isOutViewField(this) && titleMgr->isOutViewField(mDestPos, 0.0f)) {
		startState(STATE_Hidden);
	}

	f32 val1        = mManager->mBoidParamMgr.mCurrBoidCenter;     // f7
	f32 val2        = mManager->mBoidParamMgr.mCurrBoidSpeedMatch; // f9
	f32 chaseFactor = mManager->mBoidParamMgr.mCurrBoidColl;       // f31

	switch (mCurrentState) {
	case STATE_Unk3: {
		if (mCounter != 0) {
			mCounter--;
		}

		if (mCounter == 0) {
			startState(STATE_Unk1);
		}
	} break;

	case STATE_Unk1: {
		mAngle = mAngle + Vector2f(0.2f, 0.0f);
		mAngle.normalise();

		mPosition = mPosition + (mDestPos - mPosition) * 0.1f;
		updateEnemyReaction_();
	} break;

	case STATE_Unk2: {
		Vector2f sep = mDestPos - mPosition; // f29, f30
		f32 dist     = sep.length();         // f31
		if (dist < mManager->mParams.mStopDist()) {
			startState(STATE_Unk1);
		} else if (dist < mManager->mParams.mConvDist()) {
			startState(STATE_Unk2);
		}
		f32 factor = dist * mManager->mParams.mDistSpeedFactor();
		sep.normalise();

		Vector2f vel = sep * factor;
		updateSmoothWalk_(vel);
		updateEnemyReaction_();
	} break;

	case STATE_Unk5: {
		if (mDestPos.distance(mPosition) > mManager->mParams.mChaseGiveUp()) {
			mEnemyObj = nullptr;
		}

		if (mEnemyObj) {
			if (mEnemyObj->isCalc()) {
				switch (mEnemyObj->getCreatureType()) {
				case TITLECREATURE_Kogane: {
					Vector2f sep = mEnemyObj->mPosition - mPosition;
					sep.normalise();

					Vector2f vel = mAngle * mParms[0] + sep * mManager->mParams.mKogane();
					vel += mGroupPosDifference * chaseFactor;
					updateSmoothWalk_(vel);
				} break;

				case TITLECREATURE_Chappy: {
					Vector2f sep = mEnemyObj->mPosition - mPosition;
					sep.normalise();

					Vector2f vel = mAngle * mParms[0] + sep * mManager->mParams.mChappyRun();
					vel += mGroupPosDifference * chaseFactor;
					updateSmoothWalk_(vel);
				} break;

				case TITLECREATURE_NULL:
					break;
				}

			} else {
				mEnemyObj = nullptr;
			}
		} else {
			startState(STATE_Unk2);
		}

	} break;

	case STATE_Unk4: {
		Vector2f sep = mTargetPos - mPosition;
		Vector2f vel = sep * val1 + mVelocity * val2 + mGroupPosDifference * chaseFactor + mAngle * mParms[0];
		updateSmoothWalk_(vel);
	} break;
	}

	if (mCurrentState == STATE_Hidden) {
		return;
	}

	calcModelBaseMtx_();

	switch (mCurrentState) {
	case STATE_Unk3:
		mFrameControlB.update();
		mFrameControlA.update();
		f32 factor1 = 1.0f - ((mCounter2 != 0) ? (f32)mCounter / (f32)mCounter2 : 0.0f);
		f32 factor2 = 1.0f; // f27
		if (factor1 <= 0.2f) {
			factor2 = factor1 / 0.2f;
		} else if (factor1 <= 0.5f) {
			factor2 = 1.0f;
		} else {
			factor2 = -2.0f * factor1 + -(-2.0f);
		}
		mManager->mAnimator->setAnmWave(mModel, factor2, mFrameControlA.mFrame, mFrameControlB.mFrame);

		break;

	case STATE_Unk1:
		mFrameControlA.update();
		mManager->mAnimator->setAnmWait(mModel, mFrameControlA.mFrame);
		break;

	case STATE_Unk2:
	case STATE_Unk4:
	case STATE_Unk5:
		mFrameControlA.mRate = (mRandAnimSpeeds.y * (mParms[0] * mManager->mParams.mAnimSpeedWalk())) * ((sys->mDeltaTime * 60.0f) * 0.5f);
		mFrameControlA.update();
		mManager->mAnimator->setAnmWait(mModel, mFrameControlA.mFrame);

		break;
	}

	mModel->calc();

	u32 index         = mModel->mModelData->mJointTree.getJointName()->getIndex("shadow1");
	Matrixf* worldMat = mModel->mMtxBuffer->getWorldMatrix(index);
	worldMat->mMatrix.structView.tx += mManager->mParams.mShadowX();
	worldMat->mMatrix.structView.tz += mManager->mParams.mShadowZ();
	mModel->entry();
	mModel->viewCalc();

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
stfd     f28, 0x60(r1)
psq_st   f28, 104(r1), 0, qr0
stfd     f27, 0x50(r1)
psq_st   f27, 88(r1), 0, qr0
stw      r31, 0x4c(r1)
stw      r30, 0x48(r1)
stw      r29, 0x44(r1)
mr       r31, r3
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
mr       r4, r31
bl       isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
clrlwi.  r0, r3, 0x18
beq      lbl_803E5A54
lwz      r3, titleMgr__Q23ebi5title@sda21(r13)
addi     r4, r31, 0x2c
lfs      f1, lbl_8051FC60@sda21(r2)
bl       "isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<f>f"
clrlwi.  r0, r3, 0x18
beq      lbl_803E5A54
lwz      r3, 0x84(r31)
cmpwi    r3, 0
beq      lbl_803E5A54
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E594C
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5958

lbl_803E594C:
stw      r3, 0x88(r31)
li       r0, 0
stw      r0, 0x84(r31)

lbl_803E5958:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5A54
bge      lbl_803E5978
cmpwi    r0, 0
beq      lbl_803E5984
bge      lbl_803E5A28
b        lbl_803E5A54

lbl_803E5978:
cmpwi    r0, 4
bge      lbl_803E5A54
b        lbl_803E5998

lbl_803E5984:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5A54

lbl_803E5998:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5A54

lbl_803E5A28:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)

lbl_803E5A54:
lwz      r0, 0x84(r31)
lwz      r3, 0x34(r31)
cmpwi    r0, 3
lfs      f7, 0x96c(r3)
lfs      f9, 0x970(r3)
lfs      f31, 0x974(r3)
beq      lbl_803E5A94
bge      lbl_803E5A84
cmpwi    r0, 1
beq      lbl_803E5BE4
bge      lbl_803E5CA8
b        lbl_803E63C8

lbl_803E5A84:
cmpwi    r0, 5
beq      lbl_803E5FD4
bge      lbl_803E63C8
b        lbl_803E6348

lbl_803E5A94:
lwz      r3, 0x8c(r31)
cmplwi   r3, 0
beq      lbl_803E5AA8
addi     r0, r3, -1
stw      r0, 0x8c(r31)

lbl_803E5AA8:
lwz      r0, 0x8c(r31)
cmplwi   r0, 0
bne      lbl_803E63C8
lwz      r3, 0x84(r31)
cmpwi    r3, 1
beq      lbl_803E63C8
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5AD8
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5AE4

lbl_803E5AD8:
stw      r3, 0x88(r31)
li       r0, 1
stw      r0, 0x84(r31)

lbl_803E5AE4:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E63C8
bge      lbl_803E5B04
cmpwi    r0, 0
beq      lbl_803E5B10
bge      lbl_803E5BB4
b        lbl_803E63C8

lbl_803E5B04:
cmpwi    r0, 4
bge      lbl_803E63C8
b        lbl_803E5B24

lbl_803E5B10:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E63C8

lbl_803E5B24:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E63C8

lbl_803E5BB4:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E63C8

lbl_803E5BE4:
lfs      f1, 0xc(r31)
lfs      f0, lbl_8051FC64@sda21(r2)
lfs      f2, 0x10(r31)
fadds    f0, f1, f0
lfs      f1, lbl_8051FC60@sda21(r2)
fadds    f2, f2, f1
stfs     f0, 0xc(r31)
stfs     f2, 0x10(r31)
lfs      f3, 0xc(r31)
lfs      f2, 0x10(r31)
fmuls    f0, f3, f3
fmuls    f2, f2, f2
fadds    f0, f0, f2
fcmpo    cr0, f0, f1
ble      lbl_803E5C38
fmadds   f2, f3, f3, f2
fcmpo    cr0, f2, f1
ble      lbl_803E5C3C
frsqrte  f0, f2
fmuls    f2, f0, f2
b        lbl_803E5C3C

lbl_803E5C38:
fmr      f2, f1

lbl_803E5C3C:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f2
beq      lbl_803E5C68
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, 0xc(r31)
fdivs    f1, f1, f2
fmuls    f0, f0, f1
stfs     f0, 0xc(r31)
lfs      f0, 0x10(r31)
fmuls    f0, f0, f1
stfs     f0, 0x10(r31)

lbl_803E5C68:
lfs      f0, 0x2c(r31)
mr       r3, r31
lfs      f5, 4(r31)
lfs      f1, 0x30(r31)
lfs      f4, 8(r31)
fsubs    f2, f0, f5
lfs      f0, lbl_8051FCF0@sda21(r2)
fsubs    f3, f1, f4
fmuls    f1, f2, f0
fmuls    f0, f3, f0
fadds    f1, f5, f1
fadds    f0, f4, f0
stfs     f1, 4(r31)
stfs     f0, 8(r31)
bl       updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
b        lbl_803E63C8

lbl_803E5CA8:
lfs      f2, 0x30(r31)
lfs      f0, 8(r31)
lfs      f1, 0x2c(r31)
fsubs    f29, f2, f0
lfs      f0, 4(r31)
lfs      f31, lbl_8051FC60@sda21(r2)
fsubs    f30, f1, f0
fmuls    f28, f29, f29
fmadds   f27, f30, f30, f28
fcmpo    cr0, f27, f31
ble      lbl_803E5CE8
ble      lbl_803E5CE4
frsqrte  f0, f27
fmuls    f31, f0, f27
b        lbl_803E5CE8

lbl_803E5CE4:
fmr      f31, f27

lbl_803E5CE8:
lfs      f0, 0xb8(r3)
fcmpo    cr0, f31, f0
bge      lbl_803E5E24
cmpwi    r0, 1
beq      lbl_803E5F5C
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5D14
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5D24

lbl_803E5D14:
lwz      r3, 0x84(r31)
li       r0, 1
stw      r3, 0x88(r31)
stw      r0, 0x84(r31)

lbl_803E5D24:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5F5C
bge      lbl_803E5D44
cmpwi    r0, 0
beq      lbl_803E5D50
bge      lbl_803E5DF4
b        lbl_803E5F5C

lbl_803E5D44:
cmpwi    r0, 4
bge      lbl_803E5F5C
b        lbl_803E5D64

lbl_803E5D50:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5F5C

lbl_803E5D64:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5F5C

lbl_803E5DF4:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E5F5C

lbl_803E5E24:
lfs      f0, 0xe0(r3)
fcmpo    cr0, f31, f0
bge      lbl_803E5F5C
cmpwi    r0, 2
beq      lbl_803E5F5C
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E5E50
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E5E60

lbl_803E5E50:
lwz      r3, 0x84(r31)
li       r0, 2
stw      r3, 0x88(r31)
stw      r0, 0x84(r31)

lbl_803E5E60:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E5F5C
bge      lbl_803E5E80
cmpwi    r0, 0
beq      lbl_803E5E8C
bge      lbl_803E5F30
b        lbl_803E5F5C

lbl_803E5E80:
cmpwi    r0, 4
bge      lbl_803E5F5C
b        lbl_803E5EA0

lbl_803E5E8C:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E5F5C

lbl_803E5EA0:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E5F5C

lbl_803E5F30:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)

lbl_803E5F5C:
lwz      r3, 0x34(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, 0x298(r3)
fcmpo    cr0, f27, f0
fmuls    f2, f31, f1
ble      lbl_803E5F8C
fmadds   f1, f30, f30, f28
fcmpo    cr0, f1, f0
ble      lbl_803E5F90
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E5F90

lbl_803E5F8C:
fmr      f1, f0

lbl_803E5F90:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E5FAC
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f30, f30, f0
fmuls    f29, f29, f0

lbl_803E5FAC:
fmuls    f1, f30, f2
mr       r3, r31
fmuls    f0, f29, f2
addi     r4, r1, 0x20
stfs     f1, 0x20(r1)
stfs     f0, 0x24(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
mr       r3, r31
bl       updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
b        lbl_803E63C8

lbl_803E5FD4:
lfs      f1, 0x30(r31)
lfs      f0, 8(r31)
lfs      f2, 0x2c(r31)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f1, f2, f1
fmuls    f2, f3, f3
fmadds   f1, f1, f1, f2
fcmpo    cr0, f1, f0
ble      lbl_803E6010
ble      lbl_803E6014
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E6014

lbl_803E6010:
fmr      f1, f0

lbl_803E6014:
lfs      f0, 0x248(r3)
fcmpo    cr0, f1, f0
ble      lbl_803E6028
li       r0, 0
stw      r0, 0x68(r31)

lbl_803E6028:
lwz      r3, 0x68(r31)
cmplwi   r3, 0
beq      lbl_803E6218
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
clrlwi.  r0, r3, 0x18
beq      lbl_803E620C
lwz      r3, 0x68(r31)
lwz      r12, 0(r3)
lwz      r12, 8(r12)
mtctr    r12
bctrl
cmpwi    r3, 5
beq      lbl_803E6084
bge      lbl_803E6078
cmpwi    r3, -1
beq      lbl_803E63C8
b        lbl_803E63C8

lbl_803E6078:
cmpwi    r3, 7
bge      lbl_803E63C8
b        lbl_803E6148

lbl_803E6084:
lwz      r3, 0x68(r31)
lfs      f0, 8(r31)
lfs      f1, 8(r3)
lfs      f2, 4(r3)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f6, f2, f1
fmuls    f1, f3, f3
fmadds   f1, f6, f6, f1
fcmpo    cr0, f1, f0
ble      lbl_803E60C4
ble      lbl_803E60C8
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E60C8

lbl_803E60C4:
fmr      f1, f0

lbl_803E60C8:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E60E4
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f6, f6, f0
fmuls    f3, f3, f0

lbl_803E60E4:
lwz      r5, 0x34(r31)
mr       r3, r31
lfs      f5, 0x14(r31)
addi     r4, r1, 0x18
lfs      f4, 0x1f8(r5)
lfs      f1, 0x10(r31)
lfs      f0, 0xc(r31)
fmuls    f2, f3, f4
fmuls    f3, f1, f5
fmuls    f1, f0, f5
fmuls    f0, f6, f4
fadds    f3, f3, f2
fadds    f2, f1, f0
stfs     f3, 0x1c(r1)
stfs     f2, 0x18(r1)
lfs      f1, 0x80(r31)
lfs      f0, 0x7c(r31)
fmuls    f1, f1, f31
fmuls    f0, f0, f31
fadds    f1, f3, f1
fadds    f0, f2, f0
stfs     f1, 0x1c(r1)
stfs     f0, 0x18(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
b        lbl_803E63C8

lbl_803E6148:
lwz      r3, 0x68(r31)
lfs      f0, 8(r31)
lfs      f1, 8(r3)
lfs      f2, 4(r3)
fsubs    f3, f1, f0
lfs      f1, 4(r31)
lfs      f0, lbl_8051FC60@sda21(r2)
fsubs    f6, f2, f1
fmuls    f1, f3, f3
fmadds   f1, f6, f6, f1
fcmpo    cr0, f1, f0
ble      lbl_803E6188
ble      lbl_803E618C
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803E618C

lbl_803E6188:
fmr      f1, f0

lbl_803E618C:
lfs      f0, lbl_8051FC60@sda21(r2)
fcmpu    cr0, f0, f1
beq      lbl_803E61A8
lfs      f0, lbl_8051FC90@sda21(r2)
fdivs    f0, f0, f1
fmuls    f6, f6, f0
fmuls    f3, f3, f0

lbl_803E61A8:
lwz      r5, 0x34(r31)
mr       r3, r31
lfs      f5, 0x14(r31)
addi     r4, r1, 0x10
lfs      f4, 0x220(r5)
lfs      f1, 0x10(r31)
lfs      f0, 0xc(r31)
fmuls    f2, f3, f4
fmuls    f3, f1, f5
fmuls    f1, f0, f5
fmuls    f0, f6, f4
fadds    f3, f3, f2
fadds    f2, f1, f0
stfs     f3, 0x14(r1)
stfs     f2, 0x10(r1)
lfs      f1, 0x80(r31)
lfs      f0, 0x7c(r31)
fmuls    f1, f1, f31
fmuls    f0, f0, f31
fadds    f1, f3, f1
fadds    f0, f2, f0
stfs     f1, 0x14(r1)
stfs     f0, 0x10(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
b        lbl_803E63C8

lbl_803E620C:
li       r0, 0
stw      r0, 0x68(r31)
b        lbl_803E63C8

lbl_803E6218:
lwz      r3, 0x84(r31)
cmpwi    r3, 2
beq      lbl_803E63C8
lbz      r0, 0x94(r31)
cmplwi   r0, 1
bne      lbl_803E623C
li       r0, 0
stw      r0, 0x84(r31)
b        lbl_803E6248

lbl_803E623C:
stw      r3, 0x88(r31)
li       r0, 2
stw      r0, 0x84(r31)

lbl_803E6248:
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E63C8
bge      lbl_803E6268
cmpwi    r0, 0
beq      lbl_803E6274
bge      lbl_803E6318
b        lbl_803E63C8

lbl_803E6268:
cmpwi    r0, 4
bge      lbl_803E63C8
b        lbl_803E6288

lbl_803E6274:
lfs      f0, 0x2c(r31)
stfs     f0, 4(r31)
lfs      f0, 0x30(r31)
stfs     f0, 8(r31)
b        lbl_803E63C8

lbl_803E6288:
lfs      f1, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC60@sda21(r2)
stfs     f1, 0xc(r31)
stfs     f0, 0x10(r31)
lwz      r4, 0x34(r31)
lwz      r3, sys@sda21(r13)
lfs      f1, 0x270(r4)
lfs      f0, 0x54(r3)
fdivs    f1, f1, f0
bl       __cvt_fp2unsigned
stw      r3, 0x8c(r31)
stw      r3, 0x90(r31)
bl       rand
xoris    r3, r3, 0x8000
lis      r0, 0x4330
stw      r3, 0x2c(r1)
lfd      f2, lbl_8051FCD8@sda21(r2)
stw      r0, 0x28(r1)
lfs      f3, lbl_8051FCE0@sda21(r2)
lfd      f1, 0x28(r1)
lfs      f0, lbl_8051FCB4@sda21(r2)
fsubs    f4, f1, f2
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f2, lbl_8051FCC0@sda21(r2)
fdivs    f3, f4, f3
fmuls    f0, f0, f3
stfs     f0, 0x5c(r31)
lwz      r3, sys@sda21(r13)
lwz      r4, 0x34(r31)
lfs      f0, 0x54(r3)
lfs      f3, 0x180(r4)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x58(r31)
b        lbl_803E63C8

lbl_803E6318:
lfs      f0, lbl_8051FC60@sda21(r2)
lfs      f1, lbl_8051FCEC@sda21(r2)
stfs     f0, 0x14(r31)
lfs      f2, lbl_8051FCC0@sda21(r2)
lwz      r3, sys@sda21(r13)
lfs      f3, 0x60(r31)
lfs      f0, 0x54(r3)
fmuls    f0, f1, f0
fmuls    f0, f2, f0
fmuls    f0, f3, f0
stfs     f0, 0x44(r31)
b        lbl_803E63C8

lbl_803E6348:
lfs      f3, 0x70(r31)
mr       r3, r31
lfs      f2, 8(r31)
addi     r4, r1, 8
lfs      f1, 0x6c(r31)
lfs      f0, 4(r31)
fsubs    f5, f3, f2
lfs      f3, 0x78(r31)
fsubs    f2, f1, f0
lfs      f1, 0x74(r31)
lfs      f4, 0x80(r31)
fmuls    f6, f5, f7
fmuls    f5, f3, f9
lfs      f0, 0x7c(r31)
fmuls    f2, f2, f7
lfs      f8, 0x14(r31)
fmuls    f1, f1, f9
lfs      f7, 0x10(r31)
lfs      f3, 0xc(r31)
fadds    f5, f6, f5
fmuls    f4, f4, f31
fadds    f1, f2, f1
fmuls    f0, f0, f31
fmuls    f6, f7, f8
fadds    f4, f5, f4
fmuls    f2, f3, f8
fadds    f0, f1, f0
fadds    f1, f6, f4
fadds    f0, f2, f0
stfs     f1, 0xc(r1)
stfs     f0, 8(r1)
bl       "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"

lbl_803E63C8:
lwz      r0, 0x84(r31)
cmpwi    r0, 0
beq      lbl_803E6648
mr       r3, r31
bl       calcModelBaseMtx___Q33ebi5title8TObjBaseFv
lwz      r0, 0x84(r31)
cmpwi    r0, 2
beq      lbl_803E6550
bge      lbl_803E63FC
cmpwi    r0, 0
beq      lbl_803E65BC
bge      lbl_803E6518
b        lbl_803E65BC

lbl_803E63FC:
cmpwi    r0, 6
bge      lbl_803E65BC
cmpwi    r0, 4
bge      lbl_803E6550
addi     r3, r31, 0x4c
bl       update__12J3DFrameCtrlFv
addi     r3, r31, 0x38
bl       update__12J3DFrameCtrlFv
lwz      r4, 0x90(r31)
cmplwi   r4, 0
beq      lbl_803E645C
lwz      r3, 0x8c(r31)
lis      r0, 0x4330
stw      r0, 0x28(r1)
lfd      f2, lbl_8051FC98@sda21(r2)
stw      r3, 0x2c(r1)
lfd      f0, 0x28(r1)
stw      r4, 0x34(r1)
fsubs    f1, f0, f2
stw      r0, 0x30(r1)
lfd      f0, 0x30(r1)
fsubs    f0, f0, f2
fdivs    f1, f1, f0
b        lbl_803E6460

lbl_803E645C:
lfs      f1, lbl_8051FC60@sda21(r2)

lbl_803E6460:
lfs      f27, lbl_8051FC90@sda21(r2)
lfs      f0, lbl_8051FC64@sda21(r2)
fsubs    f2, f27, f1
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803E6480
fdivs    f27, f2, f0
b        lbl_803E64A0

lbl_803E6480:
lfs      f0, lbl_8051FCC0@sda21(r2)
fcmpo    cr0, f2, f0
cror     2, 0, 2
bne      lbl_803E6494
b        lbl_803E64A0

lbl_803E6494:
lfs      f1, lbl_8051FCF4@sda21(r2)
fneg     f0, f1
fmadds   f27, f1, f2, f0

lbl_803E64A0:
lwz      r3, 0x34(r31)
li       r4, 0
lfs      f0, lbl_8051FC90@sda21(r2)
lwz      r5, 0x18(r3)
lfs      f2, 0x48(r31)
fsubs    f1, f0, f27
lwz      r29, 0x28(r31)
lfs      f0, 0x5c(r31)
lwz      r3, 0x18(r5)
stfs     f0, 8(r3)
lwz      r3, 0x14(r5)
stfs     f2, 8(r3)
lwz      r30, 0x20(r5)
mr       r3, r30
lwz      r12, 0(r30)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
mr       r3, r30
fmr      f1, f27
lwz      r12, 0(r30)
li       r4, 1
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl
lwz      r3, 4(r29)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r30, 0x54(r3)
b        lbl_803E65BC

lbl_803E6518:
addi     r3, r31, 0x38
bl       update__12J3DFrameCtrlFv
lwz      r3, 0x34(r31)
lwz      r4, 0x28(r31)
lwz      r5, 0x18(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x14(r5)
stfs     f0, 8(r3)
lwz      r3, 4(r4)
lwz      r0, 0x1c(r5)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)
b        lbl_803E65BC

lbl_803E6550:
lwz      r5, 0x34(r31)
addi     r3, r31, 0x38
lwz      r4, sys@sda21(r13)
lfs      f3, 0x14(r31)
lfs      f2, 0x158(r5)
lfs      f1, lbl_8051FCEC@sda21(r2)
lfs      f0, 0x54(r4)
fmuls    f2, f3, f2
lfs      f3, 0x64(r31)
fmuls    f0, f1, f0
lfs      f1, lbl_8051FCC0@sda21(r2)
fmuls    f2, f3, f2
fmuls    f0, f1, f0
fmuls    f0, f2, f0
stfs     f0, 0x44(r31)
bl       update__12J3DFrameCtrlFv
lwz      r3, 0x34(r31)
lwz      r4, 0x28(r31)
lwz      r5, 0x18(r3)
lfs      f0, 0x48(r31)
lwz      r3, 0x14(r5)
stfs     f0, 8(r3)
lwz      r3, 4(r4)
lwz      r0, 0x1c(r5)
lwz      r3, 0x28(r3)
lwz      r3, 0(r3)
stw      r0, 0x54(r3)

lbl_803E65BC:
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x10(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
addi     r4, r2, lbl_8051FCF8@sda21
lwz      r3, 4(r3)
lwz      r3, 0x54(r3)
bl       getIndex__10JUTNameTabCFPCc
lwz      r4, 0x28(r31)
mulli    r0, r3, 0x30
lwz      r3, 0x34(r31)
lwz      r4, 0x84(r4)
lfs      f0, 0x108(r3)
lwz      r3, 0xc(r4)
add      r4, r3, r0
lfs      f1, 0xc(r4)
fadds    f0, f1, f0
stfs     f0, 0xc(r4)
lwz      r3, 0x34(r31)
lfs      f1, 0x2c(r4)
lfs      f0, 0x130(r3)
fadds    f0, f1, f0
stfs     f0, 0x2c(r4)
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0xc(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
lwz      r12, 0(r3)
lwz      r12, 0x1c(r12)
mtctr    r12
bctrl

lbl_803E6648:
psq_l    f31, 152(r1), 0, qr0
lfd      f31, 0x90(r1)
psq_l    f30, 136(r1), 0, qr0
lfd      f30, 0x80(r1)
psq_l    f29, 120(r1), 0, qr0
lfd      f29, 0x70(r1)
psq_l    f28, 104(r1), 0, qr0
lfd      f28, 0x60(r1)
psq_l    f27, 88(r1), 0, qr0
lfd      f27, 0x50(r1)
lwz      r31, 0x4c(r1)
lwz      r30, 0x48(r1)
lwz      r0, 0xa4(r1)
lwz      r29, 0x44(r1)
mtlr     r0
addi     r1, r1, 0xa0
blr
	*/
}

/**
 * @note Address: 0x803E4668
 * @note Size: 0x164
 */
void Pikmin::TMgr::setStartPos(Vector2f* pos)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		TUnit* unit       = getUnit(i);
		unit->mPosition.x = pos[i].x;
		unit->mPosition.y = pos[i].y;
	}
}

/**
 * @note Address: 0x803E47CC
 * @note Size: 0x164
 */
void Pikmin::TMgr::setDestPos(Vector2f* pos)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		TUnit* unit      = getUnit(i);
		unit->mDestPos.x = pos[i].x;
		unit->mDestPos.y = pos[i].y;
	}
}

} // namespace title
} // namespace ebi

namespace ebi {
namespace title {
/**
 * @note Address: 0x803E668C
 * @note Size: 0x200
 */
void Pikmin::TUnit::updateSmoothWalk_(Vector2f& arg)
{
	// Still needs to be matched
	f32 _964  = mManager->mBoidParamMgr.mCurrMaxTurnSpeed;
	f32 _968  = mManager->mBoidParamMgr.mCurrTurnMag;
	f32 _960  = mManager->mBoidParamMgr.mCurrWalkSpeed;
	f32 param = arg.length();
	if (param > _960) {
		param = _960;
	} else if (param < 0.0f) {
		param = 0.0f;
	}
	mParms[0] = param;
	Vector2f pos(arg);
	pos.normalise();
	pos     = pos * _964;
	f32 len = pos.length();
	Vector2f newpos;
	if (len > _968) {
		pos.normalise();
		newpos = pos * _968;
	}

	mAngle = mAngle + newpos;
	mAngle.normalise();
	mPosition = mPosition + mAngle * mParms[0];
}

/**
 * @note Address: 0x803E688C
 * @note Size: 0x350
 */
void Pikmin::TUnit::updateEnemyReaction_()
{
	if (mEnemyObj != nullptr && mEnemyObj->isCalc()) {
		Vector2f diff = mEnemyObj->mPosition - mPosition;
		f32 dist      = diff.length();
		switch (mEnemyObj->getCreatureType()) {
		case TITLECREATURE_Kogane: // Kogane
			if (dist < mEnemyObj->mParms[3]) {
				startState(STATE_Unk5);
			}
			break;
		case TITLECREATURE_Chappy:
			if (dist < mEnemyObj->mParms[3]) {
				startState(STATE_Unk5);
			}
			break;
		case TITLECREATURE_NULL:
			break;
		}
	}
}

} // namespace title
} // namespace ebi
