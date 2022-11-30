#ifndef _JSYSTEM_J2D_J2DPANE_H
#define _JSYSTEM_J2D_J2DPANE_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/J2D/J2DAnm.h"
#include "JSystem/J2D/J2DTypes.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JSupport/JSUStream.h"
#include "JSystem/JUT/TColor.h"
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
struct TMaterial;

enum J2DRotateAxis {
	J2DROTATE_X = 'x', // 0x78
	J2DROTATE_Y = 'y', // 0x79
	J2DROTATE_Z = 'z', // 0x7A
};

// Intended to be size 0x1.
enum J2DBasePosition {
	POS_TOP_LEFT = 0,
	POS_TOP_CENTER,
	POS_TOP_RIGHT,
	POS_CENTER_LEFT,
	POS_CENTER,
	POS_CENTER_RIGHT,
	POS_BOTTOM_LEFT,
	POS_BOTTOM_CENTER,
	POS_BOTTOM_RIGHT
};

struct J2DScrnBlockHeader {
	u32 m_bloBlockType;
	int m_blockLength;
};

/** @fabricated */
struct J2DPaneExBlock : J2DScrnBlockHeader {
	u8 _08[2];         // _08
	u16 _0A;           // _0A
	bool m_isVisible;  // _0C
	u8 m_basePosition; // _0D
	u8 _0E;            // _0E
	u8 _0F;            // _0F
	u64 m_tag;         // _10
	u64 m_messageID;   // _18
	f32 m_width;       // _20
	f32 m_height;      // _24
	f32 m_widthScale;  // _28
	f32 m_heightScale; // _2C
	f32 _30;           // _30
	f32 _34;           // _34
	f32 _38;           // _38
	f32 _3C;           // _3C
	f32 _40;           // _40
	u8 _44[4];         // _44
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

// Size: 0x100
struct J2DPane {
	J2DPane();
	J2DPane(J2DPane*, bool, u64, const JGeometry::TBox2f&);
	J2DPane(u64, const JGeometry::TBox2f&);
	J2DPane(J2DPane*, JSURandomInputStream*, u8);

	virtual ~J2DPane();                                                        // _08
	virtual u32 getTypeID() const;                                             // _0C (weak)
	virtual void move(float, float);                                           // _10
	virtual void add(float, float);                                            // _14
	virtual void resize(float, float);                                         // _18
	virtual void setCullBack(bool);                                            // _1C (weak)
	virtual void setCullBack(GXCullMode);                                      // _20
	virtual void setAlpha(u8);                                                 // _24 (weak)
	virtual bool setConnectParent(bool);                                       // _28 (weak)
	virtual void calcMtx();                                                    // _2C (weak)
	virtual void update();                                                     // _30 (weak)
	virtual void drawSelf(float, float);                                       // _34 (weak)
	virtual void drawSelf(float, float, float (*)[3][4]);                      // _38 (weak)
	virtual J2DPane* search(u64);                                              // _3C
	virtual J2DPane* searchUserInfo(u64);                                      // _40
	virtual void makeMatrix(float, float);                                     // _44 (weak)
	virtual void makeMatrix(float, float, float, float);                       // _48
	virtual bool isUsed(const ResTIMG*);                                       // _4C
	virtual bool isUsed(const ResFONT*);                                       // _50
	virtual void clearAnmTransform();                                          // _54
	virtual void rewriteAlpha();                                               // _58 (weak)
	virtual void setAnimation(J2DAnmBase*);                                    // _5C
	virtual void setAnimation(J2DAnmTransform*);                               // _60
	virtual void setAnimation(J2DAnmColor*);                                   // _64 (weak)
	virtual void setAnimation(J2DAnmTexPattern*);                              // _68 (weak)
	virtual void setAnimation(J2DAnmTextureSRTKey*);                           // _6C (weak)
	virtual void setAnimation(J2DAnmTevRegKey*);                               // _70 (weak)
	virtual void setAnimation(J2DAnmVisibilityFull*);                          // _74 (weak)
	virtual void setAnimation(J2DAnmVtxColor*);                                // _78 (weak)
	virtual const J2DAnmTransform* animationTransform(const J2DAnmTransform*); // _7C
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*);                  // _80
	virtual void setAnimationVF(J2DAnmVisibilityFull*);                        // _84 (weak)
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);                        // _88
	virtual void setAnimationVC(J2DAnmVtxColor*);                              // _8C (weak)
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*);      // _90
	// virtual void _8C() = 0;                                           // _94
	// /* This is just (automatic?) padding. */

	void animationTransform();
	void changeUseTrans(J2DPane*);
	void clip(const JGeometry::TBox2f&);
	void draw(float, float, const J2DGrafContext*, bool, bool);
	void gather(J2DPane**, u64, u64, int, int&);

	JGeometry::TBox2f* getBounds();
	JGeometry::TVec3f getGlbVtx(u8) const;
	void* getPointer(JSURandomInputStream*, u32, JKRArchive*);
	u64 getTagName() const;
	float getTranslateX() const;
	float getTranslateY() const;

	/**
	 * @reifiedAddress{80309D98}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	u64 getUserInfo() const { return m_messageID; }

	J2DPane* getFirstChildPane();
	J2DPane* getNextChildPane();
	J2DPane* getParentPane();
	JSUTree<J2DPane>* getPaneTree() { return &m_tree; }

	void initiate();
	void initialize(J2DPane*, bool, u64, const JGeometry::TBox2f&);
	void initialize(u64, const JGeometry::TBox2f&);
	void makePaneStream(J2DPane*, JSURandomInputStream*);
	void makePaneExStream(J2DPane*, JSURandomInputStream*);
	void place(const JGeometry::TBox2f&);
	void rotate(float, float, J2DRotateAxis, float);
	void rotate(float);
	void updateTransform(const J2DAnmTransform*);

	/**
	 * @reifiedAddress{80309A74}
	 * @reifiedFile{plugProjectOgawaU/ogCallBackMessage.cpp}
	 */
	bool isVisible() const { return m_isVisible; }

	/**
	 * @reifiedAddress{803CA760}
	 * @reifiedFile{plugProjectEbisawaU/ebi2DGraph.cpp}
	 */
	inline void show() { m_isVisible = true; }

	/**
	 * @reifiedAddress{803CA910}
	 * @reifiedFile{plugProjectEbisawaU/ebi2DGraph.cpp}
	 */
	inline void hide() { m_isVisible = false; };

	void setBasePosition(J2DBasePosition);
	void setInfluencedAlpha(bool, bool);

	/**
	 * @fabricated
	 */
	void centerWithScale(float width, float height)
	{
		setBasePosition(POS_CENTER);
		m_scale.x = width;
		m_scale.y = height;
		calcMtx();
	}

	inline void updateScale(f32 scale)
	{
		m_scale = JGeometry::TVec2f(scale, scale);
		calcMtx();
	}

	inline void updateScale(f32 scaleX, f32 scaleY)
	{
		m_scale = JGeometry::TVec2f(scaleX, scaleY);
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

	// /**
	//  * @fabricated
	//  */
	// void setScale(float width, float height) {
	// 	m_scale.x = width;
	// 	m_scale.y = height;
	// }

	u32 appendChild(J2DPane*);
	u32 prependChild(J2DPane*);
	u32 removeChild(J2DPane*);

	s16 J2DCast_F32_to_S16(f32, u8);

	// Unused/inlined:
	void insertChild(J2DPane*, J2DPane*);
	float getRotate() const;
	void gatherUserInfo(J2DPane**, u64, u64, int, int&);

	// _00 VTBL
	u16 _004;                        // _004
	short _006;                      // _006
	u32 m_bloBlockType;              // _008
	u8 _00C[4];                      // _00C
	u64 m_tag;                       // _010
	u64 m_messageID;                 // _018
	JGeometry::TBox2f _020;          // _020
	JGeometry::TBox2f _030;          // _030
	float _040;                      // _040
	float _044;                      // _044
	float _048;                      // _048
	float _04C;                      // _04C
	Mtx _050;                        // _050
	Mtx _080;                        // _080
	bool m_isVisible;                // _0B0
	u8 m_cullMode;                   // _0B1
	u8 m_alpha;                      // _0B2
	u8 _0B3;                         // _0B3
	bool _0B4;                       // _0B4
	u8 _0B5;                         // _0B5
	u8 m_rotationAxisMaybe;          // _0B6
	u8 m_basePosition;               // _0B7
	float _0B8;                      // _0B8
	float _0BC;                      // _0BC
	float m_angle;                   // _0C0
	JGeometry::TVec2f m_anchorPoint; // _0C4
	JGeometry::TVec2f m_scale;       // _0CC
	JGeometry::TVec2f _0D4;          // _0D4 /* offset X,Y? */
	JSUTree<J2DPane> m_tree;         // _0DC
	J2DAnmTransform* m_transform;    // _0F8
	u8 _0FC[4];                      // _0FC

	static JGeometry::TBox2f static_mBounds;
};

struct J2DScreen : public J2DPane {
	J2DScreen();

	virtual ~J2DScreen();                                                                                      // _08
	virtual u32 getTypeID() const;                                                                             // _0C (weak)
	virtual void calcMtx();                                                                                    // _2C (weak)
	virtual void drawSelf(float, float, float (*)[3][4]);                                                      // _38
	virtual J2DPane* search(u64);                                                                              // _3C
	virtual J2DPane* searchUserInfo(u64);                                                                      // _40
	virtual bool isUsed(const ResTIMG*);                                                                       // _4C
	virtual bool isUsed(const ResFONT*);                                                                       // _50
	virtual void clearAnmTransform();                                                                          // _54 (weak)
	virtual void setAnimation(J2DAnmBase*);                                                                    // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);                                                               // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                                                                   // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                                              // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                                           // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                                               // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                                          // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                                                // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);                                                        // _84 (weak)
	virtual void setAnimationVC(J2DAnmVtxColor*);                                                              // _8C (weak)
	virtual J2DPane* createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, u32);              // _94 (weak)
	virtual J2DPane* createPane(const J2DScrnBlockHeader&, JSURandomInputStream*, J2DPane*, u32, JKRArchive*); // _98

	void animation();
	bool checkSignature(JSURandomInputStream*);
	void clean();
	bool createMaterial(JSURandomInputStream*, u32, JKRArchive*);
	void draw(float, float, const J2DGrafContext*);
	u32 gather(J2DPane**, u64, u64, int);
	J2DMaterial* getMaterial(u16);
	void* getResReference(JSURandomInputStream*, u32);
	bool getScreenInformation(JSURandomInputStream*);
	u32 makeHierarchyPanes(J2DPane*, JSURandomInputStream*, u32, JKRArchive*);
	bool set(const char*, u32, JKRArchive*);
	bool set(JSURandomInputStream*, u32);
	bool private_set(JSURandomInputStream*, u32, JKRArchive*);

	static void* getNameResource(const char*);

	// J2DPane _000
	bool _100;                // _100
	u16 m_materialCount;      // _102
	J2DMaterial* m_materials; // _104
	void* _108;               // _108
	void* _10C;               // _10C
	JUTNameTab* m_nameTab;    // _110
	int _114;                 // _114

	static void* mDataManage; // unknown type
};

// Size: 0x168
struct J2DPicture : public J2DPane {
	J2DPicture();
	J2DPicture(J2DPane*, JSURandomInputStream*, JKRArchive*);
	J2DPicture(J2DPane*, JSURandomInputStream*, J2DMaterial*);
	J2DPicture(const ResTIMG*);
	J2DPicture(const char*);
	J2DPicture(JUTTexture*);
	J2DPicture(u64, const JGeometry::TBox2f&);

	virtual ~J2DPicture();                                                                   // _08
	virtual u32 getTypeID() const { return 0x12; };                                          // _0C (weak)
	virtual void drawSelf(float, float);                                                     // _34
	virtual void drawSelf(float, float, float (*)[3][4]);                                    // _38
	virtual bool isUsed(const ResTIMG*);                                                     // _4C
	virtual bool isUsed(const ResFONT*);                                                     // _50 (weak)
	virtual void rewriteAlpha();                                                             // _58 (weak)
	virtual void initiate(const ResTIMG*, const ResTLUT*);                                   // _94
	virtual void prepareTexture(u8);                                                         // _98
	virtual bool append(const ResTIMG*, float);                                              // _9C (weak)
	virtual bool append(const ResTIMG*, JUTPalette*, float);                                 // _A0 (weak)
	virtual bool append(const char*, float);                                                 // _A4 (weak)
	virtual bool append(const char*, JUTPalette*, float);                                    // _A8 (weak)
	virtual bool append(JUTTexture*, float);                                                 // _AC (weak)
	virtual bool prepend(const ResTIMG*, float);                                             // _B0 (weak)
	virtual bool prepend(const ResTIMG*, JUTPalette*, float);                                // _B4 (weak)
	virtual bool prepend(const char*, float);                                                // _B8 (weak)
	virtual bool prepend(const char*, JUTPalette*, float);                                   // _BC (weak)
	virtual bool prepend(JUTTexture*, float);                                                // _C0 (weak)
	virtual bool insert(const ResTIMG*, u8, float);                                          // _C4 (weak)
	virtual bool insert(const ResTIMG*, JUTPalette*, u8, float);                             // _C8
	virtual bool insert(const char*, u8, float);                                             // _CC (weak)
	virtual bool insert(const char*, JUTPalette*, u8, float);                                // _D0
	virtual bool insert(JUTTexture*, u8, float);                                             // _D4
	virtual int remove(u8);                                                                  // _D8
	virtual int remove();                                                                    // _DC (weak)
	virtual int remove(JUTTexture*);                                                         // _E0
	virtual void draw(float, float, bool, bool, bool);                                       // _E4 (weak)
	virtual void draw(float, float, u8, bool, bool, bool);                                   // _E8 (weak)
	virtual void draw(float, float, float, float, bool, bool, bool);                         // _EC
	virtual void drawOut(float, float, float, float, float, float);                          // _F0 (weak)
	virtual void drawOut(float, float, float, float, float, float, float, float);            // _F4 (weak)
	virtual void drawOut(const JGeometry::TBox2f&, const JGeometry::TBox2f&);                // _F8
	virtual void load(GXTexMapID, u8);                                                       // _FC (weak)
	virtual void load(u8);                                                                   // _100 (weak)
	virtual void setBlendRatio(float, float, float, float, float, float, float, float);      // _104 (weak)
	virtual void setBlendColorRatio(float, float, float, float, float, float, float, float); // _108
	virtual void setBlendAlphaRatio(float, float, float, float, float, float, float, float); // _10C
	virtual ResTIMG* changeTexture(const ResTIMG*, u8);                                      // _110
	virtual ResTIMG* changeTexture(const char*, u8);                                         // _114
	virtual ResTIMG* changeTexture(const ResTIMG*, u8, JUTPalette*);                         // _118
	virtual ResTIMG* changeTexture(const char*, u8, JUTPalette*);                            // _11C
	virtual JUTTexture* getTexture(u8) const;                                                // _120 (weak)
	virtual u8 getTextureCount() const;                                                      // _124 (weak)
	virtual bool setBlack(JUtility::TColor);                                                 // _128 (weak)
	virtual bool setWhite(JUtility::TColor);                                                 // _12C (weak)
	virtual bool setBlackWhite(JUtility::TColor, JUtility::TColor);                          // _130 (weak)
	virtual JUtility::TColor getBlack() const;                                               // _134 (weak)
	virtual JUtility::TColor getWhite() const;                                               // _138 (weak)
	virtual J2DMaterial* getMaterial() const;                                                // _13C (weak)
	virtual void drawFullSet(float, float, float, float, float (*)[3][4]);                   // _140
	virtual void drawTexCoord(float, float, float, float, short, short, short, short, short, short, short, short, float (*)[3][4]); // _144
	virtual u8 getUsableTlut(u8);                                                                                                   // _148

	void initinfo();
	void private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*);
	void private_initiate(const ResTIMG*, const ResTLUT*);
	void setTevMode();
	void setBlendKonstColor();
	void setBlendKonstAlpha();
	void getNewColor(JUtility::TColor*);
	void setTexCoord(const JGeometry::TVec2<short>*);
	void setTexCoord(const JUTTexture*, J2DBinding, J2DMirror, bool);
	void setTexCoord(JGeometry::TVec2<short>*, const JUTTexture*, J2DBinding, J2DMirror, bool);
	u8 getTlutID(const ResTIMG*, unsigned char);
	void operator=(const J2DPicture&);

	inline JUtility::TColor getColor(int i) { return _150[i]; }

	inline void setColor(JUtility::TColor color, int i) { _150[i] = color; }

	// J2DPane _000
	JUTTexture* m_textures[4];       // _100
	u8 m_textureCount;               // _110
	u8 _111;                         // _111
	JGeometry::TVec2<short> _112[4]; // _112 /* TODO: Does using TVec2<short>[4] here mess with alignment? */
	u8 _122[2];                      // _122
	f32 _124[4];                     // _124
	f32 _134[4];                     // _134
	JUTPalette* m_palette;           // _144
	JUtility::TColor m_white;        // _148
	JUtility::TColor m_black;        // _14C
	JUtility::TColor _150[4];        // _150
	u32 _160;                        // _160
	u32 _164;                        // _164
};

// Size: 0x1A8
struct J2DPictureEx : public J2DPicture {
	enum stage_enum { Stage_0 = 0, Stage_1, Stage_2, Stage_3, Stage_4, Stage_5, Stage_6, Stage_7 };

	J2DPictureEx();
	J2DPictureEx(const ResTIMG*, u32);
	J2DPictureEx(J2DPane*, JSURandomInputStream*, u32, J2DMaterial*);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const ResTIMG*, u32);
	J2DPictureEx(u64, const JGeometry::TBox2f&, const char*, u32);

	virtual ~J2DPictureEx();                                                                 // _08
	virtual void setCullBack(bool);                                                          // _1C (weak)
	virtual void setCullBack(GXCullMode);                                                    // _20
	virtual void setAlpha(u8);                                                               // _24
	virtual void drawSelf(float, float, float (*)[3][4]);                                    // _38
	virtual bool isUsed(const ResTIMG*);                                                     // _4C
	virtual bool isUsed(const ResFONT*);                                                     // _50 (weak)
	virtual void rewriteAlpha();                                                             // _58
	virtual void setAnimation(J2DAnmBase*);                                                  // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);                                             // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                                                 // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                            // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                         // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                             // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                        // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                              // _78
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*);                    // _90
	virtual void initiate(const ResTIMG*, const ResTLUT*);                                   // _94
	virtual void prepareTexture(u8);                                                         // _98
	virtual bool append(const ResTIMG*, float);                                              // _9C (weak)
	virtual bool append(const ResTIMG*, JUTPalette*, float);                                 // _A0
	virtual bool append(const char*, float);                                                 // _A4 (weak)
	virtual bool append(const char*, JUTPalette*, float);                                    // _A8
	virtual bool append(JUTTexture*, float);                                                 // _AC
	virtual bool prepend(const ResTIMG*, float);                                             // _B0 (weak)
	virtual bool prepend(const ResTIMG*, JUTPalette*, float);                                // _B4 (weak)
	virtual bool prepend(const char*, float);                                                // _B8 (weak)
	virtual bool prepend(const char*, JUTPalette*, float);                                   // _BC (weak)
	virtual bool prepend(JUTTexture*, float);                                                // _C0 (weak)
	virtual bool insert(const ResTIMG*, u8, float);                                          // _C4 (weak)
	virtual bool insert(const ResTIMG*, JUTPalette*, u8, float);                             // _C8
	virtual bool insert(const char*, u8, float);                                             // _CC (weak)
	virtual bool insert(const char*, JUTPalette*, u8, float);                                // _D0
	virtual bool insert(JUTTexture*, u8, float);                                             // _D4
	virtual int remove(u8);                                                                  // _D8
	virtual int remove();                                                                    // _DC
	virtual int remove(JUTTexture*);                                                         // _E0
	virtual void draw(float, float, bool, bool, bool);                                       // _E4 (weak)
	virtual void draw(float, float, u8, bool, bool, bool);                                   // _E8
	virtual void draw(float, float, float, float, bool, bool, bool);                         // _EC
	virtual void drawOut(float, float, float, float, float, float);                          // _F0 (weak)
	virtual void drawOut(float, float, float, float, float, float, float, float);            // _F4 (weak)
	virtual void drawOut(const JGeometry::TBox2f&, const JGeometry::TBox2f&);                // _F8
	virtual void load(GXTexMapID, u8);                                                       // _FC
	virtual void load(u8);                                                                   // _100 (weak)
	virtual void setBlendColorRatio(float, float, float, float, float, float, float, float); // _108
	virtual void setBlendAlphaRatio(float, float, float, float, float, float, float, float); // _10C
	virtual ResTIMG* changeTexture(const ResTIMG*, u8);                                      // _110
	virtual ResTIMG* changeTexture(const char*, u8);                                         // _114
	virtual ResTIMG* changeTexture(const ResTIMG*, u8, JUTPalette*);                         // _118
	virtual ResTIMG* changeTexture(const char*, u8, JUTPalette*);                            // _11C
	virtual JUTTexture* getTexture(u8) const;                                                // _120
	virtual u8 getTextureCount() const;                                                      // _124
	virtual bool setBlack(JUtility::TColor);                                                 // _128
	virtual bool setWhite(JUtility::TColor);                                                 // _12C
	virtual bool setBlackWhite(JUtility::TColor, JUtility::TColor);                          // _130
	virtual JUtility::TColor getBlack() const;                                               // _134
	virtual JUtility::TColor getWhite() const;                                               // _138
	virtual J2DMaterial* getMaterial() const;                                                // _13C (weak)
	virtual void drawFullSet(float, float, float, float, float (*)[3][4]);                   // _140
	virtual void drawTexCoord(float, float, float, float, short, short, short, short, short, short, short, short, float (*)[3][4]); // _144
	virtual u8 getUsableTlut(u8);                                                                                                   // _148

	void initialize(u32);
	void insertCommon(u8, float);
	bool isInsert(u8) const;
	bool isRemove(u8) const;
	void setTevOrder(u8, u8, bool);
	void setTevStage(u8, u8, bool);
	void setStage(J2DTevStage*, stage_enum);
	void setTevKColor(u8);
	void setTevKColorSel(u8);
	void setTevKAlphaSel(u8);
	void shiftSetBlendRatio(u8, float, bool, bool);
	bool getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	bool isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;

	/** @fabricated */
	inline void setAnmVtxColorHelper(J2DAnmVtxColor* animation, u16 p2, u8 p3)
	{
		for (u16 b = 0; b < p2; b++) {
			for (u16 c = 0; c < animation->_14[b]._00; c++) {
				if (_170[p3] == animation->_1C[animation->_14[b]._04 + c]) {
					m_anmVtxColor = animation;
					_1A4 |= 1 << p3;
					return;
				}
			}
		}
	}

	// J2DPane _000
	J2DMaterial* _168;                     // _168
	u16 _16C;                              // _16C
	u16 _16E;                              // _16E
	u16 _170[4];                           // _170
	float _178;                            // _178
	float _17C;                            // _17C
	float _180;                            // _180
	float _184;                            // _184
	float _188;                            // _188
	float _18C;                            // _18C
	float _190;                            // _190
	float _194;                            // _194
	bool _198;                             // _198
	J2DAnmVisibilityFull* m_anmVisibility; // _19C
	J2DAnmVtxColor* m_anmVtxColor;         // _1A0
	u8 _1A4;                               // _1A4
};

typedef u32 J2DTextBoxHBinding;
typedef u32 J2DTextBoxVBinding;

// Size: 0x138
struct J2DTextBox : public J2DPane {
	J2DTextBox();
	J2DTextBox(J2DPane*, JSURandomInputStream*, JKRArchive*);
	J2DTextBox(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*);
	J2DTextBox(u64, const JGeometry::TBox2<float>&, const ResFONT*, const char*, short, J2DTextBoxHBinding, J2DTextBoxVBinding);

	virtual ~J2DTextBox();                                          // _08
	virtual u32 getTypeID() const;                                  // _0C (weak)
	virtual void resize(float, float);                              // _18
	virtual bool setConnectParent(bool);                            // _28
	virtual void drawSelf(float, float);                            // _34
	virtual void drawSelf(float, float, float (*)[3][4]);           // _38
	virtual bool isUsed(const ResTIMG*);                            // _4C (weak)
	virtual bool isUsed(const ResFONT*);                            // _50
	virtual void rewriteAlpha();                                    // _58 (weak)
	virtual void draw(float, float);                                // _94
	virtual void draw(float, float, float, J2DTextBoxHBinding);     // _98
	virtual void setFont(JUTFont*);                                 // _9C
	virtual JUTResFont* getFont() const;                            // _A0 (weak)
	virtual void setBlack(JUtility::TColor);                        // _A4 (weak)
	virtual void setWhite(JUtility::TColor);                        // _A8 (weak)
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor); // _AC (weak)
	virtual JUtility::TColor getBlack() const;                      // _B0 (weak)
	virtual JUtility::TColor getWhite() const;                      // _B4 (weak)
	virtual J2DMaterial* getMaterial() const;                       // _B8 (weak)

	void initiate(const ResFONT*, const char*, short, J2DTextBoxHBinding, J2DTextBoxVBinding);
	void private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*);
	void setString(const char*, ...);

	// J2DPane _000
	JUTResFont* m_font;        // _100
	JUtility::TColor m_color1; // _104
	JUtility::TColor m_color2; // _108
	float _10C;                // _10C
	float _110;                // _110
	float _114;                // _114
	float _118;                // _118
	float _11C;                // _11C
	float _120;                // _120
	char* _124;                // _124
	JUtility::TColor m_white;  // _128
	JUtility::TColor m_black;  // _12C
	u8 _130;                   // _130
	u8 _131;                   // _131
	short _132;                // _132
	u8 _134[4];                // _134
};

// Size: 0x148
struct J2DTextBoxEx : public J2DTextBox {
	enum stage_enum {};

	J2DTextBoxEx(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*);

	virtual ~J2DTextBoxEx();                                              // _08
	virtual void setCullBack(bool);                                       // _1C (weak)
	virtual void setCullBack(_GXCullMode);                                // _20
	virtual void setAlpha(unsigned char);                                 // _24
	virtual void drawSelf(float, float, float (*)[3][4]);                 // _38
	virtual bool isUsed(const ResTIMG*);                                  // _4C (weak)
	virtual bool isUsed(const ResFONT*);                                  // _50
	virtual void rewriteAlpha();                                          // _58
	virtual void setAnimation(J2DAnmBase*);                               // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);                          // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                              // _64
	virtual void setAnimation(J2DAnmTexPattern*);                         // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                      // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                          // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                     // _74
	virtual void setAnimation(J2DAnmVtxColor*);                           // _78 (weak)
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*); // _90
	virtual void draw(float, float);                                      // _94
	virtual void draw(float, float, float, J2DTextBoxHBinding);           // _98
	virtual void setFont(JUTFont*);                                       // _9C
	virtual JUTResFont* getFont() const;                                  // _A0
	virtual void setBlack(JUtility::TColor);                              // _A4
	virtual void setWhite(JUtility::TColor);                              // _A8
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);       // _AC
	virtual JUtility::TColor getBlack() const;                            // _B0
	virtual JUtility::TColor getWhite() const;                            // _B4
	virtual J2DMaterial* getMaterial() const;                             // _B8 (weak)

	void setTevStage(bool);
	void setStage(J2DTevStage*, stage_enum);
	void getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;

	// J2DTextBox _000
	J2DMaterial* _138;                     // _138
	u16 _13C;                              // _13C
	u16 _13E;                              // _13E
	u8 _140[4];                            // _140
	J2DAnmVisibilityFull* m_anmVisibility; // _144
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

	J2DWindow();
	J2DWindow(J2DPane*, JSURandomInputStream*, JKRArchive*);
	J2DWindow(J2DPane*, JSURandomInputStream*, J2DMaterial*);

	virtual ~J2DWindow();                                                              // _08
	virtual u32 getTypeID() const;                                                     // _0C (weak)
	virtual void resize(float, float);                                                 // _18
	virtual void drawSelf(float, float);                                               // _34
	virtual void drawSelf(float, float, float (*)[3][4]);                              // _38
	virtual bool isUsed(const ResTIMG*);                                               // _4C
	virtual bool isUsed(const ResFONT*);                                               // _50 (weak)
	virtual void rewriteAlpha();                                                       // _58 (weak)
	virtual void draw(const JGeometry::TBox2<float>&);                                 // _94
	virtual void draw(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&); // _98
	virtual void draw(float, float, float, float);                                     // _9C (weak)
	virtual void setBlack(JUtility::TColor);                                           // _A0 (weak)
	virtual void setWhite(JUtility::TColor);                                           // _A4 (weak)
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);                    // _A8 (weak)
	virtual void getBlack() const;                                                     // _AC (weak)
	virtual void getWhite() const;                                                     // _B0 (weak)
	virtual void getFrameTexture(unsigned char, unsigned char) const;                  // _B4
	virtual void getContentsTexture(unsigned char) const;                              // _B8 (weak)
	virtual void getMaterial(TMaterial&) const;                                        // _BC (weak)
	virtual void getFrameMaterial(unsigned char) const;                                // _C0 (weak)
	virtual void getContentsMaterial() const;                                          // _C4 (weak)
	virtual void drawContents(const JGeometry::TBox2<float>&);                         // _C8

	void private_readStream(J2DPane*, JSURandomInputStream*, JKRArchive*);
	void initinfo2();
	void draw_private(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&);
	void setContentsColor(JUtility::TColor, JUtility::TColor, JUtility::TColor, JUtility::TColor);
	void drawFrameTexture(JUTTexture*, float, float, float, float, unsigned short, unsigned short, unsigned short, unsigned short, bool);
	void drawFrameTexture(JUTTexture*, float, float, bool, bool, bool);
	void drawContentsTexture(float, float, float, float);
	void setTevMode(JUTTexture*, JUtility::TColor, JUtility::TColor);

	// J2DPane _000
	JUTTexture* _100;              // _100
	JUTTexture* _104;              // _104
	JUTTexture* _108;              // _108
	JUTTexture* _10C;              // _10C
	JUTTexture* m_contentsTexture; // _110
	JGeometry::TBox2f _114;        // _114
	JUTPalette* m_palette;         // _124
	u8 _128[0x10];                 // _128
	JUtility::TColor m_white;      // _138
	JUtility::TColor m_black;      // _13C
	u16 _140;                      // _140
	u16 _142;                      // _142
	u8 _144;                       // _144
	u8 _145;                       // _145
};

// Size: 0x180
struct J2DWindowEx : public J2DWindow {
	enum stage_enum {};

	J2DWindowEx(J2DPane*, JSURandomInputStream*, unsigned long, J2DMaterial*);

	virtual ~J2DWindowEx();                                                            // _08
	virtual void setCullBack(bool);                                                    // _1C (weak)
	virtual void setCullBack(_GXCullMode);                                             // _20
	virtual void setAlpha(unsigned char);                                              // _24
	virtual void drawSelf(float, float, float (*)[3][4]);                              // _38
	virtual bool isUsed(const ResTIMG*);                                               // _4C
	virtual bool isUsed(const ResFONT*);                                               // _50 (weak)
	virtual void rewriteAlpha();                                                       // _58
	virtual void setAnimation(J2DAnmBase*);                                            // _5C (weak)
	virtual void setAnimation(J2DAnmTransform*);                                       // _60 (weak)
	virtual void setAnimation(J2DAnmColor*);                                           // _64
	virtual void setAnimation(J2DAnmTexPattern*);                                      // _68
	virtual void setAnimation(J2DAnmTextureSRTKey*);                                   // _6C
	virtual void setAnimation(J2DAnmTevRegKey*);                                       // _70
	virtual void setAnimation(J2DAnmVisibilityFull*);                                  // _74
	virtual void setAnimation(J2DAnmVtxColor*);                                        // _78
	virtual const J2DAnmTransform* animationPane(const J2DAnmTransform*);              // _90
	virtual void draw(const JGeometry::TBox2<float>&);                                 // _94
	virtual void draw(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&); // _98
	virtual void draw(float, float, float, float);                                     // _9C (weak)
	virtual void setBlack(JUtility::TColor);                                           // _A0
	virtual void setWhite(JUtility::TColor);                                           // _A4
	virtual void setBlackWhite(JUtility::TColor, JUtility::TColor);                    // _A8
	virtual void getBlack() const;                                                     // _AC
	virtual void getWhite() const;                                                     // _B0
	virtual void getFrameTexture(unsigned char, unsigned char) const;                  // _B4
	virtual void getContentsTexture(unsigned char) const;                              // _B8
	virtual void getMaterial(J2DWindow::TMaterial&) const;                             // _BC (weak)
	virtual void getFrameMaterial(unsigned char) const;                                // _C0 (weak)
	virtual void getContentsMaterial() const;                                          // _C4 (weak)
	virtual void drawContents(const JGeometry::TBox2<float>&);                         // _C8

	void setMinSize();
	void draw_private(const JGeometry::TBox2<float>&, const JGeometry::TBox2<float>&);
	void drawFrameTexture(float, float, float, float, unsigned short, unsigned short, unsigned short, unsigned short, J2DMaterial*, bool);
	void setTevStage(bool);
	void setStage(J2DTevStage*, J2DWindowEx::stage_enum);
	void getBlackWhite(JUtility::TColor*, JUtility::TColor*) const;
	void isSetBlackWhite(JUtility::TColor, JUtility::TColor) const;
	void isNeedSetAnm(unsigned char);

	// J2DWindow _000
	J2DMaterial* _148[2];                  // _148
	J2DMaterial* _150;                     // _150
	J2DMaterial* _154;                     // _154
	u16 _158[2];                           // _158
	u8 _15C[4];                            // _15C
	J2DMaterial* m_contentsMaterial;       // _160
	u16 _164;                              // _164
	u16 _166;                              // _166
	u8 _168[8];                            // _168
	u8 _170;                               // _170
	J2DAnmVisibilityFull* m_anmVisibility; // _174
	J2DAnmVtxColor* m_anmVtxColor;         // _178
	u8 _17C;                               // _17C
};

#endif
