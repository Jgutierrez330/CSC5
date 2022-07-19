/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 6:15 PM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float acre,
        sizelnd,
        amtacre;//amount of acres
    
    //Initialize Variables
    acre=43560;//value of one acre in square feet
    sizelnd=391876;//amount of land in square feet
    
    //Map inputs to outputs -> The Process
   amtacre= sizelnd/acre;//Given amount of Land divided by size of acre
     
    
    //Display Results
    cout<< "Number of acres = "<<sizelnd<<" sq ft"<<" / "<<acre<<" sq ft = "
            <<setprecision(4)<<amtacre<<" acres"<<endl;
  

    
    
    //Exit Stage right
    return 0;
}

