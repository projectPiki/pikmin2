#ifndef _JSYSTEM_JPA_JPAEMITTER_H
#define _JSYSTEM_JPA_JPAEMITTER_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUtility.h"
#include "types.h"

struct JPABaseEmitter;
struct JPAEmitterWorkData;
struct JPAEmitterManager;
struct JPAEmitterCallBack;
struct JPAParticleCallBack;

struct JPABaseParticle {
	void init_p(JPAEmitterWorkData*);
	void init_c(JPAEmitterWorkData*, JPABaseParticle*);
	void calc_p(JPAEmitterWorkData*);
	void calc_c(JPAEmitterWorkData*);
	bool canCreateChild(JPAEmitterWorkData*);
	float getCalcCurrentPositionX(const JPABaseEmitter*) const;
	float getCalcCurrentPositionY(const JPABaseEmitter*) const;
	float getCalcCurrentPositionZ(const JPABaseEmitter*) const;

	// unused/inlined:
	float getWidth(const JPABaseEmitter*) const;
	float getHeight(const JPABaseEmitter*) const;

	JGeometry::TVec3f _00;        // _00
	JGeometry::TVec3f m_position; // _0C
	JGeometry::TVec3f _18;        // _18
	JGeometry::TVec3f _24;        // _24
	JGeometry::TVec3f _30;        // _30
	JGeometry::TVec3f _3C;        // _3C
	JGeometry::TVec3f _48;        // _48
	JGeometry::TVec3f _54;        // _54
	float _60;                    // _60
	float _64;                    // _64
	float _68;                    // _68
	float _6C;                    // _6C
	float _70;                    // _70
	float _74;                    // _74
	unknown _78;                  // _78
	uint _7C;                     // _7C
	u16 _80;                      // _80
	u16 _82;                      // _82
	float _84;                    // _84
	s16 _88;                      // _88
	s16 _8A;                      // _8A
	JUtility::TColor _8C;         // _8C
	JUtility::TColor _90;         // _90
	u8 _94;                       // _94
	u8 _95;                       // _95
	u8 _96;                       // _96
};

struct JPAParticleCallBack {
	virtual ~JPAParticleCallBack() = 0;                      // _00
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _04
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _08
};

// TODO: Fill stuff in.
struct JPABaseEmitter {
	JPABaseEmitter();
	~JPABaseEmitter();
	void init(JPAEmitterManager*, struct JPAResource*);
	JPABaseParticle* createParticle();
	JPABaseParticle* createChild(JPABaseParticle*);
	void deleteAllParticle();
	bool processTillStartFrame();
	bool processTermination();
	void calcEmitterGlobalPosition(JGeometry::TVec3f*) const;
	int getCurrentCreateNumber() const;

	// unused/inlined:
	void getEmitterAxisX(JGeometry::TVec3f*) const;
	void getEmitterAxisY(JGeometry::TVec3f*) const;
	void getEmitterAxisZ(JGeometry::TVec3f*) const;
	int getDrawCount() const;
	void loadTexture(unsigned char, _GXTexMapID);

	float _00;                // _00
	float _04;                // _04
	float _08;                // _08
	JGeometry::TVec3f _0C;    // _0C
	JGeometry::TVec3f _18;    // _18
	s32 _24;                  // _24
	float _28;                // _28
	float _2C;                // _2C
	float _30;                // _30
	u8 _34[0xC];              // _34
	float _40;                // _40
	u8 _44[4];                // _44
	float _48;                // _48
	u16 _4C;                  // _4C
	u16 _4E;                  // _4E
	u16 _50;                  // _50
	s32 : 0;                  // reset alignment to _54
	u16 _54;                  // _54
	JSUPtrLink _58;           // _58
	Mtx _68;                  // _68
	JGeometry::TVec3f _98;    // _98
	JGeometry::TVec3f _A4;    // _A4
	float _B0;                // _B0
	float _B4;                // _B4
	u8 _B8;                   // _B8
	u8 _B9;                   // _B9
	u8 _BA;                   // _BA
	u8 _BB;                   // _BB
	JUtility::TColor m_color; // _BC
	s32 : 0;                  // reset alignment to _C0
	u8 _C0[4];                // _C0
	u32 _C4;                  // _C4
	unkptr _C8;               // _C8
	unkptr _CC;               // _CC
	// JPANode<JPABaseParticle>* _C8; // _C8
	// JPANode<JPABaseParticle>* _CC; // _CC
	s32 _D0;    // _D0
	unkptr _D4; // _D4
	// JPANode<JPABaseParticle>* _D4; // _D4
	u8 _D8[4];                               // _D8
	s32 _DC;                                 // _DC
	unkptr _E0;                              // _E0
	JPAEmitterManager* m_manager;            // _E4
	JPAResource* m_resource;                 // _E8
	JPAEmitterCallBack* m_emitterCallback;   // _EC
	JPAParticleCallBack* m_particleCallback; // _F0
	u32 _F4;                                 // _F4
	float _F8;                               // _F8
	float _FC;                               // _FC
	s32 _100;                                // _100
	s16 _104;                                // _104
	s16 _106;                                // _106
	JUtility::TColor _108;                   // _108
	JUtility::TColor _10C;                   // _10C
	u8 _110;                                 // _110
	u8 _111;                                 // _111
	u8 _112;                                 // _112
	u8 _113;                                 // _113
};

struct JPAEmitterCallBack {
	virtual ~JPAEmitterCallBack() = 0;          // _00
	virtual void execute(JPABaseEmitter*);      // _04
	virtual void executeAfter(JPABaseEmitter*); // _08
	virtual void draw(JPABaseEmitter*);         // _0C
	virtual void drawAfter(JPABaseEmitter*);    // _10
};

struct JPAEmitterWorkData {
	u8 _00[0x218];
};

/**
 * @size{0x30}
 */
struct JPAEmitterManager {
	JSUList<JPABaseEmitter>* _00; // _00
	JSUPtrList _04;               // _04
	unkptr _10;
	unkptr _14;
	// JPANode<JPABaseParticle>* _10; // _10
	// JPANode<JPABaseParticle>* _14; // _14
	int _18;                         // _18
	struct JPAResourceManager** _1C; // _1C
	JPAEmitterWorkData* _20;         // _20
	uint _24;                        // _24
	uint _28;                        // _28
	u8 _2C;                          // _2C
	u8 _2D;                          // _2D
};

#endif
