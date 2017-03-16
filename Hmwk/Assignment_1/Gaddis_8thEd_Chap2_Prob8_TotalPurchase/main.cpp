/* 
  File:   main.cpp
  Author: Paul Garcia
  Created on February 28, 2017, 1:50 AM
  Purpose:  Hold the five prices in variables. Display each item's price,
 * the subtotal of the sale, the amount of the sales tax, and the total.
 * Assume the sales tax is 7%.
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
    const float item1 = 15.95,    //Prices of items
                item2 = 24.95,
                item3 = 6.95,
                item4 = 12.95,
                item5 = 3.95;
           const float tax = 0.07;//Tax Rate
    
    //Input values
    float subTot = item1+item2+item3+item4+item5;//Subtotal
    float saleTax=subTot*tax;                    //Tax applied
    //Process by mapping inputs to outputs
    
    //Output values
    cout<<fixed<<setprecision(2);
    cout<<"Price of item 1 = $"<<item1<<endl;
    cout<<"Price of item 2 = $"<<item2<<endl;
    cout<<"Price of item 3 = $"<<item3<<endl;
    cout<<"Price of item 4 = $"<<item4<<endl;
    cout<<"Price of item 5 = $"<<item5<<endl;
    cout<<"Subtotal = $"       <<subTot<<endl;
    cout<<"Sales Tax = $"      <<subTot*tax<<endl;
    cout<<"Total = $"          <<saleTax+subTot<<endl;
    
    //Exit stage right!
    return 0;
}