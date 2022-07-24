#ifndef _PSGAME_BUILDER_EVNSE_PERSPECTIVE_H
#define _PSGAME_BUILDER_EVNSE_PERSPECTIVE_H

/*
    __vt__Q26PSGame25Builder_EvnSe_Perspective:
    .4byte 0
    .4byte 0
    .4byte __dt__Q26PSGame25Builder_EvnSe_PerspectiveFv
    .4byte onBuild__Q26PSGame25Builder_EvnSe_PerspectiveFPQ28PSSystem9EnvSeBase
    .4byte newSeObj__Q26PSGame25Builder_EvnSe_PerspectiveFUlf3Vec
*/

namespace PSGame {
struct Builder_EvnSe_Perspective {
	virtual ~Builder_EvnSe_Perspective();             // _08
	virtual void onBuild(PSSystem::EnvSeBase*);       // _0C (inline)
	virtual void newSeObj(unsigned long, float, Vec); // _10

	Builder_EvnSe_Perspective();
	void build(float, PSSystem::EnvSeMgr*);
};
} // namespace PSGame

#endif
