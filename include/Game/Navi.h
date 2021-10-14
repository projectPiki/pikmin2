#ifndef _GAME_NAVI_H
#define _GAME_NAVI_H

#include "types.h"
#include "Vector3.h"

namespace Sys {
struct Triangle;
struct Sphere;
} // namespace Sys

namespace SysShape {
struct AnimInfo;
struct KeyEvent;
} // namespace SysShape

namespace Game {
struct NaviNukuAdjustStateArg;
struct CellObject;
struct Creature;
struct CollEvent;
struct ShadowParam;
struct WaterBox;
struct MoviePlayer;
struct CreatureInitArg;
struct CreatureKillArg;
struct PlatEvent;
struct Interaction;
struct Piki;
struct StateArg;

struct ItemPikihead {
	struct Item;
};

struct Navi {
	Navi();

	void addDamage(float, bool);
	void applyDopes(int, Vector3f&);
	void applyDopeSmoke(Game::CellObject*);
	void bounceCallback(Sys::Triangle*);
	void callPikis();
	void checkBigFountain();
	void checkCave();
	void checkDemoNaviAndPiki(Sys::Sphere&);
	void checkHole();
	void checkOnyon();
	void clearKaisanDisable();
	void clearThrowDisable();
	void collisionCallback(Game::CollEvent&);
	void commandOn();
	void control();
	void demoCheck();
	void demowaitAllPikis();
	void disableController();
	void do_updateLookCreature();
	void doAnimation();
	void doDirectDraw(struct Graphics&);
	void doEntry();
	void doSetView(int);
	void doSimulation(float);
	void doViewCalc();
	void enterAllPikis();
	void findNextThrowPiki();
	void formationable();
	void fountainonAllPikis(Vector3f&);
	void getCreatureID();
	void getCreatureName();
	void getDopeCount(int);
	void getDownfloorMass();
	void getJAIObject();
	void getLifeRatio();
	void getLODSphere(Sys::Sphere&);
	void getMapCollisionRadius();
	void getOlimarData();
	void getPosition();
	void getPSCreature();
	void getShadowParam(Game::ShadowParam&);
	void getStateID();
	void hasDope(int);
	void holeinAllPikis(Vector3f&);
	void ignoreAtari(Game::Creature*);
	void incDopeCount(int);
	void invincible();
	void inWaterCallback(Game::WaterBox*);
	void isCStickNetural();
	void isWalking();
	void makeCStick(bool);
	void makeVelocity();
	void movieGotoPosition(Vector3f&);
	void movieSetFaceDir(float);
	void movieSetTranslation(Vector3f&, float);
	void movieStartAnimation(unsigned long);
	void movieStartDemoAnimation(SysShape::AnimInfo*);
	void movieUserCommand(unsigned long, Game::MoviePlayer*);
	void ogGetNextThrowPiki();
	void on_movie_begin(bool);
	void on_movie_end(bool);
	void onInit(Game::CreatureInitArg*);
	void onKeyEvent(const SysShape::KeyEvent&);
	void onKill(Game::CreatureKillArg*);
	void onSetPosition(Vector3f&);
	void onStickEnd(Game::Creature*);
	void onStickStart(Game::Creature*);
	void outWaterCallback();
	void platCallback(Game::PlatEvent&);
	void procActionButton();
	void releasePikis();
	void reviseController(Vector3f&);
	void set_movie_draw(bool);
	void setDeadLaydown();
	void setInvincibleTimer(unsigned char);
	void setLifeMax();
	void setupNukuAdjustArg(Game::ItemPikihead::Item*,
	                        Game::NaviNukuAdjustStateArg&);
	void setVelocity(Vector3f&);
	void startDamage(float);
	void startThrowDisable();
	void stimulate(Game::Interaction&);
	void throwable();
	void throwPiki(Game::Piki*, Vector3f&);
	void transit(int, Game::StateArg*);
	void update();
	void updateCursor();
	void updateKaisanDisable();
	void updateThrowDisable();
	void useDope(int);
	void viewEntryShape(struct Matrixf&, Vector3f&);
	void viewGetBaseScale();
	void viewGetShape();
	void wallCallback(Vector3f&);

	u8 _00[0x320]; // _00
};
} // namespace Game

#endif
