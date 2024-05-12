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
	mModel->enableMaterialAnim(0);
	mAnim2.start(tevanim);
	mAnim1.start(texanim);
}

/**
 * @note Address: 0x802055A4
 * @note Size: 0x24
 */
void OnyonSpot::getLODSphere(Sys::Sphere& sphere)
{
	sphere.mPosition.x = mMtx.mMatrix.structView.tx;
	sphere.mPosition.y = mMtx.mMatrix.structView.ty;
	sphere.mPosition.z = mMtx.mMatrix.structView.tz;
	sphere.mRadius     = 10.0f;
}

/**
 * @note Address: 0x802055C8
 * @note Size: 0x54
 */
void OnyonSpot::getLODCylinder(Sys::Cylinder& cyl)
{
	cyl.mCenter.x = mMtx.mMatrix.structView.tx;
	cyl.mCenter.y = mMtx.mMatrix.structView.ty;
	cyl.mCenter.z = mMtx.mMatrix.structView.tz;
	cyl.mRadius   = 20.0f;
	cyl.mLength   = 200.0f;
	cyl.mCenter.y += cyl.mLength * 0.5f;
	cyl.mAxis = Vector3f(0.0f, 1.0f, 0.0f);
}

/**
 * @note Address: 0x8020561C
 * @note Size: 0x50
 */
void OnyonSpot::changeMaterial()
{
	if (!Game::gameSystem->paused()) {
		mAnim1.animate(30.0f);
	}
	mAnim2.animate(0.0f);
}

/**
 * @note Address: 0x8020566C
 * @note Size: 0x1A4
 */
void OnyonSpotData::loadResources()
{
	allocModelData(1);
	JKRArchive* arc = JKRMountArchive("user/Kando/effect/modeleffect.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(92, arc);

	void* file = JKRFileLoader::getGlbResource("onyonspot.bmd", nullptr);
	P2ASSERTLINE(95, file);

	J3DModelData* model = J3DModelLoaderDataBase::load(file, J3DMLF_Material_PE_FogOff | 0x1020000);
	*mModelData         = model;
	mTexAnimCount       = 1;
	mTexAnims           = new Sys::MatTexAnimation[mTexAnimCount];

	mTevAnimCount = ONYON_TYPE_MAX;
	mTevAnims     = new Sys::MatTevRegAnimation[mTevAnimCount];

	file = JKRFileLoader::getGlbResource("onyonspot.btk", nullptr);
	mTexAnims[0].attachResource(file, *mModelData);

	file = JKRFileLoader::getGlbResource("onyonspot_blue.brk", nullptr);
	mTevAnims[ONYON_TYPE_BLUE].attachResource(file, *mModelData);

	file = JKRFileLoader::getGlbResource("onyonspot_red.brk", nullptr);
	mTevAnims[ONYON_TYPE_RED].attachResource(file, *mModelData);

	file = JKRFileLoader::getGlbResource("onyonspot_yellow.brk", nullptr);
	mTevAnims[ONYON_TYPE_YELLOW].attachResource(file, *mModelData);
}

/**
 * @note Address: 0x80205810
 * @note Size: 0x180
 */
ModelEffect* OnyonSpotData::onCreate(ModelEffectCreateArg* arg)
{
	OnyonSpotArg* onyonarg = static_cast<OnyonSpotArg*>(arg);

	P2ASSERTLINE(129, onyonarg->getID() == getID());

	SysShape::Model* model = new SysShape::Model(*mModelData, 0, 2);
	int type               = onyonarg->mOnyonType;

	OnyonSpot* spot = new OnyonSpot();
	spot->mModel    = model;

	Matrixf mtx;
	mtx.makeT(onyonarg->mOrig);
	PSMTXCopy(mtx.mMatrix.mtxView, spot->mMtx.mMatrix.mtxView);

	spot->initAnimators(mTexAnims, &mTevAnims[type]);

	return spot;
}

} // namespace efx
