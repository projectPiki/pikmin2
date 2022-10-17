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
	m_mapUnit = nullptr;
	m_model   = nullptr;
	_60       = 8;
	_5C       = 8;
	_58       = 0;
	_50       = 0.0f;
	_54       = 0.0f;

	m_aStarContext.init(&m_routeMgr, 0x80);
	m_pathFinder.setContext(&m_aStarContext);
	m_unitKind = 1;
	_6E.clear();
	m_baseGen = new Cave::BaseGen();
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
	if (m_model) {
		PSMTXCopy(_20, m_model->m_j3dModel->_24);
		m_model->m_j3dModel->calc();
		m_model->m_j3dModel->entry();
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
void PartsView::doSetView(int index)
{
	if (m_model) {
		m_model->setCurrentViewNo(index);
	}
}

/*
 * --INFO--
 * Address:	80232524
 * Size:	00002C
 */
void PartsView::doViewCalc()
{
	if (m_model) {
		m_model->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	80232550
 * Size:	000158
 */
void PartsView::read(Stream& input)
{
	m_mapUnit           = new MapUnit();
	u32 shouldReadFlags = input.readInt();
	char* name          = input.readString(nullptr, 0);
	m_name              = name;
	m_mapUnit->m_name   = name;
	m_mapUnit->load(input);
	m_unitKind = input.readShort();

	if (shouldReadFlags >= 1) {
		BitFlag<u16>* flags = &_6E;
		flags->readBytes(input);
	} else {
		_6E.clear();
	}

	m_doorCount = input.readInt();
	for (int i = 0; i < m_doorCount; i++) {
		Door* door = new Door();
		door->read(input);
		m_door.add(door);
	}
}

} // namespace Game
