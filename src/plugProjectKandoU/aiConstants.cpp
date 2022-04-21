#include "types.h"

#include "Game/AIConstants.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "stream.h"

/*
    Generated from dpostproc

    .section .rodata # 0x804732E0 - 0x8049E220
    .balign 8
    lbl_8047FC28:
        .asciz "aiConstants"
    .balign 4
    lbl_8047FC34:
        .asciz "dopecount"
    .balign 4
    lbl_8047FC40:
        .asciz "camera_angle"
    .balign 4
    lbl_8047FC50:
        .asciz "/user/Kando/aiConstants.txt"

    .section .data, "wa" # 0x8049E220 - 0x804EFC20
    .balign 8
    .global __vt__Q24Game11AIConstants
    __vt__Q24Game11AIConstants:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11AIConstantsFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .balign 8
    .global _aiConstants__4Game
    _aiConstants__4Game:
        .skip 4

    .section .sdata2, "a" # 0x80516360 - 0x80520E40
    .balign 8
    lbl_80519428:
        .asciz "gravity"
    .balign 4
    lbl_80519430:
        .asciz "debt"
    .balign 4
    lbl_80519438:
        .float 180.0
*/

namespace Game {
AIConstants* _aiConstants;

/*
 * --INFO--
 * Address:	801B62B0
 * Size:	000148
 */
AIConstants::AIConstants()
    : TagParameters("aiConstants")
    , m_gravity(this, "gravity")
    , m_dopeCount(this, "dopecount")
    , m_debt(this, "debt")
    , m_cameraAngle(this, "camera_angle")
{
	m_dopeCount.m_data   = 2;
	m_debt.m_data        = 10000;
	m_cameraAngle.m_data = 180.0f;

	void* handle = JKRDvdRipper::loadToMainRAM("/user/Kando/aiConstants.txt", nullptr, Switch_0, 0, 0, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
	                                           nullptr, nullptr);

	if (handle) {
		RamStream stream(handle, -1);
		stream.resetPosition(true, 1);
		read(stream);
		delete[] handle;
	}
}

/*
 * --INFO--
 * Address:	801B63F8
 * Size:	000070
 * AIConstants::~AIConstants() { }
 */

} // namespace Game
