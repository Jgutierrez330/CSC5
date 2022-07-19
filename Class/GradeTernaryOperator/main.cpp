/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 2, 2022, 6:43 PM
 * Purpose: GradeTernary Operator
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib> //Random Function Library
#include <ctime>   //Time Library 
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int score;//Score 50-100
    char grade;//Pass/Fail
    
    //Initialize Variables
    score=rand()%51+50;//(50-100)
    
    //Map inputs to outputs -> The Process
    grade=score>=90?'A':
            score>=80?'B':
            score>=70?'C':
            score>=60?'D':'F';//Ternary Operator
   
    
    //Display Results
    cout<<score<<" = "<<grade<<endl;
    
    //Exit Stage right
    return 0;
}

