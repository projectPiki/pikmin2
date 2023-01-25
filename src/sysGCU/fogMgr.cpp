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
    , mType(GX_FOG_LINEAR)
    , mNearZ(640.0f)
    , mFarZ(3024.0f)
    , mColor(0xAD, 0xB1, 0xFC, 0xFF)
{
}

/*
 * --INFO--
 * Address:	804329BC
 * Size:	000040
 */
void FogMgr::off(Graphics&) { GXSetFog(GX_FOG_NONE, 0.0f, 0.0f, 0.0f, 0.0f, mColor.GXColorView); }

/*
 * --INFO--
 * Address:	804329FC
 * Size:	0000AC
 */
void FogMgr::set(Graphics& graphics)
{
	GXFogAdjTable table;
	Camera* activeCam = graphics.mCurrentViewport->mCamera;

	GXSetFog(mType, mNearZ, mFarZ, activeCam->getNear(), activeCam->getFar(), mColor.GXColorView);

	u16 width = System::getRenderModeObj()->fbWidth;
	GXInitFogAdjTable(&table, width, activeCam->mProjectionMtx);

	width = System::getRenderModeObj()->fbWidth;
	GXSetFogRangeAdj(GX_TRUE, width / 2, &table);
}

/*
 * --INFO--
 * Address:	80432AA8
 * Size:	000024
 */
void FogMgr::setColor(Color4& color) { mColor.colorView = color; }

/*
 * --INFO--
 * Address:	80432ACC
 * Size:	000024
 */
void FogMgr::getColor(Color4& color) { color = mColor.colorView; }
