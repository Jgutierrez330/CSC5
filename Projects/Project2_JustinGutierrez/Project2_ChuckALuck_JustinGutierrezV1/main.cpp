/*
*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 20, 2022, 3:22 PM
 * Purpose: Project 2 - Chuck A Luck
 */

//System Libraries
#include <iostream>//Input-Output Library
#include <iomanip>//Format
#include <cmath>//Math Functions
#include <cstdlib>//Srand for the random number generator
#include <fstream>//File input and output
#include <string>//Strings
#include <ctime>//Time for rand
#include <vector>
using namespace std;

//User Libraries

//Global Constants
//Mathematical/Physics/Conversions, Higher dimensioned arrays
const float PERCENT=100.0f;//Used to convert values to percentage
//Function Prototypes
void term();
bool isDbl(int);
bool isTpl(int);
void dpay(int &, int dbl=2);
void tpay(int &, int tpl=3);
void viewv (vector<int>, vector <int>, vector<int>);
//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));//Random number generator
    //Declare Variables
    ifstream input;         //File input
    string Name;
    input.open("TitleProj.txt");        //Title of file being opened
    input>>Name;
   ofstream output;                     //File output
    output.open("GameStats.txt");       //Title of file being outputted
   
    unsigned char die1,die2,die3;               //Game requires 3 die
    unsigned int c1s,c2s,c3s,c4s,c5s,c6s;       //All 6 possible values 
    unsigned int a1s,a2s,a3s,a4s,a5s,a6s;        //for all 3 dice
    unsigned int b1s,b2s,b3s,b4s,b5s,b6s;
    char again;                             //Used to decide to play again
    string start;                        //starts the game/program
    int num;                             //Allows player to select #
    float games, wins, lose;            //Determines games played, won, lost
    float percwin,percL;                //Percentage of games won & lost
    bool test;                          //Used to increment wins or loss
    bool WL;                             //Determines win vs loss
    
    //Initialize Variables
    test=true;                          //Automatically set to true
    games=0;                            //0 games, 0 wins, 0 losses to start
    wins=0;
    lose=0;
    cout<<endl;
    cout<<setw(40)<<Name<<setw(40)<<endl;
    cout<<endl;
    cout<<setw(30)<<"Enter Start to begin the game"<<setw(40)
            <<"Enter Exit to close the game"<<endl;        //Allows to start or end game
    cout<<endl;
    cin>>start;
    
    
    //Map inputs to outputs -> The Process
    int bet; 
    int place;
    if (start =="Start"|| start=="start"){      //Determines whether to start game
        cout<<endl;
          do{                                   //Game reruns so long as player enters y after every game.
              cout<<endl;
              cout<<"Please enter a number between 1-6"<<endl;
                      cout<<endl;                    //Can only bet on #s 1-6
              cin>>num;
              if(num<1|| num>6){
                  cout<<"Value is out of range! Please enter a number between 1-6"<<endl;
             cin>>num; }                            //Input validation
              cout<<endl;
              cout<<"Please place the amount of money "
                      "that you would like to bet on number "<<num<<endl;
              cout<<"$"; cin>>bet;
              cout<<endl;
             int ogbet=bet;
    int roll=1;                             //Roll =1 at start of every game
    a1s=a2s=a3s=a4s=a5s=a6s=0;              //All dice values =0
    b1s=b2s=b3s=b4s=b5s=b6s=0;
    c1s=c2s=c3s=c4s=c5s=c6s=0;
    
   
    while(roll<=1){                 //Will roll dice 1 since every loop resets value of the roll
        die1=rand()%6+1;//[1,6]        //Used to make all possible random #s 1-6
        
        switch(die1){
            case 1:a1s++;break;          //Used for value of 1 
            case 2:a2s++;break;          //Dice value of 2
            case 3:a3s++;break;          //Dice value of 3
            case 4:a4s++;break;          //Dice value of 4
            case 5:a5s++;break;         //Dice value of 5
            case 6:a6s++;break;         //Dice value of 6
            default:cout<<"Bad Dice"<<endl;     //If something messes up
           }
    roll++;      
    }for(int roll=1;roll<=1;roll++){
     die2=rand()%6+1;//[1,6]
        
        switch(die2){
            case 1:b1s++;break;            //Dice 2 values of 1-6
            case 2:b2s++;break;            //Same as dice 1 but for dice 2
            case 3:b3s++;break;
            case 4:b4s++;break;
            case 5:b5s++;break;
            case 6:b6s++;break;
            default:cout<<"Bad Dice"<<endl;
        }
    }
    for(int roll=1;roll<=1;roll++){
     die3=rand()%6+1;//[1,6]
        
        switch(die3){
            case 1:c1s++;break;             //Same as dice 1 and 2 but for dice 3
            case 2:c2s++;break;
            case 3:c3s++;break;
            case 4:c4s++;break;
            case 5:c5s++;break;
            case 6:c6s++;break;
            default:cout<<"Bad Dice"<<endl;
        }
       //Switch statement gives value of 1 to whatever case it lands on
        //independent if converts the 1 value to actual dice value
    }if (a1s==1){
         a1s=1;                    //Dice 1 is 1 if a1s =1
          cout<<"Dice 1 = "<<a1s<<endl;
    }if (a2s==1){
         a2s=2;                  //Dice 1 is 2 if a2s =1
         cout<<"Dice 1 = "<<a2s<<endl;
    }if (a3s==1){
         a3s=3;                      //Dice 3 is 1 if a3s =1
         cout<<"Dice 1 = "<<a3s<<endl;
    }if (a4s==1){
         a4s=4;                 //Dice 1 is 4 if a4s =1
         cout<<"Dice 1 = "<<a4s<<endl;
    }if (a5s==1){
         a5s=5;                 //Dice 1 is 5 if a5s =1
         cout<<"Dice 1 = "<<a5s<<endl;
    }if (a6s==1){
         a6s=6;                 //Dice 1 is 6 if a6s =1
     cout<<"Dice 1 = "<<a6s<<endl;
    } 
    
    if (b1s==1){
         b1s=1;                             //The same for dice 2 as dice 1 independent if's
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
    
    if (c1s==1){                   //The same for dice 3 as dice 1 and dice 2 independent if's
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
    
    //if the players number is the same as all 3 dice value its triple payout
    if((num==a1s||num==a2s||num==a3s||num==a4s||num==a5s||num==a6s)&&
            (num==b1s||num==b2s||num==b3s||num==b4s||num==b5s||num==b6s)&&
            (num==c1s||num==c2s||num==c3s||num==c4s||num==c5s||num==c6s)){
        cout<<"You win by Triple! - Triple the payout";
        test=true;
        place=3;
        isTpl(place);
        if (isTpl(place)==true){
            tpay(bet);
            cout<<"You won $"<<bet<<endl;
    }
    }
    //if the players number is the same as Die 1 and 2 its double payout
    else if ((num==a1s||num==a2s||num==a3s||num==a4s||num==a5s||num==a6s) &&
            (num==b1s||num==b2s||num==b3s||num==b4s||num==b5s||num==b6s)){
        cout<<"You win by double! - double the payout"<<endl;
        test=true;
        place=2;
        isDbl(place);
        if (isDbl(place)==true){
            dpay(bet);
            cout<<"You won $"<<bet<<endl;
        } 
    }
    //If the players number is the same as die 2 and 3 its double payout
    else if ((num==c1s||num==c2s||num==c3s||num==c4s||num==c5s||num==c6s) &&
            (num==b1s||num==b2s||num==b3s||num==b4s||num==b5s||num==b6s)){
        cout<<"You win by double! - double the payout"<<endl;
        test=true;
        place=2;
        isDbl(place);
        if (isDbl(place)==true){
            dpay(bet);
            cout<<"You won $"<<bet<<endl;
        } 
     
        //if the players number is the same as die 1 and 3 its double payout
    } else if ((num==a1s||num==a2s||num==a3s||num==a4s||num==a5s||num==a6s)&&
            (num==c1s||num==c2s||num==c3s||num==c4s||num==c5s||num==c6s)){
        cout<<"You win by double! - double the payout"<<endl;
        test=true;
        place=2;
        isDbl(place);
        if (isDbl(place)==true){
            dpay(bet);
            cout<<"You won $"<<bet<<endl;
        } 
    }
    //If the players number is the same as any of die 1,2,or 3
    else if(num==a1s||num==a2s||num==a3s||num==a4s||num==a5s||num==a6s||
            num==b1s||num==b2s||num==b3s||num==b4s||num==b5s||num==b6s||
            num==c1s||num==c2s||num==c3s||num==c4s||num==c5s||num==c6s){
         cout<<"You win"<<endl;
         test=true;
         place=1;
        
        if ((isTpl(place)==true)&&(isDbl(place)==false)){
       
        cout<<"You won $"<<bet<<endl;
    }
    }
    else{      //If players number doesn't match any die they lose
         cout<<"You Lose"<<endl;
         test=false;
     }
    
    if (test==true){        //Test is true when a win occurs 
      int payout=ogbet+bet;
    cout<<"You have won a payout of $"<<payout<<endl;
        wins++;             //Wins increments
    }
    else{                   //Test is false when a loss occurs
        lose++;             //Loss increments
    }
    
    WL=wins>=lose?true:false;
    if(WL==true){
        cout<<"You have won "<<wins-lose<<" more games than you have lost"<<endl;
    }
    else{
        cout<<"You have lost "<<lose-wins<<" more games than you have won"<<endl;
    }
    games++;            //Games increment after every game
    percwin=(wins/games)*PERCENT;       //Percentage of games won conversion
    percL=(lose/games)*PERCENT;         //Percentage of games lost conversion
    cout<<endl;
    cout<<"You have played "<<games<<" games"<<endl;    //Output # of games
    cout<<"You have won "<<wins<<" games"<<endl;        //Output # of games won
    cout<<"You have lost "<<lose<<" games"<<endl;       //Output # of games lost
    cout<<endl;
    cout<<"You have won "<<round(percwin)<< "% of games"<<endl; //% of wins rounded to nearest percent
    cout<<"You have lost "<<round(percL)<<"% of games"<<endl;   //% of losses rounded to near percent
     cout<<endl;
    cout<<"Would you like to play again?"<<endl;    //Prompts if player would like to play again
     cout<<"Enter Y for yes and any other letter to stop"<<endl;
    cin>>again;         //Input y to play again or any other letter to stop
                  
    } while (again=='Y'||again=='y');       //Game continues so long as input is y
    term();
    return 0;
        }
         
    if (start=="Exit" || start=="exit"){     //If exit is typed at home screen game ends
        cout<<endl;
        cout<<"Thanks for Playing!";
        return 0;
      
    }
    //Display Results
    //Outputs games to file
    output<<"You have played "<<games<<" games"<<endl;
    output<<"You have won "<<wins<<" games"<<endl;
    output<<"You have lost "<<lose<<" games"<<endl;
    output<<endl;
    output<<setprecision(2)<<"You have won "<<round(percwin)<< "% of games"<<endl;
    output<<setprecision(2)<<"You have lost "<<round(percL)<<"% of games"<<endl;            
    
    //Exit Stage right
    //Closes input and output
    input.close();
    output.close();
    return 0;
}

void term(){
    cout<<endl;
    cout<<"Thanks for playing!"<<endl;
    exit(0);
}
bool isTpl(int place){
    bool status;
    if(place%2==0){
        status=false;
    }
    else{
        status=true;
    }
    return status;
}

bool isDbl(int place){
    bool status;
    if(place%2==0){
        status=true;
    }
    else{
        status=false;
    }
    return status;
}

void dpay(int &bet, int dbl){
    bet=bet*dbl;
    
}
void tpay(int &bet,int tpl){
    bet=bet*tpl;
    
}
void viewv(vector<int> num, vector<int>num2, vector<int>num3){
    
}