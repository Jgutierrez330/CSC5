/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 3, 2022, 12:35 PM
 * Purpose: Average 
 */

//System Libraries
#include <iostream> 
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
    float a,b,c,d,e, //Five test scores
    sum, // Sum of test scores
    avg; // average of test scores
        
        
    //Initialize or input i.e. set variable values
    cin>>a>>b>>c>>d>>e;
    
    //Map inputs -> outputs
    sum =a + b +c+d+e; //Sum formula for test scores
    avg=sum/5; //average formula for test scores
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<< "Input 5 numbers to average."<<endl;
    cout<<"The average = "<<avg;

    //Exit stage right or left!
    return 0;
}
     