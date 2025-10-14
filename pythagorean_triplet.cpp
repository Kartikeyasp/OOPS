#include<iostream>
#include<vector>

/// @brief Given a pythagorean triplet return the next pythagorean triplet
/// @param b base of pythagorean triplet (int)
/// @param p perpendicular of pythagorean triplet (int)
/// @param h height of pythagorean triplet (int)
/// @return A vector with the next pythagorean Triplet 
std::vector<int> pythagoreanTriplet(int b, int p, int h)
{
    if(!(h*h == p*p + b*b))
    {
        std::cout<<"Given integers are not a pythagorean triplet";
        return {};
    }

    bool flag = false;
    
    std::vector<int> ans;

    while(!flag)
    {
        h++;
        int x = 1;
        int y = h-1;
        
        while(x<=y)
        {
            if(h*h == x*x + y*y)
            {
                flag = true;
                ans.push_back(x);
                ans.push_back(y);
                ans.push_back(h);
                return ans;
            }

            if(x*x + y*y > h*h)
            {
                y--;
            }
            else if(x*x + y*y < h*h)
            {
                x++;
            }
        }

    }
    return {};
}


int main()
{
    auto res = pythagoreanTriplet(6,8,10);
    std::cout<<"Next triplet: ";
    for(int x : res) std::cout <<x<<" ";
    return 0;
}