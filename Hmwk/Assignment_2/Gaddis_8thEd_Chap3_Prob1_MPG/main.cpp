/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 7, 2017, 10:00 PM
  Purpose:  Program calculates a car's gas mileage.
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
    float tankSiz, miles;
    
    //Input values
    cout<<"This program calculates your car's gas milage."<<endl;
    cout<<" "<<endl;
    cout<<"How many gallons will your gas tank hold?"<<endl;
    cin>>tankSiz;
    cout<<"How many miles can be driven on a full tank?"<<endl;
    cin>>miles;
    cout<<" "<<endl;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Your car travels "<<miles/tankSiz<<" miles per gallon."<<endl;
    
    //Exit stage right!
    return 0;
}