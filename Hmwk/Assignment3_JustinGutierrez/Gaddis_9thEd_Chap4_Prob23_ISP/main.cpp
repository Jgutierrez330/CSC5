/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 3:51 PM
 * Purpose: ISP
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
    
    //Declare variables
    string package;     //package A,B, or C
    float  hours,       //Hours of internet
            price;      //Total price of service
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hours;
    
    //Map inputs -> outputs
    if ((package=="A") ||(package=="B") ||(package=="C")) {         //Determines which package was selected
    if (hours<=744) {                                               //Does not allow hours to go over 744
        if(package=="A"){
            if(hours>10){  
            price = 9.95+(hours-10)*2;                              //Fee for extra hours if variable hours is over the value of 10
        } else{
            price=9.95;                                             //Price if there are no extra hours
        }
   } else if (package=="B"){
        if(hours>20){
            price=14.95+(hours-20)*1;                           //Fee for extra hours if variable hours is over the value of 20
        } else {
            price=14.95;                                        //Price if there are no extra hours
        }
    } else {
        price = 19.95;                                          //Fee for Package C
    }
    }else {
        cout<<"Number of hours is invalid";                     //Output if hours is over 744
    }
    }
    
    //Display the outputs
    cout<<"Bill = $ "<<price;
    
    return 0;
}