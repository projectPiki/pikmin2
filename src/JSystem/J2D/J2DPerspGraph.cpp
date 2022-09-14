#include "types.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "fdlibm.h"
#include "Dolphin/math.h"
#include "Dolphin/gx.h"

/*
 * __ct
 *
 * --INFO--
 * Address:	80035DC8
 * Size:	00004C
 */
J2DPerspGraph::J2DPerspGraph()
    : J2DGrafContext(0.0f, 0.0f, 0.0f, 0.0f)
{
}

/*
 * --INFO--
 * Address:	80035E14
 * Size:	000060
 */
void J2DPerspGraph::set(f32 fovY, f32 f2, f32 f3)
{
	setFovy(fovY);
	_C0 = f2;
	_C4 = f3;
	setLookat();
}

/*
 * --INFO--
 * Address:	80035E74
 * Size:	00002C
 */
void J2DPerspGraph::setFovy(f32 fovY)
{
	m_fovY = fovY;
	if (fovY < 1.0f) {
		m_fovY = 1.0f;
	} else if (fovY > 179.0f) {
		m_fovY = 179.0f;
	}
}

/*
 * --INFO--
 * Address:	80035EA0
 * Size:	000068
 */
void J2DPerspGraph::setPort()
{
	J2DGrafContext::setPort();
	C_MTXPerspective(m_fovY, m_bounds.getWidth() / m_bounds.getHeight(), _C0, _C4, m_mtx44);
	GXSetProjection(m_mtx44, GX_PERSPECTIVE);
}

/*
 * --INFO--
 * Address:	80035F08
 * Size:	000068
 */
void J2DPerspGraph::setLookat()
{
	f32 tanTheta = tan(m_fovY * PI / 360.0f);
	_C8          = (m_bounds.getHeight() / 2) / tanTheta;
	makeLookat();
}

/*
 * --INFO--
 * Address:	80035F70
 * Size:	0000A0
 */
void J2DPerspGraph::makeLookat()
{
	f32 width  = (m_bounds.f.x + m_bounds.i.x) / 2;
	f32 height = (m_bounds.f.y + m_bounds.i.y) / 2;

	Vec pos;
	pos.x = width;
	pos.y = height;
	pos.z = -(_C8);

	Vec dest;
	dest.x = width;
	dest.y = height;
	dest.z = 0.0f;

	Vec up;
	up.x = 0.0f;
	up.y = -1.0f;
	up.z = 0.0f;

	C_MTXLookAt(m_posMtx, &pos, &up, &dest);
	GXLoadPosMtxImm(m_posMtx, 0);
}
