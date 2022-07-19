/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 3:58 PM
 * Purpose: Pattern Problem
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
    int size;
    
    //Initialize or input i.e. set variable values
    cin>>size;
    
    //Map inputs -> outputs
    for (int rows =1; rows<=size; rows++){
        for (int cols=1;cols<=rows; cols++){                //Calculates up until the maximum amount of symbols 
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    
    for (int rows=1; rows<=size; rows++){
        for (int cols=1; cols <=size+1-rows; cols++){       //Decreases gradulally from the maximum amount
            cout<<"+";
        }
        if(rows<size )cout<<endl<<endl;
    }
    //Display the outputs

    //Exit stage right or left!
    return 0;
}