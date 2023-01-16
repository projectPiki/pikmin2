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
	m_lightObjMain.m_position = Vector3f(m_setting.m_mainParms.m_tl50, m_setting.m_mainParms.m_tl51, m_setting.m_mainParms.m_tl52);

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

	/*
lwz      r6, 0x19c(r3)
lwz      r5, 0x174(r3)
lwz      r4, 0x14c(r3)
lwz      r0, 0x124(r3)
lfs      f0, lbl_8051F8A0@sda21(r2)
stb      r0, 0x30(r3)
stb      r4, 0x31(r3)
stb      r5, 0x32(r3)
stb      r6, 0x33(r3)
lwz      r6, 0x24c(r3)
lwz      r5, 0x224(r3)
lwz      r4, 0x1fc(r3)
lwz      r0, 0x1d4(r3)
stb      r0, 0x84(r3)
stb      r4, 0x85(r3)
stb      r5, 0x86(r3)
stb      r6, 0x87(r3)
lfs      f3, 0x2c4(r3)
lfs      f2, 0x29c(r3)
lfs      f1, 0x274(r3)
stfs     f1, 0x6c(r3)
stfs     f2, 0x70(r3)
stfs     f3, 0x74(r3)
lfs      f3, 0x314(r3)
lfs      f4, 0x33c(r3)
fmuls    f1, f3, f3
lfs      f2, 0x2ec(r3)
fmuls    f5, f4, f4
fmadds   f1, f2, f2, f1
fadds    f1, f5, f1
fcmpo    cr0, f1, f0
ble      lbl_803C207C
ble      lbl_803C2080
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803C2080

lbl_803C207C:
fmr      f1, f0

lbl_803C2080:
lfs      f0, lbl_8051F8A0@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803C20A0
lfs      f0, lbl_8051F8A4@sda21(r2)
fdivs    f0, f0, f1
fmuls    f2, f2, f0
fmuls    f3, f3, f0
fmuls    f4, f4, f0

lbl_803C20A0:
stfs     f2, 0x78(r3)
li       r4, 1
li       r0, 3
lfs      f0, lbl_8051F8A0@sda21(r2)
stfs     f3, 0x7c(r3)
stfs     f4, 0x80(r3)
lfs      f2, 0x3b4(r3)
lfs      f3, 0x38c(r3)
lfs      f1, 0x364(r3)
stfs     f1, 0x8c(r3)
stfs     f3, 0x90(r3)
stfs     f2, 0x94(r3)
stb      r4, 0x98(r3)
stb      r0, 0x99(r3)
lwz      r6, 0x464(r3)
lwz      r5, 0x43c(r3)
lwz      r4, 0x414(r3)
lwz      r0, 0x3ec(r3)
stb      r0, 0xdc(r3)
stb      r4, 0xdd(r3)
stb      r5, 0xde(r3)
stb      r6, 0xdf(r3)
lfs      f4, 0x4b4(r3)
lfs      f5, 0x4dc(r3)
fmuls    f1, f4, f4
lfs      f3, 0x48c(r3)
fmuls    f2, f5, f5
fmadds   f1, f3, f3, f1
fadds    f1, f2, f1
fcmpo    cr0, f1, f0
ble      lbl_803C212C
ble      lbl_803C2130
frsqrte  f0, f1
fmuls    f1, f0, f1
b        lbl_803C2130

lbl_803C212C:
fmr      f1, f0

lbl_803C2130:
lfs      f0, lbl_8051F8A0@sda21(r2)
fcmpo    cr0, f1, f0
ble      lbl_803C2150
lfs      f0, lbl_8051F8A4@sda21(r2)
fdivs    f0, f0, f1
fmuls    f3, f3, f0
fmuls    f4, f4, f0
fmuls    f5, f5, f0

lbl_803C2150:
stfs     f3, 0xd0(r3)
stfs     f4, 0xd4(r3)
stfs     f5, 0xd8(r3)
lfs      f0, 0x504(r3)
stfs     f0, 0xf4(r3)
blr
	*/
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
