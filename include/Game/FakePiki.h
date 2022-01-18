#ifndef _GAME_FAKEPIKI_H
#define _GAME_FAKEPIKI_H

#include "Game/AABBWaterBox.h"
#include "Game/Creature.h"
#include "SysShape/MotionListener.h"
#include "Game/shadowMgr.h"
#include "Vector3.h"

struct J3DJoint;

struct PikiAnimator {
	SysShape::Animator m_animators[2];
};

namespace Game {
struct IPikiAnims {
	enum PikiAnims {
		AKUBI,   // yawn
		ASIBUMI, // stepped on
		ATTACK1,
		CHATTING,
		DAMAGE,
		DEAD,
		DEAD2,
		DEAD3,
		ESA, // feed
		FALL,
		FUE,      // whistle
		FURIMUKU, // look over shoulder
		GAKKARI,  // disappointed
		GATTU,    // agree
		GETUP,
		GFURI1, // shake1
		GFURI2, // shake2
		GNUKE,  // evade?
		GROWUP1,
		GROWUP2,
		HNOBORU, // climb
		IRAIRA,  // frustrated
		JHIT,
		JKOKE, // moss?
		JOB1,
		JOB2,
		KOROBU,  // fall over
		KUTTUKU, // go together
		NIGERU,  // run away
		RUN2,
		WALK,
		WAIT,
		KIZUKU, // build
		THROW,
		THROWWWAIT,
		ROLLJUMP, // throwing spin animation
		HANG,
		TYAKUSUI, // drowning
		OBORERU,  // learn
		SIZUMU,   // feel depressed
		PICKLOOP,
		PICK_PUT,
		NUKU, // pull out
		NUKU3,
		NUKARERU, // to be removed from
		NUKARE3,  // swept away
		KAIFUKU,
		KAIFUKU3,
		KAIFUKU2,
		MIZUAGE,
		JUMP,
		JUMPB1,
		JUMPR1,
		SAGASU,   // search
		SAGASU2,  // search2
		MIZUNOMI, // drinking
		SUWARU,   // sit
		NERU,     // sleep
		HORU,     // leave alone? throw away
		DOSIN,
		KOROBU2, // falldown2
		GASDEAD,
		GDEAD,
		SUWARERU,
		PUNCH,
		PUNCH2,
		PUNCH3
	};
};

struct FakePiki : public Creature, public SysShape::MotionListener {
	FakePiki();

	// vtable 1 (Creature)
	virtual Vector3f getPosition();                   // _00
	virtual void getBoundingSphere(Sys::Sphere&);     // _08
	virtual void doAnimation();                       // _34
	virtual void doEntry();                           // _38
	virtual void doSimulation(float);                 // _44
	virtual float getFaceDir();                       // _5C
	virtual void setVelocity(Vector3f&);              // _60
	virtual Vector3f getVelocity();                   // _64
	virtual void onSetPosition(Vector3f&);            // _68
	virtual void updateTrMatrix();                    // _70
	virtual void inWaterCallback(WaterBox*);          // _7C
	virtual void outWaterCallback();                  // _80
	virtual bool inWater();                           // _84
	virtual Vector3f* getSound_PosPtr();              // _F8
	virtual void movieSetFaceDir(float);              // _120
	virtual void getVelocityAt(Vector3f&, Vector3f&); // _17C
	// vtable 2 (MotionListener + self)
	virtual int getDownfloorMass();             // _1B4
	virtual bool isPikmin();                    // _1B8
	virtual void doColorChange();               // _1BC
	virtual void doDebugDL();                   // _1C0
	virtual void update();                      // _1C4
	virtual void move(float);                   // _1C8
	virtual bool useMoveRotation();             // _1CC
	virtual void setMoveRotation(bool);         // _1D0
	virtual void useUpdateTrMatrix();           // _1D4
	virtual void setUpdateTrMatrix(bool);       // _1D8
	virtual void useMoveVelocity();             // _1DC
	virtual void setMoveVelocity(bool);         // _1E0
	virtual void useMapCollision();             // _1E4
	virtual void setMapCollision(bool);         // _1E8
	virtual bool isZikatu();                    // _1EC
	virtual void setZikatu(bool);               // _1F0
	virtual bool wasZikatu();                   // _1F4
	virtual float getMapCollisionRadius();      // _1F8
	virtual void wallCallback(Vector3<float>&); // _1FC
	virtual void startMotion(int, int, SysShape::MotionListener*,
	                         SysShape::MotionListener*); // _200
	virtual void onKeyEvent(const SysShape::KeyEvent&);  // _204
	virtual void updateLookCreature();                   // _208
	virtual void do_updateLookCreature();                // _20C
	virtual void onSetPosition();                        // _210
	virtual bool isWalking();                            // _214
	// virtual void _218() = 0;                             // _218

	bool assertMotion(int);

	void initFakePiki();
	void killFakePiki();

	void initAnimator();

	void initCaptureStomach();
	void startCaptureStomach(CollPart*);
	void endCaptureStomach();
	void updateStomach();

	void enableMotionBlend();
	void finishMotion();

	void setDoAnimCallback(IDelegate*);
	void clearDoAnimCallback();
	void updateWalkAnimation();

	void sNeckCallback(J3DJoint*, int);

	void startLookCreature(Creature*);
	void finishLook();
	void updateLook();

	void turnTo(Vector3f&);
	void moveRotation();
	void moveVelocity();

	bool debugShapeDL(char*);

	// Creature: _000 - _178
	// MotionListener: _178 - _17C
	float _180;                         // _180
	u8 _184[4];                         // _184
	IDelegate* m_doAnimCallback;        // _188
	short m_roomIndex;                  // _18C
	WaterBox* m_waterBox;               // _190
	CollPart* m_stomachCaptureCollPart; // _194
	float m_neckTheta;                  // _198
	float m_neckPhi;                    // _19C
	u32 _1A0;                           // _1A0
	u8 _1A4;                            // _1A4
	Creature* m_lookAtTargetCreature;   // _1A8
	u32 _1A8;                           // _1A8 TODO: figure out where the discrepency is
	PikiAnimator m_animator;            // _1AC
	Vector3f m_velocity;                // _1E4
	Vector3f _1F0;                      // _1F0
	float m_faceDir;                    // _1FC
	Vector3f m_position2;               // _200
	u32 _20C;
	Game::ShadowParam m_shadowParam; // _20C
	u8 _22C[8];                      // _22C
	float m_animSpeed;               // _234
	Vector3f _238;                   // _238
	float m_faceDirOffset;           // _244
	Sys::Triangle* _248;             // _248
};
} // namespace Game

#endif
