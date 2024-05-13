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

/**
 * __ct__8PlatformFv
 * @note Address: 0x801336A8
 * @note Size: 0x44
 */
Platform::Platform() { mTriDivider = nullptr; }

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void Platform::setTriDivider(Sys::TriDivider* triDivider) { mTriDivider = (Sys::OBBTree*)triDivider; }

/**
 * @note Address: 0x801336EC
 * @note Size: 0x8
 */
Sys::OBBTree* Platform::getTriDivider() { return mTriDivider; }

/**
 * read__8PlatformFR6Stream
 * @note Address: N/A
 * @note Size: 0x68
 */
void Platform::read(Stream& input)
{
	// UNUSED FUNCTION
	setTriDivider(new Sys::OBBTree());
	getTriDivider()->read(input);
}

/**
 * @note Address: 0x801336F4
 * @note Size: 0x3C
 */
void Platform::setMapCodeAll(MapCode::Code& code)
{
	Sys::TriangleTable* triTable = mTriDivider->mTriangleTable;
	for (int i = 0; i < triTable->mCount; i++) {
		triTable->mObjects[i].mCode.mContents = code.mContents;
	}
}

/**
 * @note Address: 0x80133730
 * @note Size: 0x84
 */
Platform* Platform::clone(Matrixf& matrix)
{
	Platform* copy    = new Platform();
	copy->mTriDivider = (Sys::OBBTree*)mTriDivider->clone(matrix);
	return copy;
}

/**
 * load__8PlatformFP13JKRFileLoaderPc
 * @note Address: 0x801337B4
 * @note Size: 0xAC
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

/**
 * @note Address: 0x80133860
 * @note Size: 0x14
 */
PlatAttacher::PlatAttacher()
    : mNumShapes(0)
    , mJointIndices(nullptr)
    , mPlatforms(nullptr)
{
}

/**
 * setMapCodeAll__12PlatAttacherFRQ27MapCode4Code
 * @note Address: 0x80133874
 * @note Size: 0x64
 */
void PlatAttacher::setMapCodeAll(MapCode::Code& code)
{
	for (int shapeIndex = 0; shapeIndex < mNumShapes; shapeIndex++) {
		mPlatforms[shapeIndex].setMapCodeAll(code);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x178
 * Should be 0x178, is 0x68.
 */
void PlatAttacher::alloc(int count, u16* indices)
{
	mNumShapes    = count;
	mJointIndices = indices;
	mPlatforms    = new Platform[mNumShapes];
	// more here, probably some loop of setMapCodeAll
}

/**
 * read__12PlatAttacherFR6Stream
 * @note Address: 0x80133938
 * @note Size: 0x190
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

/**
 * @note Address: 0x80133CD4
 * @note Size: 0x8
 */
int PlatAttacher::getNumShapes() { return mNumShapes; }

/**
 * @note Address: 0x80133CDC
 * @note Size: 0x7C
 */
u16 PlatAttacher::getJointIndex(int i)
{
	P2ASSERTBOUNDSLINE(312, 0, i, mNumShapes);
	return mJointIndices[i];
}

/**
 * @note Address: 0x80133D58
 * @note Size: 0x7C
 */
Platform* PlatAttacher::getPlatform(int i)
{
	P2ASSERTBOUNDSLINE(318, 0, i, mNumShapes);
	return &mPlatforms[i];
}

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
AgePlatform::AgePlatform()
{
	mTriDivider = new Sys::OBBTree[2]; // something here has to generate four weak dtors
}

/**
 * @note Address: 0x8013405C
 * @note Size: 0x10
 */
CollTree::CollTree()
    : mPart(nullptr)
    , mMgr(nullptr)
{
}

/**
 * @note Address: 0x8013406C
 * @note Size: 0x44
 */
void CollTree::createFromFactory(SysShape::MtxObject* mtxObject, CollPartFactory* factory, CollPartMgr* mgr)
{
	mMgr = mgr;
	if (factory) {
		mPart = factory->createInstance(mtxObject, mgr);
	}
}

/**
 * @note Address: 0x801340B0
 * @note Size: 0x104
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

/**
 * @note Address: 0x801341B4
 * @note Size: 0x44
 */
void CollTree::release()
{
	if (mMgr) {
		releaseRec(mPart);
		mMgr = nullptr;
	}
}

/**
 * @note Address: 0x801341F8
 * @note Size: 0x348
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

/**
 * @note Address: 0x80134550
 * @note Size: 0x3C
 */
bool CollTree::checkCollision(CollTree* other, CollPart** collA, CollPart** collB, Vector3f& hitPosition)
{
	return checkCollisionRec(mPart, other->mPart, collA, collB, hitPosition);
}

/**
 * @note Address: 0x8013458C
 * @note Size: 0x604
 */
bool CollTree::checkCollisionRec(CollPart* a, CollPart* b, CollPart** collA, CollPart** collB, Vector3f& hitPosition)
{
	if (a == nullptr || b == nullptr) {
		return false;
	}

	if (a->collide(b, hitPosition)) {
		if (a->isPrim() && b->isPrim()) {
			*collA = a;
			*collB = b;
			return true;
		}

		if (!a->isLeaf()) {
			return checkCollisionRec(a->getChild(), b, collA, collB, hitPosition);
		} else {
			return checkCollisionRec(a, b->getChild(), collA, collB, hitPosition);
		}
	} else if (a->getNext()) {
		return checkCollisionRec(a->getNext(), b, collA, collB, hitPosition);
	}

	if (b->getNext()) {
		return checkCollisionRec(a, b->getNext(), collA, collB, hitPosition);
	}

	*collA = nullptr;
	*collB = nullptr;
	return false;
}

/**
 * checkCollision__8CollTreeFRQ23Sys6SphereP22IDelegate1<P8CollPart>
 * @note Address: 0x80134BD0
 * @note Size: 0x2C
 */
void CollTree::checkCollision(Sys::Sphere& sphere, IDelegate1<CollPart*>* delegate)
{
	if (mPart) {
		mPart->checkCollision(sphere, delegate);
	}
}

/**
 * Checks for collision between the given sphere and the current CollPart.
 * If a collision is detected, the provided collidedCallback function is invoked.
 *
 * @param sphere The sphere to check for collision with.
 * @param onCollidedCallback The callback function to invoke when a collision is detected.
 *
 * @note Address: 0x80134BFC
 * @note Size: 0x8B8
 */
void CollPart::checkCollision(Sys::Sphere& sphere, IDelegate1<CollPart*>* onCollidedCallback)
{
	if (isPrim()) {
		if (isSphere()) {
			Sys::Sphere partSphere(mPosition, mRadius);
			if (partSphere.intersect(sphere)) {
				onCollidedCallback->invoke(this);
			}
		} else if (isTube() || isTubeTree()) {
			Sys::Tube collTube(mPosition, getChild()->mPosition, mRadius, getChild()->mRadius);
			Vector3f colVec;
			f32 colSep;
			if (collTube.collide(sphere, colVec, colSep)) {
				onCollidedCallback->invoke(this);
			}
		}
	}

	if (getChild()) {
		getChild()->checkCollision(sphere, onCollidedCallback);
	}

	if (getNext()) {
		getNext()->checkCollision(sphere, onCollidedCallback);
	}
}

/**
 * checkCollisionMulti__8CollTreeFP8CollTreeP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>
 * @note Address: 0x80135564
 * @note Size: 0x198
 */
void CollTree::checkCollisionMulti(CollTree* other, IDelegate3<CollPart*, CollPart*, Vector3f&>* delegate)
{
	CollPart* inputPart = other->mPart;

	for (CollPart* thisP = mPart; thisP; thisP = thisP->getNext()) {
		for (CollPart* otherP = inputPart; otherP; otherP = otherP->getNext()) {
			Vector3f hitPosition;
			if (!thisP->collide(otherP, hitPosition)) {
				continue;
			}

			if (thisP->isPrim() && otherP->isPrim()) {
				delegate->invoke(thisP, otherP, hitPosition);

				if (!thisP->isLeaf()) {
					thisP->getChild()->checkCollisionMulti(otherP, delegate);
				} else if (!otherP->isLeaf()) {
					thisP->checkCollisionMulti(otherP->getChild(), delegate);
				}

				continue;
			}

			if (thisP->isLeaf()) {
				thisP->checkCollisionMulti(otherP->getChild(), delegate);
			} else if (otherP->isLeaf()) {
				thisP->getChild()->checkCollisionMulti(otherP, delegate);
			} else if (thisP->getChild()) {
				thisP->getChild()->checkCollisionMulti(otherP, delegate);
			} else {
				thisP->checkCollisionMulti(otherP->getChild(), delegate);
			}
		}
	}
}

/**
 * checkCollisionMulti__8CollPartFP8CollPartP47IDelegate3<P8CollPart,P8CollPart,R10Vector3<f>>
 * @note Address: 0x801356FC
 * @note Size: 0x1F0
 */
void CollPart::checkCollisionMulti(CollPart* other, IDelegate3<CollPart*, CollPart*, Vector3f&>* onCollidedCallback)
{
	for (CollPart* thisPart = this; thisPart != nullptr; thisPart = thisPart->getNext()) {

		for (CollPart* otherPart = other; otherPart != nullptr; otherPart = otherPart->getNext()) {

			Vector3f colVec;
			if (thisPart->collide(otherPart, colVec)) {
				if (thisPart->isPrim() && otherPart->isPrim()) {
					onCollidedCallback->invoke(thisPart, otherPart, colVec);
					if (!otherPart->isLeaf()) {
						thisPart->checkCollisionMulti(otherPart->getChild(), onCollidedCallback);
					} else if (!thisPart->isLeaf()) {
						otherPart->checkCollisionMulti(thisPart->getChild(), onCollidedCallback);
					}

				} else if (thisPart->isLeaf()) {
					thisPart->checkCollisionMulti(otherPart->getChild(), onCollidedCallback);
				} else if (otherPart->isLeaf()) {
					otherPart->checkCollisionMulti(thisPart->getChild(), onCollidedCallback);
				} else if (!thisPart->isLeaf()) {
					thisPart->getChild()->checkCollisionMulti(otherPart, onCollidedCallback);
				} else {
					thisPart->checkCollisionMulti(otherPart->getChild(), onCollidedCallback);
				}

			} else if (thisPart->isTube() || thisPart->isTubeTree()) {
				otherPart->checkCollisionMulti(thisPart->getChild(), onCollidedCallback);
			} else if (otherPart->isTube() || otherPart->isTubeTree()) {
				thisPart->checkCollisionMulti(otherPart->getChild(), onCollidedCallback);
			}
		}
	}
}

/**
 * Checks for collision between this CollPart and another CollPart.
 * If a collision is detected, the position of the collision is stored in the 'hitPosition' parameter.
 *
 * @param other The other CollPart to check for collision with.
 * @param hitPosition The position of the collision, if one occurs.
 * @return True if a collision occurs, false otherwise.
 *
 * @note Address: 0x801358EC
 * @note Size: 0x1B0
 */
bool CollPart::collide(CollPart* other, Vector3f& hitPosition)
{
	if (isSphere() && other->isSphere()) {
		Sys::Sphere thisSphere(mPosition, mRadius);
		Sys::Sphere otherSphere(other->mPosition, other->mRadius);
		return thisSphere.intersect(otherSphere, hitPosition);
	} else if (isSphere() && (other->isTube() || other->isTubeTree())) {
		Sys::Sphere thisSphere(mPosition, mRadius);
		Sys::Tube otherTube(other->mPosition, other->getChild()->mPosition, other->mRadius, other->getChild()->mRadius);
		f32 collVal;
		return otherTube.collide(thisSphere, hitPosition, collVal);
	} else if ((isTube() || isTubeTree()) && other->isSphere()) {
		Sys::Tube thisTube(mPosition, getChild()->mPosition, mRadius, getChild()->mRadius);
		Sys::Sphere otherSphere(other->mPosition, other->mRadius);
		f32 collVal;
		return thisTube.collide(otherSphere, hitPosition, collVal);
	}
	return false;
}

/**
 * update__8CollTreeFv
 * @note Address: 0x80135A9C
 * @note Size: 0x2C
 */
void CollTree::update()
{
	if (mPart) {
		mPart->update();
	}
}

/**
 * attachModel__8CollTreeFPQ28SysShape9MtxObject
 * @note Address: 0x80135AC8
 * @note Size: 0x2C
 */
void CollTree::attachModel(SysShape::MtxObject* mtxObject)
{
	if (mPart) {
		mPart->attachModel(mtxObject);
	}
}

/**
 * attachModel__8CollPartFPQ28SysShape9MtxObject
 * @note Address: 0x80135AF4
 * @note Size: 0x350
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

/**
 * getCollPart__8CollTreeFUl
 * @note Address: 0x80135E44
 * @note Size: 0x34
 */
CollPart* CollTree::getCollPart(u32 partID) { return (mPart != nullptr) ? mPart->getCollPart(partID) : nullptr; }

/**
 * getCollPart__8CollPartFUl
 * @note Address: 0x80135E78
 * @note Size: 0x640
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

/**
 * @brief Recursively collects all CollPart objects into an array.
 *
 * This function recursively collects all CollPart objects, including the current object and its children, into an array.
 *
 * @param outputArray The array to store the collected CollPart objects.
 * @param limit The maximum number of CollPart objects that can be stored in the array.
 * @param count The current count of CollPart objects in the array.
 * @return The final count of CollPart objects in the array after the collection.
 *
 * @note Address: 0x801364B8
 * @note Size: 0x54C
 */
int CollPart::getAllCollPartToArray(CollPart** outputArray, int limit, int& count)
{
	int index = count;
	if (!(index < limit)) {
		return count;
	}

	count++;
	outputArray[index] = this;
	if (mNext) {
		CollPart* nextPart = getNext();
		int nextIndex      = count;
		if (nextIndex < limit) {
			count++;
			outputArray[nextIndex] = nextPart;
			if (nextPart->getNext()) {
				nextPart->getNext()->getAllCollPartToArray(outputArray, limit, count);
			}
			if (nextPart->getChild()) {
				nextPart->getChild()->getAllCollPartToArray(outputArray, limit, count);
			}
		}
	}

	if (mChild) {
		CollPart* childPart = getChild();
		int childIndex      = count;
		if (childIndex < limit) {
			count++;
			outputArray[childIndex] = childPart;
			if (childPart->getNext()) {
				childPart->getNext()->getAllCollPartToArray(outputArray, limit, count);
			}
			if (childPart->getChild()) {
				childPart->getChild()->getAllCollPartToArray(outputArray, limit, count);
			}
		}
	}

	return count;
}

/**
 * @note Address: 0x80136A04
 * @note Size: 0x118
 */
CollPart* CollTree::findCollPart(FindCollPartArg& findArg)
{
	if (mPart) {
		CollPart* partArray[256];
		int count    = 0;
		int numParts = mPart->getAllCollPartToArray(partArray, 256, count);

		f32 minDist         = FLOAT_DIST_MAX;
		CollPart* foundPart = nullptr;
		for (int i = 0; i < numParts; i++) {
			CollPart* currPart = partArray[i];
			if ((!findArg.mCondition || findArg.mCondition->satisfy(currPart)) && currPart->isSphere()) {
				f32 distance = sqrDistance(findArg.getHitPosition(), currPart->mPosition) - currPart->getSqrRadius();

				if (distance < minDist) {
					foundPart = currPart;
					minDist   = distance;
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

/**
 * @note Address: 0x80136B1C
 * @note Size: 0x124
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

/**
 * @note Address: 0x80136C40
 * @note Size: 0x34
 */
void CollTree::getBoundingSphere(Sys::Sphere& sphere)
{
	if (mPart == nullptr) {
		return;
	}
	sphere.mPosition = mPart->mPosition;
	sphere.mRadius   = mPart->mRadius;
}

/**
 * __ct__8CollPartFPQ28SysShape9MtxObject
 * @note Address: 0x80136C74
 * @note Size: 0x64
 */
CollPart::CollPart(SysShape::MtxObject* mtxObject) { init(mtxObject); }

/**
 * __ct__8CollPartFv
 * @note Address: 0x80136CD8
 * @note Size: 0x58
 */
CollPart::CollPart() { init(nullptr); }

/**
 * @note Address: 0x80136D30
 * @note Size: 0x80
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
	mUnusedVal  = 0;
	mAttribute  = 0;
	mPartType   = COLLTYPE_SPHERE;
	mSpecialID.setID('____');
}

/**
 * @note Address: 0x80136DB0
 * @note Size: 0x30
 */
bool CollPart::isStickable() { return mSpecialID.match('s***', '*'); }

/**
 * update__8CollPartFv
 * @note Address: 0x80136DE0
 * @note Size: 0x4E0
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

/**
 * @note Address: 0x80137318
 * @note Size: 0x84
 */
void CollPart::makeMatrixTo(Matrixf& target)
{
	if ((int)mJointIndex != -1) {
		Matrixf mtx;
		PSMTXIdentity(mtx.mMatrix.mtxView);
		mtx.setTranslation(mOffset);
		PSMTXConcat(mModel->getMatrix(mJointIndex)->mMatrix.mtxView, mtx.mMatrix.mtxView, target.mMatrix.mtxView);
	}
}

/**
 * @note Address: 0x8013739C
 * @note Size: 0x214
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

/**
 * Calculates the local stuck position based on the given global position.
 * The calculation depends on the type of the CollPart.
 *
 * @param globalPosition The global stick position.
 * @param localPosition  [out] The calculated local stick position.
 *
 * @note Address: 0x801375B0
 * @note Size: 0x22C
 */
void CollPart::calcStickLocal(Vector3f& input, Vector3f& localPosition)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);

		Matrixf inv;
		PSMTXInverse(mtx.mMatrix.mtxView, inv.mMatrix.mtxView);

		f32 len = mtx.getRowLength(0);
		if (FABS(len) < 0.001f) {
			localPosition = Vector3f(0.0f);
			return;
		}

		f32 norm = 1.0f / len;

		localPosition = inv.mtxMult(input);

		localPosition.normalise();
		f32 radNorm   = mRadius * norm;
		localPosition = localPosition * radNorm;
		break;

	case COLLTYPE_TUBE:
	case COLLTYPE_TUBETREE:
		Sys::Tube tube;
		getTube(tube);
		localPosition.y = tube.getPosRatio(input);
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

/**
 * Calculates the global stick position based on the type of CollPart.
 *
 * @param input The input vector.
 * @param globalPosition The calculated global position.
 *
 * @note Address: 0x801377DC
 * @note Size: 0x168
 */
void CollPart::calcStickGlobal(Vector3f& input, Vector3f& globalPosition)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE: {
		Matrixf mtx;
		makeMatrixTo(mtx);
		globalPosition = mtx.mtxMult(input);
		break;
	}

	case COLLTYPE_TUBE: {
		calcStickLocal(globalPosition, input);
		Sys::Tube tube;
		getTube(tube);
		globalPosition = tube.setPos(input.y);
		break;
	}

	case COLLTYPE_TUBETREE: {
		calcStickLocal(globalPosition, input);
		Sys::Tube tube;
		getTube(tube);
		globalPosition = tube.setPos(input.y);
		break;
	}
	}
}

/**
 * Calculates the pose matrix for the CollPart object based on its part type.
 * The pose matrix is used to transform the object's position and orientation in 3D space.
 *
 * @param input The target position to pose toward.
 * @param poseMatrix The resulting pose matrix.
 *
 * @note Address: 0x80137944
 * @note Size: 0x4C8
 */
// WIP: https://decomp.me/scratch/rvuzC
void CollPart::calcPoseMatrix(Vector3f& input, Matrixf& poseMatrix)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);

		Vector3f pos = mtx.getTranslation();
		pos -= input;
		f32 len = pos.normalise();

		if (len == 0.0f) {
			pos = Vector3f(0.0f, 0.0f, 1.0f);
		}

		Vector3f zAxis(0.0f, 0.0f, 1.0f);
		Vector3f crossProd = pos.cross(zAxis);
		crossProd.normalise();
		poseMatrix.setColumn(0, crossProd);
		poseMatrix.setColumn(1, pos.cross(crossProd));
		poseMatrix.setColumn(2, pos);
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
		Vector3f path = CRSplineTangent(input.y, controls);
		path.normalise();
		f32 returnVal = input.x;

		poseMatrix.makeNaturalPosture(path, input.x);
		break;

	case COLLTYPE_TUBE:
		Sys::Tube tube;
		getTube(tube);

		Vector3f axis;
		tube.getAxisVector(axis);
		axis.negate2();

		Vector3f axisCross = input.cross(axis);
		_normaliseVec(axisCross);

		Vector3f thirdAxis = axisCross.cross(axis);
		_normaliseVec(thirdAxis);

		poseMatrix.setColumn(0, axisCross);
		poseMatrix.setColumn(1, axis);
		poseMatrix.setColumn(2, thirdAxis);
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

/**
 * @note Address: 0x80137E0C
 * @note Size: 0x3F0
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

/**
 * @note Address: 0x801381FC
 * @note Size: 0x7C
 */
void CollPart::getSphere(Sys::Sphere& sphere)
{
	P2ASSERTLINE(1289, isSphere());
	f32 radius       = mRadius;
	sphere.mPosition = mPosition;
	sphere.mRadius   = radius;
}

/**
 * @note Address: 0x80138278
 * @note Size: 0xB8
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

/**
 * @note Address: 0x80138330
 * @note Size: 0x4
 */
void CollPart::draw(Graphics&) { }

/**
 * __ct__13MouthCollPartFv
 * @note Address: 0x80138334
 * @note Size: 0x134
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
	mUnusedVal  = 0;
	mAttribute  = 0;
	mPartType   = COLLTYPE_SPHERE;
	mSpecialID.setID('____');
	mStuckCreature = nullptr;
	mIsOniKurage   = false;
}

/**
 * --INLINED--
 * setup__13MouthCollPartFPQ28SysShape5ModelPcR10Vector3<f>
 * @note Address: N/A
 * @note Size: 0x80
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

/**
 * getPosition__13MouthCollPartFR10Vector3<f>
 * @note Address: 0x801384C8
 * @note Size: 0x48
 */
void MouthCollPart::getPosition(Vector3f& outPosition) { mMouthJoint->getWorldMatrix()->getTranslation(outPosition); }

/**
 * @note Address: 0x80138510
 * @note Size: 0x38
 */
void MouthCollPart::copyMatrixTo(Matrixf& outMtx) { PSMTXCopy(mMouthJoint->getWorldMatrix()->mMatrix.mtxView, outMtx.mMatrix.mtxView); }

/**
 * __ct__10MouthSlotsFv
 * @note Address: 0x80138548
 * @note Size: 0x10
 */
MouthSlots::MouthSlots()
    : mMax(0)
    , mSlots(nullptr)
{
}

/**
 * alloc__10MouthSlotsFi
 * @note Address: 0x80138558
 * @note Size: 0x64
 */
void MouthSlots::alloc(int count)
{
	mMax   = count;
	mSlots = new MouthCollPart[count];
}

/**
 * update__10MouthSlotsFv
 * @note Address: 0x8013862C
 * @note Size: 0x64
 */
void MouthSlots::update()
{
	for (int i = 0; i < mMax; i++) {
		mSlots[i].update();
	}
}

/**
 * setup__10MouthSlotsFiPQ28SysShape5ModelPc
 * @note Address: 0x80138690
 * @note Size: 0xE8
 */
void MouthSlots::setup(int slotIndex, SysShape::Model* model, char* jointName)
{
	P2ASSERTBOUNDSLINE(1485, 0, slotIndex, mMax);
	mSlots[slotIndex].setup(model, jointName, Vector3f::zero);
}

/**
 * @note Address: 0x80138778
 * @note Size: 0x7C
 */
MouthCollPart* MouthSlots::getSlot(int slotIndex)
{
	P2ASSERTBOUNDSLINE(1491, 0, slotIndex, mMax);
	return &mSlots[slotIndex];
}

/**
 * load__15CollPartFactoryFPc
 * @note Address: 0x801387F4
 * @note Size: 0x150
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

/**
 * load__15CollPartFactoryFP13JKRFileLoaderPc
 * @note Address: 0x80138944
 * @note Size: 0x128
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

/**
 * @note Address: 0x80138A6C
 * @note Size: 0x20
 */
CollPart* CollPartFactory::createInstance(SysShape::MtxObject* mtxObject, CollPartMgr* mgr) { return clone(mtxObject, mgr); }

/**
 * @note Address: 0x80138A8C
 * @note Size: 0xAC
 */
CollPart* CollPartMgr::createOne(SysShape::MtxObject* mtxObject)
{
	CollPart* part = birth();
	if (part) {
		part->init(mtxObject);
	}
	return part;
}

/**
 * clone__8CollPartFPQ28SysShape9MtxObjectP11CollPartMgr
 * @note Address: 0x80138B38
 * @note Size: 0x2A8
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
	copy->mUnusedVal  = mUnusedVal;
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

/**
 * read__8CollPartFR6Streamb
 * @note Address: 0x80138E00
 * @note Size: 0x35C
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

/**
 * @note Address: 0x801391A8
 * @note Size: 0x10C
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

/**
 * __ct__11AgeCollPartFPQ28SysShape5Model
 * @note Address: 0x801392B4
 * @note Size: 0xCC
 */
AgeCollPart::AgeCollPart(SysShape::Model* model)
    : CollPart(model)
    , mDrawFlags(ACP_DRAWFLAG_DISABLED)
{
}
