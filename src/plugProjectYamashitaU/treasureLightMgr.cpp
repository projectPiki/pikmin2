#include "nans.h"
#include "Light.h"

// Fix rodata mismatch with null bytes
static const char _RODATA_FIX[0xC] = { '\0' };

namespace TreasureLight {
/*
 * --INFO--
 * Address:	8013286C
 * Size:	000150
 */
Mgr::Mgr()
    : LightMgr("お宝ライト")
{
	m_rotationAngle  = 300.0f;
	m_elevationAngle = 330.0f;

	m_mainLight              = new LightObj("メインライト", GX_LIGHT0, TYPE_2, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_mainLight->m_spotType  = 3;
	m_mainLight->m_elevation = Vector3f(0.0f, -1.0f, 0.0f);
	registLightObj(m_mainLight);

	m_specLight      = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_4, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_specLight->_4C = 40.0f;
	registLightObj(m_specLight);

	m_ambientLight.m_color = Color4(0x32, 0x32, 0x32, 0xFF);
}

/*
 * --INFO--
 * Address:	801329BC
 * Size:	000004
 */
void Mgr::update() { }

/*
 * --INFO--
 * Address:	801329C0
 * Size:	000044
 */
void Mgr::set(Graphics& gfx)
{
	setCommonProc();
	LightMgr::set(gfx);
}

/*
 * --INFO--
 * Address:	80132A04
 * Size:	000044
 */
void Mgr::set(Matrixf& mtx)
{
	setCommonProc();
	LightMgr::set(mtx);
}

/*
 * --INFO--
 * Address:	80132A48
 * Size:	000184
 * Credits: Altafen
 *
 * https://en.wikipedia.org/wiki/Spherical_coordinate_system
 * You can convert an angle θ to its position on a circle of radius r:
 * x = r * cos(θ)
 * y = r * sin(θ)
 *
 * So now imagine a line going in the direction of the 2D angle where
 * y is now height, x is now how far away it is from the center pole
 *
 * height   = r * sin(θ)
 * distance = r * cos(θ)
 *
 * Since the 2D x/y have to shrink a bit as the sphere gets smaller the
 * higher you go, use distance as the radius before putting them in the
 * 2D equations, and you get
 *
 * x = (r * cos(θ)) * cos(θ)
 * y = (r * cos(θ)) * sin(θ)
 * z = r * sin(θ)
 *
 * For pikmin it's slightly different (y/z swap)
 */
void Mgr::setCommonProc()
{
	f32 rotation_angle  = (m_rotationAngle * DEG2RAD) * PI;
	f32 elevation_angle = (m_elevationAngle * DEG2RAD) * PI;

	f32 radius = 3000.0f;
	Vector3f rotation;
	rotation.x = pikmin2_cosf(elevation_angle) * radius * pikmin2_sinf(rotation_angle);
	rotation.y = pikmin2_sinf(elevation_angle) * -radius;
	rotation.z = pikmin2_cosf(elevation_angle) * radius * pikmin2_cosf(rotation_angle);

	Vector3f elevation(-rotation.x, -rotation.y, -rotation.z);

	f32 dist = pikmin2_sqrtf(VECTOR_SQUARE_MAG(elevation));
	if (dist > 0.0f) {
		elevation.x *= 1 / dist;
		elevation.y *= 1 / dist;
		elevation.z *= 1 / dist;
	}

	m_mainLight->m_rotation  = rotation;
	m_mainLight->m_elevation = elevation;
	m_mainLight->_40         = 0.85f;

	m_specLight->m_rotation  = rotation;
	m_specLight->m_elevation = elevation;
}

/*
 * --INFO--
 * Address:	80132BCC
 * Size:	000020
 */
void Mgr::drawDebugInfo(Graphics& gfx) { LightMgr::drawDebugInfo(gfx); }
} // namespace TreasureLight
