#include "types.h"

#include "Game/AIConstants.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "stream.h"

namespace Game {
AIConstants* _aiConstants;

/**
 * @note Address: 0x801B62B0
 * @note Size: 0x148
 */
AIConstants::AIConstants()
    : TagParameters("aiConstants")
    , mGravity(this, "gravity")
    , mDopeCount(this, "dopecount")
    , mDebt(this, "debt")
    , mCameraAngle(this, "camera_angle")
{
	mDopeCount.mData   = 2;
	mDebt.mData        = 10000;
	mCameraAngle.mData = 180.0f;

	char* fileName = "/user/Kando/aiConstants.txt";
	loadFromFile(this, fileName);
}

/**
 * @note Address: 0x801B63F8
 * @note Size: 0x70
 * AIConstants::~AIConstants() { }
 */

} // namespace Game
