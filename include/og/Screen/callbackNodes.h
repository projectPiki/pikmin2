#ifndef _OG_SCREEN_CALLBACKNODES_H
#define _OG_SCREEN_CALLBACKNODES_H

#include "types.h"
#include "JSystem/J2D/J2DPane.h"
#include "og/Screen/ScaleMgr.h"
#include "P2DScreen.h"
#include "SoundID.h"

struct LifeGauge;

namespace JUtility {
struct TColor;
} // namespace JUtility

namespace P2JME {
struct SimpleMessage;
} // namespace P2JME

namespace og {
namespace Screen {
	struct AngleMgr;
	struct AnimGroup;
	struct AnimScreen;
	struct CounterKeta;
	struct DataNavi;

	// Size: 0x44
	struct CallBack_CatchPiki : public P2DScreen::CallBackNode {
		CallBack_CatchPiki();

		virtual ~CallBack_CatchPiki(); // _00
		virtual void update();         // _08
		virtual void _14();            // _14

		// TODO: Could init have been virtual, but not inserted into vtable?
		void init(J2DScreen*, u64, u32*, JKRArchive*);
		void setPikiIcon(int);

		u32* _1C;            // _1C
		J2DPicture* _20;     // _20
		u32 _24;             // _24
		ScaleMgr m_scaleMgr; // _28
	};

	struct CallBack_CounterRV : public P2DScreen::CallBackNode {
		enum EnumCenteringMode {
			ECM_UNKNOWN_2   = 2,
			_ECM_FORCE_UINT = 0xFFFFFFFF
		};

		CallBack_CounterRV(char**, u16, u16, JKRArchive*);

		virtual ~CallBack_CounterRV();                 // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void init(J2DScreen*, u64, u64, u64, u32*,
		                  bool);           // _14
		virtual void show();               // _18
		virtual void hide();               // _1C
		virtual void setValue(bool, bool); // _20
		virtual void setValue();           // _24

		J2DPane* getMotherPane();
		void setBlind(bool);
		void setCenteringMode(EnumCenteringMode);
		void setCounterUpDown(int, bool, bool);
		void setKetaSub(int, bool, bool);
		void setPuyoAnim(bool);
		void setPuyoAnimZero(bool);
		void setRandMode(bool);
		void setValPtr(u32*);
		void setZeroAlpha(u8);
		void startPuyoUp(float);

		char** m_characterTexturePaths; // _1C
		u32* _20;                       // _20
		u32 _24;                        // _24
		u32 _28;                        // _28
		u16 _2C;                        // _2C
		u16 m_counterLimit;             // _2E /* allocated slot count of _7C */
		u16 _30;                        // _30
		float _34;                      // _34
		float _38;                      // _38
		float _3C;                      // _3C
		float _40;                      // _40
		float _44;                      // _44
		float m_widthMaybe;             // _48
		float m_heightMaybe;            // _4C
		float _50;                      // _50
		float _54;                      // _54
		float _58;                      // _58
		float _5C;                      // _5C
		i32 m_basePosition; // _60 /* Use J2DBasePosition constants. */
		u8 _64;             // _64
		u8 _65[7];          // _65 /* Hopefully this doesn't mess with size. */
		J2DPictureEx* _6C;  // _6C
		J2DPane* _70;       // _70
		J2DPane* _74;       // _74
		J2DPane* m_motherPane;             // _78
		CounterKeta** m_counters;          // _7C
		ResTIMG** m_imgResources;          // _80
		bool m_isPuyoAnim;                 // _84
		bool m_isPuyoAnimZero;             // _85
		bool m_isBlind;                    // _86
		bool m_isHidden;                   // _87
		bool _88;                          // _88
		u8 _89;                            // _89
		EnumCenteringMode m_centeringMode; // _8C
		u8 m_zeroAlpha;                    // _90
		SoundID m_scaleUpSoundID;          // _94
		SoundID m_scaleDownSoundID;        // _98
		u8 _9C;                            // _9C
		float _A0;                         // _A0
		float _A4;                         // _A4

		static struct {
			float _00;
			float _04;
			float _08;
		} msVal;
	};

	struct CallBack_CounterDay : public CallBack_CounterRV {
		CallBack_CounterDay(char**, u16, JKRArchive*);

		virtual ~CallBack_CounterDay(); // _00
		virtual void update();          // _08
		virtual void init(J2DScreen*, u64, u64, u64, u32*,
		                  bool); // _14
		virtual void show();     // _18
		virtual void hide();     // _1C
		virtual void setValue(); // _24

		J2DPane* _A8; // _A8
	};

	// Size: 0xCC
	struct CallBack_CounterSlot : public CallBack_CounterRV {
		CallBack_CounterSlot(char**, u16, u16, JKRArchive*);

		virtual ~CallBack_CounterSlot(); // _00
		virtual void update();           // _08
		virtual void init(J2DScreen*, u64, u64, u64, u32*,
		                  bool);           // _14
		virtual void setValue(bool, bool); // _20
		virtual void setValue();           // _24

		void setPuyoParam(float, float, float);
		void slot_up(int);
		void startSlot(float);

		u8 _A8;      // _A8
		u8 _A9;      // _A9
		u8 _AA;      // _AA
		u8 _AB;      // _AB
		u8 _AC;      // _AC
		u32 _B0;     // _B0
		float _B4;   // _B4
		float _B8;   // _B8
		float _BC;   // _BC
		float _C0;   // _C0
		float _C4;   // _C4
		SoundID _C8; // _C8
	};

	// Size: 0x28
	struct CallBack_DrawAfter : public P2DScreen::CallBackNode {
		CallBack_DrawAfter(P2DScreen::Mgr*, u64);

		virtual ~CallBack_DrawAfter();                 // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

		J2DPictureEx* _1C; // _1C
		J2DPictureEx* _20; // _20
		u8 _24;            // _24
	};

	// Size: 0x4C
	struct CallBack_Furiko : public P2DScreen::CallBackNode {
		CallBack_Furiko();

		virtual ~CallBack_Furiko();                    // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

		// TODO: Could init have been virtual, but not inserted into vtable?
		void init(J2DPane*, float, float, float);
		void setParam(float, float, float);
		void stop();

		J2DPane* _1C; // _1C
		u8 _20;       // _20
		u8 _21;       // _21
		float _24;    // _24
		float _28;    // _28
		float _2C;    // _2C
		float _30;    // _30
		float _34;    // _34
		float _38;    // _38
		float _3C;    // _3C
		float _40;    // _40
		float _44;    // _44
		float _48;    // _48
	};

	struct CallBack_LifeGauge : public P2DScreen::CallBackNode {
		enum LifeGaugeType { _LGT_FORCE_UINT = 0xFFFFFFFF };

		CallBack_LifeGauge();

		virtual ~CallBack_LifeGauge();                 // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C

		void init(P2DScreen::Mgr*, DataNavi*, LifeGaugeType);
		void moveIcon();
		void setType(LifeGaugeType);
		void setOffset(float, float);

		DataNavi* m_data;              // _1C
		float m_naviLifeRatioMaybe;    // _20
		float m_widthOrRadiusMaybe;    // _24
		float m_offsetX;               // _28
		float m_offsetY;               // _2C
		float _30;                     // _30
		u8 _34[8];                     // _34
		float m_na_i_d4;               // _3C
		float m_na_i_d8;               // _40
		float m_li_i_d4;               // _44
		float m_li_i_d8;               // _48
		LifeGauge* m_lifeGauge;        // _4C
		u8 _50;                        // _50
		u8 _51;                        // _51
		float _54;                     // _54
		float _58;                     // _58
		P2DScreen::Mgr* _5C;           // _5C
		J2DPane* m_pin1;               // _60
		J2DPicture* m_pin2;            // _64
		J2DPane* m_na_i;               // _68
		J2DPane* m_li_i;               // _6C
		J2DPicture* _70;               // _70
		J2DPicture* _74;               // _74
		J2DPicture* _78;               // _78
		J2DPicture* _7C;               // _7C
		J2DPicture* _80;               // _80
		J2DPicture* _84;               // _84
		AngleMgr* m_angleMgr;          // _88
		ScaleMgr* m_scaleMgr;          // _8C
		LifeGaugeType m_lifeGaugeType; // _90
		u8 _94;                        // _94
	};

	// Size: 0x48
	struct CallBack_Message : public P2DScreen::CallBackNode {
		virtual ~CallBack_Message();                   // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

		P2JME::SimpleMessage* m_message; // _1C
		u64 m_messageIDAsULL;            // _20
		u32 m_messageIDAs2UL[2];         // _28
		float _30;                       // _30
		float _34;                       // _34
		float _38;                       // _38
		float _3C;                       // _3C
		float _40;                       // _40
		float _44;                       // _44
	};

	struct CallBack_Screen : public P2DScreen::CallBackNode {
		virtual ~CallBack_Screen();                    // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

		void changeScreen(P2DScreen::Mgr*, u64);
		J2DScreen* getPartsScreen();

		J2DScreen* m_partsScreen; // _1C
		J2DPane* _20;             // _20
		J2DTextBox* _24;          // _24
		float _28;                // _28
		float _2C;                // _2C
		float _30;                // _30
	};

	// Size: 0x38
	struct CallBack_Picture : public CallBack_Screen {
		virtual ~CallBack_Picture();                   // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

		AnimGroup* m_animGroup; // _34
	};

	struct CallBack_SunMeter : public P2DScreen::CallBackNode {
		CallBack_SunMeter();

		virtual ~CallBack_SunMeter(); // _00
		virtual void update();        // _08
		virtual void _14();           // _14

		// TODO: Could init have been virtual, but not inserted into vtable?
		void init(J2DScreen*, float*);
		void startEffectChime();

		float _1C;            // _1C
		u8 _20[4];            // _20
		J2DPane* _24;         // _24
		J2DPane* _28;         // _28
		J2DPane* _2C;         // _2C
		J2DPane* _30;         // _30
		u8 _34[4];            // _34
		u8 _38;               // _38
		u8 _39;               // _39
		u8 _3A;               // _3A
		ScaleMgr* m_scaleMgr; // _3C
	};

	struct AnimText_Screen : public CallBack_Screen {
		void open(float);
		void stop();
		void setText(u64);

		int _34;                   // _34
		AnimScreen* _38;           // _38
		u8 _3C;                    // _3C
		void* m_msgBodyPane;       // _40
		J2DTextBox* m_msgBackPane; // _44 // just a guess
		u8 _48;                    // _48
		u32 _4C;                   // _4C
		u32 _50;                   // _50
		u32 _54;                   // _54
		float _58;                 // _58
		float _5C;                 // _5C
		float _60;                 // _60
		float _64;                 // _64
		int _68;                   // _68
		float _6C;                 // _6C
		JUtility::TColor _70;      // _70
		JUtility::TColor _74;      // _74
		JUtility::TColor _78;      // _78
		JUtility::TColor _7C;      // _7C
		JUtility::TColor _80;      // _80
		JUtility::TColor _84;      // _84
		JUtility::TColor _88;      // _88
		JUtility::TColor _8C;      // _8C
		JUtility::TColor _90;      // _90
		JUtility::TColor _94;      // _94
		u8 _98[4];                 // _98
		int* _9C;                  // _9C
		JUtility::TColor _A0;      // _A0
		JUtility::TColor _A4;      // _A4
		JUtility::TColor _A8;      // _A8
		JUtility::TColor _AC;      // _AC
		JUtility::TColor _B0;      // _B0
		u8 _B4[4];                 // _B4
	};
} // namespace Screen
} // namespace og

#endif
