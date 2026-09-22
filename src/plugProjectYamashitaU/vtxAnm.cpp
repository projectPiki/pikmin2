#include "Game/FieldVtxColorMgr.h"

namespace Game {

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void FieldVtxColorInfo::setVtxColorIndex(u16 idx)
{
	if (mColorIdx != 0xFFFF) {
		if (mColorIdx != idx) {
			return;
		}
		return;
	}
	mColorIdx = idx;
}

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
FieldVtxColorControl::FieldVtxColorControl()
{
	mNext         = nullptr;
	mPosition     = Vector3f::zero;
	mRadius       = 10.0f;
	mPower        = 0.0f;
	mCurrentPower = 1.0f;
	mControlInfo  = nullptr;
}

/**
 * @note Address: 0x80122450
 * @note Size: 0xB0
 */
FieldVtxColorMgr::FieldVtxColorMgr(J3DModelData* modelData)
    : CNode("FieldVtxColorMgr")
    , mModelData(nullptr)
    , mInfo(nullptr)
    , mControl(nullptr)
    , mSmoothingRate(0.01f)
{
	mModelData = modelData;
	createFieldVtxColorInfo();
}

/**
 * @note Address: 0x80122500
 * @note Size: 0x1F8
 */
void FieldVtxColorMgr::createFieldVtxColorInfo()
{
	GXColor* color = mModelData->getVtxColorArray(0);
	mInfoCount     = 0;
	u32 vtxNum     = mModelData->getVertexNum();

	mInfo = new (-4) FieldVtxColorInfo[vtxNum];

	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		getColorInfo(i)._02 = i;
	}

	u16 shapeCount = mModelData->getShapeNum();

	for (u16 i = 0; i < shapeCount; i++) {
		setupFieldVtxColorInfo(mModelData->getShapeNodePointer(i));
	}

	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		GXColor& thisColor = color[getColorInfo(i).mColorIdx];
		if (thisColor.a) {
			mInfoCount++;
		}

		thisColor.b = 255;
		thisColor.g = 255;
		thisColor.r = 255;
	}

	FieldVtxColorInfo* newInfos = new FieldVtxColorInfo[mInfoCount];

	int infoCount = 0;
	FieldVtxColorInfo* oldInfo;
	for (u16 i = 0; i < mModelData->getVertexNum(); i++) {
		oldInfo = &mInfo[i];

		if (color[oldInfo->mColorIdx].a) {
			newInfos[infoCount++] = *oldInfo;
		}
	}

	delete[] mInfo;

	mInfo = newInfos;
}

/**
 * Updates the field vertex color control based on the given control information.
 * The control's current power is smoothly adjusted towards the target power using the smoothing rate.
 * The alpha value of each field vertex color info is updated based on the control's current power.
 *
 * @param control The field vertex color control to update.
 *
 * @note Address: N/A
 * @note Size: 0xE0
 */
void FieldVtxColorMgr::updateFieldVtxColorControl(FieldVtxColorControl* control)
{
	FieldVtxColorControlInfo* controlInfo = control->mControlInfo;
	if (FABS(control->mCurrentPower - control->mPower) < mSmoothingRate) {
		control->mCurrentPower = control->mPower;
	} else {
		control->mCurrentPower += (control->mCurrentPower < control->mPower) ? mSmoothingRate : -mSmoothingRate;
	}

	f32 alphaFlt = 255.0f * control->mCurrentPower;
	u8 alpha     = (int)(ROUND_F32_TO_U8(alphaFlt));
	for (controlInfo; controlInfo; controlInfo = controlInfo->mNext) {
		FieldVtxColorInfo* info = controlInfo->mInfo;
		if (controlInfo->mAlphaThreshold <= alpha) {
			info->raiseAlpha(255);
		} else {
			info->raiseAlpha(0);
		}
	}
}

/**
 * @note Address: 0x80122714
 * @note Size: 0x1C8
 */
void FieldVtxColorMgr::initVtxColor()
{
	f32 oldFloat = mSmoothingRate;

	mSmoothingRate = 1.0f;
	for (int i = 0; i < mInfoCount; i++) {
		mInfo[i].mAlpha = 0;
	}

	FOREACH_NODE(FieldVtxColorControl, mControl, currControl)
	{
		updateFieldVtxColorControl(currControl);
	}

	GXColor newColor;
	newColor.b     = 255;
	newColor.g     = 255;
	newColor.r     = 255;
	GXColor* color = mModelData->getVtxColorArray(0);

	for (int i = 0; i < mInfoCount; i++) {
		newColor.a           = mInfo[i].mAlpha;
		int idx              = mInfo[i].mColorIdx;
		*((u32*)&color[idx]) = *(u32*)(&newColor);
	}

	DCStoreRange(color, mModelData->getVertexColorNum() * 4);

	mSmoothingRate = oldFloat;
}

/**
 * @note Address: 0x801228DC
 * @note Size: 0x280
 */
void FieldVtxColorMgr::calc(J3DVertexBuffer* buffer)
{
	if (isFlag(1)) {
		GXColor* colorList = *buffer->mVtxColor; // r31
		bool check         = true;               // r30

		for (int i = 0; i < mInfoCount; i++) {
			mInfo[i].mAlpha = 0;
		}

		FOREACH_NODE(FieldVtxColorControl, mControl, currControl)
		{
			updateFieldVtxColorControl(currControl);
		}

		for (int i = 0; i < mInfoCount; i++) {
			int idx  = (u16)mInfo[i].mColorIdx;
			u8 alpha = mInfo[i].mAlpha;

			GXColor& color = colorList[idx];
			if (color.a == alpha) {
				continue;
			}

			if (fabs(color.a - alpha) < 7.0) {
				color.a = mInfo[i].mAlpha;
			} else {
				int offset = -7;
				if (color.a < mInfo[i].mAlpha) {
					offset = 7;
				}

				color.a += offset;
			}

			check = false;
		}

		DCStoreRange(colorList, buffer->getVertexData()->getColNum() * 4);
		buffer->mCurrentVtxColor = colorList;
		if (check) {
			resetFlag(1);
		}
		return;
	}

	FOREACH_NODE(FieldVtxColorControl, mControl, control)
	{
		if (control->mPower != control->mCurrentPower) {
			setFlag(1);
			return;
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void FieldVtxColorMgr::setupFieldVtxColorInfoFromFan(void* fan, int p1, int p2, int p3, int p4)
{
	u8* vertex0 = static_cast<u8*>(fan);
	u8* vertex1 = static_cast<u8*>(fan) + p1;

	u16 positionIndex0 = *reinterpret_cast<u16*>(vertex0 + p2);
	u16 positionIndex1 = *reinterpret_cast<u16*>(vertex1 + p2);
	u16 colorIndex0    = *reinterpret_cast<u16*>(vertex0 + p3);
	u16 colorIndex1    = *reinterpret_cast<u16*>(vertex1 + p3);

	mInfo[positionIndex0].setVtxColorIndex(colorIndex0);
	mInfo[positionIndex1].setVtxColorIndex(colorIndex1);

	for (int i = 2; i < p4; i++) {
		u8* vertex2        = static_cast<u8*>(fan) + i * p1;
		u16 positionIndex2 = *reinterpret_cast<u16*>(vertex2 + p2);
		u16 colorIndex2    = *reinterpret_cast<u16*>(vertex2 + p3);
		mInfo[positionIndex2].setVtxColorIndex(colorIndex2);
	}
}

/**
 * @note Address: 0x80122B5C
 * @note Size: 0x158
 */
void FieldVtxColorMgr::setupFieldVtxColorInfoFromStrip(void* strip, int p1, int p2, int p3, int p4)
{
	u8* vertices = static_cast<u8*>(strip);
	u8* vertex0  = vertices;
	u8* vertex1  = vertices + p1;
	u8* vertex2  = vertices + 2 * p1;

	u16 positionIndex0 = *reinterpret_cast<u16*>(vertex0 + p2);
	u16 positionIndex1 = *reinterpret_cast<u16*>(vertex1 + p2);
	u16 positionIndex2 = *reinterpret_cast<u16*>(vertex2 + p2);
	u16 colorIndex0    = *reinterpret_cast<u16*>(vertex0 + p3);
	u16 colorIndex1    = *reinterpret_cast<u16*>(vertex1 + p3);
	u16 colorIndex2    = *reinterpret_cast<u16*>(vertex2 + p3);

	if (p4 <= 3) {
		mInfo[positionIndex0].setVtxColorIndex(colorIndex0);
		mInfo[positionIndex1].setVtxColorIndex(colorIndex1);
		mInfo[positionIndex2].setVtxColorIndex(colorIndex2);
	} else {
		for (int i = 0; i < p4 - 2; i++) {
			u8* v0 = vertices + p1 * i;
			u8* v1 = vertices + p1 * (i + 1);
			u8* v2 = vertices + p1 * (i + 2);

			u16 pos0 = *reinterpret_cast<u16*>(v0 + p2);
			u16 pos1 = *reinterpret_cast<u16*>(v1 + p2);
			u16 pos2 = *reinterpret_cast<u16*>(v2 + p2);
			u16 col0 = *reinterpret_cast<u16*>(v0 + p3);
			u16 col1 = *reinterpret_cast<u16*>(v1 + p3);
			u16 col2 = *reinterpret_cast<u16*>(v2 + p3);

			mInfo[pos0].setVtxColorIndex(col0);
			mInfo[pos1].setVtxColorIndex(col1);
			mInfo[pos2].setVtxColorIndex(col2);
		}
	}
}

/**
 * @note Address: 0x80122CB4
 * @note Size: 0x210
 */
void FieldVtxColorMgr::setupFieldVtxColorInfo(J3DShape* shape)
{
	int p1                  = -1;
	int p2                  = -1;
	int p3                  = 0;
	const int indices[]     = { 0, 1, 1, 2 };
	GXVtxDescList* descList = shape->mVtxDesc;

	while (descList->mAttr != GX_VA_NULL) {
		switch (descList->mAttr) {
		case GX_VA_POS:
			p1 = p3;
			if (descList->mType != GX_INDEX16) {
				return;
			}
			break;
		case GX_VA_CLR0:
			p2 = p3;
			if (descList->mType != GX_INDEX16) {
				return;
			}
			break;
		}
		p3 += indices[descList->mType];
		descList++;
	}

	for (u16 i = 0; i < shape->getMtxGroupNum(); i++) {
		u8* dispList = const_cast<u8*>(shape->getShapeDraw(i)->mDisplayList);
		u8* ptr      = dispList;
		while ((u32)ptr - (u32)dispList < shape->getShapeDraw(i)->mDlSize) {
			if (ptr[0] == 0) {
				return;
			}

			u16 val = *reinterpret_cast<u16*>(ptr + 1);
			if (ptr[0] == 152) {
				setupFieldVtxColorInfoFromStrip(&ptr[3], p3, p1, p2, val);
			} else if (ptr[0] == 160) {
				setupFieldVtxColorInfoFromFan(&ptr[3], p3, p1, p2, val);
			} else {
				return;
			}
			ptr += p3 * val;
			ptr += 3;
		}
	}
}

/**
 * @note Address: 0x80122EC4
 * @note Size: 0x1288
 */
FieldVtxColorControl* FieldVtxColorMgr::createNewControl(Vector3f& position, f32 radius, f32 power)
{
	FieldVtxColorControl* newControl = new FieldVtxColorControl;

	if (newControl) {
		setupFieldVtxColorControl(newControl, position, radius, power);

		addControl(newControl);
	}

	return newControl;
}

/**
 * @note Address: 0x80122FEC
 * @note Size: 0x204
 */
void FieldVtxColorMgr::setupFieldVtxColorControl(Game::FieldVtxColorControl* control, Vector3f& pos, f32 radius, f32 power)
{
	Vector3f* vtxPosArray = (Vector3f*)mModelData->getVtxPosArray();
	control->mPosition    = pos;
	control->mRadius      = radius;
	control->mPower       = power;

	for (u16 i = 0; i < mInfoCount; i++) {
		FieldVtxColorInfo* info = &mInfo[i];
		Vector3f* vtxPos        = &vtxPosArray[info->_02];
		f32 dist                = pos.distance(*vtxPos);
		if (dist < radius) {
			FieldVtxColorControlInfo* ctrlInfo = new FieldVtxColorControlInfo(info, dist / radius);
			control->addControlInfo(ctrlInfo);
		}
	}

}
} // namespace Game
