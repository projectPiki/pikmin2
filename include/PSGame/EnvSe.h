#ifndef _PSGAME_ENVSE_H
#define _PSGAME_ENVSE_H

#include "Dolphin/vec.h"
#include "PSSystem/EnvSeBase.h"
#include "types.h"
#include "Vector3.h"

struct J3DAnmBase;

namespace PSGame {
/**
 * @brief Represents a perspective environmental sound in the game.
 *
 * This struct inherits from the base class PSSystem::EnvSeBase and adds a vector
 * member variable to store the position of the sound in 3D space.
 */
struct EnvSe_Perspective : public PSSystem::EnvSeBase {
	/**
	 * @brief Constructs a new EnvSe_Perspective object.
	 *
	 * @param soundID The ID of the sound.
	 * @param volume The volume of the sound.
	 * @param pos The position of the sound in 3D space.
	 */
	EnvSe_Perspective(u32 soundID, f32 volume, Vec pos);

	/**
	 * @brief Plays the sound.
	 *
	 * @return A pointer to the JAISound object representing the playing sound.
	 */
	virtual JAISound* play(); // _0C

	Vec mPosition; // _3C
};

/**
 * @brief Represents a panning environmental sound in the game.
 *
 * This struct inherits from the base class PSSystem::EnvSeBase and adds two
 * member variables to control the panning and dolby effect of the sound.
 */
struct EnvSe_Pan : public PSSystem::EnvSeBase {
	/**
	 * @brief Enumeration representing the available options for Pan and Dolby.
	 */
	enum PanDolby {
		PD_Pan   = 0, /**< Pan option */
		PD_Dolby = 1, /**< Dolby option */
		PD_Count,     /**< Total number of options */
	};

	/**
	 * @brief Constructs a new EnvSe_Pan object.
	 *
	 * @param soundID The ID of the sound.
	 * @param volume The volume of the sound.
	 * @param pan The panning value of the sound.
	 * @param dolby The dolby value of the sound.
	 */
	EnvSe_Pan(u32 soundID, f32 volume, f32 pan, f32 dolby)
	    : PSSystem::EnvSeBase(soundID, volume)
	{
		mPanDolby[PD_Pan]   = pan;
		mPanDolby[PD_Dolby] = dolby;
	}

	/**
	 * @brief Sets the pan and Dolby settings for a given sound.
	 *
	 * This function is responsible for adjusting the pan (stereo balance) and Dolby settings
	 * for a specified sound. The sound is represented by the JAISound object passed as a parameter.
	 *
	 * @param sound A pointer to the JAISound object for which the pan and Dolby settings need to be set.
	 */
	virtual void setPanAndDolby(JAISound* sound); // _14

	f32 mPanDolby[PD_Count]; // _3C, 0=pan, 1=dolby
};

/**
 * @brief Represents an automatically panning environmental sound in the game.
 *
 * This struct inherits from the EnvSe_Pan struct and adds additional member variables
 * to control the direction and step values of the panning effect.
 */
struct EnvSe_AutoPan : public EnvSe_Pan {
	/**
	 * @brief Constructs a new EnvSe_AutoPan object.
	 *
	 * @param soundID The ID of the sound.
	 * @param pan The panning value of the sound.
	 * @param dolby The dolby value of the sound.
	 * @param volume The volume of the sound.
	 * @param panInc The increment value for panning.
	 * @param dolbyInc The increment value for dolby.
	 */
	EnvSe_AutoPan(u32 soundID, f32 pan, f32 dolby, f32 volume, f32 panInc, f32 dolbyInc);

	/**
	 * Sets the pan and Dolby settings for the specified JAISound.
	 *
	 * @param sound Pointer to the JAISound object.
	 */
	virtual void setPanAndDolby(JAISound* sound); // _14

	/**
	 * Sets the direction of the auto pan effect.
	 *
	 * @param isPanIncrease Whether the pan should increase or decrease.
	 * @param isDolbyIncrease Whether the Dolby effect should increase or decrease.
	 */
	void setDirection(bool isPanIncrease, bool isDolbyIncrease);

	f32 mStepValues[PD_Count];    // _44
	bool mIsIncreasing[PD_Count]; // _4C
};

/**
 * @brief Represents a builder for perspective environmental sounds.
 *
 * This struct inherits from the JKRDisposer class and is responsible for building
 * and managing perspective environmental sounds.
 */
struct Builder_EvnSe_Perspective : public JKRDisposer {
	/**
	 * @brief Constructs a new Builder_EvnSe_Perspective object.
	 *
	 * @param box The bounding box for the sound.
	 */
	Builder_EvnSe_Perspective(JGeometry::TBox3f box);

	/**
	 * @brief Destructor for the Builder_EvnSe_Perspective object.
	 */
	virtual ~Builder_EvnSe_Perspective(); // _08

	/**
	 * @brief Callback function called during the building process.
	 *
	 * This function is called during the building process and can be overridden in derived classes.
	 *
	 * @param envSeBase A pointer to the PSSystem::EnvSeBase object.
	 */
	virtual void onBuild(PSSystem::EnvSeBase*) { } // _0C (weak)

	/**
	 * @brief Creates a new instance of EnvSe_Perspective object.
	 *
	 * @param soundID The ID of the sound.
	 * @param volume The volume of the sound.
	 * @param pos The position of the sound in 3D space.
	 * @return A pointer to the newly created EnvSe_Perspective object.
	 */
	virtual EnvSe_Perspective* newSeObj(u32 soundID, f32 volume, Vec pos); // _10

	/**
	 * @brief Builds the perspective environmental sound.
	 *
	 * This function builds the perspective environmental sound using the specified volume and environmental sound manager.
	 *
	 * @param volume The volume of the sound.
	 * @param envSeMgr The environmental sound manager.
	 */
	void build(f32 volume, PSSystem::EnvSeMgr* envSeMgr);

	u8 _18;                 // _18
	int _1C;                // _1C, unknown
	int _20;                // _20, unknown
	JGeometry::TBox3f mBox; // _24
	f32 _3C;                // _3C
	PSSystem::IdList mList; // _40
};
} // namespace PSGame

#endif
