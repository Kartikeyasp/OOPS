#ifndef sum_H
#define sum_H
#include "succ.h"
#include "pred.h"

size_t sum(size_t x, size_t y)
{
    if(y==0)
    {
        return x;
    }

    return sum(succ(x), pred(y));
}

#endif