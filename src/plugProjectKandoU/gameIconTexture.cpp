#include "Game/IconTexture.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JUtility/JUTTexture.h"
#include "JSystem/ResTIMG.h"
#include "LoadResource.h"
#include "P2Macros.h"

namespace Game {

/*
 * --INFO--
 * Address:	80233484
 * Size:	000048
 */
IconTexture::Loader::Loader()
    : JKRDisposer()
{
	mArchive = nullptr;
	mNode    = nullptr;
}

/*
 * --INFO--
 * Address:	802334CC
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	80233558
 * Size:	000084
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

/*
 * --INFO--
 * Address:	802335DC
 * Size:	000030
 */
ResTIMG* IconTexture::Loader::getResTIMG(char* path) { return (ResTIMG*)mArchive->getResource(path); }

/*
 * --INFO--
 * Address:	8023360C
 * Size:	000048
 */
IconTexture::Mgr::Mgr()
    : JKRDisposer()
    , mTextures(nullptr)
    , mCount(0)
{
}

/* __dt__Q34Game11IconTexture3MgrFv
 * --INFO--
 * Address:	80233654
 * Size:	00008C
 */
IconTexture::Mgr::~Mgr()
{
	if (mTextures) {
		delete[] mTextures;
		mTextures = nullptr;
	}
	mCount = 0;
}

/*
 * --INFO--
 * Address:	802336E0
 * Size:	000084
 */
void IconTexture::Mgr::create(int count)
{
	P2ASSERTLINE(78, count > 0);
	mTextures = new JUTTexture[count];
	mCount    = count;
}

/*
 * --INFO--
 * Address:	80233764
 * Size:	00008C
 */
void IconTexture::Mgr::setTexture(int index, ResTIMG* resource)
{
	JUT_ASSERTLINE(86, (0 <= index && index < mCount), "illegal index [%d] [0..%d)\n", index, mCount);
	mTextures[index].storeTIMG(resource, (u8)'\0');
}

/*
 * --INFO--
 * Address:	802337F0
 * Size:	00002C
 */
JUTTexture* IconTexture::Mgr::getTexture(int index)
{
	if (0 > index || index >= mCount) {
		return nullptr;
	}
	return &mTextures[index];
}
} // namespace Game
