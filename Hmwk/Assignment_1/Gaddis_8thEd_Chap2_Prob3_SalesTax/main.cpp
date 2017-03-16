/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on Ferbruary 28, 2017, 8:20 PM
  Purpose:  Write a program that will compute the total sales tax on a $95
 * purchase. Assume the state sales tax is 4% and the county sales tax is 2%.
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
    short int purch = 95;
    float statTax = purch*4.0e-2;
    float contTax = purch*2.0e-2;
    //Input values
    
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout<<"Purchase   = $"<<purch<<endl;
    cout<<"State Tax  = $"<<statTax<<endl;
    cout<<"County Tax = $"<<contTax<<endl;
    cout<<"Total Sales Tax = $"<<contTax+statTax<<endl;
    

    //Exit stage right!
    return 0;
}