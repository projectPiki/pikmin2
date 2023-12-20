#include "types.h"

#include "Dolphin/os.h"
#include "System.h"

/**
 * @note Address: 0x804111B4
 * @note Size: 0x50
 */
int main()
{
	OSReport("bootup -----------------------\n");

	System::initialize();
	return (new System())->run();
}
