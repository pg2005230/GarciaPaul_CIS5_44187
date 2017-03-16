/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 9, 2017, 3:30 PM
  Purpose: Write a program that asks for five test scores. The program should
 * calculate the average test score and display it. The number displayed should
 * be formatted in fixed-point notation, with one decimal point of precision.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float test1,test2,test3,test4,test5;
    float total; //Test score total
    
    //Input values
    cout<<"This program will calculate the average"<<endl;
    cout<<"of five test scores and display them all."<<endl;
    cout<<" "<<endl;
    cout<<"What are the five test scores?"<<endl;
    cout<<"All scores should be on the same line."<<endl;
    cout<<"(ie 92 78 85 97 88)"<<endl;
    cin>>test1>>test2>>test3>>test4>>test5;
              
    //Process by mapping inputs to outputs
    total= (test1+test2+test3+test4+test5)/5.0;
    //Output values
    cout<<" "<<endl;
    cout<<fixed<<setprecision(1);
    cout<<"The test average is "<<total<<endl;
    

    //Exit stage right!
    return 0;
}