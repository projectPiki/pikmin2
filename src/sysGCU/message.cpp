#include "ctype.h"
#include "P2JME/P2JME.h"

namespace P2JME {

/**
 * @note Address: 0x8043D32C
 * @note Size: 0x48
 */
void convertU64ToMessageID(u64 inID, u32* messageID, u32* variantID)
{
	inID = inID << 8;
	convertCharToMessageID((char*)(&inID), messageID, variantID);
}

/**
 * @note Address: 0x8043D374
 * @note Size: 0x128
 */
void convertCharToMessageID(char* str, u32* messageID, u32* variantID)
{
	*variantID = 0;
	*messageID = 0;
	for (int i = 0; i < 4; i++) {
		if (isdigit(str[i])) {
			*messageID = str[i] + *messageID * 10 - '0';
		}
	}
	for (int i = 5; i < 7; i++) {
		if (isdigit(str[i])) {
			*variantID = str[i] + *variantID * 10 - '0';
		}
	}
}
} // namespace P2JME
