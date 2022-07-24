#ifndef _PSSYSTEM_WAVELOADER_H
#define _PSSYSTEM_WAVELOADER_H

/*
    __vt__Q28PSSystem10WaveLoader:
    .4byte 0
    .4byte 0
    .4byte loadWave__Q28PSSystem10WaveLoaderFPQ28PSSystem11TaskCheckerQ38PSSystem9WaveScene7AreaArg
*/

namespace PSSystem {
struct WaveLoader {
	virtual void loadWave(TaskChecker*, WaveScene::AreaArg); // _08
};
} // namespace PSSystem

#endif
