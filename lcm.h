#ifndef lcm_H
#define lcm_H
#include "add.h"
#include "remainder.h"
#include "succ.h"

//Objective: Helper function for finding lcm
//Inputs: Three non negative integers x(size_t) and y(size) and mult(size_t)
//Returns: Lowest common multiple of two non negative numbers
size_t lcmhelper(size_t x, size_t y, size_t mult)
{
    //Approach: We have a third integer called mult which starts as x and increases in multiples x
    //          We check the remainder of both integers with multiple till base case is reached 
    //Base case: Remainder of (mult, x) == 0 and (mult, y) == 0
    if (remainder(mult, y) == 0 && remainder(mult, x) == 0)
    {
        return mult;
    }

    return lcmhelper(x, y, add(mult, x));
}

//Objective: Find the Lowest common multiple (LCM) of two non negative integers.
//Input: Two non negative integers x(size_t) and y(size_t)
//Returns: Lowest common multiple of two non negative numbers
size_t lcm(size_t x, size_t y)
{
    //Approach: Calls lcmhelper function with x(size_t), y(size_t) and x[(x*1) mult(size_t)] 
    return lcmhelper(x, y, x);
}

#endif