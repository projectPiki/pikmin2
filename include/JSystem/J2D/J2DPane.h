#ifndef _JSYSTEM_J2D_J2DPANE_H
#define _JSYSTEM_J2D_J2DPANE_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSU/JSUTree.h"
#include "JSystem/JUtility.h"

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
struct JSURandomInputStream;
struct JUTFont;
struct JUTNameTab;
struct JUTPalette;
struct JUTResFont;
struct JUTTexture;
struct ResFONT;
struct ResTIMG;
struct ResTLUT;
struct TMaterial;

typedef uint J2DRotateAxis;

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
	uint m_bloBlockType;
	int m_blockLength;
};

// Size: 0x100
struct J2DPane {
	J2DPane();
	J2DPane(J2DPane*, bool, ulonglong, const JGeometry::TBox2f&);
	J2DPane(ulonglong, const JGeometry::TBox2f&);
	J2DPane(J2DPane*, JSURandomInputStream*, uchar);
	virtual ~J2DPane();                                                  // _00
	virtual uint getTypeID() const;                                      // _04
	virtual void move(float, float);                                     // _08
	virtual void add(float, float);                                      // _0C
	virtual void resize(float, float);                                   // _10
	virtual void setCullBack(bool);                                      // _14
	virtual void setCullBack(GXCullMode);                                // _18
	virtual void setAlpha(uchar);                                        // _1C
	virtual bool setConnectParent(bool);                                 // _20
	virtual void calcMtx();                                              // _24
	virtual void update();                                               // _28
	virtual void drawSelf(float, float);                                 // _2C
	virtual void drawSelf(float, float, float (*)[3][4]);                // _30
	virtual J2DPane* search(ulonglong);                                  // _34
	virtual J2DPane* searchUserInfo(ulonglong);                          // _38
	virtual void makeMatrix(float, float);                               // _3C
	virtual void makeMatrix(float, float, float, float);                 // _40
	virtual bool isUsed(const ResTIMG*);                                 // _44
	virtual bool isUsed(const ResFONT*);                                 // _48
	virtual void clearAnmTransform();                                    // _4C
	virtual void rewriteAlpha();                                         // _50
	virtual void setAnimation(J2DAnmBase*);                              // _54
	virtual void setAnimation(J2DAnmTransform*);                         // _58
	virtual void setAnimation(J2DAnmColor*);                             // _5C
	virtual void setAnimation(J2DAnmTexPattern*);                        // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);                     // _64
	virtual void setAnimation(J2DAnmTevRegKey*);                         // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);                    // _6C
	virtual void setAnimation(J2DAnmVtxColor*);                          // _70
	virtual J2DAnmTransform* animationTransform(const J2DAnmTransform*); // _74
	virtual void setVisibileAnimation(J2DAnmVisibilityFull*);            // _78
	virtual void setAnimationVF(J2DAnmVisibilityFull*);                  // _7C
	virtual void setVtxColorAnimation(J2DAnmVtxColor*);                  // _80
	virtual void setAnimationVC(J2DAnmVtxColor*);                        // _84
	virtual void animationPane(const J2DAnmTransform*);                  // _88
	// virtual void _8C() = 0;                                           // _8C
	// /* This is just (automatic?) padding. */

	void animationTransform();
	void changeUseTrans(J2DPane*);
	void clip(const JGeometry::TBox2f&);
	void draw(float, float, const J2DGrafContext*, bool, bool);
	void gather(J2DPane**, ulonglong, ulonglong, int, int&);

	JGeometry::TBox2f* getBounds();
	JGeometry::TVec3f getGlbVtx(uchar) const;
	void* getPointer(JSURandomInputStream*, ulong, JKRArchive*);
	ulonglong getTagName() const;
	float getTranslateX() const;
	float getTranslateY() const;

	J2DPane* getFirstChildPane();
	J2DPane* getNextChildPane();
	J2DPane* getParentPane();
	JSUTree<J2DPane> getPaneTree();

	void initiate();
	void initialize(J2DPane*, bool, ulonglong, const JGeometry::TBox2f&);
	void initialize(ulonglong, const JGeometry::TBox2f&);
	void makePaneStream(J2DPane*, JSURandomInputStream*);
	void makePaneExStream(J2DPane*, JSURandomInputStream*);
	void place(const JGeometry::TBox2f&);
	void rotate(float, float, J2DRotateAxis, float);
	void rotate(float);
	void updateTransform(const J2DAnmTransform*);

	void setBasePosition(J2DBasePosition);
	void setInfluencedAlpha(bool, bool);

	u32 appendChild(J2DPane*);
	u32 prependChild(J2DPane*);
	u32 removeChild(J2DPane*);

	s16 J2DCast_F32_to_S16(f32, uchar);

	// _00 VTBL
	short _004;                      // _004
	short _006;                      // _006
	uint m_bloBlockType;             // _008
	u8 _00C[4];                      // _00C
	ulonglong m_tag;                 // _010
	ulonglong m_messageID;           // _018
	JGeometry::TBox2f _020;          // _020
	float _030;                      // _030
	float _034;                      // _034
	float _038;                      // _038
	float _03C;                      // _03C
	float _040;                      // _040
	float _044;                      // _044
	float _048;                      // _048
	float _04C;                      // _04C
	PSMatrix _050;                   // _050
	PSMatrix _080;                   // _080
	bool m_isVisible;                // _0B0
	u8 m_cullMode;                   // _0B1
	uchar m_alpha;                   // _0B2
	u8 _0B3;                         // _0B3
	bool _0B4;                       // _0B4
	u8 _0B5;                         // _0B5
	u8 m_rotationAxisMaybe;          // _0B6
	J2DBasePosition m_basePosition;  // _0B7
	float _0B8;                      // _0B8
	float _0BC;                      // _0BC
	float _0C0;                      // _0C0
	JGeometry::TVec2f m_anchorPoint; // _0C4
	float m_widthScale;              // _0CC
	float m_heightScale;             // _0D0
	float _0D4[2];                   // _0D4 /* offset X,Y? */
	JSUTree<J2DPane> m_tree;         // _0DC
	J2DAnmTransform* m_transform;    // _0F8
	u8 _0FC[4];                      // _0FC

	static JGeometry::TBox2f static_mBounds;
};

struct J2DScreen : public J2DPane {
	virtual ~J2DScreen();                                 // _00
	virtual void calcMtx();                               // _24
	virtual void drawSelf(float, float, float (*)[3][4]); // _30
	virtual J2DPane* search(ulonglong);                   // _34
	virtual J2DPane* searchUserInfo(ulonglong);           // _38
	virtual bool isUsed(const ResTIMG*);                  // _44
	virtual bool isUsed(const ResFONT*);                  // _48
	virtual void clearAnmTransform();                     // _4C
	virtual void setAnimation(J2DAnmBase*);               // _54
	virtual void setAnimation(J2DAnmTransform*);          // _58
	virtual void setAnimation(J2DAnmColor*);              // _5C
	virtual void setAnimation(J2DAnmTexPattern*);         // _60
	virtual void setAnimation(J2DAnmTextureSRTKey*);      // _64
	virtual void setAnimation(J2DAnmTevRegKey*);          // _68
	virtual void setAnimation(J2DAnmVisibilityFull*);     // _6C
	virtual void setAnimation(J2DAnmVtxColor*);           // _70
	virtual void setAnimationVF(J2DAnmVisibilityFull*);   // _7C
	virtual void setAnimationVC(J2DAnmVtxColor*);         // _84
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
	                        J2DPane*, ulong); // _8C
	virtual void createPane(const J2DScrnBlockHeader&, JSURandomInputStream*,
	                        J2DPane*, ulong, JKRArchive*); // _90
	// virtual void _94() = 0;                                // _94

	void animation();
	bool checkSignature(JSURandomInputStream*);
	void clean();
	bool createMaterial(JSURandomInputStream*, ulong, JKRArchive*);
	void draw(float, float, const J2DGrafContext*);
	u32 gather(J2DPane**, ulonglong, ulonglong, int);
	J2DMaterial* getMaterial(ushort);
	void* getResReference(JSURandomInputStream*, ulong);
	bool getScreenInformation(JSURandomInputStream*);
	u32 makeHierarchyPanes(J2DPane*, JSURandomInputStream*, ulong, JKRArchive*);
	bool set(const char*, ulong, JKRArchive*);
	bool set(JSURandomInputStream*, ulong);
	bool private_set(JSURandomInputStream*, ulong, JKRArchive*);

	static void* getNameResource(char*);

	// J2DPane _000
	bool _100;                // _100
	ushort m_materialCount;   // _102
	J2DMaterial* m_materials; // _104
	void* _108;               // _108
	void* _10C;               // _10C
	JUTNameTab* m_nameTab;    // _110
	int _114;                 // _114

	static void* mDataManage; // unknown type
};

// Size: 0x168
struct J2DPicture : public J2DPane {
	virtual void initiate(const ResTIMG*, const ResTLUT*);           // _8C
	virtual void prepareTexture(uchar);                              // _90
	virtual bool append(const ResTIMG*, float);                      // _94
	virtual bool append(const ResTIMG*, JUTPalette*, float);         // _98
	virtual bool append(const char*, float);                         // _9C
	virtual bool append(const char*, JUTPalette*, float);            // _A0
	virtual bool append(JUTTexture*, float);                         // _A4
	virtual bool prepend(const ResTIMG*, float);                     // _A8
	virtual bool prepend(const ResTIMG*, JUTPalette*, float);        // _AC
	virtual bool prepend(const char*, float);                        // _B0
	virtual bool prepend(const char*, JUTPalette*, float);           // _B4
	virtual bool prepend(JUTTexture*, float);                        // _B8
	virtual bool insert(const ResTIMG*, uchar, float);               // _BC
	virtual bool insert(const ResTIMG*, JUTPalette*, uchar, float);  // _C0
	virtual bool insert(const char*, uchar, float);                  // _C4
	virtual bool insert(const char*, JUTPalette*, uchar, float);     // _C8
	virtual bool insert(JUTTexture*, uchar, float);                  // _CC
	virtual int remove(uchar);                                       // _D0
	virtual int remove();                                            // _D4
	virtual int remove(JUTTexture*);                                 // _D8
	virtual void draw(float, float, bool, bool, bool);               // _DC
	virtual void draw(float, float, uchar, bool, bool, bool);        // _E0
	virtual void draw(float, float, float, float, bool, bool, bool); // _E4
	virtual void drawOut(float, float, float, float, float, float);  // _E8
	virtual void drawOut(float, float, float, float, float, float, float,
	                     float); // _EC
	virtual void drawOut(const JGeometry::TBox2f&,
	                     const JGeometry::TBox2f&); // _F0
	virtual void load(GXTexMapID, uchar);           // _F4
	virtual void load(uchar);                       // _F8
	virtual void setBlendRatio(float, float, float, float, float, float, float,
	                           float); // _FC
	virtual void setBlendColorRatio(float, float, float, float, float, float,
	                                float, float); // _100
	virtual void setBlendAlphaRatio(float, float, float, float, float, float,
	                                float, float);                      // _104
	virtual ResTIMG* changeTexture(const ResTIMG*, uchar);              // _108
	virtual ResTIMG* changeTexture(const char*, uchar);                 // _10C
	virtual ResTIMG* changeTexture(const ResTIMG*, uchar, JUTPalette*); // _110
	virtual ResTIMG* changeTexture(const char*, uchar, JUTPalette*);    // _114
	virtual JUTTexture* getTexture(uchar) const;                        // _118
	virtual uchar getTextureCount() const;                              // _11C
	virtual bool setBlack(JUtility::TColor);                            // _120
	virtual bool setWhite(JUtility::TColor);                            // _124
	virtual bool setBlackWhite(JUtility::TColor, JUtility::TColor);     // _128
	virtual JUtility::TColor getBlack() const;                          // _12C
	virtual JUtility::TColor getWhite() const;                          // _130
	virtual J2DMaterial* getMaterial() const;                           // _134
	virtual void drawFullSet(float, float, float, float,
	                         float (*)[3][4]); // _138
	virtual void drawTexCoord(float, float, float, float, short, short, short,
	                          short, short, short, short, short,
	                          float (*)[3][4]); // _13C
	virtual uchar getUsableTlut(uchar);         // _140
	virtual void _144() = 0;                    // _144

	// J2DPane _000
	JUTTexture* m_textures[4]; // _100
	uchar m_textureCount;      // _110
	u8 _111;                   // _111
	short _112[2][4]; // _112 /* TODO: Does using TVec2<short>[4] here mess with
	                  // alignment? */
	u8 _122[2];       // _122
	u32 _124[4];      // _124
	u32 _134[4];      // _134
	JUTPalette* m_palette;    // _144
	JUtility::TColor m_white; // _148
	JUtility::TColor m_black; // _14C
	JUtility::TColor _150[4]; // _150
	u32 _160;                 // _160
	u32 _164;                 // _164
};

// Size: 0x1A8
struct J2DPictureEx : public J2DPicture {

	// J2DPane _000
	J2DMaterial* _168;                     // _168
	short _16C;                            // _16C
	short _16E;                            // _16E
	short _170[2][2];                      // _170
	float _178;                            // _178
	float _17C;                            // _17C
	float _180;                            // _180
	float _184;                            // _184
	float _188;                            // _188
	float _18C;                            // _18C
	float _190;                            // _190
	float _194;                            // _194
	u8 _198;                               // _198
	J2DAnmVisibilityFull* m_anmVisibility; // _19C
	void* _1A0;                            // _1A0
	u8 _1A4;                               // _1A4
};

typedef uint J2DTextBoxHBinding;
typedef uint J2DTextBoxVBinding;

// Size: 0x138
struct J2DTextBox : public J2DPane {
	virtual void draw(float, float);                                // _8C
	virtual void draw(float, float, float, J2DTextBoxHBinding);     // _90
	virtual void setFont(JUTFont*);                                 // _94
	virtual JUTResFont* getFont() const;                            // _98
	virtual bool setBlack(JUtility::TColor);                        // _9C
	virtual bool setWhite(JUtility::TColor);                        // _A0
	virtual bool setBlackWhite(JUtility::TColor, JUtility::TColor); // _A4
	virtual JUtility::TColor getBlack() const;                      // _A8
	virtual JUtility::TColor getWhite() const;                      // _AC
	virtual J2DMaterial* getMaterial() const;                       // _B0
	virtual void _B4() = 0;                                         // _B4

	// J2DPane _000
	JUTResFont* m_font;       // _100
	JUtility::TColor _104;    // _104
	JUtility::TColor _108;    // _108
	float _10C;               // _10C
	float _110;               // _110
	float _114;               // _114
	float _118;               // _118
	float _11C;               // _11C
	float _120;               // _120
	char* _124;               // _124
	JUtility::TColor m_white; // _128
	JUtility::TColor m_black; // _12C
	u8 _130;                  // _130
	u8 _131;                  // _131
	short _132;               // _132
	u8 _134[4];               // _134
};

// Size: 0x148
struct J2DTextBoxEx : public J2DTextBox {

	// J2DTextBox _000
	J2DMaterial* _138;                     // _138
	ushort _13C;                           // _13C
	ushort _13E;                           // _13E
	u8 _140[4];                            // _140
	J2DAnmVisibilityFull* m_anmVisibility; // _144
};

// Size: 0x148
struct J2DWindow : public J2DPane {
	virtual void draw(const JGeometry::TBox2f&); // _8C
	virtual void draw(const JGeometry::TBox2f&,
	                  const JGeometry::TBox2f&);                    // _90
	virtual void draw(float, float, float, float);                  // _94
	virtual bool setBlack(JUtility::TColor);                        // _98
	virtual bool setWhite(JUtility::TColor);                        // _9C
	virtual bool setBlackWhite(JUtility::TColor, JUtility::TColor); // _A0
	virtual JUtility::TColor getBlack() const;                      // _A4
	virtual JUtility::TColor getWhite() const;                      // _A8
	virtual JUTTexture* getFrameTexture(uchar, uchar) const;        // _AC
	virtual JUTTexture* getContentsTexture(uchar) const;            // _B0
	virtual void getMaterial(TMaterial&) const;                     // _B4
	virtual J2DMaterial* getFrameMaterial(uchar) const;             // _B8
	virtual J2DMaterial* getContentsMaterial() const;               // _BC
	virtual void drawContents(const JGeometry::TBox2f&);            // _C0
	virtual void _C4() = 0;                                         // _C4

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
	ushort _140;                   // _140
	ushort _142;                   // _142
	u8 _144;                       // _144
	u8 _145;                       // _145
};

// Size: 0x180
struct J2DWindowEx : public J2DWindow {

	// J2DWindow _000
	J2DMaterial* _148[2];                  // _148
	J2DMaterial* _150;                     // _150
	J2DMaterial* _154;                     // _154
	ushort _158[2];                        // _158
	u8 _15C[4];                            // _15C
	J2DMaterial* m_contentsMaterial;       // _160
	ushort _164;                           // _164
	ushort _166;                           // _166
	u8 _168[8];                            // _168
	u8 _170;                               // _170
	J2DAnmVisibilityFull* m_anmVisibility; // _174
	J2DAnmVtxColor* m_anmVtxColor;         // _178
	u8 _17C;                               // _17C
};

#endif
