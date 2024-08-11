#include "ARAM.h"
#include "Resource.h"
#include "System.h"

namespace Resource {

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
Node::Node(char const* name)
    : CNode(const_cast<char*>(name))
{
	mHeap        = nullptr;
	mHeapGroupID = 0;
	mResource    = nullptr;
}

/**
 * @note Address: 0x804330D8
 * @note Size: 0xDC
 */
Node::~Node()
{
	P2ASSERTLINE(99, mMgrCommand);
	P2ASSERTLINE(101, mMgrCommand->mCommandNode.mNode == this);
	mMgrCommand->setModeInvalid();
	del();
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void Node::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1CC
 */
void Node::drawDump(Graphics&, int&, int&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
void Node::becomeCurrentHeap()
{
	mHeap->becomeCurrentHeap();
	mHeap->changeGroupID(mHeapGroupID);
}

/**
 * @matchedSize
 * @note Address: N/A
 * @note Size: 0x30
 */
void Node::destroy(Node* node)
{
	if (node) {
		JKRExpHeap* heap = (JKRExpHeap*)node->mHeap;
		heap->freeGroup(node->mHeapGroupID);
	}
}

/**
 * @note Address: 0x804331B4
 * @note Size: 0x138
 */
MgrCommand::MgrCommand(char* name)
    : CNode(name)
    , mActiveHeap(nullptr)
    , mUserCallback(nullptr)
    , mDelegateDvdLoad(this, &MgrCommand::memoryCallBackFunc)
    , mDelegateMemory(this, &MgrCommand::dvdLoadCallBackFunc)
    , mDelegateAramLoad(this, &MgrCommand::aramLoadCallBackFunc)
{
	setModeInvalid();
}

/**
 * Generated?
 * @note Address: N/A
 * @note Size: 0x64
 */
// void __dt__Q38Resource10MgrCommand26 @class$2436resourceMgr_cppFv()
// {
// 	// UNUSED FUNCTION
// }

/**
 * @note Address: 0x804332EC
 * @note Size: 0xB8
 */
MgrCommand::~MgrCommand()
{
	Node::destroy(mCommandNode.mNode);
	del();
}

/**
 * becomeCurrentHeap__Q28Resource10MgrCommandFv
 * @note Address: 0x804333A4
 * @note Size: 0x70
 */
void MgrCommand::becomeCurrentHeap()
{
	P2ASSERTLINE(187, mMode != -1);
	mActiveHeap = JKRHeap::sCurrentHeap;
	mCommandNode.mNode->becomeCurrentHeap();
}

/**
 * @note Address: 0x80433414
 * @note Size: 0x88
 */
void MgrCommand::releaseCurrentHeap()
{
	P2ASSERTLINE(199, mMode != -1);
	P2ASSERTLINE(201, mActiveHeap);
	mActiveHeap->becomeCurrentHeap();
	mActiveHeap = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
bool MgrCommand::isFinish()
{
	bool result = false;

	switch (mMode) {
	case 0:
		result = mCommandNode.mIsWorking ? mCommandNode.mCommand.mMode == 2 : true;
		break;
	case 1:
		result = mCommandNode.mIsWorking ? mCommandNode.mCommand.mMode == 2 : true;
		break;
	case 2:
		result = mCommandNode.mIsWorking ? mCommandNode.mCommand.mMode == 2 : true;
		break;
	default:
		JUT_PANICLINE(252, "P2Assert");
		break;
	}

	return result;
}

/**
 * @note Address: 0x8043349C
 * @note Size: 0xC
 */
void* MgrCommand::getResource() { return mCommandNode.mNode->mResource; }

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeMemory(Node* node)
{
	mMode                   = 2;
	mCommandNode.mNode      = node;
	mCommandNode.mIsWorking = true;
	sys->dvdLoadUseCallBack(&mCommandNode.mCommand, &mDelegateMemory);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeAram(Node* node, ARAM::Node* aramNode)
{
	mMode                   = 1;
	mCommandNode.mNode      = node;
	mCommandNode.mIsWorking = true;
	mNode2                  = (Node*)aramNode;
	sys->dvdLoadUseCallBack(&mCommandNode.mCommand, &mDelegateAramLoad);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeDvd(Node* node)
{
	mMode                   = 0;
	mCommandNode.mNode      = node;
	mCommandNode.mIsWorking = true;
	sys->dvdLoadUseCallBack(&mCommandNode.mCommand, &mDelegateDvdLoad);
}

/**
 * @note Address: 0x804334A8
 * @note Size: 0x1C
 */
void MgrCommand::setModeInvalid()
{
	mMode                   = -1;
	mCommandNode.mNode      = nullptr;
	mCommandNode.mIsWorking = false;
	mUserCallback           = nullptr;
}

/**
 * @note Address: 0x804334C4
 * @note Size: 0x48
 */
void MgrCommand::memoryCallBackFunc()
{
	mCommandNode.mNode->mHeap->changeGroupID(mCommandNode.mNode->mHeapGroupID);
	JUT_PANICLINE(343, "有りえない状態でございます \n"); // This is an impossible situation.
}

/**
 * @note Address: 0x8043350C
 * @note Size: 0x94
 */
void MgrCommand::aramLoadCallBackFunc()
{
	mCommandNode.mNode->mHeap->changeGroupID(mCommandNode.mNode->mHeapGroupID);
	void* resource = gAramMgr->aramToMainRam(mNode2->mName, nullptr, 0, 0, Switch_1, 0, mCommandNode.mNode->mHeap,
	                                         JKRDvdRipper::ALLOC_DIR_TOP, -1, nullptr);
	if (resource) {
		mCommandNode.mNode->mResource = resource;
		userCallBackInvoke();
	}
}

/**
 * @note Address: 0x804335A0
 * @note Size: 0xBC
 */
void MgrCommand::dvdLoadCallBackFunc()
{
	bool loaded      = true;
	const char* path = mCommandNode.mNode->mName;
	mCommandNode.mNode->mHeap->changeGroupID(mCommandNode.mNode->mHeapGroupID);
	if (path[0]) {
		u32 size;
		void* file = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_1, 0, mCommandNode.mNode->mHeap, JKRDvdRipper::ALLOC_DIR_TOP, 0,
		                                         nullptr, &size);
		if (file) {
			DCFlushRange(file, size);
			mCommandNode.mNode->mResource = file;
		} else {
			loaded = false;
		}
	}

	if (loaded) {
		userCallBackInvoke();
	}
}

/**
 * @note Address: 0x8043365C
 * @note Size: 0x74
 */
void MgrCommand::userCallBackInvoke()
{
	if (mUserCallback) {
		JKRHeap* existingCurrentHeap = JKRHeap::sCurrentHeap;
		mCommandNode.mNode->mHeap->becomeCurrentHeap();
		mUserCallback->invoke(this);
		mUserCallback = nullptr;
		existingCurrentHeap->becomeCurrentHeap();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x70
 */
bool MgrCommand::destroy()
{
	bool result = false;
	if (mMode != -1) {
		if (mCommandNode.mNode) {
			Node::destroy(mCommandNode.mNode);
			result = true;
			setModeInvalid();
		}
	}
	return result;
}

/**
 * __ct__Q28Resource3MgrFP7JKRHeapUl
 * @note Address: 0x804336D0
 * @note Size: 0x10C
 */
Mgr::Mgr(JKRHeap* parentHeap, u32 size)
    : mHeap(nullptr)
    , mHeapSize(0)
    , mRemainingSize(0)
{
	JKRHeap* existingCurrentHeap = JKRGetCurrentHeap();
	if (!parentHeap) {
		parentHeap = JKRGetCurrentHeap();
	}
	mHeap = JKRExpHeap::create(size, parentHeap, true);
	P2ASSERTLINE(487, mHeap != nullptr);
	mHeapSize      = size;
	mRemainingSize = mHeapSize;
	mFlags.clear();
	mFlags.typeView &= -2;
	existingCurrentHeap->becomeCurrentHeap();
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
Node* Mgr::search(char const* path)
{
	Node* node = nullptr;
	FOREACH_NODE(Node, mNodes.mChild, cnode)
	{
		if (!strcmp(path, cnode->mName)) {
			node = cnode;
		}
	}
	return node;
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void Mgr::dump()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804337DC
 * @note Size: 0x4
 */
void Mgr::drawDump(Graphics&, int, int) { }

/**
 * @note Address: 0x804337E0
 * @note Size: 0x1B4
 */
Node* Mgr::createNewNode(char const* path)
{
	FORCE_DONT_INLINE

	u8 id     = mHeap->getCurrentGroupId();
	int nodes = 0;

	// this is extremely dumb, but the for loop wont unroll correctly unless its exactly like this
	u8 useList[256];
	for (u32 i = 0; i < 256; i += 4) {
		*(u32*)&useList[i] = 0;
	}

	FOREACH_NODE(Node, mNodes.mChild, node)
	{
		if (useList[node->mHeapGroupID] == 0) {
			useList[node->mHeapGroupID] = 1;
		} else {
			P2ASSERTLINE(623, false);
		}

		nodes++;
	}
	P2ASSERTLINE(629, nodes < 255);

	while (useList[id]) {
		id--;
		if (id < 1) {
			id = 255;
		}
	}

	mHeap->changeGroupID(id);

	Node* node         = new (mHeap, 0) Node(path);
	node->mHeapGroupID = id;
	node->mHeap        = mHeap;
	mNodes.add(node);
	return node;
}

/**
 * @note Address: 0x80433994
 * @note Size: 0x188
 */
void Mgr::loadResource(MgrCommand* command, char const* path, bool)
{
	if (command->mMode != -1) {
		return;
	}

	delFinishCommand();
	P2ASSERTLINE(674, !searchCommand(command));

	Node* node = search(path);
	if (node) {
		command->setModeDvd(node);
		mLoadingNodes.add(command);
	}

	if (!node) {
		ARAM::Node* aram = gAramMgr->search(path);
		if (aram) {
			node = createNewNode(path);
			command->setModeAram(node, aram);
			mLoadingNodes.add(command);
		}
	}

	if (!node) {
		node = createNewNode(path);
		command->setModeMemory(node);
		mLoadingNodes.add(command);
	}

	if (node) {
		node->mMgrCommand = command;
	}
}

/**
 * destroy__Q28Resource3MgrFPQ28Resource10MgrCommand
 * @note Address: 0x80433B1C
 * @note Size: 0x70
 */
bool Mgr::destroy(MgrCommand* command) { return command->destroy(); }

/**
 * @note Address: 0x80433B8C
 * @note Size: 0x64
 */
void Mgr::destroyAll()
{
	Node* node = static_cast<Node*>(mNodes.mChild);
	while (node) {
		Node* next = static_cast<Node*>(node->mNext);
		Node::destroy(node);
		node = next;
	}

	mHeap->freeAll();
}

/**
 * @note Address: 0x80433BF0
 * @note Size: 0x1E0
 */
bool Mgr::sync(MgrCommand* command, bool waitUntilDone)
{
	bool result = false;
	if (waitUntilDone) {
		// Wait for the command to finish
		while (!result) {
			result = command->isFinish();
		}
	} else {
		result = command->isFinish();
	}

	if (result) {
		command->del();
	}

	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x13C
 */
void Mgr::syncAll(bool)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80433DD0
 * @note Size: 0x130
 */
void Mgr::delFinishCommand()
{
	CNode* node = mLoadingNodes.mChild;
	while (node) {
		CNode* next         = node->mNext;
		MgrCommand* command = static_cast<MgrCommand*>(node);
		if (command->mMode == -1) {
			command->del();
		} else if (command->isFinish()) {
			command->del();
		}
		node = next;
	}
}

/**
 * @note Address: 0x80433F00
 * @note Size: 0x30
 */
bool Mgr::searchCommand(MgrCommand* command)
{
	bool found       = false;
	MgrCommand* node = static_cast<MgrCommand*>(mLoadingNodes.mChild);
	while (node) {
		MgrCommand* next = static_cast<MgrCommand*>(node->mNext);
		if (command == node) {
			found = true;
			break;
		}

		node = next;
	}

	return found;
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Mgr::watchHeap()
{
	// UNUSED FUNCTION
}

} // namespace Resource
