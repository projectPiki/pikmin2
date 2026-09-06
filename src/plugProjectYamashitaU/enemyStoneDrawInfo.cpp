#include "Game/EnemyStone.h"
#include "Game/EnemyBase.h"
#include "PSSystem/PSGame.h"
#include "efx/TSekika.h"
#include "System.h"
#include "types.h"

namespace Game {
namespace EnemyStone {

EnemyBase* DrawInfo::sOwnerEnemy;

/**
 * @note Address: 0x80128280
 * @note Size: 0x2D4
 */
void StateMachine::init(DrawInfo* drawInfo)
{
	create(STONESTATE_StateCount);
	registerState(new FSMState(STONESTATE_BaseState0));
	registerState(new FSMStateExpansion);
	registerState(new FSMStateExpansionFull);
	registerState(new FSMStateFit);
	registerState(new FSMState(STONESTATE_BaseState4));
	registerState(new FSMStateShake);
	registerState(new FSMStateBreakable);
	registerState(new FSMStateDisappear);
	registerState(new FSMStateDead);
}

/**
 * @note Address: 0x80128554
 * @note Size: 0x38
 */
void StateMachine::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	if (drawInfo->mCurrentState) {
		drawInfo->mCurrentState->makeMatrix(drawInfo, mtx);
	}
}

/**
 * @note Address: 0x8012858C
 * @note Size: 0x24
 */
void FSMState::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x801285B0
 * @note Size: 0x14
 */
void FSMStateExpansion::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	drawInfo->mDrawTimeLimit = 0.1f;
	mHasMadeEfx              = false;
}

/**
 * @note Address: 0x801285C4
 * @note Size: 0x1BC
 */
void FSMStateExpansion::exec(DrawInfo* drawInfo)
{
	drawInfo->mDrawTimer += sys->mDeltaTime;

	if (!mHasMadeEfx && drawInfo->mDrawTimer > 0.0f) {
		mHasMadeEfx = true;
		Vector3f pos;
		f32 scale;
		if (drawInfo->getPosAndScale(&pos, &scale)) {
			scale *= DrawInfo::sOwnerEnemy->mScaleModifier;
			efx::ArgScale argScale(pos, scale);

			switch (drawInfo->mObjInfo->mSize) {
			case ENEMYSTONE_FX_SIZE_LARGE:
				efx::TSekikaLOn stoneFXL;
				stoneFXL.create(&argScale);
				break;
			case ENEMYSTONE_FX_SIZE_SMALL:
				efx::TSekikaSOn stoneFXS;
				stoneFXS.create(&argScale);
				break;
			}
		}
	}

	if (drawInfo->mDrawTimer > drawInfo->mDrawTimeLimit) {
		drawInfo->mDrawTimer = drawInfo->mDrawTimeLimit;
		transit(drawInfo, STONESTATE_ExpansionFull, nullptr);
	}
}

/**
 * @note Address: 0x801287B0
 * @note Size: 0x4
 */
void FSMStateExpansion::cleanup(DrawInfo* drawInfo)
{
}

/**
 * @note Address: 0x801287B4
 * @note Size: 0x140
 */
void FSMStateExpansion::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta = drawInfo->mDrawTimer / drawInfo->mDrawTimeLimit;
	if (theta < 0.0f) {
		theta = 0.0f;
	} else if (theta > 1.0f) {
		theta = 1.0f;
	}

	f32 sinTheta = sinfc(theta * HALF_PI);

	PSMTXIdentity(mtx->mMatrix.mtxView);
	mtx->scale(sinTheta);
}

/**
 * @note Address: 0x801288F4
 * @note Size: 0xA0
 */
void FSMStateExpansionFull::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->mMatrix.mtxView);
	mtx->scale(1.0f);
}

/**
 * @note Address: 0x80128994
 * @note Size: 0x14
 */
void FSMStateFit::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	drawInfo->mDrawTimer     = 0.0f;
	drawInfo->mDrawTimeLimit = 1.0f / 30.0f;
}

/**
 * @note Address: 0x801289A8
 * @note Size: 0x5C
 */
void FSMStateFit::exec(DrawInfo* drawInfo)
{
	drawInfo->mDrawTimer += sys->mDeltaTime;
	if (drawInfo->mDrawTimer > drawInfo->mDrawTimeLimit) {
		drawInfo->mDrawTimer = drawInfo->mDrawTimeLimit;
		transit(drawInfo, STONESTATE_BaseState4, nullptr);
	}
}

/**
 * @note Address: 0x80128A04
 * @note Size: 0x4
 */
void FSMStateFit::cleanup(DrawInfo* drawInfo)
{
}

/**
 * @note Address: 0x80128A08
 * @note Size: 0xDC
 */
void FSMStateFit::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta = drawInfo->mDrawTimer / drawInfo->mDrawTimeLimit;
	if (theta < 0.0f) {
		theta = 0.0f;
	} else if (theta > 1.0f) {
		theta = 1.0f;
	}

	f32 cosTheta = cos(theta * HALF_PI); // Retail evaluates the cosine, but uses unit scale.

	PSMTXIdentity(mtx->mMatrix.mtxView);
	mtx->scale(1.0f);
}

/**
 * @note Address: 0x80128AE4
 * @note Size: 0x24
 */
void FSMStateShake::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	_14                      = 7.0f;
	drawInfo->mDrawTimeLimit = 0.07f * _14;
	_10                      = 0;
}

/**
 * @note Address: 0x80128B08
 * @note Size: 0x278
 */
void FSMStateShake::exec(DrawInfo* drawInfo)
{
	drawInfo->mDrawTimer += sys->mDeltaTime;
	if (drawInfo->mDrawTimer > drawInfo->mDrawTimeLimit) {
		drawInfo->mDrawTimer = drawInfo->mDrawTimeLimit;
		switch (_10) {
		case 0:
			drawInfo->mDrawTimer     = 0.0f;
			drawInfo->mDrawTimeLimit = 0.14f * _14;
			_10                      = 1;
			break;
		case 1:
			drawInfo->mDrawTimer     = 0.0f;
			drawInfo->mDrawTimeLimit = 0.14f * _14;
			_10                      = 2;
			break;
		case 2:
			drawInfo->mDrawTimer     = 0.0f;
			drawInfo->mDrawTimeLimit = 0.35f * _14;
			_10                      = 3;
			break;
		case 3:
			drawInfo->mDrawTimer     = 0.0f;
			drawInfo->mDrawTimeLimit = 0.3f * _14;
			_10                      = 4;
			break;
		case 4:
			transit(drawInfo, STONESTATE_Breakable, nullptr);
			break;
		}
	}

	f32 ratio = drawInfo->mDrawTimer / drawInfo->mDrawTimeLimit;

	switch (_10) {
	case 0:
	case 2:
		int intRatio = (int)(ratio * 10.0f);
		if (intRatio % 4) {
			return;
		}

		PSSystem::getSeMgrInstance()->mSetSeList[3]->startSound(DrawInfo::sOwnerEnemy->mSoundObj, PSSE_EN_DOPING_ROCK_FLICK, 0);
		break;
	case 4:
		intRatio = (int)(ratio * 100.0f);
		if (intRatio % 10) {
			return;
		}

		PSSystem::getSeMgrInstance()->mSetSeList[3]->startSound(DrawInfo::sOwnerEnemy->mSoundObj, PSSE_EN_DOPING_FLICK_LAST, 0);
		break;
	}
}

/**
 * @note Address: 0x80128D80
 * @note Size: 0x4
 */
void FSMStateShake::cleanup(DrawInfo* drawInfo)
{
}

/**
 * @note Address: 0x80128D84
 * @note Size: 0x2E4
 */
void FSMStateShake::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta2;
	f32 theta = drawInfo->mDrawTimer / drawInfo->mDrawTimeLimit;
	const f32 minRatio = 0.0f;
	f32 p1             = 0.0f;
	if (theta < minRatio) {
		theta = minRatio;
	} else if (theta > 1.0f) {
		theta = 1.0f;
	}

	f32 p2;
	f32 p3;
	switch (_10) {
	case 0:
		p1 = (1.0f - cosf(theta * TAU)) * 0.1f;
		p2 = TAU * 10.0f;
		p3 = p1 * 30.0f;
		break;
	case 2:
		f32 t = sinf(theta * TAU * 1.5f);
		p1    = t * 0.1f;
		if (p1 < 0.0f) {
			p1 = 0.0f;
		}
		p2 = TAU * 20.0f;
		p3 = p1 * 30.0f;
		break;
	case 1:
	case 3:
		p1 = 0.0f;
		p2 = 0.0f;
		p3 = 0.0f;
		break;
	case 4:
		p1 = (1.0f - cosf(theta * PI * 2.5f)) * 0.15f * theta;
		p2 = TAU * 32.0f;
		p3 = theta * 4.0f;
		break;
	}

	theta2 = p2;
	theta2 *= theta;
	Vector3f translation = Vector3f(p1 * sinf(theta2), 0.0f, p1 * cosf(theta2));
	f32 sinTheta         = (f32)sin(p2 * theta);
	Vector3f rotation    = Vector3f(TORADIANS((p3 * sinTheta)), 0.0f, 0.0f);
	mtx->makeTR(translation, rotation);

}

/**
 * @note Address: 0x80129068
 * @note Size: 0x11C
 */
void FSMStateBreakable::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta            = drawInfo->mDrawTimer * 15.2f * TAU;
	Vector3f translation = Vector3f(0.2f * sinf(theta), 0.0f, 0.2f * cosf(theta));
	f32 sinTheta         = (f32)sin(theta);
	Vector3f rotation    = Vector3f(PI * (DEG2RAD * (4.0f * sinTheta)), 0.0f, 0.0f);
	mtx->makeTR(translation, rotation);
}

/**
 * @note Address: 0x80129184
 * @note Size: 0xC
 */
void FSMStateBreakable::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	drawInfo->mDrawTimer = 0.0f;
}

/**
 * @note Address: 0x80129190
 * @note Size: 0x18
 */
void FSMStateBreakable::exec(DrawInfo* drawInfo)
{
	drawInfo->mDrawTimer += sys->mDeltaTime;
}

/**
 * @note Address: 0x801291A8
 * @note Size: 0x144
 */
void FSMStateDisappear::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	f32 scale;
	Vector3f pos;
	if (drawInfo->getPosAndScale(&pos, &scale)) {
		scale *= DrawInfo::sOwnerEnemy->mScaleModifier;
		efx::ArgScale scaleArg(pos, scale);

		switch (drawInfo->mObjInfo->mSize) {
		case ENEMYSTONE_FX_SIZE_LARGE: {
			efx::TSekikaLOff fxOff;
			fxOff.create(&scaleArg);
			break;
		}

		case ENEMYSTONE_FX_SIZE_SMALL: {
			efx::TSekikaSOff fxOff;
			fxOff.create(&scaleArg);
			break;
		}
		}
	}
}

/**
 * @note Address: 0x801292EC
 * @note Size: 0x4
 */
void FSMStateDisappear::cleanup(DrawInfo* drawInfo)
{
}

/**
 * @note Address: 0x801292F0
 * @note Size: 0x4
 */
void FSMStateDisappear::exec(DrawInfo* drawInfo)
{
}

/**
 * @note Address: 0x801292F4
 * @note Size: 0x24
 */
void FSMStateDisappear::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x80129318
 * @note Size: 0x144
 */
void FSMStateDead::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	f32 scale;
	Vector3f pos;
	if (drawInfo->getPosAndScale(&pos, &scale)) {
		scale *= DrawInfo::sOwnerEnemy->mScaleModifier;
		efx::ArgScale scaleArg(pos, scale);

		switch (drawInfo->mObjInfo->mSize) {
		case ENEMYSTONE_FX_SIZE_LARGE: {
			efx::TSekikaLOff fxOff;
			fxOff.create(&scaleArg);
			break;
		}

		case ENEMYSTONE_FX_SIZE_SMALL: {
			efx::TSekikaSOff fxOff;
			fxOff.create(&scaleArg);
			break;
		}
		}
	}
}

/**
 * @note Address: 0x8012945C
 * @note Size: 0x24
 */
void FSMStateDead::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->mMatrix.mtxView);
}

/**
 * @note Address: 0x80129480
 * @note Size: 0xBC
 */
DrawInfo::DrawInfo(bool doInitFSM)
    : CNode("")
{
	mDrawTimer     = 0.0f;
	mDrawTimeLimit = 0.0f;
	mObjInfo       = nullptr;
	mMatrix        = nullptr;

	if (doInitFSM) {
		mFsm.init(this);
		reset();
	}
}

/**
 * @note Address: 0x8012953C
 * @note Size: 0x64
 */
void DrawInfo::reset()
{
	del();
	mObjInfo       = nullptr;
	mMatrix        = nullptr;
	mDrawTimer     = 0.0f;
	mDrawTimeLimit = 0.0f;
	mFsm.start(this, STONESTATE_BaseState0, nullptr);
}

/**
 * @note Address: 0x801295D4
 * @note Size: 0x44
 */
void DrawInfo::update(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.exec(this);
	sOwnerEnemy = nullptr;
}

/**
 * @note Address: 0x80129618
 * @note Size: 0xA8
 */
bool DrawInfo::makeMatrix(Matrixf* mtx, bool doFSMMatrix)
{
	bool result = true;
	if (mMatrix) {
		PSMTXConcat(mMatrix->mMatrix.mtxView, mObjInfo->mModelMatrix.mMatrix.mtxView, mtx->mMatrix.mtxView);
		if (doFSMMatrix) {
			Matrixf newMatrix;
			mFsm.makeMatrix(this, &newMatrix);
			PSMTXConcat(mtx->mMatrix.mtxView, newMatrix.mMatrix.mtxView, mtx->mMatrix.mtxView);
		}
	} else {
		result = false;
	}

	return result;
}

/**
 * @note Address: 0x801296C0
 * @note Size: 0xC
 */
int DrawInfo::getStateID()
{
	return mCurrentState->mId;
}

/**
 * @note Address: 0x801296CC
 * @note Size: 0x114
 */
bool DrawInfo::getPosAndScale(Vector3f* pos, f32* scale)
{
	Matrixf mtx;
	if (makeMatrix(&mtx, false)) {
		*scale = 0.0f;

		f32* rowX = mtx.mMatrix.mtxView[0];
		f32* rowY = mtx.mMatrix.mtxView[1];
		f32* rowZ = mtx.mMatrix.mtxView[2];
		for (int i = 0; i < 3; i++, rowY++, rowZ++) {
			Vector3f result;
			result.x = rowX[i];
			result.y = *rowY;
			result.z = *rowZ;
			f32 length = result.length();
			*scale += length;
		}

		*scale /= 3.0f;
		mtx.getTranslation(*pos);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x801297E0
 * @note Size: 0x4C
 */
void DrawInfo::appear(EnemyBase* enemy, f32 p1)
{
	sOwnerEnemy = enemy;
	mDrawTimer  = p1;
	mFsm.transit(this, STONESTATE_Expansion, nullptr);
	sOwnerEnemy = nullptr;
}

/**
 * @note Address: 0x8012982C
 * @note Size: 0x4C
 */
void DrawInfo::fit(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Fit, nullptr);
	sOwnerEnemy = nullptr;
}

/**
 * @note Address: 0x80129878
 * @note Size: 0x4C
 */
void DrawInfo::shake(EnemyBase* enemy, f32 p1)
{
	sOwnerEnemy = enemy;
	mDrawTimer  = p1;
	mFsm.transit(this, STONESTATE_Shake, nullptr);
	sOwnerEnemy = nullptr;
}

/**
 * @note Address: 0x801298C4
 * @note Size: 0x4C
 */
void DrawInfo::disappear(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Disappear, nullptr);
	sOwnerEnemy = nullptr;
}

/**
 * @note Address: 0x80129910
 * @note Size: 0x4C
 */
void DrawInfo::dead(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Dead, nullptr);
	sOwnerEnemy = nullptr;
}
} // namespace EnemyStone
} // namespace Game
