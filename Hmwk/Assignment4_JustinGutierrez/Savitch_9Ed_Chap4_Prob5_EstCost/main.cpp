/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 6:29 PM
 * Purpose: Estimated Cost Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PERCENT =100;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    char choice;                //Gives choice to run program again
    float prevcos,              //Previous cost
    currcos,                    //Current cost
    rate,                       //Rate of infaltion
    oneyr,                      //Price after one year
    twoyr;                      //Price after two year
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>currcos;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevcos;
        
        rate=((currcos-prevcos)/prevcos)*PERCENT;                               //Calculates inflation rate
        
        cout<<"Inflation rate: "<<rate<<"%"<<endl;
        cout<<endl;
        
        oneyr=(((rate/100)*currcos)+currcos);                                   //Calculates one year price
        cout<<"Price in one year: $"<<oneyr<<endl;
        
        twoyr=(((rate/100)*oneyr)+oneyr);                                       //Calculates two year price
        cout<<"Price in two year: $"<<twoyr<<endl;
        cout<<endl;
        
        cout<<"Again:";                                                         //Option to run program again or not
        cout<<endl;
        cin>>choice;
        if (choice == 'n')
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}