#include "ebi/title/TTitle.h"
#include "stream.h"
#include "nans.h"

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	803C1F58
 * Size:	000094
 */
void TTitleLightMgr::loadSettingFile(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);

		m_setting.m_ambParms.read(stream);
		m_setting.m_mainParms.read(stream);
		m_setting.m_specParms.read(stream);
	}
}

/*
 * --INFO--
 * Address:	803C1FEC
 * Size:	00017C
 */
void TTitleLightMgr::setParam_()
{
	m_ambientLight.m_color
	    = Color4(m_setting.m_ambParms.m_red, m_setting.m_ambParms.m_green, m_setting.m_ambParms.m_blue, m_setting.m_ambParms.m_alpha);

	m_lightObjMain.m_color
	    = Color4(m_setting.m_mainParms.m_tl04, m_setting.m_mainParms.m_tl05, m_setting.m_mainParms.m_tl06, m_setting.m_mainParms.m_tl07);
	m_lightObjMain.m_position
	    = Vector3f(m_setting.m_mainParms.m_tl50.m_value, m_setting.m_mainParms.m_tl51.m_value, m_setting.m_mainParms.m_tl52.m_value);

	Vector3f temp(m_setting.m_mainParms.m_tl53, m_setting.m_mainParms.m_tl54, m_setting.m_mainParms.m_tl55);
	_normalise2(temp);
	m_lightObjMain.m_elevation = temp;

	setRefValues(m_setting.m_mainParms.m_tl56, m_setting.m_mainParms.m_tl57, m_setting.m_mainParms.m_tl58);
	m_lightObjMain.m_distAttnFn = 1;
	m_lightObjMain.m_spotFn     = 3;

	m_lightObjSpec.m_color
	    = Color4(m_setting.m_specParms.m_sp04, m_setting.m_specParms.m_sp05, m_setting.m_specParms.m_sp06, m_setting.m_specParms.m_sp07);
	Vector3f temp2(m_setting.m_specParms.m_sp53, m_setting.m_specParms.m_sp54, m_setting.m_specParms.m_sp55);
	_normalise(temp2);
	m_lightObjSpec.m_elevation = temp2;
	m_lightObjSpec.m_kScale    = m_setting.m_specParms.m_sp56;
}

/*
 * --INFO--
 * Address:	803C2168
 * Size:	000020
 */
void TTitleLightMgr::update() { setParam_(); }

/*
 * --INFO--
 * Address:	803C2188
 * Size:	000094
 */
void TTitleLightMgr::setCameraMtx(Mtx mtx)
{
	Matrixf mtx2;
	PSMTXCopy(mtx, mtx2.m_matrix.mtxView);
	GXColor col = m_ambientLight.m_color.toGXColor();
	GXSetChanAmbColor(GX_COLOR0A0, col);

	FOREACH_NODE(LightObj, m_lightObjChain.m_child, node) { node->set(mtx2); }
}

} // namespace title
} // namespace ebi
