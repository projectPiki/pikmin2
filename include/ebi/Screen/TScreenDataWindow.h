#ifndef _EBI_SCREEN_FILESELECT_TSCREENDATAWINDOW_H
#define _EBI_SCREEN_FILESELECT_TSCREENDATAWINDOW_H

#include "ebi/Screen/TScreenBase.h"
#include "og/Screen/callbackNodes.h"

namespace ebi {
namespace Screen {
namespace FileSelect {
struct TScreenDataWindow_data {
	TScreenDataWindow_data()
	    : _00(nullptr)
	    , _0C(0)
	    , _10(0)
	    , _14(0)
	    , _18(0)
	    , _24(0)
	    , _28(0)
	{
	}

	void setArchive(JKRArchive*);
	void setData(s32, u32, u32, u32, u32, u32, u32);

	P2DScreen::Mgr* _00;                 // _00
	og::Screen::CallBack_CounterRV* _04; // _04
	og::Screen::CallBack_CounterRV* _08; // _08
	u8 _0C;                              // _0C
	u32 _10;                             // _10
	u32 _14;                             // _14
	int _18;                             // _18
	u32 _1C;                             // _1C
	u32 _20;                             // _20
	u32 _24;                             // _24
	u32 _28;                             // _28
};

// unused struct
struct TScreenDataWindow_new {
	void setArchive(JKRArchive*);
	void setData(s32, u64);
};
} // namespace FileSelect
} // namespace Screen
} // namespace ebi

#endif
