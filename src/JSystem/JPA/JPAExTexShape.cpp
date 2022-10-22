#include "types.h"
#include "JSystem/JPA/JPAShape.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "Dolphin/gx.h"

// TODO: replace GX functions with proper enumerated values
// also, actually work out the types of JPAEmitterWorkData

/*
 * --INFO--
 * Address:	80090F2C
 * Size:	0000FC
 */
void JPALoadExTex(JPAEmitterWorkData* data)
{
	GXTexCoordID result = GX_TEXCOORD1;

	if (data->m_resource->_28->m_data[8] & 1) {
		GXSetTexCoordGen2(GX_TEXCOORD1, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
		data->m_resourceMgr->m_textures[data->m_resource->_38[data->m_resource->_28->m_data[0x25]]]->m_texture.load(GX_TEXMAP2);
		result = GX_TEXCOORD2;
	}

	if (data->m_resource->_28->m_data[8] & 0x100) {
		GXSetTexCoordGen2(result, GX_TG_MTX3X4, GX_TG_TEX0, 60, GX_FALSE, 125);
		data->m_resourceMgr->m_textures[data->m_resource->_38[data->m_resource->_28->m_data[0x26]]]->m_texture.load(GX_TEXMAP3);
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	li       r3, 1
	lwz      r4, 4(r30)
	lwz      r31, 0x28(r4)
	lwz      r4, 0(r31)
	lwz      r0, 8(r4)
	clrlwi.  r0, r0, 0x1f
	beq      lbl_80090FB4
	li       r3, 1
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r3, 0(r31)
	li       r4, 2
	lwz      r5, 4(r30)
	lbz      r0, 0x25(r3)
	lwz      r3, 0x38(r5)
	slwi     r0, r0, 1
	lwz      r5, 8(r30)
	lhzx     r0, r3, r0
	lwz      r3, 8(r5)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	addi     r3, r3, 4
	bl       load__10JUTTextureF11_GXTexMapID
	li       r3, 2

lbl_80090FB4:
	lwz      r4, 0(r31)
	lwz      r0, 8(r4)
	rlwinm.  r0, r0, 0, 0x17, 0x17
	beq      lbl_80091010
	li       r4, 1
	li       r5, 4
	li       r6, 0x3c
	li       r7, 0
	li       r8, 0x7d
	bl       GXSetTexCoordGen2
	lwz      r3, 0(r31)
	li       r4, 3
	lwz      r5, 4(r30)
	lbz      r0, 0x26(r3)
	lwz      r3, 0x38(r5)
	slwi     r0, r0, 1
	lwz      r5, 8(r30)
	lhzx     r0, r3, r0
	lwz      r3, 8(r5)
	slwi     r0, r0, 2
	lwzx     r3, r3, r0
	addi     r3, r3, 4
	bl       load__10JUTTextureF11_GXTexMapID

lbl_80091010:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80091028
 * Size:	000008
 */
JPAExTexShape::JPAExTexShape(const u8* data)
    : m_data(data)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D8
 */
void JPAExTexShape::init_jpa(const u8*, JKRHeap*)
{
	// UNUSED FUNCTION
}
