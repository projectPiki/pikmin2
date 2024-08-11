#include "SysShape/AnimInfo.h"
#include "SysShape/AnimMgr.h"
#include "SysShape/Model.h"

#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/JUtility/JUTException.h"
#include "JSystem/JKernel/JKRFileLoader.h"

#include "stream.h"
#include "nans.h"

namespace SysShape {

static void strippedFunc()
{
	OSReport("\0\0\0\0\0\0\0\0\0\0\0");
	OSReport("sysShapeModel");
}

/**
 * @note Address: 0x8043DCDC
 * @note Size: 0x80
 */
void AnimInfo::attach(J3DModelData* modelData, void* animData)
{
	JUT_ASSERTLINE(64, animData != nullptr, "animData null!\n");

	mAnm  = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(animData);
	mCalc = J3DNewMtxCalcAnm(modelData->mJointTree.mFlags & J3DMLF_MtxTypeMask, mAnm);
}

/**
 * @note Address: 0x8043DD5C
 * @note Size: 0x120
 */
AnimMgr* AnimMgr::load(JKRFileLoader* a1, char* a2, J3DModelData* a3, JKRFileLoader* a4, char* a5)
{
	void* resource = a1->getResource(a2);
	if (!resource) {
		return nullptr;
	}

	RamStream rs(resource, -1);
	rs.setMode(STREAM_MODE_TEXT, 1);

	AnimMgr* newMgr = new AnimMgr;
	newMgr->load(rs, a3, a4, a5);

	return newMgr;
}

/**
 * @note Address: 0x8043DE7C
 * @note Size: 0x110
 */
void AnimMgr::load(Stream& s, J3DModelData* md, JKRFileLoader* fl, char* folderName)
{
	read(s);

	for (AnimInfo* c = (AnimInfo*)mAnimInfo.mChild; c; c = (AnimInfo*)c->mNext) {
		char path[512];
		void* animData;

		if (folderName) {
			sprintf(path, "%s/%s", folderName, c->mName);
			animData = fl->getResource(path);
		} else {
			sprintf(path, "%s", c->mName);
			animData = JKRFileLoader::getGlbResource(c->mName, fl);
		}

		JUT_ASSERTLINE(119, animData, "nanda~~~~?\n");
		JUT_ASSERTLINE(64, animData, "animData null!\n");

		c->mAnm  = (J3DAnmTransform*)J3DAnmLoaderDataBase::load(animData);
		c->mCalc = J3DNewMtxCalcAnm(md->mJointTree.mFlags & J3DMLF_MtxTypeMask, c->mAnm);
	}
}

/**
 * @note Address: 0x8043DF8C
 * @note Size: 0xD8
 */
void AnimMgr::read(Stream& s)
{
	const int length = s.readInt();

	for (int i = 0; i < length; i++) {
		AnimInfo* info = new AnimInfo(this);

		info->read(s);
		info->mId  = mCount;
		info->mMgr = this;

		mAnimInfo.add(info);
		mCount++;
	}
}

/**
 * @note Address: 0x8043E064
 * @note Size: 0xF8
 */
void AnimMgr::connectBasArc(char* a2, char* a3, JKRFileLoader* a4)
{
	for (AnimInfo* c = (AnimInfo*)mAnimInfo.mChild; c; c = (AnimInfo*)c->mNext) {
		char path[512];

		if (a2) {
			sprintf(path, "%s/%s", a2, c->mName);
		} else {
			sprintf(path, "%s", c->mName);
		}

		for (int i = 0; i < strlen(path); i++) {
			if (path[i] == '.') {
				char* fnEnd = &path[i];
				fnEnd[1]    = 'b';
				fnEnd[2]    = 'a';
				fnEnd[3]    = 's';
				fnEnd[4]    = '\0';
				break;
			}
		}

		void* basFile = a4->getResource(path);
		if (basFile) {
			c->mBasFile = (JAIAnimeFrameSoundData*)basFile;
		}
	}
}

/**
 * @note Address: 0x8043E15C
 * @note Size: 0x54
 */
void AnimMgr::registerSoundViewer(PSGame::SoundCreatureMgr* scm)
{
	for (AnimInfo* c = (AnimInfo*)mAnimInfo.mChild; c; c = (AnimInfo*)c->mNext) {
		scm->registerAnime(c->mAnm, c->mName);
	}
}

} // namespace SysShape
