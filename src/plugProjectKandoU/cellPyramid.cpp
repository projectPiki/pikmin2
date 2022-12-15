#include "sysMath.h"
#include "types.h"
#include "Dolphin/math.h"
#include "Game/cellPyramid.h"
#include "BaseParm.h"
#include "CellMgrParms.h"
#include "Dolphin/math.h"
#include "fdlibm.h"
#include "JSystem/JUT/JUTException.h"
#include "JSystem/JKR/JKRHeap.h"

namespace Game {

CellPyramid* cellMgr;
CellPyramid* platCellMgr;
CellPyramid* mapRoomCellMgr;
bool CellPyramid::disableAICulling;
u8 CellPyramid::sSpeedUpResolveColl;
CellPyramid* Cell::sCurrCellMgr;
int CellPyramid::sCellBugID;

u8 CellPyramid::sOptResolveColl = 1;
char* CellPyramid::sCellBugName = "cellPyramid";

/*
 * --INFO--
 * Address:	801565C8
 * Size:	0000C4
 */
void CellPyramid::mapSearch(Sys::Sphere& sphere, IDelegate1<CellObject*>* delegate)
{
	Recti rect;
	int layerIndex;
	calcExtent(sphere, layerIndex, rect);

	m_passID += 1;
	if (0x4000000 <= m_passID) {
		m_passID = 0;
	}

	u32 passID       = m_passID;
	CellLayer* layer = &m_layers[layerIndex];

	for (int x = rect.p1.x; x <= rect.p2.x; ++x) {
		for (int y = rect.p1.y; y <= rect.p2.y; ++y) {
			Cell* cell = (*layer)(x, y);
			if (cell) {
				cell->mapSearch(delegate, passID);
			}
		}
	}
}

/*
 * --INFO--
 * Address:	8015668C
 * Size:	0000B4
 */
void CellObject::exitCell()
{
	bool isFakePiki = (isPiki() || isNavi());
	for (int i = 0; i < 4; i++) {
		Cell* cell = m_cellLegs[i].m_cell;
		if (cell) {
			cell->exit(&m_cellLegs[i], isFakePiki);
			m_cellLegs[i].m_cell = nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	80156740
 * Size:	00003C
 */
Cell::Cell()
{
	_00[3] = nullptr;
	_00[2] = nullptr;
	_00[1] = nullptr;
	_00[0] = nullptr;
	_1C    = nullptr;
	_10    = nullptr;
	_14    = 0;
	_16    = 0;
	_18    = 0;
	_24    = nullptr;
	_20    = nullptr;
	_28    = -1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Cell::clear()
{
	_1C = nullptr;
	_18 = 0;
}

/*
 * --INFO--
 * Address:	8015677C
 * Size:	0000C4
 */
void Cell::mapSearch(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = _1C; leg != nullptr; leg = leg->m_next) {
		if (leg->m_object->m_passID != passID) {
			leg->m_object->m_passID = passID;
			delegate->invoke(leg->m_object);
		}
	}
	for (Cell* cell = _10; cell != nullptr; cell = cell->_10) {
		cell->mapSearchUp(delegate, passID);
	}
	for (int cellIndex = 0; cellIndex < 4; cellIndex++) {
		if (_00[cellIndex]) {
			_00[cellIndex]->mapSearchDown(delegate, passID);
		}
	}
}

/*
 * This and mapSearchDown get recursively inlined a few times for stack
 * efficiency. Quite beautiful, really.
 *
 * --INFO--
 * Address:	80156840
 * Size:	000238
 */
void Cell::mapSearchUp(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = _1C; leg != nullptr; leg = leg->m_next) {
		if (leg->m_object->m_passID != passID) {
			leg->m_object->m_passID = passID;
			delegate->invoke(leg->m_object);
		}
	}
	for (Cell* cell = _10; cell != nullptr; cell = cell->_10) {
		cell->mapSearchUp(delegate, passID);
	}
}

/*
 * --INFO--
 * Address:	80156A78
 * Size:	000280
 */
void Cell::mapSearchDown(IDelegate1<CellObject*>* delegate, u32 passID)
{
	for (CellLeg* leg = _1C; leg != nullptr; leg = leg->m_next) {
		if (leg->m_object->m_passID != passID) {
			leg->m_object->m_passID = passID;
			delegate->invoke(leg->m_object);
		}
	}
	for (int cellIndex = 0; cellIndex < 4; cellIndex++) {
		if (_00[cellIndex]) {
			_00[cellIndex]->mapSearchDown(delegate, passID);
		}
	}
}

/*
 * --INFO--
 * Address:	80156CF8
 * Size:	00004C
 */
void Cell::resolveCollision()
{
	if (*CellMgrParms::getInstance()->m_cellParms.m_p000()) {
		resolveCollision_3();
	} else {
		(*CellMgrParms::getInstance()->m_cellParms.m_p001()) ? resolveCollision_1() : resolveCollision_2();
	}
}

/*
 * --INFO--
 * Address:	80156D44
 * Size:	000004
 */
void CellPyramid::initFrame() { }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
u32 CellPyramid::getCheckCount() { return m_passID; }

// /*
//  * --INFO--
//  * Address:	........
//  * Size:	000018
//  */
// void Cell::dump()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
// void Cell::hasLeg(CellLeg*)
// bool Cell::hasLeg(CellLeg&)
// {
// 	// UNUSED FUNCTION
// }

// inline float temp(float input) {
// 	if (input > 0.0f) {
// 		return (float)__frsqrte(input) * input;
// 	}
// 	return 0.0f;
// }

// inline float fakepikmin2_sqrtf(float x)
// {
// 	if (!(x > 0.0f)) { // if x <= 0
// 		return x;
// 	}

// 	register float reg1 = x;
// 	register float reg2 = 0.0f;
// 	register float result;

// 	asm {
//       frsqrte reg2, reg1
//       fmuls result, reg2, reg1
// 	}

// 	return result;
// }

// float qdist32(float x1, float y1, float z1, float x2, float y2, float z2)
// {
// 	float xdiff = (x2 - x1);
// 	float ydiff = (y2 - y1);
// 	float zdiff = (z2 - z1);

// 	float dist = (SQUARE(xdiff) + SQUARE(ydiff) + SQUARE(zdiff));
// 	if (dist > 0.0f) {
// 		dist *= (__frsqrte(dist));
// 	} else {
// 		dist = 0.0f;
// 	}
// 	return dist;
// }

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 * 46(dec) instructions
 */
float CellObject::calcCollisionDistance(CellObject* them)
{
	// basically same function as calcSphereDistance from creature.cpp
	Sys::Sphere ourBounds;
	Sys::Sphere theirBounds;
	getBoundingSphere(ourBounds);
	them->getBoundingSphere(theirBounds);
	Vector3f sepVec = ourBounds.m_position - theirBounds.m_position;
	f32 dist        = _length(sepVec); // regswaps
	return dist - (ourBounds.m_radius + theirBounds.m_radius);
}

/*
 * --INFO--
 * Address:	80156D48
 * Size:	0000D0
 */
void CellObject::updateCollisionBuffer(CellObject* them) { m_collisionBuffer.insert(them, calcCollisionDistance(them)); }

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
inline void CellObject::resolveUsingBuffer()
{
	// UNUSED FUNCTION
}

/*
 * __ct__Q24Game15CollisionBufferFv
 *
 * --INFO--
 * Address:	80156E18
 * Size:	000018
 */
CollisionBuffer::CollisionBuffer()
{
	m_cellObject    = nullptr;
	m_collNodes     = nullptr;
	m_usedNodeCount = 0;
	m_nodeCount     = 0;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
// inline bool CollisionBuffer::isAvailable()
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
inline void CollisionBuffer::init(CellObject*, CollNode*, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80156E30
 * Size:	00006C
 */
void CollisionBuffer::alloc(CellObject* object, int nodeCount)
{
	m_cellObject    = object;
	m_nodeCount     = nodeCount;
	m_usedNodeCount = 0;
	m_collNodes     = new CollNode[m_nodeCount];
}

/*
 * __ct__Q24Game8CollNodeFv
 *
 * --INFO--
 * Address:	80156E9C
 * Size:	000014
 */
CollNode::CollNode()
    : m_cellObject(nullptr)
    , _04(0.0f)
{
}

/*
 * clear__Q24Game15CollisionBufferFv
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void CollisionBuffer::clear()
{
	m_usedNodeCount = 0;
	for (int nodeIndex = 0; nodeIndex < m_nodeCount; nodeIndex++) {
		m_collNodes[nodeIndex].m_cellObject = nullptr;
		m_collNodes[nodeIndex]._04          = 100000.0f;
	}
}

/*
 * --INFO--
 * Address:	80156EB0
 * Size:	0000B8
 */
void CollisionBuffer::insert(CellObject* newObject, float distance)
{
	CellObject* object = m_cellObject;
	if (object) {
		if (object->deferPikiCollision()) {
			(newObject->isPiki()) ? pikiInsertPiki(newObject, distance) : pikiInsertOther(newObject, distance);
		} else {
			insertSort(newObject, distance);
		}
	}
}

/*
 * This seems expensive.
 * I wonder why they didn't use a linked list...
 *
 * --INFO--
 * Address:	80156F68
 * Size:	000128
 */
void CollisionBuffer::pikiInsertPiki(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = m_usedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && m_collNodes[nodeIndex]._04 > distance && m_collNodes->m_cellObject->isPiki(); nodeIndex--) {
			if (!(m_collNodes[nodeIndex]._04 > distance && m_collNodes[nodeIndex].m_cellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < m_nodeCount) {
				m_collNodes[nodeIndex + 1].m_cellObject = m_collNodes[nodeIndex].m_cellObject;
				m_collNodes[nodeIndex + 1]._04          = m_collNodes[nodeIndex]._04;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < m_nodeCount) {
			m_collNodes[nodeIndex + 1].m_cellObject = object;
			m_collNodes[nodeIndex + 1]._04          = distance;
			if (m_usedNodeCount < m_nodeCount) {
				m_usedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80157090
 * Size:	000128
 */
void CollisionBuffer::pikiInsertOther(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int nodeIndex = m_usedNodeCount - 1;
		// Find the index the object should be inserted at,
		// and shift objects after that index along the way.
		for (; (nodeIndex >= 0); nodeIndex--) {
			// for (; nodeIndex >= 0 && m_collNodes[nodeIndex]._04 > distance && m_collNodes->m_cellObject->isPiki(); nodeIndex--) {
			if (!(m_collNodes[nodeIndex]._04 > distance || m_collNodes[nodeIndex].m_cellObject->isPiki())) {
				break;
			}
			if (nodeIndex + 1 < m_nodeCount) {
				m_collNodes[nodeIndex + 1].m_cellObject = m_collNodes[nodeIndex].m_cellObject;
				m_collNodes[nodeIndex + 1]._04          = m_collNodes[nodeIndex]._04;
			}
		}
		// Insert the object.
		if (nodeIndex + 1 < m_nodeCount) {
			m_collNodes[nodeIndex + 1].m_cellObject = object;
			m_collNodes[nodeIndex + 1]._04          = distance;
			if (m_usedNodeCount < m_nodeCount) {
				m_usedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801571B8
 * Size:	0000F8
 */
void CollisionBuffer::insertSort(CellObject* object, float distance)
{
	if (findIndex(object) == -1) {
		int index = m_usedNodeCount - 1;
		for (; index >= 0; index--) {
			if (!(m_collNodes[index]._04 > distance)) {
				break;
			}
			if (index + 1 < m_nodeCount) {
				m_collNodes[index + 1].m_cellObject = m_collNodes[index].m_cellObject;
				m_collNodes[index + 1]._04          = m_collNodes[index]._04;
			}
		}
		if (index + 1 < m_nodeCount) {
			m_collNodes[index + 1].m_cellObject = object;
			m_collNodes[index + 1]._04          = distance;
			if (m_usedNodeCount < m_nodeCount) {
				m_usedNodeCount++;
			}
		}
	}
}

/*
 * --INFO--
 * Address:	801572B0
 * Size:	000044
 */
int CollisionBuffer::findIndex(CellObject* object)
{
	for (int i = m_usedNodeCount, index = 0; 0 < i; ++index, --i) {
		if (m_collNodes[index].m_cellObject == object) {
			return index;
		}
	}
	return -1;
}

/*
 * resolveCollision__Q24Game9Cell
 *
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
inline void CellLayer::resolveCollision()
{
	for (int i = 0; i < m_sizeX * m_sizeY; ++i) {
		if (m_cells[i]._1C) {
			m_cells[i].resolveCollision();
		}
	}
}

/*
 * resolveCollision__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801572F4
 * Size:	000244
 */
void CellPyramid::resolveCollision()
{
	// if (0x3ffffff < ++m_passID) {
	// 	m_passID = 0;
	// }
	m_passID += 1;
	if (0x4000000 <= m_passID) {
		m_passID = 0;
	}
	switch (sOptResolveColl) {
	case 3:
		SweepCallback callback;
		ResolveArg arg;
		arg.m_callback = &callback;
		resolve(arg);
		break;
	case 0:
		for (int i = 0; i < m_layerCount; i++) {
			m_layers[i].resolveCollision();
		}
		break;
	case 1:
		if (true) {
			CellLayer* layer = &m_layers[m_layerCount - 1];
			for (int i = 0; i < layer->m_sizeX * layer->m_sizeY; i++) {
				Cell* cell = &layer->m_cells[i];
				if (cell->_18 != 0) {
					cell->rec_resolveColl();
				}
			}
		}
		break;
	case 2:
		if (sSpeedUpResolveColl) {
			for (int i = 0; i < m_layerCount; i++) {
				for (Cell* cell = m_layers[i].m_cell._20; cell != nullptr; cell = cell->_20) {
					if (cell->_18 != 0) {
						cell->resolveCollision_3();
					}
				}
			}
		} else {
			for (int i = 0; i < m_layerCount; i++) {
				for (Cell* cell = m_layers[i].m_cell._20; cell != nullptr; cell = cell->_20) {
					if (cell->_18 != 0) {
						cell->resolveCollision_1();
					}
				}
			}
		}
		break;
	}
}

/*
 * The inlining on this function is fascinating.
 *
 * --INFO--
 * Address:	80157538
 * Size:	000294
 */
inline void Cell::rec_resolveColl()
{
	for (int i = 0; i < 4; i++) {
		if ((_00[i] != nullptr) && (1 < _00[i]->_18)) {
			_00[i]->rec_resolveColl();
		}
	}

	resolveCollision();
}

/*
 * clearAllCollBuffer__Q24Game4CellFv
 * --INFO--
 * Address:	........
 * Size:	000064 (25 instructions)
 */
void Cell::clearAllCollBuffer()
{
	// UNUSED FUNCTION
	// if (_1C ) {
	for (CellLeg* leg = _1C; leg != nullptr; leg = leg->m_next) {
		if (leg->m_object) {
			leg->m_object->m_collisionBuffer.clear();
		}
		// CellObject* object = leg->m_object;
		// if (object ) {
		// 	object->m_collisionBuffer.clear();
		// }
	}
	// }
}

/*
 * clearAllCollBuffer__Q24Game9CellLayerFv
 * --INFO--
 * Address:	........
 * Size:	00009C (39 instructions)
 */
void CellLayer::clearAllCollBuffer()
{
	// UNUSED FUNCTION
	for (int i = 0; i < m_sizeX * m_sizeY; i++) {
		if (m_cells[i]._1C) {
			m_cells[i].clearAllCollBuffer();
		}
	}
}

/*
 * This probably calls (CellLayer|Cell)::clearAllCollBuffer.
 * clearAllCollBuffer__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801577DC
 * Size:	0000DC
 */
void CellPyramid::clearAllCollBuffer()
{
	for (int layerIndex = 0; layerIndex < m_layerCount; layerIndex++) {
		m_layers[layerIndex].clearAllCollBuffer();
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
inline void Cell::appendList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
inline void Cell::remove()
{
	// UNUSED FUNCTION
}

/*
 * exit__Q24Game4CellFPQ24Game7CellLegb
 * --INFO--
 * Address:	801578B8
 * Size:	000158
 */
inline void Cell::exit(CellLeg* aLeg, bool p2)
{
	if (_1C == aLeg) {
		_1C = aLeg->m_next;
		if (_1C) {
			_1C->m_prev = nullptr;
		}
	}
	if ((p2) && (_14 != 0)) {
		_14--;
		for (Cell* iCell = _10; iCell != nullptr; iCell = iCell->_10) {
			iCell->_16--;
		}
	}
	_18--;
	for (Cell* iCell = _10; iCell != nullptr; iCell = iCell->_10) {
		iCell->_18--;
	}
	CellLeg* leg = aLeg->m_prev;
	if (leg) {
		leg->m_next = aLeg->m_next;
	}
	leg = aLeg->m_next;
	if (leg) {
		leg->m_prev = aLeg->m_prev;
	}
	aLeg->m_prev = nullptr;
	aLeg->m_next = nullptr;
	if ((_1C == nullptr) && (Cell::sCurrCellMgr != nullptr)) {
		P2ASSERTLINE(786, Cell::sCurrCellMgr != nullptr);
		if (_24) {
			_24->_20 = _20;
			if (_20) {
				_20->_24 = _24;
			}
		}
		_24 = nullptr;
		_20 = nullptr;
	}
}

/*
 * --INFO--
 * Address:	80157A10
 * Size:	0002EC
 */
void Cell::entry(CellLeg* leg, bool p2)
{
	P2ASSERTLINE(836, leg != nullptr);
	if (leg->m_cell) {
		leg->m_cell->exit(leg, p2);
	}
	CellLeg* nextLeg;
	CellLeg* currLeg = _1C;
	if (currLeg) {
		if (currLeg != leg) {
			nextLeg         = currLeg->m_next;
			currLeg->m_next = leg;
			leg->m_next     = nextLeg;
			leg->m_prev     = currLeg;
			if (nextLeg) {
				nextLeg->m_prev = leg;
			}
		}
	} else {
		_1C         = leg;
		_1C->m_next = nullptr;
		_1C->m_prev = nullptr;
	}

	leg->m_cell   = this;
	bool legCheck = _1C->findLeg(leg);
	if (!legCheck) {
		JUT_PANICLINE(855, "leg entry failed !\n");
	}

	if (p2) {
		_14++;
		Cell* currCell1 = _10;
		for (currCell1; currCell1; currCell1 = currCell1->_10) {
			currCell1->_16++;
		}
	}

	_18++;
	Cell* currCell2 = _10;
	for (currCell2; currCell2; currCell2 = currCell2->_10) {
		currCell2->_18++;
	}

	Cell* currCell3 = _24;
	if (!currCell3 && Cell::sCurrCellMgr) {
		P2ASSERTLINE(763, Cell::sCurrCellMgr);
		Cell* layerCell = &Cell::sCurrCellMgr->m_layers[_28].m_cell;
		Cell* nextCell  = layerCell->_20;
		if (nextCell) {
			_20            = nextCell;
			_20->_24       = this;
			_24            = layerCell;
			layerCell->_20 = this;
		} else {
			layerCell->_20 = this;
			_24            = layerCell;
		}
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
inline void CellLayer::clear()
{
	// UNUSED FUNCTION
	m_cell._20 = nullptr;
	m_cell._24 = nullptr;
	for (int i = 0; i < m_sizeX * m_sizeY; i++) {
		m_cells[i].clear();
		m_cells[i]._28 = _06;
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
inline void CellLayer::createBottom(int, int) // might be x and y
{
	// UNUSED FUNCTION
}

/*
 * __cl__Q24Game9Cell
 *
 * --INFO--
 * Address:	80157CFC
 * Size:	000048
 */
inline Cell* CellLayer::operator()(int x, int y)
{
	if ((0 > x) || (0 > y) || (x >= m_sizeX) || (y >= m_sizeY)) {
		return nullptr;
	}
	return &m_cells[x + y * m_sizeX];
}

/*
 * --INFO--
 * Address:	80157D44
 * Size:	000578
 */
void CellLayer::pileup(CellLayer&)
{
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lfd      f2, lbl_80518638@sda21(r2)
	stw      r0, 0x44(r1)
	lis      r0, 0x4330
	lfs      f0, lbl_80518630@sda21(r2)
	stw      r31, 0x3c(r1)
	mr       r31, r4
	stw      r30, 0x38(r1)
	mr       r30, r3
	stw      r29, 0x34(r1)
	lhz      r4, 4(r4)
	stw      r0, 8(r1)
	rlwinm   r0, r4, 1, 0x10, 0x1e
	sth      r0, 4(r3)
	lhz      r3, 6(r31)
	addi     r0, r3, 1
	sth      r0, 6(r30)
	lhz      r0, 0(r31)
	stw      r0, 0xc(r1)
	lfd      f1, 8(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f1, f0
	bl       ceil
	frsp     f0, f1
	lis      r0, 0x4330
	stw      r0, 0x18(r1)
	lfd      f2, lbl_80518638@sda21(r2)
	fctiwz   f1, f0
	lfs      f0, lbl_80518630@sda21(r2)
	stfd     f1, 0x10(r1)
	lwz      r0, 0x14(r1)
	sth      r0, 0(r30)
	lhz      r0, 2(r31)
	stw      r0, 0x1c(r1)
	lfd      f1, 0x18(r1)
	fsubs    f1, f1, f2
	fmuls    f1, f1, f0
	bl       ceil
	frsp     f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	sth      r0, 2(r30)
	lhz      r3, 0(r30)
	lhz      r0, 2(r30)
	mullw    r29, r3, r0
	mulli    r3, r29, 0x2c
	addi     r3, r3, 0x10
	bl       __nwa__FUl
	lis      r4, __ct__Q24Game4CellFv@ha
	mr       r7, r29
	addi     r4, r4, __ct__Q24Game4CellFv@l
	li       r5, 0
	li       r6, 0x2c
	bl       __construct_new_array
	stw      r3, 8(r30)
	li       r5, 0
	li       r6, 0
	stw      r5, 0x2c(r30)
	stw      r5, 0x30(r30)
	b        lbl_80157E54

lbl_80157E3C:
	lhz      r4, 6(r30)
	addi     r0, r5, 0x28
	lwz      r3, 8(r30)
	addi     r5, r5, 0x2c
	addi     r6, r6, 1
	sthx     r4, r3, r0

lbl_80157E54:
	lhz      r3, 0(r30)
	lhz      r0, 2(r30)
	mullw    r0, r3, r0
	cmpw     r6, r0
	blt      lbl_80157E3C
	li       r6, 0
	li       r5, 0
	b        lbl_80158294

lbl_80157E74:
	li       r7, 0
	li       r4, 0
	b        lbl_80158280

lbl_80157E80:
	cmpwi    r6, 0
	blt      lbl_80157EA4
	cmpwi    r7, 0
	blt      lbl_80157EA4
	lhz      r3, 0(r30)
	cmpw     r6, r3
	bge      lbl_80157EA4
	cmpw     r7, r0
	blt      lbl_80157EAC

lbl_80157EA4:
	li       r3, 0
	b        lbl_80157EC0

lbl_80157EAC:
	mullw    r0, r7, r3
	lwz      r3, 8(r30)
	add      r0, r6, r0
	mulli    r0, r0, 0x2c
	add      r3, r3, r0

lbl_80157EC0:
	cmpwi    r5, 0
	blt      lbl_80157EE8
	cmpwi    r4, 0
	blt      lbl_80157EE8
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_80157EE8
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80157EF0

lbl_80157EE8:
	li       r8, 0
	b        lbl_80157F04

lbl_80157EF0:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80157F04:
	addic.   r0, r5, 1
	stw      r8, 0(r3)
	blt      lbl_80157F34
	cmpwi    r4, 0
	blt      lbl_80157F34
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_80157F34
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80157F3C

lbl_80157F34:
	li       r0, 0
	b        lbl_80157F54

lbl_80157F3C:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_80157F54:
	cmpwi    r5, 0
	stw      r0, 4(r3)
	blt      lbl_80157F84
	addic.   r0, r4, 1
	blt      lbl_80157F84
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_80157F84
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80157F8C

lbl_80157F84:
	li       r8, 0
	b        lbl_80157FA0

lbl_80157F8C:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80157FA0:
	addic.   r0, r5, 1
	stw      r8, 8(r3)
	blt      lbl_80157FD4
	addic.   r0, r4, 1
	blt      lbl_80157FD4
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_80157FD4
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80157FDC

lbl_80157FD4:
	li       r0, 0
	b        lbl_80157FF4

lbl_80157FDC:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_80157FF4:
	cmpwi    r5, 0
	stw      r0, 0xc(r3)
	blt      lbl_80158020
	cmpwi    r4, 0
	blt      lbl_80158020
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_80158020
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158028

lbl_80158020:
	li       r0, 0
	b        lbl_8015803C

lbl_80158028:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r0, r8, r0

lbl_8015803C:
	cmplwi   r0, 0
	beq      lbl_8015808C
	cmpwi    r5, 0
	blt      lbl_8015806C
	cmpwi    r4, 0
	blt      lbl_8015806C
	lhz      r8, 0(r31)
	cmpw     r5, r8
	bge      lbl_8015806C
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158074

lbl_8015806C:
	li       r8, 0
	b        lbl_80158088

lbl_80158074:
	mullw    r0, r4, r8
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_80158088:
	stw      r3, 0x10(r8)

lbl_8015808C:
	addic.   r0, r5, 1
	blt      lbl_801580B8
	cmpwi    r4, 0
	blt      lbl_801580B8
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_801580B8
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_801580C0

lbl_801580B8:
	li       r0, 0
	b        lbl_801580D8

lbl_801580C0:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_801580D8:
	cmplwi   r0, 0
	beq      lbl_80158130
	addic.   r0, r5, 1
	blt      lbl_8015810C
	cmpwi    r4, 0
	blt      lbl_8015810C
	lhz      r8, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r8
	bge      lbl_8015810C
	lhz      r0, 2(r31)
	cmpw     r4, r0
	blt      lbl_80158114

lbl_8015810C:
	li       r8, 0
	b        lbl_8015812C

lbl_80158114:
	mullw    r0, r4, r8
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r8, r9, r0

lbl_8015812C:
	stw      r3, 0x10(r8)

lbl_80158130:
	cmpwi    r5, 0
	blt      lbl_8015815C
	addic.   r0, r4, 1
	blt      lbl_8015815C
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_8015815C
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80158164

lbl_8015815C:
	li       r0, 0
	b        lbl_80158178

lbl_80158164:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r0, r8, r0

lbl_80158178:
	cmplwi   r0, 0
	beq      lbl_801581CC
	cmpwi    r5, 0
	blt      lbl_801581AC
	addic.   r0, r4, 1
	blt      lbl_801581AC
	lhz      r9, 0(r31)
	cmpw     r5, r9
	bge      lbl_801581AC
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_801581B4

lbl_801581AC:
	li       r8, 0
	b        lbl_801581C8

lbl_801581B4:
	mullw    r0, r8, r9
	lwz      r8, 8(r31)
	add      r0, r5, r0
	mulli    r0, r0, 0x2c
	add      r8, r8, r0

lbl_801581C8:
	stw      r3, 0x10(r8)

lbl_801581CC:
	addic.   r0, r5, 1
	blt      lbl_801581FC
	addic.   r0, r4, 1
	blt      lbl_801581FC
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_801581FC
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_80158204

lbl_801581FC:
	li       r0, 0
	b        lbl_8015821C

lbl_80158204:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r0, r9, r0

lbl_8015821C:
	cmplwi   r0, 0
	beq      lbl_80158278
	addic.   r0, r5, 1
	blt      lbl_80158254
	addic.   r0, r4, 1
	blt      lbl_80158254
	lhz      r9, 0(r31)
	addi     r0, r5, 1
	cmpw     r0, r9
	bge      lbl_80158254
	lhz      r0, 2(r31)
	addi     r8, r4, 1
	cmpw     r8, r0
	blt      lbl_8015825C

lbl_80158254:
	li       r8, 0
	b        lbl_80158274

lbl_8015825C:
	mullw    r0, r8, r9
	lwz      r9, 8(r31)
	add      r8, r5, r0
	addi     r0, r8, 1
	mulli    r0, r0, 0x2c
	add      r8, r9, r0

lbl_80158274:
	stw      r3, 0x10(r8)

lbl_80158278:
	addi     r4, r4, 2
	addi     r7, r7, 1

lbl_80158280:
	lhz      r0, 2(r30)
	cmpw     r7, r0
	blt      lbl_80157E80
	addi     r5, r5, 2
	addi     r6, r6, 1

lbl_80158294:
	lhz      r0, 0(r30)
	cmpw     r6, r0
	blt      lbl_80157E74
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void drawCell__Q24Game9CellLayerFR8GraphicsR10Vector3f iif()
inline void CellLayer::drawCell(Graphics&, Vector3f&, int, int, float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801582BC
 * Size:	00003C
 */
CellPyramid::CellPyramid()
{
	m_layerCount       = 0;
	m_memoryUsageMaybe = 0;
}

/*
 * clear__Q24Game11CellPyramidFv
 *
 * --INFO--
 * Address:	801582F8
 * Size:	000098
 */
void CellPyramid::clear()
{
	for (int i = 0; i < m_layerCount; i++) {
		m_layers[i].clear();
	}
	m_passID       = 0;
	m_xNode.m_next = 0;
	m_xNode.m_prev = 0;
	m_zNode.m_next = 0;
	m_zNode.m_prev = 0;
}

/*
 * --INFO--
 * Address:	80158390
 * Size:	000190
 */
// void calcExtent__Q24Game11CellPyramidFRQ23Sys6SphereRiR7Rect<i>()
void CellPyramid::calcExtent(Sys::Sphere&, int&, Recti&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r29, r4
	  mr        r28, r3
	  lfs       f2, -0x5D18(r2)
	  mr        r30, r5
	  lfs       f1, 0xC(r4)
	  mr        r31, r6
	  lfs       f0, 0x38(r3)
	  fmuls     f2, f2, f1
	  lfd       f1, -0x5D10(r2)
	  fmuls     f30, f2, f0
	  bl        -0x889F8
	  frsp      f31, f1
	  fmr       f1, f30
	  bl        -0x88A04
	  frsp      f1, f1
	  lfs       f0, -0x5D38(r2)
	  fdivs     f1, f1, f31
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x7C
	  fmr       f1, f0

	.loc_0x7C:
	  bl        -0x892C4
	  frsp      f0, f1
	  lwz       r3, 0x2C(r28)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r5, 0xC(r1)
	  cmpw      r5, r3
	  blt-      .loc_0xA0
	  subi      r5, r3, 0x1

	.loc_0xA0:
	  mulli     r3, r5, 0x38
	  lis       r0, 0x4330
	  lwz       r4, 0x30(r28)
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0x4
	  lfd       f2, -0x5D28(r2)
	  lhzx      r0, r4, r0
	  lfs       f1, 0x34(r28)
	  stw       r0, 0x14(r1)
	  lfs       f3, -0x5D08(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f5, 0xC(r29)
	  fsubs     f2, f0, f2
	  lfs       f4, 0x0(r29)
	  lfs       f6, 0x8(r29)
	  fsubs     f0, f4, f5
	  lfs       f8, 0x40(r28)
	  fmuls     f1, f2, f1
	  fadds     f2, f4, f5
	  lfs       f7, 0x3C(r28)
	  fsubs     f4, f6, f5
	  fdivs     f9, f3, f1
	  fsubs     f1, f0, f8
	  fsubs     f3, f4, f7
	  fadds     f0, f6, f5
	  fmuls     f1, f1, f9
	  fsubs     f4, f2, f8
	  fmuls     f2, f3, f9
	  fctiwz    f3, f1
	  fsubs     f0, f0, f7
	  fmuls     f1, f4, f9
	  fctiwz    f2, f2
	  stfd      f3, 0x18(r1)
	  fmuls     f0, f0, f9
	  fctiwz    f1, f1
	  lwz       r0, 0x1C(r1)
	  stfd      f2, 0x20(r1)
	  fctiwz    f0, f0
	  stfd      f1, 0x28(r1)
	  lwz       r3, 0x24(r1)
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x2C(r1)
	  stw       r3, 0x4(r31)
	  stfd      f0, 0x30(r1)
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0xC(r31)
	  stw       r5, 0x0(r30)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r0, 0x74(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6Sphere
 *
 * --INFO--
 * Address:	80158520
 * Size:	000034
 */
void CellPyramid::entry(CellObject* object, Sys::Sphere& sphere)
{
	int unusedInt;
	Rect<int> unusedRect;

	Cell::sCurrCellMgr = this;
	entry(object, sphere, unusedInt, unusedRect);
	Cell::sCurrCellMgr = nullptr;
}

// TODO: Finish this. It's pretty much one big ol' usage of inlined functions.
// I know that SysShape::Model::entry(Sys::Sphere&) exists, among others...
/*
 * entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect
 *
 * --INFO--
 * Address:	80158554
 * Size:	0004B8
 */
// void entry__Q24Game11CellPyramidFPQ24Game10CellObjectRQ23Sys6SphereRiR7Rect<
//     int>()
void CellPyramid::entry(CellObject* param_1, Sys::Sphere& param_2, int& param_3, Recti& param_4)
{
	Cell::sCurrCellMgr = this;
	float dVar19       = log10(param_2.m_radius * 2.0f * _38);
	float dVar18       = log10(2.0f);
	float dVar17       = (dVar19 / dVar18);
	// if (dVar17 < 0.0) {
	// 	dVar17 = 0.0;
	// }
	int iVar9 = (int)ceil(MAX(dVar17, 0.0f));
	if (m_layerCount <= iVar9) {
		iVar9 = m_layerCount - 1;
	}
	float fVar10 = param_2.m_radius;
	float fVar11 = (param_2.m_position).x;
	float fVar1  = (param_2.m_position).z;
	float fVar2  = _40;
	float fVar3  = _3C;
	float fVar4  = 1.0f / ((m_layers[iVar9]._04) * _34); // <--- SHORT_TO_FLOAT
	param_4.p1.x = (int)(((fVar11 - fVar10) - fVar2) * fVar4);
	param_4.p1.y = (int)(((fVar1 - fVar10) - fVar3) * fVar4);
	param_4.p2.x = (int)(((fVar11 + fVar10) - fVar2) * fVar4);
	param_4.p2.y = (int)(((fVar1 + fVar10) - fVar3) * fVar4);
	param_3      = iVar9;
	iVar9        = param_3;
	if ((iVar9 < 0) || (m_layerCount <= iVar9)) {
		JUT_PANICLINE(1206, "illegal layerLevel %d : out of bounds 0ã€?%d\n", iVar9, m_layerCount);
	}
	int iVar12       = 0;
	bool bVar5       = false;
	CellLayer* layer = &m_layers[iVar9];
	bool bVar7       = param_1->isPiki();
	if ((bVar7 != false) || (bVar7 = param_1->isNavi(), bVar7 != false)) {
		iVar12 = 1;
		bVar5  = true;
	}
	iVar9 = 0;
	// for (iVar9 = 0; iVar9 < 4; iVar9++) {
	// 	Cell* cell = param_1->m_cellLegs.arrayView[iVar9].m_cell;
	// 	if (cell) {
	// 		cell->exit(&param_1->m_cellLegs.arrayView[iVar9], bVar5);
	// 		// 			if (cell->_1C == &param_1.m_cellLegs.arrayView[iVar9]) {
	// 		// 				cell->_1C =
	// 		// param_1.m_cellLegs.arrayView[iVar9].m_next; 				if
	// 		// (cell->_1C
	// 		// ) { 					cell->_1C->m_prev = nullptr;
	// 		// 				}
	// 		// 			}
	// 		// 			if ((bVar5) && (cell->_14 != 0)) {
	// 		// 				cell->_14--;
	// 		// 				for (Cell* iCell = cell->_10; iCell != nullptr;
	// 		// iCell = iCell->_10) { 					iCell->_16--;
	// 		// 				}
	// 		// 			}
	// 		// 			cell->_18--;
	// 		// 			for (Cell* iCell = cell->_10; iCell != nullptr; iCell =
	// 		// iCell->_10) { 				iCell->_18--;
	// 		// 			}
	// 		// 			CellLeg* leg =
	// 		// param_1.m_cellLegs.arrayView[iVar9].m_prev; 			if (leg !=
	// 		// nullptr) { 				leg->m_next =
	// 		// param_1.m_cellLegs.arrayView[iVar9].m_next;
	// 		// 			}
	// 		// 			leg = param_1.m_cellLegs.arrayView[iVar9].m_next;
	// 		// 			if (leg ) {
	// 		// 				leg->m_prev =
	// 		// param_1.m_cellLegs.arrayView[iVar9].m_prev;
	// 		// 			}
	// 		// 			param_1.m_cellLegs.arrayView[iVar9].m_prev = nullptr;
	// 		// 			param_1.m_cellLegs.arrayView[iVar9].m_next = nullptr;
	// 		// 			if ((cell->_1C == nullptr) &&
	// 		// 				 (Cell::sCurrCellMgr != nullptr)) {
	// 		// 				if (Cell::sCurrCellMgr == nullptr) {
	// 		// // #ifdef MATCHING
	// 		// // HMM... why is this so much earlier...
	// 		// #line 786
	// 		// // #endif
	// 		// 					P2ASSERT(Cell::sCurrCellMgr != nullptr);
	// 		// 				}
	// 		// 				if (cell->_24 ) {
	// 		// 					cell->_24->_20 = cell->_20;
	// 		// 					if (cell->_20 ) {
	// 		// 						cell->_20->_24 = cell->_24;
	// 		// 					}
	// 		// 				}
	// 		// 				cell->_24 = nullptr;
	// 		// 				cell->_20 = nullptr;
	// 		// 			}
	// 		param_1->m_cellLegs.arrayView[iVar9].m_cell = nullptr;
	// 	}
	// }
	iVar9 = 0;
	// if (10 < (param_4.p2.x - param_4.p1.x) * (param_4.p2.y - param_4.p1.y)) {

	// for (int cellX = param_4.p1.x; cellX <= param_4.p2.x; cellX++) {
	// 	for (int cellY = param_4.p1.y; cellY <= param_4.p2.y; cellY++) {
	// 		Cell* cell;
	// 		if ((cellX < 0) || (cellY < 0) || (layer->m_sizeX <= cellX) || (layer->m_sizeY <= cellY)) {
	// 			cell = nullptr;
	// 		} else {
	// 			cell = &layer->m_cells[cellX + (cellY * layer->m_sizeX)];
	// 		}
	// 		if (cell) {
	// 			if (3 < iVar9)
	// 				goto LAB_801589e8;
	// 			cell->entry(param_1.m_cellLegs.arrayView, SUB41((uint)-iVar12 >> 0x1f, 0));
	// 			for (pCVar6 = cell->_1C; pCVar6 != (CellLeg*)0x0; pCVar6 = pCVar6->pNext) {
	// 				if (pCVar6 == param_1->m_cellLegs) {
	// 					bVar5 = true;
	// 					goto LAB_80158994;
	// 				}
	// 			}
	// 			bVar5 = false;
	// 		LAB_80158994:
	// 			if (!bVar5) {
	// 				/* WARNING: Subroutine does not return */
	// 				// JUTException::panic_f("cellPyramid.cpp", 0x59f, "leg entry failed !!!!!!!!!!\n");
	// 			}
	// 		}
	// 		param_1 = (CellObject*)&(param_1->sweepPruneObject).minX.flags;
	// 		param_1 = (CellObject*)&(param_1->sweepPruneObject).minX.flags;
	// 		iVar9 += 1;
	// 	}
	// }
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  mflr      r0
	  stw       r0, 0x84(r1)
	  stfd      f31, 0x70(r1)
	  psq_st    f31,0x78(r1),0,0
	  stfd      f30, 0x60(r1)
	  psq_st    f30,0x68(r1),0,0
	  stmw      r22, 0x38(r1)
	  mr        r25, r3
	  lis       r3, 0x8048
	  stw       r25, -0x6D28(r13)
	  mr        r26, r5
	  lfs       f2, -0x5D18(r2)
	  mr        r24, r4
	  lfs       f1, 0xC(r5)
	  mr        r22, r6
	  lfs       f0, 0x38(r25)
	  mr        r23, r7
	  fmuls     f2, f2, f1
	  lfd       f1, -0x5D10(r2)
	  subi      r31, r3, 0x3020
	  fmuls     f31, f2, f0
	  bl        -0x88BC0
	  frsp      f30, f1
	  fmr       f1, f31
	  bl        -0x88BCC
	  frsp      f1, f1
	  lfs       f0, -0x5D38(r2)
	  fdivs     f1, f1, f30
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x80
	  fmr       f1, f0

	.loc_0x80:
	  bl        -0x8948C
	  frsp      f0, f1
	  lwz       r3, 0x2C(r25)
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r5, 0xC(r1)
	  cmpw      r5, r3
	  blt-      .loc_0xA4
	  subi      r5, r3, 0x1

	.loc_0xA4:
	  mulli     r3, r5, 0x38
	  lis       r0, 0x4330
	  lwz       r4, 0x30(r25)
	  stw       r0, 0x10(r1)
	  addi      r0, r3, 0x4
	  lfd       f2, -0x5D28(r2)
	  lhzx      r0, r4, r0
	  lfs       f1, 0x34(r25)
	  stw       r0, 0x14(r1)
	  lfs       f3, -0x5D08(r2)
	  lfd       f0, 0x10(r1)
	  lfs       f6, 0xC(r26)
	  fsubs     f2, f0, f2
	  lfs       f4, 0x0(r26)
	  lfs       f7, 0x8(r26)
	  fsubs     f0, f4, f6
	  lfs       f9, 0x40(r25)
	  fmuls     f1, f2, f1
	  fadds     f2, f4, f6
	  lfs       f8, 0x3C(r25)
	  fsubs     f4, f7, f6
	  fdivs     f5, f3, f1
	  fsubs     f1, f0, f9
	  fsubs     f3, f4, f8
	  fadds     f0, f7, f6
	  fmuls     f1, f1, f5
	  fsubs     f4, f2, f9
	  fmuls     f2, f3, f5
	  fctiwz    f3, f1
	  fsubs     f0, f0, f8
	  fmuls     f1, f4, f5
	  fctiwz    f2, f2
	  stfd      f3, 0x18(r1)
	  fmuls     f0, f0, f5
	  fctiwz    f1, f1
	  lwz       r0, 0x1C(r1)
	  stfd      f2, 0x20(r1)
	  fctiwz    f0, f0
	  stfd      f1, 0x28(r1)
	  lwz       r3, 0x24(r1)
	  stw       r0, 0x0(r23)
	  lwz       r0, 0x2C(r1)
	  stw       r3, 0x4(r23)
	  stfd      f0, 0x30(r1)
	  stw       r0, 0x8(r23)
	  lwz       r0, 0x34(r1)
	  stw       r0, 0xC(r23)
	  stw       r5, 0x0(r22)
	  lwz       r6, 0x0(r22)
	  cmpwi     r6, 0
	  blt-      .loc_0x17C
	  lwz       r0, 0x2C(r25)
	  cmpw      r6, r0
	  blt-      .loc_0x198

	.loc_0x17C:
	  lwz       r7, 0x2C(r25)
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x3C
	  li        r4, 0x4B6
	  crclr     6, 0x6
	  bl        -0x12E0A4
	  b         .loc_0x494

	.loc_0x198:
	  mr        r3, r24
	  lwz       r4, 0x30(r25)
	  lwz       r12, 0x0(r24)
	  mulli     r0, r6, 0x38
	  li        r25, 0
	  lwz       r12, 0x18(r12)
	  add       r27, r4, r0
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1E0
	  mr        r3, r24
	  lwz       r12, 0x0(r24)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E4

	.loc_0x1E0:
	  li        r25, 0x1

	.loc_0x1E4:
	  rlwinm    r3,r25,0,24,31
	  mr        r29, r24
	  neg       r0, r3
	  li        r26, 0
	  or        r0, r0, r3
	  rlwinm    r30,r0,1,31,31

	.loc_0x1FC:
	  lwz       r28, 0x5C(r29)
	  cmplwi    r28, 0
	  beq-      .loc_0x33C
	  lwz       r3, 0x1C(r28)
	  addi      r0, r29, 0x54
	  cmplw     r3, r0
	  bne-      .loc_0x234
	  lwz       r0, 0x54(r29)
	  stw       r0, 0x1C(r28)
	  lwz       r3, 0x1C(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x234
	  li        r0, 0
	  stw       r0, 0x4(r3)

	.loc_0x234:
	  cmplwi    r30, 0
	  beq-      .loc_0x270
	  lhz       r3, 0x14(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x270
	  subi      r0, r3, 0x1
	  sth       r0, 0x14(r28)
	  lwz       r4, 0x10(r28)
	  b         .loc_0x268

	.loc_0x258:
	  lhz       r3, 0x16(r4)
	  subi      r0, r3, 0x1
	  sth       r0, 0x16(r4)
	  lwz       r4, 0x10(r4)

	.loc_0x268:
	  cmplwi    r4, 0
	  bne+      .loc_0x258

	.loc_0x270:
	  lhz       r3, 0x18(r28)
	  subi      r0, r3, 0x1
	  sth       r0, 0x18(r28)
	  lwz       r4, 0x10(r28)
	  b         .loc_0x294

	.loc_0x284:
	  lhz       r3, 0x18(r4)
	  subi      r0, r3, 0x1
	  sth       r0, 0x18(r4)
	  lwz       r4, 0x10(r4)

	.loc_0x294:
	  cmplwi    r4, 0
	  bne+      .loc_0x284
	  lwz       r3, 0x58(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x2B0
	  lwz       r0, 0x54(r29)
	  stw       r0, 0x0(r3)

	.loc_0x2B0:
	  lwz       r3, 0x54(r29)
	  cmplwi    r3, 0
	  beq-      .loc_0x2C4
	  lwz       r0, 0x58(r29)
	  stw       r0, 0x4(r3)

	.loc_0x2C4:
	  li        r0, 0
	  stw       r0, 0x58(r29)
	  stw       r0, 0x54(r29)
	  lwz       r0, 0x1C(r28)
	  cmplwi    r0, 0
	  bne-      .loc_0x334
	  lwz       r0, -0x6D28(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x334
	  bne-      .loc_0x300
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x1C
	  li        r4, 0x312
	  crclr     6, 0x6
	  bl        -0x12E210

	.loc_0x300:
	  lwz       r3, 0x24(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x328
	  lwz       r0, 0x20(r28)
	  stw       r0, 0x20(r3)
	  lwz       r3, 0x20(r28)
	  cmplwi    r3, 0
	  beq-      .loc_0x328
	  lwz       r0, 0x24(r28)
	  stw       r0, 0x24(r3)

	.loc_0x328:
	  li        r0, 0
	  stw       r0, 0x24(r28)
	  stw       r0, 0x20(r28)

	.loc_0x334:
	  li        r0, 0
	  stw       r0, 0x5C(r29)

	.loc_0x33C:
	  addi      r26, r26, 0x1
	  addi      r29, r29, 0x14
	  cmpwi     r26, 0x4
	  blt+      .loc_0x1FC
	  lwz       r5, 0x0(r23)
	  li        r26, 0
	  lwz       r4, 0x8(r23)
	  lwz       r3, 0x4(r23)
	  lwz       r0, 0xC(r23)
	  sub       r4, r4, r5
	  sub       r0, r0, r3
	  mullw     r0, r4, r0
	  cmpwi     r0, 0xA
	  ble-      .loc_0x38C
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x6C
	  li        r4, 0x57D
	  crclr     6, 0x6
	  bl        -0x12E298
	  b         .loc_0x494

	.loc_0x38C:
	  mr        r25, r5
	  mr        r28, r24
	  b         .loc_0x480

	.loc_0x398:
	  lwz       r24, 0x4(r23)
	  mr        r29, r28
	  b         .loc_0x470

	.loc_0x3A4:
	  cmpwi     r25, 0
	  blt-      .loc_0x3CC
	  cmpwi     r24, 0
	  blt-      .loc_0x3CC
	  lhz       r3, 0x0(r27)
	  cmpw      r25, r3
	  bge-      .loc_0x3CC
	  lhz       r0, 0x2(r27)
	  cmpw      r24, r0
	  blt-      .loc_0x3D4

	.loc_0x3CC:
	  li        r22, 0
	  b         .loc_0x3E8

	.loc_0x3D4:
	  mullw     r0, r24, r3
	  lwz       r3, 0x8(r27)
	  add       r0, r25, r0
	  mulli     r0, r0, 0x2C
	  add       r22, r3, r0

	.loc_0x3E8:
	  cmplwi    r22, 0
	  beq-      .loc_0x460
	  cmpwi     r26, 0x4
	  blt-      .loc_0x404
	  li        r0, 0
	  stw       r0, -0x6D28(r13)
	  b         .loc_0x494

	.loc_0x404:
	  mr        r3, r22
	  mr        r5, r30
	  addi      r4, r29, 0x54
	  bl        -0xF54
	  lwz       r3, 0x1C(r22)
	  addi      r0, r29, 0x54
	  b         .loc_0x434

	.loc_0x420:
	  cmplw     r3, r0
	  bne-      .loc_0x430
	  li        r0, 0x1
	  b         .loc_0x440

	.loc_0x430:
	  lwz       r3, 0x0(r3)

	.loc_0x434:
	  cmplwi    r3, 0
	  bne+      .loc_0x420
	  li        r0, 0

	.loc_0x440:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x460
	  addi      r3, r31, 0xC
	  addi      r5, r31, 0x88
	  li        r4, 0x59F
	  crclr     6, 0x6
	  bl        -0x12E36C
	  b         .loc_0x494

	.loc_0x460:
	  addi      r29, r29, 0x14
	  addi      r28, r28, 0x14
	  addi      r26, r26, 0x1
	  addi      r24, r24, 0x1

	.loc_0x470:
	  lwz       r0, 0xC(r23)
	  cmpw      r24, r0
	  ble+      .loc_0x3A4
	  addi      r25, r25, 0x1

	.loc_0x480:
	  lwz       r0, 0x8(r23)
	  cmpw      r25, r0
	  ble+      .loc_0x398
	  li        r0, 0
	  stw       r0, -0x6D28(r13)

	.loc_0x494:
	  psq_l     f31,0x78(r1),0,0
	  lfd       f31, 0x70(r1)
	  psq_l     f30,0x68(r1),0,0
	  lfd       f30, 0x60(r1)
	  lmw       r22, 0x38(r1)
	  lwz       r0, 0x84(r1)
	  mtlr      r0
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80158A0C
 * Size:	0002EC
 */
void CellPyramid::create(BoundBox2d& box, float p2)
{
	m_memoryUsageMaybe = JKRHeap::sCurrentHeap->getFreeSize();
	_3C                = box._04;
	_40                = box._00;
	_34                = p2;
	_38                = 1.0f / p2;
	int uVar13         = (f32)ceil((FABS(box._08 - box._00) * _38));
	int uVar12         = (f32)ceil(FABS(box._0C - box._04) * _38);
	if ((200 < uVar13) || (200 < uVar12)) {
		_34    = p2 * 1.5f;
		_38    = 1.0f / (p2 * 1.5f);
		uVar13 = (f32)ceil((FABS(box._08 - box._00) * _38));
		uVar12 = (f32)ceil((FABS(box._0C - box._04) * _38));
	}
	int uVar14 = MAX(uVar12, uVar13);
	int dVar18 = (f32)ceil((f32)log10((f32)uVar14) / (f32)log10(2.0f));
	pow(2.0, (double)dVar18);
	m_layerCount           = dVar18 + 1;
	m_layers               = new CellLayer[m_layerCount];
	m_layers[0].m_sizeX    = uVar13;
	m_layers[0].m_sizeY    = uVar12;
	m_layers[0]._04        = 0;
	m_layers[0]._06        = 1;
	m_layers[0].m_cells    = new Cell[m_layers[0].m_sizeX * m_layers[0].m_sizeY];
	m_layers[0].m_cell._20 = nullptr;
	m_layers[0].m_cell._24 = nullptr;
	for (int i = 0; i < m_layers[0].m_sizeX * m_layers[0].m_sizeY; i++) {
		m_layers[0].m_cells[i].clear();
		m_layers[0].m_cells[i]._28 = m_layers[0]._06;
	}
	for (int i = 1; i < m_layerCount; i++) {
		m_layers[i].pileup(m_layers[i - 1]);
	}
	m_memoryUsageMaybe = m_memoryUsageMaybe - JKRHeap::sCurrentHeap->getFreeSize();
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stfd      f30, 0x50(r1)
	  psq_st    f30,0x58(r1),0,0
	  stfd      f29, 0x40(r1)
	  psq_st    f29,0x48(r1),0,0
	  stmw      r27, 0x2C(r1)
	  fmr       f31, f1
	  mr        r31, r3
	  lwz       r3, -0x77D4(r13)
	  mr        r27, r4
	  bl        -0x135290
	  lfs       f0, -0x5D08(r2)
	  stw       r3, 0x28(r31)
	  fdivs     f0, f0, f31
	  lfs       f2, 0x0(r27)
	  lfs       f1, 0x4(r27)
	  stfs      f1, 0x3C(r31)
	  stfs      f2, 0x40(r31)
	  lfs       f4, 0x8(r27)
	  lfs       f3, 0x0(r27)
	  lfs       f2, 0xC(r27)
	  lfs       f1, 0x4(r27)
	  fsubs     f3, f4, f3
	  stfs      f31, 0x34(r31)
	  fsubs     f1, f2, f1
	  fabs      f2, f3
	  stfs      f0, 0x38(r31)
	  fabs      f1, f1
	  frsp      f30, f2
	  lfs       f0, 0x38(r31)
	  frsp      f29, f1
	  fmuls     f1, f30, f0
	  bl        -0x89954
	  frsp      f2, f1
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x8(r1)
	  lwz       r28, 0xC(r1)
	  bl        -0x89970
	  frsp      f0, f1
	  cmpwi     r28, 0xC8
	  fctiwz    f0, f0
	  stfd      f0, 0x10(r1)
	  lwz       r27, 0x14(r1)
	  bgt-      .loc_0xD0
	  cmpwi     r27, 0xC8
	  ble-      .loc_0x120

	.loc_0xD0:
	  lfs       f1, -0x5D04(r2)
	  lfs       f0, -0x5D08(r2)
	  fmuls     f31, f31, f1
	  fdivs     f0, f0, f31
	  stfs      f31, 0x34(r31)
	  stfs      f0, 0x38(r31)
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f30, f0
	  bl        -0x899B4
	  frsp      f2, f1
	  lfs       f0, 0x38(r31)
	  fmuls     f1, f29, f0
	  fctiwz    f0, f2
	  stfd      f0, 0x10(r1)
	  lwz       r28, 0x14(r1)
	  bl        -0x899D0
	  frsp      f0, f1
	  fctiwz    f0, f0
	  stfd      f0, 0x8(r1)
	  lwz       r27, 0xC(r1)

	.loc_0x120:
	  cmpw      r28, r27
	  mr        r30, r27
	  ble-      .loc_0x130
	  mr        r30, r28

	.loc_0x130:
	  lfd       f1, -0x5D10(r2)
	  bl        -0x89154
	  xoris     r3, r30, 0x8000
	  lis       r0, 0x4330
	  stw       r3, 0x14(r1)
	  frsp      f29, f1
	  lfd       f1, -0x5D00(r2)
	  stw       r0, 0x10(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f1, f0, f1
	  bl        -0x89178
	  frsp      f0, f1
	  fdivs     f1, f0, f29
	  bl        -0x89A28
	  frsp      f0, f1
	  lis       r0, 0x4330
	  stw       r0, 0x18(r1)
	  lfd       f2, -0x5D00(r2)
	  fctiwz    f0, f0
	  lfd       f1, -0x5D10(r2)
	  stfd      f0, 0x8(r1)
	  lwz       r29, 0xC(r1)
	  xoris     r0, r29, 0x8000
	  stw       r0, 0x1C(r1)
	  lfd       f0, 0x18(r1)
	  fsub      f2, f0, f2
	  bl        -0x89198
	  addi      r0, r29, 0x1
	  stw       r0, 0x2C(r31)
	  lwz       r30, 0x2C(r31)
	  mulli     r3, r30, 0x38
	  addi      r3, r3, 0x10
	  bl        -0x134C10
	  lis       r4, 0x8016
	  mr        r7, r30
	  subi      r4, r4, 0x7308
	  li        r5, 0
	  li        r6, 0x38
	  bl        -0x971E4
	  stw       r3, 0x30(r31)
	  li        r3, 0x1
	  li        r0, 0
	  lwz       r29, 0x30(r31)
	  sth       r28, 0x0(r29)
	  sth       r27, 0x2(r29)
	  sth       r3, 0x4(r29)
	  sth       r0, 0x6(r29)
	  lhz       r3, 0x0(r29)
	  lhz       r0, 0x2(r29)
	  mullw     r30, r3, r0
	  mulli     r3, r30, 0x2C
	  addi      r3, r3, 0x10
	  bl        -0x134C60
	  lis       r4, 0x8015
	  mr        r7, r30
	  addi      r4, r4, 0x6740
	  li        r5, 0
	  li        r6, 0x2C
	  bl        -0x97234
	  stw       r3, 0x8(r29)
	  li        r5, 0
	  mr        r6, r5
	  stw       r5, 0x2C(r29)
	  mr        r7, r5
	  stw       r5, 0x30(r29)
	  b         .loc_0x260

	.loc_0x238:
	  lwz       r3, 0x8(r29)
	  addi      r0, r7, 0x28
	  addi      r6, r6, 0x1
	  add       r3, r3, r7
	  addi      r7, r7, 0x2C
	  stw       r5, 0x1C(r3)
	  sth       r5, 0x18(r3)
	  lhz       r4, 0x6(r29)
	  lwz       r3, 0x8(r29)
	  sthx      r4, r3, r0

	.loc_0x260:
	  lhz       r3, 0x0(r29)
	  lhz       r0, 0x2(r29)
	  mullw     r0, r3, r0
	  cmpw      r6, r0
	  blt+      .loc_0x238
	  li        r27, 0x1
	  li        r29, 0x38
	  b         .loc_0x2A0

	.loc_0x280:
	  subi      r0, r27, 0x1
	  lwz       r4, 0x30(r31)
	  mulli     r0, r0, 0x38
	  add       r3, r4, r29
	  add       r4, r4, r0
	  bl        -0xF5C
	  addi      r29, r29, 0x38
	  addi      r27, r27, 0x1

	.loc_0x2A0:
	  lwz       r0, 0x2C(r31)
	  cmpw      r27, r0
	  blt+      .loc_0x280
	  lwz       r3, -0x77D4(r13)
	  bl        -0x135508
	  lwz       r0, 0x28(r31)
	  sub       r0, r0, r3
	  stw       r0, 0x28(r31)
	  psq_l     f31,0x68(r1),0,0
	  lfd       f31, 0x60(r1)
	  psq_l     f30,0x58(r1),0,0
	  lfd       f30, 0x50(r1)
	  psq_l     f29,0x48(r1),0,0
	  lfd       f29, 0x40(r1)
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x74(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80158CF8
 * Size:	00003C
 */
CellLayer::CellLayer()
    : m_cell()
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&, Sys::Sphere&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
// void assertExtent__Q24Game9CellLayerFR7Rect<int>()
inline void CellLayer::assertExtent(Recti&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
// void checkPoint__Q24Game9CellLayerFR10Vector2<int>()
inline void CellLayer::checkPoint(Vector2<int>&) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158D34
 * Size:	000134
 */
// void getPikiCount__Q24Game11CellPyramidFiR7Rect<int>()
int CellPyramid::getPikiCount(int layerLevel, Recti& extent)
{
	if (disableAICulling) {
		return 1;
	}
	JUT_ASSERTLINE(1565, (layerLevel >= 0) && (layerLevel < m_layerCount), "illegal layerLevel %d : out of bounds 0ã€?%d\n", layerLevel,
	               m_layerCount);
	CellLayer* layer = &m_layers[layerLevel];
	int sum          = 0;
	for (int x = extent.p1.x; x <= extent.p2.x; x++) {
		for (int y = extent.p1.y; y <= extent.p2.y; y++) {
			Cell* cell = (*layer)(x, y);
			if (cell) {
				sum += cell->_14 + cell->_16;
			}
		}
	}
	return sum;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
// void drawCell__Q24Game11CellPyramidFR8GraphicsiR7Rect<int> f()
inline void CellPyramid::drawCell(Graphics&, int, Rect<int>&, float) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&, int)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
inline void CellPyramid::drawCell(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
inline void CellPyramid::dumpCount(int&, int&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80158E68
 * Size:	0000F8
 */
void Cell::resolveCollision_2()
{
	for (CellLeg* legA = _1C; legA != nullptr; legA = legA->m_next) {
		for (CellLeg* legB = legA->m_next; legB != nullptr; legB = legB->m_next) {
			if (legA->m_object->collisionUpdatable()) {
				legA->m_object->checkCollision(legB->m_object);
			}
		}
		for (Cell* cell = _10; cell != nullptr; cell = cell->_10) {
			for (CellLeg* legB = cell->_1C; legB != nullptr; legB = legB->m_next) {
				if (legA->m_object->collisionUpdatable()) {
					legA->m_object->checkCollision(legB->m_object);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80158F60
 * Size:	000100
 */
void Cell::resolveCollision_1()
{
	for (CellLeg* legA = _1C; legA != nullptr; legA = legA->m_next) {
		for (CellLeg* legB = legA->m_next; legB != nullptr; legB = legB->m_next) {
			// TODO: What is going on with m_passID?
			if ((legA->m_object != legB->m_object) && (legB->m_object->m_passID != (u32)legA->m_object)) {
				legB->m_object->m_passID = (u32)legA->m_object;
				legA->m_object->checkCollision(legB->m_object);
			}
		}
		for (Cell* cell = _10; cell != nullptr; cell = cell->_10) {
			for (CellLeg* legB = cell->_1C; legB != nullptr; legB = legB->m_next) {
				// TODO: What is going on with m_passID?
				if ((legA->m_object != legB->m_object) && (legB->m_object->m_passID != (u32)legA->m_object)) {
					legB->m_object->m_passID = (u32)legA->m_object;
					legA->m_object->checkCollision(legB->m_object);
				}
			}
		}
	}
}

/*
 * --INFO--
 * Address:	80159060
 * Size:	0001E0
 */
void Cell::resolveCollision_3()
{
	for (CellLeg* legA = _1C; legA != nullptr; legA = legA->m_next) {
		if (legA->m_object->collisionUpdatable() == false) {
			CellObject* legAObject = legA->m_object;
			if (legAObject->m_passID != Game::cellMgr->m_passID) {
				legAObject->checkAllCollision();
				legAObject->m_passID = Game::cellMgr->m_passID;
			}
		} else {
			for (CellLeg* legB = legA->m_next; legB != nullptr; legB = legB->m_next) {
				if (legA->m_object != legB->m_object) {
					if (*CellMgrParms::getInstance()->m_cellParms.m_p001()) {
						if (legB->m_object != (CellObject*)legA->m_object->m_passID) {
							legA->m_object->m_passID = (u32)legB->m_object;
							legA->m_object->checkCollision(legB->m_object);
							legA->m_object->updateCollisionBuffer(legB->m_object);
						}
					} else {
						legA->m_object->checkCollision(legB->m_object);
						legA->m_object->updateCollisionBuffer(legB->m_object);
					}
				}
			}
			for (Cell* cell = _10; cell != nullptr; cell = cell->_10) {
				for (CellLeg* legB = cell->_1C; legB != nullptr; legB = legB->m_next) {
					if (legA->m_object != legB->m_object) {
						if (*CellMgrParms::getInstance()->m_cellParms.m_p001()) {
							if ((CellObject*)legA->m_object->m_passID != legB->m_object) {
								legA->m_object->m_passID = (u32)legB->m_object;
								legA->m_object->checkCollision(legB->m_object);
								legA->m_object->updateCollisionBuffer(legB->m_object);
							}
						} else {
							legA->m_object->checkCollision(legB->m_object);
							legA->m_object->updateCollisionBuffer(legB->m_object);
						}
					}
				}
			}
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  lwz       r31, 0x1C(r3)
	  b         .loc_0x1C4

	.loc_0x1C:
	  lwz       r3, 0xC(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x9C
	  lwz       r27, 0xC(r31)
	  lwz       r3, -0x6D38(r13)
	  lwz       r4, 0xA4(r27)
	  lwz       r0, 0x44(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x1C0
	  li        r29, 0
	  mr        r28, r29
	  b         .loc_0x80

	.loc_0x5C:
	  mr        r3, r27
	  lwz       r4, 0xB0(r27)
	  lwz       r12, 0x0(r27)
	  lwzx      r4, r4, r28
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r28, r28, 0x8
	  addi      r29, r29, 0x1

	.loc_0x80:
	  lwz       r0, 0xAC(r27)
	  cmpw      r29, r0
	  blt+      .loc_0x5C
	  lwz       r3, -0x6D38(r13)
	  lwz       r0, 0x44(r3)
	  stw       r0, 0xA4(r27)
	  b         .loc_0x1C0

	.loc_0x9C:
	  lwz       r27, 0x0(r31)
	  b         .loc_0x11C

	.loc_0xA4:
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  cmplw     r3, r4
	  beq-      .loc_0x118
	  lwz       r5, -0x69F8(r13)
	  lbz       r0, 0x58(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0xFC
	  lwz       r0, 0xA4(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x118
	  stw       r4, 0xA4(r3)
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  bl        -0x240C
	  b         .loc_0x118

	.loc_0xFC:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r27)
	  bl        -0x242C

	.loc_0x118:
	  lwz       r27, 0x0(r27)

	.loc_0x11C:
	  cmplwi    r27, 0
	  bne+      .loc_0xA4
	  lwz       r27, 0x10(r30)
	  b         .loc_0x1B8

	.loc_0x12C:
	  lwz       r28, 0x1C(r27)
	  b         .loc_0x1AC

	.loc_0x134:
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  cmplw     r3, r4
	  beq-      .loc_0x1A8
	  lwz       r5, -0x69F8(r13)
	  lbz       r0, 0x58(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x18C
	  lwz       r0, 0xA4(r3)
	  cmplw     r0, r4
	  beq-      .loc_0x1A8
	  stw       r4, 0xA4(r3)
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  bl        -0x249C
	  b         .loc_0x1A8

	.loc_0x18C:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0xC(r31)
	  lwz       r4, 0xC(r28)
	  bl        -0x24BC

	.loc_0x1A8:
	  lwz       r28, 0x0(r28)

	.loc_0x1AC:
	  cmplwi    r28, 0
	  bne+      .loc_0x134
	  lwz       r27, 0x10(r27)

	.loc_0x1B8:
	  cmplwi    r27, 0
	  bne+      .loc_0x12C

	.loc_0x1C0:
	  lwz       r31, 0x0(r31)

	.loc_0x1C4:
	  cmplwi    r31, 0
	  bne+      .loc_0x1C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
} // namespace Game

/*
 * --INFO--
 * Address:	80159240
 * Size:	00004C
 */
void SweepCallback::invoke(SweepPrune::Object*, SweepPrune::Object*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	cmplwi   r4, 0
	stw      r0, 0x14(r1)
	beq      lbl_80159258
	addi     r4, r4, -4

lbl_80159258:
	cmplwi   r5, 0
	beq      lbl_80159264
	addi     r5, r5, -4

lbl_80159264:
	mr       r3, r4
	mr       r4, r5
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}
