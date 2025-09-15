#ifndef minus_H
#define minus_H
#include "pred.h"

//Objective: To Subtract two number
//Input: Two non negative integers x(size_t) and y(size_t)
//Returns: Differenct between the two numbers

size_t minus(size_t x, size_t y)
{
  //Base Case: Smaller integer n=0
  //Approach: Call minus function reccrusively with predecessor of given integers till base case is reached.

  //Return 0 in case n is greater than m
  if(y > x)
  {
    return 0;
  }
  if(y==0)
  {
    return x;
  }
  else
  {
    return minus(pred(x), pred(y));
  }
}

#endif