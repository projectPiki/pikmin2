#ifndef _GAME_MOVIEPLAYER_H
#define _GAME_MOVIEPLAYER_H

#include "Camera.h"
#include "Controller.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "JSystem/JStudio_JAudio.h"
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

	virtual ~Pikmin_TCreateObject_JAudio() { }                                                               // _08 (weak)
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

enum MovieDemoState {
	DEMOSTATE_Inactive     = 0,
	DEMOSTATE_Fadeout      = 1,
	DEMOSTATE_Loading      = 2,
	DEMOSTATE_LoadComplete = 3,
	DEMOSTATE_Starting     = 4,
	DEMOSTATE_Playing      = 5,
	DEMOSTATE_Finishing    = 6, // skipped or completed and fading back into gameplay
};

enum MoviePlayerFlags {
	MVP_IsActive   = 0x1,
	MVP_IsFinished = 0x2,
	MVP_DoSkip     = 0x80000000,
};

enum MoviePlayerDrawFlags {
	MVDP_DrawPikmin = 0x1,
	MVDP_DrawEnemy  = 0x2,
	MVDP_DrawPellet = 0x4,
	MVDP_DrawNavi   = 0x8,
};

struct MovieConfig : public CNode {
	struct TParms : public TagParameters {
		inline TParms()
		    : TagParameters("MovieConfigTag")
		    , mDemoName(this, "demo_name")
		    , mFolderName(this, "folder")
		{
		}
		virtual ~TParms() { } // _08 (weak)

		StringTagParm mDemoName;   // _1C
		StringTagParm mFolderName; // _2C
	};

	MovieConfig();

	virtual ~MovieConfig() { } // _08 (weak)

	void dump();
	bool isSkippable();
	bool isNeverSkippable();
	bool is(char*);
	void read(Stream&);

	inline void setDrawFlag(u32 flag) { mDrawFlags.typeView |= flag; }
	inline void resetDrawFlag(u32 flag) { mDrawFlags.typeView &= ~flag; }
	inline bool isDrawFlag(u32 flag) const { return mDrawFlags.typeView & flag; }

	// _00     = VTBL
	// _00-_18 = CNode
	ID32 mId;                   // _18
	u8 mPositionFlag;           // _1C
	char mMovieNameBuffer1[32]; // _25
	char mMovieNameBuffer2[32]; // _45
	TParms mParam;              // _68
	Vector3f mOrigin;           // _A4
	f32 mAngle;                 // _B0
	int mCourseIndex;           // _B4
	char* mMapName;             // _B8
	u16 mFlags;                 // _BC
	BitFlag<u16> mDrawFlags;    // _BE
	u16 mDrawType;              // _C0
	s16 mFadeType;              // _C2
	int mMsgPauseNum;           // _C4
};

struct MoviePlayArg {
	inline MoviePlayArg()
	{
		mCourseName    = nullptr;
		mMovieName     = nullptr;
		mDelegateEnd   = nullptr;
		mDelegateStart = nullptr;
		mOrigin        = 0.0f;
		mAngle         = 0.0f;
		mNaviID        = 0;
		mPelletName    = nullptr;
		mStreamID      = 0;
		_14            = 0;
		mSoundPosition = nullptr;
	}

	inline MoviePlayArg(char* movieName, char* courseName, IDelegate3<MovieConfig*, u32, u32>* p3, u32 naviID)
	{
		mMovieName     = movieName;
		mCourseName    = courseName;
		mDelegateEnd   = p3;
		mOrigin        = Vector3f(0.0f);
		mAngle         = 0.0f;
		mNaviID        = naviID;
		mDelegateStart = nullptr;
		mPelletName    = nullptr;
		mStreamID      = 0;
		_14            = 0;
		mSoundPosition = nullptr;
	}

	inline void setTarget(Creature* creature)
	{
		mOrigin = creature->getPosition();
		mAngle  = creature->getFaceDir();
	}

	char* mMovieName;                                   // _00
	char* mCourseName;                                  // _04
	char* mPelletName;                                  // _08
	IDelegate3<MovieConfig*, u32, u32>* mDelegateEnd;   // _0C
	IDelegate3<MovieConfig*, u32, u32>* mDelegateStart; // _10 /* Second type is unknown. */
	u32 _14;                                            // _14
	Vector3f mOrigin;                                   // _18
	f32 mAngle;                                         // _24
	u32 mNaviID;                                        // _28
	u32 mStreamID;                                      // _2C
	Vector3f* mSoundPosition;                           // _30
};

// Size: 0x5C
struct MovieContext : public CNode {
	MovieContext();

	virtual ~MovieContext() { }                                                     // _08 (weak)
	virtual MovieContext* getChild() { return static_cast<MovieContext*>(mChild); } // _10 (weak)
	virtual MovieContext* getNext() { return static_cast<MovieContext*>(mNext); }   // _14 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	MoviePlayArg mArg;       // _18
	MovieConfig* mConfig;    // _4C
	Navi* mNavi;             // _50
	Creature* mTargetObject; // _54
	PlayCamera* mCamera;     // _58
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
	MovieConfig mConfig; //  _18
};

// Size: 0x1F8
struct MoviePlayer : public JKRDisposer {

#define MOVIEPLAYER_HEAP_SIZE     0x60400
#define MOVIEPLAYER_CONTEXT_COUNT 8 // (max number of cutscenes that can be queued at once)

	enum PlayStatus { MOVIEPLAY_SUCCESS, MOVIEPLAY_NOCONFIG, MOVIEPLAY_INQUEUE, MOVIEPLAY_QUEUEFAIL };

	MoviePlayer();

	virtual ~MoviePlayer() { mArchive = nullptr; } // _08

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

	int play(MoviePlayArg&);
	int play(MovieConfig*, MoviePlayArg&, bool);
	void reset();
	void resetFrame();
	void setCamera(Camera*);
	void setContext(MovieContext*, MovieConfig*, MoviePlayArg&);
	void setPauseAndDraw(MovieConfig*);
	void setTransform(Vector3f&, f32);
	void skip();
	bool start(Camera*);
	bool stop();
	void unsuspend(s32, bool);
	bool update(Controller*, Controller*);

	// unused/inlined
	void setMovieHeap(JKRHeap*);
	void clearMovieHeap();
	void doStartMovie();
	void playSuspended();
	void hasSuspendedDemo();
	void hasSuspendedContext();
	void getSuspendedContext();
	void do_stop();
	void suspend(s32);
	bool isLoadingBlack();
	void draw2d();

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }
	inline bool isDrawLoad()
	{
		return mDemoState == DEMOSTATE_Loading || mDemoState == DEMOSTATE_LoadComplete || mDemoState == DEMOSTATE_Starting;
	}

	// _00     = VTBL
	// _00-_18 = JKRDisposer
	int mDemoState;                                                // _18, see MovieDemoState enum
	DvdThreadCommand mThreadCommand;                               // _1C
	u8 mIsPaused;                                                  // _88
	Vector3f mCameraPosition;                                      // _8C
	f32 mCameraAngle;                                              // _98
	u8 _09C[4];                                                    // _9C
	f32 mFadeTimer;                                                // _A0
	bool mCanFinish;                                               // _A4
	Vector3f* mOffset;                                             // _A8
	PSM::Demo* mDemoPSM;                                           // _AC
	MovieConfig* mCurrentConfig;                                   // _B0
	IDelegate3<MovieConfig*, u32, u32>* mDelegate1;                // _B4
	u32 mNaviID;                                                   // _B8
	IDelegate3<MovieConfig*, u32, u32>* mDelegate2;                // _BC
	char* mCameraName;                                             // _C0
	u32 mStreamID;                                                 // _C4
	MovieContext* mContexts;                                       // _C8
	MovieContext mStoreContextActive;                              // _CC
	MovieContext mStoreContextInactive;                            // _128
	int mActiveContextNum;                                         // _184
	int mContextsCount;                                            // _188
	Navi* mTargetNavi;                                             // _18C
	PlayCamera* mActingCamera;                                     // _190
	Creature* mTargetObject;                                       // _194
	Viewport* mViewport;                                           // _198
	Navi* mAltNavi;                                                // _19C
	PlayCamera* mAltCamera;                                        // _1A0
	Delegate<MoviePlayer>* mDelegate3;                             // _1A4
	u8 _1A8[0x8];                                                  // _1A8, unknown
	JKRHeap* mMovieHeap;                                           // _1B0
	u32 mMovieHeapFreeSize;                                        // _1B4
	int mMessageEndCount;                                          // _1B8
	Vector3f mTransform;                                           // _1BC
	f32 mTransformAngle;                                           // _1C8
	P2JST::ObjectSystem* mObjectSystem;                            // _1CC
	JStudio::TControl* mStudioControl;                             // _1D0
	JStudio::TFactory* mStudioFactory;                             // _1D4
	JStudio_JStage::TCreateObject* mStudioStageCreateObject;       // _1D8
	JStudio_JParticle::TCreateObject* mStudioParticleCreateObject; // _1DC
	Pikmin_TCreateObject_JAudio* mPikminCreateObjectAudio;         // _1E0
	P2JME::Movie::TControl* mTextControl;                          // _1E4
	u32 mCounter;                                                  // _1E8
	const void* mStbFile;                                          // _1EC
	BitFlag<u32> mFlags;                                           // _1F0, see MoviePlayerFlags enum
	JPAResourceManager* mEfxManager;                               // _1F4

	static JKRArchive* mArchive;
};

extern MovieList* movieList;
extern MoviePlayer* moviePlayer;
} // namespace Game

#endif
