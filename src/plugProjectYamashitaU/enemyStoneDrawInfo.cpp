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
	if (drawInfo->m_currentState) {
		drawInfo->m_currentState->makeMatrix(drawInfo, mtx);
	}
}

/*
 * --INFO--
 * Address:	8012858C
 * Size:	000024
 */
void FSMState::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx) { PSMTXIdentity(mtx->m_matrix.mtxView); }

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
	drawInfo->_38 += sys->m_deltaTime;

	if (!_10 && drawInfo->_38 > 0.0f) {
		_10 = 1;
		Vector3f pos;
		f32 scale;
		if (drawInfo->getPosAndScale(&pos, &scale)) {
			scale *= DrawInfo::sOwnerEnemy->m_scaleModifier;
			efx::ArgScale argScale(pos, scale);

			switch (drawInfo->m_objInfo->m_size) {
			case 0:
				efx::TSekikaLOn stoneFXL;
				stoneFXL.create(&argScale);
				break;
			case 1:
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
		return -JMath::sincosTable_.m_table[((int)(x *= -325.9493f) & 0x7ffU)].first;
	}
	return JMath::sincosTable_.m_table[((int)(x *= 325.9493f) & 0x7ffU)].first;
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

	PSMTXIdentity(mtx->m_matrix.mtxView);
	scaleMatrix(mtx, sinTheta);
}

/*
 * --INFO--
 * Address:	801288F4
 * Size:	0000A0
 */
void FSMStateExpansionFull::makeMatrix(DrawInfo* drawInfo, Matrixf* mtx)
{
	PSMTXIdentity(mtx->m_matrix.mtxView);
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
	drawInfo->_38 += sys->m_deltaTime;
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

	PSMTXIdentity(mtx->m_matrix.mtxView);
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
	drawInfo->_38 += sys->m_deltaTime;
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

		PSSystem::getSeMgrInstance()->_04[3]->startSound(DrawInfo::sOwnerEnemy->m_soundObj, PSSE_EN_DOPING_ROCK_FLICK, 0);
		break;
	case 4:
		intRatio = (int)(ratio * 100.0f);
		if (intRatio % 10) {
			return;
		}

		PSSystem::getSeMgrInstance()->_04[3]->startSound(DrawInfo::sOwnerEnemy->m_soundObj, PSSE_EN_DOPING_FLICK_LAST, 0);
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
		p1 = (1.0f - pikmin2_cosf(theta * TAU)) * 0.1f;
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
		p1 = (1.0f - pikmin2_cosf(theta * PI * 2.5f)) * 0.15f;
		p2 = 201.0619354248047f;
		p3 = theta * 4.0f;
		break;
	}

	Vector3f translation(p1 * pikmin2_sinf(p2 * theta), 0.0f, p1 * pikmin2_cosf(p2 * theta));
	theta = (f32)sin(p2 * theta);
	Vector3f rotation(p3 * theta * DEG2RAD * PI, 0.0f, 0.0f);
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
void FSMStateBreakable::makeMatrix(DrawInfo* drawInfo, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f1, -0x633C(r2)
	  stw       r0, 0x44(r1)
	  lfs       f2, -0x6368(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r5
	  lfs       f0, 0x38(r4)
	  fmuls     f1, f1, f0
	  lfs       f0, -0x6398(r2)
	  fmuls     f1, f2, f1
	  fmr       f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3C
	  fneg      f2, f1

	.loc_0x3C:
	  lfs       f3, -0x638C(r2)
	  lis       r3, 0x8050
	  lfs       f0, -0x6398(r2)
	  addi      r4, r3, 0x71A0
	  fmuls     f2, f2, f3
	  lfs       f4, -0x6338(r2)
	  fcmpo     cr0, f1, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x20(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r0,r0,3,18,28
	  add       r3, r4, r0
	  lfs       f0, 0x4(r3)
	  fmuls     f5, f4, f0
	  bge-      .loc_0x9C
	  lfs       f0, -0x6390(r2)
	  fmuls     f0, f1, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0
	  fneg      f0, f0
	  b         .loc_0xB4

	.loc_0x9C:
	  fmuls     f0, f1, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwinm    r0,r0,3,18,28
	  lfsx      f0, r4, r0

	.loc_0xB4:
	  fmuls     f2, f4, f0
	  lfs       f0, -0x6398(r2)
	  stfs      f5, 0x1C(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f0, 0x18(r1)
	  bl        -0x59914
	  frsp      f3, f1
	  lfs       f0, -0x6398(r2)
	  lfs       f1, -0x6344(r2)
	  mr        r3, r31
	  lfs       f2, -0x6340(r2)
	  addi      r4, r1, 0x14
	  fmuls     f1, f1, f3
	  lfs       f3, -0x6350(r2)
	  stfs      f0, 0xC(r1)
	  addi      r5, r1, 0x8
	  fmuls     f1, f2, f1
	  stfs      f0, 0x10(r1)
	  fmuls     f0, f3, f1
	  stfs      f0, 0x8(r1)
	  bl        0x2FF71C
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129184
 * Size:	00000C
 */
void FSMStateBreakable::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	/*
	.loc_0x0:
	  lfs       f0, -0x6398(r2)
	  stfs      f0, 0x38(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129190
 * Size:	000018
 */
void FSMStateBreakable::exec(DrawInfo* drawInfo)
{
	/*
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x38(r4)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x38(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	801291A8
 * Size:	000144
 */
void FSMStateDisappear::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x30
	  mr        r3, r31
	  bl        0x504
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lwz       r8, -0x6DD0(r13)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lwz       r5, 0x38(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0x1F8(r8)
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  bge-      .loc_0x130
	  cmpwi     r0, 0
	  bge-      .loc_0xAC
	  b         .loc_0x130

	.loc_0xAC:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AB
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x793C
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x29E9D0
	  b         .loc_0x130

	.loc_0xF0:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AD
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7964
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x29EB44

	.loc_0x130:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
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
void FSMStateDisappear::makeMatrix(DrawInfo* drawInfo, Matrixf*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r5
	  stw       r0, 0x14(r1)
	  bl        -0x3F064
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80129318
 * Size:	000144
 */
void FSMStateDead::init(DrawInfo* drawInfo, StateArg* stateArg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  addi      r5, r1, 0x8
	  stw       r31, 0x5C(r1)
	  mr        r31, r4
	  addi      r4, r1, 0x30
	  mr        r3, r31
	  bl        0x394
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x130
	  lwz       r8, -0x6DD0(r13)
	  lis       r4, 0x804B
	  lwz       r7, 0x30(r1)
	  lis       r3, 0x804B
	  lwz       r6, 0x34(r1)
	  subi      r4, r4, 0x5814
	  lwz       r5, 0x38(r1)
	  subi      r0, r3, 0x5D24
	  lfs       f0, 0x1F8(r8)
	  lfs       f1, 0x8(r1)
	  stw       r7, 0xC(r1)
	  fmuls     f3, f1, f0
	  stw       r6, 0x10(r1)
	  lfs       f2, 0xC(r1)
	  stw       r5, 0x14(r1)
	  lfs       f1, 0x10(r1)
	  stw       r4, 0x3C(r1)
	  lfs       f0, 0x14(r1)
	  stfs      f3, 0x8(r1)
	  stfs      f2, 0x40(r1)
	  stfs      f1, 0x44(r1)
	  stfs      f0, 0x48(r1)
	  stw       r0, 0x3C(r1)
	  stfs      f3, 0x4C(r1)
	  lwz       r3, 0x40(r31)
	  lwz       r0, 0x4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xF0
	  bge-      .loc_0x130
	  cmpwi     r0, 0
	  bge-      .loc_0xAC
	  b         .loc_0x130

	.loc_0xAC:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AB
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r3, 0x793C
	  addi      r3, r1, 0x24
	  addi      r4, r1, 0x3C
	  sth       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  bl        0x29E860
	  b         .loc_0x130

	.loc_0xF0:
	  lis       r3, 0x804B
	  lis       r4, 0x804E
	  subi      r0, r3, 0x5808
	  lis       r3, 0x804F
	  stw       r0, 0x18(r1)
	  addi      r0, r4, 0x6A78
	  li        r6, 0x1AD
	  li        r5, 0
	  stw       r0, 0x18(r1)
	  subi      r0, r3, 0x7964
	  addi      r3, r1, 0x18
	  addi      r4, r1, 0x3C
	  sth       r6, 0x1C(r1)
	  stw       r5, 0x20(r1)
	  stw       r0, 0x18(r1)
	  bl        0x29E9D4

	.loc_0x130:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8012945C
 * Size:	000024
 */
void FSMStateDead::makeMatrix(DrawInfo* drawInfo, Matrixf*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r5
	stw      r0, 0x14(r1)
	bl       PSMTXIdentity
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129480
 * Size:	0000BC
 */
DrawInfo::DrawInfo(bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r6, __vt__Q34Game10EnemyStone8DrawInfo@ha
	lis      r5, "__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>"@ha
	stw      r0, 0x14(r1)
	lis      r7, __vt__5CNode@ha
	addi     r0, r7, __vt__5CNode@l
	li       r8, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lis      r3, __vt__Q34Game10EnemyStone12StateMachine@ha
	addi     r7, r2, lbl_8051802C@sda21
	stw      r0, 0(r31)
	clrlwi.  r0, r4, 0x18
	addi     r6, r6, __vt__Q34Game10EnemyStone8DrawInfo@l
	addi     r5, r5,
"__vt__Q24Game42StateMachine<Q34Game10EnemyStone8DrawInfo>"@l stw      r8,
0x10(r31) li       r4, -1 addi     r3, r3,
__vt__Q34Game10EnemyStone12StateMachine@l lfs      f0, lbl_80517FC8@sda21(r2)
	stw      r8, 0xc(r31)
	stw      r8, 8(r31)
	stw      r8, 4(r31)
	stw      r7, 0x14(r31)
	stw      r6, 0(r31)
	stw      r5, 0x18(r31)
	stw      r4, 0x30(r31)
	stw      r3, 0x18(r31)
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	stw      r8, 0x40(r31)
	stw      r8, 0x44(r31)
	beq      lbl_80129524
	lwz      r12, 0x18(r31)
	mr       r4, r31
	addi     r3, r4, 0x18
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       reset__Q34Game10EnemyStone8DrawInfoFv

lbl_80129524:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012953C
 * Size:	000064
 */
void DrawInfo::reset()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	bl       del__5CNodeFv
	li       r0, 0
	lfs      f0, lbl_80517FC8@sda21(r2)
	stw      r0, 0x40(r31)
	addi     r3, r31, 0x18
	mr       r4, r31
	li       r5, 0
	stw      r0, 0x44(r31)
	li       r6, 0
	stfs     f0, 0x38(r31)
	stfs     f0, 0x3c(r31)
	lwz      r12, 0x18(r31)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace EnemyStone

/*
 * --INFO--
 * Address:	801295A0
 * Size:	000034
 */
void StateMachine<EnemyStone::DrawInfo>::start(EnemyStone::DrawInfo* drawInfo, int, StateArg* stateArg)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x34(r4)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace EnemyStone {
/*
 * --INFO--
 * Address:	801295D4
 * Size:	000044
 */
void DrawInfo::update(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	stw      r0, 0x14(r1)
	addi     r3, r5, 0x18
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r5
	lwz      r12, 0x18(r5)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129618
 * Size:	0000A8
 */
void DrawInfo::makeMatrix(Matrixf*, bool)
{
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
	stw      r28, 0x40(r1)
	mr       r28, r3
	lwz      r3, 0x44(r3)
	cmplwi   r3, 0
	beq      lbl_80129698
	lwz      r4, 0x40(r28)
	mr       r5, r29
	addi     r4, r4, 8
	bl       PSMTXConcat
	clrlwi.  r0, r30, 0x18
	beq      lbl_8012969C
	addi     r3, r28, 0x18
	mr       r4, r28
	lwz      r12, 0x18(r28)
	addi     r5, r1, 8
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	mr       r5, r29
	addi     r4, r1, 8
	bl       PSMTXConcat
	b        lbl_8012969C

lbl_80129698:
	li       r31, 0

lbl_8012969C:
	lwz      r0, 0x54(r1)
	mr       r3, r31
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r29, 0x44(r1)
	lwz      r28, 0x40(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/*
 * --INFO--
 * Address:	801296C0
 * Size:	00000C
 */
int DrawInfo::getStateID() { return m_currentState->m_id; }

/*
 * --INFO--
 * Address:	801296CC
 * Size:	000114
 */
bool DrawInfo::getPosAndScale(Vector3f* pos, f32* scale)
{
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
void DrawInfo::appear(Game::EnemyBase*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r3
	addi     r3, r4, 0x18
	stfs     f1, 0x38(r4)
	lwz      r12, 0x18(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8012982C
 * Size:	00004C
 */
void DrawInfo::fit(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	li       r5, 3
	stw      r0, 0x14(r1)
	addi     r3, r6, 0x18
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r6
	lwz      r12, 0x18(r6)
	li       r6, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129878
 * Size:	00004C
 */
void DrawInfo::shake(Game::EnemyBase*, float)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 5
	li       r6, 0
	stw      r0, 0x14(r1)
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r3
	addi     r3, r4, 0x18
	stfs     f1, 0x38(r4)
	lwz      r12, 0x18(r4)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801298C4
 * Size:	00004C
 */
void DrawInfo::disappear(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	li       r5, 7
	stw      r0, 0x14(r1)
	addi     r3, r6, 0x18
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r6
	lwz      r12, 0x18(r6)
	li       r6, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129910
 * Size:	00004C
 */
void DrawInfo::dead(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r6, r3
	li       r5, 8
	stw      r0, 0x14(r1)
	addi     r3, r6, 0x18
	stw      r4, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	mr       r4, r6
	lwz      r12, 0x18(r6)
	li       r6, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, sOwnerEnemy__Q34Game10EnemyStone8DrawInfo@sda21(r13)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
} // namespace EnemyStone

/*
 * --INFO--
 * Address:	8012995C
 * Size:	000004
 */
void FSMState<EnemyStone::DrawInfo>::init(EnemyStone::DrawInfo* drawInfo, StateArg* stateArg) { }

/*
 * --INFO--
 * Address:	80129960
 * Size:	000004
 */
void FSMState<EnemyStone::DrawInfo>::exec(EnemyStone::DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80129964
 * Size:	000004
 */
void FSMState<EnemyStone::DrawInfo>::cleanup(EnemyStone::DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80129968
 * Size:	000004
 */
void FSMState<EnemyStone::DrawInfo>::resume(EnemyStone::DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	8012996C
 * Size:	000004
 */
void FSMState<EnemyStone::DrawInfo>::restart(EnemyStone::DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80129970
 * Size:	000004
 */
void StateMachine<EnemyStone::DrawInfo>::init(EnemyStone::DrawInfo* drawInfo) { }

/*
 * --INFO--
 * Address:	80129974
 * Size:	000038
 */
void StateMachine<EnemyStone::DrawInfo>::exec(EnemyStone::DrawInfo* drawInfo)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 0x34(r4)
	cmplwi   r3, 0
	beq      lbl_8012999C
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_8012999C:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801299AC
 * Size:	000064
 */
void StateMachine<EnemyStone::DrawInfo>::create(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x14(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80129A10
 * Size:	00009C
 */
void StateMachine<EnemyStone::DrawInfo>::transit(EnemyStone::DrawInfo* drawInfo, int, StateArg* stateArg)
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
	  lwz       r30, 0x34(r4)
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
	  stw       r3, 0x34(r28)
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
 * Address:	80129AAC
 * Size:	000084
 */
void StateMachine<EnemyStone::DrawInfo>::registerState(FSMState<EnemyStone::DrawInfo>*)
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  lwz       r0, 0xC(r3)
	  cmpw      r6, r0
	  bgelr-
	  lwz       r5, 0x4(r3)
	  rlwinm    r0,r6,2,0,29
	  stwx      r4, r5, r0
	  lwz       r5, 0x4(r4)
	  cmpwi     r5, 0
	  blt-      .loc_0x34
	  lwz       r0, 0xC(r3)
	  cmpw      r5, r0
	  blt-      .loc_0x3C

	.loc_0x34:
	  li        r0, 0
	  b         .loc_0x40

	.loc_0x3C:
	  li        r0, 0x1

	.loc_0x40:
	  rlwinm.   r0,r0,0,24,31
	  beqlr-
	  stw       r3, 0x8(r4)
	  lwz       r0, 0x8(r3)
	  lwz       r6, 0x4(r4)
	  lwz       r5, 0x10(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r6, r5, r0
	  lwz       r0, 0x4(r4)
	  lwz       r5, 0x8(r3)
	  lwz       r4, 0x14(r3)
	  rlwinm    r0,r0,2,0,29
	  stwx      r5, r4, r0
	  lwz       r4, 0x8(r3)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r3)
	  blr
	*/
}

} // namespace Game
