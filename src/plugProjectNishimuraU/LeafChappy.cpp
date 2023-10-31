#include "Game/Entities/LeafChappy.h"
#include "Game/Footmark.h"
#include "Game/rumble.h"
#include "Game/WalkSmokeEffect.h"
#include "Game/GameSystem.h"
#include "Game/PikiMgr.h"
#include "Game/MapMgr.h"

namespace Game {
namespace LeafChappy {

/*
 * --INFO--
 * Address:	802C5C18
 * Size:	000098
 */
Obj::Obj() { createFootmarks(); }

/*
 * --INFO--
 * Address:	802C5CB0
 * Size:	0000C0
 */
void Obj::doUpdate()
{
	KumaChappy::Obj::doUpdate();
	f32 timer = (mFootmarks->mLastUpdateTime - (int)gameSystem->mFrameTimer);

	timer = (timer > 0.0f) ? timer : -timer;

	if (timer > 2.5f) {
		Footmark mark;
		mark.mPosition = getPosition();
		mFootmarks->add(mark);
	}
}

/*
 * --INFO--
 * Address:	802C5D70
 * Size:	000004
 */
void Obj::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	802C5D74
 * Size:	0000C4
 */
void Obj::getShadowParam(ShadowParam& param)
{
	Matrixf* worldMatrix = mModel->getJoint("ago")->getWorldMatrix();

	param.mPosition = Vector3f(worldMatrix->mMatrix.mtxView[0][3], worldMatrix->mMatrix.mtxView[1][3], worldMatrix->mMatrix.mtxView[2][3]);

	param.mPosition.y -= 7.0f;
	f32 heightFloat = mPosition.y + 5.0f;
	if (param.mPosition.y < heightFloat) {
		param.mPosition.y = heightFloat;
	}
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);

	if (isEvent(1, EB2_Earthquake)) {
		param.mBoundingSphere.mRadius = 50.0f;
	} else {
		param.mBoundingSphere.mRadius = 30.0f;
	}

	param.mSize = 12.5f;
}

/*
 * --INFO--
 * Address:	802C5E38
 * Size:	0000B4
 */
void Obj::initMouthSlots()
{
	mMouthSlots.alloc(3);
	mMouthSlots.setup(0, Creature::mModel, "kamu1");
	mMouthSlots.setup(1, Creature::mModel, "kamu2");
	mMouthSlots.setup(2, Creature::mModel, "kamu3");

	for (int i = 0; i < mMouthSlots.mMax; i++) {
		mMouthSlots.getSlot(i)->mRadius = 30.0f;
	}
}

/*
 * --INFO--
 * Address:	802C5EEC
 * Size:	000064
 */
void Obj::initWalkSmokeEffect()
{
	mWalkSmokeMgr.alloc(2);
	mWalkSmokeMgr.setup(0, mModel, "asiL", 5.0f);
	mWalkSmokeMgr.setup(1, mModel, "asiR", 5.0f);
}

/*
 * --INFO--
 * Address:	802C5F50
 * Size:	000020
 */
bool Obj::doBecomeCarcass() { return EnemyBase::doBecomeCarcass(); }

/*
 * --INFO--
 * Address:	802C5F70
 * Size:	000020
 */
void Obj::doUpdateCarcass() { EnemyBase::doUpdateCarcass(); }

/*
 * --INFO--
 * Address:	802C5F90
 * Size:	000020
 */
void Obj::doGetLifeGaugeParam(LifeGaugeParam& param) { EnemyBase::doGetLifeGaugeParam(param); }

/*
 * --INFO--
 * Address:	802C5FB0
 * Size:	000244
 */
void Obj::birthChildren(EnemyBirthArg& birthArg)
{
	f32 angle          = birthArg.mFaceDir + PI;
	Vector3f motherPos = birthArg.mPosition;

	Vector3f vec(sinf(angle), 0.0f, cosf(angle));

	for (int i = 0; i < 10; i++) {
		f32 modifier        = 2.5f * i + 17.5f;
		Vector3f bulbminPos = Vector3f(modifier * vec.x, 0.0f, modifier * vec.z);
		Piki* bulbmin       = pikiMgr->birth();
		PikiInitArg initArg(-1);
		initArg.mLeader = this;

		if (bulbmin) {
			bulbmin->init(&initArg);
			bulbminPos += motherPos;
			bulbminPos.y = mapMgr->getMinY(bulbminPos);
			bulbmin->setPosition(bulbminPos, false);
		}
	}
}

/*
 * --INFO--
 * Address:	802C61F4
 * Size:	00007C
 */
void Obj::startEnemyRumble()
{
	Matrixf* worldMat = mModel->getJoint("ago")->getWorldMatrix();
	Vector3f pos      = Vector3f(worldMat->mMatrix.mtxView[0][3], worldMat->mMatrix.mtxView[1][3], worldMat->mMatrix.mtxView[2][3]);
	pos.y             = mPosition.y;
	rumbleMgr->startRumble(8, pos, 2);
	createBounceEffect(pos, 0.4f);
}

/*
 * --INFO--
 * Address:	802C6270
 * Size:	000050
 */
void Obj::createFootmarks()
{
	mFootmarks = new Footmarks();
	mFootmarks->alloc(10);
}

} // namespace LeafChappy
} // namespace Game
