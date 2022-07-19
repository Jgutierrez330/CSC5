/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 4:38 PM
 * Purpose: Miles Per Gallon Problem
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
    char choice;                //Gives choice to continue calculating
    float miles,                //Miles driven
        liter;                  //Liters used
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<endl;
        cin>>liter;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        cout<<"miles per gallon:"<<endl
        <<(1/(liter*LITER))*(miles)<<endl;              //Calculates the miles per gallon 
        cout<<"Again:"<<endl;
        cin>>choice;
        if (choice == 'n')
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');
    return 0;
    
    
    
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}