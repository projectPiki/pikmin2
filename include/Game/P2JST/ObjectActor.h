#ifndef _GAME_P2JST_OBJECTACTOR_H
#define _GAME_P2JST_OBJECTACTOR_H

#include "Dolphin/mtx.h"
#include "Game/P2JST/ObjectBase.h"
#include "JSystem/JStage/TActor.h"
#include "JSystem/J3D/J3DModel.h"
#include "JSystem/J3D/J3DAnmTransform.h"
#include "JSystem/JKernel/JKRArchive.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "Game/Creature.h"
#include "Vector3.h"
#include "Matrixf.h"

namespace Game {
struct Creature;
struct MoviePlayer;

enum CutsceneCommandID {
	CC_Null           = -1,
	CC_StartAnimation = 0,

	CC_MovieCommand1 = 100,
	CC_MovieCommand2 = 101,
	CC_MovieCommand3 = 102,
	CC_MovieCommand4 = 103,
	CC_MovieCommand5 = 104,
	CC_MovieCommand6 = 105,
	CC_MovieCommand7 = 106,
	CC_MovieCommand8 = 107,
	CC_MovieCommand9 = 108,
};

namespace P2JST {

struct ObjectActor : public JStage::TActor, public ObjectBase {
	ObjectActor(const char*, MoviePlayer*);

	virtual ~ObjectActor();                                // _08
	virtual char const* JSGGetName() const;                // _10
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
	virtual void start() { }                               // _B4 (weak)
	virtual void stop() { }                                // _B8 (weak)
	virtual bool setShape();                               // _BC
	virtual bool setAnim();                                // _C0
	virtual void mountArchive();                           // _C4
	virtual void parseUserData_(u32, const void*);         // _C8 (weak)

	// _00 = VTABLE (JStage::TActor)
	// _04 = VTABLE2 (ObjectBase)
	J3DModelData* mModelData;       // _20
	J3DModel* mModel;               // _24
	J3DAnmTransform* mAnmTransform; // _28
	J3DMtxCalcAnmBase* mMtxCalcAnm; // _2C
	JKRArchive* mArchive;           // _30
	Vec mTranslation;               // _34
	Vec mRotation;                  // _40
	Vec mScaling;                   // _4C
	u32 mShape;                     // _58 (index of the model file within the archive)
	u32 mAnimation;                 // _5C (index of the animation file within the archive)
	f32 mAnimFrame;                 // _60
	f32 mAnimFrameMax;              // _64
	u32 mModelFileId;               // _68 (set after loading model)
	u32 mAnimationFileId;           // _6C (set after loading animation)
};

struct ObjectGameActor : public ObjectActor {
	ObjectGameActor(const char*, MoviePlayer*, Creature*);

	virtual ~ObjectGameActor() { }                         // _08 (weak)
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
	Creature* mGameObject;     // _70
	int mCurrCommandCount;     // _74
	int mCommandIDs[4];        // _78
	int mSRTCommand;           // _88
	JKRArchive* mActorArchive; // _8C
	Vector3f mTranslation2;    // _90, translation 2?
	Vector3f mRotation2;       // _9C, rotation 2?
	bool mDoExtraSetTranslate; // _A8, enabled for SRT 5
	f32 mObjectFaceDir;        // _AC
	int mUserDataNum;          // _B0
	u16 mMovieCommandData[4];  // _B4 (actual value for command, anim id mainly)
};

struct ObjectParticleActor : public ObjectActor, public JPAEmitterCallBack {
	ObjectParticleActor(const char*, MoviePlayer*, Creature*);

	virtual ~ObjectParticleActor() { }             // _08 (weak)
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
	u32 mEfxID;               // _74
	u8 mEfxType;              // _78
	JPABaseEmitter* mEmitter; // _7C
	Creature* mGameObject;    // _80
	s16 mModelJointIndex;     // _84
	Matrixf mMatrix;          // _88
	u8 mEfxFlag;              // _B8
	u8 mCourseIdFlag;         // _B9
	Vector3f mTranslation2;   // _BC, translation 2?
};

struct ObjectSpecialActor : public ObjectActor {
	ObjectSpecialActor(const char*, MoviePlayer*);

	virtual ~ObjectSpecialActor() { }              // _08 (weak)
	virtual void JSGSetAnimation(u32 commandID);   // _60
	virtual void reset();                          // _A8 (weak)
	virtual void update();                         // _AC (weak)
	virtual void stop();                           // _B8 (weak)
	virtual void parseUserData_(u32, const void*); // _C8 (weak)

	// _00     = VTABLE (JStage::TActor)
	// _04     = VTABLE2 (ObjectBase)
	// _00-_70 = ObjectActor
	int mCurrCommandCount; // _70
	int mCommands[16];     // _74
	bool mIsFinished;      // _B4, triggers fade to black when timer hits 0
	f32 mTimer;            // _B8
};
} // namespace P2JST
} // namespace Game

#endif
