#ifndef _PSSYSTEM_WAVELOADER_H
#define _PSSYSTEM_WAVELOADER_H

namespace PSSystem {
struct WaveLoader {
	virtual void loadWave(TaskChecker*, WaveScene::AreaArg); // _00

	// _00 VTBL
};
} // namespace PSSystem

#endif
