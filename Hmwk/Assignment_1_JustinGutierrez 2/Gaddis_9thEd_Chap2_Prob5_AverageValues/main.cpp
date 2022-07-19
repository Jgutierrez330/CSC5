/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 3:21 PM
 * Purpose: Average of values
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float num1,//Variable 1
        num2,//Variable 2
        num3,//Variable 3
        num4,//Variable 4
        num5,//Variable 5
        divNum,//Number to divide the sum of variables
        sum,//Sum of all variables
        sumAvg;//Average of all variables
        
           
    
    //Initialize Variables
    num1=28;//Variable 1 is 28
    num2=32;//Variable 2 is 32
    num3=37;//Variable 3 is 37
    num4=24;//Variable 4 is 24
    num5=33;//Variable 5 is 33
    divNum=5;//Divide the sum by 5
     
    //Map inputs to outputs -> The Process
    sum = num1+num2+num3+num4+num5;//Sum of all 5 variables
    sumAvg = (num1+num2+num3+num4+num5)/divNum;//Formula for average
    
    //Display Results
    cout<<"Sum of Variables     = "<<sum<<endl;
    cout<<"Average of Variables = "<<sumAvg<<endl;
    
    //Exit Stage right
    return 0;
}

