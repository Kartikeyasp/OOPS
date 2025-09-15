//pred.h
#ifndef pred_H
#define pred_H
#include "succ.h"

//Objective: To find the predecessor of a number
//Input: A non negative number x and a pred candidate (default 0)
//Returns: Predecessor of given number
size_t pred(size_t x, size_t pred_candidate = 0)
{
    //Base Case: If the successor of the predecessor candidate is equal to the given number return it   
    //Approach: Till the base case is reached call the preddecessor function with the given number and the successor of the predecessor candidate
    if(succ(pred_candidate) == x)
    {
        return pred_candidate;
    }
    else
    {
        return pred(x, succ(pred_candidate));
    }
}

#endif