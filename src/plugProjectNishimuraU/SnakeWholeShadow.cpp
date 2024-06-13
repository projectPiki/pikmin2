#include "Game/Entities/SnakeWhole.h"
#include "Game/MapMgr.h"

namespace Game {
namespace SnakeWhole {
namespace {
const f32 cSphereShadowRadius[9] = { 7.5f, 7.5f, 20.0f, 30.0f, 25.0f, 17.5f, 11.0f, 8.0f, 22.5f };
const f32 cTubeShadowRadius[9]   = { 7.5f, 7.5f, 20.0f, 27.5f, 22.5f, 15.0f, 9.0f, 8.0f, 10.0f };
} // namespace
} // namespace SnakeWhole

/**
 * @note Address: 0x802F89AC
 * @note Size: 0x22C
 */
void SnakeWholeTubeShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos1, Vector3f& pos2)
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
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x296B7C
	  addi      r0, r31, 0x1
	  mr        r31, r3
	  mr        r3, r30
	  rlwinm    r4,r0,0,24,31
	  bl        -0x296B90
	  lwz       r0, 0x14(r1)
	  rlwimi    r3,r31,16,0,15
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  rlwinm    r5,r4,16,16,31
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r4, r31
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bl        -0x2969C4
	  addi      r0, r31, 0x1
	  rlwinm    r5,r30,0,16,31
	  mr        r3, r29
	  rlwinm    r4,r0,0,24,31
	  bl        -0x2969D8
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x28C2E0
	  lis       r4, 0x804E
	  addi      r3, r30, 0x28
	  subi      r0, r4, 0x5558
	  stw       r0, 0x0(r30)
	  bl        -0x24891C
	  li        r0, 0
	  addi      r3, r30, 0x44
	  stw       r0, 0x40(r30)
	  bl        0x520
	  lwz       r0, 0x0(r31)
	  li        r3, 0
	  stw       r3, 0x48(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1D8
	  li        r4, 0x8D
	  subi      r5, r5, 0x1C8
	  crclr     6, 0x6
	  bl        -0x30DE4C

	.loc_0x124:
	  lwz       r0, 0x4(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x14C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x1D8
	  li        r4, 0x8E
	  subi      r5, r5, 0x1C8
	  crclr     6, 0x6
	  bl        -0x30DE74

	.loc_0x14C:
	  mr        r3, r30
	  li        r4, 0x2
	  bl        -0x28BE1C
	  lwz       r3, 0x10(r31)
	  bl        -0x28AB78
	  li        r3, 0x1
	  bl        -0x28AB1C
	  lbz       r3, -0x7AD0(r13)
	  bl        -0x28AAF0
	  bl        0x525C
	  bl        0x5314
	  lis       r3, 0x8034
	  subi      r3, r3, 0x74E8
	  bl        -0x2881B4
	  lwz       r4, 0x0(r31)
	  mr        r3, r30
	  lwz       r5, 0x4(r31)
	  li        r6, 0x1
	  bl        -0x28C32C
	  mr        r3, r30
	  li        r4, 0x1
	  bl        -0x28C318
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, -0x210(r2)
	  mr        r3, r30
	  stfs      f0, 0x20(r30)
	  stfs      f0, 0x24(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r3, 0x1D8
	  stw       r30, 0x8(r1)
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x220
	  addi      r3, r31, 0x1C
	  addi      r5, r31, 0x10
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x30DF48

	.loc_0x220:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      0x18
	*/
}

/**
 * @note Address: 0x802F8BD8
 * @note Size: 0x12C
 */
void SnakeWholeSphereShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos)
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

namespace SnakeWhole {
/**
 * @note Address: 0x802F8D04
 * @note Size: 0xEC
 */
SnakeWholeShadowMgr::SnakeWholeShadowMgr(Obj* owner)
{
	mOwner    = owner;
	mRootNode = new JointShadowRootNode(owner);

	for (int i = 0; i < 9; i++) {
		mTubeNodes[i] = new SnakeWholeTubeShadowNode;
		mRootNode->add(mTubeNodes[i]);

		mSphereNodes[i] = new SnakeWholeSphereShadowNode;
		mRootNode->add(mSphereNodes[i]);
	}
}

/**
 * @note Address: 0x802F8DF0
 * @note Size: 0xC8
 */
void SnakeWholeShadowMgr::init()
{
	SysShape::Model* model = mOwner->mModel;
	char* jointNames[9]
	    = { "foot_joint1", "leg_joint2", "leg_joint1", "bodyjnt4", "bodyjnt5", "bodyjnt6", "bodyjnt7", "bodyjnt8", "kutijnt1" };

	for (int i = 0; i < 9; i++) {
		mMatrices[i] = model->getJoint(jointNames[i])->getWorldMatrix();
	}
}

/**
 * @note Address: 0x802F8EB8
 * @note Size: 0x78
 */
void SnakeWholeShadowMgr::startJointShadow()
{
	if (!mRootNode->mChild) {
		for (int i = 0; i < 9; i++) {
			mRootNode->add(mTubeNodes[i]);
			mRootNode->add(mSphereNodes[i]);
		}
	}
}

/**
 * @note Address: 0x802F8F30
 * @note Size: 0x64
 */
void SnakeWholeShadowMgr::finishJointShadow()
{
	if (mRootNode->mChild) {
		for (int i = 0; i < 9; i++) {
			mTubeNodes[i]->del();
			mSphereNodes[i]->del();
		}
	}
}

/**
 * @note Address: 0x802F8F94
 * @note Size: 0x25C
 */
void SnakeWholeShadowMgr::update()
{
	if (mOwner->isUnderground()) {
		return;
	}

	JointShadowParm parm;
	parm.mPosition = mOwner->getPosition();
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);
	parm._18       = 0.0f;
	parm._1C       = 0.0f;

	Vector3f positions[9];

	for (int i = 0; i < 9; i++) {
		positions[i] = mMatrices[i]->getColumn(3);
	}

	for (int i = 0; i < 9; i++) {
		parm.mShadowScale = cTubeShadowRadius[i];
		if (i < 8) {
			mTubeNodes[i]->makeShadowSRT(parm, positions[i], positions[i + 1]);
		} else {
			Vector3f kutiPos1;
			Vector3f kutiPos2;
			mMatrices[i]->getColumn(0, kutiPos1);
			mMatrices[i]->getColumn(0, kutiPos2);
			kutiPos1 *= 100.0f;
			kutiPos1 += positions[i];
			kutiPos2 += positions[i];
			mTubeNodes[i]->makeShadowSRT(parm, kutiPos1, kutiPos2);
		}

		parm.mShadowScale  = cSphereShadowRadius[i];
		Vector3f spherePos = mMatrices[i]->getColumn(3);
		mSphereNodes[i]->makeShadowSRT(parm, spherePos);
	}
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stmw     r27, 0xdc(r1)
	mr       r27, r3
	lwz      r3, 0x24(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_802F91DC
	lwz      r4, 0x24(r27)
	addi     r3, r1, 8
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051D2DC@sda21(r2)
	lis      r3, "__ct__10Vector3<f>Fv"@ha
	lfs      f4, 8(r1)
	addi     r4, r3, "__ct__10Vector3<f>Fv"@l
	lfs      f3, 0xc(r1)
	addi     r3, r1, 0x60
	lfs      f2, 0x10(r1)
	li       r5, 0
	lfs      f0, lbl_8051D2E0@sda21(r2)
	li       r6, 0xc
	stfs     f4, 0x38(r1)
	li       r7, 9
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	stfs     f1, 0x50(r1)
	stfs     f1, 0x54(r1)
	bl       __construct_array
	addi     r28, r1, 0x60
	li       r0, 3
	mr       r4, r27
	mr       r5, r28
	mtctr    r0

lbl_802F9040:
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
	addi     r4, r4, 0xc
	lfs      f2, 0x2c(r3)
	lfs      f1, 0x1c(r3)
	lfs      f0, 0xc(r3)
	stfs     f0, 0x18(r5)
	stfs     f1, 0x1c(r5)
	stfs     f2, 0x20(r5)
	addi     r5, r5, 0x24
	bdnz     lbl_802F9040
	lis      r4,
"cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha lis
r3,
"cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@ha mr
r30, r27 li       r27, 0 addi     r31, r4,
"cTubeShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l addi
r29, r3,
"cSphereShadowRadius__Q34Game10SnakeWhole30@unnamed@SnakeWholeShadow_cpp@"@l

lbl_802F90B8:
	lfs      f0, 0(r31)
	cmpwi    r27, 8
	stfs     f0, 0x58(r1)
	bge      lbl_802F90EC
	addi     r0, r27, 1
	addi     r6, r1, 0x60
	mulli    r0, r0, 0xc
	lwz      r3, 0x2c(r30)
	mr       r5, r28
	addi     r4, r1, 0x38
	add      r6, r6, r0
	bl
"makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"
	b        lbl_802F918C

lbl_802F90EC:
	lwz      r3, 0(r30)
	addi     r4, r1, 0x38
	lfs      f3, lbl_8051D2EC@sda21(r2)
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
	lwz      r3, 0x2c(r30)
	bl
"makeShadowSRT__Q24Game24SnakeWholeTubeShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>R10Vector3<f>"

lbl_802F918C:
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
	lwz      r3, 0x50(r30)
	bl
"makeShadowSRT__Q24Game26SnakeWholeSphereShadowNodeFRQ24Game15JointShadowParmR10Vector3<f>"
	addi     r27, r27, 1
	addi     r28, r28, 0xc
	cmpwi    r27, 9
	addi     r30, r30, 4
	addi     r29, r29, 4
	addi     r31, r31, 4
	blt      lbl_802F90B8

lbl_802F91DC:
	lmw      r27, 0xdc(r1)
	lwz      r0, 0xf4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}
} // namespace SnakeWhole
} // namespace Game
