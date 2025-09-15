#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

//=======================================
//Inputs: count(int) number of integers to read
//Returns: Total sum of numbers
//Side Effects: Interacts with standared input/output streams
//=======================================

int sum(int count)
{
    //Approach: prompts the user for a specified number of integers and iteratively reads and sums them.

    int total = 0;
    cout<<"Please enter "<<count<<" ntegers.\n";

    for(int i=0; i<count; i++)
    {
        int number;
        cout<<"Enter number "<<(i+1)<<" :";
        cin>>number;
        total+= number;
    }

    return total;
}


//=======================================
//Objective: To serve as the main driver of the program
//Approach: Prompts the user for the number of items to sum, calls the sum function and displays the final result.
//=======================================

int main()
{
    int count;

    cout<<"Enter the number of integers you want to sum:";
    cin>>count;

    //Call the sum function to get the total
    int result = sum(count);

    //Display the final result 
    cout<<"\nThe sum of the"<<count<<"numbers is:"<<result<<endl;
    return 0;
}


