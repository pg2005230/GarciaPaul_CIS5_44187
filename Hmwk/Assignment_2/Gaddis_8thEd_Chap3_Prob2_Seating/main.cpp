/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 10, 2017, 1:30 PM
  Purpose: Program will calculate the combined total of ticket sales
 *          with 3 classes of seats.
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
    float classA, classB, classC;
    float total; //Total sales
    
    //Input values
    cout<<"This program will calculate the total price"<<endl;
    cout<<"of ticket sales."<<endl;
    cout<<"Class A = $15 each"<<endl;
    cout<<"Class B = $12 each"<<endl;
    cout<<"Class C = $9 each"<<endl;
    cout<<" "<<endl;
    cout<<"How many Class A tickets were sold?"<<endl;
    cin>>classA;
    cout<<"How many Class B tickets were sold?"<<endl;
    cin>>classB;
    cout<<"How many Class C tickets were sold?"<<endl;
    cin>>classC;
              
    //Process by mapping inputs to outputs
    total= (classA*15)+(classB*12)+(classC*9);
    //Output values
    cout<<" "<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"The total sales of all tickets sold = $"<<total<<endl;
    

    //Exit stage right!
    return 0;
}