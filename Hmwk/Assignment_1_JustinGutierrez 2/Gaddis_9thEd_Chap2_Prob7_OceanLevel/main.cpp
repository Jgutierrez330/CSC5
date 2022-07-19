/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 4:18 PM
 * Purpose: Ocean Level Rising
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float riseOL;//Ocean Level rises in mm each year
    unsigned char nYrs1, nYrs2, nYrs3;//The three different set of years given
    float riseOL1, riseOL2, riseOL3;//Ocean level increases 
    
    //Initialize Variables
    riseOL=1.5;//Level that Ocean rises each year
    nYrs1=5;
    nYrs2=7;
    nYrs3=10;
    
    //Map inputs to outputs -> The Process
    riseOL1= nYrs1*riseOL;
    riseOL2=nYrs2*riseOL;
    riseOL3=nYrs3*riseOL;
    
    //Display Results
    cout<<"Rise of Ocean Level after 5 years  =  "<<riseOL1<<" mm/year"<<endl;
    cout<<"Rise of Ocean Level after 7 years  = "<<riseOL2<<" mm/year"<<endl;
    cout<<"Rise of Ocean Level after 10 years =   "<<riseOL3<<" mm/year"<<endl;
    
    
    //Exit Stage right
    return 0;
}

