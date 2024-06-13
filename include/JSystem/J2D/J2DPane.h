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

enum J2DGlbVtxID {
	GLBVTX_BtmLeft  = 0,
	GLBVTX_BtmRight = 1,
	GLBVTX_TopLeft  = 2,
	GLBVTX_TopRight = 3,
};

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
	u16 mAnimPaneIndex;  // _02
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
	u16 mTextBoxLength;  // _1C
	u16 mMaxReadLength;  // _1E
};

// Representation of "PAN2" entry in a scrnblo2 file
struct J2DPaneExBlock : J2DScrnBlockHeader {
	u16 _08;          // _08, padding?
	u16 mAnimIndex;   // _0A, "joint" index used for applying .bck animations
	bool mIsVisible;  // _0C, whether the pane is visible by default, applies to all children as well
	u8 mBasePosition; // _0D, anchor point for position, see J2DBasePosition enum
	u16 _0E;          // _0E, padding
	u64 mTag;         // _10, name of the pane
	u64 mMessageID;   // _18, secondary tag of pane, usually used for message id
	f32 mWidth;       // _20, pixel dimensions X (unused in j2dpane)
	f32 mHeight;      // _24, pixel dimensions Y (unused in j2dpane)
	f32 mWidthScale;  // _28, horizontal scale modifier
	f32 mHeightScale; // _2C, vertical scale modifier
	f32 mAngleX;      // _30, X axis rotation, never touched normally
	f32 mAngleY;      // _34, Y axis rotation, never touched normally
	f32 mAngleZ;      // _38, Z axis rotation, the one you probably want
	f32 mOffsetX;     // _3C, base X position, relative to parent
	f32 mOffsetY;     // _40, base Y position, relative to parent
};

/**
 * @size{0x30}
 * @fabricated
 */
struct J2DScrnBlockPictureParameter {
	u8 _00[2];                           // _00
	u16 mMaterialNum;                    // _02
	u16 mMaterialID;                     // _04
	u8 _06[2];                           // _06 - padding?
	u16 _08[4];                          // _08
	JGeometry::TVec2<s16> mTexCoords[4]; // _10
	GXColor mCornerColor[4];             // _20
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

	virtual ~J2DPane();                                     // _08
	virtual u16 getTypeID() const { return PANETYPE_Pane; } // _0C (weak)
	virtual void move(f32 x, f32 y);                        // _10
	virtual void add(f32 x, f32 y);                         // _14
	virtual void resize(f32, f32);                          // _18
	virtual void setCullBack(bool shouldCullBack)
	{
		GXCullMode cullMode = GX_CULL_NONE;
		if (shouldCullBack) {
			cullMode = GX_CULL_BACK;
		}
		setCullBack((GXCullMode)cullMode);
	}                                                   // _1C (weak)
	virtual void setCullBack(GXCullMode cullMode);      // _20
	virtual void setAlpha(u8 alpha) { mAlpha = alpha; } // _24 (weak)
	virtual bool setConnectParent(bool connectParent)
	{
		mIsConnected = 0;
		return false;
	} // _28 (weak)
	virtual void calcMtx()
	{
		if (mTree.getList()) {
			makeMatrix(mOffset.x, mOffset.y);
		}
	}                                                                                             // _2C (weak)
	virtual void update() { }                                                                     // _30 (weak)
	virtual void drawSelf(f32, f32) { }                                                           // _34 (weak)
	virtual void drawSelf(f32, f32, Mtx*) { }                                                     // _38 (weak)
	virtual J2DPane* search(u64);                                                                 // _3C
	virtual J2DPane* searchUserInfo(u64);                                                         // _40
	virtual void makeMatrix(f32 f1, f32 f2) { makeMatrix(f1, f2, -mBounds.i.x, -mBounds.i.y); }   // _44 (weak)
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

	void animationTransform();
	void changeUseTrans(J2DPane*);
	void clip(const JGeometry::TBox2f&);
	void draw(f32, f32, const J2DGrafContext*, bool, bool);
	void gather(J2DPane** gatheredPanes, u64 minID, u64 maxID, int gatheredLimit, int& gatheredCount);

	JGeometry::TBox2f* getBounds();
	JGeometry::TVec3f getGlbVtx(u8 idx) const; // see J2DGlbVtxID enum
	void* getPointer(JSURandomInputStream*, u32, JKRArchive*);

	// Supposed to be weak but refuses to work
	u64 getTagName() const; // { return mTag; }

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

	inline void multScale(f32 scale)
	{
		mScale *= scale;
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

	inline void addOffset(f32 x, f32 y)
	{
		mOffset += JGeometry::TVec2f(x, y);
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

	inline void setAngleX(f32 a)
	{
		mAngleX = a;
		calcMtx();
	}

	inline void setAngle(f32 a)
	{
		mAngleZ = a;
		calcMtx();
	}

	inline void setAllAngles(f32 x, f32 y, f32 z)
	{
		mAngleX = x;
		mAngleY = y;
		mAngleZ = z;
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
	u16 mAnimPaneIndex;              // _004
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

#endif
