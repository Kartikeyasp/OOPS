#ifndef multiply_H
#define multiply_H
#include "pred.h"
#include "sum.h"

//Objective: Multiply two non negative integers
//Inputs: Two non negative integers x(size_t) and y(size_t)
//Returns: Product of two non negative integers
size_t multiply(size_t x, size_t y)
{
    //Base case: y==0
    //Approach: Call the sum function with x and recursively call multiply function with x and predecessor of y till base case is reached.
    // x * y = x + x * y - 1
    // 4 * 3 = 4 + 4 * 2
    //       = 4 + 4 + 4 * 1
    //       = 4 + 4 + 4 + 4 * 0 = 12 
    if(y==0)
    {
        return 0;
    }

    return sum(x, multiply(x, pred(y)));
}

#endif