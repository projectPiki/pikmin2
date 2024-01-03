#ifndef _GAME_IKSYSTEMBASE_H
#define _GAME_IKSYSTEMBASE_H

#include "Vector3.h"
#include "Matrixf.h"
#include "Dolphin/mtx.h"

#define IK_LEG_COUNT (4)

struct CollPart;
struct J3DJoint;

namespace SysShape {
struct Model;
} // namespace SysShape

namespace Game {
static bool IKJointCallBack(J3DJoint* joint, int arg);

struct EnemyBase;
struct JointGroundCallBack;

struct IKSystemParms {
	inline IKSystemParms()
	{
		mLegCount                   = -1;
		mFootPositionOffset         = 0.0f;
		mFootPositionRadius         = 0.0f;
		mMoveInterpolationRate      = 0.75f;
		mHeightOffset               = 120.0f;
		mBottomJointMoveSpeed       = 3.0f;
		mRaiseSlowdownFactor        = -0.15f;
		mDownwardAccelFactor        = 0.5f;
		mMaxDecelFactor             = 10.0f;
		mMinDecelFactor             = -2.0f;
		mBendFactor                 = 0.0f;
		mMoveSpeed                  = 75.0f;
		mMinimumMoveSpeed           = 0.0f;
		mEnragedAngle               = 30.0f;
		mMaxTurnAngle               = 60.0f;
		mTraceMoveRate              = 0.1f;
		mTraceVelocityDampingFactor = 0.7f;
		mTraceHeightOffset          = -1.5f;
	}

	inline f32 getViewAngle() const { return mEnragedAngle; } // this is a guess, don't at me
	inline f32 getMaxTurnAngle() const { return mMaxTurnAngle; }

	int mLegCount;                   // _00, number of legs in the IK system
	f32 mFootPositionOffset;         // _04, distance between each of the feet
	f32 mFootPositionRadius;         // _08, radius of the circle that the feet are on
	f32 mMoveInterpolationRate;      // _0C, rate at which the IK system moves
	f32 mHeightOffset;               // _10, height offset for the IK system
	f32 mBottomJointMoveSpeed;       // _14
	f32 mRaiseSlowdownFactor;        // _18, -0.15f, used for calculating the speed of the raising foot slowing down
	f32 mDownwardAccelFactor;        // _1C, 0.5f, used for calculating the speed of the raising foot stepping
	f32 mMaxDecelFactor;             // _20, 10.0f
	f32 mMinDecelFactor;             // _24, -2.0f
	f32 mBendFactor;                 // _28, 0.0f, used for calculating the bend ratio
	f32 mMoveSpeed;                  // _2C, 75.0f, used for calculating the speed of the IK system
	f32 mMinimumMoveSpeed;           // _30, 0.0f
	f32 mEnragedAngle;               // _34, 30.0f
	f32 mMaxTurnAngle;               // _38
	f32 mTraceMoveRate;              // _3C
	f32 mTraceVelocityDampingFactor; // _40
	f32 mTraceHeightOffset;          // _44
};

struct IKSystemBase {
	enum Positions {
		TOP    = 0,
		MIDDLE = 1,
		BOTTOM = 2,
	};

	IKSystemBase();

	void init();
	void setLegJointMatrix(int legIdx, Matrixf* legMtx);
	void setParameters(IKSystemParms* settings);

	/**
	 * Starts the programmed IK (Inverse Kinematics) process.
	 * This function enables IK, sets blend motion to inactive, and initializes the IK parameters.
	 * It calculates the distances between joints and the target position.
	 */
	void startProgramedIK();

	/**
	 * Sets up the initial positions for the IK system and calculates the intermediate position for movement.
	 *
	 * @param targetMove The target movement position.
	 */
	void startMovePosition(Vector3f& targetPos);

	void startBlendMotion();
	void finishBlendMotion();
	void checkJointScaleOn();

	void update();

	/**
	 * Calculates the bend ratio for the IK system.
	 * If the character is on the ground, the bend ratio is set to 0.
	 * Otherwise, the bend ratio is calculated based on the move ratio and other parameters.
	 */
	void makeBendRatio();

	Vector3f getBottomJointPosition();
	Vector3f getCollisionCentre();

	/**
	 * @brief Get the middle direction for the IK system.
	 *
	 * This function calculates the middle direction for the IK system. If the blend motion is active,
	 * it gets the basis of the top leg joint matrix. Otherwise, it calculates the direction from the
	 * top position to the target position, normalizes it, and then adds 100 to the y-component.
	 *
	 * @param topPos Reference to the top position vector.
	 * @return Vector3f The calculated middle direction.
	 */
	Vector3f getMiddleDirection(Vector3f& topPos);

	f32 getMoveRatio();

	void moveBottomJointPosition();

	/**
	 * Sets the rotation of the top joint in the IK system.
	 *
	 * @param topPos The position of the top joint.
	 * @param jointPos The position of the joint.
	 */
	void setTopJointRotation(Vector3f& topPos, Vector3f& jointPos);

	/**
	 * Sets the rotation of the middle joint in the IK system.
	 *
	 * @param topPos The position of the top joint.
	 * @param jointPos The position of the middle joint.
	 */
	void setMiddleJointRotation(Vector3f& topPos, Vector3f& jointPos);

	/**
	 * Determines if the target position is on the ground and adjusts the target position's height accordingly.
	 *
	 * @return True if the target position's height was adjusted, false otherwise.
	 */
	bool onGroundPosition();

	/**
	 * Calculates and sets the transformation matrices for the IK system.
	 * If the IK system is not enabled, the function returns without performing any calculations.
	 */
	void makeMatrix();

	/**
	 * Updates the bottom matrix of the IK system based on the target position and current joint matrices.
	 * This function is responsible for setting the basis vectors of the bottom joint matrix and applying rotation based on the bend ratio.
	 * If the blend motion is active, the function returns without making any changes.
	 *
	 * @param pos The current position of the IK system.
	 */
	void makeBottomMatrix(Vector3f& pos);

	bool onGround();

	bool mIsIKEnabled;             // _00, if IK is enabled
	bool mIsBlendMotionActive;     // _01, if it's smoothing and blending two motions together (not sure what this means)
	bool mIsOnGround;              // _02, if the IK system is on the ground
	bool mWasOnGround;             // _03, if the IK system was on the ground
	bool mScaleJoints;             // _04, if the joints should be scaled
	f32 mBendRatio;                // _08, bend rotation in radians of the leg joints
	f32 mMoveRatio;                // _0C, the progress of the joint movement, where 1.0f is the completion of the movement
	f32 mMoveTimer;                // _10
	f32 mTopToMiddleDistance;      // _14, some distance I'm not sure of
	f32 mMiddleToBottomDistance;   // _18, same as above
	Vector3f mTargetPosition;      // _1C
	Vector3f mIkPositions[3];      // _28
	Matrixf* mLegJointMatrices[3]; // _4C
	IKSystemParms* mParams;        // _58
};

struct IKSystemMgr {
	IKSystemMgr();

	void init(EnemyBase*, JointGroundCallBack*);
	void setupJoint(SysShape::Model*, int, char**);
	void setupCallBack(SysShape::Model*, char*);
	void setParameters(IKSystemParms*);

	/**
	 * @brief Starts the programmed Inverse Kinematics (IK) system.
	 *
	 * This function activates the IK system and initializes its state. It then calculates the distance
	 * between the owner's position and the bottom joint position of each leg in the IK system.
	 * It also calculates the height of each leg based on the owner's facing direction and the position of the leg's bottom joint.
	 *
	 * @note This function assumes that the IK system has a fixed number of legs, defined by IK_LEG_COUNT.
	 */
	void startProgramedIK();
	void startIKMotion();
	void finishIKMotion();
	void forceFinishIKMotion();
	void startBlendMotion();
	void finishBlendMotion();
	void checkJointScaleOn();
	void checkJointScaleOff();
	bool isFinishIKMotion();
	void resetAnimationCallBack();
	void setAnimationCallBack();
	void doUpdate();
	void makeMatrix();
	Vector3f getCollisionCentre(int);
	bool isCollisionCheck(CollPart*);
	void updateController();
	void setNextCentrePosition();
	void calcFaceDir();
	void calcCentrePosition();
	void calcTraceCentrePosition();

	bool mIsIKActive;                          // _00
	bool mInMotion;                            // _01
	bool mOnGround;                            // _02
	f32 mFaceDir;                              // _04
	f32 mIKDistanceOffset;                     // _08, distance between object position and IK root position?
	f32 mLegHeight[IK_LEG_COUNT];              // _0C
	int mLegStates[IK_LEG_COUNT];              // _1C
	Vector3f mTargetPosition;                  // _2C
	Vector3f mCentrePosition;                  // _38, position applied to actual game object
	Vector3f mTraceCentrePosition;             // _44
	Vector3f mTraceCentreVelocity;             // _50
	Vector3f mLegTargetPosition[IK_LEG_COUNT]; // _5C
	IKSystemBase* mIKSystems;                  // _8C, list of 4
	EnemyBase* mOwner;                         // _90
	JointGroundCallBack* mJointGroundCallBack; // _94
	IKSystemParms* mParams;                    // _98
};

} // namespace Game

#endif
