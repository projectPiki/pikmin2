#include "Game/PelletBirthBuffer.h"

namespace Game {

int PelletBirthBuffer::sNum;
PelletInitArg PelletBirthBuffer::sArgs[MAX_PELLET_COUNT];

/*
 * --INFO--
 * Address:	8023D41C
 * Size:	00000C
 */
void PelletBirthBuffer::clear(void) { PelletBirthBuffer::sNum = 0; }

/*
 * --INFO--
 * Address:	8023D428
 * Size:	0000F0
 */
void PelletBirthBuffer::entry(Game::PelletInitArg& initArg)
{
	if (!Pellet::sFromTekiEnable) {
		return;
	}

	if (initArg.m_pelletType != PELTYPE_TREASURE && initArg.m_pelletType != PELTYPE_UPGRADE) {
		return;
	}

	if (PelletBirthBuffer::sNum < MAX_PELLET_COUNT) {
		PelletBirthBuffer::sArgs[PelletBirthBuffer::sNum++] = initArg;
	} else {
		JUT_PANICLINE(31, "too many birthbuffer\n");
	}
}

/*
 * --INFO--
 * Address:	8023D518
 * Size:	0000A0
 */
void PelletBirthBuffer::birthAll(void)
{
	if (!Pellet::sFromTekiEnable) {
		return;
	}

	for (int i = 0; i < PelletBirthBuffer::sNum; i++) {
		Pellet* newPel = pelletMgr->birth(&PelletBirthBuffer::sArgs[i]);
		if (newPel) {
			newPel->kill(nullptr);
			newPel->m_mgr->setFromTeki(newPel);
		}
	}

	PelletBirthBuffer::sNum = 0;
}

} // namespace Game
