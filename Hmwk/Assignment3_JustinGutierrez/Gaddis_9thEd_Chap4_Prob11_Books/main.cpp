/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 1:49 PM
 * Purpose: Book points
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
     short numBook,   //Number of books
    bookPts;        //Book Points
   
    //Initialize or input i.e. set variable values
cout<<"Book Worm Points"<<endl;
cout<< "Input the number of books purchased this month."<<endl;
    cin>>numBook;
    
    //Map inputs -> outputs
cout<<"Books purchased =  "<<numBook<<endl;
    if(numBook>=0 && numBook<1){    //0 points for 0 books
        bookPts=0;
    
    }
    if(numBook>=1 && numBook<2){    //5 Points for 1 book
        bookPts=5;
    
    }
    if(numBook>=2 && numBook<3){    //15 points for 2 books
        bookPts=15;
    
    }
    if(numBook>=3 && numBook<4){    //30 points for 3 books
        bookPts=30;

    }else{
        bookPts=60;                 //60 points for 4 or more books
    } 
    //Display the outputs
    cout<<"Points earned   = "<<bookPts;
    
    return 0;
}