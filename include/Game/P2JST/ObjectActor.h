#ifndef _GAME_P2JST_OBJECTACTOR_H
#define _GAME_P2JST_OBJECTACTOR_H

#include "Dolphin/mtx.h"
#include "Game/P2JST/ObjectBase.h"
#include "JStage/TActor.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/JKR/JKRArchive.h"
#include "JSystem/JPA/JPAEmitter.h"
#include "Vector3.h"
#include "Matrixf.h"

namespace Game {
struct Creature;
struct MoviePlayer;

namespace P2JST {

struct ObjectActor : public JStage::TActor, public ObjectBase {
	ObjectActor(const char*, MoviePlayer*);

	virtual ~ObjectActor();                                // _08
	virtual char* JSGGetName() const;                      // _10
	virtual u32 JSGGetFlag() const;                        // _18
	virtual void JSGSetFlag(u32);                          // _1C
	virtual void JSGSetData(u32, const void*, u32);        // _24
	virtual int JSGFindNodeID(const char*) const;          // _34
	virtual bool JSGGetNodeTransformation(u32, Mtx) const; // _38
	virtual void JSGGetTranslation(Vec*) const;            // _3C
	virtual void JSGSetTranslation(const Vec&);            // _40
	virtual void JSGGetScaling(Vec*) const;                // _44
	virtual void JSGSetScaling(const Vec&);                // _48
	virtual void JSGGetRotation(Vec*) const;               // _4C
	virtual void JSGSetRotation(const Vec&);               // _50
	virtual int JSGGetShape() const;                       // _54
	virtual void JSGSetShape(u32);                         // _58
	virtual int JSGGetAnimation() const;                   // _5C
	virtual void JSGSetAnimation(u32);                     // _60
	virtual f32 JSGGetAnimationFrame() const;              // _64
	virtual void JSGSetAnimationFrame(f32);                // _68
	virtual f32 JSGGetAnimationFrameMax() const;           // _6C
	virtual void reset();                                  // _A8 (weak)
	virtual void update();                                 // _AC (weak)
	virtual void entry();                                  // _B0
	virtual void start();                                  // _B4 (weak)
	virtual void stop();                                   // _B8 (weak)
	virtual void setShape();                               // _BC
	virtual void setAnim();                                // _C0
	virtual void mountArchive();                           // _C4
	virtual void parseUserData_(u32, const void*);         // _C8 (weak)

	// _00 = VTABLE (JStage::TActor)
	// _04 = VTABLE2 (ObjectBase)
	MoviePlayer* m_moviePlayer;      // _08
	char* m_name;                    // _0C
	u32 m_flags;                     // _10
	int _14;                         // _14
	u32 _18;                         // _18
	u32 _1C;                         // _1C
	J3DModelData* m_modelData;       // _20
	J3DModel* m_model;               // _24
	J3DAnmTransform* m_anmTransform; // _28
	J3DMtxCalcAnmBase* m_mtxCalcAnm; // _2C
	JKRArchive* m_archive;           // _30
	Vector3f m_translation;          // _34
	Vector3f m_rotation;             // _40
	Vector3f m_scaling;              // _4C
	u32 m_shape;                     // _58
	u32 m_animation;                 // _5C
	f32 m_animFrame;                 // _60
	f32 m_animFrameMax;              // _64
	f32 _68;                         // _68
	f32 _6C;                         // _6C
};

struct ObjectGameActor : public ObjectActor {
	ObjectGameActor(const char*, MoviePlayer*, Creature*);

	virtual ~ObjectGameActor();                            // _08 (weak)
	virtual int JSGFindNodeID(const char*) const;          // _34
	virtual bool JSGGetNodeTransformation(u32, Mtx) const; // _38
	virtual void JSGGetTranslation(Vec*) const;            // _3C
	virtual void JSGSetTranslation(const Vec&);            // _40
	virtual void JSGGetRotation(Vec*) const;               // _4C
	virtual void JSGSetRotation(const Vec&);               // _50
	virtual void JSGSetShape(u32);                         // _58
	virtual void JSGSetAnimation(u32);                     // _60
	virtual void reset();                                  // _A8 (weak)
	virtual void update();                                 // _AC (weak)
	virtual void stop();                                   // _B8 (weak)
	virtual void parseUserData_(u32, const void*);         // _C8 (weak)

	// _00     = VTABLE (JStage::TActor)
	// _04     = VTABLE2 (ObjectBase)
	// _00-_70 = ObjectActor
	Creature* m_creature;   // _70
	int m_currCommandCount; // _74
	void* _78;              // _78, command ptr array maybe?
	int _7C;                // _7C
	int _80;                // _80
	int _84;                // _84
	u32 _88;                // _88
	JKRArchive* _8C;        // _8C
	Vector3f _90;           // _90, translation 2?
	Vector3f _9C;           // _9C, rotation 2?
	u8 _A8[0x8];            // _A8, unknown
	int _B0;                // _B0
	s16 _B4;                // _B4
	s16 _B6;                // _B6
	s16 _B8;                // _B8
	s16 _BA;                // _BA
};

struct ObjectParticleActor : public ObjectActor, public JPAEmitterCallBack {
	ObjectParticleActor(const char*, MoviePlayer*, Creature*);

	virtual ~ObjectParticleActor();                // _08 (weak)
	virtual void JSGGetTranslation(Vec*) const;    // _3C
	virtual void JSGSetTranslation(const Vec&);    // _40
	virtual void JSGSetShape(u32);                 // _58
	virtual void reset();                          // _A8 (weak)
	virtual void update();                         // _AC (weak)
	virtual void stop();                           // _B8 (weak)
	virtual void parseUserData_(u32, const void*); // _C8 (weak)
	virtual void executeAfter(JPABaseEmitter*);    // _E8 (weak)

	void emit();
	void killEmitter();

	// _00     = VTABLE (JStage::TActor)
	// _04     = VTABLE2 (ObjectBase)
	// _00-_70 = ObjectActor
	// _70-_74 = JPAEmitterCallBack
	u32 _74;                   // _74
	u8 _78;                    // _78
	JPABaseEmitter* m_emitter; // _7C
	Creature* m_creature;      // _80
	s16 _84;                   // _84
	Matrixf m_matrix;          // _88
	u8 _B8;                    // _B8
	u8 _B9;                    // _B9
	Vector3f _BC;              // _BC, translation 2?
};

struct ObjectSpecialActor : public ObjectActor {
	ObjectSpecialActor(const char*, MoviePlayer*);

	virtual ~ObjectSpecialActor();                 // _08 (weak)
	virtual void JSGSetAnimation(u32);             // _60
	virtual void reset();                          // _A8 (weak)
	virtual void update();                         // _AC (weak)
	virtual void stop();                           // _B8 (weak)
	virtual void parseUserData_(u32, const void*); // _C8 (weak)

	// _00     = VTABLE (JStage::TActor)
	// _04     = VTABLE2 (ObjectBase)
	// _00-_70 = ObjectActor
	int m_currCommandCount; // _70
	void* _74;              // _74, command ptr array maybe?
	u8 _78[0x40];           // _78, unknown
	f32 _B8;                // _B8
};
} // namespace P2JST
} // namespace Game

#endif
