#include "Game/IconTexture.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/ResTIMG.h"
#include "LoadResource.h"
#include "P2Macros.h"

namespace Game {

/**
 * @note Address: 0x80233484
 * @note Size: 0x48
 */
IconTexture::Loader::Loader()
    : JKRDisposer()
{
	mArchive = nullptr;
	mNode    = nullptr;
}

/**
 * @note Address: 0x802334CC
 * @note Size: 0x8C
 */
IconTexture::Loader::~Loader()
{
	if (mArchive) {
		mArchive = nullptr;
	}
	if (mNode) {
		mNode = nullptr;
	}
}

/**
 * @note Address: 0x80233558
 * @note Size: 0x84
 */
void IconTexture::Loader::loadResource(char* path)
{
	LoadResource::Arg arg(path);
	mNode = gLoadResourceMgr->mountArchive(arg);
	if (mNode) {
		mArchive = mNode->mArchive;
		return;
	}
	JUT_PANICLINE(45, "failed to open [%s]\n", path);
}

/**
 * @note Address: 0x802335DC
 * @note Size: 0x30
 */
ResTIMG* IconTexture::Loader::getResTIMG(char* path) { return (ResTIMG*)mArchive->getResource(path); }

/**
 * @note Address: 0x8023360C
 * @note Size: 0x48
 */
IconTexture::Mgr::Mgr()
    : JKRDisposer()
    , mTextures(nullptr)
    , mCount(0)
{
}

/* __dt__Q34Game11IconTexture3MgrFv
 * @note Address: 0x80233654
 * @note Size: 0x8C
 */
IconTexture::Mgr::~Mgr()
{
	if (mTextures) {
		delete[] mTextures;
		mTextures = nullptr;
	}
	mCount = 0;
}

/**
 * @note Address: 0x802336E0
 * @note Size: 0x84
 */
void IconTexture::Mgr::create(int count)
{
	P2ASSERTLINE(78, count > 0);
	mTextures = new JUTTexture[count];
	mCount    = count;
}

/**
 * @note Address: 0x80233764
 * @note Size: 0x8C
 */
void IconTexture::Mgr::setTexture(int index, ResTIMG* resource)
{
	JUT_ASSERTLINE(86, (0 <= index && index < mCount), "illegal index [%d] [0..%d)\n", index, mCount);
	mTextures[index].storeTIMG(resource, (u8)'\0');
}

/**
 * @note Address: 0x802337F0
 * @note Size: 0x2C
 */
JUTTexture* IconTexture::Mgr::getTexture(int index)
{
	if (0 > index || index >= mCount) {
		return nullptr;
	}
	return &mTextures[index];
}
} // namespace Game
