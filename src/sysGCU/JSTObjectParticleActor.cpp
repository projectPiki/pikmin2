#include "Dolphin/os.h"
#include "Game/P2JST/ObjectActor.h"
#include "Game/P2JST/ObjectSystem.h"
#include "Game/MoviePlayer.h"
#include "SysShape/Joint.h"
#include "stl/string.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "ParticleMgr.h"
#include "Game/GameSystem.h"
#include "Game/gameStages.h"
#include "JSystem/JParticle/JPAMath.h"
#include "nans.h"

namespace Game {
namespace P2JST {

/**
 * @note Address: 0x804544D4
 * @note Size: 0x168
 */
ObjectParticleActor::ObjectParticleActor(char const* name, MoviePlayer* movie, Creature* obj)
    : ObjectActor(name, movie)
{
	mEfxFlag      = 0;
	mCourseIdFlag = 0;
	mGameObject   = obj;
	reset();
	mCourseIdFlag = 0;

	int length       = strlen(name);
	int i            = (length - 1);
	char* searchName = const_cast<char*>(name);
	searchName += length - 1;
	while (i > 0) {
		if ((u8)searchName[0] == '@') {
			searchName++;
			break;
		}
		searchName--;
		i--;
	}

	// this controls the effect that appears in the course entry cutscene
	if (!strcmp("tutorial", searchName)) {
		mCourseIdFlag |= 14;
	} else if (!strcmp("forest", searchName)) {
		mCourseIdFlag |= 13;
	} else if (!strcmp("yakushima", searchName)) {
		mCourseIdFlag |= 11;
	} else if (!strcmp("last", searchName)) {
		mCourseIdFlag |= 7;
	}
}

/**
 * @note Address: 0x8045463C
 * @note Size: 0x28
 */
void ObjectParticleActor::reset()
{
	mEmitter         = nullptr;
	mEfxID           = 0;
	mModelJointIndex = -1;
	mTranslation2    = 0.0f;
}

/**
 * @note Address: 0x80454664
 * @note Size: 0x20
 */
void ObjectParticleActor::stop() { killEmitter(); }

/**
 * @note Address: 0x80454684
 * @note Size: 0xC0
 */
void ObjectParticleActor::update()
{
	if (mCourseIdFlag && gameSystem) {
		CourseInfo* info = gameSystem->mSection->getCurrentCourseInfo();
		if (info && mCourseIdFlag & u8(1 << info->mCourseIndex)) {
			mEfxFlag = 0;
			return;
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

/**
 * @note Address: 0x80454744
 * @note Size: 0x3C
 */
void ObjectParticleActor::JSGSetShape(u32 id)
{
	mEfxID   = (u16)id;
	mEfxType = id >> 0x18;
	mEfxFlag |= 1;
	killEmitter();
}

/**
 * @note Address: 0x80454780
 * @note Size: 0x178
 */
void ObjectParticleActor::parseUserData_(u32 p1, void const* rawData)
{
	JStudio::stb::data::TParse_TParagraph_data paragraph(rawData);
	JStudio::stb::data::TParse_TParagraph_data::TData data;
	paragraph.getData(&data);

	if (data.mStatus == 0) {
		return;
	}
	if (!data.isLoaded()) {
		return;
	}

	// "file count" here is really the name of the joint, the actual purpose of this member seems to depend on the use
	char* idx        = (char*)data.mData;
	mModelJointIndex = -1;
	for (u32 i = 0; i < data.mFileCount; i++, idx = strchr(idx, 0) + 1) {
		OSReport("string:%u,%s\n", i, idx);
		if (i == 0) {
			if (strcmp(idx, "kill") == 0) {
				mEfxFlag |= 2;
			} else {
				mGameObject = mMoviePlayer->mObjectSystem->findCreature(idx);
			}
		} else if (i == 1) {
			if (strcmp(idx, "@ground") == 0) {
				mModelJointIndex = -2;
			} else if (mGameObject != nullptr && mGameObject->mModel != nullptr) {
				SysShape::Joint* joint = mGameObject->mModel->getJoint(idx);
				if (joint != nullptr) {
					mModelJointIndex = joint->mJointIndex;
				} else {
					mModelJointIndex = -1;
				}
			}
		}
	}
}

/**
 * @note Address: 0x804548F8
 * @note Size: 0x1C
 */
void ObjectParticleActor::JSGSetTranslation(Vec const& pos) { mTranslation2 = pos; }

/**
 * @note Address: 0x80454914
 * @note Size: 0x1C
 */
void ObjectParticleActor::JSGGetTranslation(Vec* pos) const
{
	pos->x = mTranslation2.x;
	pos->y = mTranslation2.y;
	pos->z = mTranslation2.z;
}

/**
 * @note Address: 0x80454930
 * @note Size: 0x1F0
 */
void ObjectParticleActor::emit()
{
	if (mEmitter)
		return;

	// theres probably supposed to be a lot of JSG get/set translation in here, but this works and Vec sucks
	Vector3f pos(0.0f);

	if (mGameObject) {
		pos = mGameObject->getPosition();
		if (mGameObject->mModel && mModelJointIndex >= 0) {
			PSMTXCopy(mGameObject->mModel->mJoints[mModelJointIndex].getWorldMatrix()->mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			pos.x = mMatrix.mMatrix.structView.tx;
			pos.y = mMatrix.mMatrix.structView.ty;
			pos.z = mMatrix.mMatrix.structView.tz;
		} else if (mModelJointIndex == -1) {
			PSMTXCopy(mGameObject->mBaseTrMatrix.mMatrix.mtxView, mMatrix.mMatrix.mtxView);
			pos.x = mMatrix.mMatrix.structView.tx;
			pos.y = mMatrix.mMatrix.structView.ty;
			pos.z = mMatrix.mMatrix.structView.tz;
		} else {
			pos.x = mTranslation2.x;
			pos.y = mTranslation2.y;
			pos.z = mTranslation2.z;
			Vector3f vec2(0.0f, moviePlayer->mTransformAngle, 0.0f);
			mMatrix.makeTR(pos, vec2);
		}
	} else {
		if (mModelJointIndex == -2)
			return;

		pos.x = mTranslation2.x;
		pos.y = mTranslation2.y;
		pos.z = mTranslation2.z;
		Vector3f vec2(0.0f, moviePlayer->mTransformAngle, 0.0f);
		mMatrix.makeTR(pos, vec2);
	}

	mEmitter = particleMgr->createDemo(mEfxID, pos, mEfxType, 7);
	if (mEmitter) {
		mEmitter->setFlag(JPAEMIT_Immortal);
		mEmitter->mEmitterCallback = this;
		mEmitter->setGlobalRTMatrix(mMatrix.mMatrix.mtxView);
	}
}

/**
 * @note Address: 0x80454B20
 * @note Size: 0xF4
 */
void ObjectParticleActor::executeAfter(JPABaseEmitter* emit)
{
	Creature* obj = mGameObject;
	if (mGameObject) {
		if (obj->mModel && mModelJointIndex >= 0) {
			PSMTXCopy(obj->mModel->mJoints[mModelJointIndex].getWorldMatrix()->mMatrix.mtxView, mMatrix.mMatrix.mtxView);
		} else if (mModelJointIndex == -1) {
			PSMTXCopy(obj->mBaseTrMatrix.mMatrix.mtxView, mMatrix.mMatrix.mtxView);
		} else {
			Vector3f vec(0.0f, moviePlayer->mTransformAngle, 0.0f);
			mMatrix.makeTR(mTranslation2, vec);
		}
	} else {
		Vector3f vec(0.0f, moviePlayer->mTransformAngle, 0.0f);
		mMatrix.makeTR(mTranslation2, vec);
	}

	emit->setGlobalRTMatrix(mMatrix.mMatrix.mtxView);
}

/**
 * @note Address: 0x80454C14
 * @note Size: 0x44
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
