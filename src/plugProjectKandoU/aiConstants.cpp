#include "Game/AIConstants.h"

struct RamStream : public Stream {
	char _10[(266 - sizeof(Stream)) + 0x310]; // _10

	RamStream(void*, int);
};

enum JKRExpandSwitch { Switch_0 = 0 };

struct JKRDvdRipper {
	enum EAllocDirection { Dir_2 = 2 };

	static void* loadToMainRAM(char const*, uchar*, JKRExpandSwitch, ulong,
	                           struct JKRHeap*, JKRDvdRipper::EAllocDirection,
	                           ulong, int*, ulong*);
};

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
	    (JKRDvdRipper::EAllocDirection)2, 0, nullptr, nullptr);

	if (handle) {
		RamStream stream(handle, -1);
		*((u32*)&stream + 3)   = 1;
		*((u32*)&stream + 261) = 1;

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