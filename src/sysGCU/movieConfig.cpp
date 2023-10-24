#include "Game/MoviePlayer.h"
#include "Game/gameStages.h"
#include "JSystem/JKernel/JKRDvdRipper.h"
#include "nans.h"

namespace Game {
MovieList* movieList;

static const int padding[]    = { 0, 0, 0 };
static const char className[] = "movieConfig";

/*
 * --INFO--
 * Address:	........
 * Size:	000110
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

/*
 * --INFO--
 * Address:	804318A0
 * Size:	000004
 */
void MovieConfig::dump() { }

/*
 * --INFO--
 * Address:	804318A4
 * Size:	00001C
 */
bool MovieConfig::isSkippable()
{
	if (mFlags & 2) {
		return false;
	}
	return mFlags & 1;
}

/*
 * --INFO--
 * Address:	804318C0
 * Size:	00000C
 */
bool MovieConfig::isNeverSkippable() { return mFlags >> 1 & 1; }

/*
 * --INFO--
 * Address:	804318CC
 * Size:	000054
 */
bool MovieConfig::is(char* name) { return strncmp(mMovieNameBuffer2, name, strlen(name)) == 0; }

/*
 * --INFO--
 * Address:	80431920
 * Size:	0002D4
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

/*
 * --INFO--
 * Address:	80431BF4
 * Size:	000038
 */
void MovieList::construct() { movieList = new MovieList; }

/*
 * --INFO--
 * Address:	80431C2C
 * Size:	0001BC
 */
MovieList::MovieList()
{
	mName           = "MovieList";
	mConfig.mChild  = nullptr;
	mConfig.mParent = nullptr;
	mConfig.mPrev   = nullptr;
	mConfig.mNext   = nullptr;

	void* file = JKRDvdRipper::loadToMainRAM("user/Mukki/movie/demos.txt", nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
	                                         nullptr, nullptr);
	if (file) {
		RamStream stream(file, -1);
		stream.mMode = STREAM_MODE_TEXT;
		if (stream.mMode == STREAM_MODE_TEXT) {
			stream.mTabCount = 0;
		}
		read(stream);
		delete[] file;
	}
}

/*
 * --INFO--
 * Address:	80431E80
 * Size:	0000B0
 */
MovieConfig* MovieList::findConfig(char* movieName, char* mapName)
{
	int movielen = strlen(movieName);
	int maplen   = 0;
	if (mapName) {
		maplen = strlen(mapName);
	}

	FOREACH_NODE(MovieConfig, mConfig.mChild, cNode)
	{
		if (!strncmp(movieName, cNode->mMovieNameBuffer2, movielen)) {
			if (mapName == nullptr || !strncmp(mapName, cNode->mMapName, maplen)) {
				return cNode;
			}
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 * this is just here to get the rodata to line up.
 */
void MovieList::getConfig(int i) { P2ASSERTLINE(100, i > 0); }

/*
 * --INFO--
 * Address:	80431F30
 * Size:	000164
 */
void MovieList::read(Stream& data)
{
	int nodes = data.readInt();

	mConfig.mChild  = nullptr;
	mConfig.mParent = nullptr;
	mConfig.mPrev   = nullptr;
	mConfig.mNext   = nullptr;

	for (int i = 0; i < nodes; i++) {
		MovieConfig* config = new MovieConfig;
		config->read(data);
		mConfig.add(config);
	}
}
} // namespace Game
