#ifndef gcd_H
#define gcd_H
#include "remainder.h"


//Objective: Find the Greatest Common Divisor (GCD) of two non negative integers
//Input: Two non negative integers x(size_t) and y(size_t)
//Returns: Greatest Common Divisor of two non negative integers
size_t gcd(size_t x, size_t y)
{
    //Base case: y == 0
    //Approach: Using Euclidian algorithm.
    //Recursively call gcd function with x as y and y as remainder of x and y till base case is reached.
    if(y==0)
    {
        return x;
    }

    return gcd(y, remainder(x,y));
}

#endif