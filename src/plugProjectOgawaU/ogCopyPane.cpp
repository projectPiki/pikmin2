#include "og/Screen/ogScreen.h"
#include "JSystem/JUtility/JUTTexture.h"

namespace og {
namespace Screen {

/**
 * @note Address: 0x8030E958
 * @note Size: 0x2F8
 */
J2DPictureEx* CopyPicture(J2DPictureEx* pic, u64 tag)
{
	ResTIMG* timg          = pic->getTIMG(0);
	JUtility::TColor white = pic->getWhite();
	JUtility::TColor black = pic->getBlack();
	u8 alpha               = pic->getAlpha();

	JGeometry::TVec2f offset;
	offset.x = pic->mBounds.getWidth();
	offset.y = pic->mBounds.getHeight();

	JGeometry::TBox2f box(0.0f, 0.0f, offset);
	J2DPicture::TCornerColor cols;
	pic->getCornerColor(cols);

	J2DPictureEx* copy = new J2DPictureEx(tag, box, timg, 0x1100000);

	if (copy) {
		copy->setBasePosition(J2DPOS_TopLeft);
		copy->place(box);
		copy->setWhite(white);
		copy->setBlack(black);

		copy->setCornerColor(cols);

		copy->setAlpha(alpha);

		JGeometry::TVec2<s16> pos[4];
		JGeometry::TVec2<s16>* p = pos;
		for (int i = 0; i < 4; i++) {
			p[i] = *pic->getTexCoord(i);
		}

		copy->setTexCoord(pos);
	}

	return copy;
}

/**
 * @note Address: 0x8030EC50
 * @note Size: 0x338
 */
J2DPictureEx* CopyPictureToPane(J2DPictureEx* pic, J2DPane* pane, f32 x, f32 y, u64 tag)
{
	ResTIMG* timg          = pic->getTIMG(0);
	JUtility::TColor white = pic->getWhite();
	JUtility::TColor black = pic->getBlack();
	u8 alpha               = pic->getAlpha();

	JGeometry::TVec2f offset;
	offset.x = pic->mBounds.getWidth();
	offset.y = pic->mBounds.getHeight();

	JGeometry::TVec2f origin;
	origin.x = x - (offset.x / 2.0f);
	origin.y = y - (offset.y / 2.0f);

	JGeometry::TBox2f box(origin.x, origin.y, offset);
	J2DPicture::TCornerColor cols;
	pic->getCornerColor(cols);

	J2DPictureEx* copy = new J2DPictureEx(tag, box, timg, 0x1100000);

	if (copy) {
		pane->appendChild(copy);
		copy->setBasePosition(J2DPOS_Center);
		copy->place(box);
		copy->setWhite(white);
		copy->setBlack(black);

		copy->setCornerColor(cols);

		copy->setAlpha(alpha);

		JGeometry::TVec2<s16> pos[4];
		JGeometry::TVec2<s16>* p = pos;
		for (int i = 0; i < 4; i++) {
			p[i] = *pic->getTexCoord(i);
		}

		copy->setTexCoord(pos);
	}

	return copy;
}

} // namespace Screen
} // namespace og
