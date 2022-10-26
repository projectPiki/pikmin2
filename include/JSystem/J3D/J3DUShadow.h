#ifndef _JSYSTEM_J3D_J3DUSHADOW_H
#define _JSYSTEM_J3D_J3DUSHADOW_H

#include "Dolphin/gx.h"
#include "types.h"

typedef GXColor _GXColor;
struct J3DModel;
struct J3DUClipper;
struct J3DUShadowInfo;
struct JUTTexture;
struct Vec;

namespace JGeometry {
template <typename T>
struct TPartition3;
}

struct J3DUShadowInfo {
	void setViewportAndScissor(bool) const;
	void gxConfig(const _GXColor&, _GXTevColorArg, _GXTevAlphaArg) const;
	void renderShape() const;
	void getTexMtx(float (*)[4]) const;
	void getTexMtxForGX(float (*)[4]) const;
};

struct J3DUShadowTextureSizeRatioCalcBase {
};

struct J3DUShadowTextureSizeRatioCalcDefault : J3DUShadowTextureSizeRatioCalcBase {
	void operator()(const Vec&, J3DUShadowInfo*);
};

struct J3DUShadowCameraPolicyUsingSphere {
	void operator()(J3DModel*, const Vec&, _GXProjectionType, J3DUShadowInfo*);
};

struct J3DUMultiTexture {
	J3DUMultiTexture(u32, u8);
	~J3DUMultiTexture();
	void initResTIMG(u8, _GXTexFmt);
	void allocateTexture(u8, u16, u16, _GXTexFmt);
	void draw(u8, u32, u32, _GXTevColorArg, u32, u32) const;

#ifdef MATCHING
	// The following is purely made up for the sake of matching.
	// We have no idea what the structure actually looked like.
	u32 m_count;
	JUTTexture* m_textures;
#endif
};

struct J3DUShadowManager {
	J3DUShadowManager(u32, _GXTexFmt, u8, bool);
	~J3DUShadowManager();

	void getFormatCoefficient(_GXTexFmt) const;
	void calc(const Vec&, J3DUShadowTextureSizeRatioCalcBase*);
	void capture();

#ifdef MATCHING
	// The following is purely made up for the sake of matching.
	// We have no idea what the structure actually looked like.
	J3DUMultiTexture m_multiTexture;
#endif
};

struct ProjectionBackup {
	~ProjectionBackup();
};

struct ScissorBackup {
	~ScissorBackup();
};

struct ViewportBackup {
	~ViewportBackup();
};

void calcSphereIncludingTwoSpheres(Vec*, float, Vec*, float, Vec*, float*);
void calcSphereIncludingTwoSpheres(Vec*, float, Vec*, float*);
void calcSphereIncludingModel(const J3DModel*, Vec*);
void J3DUIsShadowInViewFrustum(const J3DUShadowInfo&, float (*)[4], const J3DUClipper&, const JGeometry::TPartition3<float>&);

#endif
