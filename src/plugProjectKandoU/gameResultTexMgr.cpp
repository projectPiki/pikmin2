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

/**
 * @note Address: 0x80227418
 * @note Size: 0x50
 */
ResultTexMgr::Mgr::Mgr()
    : JKRDisposer()
    , mHeap(nullptr)
    , mLoadResourceNode(nullptr)
    , mOtakaraConfigList(nullptr)
    , mItemConfigList(nullptr)
{
}

/**
 * @note Address: 0x80227468
 * @note Size: 0x60
 */
ResultTexMgr::Mgr::~Mgr() { }

/**
 * @note Address: 0x802274C8
 * @note Size: 0x340
 */
void ResultTexMgr::Mgr::create(ResultTexMgr::Arg& arg)
{
	char pathBuffer[512];

	mOtakaraConfigList = arg.mOtakaraConfigList;
	mItemConfigList    = arg.mItemConfigList;
	mHeap              = arg.mHeap;

	JKRHeap* poppedHeap = JKRHeap::sCurrentHeap;
	JKRArchive* archive = nullptr;
	mHeap->becomeCurrentHeap();

	if (arg.mRegionMode == REGIONID_Null) {
		switch (sys->mRegion) {
		case System::LANG_Japanese:
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
	ResTIMG* carcassTexture = static_cast<ResTIMG*>(archive->getResource("teki_carcass/texture.bti"));
	if (carcassTexture == nullptr) {
		carcassTexture = static_cast<ResTIMG*>(archive->getResource("ahiru/texture.bti"));
	}

	mCarcassTextures.getTexture(0)->storeTIMG(carcassTexture, (u8)0);

	mOtakaraTextures.alloc(otakaraCount);
	for (int i = 0; i < otakaraCount; i++) {
		char otakaraTexturePath[PATH_MAX];
		sprintf(otakaraTexturePath, "%s/texture.bti", mOtakaraConfigList->getPelletConfig(i)->mParams.mName.mData);

		ResTIMG* otakaraTexture = static_cast<ResTIMG*>(archive->getResource(otakaraTexturePath));
		if (!otakaraTexture) {
			sprintf(otakaraTexturePath, "ahiru/texture.bti");
			otakaraTexture = static_cast<ResTIMG*>(archive->getResource(otakaraTexturePath));
		}

		if (otakaraTexture) {
			mOtakaraTextures.getTexture(i)->storeTIMG(otakaraTexture, (u8)0);
		}
	}

	mItemTextures.alloc(itemCount);
	for (int i = 0; i < itemCount; i++) {
		char itemTexturePath[PATH_MAX];
		sprintf(itemTexturePath, "%s/texture.bti", mItemConfigList->getPelletConfig(i)->mParams.mName.mData);

		ResTIMG* itemTexture = static_cast<ResTIMG*>(archive->getResource(itemTexturePath));
		if (!itemTexture) {
			sprintf(itemTexturePath, "ahiru/texture.bti");
			itemTexture = static_cast<ResTIMG*>(archive->getResource(itemTexturePath));
		}

		if (itemTexture) {
			mItemTextures.getTexture(i)->storeTIMG(itemTexture, (u8)0);
		}
	}

	poppedHeap->becomeCurrentHeap();
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
int ResultTexMgr::Mgr::getOtakaraNum()
{
	// UNUSED FUNCTION
	P2ASSERTLINE(273, mOtakaraConfigList != nullptr);
	return mOtakaraConfigList->mConfigCnt;
}

// /**
//  * @note Address: N/A
//  * @note Size: 0x58
//  */
int ResultTexMgr::Mgr::getItemNum()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80227808
 * @note Size: 0xB8
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

/**
 * @note Address: 0x802278C0
 * @note Size: 0x24
 */
JUTTexture* ResultTexMgr::Mgr::getOtakaraTexture(int otakaraIndex) { return mOtakaraTextures.getTexture(otakaraIndex); }

/**
 * @note Address: 0x802278E4
 * @note Size: 0x24
 */
JUTTexture* ResultTexMgr::Mgr::getItemTexture(int itemIndex) { return mItemTextures.getTexture(itemIndex); }

/**
 * @note Address: 0x80227908
 * @note Size: 0x28
 */
JUTTexture* ResultTexMgr::Mgr::getCarcassTexture() { return mCarcassTextures.getTexture(0); }

/**
 * @note Address: 0x80227930
 * @note Size: 0x64
 */
void ResultTexMgr::Mgr::Textures::alloc(int count)
{
	mCount    = count;
	mTextures = new JUTTexture[count];
}

/**
 * @note Address: 0x80227994
 * @note Size: 0x74
 */
JUTTexture* ResultTexMgr::Mgr::Textures::getTexture(int index)
{
	JUT_ASSERTLINE(317, index >= 0, "illegal index %d\n", index);
	if (index >= mCount) {
		index = mCount - 1;
	}
	return mTextures + index;
}

/**
 * @note Address: 0x80227A08
 * @note Size: 0x5C
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

/**
 * @note Address: 0x80227A64
 * @note Size: 0x1C
 */
void Result::TNode::setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue)
{
	mMesgTag    = mesgTag;
	mTexture    = texture;
	mQuantity   = quantity;
	mTotalPokos = totalPokos;
	mPokoValue  = pokoValue;
}

/**
 * @note Address: 0x80227A80
 * @note Size: 0x24
 */
void Result::TNode::setTNode(u64 mesgTag, JUTTexture* texture, int quantity, int totalPokos, int pokoValue, int lostNum)
{
	setTNode(mesgTag, texture, quantity, totalPokos, pokoValue);
	mLostNum = lostNum;
}

/**
 * @note Address: 0x80227AA4
 * @note Size: 0x78
 */
u64 Result::TNode::convertByMorimun(int p1)
{
	u64 ids[] = { '0101_00', '0110_00', '0200_00' };
	u64 v1[3];
	int v2[3];
	Morimura::TOffsetMsgSet msgSet(ids, '0100_00', 3, v1, v2);
	return msgSet.getMsgID(p1);
}

/**
 * @note Address: 0x80227B1C
 * @note Size: 0x5C
 */
DNode::DNode()
    : JKRDisposer()
{
	reset("DNode");
	setName("DNode");
}

/**
 * @note Address: 0x80227B78
 * @note Size: 0xB0
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

/**
 * @note Address: N/A
 * @note Size: 0xB0
 * Necessary for rodata to match.
 */
void DNode::concat(Game::DNode*)
{
	JUT_PANICLINE(480, "DNode concat Loop Err!\n");
	JUT_PANICLINE(481, "cannot retrieve %d-th child (real child count = %d)!\n");
}

/**
 * @note Address: 0x80227C28
 * @note Size: 0x68
 */
DNode::~DNode() { del(); }

/**
 * @note Address: 0x80227C90
 * @note Size: 0x98
 */
void DNode::del()
{
	DNode* parent = mParent;
	if (!parent) {
		return;
	}

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
			} else {
				parent->mChild = node->mNext;
				if (node->mNext) {
					node->mNext->mPrev = nullptr;
				}

				mPrev   = nullptr;
				mNext   = nullptr;
				mParent = nullptr;
				return;
			}
		}

		prevNode = node;
		node     = node->mNext;
	}
}

/**
 * @note Address: 0x80227D28
 * @note Size: 0x34
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
