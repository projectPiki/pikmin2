#include "Game/MoviePlayer.h"
#include "Game/gameStages.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "nans.h"

namespace Game {
MovieList* movieList;

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "movieConfig";

/**
 * @note Address: N/A
 * @note Size: 0x110
 */
MovieConfig::MovieConfig()
{
	mPositionFlag        = 2;
	mMovieNameBuffer1[0] = 0;
	mMovieNameBuffer2[0] = 0;
	mOrigin              = Vector3f(0.0f);
	mAngle               = 0.0f;
	mDrawFlags.clear();
	mFlags = 1;
	mDrawFlags.clear();
	mDrawType    = 3;
	mName        = mMovieNameBuffer1;
	mCourseIndex = -1;
	mMapName     = "nomap";
	mId.setID('v0.5');
	mMsgPauseNum = 0;
}

/**
 * @note Address: 0x804318A0
 * @note Size: 0x4
 */
void MovieConfig::dump() { }

/**
 * @note Address: 0x804318A4
 * @note Size: 0x1C
 */
bool MovieConfig::isSkippable()
{
	if (mFlags & 2) {
		return false;
	}

	return mFlags & 1;
}

/**
 * @note Address: 0x804318C0
 * @note Size: 0xC
 */
bool MovieConfig::isNeverSkippable() { return mFlags >> 1 & 1; }

/**
 * @note Address: 0x804318CC
 * @note Size: 0x54
 */
bool MovieConfig::is(char* name) { return IS_SAME_STRING_N(mMovieNameBuffer2, name, strlen(name)); }

/**
 * @note Address: 0x80431920
 * @note Size: 0x2D4
 */
void MovieConfig::read(Stream& data)
{
	ID32 id;
	id.read(data);

	if (id.getID() >= 'v0.2') {
		mParam.read(data);
		for (int i = 0; i < 32; i++) {
			mMovieNameBuffer1[i] = mParam.mDemoName.mData[i];
			mMovieNameBuffer2[i] = mParam.mFolderName.mData[i];
		}
	} else {
		for (int i = 0; i < 32; i++) {
			mMovieNameBuffer1[i] = data.readByte();
		}
		for (int i = 0; i < 32; i++) {
			mMovieNameBuffer2[i] = data.readByte();
		}
	}

	mPositionFlag = data.readByte();
	mOrigin.read(data);
	mAngle = data.readFloat();
	mFlags = data.readShort();

	if (id.getID() > 'v0.0') {
		mDrawFlags.clear();
		if (id.getID() < 'v0.4') {
			data.readShort();
			data.readShort();
			mDrawFlags.clear();
			if (id.getID() >= 'v0.3') {
				mDrawType = data.readShort();
			}
		} else {
			setDrawFlag((u16)data.readShort());
			mDrawType = data.readShort();
		}
	}

	if (id.getID() >= 'v0.5') {
		mMsgPauseNum = data.readInt();
	}

	mMapName = data.readString(nullptr, 0);

	if (!strcmp(mMapName, "nomap")) {
		mCourseIndex = -1;
	} else {
		mCourseIndex = stageList->getCourseInfo(mMapName)->mCourseIndex;
	}
}

/**
 * @note Address: 0x80431BF4
 * @note Size: 0x38
 */
void MovieList::construct() { movieList = new MovieList; }

/**
 * @note Address: 0x80431C2C
 * @note Size: 0x1BC
 */
MovieList::MovieList()
{
	mName = "MovieList";
	mConfig.clearRelations();

	loadFromFile(this, "user/Mukki/movie/demos.txt");
}

/**
 * @note Address: 0x80431E80
 * @note Size: 0xB0
 */
MovieConfig* MovieList::findConfig(char* movieName, char* mapName)
{
	int nameLength = strlen(movieName);
	int mapLength  = 0;
	if (mapName) {
		mapLength = strlen(mapName);
	}

	FOREACH_NODE(MovieConfig, mConfig.mChild, cNode)
	{
		// If the movie name matches
		if (IS_SAME_STRING_N(movieName, cNode->mMovieNameBuffer2, nameLength)) {
			// If the map name matches or there is no map name
			if (mapName == nullptr || IS_SAME_STRING_N(mapName, cNode->mMapName, mapLength)) {
				return cNode;
			}
		}
	}

	return nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0x94
 * this is just here to get the rodata to line up.
 */
void MovieList::getConfig(int i) { P2ASSERTLINE(100, i > 0); }

/**
 * @note Address: 0x80431F30
 * @note Size: 0x164
 */
void MovieList::read(Stream& data)
{
	int nodes = data.readInt();

	mConfig.clearRelations();

	for (int i = 0; i < nodes; i++) {
		MovieConfig* config = new MovieConfig;
		config->read(data);
		mConfig.add(config);
	}
}
} // namespace Game
