/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on March 7, 2017, 01:00 AM
  Purpose:  This program will calculate the total automobile costs
 *          per month and annually.
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
    float loan, insur, gas, oil, tires, maint, monCost, anuCost;
    
    //Input values
    cout<<"This program will calculate your total monthly and annual costs"<<endl;
    cout<<"for your automobile."<<endl;
    cout<<" "<<endl;
    cout<<"How much is your loan payment per month?"<<endl;
    cin>>loan;
    cout<<"How much is your insurance payment per month?"<<endl;
    cin>>insur;
    cout<<"How much do you spend on gas per month?"<<endl;
    cin>>gas;
    cout<<"How much do you spend on oil per month?"<<endl;
    cin>>oil;
    cout<<"How much do you spend on tires per month?"<<endl;
    cin>>tires;
    cout<<"How much do you spend on maintenance per month?"<<endl;
    cin>>maint;
    cout<<" "<<endl;
    
    //Process by mapping inputs to outputs
    monCost=loan+insur+gas+oil+tires+maint;
    anuCost=monCost*12;
    
    //Output values
    cout<<"Your total auto expenses:"<<endl;
    cout<<"Total expenses per month = $"<<monCost<<endl;
    cout<<"Total expenses annually = $" <<anuCost<<endl;
    //Exit stage right!
    return 0;
}