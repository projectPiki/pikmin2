#include "ARAM.h"
#include "Resource.h"
#include "System.h"

namespace Resource {

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
Node::Node(char const* name)
    : CNode(const_cast<char*>(name))
{
	mHeap        = nullptr;
	mHeapGroupID = 0;
	mResource    = nullptr;

	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804330D8
 * Size:	0000DC
 */
Node::~Node()
{
	P2ASSERTLINE(99, mMgrCommand);
	P2ASSERTLINE(101, mMgrCommand->mNode1 == this);
	mMgrCommand->setModeInvalid();
	del();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Node::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void Node::drawDump(Graphics&, int&, int&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Node::becomeCurrentHeap()
{
	// UNUSED FUNCTION
	mHeap->becomeCurrentHeap();
	mHeap->changeGroupID(mHeapGroupID);
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Node::destroy(Node* node)
{
	// UNUSED FUNCTION
	if (node) {
		((JKRExpHeap*)node->mHeap)->freeGroup(node->mHeapGroupID);
	}
}

/*
 * --INFO--
 * Address:	804331B4
 * Size:	000138
 */
MgrCommand::MgrCommand(char* name)
    : CNode(name)
    , mActiveHeap(nullptr)
    , mUserCallback(nullptr)
    , mDelegateMemory(this, &MgrCommand::memoryCallBackFunc)
    , mDelegateDvdLoad(this, &MgrCommand::dvdLoadCallBackFunc)
    , mDelegateAramLoad(this, &MgrCommand::aramLoadCallBackFunc)
{
	setModeInvalid();
}

/*
 * Generated?
 * --INFO--
 * Address:	........
 * Size:	000064
 */
// void __dt__Q38Resource10MgrCommand26 @class$2436resourceMgr_cppFv()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	804332EC
 * Size:	0000B8
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

/*
 * becomeCurrentHeap__Q28Resource10MgrCommandFv
 * --INFO--
 * Address:	804333A4
 * Size:	000070
 */
void MgrCommand::becomeCurrentHeap()
{
	P2ASSERTLINE(187, mMode != -1);
	mActiveHeap = JKRHeap::sCurrentHeap;
	mNode1->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	80433414
 * Size:	000088
 */
void MgrCommand::releaseCurrentHeap()
{
	P2ASSERTLINE(199, mMode != -1);
	P2ASSERTLINE(201, mActiveHeap);
	mActiveHeap->becomeCurrentHeap();
	mActiveHeap = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool MgrCommand::isFinish()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043349C
 * Size:	00000C
 */
void* MgrCommand::getResource() { return mNode1->mResource; }

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void MgrCommand::setModeMemory(Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void MgrCommand::setModeAram(Node*, ARAM::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void MgrCommand::setModeDvd(Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804334A8
 * Size:	00001C
 */
void MgrCommand::setModeInvalid()
{
	mMode         = -1;
	mNode1        = nullptr;
	_34           = 0;
	mUserCallback = nullptr;
}

/*
 * --INFO--
 * Address:	804334C4
 * Size:	000048
 */
void MgrCommand::memoryCallBackFunc()
{
	mNode1->mHeap->changeGroupID(mNode1->mHeapGroupID);
	JUT_PANICLINE(343, "—L‚è‚¦‚È‚¢ó‘Ô‚Å‚²‚´‚¢‚Ü‚· \n"); // This is an impossible situation.
}

/*
 * --INFO--
 * Address:	8043350C
 * Size:	000094
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

/*
 * --INFO--
 * Address:	804335A0
 * Size:	0000BC
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

/*
 * --INFO--
 * Address:	8043365C
 * Size:	000074
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

/*
 * --INFO--
 * Address:	........
 * Size:	000070
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

/*
 * __ct__Q28Resource3MgrFP7JKRHeapUl
 * --INFO--
 * Address:	804336D0
 * Size:	00010C
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

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Mgr::search(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Mgr::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804337DC
 * Size:	000004
 */
void Mgr::drawDump(Graphics&, int, int) { }

/*
 * --INFO--
 * Address:	804337E0
 * Size:	0001B4
 */
Node* Mgr::createNewNode(char const* path)
{
	u8 id = mHeap->getCurrentGroupId();

	u32 useList[64]; // is this meant to be char array?
	for (int i = 0; i < 64; i++) {
		useList[i] = 0;
	}

	int i = 0;
	FOREACH_NODE(Node, mNodes.mChild, node)
	{
		if (useList[node->mHeapGroupID] == 0) {
			useList[node->mHeapGroupID] = 1;
		} else {
			JUT_PANICLINE(623, "P2Assert");
		}
		i++;
	}
	P2ASSERTLINE(629, i < 255);

	while (useList[id] == 1) {
		id--;
		if (id == 0) {
			id = 255;
		}
	}
	mHeap->changeGroupID(id);

	Node* node         = new Node(path);
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

/*
 * --INFO--
 * Address:	80433994
 * Size:	000188
 */
void Mgr::loadResource(MgrCommand* command, char const* path, bool)
{
	if (command->mMode == -1) {
		delFinishCommand();
		P2ASSERTLINE(674, searchCommand(command));

		Node* node;
		FOREACH_NODE(Node, mNodes.mChild, cnode)
		{
			if (!strcmp(path, cnode->mName)) {
				node = cnode;
			}
		}

		if (node) {
			command->mMode  = 0;
			command->mNode1 = nullptr;
			command->_34    = true;
			sys->dvdLoadUseCallBack(&command->mDvdThread, &command->mDelegateMemory);
			mLoadingNodes.add(command);
		} else {
			ARAM::Node* aram = gAramMgr->search(path);
			if (aram) {
				node            = createNewNode(path);
				command->mMode  = 1;
				command->mNode1 = node;
				command->_34    = true;
				command->mNode2 = node;
				sys->dvdLoadUseCallBack(&command->mDvdThread, &command->mDelegateMemory);
				mLoadingNodes.add(command);
			}
		}

		if (!node) {
			node            = createNewNode(path);
			command->mMode  = 0;
			command->mNode1 = nullptr;
			command->_34    = true;
			sys->dvdLoadUseCallBack(&command->mDvdThread, &command->mDelegateMemory);
			mLoadingNodes.add(command);
		}

		if (node) {
			node->mMgrCommand = command;
		}
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r27, r5
	lwz      r0, 0x30(r4)
	cmpwi    r0, -1
	bne      lbl_80433B08
	bl       delFinishCommand__Q28Resource3MgrFv
	mr       r3, r30
	mr       r4, r31
	bl       searchCommand__Q28Resource3MgrFPQ28Resource10MgrCommand
	clrlwi.  r0, r3, 0x18
	beq      lbl_804339F0
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0x2a2
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804339F0:
	lwz      r29, 0x20(r30)
	li       r28, 0
	b        lbl_80433A18

lbl_804339FC:
	lwz      r4, 0x14(r29)
	mr       r3, r27
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_80433A14
	mr       r28, r29

lbl_80433A14:
	lwz      r29, 4(r29)

lbl_80433A18:
	cmplwi   r29, 0
	bne      lbl_804339FC
	cmplwi   r28, 0
	beq      lbl_80433A58
	li       r3, 0
	li       r0, 1
	stw      r3, 0x30(r31)
	addi     r4, r31, 0x3c
	addi     r5, r31, 0xb4
	stw      r28, 0x38(r31)
	stb      r0, 0x34(r31)
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	mr       r4, r31
	addi     r3, r30, 0x28
	bl       add__5CNodeFP5CNode

lbl_80433A58:
	cmplwi   r28, 0
	bne      lbl_80433AB4
	lwz      r3, gAramMgr@sda21(r13)
	mr       r4, r27
	bl       search__Q24ARAM3MgrFPCc
	or.      r29, r3, r3
	beq      lbl_80433AB4
	mr       r3, r30
	mr       r4, r27
	bl       createNewNode__Q28Resource3MgrFPCc
	li       r0, 1
	mr       r28, r3
	stw      r0, 0x30(r31)
	addi     r4, r31, 0x3c
	addi     r5, r31, 0xdc
	stw      r28, 0x38(r31)
	stb      r0, 0x34(r31)
	stw      r29, 0xa8(r31)
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	mr       r4, r31
	addi     r3, r30, 0x28
	bl       add__5CNodeFP5CNode

lbl_80433AB4:
	cmplwi   r28, 0
	bne      lbl_80433AFC
	mr       r3, r30
	mr       r4, r27
	bl       createNewNode__Q28Resource3MgrFPCc
	li       r0, 2
	mr       r28, r3
	stw      r0, 0x30(r31)
	li       r0, 1
	addi     r4, r31, 0x3c
	addi     r5, r31, 0xc8
	stw      r28, 0x38(r31)
	stb      r0, 0x34(r31)
	lwz      r3, sys@sda21(r13)
	bl       dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
	mr       r4, r31
	addi     r3, r30, 0x28
	bl       add__5CNodeFP5CNode

lbl_80433AFC:
	cmplwi   r28, 0
	beq      lbl_80433B08
	stw      r31, 0x3c(r28)

lbl_80433B08:
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * destroy__Q28Resource3MgrFPQ28Resource10MgrCommand
 * --INFO--
 * Address:	80433B1C
 * Size:	000070
 */
bool Mgr::destroy(MgrCommand* command) { return command->destroy(); }

/*
 * --INFO--
 * Address:	80433B8C
 * Size:	000064
 */
void Mgr::destroyAll()
{
	FOREACH_NODE(Node, mNodes.mChild, node) { Node::destroy(node); }
	mHeap->freeAll();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r4, 0x20(r3)
	b        lbl_80433BC8

lbl_80433BAC:
	cmplwi   r4, 0
	lwz      r31, 4(r4)
	beq      lbl_80433BC4
	lwz      r3, 0x30(r4)
	lbz      r4, 0x34(r4)
	bl       freeGroup__10JKRExpHeapFUc

lbl_80433BC4:
	mr       r4, r31

lbl_80433BC8:
	cmplwi   r4, 0
	bne      lbl_80433BAC
	lwz      r3, 4(r30)
	bl       freeAll__7JKRHeapFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80433BF0
 * Size:	0001E0
 */
bool Mgr::sync(MgrCommand*, bool)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	clrlwi.  r0, r5, 0x18
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	li       r30, 0
	beq      lbl_80433CE4
	b        lbl_80433CD8

lbl_80433C18:
	lwz      r0, 0x30(r31)
	li       r30, 0
	cmpwi    r0, 1
	beq      lbl_80433C6C
	bge      lbl_80433C38
	cmpwi    r0, 0
	bge      lbl_80433C44
	b        lbl_80433CBC

lbl_80433C38:
	cmpwi    r0, 3
	bge      lbl_80433CBC
	b        lbl_80433C94

lbl_80433C44:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433C64
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433CD8

lbl_80433C64:
	li       r30, 1
	b        lbl_80433CD8

lbl_80433C6C:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433C8C
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433CD8

lbl_80433C8C:
	li       r30, 1
	b        lbl_80433CD8

lbl_80433C94:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433CB4
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433CD8

lbl_80433CB4:
	li       r30, 1
	b        lbl_80433CD8

lbl_80433CBC:
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0xfc
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433CD8:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80433C18
	b        lbl_80433DA4

lbl_80433CE4:
	lwz      r0, 0x30(r31)
	li       r30, 0
	cmpwi    r0, 1
	beq      lbl_80433D38
	bge      lbl_80433D04
	cmpwi    r0, 0
	bge      lbl_80433D10
	b        lbl_80433D88

lbl_80433D04:
	cmpwi    r0, 3
	bge      lbl_80433D88
	b        lbl_80433D60

lbl_80433D10:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433D30
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433DA4

lbl_80433D30:
	li       r30, 1
	b        lbl_80433DA4

lbl_80433D38:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433D58
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433DA4

lbl_80433D58:
	li       r30, 1
	b        lbl_80433DA4

lbl_80433D60:
	lbz      r0, 0x34(r31)
	cmplwi   r0, 0
	beq      lbl_80433D80
	lwz      r0, 0x54(r31)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r30, r0, 5
	b        lbl_80433DA4

lbl_80433D80:
	li       r30, 1
	b        lbl_80433DA4

lbl_80433D88:
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0xfc
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433DA4:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80433DB4
	mr       r3, r31
	bl       del__5CNodeFv

lbl_80433DB4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void Mgr::syncAll(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433DD0
 * Size:	000130
 */
void Mgr::delFinishCommand()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	lwz      r3, 0x38(r3)
	b        lbl_80433EDC

lbl_80433DF0:
	lwz      r0, 0x30(r3)
	mr       r30, r3
	lwz      r31, 4(r3)
	cmpwi    r0, -1
	bne      lbl_80433E0C
	bl       del__5CNodeFv
	b        lbl_80433ED8

lbl_80433E0C:
	cmpwi    r0, 1
	li       r29, 0
	beq      lbl_80433E5C
	bge      lbl_80433E28
	cmpwi    r0, 0
	bge      lbl_80433E34
	b        lbl_80433EAC

lbl_80433E28:
	cmpwi    r0, 3
	bge      lbl_80433EAC
	b        lbl_80433E84

lbl_80433E34:
	lbz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_80433E54
	lwz      r0, 0x54(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r29, r0, 5
	b        lbl_80433EC8

lbl_80433E54:
	li       r29, 1
	b        lbl_80433EC8

lbl_80433E5C:
	lbz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_80433E7C
	lwz      r0, 0x54(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r29, r0, 5
	b        lbl_80433EC8

lbl_80433E7C:
	li       r29, 1
	b        lbl_80433EC8

lbl_80433E84:
	lbz      r0, 0x34(r3)
	cmplwi   r0, 0
	beq      lbl_80433EA4
	lwz      r0, 0x54(r3)
	subfic   r0, r0, 2
	cntlzw   r0, r0
	srwi     r29, r0, 5
	b        lbl_80433EC8

lbl_80433EA4:
	li       r29, 1
	b        lbl_80433EC8

lbl_80433EAC:
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0xfc
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433EC8:
	clrlwi.  r0, r29, 0x18
	beq      lbl_80433ED8
	mr       r3, r30
	bl       del__5CNodeFv

lbl_80433ED8:
	mr       r3, r31

lbl_80433EDC:
	cmplwi   r3, 0
	bne      lbl_80433DF0
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80433F00
 * Size:	000030
 */
bool Mgr::searchCommand(MgrCommand* command)
{
	FOREACH_NODE(MgrCommand, mLoadingNodes.mChild, node)
	{
		if (node == command) {
			return true;
		}
	}
	return false;
	/*
	lwz      r5, 0x38(r3)
	li       r3, 0
	b        lbl_80433F24

lbl_80433F0C:
	cmplw    r4, r5
	lwz      r0, 4(r5)
	bne      lbl_80433F20
	li       r3, 1
	blr

lbl_80433F20:
	mr       r5, r0

lbl_80433F24:
	cmplwi   r5, 0
	bne      lbl_80433F0C
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Mgr::watchHeap()
{
	// UNUSED FUNCTION
}

} // namespace Resource
