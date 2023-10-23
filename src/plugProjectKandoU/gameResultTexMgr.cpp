#include "Game/DNode.h"
#include "Game/ResultTexMgr.h"
#include "Game/Result.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/ResTIMG.h"
#include "LoadResource.h"
#include "Morimura/mrUtil.h"
#include "P2Macros.h"
#include "System.h"

namespace Game {

static const char unusedName[] = "resultTexMgr";

/*
 * --INFO--
 * Address:	80227418
 * Size:	000050
 */
ResultTexMgr::Mgr::Mgr()
    : JKRDisposer()
    , mHeap(nullptr)
    , mLoadResourceNode(nullptr)
    , mOtakaraConfigList(nullptr)
    , mItemConfigList(nullptr)
{
}

/*
 * --INFO--
 * Address:	80227468
 * Size:	000060
 */
ResultTexMgr::Mgr::~Mgr() { }

/*
 * --INFO--
 * Address:	802274C8
 * Size:	000340
 */
void ResultTexMgr::Mgr::create(ResultTexMgr::Arg& arg)
{

	char pathBuffer[512];

	mOtakaraConfigList  = arg.mOtakaraConfigList;
	mItemConfigList     = arg.mItemConfigList;
	mHeap               = arg.mHeap;
	JKRHeap* poppedHeap = JKRHeap::sCurrentHeap;
	JKRArchive* archive = nullptr;
	mHeap->becomeCurrentHeap();
	if (arg.mRegionMode == REGIONID_Null) {
		switch (sys->mRegion) {
		case System::LANG_JAPANESE:
			sprintf(pathBuffer, "/user/Matoba/resulttex/%s/arc.szs", "jpn");
			break;
		default:
			sprintf(pathBuffer, "/user/Matoba/resulttex/%s/arc.szs", "us");
			break;
		}
	} else {
		switch (arg.mRegionMode) {
		case REGIONID_JPN:
			sprintf(pathBuffer, "/user/Matoba/resulttex/%s/arc.szs", "jpn");
			break;
		case REGIONID_US:
			sprintf(pathBuffer, "/user/Matoba/resulttex/%s/arc.szs", "us");
			break;
		case REGIONID_PAL:
			sprintf(pathBuffer, "/user/Matoba/resulttex/%s/arc.szs", "pal");
			break;
		}
	}
	LoadResource::Arg loadResourceArg(pathBuffer);
	loadResourceArg.mHeap = mHeap;
	mLoadResourceNode     = gLoadResourceMgr->mountArchive(loadResourceArg);
	if (mLoadResourceNode) {
		archive = mLoadResourceNode->getArchive();
	} else {
		JUT_PANICLINE(198, "failed to open resulttex/arc.szs\n%s\n", pathBuffer);
	}
	int otakaraCount = mOtakaraConfigList->getConfigCount();
	int itemCount    = mItemConfigList->getConfigCount();
	mCarcassTextures.alloc(1);
	ResTIMG* timg = static_cast<ResTIMG*>(archive->getResource("teki_carcass/texture.bti"));
	if (timg == nullptr) {
		timg = static_cast<ResTIMG*>(archive->getResource("ahiru/texture.bti"));
	}
	mCarcassTextures.getTexture(0)->storeTIMG(timg, (u8)0);
	mOtakaraTextures.alloc(otakaraCount);

	for (int i = 0; i < otakaraCount; i++) {
		char otakaraTexturePath[256];
		sprintf(otakaraTexturePath, "%s/texture.bti", mOtakaraConfigList->getPelletConfig(i)->mParams.mName.mData);
		ResTIMG* timg1 = static_cast<ResTIMG*>(archive->getResource(otakaraTexturePath));
		if (timg1 == nullptr) {
			sprintf(otakaraTexturePath, "ahiru/texture.bti");
			timg1 = static_cast<ResTIMG*>(archive->getResource(otakaraTexturePath));
		}
		if (timg1 != nullptr) {
			mOtakaraTextures.getTexture(i)->storeTIMG(timg1, (u8)0);
		}
	}
	mItemTextures.alloc(itemCount);
	for (int i = 0; i < itemCount; i++) {
		char itemTexturePath[256];
		sprintf(itemTexturePath, "%s/texture.bti", mItemConfigList->getPelletConfig(i)->mParams.mName.mData);
		ResTIMG* timg1 = static_cast<ResTIMG*>(archive->getResource(itemTexturePath));
		if (timg1 == nullptr) {
			sprintf(itemTexturePath, "ahiru/texture.bti");
			timg1 = static_cast<ResTIMG*>(archive->getResource(itemTexturePath));
		}
		if (timg1 != nullptr) {
			mItemTextures.getTexture(i)->storeTIMG(timg1, (u8)0);
		}
	}
	poppedHeap->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
int ResultTexMgr::Mgr::getOtakaraNum()
{
	// UNUSED FUNCTION
	P2ASSERTLINE(273, mOtakaraConfigList != nullptr);
	return mOtakaraConfigList->mConfigCnt;
}

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000058
//  */
int ResultTexMgr::Mgr::getItemNum()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80227808
 * Size:	0000B8
 */
JUTTexture* ResultTexMgr::Mgr::getOtakaraItemTexture(int index)
{
	JUTTexture* texture;
	if (index >= getOtakaraNum()) {
		index -= getOtakaraNum();
		texture = getItemTexture(index);
	} else {
		texture = getOtakaraTexture(index);
	}
	return texture;
}

/*
 * --INFO--
 * Address:	802278C0
 * Size:	000024
 */
JUTTexture* ResultTexMgr::Mgr::getOtakaraTexture(int otakaraIndex) { return mOtakaraTextures.getTexture(otakaraIndex); }

/*
 * --INFO--
 * Address:	802278E4
 * Size:	000024
 */
JUTTexture* ResultTexMgr::Mgr::getItemTexture(int itemIndex) { return mItemTextures.getTexture(itemIndex); }

/*
 * --INFO--
 * Address:	80227908
 * Size:	000028
 */
JUTTexture* ResultTexMgr::Mgr::getCarcassTexture() { return mCarcassTextures.getTexture(0); }

/*
 * --INFO--
 * Address:	80227930
 * Size:	000064
 */
void ResultTexMgr::Mgr::Textures::alloc(int count)
{
	mCount    = count;
	mTextures = new JUTTexture[count];
}

/*
 * --INFO--
 * Address:	80227994
 * Size:	000074
 */
JUTTexture* ResultTexMgr::Mgr::Textures::getTexture(int index)
{
	JUT_ASSERTLINE(317, index >= 0, "illegal index %d\n", index);
	if (index >= mCount) {
		index = mCount - 1;
	}
	return mTextures + index;
}

/*
 * --INFO--
 * Address:	80227A08
 * Size:	00005C
 */
Result::TNode::TNode()
    : DNode()
    , mTexture(nullptr)
    , mQuantity(0)
    , mLostNum(0)
    , mTotalPokos(0)
    , mPokoValue(0)
    , mMesgTag(0)
{
}

/*
 * --INFO--
 * Address:	80227A64
 * Size:	00001C
 */
void Result::TNode::setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue)
{
	mMesgTag    = mesgTag;
	mTexture    = texture;
	mQuantity   = quantity;
	mTotalPokos = totalPokos;
	mPokoValue  = pokoValue;
}

/*
 * --INFO--
 * Address:	80227A80
 * Size:	000024
 */
void Result::TNode::setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue, int lostNum)
{
	setTNode(mesgTag, texture, quantity, totalPokos, pokoValue);
	mLostNum = lostNum;
}

/*
 * --INFO--
 * Address:	80227AA4
 * Size:	000078
 */
u64 Result::TNode::convertByMorimun(int p1)
{
	u64 ids[] = { '0101_00', '0110_00', '0200_00' };
	u64 v1[3];
	int v2[3];
	Morimura::TOffsetMsgSet msgSet(ids, '0100_00', 3, v1, v2);
	return msgSet.getMsgID(p1);
}

/*
 * --INFO--
 * Address:	80227B1C
 * Size:	00005C
 */
DNode::DNode()
    : JKRDisposer()
{
	reset("DNode");
	setName("DNode");
}

/*
 * --INFO--
 * Address:	80227B78
 * Size:	0000B0
 */
void DNode::add(Game::DNode* newNode)
{
	DNode* child = mChild;
	if (child) {
		while (child->mNext) {
			child = child->mNext;
		}
		child->mNext   = newNode;
		newNode->mPrev = child;
	} else {
		mChild = newNode;
	}

	newNode->mParent = this;

	DNode* child2 = mChild;
	int count     = 0;
	for (child2; child2; child2 = child2->mNext) {
		if (child2 == newNode) {
			count++;
		}
		JUT_ASSERTLINE(424, count <= 1, "DNode add err count %d\n", count);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 * Necessary for rodata to match.
 */
void DNode::concat(Game::DNode*)
{
	JUT_PANICLINE(480, "DNode concat Loop Err!\n");
	JUT_PANICLINE(481, "cannot retrieve %d-th child (real child count = %d)!\n");
}

/*
 * --INFO--
 * Address:	80227C28
 * Size:	000068
 */
DNode::~DNode() { del(); }

/*
 * --INFO--
 * Address:	80227C90
 * Size:	000098
 */
void DNode::del()
{
	DNode* parent = mParent;

	if (parent) {
		DNode* node     = parent->mChild;
		DNode* prevNode = nullptr;
		while (node) {
			if (node == this) {
				if (prevNode) {
					prevNode->mNext = node->mNext;
					if (node->mNext) {
						node->mNext->mPrev = prevNode;
					}
					mPrev   = nullptr;
					mNext   = nullptr;
					mParent = nullptr;
					return;
				}
				parent->mChild = node->mNext;
				if (node->mNext) {
					node->mNext->mPrev = nullptr;
				}
				mPrev   = nullptr;
				mNext   = nullptr;
				mParent = nullptr;
				return;
			}

			prevNode = node;
			node     = node->mNext;
		}
	}
}

/*
 * --INFO--
 * Address:	80227D28
 * Size:	000034
 */
int DNode::getChildCount()
{
	if (mChild) {
		DNode* node = mChild;
		int count   = 0;
		for (node; node; node = node->mNext) {
			count++;
		}
		return count;
	}

	return 0;
}
} // namespace Game
