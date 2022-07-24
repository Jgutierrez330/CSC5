/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 23, 2022, 10:11 AM
 * Purpose: Reverse Array
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

//Function Prototypes
void  init(int [],int);//Initialize the array
void  print(int [],int,int);//Print the array
void  revrse(int [],int);;//Reverse the array


//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned>(time(0)));
    
    //Declare Variables
    const int SIZE=50;
    int test[SIZE];
    
    //Initialize or input i.e. set variable values
    init(test,SIZE);
    
    //Display the outputs
    print(test,SIZE,10);
    
    //Reverse the Values
    revrse(test,SIZE);
    
    //Display the outputs
    //print(test,SIZE,10);

    //Exit stage right or left!
    return 0;
}
void init(int Aray[], int x){
     for(int x = 0 ; x < 50; x++){                      //Inputs the array in its standard format
        cin >> Aray[x];

     }
}
     
     void print(int Aray[],int x,int perLine){
 
    for(int i=0;i<x;i++){
       
        if(i%perLine==(perLine-1));                         //Prints the aray
    }

}    

void  revrse(int Aray[],int i ){
     for (int i = 49; i >= 0 ; i--)                         //Reverses the aray by decrementing 
    {
        cout << Aray[i] << " ";
    
        if (i == 40 || i == 30 || i == 20 || i ==10 || i==0 ) cout << endl;
    }
}