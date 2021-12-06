#ifndef _OG_NEWSCREEN_OGUTIL_H
#define _OG_NEWSCREEN_OGUTIL_H

struct Graphics;

namespace og {
namespace newScreen {
	bool checkMovieActive();
	void drawObjName(Graphics&, char*);
	void getLanguageDir(char*&);
	void makeLanguageResName(char*, char const*);
} // namespace newScreen
} // namespace og

#endif
