#include "JSystem/J2D/J2DScreen.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/JUtility/JUTResource.h"

JGeometry::TBox2f J2DPane::static_mBounds(0.0f, 0.0f, 0.0f, 0.0f);

/**
 * @note Address: 0x80036AF0
 * @note Size: 0xC0
 */
J2DPane::J2DPane()
    : mTree(this)
{
	mTransform    = nullptr;
	mBloBlockType = 'PAN1';
	show();
	mTag       = 0;
	mMessageID = 0;
	mBounds.set(0.0f, 0.0f, 0.0f, 0.0f);

	initiate();
	changeUseTrans(nullptr);
	calcMtx();
}

/**
 * @note Address: 0x80036C2C
 * @note Size: 0x88
 */
void J2DPane::initiate()
{
	mAnimPaneIndex = -1;
	mAngleX        = 0.0f;
	mAngleY        = 0.0f;
	mAngleZ        = 0.0f;
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

/**
 * __ct__7J2DPaneFP7J2DPanebUxRCQ29JGeometry8TBox2<f>
 * @note Address: 0x80036CB4
 * @note Size: 0x88
 */
J2DPane::J2DPane(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box)
    : mTree(this)
    , mTransform(nullptr)
{
	initialize(parent, isVisible, tag, box);
}

/**
 * @note Address: 0x80036D3C
 * @note Size: 0x120
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

/**
 * __ct__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 * @note Address: 0x80036E5C
 * @note Size: 0x78
 */
J2DPane::J2DPane(u64 tag, const JGeometry::TBox2f& box)
    : mTree(this)
    , mTransform(nullptr)
{
	initialize(tag, box);
}

/**
 * @note Address: 0x80036ED4
 * @note Size: 0xF4
 * initialize__7J2DPaneFUxRCQ29JGeometry8TBox2<f>
 */
void J2DPane::initialize(u64 tag, const JGeometry::TBox2f& box) { initialize(nullptr, true, tag, box); }

/**
 * __ct__7J2DPaneFP7J2DPaneP20JSURandomInputStreamUc
 * @note Address: 0x80036FC8
 * @note Size: 0x120
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

/**
 * @note Address: 0x800370E8
 * @note Size: 0x340
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
	mCullMode      = 0;
	mColorAlpha    = 255;
	mIsConnected   = 0;
	mAnimPaneIndex = -1;
	mScale.x       = 1.0f;
	mScale.y       = 1.0f;
	mMessageID     = 0;
	changeUseTrans(parent);
	calcMtx();
}

/**
 * @note Address: 0x80037428
 * @note Size: 0x1BC
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
		f32 width        = parent->getWidth();
		f32 height       = parent->getHeight();
		v1.set(parent->getWidth(), parent->getHeight());

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

/**
 * @note Address: 0x800375E4
 * @note Size: 0xE0
 */
J2DPane::~J2DPane()
{
	JSUTreeIterator<J2DPane> iterator;
	for (iterator = mTree.getFirstChild(); iterator != mTree.getEndChild();) {
		J2DPane* child = (iterator++).getObject();
		delete child;
	}
}

/**
 * @note Address: 0x800376C4
 * @note Size: 0xB8
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

/**
 * @note Address: 0x8003777C
 * @note Size: 0xB8
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

/**
 * @note Address: N/A
 * @note Size: 0xDC
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

/**
 * @note Address: 0x80037834
 * @note Size: 0xA4
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

/**
 * @note Address: 0x800378D8
 * @note Size: 0x658
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

		JGeometry::TBox2f scissorBounds(0.0f, 0.0f, 0.0f, 0.0f);
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

/**
 * @note Address: 0x80037F38
 * @note Size: 0x248
 */
void J2DPane::place(const JGeometry::TBox2f& box)
{
	JGeometry::TBox2f tmpBox;

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

/**
 * @note Address: 0x80038180
 * @note Size: 0x54
 */
void J2DPane::move(f32 x, f32 y)
{
	f32 width  = getWidth();
	f32 height = getHeight();
	place(JGeometry::TBox2f(x, y, x + width, y + height));
}

/**
 * @note Address: 0x800381D4
 * @note Size: 0x44
 */
void J2DPane::add(f32 x, f32 y)
{
	mOffset.add(JGeometry::TVec2f(x, y));
	calcMtx();
}

/**
 * @note Address: 0x80038218
 * @note Size: 0x108
 */
void J2DPane::resize(f32 x, f32 y)
{
	JGeometry::TBox2<f32> box = mBounds;

	box.addPos(mOffset.x, mOffset.y);

	const J2DPane* parent = getParentPane();
	if (parent) {
		box.addPos(-parent->mBounds.i.x, -parent->mBounds.i.y);
	}

	box.f.x = box.i.x + x;
	box.f.y = box.i.y + y;
	place(box);
}

/**
 * @note Address: 0x80038320
 * @note Size: 0xE0
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

/**
 * @note Address: 0x80038400
 * @note Size: 0x30
 */
void J2DPane::rotate(f32 anchorX, f32 anchorY, J2DRotateAxis axis, f32 angle)
{
	mAnchorPoint.x = anchorX;
	mAnchorPoint.y = anchorY;
	mRotationAxis  = (u8)axis;
	rotate(angle);
}

/**
 * @note Address: 0x80038430
 * @note Size: 0x58
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

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
f32 J2DPane::getRotate() const
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80038488
 * @note Size: 0x7C
 */
void J2DPane::clip(const JGeometry::TBox2f& bounds)
{
	JGeometry::TBox2f boxA(bounds);
	boxA.addPos(mGlobalBounds.i.x, mGlobalBounds.i.y);
	mClipRect.intersect(boxA);
}

/**
 * @note Address: 0x80038504
 * @note Size: 0xB0
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

/**
 * @note Address: 0x800385B4
 * @note Size: 0x310
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

/**
 * @note Address: 0x80038944
 * @note Size: 0xB0
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

/**
 * @note Address: N/A
 * @note Size: 0x310
 */
void J2DPane::gatherUserInfo(J2DPane**, u64, u64, int, int&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x800389F4
 * @note Size: 0x88
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

/**
 * @note Address: 0x80038A7C
 * @note Size: 0x88
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

/**
 * @note Address: 0x80038B04
 * @note Size: 0x140
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

/**
 * @note Address: 0x80038C44
 * @note Size: 0x78
 */
void J2DPane::setCullBack(GXCullMode cullMode)
{
	mCullMode = cullMode;
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setCullBack(cullMode);
	}
}

/**
 * @note Address: 0x80038CBC
 * @note Size: 0xF0
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

/**
 * @note Address: 0x80038DAC
 * @note Size: 0x1E4
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

/**
 * @note Address: 0x80038F98
 * @note Size: 0xD8
 */
JGeometry::TVec3f J2DPane::getGlbVtx(u8 idx) const
{
	JGeometry::TVec3<f32> out;
	if (idx >= 4) {
		out.x = 0;
		out.y = 0;
		out.z = 0;
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
	// JGeometry::TVec3f out;
	// if (idx >= 4) {
	// 	out = JGeometry::TVec3f(0.0f);
	// 	return out;
	// } else {
	// 	f32 x, y;
	// 	if (idx & 1) {
	// 		x = mBounds.f.x;
	// 	} else {
	// 		x = mBounds.i.x;
	// 	}

	// 	if (idx & 2) {
	// 		y = mBounds.f.y;
	// 	} else {
	// 		y = mBounds.i.y;
	// 	}

	// 	out.x = x * mGlobalMtx[0][0] + y * mGlobalMtx[0][1] + mGlobalMtx[0][3];
	// 	out.y = x * mGlobalMtx[1][0] + y * mGlobalMtx[1][1] + mGlobalMtx[1][3];
	// 	out.z = x * mGlobalMtx[2][0] + y * mGlobalMtx[2][1] + mGlobalMtx[2][3];
	// 	return out;
	// }
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

/**
 * @note Address: 0x80039070
 * @note Size: 0x38
 */
J2DPane* J2DPane::getFirstChildPane()
{
	if (mTree.getFirstChild() == nullptr) {
		return nullptr;
	}
	return mTree.getFirstChild()->getObject();
}

/**
 * @note Address: 0x800390A8
 * @note Size: 0x38
 */
J2DPane* J2DPane::getNextChildPane()
{
	if (mTree.getNextChild() == nullptr) {
		return nullptr;
	}
	return mTree.getNextChild()->getObject();
}

/**
 * @note Address: 0x800390E0
 * @note Size: 0x1C
 */
J2DPane* J2DPane::getParentPane() { return (mTree.getParent() == nullptr) ? nullptr : mTree.getParent()->getObject(); }

/**
 * @note Address: 0x800390FC
 * @note Size: 0x20C
 */
void J2DPane::makePaneExStream(J2DPane* parent, JSURandomInputStream* input)
{
	input->getPosition();

	J2DPaneExBlock data;
	input->read(&data, sizeof(data));
	mAnimPaneIndex = data.mAnimIndex;
	mIsVisible     = (u8)data.mIsVisible;
	mTag           = data.mTag;
	mMessageID     = data.mMessageID;

	mScale.x = data.mWidthScale;
	mScale.y = data.mHeightScale;

	mAngleX = data.mAngleX;
	mAngleY = data.mAngleY;
	mAngleZ = data.mAngleZ;

	mOffset.x     = data.mOffsetX;
	mOffset.y     = data.mOffsetY;
	mRotationAxis = J2DROTATE_Z;

	if (data.mBasePosition % 3 == 0) {
		mAnchorPoint.x = 0;
	} else if (data.mBasePosition % 3 == 1) {
		mAnchorPoint.x = data.mWidth / 2;
	} else {
		mAnchorPoint.x = data.mWidth;
	}

	if (data.mBasePosition / 3 == 0) {
		mAnchorPoint.y = 0;
	} else if (data.mBasePosition / 3 == 1) {
		mAnchorPoint.y = data.mHeight / 2;
	} else {
		mAnchorPoint.y = data.mHeight;
	}

	mBounds.set(-mAnchorPoint.x, -mAnchorPoint.y, data.mWidth - mAnchorPoint.x, data.mHeight - mAnchorPoint.y);
	mBasePosition = data.mBasePosition;

	mAlpha             = 255;
	mIsInfluencedAlpha = false;

	if (parent) {
		parent->mTree.appendChild(&mTree);
	}

	mCullMode    = GX_CULL_NONE;
	mColorAlpha  = 255;
	mIsConnected = false;
	calcMtx();
}

/**
 * @note Address: 0x80039308
 * @note Size: 0xB8
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

/**
 * @note Address: 0x800393C0
 * @note Size: 0x14C
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

/**
 * @note Address: 0x8003950C
 * @note Size: 0xD0
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

/**
 * @note Address: 0x800395F4
 * @note Size: 0x8
 */
void J2DPane::setAnimation(J2DAnmTransform* animation) { mTransform = animation; }

/**
 * @note Address: 0x800395FC
 * @note Size: 0x38
 */
void J2DPane::animationTransform()
{
	if (mTransform != nullptr) {
		animationTransform(mTransform);
	}
}

/**
 * @note Address: 0x80039634
 * @note Size: 0x7C
 */
void J2DPane::clearAnmTransform()
{
	setAnimation((J2DAnmTransform*)nullptr);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->clearAnmTransform();
	}
}

/**
 * @note Address: 0x800396B0
 * @note Size: 0xA0
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

/**
 * @note Address: 0x80039750
 * @note Size: 0x88
 */
void J2DPane::setVisibileAnimation(J2DAnmVisibilityFull* animation)
{
	setAnimationVF(animation);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVisibileAnimation(animation);
	}
}

/**
 * @note Address: 0x80039804
 * @note Size: 0x88
 */
void J2DPane::setVtxColorAnimation(J2DAnmVtxColor* animation)
{
	setAnimationVC(animation);
	for (JSUTreeIterator<J2DPane> iterator(mTree.getFirstChild()); iterator != nullptr; iterator++) {
		iterator->setVtxColorAnimation(animation);
	}
}

/**
 * @note Address: 0x800398B8
 * @note Size: 0xA0
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

/**
 * @note Address: 0x80039958
 * @note Size: 0x108
 */
void J2DPane::updateTransform(const J2DAnmTransform* transform)
{
	if (mAnimPaneIndex != 0xFFFF && transform) {
		J3DTransformInfo info;
		transform->getTransform(mAnimPaneIndex, &info);
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
