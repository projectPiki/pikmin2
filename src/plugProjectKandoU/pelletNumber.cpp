#include "Game/Entities/PelletNumber.h"
#include "Game/PelletList.h"
#include "Game/gameGenerator.h"
#include "Game/MapMgr.h"

namespace Game {
namespace PelletNumber {

Mgr* mgr;

/**
 * @note Address: 0x801F90D4
 * @note Size: 0x4
 */
void Object::do_onInit(CreatureInitArg*) { }

/**
 * @note Address: 0x801F90D8
 * @note Size: 0xC0
 */
void Object::constructor()
{
	Pellet::constructor();
	mPelkira = new efx::TPelkira_ver01(&mPelletPosition);
	shadowMgr->createShadow(this);
}

/**
 * @note Address: 0x801F9198
 * @note Size: 0x6C
 */
void Object::createKiraEffect(Vector3f& pos)
{
	efx::ArgPelType arg(mPelletSizeType, pos);
	mPelkira->create(&arg);
}

/**
 * @note Address: 0x801F9204
 * @note Size: 0x108
 */
void Object::changeMaterial()
{
	J3DGXColorS10 color;
	switch (mPelletColor) {
	case PELCOLOR_RED:
		color.r = 251;
		color.g = 17;
		color.b = 0;
		color.a = 255;
		break;
	case PELCOLOR_YELLOW:
		color.r = 255;
		color.g = 220;
		color.b = 52;
		color.a = 255;
		break;
	case PELCOLOR_BLUE:
		color.r = 0;
		color.g = 51;
		color.b = 255;
		color.a = 255;
		break;
	}

	u16 id           = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterialNames->getIndex("bpel1");
	J3DMaterial* mat = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[id];
	mat->mTevBlock->setTevColor(0, color);
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->diff();
}

/**
 * @note Address: 0x801F930C
 * @note Size: 0xB0
 */
Mgr::Mgr()
    : FixedSizePelletMgr(PelletList::PLK_NumberPellet)
{
}

/**
 * @note Address: 0x801F9668
 * @note Size: 0xF4
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("NumberPellet", nullptr);
	alloc(PELLET_NUMBER_MAXCOUNT);
	// make all 4 types of number pellet always marked as active
	setUse(0);
	setUse(1);
	setUse(2);
	setUse(3);
	load_texArc("pellet_texts.szs");
	mModelData[0]->newSharedDisplayList(0x40000);
	mModelData[1]->newSharedDisplayList(0x40000);
	mModelData[2]->newSharedDisplayList(0x40000);
	mModelData[3]->newSharedDisplayList(0x40000);
	useModelMgr(PELLET_NUMBER_MAXMODEL, 0x80000);
	mCollPartMgr.alloc(PELLET_NUMBER_MAXCOLLPART);
	sys->heapStatusEnd("NumberPellet");
}

/**
 * @note Address: 0x801F975C
 * @note Size: 0x7C
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->mJ3dModel->newDifferedTexMtx(TEXDIFF_Material);
	model->mJ3dModel->newDifferedDisplayList(0x1000200);
	model->mJ3dModel->calc();
	model->mJ3dModel->calcMaterial();
	model->mJ3dModel->makeDL();
	model->mJ3dModel->lock();
}

/**
 * @note Address: 0x801F97D8
 * @note Size: 0x3C
 */
GenPelletParm* Mgr::generatorNewPelletParm() { return new GenNumberPelletParm(PELCOLOR_BLUE, PELLET_NUMBER_ONE); }

/**
 * @note Address: 0x801F9814
 * @note Size: 0xD8
 */
Pellet* Mgr::generatorBirth(Vector3f& pos, Vector3f& angle, GenPelletParm* parm)
{
	GenNumberPelletParm* nparm = static_cast<GenNumberPelletParm*>(parm);

	PelletNumberInitArg arg(nparm->mSize, nparm->mColor);
	Pellet* pelt = pelletMgr->birth(&arg);
	if (pelt) {
		if (mapMgr) {
			pos.y = pelt->getCylinderHeight() * 0.5f + mapMgr->getMinY(pos);
		}
		pelt->setPosition(pos, false);
		Matrixf mtx;
		mtx.makeTR(pos, angle);
		pelt->setOrientation(mtx);
	}
	return pelt;
}

/**
 * @note Address: 0x801F98EC
 * @note Size: 0x54
 */
void Mgr::generatorWrite(Stream& stream, GenPelletParm* parm)
{
	GenNumberPelletParm* nparm = static_cast<GenNumberPelletParm*>(parm);
	stream.writeByte(nparm->mColor);
	stream.writeByte(nparm->mSize);
}

/**
 * @note Address: 0x801F9940
 * @note Size: 0xC4
 */
void Mgr::generatorRead(Stream& stream, GenPelletParm* parm, u32 flag)
{
	GenNumberPelletParm* nparm = static_cast<GenNumberPelletParm*>(parm);

	nparm->mColor = stream.readByte();
	nparm->mSize  = stream.readByte();
	switch (nparm->mSize) {
	case PELLET_NUMBER_ONE:
		parm->mIndex = 0;
		break;
	case PELLET_NUMBER_FIVE:
		parm->mIndex = 1;
		break;
	case PELLET_NUMBER_TEN:
		parm->mIndex = 2;
		break;
	case PELLET_NUMBER_TWENTY:
		parm->mIndex = 3;
		break;
	default:
		JUT_PANICLINE(258, "NumberPellet size %d error\n", nparm->mSize);
		break;
	}
}

} // namespace PelletNumber
} // namespace Game
