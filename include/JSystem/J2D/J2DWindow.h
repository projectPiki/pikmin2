#ifndef _JSYSTEM_J2D_J2DWINDOW_H
#define _JSYSTEM_J2D_J2DWINDOW_H

#include "JSystem/J2D/J2DPane.h"

// Size: 0x40
struct J2DWindowData {
	u8 _00[0x10];          // _00, unknown
	u16 mContentIds[4];    // _10
	u8 _18;                // _18
	u8 _19;                // _19
	u16 mMinX;             // _1A
	u16 mMinY;             // _1C
	u16 mOffsetX;          // _1E
	u16 mOffsetY;          // _20
	u16 _22;               // _22
	u16 mParentId;         // _24
	u16 _26;               // _26
	u16 _28[4];            // _28
	u32 mContentColors[4]; // _30
};

// Size: 0x148
struct J2DWindow : public J2DPane {
	struct TMaterial {
		J2DMaterial* _00; // _00
		J2DMaterial* _04; // _04
		J2DMaterial* _08; // _08
		J2DMaterial* _0C; // _0C
		J2DMaterial* _10; // _10
	};

	struct TContentsColor {
		TContentsColor() { }

		JUtility::TColor mColorA; // _00
		JUtility::TColor mColorB; // _04
		JUtility::TColor mColorC; // _08
		JUtility::TColor mColorD; // _0C
	};

	J2DWindow();
	J2DWindow(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive);
	J2DWindow(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materials);

	virtual ~J2DWindow();                                                  // _08
	virtual u16 getTypeID() const { return PANETYPE_Window; }              // _0C (weak)
	virtual void resize(f32, f32);                                         // _18
	virtual void drawSelf(f32, f32);                                       // _34
	virtual void drawSelf(f32, f32, Mtx*);                                 // _38
	virtual bool isUsed(const ResTIMG* resource);                          // _4C
	virtual void draw(const JGeometry::TBox2f&);                           // _94
	virtual void draw(const JGeometry::TBox2f&, const JGeometry::TBox2f&); // _98
	virtual void draw(f32 x0, f32 y0, f32 width, f32 height)               // _9C (weak)
	{
		draw(JGeometry::TBox2f(x0, y0, x0 + width, y0 + height));
	}
	virtual bool setBlack(JUtility::TColor black) // _A0 (weak)
	{
		mBlack = black;
		return true;
	}
	virtual bool setWhite(JUtility::TColor white) // _A4 (weak)
	{
		mWhite = white;
		return true;
	}
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white) // _A8 (weak)
	{
		mBlack = black;
		mWhite = white;
		return true;
	}
	virtual JUtility::TColor getBlack() const { return mBlack; }                       // _AC (weak)
	virtual JUtility::TColor getWhite() const { return mWhite; }                       // _B0 (weak)
	virtual JUTTexture* getFrameTexture(u8 frameMaterialIndex, u8 textureIndex) const; // _B4
	virtual JUTTexture* getContentsTexture(u8 textureIndex) const                      // _B8 (weak)
	{
		return (textureIndex != 0) ? nullptr : mContentsTexture;
	}
	virtual void getMaterial(TMaterial& material) const // _BC (weak)
	{
		material._00 = nullptr;
		material._04 = nullptr;
		material._08 = nullptr;
		material._0C = nullptr;
		material._10 = nullptr;
	}
	virtual J2DMaterial* getFrameMaterial(u8 index) const { return nullptr; }          // _C0 (weak)
	virtual J2DMaterial* getContentsMaterial() const { return nullptr; }               // _C4 (weak)
	virtual void drawContents(const JGeometry::TBox2f&);                               // _C8
	virtual bool isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); } // _50 (weak)
	virtual void rewriteAlpha() { }                                                    // _58 (weak)

	void private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*);
	void initinfo2();
	void draw_private(const JGeometry::TBox2f&, const JGeometry::TBox2f&);
	void setContentsColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void drawFrameTexture(JUTTexture*, f32, f32, f32, f32, u16, u16, u16, u16, bool);
	void drawFrameTexture(JUTTexture*, f32, f32, bool, bool, bool);
	void drawContentsTexture(f32, f32, f32, f32);
	void setTevMode(JUTTexture*, JUtility::TColor, JUtility::TColor);

	void setContentsColor(JUtility::TColor color) { setContentsColor(color, color, color, color); }

	void getContentsColor(TContentsColor& contentsColor)
	{
		contentsColor.mColorA = mContentsColorA;
		contentsColor.mColorB = mContentsColorB;
		contentsColor.mColorC = mContentsColorC;
		contentsColor.mColorD = mContentsColorD;
	}

	bool isFlag2(u8 flag) { return _145 & flag; }

	// _000      = VTBL
	// _000-_100 = J2DPane
	JUTTexture* mFrameTextureA;       // _100
	JUTTexture* mFrameTextureB;       // _104
	JUTTexture* mFrameTextureC;       // _108
	JUTTexture* mFrameTextureD;       // _10C
	JUTTexture* mContentsTexture;     // _110
	JGeometry::TBox2f mWindowArea;    // _114
	JUTPalette* mPalette;             // _124
	JUtility::TColor mContentsColorA; // _128
	JUtility::TColor mContentsColorB; // _12C
	JUtility::TColor mContentsColorC; // _130
	JUtility::TColor mContentsColorD; // _134
	JUtility::TColor mWhite;          // _138
	JUtility::TColor mBlack;          // _13C
	s16 mMinWidth;                    // _140
	s16 mMinHeight;                   // _142
	u8 mWrapFlags;                    // _144
	u8 _145;                          // _145
};

// Size: 0x180
struct J2DWindowEx : public J2DWindow {
	enum stage_enum {
		STAGE_Unk0 = 0,
		STAGE_Unk1,
		STAGE_Unk2,
		STAGE_Unk3,
		STAGE_Unk4,
	};

	J2DWindowEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);

	virtual ~J2DWindowEx();                                                                                        // _08
	virtual void setCullBack(bool shouldCullBack) { setCullBack((shouldCullBack) ? GX_CULL_BACK : GX_CULL_NONE); } // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                                 // _20
	virtual void setAlpha(u8);                                                                                     // _24
	virtual void drawSelf(f32, f32, Mtx*);                                                                         // _38
	virtual bool isUsed(const ResTIMG* resource);                                                                  // _4C
	virtual bool isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); }                             // _50 (weak)
	virtual void rewriteAlpha();                                                                                   // _58
	virtual void setAnimation(J2DAnmBase* animation) { J2DPane::setAnimation(animation); }                         // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation) { J2DPane::setAnimation(animation); }                    // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                             // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                        // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                     // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                         // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                    // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                                                          // _78
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*);                                          // _90
	virtual void draw(const JGeometry::TBox2f&);                                                                   // _94
	virtual void draw(const JGeometry::TBox2f&, const JGeometry::TBox2f&);                                         // _98
	virtual void draw(f32, f32, f32, f32);                                                                         // _9C (weak)
	virtual bool setBlack(JUtility::TColor black);                                                                 // _A0
	virtual bool setWhite(JUtility::TColor white);                                                                 // _A4
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);                                    // _A8
	virtual JUtility::TColor getBlack() const;                                                                     // _AC
	virtual JUtility::TColor getWhite() const;                                                                     // _B0
	virtual JUTTexture* getFrameTexture(u8 frameMaterialIndex, u8 textureIndex) const;                             // _B4
	virtual JUTTexture* getContentsTexture(u8 textureIndex) const;                                                 // _B8
	virtual void getMaterial(J2DWindow::TMaterial& material) const                                                 // _BC (weak)
	{
		material._00 = mFrameMaterials[0];
		material._04 = mFrameMaterials[1];
		material._08 = mFrameMaterials[2];
		material._0C = mFrameMaterials[3];
		material._10 = mContentsMaterial;
	}
	virtual J2DMaterial* getFrameMaterial(u8 index) const { return (index >= 4) ? nullptr : mFrameMaterials[index]; } // _C0 (weak)
	virtual J2DMaterial* getContentsMaterial() const { return mContentsMaterial; }                                    // _C4 (weak)
	virtual void drawContents(const JGeometry::TBox2f&);                                                              // _C8

	void setMinSize();
	void draw_private(const JGeometry::TBox2f&, const JGeometry::TBox2f&);
	void drawFrameTexture(f32, f32, f32, f32, u16, u16, u16, u16, J2DMaterial*, bool);
	void setTevStage(bool);
	void setStage(J2DTevStage*, J2DWindowEx::stage_enum);
	bool getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	bool isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;
	bool isNeedSetAnm(u8 frameMaterialIndex);

	// unused/inlined:
	void initialize(u32, const ResTIMG**, const JGeometry::TBox2f*);
	void setTevOrder(bool);

	// _000      = VTBL
	// _000-_148 = J2DWindow
	J2DMaterial* mFrameMaterials[4];      // _148
	u16 _158[2];                          // _158
	u8 _15C[4];                           // _15C
	J2DMaterial* mContentsMaterial;       // _160
	u16 mMaterialID;                      // _164
	u16 _166;                             // _166
	u16 _168[4];                          // _168
	u8 mMaterialFlags;                    // _170
	J2DAnmVisibilityFull* mAnmVisibility; // _174
	J2DAnmVtxColor* mAnmVtxColor;         // _178
	u8 _17C;                              // _17C
};

#endif
