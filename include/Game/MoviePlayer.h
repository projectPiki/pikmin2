#ifndef _GAME_MOVIEPLAYER_H
#define _GAME_MOVIEPLAYER_H

#include "Camera.h"
#include "Controller.h"
#include "JSystem/JKR/JKRDisposer.h"
#include "JStudio/JStudio_JAudio.h"
#include "types.h"
#include "CNode.h"
#include "DvdThreadCommand.h"
#include "IDelegate.h"
#include "Vector3.h"
#include "TagParm.h"
#include "Game/Creature.h"
#include "id32.h"

struct JPAResourceManager;
struct Viewport;

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

struct Pikmin_TCreateObject_JAudio : public JStudio_JAudio::TCreateObject {
	Pikmin_TCreateObject_JAudio(JAIBasic*, const JStage::TSystem*);

	virtual ~Pikmin_TCreateObject_JAudio();                                                                  // _08 (weak)
	virtual bool create(JStudio::TObject** newObject, const JStudio::stb::data::TParse_TBlock_object& data); // _0C

	// _00     = VTBL
	// _00-_14 = JStudio_JAudio::TCreateObject
};

namespace Game {
struct Creature;
struct MovieConfig;
struct Navi;
struct PlayCamera;

namespace P2JST {
struct ObjectSystem;
}

struct MovieConfig : public CNode {
	struct TParms : public TagParameters {
		inline TParms()
		    : TagParameters("MovieConfigTag")
		    , m_demoName(this, "demo_name")
		    , m_folderName(this, "folder")
		{
		}
		virtual ~TParms() { } // _08 (weak)

		StringTagParm m_demoName;   // _1C
		StringTagParm m_folderName; // _2C
	};

	MovieConfig();

	virtual ~MovieConfig() { } // _08 (weak)

	void dump();
	bool isSkippable();
	bool isNeverSkippable();
	bool is(char*);
	void read(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	ID32 m_id;                   // _18
	u8 m_positionFlag;           // _1C
	char m_movieNameBuffer1[32]; // _25
	char m_movieNameBuffer2[32]; // _45
	TParms m_param;              // _68
	Vector3f m_origin;           // _A4
	f32 m_angle;                 // _B0
	int m_courseIndex;           // _B4
	char* m_mapName;             // _B8
	u16 m_flags;                 // _BC
	union {
		u8 bytesView[2];
		u16 shortView;
	} m_drawFlags;     // _BE
	s16 m_drawType;    // _C0
	s16 m_fadeType;    // _C2
	int m_msgPauseNum; // _C4
};

struct MoviePlayArg {
	inline MoviePlayArg(); // not in callmap
	inline MoviePlayArg(char* movieName, char* courseName, IDelegate3<MovieConfig*, u32, u32>* p3, u32 naviID)
	{
		m_movieName     = movieName;
		m_courseName    = courseName;
		m_delegateEnd   = p3;
		m_origin        = Vector3f(0.0f);
		m_angle         = 0.0f;
		m_naviID        = naviID;
		m_delegateStart = nullptr;
		m_pelletName    = nullptr;
		m_streamID      = 0;
		_14             = 0;
		m_soundPosition = nullptr;
	}

	inline void setTarget(Creature* creature)
	{
		m_origin = creature->getPosition();
		m_angle  = creature->getFaceDir();
	}

	char* m_movieName;                                     // _00
	char* m_courseName;                                    // _04
	char* m_pelletName;                                    // _08
	IDelegate3<MovieConfig*, u32, u32>* m_delegateEnd;     // _0C
	IDelegate3<MovieConfig*, void*, u32>* m_delegateStart; // _10 /* Second type is unknown. */
	u32 _14;                                               // _14
	Vector3f m_origin;                                     // _18 /* previously called m_itemPosition */
	f32 m_angle;                                           // _24 /* previously called m_itemFaceDirection */
	u32 m_naviID;                                          // _28
	u32 m_streamID;                                        // _2C
	Vector3f* m_soundPosition;                             // _30
};

// Size: 0x5C
struct MovieContext : public CNode {
	MovieContext();

	virtual ~MovieContext();          // _08 (weak)
	virtual MovieContext* getChild(); // _10 (weak)
	virtual MovieContext* getNext();  // _14 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	MoviePlayArg m_arg;       // _18
	MovieConfig* m_config;    // _4C
	Navi* m_navi;             // _50
	Creature* m_targetObject; // _54
	PlayCamera* m_camera;     // _58
};

struct MovieList : public CNode {
	MovieList();

	// unused/inline
	void getConfig(int);

	virtual ~MovieList() { } // _08 (weak)

	static void construct();
	MovieConfig* findConfig(char*, char*);
	void read(Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	MovieConfig m_config; //  _18
};

// Size: 0x1F8
struct MoviePlayer : public JKRDisposer {
	MoviePlayer();

	virtual ~MoviePlayer(); // _08

	void allocContexts();
	void allocMovieHeap(u32);
	void clearContexts();
	void clearPauseAndDraw();
	void clearSuspendedDemo();
	void draw(Graphics&);
	void drawLoading(Graphics&);
	MovieConfig* findConfig(char*, char*);
	PlayCamera* getActiveGameCamera();
	Navi* getActiveOrima();
	MovieContext* getNewContext();
	bool isPlaying(char*);
	void loadResource();
	bool parse(bool);
	unknown play(MoviePlayArg&);
	unknown play(MovieConfig*, MoviePlayArg&, bool);
	void reset();
	void resetFrame();
	void setCamera(Camera*);
	void setContext(MovieContext*, MovieConfig*, MoviePlayArg&);
	void setPauseAndDraw(MovieConfig*);
	void setTransform(Vector3f&, f32);
	void skip();
	unknown start(Camera*);
	bool stop();
	void unsuspend(long, bool);
	unknown update(Controller*, Controller*);

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	int m_demoState;                  // _18
	DvdThreadCommand m_threadCommand; // _1C
	u8 m_isPaused;                    // _88
	// TODO: Is this a quat?
	Vector3f m_cameraPosition;                  // _8C
	f32 m_cameraAngle;                          // _98
	u8 _09C[4];                                 // _9C
	f32 _0A0;                                   // _A0
	bool m_canFinish;                           // _A4
	Vector3f* m_offset;                         // _A8
	PSM::Demo* m_demoPSM;                       // _AC
	MovieConfig* m_currentConfig;               // _B0
	IDelegate3<MovieConfig*, u32, u32>* _0BC;   // _B4
	u32 m_naviID;                               // _B8
	IDelegate3<MovieConfig*, void*, u32>* _0C4; // _BC
	char* _0C0;                                 // _C0
	u32 m_streamID;                             // _C4
	MovieContext* m_contexts;                   // _C8
	MovieContext _0CC;                          // _CC
	MovieContext _128;                          // _128
	int m_suspend;                              // _184
	int m_contextsCount;                        // _188
	Navi* m_targetNavi;                         // _18C
	PlayCamera* m_actingCamera;                 // _190
	Creature* m_targetObject;                   // _194
	Viewport* m_viewport;                       // _198
	Navi* _19C;                                 // _19C
	PlayCamera* _1A0;                           // _1A0
	IDelegate1<MoviePlayer>* _1A4;              // _1A4
	u8 _1A8[0x8];                               // _1A8, unknown
	JKRHeap* m_movieHeap;                       // _1B0
	u32 m_movieHeapFreeSize;                    // _1B4
	int m_messageEndCount;                      // _1B8
	// TODO: Is this a quat?
	Vector3f m_transform;                                           // _1BC
	f32 m_transformAngle;                                           // _1C8
	P2JST::ObjectSystem* m_objectSystem;                            // _1CC
	JStudio::TControl* m_studioControl;                             // _1D0
	JStudio::TFactory* m_studioFactory;                             // _1D4
	JStudio_JStage::TCreateObject* m_studioStageCreateObject;       // _1D8
	JStudio_JParticle::TCreateObject* m_studioParticleCreateObject; // _1DC
	Pikmin_TCreateObject_JAudio* m_pikminCreateObjectAudio;         // _1E0
	P2JME::Movie::TControl* m_movieControl;                         // _1E4
	u32 m_counter;                                                  // _1E8
	void* m_stbFile;                                                // _1EC
	// TODO: This might be a BitFlag<u32> object
	enum { IS_ACTIVE = 1, IS_FINISHED = 2, _FORCE_INT = 0xFFFFFFFF } m_flags; // _1F0
	// u32 m_isActive : 1, m_1F0_Unknown : 1;
	JPAResourceManager* m_resourceManager; // _1F4
};

extern MoviePlayer* moviePlayer;
} // namespace Game

#endif
