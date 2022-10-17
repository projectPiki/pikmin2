#include "ARAM.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JUT/JUTException.h"
#include "Resource.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8049A640
    lbl_8049A640:
        .4byte 0x7265736F
        .4byte 0x75726365
        .4byte 0x4D67722E
        .4byte 0x63707000
    .global lbl_8049A650
    lbl_8049A650:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8049A65C
    lbl_8049A65C:
        .4byte 0x974C82E8
        .4byte 0x82A682C8
        .4byte 0x82A28FF3
        .4byte 0x91D482C5
        .4byte 0x82B282B4
        .4byte 0x82A282DC
        .4byte 0x82B7200A
        .4byte 0x00000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804EC3D8
    lbl_804EC3D8:
        .4byte 0x00000000
        .4byte 0x0000001C
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000020
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000024
        .4byte 0x00000000
    .global __vt__Q28Resource3Mgr
    __vt__Q28Resource3Mgr:
        .4byte 0
        .4byte 0
        .4byte drawDump__Q28Resource3MgrFR8Graphicsii
    .global __vt__Q28Resource10MgrCommand
    __vt__Q28Resource10MgrCommand:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Resource10MgrCommandFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Resource10MgrCommandFv"
        .4byte memoryCallBackFunc__Q28Resource10MgrCommandFv
        .4byte dvdLoadCallBackFunc__Q28Resource10MgrCommandFv
        .4byte aramLoadCallBackFunc__Q28Resource10MgrCommandFv
    .global "__vt__33Delegate<Q28Resource10MgrCommand>"
    "__vt__33Delegate<Q28Resource10MgrCommand>":
        .4byte 0
        .4byte 0
        .4byte "invoke__33Delegate<Q28Resource10MgrCommand>Fv"
        .4byte 0
        .4byte 0
        .4byte 0
    .global __vt__Q28Resource4Node
    __vt__Q28Resource4Node:
        .4byte 0
        .4byte 0
        .4byte __dt__Q28Resource4NodeFv
        .4byte getChildCount__5CNodeFv
        .4byte 0
        .4byte 0
        .4byte "@24@__dt__Q28Resource4NodeFv"
        .4byte 0
*/

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
Resource::Node::Node(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804330D8
 * Size:	0000DC
 */
Resource::Node::~Node(void)
{
	P2ASSERTLINE(99, m_mgrCommand != nullptr);
	P2ASSERTLINE(101, m_mgrCommand->_38 == this);
	m_mgrCommand->setModeInvalid();
	del();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_80433198
	lis      r3, __vt__Q28Resource4Node@ha
	addi     r3, r3, __vt__Q28Resource4Node@l
	stw      r3, 0(r30)
	addi     r0, r3, 0x10
	stw      r0, 0x18(r30)
	lwz      r0, 0x3c(r30)
	cmplwi   r0, 0
	bne      lbl_80433134
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0x63
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433134:
	lwz      r3, 0x3c(r30)
	lwz      r0, 0x38(r3)
	cmplw    r0, r30
	beq      lbl_80433160
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0x65
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433160:
	lwz      r3, 0x3c(r30)
	bl       setModeInvalid__Q28Resource10MgrCommandFv
	mr       r3, r30
	bl       del__5CNodeFv
	addi     r3, r30, 0x18
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	mr       r3, r30
	li       r4, 0
	bl       __dt__5CNodeFv
	extsh.   r0, r31
	ble      lbl_80433198
	mr       r3, r30
	bl       __dl__FPv

lbl_80433198:
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
 * Size:	000040
 */
void Resource::Node::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001CC
 */
void Resource::Node::drawDump(Graphics&, int&, int&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Resource::Node::becomeCurrentHeap(void)
{
	// UNUSED FUNCTION
	_30->becomeCurrentHeap();
	_30->changeGroupID(m_groupIDMaybe);
}

/*
 * @matchedSize
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void Resource::Node::destroy(Resource::Node* node)
{
	// UNUSED FUNCTION
	if (node) {
		((JKRExpHeap*)node->_30)->freeGroup(node->m_groupIDMaybe);
	}
}

/*
 * --INFO--
 * Address:	804331B4
 * Size:	000138
 */
Resource::MgrCommand::MgrCommand(char* name)
    : CNode(name)
    , JKRDisposer()
    , _3C()
    , _AC(nullptr)
    , _B0(nullptr)
    , _B4(this, &MgrCommand::memoryCallBackFunc)
    , _C8(this, &MgrCommand::dvdLoadCallBackFunc)
    , _DC(this, &MgrCommand::aramLoadCallBackFunc)
{
	setModeInvalid();
}

/*
 * Generated?
 * --INFO--
 * Address:	........
 * Size:	000064
 */
// void __dt__Q38Resource10MgrCommand26 @class$2436resourceMgr_cppFv(void)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	804332EC
 * Size:	0000B8
 */
Resource::MgrCommand::~MgrCommand(void)
{
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
void Resource::MgrCommand::becomeCurrentHeap(void)
{
	P2ASSERTLINE(187, _30 != -1);
	_AC = JKRHeap::sCurrentHeap;
	_38->becomeCurrentHeap();
}

/*
 * --INFO--
 * Address:	80433414
 * Size:	000088
 */
void Resource::MgrCommand::releaseCurrentHeap(void)
{
	P2ASSERTLINE(199, _30 != -1);
	P2ASSERTLINE(201, _AC != nullptr);
	_AC->becomeCurrentHeap();
	_AC = nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
bool Resource::MgrCommand::isFinish(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8043349C
 * Size:	00000C
 */
void* Resource::MgrCommand::getResource(void)
{
	return _38->m_resource;
	/*
	lwz      r3, 0x38(r3)
	lwz      r3, 0x38(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeMemory(Resource::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeAram(Resource::Node*, ARAM::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void Resource::MgrCommand::setModeDvd(Resource::Node*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804334A8
 * Size:	00001C
 */
void Resource::MgrCommand::setModeInvalid(void)
{
	_30 = -1;
	_38 = nullptr;
	_34 = 0;
	_B0 = nullptr;
}

/*
 * --INFO--
 * Address:	804334C4
 * Size:	000048
 */
void Resource::MgrCommand::memoryCallBackFunc()
{
	_38->_30->changeGroupID(_38->m_groupIDMaybe);
	JUT_PANICLINE(343, "有りえな�?状態でござ�?ま�? \n");
}

/*
 * --INFO--
 * Address:	8043350C
 * Size:	000094
 */
void Resource::MgrCommand::aramLoadCallBackFunc(void)
{
	_38->_30->changeGroupID(_38->m_groupIDMaybe);
	void* resource = gAramMgr->aramToMainRam(_A8->m_name, nullptr, 0, 0, Switch_1, 0, _38->_30, JKRDvdRipper::ALLOC_DIR_TOP, -1, nullptr);
	if (resource) {
		_38->m_resource = resource;
		userCallBackInvoke();
	}
}

/*
 * --INFO--
 * Address:	804335A0
 * Size:	0000BC
 */
void Resource::MgrCommand::dvdLoadCallBackFunc(void)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	li       r30, 1
	stw      r29, 0x24(r1)
	mr       r29, r3
	lwz      r4, 0x38(r3)
	lwz      r31, 0x14(r4)
	lwz      r3, 0x30(r4)
	lbz      r4, 0x34(r4)
	bl       changeGroupID__7JKRHeapFUc
	lbz      r0, 0(r31)
	extsb.   r0, r0
	beq      lbl_80433630
	addi     r0, r1, 0x10
	mr       r3, r31
	stw      r0, 8(r1)
	li       r4, 0
	li       r5, 1
	li       r6, 0
	lwz      r7, 0x38(r29)
	li       r8, 1
	li       r9, 0
	li       r10, 0
	lwz      r7, 0x30(r7)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r31, r3, r3
	beq      lbl_8043362C
	lwz      r4, 0x10(r1)
	bl       DCFlushRange
	lwz      r3, 0x38(r29)
	stw      r31, 0x38(r3)
	b        lbl_80433630

lbl_8043362C:
	li       r30, 0

lbl_80433630:
	clrlwi.  r0, r30, 0x18
	beq      lbl_80433640
	mr       r3, r29
	bl       userCallBackInvoke__Q28Resource10MgrCommandFv

lbl_80433640:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8043365C
 * Size:	000074
 */
void Resource::MgrCommand::userCallBackInvoke(void)
{
	if (_B0) {
		JKRHeap* existingCurrentHeap = JKRHeap::sCurrentHeap;
		_38->_30->becomeCurrentHeap();
		_B0->invoke(this);
		_B0 = nullptr;
		existingCurrentHeap->becomeCurrentHeap();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
bool Resource::MgrCommand::destroy()
{
	// UNUSED FUNCTION
	bool result = false;
	if (_30 != -1) {
		if (_38) {
			Node::destroy(_38);
			_30    = -1;
			result = true;
			_38    = nullptr;
			_34    = 0;
			_B0    = nullptr;
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
Resource::Mgr::Mgr(JKRHeap* heap, u32 size)
    : _04(nullptr)
    , _08(0)
    , _0C(0)
    , _10()
    , _28()
{
	_40.bytesView[0]             = 0;
	_40.bytesView[1]             = 0;
	_40.bytesView[2]             = 0;
	_40.bytesView[3]             = 0;
	JKRHeap* existingCurrentHeap = JKRHeap::sCurrentHeap;
	if (heap == nullptr) {
		heap = JKRHeap::sCurrentHeap;
	}
	_04 = JKRExpHeap::create(size, heap, true);
	P2ASSERTLINE(487, _04 != nullptr);
	_08              = size;
	_0C              = _08;
	_40.bytesView[0] = 0;
	_40.bytesView[1] = 0;
	_40.bytesView[2] = 0;
	_40.bytesView[3] = 0;
	_40.dwordView &= -2;
	existingCurrentHeap->becomeCurrentHeap();

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	lis      r6, __vt__Q28Resource3Mgr@ha
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	addi     r3, r6, __vt__Q28Resource3Mgr@l
	stw      r3, 0(r28)
	addi     r3, r28, 0x10
	stw      r0, 4(r28)
	stw      r0, 8(r28)
	stw      r0, 0xc(r28)
	bl       __ct__5CNodeFv
	addi     r3, r28, 0x28
	bl       __ct__5CNodeFv
	li       r0, 0
	cmplwi   r29, 0
	stb      r0, 0x40(r28)
	stb      r0, 0x41(r28)
	stb      r0, 0x42(r28)
	stb      r0, 0x43(r28)
	lwz      r31, sCurrentHeap__7JKRHeap@sda21(r13)
	bne      lbl_80433748
	mr       r29, r31

lbl_80433748:
	mr       r3, r30
	mr       r4, r29
	li       r5, 1
	bl       create__10JKRExpHeapFUlP7JKRHeapb
	stw      r3, 4(r28)
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_80433784
	lis      r3, lbl_8049A640@ha
	lis      r5, lbl_8049A650@ha
	addi     r3, r3, lbl_8049A640@l
	li       r4, 0x1e7
	addi     r5, r5, lbl_8049A650@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80433784:
	stw      r30, 8(r28)
	li       r0, 0
	mr       r3, r31
	lwz      r4, 8(r28)
	stw      r4, 0xc(r28)
	stb      r0, 0x40(r28)
	stb      r0, 0x41(r28)
	stb      r0, 0x42(r28)
	stb      r0, 0x43(r28)
	lwz      r0, 0x40(r28)
	rlwinm   r0, r0, 0, 0, 0x1e
	stw      r0, 0x40(r28)
	bl       becomeCurrentHeap__7JKRHeapFv
	lwz      r0, 0x24(r1)
	mr       r3, r28
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void Resource::Mgr::search(char const*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void Resource::Mgr::dump(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804337DC
 * Size:	000004
 */
void Resource::Mgr::drawDump(Graphics&, int, int) { }

/*
 * --INFO--
 * Address:	804337E0
 * Size:	0001B4
 */
void Resource::Mgr::createNewNode(char const*)
{
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
void Resource::Mgr::loadResource(Resource::MgrCommand*, char const*, bool)
{
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
bool Resource::Mgr::destroy(Resource::MgrCommand* command) { return command->destroy(); }

/*
 * --INFO--
 * Address:	80433B8C
 * Size:	000064
 */
void Resource::Mgr::destroyAll(void)
{
	Node* parent;
	Node* child = (Node*)_10.m_child;
	while (parent = child, parent) {
		child = (Node*)parent->m_next;
		Node::destroy(parent);
	}
	_04->freeAll();
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
bool Resource::Mgr::sync(Resource::MgrCommand*, bool)
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
void Resource::Mgr::syncAll(bool)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80433DD0
 * Size:	000130
 */
void Resource::Mgr::delFinishCommand(void)
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
void Resource::Mgr::searchCommand(Resource::MgrCommand*)
{
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
void Resource::Mgr::watchHeap(void)
{
	// UNUSED FUNCTION
}

/*
 * Generated?
 * --INFO--
 * Address:	80433F30
 * Size:	000030
 */
// void Delegate<Resource::MgrCommand>::invoke()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	mr       r4, r3
// 	stw      r0, 0x14(r1)
// 	addi     r12, r4, 8
// 	lwz      r3, 4(r3)
// 	bl       __ptmf_scall
// 	nop
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80433F60
//  * Size:	000008
//  */
// @24 @Resource::Node::~Node(void)
// {
// 	/*
// 	addi     r3, r3, -24
// 	b        __dt__Q28Resource4NodeFv
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	80433F68
//  * Size:	000008
//  */
// @24 @Resource::MgrCommand::~MgrCommand(void)
// {
// 	/*
// 	addi     r3, r3, -24
// 	b        __dt__Q28Resource10MgrCommandFv
// 	*/
// }
