#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct NaviParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms(); // (weak)

		// _27C-_288	= Parameters
		Parm<f32> mP000;                // _288
		Parm<f32> mP060;                // _2B0
		Parm<f32> mP062;                // _2D8
		Parm<f32> mP001;                // _300, max whistle radius (pre-upgrade)
		Parm<f32> mP053;                // _328, initial whistle radius
		Parm<f32> mP002;                // _350, whistle time limit
		Parm<f32> mP003;                // _378, whistle fadeout time
		Parm<f32> mP004;                // _3A0
		Parm<f32> mP056;                // _3C8
		Parm<f32> mP038;                // _3F0
		Parm<f32> mStick0;              // _418
		Parm<f32> mStick01;             // _440
		Parm<f32> mStick1;              // _468
		Parm<f32> mStick2;              // _490
		Parm<f32> mP008;                // _4B8
		Parm<f32> mP009;                // _4E0
		Parm<f32> mP010;                // _508
		Parm<f32> mP011;                // _530
		Parm<f32> mP024;                // _558
		Parm<f32> mP025;                // _580
		Parm<f32> mP054;                // _5A8
		Parm<f32> mQ000;                // _5D0
		Parm<f32> mQ001;                // _5F8
		Parm<f32> mP026;                // _620
		Parm<f32> mP037;                // _648
		Parm<int> mP042;                // _670
		Parm<f32> _698;                 // _698
		Parm<f32> mP040;                // _6C0
		Parm<f32> mP021;                // _6E8
		Parm<f32> mP041;                // _710
		Parm<f32> mP022;                // _738
		Parm<f32> mP023;                // _760
		Parm<f32> mP031;                // _788
		Parm<f32> mP032;                // _7B0
		Parm<f32> mP033;                // _7D8
		Parm<f32> mP034;                // _800
		Parm<f32> mP035;                // _828
		Parm<f32> mP036;                // _850
		Parm<f32> mP048;                // _878
		Parm<f32> mP049;                // _8A0, "time for piki to run out of numbness"
		Parm<f32> mCStickNeutralThresh; // _8C8, p043
		Parm<f32> mP044;                // _8F0
		Parm<f32> _918;                 // _918, also p048?
		Parm<f32> mP045;                // _940
		Parm<f32> mP046;                // _968
		Parm<f32> mP047;                // _990
		Parm<f32> mMaxHealth;           // _9B8
		Parm<f32> mP051;                // _9E0
		Parm<f32> mP052;                // _A08
		Parm<int> mP055;                // _A30
		Parm<int> mP057;                // _A58
		Parm<int> mP058;                // _A80
		Parm<int> mP059;                // _AA8
		Parm<int> mP061;                // _AD0
		Parm<int> mQ002;                // _AF8
		Parm<int> mQ003;                // _B20
		Parm<int> mQ004;                // _B48
		Parm<int> mQ005;                // _B70
		Parm<f32> mQ006;                // _B98
		Parm<f32> mQ007;                // _BC0, max whistle radius (with upgrade)
		Parm<f32> mQ008;                // _BE8
		Parm<int> mQ009;                // _C10
		Parm<f32> mQ010;                // _C38
		                                // _C60 = IParameters ptr
	};

	NaviParms(); // (weak)

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mNaviParms; // _27C
};

} // namespace Game

#endif
