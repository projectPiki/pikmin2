#ifndef _PSSYSTEM_WAVESCENE_H
#define _PSSYSTEM_WAVESCENE_H

/*
    __vt__Q28PSSystem9WaveScene:
    .4byte 0
    .4byte 0
    .4byte __dt__Q28PSSystem9WaveSceneFv
*/

namespace PSSystem {
struct WaveScene {
	virtual ~WaveScene(); // _08 (inline)

	void load(unsigned short, unsigned short, PSSystem::WaveScene::AreaArg, PSSystem::TaskChecker*);
};
} // namespace PSSystem

#endif
