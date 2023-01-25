#ifndef _GAME_PIKIPARMS_H
#define _GAME_PIKIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct PikiParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms(); // (weak)

		// _27C-_288	= Parameters
		Parm<f32> mP000;         // _288
		Parm<f32> mRunningSpeed; // _2B0, p001
		Parm<f32> mP054;         // _2D8
		Parm<f32> mP065;         // _300
		Parm<f32> mP038;         // _328
		Parm<f32> mP003;         // _350
		Parm<f32> mP010;         // _378
		Parm<f32> mP011;         // _3A0
		Parm<f32> mP004;         // _3C8
		Parm<f32> mP012;         // _3F0
		Parm<f32> mP013;         // _418
		Parm<f32> _440;          // _440, P003
		Parm<f32> _468;          // _468, P004
		Parm<int> mP005;         // _490
		Parm<int> mP006;         // _4B8
		Parm<f32> mP007;         // _4E0
		Parm<f32> mP008;         // _508
		Parm<f32> mP009;         // _530
		Parm<f32> mP014;         // _558
		Parm<f32> mP015;         // _580
		Parm<f32> mP016;         // _5A8
		Parm<f32> mP037;         // _5D0
		Parm<f32> mP017;         // _5F8
		Parm<f32> mP018;         // _620
		Parm<f32> mP019;         // _648
		Parm<f32> mP020;         // _670
		Parm<f32> mP021;         // _698
		Parm<f32> mP022;         // _6C0
		Parm<f32> mP023;         // _6E8
		Parm<f32> mP024;         // _710
		Parm<f32> mP025;         // _738
		Parm<f32> mP026;         // _760
		Parm<f32> mP027;         // _788
		Parm<f32> mP034;         // _7B0
		Parm<f32> mP028;         // _7D8
		Parm<f32> mP039;         // _800
		Parm<f32> mP029;         // _828
		Parm<f32> mP030;         // _850
		Parm<f32> mP031;         // _878
		Parm<f32> mP032;         // _8A0
		Parm<f32> mP033;         // _8C8
		Parm<f32> mP035;         // _8F0
		Parm<f32> mP036;         // _918
		Parm<f32> mP040;         // _940
		Parm<f32> mP041;         // _968
		Parm<f32> mP042;         // _990
		Parm<f32> _9B8;          // _9B8, P010
		Parm<f32> _9E0;          // _9E0, P011
		Parm<f32> _A08;          // _A08, P012
		Parm<f32> _A30;          // _A30, P013
		Parm<f32> _A58;          // _A58, P014
		Parm<f32> _A80;          // _A80, P015
		Parm<f32> mP043;         // _AA8
		Parm<f32> mP074;         // _AD0
		Parm<f32> mP044;         // _AF8
		Parm<f32> mP045;         // _B20
		Parm<f32> mP046;         // _B48
		Parm<f32> mP047;         // _B70
		Parm<f32> mP048;         // _B98
		Parm<f32> mP049;         // _BC0
		Parm<f32> mP050;         // _BE8
		Parm<f32> mP051;         // _C10
		Parm<f32> mP052;         // _C38
		Parm<f32> mP053;         // _C60
		Parm<f32> mP055;         // _C88
		Parm<f32> mP056;         // _CB0
		Parm<f32> mP057;         // _CD8
		Parm<f32> mP058;         // _D00
		Parm<f32> mP059;         // _D28
		Parm<f32> mP075;         // _D50
		Parm<f32> mP076;         // _D78
		Parm<f32> mP077;         // _DA0
		Parm<f32> mP060;         // _DC8
		Parm<f32> mP061;         // _DF0
		Parm<int> mP062;         // _E18
		Parm<int> mP063;         // _E40
		Parm<f32> mP064;         // _E68
		Parm<f32> mP066;         // _E90
		Parm<f32> mP067;         // _EB8
		Parm<f32> mP068;         // _EE0
		Parm<f32> mP069;         // _F08
		Parm<f32> mP070;         // _F30
		Parm<f32> mP071;         // _F58
		Parm<f32> mP072;         // _F80
		Parm<f32> mP073;         // _FA8
		Parm<f32> _FD0;          // _FD0, P000
		Parm<f32> _FF8;          // _FF8, P001
		Parm<f32> _1020;         // _1020, P002
		Parm<f32> _1048;         // _1048, P005
		Parm<f32> _1070;         // _1070, P006
		Parm<f32> _1098;         // _1098, P020
		Parm<f32> _10C0;         // _10C0, P021
		Parm<f32> _10E8;         // _10E8, P018 "(transport) MAX FACTOR"
		Parm<f32> _1110;         // _1110, P019 "(transport) MAX FACTOR"
		Parm<f32> _1138;         // _1138, P007
		Parm<f32> _1160;         // _1160, P008
		Parm<f32> _1188;         // _1188, P009
		Parm<f32> _11B0;         // _11B0, P016
		Parm<f32> _11D8;         // _11D8, P017
		Parm<f32> _1200;         // _1200, P022
		                         // _1228 = IParameters ptr
	};

	PikiParms(); // (weak)

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms mPikiParms; // _27C
};

} // namespace Game

#endif
