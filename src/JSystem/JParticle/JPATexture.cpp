#include "JSystem/JKR/JKRHeap.h"
#include "JSystem/JPA/JPATexture.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__10JPATexture
    __vt__10JPATexture:
        .4byte 0
        .4byte 0
        .4byte __dt__10JPATextureFv
        .4byte 0
*/

/*
 * __ct__10JPATextureFPCUc
 *
 * --INFO--
 * Address:	800986A0
 * Size:	000068
 */
JPATexture::JPATexture(const unsigned char* p1)
    : m_texture()
    , _44(p1)
{
	m_texture.storeTIMG(reinterpret_cast<const ResTIMG*>(_44 + 0x20), (u8)'\0');
}

/*
 * --INFO--
 * Address:	80098708
 * Size:	000064
 */
JPATexture::~JPATexture() { }
