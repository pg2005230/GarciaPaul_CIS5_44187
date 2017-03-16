/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 7, 2017, 10:50 PM
  Purpose:  Program displays amounts of ingredients needed to make desired
 *          amount of cookies.
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
    float sugar  = 1.5/48; //ingredients
    float butter = 1.0/48; 
    float flour  = 2.75/48;
    float cookies;
    
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"This program will display the amount of ingredients"<<endl;
    cout<<"needed to make cookies."<<endl;
    cout<<" "<<endl;
    cout<<"How many cookies would you like to make?"<<endl;
    cin>>cookies;

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"You will need:"<<endl;
    cout<<cookies*sugar<< " cups of sugar." <<endl;
    cout<<cookies*butter<<" cups of butter."<<endl;
    cout<<cookies*flour<< " cups of flour." <<endl;
            
    //Exit stage right!
    return 0;
}