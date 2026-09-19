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
 * One of the few remnants of the Age editing tools that probably existed - see P1.
 *
 * This lives in here because it's never called or used anywhere else, and its functions
 * are needed for weak function ordering in this file, so.
 *
 * @note Size: 0x198.
 */
struct AgePlatform : public Platform {
	AgePlatform();

	virtual ~AgePlatform() { } // _08 (weak)

	void directCreate(u8*);
	void createGrid(int, int);

	// Unused/inlined:
	void setVertices(ArrayContainer<Vector3f>& vertices, Vector3f* array, int count) { vertices.setArray(array, count); }
	void addVertex(ArrayContainer<Vector3f>& vertices, Vector3f& vertex) { vertices.addOne(vertex); }

	// _00     = VTBL
	// _00-_1C = Platform
	Sys::OBBTree mOBBTree;         // _01C
	Sys::GridDivider mGridDivider; // _14C
};

bool CollTree::mDebug;

/**
 * __ct__8PlatformFv
 * @note Address: 0x801336A8
 * @note Size: 0x44
 */
Platform::Platform()
{
	mTriDivider = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x8
 */
void Platform::setTriDivider(Sys::TriDivider* triDivider)
{
	mTriDivider = (Sys::OBBTree*)triDivider;
}

/**
 * @note Address: 0x801336EC
 * @note Size: 0x8
 */
Sys::OBBTree* Platform::getTriDivider()
{
	return mTriDivider;
}

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
int PlatAttacher::getNumShapes()
{
	return mNumShapes;
}

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
	Sys::GridInfo info;
	// some other unknown nonsense here.
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void AgePlatform::directCreate(u8* data)
{
	// this is a guess, but it fits the function size + generates the right weak function ordering.
	RamStream input(data, -1);
	mOBBTree.read(input);
	setTriDivider(&mOBBTree);
	mGridDivider.read(input);
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
void AgePlatform::createGrid(int x, int z)
{
	// again, a guess, but size is right + generates the right weak function ordering.
	mGridDivider.create(mGridDivider.mBoundingBox, x, z, mTriDivider->mVertexTable, mTriDivider->mTriangleTable);
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
CollPart* CollTree::getCollPart(u32 partID)
{
	return (mPart != nullptr) ? mPart->getCollPart(partID) : nullptr;
}

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
				Vector3f diff = findArg.getHitPosition();
				diff          = Vector3f::sub2(diff, currPart->mPosition);
				f32 distance  = diff.sqrMagnitude() - currPart->getSqrRadius();

				if (distance < minDist) {
					foundPart = currPart;
					minDist   = distance;
				}
			}
		}

		return foundPart;
	}
	return nullptr;
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
CollPart::CollPart(SysShape::MtxObject* mtxObject)
{
	init(mtxObject);
}

/**
 * __ct__8CollPartFv
 * @note Address: 0x80136CD8
 * @note Size: 0x58
 */
CollPart::CollPart()
{
	init(nullptr);
}

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
bool CollPart::isStickable()
{
	return mSpecialID.match('s***', '*');
}

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
void CollPart::calcPoseMatrix(Vector3f& input, Matrixf& poseMatrix)
{
	switch (mPartType) {
	case COLLTYPE_SPHERE:
		Matrixf mtx;
		makeMatrixTo(mtx);

		Vector3f pos = mtx.getTranslation();
		pos          = Vector3f::sub2(pos, input);
		f32 len      = pos.normalise();

		if (len == 0.0f) {
			pos = Vector3f(0.0f, 0.0f, 1.0f);
		}

		Vector3f yAxis(0.0f, 1.0f, 0.0f);
		Vector3f crossProd = yAxis.cross(pos);
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

		poseMatrix.makeNaturalPosture(path, input.x);
		break;

	case COLLTYPE_TUBE:
		Sys::Tube tube;
		getTube(tube);

		Vector3f axis;
		tube.getAxisVector(axis);
		axis.negate();

		Vector3f axisCross = input;
		axisCross.CP(axis);
		axisCross.normalise();

		crossProd = axisCross;
		crossProd.CP(axis);
		crossProd.normalise();

		poseMatrix.setColumn(0, axisCross);
		poseMatrix.setColumn(1, axis);
		poseMatrix.setColumn(2, crossProd);
		break;
	}
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
void CollPart::draw(Graphics&)
{
}

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
void MouthCollPart::getPosition(Vector3f& outPosition)
{
	mMouthJoint->getWorldMatrix()->getTranslation(outPosition);
}

/**
 * @note Address: 0x80138510
 * @note Size: 0x38
 */
void MouthCollPart::copyMatrixTo(Matrixf& outMtx)
{
	PSMTXCopy(mMouthJoint->getWorldMatrix()->mMatrix.mtxView, outMtx.mMatrix.mtxView);
}

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
		input.setMode(STREAM_MODE_TEXT, 1);
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
CollPart* CollPartFactory::createInstance(SysShape::MtxObject* mtxObject, CollPartMgr* mgr)
{
	return clone(mtxObject, mgr);
}

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
