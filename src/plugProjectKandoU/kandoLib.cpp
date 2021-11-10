#include "KandoLib/Choice.h"
#include "Dolphin/stl.h"

/*
 * --INFO--
 * Address:	801F78C8
 * Size:	0000A8
 */
u32 KandoLib::getRandomChoice(KandoLib::Choice* choices, int choiceAmt)
{
	float rngChance             = rand() / 32768.0f;
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
