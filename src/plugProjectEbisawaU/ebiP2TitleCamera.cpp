#include "ebi/title/TTitle.h"
#include "nans.h"

namespace ebi {
namespace title {
/*
 * --INFO--
 * Address:	803C1EBC
 * Size:	000074
 */

void TTitleCameraMgr::update()
{
	_174.y += mParms.mCam1.mValue;
	_18C.x          = 0.0f;
	_18C.y          = 0.0f;
	_18C.z          = -1.0f;
	mLookAtPosition = _174;
	mLookAtPosition.y -= 1.0f;
	mViewAngle = mParms.mCam2.mValue;
	Camera::update();
}

} // namespace title
} // namespace ebi
