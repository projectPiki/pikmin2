#include "Game/PelletBirthBuffer.h"

namespace Game {

int PelletBirthBuffer::sNum;
PelletInitArg PelletBirthBuffer::sArgs[MAX_PELLET_COUNT];

/**
 * @note Address: 0x8023D41C
 * @note Size: 0xC
 */
void PelletBirthBuffer::clear() { PelletBirthBuffer::sNum = 0; }

/**
 * @note Address: 0x8023D428
 * @note Size: 0xF0
 */
void PelletBirthBuffer::entry(Game::PelletInitArg& initArg)
{
	if (!Pellet::sFromTekiEnable) {
		return;
	}

	if (initArg.mPelletType != PelletType::Treasure && initArg.mPelletType != PelletType::Upgrade) {
		return;
	}

	if (PelletBirthBuffer::sNum < MAX_PELLET_COUNT) {
		PelletBirthBuffer::sArgs[PelletBirthBuffer::sNum++] = initArg;
	} else {
		JUT_PANICLINE(31, "too many birthbuffer\n");
	}
}

/**
 * @note Address: 0x8023D518
 * @note Size: 0xA0
 */
void PelletBirthBuffer::birthAll()
{
	if (!Pellet::sFromTekiEnable) {
		return;
	}

	for (int i = 0; i < PelletBirthBuffer::sNum; i++) {
		Pellet* newPel = pelletMgr->birth(&PelletBirthBuffer::sArgs[i]);
		if (newPel) {
			newPel->kill(nullptr);
			newPel->mMgr->setFromTeki(newPel);
		}
	}

	PelletBirthBuffer::sNum = 0;
}

} // namespace Game
