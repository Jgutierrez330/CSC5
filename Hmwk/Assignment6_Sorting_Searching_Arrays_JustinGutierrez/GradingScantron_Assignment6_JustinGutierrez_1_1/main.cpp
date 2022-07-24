/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 23, 2022, 12:51 PM
 * Purpose: Grading like a scantron
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <fstream>   //File I/O
#include <string.h>    //String Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void print(char[]);

void read(char [], string& );

int  compare(char aray[], char aray2[], char aray3[])
{
    int correct= 0;
    
    for ( int i = 0 ; i< 20 ; i++)                              //Determines which letters match between the key and the answers
    {
        if(aray[i] ==aray2[i] )
        {
            aray3[i] = 'C';
            correct += 1;                                           //Point is added for each correct answer
        }
        else 
            aray3[i] = 'W';
    }
    return correct;
};
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string key,answers,score;
    char fileKey[20],fileAns[20] , correct[20];
    
    float pRight;
    
    //Initialize or input i.e. set variable values
    
    

   read(fileKey,key);
   read(fileAns,answers);
    
  
     
    //Score the exam
    pRight=compare(fileKey,fileAns,correct);
    
    //Display the outputs

  
    print(correct);
    cout<<"Percentage Correct = "<<pRight/20*100<<"%"<<endl;
    
    

    //Exit stage right or left!
    return 0;
}

void print(char Aray[]) {
    cout << "C/W     ";
       for( int i = 0; i < 20; i++) {                           //Prints out the array
       
       cout << Aray[i] << " ";
        
    }cout << endl;
    
}

void read(char Aray[], string& answ){
    cin >> answ;                                                    //Initalizes and reads the array
     for( int i = 0; i < 20; i++){
       
        cin >> Aray[i];
    }
    
    }
    
