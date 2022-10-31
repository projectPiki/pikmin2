#include "Dolphin/os.h"
#include "JSystem/JAS/JASPortCmd.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_JASCmdStack_cpp

    .section .bss  # 0x804EFC20 - 0x8051467C
    .global sCommandListOnce__10JASPortCmd
    sCommandListOnce__10JASPortCmd:
        .skip 0x18
    .global sCommandListStay__10JASPortCmd
    sCommandListStay__10JASPortCmd:
        .skip 0xC
*/

JASPortCmd::TPortHead JASPortCmd::sCommandListOnce;
JASPortCmd::TPortHead JASPortCmd::sCommandListStay;

/*
 * --INFO--
 * Address:	800A6724
 * Size:	00005C
 */
bool JASPortCmd::addPortCmdOnce()
{
	int interrupts = OSDisableInterrupts();
	bool result    = sCommandListOnce.append(this);
	OSRestoreInterrupts(interrupts);
	return result;
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
u32 JASPortCmd::addPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
u32 JASPortCmd::cancelPortCmdStay()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A6780
 * Size:	000024
 */
bool JASPortCmd::setPortCmd(void (*command)(JASPortArgs*), JASPortArgs* args)
{
	if (m_list != nullptr) {
		return false;
	}
	_10 = command;
	_14 = args;
	return true;
}

/*
 * --INFO--
 * Address:	800A67A4
 * Size:	000034
 */
void JASPortCmd::execAllCommand()
{
	sCommandListOnce.execCommandOnce();
	sCommandListStay.execCommandStay();
}

/*
 * --INFO--
 * Address:	800A67D8
 * Size:	000088
 */
void JASPortCmd::TPortHead::execCommandOnce(void)
{
	int interrupts = OSDisableInterrupts();
	JSULink<JASPortCmd>* next;
	for (JSULink<JASPortCmd>* link = getFirst(); link != nullptr; link = next) {
		next = link->getNext();
		link->getObject()->_10(link->getObject()->_14);
		remove(link);
	}
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800A6860
 * Size:	000068
 */
void JASPortCmd::TPortHead::execCommandStay(void)
{
	int interrupts = OSDisableInterrupts();
	for (JSULink<JASPortCmd>* link = getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->_10(link->getObject()->_14);
	}
	OSRestoreInterrupts(interrupts);
}

/*
 * --INFO--
 * Address:	800A68C8
 * Size:	00006C
 */
// void __sinit_JASCmdStack_cpp(void)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	lis      r3, sCommandListOnce__10JASPortCmd@ha
// 	stw      r0, 0x14(r1)
// 	addi     r3, r3, sCommandListOnce__10JASPortCmd@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sCommandListOnce__10JASPortCmd@ha
// 	lis      r4, __dt__Q210JASPortCmd9TPortHeadFv@ha
// 	lis      r5, lbl_804F06E8@ha
// 	addi     r3, r3, sCommandListOnce__10JASPortCmd@l
// 	addi     r4, r4, __dt__Q210JASPortCmd9TPortHeadFv@l
// 	addi     r5, r5, lbl_804F06E8@l
// 	bl       __register_global_object
// 	lis      r3, sCommandListStay__10JASPortCmd@ha
// 	addi     r3, r3, sCommandListStay__10JASPortCmd@l
// 	bl       initiate__10JSUPtrListFv
// 	lis      r3, sCommandListStay__10JASPortCmd@ha
// 	lis      r4, __dt__Q210JASPortCmd9TPortHeadFv@ha
// 	lis      r5, lbl_804F06F4@ha
// 	addi     r3, r3, sCommandListStay__10JASPortCmd@l
// 	addi     r4, r4, __dt__Q210JASPortCmd9TPortHeadFv@l
// 	addi     r5, r5, lbl_804F06F4@l
// 	bl       __register_global_object
// 	lwz      r0, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * --INFO--
 * Address:	800A6934
 * Size:	000058
 */
// JASPortCmd::TPortHead::~TPortHead(void) { }

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
// void JSUList<JASPortCmd>::~JSUList()
// {
// 	// UNUSED FUNCTION
// }
