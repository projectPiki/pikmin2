#ifndef _PSSYSTEM_WAVESCENE_WAVEAREA_H
#define _PSSYSTEM_WAVESCENE_WAVEAREA_H

/*
    __vt__Q38PSSystem9WaveScene8WaveArea:
    .4byte 0
    .4byte 0
    .4byte __dt__Q38PSSystem9WaveScene8WaveAreaFv
*/

namespace PSSystem {
namespace WaveScene {
struct WaveArea {
	virtual ~WaveArea(); // _08 (weak)

	WaveArea();
	void loadWave(unsigned short, unsigned short, PSSystem::TaskChecker*);
	void deleteWave();
	void waveLoadCallback(unsigned long);
};
} // namespace WaveScene
} // namespace PSSystem

#endif
