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
	union {
		u8 bytesView[2];
		u16 shortView;
	} mDrawFlags;     // _BE
	s16 mDrawType;    // _C0
	s16 mFadeType;    // _C2
	int mMsgPauseNum; // _C4
};

struct MoviePlayArg {
	inline MoviePlayArg(); // not in callmap
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

	char* mMovieName;                                     // _00
	char* mCourseName;                                    // _04
	char* mPelletName;                                    // _08
	IDelegate3<MovieConfig*, u32, u32>* mDelegateEnd;     // _0C
	IDelegate3<MovieConfig*, u32, u32>* mDelegateStart; // _10 /* Second type is unknown. */
	u32 _14;                                              // _14
	Vector3f mOrigin;                                     // _18 /* previously called mItemPosition */
	f32 mAngle;                                           // _24 /* previously called mItemFaceDirection */
	u32 mNaviID;                                          // _28
	u32 mStreamID;                                        // _2C
	Vector3f* mSoundPosition;                             // _30
};

// Size: 0x5C
struct MovieContext : public CNode {
	MovieContext();

	virtual ~MovieContext();          // _08 (weak)
	virtual MovieContext* getChild(); // _10 (weak)
	virtual MovieContext* getNext();  // _14 (weak)

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
	int mDemoState;                  // _18
	DvdThreadCommand mThreadCommand; // _1C
	u8 mIsPaused;                    // _88
	// TODO: Is this a quat?
	Vector3f mCameraPosition;                   // _8C
	f32 mCameraAngle;                           // _98
	u8 _09C[4];                                 // _9C
	f32 _0A0;                                   // _A0
	bool mCanFinish;                            // _A4
	Vector3f* mOffset;                          // _A8
	PSM::Demo* mDemoPSM;                        // _AC
	MovieConfig* mCurrentConfig;                // _B0
	IDelegate3<MovieConfig*, u32, u32>* _0BC;   // _B4
	u32 mNaviID;                                // _B8
	IDelegate3<MovieConfig*, void*, u32>* _0C4; // _BC
	char* _0C0;                                 // _C0
	u32 mStreamID;                              // _C4
	MovieContext* mContexts;                    // _C8
	MovieContext _0CC;                          // _CC
	MovieContext _128;                          // _128
	int mSuspend;                               // _184
	int mContextsCount;                         // _188
	Navi* mTargetNavi;                          // _18C
	PlayCamera* mActingCamera;                  // _190
	Creature* mTargetObject;                    // _194
	Viewport* mViewport;                        // _198
	Navi* _19C;                                 // _19C
	PlayCamera* _1A0;                           // _1A0
	IDelegate1<MoviePlayer>* _1A4;              // _1A4
	u8 _1A8[0x8];                               // _1A8, unknown
	JKRHeap* mMovieHeap;                        // _1B0
	u32 mMovieHeapFreeSize;                     // _1B4
	int mMessageEndCount;                       // _1B8
	// TODO: Is this a quat?
	Vector3f mTransform;                                           // _1BC
	f32 mTransformAngle;                                           // _1C8
	P2JST::ObjectSystem* mObjectSystem;                            // _1CC
	JStudio::TControl* mStudioControl;                             // _1D0
	JStudio::TFactory* mStudioFactory;                             // _1D4
	JStudio_JStage::TCreateObject* mStudioStageCreateObject;       // _1D8
	JStudio_JParticle::TCreateObject* mStudioParticleCreateObject; // _1DC
	Pikmin_TCreateObject_JAudio* mPikminCreateObjectAudio;         // _1E0
	P2JME::Movie::TControl* mMovieControl;                         // _1E4
	u32 mCounter;                                                  // _1E8
	void* mStbFile;                                                // _1EC
	// TODO: This might be a BitFlag<u32> object
	enum { IS_ACTIVE = 1, IS_FINISHED = 2, _FORCE_INT = 0xFFFFFFFF } mFlags; // _1F0
	// u32 mIsActive : 1, mFlags : 1;
	JPAResourceManager* mResourceManager; // _1F4
};

extern MoviePlayer* moviePlayer;
} // namespace Game

#endif
