/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 3:58 PM
 * Purpose: Paycheck
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int payRate, //Rate of pay in $'s/hr 
          hrsWrkd;// Hours Worked
    float payChck;//Paycheck in $'s
          
          
    
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck."<<endl;
    cout<<"Input the pay rate in $'s/hr and the number of hours."<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs
    payChck= hrsWrkd * payRate;//Straight time calculation
    payChck+= hrsWrkd>40?
                (hrsWrkd-40)*payRate:0;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<payChck;

    //Exit stage right or left!
    return 0;
}
     