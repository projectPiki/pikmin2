#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "JSystem/J2D/J2DScreen.h"
#include "JSystem/J2D/J2DWindow.h"
#include "JSystem/J2D/J2DPicture.h"
#include "JSystem/J2D/J2DTextBox.h"
#include "JSystem/J3D/J3DFileBlock.h"
#include "JSystem/J3D/J3DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JKernel/JKRFileLoader.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUtility/JUTNameTab.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/J2D/J2DGrafContext.h"
#include "JSystem/J2D/J2DMaterialFactory.h"

J2DDataManage* J2DScreen::mDataManage;

/**
 * @note Address: 0x8003F474
 * @note Size: 0xA8
 */
J2DScreen::J2DScreen()
    : J2DPane(nullptr, true, 'root', JGeometry::TBox2f(JGeometry::TVec2f(0.0f, 0.0f), JGeometry::TVec2f(640.0f, 480.0f)))
{
	mAnimPaneIndex = 0xFFFF;
	mIsScissor     = false;
	mMaterialCount = 0;
	mMaterials     = nullptr;
	mTexRes        = nullptr;
	mFontRes       = nullptr;
	mNameTab       = nullptr;
}

/**
 * @note Address: 0x8003F51C
 * @note Size: 0x68
 * __dt__9J2DScreenFv
 */
J2DScreen::~J2DScreen()
{
	clean();
}

/**
 * @note Address: 0x8003F584
 * @note Size: 0xA0
 */
void J2DScreen::clean()
{
	delete[] mMaterials;
	mMaterialCount = 0;
	mMaterials     = nullptr;
	delete[] mTexRes;
	mTexRes = nullptr;
	delete[] mFontRes;
	mFontRes = nullptr;
	if (mNameTab) {
		mNameTab->clearResNameTable();
		delete mNameTab;
		mNameTab = nullptr;
	}
}

/**
 * @note Address: 0x8003F624
 * @note Size: 0x104
 */
bool J2DScreen::set(const char* name, u32 flags, JKRArchive* archive)
{
	void* resource = JKRFileLoader::getGlbResource(name, archive);
	if (resource) {
		size_t resSize = archive->getExpandedResSize(resource);
		JSUMemoryInputStream input(resource, resSize);
		return set(&input, flags);
	}
	return false;
}

/**
 * @note Address: 0x8003F728
 * @note Size: 0x24
 * set__9J2DScreenFP20JSURandomInputStreamUl
 */
bool J2DScreen::set(JSURandomInputStream* stream, u32 flags)
{
	private_set(stream, flags, nullptr);
}

/**
 * @note Address: 0x8003F74C
 * @note Size: 0x140
 */
bool J2DScreen::private_set(JSURandomInputStream* stream, u32 flags, JKRArchive* archive)
{
	if (!checkSignature(stream)) {
		return false;
	}
	if (!getScreenInformation(stream)) {
		return false;
	}
	bool result = makeHierarchyPanes(this, stream, flags, archive) != 2;
	if ((flags & 0x1F0000) == 0) {
		clean();
	}
	return (result != false) ? stream->mIsEOFMaybe == 0 : false;
}

/**
 * @note Address: 0x8003F88C
 * @note Size: 0x60
 */
bool J2DScreen::checkSignature(JSURandomInputStream* stream)
{
	J3DFileHeader header;
	stream->read(&header, sizeof(header));
	if (header.mJ3dVersion != 'SCRN' || !(header.mFileVersion == 'blo1' || header.mFileVersion == 'blo2')) {
		return false;
	}
	return true;
}

/**
 * @note Address: 0x8003F8EC
 * @note Size: 0xFC
 */
bool J2DScreen::getScreenInformation(JSURandomInputStream* input)
{
	J2DScreenInfoBlock info;
	input->read(&info, sizeof(info));
	if (info.mBloBlockType != 'INF1') {
		return false;
	}
	JGeometry::TBox2f box;
	box.i.x = 0.0f;
	box.i.y = 0.0f;
	box.f.x = info.mWidth;
	box.f.y = info.mHeight;
	place(box);
	mColor = JUtility::TColor(info.mColor);
	if (sizeof(info) < info.mBlockLength) {
		input->skip(info.mBlockLength - sizeof(info));
	}
	return true;
}

/**
 * @note Address: 0x8003F9E8
 * @note Size: 0x560
 */
s32 J2DScreen::makeHierarchyPanes(J2DPane* parent, JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	J2DPane* currentPane = parent;
	while (true) {
		J2DScrnBlockHeader header;
		input->peek(&header, sizeof(J2DScrnBlockHeader));

		switch (header.mBloBlockType) {
		case 'EXT1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 1;

		case 'BGN1': {
			input->seek(header.mBlockLength, SEEK_CUR);

			s32 result = makeHierarchyPanes(currentPane, input, flags, archive);
			if (result) {
				return result;
			}
			break;
		}
		case 'END1':
			input->seek(header.mBlockLength, SEEK_CUR);
			return 0;

		case 'TEX1':
			if ((mTexRes = getResReference(input, flags)) == nullptr) {
				return 2;
			}
			break;
		case 'FNT1':
			if ((mFontRes = getResReference(input, flags)) == nullptr) {
				return 2;
			}
			break;
		case 'MAT1':
			if (!createMaterial(input, flags, archive)) {
				return 2;
			}
			break;
		default:
			if (archive == nullptr) {
				currentPane = createPane(header, input, parent, flags);
			} else {
				currentPane = createPane(header, input, parent, flags, archive);
			}

			if (currentPane == nullptr) {
				return 2;
			}
			break;
		}
	}
}

/**
 * @note Address: 0x8003FF78
 * @note Size: 0x334
 */
J2DPane* J2DScreen::createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags,
                               JKRArchive* archive)
{
	// can't just do direct returns here...
	J2DPane* pane;
	switch (header.mBloBlockType) {
	case 'PAN1':
		pane = new J2DPane(parent, input, 0);
		break;
	case 'WIN1':
		pane = new J2DWindow(parent, input, archive);
		break;
	case 'PIC1':
		pane = new J2DPicture(parent, input, archive);
		break;
	case 'TBX1':
		pane = new J2DTextBox(parent, input, archive);
		break;
	case 'PAN2':
		pane = new J2DPane(parent, input, 1);
		break;
	case 'WIN2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DWindowEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DWindow(parent, input, mMaterials);
		break;
	case 'PIC2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DPictureEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DPicture(parent, input, mMaterials);
		break;
	case 'TBX2':
		if ((flags & 0x1F0000) != 0) {
			pane = new J2DTextBoxEx(parent, input, flags, mMaterials);
			break;
		}
		pane = new J2DTextBox(parent, input, flags, mMaterials);
		break;
	default: {
		int targetPosition = input->getPosition() + header.mBlockLength;
		pane               = new J2DPane(parent, input, 0);
		input->seek(targetPosition, SEEK_SET);
		break;
	}
	}
	return pane;
}

/**
 * @note Address: 0x800402AC
 * @note Size: 0x1CC
 */
void J2DScreen::draw(f32 x, f32 y, const J2DGrafContext* graf)
{
	u32 x1, y1, wd, ht;
	if (mIsScissor) {
		GXGetScissor(&x1, &y1, &wd, &ht);
	}

	if (graf) {
		J2DPane::draw(x, y, graf, mIsScissor, true);
	} else {
		J2DOrthoGraph ortho(0.0f, 0.0f, 640.0f, 480.0f, -1.0f, 1.0f);
		ortho.setPort();
		J2DPane::draw(x, y, &ortho, mIsScissor, true);
	}

	if (mIsScissor) {
		GXSetScissor(x1, y1, wd, ht);
	}

	GXSetNumIndStages(0);
	for (int i = 0; i < 16; i++) {
		GXSetTevDirect((GXTevStageID)i);
	}
	GXSetNumTevStages(1);
	GXSetTevOp(GX_TEVSTAGE0, GX_PASSCLR);
	GXSetTevOrder(GX_TEVSTAGE0, GX_TEXCOORD_NULL, GX_TEXMAP_NULL, GX_COLOR0A0);
	GXSetVtxDesc(GX_VA_TEX0, GX_NONE);
	GXSetCullMode(GX_CULL_NONE);
	GXSetNumTexGens(0);
	GXSetChanCtrl(GX_COLOR0A0, GX_FALSE, GX_SRC_REG, GX_SRC_VTX, 0, GX_DF_NONE, GX_AF_NONE);
	for (int i = 0; i < 4; i++) {
		GXSetTevSwapModeTable((GXTevSwapSel)i, GX_CH_RED, GX_CH_GREEN, GX_CH_BLUE, GX_CH_ALPHA);
	}
}

/**
 * @note Address: 0x80040478
 * @note Size: 0x40
 */
J2DPane* J2DScreen::search(u64 id)
{
	return (id == 0) ? nullptr : J2DPane::search(id);
}

/**
 * @note Address: 0x800404B8
 * @note Size: 0x30
 */
u32 J2DScreen::gather(J2DPane** p1, u64 p2, u64 p3, int p4)
{
	int v1 = 0;
	J2DPane::gather(p1, p2, p3, p4, v1);
	return v1;
}

/**
 * @note Address: 0x800404E8
 * @note Size: 0x40
 */
J2DPane* J2DScreen::searchUserInfo(u64 p1)
{
	return (p1 == 0) ? nullptr : J2DPane::searchUserInfo(p1);
}

/**
 * @note Address: 0x80040528
 * @note Size: 0x158
 */
void J2DScreen::drawSelf(f32 x, f32 y, Mtx* mtx)
{
	JUtility::TColor color(mColor);
	u8 alpha = color.a;
	alpha    = (alpha * mAlpha) / 255;
	if (!alpha) {
		return;
	}

	color = (color & 0xFFFFFF00) | alpha;
	GXSetBlendMode(GX_BM_BLEND, GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_LO_SET);
	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0);
	GXBegin(GX_QUADS, GX_VTXFMT0, 4);

	f32 zero = 0.0f;
	GXPosition3f32(zero, zero, zero);
	GXColor1u32(color);
	GXPosition3f32(mBounds.getWidth(), zero, zero);
	GXColor1u32(color);
	GXPosition3f32(mBounds.getWidth(), mBounds.getHeight(), zero);
	GXColor1u32(color);
	GXPosition3f32(zero, mBounds.getHeight(), zero);
	GXColor1u32(color);

	GXSetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_S16, 0);
}

/**
 * @note Address: 0x80040680
 * @note Size: 0xF4
 */
J2DResReference* J2DScreen::getResReference(JSURandomInputStream* input, u32 flags)
{
	s32 initialPosition = input->getPosition();
	input->skip(4);
	s32 size1, size2;
	size1 = input->readS32();
	input->skip(4);
	size2 = input->readS32();
	input->seek(initialPosition + size2, SEEK_SET);
	size1 = size1 - size2;
	char* data;
	if (flags & (J3DMLF_TevNumShift | J3DMLF_18 | J3DMLF_UseSingleSharedDL | J3DMLF_20 | J3DMLF_21)) {
		data = new char[size1];
	} else {
		data = new (-4) char[size1];
	}
	if (data) {
		input->read(data, size1);
	}
	return (J2DResReference*)data;
}

/**
 * @note Address: 0x80040774
 * @note Size: 0x2F0
 */
bool J2DScreen::createMaterial(JSURandomInputStream* input, u32 flags, JKRArchive* archive)
{
	int initialPosition = input->getPosition();
	u32 blank[2];
	input->read(blank, 8);
	mMaterialCount = input->readU16();
	input->skip(2);

	if (flags & 0x1f0000) {
		mMaterials = new J2DMaterial[mMaterialCount];
	} else {
		mMaterials = new (-4) J2DMaterial[mMaterialCount];
	}

	u8* buffer = new (-4) u8[blank[1]];
	if (mMaterials && buffer) {
		J2DMaterialBlock* blocks = (J2DMaterialBlock*)buffer;
		input->seek(initialPosition, SEEK_SET);
		input->read(buffer, blank[1]);

		J2DMaterialFactory factory(blocks[0]);
		for (u16 i = 0; i < mMaterialCount; i++) {
			factory.create(&mMaterials[i], i, flags, mTexRes, mFontRes, archive);
		}
		if ((flags & 0x1f0000)) {
			u32 offset     = buffer[0x14] << 0x18 | buffer[0x15] << 0x10 | buffer[0x16] << 8 | buffer[0x17];
			ResNTAB* sec_s = (ResNTAB*)(buffer + offset);
			u16 entryNum   = sec_s->mEntryNum;
			u16 lastOffset = sec_s->mEntries[entryNum - 1].mOffs;
			char* ptr      = (char*)sec_s;
			u16 size       = lastOffset;
			while (ptr[size] != 0) {
				size++;
			}
			size++;

			u8* nametab = new u8[size];
			if (nametab == nullptr) {
				goto failure;
			}
			for (u16 i = 0; i < size; i++) {
				nametab[i] = (buffer + offset)[i];
			}

			mNameTab = new JUTNameTab((ResNTAB*)nametab);
			if (mNameTab == nullptr) {
				delete[] nametab;
				goto failure;
			}
		}
	success:
		delete[] buffer;
		return true;
	}

failure:
	delete[] buffer;
	clean();
	return false;
}

/**
 * @note Address: 0x80040A64
 * @note Size: 0x38
 */
J2DMaterial* J2DScreen::getMaterial(u16 index)
{
	if (index >= mMaterialCount) {
		return nullptr;
	}
	if (mMaterials == nullptr) {
		return nullptr;
	}
	return mMaterials + index;
}

/**
 * @note Address: 0x80040A9C
 * @note Size: 0x20
 */
bool J2DScreen::isUsed(const ResTIMG* resource)
{
	return J2DPane::isUsed(resource);
}

/**
 * @note Address: 0x80040ABC
 * @note Size: 0x20
 */
bool J2DScreen::isUsed(const ResFONT* resource)
{
	return J2DPane::isUsed(resource);
}

/**
 * @note Address: 0x80040ADC
 * @note Size: 0x50
 */
void* J2DScreen::getNameResource(const char* fileName)
{
	void* resource = JKRFileLoader::getGlbResource(fileName, nullptr);
	if (resource == nullptr && mDataManage != nullptr) {
		resource = mDataManage->get(fileName);
	}
	return resource;
}

/**
 * @note Address: 0x80040B2C
 * @note Size: 0x74
 */
void J2DScreen::animation()
{
	animationPane(mTransform);
	for (u16 i = 0; i < mMaterialCount; i++) {
		mMaterials[i].animation();
	}
}

/**
 * @note Address: 0x80040BA0
 * @note Size: 0xA4
 */
void J2DScreen::setAnimation(J2DAnmColor* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/**
 * @note Address: 0x80040C44
 * @note Size: 0xBC
 */
void J2DScreen::setAnimation(J2DAnmTextureSRTKey* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/**
 * @note Address: 0x80040D00
 * @note Size: 0xA4
 */
void J2DScreen::setAnimation(J2DAnmTexPattern* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/**
 * @note Address: 0x80040DA4
 * @note Size: 0xEC
 */
void J2DScreen::setAnimation(J2DAnmTevRegKey* animation)
{
	animation->searchUpdateMaterialID(this);
	u16 count = animation->getCRegUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getCRegUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getCRegUpdateMaterialID(i)].setAnimation(animation);
		}
	}
	count = animation->getKRegUpdateMaterialNum();
	for (u16 i = 0; i < count; i++) {
		if (animation->getKRegUpdateMaterialID(i) < mMaterialCount) {
			mMaterials[animation->getKRegUpdateMaterialID(i)].setAnimation(animation);
		}
	}
}

/**
 * @note Address: 0x80040E90
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmVtxColor* animation)
{
	J2DPane::setVtxColorAnimation(animation);
}

/**
 * @note Address: 0x80040EB0
 * @note Size: 0x20
 */
void J2DScreen::setAnimation(J2DAnmVisibilityFull* animation)
{
	J2DPane::setVisibileAnimation(animation);
}
