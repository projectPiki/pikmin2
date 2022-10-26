#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JUT/JUTException.h"
#include "og/Screen/callbackNodes.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8048DE90
    lbl_8048DE90:
        .asciz "0_32.bti"
        .skip 3
    .global lbl_8048DE9C
    lbl_8048DE9C:
        .asciz "1_32.bti"
        .skip 3
    .global lbl_8048DEA8
    lbl_8048DEA8:
        .asciz "2_32.bti"
        .skip 3
    .global lbl_8048DEB4
    lbl_8048DEB4:
        .asciz "3_32.bti"
        .skip 3
    .global lbl_8048DEC0
    lbl_8048DEC0:
        .asciz "4_32.bti"
        .skip 3
    .global lbl_8048DECC
    lbl_8048DECC:
        .asciz "5_32.bti"
        .skip 3
    .global lbl_8048DED8
    lbl_8048DED8:
        .asciz "6_32.bti"
        .skip 3
    .global lbl_8048DEE4
    lbl_8048DEE4:
        .asciz "7_32.bti"
        .skip 3
    .global lbl_8048DEF0
    lbl_8048DEF0:
        .asciz "8_32.bti"
        .skip 3
    .global lbl_8048DEFC
    lbl_8048DEFC:
        .asciz "9_32.bti"
        .skip 3
    .global lbl_8048DF08
    lbl_8048DF08:
        .asciz "h_32.bti"
        .skip 3
    .global lbl_8048DF14
    lbl_8048DF14:
        .asciz "0_28.bti"
        .skip 3
    .global lbl_8048DF20
    lbl_8048DF20:
        .asciz "1_28.bti"
        .skip 3
    .global lbl_8048DF2C
    lbl_8048DF2C:
        .asciz "2_28.bti"
        .skip 3
    .global lbl_8048DF38
    lbl_8048DF38:
        .asciz "3_28.bti"
        .skip 3
    .global lbl_8048DF44
    lbl_8048DF44:
        .asciz "4_28.bti"
        .skip 3
    .global lbl_8048DF50
    lbl_8048DF50:
        .asciz "5_28.bti"
        .skip 3
    .global lbl_8048DF5C
    lbl_8048DF5C:
        .asciz "6_28.bti"
        .skip 3
    .global lbl_8048DF68
    lbl_8048DF68:
        .asciz "7_28.bti"
        .skip 3
    .global lbl_8048DF74
    lbl_8048DF74:
        .asciz "8_28.bti"
        .skip 3
    .global lbl_8048DF80
    lbl_8048DF80:
        .asciz "9_28.bti"
        .skip 3
    .global lbl_8048DF8C
    lbl_8048DF8C:
        .asciz "ogCounter.cpp"
        .skip 2
    .global lbl_8048DF9C
    lbl_8048DF9C:
        .asciz "SujiFont is not found !!!\n"
        .skip 1

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global SujiTex32__Q22og6Screen
    SujiTex32__Q22og6Screen:
        .4byte lbl_8048DE90
        .4byte lbl_8048DE9C
        .4byte lbl_8048DEA8
        .4byte lbl_8048DEB4
        .4byte lbl_8048DEC0
        .4byte lbl_8048DECC
        .4byte lbl_8048DED8
        .4byte lbl_8048DEE4
        .4byte lbl_8048DEF0
        .4byte lbl_8048DEFC
        .4byte lbl_8048DF08
    .global SujiTexMap__Q22og6Screen
    SujiTexMap__Q22og6Screen:
        .4byte lbl_8048DF14
        .4byte lbl_8048DF20
        .4byte lbl_8048DF2C
        .4byte lbl_8048DF38
        .4byte lbl_8048DF44
        .4byte lbl_8048DF50
        .4byte lbl_8048DF5C
        .4byte lbl_8048DF68
        .4byte lbl_8048DF74
        .4byte lbl_8048DF80
        .4byte lbl_8048DF14
*/

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
void CounterKeta::setSuji(ResTIMG** textures, unsigned long textureIndex)
{
	m_textureIndex = textureIndex;
	if (m_picture) {
		m_picture->changeTexture(textures[m_textureIndex], 0);
	}
}

/*
 * --INFO--
 * Address:	80305FB0
 * Size:	000088
 */
void CounterKeta::calcScale()
{
	float scale  = m_scaleMgr->calc();
	float width  = _0C * scale;
	float height = _10 * scale;
	m_picture->setBasePosition(POS_CENTER);
	J2DPane* picture   = m_picture;
	picture->m_scale.x = width;
	picture->m_scale.y = height;
	// picture->setScale(width, height);
	picture->calcMtx();
}
} // namespace Screen
} // namespace og
