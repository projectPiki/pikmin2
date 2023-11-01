#include "Game/P2JST/ObjectActor.h"
#include "Game/MoviePlayer.h"
#include "Game/Piki.h"
#include "Game/MapMgr.h"
#include "nans.h"

namespace Game {
namespace P2JST {

/*
 * --INFO--
 * Address:	8042FDA8
 * Size:	000094
 */
ObjectGameActor::ObjectGameActor(char const* name, MoviePlayer* movie, Creature* obj)
    : ObjectActor(name, movie)
{
	mGameObject   = obj;
	mSRTCommand   = 0;
	mActorArchive = MoviePlayer::mArchive;
	reset();
	obj->movie_begin(true);
	mRotation2 = 0.0f;
}

/*
 * --INFO--
 * Address:	8042FE3C
 * Size:	000054
 */
void ObjectGameActor::reset()
{
	mSRTCommand       = 0;
	_A8               = 0;
	mCurrCommandCount = 0;
	mUserDataNum      = 0;
	for (int i = 0; i < 4; i++) {
		mCommandIDs[i]       = -1;
		mMovieCommandData[i] = -1;
	}
	mRotation2 = 0.0f;
	/*
	li       r6, 0
	lis      r4, 0x0000FFFF@ha
	stw      r6, 0x88(r3)
	li       r5, -1
	addi     r0, r4, 0x0000FFFF@l
	lfs      f0, lbl_805206B8@sda21(r2)
	stb      r6, 0xa8(r3)
	stw      r6, 0x74(r3)
	stw      r6, 0xb0(r3)
	stw      r5, 0x78(r3)
	sth      r0, 0xb4(r3)
	stw      r5, 0x7c(r3)
	sth      r0, 0xb6(r3)
	stw      r5, 0x80(r3)
	sth      r0, 0xb8(r3)
	stw      r5, 0x84(r3)
	sth      r0, 0xba(r3)
	stfs     f0, 0x9c(r3)
	stfs     f0, 0xa0(r3)
	stfs     f0, 0xa4(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8042FE90
 * Size:	000124
 */
void ObjectGameActor::stop()
{
	if (mGameObject->mModel) {
		killAllAnimCalc(mGameObject);
	}

	mGameObject->movieStartAnimation(0);
	mGameObject->movie_end(true);

	if (mSRTCommand == 1) {
		mGameObject->movieSetFaceDir(mObjectFaceDir);
		if (mGameObject->isNavi()) {
			mGameObject->getCreatureID();
		}
	}

	SysShape::Model* model = mGameObject->mModel;
	if (model) {
		model->mJ3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	8042FFB4
 * Size:	0004D8
 */
void ObjectGameActor::update()
{
	if (mGameObject->mModel) {
		if (mGameObject->isNavi() && moviePlayer->isFlag(MVP_IsFinished)) {
			Piki* piki = static_cast<Piki*>(mGameObject);
			piki->mAnimator.mSelfAnimator.animate(10.0f);
			piki->mAnimator.mBoundAnimator.animate(10.0f);
			piki->mModel->mJ3dModel->calc();
		}
		SysShape::Joint* joint = mGameObject->mModel->mJoints;
		if (joint) {
			Matrixf* mtx   = joint->getWorldMatrix();
			mObjectFaceDir = JMath::atanTable_.atan2_(mtx->mMatrix.structView.zx, mtx->mMatrix.structView.zz);
			if (mGameObject->isNavi()) {
				mGameObject->getCreatureID();
			}
		}
	}

	for (int i = 0; i < mCurrCommandCount; i++) {
		if (mCommandIDs[i] >= 100) {
			mGameObject->movieUserCommand(mCommandIDs[i], mMoviePlayer);
		} else if (mCommandIDs[i] == 0) {
			mGameObject->movieStartAnimation(mMovieCommandData[i]);
		} else if (mCommandIDs[i] == 1) {
			void* file = mActorArchive->getIdxResource(mMovieCommandData[i]);
			if (file) {
				sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);
				SysShape::AnimInfo* anim = new SysShape::AnimInfo;
				anim->attach(mGameObject->mModel->mJ3dModel->mModelData, file);
				mGameObject->movieStartDemoAnimation(anim);
				mGameObject->setMovieMotion(true);
				if (mMoviePlayer && mMoviePlayer->isFlag(MVP_IsFinished)) {
					mGameObject->movieSetAnimationLastFrame();
				}
				sys->endChangeCurrentHeap();
			}
		}
	}

	if (_A8) {
		Vector3f pos(moviePlayer->mTransform);
		mGameObject->movieSetTranslation(pos, moviePlayer->mTransformAngle);
	}

	switch (mSRTCommand) {
	case 5:
		Vector3f pos(moviePlayer->mTransform);
		mGameObject->movieSetTranslation(pos, moviePlayer->mTransformAngle);
		_A8 = true;
		break;
	case 4:
		JUT_PANICLINE(365, "DON\'T USE [SRT_COMMAND_GOTO]\n");
		if (mapMgr) {
			mTranslation.y = mapMgr->getMinY(mTranslation);
		}
		if (mMoviePlayer && mMoviePlayer->isFlag(MVP_IsFinished)) {
			mGameObject->movieSetTranslation(mTranslation, 0.0f);
			moviePlayer->unsuspend(1, false);
			mSRTCommand = 0;
		} else if (mGameObject->movieGotoPosition(mTranslation)) {
			moviePlayer->unsuspend(1, false);
			mSRTCommand = 0;
		}
		break;
	case 3:
		mGameObject->movieSetTranslation(mTranslation, moviePlayer->mFadeTimer * f32(1 / 180) * PI);
		break;
	case 1:
		mGameObject->movieSetTranslation(mTranslation, moviePlayer->mTransformAngle);
		break;
	case 2:
		if (mapMgr) {
			mTranslation.y = mapMgr->getMinY(mTranslation);
		}
		mGameObject->movieSetTranslation(mTranslation, moviePlayer->mTransformAngle);
		break;
	}

	mCurrCommandCount = 0;
	mUserDataNum      = 0;
	for (int i = 0; i < 4; i++) {
		mCommandIDs[i]       = -1;
		mMovieCommandData[i] = -1;
	}
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r28, r3
	lwz      r3, 0x70(r3)
	lwz      r0, 0x174(r3)
	cmplwi   r0, 0
	beq      lbl_804300B0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8043004C
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8043004C
	lwz      r27, 0x70(r28)
	lfs      f1, lbl_805206BC@sda21(r2)
	addi     r3, r27, 0x1ac
	lwz      r12, 0x1ac(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	addi     r3, r27, 0x1c8
	lfs      f1, lbl_805206BC@sda21(r2)
	lwz      r12, 0x1c8(r27)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl

lbl_8043004C:
	lwz      r3, 0x70(r28)
	lwz      r3, 0x174(r3)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_804300B0
	bl       getWorldMatrix__Q28SysShape5JointFv
	lis      r4, atanTable___5JMath@ha
	lfs      f1, 8(r3)
	addi     r0, r4, atanTable___5JMath@l
	lfs      f2, 0x28(r3)
	mr       r3, r0
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	stfs     f1, 0xac(r28)
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_804300B0
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x1ac(r12)
	mtctr    r12
	bctrl

lbl_804300B0:
	mr       r31, r28
	mr       r30, r28
	li       r29, 0
	b        lbl_80430220

lbl_804300C0:
	lwz      r4, 0x78(r31)
	cmpwi    r4, 0x64
	blt      lbl_804300E8
	lwz      r3, 0x70(r28)
	lwz      r5, 8(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x130(r12)
	mtctr    r12
	bctrl
	b        lbl_80430214

lbl_804300E8:
	cmpwi    r4, 0
	bne      lbl_8043010C
	lwz      r3, 0x70(r28)
	lhz      r4, 0xb4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x118(r12)
	mtctr    r12
	bctrl
	b        lbl_80430214

lbl_8043010C:
	cmpwi    r4, 1
	bne      lbl_80430214
	lwz      r3, 0x8c(r28)
	lhz      r4, 0xb4(r30)
	bl       getIdxResource__10JKRArchiveFUl
	or.      r26, r3, r3
	beq      lbl_80430214
	lwz      r4, moviePlayer__4Game@sda21(r13)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0x1b0(r4)
	bl       startChangeCurrentHeap__6SystemFP7JKRHeap
	li       r3, 0x54
	bl       __nw__FUl
	or.      r27, r3, r3
	beq      lbl_80430194
	bl       __ct__5CNodeFv
	lis      r3, __vt__Q28SysShape8AnimInfo@ha
	addi     r25, r27, 0x28
	addi     r0, r3, __vt__Q28SysShape8AnimInfo@l
	stw      r0, 0(r27)
	mr       r3, r25
	bl       __ct__5CNodeFv
	lis      r4, __vt__Q28SysShape8KeyEvent@ha
	li       r3, 0
	addi     r4, r4, __vt__Q28SysShape8KeyEvent@l
	li       r0, -1
	stw      r4, 0(r25)
	stw      r3, 0x18(r25)
	stw      r3, 0x1c(r25)
	sth      r0, 0x20(r25)
	stw      r3, 0x18(r27)
	stw      r3, 0x1c(r27)
	stw      r3, 0x50(r27)
	stw      r3, 0x24(r27)

lbl_80430194:
	lwz      r4, 0x70(r28)
	mr       r3, r27
	mr       r5, r26
	lwz      r4, 0x174(r4)
	lwz      r4, 8(r4)
	lwz      r4, 4(r4)
	bl       attach__Q28SysShape8AnimInfoFP12J3DModelDataPv
	lwz      r3, 0x70(r28)
	mr       r4, r27
	lwz      r12, 0(r3)
	lwz      r12, 0x11c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x70(r28)
	li       r4, 1
	lwz      r12, 0(r3)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	lwz      r3, 8(r28)
	cmplwi   r3, 0
	beq      lbl_8043020C
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8043020C
	lwz      r3, 0x70(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x120(r12)
	mtctr    r12
	bctrl

lbl_8043020C:
	lwz      r3, sys@sda21(r13)
	bl       endChangeCurrentHeap__6SystemFv

lbl_80430214:
	addi     r31, r31, 4
	addi     r30, r30, 2
	addi     r29, r29, 1

lbl_80430220:
	lwz      r0, 0x74(r28)
	cmpw     r29, r0
	blt      lbl_804300C0
	lbz      r0, 0xa8(r28)
	cmplwi   r0, 0
	beq      lbl_80430270
	lwz      r5, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0x14
	lfs      f1, 0x1c0(r5)
	lfs      f2, 0x1c4(r5)
	lfs      f0, 0x1bc(r5)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f2, 0x1c(r1)
	lwz      r3, 0x70(r28)
	lfs      f1, 0x1c8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl

lbl_80430270:
	lwz      r0, 0x88(r28)
	cmpwi    r0, 3
	beq      lbl_804303A8
	bge      lbl_80430290
	cmpwi    r0, 1
	beq      lbl_804303D8
	bge      lbl_804303FC
	b        lbl_80430440

lbl_80430290:
	cmpwi    r0, 5
	beq      lbl_804302A0
	bge      lbl_80430440
	b        lbl_804302E4

lbl_804302A0:
	lwz      r5, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 8
	lfs      f1, 0x1c0(r5)
	lfs      f2, 0x1c4(r5)
	lfs      f0, 0x1bc(r5)
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f2, 0x10(r1)
	lwz      r3, 0x70(r28)
	lfs      f1, 0x1c8(r5)
	lwz      r12, 0(r3)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl
	li       r0, 1
	stb      r0, 0xa8(r28)
	b        lbl_80430440

lbl_804302E4:
	lis      r3, lbl_8049A22C@ha
	lis      r5, lbl_8049A244@ha
	addi     r3, r3, lbl_8049A22C@l
	li       r4, 0x16d
	addi     r5, r5, lbl_8049A244@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80430324
	lwz      r12, 4(r3)
	addi     r4, r28, 0x90
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x94(r28)

lbl_80430324:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x1f0(r3)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	beq      lbl_8043036C
	lwz      r3, 0x70(r28)
	addi     r4, r28, 0x90
	lfs      f1, lbl_805206B8@sda21(r2)
	lwz      r12, 0(r3)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb
	li       r0, 0
	stw      r0, 0x88(r28)
	b        lbl_80430440

lbl_8043036C:
	lwz      r3, 0x70(r28)
	addi     r4, r28, 0x90
	lwz      r12, 0(r3)
	lwz      r12, 0x12c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80430440
	lwz      r3, moviePlayer__4Game@sda21(r13)
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb
	li       r0, 0
	stw      r0, 0x88(r28)
	b        lbl_80430440

lbl_804303A8:
	lwz      r3, 0x70(r28)
	addi     r4, r28, 0x90
	lfs      f1, lbl_805206C4@sda21(r2)
	lfs      f0, 0xa0(r28)
	lwz      r12, 0(r3)
	fmuls    f0, f1, f0
	lfs      f1, lbl_805206C0@sda21(r2)
	lwz      r12, 0x124(r12)
	fmuls    f1, f1, f0
	mtctr    r12
	bctrl
	b        lbl_80430440

lbl_804303D8:
	lwz      r3, 0x70(r28)
	addi     r4, r28, 0x90
	lwz      r5, moviePlayer__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x1c8(r5)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl
	b        lbl_80430440

lbl_804303FC:
	lwz      r3, mapMgr__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80430420
	lwz      r12, 4(r3)
	addi     r4, r28, 0x90
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x94(r28)

lbl_80430420:
	lwz      r3, 0x70(r28)
	addi     r4, r28, 0x90
	lwz      r5, moviePlayer__4Game@sda21(r13)
	lwz      r12, 0(r3)
	lfs      f1, 0x1c8(r5)
	lwz      r12, 0x124(r12)
	mtctr    r12
	bctrl

lbl_80430440:
	li       r5, 0
	lis      r3, 0x0000FFFF@ha
	stw      r5, 0x74(r28)
	li       r4, -1
	addi     r0, r3, 0x0000FFFF@l
	stw      r5, 0xb0(r28)
	stw      r4, 0x78(r28)
	sth      r0, 0xb4(r28)
	stw      r4, 0x7c(r28)
	sth      r0, 0xb6(r28)
	stw      r4, 0x80(r28)
	sth      r0, 0xb8(r28)
	stw      r4, 0x84(r28)
	sth      r0, 0xba(r28)
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043048C
 * Size:	000074
 */
void ObjectGameActor::JSGSetAnimation(u32 id)
{
	JUT_ASSERTLINE(441, mCurrCommandCount < 4, "too many commands !\n");
	mCommandIDs[mCurrCommandCount++] = id;
}

/*
 * --INFO--
 * Address:	80430500
 * Size:	000008
 */
void ObjectGameActor::JSGSetShape(u32 a1) { mSRTCommand = a1; }

/*
 * --INFO--
 * Address:	80430508
 * Size:	00001C
 */
void ObjectGameActor::JSGSetTranslation(Vec const& pos) { mTranslation2 = pos; }

/*
 * --INFO--
 * Address:	80430524
 * Size:	000058
 */
void ObjectGameActor::JSGGetTranslation(Vec* pos) const
{
	Vector3f pos2 = mGameObject->getPosition();
	pos->x        = pos2.x;
	pos->y        = pos2.y;
	pos->z        = pos2.z;
}

/*
 * --INFO--
 * Address:	8043057C
 * Size:	00001C
 */
void ObjectGameActor::JSGSetRotation(Vec const& rot) { mRotation2 = rot; }

/*
 * --INFO--
 * Address:	80430598
 * Size:	00001C
 */
void ObjectGameActor::JSGGetRotation(Vec* rot) const
{
	rot->x = mRotation2.x;
	rot->y = mRotation2.y;
	rot->z = mRotation2.z;
}

/*
 * --INFO--
 * Address:	804305B4
 * Size:	0000E0
 */
int ObjectGameActor::JSGFindNodeID(char const* name) const
{
	P2ASSERTLINE(492, mGameObject);
	P2ASSERTLINE(493, mGameObject->mModel);
	SysShape::Joint* joint = mGameObject->mModel->getJoint(const_cast<char*>(name));
	JUT_ASSERTLINE(499, joint, "(%s) joint %s not found\n", JSGGetName(), name);
	return joint->mJ3d->mJointIdx;
}

/*
 * --INFO--
 * Address:	80430694
 * Size:	0000D8
 */
bool ObjectGameActor::JSGGetNodeTransformation(u32 id, Mtx mtx) const
{
	P2ASSERTLINE(509, mGameObject);
	P2ASSERTLINE(510, mGameObject->mModel);
	SysShape::Joint* joint = &mGameObject->mModel->mJoints[id];
	JUT_ASSERTLINE(516, joint, "(%s) joint %d not found\n", JSGGetName(), id);
	PSMTXCopy(joint->getWorldMatrix()->mMatrix.mtxView, mtx);
	return true;
}

/*
 * --INFO--
 * Address:	8043076C
 * Size:	000138
 */
void ObjectGameActor::parseUserData_(u32 data1, void const* data2)
{
	int count = mCurrCommandCount - 1;
	JUT_ASSERTLINE(531, count > 0, "command <-> userData mismatch ! (%d)\n", mUserDataNum);
	JUT_ASSERTLINE(534, count < 4, "too many userdata (%d)\n", mUserDataNum);
	mUserDataNum++;

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8049A210@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	addi     r30, r4, lbl_8049A210@l
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r5
	lwz      r3, 0x74(r3)
	addic.   r29, r3, -1
	bge      lbl_804307BC
	lwz      r6, 0xb0(r31)
	addi     r3, r30, 0x1c
	addi     r5, r30, 0xb0
	li       r4, 0x213
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804307BC:
	cmpwi    r29, 4
	blt      lbl_804307DC
	lwz      r6, 0xb0(r31)
	addi     r3, r30, 0x1c
	addi     r5, r30, 0xd8
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804307DC:
	lwz      r5, 0xb0(r31)
	addi     r3, r1, 8
	addi     r4, r1, 0x1c
	addi     r0, r5, 1
	stw      r0, 0xb0(r31)
	stw      r28, 8(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x1c(r1)
	cmplwi   r0, 0
	beq      lbl_80430884
	lwz      r4, 0x28(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8043082C
	cmplwi   r0, 0x32
	bne      lbl_8043082C
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	beq      lbl_8043082C
	li       r3, 1

lbl_8043082C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80430884
	slwi     r3, r29, 1
	stw      r4, 0x18(r1)
	addi     r5, r3, 0xb4
	b        lbl_8043085C

lbl_80430844:
	lwz      r4, 0x18(r1)
	lwz      r3, 0x18(r1)
	lhz      r4, 0(r4)
	addi     r0, r3, 2
	sthx     r4, r31, r5
	stw      r0, 0x18(r1)

lbl_8043085C:
	lwz      r0, 0x24(r1)
	lwz      r4, 0x28(r1)
	slwi     r3, r0, 1
	lwz      r0, 0x18(r1)
	add      r4, r4, r3
	cmplw    r0, r4
	stw      r4, 0x14(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0xc(r1)
	bne      lbl_80430844

lbl_80430884:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace P2JST
} // namespace Game
