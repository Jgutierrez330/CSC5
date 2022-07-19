/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 5:11 PM
 * Purpose: Roman Numeral Conversion
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
         int arabic,n1000s,n100s,n10s,n1s;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>arabic;
   
    if((arabic)<1000 ||(arabic>3000)) {
        cout<<arabic<<" is Out of Range!";
        return 0;    //Stops the program if input is smaller than 1000 0r greater than 3000
    }
    
    //Map inputs -> outputs
    n1000s=arabic/1000;         //Pulling the thousands out of the input
    arabic-=n1000s*1000;        //Adjusting the original input by removing the thousands
    n100s=arabic/100;           //Pulling out the hundreds from the input
    arabic-=n100s*100;          //Adjusting the orignal input by removing the hundreds
    n10s=arabic/10;             //Pulling out the tens from the input
    arabic-=n10s*10;            //Adjusting the input by removing the tens
    n1s=arabic;                 //Left with the ones value
    
    //Display the outputs 
        cout<<n1000s<<n100s<<n10s<<n1s<<" is equal to ";
    
    switch(n1000s){                   //Switch case to determine amount of M's
        case 3:cout<<"M";
        case 2:cout<<"M";
        case 1:cout<<"M";
    }
    
    switch (n100s){ //Switch case to determine which roman numerals for hundreds
        case 9:cout<<"CM";break;
        case 8:cout<<"DCCC";break;
        case 7:cout<<"DCC";break;
        case 6:cout<<"DC";break;
        case 5:cout<<"D";break;
        case 4:cout<<"CD";break;
        case 3:cout<<"C";break;
        case 2:cout<<"C";break;
        case 1:cout<<"C";break;
    }
    switch (n10s){          //Switch case to determine roman numerals for tens
        case 9:cout<<"XC";break;
        case 8:cout<<"LXXX";break;
        case 7:cout<<"LXX";break;
        case 6:cout<<"LX";break;
        case 5:cout<<"L";break;
        case 4:cout<<"XL";break;
        case 3:cout<<"XXX";break;
        case 2:cout<<"XX";break;
        case 1:cout<<"X";break;
    }
    
    switch (n1s){         //Switch case to determine roman numerals for ones
        case 9:cout<<"IX";break;
        case 8:cout<<"VIII";break;
        case 7:cout<<"VII";break;
        case 6:cout<<"VI";break;
        case 5:cout<<"V";break;
        case 4:cout<<"IV";break;
        case 3:cout<<"III";break;
        case 2:cout<<"II";break;
        case 1:cout<<"I";break;
    }
    return 0;
}