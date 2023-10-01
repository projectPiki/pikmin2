#include "Game/Entities/PelletNumber.h"
#include "Game/PelletList.h"
#include "Game/gameGenerator.h"
#include "Game/MapMgr.h"

namespace Game {
namespace PelletNumber {

/*
 * --INFO--
 * Address:	801F90D4
 * Size:	000004
 */
void Object::do_onInit(CreatureInitArg*) { }

/*
 * --INFO--
 * Address:	801F90D8
 * Size:	0000C0
 */
void Object::constructor()
{
	Pellet::constructor();
	mPelkira = new efx::TPelkira_ver01(&mPelletPosition);
	shadowMgr->createShadow(this);
}

/*
 * --INFO--
 * Address:	801F9198
 * Size:	00006C
 */
void Object::createKiraEffect(Vector3f& pos)
{
	efx::ArgPelType arg(mPelletSizeType, pos);
	mPelkira->create(&arg);
}

/*
 * --INFO--
 * Address:	801F9204
 * Size:	000108
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
	J3DTevBlock* tev = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[id]->mTevBlock;
	tev->setTevColor(0, color);
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->diff();
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r27, 0x1c(r1)
	mr       r27, r3
	lhz      r0, 0x43e(r3)
	cmpwi    r0, 1
	beq      lbl_801F9240
	bge      lbl_801F9234
	cmpwi    r0, 0
	bge      lbl_801F9268
	b        lbl_801F9278

lbl_801F9234:
	cmpwi    r0, 3
	bge      lbl_801F9278
	b        lbl_801F9254

lbl_801F9240:
	li       r31, 0xfb
	li       r30, 0x11
	li       r29, 0
	li       r28, 0xff
	b        lbl_801F9278

lbl_801F9254:
	li       r31, 0xff
	li       r30, 0xdc
	mr       r28, r31
	li       r29, 0x34
	b        lbl_801F9278

lbl_801F9268:
	li       r29, 0xff
	li       r31, 0
	mr       r28, r29
	li       r30, 0x33

lbl_801F9278:
	lwz      r3, 0x174(r27)
	addi     r4, r2, lbl_80519CE0@sda21
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x64(r3)
	bl       getIndex__10JUTNameTabCFPCc
	lwz      r4, 0x174(r27)
	rlwinm   r0, r3, 2, 0xe, 0x1d
	addi     r5, r1, 8
	lwz      r3, 8(r4)
	li       r4, 0
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwzx     r3, r3, r0
	sth      r31, 8(r1)
	sth      r30, 0xa(r1)
	sth      r29, 0xc(r1)
	sth      r28, 0xe(r1)
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r27)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv
	lmw      r27, 0x1c(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801F930C
 * Size:	0000B0
 */
Mgr::Mgr()
    : FixedSizePelletMgr(PelletList::NUMBER_PELLET)
{
}

/*
 * --INFO--
 * Address:	801F9668
 * Size:	0000F4
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
	useModelMgr(64, 0x80000);
	mCollPartMgr.alloc(PELLET_NUMBER_MAXCOLLPART);
	sys->heapStatusEnd("NumberPellet");
}

/*
 * --INFO--
 * Address:	801F975C
 * Size:	00007C
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->mJ3dModel->newDifferedTexMtx(TexDiff_0);
	model->mJ3dModel->newDifferedDisplayList(0x1000200);
	model->mJ3dModel->calc();
	model->mJ3dModel->calcMaterial();
	model->mJ3dModel->makeDL();
	model->mJ3dModel->lock();
}

/*
 * --INFO--
 * Address:	801F97D8
 * Size:	00003C
 */
GenPelletParm* Mgr::generatorNewPelletParm() { return new GenPelletParm(PELCOLOR_BLUE, PELLET_NUMBER_ONE); }

/*
 * --INFO--
 * Address:	801F9814
 * Size:	0000D8
 */
Pellet* Mgr::generatorBirth(Vector3f& pos, Vector3f& angle, GenPelletParm* parm)
{
	PelletNumberInitArg arg(parm->mSize, parm->mColor);
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

/*
 * --INFO--
 * Address:	801F98EC
 * Size:	000054
 */
void Mgr::generatorWrite(Stream& stream, GenPelletParm* parm)
{
	stream.writeByte(parm->mColor);
	stream.writeByte(parm->mSize);
}

/*
 * --INFO--
 * Address:	801F9940
 * Size:	0000C4
 */
void Mgr::generatorRead(Stream& stream, GenPelletParm* parm, u32 flag)
{
	parm->mColor = stream.readByte();
	parm->mSize  = stream.readByte();
	switch (parm->mSize) {
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
		JUT_PANICLINE(258, "NumberPellet size %d error\n", parm->mSize);
		break;
	}
}

} // namespace PelletNumber
} // namespace Game
