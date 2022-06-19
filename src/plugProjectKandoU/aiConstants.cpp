#include "types.h"

#include "Game/AIConstants.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "stream.h"

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

	char* fileName = "/user/Kando/aiConstants.txt";

	void* handle = JKRDvdRipper::loadToMainRAM(fileName, nullptr, Switch_0, 0, 0, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr, nullptr);

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
