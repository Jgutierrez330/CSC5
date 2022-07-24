/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 23, 2022, 2:11 APM
 * Purpose: Linear Search
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
int linSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    val=50;                         //Value that is to be found via linear search
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
   
     
     cout<<val<<" was found at indx = "<<linSrch(array,SIZE,val)<<endl;
    //Exit stage right or left!
    return 0;
}
void fillAry(int Aray[], int x){                                            //Array is accepted and all values are taken
     for(int i = 0 ; i < x; i++){
        cin >> Aray[i];

     }
     }
void prntAry(int Aray[],int n,int perLine){
 
    for(int i=0;i<n;i++){
        if(i%perLine==(perLine-1));                             //Formats the array properly
    }

}    

int  linSrch(int Aray[],int n,int val){
    for(int i=0;i<n;i++){
        if(Aray[i]==val)return i;                               //Searches for value by matching to the given value
    }
    return -1;
}
