#ifndef _EFX_TPKEFFECTMGR_H
#define _EFX_TPKEFFECTMGR_H

/*
    __vt__Q23efx12TPkEffectMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q23efx12TPkEffectMgrFv
*/

namespace efx {
struct TPkEffectMgr {
	virtual ~TPkEffectMgr(); // _08

	void globalInstance();
	void deleteInstance();
	void Instance();
	TPkEffectMgr();
	void startMgr();
	void exitMgr();
	void resetContextS();
	void createS_Dead(Vector3<float>&, long);
	void createS_Chinka(Vector3<float>&);
	void createS_Gedoku(Vector3<float>&);
	void createS_WaterOff(Vector3<float>&);
	void createS_Dive(Vector3<float>&);
	void createS_Chiru(Vector3<float>&);
	void createS_Inattack(Vector3<float>&);
	void createS_Walksmoke(Vector3<float>&);
	void createS_Dig(Vector3<float>&);
	void createS_ChiruRed(Vector3<float>&);
	void createS_Gate3Attack(Vector3<float>&);
	void createS_Walkwater(Vector3<float>&);
};
} // namespace efx

#endif
