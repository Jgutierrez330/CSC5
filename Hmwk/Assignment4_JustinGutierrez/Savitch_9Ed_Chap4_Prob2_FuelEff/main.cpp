/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 5:42 PM
 * Purpose: Fuel efficiency problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float LITER = 0.264179;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;            //Gives choice to run calcualtion Again
    float miles,            //Miles driven for car 1
        miles1,             //Miles driven for car 2
        liter,              //Liters used for car 1
        liter1;             //Liters used for car 2
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: "<<(1/(liter*LITER))*(miles)<<endl;    //Calculates the MPG for car number one
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        cout<<"miles per gallon: "<<(1/(liter1*LITER))*(miles1)<<endl;  //Calculates MPG for car number 2
        cout<<endl;
       
        if ((1/(liter*LITER))*(miles)>(1/(liter1*LITER))*(miles1)){     //Determines if  car 1  is more fuel efficient
        cout<<"Car 1 is more fuel efficient"<<endl;
        }
        if ((1/(liter*LITER))*(miles)<(1/(liter1*LITER))*(miles1)){     //Determines if car 2 is more fuel efficient 
        cout<<"Car 2 is more fuel efficient"<<endl;
        }
        cout<<endl;
        cout<<"Again:"<<endl;                                           //Runs calculation again or stops
        cin>>choice;
        if (choice == 'n')
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');
   
    
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}