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
	_174.y += m_parms.m_cam1.m_value;
	_18C.x           = 0.0f;
	_18C.y           = 0.0f;
	_18C.z           = -1.0f;
	m_lookAtPosition = _174;
	m_lookAtPosition.y -= 1.0f;
	m_viewAngle = m_parms.m_cam2.m_value;
	Camera::update();
}

} // namespace title
} // namespace ebi
