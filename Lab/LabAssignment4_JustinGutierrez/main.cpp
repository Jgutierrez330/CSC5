/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 10, 2022, 2:32 PM
 * Purpose: Lab Assignment 4
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <string>

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed

//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
//Function Prototypes

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
    cout<<"Type 0 for Problem 1 Sorting Names"<<endl;
    cout<<"Type 1 for Problem 2 Book Points"<<endl;
    cout<<"Type 2 for Problem 3 Bank Balance"<<endl;
    cout<<"Type 3 for Problem 4 Race"<<endl;
    cout<<"Type 4 for Problem 5 ISP"<<endl;
    cout<<"Type 5 for Problem 6 Rock Paper Scissors"<<endl;
    cout<<"Type 6 for Problem 7 Roman Conversion"<<endl;
    cout<<"Type 7 for Problem 8 Compatible signs"<<endl;
    cout<<"Type 8 for Completed Truth Table"<<endl;
    
    cin>>choice;

    //Map the Inputs to the Outputs
    switch(choice){
        case '0':{
    
    //Declare Variables
    string name1, name2, name3;
    
    
    //Initialize or input i.e. set variable values
    cout<<"Input 3 names to sort alphabetically"<<endl;
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    cout<<"Sorting Names"<<endl<<"Input 3 names"<<endl;
    if (name1<name2 && name1<name3)     //Determines whether name 1 is first
    { 
        cout<<name1<<endl;
        if(name2<name3){                //Determines whether name 2 is second and name 3 is third
            cout<<name2<<endl<<name3;
        }
        else {                          //Determine whether name 3 is second and name 2 is third
            cout<<name3<<endl<<name2;   
        }
    }
    else if (name2<name1 && name2<name3){  //Determines whether name 2 is first
        cout<<name2<<endl;
        if(name1<name3)                     //Determines whether name 2 is second and name 3 is third
        {
            cout<<name1<<endl<<name3;
        }
        else                                 //Determine whether name 3 is second and name 2 is third
        {
            cout<<name3<<endl<<name1;
        }
    }
    else if (name3<name1 && name3<name2){ //Determines whether name 3 is first
        cout<<name3<<endl;
        if(name1<name2)                     //Determines whether name 2 is second and name 3 is third
        {
            cout<<name1<<endl<<name2;
        }
        else                                 //Determine whether name 3 is second and name 2 is third
        {
            cout<<name2<<endl<<name1;
        }
    }
    
    //Display the outputs
    break;
            }
    case '1':{
    
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
                break;
            }
        case '2':{
    
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

  break;}
  
        case '3':{
   
    //Declare Variables
    string name1,
           name2,
           name3;
    int time1, time2, time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program"<<endl;
    cout<<"Input 3 Runners"<<endl;
    cout<<"Their names, then their times"<<endl;
    
    cin>>name1>>time1>>name2>>time2>>name3>>time3;              //Times and names of the runners
    
    //Map inputs -> outputs
    if (time1 > 0 && time2 > 0 && time3 > 0)
        if (time1 < time2 && time1 < time3)                 //Determines if runner one was first
            if (time2 < time3)
		{
                cout<<name1<<"\t"<<setw(3)<<time1<<endl;     //Determines if runner 2 is second and runner 3 was third
                cout<<name2<<"\t"<<setw(3)<<time2<<endl;
                cout<<name3<<"\t"<<setw(3)<<time3;
		}
		else 
		{
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;     //Determines if runner 3 is second and runner 2 was third
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;
		cout<<name2<<"\t"<<setw(3)<<time2;
		}
		else if (time2 < time1 && time2 < time3)        //Determines if runner 2 was first
                    if (time1 < time3)
		{
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;    //Determines if runner 1 is second and runner 3 was third
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;
		cout<<name3<<"\t"<<setw(3)<<time3;
		}
		else
		{
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;    //Determines if runner 3 is second and runner 1 was third
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;
		cout<<name1<<"\t"<<setw(3)<<time1;
		}
		else 
                    if (time1 < time2)                      //Determines if runner 3 was first
		{
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;    //Determines if runner 1 is second and runner 2 was third
		cout<<name1<<"\t"<<setw(3)<<time1<<endl;
		cout<<name2<<"\t"<<setw(3)<<time2;
		}
                else
		{
		cout<<name3<<"\t"<<setw(3)<<time3<<endl;     //Determines if runner 2 is second and runner 1 was third
		cout<<name2<<"\t"<<setw(3)<<time2<<endl;
		cout<<name1<<"\t"<<setw(3)<<time1;
		}
	else
	    cout<<"Time is invalid, Times cannot be less than the value of zero.";
    
    break;}
        
        case '4':{
        string package;     //package A,B, or C
    float  hours,       //Hours of internet
            price;      //Total price of service
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hours;
    
    //Map inputs -> outputs
    if ((package=="A") ||(package=="B") ||(package=="C")) {         //Determines which package was selected
    if (hours<=744) {                                               //Does not allow hours to go over 744
        if(package=="A"){
            if(hours>10){  
            price = 9.95+(hours-10)*2;                              //Fee for extra hours if variable hours is over the value of 10
        } else{
            price=9.95;                                             //Price if there are no extra hours
        }
   } else if (package=="B"){
        if(hours>20){
            price=14.95+(hours-20)*1;                           //Fee for extra hours if variable hours is over the value of 20
        } else {
            price=14.95;                                        //Price if there are no extra hours
        }
    } else {
        price = 19.95;                                          //Fee for Package C
    }
    }else {
        cout<<"Number of hours is invalid";                     //Output if hours is over 744
    }
    }
    
    //Display the outputs
    cout<<"Bill = $ "<<price;
        
    break;}
        
        case '5':{
    //Declare Variables
     char p1, p2;            //Choice of rock, paper, or Scissors
    
    
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>p1>>p2;
    //Map inputs -> outputs

    if (((p1 == 'P') || (p1=='p')) && ((p2 == 'P') || (p2=='p')))               //Output for both players picking paper
	    cout  << "Draw! Nobody wins.";
 
        else if (((p1 == 'R') || (p1=='r')) && ((p2 == 'R') || (p2=='r')))      //Output for both players picking rock
	    cout << "Draw! Nobody wins.";
 
	else if (((p1 == 'S') || (p1=='s')) && ((p2 == 'S') || (p2=='s')))      //Output for both players picking scissors
            cout << "Draw! Nobody wins.";
 
	else if (((p1 == 'P') || (p1=='p')) && ((p2 == 'R') || (p2=='r')))      //Output for player 1 picking paper and player 2 picking rock
	    cout << "Paper covers rock.";
 
	else if (((p1 == 'S') || (p1=='s')) && ((p2 == 'P') || (p2=='p')))      //Output for player 1 picking Scissors and player 2 picking paper
	    cout << "Scissors cuts paper.";
 
	else if (((p1 == 'R') || (p1=='r')) && ((p2 == 'S') || (p2=='s')))      //Output for player 1 picking rock and player 2 picking scissors
	    cout << "Rock breaks scissors.";
 
	else if (((p1 == 'P') || (p1=='p')) && ((p2 == 'S') || (p2=='s')))    //Output for player 1 picking paper and player 2 picking scissors
	    cout << "Scissors cuts paper.";
 
	else if (((p1 == 'R') || (p1=='r')) && ((p2 == 'P') || (p2=='p')))  //Output for player 1 picking rock and player 2 picking paper
	    cout << "Paper covers rock.";
 
	else if (((p1 == 'S') || (p1='s')) && ((p2 == 'R') || (p2=='r')))   //Output for player 1 picking scissors and player 2 picking rock
	    cout << "Rock breaks scissors.";
 
        break;}
        
        case '6':{
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

        break;}
        
        case '7':{
    
    //Declare Variables
    string s1,s2,e1,e2;
    
    //Initialize or input i.e. set variable values
    cin>>s1>>s2;
    
    //Map inputs -> outputs
    if (s1=="Aries" ||s1=="Leo"||s1=="Sagittarius") e1="Fire";                              //Categorizes the possible first input of three signs into Fire
    else if (s1=="Taurus"||s1=="Virgo"||s1=="Capricorn")e1="Earth";                          //Categorizes the possible first input of three signs into Earth
    else if (s1=="Gemini"||s1=="Libra"||s1=="Aquarius")e1="Air";                             //Categorizes the possible first input of three signs into Air
    else if (s1=="Cancer"||s1=="Scorpio"||s1=="Pisces")e1="Water";                           //Categorizes the possible first input of three signs into Water
    
    if (s2=="Aries" ||s2=="Leo"||s2=="Sagittarius") e2="Fire";                              //Categorizes the possible first input of three signs into Fire
    else if (s2=="Taurus"||s2=="Virgo"||s2=="Capricorn")e2="Earth";                          //Categorizes the possible first input of three signs into Earth
    else if (s2=="Gemini"||s2=="Libra"||s2=="Aquarius")e2="Air";                            //Categorizes the possible first input of three signs into Air
    else if (s2=="Cancer"||s2=="Scorpio"||s2=="Pisces")e2="Water";                          //Categorizes the possible first input of three signs into Water
    

    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
  
    if(e1==e2)cout<<s1<<" and "<<s2<<" are compatible " <<e1<< " signs.";
        else cout<<s1<<" and "<<s2<<" are not compatible signs."; 
        
    break;}
    
        case '8':{
            
    //Declare Variables
    bool x,y;

    //Initialize Variables 
    //Map inputs to outputs -> The Process
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^X X^Y^Y !X&&!Y"
            <<" !(X||Y) !X||!Y !(X&&Y) "<<endl;
    
    //First Row
    x=y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<((!x&&y)?'T':'F')<<"       ";
    cout<<endl;
    
    //second row
    y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<endl;
    
    //third row
   x=false,y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<endl;
    
    //fourth row
    x=false,y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"   ";
    cout<<(x||y?'T':'F')<<"   ";
    cout<<(x^y?'T':'F')<<"      ";
    cout<<(x^y^x?'T':'F')<<"     ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(!x&&!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"      ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<endl;
        
    break;}
               
        }
  
    }while(choice>='0'&&choice<='8');
    
    

    //Exit the code
    return 0;
}