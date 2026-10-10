#include "TexCaster.h"
#include "System.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "Dolphin/gx.h"
#include "Game/MapMgr.h"

namespace TexCaster {

static const char unusedName[] = "texCaster";

Mgr* Mgr::sInstance;

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
Caster::Caster()
{
	mTriangleCount    = 0;
	mVertices         = nullptr;
	mDisplayList      = 0;
	mDisplayListSize  = 0;
	mTexturePositions = 0;
	mStatus           = CS_Hidden;
	mColor            = 0.0f;
	mChangeRate       = 0.0f;
}

/**
 * @note Address: 0x8023C95C
 * @note Size: 0x60
 */
Caster::~Caster()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x14
 */
void Caster::show()
{
	mColor  = 1.0f;
	mStatus = CS_Finished;
}

/**
 * @note Address: 0x8023C9BC
 * @note Size: 0x14
 */
void Caster::hide()
{
	mColor  = 0.0f;
	mStatus = CS_Hidden;
}

/**
 * @note Address: 0x8023C9D0
 * @note Size: 0x80
 */
void Caster::fadein(f32 duration)
{
	P2ASSERTLINE(59, duration > 0.0f);
	mChangeRate = 1.0f / duration;
	mColor      = 0.0f;
	mStatus     = CS_Increasing;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
void Caster::fadeout(f32 duration)
{
	P2ASSERTLINE(70, duration > 0.0f); // line number is a guess
	mChangeRate = 1.0f / duration;
	mColor      = 1.0f;
	mStatus     = CS_Decreasing;
}

/**
 * @note Address: N/A
 * @note Size: 0x150
 */
void Caster::makeDL()
{
	u8* displayList;
	int index;
	u8* out;
	u8* displayListEnd;
	int i;

	mDisplayListSize = OSRoundDown32B(mTriangleCount * 12 + 34);
	mDisplayList     = new (0x20) u8[mDisplayListSize];

	displayList    = mDisplayList;
	displayListEnd = displayList + mDisplayListSize;
	displayList[0] = 0x90;
	displayList[1] = (mTriangleCount * 3) >> 8;
	displayList[2] = mTriangleCount * 3;
	out            = displayList + 3;
	for (i = 0, index = 0; i < mTriangleCount; i++) {
		for (int j = 0; j < 3; j++) {
			*out++ = (u16)index >> 8;
			*out++ = index;
			*out++ = (u16)index >> 8;
			*out++ = index;
			index++;
		}
	}

	while (out < displayListEnd) {
		*out++ = 0;
	}

	DCFlushRange(mDisplayList, mDisplayListSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 */
void Caster::update()
{
	switch (mStatus) {
	case CS_Finished:
		break;
	case CS_Increasing:
		mColor += mChangeRate * sys->mDeltaTime;
		if (mColor >= 1.0f) {
			mColor  = 1.0f;
			mStatus = CS_Finished;
		}
		break;
	case CS_Decreasing:
		mColor -= mChangeRate * sys->mDeltaTime;
		if (mColor <= 0.0f) {
			mColor  = 0.0f;
			mStatus = CS_Hidden;
		}
		break;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x138
 */
void Caster::draw(Graphics& gfx)
{
	update();
	int v = 255.0f * mColor;
	GXColor color;
	color.a = v;
	color.b = v;
	color.g = v;
	color.r = v;
	GXSetTevColor(GX_TEVREG0, color);

	Mgr::sInstance->getTexture(0)->load(GX_TEXMAP0);
	GXSetArray(GX_VA_POS, mVertices, sizeof(Vector3f));
	GXSetArray(GX_VA_TEX0, mTexturePositions, 8);
	GXCallDisplayList((void*)mDisplayList, mDisplayListSize);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void Caster::drawLine(Graphics&)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
Mgr::Mgr()
    : mTextureCount(0)
    , mTextures(nullptr)
    , mCaster()
{
}

/**
 * @note Address: N/A
 * @note Size: 0x74
 */
Mgr::~Mgr()
{
	sInstance = nullptr;
}

/**
 * @note Address: 0x8023CA50
 * @note Size: 0xA0
 */
void Mgr::globalInstance()
{
	if (!sInstance) {
		sInstance = new Mgr();
		sInstance->loadResource();
	}
}

/**
 * @note Address: 0x8023CAF0
 * @note Size: 0x6C
 */
void Mgr::deleteInstance()
{
	if (sInstance) {
		delete sInstance;
		sInstance = nullptr;
	}
}

/**
 * @note Address: 0x8023CB5C
 * @note Size: 0xE8
 */
void Mgr::loadResource()
{
	JKRArchive* textArc = JKRMountArchive("user/Kando/texCaster/arc.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	P2ASSERTLINE(288, textArc);
	mTextureCount = 1;
	mTextures     = new JUTTexture*[mTextureCount];
	ResTIMG* res  = static_cast<ResTIMG*>(JKRFileLoader::getGlbResource("tex.bti", nullptr));
	P2ASSERTLINE(293, res);
	mTextures[0] = new JUTTexture(res);
}

/**
 * @note Address: 0x8023CC44
 * @note Size: 0x550
 */
Caster* Mgr::create(Sys::Sphere& sphere, f32 rotationAngle)
{
	Sys::CreateTriangleArg triArg;
	triArg.mBoundingSphere = sphere;
	triArg.mScale          = 0.22f;
	triArg.mScaleLimit     = 0.5f;
	Game::mapMgr->createTriangles(triArg);

	if (triArg.mCount == 0) {
		triArg.mCount    = 2;
		triArg.mVertices = new Vector3f[6];

		Vector3f spherePos = sphere.mPosition;

		Vector3f axisX(sphere.mRadius, 0.0f, 0.0f);
		Vector3f axisZ(0.0f, 0.0f, sphere.mRadius);
		triArg.mVertices[0] = spherePos - axisX - axisZ;
		triArg.mVertices[1] = spherePos - axisX + axisZ;
		triArg.mVertices[2] = spherePos + axisX + axisZ;
		triArg.mVertices[3] = spherePos + axisX - axisZ;
		triArg.mVertices[4] = spherePos - axisX - axisZ;
		triArg.mVertices[5] = spherePos + axisX + axisZ;

		for (int i = 0; i < 6; i++) {
			triArg.mVertices[i].y += triArg.mScale;
		}
	}

	Caster* caster            = new Caster;
	caster->mBoundingSphere   = sphere;
	caster->mVertices         = triArg.mVertices;
	caster->mTriangleCount    = triArg.mCount;
	caster->mTexturePositions = new f32[caster->mTriangleCount * 6];

	for (int triangleIndex = 0; triangleIndex < caster->mTriangleCount; triangleIndex++) {
		f32 scaleFactor = (30.0f / sphere.mRadius) * 0.03125f;
		Vector3f center = sphere.mPosition;
		for (int vertexIndex = 0; vertexIndex < 3; vertexIndex++) {
			int index              = triangleIndex * 3 + vertexIndex;
			Vector3f currentVertex = caster->mVertices[index];
			f32 sin1, cos1, cos2, sin2;
			f32 deltaX = currentVertex.x - center.x;
			f32 deltaZ = currentVertex.z - center.z;

			sin1         = dolsinf(rotationAngle);
			cos1         = dolcosf(rotationAngle);
			cos2         = dolcosf(rotationAngle);
			sin2         = dolsinf(rotationAngle);
			f32 rotatedX = deltaZ * sin2 + deltaX * cos2;
			deltaZ       = deltaZ * cos1 - deltaX * sin1;
			deltaX       = rotatedX;
			deltaX *= scaleFactor;
			deltaZ *= scaleFactor;
			caster->mTexturePositions[index * 2]     = 0.5f + deltaX;
			caster->mTexturePositions[index * 2 + 1] = 0.5f + deltaZ;
		}
	}

	caster->makeDL();
	mCaster.add(caster);
	return caster;
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
JUTTexture* Mgr::getTexture(int idx)
{
	bool check = 0 <= idx && idx < mTextureCount;
	P2ASSERTLINE(410, check);
	return mTextures[idx];
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
void Mgr::drawInit(Graphics& gfx)
{
	GXSetCullMode(GX_CULL_NONE);
	GXClearVtxDesc();
	GXSetNumTexGens(1);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD0, GX_TEXMAP0, GX_COLOR0A0);
	GXSetTevColorIn(GX_TEVSTAGE0, GX_CC_ZERO, GX_CC_TEXC, GX_CC_C0, GX_CC_ZERO);
	GXSetTevColorOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_DIVIDE_2, GX_TRUE, GX_TEVPREV);
	GXSetTevAlphaIn(GX_TEVSTAGE0, GX_CA_ZERO, GX_CA_A0, GX_CA_TEXA, GX_CA_ZERO);
	GXSetTevAlphaOp(GX_TEVSTAGE0, GX_TEV_ADD, GX_TB_ZERO, GX_CS_SCALE_1, GX_TRUE, GX_TEVPREV);
	GXSetVtxDesc(GX_VA_POS, GX_INDEX16);
	GXSetVtxDesc(GX_VA_TEX0, GX_INDEX16);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_POS_XYZ, GX_F32, 0);
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetZMode(GX_TRUE, GX_LEQUAL, GX_FALSE);
}

/**
 * @note Address: 0x8023D194
 * @note Size: 0x288
 */
void Mgr::draw(Graphics& gfx)
{
	drawInit(gfx);
	FOREACH_NODE(Caster, mCaster.mChild, child)
	{
		child->draw(gfx);
	}
}

} // namespace TexCaster
