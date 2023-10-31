#include "Game/EnemyStone.h"
#include "Game/EnemyBase.h"
#include "PSSystem/PSGame.h"
#include "efx/TSekika.h"
#include "System.h"
#include "types.h"

namespace Game {
namespace EnemyStone {

EnemyBase* DrawInfo::sOwnerEnemy;

/*
 * --INFO--
 * Address:	80128280
 * Size:	0002D4
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

/*
 * --INFO--
 * Address:	80128554
 * Size:	000038
 */
void StateMachine::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	if (drawInfo->mCurrentState) {
		drawInfo->mCurrentState->makeMatrix(drawInfo, mtx);
	}
}

/*
 * --INFO--
 * Address:	8012858C
 * Size:	000024
 */
void FSMState::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx) { PSMTXIdentity(mtx->mMatrix.mtxView); }

/*
 * --INFO--
 * Address:	801285B0
 * Size:	000014
 */
void FSMStateExpansion::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	drawInfo->_3C = 0.1f;
	_10           = 0;
}

/*
 * --INFO--
 * Address:	801285C4
 * Size:	0001BC
 */
void FSMStateExpansion::exec(DrawInfo* drawInfo)
{
	drawInfo->_38 += sys->mDeltaTime;

	if (!_10 && drawInfo->_38 > 0.0f) {
		_10 = 1;
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

	if (drawInfo->_38 > drawInfo->_3C) {
		drawInfo->_38 = drawInfo->_3C;
		transit(drawInfo, STONESTATE_ExpansionFull, nullptr);
	}
}

/*
 * --INFO--
 * Address:	801287B0
 * Size:	000004
 */
void FSMStateExpansion::cleanup(DrawInfo* drawInfo) { }

// these are necessary to make the floats line up in makeMatrix smh
void boundAngle(f32& angle)
{
	if (angle < 0.0f) {
		angle = 0.0f;
	} else if (angle > 1.0f) {
		angle = 1.0f;
	}
}

f32 pikmin2_sinf(f32 x)
{
	if (x < 0.0f) {
		return -JMath::sincosTable_.mTable[((int)(x *= -325.9493f) & 0x7ffU)].first;
	}
	return JMath::sincosTable_.mTable[((int)(x *= 325.9493f) & 0x7ffU)].first;
}

/*
 * --INFO--
 * Address:	801287B4
 * Size:	000140
 */
void FSMStateExpansion::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta = drawInfo->_38 / drawInfo->_3C;
	boundAngle(theta);

	f32 sinTheta = pikmin2_sinf(theta * HALF_PI);

	PSMTXIdentity(mtx->mMatrix.mtxView);
	scaleMatrix(mtx, sinTheta);
}

/*
 * --INFO--
 * Address:	801288F4
 * Size:	0000A0
 */
void FSMStateExpansionFull::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->mMatrix.mtxView);
	scaleMatrix(mtx, 1.0f);
}

/*
 * --INFO--
 * Address:	80128994
 * Size:	000014
 */
void FSMStateFit::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	drawInfo->_38 = 0.0f;
	drawInfo->_3C = 1.0f / 30.0f;
}

/*
 * --INFO--
 * Address:	801289A8
 * Size:	00005C
 */
void FSMStateFit::exec(DrawInfo* drawInfo)
{
	drawInfo->_38 += sys->mDeltaTime;
	if (drawInfo->_38 > drawInfo->_3C) {
		drawInfo->_38 = drawInfo->_3C;
		transit(drawInfo, STONESTATE_BaseState4, nullptr);
	}
}

/*
 * --INFO--
 * Address:	80128A04
 * Size:	000004
 */
void FSMStateFit::cleanup(DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80128A08
 * Size:	0000DC
 */
void FSMStateFit::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta = drawInfo->_38 / drawInfo->_3C;
	boundAngle(theta);

	f32 cosTheta = cos(theta * HALF_PI); // ????? THIS DOESN'T EVEN GET USED, WTF YAMASHITA

	PSMTXIdentity(mtx->mMatrix.mtxView);
	scaleMatrix(mtx, 1.0f);
}

/*
 * --INFO--
 * Address:	80128AE4
 * Size:	000024
 */
void FSMStateShake::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	_14           = 7.0f;
	drawInfo->_3C = 0.07f * _14;
	_10           = 0;
}

/*
 * --INFO--
 * Address:	80128B08
 * Size:	000278
 */
void FSMStateShake::exec(DrawInfo* drawInfo)
{
	drawInfo->_38 += sys->mDeltaTime;
	if (drawInfo->_38 > drawInfo->_3C) {
		drawInfo->_38 = drawInfo->_3C;
		switch (_10) {
		case 0:
			drawInfo->_38 = 0.0f;
			drawInfo->_3C = 0.14f * _14;
			_10           = 1;
			break;
		case 1:
			drawInfo->_38 = 0.0f;
			drawInfo->_3C = 0.14f * _14;
			_10           = 2;
			break;
		case 2:
			drawInfo->_38 = 0.0f;
			drawInfo->_3C = 0.35f * _14;
			_10           = 3;
			break;
		case 3:
			drawInfo->_38 = 0.0f;
			drawInfo->_3C = 0.3f * _14;
			_10           = 4;
			break;
		case 4:
			transit(drawInfo, STONESTATE_Breakable, nullptr);
			break;
		}
	}

	f32 ratio = drawInfo->_38 / drawInfo->_3C;

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

/*
 * --INFO--
 * Address:	80128D80
 * Size:	000004
 */
void FSMStateShake::cleanup(DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80128D84
 * Size:	0002E4
 */
void FSMStateShake::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta = drawInfo->_38 / drawInfo->_3C;
	boundAngle(theta);

	f32 p1;
	f32 p2;
	f32 p3;
	switch (_10) {
	case 0:
		p1 = (1.0f - cosf(theta * TAU)) * 0.1f;
		p2 = 62.83185577392578f;
		p3 = p1 * 30.0f;
		break;
	case 2:
		p1 = pikmin2_sinf(theta * TAU * 1.5f) * 0.1f;
		p2 = 125.6637115478516f;
		p3 = p1 * 30.0f;
		break;
	case 1:
	case 3:
		p1 = 0.0f;
		p2 = 0.0f;
		p3 = 0.0f;
		break;
	case 4:
		p1 = (1.0f - cosf(theta * PI * 2.5f)) * 0.15f;
		p2 = 201.0619354248047f;
		p3 = theta * 4.0f;
		break;
	}

	Vector3f translation(p1 * pikmin2_sinf(p2 * theta), 0.0f, p1 * cosf(p2 * theta));
	f32 sinTheta = (f32)sin(p2 * theta);
	Vector3f rotation(PI * (DEG2RAD * (p3 * sinTheta)), 0.0f, 0.0f);
	mtx->makeTR(translation, rotation);
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stfd      f31, 0x40(r1)
	  psq_st    f31,0x48(r1),0,0
	  stw       r31, 0x3C(r1)
	  lfs       f2, 0x38(r4)
	  mr        r31, r5
	  lfs       f0, 0x3C(r4)
	  lfs       f7, -0x6398(r2)
	  fdivs     f0, f2, f0
	  fcmpo     cr0, f0, f7
	  bge-      .loc_0x3C
	  fmr       f0, f7
	  b         .loc_0x4C

	.loc_0x3C:
	  lfs       f2, -0x6394(r2)
	  fcmpo     cr0, f0, f2
	  ble-      .loc_0x4C
	  fmr       f0, f2

	.loc_0x4C:
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x2
	  beq-      .loc_0xDC
	  bge-      .loc_0x6C
	  cmpwi     r0, 0
	  beq-      .loc_0x7C
	  bge-      .loc_0x170
	  b         .loc_0x1E8

	.loc_0x6C:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x180
	  bge-      .loc_0x1E8
	  b         .loc_0x170

	.loc_0x7C:
	  lfs       f2, -0x6368(r2)
	  lfs       f1, -0x6398(r2)
	  fmuls     f2, f2, f0
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x94
	  fneg      f2, f2

	.loc_0x94:
	  lfs       f1, -0x638C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  lfs       f4, -0x6394(r2)
	  fmuls     f3, f2, f1
	  lfs       f5, -0x639C(r2)
	  lfs       f2, -0x6360(r2)
	  lfs       f1, -0x6364(r2)
	  fctiwz    f3, f3
	  stfd      f3, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f3, 0x4(r3)
	  fsubs     f3, f4, f3
	  fmuls     f7, f5, f3
	  fmuls     f31, f2, f7
	  b         .loc_0x1E8

	.loc_0xDC:
	  lfs       f1, -0x6368(r2)
	  lfs       f3, -0x635C(r2)
	  fmuls     f2, f1, f0
	  lfs       f1, -0x6398(r2)
	  fmuls     f2, f3, f2
	  fcmpo     cr0, f2, f1
	  bge-      .loc_0x124
	  lfs       f1, -0x6390(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f1, r3, r0
	  fneg      f3, f1
	  b         .loc_0x148

	.loc_0x124:
	  lfs       f1, -0x638C(r2)
	  lis       r3, 0x8050
	  addi      r3, r3, 0x71A0
	  fmuls     f1, f2, f1
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f3, r3, r0

	.loc_0x148:
	  lfs       f2, -0x639C(r2)
	  lfs       f1, -0x6398(r2)
	  fmuls     f7, f2, f3
	  fcmpo     cr0, f7, f1
	  bge-      .loc_0x160
	  fmr       f7, f1

	.loc_0x160:
	  lfs       f2, -0x6360(r2)
	  lfs       f1, -0x6358(r2)
	  fmuls     f31, f2, f7
	  b         .loc_0x1E8

	.loc_0x170:
	  lfs       f7, -0x6398(r2)
	  fmr       f1, f7
	  fmr       f31, f7
	  b         .loc_0x1E8

	.loc_0x180:
	  lfs       f1, -0x6350(r2)
	  lfs       f3, -0x6354(r2)
	  fmuls     f2, f1, f0
	  lfs       f1, -0x6398(r2)
	  fmuls     f3, f3, f2
	  fcmpo     cr0, f3, f1
	  bge-      .loc_0x1A0
	  fneg      f3, f3

	.loc_0x1A0:
	  lfs       f2, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f1, -0x6344(r2)
	  addi      r3, r3, 0x71A0
	  fmuls     f2, f3, f2
	  lfs       f3, -0x6394(r2)
	  fmuls     f31, f1, f0
	  lfs       f4, -0x634C(r2)
	  lfs       f1, -0x6348(r2)
	  fctiwz    f2, f2
	  stfd      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r3, r0
	  lfs       f2, 0x4(r3)
	  fsubs     f2, f3, f2
	  fmuls     f2, f4, f2
	  fmuls     f7, f0, f2

	.loc_0x1E8:
	  fmuls     f6, f1, f0
	  lfs       f2, -0x6398(r2)
	  fmr       f3, f6
	  fcmpo     cr0, f6, f2
	  bge-      .loc_0x200
	  fneg      f3, f6

	.loc_0x200:
	  lfs       f4, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f2, -0x6398(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f3, f3, f4
	  fcmpo     cr0, f6, f2
	  fctiwz    f2, f3
	  stfd      f2, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f2, 0x4(r3)
	  fmuls     f5, f7, f2
	  bge-      .loc_0x25C
	  lfs       f2, -0x6390(r2)
	  fmuls     f2, f6, f2
	  fctiwz    f2, f2
	  stfd      f2, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0
	  fneg      f2, f2
	  b         .loc_0x274

	.loc_0x25C:
	  fmuls     f2, f6, f4
	  fctiwz    f2, f2
	  stfd      f2, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f2, r4, r0

	.loc_0x274:
	  fmuls     f3, f7, f2
	  lfs       f2, -0x6398(r2)
	  fmuls     f1, f1, f0
	  stfs      f5, 0x1C(r1)
	  stfs      f3, 0x14(r1)
	  stfs      f2, 0x18(r1)
	  bl        -0x597F4
	  frsp      f1, f1
	  lfs       f0, -0x6398(r2)
	  lfs       f2, -0x6340(r2)
	  mr        r3, r31
	  lfs       f3, -0x6350(r2)
	  addi      r4, r1, 0x14
	  fmuls     f1, f31, f1
	  stfs      f0, 0xC(r1)
	  addi      r5, r1, 0x8
	  stfs      f0, 0x10(r1)
	  fmuls     f0, f2, f1
	  fmuls     f0, f3, f0
	  stfs      f0, 0x8(r1)
	  bl        0x2FF840
	  psq_l     f31,0x48(r1),0,0
	  lwz       r0, 0x54(r1)
	  lfd       f31, 0x40(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129068
 * Size:	00011C
 */
void FSMStateBreakable::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	f32 theta            = drawInfo->_38 * 15.2f * TAU;
	Vector3f translation = Vector3f(0.2f * pikmin2_sinf(theta), 0.0f, 0.2f * cosf(theta));
	f32 sinTheta         = (f32)sin(theta);
	Vector3f rotation    = Vector3f(PI * (DEG2RAD * (4.0f * sinTheta)), 0.0f, 0.0f);
	mtx->makeTR(translation, rotation);
}

/*
 * --INFO--
 * Address:	80129184
 * Size:	00000C
 */
void FSMStateBreakable::init(DrawInfo* drawInfo, StateArg* stateArg) { drawInfo->_38 = 0.0f; }

/*
 * --INFO--
 * Address:	80129190
 * Size:	000018
 */
void FSMStateBreakable::exec(DrawInfo* drawInfo) { drawInfo->_38 += sys->mDeltaTime; }

/*
 * --INFO--
 * Address:	801291A8
 * Size:	000144
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

/*
 * --INFO--
 * Address:	801292EC
 * Size:	000004
 */
void FSMStateDisappear::cleanup(DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	801292F0
 * Size:	000004
 */
void FSMStateDisappear::exec(DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	801292F4
 * Size:	000024
 */
void FSMStateDisappear::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx) { PSMTXIdentity(mtx->mMatrix.mtxView); }

/*
 * --INFO--
 * Address:	80129318
 * Size:	000144
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

/*
 * --INFO--
 * Address:	8012945C
 * Size:	000024
 */
void FSMStateDead::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx) { PSMTXIdentity(mtx->mMatrix.mtxView); }

/*
 * --INFO--
 * Address:	80129480
 * Size:	0000BC
 */
DrawInfo::DrawInfo(bool doInitFSM)
    : CNode("")
{
	_38      = 0.0f;
	_3C      = 0.0f;
	mObjInfo = nullptr;
	mMatrix  = nullptr;

	if (doInitFSM) {
		mFsm.init(this);
		reset();
	}
}

/*
 * --INFO--
 * Address:	8012953C
 * Size:	000064
 */
void DrawInfo::reset()
{
	del();
	mObjInfo = nullptr;
	mMatrix  = nullptr;
	_38      = 0.0f;
	_3C      = 0.0f;
	mFsm.start(this, STONESTATE_BaseState0, nullptr);
}

/*
 * --INFO--
 * Address:	801295D4
 * Size:	000044
 */
void DrawInfo::update(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.exec(this);
	sOwnerEnemy = nullptr;
}

/*
 * --INFO--
 * Address:	80129618
 * Size:	0000A8
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

/*
 * --INFO--
 * Address:	801296C0
 * Size:	00000C
 */
int DrawInfo::getStateID() { return mCurrentState->mId; }

/*
 * --INFO--
 * Address:	801296CC
 * Size:	000114
 */
bool DrawInfo::getPosAndScale(Vector3f* pos, f32* scale)
{
	Matrixf mtx;
	if (makeMatrix(&mtx, false)) {
		*scale = 0.0f;

		f32* row1 = &mtx.mMatrix.structView.xz;
		f32* row2 = &mtx.mMatrix.structView.xy;
		f32* row3 = &mtx.mMatrix.structView.xx;
		for (int i = 0; i < 3; i++) {
			Vector3f vec = Vector3f(row1[i], row2[i], row3[i]);
			*scale += vec.length();
		}

		*scale = *scale / 3.0f;
		mtx.getTranslation(*pos);
		return true;
	}
	return false;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stw      r31, 0x4c(r1)
	li       r31, 1
	stw      r30, 0x48(r1)
	mr       r30, r5
	stw      r29, 0x44(r1)
	mr       r29, r4
	lwz      r0, 0x44(r3)
	cmplwi   r0, 0
	beq      lbl_80129714
	lwz      r4, 0x40(r3)
	mr       r3, r0
	addi     r5, r1, 8
	addi     r4, r4, 8
	bl       PSMTXConcat
	b        lbl_80129718

lbl_80129714:
	li       r31, 0

lbl_80129718:
	clrlwi.  r0, r31, 0x18
	beq      lbl_801297C0
	lfs      f1, lbl_80517FC8@sda21(r2)
	li       r0, 3
	addi     r4, r1, 0x18
	addi     r5, r1, 0x28
	stfs     f1, 0(r30)
	addi     r3, r1, 8
	mtctr    r0

lbl_8012973C:
	lfs      f0, 0(r4)
	lfs      f2, 0(r5)
	fmuls    f3, f0, f0
	lfs      f0, 0(r3)
	fmuls    f2, f2, f2
	fmadds   f0, f0, f0, f3
	fadds    f2, f2, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80129770
	ble      lbl_80129774
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80129774

lbl_80129770:
	fmr      f2, f1

lbl_80129774:
	lfs      f0, 0(r30)
	addi     r3, r3, 4
	addi     r4, r4, 4
	addi     r5, r5, 4
	fadds    f0, f0, f2
	stfs     f0, 0(r30)
	bdnz     lbl_8012973C
	lfs      f1, 0(r30)
	li       r3, 1
	lfs      f0, lbl_80518030@sda21(r2)
	fdivs    f0, f1, f0
	stfs     f0, 0(r30)
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r29)
	lfs      f0, 0x24(r1)
	stfs     f0, 4(r29)
	lfs      f0, 0x34(r1)
	stfs     f0, 8(r29)
	b        lbl_801297C4

lbl_801297C0:
	li       r3, 0

lbl_801297C4:
	lwz      r0, 0x54(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801297E0
 * Size:	00004C
 */
void DrawInfo::appear(EnemyBase* enemy, f32 p1)
{
	sOwnerEnemy = enemy;
	_38         = p1;
	mFsm.transit(this, STONESTATE_Expansion, nullptr);
	sOwnerEnemy = nullptr;
}

/*
 * --INFO--
 * Address:	8012982C
 * Size:	00004C
 */
void DrawInfo::fit(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Fit, nullptr);
	sOwnerEnemy = nullptr;
}

/*
 * --INFO--
 * Address:	80129878
 * Size:	00004C
 */
void DrawInfo::shake(EnemyBase* enemy, f32 p1)
{
	sOwnerEnemy = enemy;
	_38         = p1;
	mFsm.transit(this, STONESTATE_Shake, nullptr);
	sOwnerEnemy = nullptr;
}

/*
 * --INFO--
 * Address:	801298C4
 * Size:	00004C
 */
void DrawInfo::disappear(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Disappear, nullptr);
	sOwnerEnemy = nullptr;
}

/*
 * --INFO--
 * Address:	80129910
 * Size:	00004C
 */
void DrawInfo::dead(EnemyBase* enemy)
{
	sOwnerEnemy = enemy;
	mFsm.transit(this, STONESTATE_Dead, nullptr);
	sOwnerEnemy = nullptr;
}
} // namespace EnemyStone
} // namespace Game
