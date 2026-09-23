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
	mModelDataRed = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | J3DMLF_21);
	file          = arc->getResource("pikmin/title_yellow_piki.bmd");
	P2ASSERTLINE(186, file);
	mModelDataYellow = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | J3DMLF_21);
	file             = arc->getResource("pikmin/title_blue_piki.bmd");
	P2ASSERTLINE(196, file);
	mModelDataBlue = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | J3DMLF_21);
	file           = arc->getResource("pikmin/title_black_piki.bmd");
	P2ASSERTLINE(206, file);
	mModelDataPurple = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | J3DMLF_21);
	file             = arc->getResource("pikmin/title_white_piki.bmd");
	P2ASSERTLINE(216, file);
	mModelDataWhite = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | J3DMLF_21);
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
 * @note Address: 0x803E4668
 * @note Size: 0x164
 */
void Pikmin::TMgr::setStartPos(Vector2f* pos)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].setPosition(pos[i]);
	}
}

/**
 * @note Address: 0x803E47CC
 * @note Size: 0x164
 */
void Pikmin::TMgr::setDestPos(Vector2f* pos)
{
	for (int i = 0; i < TITLE_PIKI_TOTAL; i++) {
		mUnits[i].setDestPos(pos[i]);
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
				mGroupAvgPosition = mGroupAvgPosition + mUnits[i].getPosition();
				counter++;
			}
		}

		if (counter != 0) {
			f32 norm = 1.0f / (f32)counter;
			mGroupAvgPosition *= norm;
		}
	}

	int start = (boidCalcTimer * TITLE_PIKI_TOTAL) / 10;
	int end;
	if (boidCalcTimer == 9) {
		end = TITLE_PIKI_TOTAL;
	} else {
		end = ((boidCalcTimer + 1) * TITLE_PIKI_TOTAL) / 10;
	}

	for (int i = start; i < end; i++) {
		TUnit* unit = &mUnits[i];
		if (!unit->isWalk()) {
			continue;
		}

		f32 factor1 = mBoidParamMgr.getGroupCenter();
		f32 factor2 = 1.0f - factor1;

		Vector2f goalPos = mGroupAvgPosition * factor1 + unit->mDestPos * factor2; // f31, f30
		Vector2f vec2(0.0f);
		Vector2f vec3(0.0f);
		int counter = 0;
		for (int j = 0; j < TITLE_PIKI_TOTAL; j++) {
			TUnit* curUnit = &mUnits[j];
			if (curUnit->isCalc()) {
				Vector2f sep;
				sep.x    = unit->mPosition.x - curUnit->mPosition.x;
				sep.y    = unit->mPosition.y - curUnit->mPosition.y;
				f32 dist = sep.length();
				if (dist < mBoidParamMgr.getBoidNeighbor()) {
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
			vec5 = vec3 * (1.0f / (f32)counter);
			vec4 = vec2 * (1.0f / (f32)counter);
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
Pikmin::TUnit* Pikmin::TMgr::getUnit(s32 idx)
{
	return &mUnits[idx];
}

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

#if defined(VERSION_PAL)
	switch (sys->getLanguage()) {
#else
	switch (sys->mRegion) {
#endif
	case System::LANG_Japanese:
		mParms[1] = mManager->mParams.mJpnScale();
		break;
	default:
		mParms[1] = mManager->mParams.mIntScale();
		break;
	}

	mParms[2] = mManager->mParams.mCollRadius();

	mFrameControlA.mFrame = 5.0f * randEbisawaFloat();
	mRandAnimSpeeds.y     = 0.40000004f * randEbisawaFloat() + 0.8f;
	mIsDead               = false;
}

/**
 * @note Address: 0x803E55FC
 * @note Size: 0x98
 */
void Pikmin::TUnit::goDestination()
{
	Vector2f Diff(mDestPos.x - mPosition.x, mDestPos.y - mPosition.y);
	f32 comp = Diff.length();
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
void Pikmin::TUnit::alive()
{
	mIsDead = false;
}

/**
 * @note Address: 0x803E570C
 * @note Size: 0x14
 */
bool Pikmin::TUnit::isCalc()
{
	return (bool)(mCurrentState != STATE_Hidden);
}

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

	f32 val1        = mManager->mBoidParamMgr.getBoidCenter();     // f7
	f32 val2        = mManager->mBoidParamMgr.getBoidSpeedMatch(); // f9
	f32 chaseFactor = mManager->mBoidParamMgr.getBoidColl();       // f31

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
					vel          = vel + mGroupPosDifference * chaseFactor;
					updateSmoothWalk_(vel);
				} break;

				case TITLECREATURE_Chappy: {
					Vector2f sep = mEnemyObj->mPosition - mPosition;
					sep.normalise();

					Vector2f vel = mAngle * mParms[0] + sep * mManager->mParams.mChappyRun();
					vel          = vel + mGroupPosDifference * chaseFactor;
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
		Vector2f vel = mAngle * mParms[0] + (sep * val1 + mVelocity * val2 + mGroupPosDifference * chaseFactor);
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
		f32 slope   = -2.0f;
		f32 factor2 = (factor1 <= 0.2f) ? factor1 / 0.2f : (factor1 <= 0.5f) ? 1.0f : slope * factor1 + -slope;
		mManager->mAnimator->setAnmWave(mModel, factor2, mFrameControlA.mFrame, mFrameControlB.mFrame);

		break;

	case STATE_Unk1: {
		mFrameControlA.update();
		TAnimator* animator = mManager->mAnimator;
		animator->setAnmWait(mModel, mFrameControlA.mFrame);
	} break;

	case STATE_Unk2:
	case STATE_Unk4:
	case STATE_Unk5:
		f32 speed            = mRandAnimSpeeds.y * (mParms[0] * mManager->mParams.mAnimSpeedWalk());
		mFrameControlA.mRate = speed * ((sys->mDeltaTime * 60.0f) * 0.5f);
		mFrameControlA.update();
		TAnimator* animator = mManager->mAnimator;
		animator->setAnmWait(mModel, mFrameControlA.mFrame);

		break;

	case STATE_Hidden:
		break;
	}

	mModel->calc();

	u32 index         = mModel->mModelData->mJointTree.getJointName()->getIndex("shadow1");
	Matrixf* worldMat = mModel->mMtxBuffer->getWorldMatrix(index);
	worldMat->mMatrix.structView.tx += mManager->mParams.mShadowX();
	worldMat->mMatrix.structView.tz += mManager->mParams.mShadowZ();
	mModel->entry();
	mModel->viewCalc();
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
	f32 _964  = mManager->mBoidParamMgr.getMaxTurnSpeed();
	f32 _968  = mManager->mBoidParamMgr.getTurnMag();
	f32 _960  = mManager->mBoidParamMgr.getWalkSpeed();
	f32 param = arg.length();
	if (param > _960) {
		param = _960;
	} else if (param < 0.0f) {
		param = 0.0f;
	}
	mParms[0] = param;
	Vector2f pos(arg);
	pos.normalise();
	pos = pos * _964;
	Vector2f newpos(pos);
	f32 len = pos.length();
	if (len > _968) {
		newpos.normalise();
		newpos *= _968;
		pos = newpos;
	}

	mAngle = mAngle + pos;
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
