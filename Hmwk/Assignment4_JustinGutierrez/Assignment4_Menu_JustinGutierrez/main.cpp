/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 14, 2022, 8:12 PM
 * Purpose: Homework Assignment 4 Menu
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const unsigned char CNVDLRS=100;
const float LITER = 0.264179;
const float PERCENT = 100;
//Function Prototypes
float max(float num1, float num2);  //Takes two float parameters
float max(float num1, float num2, float num3);  //Takes three float parameters

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
   //Declare Variables
    char choice;
    
    //Repeat the process
    do{
    
    //Initialize Variables
    cout<<endl;
    cout<<"Which Problem would you like to run"<<endl;
    cout<<"Type 0 for Problem 1 Sum"<<endl;
    cout<<"Type 1 for Problem 2 Pay In Pennies"<<endl;
    cout<<"Type 2 for Problem 3 MinMax"<<endl;
    cout<<"Type 3 for Problem 4 Rectangle"<<endl;
    cout<<"Type 4 for Problem 5 Pattern"<<endl;
    cout<<"Type 5 for Problem 6 MPG"<<endl;
    cout<<"Type 6 for Problem 7 Fuel efficiency"<<endl;
    cout<<"Type 7 for Problem 8 Inflation"<<endl;
    cout<<"Type 8 for Problem 9 Estimated cost"<<endl;
    cout<<"Type 9 for Problem 10 2 or 3 Max"<<endl;
    
    cin>>choice;

    //Map the Inputs to the Outputs
    switch(choice){
        case '0':{
     //Declare Variables
    int sum,            //The sum of numbers
        num;            //Number inputted
    
    //Initialize or input i.e. set variable values
    sum= 0;         //Set sum to zero
    
    //Map inputs -> outputs
    do {
        cin>>num;                                       //Input number
    
    } while (num<0);
    
    for (int count =1; count <= num; count++)
    {
        sum+=count;                                         //Calculates the sum of input
    }
    
    //Display the outputs
cout<< "Sum = "<<sum;
    
    break;
            }
    case '1':{
    
     //Declare Variables
    unsigned int days, payDay, paySum;                      
    
    //Initialize or input i.e. set variable values
    cin>>days;      //Input for amount of days
    payDay=1;       //Pay day starts at one penny
    paySum=payDay;  //Sum is equal to amount of pennies
    
    //Map inputs -> outputs
    for(int day=2; day<=days; day++) {
        payDay*=2;
        paySum+=payDay;
                                                //Calculates amount of pennies
    }
    
    
    //Display the outputs
    int dollars=paySum/CNVDLRS;
    int pennies=paySum%CNVDLRS;                                             //Calcualtes dollars and pennies owed
    cout<<"Pay = $"<<dollars<<"."<<(pennies<10?"0":"\0")<<pennies;
    }
        case '2':{
    
     //Declare Variables
    int min,
        max,
        num;
    
    //Initialize or input i.e. set variable values
    min=10000000;
    max=0;
    num=0;
    //Map inputs -> outputs
    while(num != -99) {
        cin>>num;
        if(num==-99)break;  //Signals the end of a series
        if(num>max)             //Calculates the max
        max=num;
        if(num<min)                 //Calculates the min
        min=num;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<min<<endl;
    cout<<"Largest  number in the series is "<<max;
  break;}
  
        case '3':{
   
    //Declare Variables
    int num, Rnum, Cnum;
    char lett;
    
    //Initialize or input i.e. set variable values
    cin>>num>>lett;             //Input for amount and what letter
    //Map inputs -> outputs
    while (num<1 || num>15) {
        cout<<"Input is Invalid, number must be between 1 and 15";
        cin>>num>>lett;                                                     //Input cannot be greater than 15 or less than 1
    }
    for (Cnum=1; Cnum<num; Cnum++){
        for (Rnum=1; Rnum<=num; Rnum++)         //Rows and columns of output up until the last row
        {
            cout<<lett;
        }
        cout<<endl;
    }
    for( ; Cnum==num; Cnum++){              //Last row and columns
        for (Rnum=1; Rnum<=num; Rnum++)
        {
            cout<<lett;
        }
    }
    break;}
        
        case '4':{
            //Declare Variables
    int size;
    
    //Initialize or input i.e. set variable values
    cin>>size;
    
    //Map inputs -> outputs
    for (int rows =1; rows<=size; rows++){
        for (int cols=1;cols<=rows; cols++){                //Calculates up until the maximum amount of symbols 
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    
    for (int rows=1; rows<=size; rows++){
        for (int cols=1; cols <=size+1-rows; cols++){       //Decreases gradulally from the maximum amount
            cout<<"+";
        }
        if(rows<size )cout<<endl<<endl;
    }
    break;}
        
        case '5':{
    //Declare Variables
    char choice;                //Gives choice to continue calculating
    float miles,                //Miles driven
        liter;                  //Liters used
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<endl;
        cin>>liter;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        cout<<"miles per gallon:"<<endl
        <<(1/(liter*LITER))*(miles)<<endl;              //Calculates the miles per gallon 
        cout<<"Again:"<<endl;
        cin>>choice;
        if (choice == 'n')
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');
    
        break;}
        
        case '6':{
    //Declare Variables
    char choice;            //Gives choice to run calcualtion Again
    float miles,            //Miles driven for car 1
        miles1,             //Miles driven for car 2
        liter,              //Liters used for car 1
        liter1;             //Liters used for car 2
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles;
        cout<<"miles per gallon: "<<(1/(liter*LITER))*(miles)<<endl;    //Calculates the MPG for car number one
        cout<<endl;
        
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>liter1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        cout<<"miles per gallon: "<<(1/(liter1*LITER))*(miles1)<<endl;  //Calculates MPG for car number 2
        cout<<endl;
       
        if ((1/(liter*LITER))*(miles)>(1/(liter1*LITER))*(miles1)){     //Determines if  car 1  is more fuel efficient
        cout<<"Car 1 is more fuel efficient"<<endl;
        }
        if ((1/(liter*LITER))*(miles)<(1/(liter1*LITER))*(miles1)){     //Determines if car 2 is more fuel efficient 
        cout<<"Car 2 is more fuel efficient"<<endl;
        }
        cout<<endl;
        cout<<"Again:"<<endl;                                           //Runs calculation again or stops
        cin>>choice;
        if (choice == 'n')
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');

        break;}
        
        case '7':{
    
    //Declare Variables
    char choice;            //Gives choice to run program again
    float prevcos,          //Previous cost
    currcos;                //Current cost
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    do {
        cout<<fixed<<setprecision(2);
        cout<<"Enter current price:"<<endl;
        cin>>currcos;
        cout<<"Enter year-ago price:"<<endl;
        cin>>prevcos;
        cout<<"Inflation rate: "<<((currcos-prevcos)/prevcos)*PERCENT<<"%"<<endl;   //Calculates the rate of inflatioon
        cout<<endl;
        cout<<"Again:";                                                         //Allows program to run again
        cout<<endl;
        cin>>choice;
        if (choice == 'n')                                                          //Stops program
            break;
    cout<<endl;
    } while (choice == 'y' || choice =='Y');                                        //Reruns program
    
        
    break;}
    
        case '8':{
            
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
    
    break;}
        case '9':{
             //Declare Variables
    float num1,num2,num3;
    
    //Initialize or input i.e. set variable values
    cin>>num1>>num2>>num3;

//Map inputs -> outputs
cout<<"Enter first number:"<<endl;
cout<<endl;
cout<<"Enter Second number:"<<endl;
cout<<endl;
cout<<"Enter third number:"<<endl;
cout<<endl;

  // Calculates the max of two numbers
{   cout<<fixed<<setprecision(1);                                   
    cout<<"Largest number from two parameter function:"<<endl;
    if(num1 > num2)
    {
        cout<< num1;                                                    // Outputs number 1 if it is the largest.
        cout<<endl;
    }
    else
    {
        cout<< num2;                                                    // Outputs number 2 if it is the largest.
        cout<<endl;
    }
}


   //Calculates the max out of three numbers
{                          
    cout<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"Largest number from three parameter function:"<<endl;
    if(num1 > num2 and num1 > num3)
    {
        cout<< num1<<endl;                                           // Outputs number 1 if it is greater than number 2 and 3.
    }
    else if(num2 > num1 and num2 > num3)
    {
        cout<< num2<<endl;                                       // Outputs number 2 if it is greater than number 1 and 3.
    }
    else if(num3 > num1 and num3 > num2)
    {
        cout<< num3<<endl;                                       // Outputs number 3 if it is greater than number 1 and 2.
    }   
}
        }
               
        }
  
    }while(choice>='0'&&choice<='9');
    
    

    //Exit the code
    return 0;
}