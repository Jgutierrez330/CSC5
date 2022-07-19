/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 3:22 PM
 * Purpose: Rectangle Problem
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
    int num, Rnum, Cnum;
    char lett;
    
    //Initialize or input i.e. set variable values
    cin>>num>>lett;             //Input for amount and what letter
    //Map inputs -> outputs
    while (num<1 || num>15) {
        cout<<"Input is Invalid, number must be between 1 and 15";
        cin>>num>>lett;                                                     //Input cannot be greater than 15 or less than 1
    }
    for (Cnum=1; Cnum<num; Cnum++){
        for (Rnum=1; Rnum<=num; Rnum++)         //Rows and columns of output up until the last row
        {
            cout<<lett;
        }
        cout<<endl;
    }
    for( ; Cnum==num; Cnum++){              //Last row and columns
        for (Rnum=1; Rnum<=num; Rnum++)
        {
            cout<<lett;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}