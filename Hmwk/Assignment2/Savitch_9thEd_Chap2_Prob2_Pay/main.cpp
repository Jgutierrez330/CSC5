/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 6:21 PM
 * Purpose: Pay
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float payInc = 0.0076e1f;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float prevSal, //Previous salary
    retrPay,        //Retroactive pay
     NewAnnl,       //New Annual salary
    NewMon,         //new monthly salary
    salInc;         //Salary increase
   
    
    //Initialize or input i.e. set variable values
    cin>>prevSal;
    
    
    //Map inputs -> outputs
     NewAnnl=(prevSal*payInc)+prevSal; //Formula for new annual Salary
     salInc = NewAnnl- prevSal;         //Salary increase Formula
    retrPay=salInc/2;                   //Retroactive pay Formula
    NewMon=NewAnnl/12;                  //New monthly salary Formula

    
    //Display the outputs
   cout<< "Input previous annual salary."<<endl;
   cout<<fixed<<setprecision(2)<<showpoint;
cout<<"Retroactive pay    = $"<<setw(7)<<retrPay<<endl;
cout<<"New annual salary  = $"<<setw(6)<<NewAnnl<<endl;
cout<<"New monthly salary = $"<<setw(7)<<NewMon;


    //Exit stage right or left!
    return 0;
}

