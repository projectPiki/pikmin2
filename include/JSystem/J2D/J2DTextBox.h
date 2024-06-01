#ifndef _JSYSTEM_J2D_J2DTEXTBOX_H
#define _JSYSTEM_J2D_J2DTEXTBOX_H

#include "JSystem/J2D/J2DPane.h"

// Size: 0x138
struct J2DTextBox : public J2DPane {
	J2DTextBox();
	J2DTextBox(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive);
	J2DTextBox(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);
	J2DTextBox(u64, const JGeometry::TBox2f&, const ResFONT*, const char*, s16, J2DTextBoxHBinding, J2DTextBoxVBinding);
	J2DTextBox(u64 tag, const JGeometry::TBox2f& box);                                                                // unused/inlined
	J2DTextBox(const ResFONT*, const char*, s16);                                                                     // unused/inlined
	J2DTextBox(const char*, const char*, s16);                                                                        // unused/inlined
	J2DTextBox(J2DPane* parent, JSURandomInputStream* input);                                                         // unused/inlined
	J2DTextBox(u64, const JGeometry::TBox2f&, const char*, const char*, s16, J2DTextBoxHBinding, J2DTextBoxVBinding); // unused/inlined

	virtual ~J2DTextBox();                                     // _08
	virtual u16 getTypeID() const { return PANETYPE_TextBox; } // _0C (weak)
	virtual void resize(f32, f32);                             // _18
	virtual bool setConnectParent(bool);                       // _28
	virtual void drawSelf(f32, f32);                           // _34
	virtual void drawSelf(f32, f32, Mtx*);                     // _38
	virtual bool isUsed(const ResFONT* resource);              // _50
	virtual void draw(f32, f32);                               // _94
	virtual void draw(f32, f32, f32, J2DTextBoxHBinding);      // _98
	virtual void setFont(JUTFont* font);                       // _9C
	virtual JUTResFont* getFont() const { return mFont; }      // _A0 (weak)
	virtual bool setBlack(JUtility::TColor black)              // _A4 (weak)
	{
		mBlack = black;
		return true;
	}
	virtual bool setWhite(JUtility::TColor white) // _A8 (weak)
	{
		mWhite = white;
		return true;
	}
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white) // _AC (weak)
	{
		mBlack = black;
		mWhite = white;
		return true;
	}
	virtual JUtility::TColor getBlack() const { return mBlack; }                       // _B0 (weak)
	virtual JUtility::TColor getWhite() const { return mWhite; }                       // _B4 (weak)
	virtual J2DMaterial* getMaterial() const { return nullptr; }                       // _B8 (weak)
	virtual void rewriteAlpha() { }                                                    // _58 (weak)
	virtual bool isUsed(const ResTIMG* resource) { return J2DPane::isUsed(resource); } // _4C (weak)

	void initiate(const ResFONT*, const char*, s16, J2DTextBoxHBinding, J2DTextBoxVBinding);
	void private_readStream(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive);
	size_t setString(const char*, ...);

	// unused/inlined:
	void setFontSize();
	void setLineSpace();
	void getString(char*);
	void getStringPtr() const;
	void setString(s16, const char*, ...);

	/** @fabricated */
	inline void copyString(const char* str, s16 maxLength)
	{
		size_t length   = strlen(str);
		u16 finalLength = maxLength;
		if (maxLength == -1) {
			if (length >= 0xFFFF) {
				length = 0xFFFE;
			}
			finalLength = length + 1;
		}
		mStringPtr = new char[finalLength];
		if (finalLength != 0 && mStringPtr != nullptr) {
			strncpy(mStringPtr, str, finalLength - 1);
			mStringPtr[finalLength - 1] = '\0';
			mStringLength               = finalLength;
		}
	}

	inline void setFontSize(f32 sizeX, f32 sizeY)
	{
		f32 x;
		if (sizeX > 0.0f) {
			x = sizeX;
		} else {
			x = 0.0f;
		}
		mFontSize.x = x;

		f32 y;
		if (sizeY > 0.0f) {
			y = sizeY;
		} else {
			y = 0.0f;
		}
		mFontSize.y = y;
	}

	inline void setCharSpace(f32 space) { mCharSpacing = space; }
	inline f32 getCharSpace() const { return mCharSpacing; }
	inline void setLineSpace(f32 space) { mLineSpacing = space; }
	inline f32 getLineSpace() const { return mLineSpacing; }

	inline J2DTextBoxVBinding getVBinding() const { return (J2DTextBoxVBinding)(mFlags & 3); }

	inline J2DTextBoxHBinding getHBinding() const { return (J2DTextBoxHBinding)((mFlags >> 2) & 3); }

	// not quite right
	inline void setCharColor(JUtility::TColor color) { mCharColor.set(color); }
	inline void setGradColor(JUtility::TColor color) { mGradientColor.set(color); }

	inline void setFontColor(JUtility::TColor charColor, JUtility::TColor gradColor)
	{
		mCharColor     = charColor;
		mGradientColor = gradColor;
	}

	// inline void setDefaultColors

	// _000      = VTBL
	// _000-_100 = J2DPane
	JUTResFont* mFont;               // _100
	JUtility::TColor mCharColor;     // _104
	JUtility::TColor mGradientColor; // _108
	f32 mOffsetX;                    // _10C
	f32 mOffsetY;                    // _110
	f32 mCharSpacing;                // _114
	f32 mLineSpacing;                // _118
	JGeometry::TVec2f mFontSize;     // _11C
	char* mStringPtr;                // _124
	JUtility::TColor mWhite;         // _128
	JUtility::TColor mBlack;         // _12C
	u8 mFlags;                       // _130
	bool mIsTextFontOwned;           // _131
	s16 mStringLength;               // _132
	u8 _134[4];                      // _134
};

// Size: 0x148
struct J2DTextBoxEx : public J2DTextBox {
	enum stage_enum { STAGE_0, STAGE_1, STAGE_2 };

	J2DTextBoxEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);

	virtual ~J2DTextBoxEx();                                                                                       // _08
	virtual void setCullBack(bool shouldCullBack) { setCullBack((shouldCullBack) ? GX_CULL_BACK : GX_CULL_NONE); } // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                                 // _20
	virtual void setAlpha(u8 alpha);                                                                               // _24
	virtual void drawSelf(f32, f32, Mtx*);                                                                         // _38
	virtual bool isUsed(const ResTIMG* resource) { return J2DPane::isUsed(resource); }                             // _4C (weak)
	virtual bool isUsed(const ResFONT* resource);                                                                  // _50
	virtual void rewriteAlpha();                                                                                   // _58
	virtual void setAnimation(J2DAnmBase* animation) { J2DPane::setAnimation(animation); }                         // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation) { J2DPane::setAnimation(animation); }                    // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                             // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                        // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                     // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                         // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                    // _74
	virtual void setAnimation(J2DAnmVtxColor* animation) { }                                                       // _78 (weak)
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform* animation);                                // _90
	virtual void draw(f32, f32);                                                                                   // _94
	virtual void draw(f32, f32, f32, J2DTextBoxHBinding);                                                          // _98
	virtual void setFont(JUTFont* font);                                                                           // _9C
	virtual JUTResFont* getFont() const;                                                                           // _A0
	virtual bool setBlack(JUtility::TColor black);                                                                 // _A4
	virtual bool setWhite(JUtility::TColor white);                                                                 // _A8
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);                                    // _AC
	virtual JUtility::TColor getBlack() const;                                                                     // _B0
	virtual JUtility::TColor getWhite() const;                                                                     // _B4
	virtual J2DMaterial* getMaterial() const { return mMaterial; }                                                 // _B8 (weak)

	void setTevOrder(bool);
	void setTevStage(bool);
	void setStage(J2DTevStage*, stage_enum);
	bool getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	bool isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;

	// _000      = VTBL
	// _000-_138 = J2DTextBox
	J2DMaterial* mMaterial;               // _138
	u16 mAnimVisibilityIndex;             // _13C
	u16 mMaterialID;                      // _13E
	u8 _140;                              // _140
	J2DAnmVisibilityFull* mAnmVisibility; // _144
};

#endif
