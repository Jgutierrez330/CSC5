/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 2:19 PM
 * Purpose: Pay in pennies Problem
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
    unsigned int days, payDay, paySum;                      
    
    //Initialize or input i.e. set variable values
    cin>>days;      //Input for amount of days
    payDay=1;       //Pay day starts at one penny
    paySum=payDay;  //Sum is equal to amount of pennies
    
    //Map inputs -> outputs
    for(int day=2; day<=days; day++) {
        payDay*=2;
        paySum+=payDay;
                                                //Calculates amount of pennies
    }
    
    
    //Display the outputs
    int dollars=paySum/CNVDLRS;
    int pennies=paySum%CNVDLRS;                                             //Calcualtes dollars and pennies owed
    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"\0")<<pennies;

    //Exit stage right or left!
    return 0;
}