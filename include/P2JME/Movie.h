#ifndef _P2JME_MOVIE_H
#define _P2JME_MOVIE_H

#include "P2JME/Window.h"
#include "P2DScreen.h"
#include "Vector3.h"

struct J2DTextBox;

namespace P2JME {
namespace Movie {
struct WindowPane : public P2DScreen::CallBackNode {
	virtual ~WindowPane(); // _08 (weak)
	virtual void update(); // _10
	virtual void doInit(); // _18

	void moveWindow(bool);
	void open(f32);

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	int _1C;      // _1C
	f32 _20;      // _20
	f32 _24;      // _24
	Vector3f _28; // _28
	u8 _34[0x4];  // _34, unknown
	Vector3f _38; // _38
	Vector3f _44; // _44
};

struct AbtnPane : public P2DScreen::CallBackNode {
	virtual ~AbtnPane();   // _08 (weak)
	virtual void update(); // _10
	virtual void doInit(); // _18

	// _00     = VTBL
	// _00-_1C = P2DScreen::CallBackNode
	BOOL _1C; // _1C
	f32 _20;  // _20
	f32 _24;  // _24
};

struct MessageWindowScreen : P2DScreen::Mgr_tuning {
	virtual ~MessageWindowScreen(); // _08 (weak)

	void open(f32);

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	WindowPane* m_windowPane; // _148
	AbtnPane* _14C;           // _14C
	AbtnPane* _150;           // _150
	u8 _154[0x4];             // _154, unknown
};

struct PodIconScreen : P2DScreen::Mgr_tuning {
	virtual ~PodIconScreen(); // _08 (weak)
	virtual void update();    // _30

	// _00      = VTBL
	// _00-_148 = P2DScreen::Mgr_tuning
	int _148;      // _148
	u32 _14C;      // _14C, unknown
	f32 _150;      // _150
	u32 _154;      // _154, unknown
	f32 _158;      // _158
	u32 _15C;      // _15C
	f32 _160;      // _160
	f32 _164;      // _164
	f32 _168;      // _168
	f32 _16C;      // _16C
	Vector3f _170; // _170
	Vector3f _17C; // _17C
};

struct TControl : public P2JME::Window::TControl {
	enum EModeFlag {
		MODEFLAG_Null = 0,
		MODEFLAG_Unk1 = 1,
		MODEFLAG_Unk2 = 2,
		MODEFLAG_Unk3 = 3,
	};

	TControl();

	virtual ~TControl();                           // _08 (weak)
	virtual void reset();                          // _0C
	virtual void update(Controller*, Controller*); // _14
	virtual void draw(Graphics&);                  // _18
	virtual void onInit();                         // _34

	void setMode(EModeFlag);

	// _00     = VTBL
	// _00-_5C = P2JME::Window::TControl
	MessageWindowScreen* m_messageWindowScreen; // _5C
	PodIconScreen* m_podIconScreen;             // _60
	J2DPane* _64;                               // _64
	u8 m_finished;                              // _68
	EModeFlag m_modeFlag;                       // _6C
	uint m_flags;                               // _70
	bool m_isPaused;                            // _74
};
} // namespace Movie
} // namespace P2JME

#endif
