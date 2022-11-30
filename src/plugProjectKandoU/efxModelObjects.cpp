#include "types.h"
#include "efx/OnyonSpot.h"
#include "Sys/Sphere.h"
#include "Sys/Cylinder.h"
#include "Game/GameSystem.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/Entities/ItemOnyon.h"

namespace efx {

static const char efxModelObjectsName[] = "efxModelObjects";

void OnyonSpot::initAnimators(Sys::MatTexAnimation* texanim, Sys::MatTevRegAnimation* tevanim)
{
	m_model->enableMaterialAnim(0);
	m_anim2.start(tevanim);
	m_anim1.start(texanim);
}

/*
 * --INFO--
 * Address:	802055A4
 * Size:	000024
 */
void OnyonSpot::getLODSphere(Sys::Sphere& sphere)
{
	sphere.m_position.x = m_mtx.m_matrix.structView.tx;
	sphere.m_position.y = m_mtx.m_matrix.structView.ty;
	sphere.m_position.z = m_mtx.m_matrix.structView.tz;
	sphere.m_radius     = 10.0f;
}

/*
 * --INFO--
 * Address:	802055C8
 * Size:	000054
 */
void OnyonSpot::getLODCylinder(Sys::Cylinder& cyl)
{
	cyl.m_center.x = m_mtx.m_matrix.structView.tx;
	cyl.m_center.y = m_mtx.m_matrix.structView.ty;
	cyl.m_center.z = m_mtx.m_matrix.structView.tz;
	cyl.m_radius   = 20.0f;
	cyl.m_length   = 200.0f;
	cyl.m_center.y += cyl.m_length * 0.5f;
	cyl.m_axis = Vector3f(0.0f, 1.0f, 0.0f);
}

/*
 * --INFO--
 * Address:	8020561C
 * Size:	000050
 */
void OnyonSpot::changeMaterial()
{
	if (!Game::gameSystem->paused()) {
		m_anim1.animate(30.0f);
	}
	m_anim2.animate(0.0f);
}

/*
 * --INFO--
 * Address:	8020566C
 * Size:	0001A4
 */
void OnyonSpotData::loadResources()
{
	allocModelData(1);
	JKRArchive* arc = JKRArchive::mount("user/Kando/effect/modeleffect.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Unk1);
	P2ASSERTLINE(92, arc);

	void* file = JKRFileLoader::getGlbResource("onyonspot.bmd", nullptr);
	P2ASSERTLINE(95, file);

	J3DModelData* model = J3DModelLoaderDataBase::load(file, 0x21020000);
	*m_modelData        = model;
	m_texAnimCount      = 1;
	m_texanims          = new Sys::MatTexAnimation[m_texAnimCount];

	m_tevAnimCount = ONYON_TYPE_MAX;
	m_tevanims     = new Sys::MatTevRegAnimation[m_tevAnimCount];

	file = JKRFileLoader::getGlbResource("onyonspot.btk", nullptr);
	m_texanims[0].attachResource(file, *m_modelData);

	file = JKRFileLoader::getGlbResource("onyonspot_blue.brk", nullptr);
	m_tevanims[ONYON_TYPE_BLUE].attachResource(file, *m_modelData);

	file = JKRFileLoader::getGlbResource("onyonspot_red.brk", nullptr);
	m_tevanims[ONYON_TYPE_RED].attachResource(file, *m_modelData);

	file = JKRFileLoader::getGlbResource("onyonspot_yellow.brk", nullptr);
	m_tevanims[ONYON_TYPE_YELLOW].attachResource(file, *m_modelData);
}

/*
 * --INFO--
 * Address:	80205810
 * Size:	000180
 */
ModelEffect* OnyonSpotData::onCreate(ModelEffectCreateArg* arg)
{
	OnyonSpotArg* onyonarg = static_cast<OnyonSpotArg*>(arg);

	P2ASSERTLINE(129, onyonarg->getID() == getID());

	SysShape::Model* model = new SysShape::Model(*m_modelData, 0, 2);
	int type               = onyonarg->m_onyonType;

	OnyonSpot* spot = new OnyonSpot();
	spot->m_model   = model;

	Matrixf mtx;
	mtx.makeT(onyonarg->m_orig);
	PSMTXCopy(mtx.m_matrix.mtxView, spot->m_mtx.m_matrix.mtxView);

	spot->initAnimators(m_texanims, &m_tevanims[type]);

	return spot;
}

} // namespace efx