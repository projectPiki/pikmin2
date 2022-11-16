#include "KandoLib/Choice.h"
#include "Dolphin/rand.h"

/*
 * --INFO--
 * Address:	801F78C8
 * Size:	0000A8
 * A function for getting a random value from a set list of possible values with
 * their own probabilities
 */
u32 KandoLib::getRandomChoice(KandoLib::Choice* choices, int choiceAmt)
{
	float rngChance             = randFloat();
	KandoLib::Choice* curChoice = choices;
	float curChance             = 0.0f;

	for (int i = 0; i < choiceAmt; curChoice++, i++) {
		curChance += curChoice->m_chance;

		if (rngChance < curChance) {
			return choices[i].m_result;
		}
	}

	return choices[choiceAmt - 1].m_result;
}
