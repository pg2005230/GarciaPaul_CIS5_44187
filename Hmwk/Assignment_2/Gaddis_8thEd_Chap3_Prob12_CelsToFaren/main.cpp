/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 7, 2017, 01:30 AM
  Purpose:  This program will convert celsius to farenheit.
 */

//System Libraries
#include <iostream>
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
    float cels, faren;
    
    //Input values
    cout<<"This program will convert temperatures in celsius to farenheit."<<endl;
    cout<<"Enter temperature degrees in celsius:"<<endl;
    cin>>cels;
    
    //Process by mapping inputs to outputs
    faren=(cels*9.0)/5.0+32;
    
    //Output values
    cout<<"The temperature in farenheit is "<<faren<<" degrees."<<endl;
    //Exit stage right!
    return 0;
}