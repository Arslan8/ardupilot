#include "Tracker.h"

// Functions to read the RC radio input

void Tracker::read_radio()
{
#if AP_RC_CHANNEL_ENABLED
    rc().read_input();
#endif 
}
