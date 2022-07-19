/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 1:41 PM
 * Purpose: Insurance
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
    
    //Declare Variables
    float minIns, //Minimum Insurance
    homeVal,      //Value of home 
    insReq;       //Insurance requried 
    
    
    //Initialize or input i.e. set variable values
    cin>>homeVal;
    minIns=.80e0f; //80% insurance value
    
    //Map inputs -> outputs
    insReq=homeVal*minIns; //Formula for insurance requried
    
    //Display the outputs
   cout<< "Insurance Calculator"<<endl;
cout<<"How much is your house worth?"<<endl;
cout<<"You need $"<<insReq<<" of insurance.";

    //Exit stage right or left!
    return 0;
}
     