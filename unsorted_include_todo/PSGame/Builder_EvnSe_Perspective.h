#ifndef _PSGAME_BUILDER_EVNSE_PERSPECTIVE_H
#define _PSGAME_BUILDER_EVNSE_PERSPECTIVE_H

namespace PSGame {
struct Builder_EvnSe_Perspective {
	virtual ~Builder_EvnSe_Perspective();             // _00
	virtual void onBuild(PSSystem::EnvSeBase*);       // _04
	virtual void newSeObj(unsigned long, float, Vec); // _08

	// _00 VTBL
};
} // namespace PSGame

#endif
