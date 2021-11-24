#ifndef _OG_SCREEN_CALLBACKNODES_H
#define _OG_SCREEN_CALLBACKNODES_H

#include "types.h"
#include "JSystem/J2D/J2DPane.h"
#include "og/Screen/ScaleMgr.h"
#include "P2DScreen.h"
#include "SoundID.h"

struct LifeGauge;

namespace P2JME {
struct SimpleMessage;
} // namespace P2JME

namespace og {
namespace Screen {
	struct AngleMgr;
	struct AnimGroup;
	struct CounterKeta;
	struct DataNavi;

	// Size: 0x44
	struct CallBack_CatchPiki : public P2DScreen::CallBackNode {
		virtual ~CallBack_CatchPiki(); // _00
		virtual void update();         // _08
		virtual void _14();            // _14

		ulong* _1C;          // _1C
		J2DPicture* _20;     // _20
		ulong _24;           // _24
		ScaleMgr m_scaleMgr; // _28
	};

	struct CallBack_CounterRV : public P2DScreen::CallBackNode {
		enum EnumCenteringMode {
			ECM_UNKNOWN_2   = 2,
			_ECM_FORCE_UINT = 0xFFFFFFFF
		};

		virtual ~CallBack_CounterRV();                 // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void init(J2DScreen*, ulonglong, ulonglong, ulonglong, ulong*,
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
		void setZeroAlpha(bool);
		void startPuyoUp(float);

		char** m_characterTexturePaths; // _1C
		ulong* _20;                     // _20
		ulong _24;                      // _24
		ulong _28;                      // _28
		ushort _2C;                     // _2C
		ushort m_counterLimit;          // _2E /* allocated slot count of _7C */
		ushort _30;                     // _30
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
		uint m_basePosition; // _60 /* Use J2DBasePosition constants. */
		u8 _64;              // _64
		u8 _65[7];           // _65 /* Hopefully this doesn't mess with size. */
		J2DPictureEx* _6C;   // _6C
		J2DPane* _70;        // _70
		J2DPane* _74;        // _74
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
		uchar m_zeroAlpha;                 // _90
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
		virtual ~CallBack_CounterDay(); // _00
		virtual void update();          // _08
		virtual void init(J2DScreen*, ulonglong, ulonglong, ulonglong, ulong*,
		                  bool); // _14
		virtual void show();     // _18
		virtual void hide();     // _1C
		virtual void setValue(); // _24

		J2DPane* _A8; // _A8
	};

	// Size: 0xCC
	struct CallBack_CounterSlot : public CallBack_CounterRV {
		virtual ~CallBack_CounterSlot(); // _00
		virtual void update();           // _08
		virtual void init(J2DScreen*, ulonglong, ulonglong, ulonglong, ulong*,
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
		virtual ~CallBack_Furiko();                    // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C
		virtual void _14();                            // _14

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

		virtual ~CallBack_LifeGauge();                 // _00
		virtual void update();                         // _08
		virtual void draw(Graphics&, J2DGrafContext&); // _0C

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
		ulonglong m_messageIDAsULL;      // _20
		ulong m_messageIDAs2UL[2];       // _28
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
		virtual ~CallBack_SunMeter(); // _00
		virtual void update();        // _08
		virtual void _14();           // _14

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
} // namespace Screen
} // namespace og

#endif
