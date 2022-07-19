/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 27, 2022, 5:35 PM
 * Purpose: Lab 1 Minimize Fuel Costs
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
    short gasTnk,  //Size of Gas Tank in Gallons
          gasMpg,  //Gas Miles Per Gallons
          mlsGas1, //Miles to Gas Station 1
          mlsGas2, //Miles to Gas Station 2
          totDis1, //Total distance driven back and forth from Gas Station 1
          totDis2, //Total distance driven back and forth from Gas Station 2
          cstRnd1; //Specific Cost for round trip to Gas Station 1
    
    
    float gasMtr,     //Gas Meter
          gasReq,     //Amount of Gas required from gas station
          prcGas1,    //Price at Gas Station 1
          prcGas2,    //Price at Gas Station 2
          cstGas1,    //Cost to fill up at Gas Station 1
          cstGas2,    //Cost to fill up at Gas Station 2
          cstRnd2,    //Specific Cost for round trip to Gas station 2    
          totCst1,    //Total cost for round trip to Gas Station 1 included
          totCst2,    //Total cost for round trip to Gas Station 2 included
          ppgRnd1, //Price per gallon with round trip to Gas Station 1 included
          ppgRnd2; //Price per gallon with round trip to Gas Station 2 included
    
    
    //Initialize Variables
    gasTnk=22;       //Size of Gas Tank in Gallons
    gasMpg=17;       //Car's Miles Per Gallons
    mlsGas1=10;      //10 miles to Gas Station 1
    mlsGas2=20;     // 20 Miles to Gas Station 2
    gasMtr=7.5e-1f; //Gas Meter is 75% full
    prcGas1=4.25e0f;  //Gas is $4.25 a gallon at Gas Station 1
    prcGas2=4.09e0f;  // Gas is $4.09 a gallon at Gas Station 2
  
    
    //Map inputs to outputs -> The Process
    gasReq = gasTnk*(1-gasMtr);
    cstGas1 =  prcGas1*gasReq;
    totDis1 = 2*mlsGas1;
    cstRnd1 = (static_cast<float>(totDis1)/gasMpg)*prcGas1;
    totCst1 = cstRnd1+cstGas1;
    ppgRnd1 = totCst1/gasReq;
    
    cstGas2 =  prcGas2*gasReq;
    totDis2 = 2*mlsGas2;
    cstRnd2 = (static_cast<float>(totDis2)/gasMpg)*prcGas2;
    totCst2 = cstRnd2+cstGas2;
    ppgRnd2 = totCst2/gasReq;
    
    //Display Results
    
    cout<<"Gas required to fill up at Gas Stations = "
            <<gasReq<<" gallons"<<endl;
    cout <<"-----------------------------------------------------" <<endl;
    cout<< setw(25)<<" Gas Station 1" <<setw(25)<<endl;
     cout<<setprecision(2)<<fixed;
    
    cout<< "Cost to fill up at Gas Station 1 = $" <<cstGas1<<endl;
    cout<< "The round trip distance to Gas Station 1 is " <<totDis1<< " Miles"
            <<endl;
    cout<< "The Cost of the round trip to Gas Station 1 is $"<<cstRnd1<<endl;
    cout << "The total cost to fill up at Gas Station 1 with the "
            "cost of the round trip included is $" <<totCst1<<endl;
    cout<< "The price per gallon at Gas Station 1 adjusted for the "
            "round trip is $" <<ppgRnd1<<endl;
    
     cout <<"-----------------------------------------------------" <<endl;
     cout<< setw(25)<<" Gas Station 2" <<setw(25)<<endl;
    
    
    cout<< "Cost to fill up at Gas Station 2 = $" <<cstGas2<<endl;
    cout<< "The round trip distance to Gas Station 2 is " <<totDis2<< " Miles"
            <<endl;
    cout<< "The Cost of the round trip to Gas Station 2 is $"<<cstRnd2<<endl;
    cout << "The total cost to fill up at Gas Station 2 with the "
            "cost of the round trip included is $" <<totCst2<<endl;
    cout<< "The price per gallon at Gas Station 2 adjusted for the "
            "round trip is $" <<ppgRnd2<<endl;
            
        
    
    //Exit Stage right
    return 0;
}

