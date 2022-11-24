#include "CNode.h"
#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Dolphin/stl.h"
#include "Dolphin/rand.h"
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
	if (factory) {
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
	if (mgr) {
		m_part = mgr->createOne(mtxObject);
		JUT_ASSERTLINE(446, m_part != nullptr, "collpart birth failed : single sphere\n");
	} else {
		m_part = new CollPart(mtxObject);
	}
	m_part->m_radius     = sphere.m_radius;
	m_part->m_baseRadius = sphere.m_radius;
	m_part->m_offset     = 0.0f;
	m_part->m_jointIndex = jointIndex;
	m_part->m_attribute  = 0;
	m_part->m_currentID.setID('root');
}

/*
 * --INFO--
 * Address:	801341B4
 * Size:	000044
 */
void CollTree::release()
{
	if (m_mgr) {
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

	if (child) {
		releaseRec(child);
	}

	m_mgr->kill(part);

	if (next) {
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
		if (p1->getNext()) {
			return checkCollisionRec(p1->getNext(), p2, p3, p4, p5);
		}
		if (p2->getNext()) {
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
	if (m_part) {
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
			Sys::Sphere partSphere(m_position, m_radius);
			if (partSphere.intersect(sphere)) {
				delegate->invoke(this);
			}
		} else if (isTube() || isTubeTree()) {
			Sys::Tube collTube(m_position, getChild()->m_position, m_radius, getChild()->m_radius);
			Vector3f colVec;
			float colSep;
			if (collTube.collide(sphere, colVec, colSep)) {
				delegate->invoke(this);
			}
		}
	}
	if (getChild()) {
		getChild()->checkCollision(sphere, delegate);
	}
	if (getNext()) {
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

/**
 * @param other The other part participating in this collision.
 * @param outVector The center of the collision between the two parts.
 * --INFO--
 * Address:	801358EC
 * Size:	0001B0
 */
bool CollPart::collide(CollPart* other, Vector3f& outVector)
{
	if (isSphere() && other->isSphere()) {
		Sys::Sphere thisSphere(m_position, m_radius);
		Sys::Sphere otherSphere(other->m_position, other->m_radius);
		return thisSphere.intersect(otherSphere, outVector);
	} else if (isSphere() && (other->isTube() || other->isTubeTree())) {
		Sys::Sphere thisSphere(m_position, m_radius);
		Sys::Tube otherTube(other->m_position, other->getChild()->m_position, other->m_radius, other->getChild()->m_radius);
		float collVal;
		return otherTube.collide(thisSphere, outVector, collVal);
	} else if ((isTube() || isTubeTree()) && other->isSphere()) {
		Sys::Tube thisTube(m_position, getChild()->m_position, m_radius, getChild()->m_radius);
		Sys::Sphere otherSphere(other->m_position, other->m_radius);
		float collVal;
		return thisTube.collide(otherSphere, outVector, collVal);
	}
	return false;
}

/*
 * update__8CollTreeFv
 * --INFO--
 * Address:	80135A9C
 * Size:	00002C
 */
void CollTree::update()
{
	if (m_part) {
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
	if (m_part) {
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
CollPart* CollTree::getCollPart(u32 partID) { return (m_part != nullptr) ? m_part->getCollPart(partID) : nullptr; }

/*
 * getCollPart__8CollPartFUl
 * --INFO--
 * Address:	80135E78
 * Size:	000640
 */
CollPart* CollPart::getCollPart(u32 partID)
{
	if (m_currentID == partID) {
		return this;
	}
	if (getNext()) {
		CollPart* result = getNext()->getCollPart(partID);
		if (result) {
			return result;
		}
	}
	if (getChild()) {
		CollPart* result = getChild()->getCollPart(partID);
		if (result) {
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
int CollPart::getAllCollPartToArray(CollPart** partArray, int limit, int& count)
{
	int index = count;
	if (!(index < limit)) {
		return count;
	} else {
		count++;
		partArray[index] = this;
		if (m_next) {
			CollPart* nextPart = getNext();
			int nextIndex      = count;
			if (nextIndex < limit) {
				count++;
				partArray[nextIndex] = nextPart;
				if (nextPart->getNext()) {
					nextPart->getNext()->getAllCollPartToArray(partArray, limit, count);
				}
				if (nextPart->getChild()) {
					nextPart->getChild()->getAllCollPartToArray(partArray, limit, count);
				}
			}
		}
		if (m_child) {
			CollPart* childPart = getChild();
			int childIndex      = count;
			if (childIndex < limit) {
				count++;
				partArray[childIndex] = childPart;
				if (childPart->getNext()) {
					childPart->getNext()->getAllCollPartToArray(partArray, limit, count);
				}
				if (childPart->getChild()) {
					childPart->getChild()->getAllCollPartToArray(partArray, limit, count);
				}
			}
		}
	}
	return count;
}

/*
 * --INFO--
 * Address:	80136A04
 * Size:	000118
 */
// WIP: https://decomp.me/scratch/BSzdU - just regswaps in the dist calculation
CollPart* CollTree::findCollPart(FindCollPartArg& findArg)
{
	if (m_part) {
		CollPart* partArray[256];
		int count    = 0;
		int numParts = m_part->getAllCollPartToArray(partArray, 256, count);

		float minDist       = 128000.0f;
		CollPart* foundPart = nullptr;
		for (int i = 0; i < numParts; i++) {
			CollPart* currPart = partArray[i];
			if (((findArg.m_condition == nullptr) || findArg.m_condition->satisfy(currPart)) && currPart->isSphere()) {
				float sqRad = SQUARE(currPart->m_radius);
				Vector3f sep(findArg.m_position - currPart->m_position);
				float dist = (SQUARE(sep.x) + SQUARE(sep.y) + SQUARE(sep.z)) - sqRad;
				if (dist < minDist) {
					foundPart = currPart;
					minDist   = dist;
				}
			}
		}

		return foundPart;
	}
	return nullptr;
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
	if (m_part) {
		CollPart* partArray[16];
		int count    = 0;
		int numParts = m_part->getAllCollPartToArray(partArray, 16, count);

		int randIndex = (int)((float)numParts * randFloat());
		if (partArray[randIndex] == nullptr) {
			JUT_PANICLINE(886, "num=%d : random=%d\n", numParts, randIndex);
		}
		if (randIndex >= 16) {
			JUT_PANICLINE(889, "num=%d : random=%d\n", numParts, randIndex);
		}
		return partArray[randIndex];
	}
	return nullptr;
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
	sphere.m_radius   = m_part->m_radius;
}

/*
 * __ct__8CollPartFPQ28SysShape9MtxObject
 * --INFO--
 * Address:	80136C74
 * Size:	000064
 */
CollPart::CollPart(SysShape::MtxObject* mtxObject) { init(mtxObject); }

/*
 * __ct__8CollPartFv
 * --INFO--
 * Address:	80136CD8
 * Size:	000058
 */
CollPart::CollPart() { init(nullptr); }

/*
 * --INFO--
 * Address:	80136D30
 * Size:	000080
 */
void CollPart::init(SysShape::MtxObject* mtxObject)
{
	clearRelations();
	m_radius     = 0.0f;
	m_baseRadius = 0.0f;
	m_offset     = 0.0f;
	m_position   = Vector3f(0.0f);
	m_model      = mtxObject;
	m_jointIndex = -1;
	_60          = 0;
	m_attribute  = 0;
	m_partType   = COLLTYPE_SPHERE;
	m_specialID.setID('____');
}

/*
 * --INFO--
 * Address:	80136DB0
 * Size:	000030
 */
bool CollPart::isStickable() { return m_specialID.match('s***', '*'); }

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
 * Address:	80137318
 * Size:	000084
 */
void CollPart::makeMatrixTo(Matrixf& p1)
{
	if ((int)m_jointIndex != -1) {
		Matrixf mtx;
		PSMTXIdentity(mtx.m_matrix.mtxView);
		mtx.setTranslation(m_offset);
		PSMTXConcat(m_model->getMatrix(m_jointIndex)->m_matrix.mtxView, mtx.m_matrix.mtxView, p1.m_matrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	8013739C
 * Size:	000214
 */
// WIP: https://decomp.me/scratch/b2SSt
void CollPart::makeTubeTree()
{
	if (getChild()) {
		m_partType = 2;
	} else {
		m_partType = 0;
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
// WIP: https://decomp.me/scratch/a35NF
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
void CollPart::calcStickGlobal(Vector3f& arg0, Vector3f& arg1)
{
	switch (m_partType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);
		arg1 = mtx.mtxMult(arg0);
		break;
	case COLLTYPE_TUBE:
		calcStickLocal(arg1, arg0);
		Sys::Tube tube1;
		getTube(tube1);
		arg1 = tube1.setPos(arg0.y);
		break;
	case COLLTYPE_TUBETREE:
		calcStickLocal(arg1, arg0);
		Sys::Tube tube2;
		getTube(tube2);
		arg1 = tube2.setPos(arg0.y);
		break;
	}
}

/*
 * --INFO--
 * Address:	80137944
 * Size:	0004C8
 */
// WIP: https://decomp.me/scratch/rvuzC
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
	bl       "makeNaturalPosture__7MatrixfFR10Vector3<f>f"
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
	m_radius = m_baseRadius * scale;
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
	float radius      = m_radius;
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
	P2ASSERTLINE(1295, (isTubeLike()));
	CollPart* child = getChild();

	float v1           = m_radius;
	float v2           = child->m_radius;
	tube.m_startPos    = m_position;
	tube.m_endPos      = child->m_position;
	tube.m_startRadius = v1;
	tube.m_endRadius   = v2;
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
{
	clearRelations();
	m_radius     = 0.0f;
	m_baseRadius = 0.0f;
	m_offset     = 0.0f;
	m_position   = Vector3f(0.0f);
	m_model      = nullptr;
	m_jointIndex = -1;
	_60          = 0;
	m_attribute  = 0;
	m_partType   = COLLTYPE_SPHERE;
	m_specialID.setID('____');
	_64 = nullptr;
	_6C = 0;
}

/*
 * --INLINED--
 * setup__13MouthCollPartFPQ28SysShape5ModelPcR10Vector3<f>
 * --INFO--
 * Address: ........
 * Size:    000080
 */

inline void MouthCollPart::setup(SysShape::Model* model, char* jointName, Vector3f& vector)
{
	m_model      = model;
	m_mouthJoint = static_cast<SysShape::Model*>(m_model)->getJoint(jointName);
	m_offset     = vector;
	m_jointIndex = m_mouthJoint->m_j3d->m_jointIdx;
	m_radius     = 0.0f;
	_64          = nullptr;
}

/*
 * getPosition__13MouthCollPartFR10Vector3<f>
 * --INFO--
 * Address:	801384C8
 * Size:	000048
 */
void MouthCollPart::getPosition(Vector3f& outPosition) { m_mouthJoint->getWorldMatrix()->getTranslation(outPosition); }

/*
 * --INFO--
 * Address:	80138510
 * Size:	000038
 */
void MouthCollPart::copyMatrixTo(Matrixf& outMtx) { PSMTXCopy(m_mouthJoint->getWorldMatrix()->m_matrix.mtxView, outMtx.m_matrix.mtxView); }

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
	m_slots[slotIndex].setup(model, jointName, Vector3f::zero);
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
		return nullptr;
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
CollPart* CollPartFactory::createInstance(SysShape::MtxObject* mtxObject, CollPartMgr* mgr) { return clone(mtxObject, mgr); }

/*
 * --INFO--
 * Address:	80138A8C
 * Size:	0000AC
 */
CollPart* CollPartMgr::createOne(SysShape::MtxObject* mtxObject)
{
	CollPart* part = birth();
	if (part) {
		part->init(mtxObject);
	}
	return part;
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
	if (mgr) {
		CollPart* birthObj = mgr->birth();
		if (copy = birthObj) {
			copy->init(mtxObject);
		}
		JUT_ASSERTLINE(1571, copy != nullptr, "collpart birth failed !\n");
		copy->init(mtxObject);
	} else {
		copy = new CollPart(mtxObject);
	}

	copy->m_radius     = m_radius;
	copy->m_baseRadius = copy->m_radius;
	copy->m_currentID  = m_currentID;
	copy->m_specialID  = m_specialID;
	copy->m_offset     = m_offset;
	copy->m_partType   = m_partType;
	copy->m_jointIndex = m_jointIndex;
	copy->m_model      = m_model;
	copy->_60          = _60;
	copy->m_attribute  = m_attribute;
	copy->m_model      = mtxObject;

	int childCount  = getChildCount();
	CollPart* child = getChild();
	for (int i = 0; i < childCount; i++) {
		CollPart* newChild = child->clone(mtxObject, mgr);
		copy->addChild(newChild);
		child = child->getNext();
	}
	return copy;
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
	m_radius       = input.readFloat();
	m_baseRadius   = m_radius;
	m_currentID.read(input);
	m_specialID.read(input);
	m_offset.read(input);
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
 * --INFO--
 * Address:	801391A8
 * Size:	00010C
 */
void AgeCollPart::draw(Graphics& graphics)
{
	if ((int)m_jointIndex != -1) {
		SysShape::Joint* jointArray = static_cast<SysShape::Model*>(m_model)->m_joints;
		SysShape::Joint* joint      = &jointArray[m_jointIndex];
		if (joint) {
			Matrixf mtx;
			makeMatrixTo(mtx);

			if (m_drawFlags & ACP_DRAWFLAG_ENABLED) {
				float zVal     = joint->m_j3d->m_zRotation.z;
				float rotation = zVal;
				if (zVal < 0.1f) {
					rotation = 0.3f * (*static_cast<SysShape::Model*>(m_model)->m_joints).m_j3d->m_zRotation.z;
				}
				graphics.drawAxis(rotation, joint->getWorldMatrix());
			}
		}
	}
}

/*
 * __ct__11AgeCollPartFPQ28SysShape5Model
 * --INFO--
 * Address:	801392B4
 * Size:	0000CC
 */
AgeCollPart::AgeCollPart(SysShape::Model* model)
    : CollPart(model)
    , m_drawFlags(ACP_DRAWFLAG_DISABLED)
{
}
