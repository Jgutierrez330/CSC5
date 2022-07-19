/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 4:29 PM
 * Purpose: Diet Coke
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
const float PERCENT = .001f;
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float dieter, //Weight of dieter in lbs
    lbsGrm, //lbs to grams conversion
    grmDiet, // weight of dieter in grams
    lthlM, //lethal dose for mouse in grams
    lthlD, //lethal dose for dieter in grams
    massM, //mass of mouse in grams
    doseRto, // Lethal dose ratio
    sodaMss, //masss of soda
    numSoda, //number of sodas
    artSweet; //Amount of artifical sweetner in each soda
    
    
    //Initialize or input i.e. set variable values
    cin>>dieter;
    lbsGrm=0.453592e3f; //Conversion to grams
    lthlM=5; //Lethal dose for mouse in grams
    massM=35; //mass of mouse  in grams
    sodaMss=350; //Mass of soda in grams
    
    //Map inputs -> outputs
    grmDiet=dieter*lbsGrm; //formula for dieter weight in grams
    doseRto=lthlM/massM; //formula for lethal dose ratio
    lthlD=grmDiet*doseRto; // lethal dose for dieter formula
    artSweet=sodaMss*PERCENT; //amount of artifical sweetner in each can
    numSoda=(lthlD/artSweet)-1; //number of sodas dieter can consume

    //Display the outputs
    cout<<fixed<<setprecision(0);
    cout<<"Program to calculate the limit of Soda Pop Consumption."<<endl;
cout<<"Input the desired dieters weight in lbs."<<endl;
cout<<"The maximum number of soda pop cans"<<endl;
cout<<"which can be consumed is " <<numSoda<<" cans";

    //Exit stage right or left!
    return 0;
}