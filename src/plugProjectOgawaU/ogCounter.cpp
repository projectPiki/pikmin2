#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JUtility/JUTException.h"
#include "og/Screen/callbackNodes.h"
#include "trig.h"

const char* og::Screen::SujiTex32[11] = { "0_32.bti", "1_32.bti", "2_32.bti", "3_32.bti", "4_32.bti", "5_32.bti",
	                                      "6_32.bti", "7_32.bti", "8_32.bti", "9_32.bti", "h_32.bti" };

const char* og::Screen::SujiTexMap[11] = {
	"0_28.bti", "1_28.bti", "2_28.bti", "3_28.bti", "4_28.bti", "5_28.bti", "6_28.bti", "7_28.bti", "8_28.bti", "9_28.bti", "0_28.bti",
};

namespace og {
namespace Screen {

/*
 * --INFO--
 * Address:	80305E48
 * Size:	000118
 */
ResTIMG** makeSujiFontTable(char** characterTexturePaths, JKRArchive* archive)
{
	ResTIMG** table = new ResTIMG*[11];
	if (archive == nullptr) {
		for (int i = 0; i < 11; i++) {
			table[i] = (ResTIMG*)J2DScreen::getNameResource(characterTexturePaths[i]);
			JUT_ASSERTLINE(81, table[i] != nullptr, "SujiFont is not found !!!\n");
		}
	} else {
		for (int i = 0; i < 11; i++) {
			table[i] = (ResTIMG*)archive->getResource('TIMG', characterTexturePaths[i]);
			JUT_ASSERTLINE(90, table[i] != nullptr, "SujiFont is not found !!!\n");
		}
	}
	return table;
}

/*
 * --INFO--
 * Address:	80305F60
 * Size:	000050
 */
void CounterKeta::setSuji(ResTIMG** texList, u32 texIdx)
{
	mTextureIndex = texIdx;
	if (mPicture) {
		mPicture->changeTexture(texList[mTextureIndex], 0);
	}
}

/*
 * --INFO--
 * Address:	80305FB0
 * Size:	000088
 */
void CounterKeta::calcScale()
{
	f32 scale  = mScaleMgr->calc();
	f32 width  = mSize.x * scale;
	f32 height = mSize.y * scale;
	mPicture->setBasePosition(J2DPOS_Center);
	J2DPane* picture  = mPicture;
	picture->mScale.x = width;
	picture->mScale.y = height;
	picture->calcMtx();
}
} // namespace Screen
} // namespace og
