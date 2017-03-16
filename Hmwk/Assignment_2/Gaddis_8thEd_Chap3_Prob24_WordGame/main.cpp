/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 8, 2017, 12:30 AM
  Purpose:  This program will create a word game!
 */

//System Libraries
#include <iostream>
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
    string name, age, city, college, profess, animal, petName;
    
    //Input values
    cout<<"This program is a word game."<<endl;
    cout<<" "<<endl;
    cout<<"What is your name?"<<endl;
    cin>>name;
    cout<<"What is your age?"<<endl;
    cin>>age;
    cout<<"Name a city"<<endl;
    cin>>city;
    cout<<"Name a college"<<endl;
    cin>>college;
    cout<<"Name a profession"<<endl;
    cin>>profess;
    cout<<"Name a type of animal"<<endl;
    cin>>animal;
    cout<<"Lastly, I need a pet's name"<<endl;
    cin>>petName;
    cout<<" "<<endl;
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<"Here is the story..."<<endl;
    cout<<"There once was a person named "<<name<<" who lived in "<<city<<"."<<endl;
    cout<<"At the age of "<<age<<", "<<name<<" went to college at "<<college<<"."<<endl;
    cout<<name<<" graduated and went to work as a "<<profess<<". Then, "<<name<<" adopted"<<endl;
    cout<<"a(n) "<<animal<<" named "<<petName<<". They both lived happilly ever after!"<<endl;
    //Exit stage right!
    return 0;
}