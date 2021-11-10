#ifndef _GAME_CREATURE_H
#define _GAME_CREATURE_H

#include "types.h"
#include "Vector3.h"

struct Graphics;
struct Matrixf;
struct CollPart;

namespace Sys {
struct Triangle;
struct Sphere;
struct Cylinder;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
}

namespace Game {
struct AILODParm;
struct CellObject;
struct CollEvent;
struct WaterBox;
struct ShadowParam;
struct LifeGaugeParam;
struct CreatureInitArg;
struct CreatureKillArg;
struct MoviePlayer;
struct Interaction;
struct PlatEvent;

struct Creature {
	Creature();

	void applyAirDrag(float, float, float);
	void applyImpulse(Vector3f&, Vector3f&);
	void bounceCallback(Sys::Triangle*);
	void calcSphereDistance(Game::Creature*);
	void calcStickSlotGlobal(short, Vector3f&);
	virtual void checkCollision(Game::CellObject*);
	void checkHell(struct CheckHellArg&);
	void checkWater(Game::WaterBox*, Sys::Sphere&);
	void clearCapture();
	void clearStick();
	void collisionCallback(Game::CollEvent&);
	virtual void collisionUpdatable();
	void constructor();
	void doAnimation();
	void doDirectDraw(Graphics&);
	void doEntry();
	void doLoad(Stream&);
	void doSave(Stream&);
	void doSetView(int);
	void doSimulation(float);
	void doViewCalc();
	void drawLODInfo(Graphics&, Vector3f&);
	void endCapture();
	void endPick(bool);
	void endStick();
	void getAngularEffect(Vector3f&, Vector3f&);
	void getBodyRadius();
	void getCellPikiCount();
	void getCellRadius();
	void getCreatureID();
	void getCreatureName();
	void getFlockMgr();
	void getFootmarks();
	void getFreeStickSlot();
	void getGoalPos();
	void getJAIObject();
	void getLifeGaugeParam(Game::LifeGaugeParam&);
	void getLODCylinder(Sys::Cylinder&);
	void getLODSphere(Sys::Sphere&);
	void getMabiki();
	void getNearFreeStickSlot(Vector3f&);
	void getObjType();
	void getPSCreature();
	void getRandomFreeStickSlot();
	void getShadowParam(Game::ShadowParam&);
	void getSound_AILOD();
	void getSound_CurrAnimFrame();
	void getSound_CurrAnimSpeed();
	void getSound_PosPtr();
	void getSuckPos();
	void getTypeName();
	void getYVector(Vector3f&);
	void ignoreAtari(Game::Creature*);
	void init(Game::CreatureInitArg*);
	void initPosition(Vector3f&);
	void inWater();
	void inWaterCallback(Game::WaterBox*);
	virtual bool isAlive();
	virtual bool isAtari();
	virtual bool isBuried();
	virtual bool isCollisionFlick();
	virtual bool isDebugCollision();
	virtual bool isFlying();
	virtual bool isLivingThing();
	virtual bool isMovieActor();
	virtual bool isMovieExtra();
	virtual bool isMovieMotion();
	virtual bool isNavi();
	virtual bool isPellet();
	virtual bool isPiki();
	virtual bool isSlotFree(short);
	virtual bool isStickTo();
	virtual bool isStickToMouth();
	virtual bool isSuckArriveWait();
	virtual bool isSuckReady();
	virtual bool isTeki();
	virtual bool isUnderground();
	void kill(Game::CreatureKillArg*);
	void load(Stream&, unsigned char);
	void movie_begin(bool);
	void movie_end(bool);
	void movieGotoPosition(Vector3f&);
	void movieSetAnimationLastFrame();
	void movieSetFaceDir(float);
	void movieSetTranslation(Vector3f&, float);
	void movieStartAnimation(unsigned long);
	void movieStartDemoAnimation(SysShape::AnimInfo*);
	void movieUserCommand(unsigned long, Game::MoviePlayer*);
	void needShadow();
	void on_movie_begin(bool);
	void on_movie_end(bool);
	void onEndCapture();
	void onInit(Game::CreatureInitArg*);
	void onInitPosition(Vector3f&);
	void onInitPost(Game::CreatureInitArg*);
	void onKill(Game::CreatureKillArg*);
	void onSetPositionPost(Vector3f&);
	void onSlotStickEnd(Game::Creature*, short);
	void onSlotStickStart(Game::Creature*, short);
	void onStartCapture();
	void onStickEnd(Game::Creature*);
	void onStickEndSelf(Game::Creature*);
	void onStickStart(Game::Creature*);
	void onStickStartSelf(Game::Creature*);
	void onUpdateCapture(struct Matrixf&);
	void outWaterCallback();
	void platCallback(Game::PlatEvent&);
	void releaseAllStickers();
	void resolveOneColl(CollPart*, CollPart*, Vector3f&);
	void save(Stream&, unsigned char);
	void setAlive(bool);
	void setAtari(bool);
	void setCollisionFlick(bool);
	void setDebugCollision(bool);
	void setMovieMotion(bool);
	void setPosition(Vector3f&, bool);
	void sound_culling();
	void startCapture(Matrixf*);
	void startPick();
	void startStick(Game::Creature*, CollPart*);
	void startStick(Game::Creature*, short);
	void startStickMouth(Game::Creature*, CollPart*);
	void stimulate(Game::Interaction&);
	void updateCapture(Matrixf&);
	void updateCell();
	void updateLOD(Game::AILODParm&);
	void updateStick(Vector3f&);
};
} // namespace Game

#endif
