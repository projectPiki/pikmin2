#include "Game/Entities/SnakeCrow.h"
#include "Game/MapMgr.h"

namespace Game {
namespace SnakeCrow {
namespace {
const f32 cSphereShadowRadius[8] = { 17.5f, 17.5f, 15.0f, 12.0f, 10.0f, 7.5f, 6.5f, 17.5f };
const f32 cTubeShadowRadius[8]   = { 17.5f, 16.5f, 13.5f, 11.0f, 9.0f, 7.0f, 6.0f, 7.5f };
} // namespace
} // namespace SnakeCrow

/**
 * @note Address: 0x802F8090
 * @note Size: 0x22C
 */
void SnakeCrowTubeShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos1, Vector3f& pos2)
{
	Vector3f mtx[4];
	mtx[0].x = (pos2.x - pos1.x) * 0.5f;
	mtx[0].y = 0.0f;
	mtx[0].z = (pos2.z - pos1.z) * 0.5f;
	mtx[2]   = cross(mtx[0], parm.mRotation);
	mtx[2].normalise();

	mtx[2].x *= parm.mShadowScale;
	mtx[2].y *= parm.mShadowScale;
	mtx[2].z *= parm.mShadowScale;
	mtx[3].x = (pos2.x + pos1.x) * 0.5f;
	mtx[3].y = 0.0f;
	mtx[3].z = (pos2.z + pos1.z) * 0.5f;

	mtx[3].y = mapMgr->getMinY(mtx[3]) + 2.5f;
	mtx[1]   = Vector3f(0.0f, 50.0f, 0.0f);
	if (mtx[3].y < parm.mPosition.y) {
		f32 diff = parm.mPosition.y - mtx[3].y;
		mtx[3].y = parm.mPosition.y;
		mtx[1].y += diff;
	}

	mMainMtx->setColumn(0, mtx[0]);
	mMainMtx->setColumn(1, mtx[1]);
	mMainMtx->setColumn(2, mtx[2]);
	mMainMtx->setColumn(3, mtx[3]);

	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lfs       f2, -0x10A0(r2)
	  stw       r0, 0x44(r1)
	  lfs       f5, -0x109C(r2)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lfs       f1, 0x0(r6)
	  lfs       f0, 0x0(r5)
	  fsubs     f0, f1, f0
	  stfs      f5, 0xC(r1)
	  fmuls     f6, f2, f0
	  stfs      f6, 0x8(r1)
	  lfs       f1, 0x8(r6)
	  lfs       f0, 0x8(r5)
	  fsubs     f0, f1, f0
	  fmuls     f4, f2, f0
	  stfs      f4, 0x10(r1)
	  lfs       f8, 0x10(r4)
	  lfs       f1, 0x14(r4)
	  lfs       f7, 0xC(r4)
	  fmuls     f0, f4, f8
	  fmuls     f2, f6, f1
	  fmuls     f3, f5, f7
	  fmsubs    f1, f5, f1, f0
	  fmsubs    f2, f4, f7, f2
	  fmsubs    f3, f6, f8, f3
	  fmuls     f0, f1, f1
	  stfs      f1, 0x20(r1)
	  fmuls     f4, f2, f2
	  fmuls     f6, f3, f3
	  stfs      f2, 0x24(r1)
	  fadds     f0, f0, f4
	  stfs      f3, 0x28(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f5
	  ble-      .loc_0xB8
	  fmadds    f0, f1, f1, f4
	  fadds     f1, f6, f0
	  fcmpo     cr0, f1, f5
	  ble-      .loc_0xBC
	  fsqrte    f0, f1
	  fmuls     f1, f0, f1
	  b         .loc_0xBC

	.loc_0xB8:
	  fmr       f1, f5

	.loc_0xBC:
	  lfs       f0, -0x109C(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF4
	  lfs       f0, -0x1098(r2)
	  lfs       f2, 0x20(r1)
	  fdivs     f3, f0, f1
	  lfs       f1, 0x24(r1)
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)

	.loc_0xF4:
	  lfs       f2, 0x20(r1)
	  addi      r4, r1, 0x2C
	  lfs       f5, 0x20(r31)
	  lfs       f1, 0x24(r1)
	  fmuls     f4, f2, f5
	  lfs       f0, 0x28(r1)
	  fmuls     f2, f1, f5
	  lfs       f3, -0x10A0(r2)
	  fmuls     f1, f0, f5
	  lfs       f0, -0x109C(r2)
	  stfs      f4, 0x20(r1)
	  lwz       r3, -0x6CF8(r13)
	  stfs      f2, 0x24(r1)
	  stfs      f1, 0x28(r1)
	  lfs       f2, 0x0(r6)
	  lfs       f1, 0x0(r5)
	  fadds     f1, f2, f1
	  stfs      f0, 0x30(r1)
	  fmuls     f0, f3, f1
	  stfs      f0, 0x2C(r1)
	  lfs       f1, 0x8(r6)
	  lfs       f0, 0x8(r5)
	  fadds     f0, f1, f0
	  fmuls     f0, f3, f0
	  stfs      f0, 0x34(r1)
	  lwz       r12, 0x4(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, -0x1094(r2)
	  lfs       f0, -0x109C(r2)
	  fadds     f2, f2, f1
	  lfs       f1, -0x1090(r2)
	  stfs      f0, 0x14(r1)
	  stfs      f2, 0x30(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f3, 0x4(r31)
	  fcmpo     cr0, f2, f3
	  bge-      .loc_0x1A4
	  fsubs     f0, f3, f2
	  stfs      f3, 0x30(r1)
	  fadds     f0, f1, f0
	  stfs      f0, 0x18(r1)

	.loc_0x1A4:
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x20(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x14(r1)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x18(r1)
	  stfs      f0, 0x14(r3)
	  lfs       f0, 0x1C(r1)
	  stfs      f0, 0x24(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x20(r1)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0x24(r1)
	  stfs      f0, 0x18(r3)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x28(r3)
	  lwz       r3, 0x1C(r30)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x2C(r3)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/**
 * @note Address: 0x802F82BC
 * @note Size: 0x12C
 */
void SnakeCrowSphereShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos)
{
	Vector3f mtx[4];
	mtx[0] = Vector3f(parm.mShadowScale, 0.0f, 0.0f);
	mtx[2] = Vector3f(0.0f, 0.0f, parm.mShadowScale);

	mtx[3].x = pos.x;
	mtx[3].y = 0.0f;
	mtx[3].z = pos.z;

	mtx[3].y = mapMgr->getMinY(mtx[3]) + 2.5f;

	mtx[1] = Vector3f(0.0f, 50.0f, 0.0f);

	if (mtx[3].y < parm.mPosition.y) {
		f32 diff = parm.mPosition.y - mtx[3].y;
		mtx[3].y = parm.mPosition.y;
		mtx[1].y += diff;
	}

	mMainMtx->setColumn(0, mtx[0]);
	mMainMtx->setColumn(1, mtx[1]);
	mMainMtx->setColumn(2, mtx[2]);
	mMainMtx->setColumn(3, mtx[3]);
}

namespace SnakeCrow {
/**
 * @note Address: 0x802F83E8
 * @note Size: 0xEC
 */
SnakeCrowShadowMgr::SnakeCrowShadowMgr(Obj* owner)
{
	mOwner    = owner;
	mRootNode = new JointShadowRootNode(owner);

	for (int i = 0; i < 8; i++) {
		mTubeNodes[i] = new SnakeCrowTubeShadowNode;
		mRootNode->add(mTubeNodes[i]);

		mSphereNodes[i] = new SnakeCrowSphereShadowNode;
		mRootNode->add(mSphereNodes[i]);
	}
}

/**
 * @note Address: 0x802F84D4
 * @note Size: 0xC0
 */
void SnakeCrowShadowMgr::init()
{
	SysShape::Model* model = mOwner->mModel;
	char* jointNames[8]    = { "bodyjnt2", "bodyjnt3", "bodyjnt4", "bodyjnt5", "bodyjnt6", "bodyjnt7", "bodyjnt8", "kutijnt1" };

	for (int i = 0; i < 8; i++) {
		mMatrices[i] = model->getJoint(jointNames[i])->getWorldMatrix();
	}
}

/**
 * @note Address: 0x802F8594
 * @note Size: 0x78
 */
void SnakeCrowShadowMgr::startJointShadow()
{
	if (!mRootNode->mChild) {
		for (int i = 0; i < 8; i++) {
			mRootNode->add(mTubeNodes[i]);
			mRootNode->add(mSphereNodes[i]);
		}
	}
}

/**
 * @note Address: 0x802F860C
 * @note Size: 0x64
 */
void SnakeCrowShadowMgr::finishJointShadow()
{
	if (mRootNode->mChild) {
		for (int i = 0; i < 8; i++) {
			mTubeNodes[i]->del();
			mSphereNodes[i]->del();
		}
	}
}

/**
 * @note Address: 0x802F8670
 * @note Size: 0x25C
 */
void SnakeCrowShadowMgr::update()
{
	if (mOwner->isUnderground()) {
		return;
	}

	JointShadowParm parm;
	parm.mPosition = mOwner->getPosition();
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);
	parm._18       = 0.0f;
	parm._1C       = 0.0f;

	Vector3f positions[8];

	for (int i = 0; i < 8; i++) {
		positions[i] = mMatrices[i]->getColumn(3);
	}

	for (int i = 0; i < 8; i++) {
		parm.mShadowScale = cTubeShadowRadius[i];
		if (i < 7) {
			mTubeNodes[i]->makeShadowSRT(parm, positions[i], positions[i + 1]);
		} else {
			Vector3f kutiPos1;
			Vector3f kutiPos2;
			mMatrices[i]->getColumn(0, kutiPos1);
			mMatrices[i]->getColumn(0, kutiPos2);
			kutiPos1 *= 80.0f;
			kutiPos1 += positions[i];
			kutiPos2 += positions[i];
			mTubeNodes[i]->makeShadowSRT(parm, kutiPos1, kutiPos2);
		}

		parm.mShadowScale  = cSphereShadowRadius[i];
		Vector3f spherePos = mMatrices[i]->getColumn(3);
		mSphereNodes[i]->makeShadowSRT(parm, spherePos);
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stmw     r27, 0xcc(r1)
	mr       r27, r3
	lwz      r3, 0x20(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F88B8
	lwz      r4, 0x20(r27)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051D2C4@sda21(r2)
	addi     r28, r1, 0x60
	lfs      f4, 8(r1)
	li       r0, 2
	lfs      f3, 0xc(r1)
	mr       r4, r27
	lfs      f2, 0x10(r1)
	mr       r5, r28
	lfs      f0, lbl_8051D2C8@sda21(r2)
	stfs     f4, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f1, 0x54(r1)
	mtctr    r0

lbl_802F8700:
	lwz      r3, 0(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0(r5)
	stfs     f1, 4(r5)
	stfs     f2, 8(r5)
	lwz      r3, 4(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0xc(r5)
	stfs     f1, 0x10(r5)
	stfs     f2, 0x14(r5)
	lwz      r3, 8(r4)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x18(r5)
	stfs     f1, 0x1c(r5)
	stfs     f2, 0x20(r5)
	lwz      r3, 0xc(r4)
	addi     r4, r4, 0x10
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x24(r5)
	stfs     f1, 0x28(r5)
	stfs     f2, 0x2c(r5)
	addi     r5, r5, 0x30
	bdnz     lbl_802F8700
	lis      r4,
"cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@ha lis r3,
"cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@ha mr
r30, r27 li       r27, 0 addi     r31, r4,
"cTubeShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@l addi
r29, r3,
"cSphereShadowRadius__Q34Game9SnakeCrow29@unnamed@SnakeCrowShadow_cpp@"@l

lbl_802F8794:
	lfs      f0, 0(r31)
	cmpwi    r27, 7
	stfs     f0, 0x58(r1)
	bge      lbl_802F87C8
	addi     r0, r27, 1
	addi     r6, r1, 0x60
	mulli    r0, r0, 0xc
	lwz      r3, 0x28(r30)
	mr       r5, r28
	addi     r4, r1, 0x38
	add      r6, r6, r0
	bl
"makeShadowSRT__Q24Game23SnakeCrowTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	b        lbl_802F8868

lbl_802F87C8:
	lwz      r3, 0(r30)
	addi     r4, r1, 0x38
	lfs      f3, lbl_8051D2D4@sda21(r2)
	addi     r5, r1, 0x2c
	lfs      f5, 0(r3)
	addi     r6, r1, 0x20
	lfs      f2, 0(r28)
	stfs     f5, 0x2c(r1)
	fmuls    f10, f5, f3
	frsp     f0, f5
	lfs      f6, 4(r28)
	lfs      f12, 0x10(r3)
	lfs      f4, 8(r28)
	fadds    f7, f10, f2
	stfs     f12, 0x30(r1)
	fmuls    f9, f12, f3
	lfs      f11, 0x20(r3)
	frsp     f1, f12
	fadds    f2, f0, f2
	fmuls    f8, f11, f3
	stfs     f11, 0x34(r1)
	frsp     f0, f11
	stfs     f5, 0x20(r1)
	fadds    f5, f9, f6
	fadds    f3, f8, f4
	stfs     f10, 0x2c(r1)
	fadds    f1, f1, f6
	fadds    f0, f0, f4
	stfs     f12, 0x24(r1)
	stfs     f11, 0x28(r1)
	stfs     f9, 0x30(r1)
	stfs     f8, 0x34(r1)
	stfs     f7, 0x2c(r1)
	stfs     f5, 0x30(r1)
	stfs     f3, 0x34(r1)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	lwz      r3, 0x28(r30)
	bl
"makeShadowSRT__Q24Game23SnakeCrowTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"

lbl_802F8868:
	lfs      f0, 0(r29)
	addi     r4, r1, 0x38
	addi     r5, r1, 0x14
	stfs     f0, 0x58(r1)
	lwz      r3, 0(r30)
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r3, 0x48(r30)
	bl
"makeShadowSRT__Q24Game25SnakeCrowSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	addi     r27, r27, 1
	addi     r28, r28, 0xc
	cmpwi    r27, 8
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802F8794

lbl_802F88B8:
	lmw      r27, 0xcc(r1)
	lwz      r0, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}
} // namespace SnakeCrow
} // namespace Game
