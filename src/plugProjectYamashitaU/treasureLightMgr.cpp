#include "types.h"
#include "nans.h"
#include "Light.h"
#include "sysMath.h"

#define pi      3.1415927f
#define deg2rad (1.0f / 180.0f)

static const char beans[0xC] = ""; // filler to offset rodata
namespace TreasureLight {
/*
 * --INFO--
 * Address:	8013286C
 * Size:	000150
 */
Mgr::Mgr()
    : LightMgr("お宝ライト")
{
	m_rotation_angle           = 300.0f;
	m_elevation_angle          = 330.0f;
	m_lightObj_50              = new LightObj("メインライト", GX_LIGHT0, TYPE_2, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_lightObj_50->m_spotType  = 3;
	m_lightObj_50->m_elevation = Vector3f(0.0f, -1.0f, 0.0f);
	this->registLightObj(m_lightObj_50);
	m_lightObj_54           = new LightObj("スペキュラ-ライト", GX_LIGHT7, TYPE_4, JUtility::TColor(0xFF, 0xFF, 0xFF, 0xFF));
	m_lightObj_54->m_kScale = 40.0f;
	this->registLightObj(m_lightObj_54);
	m_ambientLightColor.r = 0x32;
	m_ambientLightColor.g = 0x32;
	m_ambientLightColor.b = 0x32;
	m_ambientLightColor.a = 0xff;
}

/*
 * --INFO--
 * Address:	801329BC
 * Size:	000004
 */
void Mgr::update() { return; }

/*
 * --INFO--
 * Address:	801329C0
 * Size:	000044
 */
void Mgr::set(Graphics& param_1)
{
	setCommonProc();
	LightMgr::set(param_1);
}

/*
 * --INFO--
 * Address:	80132A04
 * Size:	000044
 */
void Mgr::set(Matrixf& param_1)
{
	setCommonProc();
	LightMgr::set(param_1);
}

/*
 * --INFO--
 * Address:	80132A48
 * Size:	000184
 */

/*
Altafen's full math explanation:

in 2d you can convert an angle θ to its position on a circle of radius r (pic attached):
x = r*cos(θ)
y = r*sin(θ)

this is because in triangles, sin=opposite/hypotenuse, so in that triangle its y/r and we're multiplying by r
(and same for x)

or you can go the other way, which we dont care about for this function:
r = sqrt(x*x + y*y)
θ = atan2(y,x)



then for 3d you have to do it again - thisll find the position on the flat circle but not how tall it is
so if you imagine the pic now vertically with the line going in the direction of the 2D angle
y is now height, x is now how far away it is from the center pole
height = r*sin(θ)
2d_distance = r*cos(θ)

since the 2D x/y have to shrink a bit as the sphere gets smaller the higher you go, use 2d_distance as the radius before putting them in the
2D equations, and you get x = (r*cos(θ))*cos(θ) y = (r*cos(θ))*sin(θ) z = r*sin(θ)

or for pikmin it's slightly different (y/z swap, then x/z swap, then flip it upsidedown or something idk) but the math is basically still
the same
*/
void Mgr::setCommonProc()
{
	f32 radius = 3000.0f;
	Vector3f elevation;
	Vector3f rotation;
	f32 rotation_angle  = m_rotation_angle * deg2rad * pi;
	f32 elevation_angle = m_elevation_angle * deg2rad * pi;
	rotation.x          = pikmin2_cosf(elevation_angle) * radius * pikmin2_sinf(rotation_angle);
	rotation.y          = pikmin2_sinf(elevation_angle) * -radius;
	rotation.z          = pikmin2_cosf(elevation_angle) * radius * pikmin2_cosf(rotation_angle);
	elevation.x         = -rotation.x;
	elevation.y         = -rotation.y;
	elevation.z         = -rotation.z;
	f32 dist            = pikmin2_sqrtf(elevation.x * elevation.x + elevation.y * elevation.y + elevation.z * elevation.z);
	if (dist > 0.0f) {
		elevation.x *= 1 / dist;
		elevation.y *= 1 / dist;
		elevation.z *= 1 / dist;
	}
	m_lightObj_50->m_rotation  = rotation;
	m_lightObj_50->m_elevation = elevation;
	m_lightObj_50->m_float_40  = 0.85f;
	m_lightObj_54->m_rotation  = rotation;
	m_lightObj_54->m_elevation = elevation;
}

/*
 * --INFO--
 * Address:	80132BCC
 * Size:	000020
 */
void Mgr::drawDebugInfo(Graphics& param_1) { LightMgr::drawDebugInfo(param_1); }
} // namespace TreasureLight
