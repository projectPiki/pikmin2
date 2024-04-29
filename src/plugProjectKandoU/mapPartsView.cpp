#include "Dolphin/mtx.h"
#include "Game/Cave/Info.h"
#include "Game/mapParts.h"
#include "JSystem/J3D/J3DModel.h"
#include "SysShape/Model.h"

namespace Game {

/**
 * __ct
 *
 * @note Address: 0x8023233C
 * @note Size: 0x140
 */
PartsView::PartsView()
{
	mMapUnit = nullptr;
	mModel   = nullptr;

	_60 = 8; // NONE of these are used for anything, like come on
	_5C = 8;
	_58 = 0;
	_50 = 0.0f;
	_54 = 0.0f;

	mAStarContext.init(&mRouteMgr, 0x80);
	mPathFinder.setContext(&mAStarContext);
	mUnitKind = 1;
	mFlags.clear();
	mBaseGen = new Cave::BaseGen();
}

/**
 * @note Address: 0x8023247C
 * @note Size: 0x4
 */
void PartsView::doDirectDraw(Graphics&) { }

/**
 * @note Address: 0x80232480
 * @note Size: 0x74
 */
void PartsView::doAnimation()
{
	if (mModel) {
		PSMTXCopy(_20, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		mModel->mJ3dModel->entry();
	}
}

/**
 * @note Address: 0x802324F4
 * @note Size: 0x4
 */
void PartsView::doEntry() { }

/**
 * @note Address: 0x802324F8
 * @note Size: 0x2C
 */
void PartsView::doSetView(int viewportNumber)
{
	if (mModel) {
		mModel->setCurrentViewNo(viewportNumber);
	}
}

/**
 * @note Address: 0x80232524
 * @note Size: 0x2C
 */
void PartsView::doViewCalc()
{
	if (mModel) {
		mModel->viewCalc();
	}
}

/**
 * @note Address: 0x80232550
 * @note Size: 0x158
 */
void PartsView::read(Stream& input)
{
	mMapUnit            = new MapUnit();
	u32 shouldReadFlags = input.readInt();
	char* name          = input.readString(nullptr, 0);
	mName               = name;
	mMapUnit->mName     = name;
	mMapUnit->load(input);
	mUnitKind = input.readShort();

	if (shouldReadFlags >= 1) {
		BitFlag<u16>* flags = &mFlags;
		flags->readBytes(input);
	} else {
		mFlags.clear();
	}

	mDoorCount = input.readInt();
	for (int i = 0; i < mDoorCount; i++) {
		Door* door = new Door();
		door->read(input);
		mDoor.add(door);
	}
}

} // namespace Game
