#include "Dolphin/string.h"
#include "JSystem/JPA/JPABlock.h"
#include "JSystem/JPA/JPAResource.h"
#include "JSystem/JUT/JUTTexture.h"
#include "JSystem/ResTIMG.h"
#include "types.h"

/*
    Generated from dpostproc
*/

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
JPAResourceManager::JPAResourceManager(unsigned short, unsigned short, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800984D0
 * Size:	000058
 */
JPAResourceManager::JPAResourceManager(const void* p1, JKRHeap* heap)
    : m_resources(nullptr)
    , m_textures(nullptr)
    , _0C(0)
    , m_resourceCount(0)
    , _10(0)
    , m_textureCount(0)
{
	m_heap = heap;
	JPAResourceLoader loader((const u8*)p1, this);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	li       r0, 0
	stw      r31, 0x1c(r1)
	mr       r31, r3
	stw      r0, 4(r3)
	addi     r3, r1, 8
	stw      r0, 8(r31)
	sth      r0, 0xc(r31)
	sth      r0, 0xe(r31)
	sth      r0, 0x10(r31)
	sth      r0, 0x12(r31)
	stw      r5, 0(r31)
	mr       r5, r31
	bl       __ct__17JPAResourceLoaderFPCUcP18JPAResourceManager
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void JPAResourceManager::load(const char*, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void JPAResourceManager::load(const void*, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JPAResourceLoader::~JPAResourceLoader()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098528
 * Size:	000040
 */
JPAResource* JPAResourceManager::getResource(unsigned short p1) const
{
	for (u16 i = 0; i < m_resourceCount; i++) {
		JPAResource* resource = m_resources[i];
		if (p1 == resource->_3C) {
			return resource;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void JPAResourceManager::checkUserIndexDuplication(unsigned short) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098568
 * Size:	00009C
 */
ResTIMG* JPAResourceManager::swapTexture(const ResTIMG* p1, const char* p2)
{
	for (int i = 0; i < m_textureCount; i++) {
		if (strcmp(p2, (const char*)(m_textures[i]->_44 + 0xc)) == 0) {
			ResTIMG* timg = m_textures[i]->m_texture._20;
			m_textures[i]->m_texture.storeTIMG(p1, (u8)'\0');
			return timg;
		}
	}
	return nullptr;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r26, 8(r1)
	mr       r26, r3
	mr       r27, r4
	mr       r28, r5
	li       r30, 0
	li       r29, 0
	li       r31, 0
	b        lbl_800985E0

lbl_80098594:
	lwz      r4, 8(r26)
	mr       r3, r28
	lwzx     r4, r4, r31
	lwz      r4, 0x44(r4)
	addi     r4, r4, 0xc
	bl       strcmp
	cmpwi    r3, 0
	bne      lbl_800985D8
	lwz      r3, 8(r26)
	slwi     r0, r29, 2
	mr       r4, r27
	li       r5, 0
	lwzx     r3, r3, r0
	addi     r3, r3, 4
	lwz      r30, 0x20(r3)
	bl       storeTIMG__10JUTTextureFPC7ResTIMGUc
	b        lbl_800985EC

lbl_800985D8:
	addi     r31, r31, 4
	addi     r29, r29, 1

lbl_800985E0:
	lhz      r0, 0x12(r26)
	cmpw     r29, r0
	blt      lbl_80098594

lbl_800985EC:
	mr       r3, r30
	lmw      r26, 8(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80098604
 * Size:	000020
 */
void JPAResourceManager::registRes(JPAResource* resource)
{
	m_resources[m_resourceCount] = resource;
	m_resourceCount++;
}

/*
 * --INFO--
 * Address:	80098624
 * Size:	000020
 */
void JPAResourceManager::registTex(JPATexture* texture)
{
	m_textures[m_textureCount] = texture;
	m_textureCount++;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void JPAResourceManager::registTexDupCheck(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098644
 * Size:	00005C
 */
void* JPAResourceManager::getResUserWork(unsigned short p1) const
{
	JPAResource* resource = getResource(p1);
	return (resource != nullptr) ? (void*)(resource->_2C->castData()->_0C) : nullptr;
	/*
	lhz      r7, 0xe(r3)
	clrlwi   r4, r4, 0x10
	lwz      r5, 4(r3)
	li       r3, 0
	li       r6, 0
	b        lbl_80098678

lbl_8009865C:
	rlwinm   r0, r6, 2, 0xe, 0x1d
	lwzx     r8, r5, r0
	lhz      r0, 0x3c(r8)
	cmplw    r4, r0
	bne      lbl_80098674
	b        lbl_80098688

lbl_80098674:
	addi     r6, r6, 1

lbl_80098678:
	clrlwi   r0, r6, 0x10
	cmplw    r0, r7
	blt      lbl_8009865C
	li       r8, 0

lbl_80098688:
	cmplwi   r8, 0
	beqlr
	lwz      r3, 0x2c(r8)
	lwz      r3, 0(r3)
	lwz      r3, 0xc(r3)
	blr
	*/
}
