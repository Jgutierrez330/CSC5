/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 2:37 PM
 * Purpose: Temperature
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include<iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float tempcon, //Temperature conversion
    fhrnTem,       //Temperature in Fahrenheit
    celsTem;       //Temperature in celsius
    
    //Initialize or input i.e. set variable values
    cin>>fhrnTem;
    
    //Map inputs -> outputs
    tempcon=fhrnTem-32; //First half of Temperature conversion
    celsTem=(5*tempcon)/9; //Second half of temperature conversion
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
   cout<< "Temperature Converter"<<endl;
cout<< "Input Degrees Fahrenheit"<<endl;
cout<<fhrnTem<<" Degrees Fahrenheit = "<<celsTem<<" Degrees Centigrade";

    //Exit stage right or left!
    return 0;
}