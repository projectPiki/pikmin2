#ifndef _GAME_MOVIEPLAYER_H
#define _GAME_MOVIEPLAYER_H

/*
    __vt__Q24Game11MoviePlayer:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game11MoviePlayerFv
*/

namespace Game {
struct MoviePlayer {
	virtual ~MoviePlayer(); // _08 (weak)

	MoviePlayer();
	void reset();
	void getActiveOrima();
	void getActiveGameCamera();
	void allocMovieHeap(unsigned long);
	void play(Game::MoviePlayArg&);
	void play(Game::MovieConfig*, Game::MoviePlayArg&, bool);
	void findConfig(char*, char*);
	void allocContexts();
	void clearContexts();
	void clearSuspendedDemo();
	void getNewContext();
	void setContext(Game::MovieContext*, Game::MovieConfig*, Game::MoviePlayArg&);
	void loadResource();
	void parse(bool);
	void update(Controller*, Controller*);
	void draw(Graphics&);
	void start(Camera*);
	void stop();
	void setCamera(Camera*);
	void unsuspend(long, bool);
	void resetFrame();
	void setTransform(Vector3<float>&, float);
	void isPlaying(char*);
	void drawLoading(Graphics&);
	void skip();
	void setPauseAndDraw(Game::MovieConfig*);
	void clearPauseAndDraw();
};
} // namespace Game

#endif
