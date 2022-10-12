#ifndef _GAME_PIKIPARMS_H
#define _GAME_PIKIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct PikiParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms(); // (weak)

		// _27C-_288	= Parameters
		Parm<f32> m_p000;         // _288
		Parm<f32> m_runningSpeed; // _2B0, p001
		Parm<f32> m_p054;         // _2D8
		Parm<f32> m_p065;         // _300
		Parm<f32> m_p038;         // _328
		Parm<f32> m_p003;         // _350
		Parm<f32> m_p010;         // _378
		Parm<f32> m_p011;         // _3A0
		Parm<f32> m_p004;         // _3C8
		Parm<f32> m_p012;         // _3F0
		Parm<f32> m_p013;         // _418
		Parm<f32> _440;           // _440, P003
		Parm<f32> _468;           // _468, P004
		Parm<int> m_p005;         // _490
		Parm<int> m_p006;         // _4B8
		Parm<f32> m_p007;         // _4E0
		Parm<f32> m_p008;         // _508
		Parm<f32> m_p009;         // _530
		Parm<f32> m_p014;         // _558
		Parm<f32> m_p015;         // _580
		Parm<f32> m_p016;         // _5A8
		Parm<f32> m_p037;         // _5D0
		Parm<f32> m_p017;         // _5F8
		Parm<f32> m_p018;         // _620
		Parm<f32> m_p019;         // _648
		Parm<f32> m_p020;         // _670
		Parm<f32> m_p021;         // _698
		Parm<f32> m_p022;         // _6C0
		Parm<f32> m_p023;         // _6E8
		Parm<f32> m_p024;         // _710
		Parm<f32> m_p025;         // _738
		Parm<f32> m_p026;         // _760
		Parm<f32> m_p027;         // _788
		Parm<f32> m_p034;         // _7B0
		Parm<f32> m_p028;         // _7D8
		Parm<f32> m_p039;         // _800
		Parm<f32> m_p029;         // _828
		Parm<f32> m_p030;         // _850
		Parm<f32> m_p031;         // _878
		Parm<f32> m_p032;         // _8A0
		Parm<f32> m_p033;         // _8C8
		Parm<f32> m_p035;         // _8F0
		Parm<f32> m_p036;         // _918
		Parm<f32> m_p040;         // _940
		Parm<f32> m_p041;         // _968
		Parm<f32> m_p042;         // _990
		Parm<f32> _9B8;           // _9B8, P010
		Parm<f32> _9E0;           // _9E0, P011
		Parm<f32> _A08;           // _A08, P012
		Parm<f32> _A30;           // _A30, P013
		Parm<f32> _A58;           // _A58, P014
		Parm<f32> _A80;           // _A80, P015
		Parm<f32> m_p043;         // _AA8
		Parm<f32> m_p074;         // _AD0
		Parm<f32> m_p044;         // _AF8
		Parm<f32> m_p045;         // _B20
		Parm<f32> m_p046;         // _B48
		Parm<f32> m_p047;         // _B70
		Parm<f32> m_p048;         // _B98
		Parm<f32> m_p049;         // _BC0
		Parm<f32> m_p050;         // _BE8
		Parm<f32> m_p051;         // _C10
		Parm<f32> m_p052;         // _C38
		Parm<f32> m_p053;         // _C60
		Parm<f32> m_p055;         // _C88
		Parm<f32> m_p056;         // _CB0
		Parm<f32> m_p057;         // _CD8
		Parm<f32> m_p058;         // _D00
		Parm<f32> m_p059;         // _D28
		Parm<f32> m_p075;         // _D50
		Parm<f32> m_p076;         // _D78
		Parm<f32> m_p077;         // _DA0
		Parm<f32> m_p060;         // _DC8
		Parm<f32> m_p061;         // _DF0
		Parm<int> m_p062;         // _E18
		Parm<int> m_p063;         // _E40
		Parm<f32> m_p064;         // _E68
		Parm<f32> m_p066;         // _E90
		Parm<f32> m_p067;         // _EB8
		Parm<f32> m_p068;         // _EE0
		Parm<f32> m_p069;         // _F08
		Parm<f32> m_p070;         // _F30
		Parm<f32> m_p071;         // _F58
		Parm<f32> m_p072;         // _F80
		Parm<f32> m_p073;         // _FA8
		Parm<f32> _FD0;           // _FD0, P000
		Parm<f32> _FF8;           // _FF8, P001
		Parm<f32> _1020;          // _1020, P002
		Parm<f32> _1048;          // _1048, P005
		Parm<f32> _1070;          // _1070, P006
		Parm<f32> _1098;          // _1098, P020
		Parm<f32> _10C0;          // _10C0, P021
		Parm<f32> _10E8;          // _10E8, P018 "(transport) MAX FACTOR"
		Parm<f32> _1110;          // _1110, P019 "(transport) MAX FACTOR"
		Parm<f32> _1138;          // _1138, P007
		Parm<f32> _1160;          // _1160, P008
		Parm<f32> _1188;          // _1188, P009
		Parm<f32> _11B0;          // _11B0, P016
		Parm<f32> _11D8;          // _11D8, P017
		Parm<f32> _1200;          // _1200, P022
		                          // _1228 = IParameters ptr
	};

	PikiParms(); // (weak)

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms m_pikiParms; // _27C
};

} // namespace Game

#endif
