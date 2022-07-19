/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 3:17 PM
 * Purpose: Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle, //Angle input
    degconv, //Conversion from radian to degrees
    conVal1,  //Converted value from radian to degrees
    conVal2, //Converted value from radian to degrees
    conVal3;//Converted value from radian to degrees
    
    
    //Initialize or input i.e. set variable values
    cin>>angle;
    degconv=(M_PI/180); //Formula for conversion to degrees

    //Map inputs -> outputs
    conVal1=sin(angle*degconv); //Formula for converted value in degrees
    conVal2=cos(angle*degconv);//Formula for converted value in degrees
    conVal3=tan(angle*degconv);//Formula for converted value in degrees
    
    //Display the outputs
cout<<"Calculate trig functions"<<endl;    
  cout<<"Input the angle in degrees."<<endl;
  cout<<"sin"<< "("<<angle<<")"<<fixed<<setprecision(4)<<
  " = "<<conVal1<<endl;
  cout<<"cos"<< fixed<<setprecision(0)<<"("<<angle<<")"<<setprecision(4)<<
  " = "<<conVal2<<endl;
  cout<<"tan"<< fixed<<setprecision(0)<<"("<<angle<<")"<<fixed<<setprecision(4)<<
  " = "<<conVal3;

    //Exit stage right or left!
    return 0;
}