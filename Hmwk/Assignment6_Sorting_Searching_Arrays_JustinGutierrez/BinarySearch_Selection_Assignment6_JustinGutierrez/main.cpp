/*
 * File:   main.cpp
 * Author: Justin Gutierrez
 * Created on July 23, 2022, 3:31 PM
 * Purpose: Binary Search with Selection Sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random Functions
#include <ctime>     //Time Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void selSort(int [],int);
void swap3(int *,int *);
int binSrch(int [],int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    int indx,val;
    
    //Initialize or input i.e. set variable values
    fillAry(array,SIZE);

    //Sorted List
    selSort(array,SIZE);
    
    //Display the outputs
    
    prntAry(array,SIZE,10);
    cout<<endl;
    cout<<"Input the value to find in the array"<<endl;
    cin>>val; //Value we are looking for to be inputted
    //if(binSrch(array,SIZE,val))
     cout<<val<<" was found at indx = "<<binSrch(array,SIZE,val)<<endl;

    //Exit stage right or left!
    return 0;
}
void selSort(int a[],int n){                                        //A selection sort to sort before binary search
    for(int pos=0;pos<n-1;pos++){
        int selIndx=pos;
        for(int i=pos+1;i<n;i++){
            if(*(a+selIndx)>*(a+i))selIndx=i;
        }
        swap3(a+selIndx,a+pos);                                 //Swaps values to keep properly sorting
    }
}

void swap3(int *a,int *b){
    int temp=*a;
    *a=*b;                                  //Stores and swaps value for the selection sort
    *b=temp;
}

void fillAry(int Aray[],int x){
    for(int i=0;i<x;i++){
        cin>>Aray[i];                               //Array is fileld and inputted
    }   
}
    void prntAry(int Aray[],int x,int perLine){
 
    for(int i=0;i<x;i++){
        cout<<Aray[i]<<" ";                                                     //Array is printed and formatted properly
        if(i%perLine==(perLine-1))cout<<endl;
    }

}    

int  binSrch(int Aray[],int n,int val){
    int high=n-1,low=0;
    do{
        int middle=(high+low)/2;                                //Binary search is done by looking at end points and contiunsoly downsizing the range of values
        if(val==Aray[middle]){
            return middle;
        }else if(val<Aray[middle]){
            high=middle-1;
        }else{
            low=middle+1;
        }
    }while(low<=high);
    return -1;
}
