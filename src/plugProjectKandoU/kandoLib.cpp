#include "KandoLib/Choice.h"
#include "Dolphin/rand.h"

/**
 * @note Address: 0x801F78C8
 * @note Size: 0xA8
 * A function for getting a random value from a set list of possible values with
 * their own probabilities
 */
u32 KandoLib::getRandomChoice(KandoLib::Choice* choices, int choiceAmt)
{
	f32 rngChance               = randFloat();
	KandoLib::Choice* curChoice = choices;
	f32 curChance               = 0.0f;

	for (int i = 0; i < choiceAmt; curChoice++, i++) {
		curChance += curChoice->mChance;

		if (rngChance < curChance) {
			return choices[i].mResult;
		}
	}

	return choices[choiceAmt - 1].mResult;
}
