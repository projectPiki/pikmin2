#include "LoadResource.h"
#include "ARAM.h"
#include "string.h"
#include "P2Macros.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }
LoadResource::Mgr* gLoadResourceMgr;

namespace LoadResource {

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
Node::Node(char const* path)
    : CNode(const_cast<char*>(path))
{
	mFile    = nullptr;
	mArchive = nullptr;
}

/**
 * @note Address: 0x8044C520
 * @note Size: 0xB8
 */
Node::~Node()
{
	del();
	if (mFile)
		delete mFile;
	if (mArchive)
		mArchive->unmount();
	if (mName)
		delete mName;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Node::dump() { }

/**
 * __ct__Q212LoadResource3ArgFPCc
 * @note Address: 0x8044C5D8
 * @note Size: 0x44
 */
Arg::Arg(char const* p1)
    : mPath(p1)
    , mBuffer(nullptr)
    , mAddress(0)
    , mOffset(0)
    , mExpandSwitch(Switch_1)
    , mMaxExpandSize(0)
    , mHeap(nullptr)
    , mAllocDir(JKRDvdRipper::ALLOC_DIR_TOP)
    , mAramID(-1)
    , mDvdFileCompression(nullptr)
    , mNewSize(nullptr)
    , mUseAram(1)
    , mUseDVD(1)
{
}

/**
 * __ct__Q212LoadResource11ArgAramOnlyFPCc
 * @note Address: 0x8044C61C
 * @note Size: 0x48
 */
ArgAramOnly::ArgAramOnly(char const* p1)
    : Arg(p1)
{
	mUseDVD = 0;
}

/**
 * __ct__Q212LoadResource3MgrFv
 * @note Address: N/A
 * @note Size: 0x9C
 */
Mgr::Mgr()
    : mAramRoot("AramRoot")
    , mDvdRoot("DvdRoot")
{
	P2ASSERTLINE(118, !gLoadResourceMgr);
	gLoadResourceMgr = this;
}

/**
 * @note Address: 0x8044C664
 * @note Size: 0xB0
 */
void Mgr::init() { new Mgr(); }

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
Node* Mgr::search(char const* path)
{
	Node* ret = nullptr;
	FOREACH_NODE(Node, mAramRoot.mChild, node)
	{
		if (!strcmp(path, node->mName)) {
			ret = node;
			break;
		}
	}

	if (ret) {
		FOREACH_NODE(Node, mDvdRoot.mChild, node)
		{
			if (!strcmp(path, node->mName)) {
				ret = node;
				break;
			}
		}
	}
	return ret;
}

/**
 * @note Address: N/A
 * @note Size: 0x2C
 */
void Mgr::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8044C714
 * @note Size: 0x8C
 */
Node* Mgr::mountArchive(Arg& arg)
{
	Node* node = load(arg);
	if (node) {
		JKRArchive::EMountDirection mountDirection = JKRArchive::EMD_Tail;
		void* v1                                   = node->mFile;
		JKRHeap* heap                              = arg.mHeap;
		if (arg.mAllocDir == JKRDvdRipper::ALLOC_DIR_TOP) {
			mountDirection = JKRArchive::EMD_Head;
		}
		node->mArchive = JKRMountArchive(v1, heap, mountDirection);
		JUT_ASSERTLINE(221, node->mArchive != nullptr, "mount arc failure");
	}
	return node;
}

/**
 * @note Address: 0x8044C7A0
 * @note Size: 0x324
 */
Node* Mgr::load(Arg& arg)
{
	Node* retNode = search(arg.mPath);

	if (!retNode) {
		void* data = nullptr;
		if (!arg.mHeap) {
			arg.mHeap = JKRGetCurrentHeap();
		}

		if (!arg.mNewSize) {
			// Alright yeah sure
			u32 what;
			arg.mNewSize = &what;
		}

		Node* node;
		char* path;

		switch (arg.mAllocDir) {
		case JKRDvdRipper::ALLOC_DIR_TOP:
			path = new (arg.mHeap, 0) char[strlen(arg.mPath) + 1];
			strcpy(path, arg.mPath);

			node = new (arg.mHeap, 0) Node(path);
			break;
		case JKRDvdRipper::ALLOC_DIR_BOTTOM:
			path = new (arg.mHeap, -1) char[strlen(arg.mPath)];
			strcpy(path, arg.mPath);

			node = new (arg.mHeap, -0x20) Node(path);
			break;
		default:
			JUT_PANICLINE(276, "Unknown flag:%d \n", arg.mAllocDir);
		}

		if (arg.mUseAram) {
			data = gAramMgr->aramToMainRam(arg.mPath, arg.mBuffer, arg.mAddress, arg.mOffset, arg.mExpandSwitch, arg.mMaxExpandSize,
			                               arg.mHeap, arg.mAllocDir, arg.mAramID, arg.mNewSize);
		}

		if (data) {
			mAramRoot.add(node);
		} else if (arg.mUseDVD) {
			void* data2 = JKRDvdRipper::loadToMainRAM(arg.mPath, arg.mBuffer, arg.mExpandSwitch, arg.mMaxExpandSize, arg.mHeap,
			                                          arg.mAllocDir, arg.mOffset, arg.mDvdFileCompression, arg.mNewSize);
			if (data2) {
				data = data2;
				DCFlushRange(data2, *arg.mNewSize);
				mDvdRoot.add(node);
			}
		}

		if (data) {
			node->mFile = data;
			retNode     = node;
		} else {
			delete node;
			delete path;
		}
	}

	return retNode;
}

} // namespace LoadResource
