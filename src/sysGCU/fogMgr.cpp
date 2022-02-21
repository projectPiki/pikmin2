#include "FogMgr.h"
#include "Camera.h"
#include "Dolphin/gx.h"
#include "Dolphin/vi.h"
#include "Graphics.h"
#include "System.h"
#include "types.h"
#include "Viewport.h"
#include "nans.h"

/*
 * __ct
 *
 * --INFO--
 * Address:	80432948
 * Size:	000074
 */
FogMgr::FogMgr()
    : CNode("フォグマネージャ")
    , m_type(GX_FOG_LINEAR)
    , m_nearZ(640.0f)
    , m_farZ(3024.0f)
    , m_color(0xAD, 0xB1, 0xFC, 0xFF)
{
}

/*
 * --INFO--
 * Address:	804329BC
 * Size:	000040
 */
void FogMgr::off(Graphics&)
{
	Color4 fogColor;
	*(u32*)&fogColor = *(u32*)&m_color;
	GXSetFog(GX_FOG_NONE, &fogColor, 0.0f, 0.0f, 0.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	804329FC
 * Size:	0000AC
 */
void FogMgr::set(Graphics& graphics)
{
	GXFogAdjTable table;
	Camera* cam = graphics._25C->m_camera;

	Color4 fogColor;
	*(u32*)&fogColor = *(u32*)&m_color;
	GXSetFog(m_type, &fogColor, m_nearZ, m_farZ, cam->getNear(), cam->getFar());

	u16 width = System::getRenderModeObj()->fbWidth;
	GXInitFogAdjTable(&table, width, cam->_B4);

	width = System::getRenderModeObj()->fbWidth;
	GXSetFogRangeAdj(TRUE, width / 2 & -1, &table);
}

/*
 * --INFO--
 * Address:	80432AA8
 * Size:	000024
 */
void FogMgr::setColor(Color4& color) { m_color = color; }

/*
 * --INFO--
 * Address:	80432ACC
 * Size:	000024
 */
void FogMgr::getColor(Color4& color) { color = m_color; }
