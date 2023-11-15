#ifndef _JSYSTEM_J2D_J2DPANE_H
#define _JSYSTEM_J2D_J2DPANE_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "string.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DManage.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUtility/TColor.h"
#include "JSystem/J2D/J2DMaterial.h"
#include "types.h"

struct J2DAnmBase;
struct J2DAnmColor;
struct J2DAnmTevRegKey;
struct J2DAnmTexPattern;
struct J2DAnmTextureSRTKey;
struct J2DAnmTransform;
struct J2DAnmVisibilityFull;
struct J2DAnmVtxColor;
struct J2DGrafContext;
struct J2DMaterial;
struct JKRArchive;
struct JUTFont;
struct JUTNameTab;
struct JUTPalette;
struct JUTResFont;
struct JUTTexture;
struct ResFONT;
struct ResTIMG;
struct ResTLUT;

enum J2DPaneTypeID {
	PANETYPE_Screen  = 0x8,
	PANETYPE_Pane    = 0x10,
	PANETYPE_Window  = 0x11,
	PANETYPE_Picture = 0x12,
	PANETYPE_TextBox = 0x13,
};

enum J2DRotateAxis {
	J2DROTATE_X = 'x', // 0x78
	J2DROTATE_Y = 'y', // 0x79
	J2DROTATE_Z = 'z', // 0x7A
};

// Intended to be size 0x1.
enum J2DBasePosition {
	J2DPOS_TopLeft      = 0,
	J2DPOS_TopCenter    = 1,
	J2DPOS_TopRight     = 2,
	J2DPOS_CenterLeft   = 3,
	J2DPOS_Center       = 4,
	J2DPOS_CenterRight  = 5,
	J2DPOS_BottomLeft   = 6,
	J2DPOS_BottomCenter = 7,
	J2DPOS_BottomRight  = 8,
};

struct J2DScrnBlockHeader {
	u32 mBloBlockType; // _00
	int mBlockLength;  // _04
};

/**
 * @fabricated
 * @size{0x20}
 */
struct J2DTextBoxBlock {
	u16 _00;             // _00
	u16 _02;             // _02
	u16 mMaterialNum;    // _04
	s16 mCharSpacing;    // _06 - converted to f32
	s16 mLineSpacing;    // _08 - converted to f32
	u16 mFontSizeX;      // _0A - converted to f32
	u16 mFontSizeY;      // _0C - converted to f32 for _120
	u8 mHBind;           // _0E - J2DTextBoxHBinding for _130
	u8 mVBind;           // _0F - J2DTextBoxVBinding for _130
	u32 mCharColor;      // _10
	u32 mGradientColor;  // _14
	u8 mDoConnectParent; // _18
	u8 _19[3];           // _19, padding?
	u16 _1C;             // _1C
	u16 _1E;             // _1E
};

/** @fabricated */
struct J2DPaneExBlock : J2DScrnBlockHeader {
	u8 _08[2];        // _08
	u16 _0A;          // _0A
	bool mIsVisible;  // _0C
	u8 mBasePosition; // _0D
	u8 _0E;           // _0E
	u8 _0F;           // _0F
	u64 mTag;         // _10
	u64 mMessageID;   // _18
	f32 mWidth;       // _20
	f32 mHeight;      // _24
	f32 mWidthScale;  // _28
	f32 mHeightScale; // _2C
	f32 _30;          // _30
	f32 _34;          // _34
	f32 _38;          // _38
	f32 _3C;          // _3C
	f32 _40;          // _40
	u8 _44[4];        // _44
};

/**
 * @size{0x30}
 * @fabricated
 */
struct J2DPictureBlockTrailer {
	u8 _00[2];                      // _00
	s16 _02;                        // _02
	u16 _04;                        // _04
	u8 _06[2];                      // _06 - padding?
	s16 _08[2][2];                  // _08
	JGeometry::TVec2<short> _10[4]; // _10
	_GXColor _20[4];                // _20
};

struct J2DScreenInfoBlock : public J2DScrnBlockHeader {

	// _00-_08 = J2DScrnBlockHeader
	u16 mWidth;  // _08
	u16 mHeight; // _0A
	u32 mColor;  // _0C
};

// Size: 0x100
struct J2DPane {
	J2DPane();
	J2DPane(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box);
	// inline J2DPane(J2DPane* parent, bool isVisible, u64 tag, f32 x0, f32 y0, f32 x1, f32 y1)
	//     : J2DPane(parent, isVisible, tag, JGeometry::TBox2f(x0, y0, x1, y1)) {};
	J2DPane(u64 tag, const JGeometry::TBox2f& box);
	J2DPane(J2DPane* parent, JSURandomInputStream* input, u8 version);

	virtual ~J2DPane();                                                                           // _08
	virtual u16 getTypeID() const { return PANETYPE_Pane; }                                       // _0C (weak)
	virtual void move(f32 x, f32 y);                                                              // _10
	virtual void add(f32 x, f32 y);                                                               // _14
	virtual void resize(f32, f32);                                                                // _18
	virtual void setCullBack(bool shouldCullBack);                                                // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                // _20
	virtual void setAlpha(u8 alpha) { mAlpha = alpha; }                                           // _24 (weak)
	virtual bool setConnectParent(bool);                                                          // _28 (weak)
	virtual void calcMtx();                                                                       // _2C (weak)
	virtual void update() { }                                                                     // _30 (weak)
	virtual void drawSelf(f32, f32) { }                                                           // _34 (weak)
	virtual void drawSelf(f32, f32, f32 (*)[3][4]) { }                                            // _38 (weak)
	virtual J2DPane* search(u64);                                                                 // _3C
	virtual J2DPane* searchUserInfo(u64);                                                         // _40
	virtual void makeMatrix(f32, f32);                                                            // _44 (weak)
	virtual void makeMatrix(f32, f32, f32, f32);                                                  // _48
	virtual bool isUsed(const ResTIMG* resource);                                                 // _4C
	virtual bool isUsed(const ResFONT* resource);                                                 // _50
	virtual void clearAnmTransform();                                                             // _54
	virtual void rewriteAlpha() { }                                                               // _58 (weak)
	virtual void setAnimation(J2DAnmBase* animation);                                             // _5C
	virtual void setAnimation(J2DAnmTransform* animation);                                        // _60
	virtual void setAnimation(J2DAnmColor* animation) { }                                         // _64 (weak)
	virtual void setAnimation(J2DAnmTexPattern* animation) { }                                    // _68 (weak)
	virtual void setAnimation(J2DAnmTextureSRTKey* animation) { }                                 // _6C (weak)
	virtual void setAnimation(J2DAnmTevRegKey* animation) { }                                     // _70 (weak)
	virtual void setAnimation(J2DAnmVisibilityFull* animation) { }                                // _74 (weak)
	virtual void setAnimation(J2DAnmVtxColor* animation) { }                                      // _78 (weak)
	virtual const J2DAnmTransform* animationTransform(const J2DAnmTransform* animation);          // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull* animation);                           // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull* animationVF) { setAnimation(animationVF); } // _84 (weak)
	virtual void setVtxColorAnimation(J2DAnmVtxColor* animation);                                 // _88
	virtual void setAnimationVC(J2DAnmVtxColor* animationVC) { setAnimation(animationVC); }       // _8C (weak)
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform* animation);               // _90
	// virtual void _8C() = 0;                                           // _94
	// /* This is just (automatic?) padding. */

	void animationTransform();
	void changeUseTrans(J2DPane*);
	void clip(const JGeometry::TBox2f&);
	void draw(f32, f32, const J2DGrafContext*, bool, bool);
	void gather(J2DPane** gatheredPanes, u64 minID, u64 maxID, int gatheredLimit, int& gatheredCount);

	JGeometry::TBox2f* getBounds();
	JGeometry::TVec3f getGlbVtx(u8) const;
	void* getPointer(JSURandomInputStream*, u32, JKRArchive*);
	u64 getTagName() const;

	/**
	 * @reifiedAddress{80309D98}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	u64 getUserInfo() const { return mMessageID; }

	J2DPane* getFirstChildPane();
	J2DPane* getNextChildPane();
	J2DPane* getParentPane();
	JSUTree<J2DPane>* getPaneTree() { return &mTree; }
	JSUTree<J2DPane>* getFirstChild() { return mTree.getFirstChild(); }
	JSUTree<J2DPane>* getEndChild() { return mTree.getEndChild(); }

	void initiate();
	void initialize(J2DPane* parent, bool isVisible, u64 tag, const JGeometry::TBox2f& box);
	void initialize(u64, const JGeometry::TBox2f&);
	void makePaneStream(J2DPane* parent, JSURandomInputStream* input);
	void makePaneExStream(J2DPane* parent, JSURandomInputStream* input);
	void place(const JGeometry::TBox2f&);
	void rotate(f32, f32, J2DRotateAxis, f32);
	void rotate(f32);
	void updateTransform(const J2DAnmTransform*);

	/**
	 * @reifiedAddress{80309A74}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	bool isVisible() const { return mIsVisible; }

	/**
	 * @reifiedAddress{803CA760}
	 * @reifiedFile{plugProjectEbisawaU/ebi2DGraph.cpp}
	 */
	inline void show() { mIsVisible = true; }

	/**
	 * @reifiedAddress{803CA910}
	 * @reifiedFile{plugProjectEbisawaU/ebi2DGraph.cpp}
	 */
	inline void hide() { mIsVisible = false; };

	void setBasePosition(J2DBasePosition);
	void setInfluencedAlpha(bool, bool);

	/**
	 * @fabricated
	 */
	void centerWithScale(f32 width, f32 height)
	{
		setBasePosition(J2DPOS_Center);
		mScale.x = width;
		mScale.y = height;
		calcMtx();
	}

	inline void updateScale(f32 scale)
	{
		mScale = JGeometry::TVec2f(scale, scale);
		calcMtx();
	}

	inline void updateScale(f32 scaleX, f32 scaleY) // called scale in TP
	{
		mScale = JGeometry::TVec2f(scaleX, scaleY);
		calcMtx();
	}

	inline void setAlphaFromFloat(f32 alpha)
	{
		if (alpha >= 0.0f) {
			alpha = 0.5f + alpha;
		} else {
			alpha = alpha - 0.5f;
		}

		setAlpha((int)alpha);
	}

	inline void resetAngle()
	{
		mAngleZ = 0.0f;
		calcMtx();
	}

	inline void setOffset(f32 x1, f32 x2, f32 y1, f32 y2)
	{
		mOffset = JGeometry::TVec2f(x1 + x2, y1 + y2);
		calcMtx();
	}

	inline void setOffset(f32 x, f32 y) // called translate in TP
	{
		mOffset = JGeometry::TVec2f(x, y);
		calcMtx();
	}

	inline void addOffsetY(f32 y)
	{
		mOffset.y += y;
		calcMtx();
	}

	inline void setOffsetY(f32 y)
	{
		mOffset.y = y;
		calcMtx();
	}

	inline f32 getOffsetY() { return mOffset.y; }

	inline void setAngleY(f32 a)
	{
		mAngleY = a;
		calcMtx();
	}

	inline void setAngle(f32 a)
	{
		mAngleZ = a;
		calcMtx();
	}

	inline void setMsgID(u64 msgID) { mMessageID = msgID; } // called setUserInfo in TP

	const Mtx* getMtx() const { return &mPositionMtx; }

	bool isConnectParent() const { return mIsConnected; }

	u8 getAlpha() const { return mAlpha; }
	f32 getScaleX() const { return mScale.x; }
	f32 getScaleY() const { return mScale.y; }
	f32 getTranslateX() const { return mOffset.x; }
	f32 getTranslateY() const { return mOffset.y; }
	JGeometry::TVec2f getTranslate() const { return mOffset; }
	int getKind() const { return mBloBlockType; }
	f32 getRotateZ() const { return mAngleZ; }
	f32 getRotOffsetX() const { return mAnchorPoint.x; }
	f32 getRotOffsetY() const { return mAnchorPoint.y; }
	Mtx* getGlobalMtx() { return &mGlobalMtx; }
	f32 getHeight() const { return mBounds.getHeight(); }
	f32 getWidth() const { return mBounds.getWidth(); }

	void setMtx(Mtx mtx) { PSMTXCopy(mtx, mPositionMtx); }

	inline void removeFromParent()
	{
		if (getParentPane()) {
			getParentPane()->removeChild(this);
		}
	}

	bool appendChild(J2DPane* child);
	bool prependChild(J2DPane* child);
	bool removeChild(J2DPane* child);

	static s16 J2DCast_F32_to_S16(f32, u8);

	// Unused/inlined:
	bool insertChild(J2DPane* before, J2DPane* child);
	f32 getRotate() const;
	void gatherUserInfo(J2DPane**, u64, u64, int, int&);

	static JGeometry::TBox2f static_mBounds;

	// _00 VTBL
	u16 _004;                        // _004
	u32 mBloBlockType;               // _008
	u64 mTag;                        // _010
	u64 mMessageID;                  // _018
	JGeometry::TBox2f mBounds;       // _020
	JGeometry::TBox2f mGlobalBounds; // _030
	JGeometry::TBox2f mClipRect;     // _040
	Mtx mPositionMtx;                // _050
	Mtx mGlobalMtx;                  // _080
	bool mIsVisible;                 // _0B0
	u8 mCullMode;                    // _0B1
	u8 mAlpha;                       // _0B2
	u8 mColorAlpha;                  // _0B3
	bool mIsInfluencedAlpha;         // _0B4
	bool mIsConnected;               // _0B5
	u8 mRotationAxis;                // _0B6
	u8 mBasePosition;                // _0B7
	f32 mAngleX;                     // _0B8
	f32 mAngleY;                     // _0BC
	f32 mAngleZ;                     // _0C0
	JGeometry::TVec2f mAnchorPoint;  // _0C4
	JGeometry::TVec2f mScale;        // _0CC
	JGeometry::TVec2f mOffset;       // _0D4
	JSUTree<J2DPane> mTree;          // _0DC
	J2DAnmTransform* mTransform;     // _0F8
	u8 _0FC[4];                      // _0FC
};

struct J2DScreen : public J2DPane {
	J2DScreen();

	virtual ~J2DScreen();                                                                                                  // _08
	virtual u16 getTypeID() const { return PANETYPE_Screen; }                                                              // _0C (weak)
	virtual void calcMtx() { makeMatrix(mOffset.x, mOffset.y); }                                                           // _2C (weak)
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                                                                        // _38
	virtual J2DPane* search(u64);                                                                                          // _3C
	virtual J2DPane* searchUserInfo(u64);                                                                                  // _40
	virtual bool isUsed(const ResTIMG* resource);                                                                          // _4C
	virtual bool isUsed(const ResFONT* resource);                                                                          // _50
	virtual void clearAnmTransform() { J2DPane::clearAnmTransform(); }                                                     // _54 (weak)
	virtual void setAnimation(J2DAnmBase* animation);                                                                      // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation);                                                                 // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                                     // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                                // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                             // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                                 // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                            // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                                                                  // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull* animation) { }                                                       // _84 (weak)
	virtual void setAnimationVC(J2DAnmVtxColor* animation) { }                                                             // _8C (weak)
	virtual J2DPane* createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags) // _94 (weak)
	{
		return createPane(header, input, parent, flags, nullptr);
	}
	virtual J2DPane* createPane(const J2DScrnBlockHeader& header, JSURandomInputStream* input, J2DPane* parent, u32 flags,
	                            JKRArchive* archive); // _98

	void animation();
	bool checkSignature(JSURandomInputStream*);
	void clean();
	bool createMaterial(JSURandomInputStream*, u32, JKRArchive*);
	void draw(f32, f32, const J2DGrafContext*);
	u32 gather(J2DPane**, u64, u64, int);
	J2DMaterial* getMaterial(u16 index);
	J2DResReference* getResReference(JSURandomInputStream*, u32);
	bool getScreenInformation(JSURandomInputStream* input);
	u32 makeHierarchyPanes(J2DPane*, JSURandomInputStream*, u32, JKRArchive*);
	bool set(const char*, u32, JKRArchive*);
	bool set(JSURandomInputStream*, u32);
	bool private_set(JSURandomInputStream* stream, u32 flags, JKRArchive* archive);

	inline u32 getMaterialCount() { return mMaterialCount; }

	inline void makeAnmPointer()
	{
		J2DMaterial* material;
		u32 mats = getMaterialCount();
		for (u16 i = 0; i < mats; i++) {
			material = getMaterial(i);
			material->makeAnmPointer();
		}
	}

	static void* getNameResource(const char*);

	static J2DDataManage* getDataManage() { return mDataManage; }

	static J2DDataManage* mDataManage;

	// _000      = VTBL
	// _000-_100 = J2DPane
	bool mIsScissor;           // _100
	u16 mMaterialCount;        // _102
	J2DMaterial* mMaterials;   // _104
	J2DResReference* mTexRes;  // _108
	J2DResReference* mFontRes; // _10C
	JUTNameTab* mNameTab;      // _110
	JUtility::TColor mColor;   // _114
};

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

		JUtility::TColor mColor0; // _00
		JUtility::TColor mColor1; // _04
		JUtility::TColor mColor2; // _08
		JUtility::TColor mColor3; // _0C
	};

	/*
	    struct TCornerColor {
	    TCornerColor(u32 col1, u32 col2, u32 col3, u32 col4)
	    {
	        mColor[0].set(col1);
	        mColor[1].set(col2);
	        mColor[2].set(col3);
	        mColor[3].set(col4);
	    }
	    TCornerColor() { }

	    JUtility::TColor mColor[4]; // _00
	};
	*/

	J2DPicture();
	J2DPicture(J2DPane* parent, JSURandomInputStream* input, JKRArchive* archive);
	J2DPicture(J2DPane* parent, JSURandomInputStream* input, J2DMaterial* materials);
	J2DPicture(const ResTIMG*);
	J2DPicture(const char*);
	J2DPicture(JUTTexture*);
	J2DPicture(u64, const JGeometry::TBox2f&);

	virtual ~J2DPicture();                                                             // _08
	virtual u16 getTypeID() const { return PANETYPE_Picture; };                        // _0C (weak)
	virtual void drawSelf(f32, f32);                                                   // _34
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                                    // _38
	virtual bool isUsed(const ResTIMG* resource);                                      // _4C
	virtual bool isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); } // _50 (weak)
	virtual void rewriteAlpha() { }                                                    // _58 (weak)
	virtual void initiate(const ResTIMG*, const ResTLUT*);                             // _94
	virtual void prepareTexture(u8);                                                   // _98
	virtual bool append(const ResTIMG*, f32);                                          // _9C (weak)
	virtual bool append(const ResTIMG*, JUTPalette*, f32);                             // _A0 (weak)
	virtual bool append(const char*, f32);                                             // _A4 (weak)
	virtual bool append(const char*, JUTPalette*, f32);                                // _A8 (weak)
	virtual bool append(JUTTexture*, f32);                                             // _AC (weak)
	virtual bool prepend(const ResTIMG*, f32);                                         // _B0 (weak)
	virtual bool prepend(const ResTIMG*, JUTPalette*, f32);                            // _B4 (weak)
	virtual bool prepend(const char*, f32);                                            // _B8 (weak)
	virtual bool prepend(const char*, JUTPalette*, f32);                               // _BC (weak)
	virtual bool prepend(JUTTexture*, f32);                                            // _C0 (weak)
	virtual bool insert(const ResTIMG*, u8, f32);                                      // _C4 (weak)
	virtual bool insert(const ResTIMG*, JUTPalette*, u8, f32);                         // _C8
	virtual bool insert(const char*, u8, f32);                                         // _CC (weak)
	virtual bool insert(const char*, JUTPalette*, u8, f32);                            // _D0
	virtual bool insert(JUTTexture*, u8, f32);                                         // _D4
	virtual int remove(u8);                                                            // _D8
	virtual int remove();                                                              // _DC (weak)
	virtual int remove(JUTTexture*);                                                   // _E0
	virtual void draw(f32, f32, bool, bool, bool);                                     // _E4 (weak)
	virtual void draw(f32, f32, u8, bool, bool, bool);                                 // _E8 (weak)
	virtual void draw(f32, f32, f32, f32, bool, bool, bool);                           // _EC
	virtual void drawOut(f32, f32, f32, f32, f32, f32);                                // _F0 (weak)
	virtual void drawOut(f32, f32, f32, f32, f32, f32, f32, f32);                      // _F4 (weak)
	virtual void drawOut(const JGeometry::TBox2f&, const JGeometry::TBox2f&);          // _F8
	virtual void load(GXTexMapID, u8);                                                 // _FC (weak)
	virtual void load(u8);                                                             // _100 (weak)
	virtual void setBlendRatio(f32, f32, f32, f32, f32, f32, f32, f32);                // _104 (weak)
	virtual void setBlendColorRatio(f32, f32, f32, f32, f32, f32, f32, f32);           // _108
	virtual void setBlendAlphaRatio(f32, f32, f32, f32, f32, f32, f32, f32);           // _10C
	virtual ResTIMG* changeTexture(const ResTIMG*, u8);                                // _110
	virtual ResTIMG* changeTexture(const char*, u8);                                   // _114
	virtual ResTIMG* changeTexture(const ResTIMG*, u8, JUTPalette*);                   // _118
	virtual ResTIMG* changeTexture(const char*, u8, JUTPalette*);                      // _11C
	virtual JUTTexture* getTexture(u8) const;                                          // _120 (weak)
	virtual u8 getTextureCount() const { return mTextureCount; }                       // _124 (weak)

	virtual bool setBlack(JUtility::TColor black) // _128 (weak)
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
	virtual JUtility::TColor getBlack() const { return mBlack; }                                                          // _134 (weak)
	virtual JUtility::TColor getWhite() const { return mWhite; }                                                          // _138 (weak)
	virtual J2DMaterial* getMaterial() const { return nullptr; }                                                          // _13C (weak)
	virtual void drawFullSet(f32, f32, f32, f32, f32 (*)[3][4]);                                                          // _140
	virtual void drawTexCoord(f32, f32, f32, f32, short, short, short, short, short, short, short, short, f32 (*)[3][4]); // _144
	virtual u8 getUsableTlut(u8);                                                                                         // _148

	void initinfo();
	void private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*);
	void private_initiate(const ResTIMG*, const ResTLUT*);
	void setTevMode();
	void setBlendKonstColor();
	void setBlendKonstAlpha();
	void getNewColor(JUtility::TColor*);
	void setTexCoord(const JGeometry::TVec2<s16>*);
	void setTexCoord(const JUTTexture*, J2DBinding, J2DMirror, bool);
	void setTexCoord(JGeometry::TVec2<s16>*, const JUTTexture*, J2DBinding, J2DMirror, bool);
	u8 getTlutID(const ResTIMG*, u8);
	void operator=(const J2DPicture&);

	inline void setCornerColor(TCornerColor colors)
	{
		mCornerColors.mColor0.set(colors.mColor0);
		mCornerColors.mColor1.set(colors.mColor1);
		mCornerColors.mColor2.set(colors.mColor2);
		mCornerColors.mColor3.set(colors.mColor3);
	}

	inline void getCornerColor(TCornerColor& colors) { colors = mCornerColors; }

	inline ResTIMG* getTIMG(u8 i); // defined in JUTTexture.h to avoid include loops

	inline JGeometry::TVec2<s16>* getTexCoord(int i) { return &mTexCoords[i]; }
	// _000      = VTBL
	// _000-_100 = J2DPane
	JUTTexture* mTextures[4];            // _100
	u8 mTextureCount;                    // _110
	u8 _111;                             // _111
	JGeometry::TVec2<s16> mTexCoords[4]; // _112
	u8 _122[2];                          // _122
	f32 _124[4];                         // _124
	f32 _134[4];                         // _134
	JUTPalette* mPalette;                // _144
	JUtility::TColor mWhite;             // _148
	JUtility::TColor mBlack;             // _14C
	TCornerColor mCornerColors;          // _150
	u32 _160;                            // _160, TColor?
	u32 _164;                            // _164, TColor?
};

// Size: 0x1A8
struct J2DPictureEx : public J2DPicture {
	enum stage_enum { Stage_0 = 0, Stage_1, Stage_2, Stage_3, Stage_4, Stage_5, Stage_6, Stage_7 };

	J2DPictureEx();
	J2DPictureEx(const ResTIMG*, u32);
	J2DPictureEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const ResTIMG*, u32);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const char*, u32);

	virtual ~J2DPictureEx();                                                                                              // _08
	virtual void setCullBack(bool shouldCullBack);                                                                        // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                                        // _20
	virtual void setAlpha(u8);                                                                                            // _24
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                                                                       // _38
	virtual bool isUsed(const ResTIMG* resource);                                                                         // _4C
	virtual bool isUsed(const ResFONT* resource);                                                                         // _50 (weak)
	virtual void rewriteAlpha();                                                                                          // _58
	virtual void setAnimation(J2DAnmBase* animation);                                                                     // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation);                                                                // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                                    // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                               // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                            // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                                // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                           // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                                                                 // _78
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform* animation);                                       // _90
	virtual void initiate(const ResTIMG*, const ResTLUT*);                                                                // _94
	virtual void prepareTexture(u8);                                                                                      // _98
	virtual bool append(const ResTIMG*, f32);                                                                             // _9C (weak)
	virtual bool append(const ResTIMG*, JUTPalette*, f32);                                                                // _A0
	virtual bool append(const char*, f32);                                                                                // _A4 (weak)
	virtual bool append(const char*, JUTPalette*, f32);                                                                   // _A8
	virtual bool append(JUTTexture*, f32);                                                                                // _AC
	virtual bool prepend(const ResTIMG*, f32);                                                                            // _B0 (weak)
	virtual bool prepend(const ResTIMG*, JUTPalette*, f32);                                                               // _B4 (weak)
	virtual bool prepend(const char*, f32);                                                                               // _B8 (weak)
	virtual bool prepend(const char*, JUTPalette*, f32);                                                                  // _BC (weak)
	virtual bool prepend(JUTTexture*, f32);                                                                               // _C0 (weak)
	virtual bool insert(const ResTIMG*, u8, f32);                                                                         // _C4 (weak)
	virtual bool insert(const ResTIMG*, JUTPalette*, u8, f32);                                                            // _C8
	virtual bool insert(const char*, u8, f32);                                                                            // _CC (weak)
	virtual bool insert(const char*, JUTPalette*, u8, f32);                                                               // _D0
	virtual bool insert(JUTTexture*, u8, f32);                                                                            // _D4
	virtual int remove(u8);                                                                                               // _D8
	virtual int remove();                                                                                                 // _DC
	virtual int remove(JUTTexture*);                                                                                      // _E0
	virtual void draw(f32, f32, bool, bool, bool);                                                                        // _E4 (weak)
	virtual void draw(f32, f32, u8, bool, bool, bool);                                                                    // _E8
	virtual void draw(f32, f32, f32, f32, bool, bool, bool);                                                              // _EC
	virtual void drawOut(f32, f32, f32, f32, f32, f32);                                                                   // _F0 (weak)
	virtual void drawOut(f32, f32, f32, f32, f32, f32, f32, f32);                                                         // _F4 (weak)
	virtual void drawOut(const JGeometry::TBox2f&, const JGeometry::TBox2f&);                                             // _F8
	virtual void load(GXTexMapID, u8);                                                                                    // _FC
	virtual void load(u8);                                                                                                // _100 (weak)
	virtual void setBlendColorRatio(f32, f32, f32, f32, f32, f32, f32, f32);                                              // _108
	virtual void setBlendAlphaRatio(f32, f32, f32, f32, f32, f32, f32, f32);                                              // _10C
	virtual ResTIMG* changeTexture(const ResTIMG*, u8);                                                                   // _110
	virtual ResTIMG* changeTexture(const char*, u8);                                                                      // _114
	virtual ResTIMG* changeTexture(const ResTIMG*, u8, JUTPalette*);                                                      // _118
	virtual ResTIMG* changeTexture(const char*, u8, JUTPalette*);                                                         // _11C
	virtual JUTTexture* getTexture(u8) const;                                                                             // _120
	virtual u8 getTextureCount() const;                                                                                   // _124
	virtual bool setBlack(JUtility::TColor black);                                                                        // _128
	virtual bool setWhite(JUtility::TColor white);                                                                        // _12C
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);                                           // _130
	virtual JUtility::TColor getBlack() const;                                                                            // _134
	virtual JUtility::TColor getWhite() const;                                                                            // _138
	virtual J2DMaterial* getMaterial() const;                                                                             // _13C (weak)
	virtual void drawFullSet(f32, f32, f32, f32, f32 (*)[3][4]);                                                          // _140
	virtual void drawTexCoord(f32, f32, f32, f32, short, short, short, short, short, short, short, short, f32 (*)[3][4]); // _144
	virtual u8 getUsableTlut(u8);                                                                                         // _148

	void initialize(u32);
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
	bool getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	bool isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;

	/** @fabricated */
	inline void setAnmVtxColorHelper(J2DAnmVtxColor* animation, u16 p2, u8 p3)
	{
		for (u16 b = 0; b < p2; b++) {
			for (u16 c = 0; c < animation->mVtxColorIndexData[b]->_00; c++) {
				if (_170[p3] == *animation->mVtxColorIndexPtr[animation->mVtxColorIndexData[b]->_04 + c]) {
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
	u16 _16C;                             // _16C
	u16 _16E;                             // _16E
	u16 _170[4];                          // _170
	f32 _178;                             // _178
	f32 _17C;                             // _17C
	f32 _180;                             // _180
	f32 _184;                             // _184
	f32 _188;                             // _188
	f32 _18C;                             // _18C
	f32 _190;                             // _190
	f32 _194;                             // _194
	bool _198;                            // _198
	J2DAnmVisibilityFull* mAnmVisibility; // _19C
	J2DAnmVtxColor* mAnmVtxColor;         // _1A0
	u8 _1A4;                              // _1A4
};

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
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);            // _38
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
	inline void setGradientColor(JUtility::TColor color) { mGradientColor.set(color); }

	// _000      = VTBL
	// _000-_100 = J2DPane
	JUTResFont* mFont;               // _100
	JUtility::TColor mCharColor;     // _104
	JUtility::TColor mGradientColor; // _108
	f32 _10C;                        // _10C
	f32 _110;                        // _110
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

	virtual ~J2DTextBoxEx();                                                        // _08
	virtual void setCullBack(bool shouldCullBack);                                  // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                  // _20
	virtual void setAlpha(u8 alpha);                                                // _24
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                                 // _38
	virtual bool isUsed(const ResTIMG* resource);                                   // _4C (weak)
	virtual bool isUsed(const ResFONT* resource);                                   // _50
	virtual void rewriteAlpha();                                                    // _58
	virtual void setAnimation(J2DAnmBase* animation);                               // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation);                          // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                              // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                         // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                      // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                          // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                     // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                           // _78 (weak)
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform* animation); // _90
	virtual void draw(f32, f32);                                                    // _94
	virtual void draw(f32, f32, f32, J2DTextBoxHBinding);                           // _98
	virtual void setFont(JUTFont* font);                                            // _9C
	virtual JUTResFont* getFont() const;                                            // _A0
	virtual bool setBlack(JUtility::TColor black);                                  // _A4
	virtual bool setWhite(JUtility::TColor white);                                  // _A8
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);     // _AC
	virtual JUtility::TColor getBlack() const;                                      // _B0
	virtual JUtility::TColor getWhite() const;                                      // _B4
	virtual J2DMaterial* getMaterial() const;                                       // _B8 (weak)

	void setTevStage(bool);
	void setStage(J2DTevStage*, stage_enum);
	bool getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;

	// _000      = VTBL
	// _000-_138 = J2DTextBox
	J2DMaterial* mMaterial;               // _138
	u16 _13C;                             // _13C
	u16 _13E;                             // _13E
	u8 _140;                              // _140
	J2DAnmVisibilityFull* mAnmVisibility; // _144
};

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
	u16 _24;               // _24
	u8 _26[2];             // _26, unknown/padding
	u8 _28[0x8];           // _28, unknown
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
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                        // _38
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
	JUTTexture* _100;                 // _100
	JUTTexture* _104;                 // _104
	JUTTexture* _108;                 // _108
	JUTTexture* _10C;                 // _10C
	JUTTexture* mContentsTexture;     // _110
	JGeometry::TBox2f _114;           // _114
	JUTPalette* mPalette;             // _124
	JUtility::TColor mContentsColorA; // _128
	JUtility::TColor mContentsColorB; // _12C
	JUtility::TColor mContentsColorC; // _130
	JUtility::TColor mContentsColorD; // _134
	JUtility::TColor mWhite;          // _138
	JUtility::TColor mBlack;          // _13C
	s16 _140;                         // _140
	s16 _142;                         // _142
	u8 _144;                          // _144
	u8 _145;                          // _145
};

// Size: 0x180
struct J2DWindowEx : public J2DWindow {
	enum stage_enum {};

	J2DWindowEx(J2DPane* parent, JSURandomInputStream* input, u32 flags, J2DMaterial* materials);

	virtual ~J2DWindowEx();                                                                                           // _08
	virtual void setCullBack(bool shouldCullBack);                                                                    // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);                                                                    // _20
	virtual void setAlpha(u8);                                                                                        // _24
	virtual void drawSelf(f32, f32, f32 (*)[3][4]);                                                                   // _38
	virtual bool isUsed(const ResTIMG* resource);                                                                     // _4C
	virtual bool isUsed(const ResFONT* resource) { return J2DPane::isUsed(resource); }                                // _50 (weak)
	virtual void rewriteAlpha();                                                                                      // _58
	virtual void setAnimation(J2DAnmBase* animation) { J2DPane::setAnimation(animation); }                            // _5C (weak)
	virtual void setAnimation(J2DAnmTransform* animation) { J2DPane::setAnimation(animation); }                       // _60 (weak)
	virtual void setAnimation(J2DAnmColor* animation);                                                                // _64
	virtual void setAnimation(J2DAnmTexPattern* animation);                                                           // _68
	virtual void setAnimation(J2DAnmTextureSRTKey* animation);                                                        // _6C
	virtual void setAnimation(J2DAnmTevRegKey* animation);                                                            // _70
	virtual void setAnimation(J2DAnmVisibilityFull* animation);                                                       // _74
	virtual void setAnimation(J2DAnmVtxColor* animation);                                                             // _78
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*);                                             // _90
	virtual void draw(const JGeometry::TBox2f&);                                                                      // _94
	virtual void draw(const JGeometry::TBox2f&, const JGeometry::TBox2f&);                                            // _98
	virtual void draw(f32, f32, f32, f32);                                                                            // _9C (weak)
	virtual bool setBlack(JUtility::TColor black);                                                                    // _A0
	virtual bool setWhite(JUtility::TColor white);                                                                    // _A4
	virtual bool setBlackWhite(JUtility::TColor black, JUtility::TColor white);                                       // _A8
	virtual JUtility::TColor getBlack() const;                                                                        // _AC
	virtual JUtility::TColor getWhite() const;                                                                        // _B0
	virtual JUTTexture* getFrameTexture(u8 frameMaterialIndex, u8 textureIndex) const;                                // _B4
	virtual JUTTexture* getContentsTexture(u8 textureIndex) const;                                                    // _B8
	virtual void getMaterial(J2DWindow::TMaterial& material) const;                                                   // _BC (weak)
	virtual J2DMaterial* getFrameMaterial(u8 index) const { return (index >= 4) ? nullptr : mFrameMaterials[index]; } // _C0 (weak)
	virtual J2DMaterial* getContentsMaterial() const { return mContentsMaterial; }                                    // _C4 (weak)
	virtual void drawContents(const JGeometry::TBox2f&);                                                              // _C8

	void setMinSize();
	void draw_private(const JGeometry::TBox2f&, const JGeometry::TBox2f&);
	void drawFrameTexture(f32, f32, f32, f32, u16, u16, u16, u16, J2DMaterial*, bool);
	void setTevStage(bool);
	void setStage(J2DTevStage*, J2DWindowEx::stage_enum);
	void getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;
	bool isNeedSetAnm(u8 frameMaterialIndex);

	// _000      = VTBL
	// _000-_148 = J2DWindow
	J2DMaterial* mFrameMaterials[4];      // _148
	u16 _158[2];                          // _158
	u8 _15C[4];                           // _15C
	J2DMaterial* mContentsMaterial;       // _160
	u16 _164;                             // _164
	u16 _166;                             // _166
	u8 _168[8];                           // _168
	u8 _170;                              // _170
	J2DAnmVisibilityFull* mAnmVisibility; // _174
	J2DAnmVtxColor* mAnmVtxColor;         // _178
	u8 _17C;                              // _17C
};

#endif
