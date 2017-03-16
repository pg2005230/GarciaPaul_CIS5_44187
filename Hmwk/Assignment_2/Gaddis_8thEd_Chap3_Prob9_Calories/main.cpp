/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 8, 2017, 12:10 AM
  Purpose:  This program will calculate calories per cookie.
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
    int calors=300/(30/10);
    int cookie;
    
    //Input values
    cout<<"This program will calculate how many calories were"<<endl;
    cout<<"consumed based on how many cookies were eaten."<<endl;
    cout<<"Each bag of cookies contains 30 cookies."<<endl;
    cout<<"Each bag of cookies contains 10 servings."<<endl;
    cout<<"Each serving contains 300 calories."<<endl;
    cout<<" "<<endl;
    
    //Process by mapping inputs to outputs
    cout<<"How many cookies did you eat?"<<endl;
    cin>>cookie;
    cout<<" "<<endl;
    
    //Output values
    cout<<"You consumed "<<calors*cookie<<" total calories from eating"<<endl;
    cout<<cookie<<" cookie(s)."<<endl;
    
    
    
    
    //Exit stage right!
    return 0;
}