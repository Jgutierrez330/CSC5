/*
*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 20, 2022, 3:22 PM
 * Purpose: Project 1 - Chuck A Luck
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float PERCENT=100.0f;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    ifstream inputFile;
    string Name;
    inputFile.open("Numbers.txt");
    inputFile>>Name;
   ofstream outputFile;
    outputFile.open("GameStats.txt");
   
    unsigned char die1,die2,die3;
    unsigned int c1s,c2s,c3s,c4s,c5s,c6s,c7s,c8s,c9s,c10s,c11s,c12s;
    unsigned int a1s,a2s,a3s,a4s,a5s,a6s,a7s,a8s,a9s,a10s,a11s,a12s;
    unsigned int b1s,b2s,b3s,b4s,b5s,b6s,b7s,b8s,b9s,b10s,b11s,b12s;
    char again;
    string start; 
    int num;
    float games, wins, lose;
    float percwin;
  
    //Initialize Variables
    games=0;
    wins=0;
    lose=0;
    cout<<endl;
    cout<<Name<<endl;
    cout<<endl;
    cout<<setw(30)<<"Enter Start to begin the game"<<setw(40)
            <<"Enter Exit to close the game"<<endl;
    cout<<endl;
    cin>>start;
    
    
    //Map inputs to outputs -> The Process
    if (start =="Start"|| start=="start"){
        
        cout<<endl;
          do{
              cout<<"Please enter a number between 1-6"<<endl;
              cin>>num;
              if(num<1|| num>6){
                  cout<<"Value is out of range! Please enter a number between 1-6"<<endl;
             cin>>num; }      
              
        a1s=a2s=a3s=a4s=a5s=a6s=a7s=a8s=a9s=a10s=a11s=a12s=0;
    b1s=b2s=b3s=b4s=b5s=b6s=b7s=b8s=b9s=b10s=b11s=b12s=0;
    c1s=c2s=c3s=c4s=c5s=c6s=c7s=c8s=c9s=c10s=c11s=c12s=0;
    for(int roll=1;roll<=1;roll++){
        die1=rand()%6+1;//[1,6]
        
        switch(die1){
            case 1:a1s++;break;
            case 2:a2s++;break;
            case 3:a3s++;break;
            case 4:a4s++;break;
            case 5:a5s++;break;
            case 6:a6s++;break;
            default:cout<<"Bad Dice"<<endl;
           }
          
    }for(int roll=1;roll<=1;roll++){
     die2=rand()%6+1;//[1,6]
        
        switch(die2){
            case 1:b1s++;break;
            case 2:b2s++;break;
            case 3:b3s++;break;
            case 4:b4s++;break;
            case 5:b5s++;break;
            case 6:b6s++;break;
            default:cout<<"Bad Dice"<<endl;\
        }
    }
    for(int roll=1;roll<=1;roll++){
     die3=rand()%6+1;//[1,6]
        
        switch(die3){
            case 1:c1s++;break;
            case 2:c2s++;break;
            case 3:c3s++;break;
            case 4:c4s++;break;
            case 5:c5s++;break;
            case 6:c6s++;break;
            default:cout<<"Bad Dice"<<endl;\
        }
       
    }if (a1s==1){
         a1s=1;
          cout<<"Dice 1 = "<<a1s<<endl;
    }if (a2s==1){
         a2s=2;
         cout<<"Dice 1 = "<<a2s<<endl;
    }if (a3s==1){
         a3s=3;
         cout<<"Dice 1 = "<<a3s<<endl;
    }if (a4s==1){
         a4s=4;
         cout<<"Dice 1 = "<<a4s<<endl;
    }if (a5s==1){
         a5s=5;
         cout<<"Dice 1 = "<<a5s<<endl;
    }if (a6s==1){
         a6s=6;
     cout<<"Dice 1 = "<<a6s<<endl;
    } 
    
    if (b1s==1){
         b1s=1;
          cout<<"Dice 2 = "<<b1s<<endl;
    }if (b2s==1){
         b2s=2;
         cout<<"Dice 2 = "<<b2s<<endl;
    }if (b3s==1){
         b3s=3;
         cout<<"Dice 2 = "<<b3s<<endl;
    }if (b4s==1){
         b4s=4;
         cout<<"Dice 2 = "<<b4s<<endl;
    }if (b5s==1){
         b5s=5;
         cout<<"Dice 2 = "<<b5s<<endl;
    }if (b6s==1){
         b6s=6;
     cout<<"Dice 2 = "<<b6s<<endl;
    } 
    
    if (c1s==1){
         c1s=1;
          cout<<"Dice 3 = "<<c1s<<endl;
    }if (c2s==1){
         c2s=2;
         cout<<"Dice 3 = "<<c2s<<endl;
    }if (c3s==1){
         c3s=3;
         cout<<"Dice 3 = "<<c3s<<endl;
    }if (c4s==1){
         c4s=4;
         cout<<"Dice 3 = "<<c4s<<endl;
    }if (c5s==1){
         c5s=5;
         cout<<"Dice 3 = "<<c5s<<endl;
    }if (c6s==1){
         c6s=6;
     cout<<"Dice 3 = "<<c6s<<endl;
    } 
    
    if(num==a1s||num==a2s||num==a3s||num==a4s||num==a5s||num==a6s||
            num==b1s||num==b2s||num==b3s||num==b4s||num==b5s||num==b6s||
            num==c1s||num==c2s||num==c3s||num==c4s||num==c5s||num==c6s){
         cout<<"You win"<<endl;
         wins++;
     }
     else{
         cout<<"You Lose"<<endl;
         lose++;
     }
    games++; 
    percwin=(wins/games)*PERCENT;
    
    cout<<"You have played "<<games<<" games"<<endl;
    cout<<"You have won "<<wins<<" games"<<endl;
    cout<<"You have lost "<<lose<<" games"<<endl;
    cout<<"You have won "<<round(percwin)<<" % games"<<endl;
                  
     cout<<"Would you like to play again?"<<endl;
     cout<<"Enter Y for yes and any other letter to stop"<<endl;
    cin>>again;
                  
    } while (again=='Y'||again=='y');

        }
         
    if (start=="Exit" || start=="exit"){
        cout<<endl;
        cout<<"Thanks for Playing!";
        return 0;
      
    }
    //Display Results
    
    
    //Exit Stage right
    inputFile.close();
    outputFile.close();
    return 0;
}
