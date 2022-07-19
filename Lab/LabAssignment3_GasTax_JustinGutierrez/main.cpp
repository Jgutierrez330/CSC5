/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 7, 2022, 2:31 PM
 * Purpose: Lab Assignment 3 - Gas Tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float costGal,  //Price per Gallon of Gas
          excTax,   //Excise tax per gallon
          fedExc,   //Federal Excise tax per gallon
          cptFee,   //Cap and trade fee per gallon
          saleTax,  //Sale tax
          oilProf,  //Profit made by oil companies
          govtTax,  //Profit from Government tax and fees
          cmpyProf, //Oil companies total profit
          perProf,  //Percentage of profit by government per gallon of gas
          perInc;   //How much more government profits than oil companies in %
    
    //Initialize Variables
    cout<<"Input gas price per gallon"<<endl;
    cin>>costGal;   //Gas Input
    
    excTax= .039e1f;    //Excise tax is 39 cents
    fedExc= .0184e1f;   //Federal excise tax is 18.4 cents
    cptFee= .01e1f;     //Cap and trade fee is 10 cents
    saleTax= 8e-2f;     //Sale tax is 8%
    oilProf=65e-3f;     //Profit made by oil companies is 6.5%
    
   
    
    //Map inputs to outputs -> The Process
    govtTax= (costGal*saleTax)+excTax+fedExc+cptFee;    //Total profit by Govt
    cmpyProf= (costGal*oilProf);                    //Total oil company profit
    perProf= (govtTax/costGal)*100;         //Percent profit per gallon by govt
    perInc= (abs(cmpyProf-govtTax)/cmpyProf)*100;//How much more profit by govt
    
    
    //Display Results
    cout<<fixed<<setprecision(2);
    cout<<"----------------------------------------------------------"<<endl;
    cout<< "The government makes $"<<govtTax<<" from taxes when gas is $"
            <<costGal<<" a gallon."<<endl;
    cout<<"Oil companies profit $"<<cmpyProf<<" when gas is $"
            <<costGal<<" a gallon."<<endl;
    cout<<"Gas Taxes and fees by the government account for "<<perProf<<
            "% of the price per gallon when gas is $"<<costGal<<" a gallon."
            <<endl; 
    cout<<"The government profits "<<perInc<<
            "% more than oil companies when gas is $"<<costGal<<" a gallon."<<
            endl;
    
    
   
    
    //Exit stage right or left!
    return 0;
}