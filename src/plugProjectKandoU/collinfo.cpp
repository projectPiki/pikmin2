#include "CNode.h"
#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Dolphin/rand.h"
#include "JSystem/J3D/J3DJoint.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "mapCode.h"
#include "Matrixf.h"
#include "P2Macros.h"
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
Platform::Platform() { mTriDivider = nullptr; }

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void Platform::setTriDivider(Sys::TriDivider* triDivider)
{
	// UNUSED FUNCTION
	mTriDivider = (Sys::OBBTree*)triDivider;
}

/*
 * --INFO--
 * Address:	801336EC
 * Size:	000008
 */
Sys::OBBTree* Platform::getTriDivider() { return mTriDivider; }

/*
 * read__8PlatformFR6Stream
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void Platform::read(Stream& input)
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
	Sys::TriangleTable* triTable = mTriDivider->mTriangleTable;
	for (int i = 0; i < triTable->mCount; i++) {
		triTable->mObjects[i].mCode.mContents = code.mContents;
	}
}

/*
 * --INFO--
 * Address:	80133730
 * Size:	000084
 */
Platform* Platform::clone(Matrixf& matrix)
{
	Platform* copy    = new Platform();
	copy->mTriDivider = (Sys::OBBTree*)mTriDivider->clone(matrix);
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
    : mNumShapes(0)
    , mJointIndices(nullptr)
    , mPlatforms(nullptr)
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
	for (int shapeIndex = 0; shapeIndex < mNumShapes; shapeIndex++) {
		mPlatforms[shapeIndex].setMapCodeAll(code);
	}
}

/*
 * --INFO--
 * Address:	........
 * Size:	000178
 * Should be 0x178, is 0x68.
 */
void PlatAttacher::alloc(int count, u16* indices)
{
	mNumShapes    = count;
	mJointIndices = indices;
	mPlatforms    = new Platform[mNumShapes];
	// more here, probably some loop of setMapCodeAll
}

/*
 * read__12PlatAttacherFR6Stream
 * --INFO--
 * Address:	80133938
 * Size:	000190
 */
void PlatAttacher::read(Stream& input)
{
	mNumShapes    = input.readInt();
	mJointIndices = new u16[mNumShapes];
	for (int i = 0; i < mNumShapes; i++) {
		mJointIndices[i] = input.readShort();
	}
	mPlatforms              = new Platform[mNumShapes];
	Sys::VertexTable* table = new Sys::VertexTable();
	table->read(input);
	for (int i = 0; i < mNumShapes; i++) {
		Sys::OBBTree* tree = new Sys::OBBTree();
		tree->readWithoutVerts(input, *table);
		mPlatforms[i].mTriDivider = tree;
	}
}

/*
 * --INFO--
 * Address:	80133CD4
 * Size:	000008
 */
int PlatAttacher::getNumShapes() { return mNumShapes; }

/*
 * --INFO--
 * Address:	80133CDC
 * Size:	00007C
 */
u16 PlatAttacher::getJointIndex(int i)
{
	P2ASSERTBOUNDSLINE(312, 0, i, mNumShapes);
	return mJointIndices[i];
}

/*
 * --INFO--
 * Address:	80133D58
 * Size:	00007C
 */
Platform* PlatAttacher::getPlatform(int i)
{
	P2ASSERTBOUNDSLINE(318, 0, i, mNumShapes);
	return &mPlatforms[i];
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
AgePlatform::AgePlatform()
{
	mTriDivider = new Sys::OBBTree[2]; // something here has to generate four weak dtors
}

/*
 * --INFO--
 * Address:	8013405C
 * Size:	000010
 */
CollTree::CollTree()
    : mPart(nullptr)
    , mMgr(nullptr)
{
}

/*
 * --INFO--
 * Address:	8013406C
 * Size:	000044
 */
void CollTree::createFromFactory(SysShape::MtxObject* mtxObject, CollPartFactory* factory, CollPartMgr* mgr)
{
	mMgr = mgr;
	if (factory) {
		mPart = factory->createInstance(mtxObject, mgr);
	}
}

/*
 * --INFO--
 * Address:	801340B0
 * Size:	000104
 */
void CollTree::createSingleSphere(SysShape::MtxObject* mtxObject, int jointIndex, Sys::Sphere& sphere, CollPartMgr* mgr)
{
	mMgr = mgr;
	if (mgr) {
		mPart = mgr->createOne(mtxObject);
		JUT_ASSERTLINE(446, mPart != nullptr, "collpart birth failed : single sphere\n");
	} else {
		mPart = new CollPart(mtxObject);
	}
	mPart->mRadius     = sphere.mRadius;
	mPart->mBaseRadius = sphere.mRadius;
	mPart->mOffset     = 0.0f;
	mPart->mJointIndex = jointIndex;
	mPart->mAttribute  = 0;
	mPart->mCurrentID.setID('root');
}

/*
 * --INFO--
 * Address:	801341B4
 * Size:	000044
 */
void CollTree::release()
{
	if (mMgr) {
		releaseRec(mPart);
		mMgr = nullptr;
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

	mMgr->kill(part);

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
	return checkCollisionRec(mPart, p1->mPart, p2, p3, p4);
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
	if (mPart) {
		mPart->checkCollision(sphere, delegate);
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
			Sys::Sphere partSphere(mPosition, mRadius);
			if (partSphere.intersect(sphere)) {
				delegate->invoke(this);
			}
		} else if (isTube() || isTubeTree()) {
			Sys::Tube collTube(mPosition, getChild()->mPosition, mRadius, getChild()->mRadius);
			Vector3f colVec;
			f32 colSep;
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
	CollPart* inputPart = other->mPart;

	for (CollPart* thisPart = mPart; thisPart != nullptr; thisPart = thisPart->getNext()) {

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
		Sys::Sphere thisSphere(mPosition, mRadius);
		Sys::Sphere otherSphere(other->mPosition, other->mRadius);
		return thisSphere.intersect(otherSphere, outVector);
	} else if (isSphere() && (other->isTube() || other->isTubeTree())) {
		Sys::Sphere thisSphere(mPosition, mRadius);
		Sys::Tube otherTube(other->mPosition, other->getChild()->mPosition, other->mRadius, other->getChild()->mRadius);
		f32 collVal;
		return otherTube.collide(thisSphere, outVector, collVal);
	} else if ((isTube() || isTubeTree()) && other->isSphere()) {
		Sys::Tube thisTube(mPosition, getChild()->mPosition, mRadius, getChild()->mRadius);
		Sys::Sphere otherSphere(other->mPosition, other->mRadius);
		f32 collVal;
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
	if (mPart) {
		mPart->update();
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
	if (mPart) {
		mPart->attachModel(mtxObject);
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
	mModel = mtxObject;
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
CollPart* CollTree::getCollPart(u32 partID) { return (mPart != nullptr) ? mPart->getCollPart(partID) : nullptr; }

/*
 * getCollPart__8CollPartFUl
 * --INFO--
 * Address:	80135E78
 * Size:	000640
 */
CollPart* CollPart::getCollPart(u32 partID)
{
	if (mCurrentID == partID) {
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
		if (mNext) {
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
		if (mChild) {
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
CollPart* CollTree::findCollPart(FindCollPartArg& findArg)
{
	if (mPart) {
		CollPart* partArray[256];
		int count    = 0;
		int numParts = mPart->getAllCollPartToArray(partArray, 256, count);

		f32 minDist         = 128000.0f;
		CollPart* foundPart = nullptr;
		for (int i = 0; i < numParts; i++) {
			CollPart* currPart = partArray[i];
			if (((findArg.mCondition == nullptr) || findArg.mCondition->satisfy(currPart)) && currPart->isSphere()) {
				f32 dist = findArg.mPosition.mPosition.sqrDistance(currPart->mPosition) - SQUARE(currPart->mRadius);
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
	if (mPart) {
		CollPart* partArray[16];
		int count    = 0;
		int numParts = mPart->getAllCollPartToArray(partArray, 16, count);

		int randIndex = (int)((f32)numParts * randFloat());
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
	if (mPart == nullptr) {
		return;
	}
	sphere.mPosition = mPart->mPosition;
	sphere.mRadius   = mPart->mRadius;
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
	mRadius     = 0.0f;
	mBaseRadius = 0.0f;
	mOffset     = 0.0f;
	mPosition   = Vector3f(0.0f);
	mModel      = mtxObject;
	mJointIndex = -1;
	_60         = 0;
	mAttribute  = 0;
	mPartType   = COLLTYPE_SPHERE;
	mSpecialID.setID('____');
}

/*
 * --INFO--
 * Address:	80136DB0
 * Size:	000030
 */
bool CollPart::isStickable() { return mSpecialID.match('s***', '*'); }

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
	mtx.getTranslation(mPosition);
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
	if ((int)mJointIndex != -1) {
		Matrixf mtx;
		PSMTXIdentity(mtx.mMatrix.mtxView);
		mtx.setTranslation(mOffset);
		PSMTXConcat(mModel->getMatrix(mJointIndex)->mMatrix.mtxView, mtx.mMatrix.mtxView, p1.mMatrix.mtxView);
	}
}

/*
 * --INFO--
 * Address:	8013739C
 * Size:	000214
 */
void CollPart::makeTubeTree()
{
	if (getChild()) {
		mPartType = 2;
	} else {
		mPartType = 0;
	}
	CollPart* part = getChild();
	while (part) {
		part->makeTubeTree();
		part = part->getNext();
	}
}

/*
 * --INFO--
 * Address:	801375B0
 * Size:	00022C
 */
void CollPart::calcStickLocal(Vector3f& arg0, Vector3f& arg1)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);
		Matrixf inv;
		PSMTXInverse(mtx.mMatrix.mtxView, inv.mMatrix.mtxView);

		Vector3f row1 = Vector3f(mtx.getRow(0));

		f32 len = row1.length();

		if (FABS(len) < 0.001f) {
			arg1 = Vector3f(0.0f);
			return;
		}

		f32 norm = 1.0f / len;

		arg1 = inv.mtxMult(arg0);

		arg1.normalise();
		f32 radNorm = mRadius * norm;
		arg1        = arg1 * radNorm;
		break;

	case COLLTYPE_TUBE:
	case COLLTYPE_TUBETREE:
		Sys::Tube tube;
		getTube(tube);
		arg1.y = tube.getPosRatio(arg0);
		break;
	}
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
	switch (mPartType) {
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
void CollPart::calcPoseMatrix(Vector3f& info, Matrixf& outputPose)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);
		Vector3f pos  = mtx.getBasis(3);
		Vector3f diff = pos - info;
		f32 len       = diff.normalise();
		if (len == 0.0f) {
			diff = Vector3f(0.0f, 0.0f, 1.0f);
		}
		Vector3f zAxis(0.0f, 0.0f, 1.0f);
		Vector3f crossProd = cross(diff, zAxis);
		crossProd.normalise();
		outputPose.setBasis(0, crossProd);
		f32 zVal = diff.y * crossProd.x;
		Vector3f otherVec;
		otherVec.x = diff.y * crossProd.z - diff.z * crossProd.y;
		otherVec.y = diff.z * crossProd.x - diff.x * crossProd.z;
		otherVec.z = diff.x * crossProd.y - diff.y * crossProd.x;
		outputPose.setBasis(1, otherVec);
		outputPose.setBasis(2, diff);
		break;

	case COLLTYPE_TUBETREE:
		Vector3f controls[4];
		controls[1]      = mPosition;
		controls[2]      = getChild()->mPosition;
		CollPart* parent = (CollPart*)mParent;
		if (parent != nullptr && parent->mPartType == COLLTYPE_TUBETREE) {
			controls[0] = parent->mPosition;
		} else {
			controls[0] = controls[1];
		}
		CollPart* nextChild = getChild()->getChild();
		if (nextChild != nullptr && nextChild->mPartType == COLLTYPE_TUBETREE) {
			controls[3] = nextChild->mPosition;
		} else {
			controls[3] = controls[2];
		}
		Vector3f path = CRSplineTangent(info.y, controls);
		path.normalise();
		f32 returnVal = info.x;

		outputPose.makeNaturalPosture(path, info.x);
		break;

	case COLLTYPE_TUBE:
		Sys::Tube tube;
		getTube(tube);
		Vector3f axis;
		tube.getAxisVector(axis);
		axis.x             = -axis.x;
		axis.y             = -axis.y;
		axis.z             = -axis.z;
		Vector3f axisCross = cross(info, axis);
		axisCross.normalise();
		Vector3f thirdAxis = cross(axisCross, axis);
		thirdAxis.normalise();
		outputPose.setBasis(0, axisCross);
		outputPose.setBasis(1, axis);
		outputPose.setBasis(2, thirdAxis);
		break;
	}
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
void CollPart::setScale(f32 scale)
{
	mRadius = mBaseRadius * scale;
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
	f32 radius       = mRadius;
	sphere.mPosition = mPosition;
	sphere.mRadius   = radius;
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

	f32 v1            = mRadius;
	f32 v2            = child->mRadius;
	tube.mStartPos    = mPosition;
	tube.mEndPos      = child->mPosition;
	tube.mStartRadius = v1;
	tube.mEndRadius   = v2;
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
	mRadius     = 0.0f;
	mBaseRadius = 0.0f;
	mOffset     = 0.0f;
	mPosition   = Vector3f(0.0f);
	mModel      = nullptr;
	mJointIndex = -1;
	_60         = 0;
	mAttribute  = 0;
	mPartType   = COLLTYPE_SPHERE;
	mSpecialID.setID('____');
	mStuckCreature = nullptr;
	_6C            = 0;
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
	mModel         = model;
	mMouthJoint    = static_cast<SysShape::Model*>(mModel)->getJoint(jointName);
	mOffset        = vector;
	mJointIndex    = mMouthJoint->mJ3d->mJointIdx;
	mRadius        = 0.0f;
	mStuckCreature = nullptr;
}

/*
 * getPosition__13MouthCollPartFR10Vector3<f>
 * --INFO--
 * Address:	801384C8
 * Size:	000048
 */
void MouthCollPart::getPosition(Vector3f& outPosition) { mMouthJoint->getWorldMatrix()->getTranslation(outPosition); }

/*
 * --INFO--
 * Address:	80138510
 * Size:	000038
 */
void MouthCollPart::copyMatrixTo(Matrixf& outMtx) { PSMTXCopy(mMouthJoint->getWorldMatrix()->mMatrix.mtxView, outMtx.mMatrix.mtxView); }

/*
 * __ct__10MouthSlotsFv
 * --INFO--
 * Address:	80138548
 * Size:	000010
 */
MouthSlots::MouthSlots()
    : mMax(0)
    , mSlots(nullptr)
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
	mMax   = count;
	mSlots = new MouthCollPart[count];
}

/*
 * update__10MouthSlotsFv
 * --INFO--
 * Address:	8013862C
 * Size:	000064
 */
void MouthSlots::update()
{
	for (int i = 0; i < mMax; i++) {
		mSlots[i].update();
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
	P2ASSERTBOUNDSLINE(1485, 0, slotIndex, mMax);
	mSlots[slotIndex].setup(model, jointName, Vector3f::zero);
}

/*
 * --INFO--
 * Address:	80138778
 * Size:	00007C
 */
MouthCollPart* MouthSlots::getSlot(int slotIndex)
{
	P2ASSERTBOUNDSLINE(1491, 0, slotIndex, mMax);
	return &mSlots[slotIndex];
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
		input.mMode = STREAM_MODE_TEXT;
		if (input.mMode == STREAM_MODE_TEXT) {
			input.mTabCount = 0;
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
		input.mMode = STREAM_MODE_TEXT;
		if (input.mMode == STREAM_MODE_TEXT) {
			input.mTabCount = 0;
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

	copy->mRadius     = mRadius;
	copy->mBaseRadius = copy->mRadius;
	copy->mCurrentID  = mCurrentID;
	copy->mSpecialID  = mSpecialID;
	copy->mOffset     = mOffset;
	copy->mPartType   = mPartType;
	copy->mJointIndex = mJointIndex;
	copy->mModel      = mModel;
	copy->_60         = _60;
	copy->mAttribute  = mAttribute;
	copy->mModel      = mtxObject;

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
	mRadius        = input.readFloat();
	mBaseRadius    = mRadius;
	mCurrentID.read(input);
	mSpecialID.read(input);
	mOffset.read(input);
	mJointIndex = input.readInt();
	mAttribute  = input.readU16();
	for (int i = 0; i < childCount; i++) {
		CollPart* child;
		if (isAgeCollPart) {
			child = new AgeCollPart((SysShape::Model*)mModel);
		} else {
			child = new CollPart(mModel);
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
	if ((int)mJointIndex != -1) {
		SysShape::Joint* jointArray = static_cast<SysShape::Model*>(mModel)->mJoints;
		SysShape::Joint* joint      = &jointArray[mJointIndex];
		if (joint) {
			Matrixf mtx;
			makeMatrixTo(mtx);

			if (mDrawFlags & ACP_DRAWFLAG_ENABLED) {
				f32 zVal     = joint->mJ3d->mBoundingSphereRadius;
				f32 rotation = zVal;
				if (zVal < 0.1f) {
					rotation = 0.3f * (*static_cast<SysShape::Model*>(mModel)->mJoints).mJ3d->mBoundingSphereRadius;
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
    , mDrawFlags(ACP_DRAWFLAG_DISABLED)
{
}
