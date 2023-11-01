#include "Dolphin/os.h"
#include "Game/P2JST/ObjectActor.h"
#include "Game/P2JST/ObjectSystem.h"
#include "Game/MoviePlayer.h"
#include "SysShape/Joint.h"
#include "stl/string.h"
#include "JSystem/JStudio/stb-data.h"
#include "ParticleMgr.h"
#include "Game/GameSystem.h"
#include "Game/gameStages.h"
#include "JSystem/JParticle/JPAMath.h"
#include "nans.h"

namespace Game {
namespace P2JST {

/*
 * --INFO--
 * Address:	804544D4
 * Size:	000168
 */
ObjectParticleActor::ObjectParticleActor(char const* name, MoviePlayer* movie, Creature* obj)
    : ObjectActor(name, movie)
{
	mEfxFlag      = 0;
	mCourseIdFlag = 0;
	mGameObject   = obj;
	reset();
	mCourseIdFlag = 0;

	// this controls the effect that appears in the course entry cutscene
	strlen(name);
	if (!strcmp("tutorial", name)) {
		mCourseIdFlag |= 14;
	} else if (!strcmp("forest", name)) {
		mCourseIdFlag |= 13;
	} else if (!strcmp("yakushima", name)) {
		mCourseIdFlag |= 11;
	} else if (!strcmp("last", name)) {
		mCourseIdFlag |= 7;
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r6
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  bl        -0x25B98
	  lis       r4, 0x804A
	  lis       r3, 0x804F
	  subi      r4, r4, 0x1D84
	  li        r0, 0
	  stw       r4, 0x70(r31)
	  subi      r4, r3, 0x2824
	  addi      r5, r4, 0x8C
	  mr        r3, r31
	  stw       r4, 0x0(r31)
	  addi      r4, r4, 0xCC
	  stw       r5, 0x4(r31)
	  stw       r4, 0x70(r31)
	  stb       r0, 0xB8(r31)
	  stb       r0, 0xB9(r31)
	  stw       r30, 0x80(r31)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  mr        r3, r29
	  stb       r0, 0xB9(r31)
	  bl        -0x389C44
	  subic.    r0, r3, 0x1
	  add       r30, r3, r29
	  mtctr     r0
	  subi      r30, r30, 0x1
	  ble-      .loc_0xB4

	.loc_0x98:
	  lbz       r0, 0x0(r30)
	  cmpwi     r0, 0x40
	  bne-      .loc_0xAC
	  addi      r30, r30, 0x1
	  b         .loc_0xB4

	.loc_0xAC:
	  subi      r30, r30, 0x1
	  bdnz+     .loc_0x98

	.loc_0xB4:
	  lis       r3, 0x804A
	  mr        r4, r30
	  subi      r3, r3, 0x4588
	  bl        -0x389ED4
	  cmpwi     r3, 0
	  bne-      .loc_0xDC
	  lbz       r0, 0xB9(r31)
	  ori       r0, r0, 0xE
	  stb       r0, 0xB9(r31)
	  b         .loc_0x148

	.loc_0xDC:
	  mr        r4, r30
	  addi      r3, r2, 0x2838
	  bl        -0x389EF8
	  cmpwi     r3, 0
	  bne-      .loc_0x100
	  lbz       r0, 0xB9(r31)
	  ori       r0, r0, 0xD
	  stb       r0, 0xB9(r31)
	  b         .loc_0x148

	.loc_0x100:
	  lis       r3, 0x804A
	  mr        r4, r30
	  subi      r3, r3, 0x457C
	  bl        -0x389F20
	  cmpwi     r3, 0
	  bne-      .loc_0x128
	  lbz       r0, 0xB9(r31)
	  ori       r0, r0, 0xB
	  stb       r0, 0xB9(r31)
	  b         .loc_0x148

	.loc_0x128:
	  mr        r4, r30
	  addi      r3, r2, 0x2840
	  bl        -0x389F44
	  cmpwi     r3, 0
	  bne-      .loc_0x148
	  lbz       r0, 0xB9(r31)
	  ori       r0, r0, 0x7
	  stb       r0, 0xB9(r31)

	.loc_0x148:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045463C
 * Size:	000028
 */
void ObjectParticleActor::reset()
{
	mEmitter         = nullptr;
	mEfxID           = 0;
	mModelJointIndex = -1;
	mTranslation2    = 0.0f;
}

/*
 * --INFO--
 * Address:	80454664
 * Size:	000020
 */
void ObjectParticleActor::stop() { killEmitter(); }

/*
 * --INFO--
 * Address:	80454684
 * Size:	0000C0
 */
void ObjectParticleActor::update()
{
	if (mCourseIdFlag) {
		if (gameSystem) {
			CourseInfo* info = gameSystem->mSection->getCurrentCourseInfo();
			if (info && info->mCourseIndex >> 1 == mCourseIdFlag) {
				mEfxFlag = 0;
				return;
			}
		}
	}

	if (mEfxFlag & 1 && !mEmitter) {
		emit();
	}

	if (mEfxFlag & 2) {
		killEmitter();
	}
	mEfxFlag = 0;
}

/*
 * --INFO--
 * Address:	80454744
 * Size:	00003C
 */
void ObjectParticleActor::JSGSetShape(u32 id)
{
	mEfxID   = (u16)id;
	mEfxType = id >> 0x18;
	mEfxFlag |= 1;
	killEmitter();
}

/*
 * --INFO--
 * Address:	80454780
 * Size:	000178
 */
void ObjectParticleActor::parseUserData_(u32 p1, void const* rawData)
{
	JStudio::stb::data::TParse_TParagraph_data paragraph;
	paragraph.stbData = rawData;
	JStudio::stb::data::TParse_TParagraph_data::TData data;
	paragraph.getData(&data);
	if (data.status == 0) {
		return;
	}
	if (data.fileCount == 0 || data.status != 0x60) {
		return;
	}
	mModelJointIndex = -1;
	for (int i = 0; i < data._08; i++) {
		OSReport("string:%u,%s\n", i, data.fileCount);
		if (i == 0) {
			if (strcmp(data.fileCount, "kill") == 0) {
				mEfxFlag |= 2;
			} else {
				mGameObject = mMoviePlayer->mObjectSystem->findCreature(data.fileCount);
			}
		} else if (i == 1) {
			if (strcmp(data.fileCount, "@ground") == 0) {
				mModelJointIndex = -2;
			} else if (mGameObject != nullptr && mGameObject->mModel != nullptr) {
				SysShape::Joint* joint = mGameObject->mModel->getJoint(data.fileCount);
				if (joint != nullptr) {
					mModelJointIndex = joint->mJointIndex;
				} else {
					mModelJointIndex = -1;
				}
			}
		}
		data.fileCount = strchr(data.fileCount, 0) + 1;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r4, r1, 0xc
	stw      r31, 0x2c(r1)
	mr       r31, r3
	addi     r3, r1, 8
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	stw      r5, 8(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r3, 0xc(r1)
	cmplwi   r3, 0
	beq      lbl_804548D8
	lwz      r4, 0x18(r1)
	li       r0, 0
	cmplwi   r4, 0
	beq      lbl_804547D8
	cmplwi   r3, 0x60
	bne      lbl_804547D8
	li       r0, 1

lbl_804547D8:
	clrlwi.  r0, r0, 0x18
	beq      lbl_804548D8
	li       r0, -1
	lis      r3, lbl_8049BA90@ha
	sth      r0, 0x84(r31)
	mr       r29, r4
	addi     r30, r3, lbl_8049BA90@l
	li       r28, 0
	b        lbl_804548CC

lbl_804547FC:
	mr       r3, r30
	mr       r4, r28
	mr       r5, r29
	crclr    6
	bl       OSReport
	cmplwi   r28, 0
	bne      lbl_80454854
	mr       r3, r29
	addi     r4, r2, lbl_80520BAC@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8045483C
	lbz      r0, 0xb8(r31)
	ori      r0, r0, 2
	stb      r0, 0xb8(r31)
	b        lbl_804548B8

lbl_8045483C:
	lwz      r3, 8(r31)
	mr       r4, r29
	lwz      r3, 0x1cc(r3)
	bl       findCreature__Q34Game5P2JST12ObjectSystemCFPCc
	stw      r3, 0x80(r31)
	b        lbl_804548B8

lbl_80454854:
	cmplwi   r28, 1
	bne      lbl_804548B8
	mr       r3, r29
	addi     r4, r2, lbl_80520BB4@sda21
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8045487C
	li       r0, -2
	sth      r0, 0x84(r31)
	b        lbl_804548B8

lbl_8045487C:
	lwz      r3, 0x80(r31)
	cmplwi   r3, 0
	beq      lbl_804548B8
	lwz      r3, 0x174(r3)
	cmplwi   r3, 0
	beq      lbl_804548B8
	mr       r4, r29
	bl       getJoint__Q28SysShape5ModelFPc
	cmplwi   r3, 0
	beq      lbl_804548B0
	lhz      r0, 0x38(r3)
	sth      r0, 0x84(r31)
	b        lbl_804548B8

lbl_804548B0:
	li       r0, -1
	sth      r0, 0x84(r31)

lbl_804548B8:
	mr       r3, r29
	li       r4, 0
	addi     r28, r28, 1
	bl       strchr
	addi     r29, r3, 1

lbl_804548CC:
	lwz      r0, 0x14(r1)
	cmplw    r28, r0
	blt      lbl_804547FC

lbl_804548D8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	804548F8
 * Size:	00001C
 */
void ObjectParticleActor::JSGSetTranslation(Vec const& pos) { mTranslation2 = pos; }

/*
 * --INFO--
 * Address:	80454914
 * Size:	00001C
 */
void ObjectParticleActor::JSGGetTranslation(Vec* pos) const
{
	pos->x = mTranslation2.x;
	pos->y = mTranslation2.y;
	pos->z = mTranslation2.z;
}

/*
 * --INFO--
 * Address:	80454930
 * Size:	0001F0
 */
void ObjectParticleActor::emit()
{
	if (mEmitter)
		return;

	Vector3f pos(0.0f);

	if (mGameObject) {
		pos = mGameObject->getPosition();
		if (mGameObject->mModel && mModelJointIndex > -1) {
			PSMTXCopy(mGameObject->mModel->mJoints[mModelJointIndex].getWorldMatrix()->mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			pos = mMatrix.getBasis(3);
		} else if (mModelJointIndex == -1) {
			PSMTXCopy(mGameObject->mBaseTrMatrix.mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			pos = mMatrix.getBasis(3);
		} else {
			Vector3f pos(mTranslation2.x, mTranslation2.y, mTranslation2.z);
			Vector3f vec2(0.0f, moviePlayer->mTransformAngle, 0.0f);
			mMatrix.makeTR(pos, vec2);
		}
	} else {
		if (mModelJointIndex == -2)
			return;

		Vector3f pos(mTranslation2.x, mTranslation2.y, mTranslation2.z);
		Vector3f vec2(0.0f, moviePlayer->mTransformAngle, 0.0f);
		mMatrix.makeTR(pos, vec2);
	}

	mEmitter = particleMgr->createDemo(mEfxID, pos, mEfxType, 7);
	if (mEmitter) {
		mEmitter->mFlags |= 0x40;
		mEmitter->mEmitterCallback = this;
		mEmitter->setGlobalRTMatrix(mMatrix.mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	80454B20
 * Size:	0000F4
 */
void ObjectParticleActor::executeAfter(JPABaseEmitter* emit)
{
	Creature* obj = mGameObject;
	if (obj) {
		if (obj->mModel) {
			if (mModelJointIndex > -1) {
				PSMTXCopy(obj->mModel->mJoints[mModelJointIndex].getWorldMatrix()->mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			}
		}
		if (mModelJointIndex == -1) {
			PSMTXCopy(obj->mBaseTrMatrix.mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			return;
		} else {
			Vector3f vec(0.0f, moviePlayer->mTransformAngle, 0.0f);
			mMatrix.makeTR(mTranslation2, vec);
			return;
		}
	} else {
		Vector3f vec(0.0f, moviePlayer->mTransformAngle, 0.0f);
		mMatrix.makeTR(mTranslation2, vec);
	}

	mEmitter->setGlobalRTMatrix(mMatrix.mMatrix.mtxView);
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0x80(r3)
	cmplwi   r3, 0
	beq      lbl_80454BC4
	lwz      r5, 0x174(r3)
	cmplwi   r5, 0
	beq      lbl_80454B7C
	lha      r4, 0x84(r30)
	extsh.   r0, r4
	blt      lbl_80454B7C
	mulli    r0, r4, 0x3c
	lwz      r3, 0x10(r5)
	add      r3, r3, r0
	bl       getWorldMatrix__Q28SysShape5JointFv
	addi     r4, r30, 0x88
	bl       PSMTXCopy
	b        lbl_80454BEC

lbl_80454B7C:
	lha      r0, 0x84(r30)
	cmpwi    r0, -1
	bne      lbl_80454B98
	addi     r3, r3, 0x138
	addi     r4, r30, 0x88
	bl       PSMTXCopy
	b        lbl_80454BEC

lbl_80454B98:
	lwz      r5, moviePlayer__4Game@sda21(r13)
	addi     r3, r30, 0x88
	lfs      f0, lbl_80520BA8@sda21(r2)
	addi     r4, r30, 0xbc
	lfs      f1, 0x1c8(r5)
	addi     r5, r1, 0x14
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	stfs     f0, 0x1c(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"
	b        lbl_80454BEC

lbl_80454BC4:
	lwz      r5, moviePlayer__4Game@sda21(r13)
	addi     r3, r30, 0x88
	lfs      f0, lbl_80520BA8@sda21(r2)
	addi     r4, r30, 0xbc
	lfs      f1, 0x1c8(r5)
	addi     r5, r1, 8
	stfs     f0, 8(r1)
	stfs     f1, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       "makeTR__7MatrixfFR10Vector3<f>R10Vector3<f>"

lbl_80454BEC:
	addi     r3, r30, 0x88
	addi     r4, r31, 0x68
	addi     r5, r31, 0xa4
	bl       "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80454C14
 * Size:	000044
 */
void ObjectParticleActor::killEmitter()
{
	if (mEmitter) {
		particleMgr->fade(mEmitter);
		mEmitter = nullptr;
	}
}

} // namespace P2JST
} // namespace Game
