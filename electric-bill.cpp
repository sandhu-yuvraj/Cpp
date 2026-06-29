// Electric Bill Multi-Tier Grid Pricing
// Most Energy Cooperatives charges electricity rates dynamically depending on consumption.
// For our code, we have assumed:
// First 100 units: $1.50 per unit
// Next 200 units (101 to 300): $2.50 per unit
// Above 300 units: $4.00 per unit
// Additional Structural Safety Surge of 15% is appended to total amount generated.
#include <iostream>
using namespace std;
int main()
{
    float units;
    cout<<"Enter number of units: ";
    cin>>units;

    if (units<= 100) 
    { float bill = units*1.5 ;
      float total =  bill*1.15 ;
     cout<<"Total Bill to be paid is: $"<<total; 
    }
    else if ( units <=300) 
    {
        float bill = ((units-100)*2.5 + (100*1.5));
        float total = bill*1.15 ;
        cout<<"Total Bill to be paid is: $"<<total;
    }
    else if( units>=300)
    {
        float bill = (1.5*100 + 2.5*200 + (units-300)*4) ;
        float total = bill*1.15 ;
        cout<<"Total Bill to be paid is: $"<<total;
    }
}