#ifndef _GAME_NAVIPARMS_H
#define _GAME_NAVIPARMS_H

#include "Game/FakePiki.h"

namespace Game {
struct NaviParms : public FakePikiParms {
	struct Parms : public Parameters {
		Parms(); // (weak)

		// _27C-_288	= Parameters
		Parm<f32> m_p000;                // _288
		Parm<f32> m_p060;                // _2B0
		Parm<f32> m_p062;                // _2D8
		Parm<f32> m_p001;                // _300
		Parm<f32> m_p053;                // _328
		Parm<f32> m_p002;                // _350
		Parm<f32> m_p003;                // _378
		Parm<f32> m_p004;                // _3A0
		Parm<f32> m_p056;                // _3C8
		Parm<f32> m_p038;                // _3F0
		Parm<f32> m_stick0;              // _418
		Parm<f32> m_stick01;             // _440
		Parm<f32> m_stick1;              // _468
		Parm<f32> m_stick2;              // _490
		Parm<f32> m_p008;                // _4B8
		Parm<f32> m_p009;                // _4E0
		Parm<f32> m_p010;                // _508
		Parm<f32> m_p011;                // _530
		Parm<f32> m_p024;                // _558
		Parm<f32> m_p025;                // _580
		Parm<f32> m_p054;                // _5A8
		Parm<f32> m_q000;                // _5D0
		Parm<f32> m_q001;                // _5F8
		Parm<f32> m_p026;                // _620
		Parm<f32> m_p037;                // _648
		Parm<int> m_p042;                // _670
		Parm<f32> _698;                  // _698
		Parm<f32> m_p040;                // _6C0
		Parm<f32> m_p021;                // _6E8
		Parm<f32> m_p041;                // _710
		Parm<f32> m_p022;                // _738
		Parm<f32> m_p023;                // _760
		Parm<f32> m_p031;                // _788
		Parm<f32> m_p032;                // _7B0
		Parm<f32> m_p033;                // _7D8
		Parm<f32> m_p034;                // _800
		Parm<f32> m_p035;                // _828
		Parm<f32> m_p036;                // _850
		Parm<f32> m_p048;                // _878
		Parm<f32> m_p049;                // _8A0, "time for piki to run out of numbness"
		Parm<f32> m_cStickNeutralThresh; // _8C8, p043
		Parm<f32> m_p044;                // _8F0
		Parm<f32> _918;                  // _918, also p048?
		Parm<f32> m_p045;                // _940
		Parm<f32> m_p046;                // _968
		Parm<f32> m_p047;                // _990
		Parm<f32> m_p050;                // _9B8
		Parm<f32> m_p051;                // _9E0
		Parm<f32> m_p052;                // _A08
		Parm<int> m_p055;                // _A30
		Parm<int> m_p057;                // _A58
		Parm<int> m_p058;                // _A80
		Parm<int> m_p059;                // _AA8
		Parm<int> m_p061;                // _AD0
		Parm<int> m_q002;                // _AF8
		Parm<int> m_q003;                // _B20
		Parm<int> m_q004;                // _B48
		Parm<int> m_q005;                // _B70
		Parm<f32> m_q006;                // _B98
		Parm<f32> m_q007;                // _BC0
		Parm<f32> m_q008;                // _BE8
		Parm<int> m_q009;                // _C10
		Parm<f32> m_q010;                // _C38
		                                 // _C60 = IParameters ptr
	};

	NaviParms(); // (weak)

	virtual void read(Stream&); // _08 (weak)

	// _00-_D8  = CreatureParms
	// _D8 		  = VTBL
	// _DC-_27C	= FakePikiParms
	Parms m_naviParms; // _27C
};

} // namespace Game

#endif
