#include "ebi/title/TTitle.h"
#include "Dolphin/gx.h"
#include "System.h"
#include "nans.h"

namespace ebi {
namespace title {

/*
 * sets Fog graphics effect based on parameters.
 *
 * --INFO--
 * Address:	803EB1A4
 * Size:	000118
 */
void TTitleFogMgr::setGX(Camera& camera)
{
	if (m_parms.m_isFogActive.m_value) {
		Color4 color4_local(m_parms.m_colR.m_value, m_parms.m_colG.m_value, m_parms.m_colB.m_value, m_parms.m_colA.m_value);
		GXColor color_local = color4_local.toGXColor();

		float startDist = m_parms.m_startDist.m_value;
		float endDist   = m_parms.m_endDist.m_value;

		GXSetFog(GX_FOG_LINEAR, startDist, endDist, camera.getNear(), camera.getFar(), color_local);

		u16 width = System::getRenderModeObj()->fbWidth;
		GXFogAdjTable table;
		GXInitFogAdjTable(&table, width, camera.m_projectionMtx);
		GXSetFogRangeAdj(GX_TRUE, (u16)(System::getRenderModeObj()->fbWidth) / 2, &table);
	} else {
		GXSetFog(GX_FOG_NONE, 0.0f, 0.0f, 0.0f, 0.0f, m_color.GXColorView);
	}
}

/*
 * Sets title-screen fog parameters from file.
 *
 * --INFO--
 * Address:	803EB2BC
 * Size:	00007C
 */
void TTitleFogMgr::loadSettingFile(JKRArchive* archive, char* file)
{
	void* resource = archive->getResource(file);
	if (resource) {
		RamStream stream(resource, -1);
		stream.m_mode = 1;
		if (stream.m_mode == 1) {
			stream.m_tabCount = 0;
		};
		m_parms.read(stream);
	}
}

} // namespace title
} // namespace ebi
