#include "swap.hpp"

void swap(int32_t& x, int32_t& y)
{
    int z = x;
    x = y;
    y = z;
}
