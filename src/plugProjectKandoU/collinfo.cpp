#include "CNode.h"
#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Dolphin/stl.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "JSystem/JUT/JUTException.h"
#include "mapCode.h"
#include "Matrixf.h"
#include "Platform.h"
#include "PlatAttacher.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "Sys/GridDivider.h"
#include "Sys/TriIndexList.h"
#include "Sys/TriangleTable.h"
#include "SysShape/Joint.h"
#include "stream.h"
#include "types.h"
#include "Vector3.h"

/*
 * __ct__8PlatformFv
 * --INFO--
 * Address:	801336A8
 * Size:	000044
 */
Platform::Platform() { m_triDivider = nullptr; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
inline void Platform::setTriDivider(Sys::TriDivider* triDivider)
{
	// UNUSED FUNCTION
	m_triDivider = (Sys::OBBTree*)triDivider;
}

/*
 * --INFO--
 * Address:	801336EC
 * Size:	000008
 */
Sys::TriDivider* Platform::getTriDivider() { return m_triDivider; }

/*
 * read__8PlatformFR6Stream
 * --INFO--
 * Address:	........
 * Size:	000068
 */
inline void Platform::read(Stream& input)
{
	// UNUSED FUNCTION
	setTriDivider(new Sys::OBBTree());
	getTriDivider()->read(input);
}

/*
 * --INFO--
 * Address:	801336F4
 * Size:	00003C
 */
void Platform::setMapCodeAll(MapCode::Code& code)
{
	Sys::TriangleTable* triTable = m_triDivider->m_triangleTable;
	for (int i = 0; i < triTable->m_count; i++) {
		triTable->m_objects[i].m_code.m_contents = code.m_contents;
	}
}

/*
 * --INFO--
 * Address:	80133730
 * Size:	000084
 */
Platform* Platform::clone(Matrixf& matrix)
{
	Platform* copy     = new Platform();
	copy->m_triDivider = (Sys::OBBTree*)m_triDivider->clone(matrix);
	return copy;
}

/*
 * load__8PlatformFPc
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
// void Platform::load(char* path)
// {
// 	// UNUSED FUNCTION
// }

/*
 * load__8PlatformFP13JKRFileLoaderPc
 * --INFO--
 * Address:	801337B4
 * Size:	0000AC
 */
void Platform::load(JKRFileLoader* loader, char* path)
{
	void* data = JKRFileLoader::getGlbResource(path, loader);
	if (data == nullptr) {
		JUT_PANICLINE(236, "platform %s not found !\n", path);
		return;
	}
	RamStream input(data, -1);
	read(input);
}

/*
 * --INFO--
 * Address:	80133860
 * Size:	000014
 */
PlatAttacher::PlatAttacher()
    : m_numShapes(0)
    , m_jointIndices(nullptr)
    , m_platforms(nullptr)
{
}

/*
 * setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
 * --INFO--
 * Address:	80133874
 * Size:	000064
 */
void PlatAttacher::setMapCodeAll(MapCode::Code& code)
{
	for (int shapeIndex = 0; shapeIndex < m_numShapes; shapeIndex++) {
		m_platforms[shapeIndex].setMapCodeAll(code);
	}
}

/*
 * alloc__12PlatAttacherFiPUs
 * --INFO--
 * Address:	........
 * Size:	000178
 */
// void PlatAttacher::alloc(int, unsigned short*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * write__12PlatAttacherFR6Stream
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
// void PlatAttacher::write(Stream& output)
// {
// 	// UNUSED FUNCTION
// }

/*
 * read__12PlatAttacherFR6Stream
 * --INFO--
 * Address:	80133938
 * Size:	000190
 */
void PlatAttacher::read(Stream& input)
{
	m_numShapes    = input.readInt();
	m_jointIndices = new u16[m_numShapes];
	for (int i = 0; i < m_numShapes; i++) {
		m_jointIndices[i] = input.readShort();
	}
	m_platforms             = new Platform[m_numShapes];
	Sys::VertexTable* table = new Sys::VertexTable();
	table->read(input);
	for (int i = 0; i < m_numShapes; i++) {
		Sys::OBBTree* tree = new Sys::OBBTree();
		tree->readWithoutVerts(input, *table);
		m_platforms[i].m_triDivider = tree;
	}
}

/*
 * --INFO--
 * Address:	80133CD4
 * Size:	000008
 */
int PlatAttacher::getNumShapes() { return m_numShapes; }

/*
 * --INFO--
 * Address:	80133CDC
 * Size:	00007C
 */
u16 PlatAttacher::getJointIndex(int i)
{
	P2ASSERTBOUNDSLINE(312, 0, i, m_numShapes);
	return m_jointIndices[i];
}

/*
 * --INFO--
 * Address:	80133D58
 * Size:	00007C
 */
Platform* PlatAttacher::getPlatform(int i)
{
	P2ASSERTBOUNDSLINE(318, 0, i, m_numShapes);
	return &m_platforms[i];
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
// AgePlatform::directCreate(unsigned char*)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
// AgePlatform::createGrid(int, int)
// {
// 	// UNUSED FUNCTION
// }

/*
 * --INFO--
 * Address:	8013405C
 * Size:	000010
 */
CollTree::CollTree()
    : m_part(nullptr)
    , m_mgr(nullptr)
{
}

/*
 * --INFO--
 * Address:	8013406C
 * Size:	000044
 */
void CollTree::createFromFactory(SysShape::MtxObject* mtxObject, CollPartFactory* factory, CollPartMgr* mgr)
{
	m_mgr = mgr;
	if (factory != nullptr) {
		m_part = factory->createInstance(mtxObject, mgr);
	}
}

/*
 * --INFO--
 * Address:	801340B0
 * Size:	000104
 */
void CollTree::createSingleSphere(SysShape::MtxObject* mtxObject, int jointIndex, Sys::Sphere& sphere, CollPartMgr* mgr)
{
	m_mgr = mgr;
	if (mgr != nullptr) {
		m_part = mgr->createOne(mtxObject);
		JUT_ASSERTLINE(446, m_part != nullptr, "collpart birth failed : single sphere\n");
	} else {
		m_part = new CollPart(mtxObject);
	}
	m_part->_1C          = sphere.m_radius;
	m_part->_18          = sphere.m_radius;
	m_part->_20          = 0.0f;
	m_part->m_jointIndex = jointIndex;
	m_part->m_attribute  = 0;
	m_part->_30.setID('root');
}

/*
 * --INFO--
 * Address:	801341B4
 * Size:	000044
 */
void CollTree::release()
{
	if (m_mgr != nullptr) {
		releaseRec(m_part);
		m_mgr = nullptr;
	}
}

/*
 * --INFO--
 * Address:	801341F8
 * Size:	000348
 */
// matches so long as kill isn't in the header........
void CollTree::releaseRec(CollPart* part)
{
	CollPart* next  = part->getNext();
	CollPart* child = part->getChild();

	if (child != nullptr) {
		releaseRec(child);
	}

	m_mgr->kill(part);

	if (next != nullptr) {
		releaseRec(next);
	}
}

/*
 * --INFO--
 * Address:	80134550
 * Size:	00003C
 */
bool CollTree::checkCollision(CollTree* p1, CollPart** p2, CollPart** p3, Vector3f& p4)
{
	return checkCollisionRec(m_part, p1->m_part, p2, p3, p4);
}

/*
 * --INFO--
 * Address:	8013458C
 * Size:	000604
 */
bool CollTree::checkCollisionRec(CollPart* p1, CollPart* p2, CollPart** p3, CollPart** p4, Vector3f& p5)
{
	if (p1 == nullptr || p2 == nullptr) {
		return false;
	}
	if (p1->collide(p2, p5)) {
		if (p1->isPrim()) {
			if (p2->isPrim()) {
				*p3 = p1;
				*p4 = p2;
				return true;
			}
		}
		if (!p1->isLeaf()) {
			return checkCollisionRec(p1->getChild(), p2, p3, p4, p5);
		} else {
			return checkCollisionRec(p1, p2->getChild(), p3, p4, p5);
		}
	} else {
		if (p1->getNext() != nullptr) {
			return checkCollisionRec(p1->getNext(), p2, p3, p4, p5);
		}
		if (p2->getNext() != nullptr) {
			return checkCollisionRec(p1, p2->getNext(), p3, p4, p5);
		}
		*p3 = nullptr;
		*p4 = nullptr;
		return false;
	}
}

/*
 * checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>
 * --INFO--
 * Address:	80134BD0
 * Size:	00002C
 */
void CollTree::checkCollision(Sys::Sphere& sphere, IDelegate1<CollPart*>* delegate)
{
	if (m_part != nullptr) {
		m_part->checkCollision(sphere, delegate);
	}
}

/*
 * checkCollision__8CollPartFRQ23Sys6SphereP22IDelegate1<P8CollPart>
 * --INFO--
 * Address:	80134BFC
 * Size:	0008B8
 */
void CollPart::checkCollision(Sys::Sphere& sphere, IDelegate1<CollPart*>* delegate)
{
	if (isPrim()) {
		if (isSphere()) {
			Sys::Sphere partSphere(m_position, _1C);
			if (partSphere.intersect(sphere)) {
				delegate->invoke(this);
			}
		} else if (isTube() || isTubeTree()) {
			Sys::Tube collTube(m_position, getChild()->m_position, _1C, getChild()->_1C);
			Vector3f colVec;
			float colSep;
			if (collTube.collide(sphere, colVec, colSep)) {
				delegate->invoke(this);
			}
		}
	}
	if (getChild() != nullptr) {
		getChild()->checkCollision(sphere, delegate);
	}
	if (getNext() != nullptr) {
		getNext()->checkCollision(sphere, delegate);
	}
}

/*
 * checkCollisionMulti__8CollTreeFP8CollTreeP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>
 * --INFO--
 * Address:	80135564
 * Size:	000198
 */
void CollTree::checkCollisionMulti(CollTree* other, IDelegate3<CollPart*, CollPart*, Vector3f&>* delegate)
{
	CollPart* inputPart = other->m_part;

	for (CollPart* thisPart = m_part; thisPart != nullptr; thisPart = thisPart->getNext()) {

		for (CollPart* otherPart = inputPart; otherPart != nullptr; otherPart = otherPart->getNext()) {

			Vector3f outPosition;
			if (thisPart->collide(otherPart, outPosition)) {
				if (thisPart->isPrim()) {
					if (otherPart->isPrim()) {
						delegate->invoke(thisPart, otherPart, outPosition);
						if (!thisPart->isLeaf()) {
							thisPart->getChild()->checkCollisionMulti(otherPart, delegate);
						} else if (!otherPart->isLeaf()) {
							thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
						}
						continue;
					}
				}
				if (thisPart->isLeaf()) {
					thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
				} else if (otherPart->isLeaf()) {
					thisPart->getChild()->checkCollisionMulti(otherPart, delegate);
				} else if (thisPart->getChild()) {
					thisPart->getChild()->checkCollisionMulti(otherPart, delegate);
				} else {
					thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
				}
			}
		}
	}
}

/*
 * checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>
 * --INFO--
 * Address:	801356FC
 * Size:	0001F0
 */
void CollPart::checkCollisionMulti(CollPart* other, IDelegate3<CollPart*, CollPart*, Vector3f&>* delegate)
{
	for (CollPart* thisPart = this; thisPart != nullptr; thisPart = thisPart->getNext()) {

		for (CollPart* otherPart = other; otherPart != nullptr; otherPart = otherPart->getNext()) {

			Vector3f colVec;
			if (thisPart->collide(otherPart, colVec)) {
				if (thisPart->isPrim() && otherPart->isPrim()) {
					delegate->invoke(thisPart, otherPart, colVec);
					if (!otherPart->isLeaf()) {
						thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
					} else if (!thisPart->isLeaf()) {
						otherPart->checkCollisionMulti(thisPart->getChild(), delegate);
					}

				} else if (thisPart->isLeaf()) {
					thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
				} else if (otherPart->isLeaf()) {
					otherPart->checkCollisionMulti(thisPart->getChild(), delegate);
				} else if (!thisPart->isLeaf()) {
					thisPart->getChild()->checkCollisionMulti(otherPart, delegate);
				} else {
					thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
				}

			} else if (thisPart->isTube() || thisPart->isTubeTree()) {
				otherPart->checkCollisionMulti(thisPart->getChild(), delegate);
			} else if (otherPart->isTube() || otherPart->isTubeTree()) {
				thisPart->checkCollisionMulti(otherPart->getChild(), delegate);
			}
		}
	}
}

/*
 * checkCollisionMultiRec__8CollTreeFP8CollPartP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>
 * --INFO--
 * Address:	........
 * Size:	001410
 */
void CollTree::checkCollisionMultiRec(CollPart*, CollPart*, IDelegate3<CollPart*, CollPart*, Vector3f&>*)
{
	// UNUSED FUNCTION
}

/**
 * @param other The other part participating in this collision.
 * @param outPosition The center of the collision between the two parts.
 * --INFO--
 * Address:	801358EC
 * Size:	0001B0
 */
bool CollPart::collide(CollPart* other, Vector3f& outPosition)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	lbz      r6, 0x58(r3)
	cmplwi   r6, 0
	bne      lbl_80135960
	lbz      r0, 0x58(r4)
	cmplwi   r0, 0
	bne      lbl_80135960
	lfs      f1, 0x1c(r3)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x44(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x40
	stfs     f0, 0x48(r1)
	stfs     f1, 0x4c(r1)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x30(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x34(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x30
	stfs     f0, 0x38(r1)
	stfs     f1, 0x3c(r1)
	bl       "intersect__Q23Sys6SphereFRQ23Sys6SphereR10Vector3<f>"
	b        lbl_80135A8C

lbl_80135960:
	cmplwi   r6, 0
	bne      lbl_801359F4
	lbz      r0, 0x58(r4)
	cmplwi   r0, 1
	beq      lbl_8013597C
	cmplwi   r0, 2
	bne      lbl_801359F4

lbl_8013597C:
	lfs      f1, 0x1c(r3)
	addi     r6, r1, 0xc
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x20(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x70
	stfs     f0, 0x28(r1)
	stfs     f1, 0x2c(r1)
	lwz      r7, 0x10(r4)
	lfs      f1, 0x1c(r4)
	lfs      f2, 0x1c(r7)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x70(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x74(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x20
	stfs     f0, 0x78(r1)
	lfs      f0, 0x4c(r7)
	stfs     f0, 0x7c(r1)
	lfs      f0, 0x50(r7)
	stfs     f0, 0x80(r1)
	lfs      f0, 0x54(r7)
	stfs     f0, 0x84(r1)
	stfs     f1, 0x88(r1)
	stfs     f2, 0x8c(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	b        lbl_80135A8C

lbl_801359F4:
	cmplwi   r6, 1
	beq      lbl_80135A04
	cmplwi   r6, 2
	bne      lbl_80135A88

lbl_80135A04:
	lbz      r0, 0x58(r4)
	cmplwi   r0, 0
	bne      lbl_80135A88
	lwz      r7, 0x10(r3)
	addi     r6, r1, 8
	lfs      f1, 0x1c(r3)
	lfs      f2, 0x1c(r7)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x54(r1)
	lfs      f0, 0x54(r3)
	addi     r3, r1, 0x50
	stfs     f0, 0x58(r1)
	lfs      f0, 0x4c(r7)
	stfs     f0, 0x5c(r1)
	lfs      f0, 0x50(r7)
	stfs     f0, 0x60(r1)
	lfs      f0, 0x54(r7)
	stfs     f0, 0x64(r1)
	stfs     f1, 0x68(r1)
	stfs     f2, 0x6c(r1)
	lfs      f1, 0x1c(r4)
	lfs      f0, 0x4c(r4)
	stfs     f0, 0x10(r1)
	lfs      f0, 0x50(r4)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x54(r4)
	addi     r4, r1, 0x10
	stfs     f0, 0x18(r1)
	stfs     f1, 0x1c(r1)
	bl       "collide__Q23Sys4TubeFRQ23Sys6SphereR10Vector3<f>Rf"
	b        lbl_80135A8C

lbl_80135A88:
	li       r3, 0

lbl_80135A8C:
	lwz      r0, 0x94(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * update__8CollTreeFv
 * --INFO--
 * Address:	80135A9C
 * Size:	00002C
 */
void CollTree::update()
{
	if (m_part != nullptr) {
		m_part->update();
	}
}

/*
 * attachModel__8CollTreeFPQ28SysShape9MtxObject
 * --INFO--
 * Address:	80135AC8
 * Size:	00002C
 */
void CollTree::attachModel(SysShape::MtxObject* mtxObject)
{
	if (m_part != nullptr) {
		m_part->attachModel(mtxObject);
	}
}

/*
 * attachModel__8CollPartFPQ28SysShape9MtxObject
 * --INFO--
 * Address:	80135AF4
 * Size:	000350
 */
void CollPart::attachModel(SysShape::MtxObject* mtxObject)
{
	m_model = mtxObject;
	if (getNext()) {
		getNext()->attachModel(mtxObject);
	}
	if (getChild()) {
		getChild()->attachModel(mtxObject);
	}
}

/*
 * getCollPart__8CollTreeFUl
 * --INFO--
 * Address:	80135E44
 * Size:	000034
 */
CollPart* CollTree::getCollPart(unsigned long partID) { return (m_part != nullptr) ? m_part->getCollPart(partID) : nullptr; }

/*
 * getCollPart__8CollPartFUl
 * --INFO--
 * Address:	80135E78
 * Size:	000640
 */
CollPart* CollPart::getCollPart(unsigned long partID)
{
	if (_30 == partID) {
		return this;
	}
	if (getNext() != nullptr) {
		CollPart* result = getNext()->getCollPart(partID);
		if (result != nullptr) {
			return result;
		}
	}
	if (getChild() != nullptr) {
		CollPart* result = getChild()->getCollPart(partID);
		if (result != nullptr) {
			return result;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	801364B8
 * Size:	00054C
 */
int CollPart::getAllCollPartToArray(CollPart** array, int limit, int& count)
{
	int index = count;
	if (index < limit) {
		count++;
		array[index] = this;
		if (getNext()) {
			getNext()->getAllCollPartToArray(array, limit, count);
		}
		if (getChild()) {
			getChild()->getAllCollPartToArray(array, limit, count);
		}
	} else {
		// ???
	}
	return count;

	// int index = count;
	// if (index >= limit) {
	// 	return count;
	// }
	// count++;
	// array[index] = this;
	// if (getNext()) {
	// 	getNext()->getAllCollPartToArray(array, limit, count);
	// }
	// if (getChild()) {
	// 	getChild()->getAllCollPartToArray(array, limit, count);
	// }
	// return count;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r25, 0x14(r1)
	mr       r29, r5
	mr       r30, r6
	mr       r27, r3
	mr       r28, r4
	lwz      r5, 0(r6)
	cmpw     r5, r29
	blt      lbl_801364EC
	mr       r3, r5
	b        lbl_801369F0

lbl_801364EC:
	addi     r3, r5, 1
	slwi     r0, r5, 2
	stw      r3, 0(r30)
	stwx     r27, r28, r0
	lwz      r31, 4(r27)
	cmplwi   r31, 0
	beq      lbl_80136774
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_80136774
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r31, r28, r0
	lwz      r25, 4(r31)
	cmplwi   r25, 0
	beq      lbl_8013664C
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_8013664C
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_801365CC
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801365CC
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801365A4
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801365A4:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801365CC
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801365CC:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_8013664C
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_8013664C
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136624
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136624:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013664C
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013664C:
	lwz      r25, 0x10(r31)
	cmplwi   r25, 0
	beq      lbl_80136774
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_80136774
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_801366F4
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801366F4
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801366CC
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801366CC:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801366F4
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801366F4:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_80136774
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_80136774
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013674C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013674C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136774
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136774:
	lwz      r31, 0x10(r27)
	cmplwi   r31, 0
	beq      lbl_801369EC
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801369EC
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r31, r28, r0
	lwz      r25, 4(r31)
	cmplwi   r25, 0
	beq      lbl_801368C4
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801368C4
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_80136844
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_80136844
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013681C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013681C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136844
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136844:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801368C4
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801368C4
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013689C
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013689C:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801368C4
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801368C4:
	lwz      r25, 0x10(r31)
	cmplwi   r25, 0
	beq      lbl_801369EC
	lwz      r4, 0(r30)
	cmpw     r4, r29
	bge      lbl_801369EC
	addi     r3, r4, 1
	slwi     r0, r4, 2
	stw      r3, 0(r30)
	stwx     r25, r28, r0
	lwz      r0, 4(r25)
	cmplwi   r0, 0
	beq      lbl_8013696C
	mr       r3, r25
	bl       getNext__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_8013696C
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80136944
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_80136944:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_8013696C
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_8013696C:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801369EC
	mr       r3, r25
	bl       getChild__8CollPartFv
	lwz      r5, 0(r30)
	mr       r26, r3
	cmpw     r5, r29
	bge      lbl_801369EC
	addi     r4, r5, 1
	slwi     r0, r5, 2
	stw      r4, 0(r30)
	stwx     r26, r28, r0
	bl       getNext__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801369C4
	mr       r3, r26
	bl       getNext__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801369C4:
	mr       r3, r26
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_801369EC
	mr       r3, r26
	bl       getChild__8CollPartFv
	mr       r4, r28
	mr       r5, r29
	mr       r6, r30
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi

lbl_801369EC:
	lwz      r3, 0(r30)

lbl_801369F0:
	lmw      r25, 0x14(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136A04
 * Size:	000118
 */
void CollTree::findCollPart(FindCollPartArg&)
{
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	stw      r0, 0x444(r1)
	stfd     f31, 0x430(r1)
	psq_st   f31, 1080(r1), 0, qr0
	stmw     r26, 0x418(r1)
	lwz      r0, 0(r3)
	mr       r26, r4
	cmplwi   r0, 0
	beq      lbl_80136AFC
	li       r0, 0
	addi     r4, r1, 0xc
	stw      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x100
	lwz      r3, 0(r3)
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi
	lfs      f31, lbl_80518214@sda21(r2)
	mr       r31, r3
	addi     r30, r1, 0xc
	li       r29, 0
	li       r28, 0
	b        lbl_80136AEC

lbl_80136A60:
	lwz      r3, 0(r26)
	lwz      r27, 0(r30)
	cmplwi   r3, 0
	beq      lbl_80136A8C
	lwz      r12, 0(r3)
	mr       r4, r27
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80136AE4

lbl_80136A8C:
	lbz      r0, 0x58(r27)
	cmplwi   r0, 0
	bne      lbl_80136AE4
	lfs      f1, 8(r26)
	lfs      f0, 0x50(r27)
	lfs      f2, 0x1c(r27)
	fsubs    f5, f1, f0
	lfs      f3, 4(r26)
	lfs      f1, 0x4c(r27)
	fmuls    f0, f2, f2
	lfs      f4, 0xc(r26)
	lfs      f2, 0x54(r27)
	fsubs    f3, f3, f1
	fmuls    f1, f5, f5
	fsubs    f2, f4, f2
	fmadds   f1, f3, f3, f1
	fmadds   f1, f2, f2, f1
	fsubs    f0, f1, f0
	fcmpo    cr0, f0, f31
	bge      lbl_80136AE4
	mr       r29, r27
	fmr      f31, f0

lbl_80136AE4:
	addi     r30, r30, 4
	addi     r28, r28, 1

lbl_80136AEC:
	cmpw     r28, r31
	blt      lbl_80136A60
	mr       r3, r29
	b        lbl_80136B00

lbl_80136AFC:
	li       r3, 0

lbl_80136B00:
	psq_l    f31, 1080(r1), 0, qr0
	lfd      f31, 0x430(r1)
	lmw      r26, 0x418(r1)
	lwz      r0, 0x444(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136B1C
 * Size:	000124
 */
CollPart* CollTree::getRandomCollPart()
{
	if (m_part == nullptr) {
		return nullptr;
	}
	CollPart* parts[0x10];
	int v1;
	uint num  = m_part->getAllCollPartToArray(parts, 0x10, v1);
	int index = (int)((float)num * ((float)rand() / 23768.0f));
	JUT_ASSERTLINE(886, parts[index] != nullptr, "num=%d : random=%d\n", num, index);
	JUT_ASSERTLINE(889, 0xf < index, "num=%d : random=%d\n", num, index);
	return parts[index];
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	stw      r28, 0x70(r1)
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_80136C1C
	li       r0, 0
	addi     r4, r1, 0xc
	stw      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x10
	lwz      r3, 0(r3)
	bl       getAllCollPartToArray__8CollPartFPP8CollPartiRi
	mr       r29, r3
	bl       rand
	lis      r4, 0x4330
	xoris    r0, r3, 0x8000
	stw      r0, 0x54(r1)
	xoris    r0, r29, 0x8000
	lfd      f2, lbl_80518218@sda21(r2)
	addi     r30, r1, 0xc
	stw      r4, 0x50(r1)
	lfs      f0, lbl_80518208@sda21(r2)
	lfd      f1, 0x50(r1)
	stw      r0, 0x5c(r1)
	fsubs    f1, f1, f2
	stw      r4, 0x58(r1)
	fdivs    f1, f1, f0
	lfd      f0, 0x58(r1)
	fsubs    f0, f0, f2
	fmuls    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x60(r1)
	lwz      r28, 0x64(r1)
	slwi     r31, r28, 2
	lwzx     r0, r30, r31
	cmplwi   r0, 0
	bne      lbl_80136BE8
	lis      r3, lbl_8047C5A0@ha
	lis      r4, lbl_8047C600@ha
	addi     r5, r4, lbl_8047C600@l
	mr       r6, r29
	addi     r3, r3, lbl_8047C5A0@l
	mr       r7, r28
	li       r4, 0x376
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80136BE8:
	cmpwi    r28, 0x10
	blt      lbl_80136C14
	lis      r3, lbl_8047C5A0@ha
	lis      r4, lbl_8047C600@ha
	addi     r5, r4, lbl_8047C600@l
	mr       r6, r29
	addi     r3, r3, lbl_8047C5A0@l
	mr       r7, r28
	li       r4, 0x379
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80136C14:
	lwzx     r3, r30, r31
	b        lbl_80136C20

lbl_80136C1C:
	li       r3, 0

lbl_80136C20:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	lwz      r28, 0x70(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80136C40
 * Size:	000034
 */
void CollTree::getBoundingSphere(Sys::Sphere& sphere)
{
	if (m_part == nullptr) {
		return;
	}
	sphere.m_position = m_part->m_position;
	sphere.m_radius   = m_part->_1C;
}

/*
 * __ct__8CollPartFPQ28SysShape9MtxObject
 * --INFO--
 * Address:	80136C74
 * Size:	000064
 */
CollPart::CollPart(SysShape::MtxObject* mtxObject)
    : CNode()
    , _30()
    , _3C()
{
	init(mtxObject);
}

/*
 * __ct__8CollPartFv
 * --INFO--
 * Address:	80136CD8
 * Size:	000058
 */
CollPart::CollPart()
    : CNode()
    , _30()
    , _3C()
{
	init(nullptr);
}

/*
 * --INFO--
 * Address:	80136D30
 * Size:	000080
 */
void CollPart::init(SysShape::MtxObject* mtxObject)
{
	m_child       = nullptr;
	m_parent      = nullptr;
	m_prev        = nullptr;
	m_next        = nullptr;
	_1C           = 0.0f;
	_18           = 0.0f;
	_20           = 0.0f;
	m_position    = 0.0f;
	m_model       = mtxObject;
	m_jointIndex  = -1;
	_60           = 0;
	m_attribute   = 0;
	m_hasCollPart = 0;
	_3C.setID('____');
}

/*
 * --INFO--
 * Address:	80136DB0
 * Size:	000030
 */
bool CollPart::isStickable() { return _3C.match('s***', '*'); }

/*
 * update__8CollPartFv
 * --INFO--
 * Address:	80136DE0
 * Size:	0004E0
 */
void CollPart::update()
{
	Matrixf mtx;
	makeMatrixTo(mtx);
	mtx.getTranslation(m_position);
	if (getNext()) {
		getNext()->update();
	}
	if (getChild()) {
		getChild()->update();
	}
}

/*
 * --INFO--
 * Address:	801372C0
 * Size:	00001C
 */
// void Matrixf::getTranslation(Vector3f& translation)
// {
// 	translation.x = m_matrix.structView.tx;
// 	translation.y = m_matrix.structView.ty;
// 	translation.z = m_matrix.structView.tz;
// }

/*
 * --INFO--
 * Address:	801372DC
 * Size:	000024
 */
// void Matrixf::getBasis(int v1, Vector3f& v2)
// {
// 	v2.x = m_matrix.vecView.x[v1];
// 	v2.y = m_matrix.vecView.y[v1];
// 	v2.z = m_matrix.vecView.z[v1];
// }

/*
 * __cl__7MatrixfFii
 * --INFO--
 * Address:	80137300
 * Size:	000018
 */
// float& Matrixf::operator()(int v1, int v2)
// {
// }

/*
 * --INFO--
 * Address:	80137318
 * Size:	000084
 */
void CollPart::makeMatrixTo(Matrixf& p1)
{
	if ((int)m_jointIndex != -1) {
		Matrixf mtx;
		PSMTXIdentity(mtx.m_matrix.mtxView);
		mtx.setTranslation(_20);
		PSMTXConcat(m_model->getMatrix(m_jointIndex)->m_matrix.mtxView, mtx.m_matrix.mtxView, p1.m_matrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	8013739C
 * Size:	000214
 */
void CollPart::makeTubeTree()
{
	if (getChild() != nullptr) {
		m_hasCollPart = 2;
	} else {
		m_hasCollPart = 0;
	}
	for (CollPart* part = getChild(); part != nullptr; part = part->getNext()) {
		part->makeTubeTree();
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stmw     r23, 0xc(r1)
	lwz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_801373C4
	li       r0, 2
	stb      r0, 0x58(r3)
	b        lbl_801373CC

lbl_801373C4:
	li       r0, 0
	stb      r0, 0x58(r3)

lbl_801373CC:
	lwz      r28, 0x10(r3)
	b        lbl_80137594

lbl_801373D4:
	lwz      r0, 0x10(r28)
	cmplwi   r0, 0
	beq      lbl_801373EC
	li       r0, 2
	stb      r0, 0x58(r28)
	b        lbl_801373F4

lbl_801373EC:
	li       r0, 0
	stb      r0, 0x58(r28)

lbl_801373F4:
	lwz      r31, 0x10(r28)
	b        lbl_80137588

lbl_801373FC:
	lwz      r0, 0x10(r31)
	cmplwi   r0, 0
	beq      lbl_80137414
	li       r0, 2
	stb      r0, 0x58(r31)
	b        lbl_8013741C

lbl_80137414:
	li       r0, 0
	stb      r0, 0x58(r31)

lbl_8013741C:
	lwz      r30, 0x10(r31)
	b        lbl_8013757C

lbl_80137424:
	lwz      r0, 0x10(r30)
	cmplwi   r0, 0
	beq      lbl_8013743C
	li       r0, 2
	stb      r0, 0x58(r30)
	b        lbl_80137444

lbl_8013743C:
	li       r0, 0
	stb      r0, 0x58(r30)

lbl_80137444:
	lwz      r29, 0x10(r30)
	b        lbl_80137570

lbl_8013744C:
	lwz      r0, 0x10(r29)
	cmplwi   r0, 0
	beq      lbl_80137464
	li       r0, 2
	stb      r0, 0x58(r29)
	b        lbl_8013746C

lbl_80137464:
	li       r0, 0
	stb      r0, 0x58(r29)

lbl_8013746C:
	lwz      r27, 0x10(r29)
	b        lbl_80137564

lbl_80137474:
	lwz      r0, 0x10(r27)
	cmplwi   r0, 0
	beq      lbl_8013748C
	li       r0, 2
	stb      r0, 0x58(r27)
	b        lbl_80137494

lbl_8013748C:
	li       r0, 0
	stb      r0, 0x58(r27)

lbl_80137494:
	lwz      r26, 0x10(r27)
	b        lbl_80137558

lbl_8013749C:
	lwz      r0, 0x10(r26)
	cmplwi   r0, 0
	beq      lbl_801374B4
	li       r0, 2
	stb      r0, 0x58(r26)
	b        lbl_801374BC

lbl_801374B4:
	li       r0, 0
	stb      r0, 0x58(r26)

lbl_801374BC:
	lwz      r25, 0x10(r26)
	b        lbl_8013754C

lbl_801374C4:
	lwz      r0, 0x10(r25)
	cmplwi   r0, 0
	beq      lbl_801374DC
	li       r0, 2
	stb      r0, 0x58(r25)
	b        lbl_801374E4

lbl_801374DC:
	li       r0, 0
	stb      r0, 0x58(r25)

lbl_801374E4:
	lwz      r24, 0x10(r25)
	b        lbl_80137540

lbl_801374EC:
	mr       r3, r24
	bl       getChild__8CollPartFv
	cmplwi   r3, 0
	beq      lbl_80137508
	li       r0, 2
	stb      r0, 0x58(r24)
	b        lbl_80137510

lbl_80137508:
	li       r0, 0
	stb      r0, 0x58(r24)

lbl_80137510:
	mr       r3, r24
	bl       getChild__8CollPartFv
	mr       r23, r3
	b        lbl_80137534

lbl_80137520:
	mr       r3, r23
	bl       makeTubeTree__8CollPartFv
	mr       r3, r23
	bl       getNext__8CollPartFv
	mr       r23, r3

lbl_80137534:
	cmplwi   r23, 0
	bne      lbl_80137520
	lwz      r24, 4(r24)

lbl_80137540:
	cmplwi   r24, 0
	bne      lbl_801374EC
	lwz      r25, 4(r25)

lbl_8013754C:
	cmplwi   r25, 0
	bne      lbl_801374C4
	lwz      r26, 4(r26)

lbl_80137558:
	cmplwi   r26, 0
	bne      lbl_8013749C
	lwz      r27, 4(r27)

lbl_80137564:
	cmplwi   r27, 0
	bne      lbl_80137474
	lwz      r29, 4(r29)

lbl_80137570:
	cmplwi   r29, 0
	bne      lbl_8013744C
	lwz      r30, 4(r30)

lbl_8013757C:
	cmplwi   r30, 0
	bne      lbl_80137424
	lwz      r31, 4(r31)

lbl_80137588:
	cmplwi   r31, 0
	bne      lbl_801373FC
	lwz      r28, 4(r28)

lbl_80137594:
	cmplwi   r28, 0
	bne      lbl_801373D4
	lmw      r23, 0xc(r1)
	lwz      r0, 0x34(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	801375B0
 * Size:	00022C
 */
void CollPart::calcStickLocal(Vector3f&, Vector3f&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	mr       r29, r3
	mr       r30, r4
	lbz      r0, 0x58(r3)
	mr       r31, r5
	cmpwi    r0, 0
	beq      lbl_801375F8
	blt      lbl_801377B8
	cmpwi    r0, 3
	bge      lbl_801377B8
	b        lbl_801377A0

lbl_801375F8:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_80137648
	addi     r3, r1, 0x34
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x50(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x60(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x34
	addi     r5, r1, 0x94
	bl       PSMTXConcat

lbl_80137648:
	addi     r3, r1, 0x94
	addi     r4, r1, 0x64
	bl       PSMTXInverse
	lfs      f0, 0x94(r1)
	lfs      f1, 0x98(r1)
	fmuls    f3, f0, f0
	lfs      f4, 0x9c(r1)
	fmuls    f2, f1, f1
	lfs      f0, lbl_80518210@sda21(r2)
	fmuls    f1, f4, f4
	fadds    f3, f3, f2
	fadds    f3, f3, f1
	fcmpo    cr0, f3, f0
	ble      lbl_80137690
	ble      lbl_80137694
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80137694

lbl_80137690:
	fmr      f3, f0

lbl_80137694:
	fabs     f1, f3
	lfs      f0, lbl_80518220@sda21(r2)
	frsp     f1, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801376BC
	lfs      f0, lbl_80518210@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f0, 4(r31)
	stfs     f0, 8(r31)
	b        lbl_801377B8

lbl_801376BC:
	lfs      f0, lbl_80518224@sda21(r2)
	mr       r4, r30
	addi     r3, r1, 0x64
	addi     r5, r1, 8
	fdivs    f31, f0, f3
	bl       PSMTXMultVec
	lfs      f2, 0xc(r1)
	lfs      f3, 0x10(r1)
	lfs      f0, 8(r1)
	lfs      f1, lbl_80518210@sda21(r2)
	stfs     f0, 0(r31)
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	lfs      f3, 0(r31)
	lfs      f2, 4(r31)
	lfs      f4, 8(r31)
	fmuls    f0, f3, f3
	fmuls    f2, f2, f2
	fmuls    f4, f4, f4
	fadds    f0, f0, f2
	fadds    f0, f4, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80137734
	fmadds   f0, f3, f3, f2
	fadds    f2, f4, f0
	fcmpo    cr0, f2, f1
	ble      lbl_80137738
	frsqrte  f0, f2
	fmuls    f2, f0, f2
	b        lbl_80137738

lbl_80137734:
	fmr      f2, f1

lbl_80137738:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f2, f0
	ble      lbl_80137770
	lfs      f1, lbl_80518224@sda21(r2)
	lfs      f0, 0(r31)
	fdivs    f1, f1, f2
	fmuls    f0, f0, f1
	stfs     f0, 0(r31)
	lfs      f0, 4(r31)
	fmuls    f0, f0, f1
	stfs     f0, 4(r31)
	lfs      f0, 8(r31)
	fmuls    f0, f0, f1
	stfs     f0, 8(r31)

lbl_80137770:
	lfs      f1, 0x1c(r29)
	lfs      f0, 0(r31)
	fmuls    f3, f1, f31
	lfs      f1, 4(r31)
	lfs      f2, 8(r31)
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_801377B8

lbl_801377A0:
	addi     r4, r1, 0x14
	bl       getTube__8CollPartFRQ23Sys4Tube
	mr       r4, r30
	addi     r3, r1, 0x14
	bl       "getPosRatio__Q23Sys4TubeFRC10Vector3<f>"
	stfs     f1, 4(r31)

lbl_801377B8:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	801377DC
 * Size:	000168
 */
void CollPart::calcStickGlobal(Vector3f& p1, Vector3f& p2)
{
	switch (m_hasCollPart) {
	case 0:
		Matrixf m;
		makeMatrixTo(m);
		Vec v;
		PSMTXMultVec(m.m_matrix.mtxView, (Vec*)(&p1), &v);
		p2.x = v.x;
		p2.y = v.y;
		p2.z = v.z;
		break;
	case 1:
		calcStickLocal(p2, p1);
		Sys::Tube tube;
		getTube(tube);
		p2 = tube.setPos(p1.y);
		break;
	case 2:
		calcStickLocal(p2, p1);
		Sys::Tube tube2;
		getTube(tube2);
		p2 = tube2.setPos(p1.y);
		break;
	}
	/*
	stwu     r1, -0xe0(r1)
	mflr     r0
	stw      r0, 0xe4(r1)
	stw      r31, 0xdc(r1)
	mr       r31, r5
	stw      r30, 0xd8(r1)
	mr       r30, r4
	stw      r29, 0xd4(r1)
	mr       r29, r3
	lbz      r0, 0x58(r3)
	cmpwi    r0, 1
	beq      lbl_801378A4
	bge      lbl_8013781C
	cmpwi    r0, 0
	bge      lbl_80137828
	b        lbl_80137928

lbl_8013781C:
	cmpwi    r0, 3
	bge      lbl_80137928
	b        lbl_801378E8

lbl_80137828:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_80137878
	addi     r3, r1, 0x6c
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x78(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x88(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x98(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x6c
	addi     r5, r1, 0x9c
	bl       PSMTXConcat

lbl_80137878:
	mr       r4, r30
	addi     r3, r1, 0x9c
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f1, 0xc(r1)
	lfs      f2, 0x10(r1)
	lfs      f0, 8(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_80137928

lbl_801378A4:
	mr       r4, r31
	mr       r5, r30
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
	mr       r3, r29
	addi     r4, r1, 0x4c
	bl       getTube__8CollPartFRQ23Sys4Tube
	lfs      f1, 4(r30)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x4c
	bl       setPos__Q23Sys4TubeFf
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x24(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x28(r1)
	stfs     f0, 8(r31)
	b        lbl_80137928

lbl_801378E8:
	mr       r4, r31
	mr       r5, r30
	bl       "calcStickLocal__8CollPartFR10Vector3<f>R10Vector3<f>"
	mr       r3, r29
	addi     r4, r1, 0x2c
	bl       getTube__8CollPartFRQ23Sys4Tube
	lfs      f1, 4(r30)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x2c
	bl       setPos__Q23Sys4TubeFf
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 8(r31)

lbl_80137928:
	lwz      r0, 0xe4(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xe0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137944
 * Size:	0004C8
 */
void CollPart::calcPoseMatrix(Vector3f&, Matrixf&)
{
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stw      r31, 0xec(r1)
	mr       r31, r5
	stw      r30, 0xe8(r1)
	mr       r30, r4
	stw      r29, 0xe4(r1)
	mr       r29, r3
	lbz      r0, 0x58(r3)
	cmpwi    r0, 1
	beq      lbl_80137CA0
	bge      lbl_80137984
	cmpwi    r0, 0
	bge      lbl_80137990
	b        lbl_80137DF0

lbl_80137984:
	cmpwi    r0, 3
	bge      lbl_80137DF0
	b        lbl_80137B1C

lbl_80137990:
	lwz      r0, 0x2c(r29)
	cmpwi    r0, -1
	beq      lbl_801379E0
	addi     r3, r1, 0x4c
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x58(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x68(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x78(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 0x4c
	addi     r5, r1, 0xac
	bl       PSMTXConcat

lbl_801379E0:
	lfs      f1, 0xc8(r1)
	lfs      f0, 4(r30)
	lfs      f4, 0xb8(r1)
	fsubs    f1, f1, f0
	lfs      f0, 0(r30)
	lfs      f3, 0xd8(r1)
	lfs      f2, 8(r30)
	fsubs    f0, f4, f0
	fmuls    f4, f1, f1
	fsubs    f2, f3, f2
	lfs      f3, lbl_80518210@sda21(r2)
	fmadds   f4, f0, f0, f4
	fmuls    f5, f2, f2
	fadds    f4, f5, f4
	fcmpo    cr0, f4, f3
	ble      lbl_80137A30
	ble      lbl_80137A34
	frsqrte  f3, f4
	fmuls    f4, f3, f4
	b        lbl_80137A34

lbl_80137A30:
	fmr      f4, f3

lbl_80137A34:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpo    cr0, f4, f3
	ble      lbl_80137A58
	lfs      f3, lbl_80518224@sda21(r2)
	fdivs    f3, f3, f4
	fmuls    f0, f0, f3
	fmuls    f1, f1, f3
	fmuls    f2, f2, f3
	b        lbl_80137A5C

lbl_80137A58:
	fmr      f4, f3

lbl_80137A5C:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpu    cr0, f3, f4
	bne      lbl_80137A74
	fmr      f0, f3
	lfs      f2, lbl_80518224@sda21(r2)
	fmr      f1, f3

lbl_80137A74:
	lfs      f4, lbl_80518210@sda21(r2)
	lfs      f5, lbl_80518224@sda21(r2)
	fmuls    f3, f4, f2
	fmuls    f6, f4, f1
	fmsubs   f7, f4, f0, f3
	fnmsubs  f8, f5, f0, f6
	fmsubs   f6, f5, f2, f6
	fmuls    f3, f7, f7
	fmuls    f5, f8, f8
	fmadds   f3, f6, f6, f3
	fadds    f5, f5, f3
	fcmpo    cr0, f5, f4
	ble      lbl_80137AB8
	ble      lbl_80137ABC
	frsqrte  f3, f5
	fmuls    f5, f3, f5
	b        lbl_80137ABC

lbl_80137AB8:
	fmr      f5, f4

lbl_80137ABC:
	lfs      f3, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f3
	ble      lbl_80137ADC
	lfs      f3, lbl_80518224@sda21(r2)
	fdivs    f3, f3, f5
	fmuls    f6, f6, f3
	fmuls    f7, f7, f3
	fmuls    f8, f8, f3

lbl_80137ADC:
	stfs     f6, 0(r31)
	fmuls    f5, f2, f7
	fmuls    f4, f0, f8
	stfs     f7, 0x10(r31)
	fmuls    f3, f1, f6
	fmsubs   f5, f1, f8, f5
	stfs     f8, 0x20(r31)
	fmsubs   f4, f2, f6, f4
	fmsubs   f3, f0, f7, f3
	stfs     f5, 4(r31)
	stfs     f4, 0x14(r31)
	stfs     f3, 0x24(r31)
	stfs     f0, 8(r31)
	stfs     f1, 0x18(r31)
	stfs     f2, 0x28(r31)
	b        lbl_80137DF0

lbl_80137B1C:
	lfs      f0, 0x4c(r29)
	stfs     f0, 0x88(r1)
	lfs      f0, 0x50(r29)
	stfs     f0, 0x8c(r1)
	lfs      f0, 0x54(r29)
	stfs     f0, 0x90(r1)
	lwz      r3, 0x10(r29)
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x94(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x98(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x9c(r1)
	lwz      r3, 0xc(r29)
	cmplwi   r3, 0
	beq      lbl_80137B84
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_80137B84
	lfs      f0, 0x4c(r3)
	stfs     f0, 0x7c(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0x80(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0x84(r1)
	b        lbl_80137B9C

lbl_80137B84:
	lfs      f2, 0x88(r1)
	lfs      f1, 0x8c(r1)
	lfs      f0, 0x90(r1)
	stfs     f2, 0x7c(r1)
	stfs     f1, 0x80(r1)
	stfs     f0, 0x84(r1)

lbl_80137B9C:
	lwz      r3, 0x10(r29)
	lwz      r3, 0x10(r3)
	cmplwi   r3, 0
	beq      lbl_80137BD4
	lbz      r0, 0x58(r3)
	cmplwi   r0, 2
	bne      lbl_80137BD4
	lfs      f0, 0x4c(r3)
	stfs     f0, 0xa0(r1)
	lfs      f0, 0x50(r3)
	stfs     f0, 0xa4(r1)
	lfs      f0, 0x54(r3)
	stfs     f0, 0xa8(r1)
	b        lbl_80137BEC

lbl_80137BD4:
	lfs      f2, 0x94(r1)
	lfs      f1, 0x98(r1)
	lfs      f0, 0x9c(r1)
	stfs     f2, 0xa0(r1)
	stfs     f1, 0xa4(r1)
	stfs     f0, 0xa8(r1)

lbl_80137BEC:
	lfs      f1, 4(r30)
	addi     r3, r1, 8
	addi     r4, r1, 0x7c
	bl       "CRSplineTangent__FfP10Vector3<f>"
	lfs      f4, 8(r1)
	lfs      f3, 0xc(r1)
	fmuls    f0, f4, f4
	lfs      f2, 0x10(r1)
	fmuls    f5, f3, f3
	lfs      f1, lbl_80518210@sda21(r2)
	fmuls    f6, f2, f2
	stfs     f4, 0x20(r1)
	fadds    f0, f0, f5
	stfs     f3, 0x24(r1)
	stfs     f2, 0x28(r1)
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f1
	ble      lbl_80137C50
	fmadds   f0, f4, f4, f5
	fadds    f3, f6, f0
	fcmpo    cr0, f3, f1
	ble      lbl_80137C54
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80137C54

lbl_80137C50:
	fmr      f3, f1

lbl_80137C54:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80137C8C
	lfs      f0, lbl_80518224@sda21(r2)
	lfs      f2, 0x20(r1)
	fdivs    f3, f0, f3
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	fmuls    f2, f2, f3
	fmuls    f1, f1, f3
	fmuls    f0, f0, f3
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)

lbl_80137C8C:
	lfs      f1, 0(r30)
	mr       r3, r31
	addi     r4, r1, 0x20
	bl       "makeNaturalPosture__7MatrixfFR10Vector3<f>"
	b        lbl_80137DF0

lbl_80137CA0:
	addi     r4, r1, 0x2c
	bl       getTube__8CollPartFRQ23Sys4Tube
	addi     r3, r1, 0x2c
	addi     r4, r1, 0x14
	bl       "getAxisVector__Q23Sys4TubeFR10Vector3<f>"
	lfs      f0, 0x14(r1)
	lfs      f1, 0x18(r1)
	fneg     f3, f0
	lfs      f0, 0x1c(r1)
	fneg     f2, f1
	lfs      f4, lbl_80518210@sda21(r2)
	fneg     f1, f0
	stfs     f3, 0x14(r1)
	frsp     f9, f3
	stfs     f2, 0x18(r1)
	frsp     f8, f1
	frsp     f0, f2
	stfs     f1, 0x1c(r1)
	lfs      f3, 0(r30)
	lfs      f6, 4(r30)
	lfs      f7, 8(r30)
	fmuls    f2, f3, f8
	fmuls    f1, f6, f9
	fmuls    f5, f7, f0
	fmsubs   f2, f7, f9, f2
	fmsubs   f3, f3, f0, f1
	fmsubs   f1, f6, f8, f5
	fmuls    f5, f2, f2
	fmuls    f6, f3, f3
	fmadds   f5, f1, f1, f5
	fadds    f5, f6, f5
	fcmpo    cr0, f5, f4
	ble      lbl_80137D34
	ble      lbl_80137D38
	frsqrte  f4, f5
	fmuls    f5, f4, f5
	b        lbl_80137D38

lbl_80137D34:
	fmr      f5, f4

lbl_80137D38:
	lfs      f4, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f4
	ble      lbl_80137D58
	lfs      f4, lbl_80518224@sda21(r2)
	fdivs    f4, f4, f5
	fmuls    f1, f1, f4
	fmuls    f2, f2, f4
	fmuls    f3, f3, f4

lbl_80137D58:
	fmuls    f6, f1, f8
	lfs      f4, lbl_80518210@sda21(r2)
	fmuls    f5, f2, f9
	fmuls    f7, f3, f0
	fmsubs   f9, f3, f9, f6
	fmsubs   f6, f2, f8, f7
	fmsubs   f7, f1, f0, f5
	fmuls    f0, f9, f9
	fmuls    f5, f7, f7
	fmadds   f0, f6, f6, f0
	fadds    f5, f5, f0
	fcmpo    cr0, f5, f4
	ble      lbl_80137D9C
	ble      lbl_80137DA0
	frsqrte  f0, f5
	fmuls    f5, f0, f5
	b        lbl_80137DA0

lbl_80137D9C:
	fmr      f5, f4

lbl_80137DA0:
	lfs      f0, lbl_80518210@sda21(r2)
	fcmpo    cr0, f5, f0
	ble      lbl_80137DC0
	lfs      f0, lbl_80518224@sda21(r2)
	fdivs    f0, f0, f5
	fmuls    f6, f6, f0
	fmuls    f9, f9, f0
	fmuls    f7, f7, f0

lbl_80137DC0:
	stfs     f1, 0(r31)
	stfs     f2, 0x10(r31)
	stfs     f3, 0x20(r31)
	lfs      f0, 0x14(r1)
	stfs     f0, 4(r31)
	lfs      f0, 0x18(r1)
	stfs     f0, 0x14(r31)
	lfs      f0, 0x1c(r1)
	stfs     f0, 0x24(r31)
	stfs     f6, 8(r31)
	stfs     f9, 0x18(r31)
	stfs     f7, 0x28(r31)

lbl_80137DF0:
	lwz      r0, 0xf4(r1)
	lwz      r31, 0xec(r1)
	lwz      r30, 0xe8(r1)
	lwz      r29, 0xe4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80137E0C
 * Size:	0003F0
 */
void CollPart::setScale(float scale)
{
	_1C = _18 * scale;
	if (getChild()) {
		getChild()->setScale(scale);
	}
	if (getNext()) {
		getNext()->setScale(scale);
	}
}

/*
 * --INFO--
 * Address:	801381FC
 * Size:	00007C
 */
void CollPart::getSphere(Sys::Sphere& sphere)
{
	P2ASSERTLINE(1289, isSphere());
	float radius      = _1C;
	sphere.m_position = m_position;
	sphere.m_radius   = radius;
}

/*
 * --INFO--
 * Address:	80138278
 * Size:	0000B8
 */
void CollPart::getTube(Sys::Tube& tube)
{
	// bool check = false;
	// if (isTubeLike()) {
	// 	check = true;
	// }
	// P2ASSERTLINE(1295, check != false);
	P2ASSERTLINE(1295, isTubeLike());
	CollPart* child = getChild();
#if !MATCHING
	P2ASSERT(child != nullptr);
#endif
	float v1 = _1C;
	float v2 = child->_1C;
	tube._00 = m_position;
	tube._0C = child->m_position;
	tube._18 = v1;
	tube._1C = v2;
}

/*
 * --INFO--
 * Address:	80138330
 * Size:	000004
 */
void CollPart::draw(Graphics&) { }

/*
 * __ct__13MouthCollPartFv
 * --INFO--
 * Address:	80138334
 * Size:	000134
 */
MouthCollPart::MouthCollPart()
    : CollPart()
    , _64(nullptr)
    , _6C(0)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r0, r30
	mr       r31, r0
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r5, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	lis      r3, __vt__13MouthCollPart@ha
	lis      r4, 0x5F5F5F5F@ha
	addi     r0, r3, __vt__13MouthCollPart@l
	li       r5, 0
	stw      r0, 0(r30)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r30, 0x3c
	stw      r5, 0x10(r30)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 0xc(r30)
	stw      r5, 8(r30)
	stw      r5, 4(r30)
	stfs     f0, 0x1c(r30)
	stfs     f0, 0x18(r30)
	stfs     f0, 0x20(r30)
	stfs     f0, 0x24(r30)
	stfs     f0, 0x28(r30)
	stfs     f0, 0x4c(r30)
	stfs     f0, 0x50(r30)
	stfs     f0, 0x54(r30)
	stw      r5, 0x5c(r30)
	stw      r0, 0x2c(r30)
	stw      r5, 0x60(r30)
	sth      r5, 0x48(r30)
	stb      r5, 0x58(r30)
	bl       setID__4ID32FUl
	li       r0, 0
	mr       r3, r30
	stw      r0, 0x64(r30)
	stb      r0, 0x6c(r30)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * __dt__8CollPartFv
 * --INFO--
 * Address:	80138468
 * Size:	000060
 */
// CollPart::~CollPart() { }

/*
 * getPosition__13MouthCollPartFR10Vector3<f>
 * --INFO--
 * Address:	801384C8
 * Size:	000048
 */
void MouthCollPart::getPosition(Vector3f& outPosition) { _68->getWorldMatrix()->getTranslation(outPosition); }

/*
 * --INFO--
 * Address:	80138510
 * Size:	000038
 */
void MouthCollPart::copyMatrixTo(Matrixf& outMtx) { PSMTXCopy(_68->getWorldMatrix()->m_matrix.mtxView, outMtx.m_matrix.mtxView); }

/*
 * __ct__10MouthSlotsFv
 * --INFO--
 * Address:	80138548
 * Size:	000010
 */
MouthSlots::MouthSlots()
    : m_max(0)
    , m_slots(nullptr)
{
}

/*
 * alloc__10MouthSlotsFi
 * --INFO--
 * Address:	80138558
 * Size:	000064
 */
void MouthSlots::alloc(int count)
{
	m_max   = count;
	m_slots = new MouthCollPart[count];
}

/*
 * __dt__13MouthCollPartFv
 * --INFO--
 * Address:	801385BC
 * Size:	000070
 */
// MouthCollPart::~MouthCollPart() { }

/*
 * update__10MouthSlotsFv
 * --INFO--
 * Address:	8013862C
 * Size:	000064
 */
void MouthSlots::update()
{
	for (int i = 0; i < m_max; i++) {
		m_slots[i].update();
	}
}

/*
 * setup__10MouthSlotsFiPQ28SysShape5ModelPc
 * --INFO--
 * Address:	80138690
 * Size:	0000E8
 */
void MouthSlots::setup(int slotIndex, SysShape::Model* model, char* jointName)
{

	P2ASSERTBOUNDSLINE(1485, 0, slotIndex, m_max);
	m_slots[slotIndex].m_model      = model;
	m_slots[slotIndex]._68          = model->getJoint(jointName);
	m_slots[slotIndex]._20          = Vector3f::zero;
	m_slots[slotIndex].m_jointIndex = m_slots[slotIndex]._68->m_j3d->m_jointIdx;
	m_slots[slotIndex]._1C          = 0.0f;
	m_slots[slotIndex]._64          = nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	li       r3, 0
	blt      lbl_801386D4
	lwz      r0, 0(r28)
	cmpw     r29, r0
	bge      lbl_801386D4
	li       r3, 1

lbl_801386D4:
	clrlwi.  r0, r3, 0x18
	bne      lbl_801386F8
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C5CC@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x5cd
	addi     r5, r5, lbl_8047C5CC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_801386F8:
	mulli    r0, r29, 0x70
	lwz      r3, 4(r28)
	mr       r4, r31
	add      r31, r3, r0
	stw      r30, 0x5c(r31)
	lwz      r3, 0x5c(r31)
	bl       getJoint__Q28SysShape5ModelFPc
	lis      r4, "zero__10Vector3<f>"@ha
	stw      r3, 0x68(r31)
	addi     r3, r4, "zero__10Vector3<f>"@l
	lfs      f0, lbl_80518210@sda21(r2)
	lfs      f1, 0(r3)
	li       r0, 0
	stfs     f1, 0x20(r31)
	lfs      f1, 4(r3)
	stfs     f1, 0x24(r31)
	lfs      f1, 8(r3)
	stfs     f1, 0x28(r31)
	lwz      r3, 0x68(r31)
	lwz      r3, 0x18(r3)
	lhz      r3, 0x14(r3)
	stw      r3, 0x2c(r31)
	stfs     f0, 0x1c(r31)
	stw      r0, 0x64(r31)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138778
 * Size:	00007C
 */
MouthCollPart* MouthSlots::getSlot(int slotIndex)
{
	P2ASSERTBOUNDSLINE(1491, 0, slotIndex, m_max);
	return &m_slots[slotIndex];
}

/*
 * __ct__15CollPartFactoryFR6Stream
 * @generatedAndInlined
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
// CollPartFactory::CollPartFactory(Stream&)
// {
// 	// UNUSED FUNCTION
// }

/*
 * load__15CollPartFactoryFPc
 * --INFO--
 * Address:	801387F4
 * Size:	000150
 */
CollPartFactory* CollPartFactory::load(char* path)
{
	void* data = JKRDvdRipper::loadToMainRAM(path, nullptr, Switch_0, 0, JKRHeap::sSystemHeap, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0, nullptr,
	                                         nullptr);
	CollPartFactory* factory;
	if (data == nullptr) {
		factory = nullptr;
	} else {
		RamStream input(data, -1);
		input.m_mode = STREAM_MODE_TEXT;
		if (input.m_mode == STREAM_MODE_TEXT) {
			input.m_tabCount = 0;
		}
		factory = new CollPartFactory(input);
		delete[] data;
	}
	return factory;
	/*
	stwu     r1, -0x440(r1)
	mflr     r0
	li       r4, 0
	li       r5, 0
	stw      r0, 0x444(r1)
	li       r0, 0
	li       r6, 0
	li       r8, 2
	stw      r31, 0x43c(r1)
	li       r9, 0
	li       r10, 0
	stw      r30, 0x438(r1)
	stw      r29, 0x434(r1)
	stw      r0, 8(r1)
	lwz      r7, sSystemHeap__7JKRHeap@sda21(r13)
	bl
loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
	or.      r30, r3, r3
	bne      lbl_80138844
	li       r3, 0
	b        lbl_80138928

lbl_80138844:
	mr       r4, r30
	addi     r3, r1, 0x10
	li       r5, -1
	bl       __ct__9RamStreamFPvi
	li       r0, 1
	cmpwi    r0, 1
	stw      r0, 0x1c(r1)
	bne      lbl_8013886C
	li       r0, 0
	stw      r0, 0x424(r1)

lbl_8013886C:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_8013891C
	mr       r29, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r31, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r31)
	bl       __ct__4ID32Fv
	addi     r3, r31, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r5, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	lis      r4, __vt__15CollPartFactory@ha
	mr       r3, r29
	addi     r0, r4, __vt__15CollPartFactory@l
	addi     r4, r1, 0x10
	stw      r0, 0(r29)
	li       r5, 0
	bl       read__8CollPartFR6Streamb

lbl_8013891C:
	mr       r3, r30
	bl       __dla__FPv
	mr       r3, r31

lbl_80138928:
	lwz      r0, 0x444(r1)
	lwz      r31, 0x43c(r1)
	lwz      r30, 0x438(r1)
	lwz      r29, 0x434(r1)
	mtlr     r0
	addi     r1, r1, 0x440
	blr
	*/
}

/*
 * load__15CollPartFactoryFP13JKRFileLoaderPc
 * --INFO--
 * Address:	80138944
 * Size:	000128
 */
CollPartFactory* CollPartFactory::load(JKRFileLoader* loader, char* path)
{
	void* data = loader->getResource(path);
	CollPartFactory* factory;
	if (data == nullptr) {
		factory = nullptr;
	} else {
		RamStream input(data, -1);
		input.m_mode = STREAM_MODE_TEXT;
		if (input.m_mode == STREAM_MODE_TEXT) {
			input.m_tabCount = 0;
		}
		factory = new CollPartFactory(input);
	}
	return factory;
}

/*
 * --INFO--
 * Address:	80138A6C
 * Size:	000020
 */
void CollPartFactory::createInstance(SysShape::MtxObject* mtxObject, CollPartMgr* mgr) { clone(mtxObject, mgr); }

/*
 * --INFO--
 * Address:	80138A8C
 * Size:	0000AC
 */
CollPart* CollPartMgr::createOne(SysShape::MtxObject*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80138B1C
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r30, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl

lbl_80138B1C:
	lwz      r0, 0x14(r1)
	mr       r3, r31
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
 * --INFO--
 * Address:	80138B38
 * Size:	0002A8
 */
CollPart* CollPart::clone(SysShape::MtxObject* mtxObject, CollPartMgr* mgr)
{
	CollPart* copy;
	if (mgr != nullptr) {
		copy = mgr->birth();
		JUT_ASSERTLINE(1571, copy != nullptr, "collpart birth failed !\n");
	} else {
		copy = new CollPart(mtxObject);
	}
	copy->_1C           = _1C;
	copy->_18           = _18;
	copy->_30           = _30;
	copy->_3C           = _3C;
	copy->_20           = _20;
	copy->m_hasCollPart = m_hasCollPart;
	copy->m_jointIndex  = m_jointIndex;
	copy->m_model       = m_model;
	copy->_60           = _60;
	copy->m_attribute   = m_attribute;
	copy->m_model       = mtxObject;
	int childCount      = getChildCount();
	CollPart* child     = getChild();
	for (int i = 0; i < childCount; i++) {
		copy->addChild(child->clone(mtxObject, mgr));
		child = child->getChild();
	}
	return copy;

	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	or.      r30, r5, r5
	mr       r28, r3
	mr       r29, r4
	beq      lbl_80138C5C
	mr       r3, r30
	lwz      r12, 0(r30)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_80138BD4
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r29, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl

lbl_80138BD4:
	cmplwi   r31, 0
	bne      lbl_80138BF8
	lis      r3, lbl_8047C5A0@ha
	lis      r5, lbl_8047C614@ha
	addi     r3, r3, lbl_8047C5A0@l
	li       r4, 0x623
	addi     r5, r5, lbl_8047C614@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80138BF8:
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r31)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r31, 0x3c
	stw      r5, 0xc(r31)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r31)
	stw      r5, 4(r31)
	stfs     f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	stfs     f0, 0x20(r31)
	stfs     f0, 0x24(r31)
	stfs     f0, 0x28(r31)
	stfs     f0, 0x4c(r31)
	stfs     f0, 0x50(r31)
	stfs     f0, 0x54(r31)
	stw      r29, 0x5c(r31)
	stw      r0, 0x2c(r31)
	stw      r5, 0x60(r31)
	sth      r5, 0x48(r31)
	stb      r5, 0x58(r31)
	bl       setID__4ID32FUl
	b        lbl_80138CF0

lbl_80138C5C:
	li       r3, 0x64
	bl       __nw__FUl
	or.      r31, r3, r3
	beq      lbl_80138CF0
	mr       r26, r31
	bl       __ct__5CNodeFv
	lis      r4, __vt__8CollPart@ha
	addi     r3, r26, 0x30
	addi     r0, r4, __vt__8CollPart@l
	stw      r0, 0(r26)
	bl       __ct__4ID32Fv
	addi     r3, r26, 0x3c
	bl       __ct__4ID32Fv
	li       r5, 0
	lis      r4, 0x5F5F5F5F@ha
	stw      r5, 0x10(r26)
	li       r0, -1
	lfs      f0, lbl_80518210@sda21(r2)
	addi     r3, r26, 0x3c
	stw      r5, 0xc(r26)
	addi     r4, r4, 0x5F5F5F5F@l
	stw      r5, 8(r26)
	stw      r5, 4(r26)
	stfs     f0, 0x1c(r26)
	stfs     f0, 0x18(r26)
	stfs     f0, 0x20(r26)
	stfs     f0, 0x24(r26)
	stfs     f0, 0x28(r26)
	stfs     f0, 0x4c(r26)
	stfs     f0, 0x50(r26)
	stfs     f0, 0x54(r26)
	stw      r29, 0x5c(r26)
	stw      r0, 0x2c(r26)
	stw      r5, 0x60(r26)
	sth      r5, 0x48(r26)
	stb      r5, 0x58(r26)
	bl       setID__4ID32FUl

lbl_80138CF0:
	lfs      f0, 0x1c(r28)
	addi     r3, r31, 0x30
	addi     r4, r28, 0x30
	li       r5, 5
	stfs     f0, 0x1c(r31)
	lfs      f0, 0x1c(r31)
	stfs     f0, 0x18(r31)
	bl       __copy
	lwz      r0, 0x38(r28)
	addi     r3, r31, 0x3c
	addi     r4, r28, 0x3c
	li       r5, 5
	stw      r0, 0x38(r31)
	bl       __copy
	lwz      r0, 0x44(r28)
	mr       r3, r28
	stw      r0, 0x44(r31)
	lfs      f0, 0x20(r28)
	stfs     f0, 0x20(r31)
	lfs      f0, 0x24(r28)
	stfs     f0, 0x24(r31)
	lfs      f0, 0x28(r28)
	stfs     f0, 0x28(r31)
	lbz      r0, 0x58(r28)
	stb      r0, 0x58(r31)
	lwz      r0, 0x2c(r28)
	stw      r0, 0x2c(r31)
	lwz      r0, 0x5c(r28)
	stw      r0, 0x5c(r31)
	lwz      r0, 0x60(r28)
	stw      r0, 0x60(r31)
	lhz      r0, 0x48(r28)
	sth      r0, 0x48(r31)
	stw      r29, 0x5c(r31)
	lwz      r12, 0(r28)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r27, 0x10(r28)
	mr       r28, r3
	li       r26, 0
	b        lbl_80138DC0

lbl_80138D98:
	mr       r3, r27
	mr       r4, r29
	mr       r5, r30
	bl       clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
	mr       r0, r3
	mr       r3, r31
	mr       r4, r0
	bl       add__5CNodeFP5CNode
	lwz      r27, 4(r27)
	addi     r26, r26, 1

lbl_80138DC0:
	cmpw     r26, r28
	blt      lbl_80138D98
	mr       r3, r31
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80138DE0
 * Size:	000020
 */
// WEAK
int CollPart::getChildCount()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	bl       getChildCount__5CNodeFv
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * read__8CollPartFR6Streamb
 * --INFO--
 * Address:	80138E00
 * Size:	00035C
 */
void CollPart::read(Stream& input, bool isAgeCollPart)
{
	int childCount = input.readInt();
	_1C            = input.readFloat();
	_18            = _1C;
	_30.read(input);
	_3C.read(input);
	_20.read(input);
	m_jointIndex = input.readInt();
	m_attribute  = input.readU16();
	for (int i = 0; i < childCount; i++) {
		CollPart* child;
		if (isAgeCollPart) {
			child = new AgeCollPart((SysShape::Model*)m_model);
		} else {
			child = new CollPart(m_model);
		}
		child->read(input, isAgeCollPart);
		child->setName("CollPart");
		addChild(child);
	}
}

/*
 * @generated
 * addChild__8CollPartFP8CollPart
 * --INFO--
 * Address:	8013915C
 * Size:	000020
 */
// void CollPart::addChild(CollPart*)
// {
// }

/*
 * @generated
 * setName__5CNodeFPc
 * --INFO--
 * Address:	8013917C
 * Size:	000008
 */
// void CNode::setName(char* name)
// {
// }

/*
 * @generated
 * --INFO--
 * Address:	80139184
 * Size:	000024
 */
// u16 Stream::readU16()
// {
// }

/*
 * --INFO--
 * Address:	801391A8
 * Size:	00010C
 */
void AgeCollPart::draw(Graphics&)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stw      r31, 0x7c(r1)
	stw      r30, 0x78(r1)
	stw      r29, 0x74(r1)
	mr       r29, r3
	mr       r30, r4
	lwz      r4, 0x2c(r3)
	cmpwi    r4, -1
	beq      lbl_80139290
	lwz      r3, 0x5c(r29)
	mulli    r0, r4, 0x3c
	lwz      r3, 0x10(r3)
	add.     r31, r3, r0
	beq      lbl_80139290
	cmpwi    r4, -1
	beq      lbl_8013923C
	addi     r3, r1, 8
	bl       PSMTXIdentity
	lfs      f0, 0x20(r29)
	stfs     f0, 0x14(r1)
	lfs      f0, 0x24(r29)
	stfs     f0, 0x24(r1)
	lfs      f0, 0x28(r29)
	stfs     f0, 0x34(r1)
	lwz      r3, 0x5c(r29)
	lwz      r4, 0x2c(r29)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	addi     r4, r1, 8
	addi     r5, r1, 0x38
	bl       PSMTXConcat

lbl_8013923C:
	lbz      r0, 0x64(r29)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80139290
	lwz      r3, 0x18(r31)
	lfs      f0, lbl_8051822C@sda21(r2)
	lfs      f1, 0x38(r3)
	fmr      f31, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80139278
	lwz      r3, 0x5c(r29)
	lfs      f1, lbl_80518228@sda21(r2)
	lwz      r3, 0x10(r3)
	lwz      r3, 0x18(r3)
	lfs      f0, 0x38(r3)
	fmuls    f31, f1, f0

lbl_80139278:
	mr       r3, r31
	bl       getWorldMatrix__Q28SysShape5JointFv
	fmr      f1, f31
	mr       r4, r3
	mr       r3, r30
	bl       drawAxis__8GraphicsFfP7Matrixf

lbl_80139290:
	psq_l    f31, 136(r1), 0, qr0
	lwz      r0, 0x94(r1)
	lfd      f31, 0x80(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	lwz      r29, 0x74(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * __ct__11AgeCollPartFPQ28SysShape5Model
 * --INFO--
 * Address:	801392B4
 * Size:	0000CC
 */
AgeCollPart::AgeCollPart(SysShape::Model* model)
    : CollPart(model)
    , _64(0)
{
}

/*
 * --INFO--
 * Address:	80139380
 * Size:	000070
 */
AgeCollPart::~AgeCollPart()
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_801393D4
	lis      r4, __vt__11AgeCollPart@ha
	addi     r0, r4, __vt__11AgeCollPart@l
	stw      r0, 0(r30)
	beq      lbl_801393C4
	lis      r5, __vt__8CollPart@ha
	li       r4, 0
	addi     r0, r5, __vt__8CollPart@l
	stw      r0, 0(r30)
	bl       __dt__5CNodeFv

lbl_801393C4:
	extsh.   r0, r31
	ble      lbl_801393D4
	mr       r3, r30
	bl       __dl__FPv

lbl_801393D4:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801393F0
 * Size:	000008
 */
// bool CollPart::isMouth() { return false; }

/*
 * --INFO--
 * Address:	801393F8
 * Size:	000004
 */
// void CollPart::constructor() { }

/*
 * --INFO--
 * Address:	801393FC
 * Size:	000004
 */
// void CollPart::doAnimation() { }

/*
 * --INFO--
 * Address:	80139400
 * Size:	000004
 */
// void CollPart::doEntry() { }

/*
 * --INFO--
 * Address:	80139404
 * Size:	000004
 */
// void CollPart::doSetView(unsigned long) { }

/*
 * --INFO--
 * Address:	80139408
 * Size:	000004
 */
// void CollPart::doViewCalc() { }

/*
 * --INFO--
 * Address:	8013940C
 * Size:	000004
 */
// void CollPart::doSimulation(float) { }

/*
 * --INFO--
 * Address:	80139410
 * Size:	000004
 */
// void CollPart::doDirectDraw(Graphics&) { }

/*
 * __dt__15CollPartFactoryFv
 * --INFO--
 * Address:	80139414
 * Size:	000070
 */
// CollPartFactory::~CollPartFactory() { }

/*
 * --INFO--
 * Address:	80139484
 * Size:	000008
 */
// bool MouthCollPart::isMouth() { return true; }

namespace Sys {

/*
 * __dt__Q23Sys3OBBFv
 * @generated
 * --INFO--
 * Address:	8013948C
 * Size:	0000D4
 */
// OBB::~OBB()
// {
// }

} // namespace Sys

/*
 * __dt__12Container<i>Fv
 * --INFO--
 * Address:	80139560
 * Size:	000070
 */
// template <> Container<int>::~Container()
// {
// }

/*
 * __dt__17ArrayContainer<i>Fv
 * --INFO--
 * Address:	801395D0
 * Size:	000080
 */
// template <> ArrayContainer<int>::~ArrayContainer()
// {
// }

/*
 * alloc__17ArrayContainer<i>Fi
 * --INFO--
 * Address:	80139650
 * Size:	00004C
 */
// template <> void ArrayContainer<int>::alloc(int)
// {
// }

/*
 * read__17ArrayContainer<i>FR6Stream
 * --INFO--
 * Address:	8013969C
 * Size:	0000B0
 */
// template <> void ArrayContainer<int>::read(Stream&)
// {
// }

/*
 * readObject__17ArrayContainer<i>FR6StreamRi
 * --INFO--
 * Address:	8013974C
 * Size:	000004
 */
// template <> void ArrayContainer<int>::readObject(Stream&, int&) { }

namespace Sys {

/*
 * readObject__Q23Sys9IndexListFR6StreamRi
 * --INFO--
 * Address:	80139750
 * Size:	000034
 */
void IndexList::readObject(Stream&, int&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	bl       readInt__6StreamFv
	stw      r3, 0(r31)
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * writeObject__Q23Sys9IndexListFR6StreamRi
 * --INFO--
 * Address:	80139784
 * Size:	000028
 */
void IndexList::writeObject(Stream&, int&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r4, 0(r5)
	bl       writeInt__6StreamFi
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * __dt__Q23Sys9IndexListFv
 * @generated
 * --INFO--
 * Address:	801397AC
 * Size:	000090
 */
// IndexList::~IndexList()
// {
// }

} // namespace Sys

/*
 * __dt__11AgePlatformFv
 * --INFO--
 * Address:	........
 * Size:	000180
 */
// AgePlatform::~AgePlatform()
// {
// 	// UNUSED FUNCTION
// }

/*
 * setArray__28ArrayContainer<10Vector3<f>>FP10Vector3<f>i
 * --INFO--
 * Address:	8013983C
 * Size:	000010
 */
// template <> void ArrayContainer<Vector3f>::setArray(Vector3f*, int)
// {
// }

/*
 * addOne__28ArrayContainer<10Vector3<f>>FR10Vector3<f>
 * --INFO--
 * Address:	8013984C
 * Size:	000040
 */
// template <> void ArrayContainer<Vector3f>::addOne(Vector3f&)
// {
// 	/*
// 	lwz      r7, 0x1c(r3)
// 	lwz      r0, 0x20(r3)
// 	cmpw     r7, r0
// 	bgelr
// 	lwz      r6, 0x24(r3)
// 	addi     r5, r7, 1
// 	mulli    r0, r7, 0xc
// 	stw      r5, 0x1c(r3)
// 	lfs      f0, 0(r4)
// 	add      r3, r6, r0
// 	stfs     f0, 0(r3)
// 	lfs      f0, 4(r4)
// 	stfs     f0, 4(r3)
// 	lfs      f0, 8(r4)
// 	stfs     f0, 8(r3)
// 	blr
// 	*/
// }

/*
 * birth__24MonoObjectMgr<8CollPart>Fv
 * --INFO--
 * Address:	8013988C
 * Size:	000060
 */
// template <> void MonoObjectMgr<CollPart>::birth()
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r3
// 	bl       "getEmptyIndex__24MonoObjectMgr<8CollPart>Fv"
// 	cmpwi    r3, -1
// 	beq      lbl_801398D4
// 	lwz      r6, 0x28(r31)
// 	li       r0, 0
// 	lwz      r4, 0x2c(r31)
// 	mulli    r5, r3, 0x64
// 	stbx     r0, r4, r3
// 	add      r3, r6, r5
// 	lwz      r4, 0x20(r31)
// 	addi     r0, r4, 1
// 	stw      r0, 0x20(r31)
// 	b        lbl_801398D8

// lbl_801398D4:
// 	li       r3, 0

// lbl_801398D8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

/*
 * kill__24MonoObjectMgr<8CollPart>FP8CollPart
 * --INFO--
 * Address:	801398EC
 * Size:	000054
 */
// template <> void MonoObjectMgr<CollPart>::kill(CollPart*)
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r6, 0
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	blelr

// lbl_80139904:
// 	lwz      r0, 0x28(r3)
// 	add      r0, r0, r5
// 	cmplw    r0, r4
// 	bne      lbl_80139930
// 	lwz      r4, 0x2c(r3)
// 	li       r0, 1
// 	stbx     r0, r4, r6
// 	lwz      r4, 0x20(r3)
// 	addi     r0, r4, -1
// 	stw      r0, 0x20(r3)
// 	blr

// lbl_80139930:
// 	addi     r5, r5, 0x64
// 	addi     r6, r6, 1
// 	bdnz     lbl_80139904
// 	blr
// 	*/
// }

/*
 * getEmptyIndex__24MonoObjectMgr<8CollPart>Fv
 * --INFO--
 * Address:	80139940
 * Size:	00003C
 */
// template <> void MonoObjectMgr<CollPart>::getEmptyIndex()
// {
// 	/*
// 	lwz      r0, 0x24(r3)
// 	li       r5, 0
// 	mtctr    r0
// 	cmpwi    r0, 0
// 	ble      lbl_80139974

// lbl_80139954:
// 	lwz      r4, 0x2c(r3)
// 	lbzx     r0, r4, r5
// 	cmplwi   r0, 1
// 	bne      lbl_8013996C
// 	mr       r3, r5
// 	blr

// lbl_8013996C:
// 	addi     r5, r5, 1
// 	bdnz     lbl_80139954

// lbl_80139974:
// 	li       r3, -1
// 	blr
// 	*/
// }

/*
 * writeObject__28ArrayContainer<10Vector3<f>>FR6StreamR10Vector3<f>
 * --INFO--
 * Address:	8013997C
 * Size:	000004
 */
// template <> void ArrayContainer<Vector3f>::writeObject(Stream&, Vector3f&) { }

/*
 * write__28ArrayContainer<10Vector3<f>>FR6Stream
 * --INFO--
 * Address:	80139980
 * Size:	0000D4
 */
// template <> void ArrayContainer<Vector3f>::write(Stream&)
// {
// }

/*
 * get__28ArrayContainer<10Vector3<f>>FPv
 * --INFO--
 * Address:	80139A54
 * Size:	000010
 */
// template <> void ArrayContainer<Vector3f>::get(void*)
// {
// }

/*
 * getNext__28ArrayContainer<10Vector3<f>>FPv
 * --INFO--
 * Address:	80139A64
 * Size:	000008
 */
// template <> void ArrayContainer<Vector3f>::getNext(void*)
// {
// }

/*
 * getStart__28ArrayContainer<10Vector3<f>>Fv
 * --INFO--
 * Address:	80139A6C
 * Size:	000008
 */
// template <> u32 ArrayContainer<Vector3f>::getStart() { return 0x0; }

/*
 * getEnd__28ArrayContainer<10Vector3<f>>Fv
 * --INFO--
 * Address:	80139A74
 * Size:	000008
 */
// template <> void ArrayContainer<Vector3f>::getEnd()
// {
// }

/*
 * getAt__28ArrayContainer<10Vector3<f>>Fi
 * --INFO--
 * Address:	80139A7C
 * Size:	000010
 */
// void ArrayContainer<Vector3f>::getAt(int)
// {
// }

/*
 * getTo__28ArrayContainer<10Vector3<f>>Fv
 * --INFO--
 * Address:	80139A8C
 * Size:	000008
 */
// void ArrayContainer<Vector3f>::getTo()
// {
// }

/*
 * writeObject__17ArrayContainer<i>FR6StreamRi
 * --INFO--
 * Address:	80139A94
 * Size:	000004
 */
// void ArrayContainer<int>::writeObject(Stream&, int&) { }

/*
 * write__17ArrayContainer<i>FR6Stream
 * --INFO--
 * Address:	80139A98
 * Size:	0000D4
 */
// void ArrayContainer<int>::write(Stream&)
// {
// }

/*
 * addOne__17ArrayContainer<i>FRi
 * --INFO--
 * Address:	80139B6C
 * Size:	00002C
 */
// void ArrayContainer<int>::addOne(int&)
// {
// 	/*
// 	lwz      r7, 0x1c(r3)
// 	lwz      r0, 0x20(r3)
// 	cmpw     r7, r0
// 	bgelr
// 	lwz      r6, 0(r4)
// 	addi     r4, r7, 1
// 	lwz      r5, 0x24(r3)
// 	slwi     r0, r7, 2
// 	stw      r4, 0x1c(r3)
// 	stwx     r6, r5, r0
// 	blr
// 	*/
// }

/*
 * setArray__17ArrayContainer<i>FPii
 * --INFO--
 * Address:	80139B98
 * Size:	000010
 */
// void ArrayContainer<int>::setArray(int*, int)
// {
// }

/*
 * get__17ArrayContainer<i>FPv
 * --INFO--
 * Address:	80139BA8
 * Size:	000010
 */
// void ArrayContainer<int>::get(void*)
// {
// }

/*
 * getNext__17ArrayContainer<i>FPv
 * --INFO--
 * Address:	80139BB8
 * Size:	000008
 */
// void ArrayContainer<int>::getNext(void*)
// {
// }

/*
 * getStart__17ArrayContainer<i>Fv
 * --INFO--
 * Address:	80139BC0
 * Size:	000008
 */
// u32 ArrayContainer<int>::getStart() { return 0x0; }

/*
 * getEnd__17ArrayContainer<i>Fv
 * --INFO--
 * Address:	80139BC8
 * Size:	000008
 */
// void ArrayContainer<int>::getEnd()
// {
// }

/*
 * getAt__17ArrayContainer<i>Fi
 * --INFO--
 * Address:	80139BD0
 * Size:	000010
 */
// void ArrayContainer<int>::getAt(int)
// {
// }

/*
 * getTo__17ArrayContainer<i>Fv
 * --INFO--
 * Address:	80139BE0
 * Size:	000008
 */
// void ArrayContainer<int>::getTo()
// {
// }

/*
 * getObject__23Container<10Vector3<f>>FPv
 * --INFO--
 * Address:	80139BE8
 * Size:	00002C
 */
// void Container<Vector3f>::getObject(void*)
// {
// }

/*
 * getAt__23Container<10Vector3<f>>Fi
 * --INFO--
 * Address:	80139C14
 * Size:	000008
 */
// u32 Container<Vector3f>::getAt(int) { return 0x0; }

/*
 * getTo__23Container<10Vector3<f>>Fv
 * --INFO--
 * Address:	80139C1C
 * Size:	000008
 */
// u32 Container<Vector3f>::getTo() { return 0x0; }

/*
 * getObject__12Container<i>FPv
 * --INFO--
 * Address:	80139C24
 * Size:	00002C
 */
// void Container<int>::getObject(void*)
// {
// }

/*
 * getAt__12Container<i>Fi
 * --INFO--
 * Address:	80139C50
 * Size:	000008
 */
// u32 Container<int>::getAt(int) { return 0x0; }

/*
 * getTo__12Container<i>Fv
 * --INFO--
 * Address:	80139C58
 * Size:	000008
 */
// u32 Container<int>::getTo() { return 0x0; }
