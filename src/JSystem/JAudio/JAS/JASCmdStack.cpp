#include "Dolphin/os.h"
#include "JSystem/JAudio/JAS/JASPortCmd.h"
#include "types.h"

JASPortCmd::TPortHead JASPortCmd::sCommandListOnce;
JASPortCmd::TPortHead JASPortCmd::sCommandListStay;

/**
 * @note Address: 0x800A6724
 * @note Size: 0x5C
 */
bool JASPortCmd::addPortCmdOnce()
{
	int interrupts = OSDisableInterrupts();
	bool result    = sCommandListOnce.append(this);
	OSRestoreInterrupts(interrupts);
	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
u32 JASPortCmd::addPortCmdStay()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x5C
 */
u32 JASPortCmd::cancelPortCmdStay()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800A6780
 * @note Size: 0x24
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

/**
 * @note Address: 0x800A67A4
 * @note Size: 0x34
 */
void JASPortCmd::execAllCommand()
{
	sCommandListOnce.execCommandOnce();
	sCommandListStay.execCommandStay();
}

/**
 * @note Address: 0x800A67D8
 * @note Size: 0x88
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

/**
 * @note Address: 0x800A6860
 * @note Size: 0x68
 */
void JASPortCmd::TPortHead::execCommandStay()
{
	int interrupts = OSDisableInterrupts();
	for (JSULink<JASPortCmd>* link = getFirst(); link != nullptr; link = link->getNext()) {
		link->getObject()->_10(link->getObject()->_14);
	}
	OSRestoreInterrupts(interrupts);
}
