#include "isaleapyear.h"

bool isaleapyear(int y)
{
    return !(y % 4u) && ((y % 100u) || !(y % 400u));
}
