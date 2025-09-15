//Program: Rectangle area calculator
//Description: This program calculates the area of a rectangle using a class

#include<iostream>
#include<format>
using namespace std;

//Objective: To represent a rectangle with length and breadth and provide a function to find its area
//Input: length (double), breadth (double)
class Rectangle{
    //Objective: store dimentions of rectangle with controlled access
    private: 
        double length, breadth;
    
    public:
        //Constructor to initialize dimentions of rectangle
        Rectangle(double length, double breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }

        //Getter function for length
        double getLength() const
        {
            return length;
        }

        //Getter function for breadth
        double getBreadth() const
        {
            return breadth;
        }

        //Function to calculate area of rectangle
        //Returns area of rectangle (double)
        double areaRect()
        {
            //Multiplies length and breadth to calculate area
            return length*breadth;
        }
};


//Main function to demonstrate the functionality of Rectangle class
//It creates objects of Rectangle class, sets its dimentions and calculates its area.
int main()
{  
    double length, breadth; 

    //Prompt and get user input for length and breadth
    cout<<"Enter length of rectangle:";
    cin>>length;
    cout<<"Enter breadth of rectangle:";
    cin>>breadth;

    //Create a Rectangle object with user input
    Rectangle rect1(length,breadth);

    //Print the dimentions and area of rectangle
    cout<<"Using cout";
    cout<<"Breadth:"<<rect1.getBreadth()<<endl;
    cout<<"Height:"<<rect1.getLength()<<endl;
    cout<<"Area:"<<rect1.areaRect()<<endl;

    cout<<"Using Format"<<endl;
    cout<<format("Breadth: {} \nHeight: {} \nArea: {}", rect1.getBreadth(), rect1.getLength(), rect1.areaRect());
    return 0;    
}