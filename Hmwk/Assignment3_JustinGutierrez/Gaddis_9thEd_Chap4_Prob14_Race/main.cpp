/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 3:11 PM
 * Purpose: Race
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string name1,
           name2,
           name3;
    int time1, time2, time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    cin>>name1>>time1>>name2>>time2>>name3>>time3;              //Times and names of the runners
    
    //Map inputs -> outputs
    if (time1 > 0 && time2 > 0 && time3 > 0)
        if (time1 < time2 && time1 < time3)                 //Determines if runner one was first
            if (time2 < time3)
		{
                cout<<name1<<"\t"<<setw(3)<<time1<<endl;     //Determines if runner 2 is second and runner 3 was third
                cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                cout<<name3<<"\t"<<setw(3)<<time3;
		}
		else 
		{
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;     //Determines if runner 3 is second and runner 2 was third
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;
		cout<<name2<<"\t"<<setw(3)<<time2;
		}
		else if (time2 < time1 && time2 < time3)        //Determines if runner 2 was first
                    if (time1 < time3)
		{
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;    //Determines if runner 1 is second and runner 3 was third
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;
		cout<<name3<<"\t"<<setw(3)<<time3;
		}
		else
		{
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;    //Determines if runner 3 is second and runner 1 was third
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;
		cout<<name1<<"\t"<<setw(3)<<time1;
		}
		else 
                    if (time1 < time2)                      //Determines if runner 3 was first
		{
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;    //Determines if runner 1 is second and runner 2 was third
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;
		cout<<name2<<"\t"<<setw(3)<<time2;
		}
                else
		{
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;     //Determines if runner 2 is second and runner 1 was third
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;
		cout<<name1<<"\t"<<setw(3)<<time1;
		}
	else
	    cout<<"Time is invalid, Times cannot be less than the value of zero.";
    return 0;
}