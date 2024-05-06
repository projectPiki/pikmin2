#include "Game/Entities/PelletFruit.h"
#include "Game/Entities/ItemPlant.h"
#include "PSM/EventBase.h"
#include "efx/TFruitsDown.h"
#include "nans.h"

namespace Game {
namespace PelletFruit {

Mgr* mgr;

/**
 * @note Address: 0x801FD9B8
 * @note Size: 0x70
 */
void Object::do_onInit(CreatureInitArg* initArg)
{
	if (gameSystem->isStoryMode() && gameSystem->mSection->getCurrentCourseInfo()) {
		mBurstTimer = ItemPlant::mgr->mParms->mPlantParms.mBurstTime.mValue;
	} else {
		mBurstTimer = 100.0f;
	}
}

/**
 * @note Address: 0x801FDA28
 * @note Size: 0x180
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

/**
 * @note Address: 0x801FDBA8
 * @note Size: 0x11C
 */
void Object::changeMaterial()
{
	Color4 colors[4] = {
		Color4(192, 68, 68, 255), // spicy berry
		Color4(92, 68, 116, 255), // bitter berry
		Color4(150, 110, 0, 255), // unused yellow berry
		Color4(20, 0, 40, 255),   // unused dark blue berry
	};

	J3DMaterial* mat = mModel->getJ3DModel()->getModelData()->getMaterialTable().getMaterialNodePointer(0);

	J3DGXColorS10 color;
	color.r = colors[mPelletColor].r;
	color.g = colors[mPelletColor].g;
	color.b = colors[mPelletColor].b;
	color.a = colors[mPelletColor].a;

	mat->getTevBlock()->setTevColor(0, color);

	mModel->mJ3dModel->calcMaterial();
	mModel->mJ3dModel->diff();
}

/**
 * @note Address: 0x801FDCC4
 * @note Size: 0xB0
 */
Mgr::Mgr()
    : FixedSizePelletMgr(PelletList::PLK_Fruit)
{
}

/**
 * @note Address: 0x801FE020
 * @note Size: 0x8C
 */
void Mgr::setupResources()
{
	sys->heapStatusStart("PelletFruit", nullptr);
	alloc(PELLET_FRUIT_MAXCOUNT);
	load();
	mModelData[0]->newSharedDisplayList(0x40000);
	useModelMgr(PELLET_FRUIT_MAXMODEL, 0x80000);
	mCollPartMgr.alloc(PELLET_FRUIT_MAXCOLLPART);
	sys->heapStatusEnd("PelletFruit");
}

/**
 * @note Address: 0x801FE0AC
 * @note Size: 0x6C
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
