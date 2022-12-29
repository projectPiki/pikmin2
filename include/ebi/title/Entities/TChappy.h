#ifndef _EBI_TITLE_ENTITIES_TCHAPPY_H
#define _EBI_TITLE_ENTITIES_TCHAPPY_H

#include "CNode.h"
#include "Vector2.h"
#include "JSystem/JKR/JKRArchive.h"
#include "ebi/E3DGraph.h"
#include "BaseParm.h"
#include "Parameters.h"
#include "ebi/title/TObjects.h"

struct Controller;
struct J3DModelData;

namespace ebi {
namespace title {
namespace Chappy {

struct TUnit;

struct TParam : public TParamBase {
	TParam();

	// _00-_0C = TParamBase
	Parm<f32> m_scale;           // _0C
	Parm<f32> m_cullRadius;      // _34
	Parm<f32> m_collRadius;      // _5C
	Parm<f32> m_pikiReactRadius; // _84
	Parm<f32> m_hitOffset;       // _AC
	Parm<f32> m_hitRadius;       // _D4
	Parm<f32> m_walkAngleRand;   // _FC
	Parm<f32> m_walkSpeed;       // _124
	Parm<f32> m_turnSpeed;       // _14C
	Parm<f32> m_minWaitTime;     // _174
	Parm<f32> m_maxWaitTime;     // _19C
	Parm<f32> m_minWalkTime;     // _1C4
	Parm<f32> m_maxWalkTime;     // _1EC
	Parm<f32> m_controlledTime;  // _214
};

struct TAnimFolder : public E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(long); // _08 (weak)

	void load(J3DModelData*, JKRArchive*);
	E3DAnimRes* getAnimRes(int);

	// _00 = VTBL
	E3DAnimRes m_anims[4]; // _04 - move, wait, attack, wait2
};

struct TAnimator {
	TAnimator();

	void setArchive(JKRArchive*);
	J3DModel* newJ3DModel();

	TAnimFolder m_animFolder;  // _00
	J3DModelData* m_modelData; // _84
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr(); // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();

	// _00     = VTBL
	// _00-_18 = CNode
	TAnimator* m_animator; // _18
	TParam m_params;       // _1C
	TUnit* m_object;       // _25C
};

struct TUnit : public TObjBase {
	enum enumAIState {
		CHAPPYAI_Inactive   = 0,
		CHAPPYAI_Wait       = 1,
		CHAPPYAI_Turn       = 2,
		CHAPPYAI_Walk       = 3,
		CHAPPYAI_4          = 4,
		CHAPPYAI_5          = 5,
		CHAPPYAI_6          = 6,
		CHAPPYAI_Controlled = 7,
	};

	enum enumAction {
		CHAPPYACT_NULL = -1,
		CHAPPYACT_0    = 0,
		CHAPPYACT_1    = 1,
		CHAPPYACT_2    = 2,
		CHAPPYACT_3    = 3,
		CHAPPYACT_4    = 4,
	};

	inline TUnit()
	{
		m_counter  = 0;
		m_counter2 = 0;

		m_anim._0C              = 0;
		m_anim.pAnimFolder_0x10 = 0;

		m_targetPos   = Vector2f(0.0f);
		m_targetAngle = Vector2f(1.0f, 0.0f);

		u32 time   = 0.0f / sys->m_deltaTime;
		m_counter  = time;
		m_counter2 = time;

		m_control = nullptr;
		_48       = false;

		m_manager = nullptr;
		m_stateID = CHAPPYAI_Inactive;

		m_actionID = -1;
		m_attacks  = 0;
	}

	virtual u32 getCreatureType() { return 6; } // _08 (weak)
	virtual bool isCalc();                      // _0C

	void setController(Controller*);
	void init(TMgr*);
	void startZigzagWalk(Vector2f&, Vector2f&);
	void goHome();
	void outOfCalc();
	bool isController();
	void startAIState_(enumAIState);
	void update();
	void startAction_(enumAction);

	// _00     = VTBL
	// _00-_2C = TObjBase
	Vector2f m_targetPos;   // _2C
	Vector2f m_targetAngle; // _34
	u32 m_counter;          // _3C
	u32 m_counter2;         // _40
	Controller* m_control;  // _44
	bool _48;               // _48
	TMgr* m_manager;        // _4C
	E3DAnimCtrl m_anim;     // _50
	int m_attacks;          // _64
	enumAIState m_stateID;  // _68
	int m_actionID;         // _6C
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
