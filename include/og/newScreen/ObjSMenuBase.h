#ifndef _OG_NEWSCREEN_OBJSMENUBASE_H
#define _OG_NEWSCREEN_OBJSMENUBASE_H

#include "Screen/Bases.h"

struct J2DPane;
struct J2DPictureEx;
struct J2DScreen;
struct J2DTextBoxEx;

namespace P2DScreen {
struct Mgr;
} // namespace P2DScreen

namespace og {
namespace Screen {
	struct ArrowAlphaBlink;
} // namespace Screen

namespace newScreen {
	struct ObjSMenuBase : public ::Screen::ObjBase {
		virtual ~ObjSMenuBase();                 // _00
		virtual bool doUpdateFadein();           // _48
		virtual void doUpdateFadeinFinish();     // _4C
		virtual bool doUpdate();                 // _50
		virtual void doUpdateFinish();           // _54
		virtual void doUpdateFadeoutFinish();    // _5C
		virtual void in_L()  = 0;                // _70
		virtual void in_R()  = 0;                // _74
		virtual void wait()  = 0;                // _78
		virtual void out_L() = 0;                // _7C
		virtual void out_R() = 0;                // _80
		virtual void loop();                     // _84
		virtual void doUpdateCancelAction() = 0; // _88
		virtual void doUpdateRAction()      = 0; // _8C
		virtual void doUpdateLAction()      = 0; // _90
		virtual void updateFadeIn();             // _94
		virtual void updateFadeOut();            // _98
		virtual void commonUpdate() = 0;         // _9C

		int _38;                                    // _38
		int _3C;                                    // _3C
		float _40;                                  // _40
		float _44;                                  // _44
		u8 _48;                                     // _48
		float _4C;                                  // _4C
		u8 _50;                                     // _50
		J2DPictureEx* m_Peffect;                    // _54
		uint m_buttonStates[2];                     // _58
		J2DScreen* m_LRScreen;                      // _60
		J2DPane* m_Nyaji_l;                         // _64
		J2DPane* m_Nyaji_r;                         // _68
		J2DTextBoxEx* m_Tyaji_l;                    // _6C
		J2DTextBoxEx* m_Tyaji_r;                    // _70
		u8 _74[4];                                  // _74
		float _78;                                  // _78
		float _7C;                                  // _7C
		float _80;                                  // _80
		float _84;                                  // _84
		float _88;                                  // _88
		u8 _8C[4];                                  // _8C
		Screen::ArrowAlphaBlink* m_arrowAlphaBlink; // _90
		u32 _94;                                    // _94
		J2DPictureEx* m_Peffect2;                   // _98
		P2DScreen::Mgr* m_screenMgr;                // _9C
		J2DPane* m_Nsize;                           // _A0
		float _A4;                                  // _A4
	};
} // namespace newScreen
} // namespace og

#endif
