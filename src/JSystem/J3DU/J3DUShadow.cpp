#include "JSystem/J3D/J3DUShadow.h"
#include "JSystem/JUT/JUTTexture.h"

#ifdef MATCHING
// Function contents here are all made up for the sake of matching.

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
inline J3DUMultiTexture::J3DUMultiTexture(u32 count, u8)
{
	// UNUSED FUNCTION
	m_count    = count;
	m_textures = new JUTTexture[m_count];
}

// /*
//  * --INFO--
//  * Address:	800177D0
//  * Size:	00001C
//  */
// JUTTexture::JUTTexture()
// {
// 	m_flags &= 2;
// 	_28 = 0;
// 	_20 = 0;
// }

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
J3DUMultiTexture::~J3DUMultiTexture()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
void J3DUMultiTexture::initResTIMG(u8, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void J3DUMultiTexture::allocateTexture(u8, u16, u16, _GXTexFmt)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002B8
 */
void J3DUMultiTexture::draw(u8, u32, u32, _GXTevColorArg, u32, u32) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000140
 */
void calcSphereIncludingTwoSpheres(Vec*, float, Vec*, float, Vec*, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000FC
 */
void calcSphereIncludingTwoSpheres(Vec*, float, Vec*, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000214
 */
void calcSphereIncludingModel(const J3DModel*, Vec*, float*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void J3DUShadowManager::getFormatCoefficient(_GXTexFmt) const
{
	// UNUSED FUNCTION
}

/*
 * __ct__17J3DUShadowManagerFUl9_GXTexFmtUcb
 *
 * --INFO--
 * Address:	........
 * Size:	00021C
 */
J3DUShadowManager::J3DUShadowManager(u32 p1, _GXTexFmt p2, u8 p3, bool p4)
    : m_multiTexture(p1, p3)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A4
 */
J3DUShadowManager::~J3DUShadowManager()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001D8
 */
void J3DUShadowManager::calc(const Vec&, J3DUShadowTextureSizeRatioCalcBase*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001E4
 */
void J3DUShadowManager::capture()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
ProjectionBackup::~ProjectionBackup()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
ScissorBackup::~ScissorBackup()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
ViewportBackup::~ViewportBackup()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void J3DUShadowTextureSizeRatioCalcDefault::operator()(const Vec&, J3DUShadowInfo*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000288
 */
void J3DUShadowCameraPolicyUsingSphere::operator()(J3DModel*, const Vec&, _GXProjectionType, J3DUShadowInfo*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E8
 */
void J3DUShadowInfo::setViewportAndScissor(bool) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00013C
 */
void J3DUShadowInfo::gxConfig(const _GXColor&, _GXTevColorArg, _GXTevAlphaArg) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void J3DUShadowInfo::renderShape() const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void J3DUShadowInfo::getTexMtx(float (*)[4]) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
void J3DUShadowInfo::getTexMtxForGX(float (*)[4]) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000834
 */
void J3DUIsShadowInViewFrustum(const J3DUShadowInfo&, float (*)[4], const J3DUClipper&, const Vec&, const JGeometry::TPartition3<float>&)
{
	// UNUSED FUNCTION
}
#endif
