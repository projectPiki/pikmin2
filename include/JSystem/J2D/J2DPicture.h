#ifndef _JSYSTEM_J2D_J2DPICTURE_H
#define _JSYSTEM_J2D_J2DPICTURE_H

#include "JSystem/J2D/J2DPane.h"
#include "JSystem/JUtility/JUTTexture.h"

// Size: 0x168
struct J2DPicture : public J2DPane {
	struct TCornerColor {
		TCornerColor() { }

		TCornerColor(u32 col1, u32 col2, u32 col3, u32 col4)
		{
			mColor0.set(col1);
			mColor1.set(col2);
			mColor2.set(col3);
			mColor3.set(col4);
		}

		inline void operator=(JUtility::TColor* colors)
		{
			mColor0 = colors[0];
			mColor1 = colors[1];
			mColor2 = colors[2];
			mColor3 = colors[3];
		}

		JUtility::TColor mColor0; // _00
		JUtility::TColor mColor1; // _04
		JUtility::TColor mColor2; // _08
		JUtility::TColor mColor3; // _0C
	};

	J2DPicture();
	J2DPicture(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive);
	J2DPicture(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materials);
	J2DPicture(const ResTIMG*);
	J2DPicture(const char*);
	J2DPicture(JUTTexture* texture);
	J2DPicture(u64 id, const JGeometry::TBox2f& bounds);

	virtual ~J2DPicture();                                                                                               // _08
	virtual u16 getTypeID() const { return PANETYPE_Picture; };                                                          // _0C (weak)
	virtual void drawSelf(f32 x, f32 y);                                                                                 // _34
	virtual void drawSelf(f32 x, f32 y, Mtx* texMtx);                                                                    // _38
	virtual bool isUsed(const ResTIMG* resource);                                                                        // _4C
	virtual bool isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); }                                   // _50 (weak)
	virtual void rewriteAlpha() { }                                                                                      // _58 (weak)
	virtual void initiate(const ResTIMG* img, const ResTLUT* lut);                                                       // _94
	virtual bool prepareTexture(u8);                                                                                     // _98
	virtual bool append(const ResTIMG* resource, f32 blendRatio) { return insert(resource, mTextureCount, blendRatio); } // _9C (weak)
	virtual bool append(const ResTIMG* resource, JUTPalette* palette, f32 blendRatio)
	{
		return insert(resource, palette, mTextureCount, blendRatio);
	}                                                                                                                 // _A0 (weak)
	virtual bool append(const char* fileName, f32 blendRatio) { return insert(fileName, mTextureCount, blendRatio); } // _A4 (weak)
	virtual bool append(const char* fileName, JUTPalette* palette, f32 blendRatio)
	{
		return insert(fileName, palette, mTextureCount, blendRatio);
	}                                                                                                               // _A8 (weak)
	virtual bool append(JUTTexture* texture, f32 blendRatio) { return insert(texture, mTextureCount, blendRatio); } // _AC (weak)
	virtual bool prepend(const ResTIMG* resource, f32 blendRatio) { return insert(resource, 0, blendRatio); }       // _B0 (weak)
	virtual bool prepend(const ResTIMG* resource, JUTPalette* palette, f32 blendRatio)
	{
		return insert(resource, palette, 0, blendRatio);
	}                                                                                                      // _B4 (weak)
	virtual bool prepend(const char* fileName, f32 blendRatio) { return insert(fileName, 0, blendRatio); } // _B8 (weak)
	virtual bool prepend(const char* fileName, JUTPalette* palette, f32 blendRatio)
	{
		return insert(fileName, palette, 0, blendRatio);
	}                                                                                                                         // _BC (weak)
	virtual bool prepend(JUTTexture* texture, f32 blendRatio) { return insert(texture, 0, blendRatio); }                      // _C0 (weak)
	virtual bool insert(const ResTIMG* resource, u8 id, f32 blendRatio) { return insert(resource, nullptr, id, blendRatio); } // _C4 (weak)
	virtual bool insert(const ResTIMG*, JUTPalette*, u8, f32);                                                                // _C8
	virtual bool insert(const char* fileName, u8 id, f32 blendRatio) { return insert(fileName, nullptr, id, blendRatio); }    // _CC (weak)
	virtual bool insert(const char*, JUTPalette*, u8, f32);                                                                   // _D0
	virtual bool insert(JUTTexture* texture, u8 id, f32 blendRatio);                                                          // _D4
	virtual BOOL remove(u8 id);                                                                                               // _D8
	virtual BOOL remove() { return remove(mTextureCount - 1); }                                                               // _DC (weak)
	virtual BOOL remove(JUTTexture* texture);                                                                                 // _E0
	virtual void draw(f32 x, f32 y, bool p3, bool p4, bool p5) { draw(x, y, 0, p3, p4, p5); }                                 // _E4 (weak)
	virtual void draw(f32 x, f32 y, u8 id, bool p4, bool p5, bool p6)                                                         // _E8 (weak)
	{
		if (id < mTextureCount && mTextures[id]) {
			draw(x, y, mTextures[id]->getSizeX(), mTextures[id]->getSizeY(), p4, p5, p6);
		}
	}
	virtual void draw(f32, f32, f32, f32, bool, bool, bool);                          // _EC
	virtual void drawOut(f32 x1, f32 y1, f32 width1, f32 height1, f32 texX, f32 texY) // _F0 (weak)
	{
		if (mTextures[0] == nullptr) {
			return;
		}

		drawOut(JGeometry::TBox2f(x1, y1, x1 + width1, y1 + height1),
		        JGeometry::TBox2f(texX, texY, texX + mTextures[0]->getSizeX(), texY + mTextures[0]->getSizeY()));
	}
	virtual void drawOut(f32 x1, f32 y1, f32 width1, f32 height1, f32 x2, f32 y2, f32 width2, f32 height2) // _F4 (weak)
	{
		drawOut(JGeometry::TBox2f(x1, y1, x1 + width1, y1 + height1), JGeometry::TBox2f(x2, y2, x2 + width2, y2 + height2));
	}
	virtual void drawOut(const JGeometry::TBox2f&, const JGeometry::TBox2f&); // _F8
	virtual void load(GXTexMapID texMapID, u8 id)                             // _FC (weak)
	{
		if (id < mTextureCount && id < 4 && mTextures[id] != nullptr) {
			mTextures[id]->load(texMapID);
		}
	}
	virtual void load(u8); // _100 (weak)
	virtual void setBlendRatio(f32 p1, f32 p2, f32 p3, f32 p4, f32 p5, f32 p6, f32 p7, f32 p8)
	{
		setBlendColorRatio(p1, p2, p3, p4, p5, p6, p7, p8);
		setBlendAlphaRatio(p1, p2, p3, p4, p5, p6, p7, p8);
	}                                                                                          // _104 (weak)
	virtual void setBlendColorRatio(f32, f32, f32, f32, f32, f32, f32, f32);                   // _108
	virtual void setBlendAlphaRatio(f32, f32, f32, f32, f32, f32, f32, f32);                   // _10C
	virtual ResTIMG* changeTexture(const ResTIMG* img, u8 id);                                 // _110
	virtual ResTIMG* changeTexture(const char* fileName, u8 id);                               // _114
	virtual ResTIMG* changeTexture(const ResTIMG*, u8 id, JUTPalette* palette);                // _118
	virtual ResTIMG* changeTexture(const char* fileName, u8 id, JUTPalette* palette);          // _11C
	virtual JUTTexture* getTexture(u8 id) const { return (id < 4) ? mTextures[id] : nullptr; } // _120 (weak)
	virtual u8 getTextureCount() const { return mTextureCount; }                               // _124 (weak)
	virtual bool setBlack(JUtility::TColor black)                                              // _128 (weak)
	{
		mBlack = black;
		return true;
	}
	virtual bool setWhite(JUtility::TColor white) // _12C (weak)
	{
		mWhite = white;
		return true;
	}
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white) // _130 (weak)
	{
		mBlack = black;
		mWhite = white;
		return true;
	}
	virtual JUtility::TColor getBlack() const { return mBlack; }                // _134 (weak)
	virtual JUtility::TColor getWhite() const { return mWhite; }                // _138 (weak)
	virtual J2DMaterial* getMaterial() const { return nullptr; }                // _13C (weak)
	virtual void drawFullSet(f32 x, f32 y, f32 width, f32 height, Mtx* texMtx); // _140
	virtual void drawTexCoord(f32 x, f32 y, f32 width, f32 height, s16 btmLeftS, s16 btmLeftT, s16 btmRightS, s16 btmRightT, s16 topLeftS,
	                          s16 topLeftT, s16 topRightS, s16 topRightT, Mtx* texMtx); // _144
	virtual u8 getUsableTlut(u8 id);                                                    // _148

	void initinfo();
	void private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* arc);
	void private_initiate(const ResTIMG* img, const ResTLUT* lut);
	void setTevMode();
	void setBlendKonstColor();
	void setBlendKonstAlpha();
	void getNewColor(JUtility::TColor* outColor);
	void setTexCoord(const JGeometry::TVec2s* texCoord);
	void setTexCoord(const JUTTexture* texture, J2DBinding binding, J2DMirror mirror, bool doRotate90);
	void setTexCoord(JGeometry::TVec2s* texCoord, const JUTTexture* texture, J2DBinding binding, J2DMirror mirror, bool doRotate90);
	GXTlut getTlutID(const ResTIMG* img, u8 id);
	void operator=(const J2DPicture&);

	inline void setCornerColor(TCornerColor colors)
	{
		mCornerColors[0].set(colors.mColor0);
		mCornerColors[1].set(colors.mColor1);
		mCornerColors[2].set(colors.mColor2);
		mCornerColors[3].set(colors.mColor3);
	}

	inline void setCornerColor(JUtility::TColor color)
	{
		mCornerColors[0].set(color);
		mCornerColors[1].set(color);
		mCornerColors[2].set(color);
		mCornerColors[3].set(color);
	}

	inline void setCornerColorRef(JUtility::TColor& color)
	{
		mCornerColors[0].set(color);
		mCornerColors[1].set(color);
		mCornerColors[2].set(color);
		mCornerColors[3].set(color);
	}

	inline void setCornerColor(JUtility::TColor color0, JUtility::TColor color1, JUtility::TColor color2, JUtility::TColor color3)
	{
		mCornerColors[0] = (color0);
		mCornerColors[1] = (color1);
		mCornerColors[2] = (color2);
		mCornerColors[3] = (color3);
	}

	inline void getCornerColor(TCornerColor& colors) { colors = mCornerColors; }

	inline ResTIMG* getTIMG(u8 i) { return getTexture(i)->mTexInfo; }

	inline JGeometry::TVec2<s16>* getTexCoord(int i) { return &mTexCoords[i]; }

	static inline void swap(f32& a, f32& b)
	{
		f32 tmp = a;
		a       = b;
		b       = tmp;
	}

	// _000      = VTBL
	// _000-_100 = J2DPane
	JUTTexture* mTextures[4];            // _100
	u8 mTextureCount;                    // _110
	u8 mUsedTextureFlags;                // _111
	JGeometry::TVec2<s16> mTexCoords[4]; // _112
	f32 mBlendColorRatio[4];             // _124
	f32 mBlendAlphaRatio[4];             // _134
	JUTPalette* mPalette;                // _144
	JUtility::TColor mWhite;             // _148
	JUtility::TColor mBlack;             // _14C
	JUtility::TColor mCornerColors[4];   // _150, cant be TCornerColor because it needs to be array
	JUtility::TColor mBlendColor;        // _160
	JUtility::TColor mBlendAlpha;        // _164
};

// Size: 0x1A8
struct J2DPictureEx : public J2DPicture {
	enum stage_enum { Stage_0 = 0, Stage_1, Stage_2, Stage_3, Stage_4, Stage_5, Stage_6, Stage_7 };

	J2DPictureEx();
	J2DPictureEx(const ResTIMG* img, u32 matFlag);
	J2DPictureEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const ResTIMG*, u32);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const char*, u32);
	J2DPictureEx(const char* fileName, u32 matFlag);

	virtual ~J2DPictureEx();                                                                                       // _08
	virtual void setCullBack(bool shouldCullBack) { setCullBack((shouldCullBack) ? GX_CULL_BACK : GX_CULL_NONE); } // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                                 // _20
	virtual void setAlpha(u8 alpha);                                                                               // _24
	virtual void drawSelf(f32 x, f32 y, Mtx* texMtx);                                                              // _38
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
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform* animation);                                // _90
	virtual void initiate(const ResTIMG* img, const ResTLUT* lut);                                                 // _94
	virtual bool prepareTexture(u8 id);                                                                            // _98
	virtual bool append(const ResTIMG* img, f32 blendRatio) { return append(img, nullptr, blendRatio); }           // _9C (weak)
	virtual bool append(const ResTIMG*, JUTPalette*, f32);                                                         // _A0
	virtual bool append(const char* fileName, f32 blendRatio) { return append(fileName, nullptr, blendRatio); }    // _A4 (weak)
	virtual bool append(const char* fileName, JUTPalette* palette, f32 blendRatio);                                // _A8
	virtual bool append(JUTTexture* texture, f32 blendRatio);                                                      // _AC
	virtual bool prepend(const ResTIMG* resource, f32 blendRatio) { return insert(resource, 0, blendRatio); }      // _B0 (weak)
	virtual bool prepend(const ResTIMG* resource, JUTPalette* palette, f32 blendRatio)
	{
		return insert(resource, palette, 0, blendRatio);
	}                                                                                                      // _B4 (weak)
	virtual bool prepend(const char* fileName, f32 blendRatio) { return insert(fileName, 0, blendRatio); } // _B8 (weak)
	virtual bool prepend(const char* fileName, JUTPalette* palette, f32 blendRatio)
	{
		return insert(fileName, palette, 0, blendRatio);
	}                                                                                                                         // _BC (weak)
	virtual bool prepend(JUTTexture* texture, f32 blendRatio) { return insert(texture, 0, blendRatio); }                      // _C0 (weak)
	virtual bool insert(const ResTIMG* resource, u8 id, f32 blendRatio) { return insert(resource, nullptr, id, blendRatio); } // _C4 (weak)
	virtual bool insert(const ResTIMG* resource, JUTPalette* palette, u8 id, f32 blendRatio);                                 // _C8
	virtual bool insert(const char* fileName, u8 id, f32 blendRatio) { return insert(fileName, nullptr, id, blendRatio); }    // _CC (weak)
	virtual bool insert(const char* fileName, JUTPalette* palette, u8 id, f32 blendRatio);                                    // _D0
	virtual bool insert(JUTTexture* texture, u8 id, f32 blendRatio);                                                          // _D4
	virtual BOOL remove(u8 id);                                                                                               // _D8
	virtual BOOL remove();                                                                                                    // _DC
	virtual BOOL remove(JUTTexture* texture);                                                                                 // _E0
	virtual void draw(f32 x, f32 y, bool p3, bool p4, bool doRotate90) { draw(x, y, 0, p3, p4, doRotate90); }                 // _E4 (weak)
	virtual void draw(f32 x, f32 y, u8 id, bool, bool, bool);                                                                 // _E8
	virtual void draw(f32 x, f32 y, f32 width, f32 height, bool, bool, bool);                                                 // _EC
	virtual void drawOut(f32, f32, f32, f32, f32, f32);                                                                       // _F0 (weak)
	virtual void drawOut(f32 boxX, f32 boxY, f32 boxWidth, f32 boxHeight, f32 texX, f32 texY, f32 texWidth, f32 texHeight)    // _F4 (weak)
	{
		drawOut(JGeometry::TBox2f(boxX, boxY, boxX + boxWidth, boxY + boxHeight),
		        JGeometry::TBox2f(texX, texY, texX + texWidth, texY + texHeight));
	}
	virtual void drawOut(const JGeometry::TBox2f& posBox, const JGeometry::TBox2f& texRect); // _F8
	virtual void load(GXTexMapID texMapID, u8 id);                                           // _FC
	virtual void load(u8 id) { load(GXTexMapID(id), id); }                                   // _100 (weak)
	virtual void setBlendColorRatio(f32, f32, f32, f32, f32, f32, f32, f32);                 // _108
	virtual void setBlendAlphaRatio(f32, f32, f32, f32, f32, f32, f32, f32);                 // _10C
	virtual ResTIMG* changeTexture(const ResTIMG* img, u8 id);                               // _110
	virtual ResTIMG* changeTexture(const char* fileName, u8 id);                             // _114
	virtual ResTIMG* changeTexture(const ResTIMG* img, u8 id, JUTPalette* palette);          // _118
	virtual ResTIMG* changeTexture(const char* fileName, u8 id, JUTPalette* palette);        // _11C
	virtual JUTTexture* getTexture(u8 id) const;                                             // _120
	virtual u8 getTextureCount() const;                                                      // _124
	virtual bool setBlack(JUtility::TColor black);                                           // _128
	virtual bool setWhite(JUtility::TColor white);                                           // _12C
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);              // _130
	virtual JUtility::TColor getBlack() const;                                               // _134
	virtual JUtility::TColor getWhite() const;                                               // _138
	virtual J2DMaterial* getMaterial() const { return mMaterial; }                           // _13C (weak)
	virtual void drawFullSet(f32 x, f32 y, f32 width, f32 height, Mtx* texMtx);              // _140
	virtual void drawTexCoord(f32 x, f32 y, f32 width, f32 height, s16 btmLeftS, s16 btmLeftT, s16 btmRightS, s16 btmRightT, s16 topLeftS,
	                          s16 topLeftT, s16 topRightS, s16 topRightT, Mtx* texMtx); // _144
	virtual u8 getUsableTlut(u8 id);                                                    // _148

	void initialize(u32 matFlag);
	void insertCommon(u8, f32);
	bool isInsert(u8) const;
	bool isRemove(u8) const;
	void setTevOrder(u8, u8, bool);
	void setTevStage(u8, u8, bool);
	void setStage(J2DTevStage*, stage_enum);
	void setTevKColor(u8);
	void setTevKColorSel(u8);
	void setTevKAlphaSel(u8);
	void shiftSetBlendRatio(u8, f32, bool, bool);
	bool getBlackWhite(JUtility::TColor* outBlack, JUtility::TColor* outWhite) const;
	bool isSetBlackWhite(JUtility::TColor black, JUtility::TColor white) const;

	/** @fabricated */
	inline void setAnmVtxColorHelper(J2DAnmVtxColor* animation, u16 p2, u8 p3)
	{
		for (u16 b = 0; b < p2; b++) {
			for (u16 c = 0; c < animation->mVtxColorIndexData[b]->mNum; c++) {
				if (_170[p3] == *animation->mVtxColorIndexPtr[(u32)animation->mVtxColorIndexData[b]->mData + c]) {
					mAnmVtxColor = animation;
					_1A4 |= 1 << p3;
					return;
				}
			}
		}
	}

	// _000      = VTBL
	// _000-_168 = J2DPicture
	J2DMaterial* mMaterial;               // _168
	u16 mMaterialNum;                     // _16C
	u16 mMaterialID;                      // _16E
	u16 _170[4];                          // _170
	f32 mExBlendColorRatio[4];            // _178
	f32 mExBlendAlphaRatio[4];            // _188
	bool mWasInitialized;                 // _198
	J2DAnmVisibilityFull* mAnmVisibility; // _19C
	J2DAnmVtxColor* mAnmVtxColor;         // _1A0
	u8 _1A4;                              // _1A4
};

#endif
