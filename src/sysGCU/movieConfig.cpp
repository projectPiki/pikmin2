#include "Game/MoviePlayer.h"
#include "Game/gameStages.h"
#include "JSystem/JKR/JKRDvdRipper.h"
#include "nans.h"

namespace Game {
MovieList* movieList;

static const int unusedMovieConfigArray[] = { 0, 0, 0 };
static const char movieConfigName[]       = "movieConfig";

/*
 * --INFO--
 * Address:	........
 * Size:	000110
 */
MovieConfig::MovieConfig()
{
	m_drawFlags.bytesView[0] = 0;
	m_drawFlags.bytesView[1] = 0;
	m_positionFlag           = 2;
	m_movieNameBuffer1[0]    = 0;
	m_movieNameBuffer2[0]    = 0;
	m_origin                 = Vector3f(0.0f);
	m_angle                  = 0.0f;
	m_drawFlags.bytesView[0] = 0;
	m_drawFlags.bytesView[1] = 0;
	m_flags                  = 1;
	m_drawFlags.bytesView[0] = 0;
	m_drawFlags.bytesView[1] = 0;
	m_drawType               = 3;
	m_name                   = m_movieNameBuffer1;
	m_courseIndex            = -1;
	m_mapName                = "nomap";
	m_id.setID('v0.5');
	m_msgPauseNum = 0;
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
	if (m_flags & 2) {
		return false;
	}
	return m_flags & 1;
}

/*
 * --INFO--
 * Address:	804318C0
 * Size:	00000C
 */
bool MovieConfig::isNeverSkippable() { return m_flags >> 1 & 1; }

/*
 * --INFO--
 * Address:	804318CC
 * Size:	000054
 */
bool MovieConfig::is(char* name) { return strncmp(m_movieNameBuffer2, name, strlen(name)) == 0; }

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
		m_param.read(data);
		for (int i = 0; i < 32; i++) {
			m_movieNameBuffer1[i] = m_param.m_demoName.m_data[i];
			m_movieNameBuffer2[i] = m_param.m_folderName.m_data[i];
		}
	} else {
		for (int i = 0; i < 32; i++) {
			m_movieNameBuffer1[i] = data.readByte();
		}
		for (int i = 0; i < 32; i++) {
			m_movieNameBuffer2[i] = data.readByte();
		}
	}

	m_positionFlag = data.readByte();
	m_origin.read(data);
	m_angle = data.readFloat();
	m_flags = data.readShort();

	if (id.getID() > 'v0.0') {
		m_drawFlags.bytesView[0] = 0;
		m_drawFlags.bytesView[1] = 0;
		if (id.getID() < 'v0.4') {
			data.readShort();
			data.readShort();
			m_drawFlags.bytesView[0] = 0;
			m_drawFlags.bytesView[1] = 0;
			if (id.getID() >= 'v0.3') {
				m_drawType = data.readShort();
			}
		} else {
			m_drawFlags.shortView |= (u16)data.readShort();
			m_drawType = data.readShort();
		}
	}

	if (id.getID() >= 'v0.5') {
		m_msgPauseNum = data.readInt();
	}

	m_mapName = data.readString(nullptr, 0);

	if (!strcmp(m_mapName, "nomap")) {
		m_courseIndex = -1;
	} else {
		m_courseIndex = stageList->getCourseInfo(m_mapName)->m_courseIndex;
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
	m_name            = "MovieList";
	m_config.m_child  = nullptr;
	m_config.m_parent = nullptr;
	m_config.m_prev   = nullptr;
	m_config.m_next   = nullptr;

	void* file = JKRDvdRipper::loadToMainRAM("user/Mukki/movie/demos.txt", nullptr, Switch_0, 0, nullptr, JKRDvdRipper::ALLOC_DIR_BOTTOM, 0,
	                                         nullptr, nullptr);
	if (file) {
		RamStream stream(file, -1);
		stream.m_mode = STREAM_MODE_TEXT;
		if (stream.m_mode == STREAM_MODE_TEXT) {
			stream.m_tabCount = 0;
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

	FOREACH_NODE(MovieConfig, m_config.m_child, cNode)
	{
		if (!strncmp(movieName, cNode->m_movieNameBuffer2, movielen)) {
			if (mapName == nullptr || !strncmp(mapName, cNode->m_mapName, maplen)) {
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

	m_config.m_child  = nullptr;
	m_config.m_parent = nullptr;
	m_config.m_prev   = nullptr;
	m_config.m_next   = nullptr;

	for (int i = 0; i < nodes; i++) {
		MovieConfig* config = new MovieConfig;
		config->read(data);
		m_config.add(config);
	}
}
} // namespace Game
