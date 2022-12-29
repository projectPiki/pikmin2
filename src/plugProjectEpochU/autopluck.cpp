#include "Game/Navi.h"
#include "Game/NaviState.h"


namespace Game {
    void autopluck(NaviWalkState* walkstate, Navi* captain)
    {
        captain->procActionButton();
        walkstate->execAI(captain);
    }
}; // namespace Game