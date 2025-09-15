#ifndef remainder_H
#define remainder_H
#include "minus.h"

//Objective: Find remainder between two non negative integers
//Input: Two non negative integers x(size_t) and y(size_t)
//Returns: Remainder between two numbers
size_t remainder(size_t x, size_t y)
{
    //Base Case: x < y 
    //Approach: Recursively call remainder function with x as difference between x and y and y as it is till the base case is reached.
    if(x < y)
    {
        return x; 
    }

    return remainder(minus(x,y), y);
}


#endif