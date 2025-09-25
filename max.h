#ifndef max_H
#define max_H
#include "pred.h"
#include "succ.h"


/// @brief Function to find max of two non negative integers
/// @param x non negative integer (size_t)
/// @param y non negative integer (size_t)
/// @return Max of two numbers
size_t max(size_t x, size_t y)
{
    /// @details 
    /// If x = 0 return y
    /// If y = 0 return x
    /// Otherwise reccursively call the max function with predecessor of x and y till one of them
    /// becomes zero then successor of the other number is returned till the original number is 
    /// recovered
    if(x == 0) return y;
    if(y == 0) return x;
    return succ(max(pred(x), pred(y)));
}


#endif