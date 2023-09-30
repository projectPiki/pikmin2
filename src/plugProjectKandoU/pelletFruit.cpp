#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/ItemPlant.h"
#include "PSM/EventBase.h"
#include "efx/TFruitsDown.h"
#include "nans.h"

namespace Game {
namespace PelletFruit {

Mgr* mgr;

/*
 * --INFO--
 * Address:	801FD9B8
 * Size:	000070
 */
void Object::do_onInit(CreatureInitArg* initArg)
{
	if (gameSystem->mMode == GSM_STORY_MODE && gameSystem->mSection->getCurrentCourseInfo()) {
		mBurstTimer = ItemPlant::mgr->mParms->mPlantParms.mBurstTime.mValue;
	} else {
		mBurstTimer = 100.0f;
	}
}

/*
 * --INFO--
 * Address:	801FDA28
 * Size:	000180
 */
void Object::do_update()
{
	if (!mSticked && !mCaptureMatrix && getStateID() != PELSTATE_Goal) {
		mBurstTimer -= sys->mDeltaTime;
		if (mBurstTimer <= 0.0f) {
			Vector3f fruitPos = getPosition();
			efx::Arg fxArg(fruitPos);
			if (mPelletColor == PELCOLOR_SPICY) {
				efx::TFruitsDownR downSpicy;
				downSpicy.create(&fxArg);
			} else {
				efx::TFruitsDownP downBitter;
				downBitter.create(&fxArg);
			}

			mSoundMgr->startSound(PSSE_EV_FRUIT_POP, 0);
			kill(nullptr);
		}
	}
}

/*
 * --INFO--
 * Address:	801FDBA8
 * Size:	00011C
 */
void Object::changeMaterial()
{
	Color4 colors[4];
	colors[0] = Color4(192, 68, 68, 255);
	colors[1] = Color4(92, 68, 116, 255);
	colors[2] = Color4(150, 110, 0, 255);
	colors[3] = Color4(20, 0, 40, 255);

	J3DTevBlock* tev = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[0]->mTevBlock;
	tev->setTevColor(0, J3DGXColorS10((u16)colors[mPelletColor].r, colors[mPelletColor].g, colors[mPelletColor].b, colors[mPelletColor].a));
	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->diff();
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r8, 0
	li       r5, 0xc0
	stw      r0, 0x44(r1)
	li       r12, 0x5c
	li       r11, 0x74
	li       r10, 0x96
	stmw     r25, 0x24(r1)
	li       r30, 0xff
	li       r29, 0x44
	mr       r31, r3
	li       r9, 0x6e
	li       r7, 0x14
	li       r6, 0x28
	stb      r5, 0x10(r1)
	addi     r27, r1, 0x11
	addi     r26, r1, 0x12
	stb      r29, 0x11(r1)
	addi     r25, r1, 0x13
	addi     r5, r1, 8
	stb      r29, 0x12(r1)
	lwz      r3, 0x174(r3)
	lhz      r0, 0x43e(r31)
	lwz      r3, 8(r3)
	stb      r30, 0x13(r1)
	slwi     r0, r0, 2
	lwz      r3, 4(r3)
	stb      r12, 0x14(r1)
	lwz      r4, 0x60(r3)
	addi     r3, r1, 0x10
	stb      r29, 0x15(r1)
	lwz      r28, 0(r4)
	li       r4, 0
	stb      r11, 0x16(r1)
	stb      r30, 0x17(r1)
	stb      r10, 0x18(r1)
	stb      r9, 0x19(r1)
	stb      r8, 0x1a(r1)
	stb      r30, 0x1b(r1)
	stb      r7, 0x1c(r1)
	stb      r8, 0x1d(r1)
	stb      r6, 0x1e(r1)
	stb      r30, 0x1f(r1)
	lbzx     r6, r27, r0
	lbzx     r7, r26, r0
	lbzx     r8, r25, r0
	lbzx     r0, r3, r0
	sth      r6, 0xa(r1)
	sth      r0, 8(r1)
	sth      r7, 0xc(r1)
	sth      r8, 0xe(r1)
	lwz      r3, 0x2c(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x174(r31)
	lwz      r3, 8(r3)
	bl       diff__8J3DModelFv
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	801FDCC4
 * Size:	0000B0
 */
Mgr::Mgr()
    : FixedSizePelletMgr(PelletList::FRUIT)
{
}

/*
 * --INFO--
 * Address:	801FE020
 * Size:	00008C
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("PelletFruit", nullptr);
	alloc(64);
	load();
	mModelData[0]->newSharedDisplayList(0x40000);
	useModelMgr(64, 0x80000);
	mCollPartMgr.alloc(128);
	sys->heapStatusEnd("PelletFruit");
}

/*
 * --INFO--
 * Address:	801FE0AC
 * Size:	00006C
 */
void Mgr::onCreateModel(SysShape::Model* model)
{
	model->mJ3dModel->newDifferedDisplayList(0x1000000);
	model->mJ3dModel->calc();
	model->mJ3dModel->calcMaterial();
	model->mJ3dModel->makeDL();
	model->mJ3dModel->lock();
}

} // namespace PelletFruit
} // namespace Game
