/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 12, 2022, 7:31 PM
 * Purpose: Sum Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    ///Declare Variables
    int sum,            //The sum of numbers
        num;            //Number inputted
    
    //Initialize or input i.e. set variable values
    sum= 0;         //Set sum to zero
    
    //Map inputs -> outputs
    do {
        cin>>num;                                       //Input number
    
    } while (num<0);
    
    for (int count =1; count <= num; count++)
    {
        sum+=count;                                         //Calculates the sum of input
    }
    
    //Display the outputs
cout<< "Sum = "<<sum;
    //Exit stage right or left!
    return 0;
}