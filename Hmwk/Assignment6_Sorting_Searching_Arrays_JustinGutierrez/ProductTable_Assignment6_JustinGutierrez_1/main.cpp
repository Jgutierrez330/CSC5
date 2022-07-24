/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 22, 2022, 5:11 PM
 * Purpose: Product Table 
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
void fillTbl(int [][COLS],int);
void prntTbl(int [][COLS],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
     const int ROWS=6;
    int tblProd[ROWS][COLS];                            //Sizes table to a 6x6
    
    tblProd[0][0]=1;                        //Made intial values for row 0 columns 0-5
     tblProd[0][1]=2;
      tblProd[0][2]=3;
       tblProd[0][3]=4;
        tblProd[0][4]=5;
         tblProd[0][5]=6;
        
           
   
    //Initialize or input i.e. set variable values
    cout<<"Think of this as a Product/Muliplication Table"<<endl;               //Formatting for table
    cout<<setw(24)<<"C o l u m n s"<<endl;
    cout<<"     |   1   2   3   4   5   6"<<endl;
    cout<<"----------------------------------"<<endl;
    fillTbl(tblProd,ROWS);
    
    //Display the outputs
   cout<<"   1 |"; 
    prntTbl(tblProd,ROWS);

    //Exit stage right or left!
    return 0;
}
void prntTbl(int tblProd[][COLS],int ROWS){
    for (int num1=0; num1<ROWS; num1++){
        if (num1==1){                                                   //Format for each the side of the table rows
                cout<<"R  2 |";
        }
                if (num1==2){
                cout<< "O  3 |";
                }
                if (num1==3){
                cout<<"W  4 |";
                }
                if (num1==4){
                cout<<"S  5 |";
                }
                if (num1==5){
                cout<<"   6 |";
                }
        cout<<setw(4)<<tblProd[num1][0]<<setw(4)                                        //Outputs the table
                <<setw(4)<<tblProd[num1][1]<<setw(4)
                <<setw(4)<<tblProd[num1][2]<<setw(4)
                <<setw(4)<<tblProd[num1][3]<<setw(4)
                <<setw(4)<<tblProd[num1][4]<<setw(4)
                <<setw(4)<<tblProd[num1][5]<<setw(4)<<endl;
      
        
                
      
    }
    
    }
void fillTbl(int tblProd [][COLS], int ROWS){
    for (int num1=0; num1<ROWS; num1++){
        
        tblProd[num1][0]=tblProd[0][0]*tblProd[0][num1];                    //Multiples row 0 column 0 which is 1 by row 0 and an increasing column to form 1-6
        tblProd[num1][1]=tblProd[0][1]*tblProd[num1][0];                    //Multiples 2 by the values 1-6 from the previous row
        tblProd[num1][2]=tblProd[0][2]*tblProd[num1][0];                    //Multiples 3 by the values  from the previous row
        tblProd[num1][3]=tblProd[0][3]*tblProd[num1][0];                     //Multiples 4 by the values  from the previous row
        tblProd[num1][4]=tblProd[0][4]*tblProd[num1][0];                    //Multiples 5 by the values  from the previous row
        tblProd[num1][5]=tblProd[0][5]*tblProd[num1][0];                    //Multiples 6 by the values  from the previous row
 
    
}
    

}