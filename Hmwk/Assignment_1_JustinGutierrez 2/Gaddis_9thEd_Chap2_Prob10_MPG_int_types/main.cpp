/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 12:59 PM
 * Purpose: MPG
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
    unsigned short mlsDrvn;//Miles Driving
    unsigned char mpg,//Miles per Gallon
               nGalns;//Number of Gallons to fill tank
       
    //Initialize Variables
    mlsDrvn=375;//375 Miles Driving on a tank of gas
    nGalns=15;  //Number of Gallons to fill a car
    
    //Map inputs to outputs -> The Process
    mpg=mlsDrvn/nGalns;
 
    //Display Results
    cout<<static_cast<int>(mpg)<<" miles per gallon = "
        <<mlsDrvn<<" miles driving / "
        <<static_cast<int>(nGalns)<<" Gallons used"<<endl;
    
    //Exit Stage right
    return 0;
}