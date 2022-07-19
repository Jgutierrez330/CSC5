/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 6:32 PM
 * Purpose: Highway and Town Gas 
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
    float gasTnk,//Size of Gas tank
        avgTwn,//Average gas mileage on town
        avgHwy,//Average gas mileage on highway
        disTwn,//Distance in miles on town roads
        disHwy;//Distance in miles on highway
    
    //Initialize Variables
    gasTnk=20;//Gas tank is 20 gallons
    avgTwn=2.35e1f;//Gas Mileage in town
    avgHwy=2.89e1f;//Gas mileage on highway
    
    //Map inputs to outputs -> The Process
    disTwn=gasTnk*avgTwn;//Total Distance in town
    disHwy=gasTnk*avgHwy;//Total Distance on Highway
     
    
    //Display Results
    cout<<"Number of Miles Driving on Town Roads = "<<gasTnk<<" * "<<avgTwn
            <<" = " <<disTwn<<" Miles"<<endl;
    cout<<"Number of Miles Driving on Highway    = "<<gasTnk<<" * "<<avgHwy
            <<" = " <<disHwy<<" Miles"<<endl;
    
    
    
    //Exit Stage right
    return 0;
}

