#ifndef _EBI_TITLE_ENTITIES_TCHAPPY_H
#define _EBI_TITLE_ENTITIES_TCHAPPY_H

#include "CNode.h"
#include "Vector2.h"
#include "JSystem/JKR/JKRArchive.h"
#include "ebi/E3DGraph.h"
#include "BaseParm.h"
#include "Parameters.h"

struct Controller;
struct J3DModelData;

namespace ebi {
namespace title {
namespace Chappy {

struct TUnit;

struct TParam : Parameters {
	TParam();

	void loadSettingsFile(JKRArchive*, const char*);

	Parm<f32> m_scale;           // _0C
	Parm<f32> m_cullRadius;      // _0C
	Parm<f32> m_collRadius;      // _0C
	Parm<f32> m_pikiReactRadius; // _0C
	Parm<f32> m_hitOffset;       // _0C
	Parm<f32> m_hitRadius;       // _0C
	Parm<f32> m_walkAngleRand;   // _0C
	Parm<f32> m_walkSpeed;       // _0C
	Parm<f32> m_turnSpeed;       // _0C
	Parm<f32> m_minWaitTime;     // _0C
	Parm<f32> m_maxWaitTime;     // _0C
	Parm<f32> m_minWalkTime;     // _0C
	Parm<f32> m_maxWalkTime;     // _0C
	Parm<f32> m_controlledTime;  // _0C
};

struct TAnimFolder : E3DAnimFolderBase {
	virtual E3DAnimRes* getAnimRes(long); // _08 (weak)

	void load(J3DModelData*, JKRArchive*);
	E3DAnimRes* getAnimRes(int);

	// _00 = VTBL
	E3DAnimRes m_anims[4]; // move, wait, attack, wait2
};

struct TAnimator : TAnimFolder {
	TAnimator();

	void setArchive(JKRArchive*);
	void newJ3DModel();
	J3DModelData* m_modelData;
};

struct TMgr : public CNode {
	TMgr();

	virtual ~TMgr(); // _08 (weak)

	void setArchive(JKRArchive*);
	void initUnit();

	// _00     = VTBL
	// _00-_18 = CNode
	TAnimator* m_animator;
	TParam m_params;
	TUnit* m_object;
};

struct TUnit {

	inline TUnit()
	{
		m_pos                   = 0.0f;
		m_angle                 = 0.0f;
		m_parms[0]              = 0.0f;
		m_parms[1]              = 1.0f;
		m_parms[2]              = 0.0f;
		m_parms[3]              = 0.0f;
		m_parms[4]              = 0.0f;
		m_model                 = nullptr;
		m_counter               = 0;
		m_counter2              = 0;
		m_anim._0C              = 0;
		m_anim.pAnimFolder_0x10 = 0;
		m_targetPos[0]          = 0.0f;
		m_targetPos[1]          = 0.0f;
		int time                = 0.0f / sys->m_deltaTime;
		m_counter               = time;
		m_counter2              = time;
		m_control               = nullptr;
		_48                     = 0;
		m_manager               = nullptr;
		m_stateID               = CHAPPYAI_Inactive;
		_6C                     = -1;
		m_attacks               = 0;
	}

	enum enumAIState {
		CHAPPYAI_Inactive,
		CHAPPYAI_Wait,
		CHAPPYAI_Turn,
		CHAPPYAI_Walk,
		CHAPPYAI_4,
		CHAPPYAI_5,
		CHAPPYAI_6,
		CHAPPYAI_Controlled
	};
	enum enumAction { ACT_UNKNOWN };

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

	// _00 = VTBL
	Vector2f m_pos;
	Vector2f m_angle;
	f32 m_parms[5];
	J3DModel* m_model;
	Vector2f m_targetPos[2];
	int m_counter;
	int m_counter2;
	Controller* m_control;
	bool _48;
	TMgr* m_manager;
	E3DAnimCtrl m_anim;
	int m_attacks;
	enumAIState m_stateID;
	int _6C;
};
} // namespace Chappy
} // namespace title
} // namespace ebi

#endif
