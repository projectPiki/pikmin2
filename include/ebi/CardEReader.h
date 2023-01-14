#ifndef _EBI_CARDEREADER_H
#define _EBI_CARDEREADER_H

#include "types.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Dolphin/os.h"

#define EREADER_GAMES 3

namespace ebi {

void gCardEMgr_ThreadFunc(void*);
namespace CardEReader {

const char cInitialCode[4] = { 'P', 'S', 'A', 'J' };

void changeEndian(u32);
void roundup4b(u32);
void CardE_probeAGB();
bool CardE_uploadToGBA(long, u8*, u32);

struct TMgr : public JKRDisposer {
	enum enumErr { Error_0, Error_1, Error_2 };

	TMgr()
	{
		m_gameID  = 0;
		m_state   = 0;
		m_endStat = Error_0;
		m_gbaPort = -1;
	}

	virtual ~TMgr(); // _08

	void globalInstance();
	void loadResource();
	void init();
	void uploadToGBA(long);
	void probeAGB();
	void update();
	bool isFinish();
	void threadProc(void*);
	bool tryUploadToGBA_();
	void goEnd_(enumErr);
	void deleteInstance();

	// _00 VTBL
	void* m_gameDatas[EREADER_GAMES]; // _18
	u32 m_sizes[EREADER_GAMES];
	int m_gameID;
	int m_state;
	int _38;
	int m_endStat;
	int m_gbaPort;
	int m_counter;
	OSMutex m_mutex;
	OSThreadQueue m_cond;
};
} // namespace CardEReader
CardEReader::TMgr* gCardEMgr;
} // namespace ebi

#endif
