#include "Dolphin/os.h"
#include "JSystem/JAS/JASCallbackMgr.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	800A6500
 * Size:	00009C
 */
bool JASCallbackMgr::regist(JASCallback* function, void* argument)
{
	int interrupts = OSDisableInterrupts();
	for (int i = 0; i < 0x10; i++) {
		if (m_callbacks[i].m_function == nullptr) {
			m_callbacks[i].m_function = function;
			m_callbacks[i].m_argument = argument;
			OSRestoreInterrupts(interrupts);
			return true;
		}
	}
	OSRestoreInterrupts(interrupts);
	return false;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r5
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	bl       OSDisableInterrupts
	li       r0, 0x10
	mr       r4, r29
	stw      r3, 8(r1)
	li       r3, 0
	mtctr    r0

lbl_800A653C:
	lwz      r0, 0(r4)
	cmplwi   r0, 0
	bne      lbl_800A6568
	slwi     r0, r3, 3
	lwz      r3, 8(r1)
	stwx     r30, r29, r0
	add      r4, r29, r0
	stw      r31, 4(r4)
	bl       OSRestoreInterrupts
	li       r3, 1
	b        lbl_800A6580

lbl_800A6568:
	addi     r4, r4, 8
	addi     r3, r3, 1
	bdnz     lbl_800A653C
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	li       r3, 0

lbl_800A6580:
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
 * Address:	800A659C
 * Size:	000110
 */
bool JASCallbackMgr::reject(JASCallback* function, void* argument)
{
	bool didRejectAtLeastOne = false;
	int interrupts           = OSDisableInterrupts();
	for (int i = 0; i < 0x10; i++) {
		// TCallback* cb = &m_callbacks[i];
		// if (cb->isMatch(function, argument)) {
		// if (cb->m_function == function && cb->m_argument == argument) {
		// 	didRejectAtLeastOne = true;
		// 	cb->clear();
		// }
		TCallback* cb = &m_callbacks[i];
		if (cb->m_function == function && cb->m_argument == argument) {
			didRejectAtLeastOne = true;
			cb->m_function      = nullptr;
			cb->m_argument      = nullptr;
		}
		// if (m_callbacks[i].m_function == function && m_callbacks[i].m_argument == argument) {
		// 	m_callbacks[i].m_function = nullptr;
		// 	m_callbacks[i].m_argument = nullptr;
		// 	didRejectAtLeastOne = true;
		// }
	}
	OSRestoreInterrupts(interrupts);
	return didRejectAtLeastOne;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bl       OSDisableInterrupts
	li       r0, 4
	mr       r4, r28
	stw      r3, 8(r1)
	li       r5, 0
	li       r3, 0
	mtctr    r0

lbl_800A65E4:
	lwz      r0, 0(r4)
	cmplw    r0, r29
	bne      lbl_800A6608
	lwz      r0, 4(r4)
	cmplw    r0, r30
	bne      lbl_800A6608
	stw      r3, 0(r4)
	li       r31, 1
	stw      r3, 4(r4)

lbl_800A6608:
	lwz      r0, 8(r4)
	cmplw    r0, r29
	bne      lbl_800A662C
	lwz      r0, 0xc(r4)
	cmplw    r0, r30
	bne      lbl_800A662C
	stw      r3, 8(r4)
	li       r31, 1
	stw      r3, 0xc(r4)

lbl_800A662C:
	lwz      r0, 0x10(r4)
	cmplw    r0, r29
	bne      lbl_800A6650
	lwz      r0, 0x14(r4)
	cmplw    r0, r30
	bne      lbl_800A6650
	stw      r3, 0x10(r4)
	li       r31, 1
	stw      r3, 0x14(r4)

lbl_800A6650:
	lwz      r0, 0x18(r4)
	cmplw    r0, r29
	bne      lbl_800A6674
	lwz      r0, 0x1c(r4)
	cmplw    r0, r30
	bne      lbl_800A6674
	stw      r3, 0x18(r4)
	li       r31, 1
	stw      r3, 0x1c(r4)

lbl_800A6674:
	addi     r4, r4, 0x20
	addi     r5, r5, 3
	bdnz     lbl_800A65E4
	lwz      r3, 8(r1)
	bl       OSRestoreInterrupts
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Size:	000134
 */
bool JASCallbackMgr::reject(JASCallback*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A66AC
 * Size:	000078
 */
void JASCallbackMgr::callback()
{
	for (int i = 0; i < 0x10; i++) {
		TCallback* cb = &m_callbacks[i];
		if (cb->m_function && cb->m_function(cb->m_argument) < 0) {
			cb->m_function = nullptr;
			cb->m_argument = nullptr;
		}
	}
}
