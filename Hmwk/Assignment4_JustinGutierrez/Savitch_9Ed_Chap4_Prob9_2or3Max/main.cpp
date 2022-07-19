/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 6:29 PM
 * Purpose: 2 or 3 max Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes
float max(float num1, float num2);  //Takes two float parameters
float max(float num1, float num2, float num3);  //Takes three float parameters

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3;
    
    //Initialize or input i.e. set variable values
    cin>>num1>>num2>>num3;

//Map inputs -> outputs
cout<<"Enter first number:"<<endl;
cout<<endl;
cout<<"Enter Second number:"<<endl;
cout<<endl;
cout<<"Enter third number:"<<endl;
cout<<endl;

  // Calculates the max of two numbers
{                                      
    cout<<"Largest number from two parameter function:"<<endl;
    if(num1 > num2)
    {
        cout<< num1;                                                    // Outputs number 1 if it is the largest.
        cout<<endl;
    }
    else
    {
        cout<< num2;                                                    // Outputs number 2 if it is the largest.
        cout<<endl;
    }
}


   //Calculates the max out of three numbers
{                          
    cout<<endl;
    cout<<"Largest number from three parameter function:"<<endl;
    if(num1 > num2 and num1 > num3)
    {
        cout<< num1<<endl;                                           // Outputs number 1 if it is greater than number 2 and 3.
    }
    else if(num2 > num1 and num2 > num3)
    {
        cout<< num2<<endl;                                       // Outputs number 2 if it is greater than number 1 and 3.
    }
    else if(num3 > num1 and num3 > num2)
    {
        cout<< num3<<endl;                                       // Outputs number 3 if it is greater than number 1 and 2.
    }   
}
    //Display the outputs

    //Exit stage right or left!
    return 0;
}