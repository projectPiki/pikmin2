#include "ebi/title/TCoordMgr.h"
#include "JSystem/JKernel/JKRArchive.h"

namespace ebi {
namespace title {

/**
 * @note Address: 0x803E396C
 * @note Size: 0x1A4
 */
TCoordMgr::TCoordMgr()
    : CNode("TCoordMgr")
{
	for (int i = 0; i < TITLE_PIKI_COLOR_COUNT; i++) {
		mPikiCounts[i] = 0;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x90
 */
void TCoordMgr::getDestPos(s32)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x803E3B10
 * @note Size: 0x118
 */
void TCoordMgr::copyCoordinate(Vector2f* coord)
{
	for (int i = 0; i < mPikiCounts[1]; i++) {
		coord[100 + i].x = mCoords[100 + i].x;
		coord[100 + i].y = mCoords[100 + i].y;
	}

	for (int i = 0; i < mPikiCounts[2]; i++) {
		coord[200 + i].x = mCoords[200 + i].x;
		coord[200 + i].y = mCoords[200 + i].y;
	}

	for (int i = 0; i < mPikiCounts[0]; i++) {
		coord[i].x = mCoords[i].x;
		coord[i].y = mCoords[i].y;
	}

	for (int i = 0; i < mPikiCounts[3]; i++) {
		coord[300 + i].x = mCoords[300 + i].x;
		coord[300 + i].y = mCoords[300 + i].y;
	}

	for (int i = 0; i < mPikiCounts[4]; i++) {
		coord[400 + i].x = mCoords[400 + i].x;
		coord[400 + i].y = mCoords[400 + i].y;
	}
}

/**
 * @note Address: 0x803E3C28
 * @note Size: 0x7C
 */
void TCoordMgr::readCoordinate(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);

	if (file) {
		RamStream stream(file, -1);
		stream.setMode(STREAM_MODE_TEXT, 1);

		readCoordinate(stream);
	}
}

/**
 * @note Address: 0x803E3CA4
 * @note Size: 0x144
 */
void TCoordMgr::readCoordinate(Stream& stream)
{
	for (int i = 0; i < TITLE_PIKI_COLOR_COUNT; i++) {
		mPikiCounts[i] = stream.readInt();
		int offs       = 0;
		switch (i) {
		case 1:
			offs = TITLE_PIKI_TYPE_MAX;
			if (mPikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				mPikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 0:
			offs = 0;
			if (mPikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				mPikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 2:
			offs = 2 * TITLE_PIKI_TYPE_MAX;
			if (mPikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				mPikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 3:
			offs = 3 * TITLE_PIKI_TYPE_MAX;
			if (mPikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				mPikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		case 4:
			offs = 4 * TITLE_PIKI_TYPE_MAX;
			if (mPikiCounts[i] > TITLE_PIKI_TYPE_MAX) {
				mPikiCounts[i] = TITLE_PIKI_TYPE_MAX;
			}
			break;
		}

		for (int j = 0; j < mPikiCounts[i]; j++) {
			mCoords[j + offs].x = stream.readFloat();
			mCoords[j + offs].y = stream.readFloat();
		}
	}
}
} // namespace title
} // namespace ebi
