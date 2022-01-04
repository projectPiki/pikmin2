#ifndef _GAME_MOVIEPLAYER_H
#define _GAME_MOVIEPLAYER_H

#include "types.h"
#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "Vector3.h"

struct JKRHeap;
struct JPAResourceManager;
struct Pikmin_TCreateObject_JAudio;
struct Viewport;
namespace Game {
struct Creature;
struct MovieConfig;
struct Navi;
struct PlayCamera;
namespace P2JST {
	struct ObjectSystem;
}
} // namespace Game
namespace JStudio {
struct TControl;
struct TFactory;
} // namespace JStudio
namespace JStudio_JParticle {
struct TCreateObject;
}
namespace JStudio_JStage {
struct TCreateObject;
}
namespace P2JME {
namespace Movie {
	struct TControl;
}
} // namespace P2JME
namespace PSM {
struct Demo;
}

namespace Game {

struct MoviePlayArg {
	char* m_movieName;                           // _00
	char* m_courseName;                          // _04
	char* _08;                                   // _08
	IDelegate3<MovieConfig*, ulong, ulong>* _0C; // _0C
	IDelegate3<MovieConfig*, void*, ulong>*
	    _10;           // _10 /* Second type is unknown. */
	u32 _14;           // _14
	Vector3f m_origin; // _18 /* previously called m_itemPosition */
	float m_angle;     // _24 /* previously called m_itemFaceDirection */
	ulong m_naviID;    // _28
	i32 m_streamID;   // _2C
	Vector3f* m_soundPosition; // _30
};

// Size: 0x5C
struct MovieContext : public CNode {
	virtual MovieContext* getChild(); // _08
	virtual MovieContext* getNext();  // _0C

	MoviePlayArg m_arg;       // _18
	MovieConfig* m_config;    // _4C
	Navi* m_navi;             // _50
	Creature* m_targetObject; // _54
	PlayCamera* m_camera;     // _58
};

// Size: 0x1F8
struct MoviePlayer {
	virtual ~MoviePlayer(); // _00

	// _00 VTBL
	u8 _004[0x14];
	int m_demoState;
	DvdThreadCommand m_threadCommand;
	u8 m_isPaused;
	// TODO: Is this a quat?
	Vector3f m_cameraPosition;
	float m_cameraAngle;
	u8 _09C[4];
	float _0A0;
	bool m_canFinish;
	Vector3f m_offset;
	PSM::Demo* m_demoPSM;
	MovieConfig* m_currentConfig;
	IDelegate3<MovieConfig*, ulong, ulong>* _0B4;
	u32 m_naviID;
	IDelegate3<MovieConfig*, void*, ulong>* _0BC;
	char* _0C0;
	i32 m_streamID;
	MovieContext* m_contexts;
	MovieContext _0CC;
	MovieContext _128;
	int m_suspend;
	int m_contextsCount;
	Navi* _18C;
	PlayCamera* _190;
	Creature* m_targetObject;
	Viewport* m_viewport;
	Navi* _19C;
	PlayCamera* _1A0;
	IDelegate1<MoviePlayer>* _1A4;
	JKRHeap* m_movieHeap;
	i32 m_movieHeapFreeSize;
	int m_messageEndCount;
	// TODO: Is this a quat?
	Vector3f m_transform;
	float m_transformAngle;
	P2JST::ObjectSystem* m_objectSystem;
	JStudio::TControl* m_studioControl;
	JStudio::TFactory* m_studioFactory;
	JStudio_JStage::TCreateObject* m_studioStageCreateObject;
	JStudio_JParticle::TCreateObject* m_studioParticleCreateObject;
	Pikmin_TCreateObject_JAudio* m_pikminCreateObjectAudio;
	P2JME::Movie::TControl* m_movieControl;
	u32 m_counter;
	void* m_stbFile;
	enum { IS_ACTIVE = 1, _1F0_UNKNOWN_2 = 2, _FORCE_INT = 0xFFFFFFFF } m_flags;
	// i32 m_isActive : 1, m_1F0_Unknown : 1;
	JPAResourceManager* m_resourceManager;
};

extern MoviePlayer* moviePlayer;
} // namespace Game

#endif
