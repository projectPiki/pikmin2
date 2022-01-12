#include "types.h"

#include "Game/AIConstants.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/JKRExpandSwitch.h"
#include "stream.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047FC28
    lbl_8047FC28:
        .4byte 0x6169436F
        .4byte 0x6E737461
        .4byte 0x6E747300
        .4byte 0x646F7065
        .4byte 0x636F756E
        .4byte 0x74000000
        .4byte 0x63616D65
        .4byte 0x72615F61
        .4byte 0x6E676C65
        .4byte 0x00000000
        .4byte 0x2F757365
        .4byte 0x722F4B61
        .4byte 0x6E646F2F
        .4byte 0x6169436F
        .4byte 0x6E737461
        .4byte 0x6E74732E
        .4byte 0x74787400
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game11AIConstants
    __vt__Q24Game11AIConstants:
        .4byte 0
        .4byte 0
        .4byte __dt__Q24Game11AIConstantsFv
        .4byte getChildCount__5CNodeFv

    .section .sbss # 0x80514D80 - 0x80516360
    .global _aiConstants__4Game
    _aiConstants__4Game:
        .skip 0x8

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519428
    lbl_80519428:
        .4byte 0x67726176
        .4byte 0x69747900
    .global lbl_80519430
    lbl_80519430:
        .4byte 0x64656274
        .4byte 0x00000000
    .global lbl_80519438
    lbl_80519438:
        .4byte 0x43340000
        .4byte 0x00000000
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

	void* handle = JKRDvdRipper::loadToMainRAM("/user/Kando/aiConstants.txt", nullptr, Switch_0, 0, 0, JKRDvdRipper::AllocDirection_2, 0,
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
 */
AIConstants::~AIConstants() { }

} // namespace Game
