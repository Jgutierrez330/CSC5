/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 2:47 PM
 * Purpose: Min Max Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc..
const unsigned char CNVDLRS=100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
       //Declare Variables
    int min,
        max,
        num;
    
    //Initialize or input i.e. set variable values
    min=10000000;
    max=0;
    num=0;
    //Map inputs -> outputs
    while(num != -99) {
        cin>>num;
        if(num==-99)break;  //Signals the end of a series
        if(num>max)             //Calculates the max
        max=num;
        if(num<min)                 //Calculates the min
        min=num;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;

    //Exit stage right or left!
    return 0;
}