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

	// UNUSED FUNCTION
}

/**
 * @note Address: 0x804330D8
 * @note Size: 0xDC
 */
Node::~Node()
{
	P2ASSERTLINE(99, mMgrCommand);
	P2ASSERTLINE(101, mMgrCommand->mNode1 == this);
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
	// UNUSED FUNCTION
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
	// UNUSED FUNCTION
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
	Node::destroy(mNode1);
	del();

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80433388
	lis      r3, __vt__Q28Resource10MgrCommand@ha
	addi     r3, r3, __vt__Q28Resource10MgrCommand@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x10
	stw      r0, 0x18(r30)
	lwz      r4, 0x38(r30)
	cmplwi   r4, 0
	beq      lbl_80433338
	lwz      r3, 0x30(r4)
	lbz      r4, 0x34(r4)
	bl       freeGroup__10JKRExpHeapFUc

lbl_80433338:
	mr       r3, r30
	bl       del__5CNodeFv
	addic.   r0, r30, 0x34
	beq      lbl_80433360
	addic.   r3, r30, 0x3c
	beq      lbl_80433360
	addic.   r3, r3, 0x5c
	beq      lbl_80433360
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_80433360:
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80433388
	mr       r3, r30
	bl       __dl__FPv

lbl_80433388:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
	mNode1->becomeCurrentHeap();
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
		result = _34 ? mDvdThread.mMode == 2 : true;
		break;
	case 1:
		result = _34 ? mDvdThread.mMode == 2 : true;
		break;
	case 2:
		result = _34 ? mDvdThread.mMode == 2 : true;
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
void* MgrCommand::getResource() { return mNode1->mResource; }

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeMemory(Node* node)
{
	mMode  = 2;
	mNode1 = node;
	_34    = 1;
	sys->dvdLoadUseCallBack(&mDvdThread, &mDelegateMemory);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeAram(Node* node, ARAM::Node* aramNode)
{
	mMode  = 1;
	mNode1 = node;
	_34    = 1;
	mNode2 = (Node*)aramNode;
	sys->dvdLoadUseCallBack(&mDvdThread, &mDelegateAramLoad);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void MgrCommand::setModeDvd(Node* node)
{
	mMode  = 0;
	mNode1 = node;
	_34    = 1;
	sys->dvdLoadUseCallBack(&mDvdThread, &mDelegateDvdLoad);
}

/**
 * @note Address: 0x804334A8
 * @note Size: 0x1C
 */
void MgrCommand::setModeInvalid()
{
	mMode         = -1;
	mNode1        = nullptr;
	_34           = 0;
	mUserCallback = nullptr;
}

/**
 * @note Address: 0x804334C4
 * @note Size: 0x48
 */
void MgrCommand::memoryCallBackFunc()
{
	mNode1->mHeap->changeGroupID(mNode1->mHeapGroupID);
	JUT_PANICLINE(343, "—L‚è‚¦‚È‚¢ó‘Ô‚Å‚²‚´‚¢‚Ü‚· \n"); // This is an impossible situation.
}

/**
 * @note Address: 0x8043350C
 * @note Size: 0x94
 */
void MgrCommand::aramLoadCallBackFunc()
{
	mNode1->mHeap->changeGroupID(mNode1->mHeapGroupID);
	void* resource
	    = gAramMgr->aramToMainRam(mNode2->mName, nullptr, 0, 0, Switch_1, 0, mNode1->mHeap, JKRDvdRipper::ALLOC_DIR_TOP, -1, nullptr);
	if (resource) {
		mNode1->mResource = resource;
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
	const char* path = mNode1->mName;
	mNode1->mHeap->changeGroupID(mNode1->mHeapGroupID);
	if (path[0]) {
		u32 size;
		void* file = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_1, 0, mNode1->mHeap, JKRDvdRipper::ALLOC_DIR_TOP, 0, nullptr, &size);
		if (file) {
			DCFlushRange(file, size);
			mNode1->mResource = file;
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
		mNode1->mHeap->becomeCurrentHeap();
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
	// UNUSED FUNCTION
	bool result = false;
	if (mMode != -1) {
		if (mNode1) {
			Node::destroy(mNode1);
			mMode         = -1;
			result        = true;
			mNode1        = nullptr;
			_34           = 0;
			mUserCallback = nullptr;
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
    , mNodes()
    , mLoadingNodes()
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
	// UNUSED FUNCTION
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

struct UseList {
	UseList()
	{
		for (u32 i = 0; i < 256;) {
			mList.mUseList[i] = 0;
			i += 4;
		}
	}

	inline u8 operator[](u8 index) const { return mList.mUseList[index]; }
	inline u8& operator[](u8 index) { return mList.mUseList[index]; }

	union {
		u8 mUseList[256];
		u32 mUseListInt[64];
	} mList;
};

/**
 * @note Address: 0x804337E0
 * @note Size: 0x1B4
 */
Node* Mgr::createNewNode(char const* path)
{
	FORCE_DONT_INLINE

	u8 id     = mHeap->getCurrentGroupId();
	int nodes = 0;

	UseList useList;

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
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stmw     r23, 0x10c(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r3, 4(r3)
	bl       getCurrentGroupId__7JKRHeapFv
	li       r0, 8
	mr       r31, r3
	addi     r4, r1, 8
	li       r24, 0
	li       r3, 0
	mtctr    r0

lbl_80433818:
	stw      r3, 0(r4)
	stw      r3, 4(r4)
	stw      r3, 8(r4)
	stw      r3, 0xc(r4)
	stw      r3, 0x10(r4)
	stw      r3, 0x14(r4)
	stw      r3, 0x18(r4)
	stw      r3, 0x1c(r4)
	addi     r4, r4, 0x20
	bdnz     lbl_80433818
	lis      r4, lbl_8049A640@ha
	lis      r3, lbl_8049A650@ha
	lwz      r23, 0x20(r29)
	addi     r25, r1, 8
	addi     r27, r4, lbl_8049A640@l
	addi     r28, r3, lbl_8049A650@l
	li       r26, 1
	b        lbl_80433894

lbl_80433860:
	lbz      r3, 0x34(r23)
	lbzx     r0, r25, r3
	cmplwi   r0, 0
	bne      lbl_80433878
	stbx     r26, r25, r3
	b        lbl_8043388C

lbl_80433878:
	mr       r3, r27
	mr       r5, r28
	li       r4, 0x26f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8043388C:
	lwz      r23, 4(r23)
	addi     r24, r24, 1

lbl_80433894:
	cmplwi   r23, 0
	bne      lbl_80433860
	cmpwi    r24, 0xff
	blt      lbl_804338C0
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0x275
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804338C0:
	addi     r3, r1, 8
	b        lbl_804338DC

lbl_804338C8:
	addi     r31, r31, -1
	clrlwi   r0, r31, 0x18
	cmplwi   r0, 1
	bge      lbl_804338DC
	li       r31, 0xff

lbl_804338DC:
	clrlwi   r0, r31, 0x18
	lbzx     r0, r3, r0
	cmplwi   r0, 0
	bne      lbl_804338C8
	lwz      r3, 4(r29)
	mr       r4, r31
	bl       changeGroupID__7JKRHeapFUc
	lwz      r4, 4(r29)
	li       r3, 0x40
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r26, r3, r3
	beq      lbl_80433964
	lis      r3, __vt__5CNode@ha
	mr       r23, r26
	addi     r3, r3, __vt__5CNode@l
	li       r0, 0
	stw      r3, 0(r26)
	addi     r3, r23, 0x18
	stw      r0, 0x10(r26)
	stw      r0, 0xc(r26)
	stw      r0, 8(r26)
	stw      r0, 4(r26)
	stw      r30, 0x14(r26)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q28Resource4Node@ha
	li       r0, 0
	addi     r3, r3, __vt__Q28Resource4Node@l
	stw      r3, 0(r23)
	addi     r3, r3, 0x10
	stw      r3, 0x18(r23)
	stw      r0, 0x30(r23)
	stb      r0, 0x34(r23)
	stw      r0, 0x38(r23)

lbl_80433964:
	stb      r31, 0x34(r26)
	mr       r4, r26
	addi     r3, r29, 0x10
	lwz      r0, 4(r29)
	stw      r0, 0x30(r26)
	bl       add__5CNodeFP5CNode
	mr       r3, r26
	lmw      r23, 0x10c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
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
