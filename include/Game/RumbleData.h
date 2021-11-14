#ifndef _GAME_RUMBLEDATA_H
#define _GAME_RUMBLEDATA_H

#include "types.h"
#include "stream.h"

namespace Game {
struct RumbleData {
	RumbleData();

	inline void read(Stream& stream)
	{
		m_count = stream.readInt();
		if (m_count <= 0) {
			return;
		}

		_04 = new f32[m_count];
		_08 = new f32[m_count];

		for (int j = 0; j < m_count; j++) {
			_04[j] = stream.readFloat();
		}

		for (int j = 0; j < m_count; j++) {
			_08[j] = stream.readFloat();
		}
	}

	s32 m_count; // _00
	f32* _04;    // _04
	f32* _08;    // _08
};

struct RumbleDataMgr {
	RumbleDataMgr();
	RumbleData* getRumbleData(int);
	void read(Stream& stream);

	s32 m_dataCnt;         // _00
	RumbleData* m_dataArr; // _04
};
} // namespace Game

#endif
