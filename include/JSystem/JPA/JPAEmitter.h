#ifndef _JSYSTEM_JPA_JPAEMITTER_H
#define _JSYSTEM_JPA_JPAEMITTER_H

#include "Dolphin/gx.h"
#include "Dolphin/mtx.h"
#include "JSystem/JGeometry.h"
#include "JSystem/JMath.h"
#include "JSystem/JPA/JPANode.h"
#include "JSystem/JPA/JPAResource.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JUT/TColor.h"
#include "types.h"

struct JPABaseEmitter;
struct JPAEmitterWorkData;
struct JPAEmitterManager;
struct JPAEmitterCallBack;
struct JPAParticleCallBack;
struct JPADrawInfo;

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
	~JPABaseParticle();
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
	s16 _80;                      // _80
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
	virtual ~JPAParticleCallBack() = 0;                      // _08
	virtual void execute(JPABaseEmitter*, JPABaseParticle*); // _0C (weak)
	virtual void draw(JPABaseEmitter*, JPABaseParticle*);    // _10 (weak)
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

	/**
	 * @fabricated
	 */
	void setFlag(u32 flag) { _F4 = _F4 | flag; }
	/**
	 * @fabricated
	 */
	bool isFlag(u32 flag) { return _F4 & flag; }
	bool is100() { return _F4 & 0x100; }

	float _00;                  // _00
	float _04;                  // _04
	float _08;                  // _08
	JGeometry::TVec3f _0C;      // _0C
	JGeometry::TVec3f _18;      // _18
	s32 _24;                    // _24
	float _28;                  // _28
	float _2C;                  // _2C
	float _30;                  // _30
	float _34;                  // _34
	u8 _38[0x8];                // _38
	float _40;                  // _40
	u8 _44[4];                  // _44
	float _48;                  // _48
	s16 _4C;                    // _4C
	s16 _4E;                    // _4E
	s16 _50;                    // _50
	u16 _52;                    // _52
	u16 _54;                    // _54
	JSUPtrLink _58;             // _58
	Mtx _68;                    // _68
	JGeometry::TVec3f _98;      // _98
	JGeometry::TVec3f _A4;      // _A4
	float _B0;                  // _B0
	float _B4;                  // _B4
	u8 _B8;                     // _B8
	u8 _B9;                     // _B9
	u8 _BA;                     // _BA
	u8 _BB;                     // _BB
	JUtility::TColor m_color;   // _BC
	s32 : 0;                    // reset alignment to _C0
	u8 _C0[4];                  // _C0
	JMath::TRandom_fast_ m_rng; // _C4
	void* _C8;                  // _C8
	void* _CC;                  // _CC
	// JPANode<JPABaseParticle>* _C8; // _C8
	// JPANode<JPABaseParticle>* _CC; // _CC
	s32 _D0;   // _D0
	void* _D4; // _D4
	// JPANode<JPABaseParticle>* _D4; // _D4
	u8 _D8[4];                               // _D8
	s32 _DC;                                 // _DC
	void* _E0;                               // _E0
	JPAEmitterManager* m_manager;            // _E4
	JPAResource* m_resource;                 // _E8
	JPAEmitterCallBack* m_emitterCallback;   // _EC
	JPAParticleCallBack* m_particleCallback; // _F0
	u32 _F4;                                 // _F4
	float _F8;                               // _F8
	float _FC;                               // _FC
	u32 _100;                                // _100
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
	virtual ~JPAEmitterCallBack() = 0;          // _08
	virtual void execute(JPABaseEmitter*);      // _0C (weak)
	virtual void executeAfter(JPABaseEmitter*); // _10 (weak)
	virtual void draw(JPABaseEmitter*);         // _14 (weak)
	virtual void drawAfter(JPABaseEmitter*);    // _18 (weak)

	// TODO: How is this not virtual???
	// ~JPAEmitterCallBack();
};

/**
 * @size{0x218}
 */
struct JPAEmitterWorkData {
	JPABaseEmitter* m_emitter;         // _00
	JPAResource* m_resource;           // _04
	JPAResourceManager* m_resourceMgr; // _08
	u32 _0C;                           // _0C
	JGeometry::TVec3f _10;             // _10
	JGeometry::TVec3f _1C;             // _1C
	JGeometry::TVec3f _28;             // _28
	float _34;                         // _34
	float _38;                         // _38
	float _3C;                         // _3C
	int m_createNumber;                // _40;
	u32 _44;                           // _44
	Mtx _48;                           // _48
	Mtx _78;                           // _78
	Mtx _A8;                           // _A8
	Mtx _D8;                           // _D8
	JGeometry::TVec3f _108;            // _108
	float _114;                        // _114
	float _118;                        // _118
	float _11C;                        // _11C
	JGeometry::TVec3f _120;            // _120
	JGeometry::TVec3f _12C;            // _120
	JGeometry::TVec3f _138;            // _138
	float _144;                        // _144
	float _148;                        // _148
	float _14C;                        // _14C
	float _150;                        // _150
	Mtx _154;                          // _154
	Mtx _184;                          // _184
	Mtx _1B4;                          // _1B4
	JPANode<JPABaseParticle>* _1E4;    // _1E4
	JPANode<JPABaseParticle>* _1E8;    // _1E8
	int _1EC;                          // _1EC
	int _1F0;                          // _1F0
	int _1F4;                          // _1F4
	int _1F8;                          // _1F8
	float _1FC;                        // _1FC
	int _200;                          // _200
	int _204;                          // _204
	int _208;                          // _208
	int _20C;                          // _20C
	int _210;                          // _210
	short _214;                        // _214
	u8 _216;                           // _216
};

/**
 * @size{0x30}
 */
struct JPAEmitterManager {
	JPAEmitterManager(u32, u32, JKRHeap*, u8, u8);

	void createSimpleEmitterID(const JGeometry::TVec3f&, u16, u8, u8, JPAEmitterCallBack*, JPAParticleCallBack*);
	void calc();
	void draw(const JPADrawInfo*, u8);
	void forceDeleteAllEmitter();
	void forceDeleteGroupEmitter(u8);
	void forceDeleteEmitter(JPABaseEmitter*);
	static void entryResourceManager(JPAResourceManager*, u8);
	void clearResourceManager(u8);
	void calcYBBCam();

	// unused/inlined:
	void createSimpleEmitter(const JGeometry::TVec3f&, u16, JPAEmitterCallBack*, JPAParticleCallBack*);
	void calc(u8);
	void draw(float (*)[4], u8);
	void draw(const JPADrawInfo*);
	void draw(float (*)[4]);

	JSUList<JPABaseEmitter>* _00; // _00
	JSUPtrList _04;               // _04
	void* _10;
	void* _14;
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
