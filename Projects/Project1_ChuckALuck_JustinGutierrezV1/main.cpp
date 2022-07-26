/*
*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 20, 2022, 3:22 PM
 * Purpose: Project 1 - Chuck A Luck 
 *              *Will implement betting and more players into Project 2 
 *              as well as a board layout and option to bet on multiple #s
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    string start; 
    
    //Initialize Variables
    cout<<endl;
    cout<<setw(50)<<"Welcome to Chuck A Luck"<<setw(50)<<endl;
    cout<<endl;
    cout<<setw(30)<<"Enter Start to begin the game"<<setw(40)
            <<"Enter Exit to close the game"<<endl;
    cout<<endl;
    cin>>start;
   
    //Map inputs to outputs -> The Process
    if (start =="Start"|| start=="start"){
        cout<<"Gameplay";
        
    }
    if (start=="Exit" || start=="exit"){
        cout<<endl;
        cout<<"Thanks for Playing!";
        return 0;
      
    }
    //Display Results
    
    
    //Exit Stage right

    return 0;
}
