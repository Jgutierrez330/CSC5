/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on June 26, 2022, 7:16 PM
 * Purpose: Sums
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
    int num1, //First value
        num2, //Second value
        num3, //Third value
        num4, //Fourth value
        num5, //Fifth value
        num6, //Sixth value
        num7, //Seventh value
        num8, //Eigth value
        num9, //Ninth value
        num10, //Tenth value
        posSum,//Sum of positive numbers
        negSum,//Sum of negative numbers
        totSum;//Total sum of all numbers
    
    //Initialize or input i.e. set variable values
    posSum=0;
    negSum=0;
    
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    cin>>num6;
    cin>>num7;
    cin>>num8;
    cin>>num9;
    cin>>num10;

    //Map inputs -> outputs
    posSum+=num1>=0?num1:0;
    posSum+=num2>=0?num2:0;
    posSum+=num3>=0?num3:0;
    posSum+=num4>=0?num4:0;
    posSum+=num5>=0?num5:0;
    posSum+=num6>=0?num6:0;
    posSum+=num7>=0?num7:0;
    posSum+=num8>=0?num8:0;
    posSum+=num9>=0?num9:0;
    posSum+=num10>=0?num10:0;
      
    
    negSum+=num1<0?num1:0;
    negSum+=num2<0?num2:0;
    negSum+=num3<0?num3:0;
    negSum+=num4<0?num4:0;
    negSum+=num5<0?num5:0;
    negSum+=num6<0?num6:0;
    negSum+=num7<0?num7:0;
    negSum+=num8<0?num8:0;
    negSum+=num9<0?num9:0;
    negSum+=num10<0?num10:0;
    
    totSum=(posSum+negSum);
    
    
    //Display the results
   cout<< "Input 10 numbers, any order, positive or negative"<<endl;
cout<<"Negative sum ="<<setw(4)<<negSum<<endl;
cout<<"Positive sum ="<<setw(4)<<posSum<<endl;
cout<<"Total sum    ="<<setw(4)<<totSum;


}