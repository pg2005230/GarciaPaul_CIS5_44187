/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 8, 2017, 11:45 PM
  Purpose: Program will calculate the average rainfall for three months.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <string>
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
    string month1, month2, month3;
    float rain1, rain2, rain3;
    float total; //Total sales
    
    //Input values
    cout<<"This program will calculate the average inches of"<<endl;
    cout<<"rainfall for three months."<<endl;
    cout<<" "<<endl;
    cout<<"What is the first month?"<<endl;
    cin>>month1;
    cout<<"How many inches of rain fell in "<<month1<<"?"<<endl;
    cin>>rain1;
    cout<<"What is the second month?"<<endl;
    cin>>month2;
    cout<<"How many inches of rain fell in "<<month2<<"?"<<endl;
    cin>>rain2;
    cout<<"What is the third month?"<<endl;
    cin>>month3;
    cout<<"How many inches of rain fell in "<<month3<<"?"<<endl;
    cin>>rain3;
              
    //Process by mapping inputs to outputs
    total= (rain1+rain2+rain3)/3;
    //Output values
    cout<<" "<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", and"<<endl;
    cout<<month3<<" was "<<total<<" inches."<<endl;
    

    //Exit stage right!
    return 0;
}