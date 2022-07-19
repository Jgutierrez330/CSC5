/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 6:29 PM
 * Purpose: 2 or 3 max Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare all Variables Here
    unsigned short number;
    unsigned short n1000s, n100s, n10s, n1s;
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    
   
    //Output the check value
     n1000s=number/1000;         //Pulling the thousands out of the input
    number-=n1000s*1000;        //Adjusting the original input by removing the thousands
       switch(n1000s){                   //Switch case to determine amount of M's
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    }
    
    if (number>=11 && number<=19){
        
        if (number==19)cout<<"Nineteen ";
        if(number==18)cout<<"Eighteen ";
        if (number==17)cout<<"Seventeen " ;
        if (number==16)cout<<"Sixteen ";
        if (number==15)cout<<"Fifteen ";
        if (number==14)cout<<"Fourteen ";
        if (number==13)cout<<"Thirteen ";
        if (number==12)cout<<"Twelve ";
        if (number==11)cout<<"Eleven ";
        
        cout<<"and no/100's Dollars"<<endl;
        return 0;
    }
    else{ 
        n100s=number/100;           //Pulling out the hundreds from the input
    number-=n100s*100;          //Adjusting the orignal input by removing the hundreds
    switch (n100s){ //Switch case to determine which roman numerals for hundreds
        case 9:cout<<"Nine Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;
    }
  if (number>=11 && number<=19){
        
        if (number==19)cout<<"Nineteen ";
        if(number==18)cout<<"Eighteen ";
        if (number==17)cout<<"Seventeen " ;
        if (number==16)cout<<"Sixteen ";
        if (number==15)cout<<"Fifteen ";
        if (number==14)cout<<"Fourteen ";
        if (number==13)cout<<"Thirteen ";
        if (number==12)cout<<"Twelve ";
        if (number==11)cout<<"Eleven ";
        
        cout<<"and no/100's Dollars"<<endl;
        return 0;
    }
    n10s=number/10;             //Pulling out the tens from the input
    number-=n10s*10;            //Adjusting the input by removing the tens
    switch (n10s){          //Switch case to determine roman numerals for tens
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy " ;break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Fourty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
        case 1:cout<<"Ten ";break;
    }
     n1s=number;                 //Left with the ones value
    switch (n1s){         //Switch case to determine roman numerals for ones
        case 9:cout<<"Nine ";break;
        case 8:cout<<"Eight ";break;
        case 7:cout<<"Seven ";break;
        case 6:cout<<"Six ";break;
        case 5:cout<<"Five ";break;
        case 4:cout<<"Four ";break;
        case 3:cout<<"Three ";break;
        case 2:cout<<"Two ";break;
        case 1:cout<<"One ";break;
    }
    }
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}