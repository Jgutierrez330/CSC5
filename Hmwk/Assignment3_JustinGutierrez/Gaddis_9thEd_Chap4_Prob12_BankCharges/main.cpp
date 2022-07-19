/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 2:15 PM
 * Purpose: Bank Charges
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
    
     //Declare Variables
    float bankBal,  //Bank Balance
        numChks,    //Number of Checks
        monFee,     //Monthly fee
        lowBal,     //Low balance fee
        chkFee,     //Check Fee
        totBal,     //Total balance
        totChk;     //Total fees from checks
    
    //Initialize or input i.e. set variable values
 cout<< "Monthly Bank Fees"<<endl; 
cout<<"Input Current Bank Balance and Number of Checks"<<endl;
    cin>>bankBal>>numChks;
    monFee= 10;     //$10 monthly fee
    
    
    //Map inputs -> outputs
    {
    if (bankBal<0)
    cout<<"Urgent account is overdrawn";
    }
    {
        if(numChks<20)  
        chkFee= .010e1f;                            //10 Cents per check when less than 20 checks
    else if (numChks>=20 && numChks<40)             
        chkFee= .008e1f;                             //8 Cents per check when more than 20 but less than 40    
    else if(numChks>=40 && numChks<60)
        chkFee= .006e1f;                             //6 Cents per check when more than 40 but less than 60
    else chkFee=.004e1f;                             //4 Cents per check when more than 60
    }
    
    {
    if(bankBal<400)
        lowBal=15;                                      //Low balance fee of $15 when total bank balance is under 400 hundred dollars
    else lowBal=0;
    }    
   
   totChk= chkFee*numChks;                              //Total check fee
    totBal= (bankBal-(totChk+monFee+lowBal));           //Total balance after fees
    //Display the outputs
cout<<fixed<<setprecision(2);
cout<<"Balance"<<setw(6)<<"$"<<setw(9)<<bankBal<<endl;
cout<<"Check Fee"<<setw(4)<<"$"<<setw(9)<<totChk<<endl;
cout<<"Monthly Fee"<<setw(2)<<"$"<<setw(9)<<monFee<<endl;
cout<<"Low Balance"<<setw(2)<<"$"<<setw(9)<<lowBal<<endl;
cout<<"New Balance"<<setw(2)<<"$"<<setw(9)<<totBal;

    
    return 0;
}