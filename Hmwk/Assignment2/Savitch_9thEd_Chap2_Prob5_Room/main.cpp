/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 5:29 PM
 * Purpose: Room Capacity
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global variables are allowed

//Math/Physics/Conversions/Higher Dimensions

//Function Prototypes

int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int maxPpl,
    numPpl;
    
    //Initialize or input i.e. set variable values
    cin>>maxPpl>>numPpl;
    
    //Map inputs -> outputs
   
    
    //Display the outputs
    cout<<"Input the maximum room capacity and the number of people"<<endl;
    if(maxPpl>=numPpl) 
    {
        cout<< "Meeting can be held."<<endl;
        cout<<"Increase number of people by "<<(maxPpl-numPpl)<<" will be allowed without violation.";
        
    }
    else
    { 
        cout<<"Meeting cannot be held."<<endl;
        cout<<"Reduce number of people by "<<(numPpl-maxPpl)<<" to avoid fire violation.";
    }
    

    //Exit stage right or left!
    return 0;
}

     