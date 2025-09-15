#ifndef divide_H
#define divide_H
#include "succ.h"
#include "minus.h"


//Objective: Divide two non negative integers. 
//Input: Two non negative integers x(size_t) and y(size_t)
//Returns: Quotient of the two numbers
size_t divide(size_t x, size_t y)
{
    //Base case: x < y
    //Approach: Recursively call divide function with x as difference of x and y and y and find how many times this function was called by using successor function.
    //The number of times y was subtracted from x before x became less than y is the quotient of the two numbers
    if(x < y)
    {
        return 0;
    }

    return succ(divide(minus(x, y), y));
}

#endif