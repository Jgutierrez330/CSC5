/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 5:51 PM
 * Purpose: Inflation Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PERCENT =100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;            //Gives choice to run program again
    float prevcos,          //Previous cost
    currcos;                //Current cost
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>currcos;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevcos;
        cout<<"Inflation rate: "<<((currcos-prevcos)/prevcos)*PERCENT<<"%"<<endl;   //Calculates the rate of inflatioon
        cout<<endl;
        cout<<"Again:";                                                         //Allows program to run again
        cout<<endl;
        cin>>choice;
        if (choice == 'n')                                                          //Stops program
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');                                        //Reruns program
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}