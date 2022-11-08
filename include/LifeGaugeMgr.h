#ifndef _LIFEGAUGEMGR_H
#define _LIFEGAUGEMGR_H

#include "Color4.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"

struct Graphics;
struct JUTTexture;

namespace Game {
struct Creature;
} // namespace Game

struct LifeGauge {
	LifeGauge();

	void draw(float, float, float);
	void drawOneTri(Vector3f*, Color4&);
	void init(u8);
	void update(float);

	static void initLifeGaugeDraw();

	float _00;  // _00
	Color4 _04; // _04 // might be TColor
	u8 _08;     // _08
	u8 _09;     // _09
};

/**
 * @size{0x48}
 */
struct LifeGaugeList : public JKRDisposer {
	virtual ~LifeGaugeList(); // _08 (weak)

	void draw(Graphics&);

	LifeGaugeList* _18;  // _18
	LifeGaugeList* _1C;  /// _1C
	Game::Creature* _20; // _20
	u8 _24[0x14];        // _24
	u8 _38;              // _38
	float _3C;           // _3C
	u8 _40[4];           // _ 40
	u8 _44;              // _44
	u8 _45;              // _45
};

/**
 * @todo This is so close to being an InfoMgr. Perhaps lessons can be learned from that, or the other way around?
 * @size{0x94}
 */
struct LifeGaugeMgr {
	LifeGaugeMgr();

	void createLifeGauge(Game::Creature*);
	void activeLifeGauge(Game::Creature*, float);
	void inactiveLifeGauge(Game::Creature*);
	void loadResource();
	void update();
	void draw(Graphics&);

	LifeGaugeList m_lists[2];
	JUTTexture* m_texture;
};

extern LifeGaugeMgr* lifeGaugeMgr;

#endif
