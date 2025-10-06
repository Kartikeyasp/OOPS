#ifndef fibbonacci_H
#define fibbonacci_H
#include "add.h"
#include "pred.h"
#include<iostream>


/// @brief To find the fibbonachi series element for the given number
/// @param n element number of the value required
/// @return value of current fibbonachi series element
int fibbonacci_helper(size_t n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else return add(fibbonacci_helper(pred(n)),fibbonacci_helper(pred(pred(n))));
}


/// @brief Prints fibbonachi series
/// @param n number of elements required in the series
void fibbonacci(size_t n)
{
    for(int i=0; i<n; i++)
    {
        std::cout<<fibbonacci_helper(i)<<" ";
    }
    std::cout<<std::endl;
}

#endif