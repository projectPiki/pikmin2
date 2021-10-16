#include "Game/AIConstants.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JKR/JKRExpandSwitch.h"
#include "stream.h"

namespace Game {

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

	void* handle = JKRDvdRipper::loadToMainRAM(
	    "/user/Kando/aiConstants.txt", nullptr, Switch_0, 0, 0,
	    JKRDvdRipper::AllocDirection_2, 0, nullptr, nullptr);

	if (handle) {
		RamStream stream(handle, -1);
		stream.m_isTextMode = 1;
		stream.m_tabCount   = 0;

		this->read(stream);

		delete handle;
	}
}

/*
 * --INFO--
 * Address:	801B63F8
 * Size:	000070
 */
AIConstants::~AIConstants() { }

} // namespace Game
