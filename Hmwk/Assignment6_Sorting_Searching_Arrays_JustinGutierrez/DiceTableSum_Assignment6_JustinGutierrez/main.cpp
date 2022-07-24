/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 22, 2022, 2:35 PM
 * Purpose: Dice Table Sum
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int COLS=6;

//Function Prototypes
//void fillTbl(int [][COLS],int);
void prntTbl(const int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ROWS=6;
    int tablSum[ROWS][COLS];
    
    //Initialize or input i.e. set variable values
    //fillTbl(tablSum,ROWS);
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<<setw(24)<<"C o l u m n s"<<endl;
    cout<<setw(6)<<"|"<<setw(14)<<"   1   2   3   4   5   6"<<endl;                             //Format for table
    cout<<"----------------------------------"<<endl;

    int tble1[ROWS][COLS]={{2, 3, 4, 5, 6, 7},
                         {3, 4, 5, 6, 7, 8},  
                         {4, 5, 6, 7, 8, 9},                //All inputs for table
                         {5, 6, 7, 8, 9, 10},
                         {6, 7, 8, 9, 10, 11},
                         {7, 8, 9, 10, 11, 12}};
    //Display the outputs
    //prntTbl(tablSum,ROWS);
   cout<<"   1 |"; 
    prntTbl(tble1, ROWS);
    
    //Exit stage right or left!
    return 0;
}
void prntTbl(const int array[][COLS],int rows){
    for (int x=0; x<rows; x++){
        if (x==1){
                cout<<"R  2 |";                                     //If statement to format the rows statement
        }
                if (x==2){
                cout<< "O  3 |";
                }
                if (x==3){
                cout<<"W  4 |";
                }
                if (x==4){
                cout<<"S  5 |";
                }
                if (x==5){
                cout<<"   6 |";
                }
        for (int y=0; y<COLS; y++){
            cout<<setw(4)<<array[x][y]<<"";                             //Forms the table 
            
        }
        cout<<endl;
    }
}
