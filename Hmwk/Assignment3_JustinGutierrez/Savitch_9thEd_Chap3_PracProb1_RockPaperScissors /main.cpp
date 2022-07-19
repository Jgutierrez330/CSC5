/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 9, 2022, 4:30 PM
 * Purpose: Rock Paper Scissors
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
    
        return 0;
}