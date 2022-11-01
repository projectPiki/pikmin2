#ifndef _EBI_TITLE_TTITLELIGHTMGR_H
#define _EBI_TITLE_TTITLELIGHTMGR_H

#include "types.h"
#include "Parameters.h"
#include "BaseParm.h"
#include "Light.h"

namespace ebi {
namespace title {
struct TTitleLightSetting {
	struct TAmbParms : public Parameters {
		inline TAmbParms();

		Parm<int> m_red;   // _0C
		Parm<int> m_green; // _34
		Parm<int> m_blue;  // _5C
		Parm<int> m_alpha; // _84
	};

	struct TMainParms : public Parameters {
		TMainParms();

		Parm<int> m_tl04; // _0C, _BC
		Parm<int> m_tl05; // _34, _E4
		Parm<int> m_tl06; // _5C, _10C
		Parm<int> m_tl07; // _84, _134
		Parm<f32> m_tl50; // _AC, _15C
		Parm<f32> m_tl51; // _D4, _184
		Parm<f32> m_tl52; // _FC, _1AC
		Parm<f32> m_tl53; // _124, _1D4
		Parm<f32> m_tl54; // _14C, _1FC
		Parm<f32> m_tl55; // _174, _224
		Parm<f32> m_tl56; // _19C, _24C
		Parm<f32> m_tl57; // _1C4, _274
		Parm<f32> m_tl58; // _1EC, _29C
	};

	struct TSpecParms : public Parameters {
		TSpecParms();

		Parm<int> m_sp04; // _0C, _2D4
		Parm<int> m_sp05; // _34, _2FC
		Parm<int> m_sp06; // _5C, _324
		Parm<int> m_sp07; // _84, _34C
		Parm<f32> m_sp53; // _AC, _374
		Parm<f32> m_sp54; // _D4, _39C
		Parm<f32> m_sp55; // _FC, _3C4
		Parm<f32> m_sp56; // _124, _3EC
	};

	TAmbParms m_ambParms;   // _00
	TMainParms m_mainParms; // _B0
	TSpecParms m_specParms; // _2C8
};

struct TTitleLightMgr : public LightMgr {
	TTitleLightMgr();

	virtual ~TTitleLightMgr(); // _08 (weak)
	virtual void update();     // _10

	void loadSettingFile(JKRArchive*, char*);
	void setParam_();
	void setCameraMtx(Mtx);

	// _00     = VTBL
	// _00-_50 = LightMgr
	LightObj _50;                 // _50
	LightObj _A8;                 // _A8
	TTitleLightSetting m_setting; // _100
};
} // namespace title
} // namespace ebi

#endif
