/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 7, 2017, 01:15 AM
  Purpose:  This program will calculate the percentage of male and female
 *          students in a class.
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
    int male, female;
    float total, malePer, femPer;
    
    //Input values
    cout<<"This program will calculate the percentage of male and female"<<endl;
    cout<<"students in your class."<<endl;
    cout<<" "<<endl;
    cout<<"How many male students are in your class?"<<endl;
    cin>>male;
    cout<<"How many female students are in your class?"<<endl;
    cin>>female;
    
    //Process by mapping inputs to outputs
    total=male+female;
    malePer=(male/total)*100;
    femPer=(female/total)*100;
    
    //Output values
    cout<<"The total number of students in the class is "<<total<<endl;
    cout<<"The percent of male students is "  <<malePer<<" percent."<<endl;
    cout<<"The percent of female students is "<<femPer<< " percent."<<endl;
    
    
    //Exit stage right!
    return 0;
}