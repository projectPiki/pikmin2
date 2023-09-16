#include "Dolphin/mtx.h"
#include "Game/Cave/Info.h"
#include "Game/mapParts.h"
#include "JSystem/J3D/J3DModel.h"
#include "SysShape/Model.h"

namespace Game {

/*
 * __ct
 *
 * --INFO--
 * Address:	8023233C
 * Size:	000140
 */
PartsView::PartsView()
{
	mMapUnit = nullptr;
	mModel   = nullptr;
	_60      = 8;
	_5C      = 8;
	_58      = 0;
	_50      = 0.0f;
	_54      = 0.0f;

	mAStarContext.init(&mRouteMgr, 0x80);
	mPathFinder.setContext(&mAStarContext);
	mUnitKind = 1;
	_6E.clear();
	mBaseGen = new Cave::BaseGen();
}

/*
 * --INFO--
 * Address:	8023247C
 * Size:	000004
 */
void PartsView::doDirectDraw(Graphics&) { }

/*
 * --INFO--
 * Address:	80232480
 * Size:	000074
 */
void PartsView::doAnimation()
{
	if (mModel) {
		PSMTXCopy(_20, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		mModel->mJ3dModel->entry();
	}
}

/*
 * --INFO--
 * Address:	802324F4
 * Size:	000004
 */
void PartsView::doEntry() { }

/*
 * --INFO--
 * Address:	802324F8
 * Size:	00002C
 */
void PartsView::doSetView(int viewportNumber)
{
	if (mModel) {
		mModel->setCurrentViewNo(viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	80232524
 * Size:	00002C
 */
void PartsView::doViewCalc()
{
	if (mModel) {
		mModel->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	80232550
 * Size:	000158
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
		BitFlag<u16>* flags = &_6E;
		flags->readBytes(input);
	} else {
		_6E.clear();
	}

	mDoorCount = input.readInt();
	for (int i = 0; i < mDoorCount; i++) {
		Door* door = new Door();
		door->read(input);
		mDoor.add(door);
	}
}

} // namespace Game
