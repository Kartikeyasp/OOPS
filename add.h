#ifndef add_H
#define add_H
#include "succ.h"
#include "pred.h"

//Objective: Find the sum of two non negative numbers.
//Input: Two non negative numbers x(size_t) y(size_t)
//Returns: Sum of two non negative numbers 
size_t add(size_t x, size_t y)
{
    //Base Case: y==0
    //Approach: Recursively call add function with successor of x and predecessor of y till base case is reached
    if(y==0)
    {
        return x;
    }

    return add(succ(x), pred(y));
}

#endif