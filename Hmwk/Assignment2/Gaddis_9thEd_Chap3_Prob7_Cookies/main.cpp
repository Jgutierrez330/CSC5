/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 1:11 PM
 * Purpose: Cookies
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int cpCkie, //Calorie per cookies
    amtCkie,    // Amount of cookies
    totcal;     //Total calories of cookies
    
    
    //Initialize or input i.e. set variable values
    cin>>amtCkie;
    cpCkie=75; //75 calories per cookie
    
    //Map inputs -> outputs
    totcal=cpCkie*amtCkie; //Formula for total calories of cookies eaten
    
    
    //Display the outputs
    cout<<"Calorie Counter"<<endl;
cout<<"How many cookies did you eat?"<<endl;
cout<<"You consumed " <<totcal<<" calories.";

    //Exit stage right or left!
    return 0;
}
     