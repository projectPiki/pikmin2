#include "JSystem/JSupport/JSUList.h"
#include "types.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DPane.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility/JUTResource.h"

JGeometry::TBox2f J2DPane::static_mBounds(0.0f, 0.0f, 0.0f, 0.0f);

/*
 * --INFO--
 * Address:	80036AF0
 * Size:	0000C0
 */
J2DPane::J2DPane()
    : mTree(this)
{
	mTransform    = nullptr;
	mBloBlockType = 'PAN1';
	mIsVisible    = true;
	mTag          = 0;
	mMessageID    = 0;
	mBounds.set(0.0f, 0.0f, 0.0f, 0.0f);

	initiate();
	changeUseTrans(nullptr);
	calcMtx();
}

/*
 * --INFO--
 * Address:	80036BB0
 * Size:	000040
 */
void J2DPane::calcMtx()
{
	if (mTree.getList()) {
		makeMatrix(mOffset.x, mOffset.y);
	}
}

/*
 * --INFO--
 * Address:	80036BF0
 * Size:	00003C
 */
void J2DPane::makeMatrix(f32 f1, f32 f2) { makeMatrix(f1, f2, -mBounds.i.x, -mBounds.i.y); }

/*
 * --INFO--
 * Address:	80036C2C
 * Size:	000088
 */
void J2DPane::initiate()
{
	_004    = 0xFFFF;
	mAngleX = 0.0f;
	mAngleY = 0.0f;
	mAngleZ = 0.0f;
	mAnchorPoint.set(0.0f, 0.0f);
	mBasePosition      = J2DPOS_TopLeft;
	mRotationAxis      = J2DROTATE_Z;
	mScale             = JGeometry::TVec2f(1.0f);
	mCullMode          = GX_CULL_NONE;
	mAlpha             = 255;
	mIsInfluencedAlpha = true;
	mColorAlpha        = 255;
	mIsConnected       = 0;
	calcMtx();
}

/*
 * __ct__7J2DPaneFP7J2DPanebUxRCQ29JGeometry8TBox2<f>
 * --INFO--
 * Address:	80036CB4
 * Size:	000088
 */
J2DPane::J2DPane(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box)
    : mTree(this)
    , mTransform(nullptr)
{
	initialize(parent, isVisible, tag, box);
}

/*
 * --INFO--
 * Address:	80036D3C
 * Size:	000120
 */
void J2DPane::initialize(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box)
{
	mBloBlockType = 'PAN1';
	mIsVisible    = isVisible;
	mTag          = tag;
	mMessageID    = 0;
	mBounds.set(box);
	if (parent) {
		parent->mTree.appendChild(&mTree);
	}
	initiate();
	changeUseTrans(parent);
	calcMtx();
}

/*
 * __ct__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 * --INFO--
 * Address:	80036E5C
 * Size:	000078
 */
J2DPane::J2DPane(u64 tag, const JGeometry::TBox2f& box)
    : mTree(this)
    , mTransform(nullptr)
{
	initialize(tag, box);
}

/*
 * --INFO--
 * Address:	80036ED4
 * Size:	0000F4
 * initialize__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 */
void J2DPane::initialize(u64 tag, const JGeometry::TBox2f& box) { initialize(nullptr, true, tag, box); }

/*
 * __ct__7J2DPaneFP7J2DPaneP20JSURandomInputStreamUc
 * --INFO--
 * Address:	80036FC8
 * Size:	000120
 */
J2DPane::J2DPane(J2DPane* parent, JSURandomInputStream* input, u8 version)
    : mTree(this)
    , mTransform(nullptr)
{
	if (version == 0) {
		J2DScrnBlockHeader header;
		int position = input->getPosition();
		input->read(&header, sizeof(J2DScrnBlockHeader));
		mBloBlockType = header.mBloBlockType;
		position += header.mBlockLength;
		makePaneStream(parent, input);
		input->seek(position, SEEK_SET);
	} else {
		J2DScrnBlockHeader header;
		int position = input->getPosition();
		input->peek(&header, sizeof(J2DScrnBlockHeader));
		mBloBlockType = header.mBloBlockType;
		position += header.mBlockLength;
		makePaneExStream(parent, input);
		input->seek(position, SEEK_SET);
	}
}

/*
 * --INFO--
 * Address:	800370E8
 * Size:	000340
 */
void J2DPane::makePaneStream(J2DPane* parent, JSURandomInputStream* input)
{
	u8 valuesRemaining;
	input->read(&valuesRemaining, 1);
	input->read(&mIsVisible, 1);
	input->skip(2);
	u32 tag;
	input->read(&tag, 4);
	mTag = tag;

	JGeometry::TVec2f topLeft;
	topLeft.x = input->readS16();
	topLeft.y = input->readS16();
	JGeometry::TVec2f bottomRight;
	bottomRight.x = input->readS16() + topLeft.x;
	bottomRight.y = input->readS16() + topLeft.y;
	mBounds.set(topLeft, bottomRight);
	valuesRemaining -= 6;
	mAngleX = 0.0f;
	mAngleY = 0.0f;
	mAngleZ = 0.0f;
	if (valuesRemaining != 0) {
		mAngleZ = input->readU16();
		valuesRemaining--;
	}
	if (valuesRemaining != 0) {
		u8 basePosition = input->readByte();
		mBasePosition   = (J2DBasePosition)basePosition;
		valuesRemaining--;
	} else {
		mBasePosition = J2DPOS_TopLeft;
	}
	mRotationAxis = J2DROTATE_Z;
	mAlpha        = 255;
	if (valuesRemaining != 0) {
		mAlpha = input->readByte();
		valuesRemaining--;
	}
	mIsInfluencedAlpha = true;
	if (valuesRemaining != 0) {
		mIsInfluencedAlpha = input->readByte();
		valuesRemaining--;
	}
	input->align(4);
	if (parent) {
		parent->mTree.appendChild(&mTree);
	}
	mCullMode    = 0;
	mColorAlpha  = 255;
	mIsConnected = 0;
	_004         = -1;
	mScale.x     = 1.0f;
	mScale.y     = 1.0f;
	mMessageID   = 0;
	changeUseTrans(parent);
	calcMtx();
}

/*
 * --INFO--
 * Address:	80037428
 * Size:	0001BC
 */
void J2DPane::changeUseTrans(J2DPane* parent)
{
	JGeometry::TVec2f v1(0.0f, 0.0f);
	if (mBasePosition % 3 == 1) {
		v1.x = mBounds.getWidth() / 2;
	} else if (mBasePosition % 3 == 2) {
		v1.x = mBounds.getWidth();
	}

	if (mBasePosition / 3 == 1) {
		v1.y = mBounds.getHeight() / 2;
	} else if (mBasePosition / 3 == 2) {
		v1.y = mBounds.getHeight();
	}

	mOffset.x = mBounds.i.x + v1.x;
	mOffset.y = mBounds.i.y + v1.y;

	mAnchorPoint = v1;
	v1.set(-mOffset.x, -mOffset.y);
	mBounds.addPos(v1);

	if (parent) {
		u8 parentBasePos = parent->mBasePosition;
		f32 width        = parent->mBounds.getWidth();
		f32 height       = parent->mBounds.getHeight();
		v1.set(parent->mBounds.getWidth(), parent->mBounds.getHeight());

		if (parentBasePos % 3 == 1) {
			mOffset.x -= width / 2;
		} else if (parentBasePos % 3 == 2) {
			mOffset.x -= width;
		}

		if (parentBasePos / 3 == 1) {
			mOffset.y -= height / 2;
		} else if (parentBasePos / 3 == 2) {
			mOffset.y -= height;
		}
	}
}

/*
 * --INFO--
 * Address:	800375E4
 * Size:	0000E0
 */
J2DPane::~J2DPane()
{
	JSUTreeIterator<J2DPane> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		J2DPane* child = (iterator++).getObject();
		delete child;
	}
}

/*
 * --INFO--
 * Address:	800376C4
 * Size:	0000B8
 */
bool J2DPane::appendChild(J2DPane* child)
{
	if (child == nullptr) {
		return false;
	}

	J2DPane* oldParent = child->getParentPane();
	bool appendResult  = mTree.appendChild(&child->mTree);
	if ((appendResult) && oldParent == nullptr) {
		child->add(mBounds.i.x, mBounds.i.y);
		child->calcMtx();
	}
	return appendResult;
}

/*
 * --INFO--
 * Address:	8003777C
 * Size:	0000B8
 */
bool J2DPane::prependChild(J2DPane* child)
{
	if (child == nullptr) {
		return false;
	}
	J2DPane* oldParent = child->getParentPane();
	bool prependResult = mTree.prependChild(&child->mTree);
	if ((prependResult) && oldParent == nullptr) {
		child->add(mBounds.i.x, mBounds.i.y);
		child->calcMtx();
	}
	return prependResult;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000DC
 */
bool J2DPane::insertChild(J2DPane* before, J2DPane* child)
{
	// UNUSED FUNCTION
	// NOT VERIFIED
	if (before == nullptr || child == nullptr) {
		return false;
	}
	J2DPane* oldParent = child->getParentPane();
	bool removeResult  = mTree.insertChild(&before->mTree, &child->mTree);
	if ((removeResult) && oldParent == nullptr) {
		child->add(mBounds.i.x, mBounds.i.y);
		child->calcMtx();
	}
	return removeResult;
}

/*
 * --INFO--
 * Address:	80037834
 * Size:	0000A4
 */
bool J2DPane::removeChild(J2DPane* child)
{
	if (child == nullptr) {
		return false;
	}
	bool removeResult = mTree.removeChild(&child->mTree);
	if (removeResult) {
		child->add(-mBounds.i.x, -mBounds.i.y);
		child->calcMtx();
	}
	return removeResult;
}

/*
 * --INFO--
 * Address:	800378D8
 * Size:	000658
 */
void J2DPane::draw(f32 x, f32 y, const J2DGrafContext* grafContext, bool isOrthoGraf, bool check)
{
	bool unkBool = check && mIsVisible;
	if (grafContext->getGrafType() != 1) {
		isOrthoGraf = false;
	}

	JSUTree<J2DPane>* parentTree = mTree.getParent();
	J2DPane* parent              = nullptr;
	if (parentTree) {
		parent = parentTree->getObject();
	}

	if (mBounds.isValid()) {
		mGlobalBounds = mBounds;

		mGlobalBounds.addPos(mOffset.x, mOffset.y);

		if (unkBool) {
			mClipRect = mBounds;
			rewriteAlpha();
		}

		if (parent) {
			f32 width  = parent->mGlobalBounds.i.x - parent->mBounds.i.x;
			f32 height = parent->mGlobalBounds.i.y - parent->mBounds.i.y;
			mGlobalBounds.addPos(width, height);
			PSMTXConcat(parent->mGlobalMtx, mPositionMtx, mGlobalMtx);

			if (unkBool) {
				if (isOrthoGraf) {
					mClipRect = mGlobalBounds;
					mClipRect.intersect(parent->mClipRect);
				}

				mColorAlpha = mAlpha;
				if (mIsInfluencedAlpha) {
					mColorAlpha = (mAlpha * parent->mColorAlpha) / 255;
				}
			}
		} else {
			mGlobalBounds.addPos(x, y);
			makeMatrix(mOffset.x + x, mOffset.y + y);
			PSMTXCopy(mPositionMtx, mGlobalMtx);
			mClipRect   = mGlobalBounds;
			mColorAlpha = mAlpha;
		}

		JGeometry::TBox2<f32> scissorBounds(0.0f, 0.0f, 0.0f, 0.0f);
		if (unkBool && isOrthoGraf) {
			((J2DOrthoGraph*)grafContext)->scissorBounds(&scissorBounds, &mClipRect);
		}

		if (unkBool && (mClipRect.isValid() || !isOrthoGraf)) {
			J2DGrafContext tmpGraf = *grafContext;
			if (isOrthoGraf) {
				tmpGraf.scissor(scissorBounds);
				tmpGraf.setScissor();
			}
			GXSetCullMode((GXCullMode)mCullMode);
			drawSelf(x, y, &tmpGraf.mPosMtx);
		}

		JSUTreeIterator<J2DPane> iter;
		for (iter = mTree.getFirstChild(); iter != mTree.getEndChild(); ++iter) {
			iter.getObject()->draw(0, 0, grafContext, isOrthoGraf, unkBool);
		}
	}
}

/*
 * --INFO--
 * Address:	80037F30
 * Size:	000004
 */
// void J2DPane::drawSelf(f32, f32, Mtx*) { }

/*
 * --INFO--
 * Address:	80037F34
 * Size:	000004
 */
// void J2DPane::rewriteAlpha() { }

/*
 * --INFO--
 * Address:	80037F38
 * Size:	000248
 */
void J2DPane::place(const JGeometry::TBox2f& box)
{
	JGeometry::TBox2<f32> tmpBox;

	if (mBounds.i.x == 0.0f) {
		tmpBox.i.x = 0.0f;
		tmpBox.f.x = box.getWidth();
		mOffset.x  = box.i.x;
	} else if (mBounds.f.x == 0.0f) {
		tmpBox.i.x = -box.getWidth();
		tmpBox.f.x = 0.0f;
		mOffset.x  = box.f.x;
	} else {
		tmpBox.i.x = -(box.getWidth() / 2);
		tmpBox.f.x = box.getWidth() / 2;
		mOffset.x  = (box.i.x + box.f.x) / 2;
	}

	if (mBounds.i.y == 0.0f) {
		tmpBox.i.y = 0.0f;
		tmpBox.f.y = box.getHeight();
		mOffset.y  = box.i.y;
	} else if (mBounds.f.y == 0.0f) {
		tmpBox.i.y = -box.getHeight();
		tmpBox.f.y = 0.0f;
		mOffset.y  = box.f.y;
	} else {
		tmpBox.i.y = -(box.getHeight() / 2);
		tmpBox.f.y = box.getHeight() / 2;
		mOffset.y  = (box.i.y + box.f.y) / 2;
	}

	f32 xOff = tmpBox.i.x - mBounds.i.x;
	f32 yOff = tmpBox.i.y - mBounds.i.y;
	for (J2DPane* child = getFirstChildPane(); child; child = child->getNextChildPane()) {
		child->mOffset.x += xOff;
		child->mOffset.y += yOff;
		if (xOff != 0.0f || yOff != 0.0f) {
			child->calcMtx();
		}
	}
	mBounds = tmpBox;

	J2DPane* parent = getParentPane();
	if (parent) {
		mOffset.x += parent->mBounds.i.x;
		mOffset.y += parent->mBounds.i.y;
	}
	calcMtx();
}

/*
 * --INFO--
 * Address:	80038180
 * Size:	000054
 */
void J2DPane::move(f32 x, f32 y)
{
	f32 width  = getWidth();
	f32 height = getHeight();
	place(JGeometry::TBox2<f32>(x, y, x + width, y + height));
}

/*
 * --INFO--
 * Address:	800381D4
 * Size:	000044
 */
void J2DPane::add(f32 x, f32 y)
{
	mOffset.add(JGeometry::TVec2f(x, y));
	calcMtx();
}

/*
 * --INFO--
 * Address:	80038218
 * Size:	000108
 */
void J2DPane::resize(f32 x, f32 y)
{
	JGeometry::TBox2<f32> box = mBounds;

	// f32 tX = mOffset.x;
	// f32 tY = mOffset.y;

	box.addPos(mOffset.x, mOffset.y);

	const J2DPane* parent = getParentPane();
	if (parent) {
		box.addPos(-parent->mBounds.i.x, -parent->mBounds.i.y);
	}

	box.f.x = box.i.x + x;
	box.f.y = box.i.y + y;
	place(box);
}

/*
 * --INFO--
 * Address:	80038320
 * Size:	0000E0
 */
JGeometry::TBox2f* J2DPane::getBounds()
{
	static_mBounds = mBounds;
	static_mBounds.addPos(mOffset.x, mOffset.y);
	J2DPane* parent = getParentPane();
	if (parent != nullptr) {
		static_mBounds.addPos(-parent->mBounds.i.x, -parent->mBounds.i.y);
	}
	return &static_mBounds;
}

/*
 * --INFO--
 * Address:	80038400
 * Size:	000030
 */
void J2DPane::rotate(f32 anchorX, f32 anchorY, J2DRotateAxis axis, f32 angle)
{
	mAnchorPoint.x = anchorX;
	mAnchorPoint.y = anchorY;
	mRotationAxis  = (u8)axis;
	rotate(angle);
}

/*
 * --INFO--
 * Address:	80038430
 * Size:	000058
 * rotate__7J2DPaneFf
 * TODO: Can't verify this with genasm.sh
 */
void J2DPane::rotate(f32 f1)
{
	s8 axis = mRotationAxis;
	if (axis == J2DROTATE_X) {
		mAngleX = f1;
	} else {
		if (axis == J2DROTATE_Y) {
			mAngleY = f1;
		} else {
			mAngleZ = f1;
		}
	}
	calcMtx();
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
f32 J2DPane::getRotate() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80038488
 * Size:	00007C
 */
void J2DPane::clip(const JGeometry::TBox2f& bounds)
{
	JGeometry::TBox2<f32> boxA(bounds);
	boxA.addPos(mGlobalBounds.i.x, mGlobalBounds.i.y);
	mClipRect.intersect(boxA);
}

/*
 * --INFO--
 * Address:	80038504
 * Size:	0000B0
 */
J2DPane* J2DPane::search(u64 tag)
{
	if (tag == mTag) {
		return this;
	}

	JSUTreeIterator<J2DPane> iter;
	for (iter = mTree.getFirstChild(); iter != mTree.getEndChild(); ++iter) {
		if (J2DPane* result = iter.getObject()->search(tag)) {
			return result;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	800385B4
 * Size:	000310
 */
void J2DPane::gather(J2DPane** gatheredPanes, u64 minID, u64 maxID, int gatheredLimit, int& gatheredCount)
{
	if (minID <= mTag && mTag <= maxID) {
		if (gatheredCount < gatheredLimit) {
			gatheredPanes[gatheredCount] = this;
		}
		gatheredCount++;
	}

	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != mTree.getEndChild(); ++iterator) {
		iterator->gather(gatheredPanes, minID, maxID, gatheredLimit, gatheredCount);
	}
}

/*
 * --INFO--
 * Address:	80038944
 * Size:	0000B0
 */
J2DPane* J2DPane::searchUserInfo(u64 id)
{
	if (id == mMessageID) {
		return this;
	}
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		J2DPane* results = iterator->searchUserInfo(id);
		if (results != nullptr) {
			return results;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000310
 */
void J2DPane::gatherUserInfo(J2DPane**, u64, u64, int, int&)
{
	// UNUSED FUNCTIOM
}

/*
 * --INFO--
 * Address:	800389F4
 * Size:	000088
 */
bool J2DPane::isUsed(const ResTIMG* resource)
{
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		if (iterator->isUsed(resource)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80038A7C
 * Size:	000088
 * isUsed__7J2DPaneFPC7ResFONT
 */
bool J2DPane::isUsed(const ResFONT* resource)
{
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		if (iterator->isUsed(resource)) {
			return true;
		}
	}
	return false;
}

/*
 * --INFO--
 * Address:	80038B04
 * Size:	000140
 */
void J2DPane::makeMatrix(f32 x, f32 y, f32 xAngOff, f32 yAngOff)
{
	f32 tmpX = mAnchorPoint.x - xAngOff;
	f32 tmpY = mAnchorPoint.y - yAngOff;
	Mtx rotX, rotY, rotZ, rotMtx, mtx, tmp;
	PSMTXTrans(mtx, -tmpX, -tmpY, 0);
	PSMTXRotRad(rotX, J2DROTATE_X, MTXDegToRad(mAngleX));
	PSMTXRotRad(rotY, J2DROTATE_Y, MTXDegToRad(mAngleY));
	PSMTXRotRad(rotZ, J2DROTATE_Z, MTXDegToRad(-mAngleZ));
	PSMTXConcat(rotZ, rotX, tmp);
	PSMTXConcat(rotY, tmp, rotMtx);
	PSMTXScaleApply(mtx, mPositionMtx, mScale.x, mScale.y, 1.0f);
	PSMTXConcat(rotMtx, mPositionMtx, tmp);
	PSMTXTransApply(tmp, mPositionMtx, x + tmpX, y + tmpY, 0.0f);
}

/*
 * --INFO--
 * Address:	80038C44
 * Size:	000078
 */
void J2DPane::setCullBack(GXCullMode cullMode)
{
	mCullMode = cullMode;
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setCullBack(cullMode);
	}
}

/*
 * --INFO--
 * Address:	80038CBC
 * Size:	0000F0
 */
void J2DPane::setBasePosition(J2DBasePosition base)
{
	mBasePosition  = base;
	mRotationAxis  = J2DROTATE_Z; // 0x7A
	mAnchorPoint.x = 0.0f;
	if (base % 3 == 1) {
		mAnchorPoint.x = getWidth() / 2;
	} else {
		if (base % 3 == 2) {
			mAnchorPoint.x = getWidth();
		}
	}
	mAnchorPoint.y = 0.0f;
	if (base / 3 == 1) {
		mAnchorPoint.y = getHeight() / 2;
	} else {
		if (base / 3 == 2) {
			mAnchorPoint.y = getHeight();
		}
	}
	calcMtx();
}

/*
 * --INFO--
 * Address:	80038DAC
 * Size:	0001E4
 */
void J2DPane::setInfluencedAlpha(bool isInfluencedAlpha, bool check)
{
	if (check && mIsInfluencedAlpha != isInfluencedAlpha) {
		J2DPane* parent = getParentPane();
		u8 alpha        = 255;

		for (parent; parent; parent = parent->getParentPane()) {
			if (parent->mAlpha == 0) {
				alpha = 0;
				break;
			}
			alpha = (((f32)alpha) * parent->mAlpha / 255);
			if (!parent->mIsInfluencedAlpha) {
				break;
			}
		}

		if (isInfluencedAlpha) {
			if (alpha == 0) {
				setAlpha(0);
			} else {
				f32 fAlpha = ((f32)mAlpha) / alpha * 255;

				u8 alpha;
				if (fAlpha > 255) {
					alpha = 255;
				} else {
					alpha = fAlpha;
				}
				setAlpha(alpha);
			}
		} else {
			setAlpha((f32)(alpha * mAlpha) / 255);
		}
	}

	mIsInfluencedAlpha = isInfluencedAlpha;
}

/*
 * --INFO--
 * Address:	80038F98
 * Size:	0000D8
 */
JGeometry::TVec3f J2DPane::getGlbVtx(u8 idx) const
{
	JGeometry::TVec3<f32> out;
	if (idx >= 4) {
		out = JGeometry::TVec3f(0.0f);
		return out;
	} else {
		f32 x, y;
		if (idx & 1) {
			x = mBounds.f.x;
		} else {
			x = mBounds.i.x;
		}

		if (idx & 2) {
			y = mBounds.f.y;
		} else {
			y = mBounds.i.y;
		}

		out.x = x * mGlobalMtx[0][0] + y * mGlobalMtx[0][1] + mGlobalMtx[0][3];
		out.y = x * mGlobalMtx[1][0] + y * mGlobalMtx[1][1] + mGlobalMtx[1][3];
		out.z = x * mGlobalMtx[2][0] + y * mGlobalMtx[2][1] + mGlobalMtx[2][3];
		return out;
	}
	/*
	clrlwi   r6, r5, 0x18
	stwu     r1, -0x20(r1)
	cmplwi   r6, 4
	blt      lbl_80038FD4
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	lwz      r0, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	stw      r0, 8(r3)
	b        lbl_80039068

lbl_80038FD4:
	clrlwi.  r0, r5, 0x1f
	beq      lbl_80038FE4
	lfs      f6, 0x28(r4)
	b        lbl_80038FE8

lbl_80038FE4:
	lfs      f6, 0x20(r4)

lbl_80038FE8:
	rlwinm.  r0, r6, 0, 0x1e, 0x1e
	beq      lbl_80038FF8
	lfs      f7, 0x2c(r4)
	b        lbl_80038FFC

lbl_80038FF8:
	lfs      f7, 0x24(r4)

lbl_80038FFC:
	lfs      f0, 0x84(r4)
	lfs      f1, 0x94(r4)
	fmuls    f4, f7, f0
	lfs      f5, 0x80(r4)
	lfs      f0, 0xa4(r4)
	fmuls    f2, f7, f1
	lfs      f3, 0x90(r4)
	fmadds   f4, f6, f5, f4
	lfs      f5, 0x8c(r4)
	fmuls    f0, f7, f0
	lfs      f1, 0xa0(r4)
	fmadds   f2, f6, f3, f2
	fadds    f4, f5, f4
	lfs      f3, 0x9c(r4)
	fmadds   f0, f6, f1, f0
	lfs      f1, 0xac(r4)
	fadds    f2, f3, f2
	stfs     f4, 8(r1)
	fadds    f0, f1, f0
	lwz      r0, 8(r1)
	stfs     f2, 0xc(r1)
	stfs     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	stw      r0, 0(r3)
	lwz      r0, 0x10(r1)
	stw      r4, 4(r3)
	stw      r0, 8(r3)

lbl_80039068:
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80039070
 * Size:	000038
 */
J2DPane* J2DPane::getFirstChildPane()
{
	if (mTree.getFirstChild() == nullptr) {
		return nullptr;
	}
	return mTree.getFirstChild()->getObject();
}

/*
 * --INFO--
 * Address:	800390A8
 * Size:	000038
 */
J2DPane* J2DPane::getNextChildPane()
{
	if (mTree.getNextChild() == nullptr) {
		return nullptr;
	}
	return mTree.getNextChild()->getObject();
	// the following works too:
	// return (mTree.getNextChild() == nullptr) ? nullptr : mTree.getNextChild()->getObject();
}

/*
 * --INFO--
 * Address:	800390E0
 * Size:	00001C
 */
J2DPane* J2DPane::getParentPane() { return (mTree.getParent() == nullptr) ? nullptr : mTree.getParent()->getObject(); }

/*
 * --INFO--
 * Address:	800390FC
 * Size:	00020C
 */
void J2DPane::makePaneExStream(J2DPane* parent, JSURandomInputStream* input)
{
	input->getPosition();

	J2DPaneExBlock data;
	input->read(&data, sizeof(data));
	// field_0x4 = data.field_0xa;
	// mVisible = !!data.mVisible;
	// mInfoTag = data.mInfoTag;
	// mUserInfoTag = data.mUserInfoTag;
	// mScaleX = data.mScaleX;
	// mScaleY = data.mScaleY;
	// mRotateX = data.mRotateX;
	// mRotateY = data.mRotateY;
	// mRotateZ = data.mRotateZ;
	// mTranslateX = data.mTranslateX;
	// mTranslateY = data.mTranslateY;
	// mRotAxis = ROTATE_Z;

	if (data.mBasePosition % 3 == 0) {
		// mRotateOffsetX = 0;
	} else if (data.mBasePosition % 3 == 1) {
		// mRotateOffsetX = data.mRotOffsetX / 2;
	} else {
		// mRotateOffsetX = data.mRotOffsetX;
	}

	if (data.mBasePosition / 3 == 0) {
		// mRotateOffsetY = 0;
	} else if (data.mBasePosition / 3 == 1) {
		// mRotateOffsetY = data.mRotOffsetY / 2;
	} else {
		// mRotateOffsetY = data.mRotOffsetY;
	}

	// mBounds.set(-mRotateOffsetX, -mRotateOffsetY, data.mRotOffsetX - mRotateOffsetX,
	// data.mRotOffsetY - mRotateOffsetY);
	mBasePosition = data.mBasePosition;

	mAlpha             = 255;
	mIsInfluencedAlpha = false;

	if (parent != NULL) {
		parent->mTree.appendChild(&mTree);
	}

	mCullMode    = GX_CULL_NONE;
	mColorAlpha  = 255;
	mIsConnected = false;
	calcMtx();
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stw      r31, 0x5c(r1)
	mr       r31, r4
	stw      r30, 0x58(r1)
	mr       r30, r3
	stw      r29, 0x54(r1)
	mr       r29, r5
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	mr       r3, r29
	addi     r4, r1, 8
	li       r5, 0x48
	bl       read__14JSUInputStreamFPvl
	lhz      r0, 0x12(r1)
	lis      r3, 0x55555556@ha
	li       r4, 0x7a
	sth      r0, 4(r30)
	addi     r0, r3, 0x55555556@l
	lbz      r5, 0x14(r1)
	neg      r3, r5
	or       r3, r3, r5
	srwi     r3, r3, 0x1f
	stb      r3, 0xb0(r30)
	lwz      r3, 0x18(r1)
	lwz      r5, 0x1c(r1)
	stw      r5, 0x14(r30)
	stw      r3, 0x10(r30)
	lwz      r3, 0x20(r1)
	lwz      r5, 0x24(r1)
	stw      r5, 0x1c(r30)
	stw      r3, 0x18(r30)
	lfs      f0, 0x30(r1)
	stfs     f0, 0xcc(r30)
	lfs      f0, 0x34(r1)
	stfs     f0, 0xd0(r30)
	lfs      f0, 0x38(r1)
	stfs     f0, 0xb8(r30)
	lfs      f0, 0x3c(r1)
	stfs     f0, 0xbc(r30)
	lfs      f0, 0x40(r1)
	stfs     f0, 0xc0(r30)
	lfs      f0, 0x44(r1)
	stfs     f0, 0xd4(r30)
	lfs      f0, 0x48(r1)
	stfs     f0, 0xd8(r30)
	stb      r4, 0xb6(r30)
	lbz      r4, 0x15(r1)
	mulhw    r3, r0, r4
	srwi     r0, r3, 0x1f
	add      r0, r3, r0
	mulli    r0, r0, 3
	subf.    r0, r0, r4
	bne      lbl_800391F0
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 0xc4(r30)
	b        lbl_80039214

lbl_800391F0:
	cmpwi    r0, 1
	bne      lbl_8003920C
	lfs      f1, 0x28(r1)
	lfs      f0, lbl_805167D8@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0xc4(r30)
	b        lbl_80039214

lbl_8003920C:
	lfs      f0, 0x28(r1)
	stfs     f0, 0xc4(r30)

lbl_80039214:
	lis      r3, 0x55555556@ha
	lbz      r0, 0x15(r1)
	addi     r3, r3, 0x55555556@l
	mulhw    r3, r3, r0
	srwi     r0, r3, 0x1f
	add.     r0, r3, r0
	bne      lbl_8003923C
	lfs      f0, lbl_805167C0@sda21(r2)
	stfs     f0, 0xc8(r30)
	b        lbl_80039260

lbl_8003923C:
	cmpwi    r0, 1
	bne      lbl_80039258
	lfs      f1, 0x2c(r1)
	lfs      f0, lbl_805167D8@sda21(r2)
	fmuls    f0, f1, f0
	stfs     f0, 0xc8(r30)
	b        lbl_80039260

lbl_80039258:
	lfs      f0, 0x2c(r1)
	stfs     f0, 0xc8(r30)

lbl_80039260:
	lfs      f5, 0xc4(r30)
	li       r3, 0xff
	lfs      f4, 0xc8(r30)
	cmplwi   r31, 0
	fneg     f1, f5
	lfs      f3, 0x2c(r1)
	lfs      f2, 0x28(r1)
	fneg     f0, f4
	fsubs    f3, f3, f4
	li       r0, 0
	stfs     f1, 0x20(r30)
	fsubs    f1, f2, f5
	stfs     f0, 0x24(r30)
	stfs     f1, 0x28(r30)
	stfs     f3, 0x2c(r30)
	lbz      r4, 0x15(r1)
	stb      r4, 0xb7(r30)
	stb      r3, 0xb2(r30)
	stb      r0, 0xb4(r30)
	beq      lbl_800392C4
	addic.   r4, r30, 0xdc
	beq      lbl_800392BC
	addi     r4, r4, 0xc

lbl_800392BC:
	addi     r3, r31, 0xdc
	bl       append__10JSUPtrListFP10JSUPtrLink

lbl_800392C4:
	li       r4, 0
	li       r0, 0xff
	stb      r4, 0xb1(r30)
	mr       r3, r30
	stb      r0, 0xb3(r30)
	stb      r4, 0xb5(r30)
	lwz      r12, 0(r30)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x64(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	80039308
 * Size:	0000B8
 */
s16 J2DPane::J2DCast_F32_to_S16(f32 value, u8 cutoff)
{
	if (cutoff >= 15) {
		return 0;
	} else {
		f32 tmpF;
		tmpF = value;
		if (value < 0) {
			tmpF = -value;
		}
		int tmp = tmpF * (1 << cutoff);
		if (tmp >= 0x8000) {
			if (value < 0) {
				return 0x8000;
			} else {
				return 0x7FFF;
			}
		} else if (value < 0) {
			return ~tmp + 1;
		} else {
			return tmp;
		}
	}
}

/*
 * --INFO--
 * Address:	800393C0
 * Size:	00014C
 */
void* J2DPane::getPointer(JSURandomInputStream* stream, u32 p1, JKRArchive* archive)
{
	JUTResReference resRef;

	void* pointer;
	if (archive == nullptr) {
		if (J2DScreen::getDataManage() == nullptr) {
			pointer = resRef.getResource(stream, p1, nullptr);
		} else {
			s32 prevPos = stream->getPosition();
			pointer     = resRef.getResource(stream, p1, nullptr);
			if (pointer == nullptr) {
				stream->seek(prevPos, SEEK_SET);
				pointer = J2DScreen::getDataManage()->get(stream);
			}
		}
	} else {
		s32 prevPos = stream->getPosition();
		pointer     = resRef.getResource(stream, p1, archive);
		if (pointer == nullptr) {
			stream->seek(prevPos, SEEK_SET);
			pointer = resRef.getResource(stream, p1, nullptr);
		}

		if (pointer == nullptr) {
			if (J2DScreen::getDataManage() != nullptr) {
				stream->seek(prevPos, SEEK_SET);
				pointer = J2DScreen::getDataManage()->get(stream);
			}
		}
	}
	return pointer;
}

/*
 * --INFO--
 * Address:	8003950C
 * Size:	0000D0
 * setAnimation__7J2DPaneFP10J2DAnmBase
 */
void J2DPane::setAnimation(J2DAnmBase* animation)
{
	if (animation == nullptr) {
		return;
	}
	switch (animation->mKind) {
	case J2DANM_Transform:
		setAnimation((J2DAnmTransform*)animation);
		break;
	case J2DANM_Color:
		setAnimation((J2DAnmColor*)animation);
		break;
	case J2DANM_VtxColor:
		setAnimation((J2DAnmVtxColor*)animation);
		break;
	case J2DANM_TextureSRT:
		setAnimation((J2DAnmTextureSRTKey*)animation);
		break;
	case J2DANM_TexturePattern:
		setAnimation((J2DAnmTexPattern*)animation);
		break;
	case J2DANM_VisibilityFull:
		setAnimation((J2DAnmVisibilityFull*)animation);
		break;
	case J2DANM_TevReg:
		setAnimation((J2DAnmTevRegKey*)animation);
		break;
	case J2DANM_Unk3:
		break;
	}
}

/*
 * --INFO--
 * Address:	800395DC
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmTevRegKey*) { }

/*
 * --INFO--
 * Address:	800395E0
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmVisibilityFull*) { }

/*
 * --INFO--
 * Address:	800395E4
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmTexPattern*) { }

/*
 * --INFO--
 * Address:	800395E8
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmTextureSRTKey*) { }

/*
 * --INFO--
 * Address:	800395EC
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmVtxColor*) { }

/*
 * --INFO--
 * Address:	800395F0
 * Size:	000004
 */
// void J2DPane::setAnimation(J2DAnmColor*) { }

/*
 * --INFO--
 * Address:	800395F4
 * Size:	000008
 */
void J2DPane::setAnimation(J2DAnmTransform* animation) { mTransform = animation; }

/*
 * --INFO--
 * Address:	800395FC
 * Size:	000038
 */
void J2DPane::animationTransform()
{
	if (mTransform != nullptr) {
		animationTransform(mTransform);
	}
}

/*
 * --INFO--
 * Address:	80039634
 * Size:	00007C
 */
void J2DPane::clearAnmTransform()
{
	setAnimation((J2DAnmTransform*)nullptr);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->clearAnmTransform();
	}
}

/*
 * --INFO--
 * Address:	800396B0
 * Size:	0000A0
 * animationTransform__7J2DPaneFPC15J2DAnmTransform
 */
const J2DAnmTransform* J2DPane::animationTransform(const J2DAnmTransform* animation)
{
	if (mTransform != nullptr) {
		animation = mTransform;
	}
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->animationTransform(animation);
	}
	updateTransform(animation);
	return animation;
}

/*
 * --INFO--
 * Address:	80039750
 * Size:	000088
 */
void J2DPane::setVisibileAnimation(J2DAnmVisibilityFull* animation)
{
	setAnimationVF(animation);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVisibileAnimation(animation);
	}
}

/*
 * --INFO--
 * Address:	800397D8
 * Size:	00002C
 */
// void J2DPane::setAnimationVF(J2DAnmVisibilityFull* animationVF) { setAnimation(animationVF); }

/*
 * --INFO--
 * Address:	80039804
 * Size:	000088
 */
void J2DPane::setVtxColorAnimation(J2DAnmVtxColor* animation)
{
	setAnimationVC(animation);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVtxColorAnimation(animation);
	}
}

/*
 * --INFO--
 * Address:	8003988C
 * Size:	00002C
 */
// void J2DPane::setAnimationVC(J2DAnmVtxColor* animationVC) { setAnimation(animationVC); }

/*
 * --INFO--
 * Address:	800398B8
 * Size:	0000A0
 */
const J2DAnmTransform* J2DPane::animationPane(const J2DAnmTransform* animation)
{
	if (mTransform != nullptr) {
		animation = mTransform;
	}
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->animationPane(animation);
	}
	updateTransform(animation);
	return animation;
}

/*
 * --INFO--
 * Address:	80039958
 * Size:	000108
 */
void J2DPane::updateTransform(const J2DAnmTransform* transform)
{
	if (_004 != 0xFFFF && transform != NULL) {
		J3DTransformInfo info;
		transform->getTransform(_004, &info);
		mScale.x  = info.mScale.x;
		mScale.y  = info.mScale.z;
		mAngleX   = (u16)info.mRotation.x * 360.0f / 65535.0f;
		mAngleY   = (u16)info.mRotation.z * 360.0f / 65535.0f;
		mAngleZ   = (u16)info.mRotation.y * 360.0f / 65535.0f;
		mOffset.x = info.mTranslation.x;
		mOffset.y = info.mTranslation.z;
		calcMtx();
	}
}

/*
 * --INFO--
 * Address:	80039A60
 * Size:	000004
 */
// void J2DAnmTransform::getTransform(u16, J3DTransformInfo*) const { }

/*
 * --INFO--
 * Address:	80039A64
 * Size:	000008
 */
// u32 J2DPane::getTypeID() const { return 0x10; }

/*
 * --INFO--
 * Address:	80039A6C
 * Size:	00003C
 * setCullBack__7J2DPaneFb
 */
void J2DPane::setCullBack(bool shouldCullBack)
{
	GXCullMode cullMode = GX_CULL_NONE;
	if (shouldCullBack) {
		cullMode = GX_CULL_BACK;
	}
	setCullBack((GXCullMode)cullMode);
}

/*
 * --INFO--
 * Address:	80039AA8
 * Size:	000010
 */
bool J2DPane::setConnectParent(bool connectParent)
{
	mIsConnected = 0;
	return false;
}

/*
 * --INFO--
 * Address:	80039AB8
 * Size:	000004
 */
// void J2DPane::update() { }

/*
 * --INFO--
 * Address:	80039ABC
 * Size:	000004
 */
// void J2DPane::drawSelf(f32, f32) { }
