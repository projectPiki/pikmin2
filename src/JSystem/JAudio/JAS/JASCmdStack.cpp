#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "types.h"

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
	if (mList != nullptr) {
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
void JASPortCmd::TPortHead::execCommandOnce()
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
void JASPortCmd::TPortHead::execCommandStay()
{
	int interrupts = OSDisableInterrupts();
	for (JSULink<JASPortCmd>* link = getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->_10(link->getObject()->_14);
	}
	OSRestoreInterrupts(interrupts);
}
