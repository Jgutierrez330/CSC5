/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 8, 2022, 1:35 PM
 * Purpose: Sort Names
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
    string name1, name2, name3;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names"<<endl<<"Input 3 names"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    if (name1<name2 && name1<name3)     //Determines whether name 1 is first
    { 
        cout<<name1<<endl;
        if(name2<name3){                //Determines whether name 2 is second and name 3 is third
            cout<<name2<<endl<<name3;
        }
        else {                          //Determine whether name 3 is second and name 2 is third
            cout<<name3<<endl<<name2;   
        }
    }
    else if (name2<name1 && name2<name3){  //Determines whether name 2 is first
        cout<<name2<<endl;
        if(name1<name3)                     //Determines whether name 2 is second and name 3 is third
        {
            cout<<name1<<endl<<name3;
        }
        else                                 //Determine whether name 3 is second and name 2 is third
        {
            cout<<name3<<endl<<name1;
        }
    }
    else if (name3<name1 && name3<name2){ //Determines whether name 3 is first
        cout<<name3<<endl;
        if(name1<name2)                     //Determines whether name 2 is second and name 3 is third
        {
            cout<<name1<<endl<<name2;
        }
        else                                 //Determine whether name 3 is second and name 2 is third
        {
            cout<<name2<<endl<<name1;
        }
    }
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}