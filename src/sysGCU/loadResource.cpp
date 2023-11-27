#include "LoadResource.h"
#include "ARAM.h"
#include "string.h"
#include "P2Macros.h"

static void _Print(char* format, ...) { OSReport(format, __FILE__); }

namespace LoadResource {

Mgr* gLoadResourceMgr;

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
Node::Node(char const* path)
    : CNode(const_cast<char*>(path))
{
	mFile    = nullptr;
	mArchive = nullptr;
}

/*
 * --INFO--
 * Address:	8044C520
 * Size:	0000B8
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

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void Node::dump() { }

/*
 * __ct__Q212LoadResource3ArgFPCc
 * --INFO--
 * Address:	8044C5D8
 * Size:	000044
 */
Arg::Arg(char const* p1)
    : mPath(p1)
    , _04(nullptr)
    , _08(0)
    , _0C(0)
    , mExpandSwitch(Switch_1)
    , _14(0)
    , mHeap(nullptr)
    , mAllocDir(JKRDvdRipper::ALLOC_DIR_TOP)
    , _20(-1)
    , _24(nullptr)
    , _28(nullptr)
    , _2C(1)
    , _2D(1)
{
}

/*
 * __ct__Q212LoadResource11ArgAramOnlyFPCc
 * --INFO--
 * Address:	8044C61C
 * Size:	000048
 */
ArgAramOnly::ArgAramOnly(char const* p1)
    : Arg(p1)
{
	_2D = 0;
}

/*
 * __ct__Q212LoadResource3MgrFv
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
Mgr::Mgr()
    : mAramRoot("AramRoot")
    , mDvdRoot("DvdRoot")
{
	// UNUSED FUNCTION
	P2ASSERTLINE(118, gLoadResourceMgr == nullptr);
}

/*
 * --INFO--
 * Address:	8044C664
 * Size:	0000B0
 */
void Mgr::init()
{
	gLoadResourceMgr = new Mgr;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lis      r4, lbl_8049B368@ha
	li       r3, 0x30
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	addi     r31, r4, lbl_8049B368@l
	stw      r30, 8(r1)
	bl       __nw__FUl
	cmplwi   r3, 0
	beq      lbl_8044C6FC
	lis      r4, __vt__5CNode@ha
	mr       r30, r3
	addi     r5, r4, __vt__5CNode@l
	li       r4, 0
	stw      r5, 0(r3)
	addi     r3, r31, 0x14
	addi     r0, r2, lbl_80520AA8@sda21
	stw      r4, 0x10(r30)
	stw      r4, 0xc(r30)
	stw      r4, 8(r30)
	stw      r4, 4(r30)
	stw      r3, 0x14(r30)
	stw      r5, 0x18(r30)
	stw      r4, 0x28(r30)
	stw      r4, 0x24(r30)
	stw      r4, 0x20(r30)
	stw      r4, 0x1c(r30)
	stw      r0, 0x2c(r30)
	lwz      r0, gLoadResourceMgr@sda21(r13)
	cmplwi   r0, 0
	beq      lbl_8044C6F8
	addi     r3, r31, 0
	addi     r5, r31, 0x20
	li       r4, 0x76
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044C6F8:
	stw      r30, gLoadResourceMgr@sda21(r13)

lbl_8044C6FC:
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
 * Address:	........
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void Mgr::dump()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8044C714
 * Size:	00008C
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

/*
 * --INFO--
 * Address:	8044C7A0
 * Size:	000324
 */
Node* Mgr::load(Arg& arg)
{
	Node* node = search(arg.mPath);

	if (!node) {

		void* data = nullptr;
		if (!arg.mHeap) {
			arg.mHeap = JKRGetCurrentHeap();
		}

		if (!arg._28) {
			u32 what[3];
			arg._28 = what;
		}

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
			break;
		}

		if (arg._2C) {
			data = gAramMgr->aramToMainRam(arg.mPath, arg._04, arg._08, arg._0C, arg.mExpandSwitch, arg._14, arg.mHeap, arg.mAllocDir,
			                               arg._20, arg._28);
		}

		if (data) {
			mAramRoot.add(node);
		} else if (arg._2D) {
			void* data2 = JKRDvdRipper::loadToMainRAM(arg.mPath, arg._04, arg.mExpandSwitch, arg._14, arg.mHeap, arg.mAllocDir, arg._0C,
			                                          arg._24, arg._28);
			if (data2) {
				DCFlushRange(data2, *arg._28);
				mDvdRoot.add(node);
				data = data2;
			}
		}

		if (data) {
			node->mFile = data;
		} else {
			delete node;
			delete path;
		}
	}

	return node;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stmw     r25, 0x24(r1)
	mr       r26, r3
	mr       r27, r4
	li       r31, 0
	lwz      r25, 0(r4)
	lwz      r30, 0x10(r3)
	b        lbl_8044C7E8

lbl_8044C7C8:
	lwz      r4, 0x14(r30)
	mr       r3, r25
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8044C7E4
	mr       r31, r30
	b        lbl_8044C7F0

lbl_8044C7E4:
	lwz      r30, 4(r30)

lbl_8044C7E8:
	cmplwi   r30, 0
	bne      lbl_8044C7C8

lbl_8044C7F0:
	cmplwi   r31, 0
	beq      lbl_8044C828
	lwz      r30, 0x28(r26)
	b        lbl_8044C820

lbl_8044C800:
	lwz      r4, 0x14(r30)
	mr       r3, r25
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_8044C81C
	mr       r31, r30
	b        lbl_8044C828

lbl_8044C81C:
	lwz      r30, 4(r30)

lbl_8044C820:
	cmplwi   r30, 0
	bne      lbl_8044C800

lbl_8044C828:
	cmplwi   r31, 0
	bne      lbl_8044CAAC
	lwz      r0, 0x18(r27)
	li       r30, 0
	cmplwi   r0, 0
	bne      lbl_8044C848
	lwz      r0, sCurrentHeap__7JKRHeap@sda21(r13)
	stw      r0, 0x18(r27)

lbl_8044C848:
	lwz      r0, 0x28(r27)
	cmplwi   r0, 0
	bne      lbl_8044C85C
	addi     r0, r1, 0x18
	stw      r0, 0x28(r27)

lbl_8044C85C:
	lwz      r6, 0x1c(r27)
	cmpwi    r6, 2
	beq      lbl_8044C908
	bge      lbl_8044C994
	cmpwi    r6, 1
	bge      lbl_8044C878
	b        lbl_8044C994

lbl_8044C878:
	lwz      r3, 0(r27)
	bl       strlen
	lwz      r4, 0x18(r27)
	addi     r3, r3, 1
	li       r5, 0
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0(r27)
	mr       r28, r3
	bl       strcpy
	lwz      r4, 0x18(r27)
	li       r3, 0x38
	li       r5, 0
	bl       __nw__FUlP7JKRHeapi
	or.      r25, r3, r3
	beq      lbl_8044C900
	lis      r3, __vt__5CNode@ha
	li       r0, 0
	addi     r3, r3, __vt__5CNode@l
	stw      r3, 0(r25)
	addi     r3, r25, 0x18
	stw      r0, 0x10(r25)
	stw      r0, 0xc(r25)
	stw      r0, 8(r25)
	stw      r0, 4(r25)
	stw      r28, 0x14(r25)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q212LoadResource4Node@ha
	li       r0, 0
	addi     r3, r3, __vt__Q212LoadResource4Node@l
	stw      r3, 0(r25)
	addi     r3, r3, 0x10
	stw      r3, 0x18(r25)
	stw      r0, 0x30(r25)
	stw      r0, 0x34(r25)

lbl_8044C900:
	mr       r29, r25
	b        lbl_8044C9B0

lbl_8044C908:
	lwz      r3, 0(r27)
	bl       strlen
	lwz      r4, 0x18(r27)
	li       r5, -1
	bl       __nwa__FUlP7JKRHeapi
	lwz      r4, 0(r27)
	mr       r28, r3
	bl       strcpy
	lwz      r4, 0x18(r27)
	li       r3, 0x38
	li       r5, -32
	bl       __nw__FUlP7JKRHeapi
	or.      r25, r3, r3
	beq      lbl_8044C98C
	lis      r3, __vt__5CNode@ha
	li       r0, 0
	addi     r3, r3, __vt__5CNode@l
	stw      r3, 0(r25)
	addi     r3, r25, 0x18
	stw      r0, 0x10(r25)
	stw      r0, 0xc(r25)
	stw      r0, 8(r25)
	stw      r0, 4(r25)
	stw      r28, 0x14(r25)
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q212LoadResource4Node@ha
	li       r0, 0
	addi     r3, r3, __vt__Q212LoadResource4Node@l
	stw      r3, 0(r25)
	addi     r3, r3, 0x10
	stw      r3, 0x18(r25)
	stw      r0, 0x30(r25)
	stw      r0, 0x34(r25)

lbl_8044C98C:
	mr       r29, r25
	b        lbl_8044C9B0

lbl_8044C994:
	lis      r3, lbl_8049B368@ha
	lis      r4, lbl_8049B3A8@ha
	addi     r5, r4, lbl_8049B3A8@l
	addi     r3, r3, lbl_8049B368@l
	li       r4, 0x114
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8044C9B0:
	lbz      r0, 0x2c(r27)
	cmplwi   r0, 0
	beq      lbl_8044C9FC
	lwz      r0, 0x1c(r27)
	stw      r0, 8(r1)
	lwz      r0, 0x20(r27)
	stw      r0, 0xc(r1)
	lwz      r0, 0x28(r27)
	stw      r0, 0x10(r1)
	lwz      r3, gAramMgr@sda21(r13)
	lwz      r4, 0(r27)
	lwz      r5, 4(r27)
	lwz      r6, 8(r27)
	lwz      r7, 0xc(r27)
	lwz      r8, 0x10(r27)
	lwz      r9, 0x14(r27)
	lwz      r10, 0x18(r27)
	bl
aramToMainRam__Q24ARAM3MgrFPCcPUcUlUl15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectioniPUl
	mr       r30, r3

lbl_8044C9FC:
	cmplwi   r30, 0
	beq      lbl_8044CA14
	mr       r3, r26
	mr       r4, r29
	bl       add__5CNodeFP5CNode
	b        lbl_8044CA70

lbl_8044CA14:
	lbz      r0, 0x2d(r27)
	cmplwi   r0, 0
	beq      lbl_8044CA70
	lwz      r0, 0x28(r27)
	stw      r0, 8(r1)
	lwz      r3, 0(r27)
	lwz      r4, 4(r27)
	lwz      r5, 0x10(r27)
	lwz      r6, 0x14(r27)
	lwz      r7, 0x18(r27)
	lwz      r8, 0x1c(r27)
	lwz      r9, 0xc(r27)
	lwz      r10, 0x24(r27)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r0, r3, r3
	beq      lbl_8044CA70
	lwz      r4, 0x28(r27)
	mr       r30, r0
	lwz      r4, 0(r4)
	bl       DCFlushRange
	mr       r4, r29
	addi     r3, r26, 0x18
	bl       add__5CNodeFP5CNode

lbl_8044CA70:
	cmplwi   r30, 0
	beq      lbl_8044CA84
	stw      r30, 0x30(r29)
	mr       r31, r29
	b        lbl_8044CAAC

lbl_8044CA84:
	cmplwi   r29, 0
	beq      lbl_8044CAA4
	mr       r3, r29
	li       r4, 1
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_8044CAA4:
	mr       r3, r28
	bl       __dl__FPv

lbl_8044CAAC:
	mr       r3, r31
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace LoadResource
