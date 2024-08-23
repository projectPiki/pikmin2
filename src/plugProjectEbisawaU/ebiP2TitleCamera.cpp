#include "ebi/title/TTitle.h"
#include "nans.h"

namespace ebi {
namespace title {
/**
 * @note Address: 0x803C1EBC
 * @note Size: 0x74
 */

void TTitleCameraMgr::update()
{
	mPosition.y += mParms.mYOffset();
	mLookAtRotation.set(0.0f, 0.0f, -1.0f);

	mLookAtPosition = mPosition;
	mLookAtPosition.y -= 1.0f;
	mViewAngle = mParms.mFOVY();

	Camera::update();
}

} // namespace title
} // namespace ebi
