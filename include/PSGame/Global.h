#ifndef _PSGAME_GLOBAL_H
#define _PSGAME_GLOBAL_H

#include "types.h"

namespace PSSystem {
struct DirectedBgm;
}

/**
 * @brief Changes the swing state to Olimar (0).
 */
void PSPlayerChangeToOrimer();

/**
 * @brief Changes the swing state to Louie (1).
 */
void PSPlayerChangeToLugie();

/**
 * @brief Retrieves the main directed background music (BGM) for the PS game.
 *
 * This function checks the current scene manager and retrieves the first directed BGM sequence
 * from the active scene. The directed BGM sequence must have a cast type of 2, 3, or 4 to be considered
 * as the main BGM. If no suitable directed BGM sequence is found, nullptr is returned.
 *
 * @return A pointer to the main directed BGM sequence, or nullptr if not found.
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgm();

/**
 * @brief Retrieves the DirectedBgm object for the main background music.
 *
 * This function returns a pointer to the DirectedBgm object that represents the main background music in the game.
 *
 * @return A pointer to the DirectedBgm object for the main background music, or nullptr if no DirectedBgm object is found.
 */
PSSystem::DirectedBgm* PSGetDirectedMainBgmA();

/**
 * @brief Sets sToolMode to true.
 * @remark We are not quite sure what this function does.
 */
void PSSetBgmSelectAsToolMode();

#endif
