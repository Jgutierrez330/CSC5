/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 23, 2022, 11:51 AM
 * Purpose: Standard Deviation
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time to set random number seed
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float MAXRAND=pow(2,31)-1;

//Function Prototypes
void  init(float [],int);//Initialize the array
void  print(float [],int,int);//Print the array
float avgX(float [],int);//Calculate the Average
float stdX(float [],int);//Calculate the standard deviation

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=20;              //20 Values are inputed
    float test[SIZE];
    
    //Initialize or input i.e. set variable values
    cout<<fixed<<setprecision(7);
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,5);
   cout<<"The average            = "<<avgX(test,SIZE)<<endl;
    cout<<"The standard deviation = "<<stdX(test,SIZE)<<endl;

    //Exit stage right or left!
    return 0;
}

void init(float Aray[], int x){
     for(int i = 0 ; i < x; i++){                       //Initalizes the aray by input
        cin >> Aray[i];

     }
     
     
}
void print(float Aray[],int x,int perLine){
 
    for(int i=0;i<x;i++){
       
        if(i%perLine==(perLine-1));                             //Formats the aray properly
    }

}    

float avgX(float Aray[],int y){
   float sum=0;
    for( int i=0; i<y; i++){
        sum=sum+Aray[i];                                //Returns the sum of all values of the array
    }
    return sum/y;                                       //Ultimately returns the average by dividing by amount of terms
}   

float stdX(float Aray[],int y){
    float mean=avgX(Aray,y);
    float sum=0;
    for (int i=0;i<y;i++){
        sum=sum+(pow((Aray[i]-mean),2));                                //Formula for std before square root and division
    }
    sum=sum/(y-1);                                                      //Last pieces of std formula
    return sqrt(sum);
}