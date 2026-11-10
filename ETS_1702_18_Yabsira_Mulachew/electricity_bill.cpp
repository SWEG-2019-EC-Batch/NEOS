/* Problem Analysis:

Inputs:
Electricity units (kWh) used during the month.

Outputs:
Energy charge, service charge, and total electricity bill (each in two decimal places).

Process:
1. Declare an integer variable for electricity units used.
2. Declare double variables for energy charge and total bill.
3. Declare a constant double variable for the fixed service charge of 10 birr.
4. Prompt the user to enter the electricity units used during the month.
5. Use the conditional operator to calculate the energy charge:
- If units used are 50 or less, multiply all units by 1.50 birr.
- Otherwise, charge 1.50 birr for the first 50 units and 2.00 birr for the remaining units.
6. Add the energy charge and service charge to calculate the total bill.
7. Display the energy charge, service charge, and total bill to two decimal places.

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    int electricityUsed;
    double energyCharge, totalBill;
    const double serviceCharge=10;
    cout<<"insert electricity used in the last month in KWh"<<endl;
    cin>>electricityUsed;
   energyCharge= (electricityUsed<=50)?electricityUsed*1.5:(50*1.5)+(electricityUsed-50)*2;
    totalBill=energyCharge+serviceCharge;
    cout<<"energy charge is"<<"\t"<<energyCharge<<" "<<"birr"<<endl;
    cout<<"service charge is"<<"\t"<<serviceCharge<<" "<<"birr"<<endl;
    cout<<"the total bill is"<<"\t"<<totalBill<<" "<<"birr";
    return 0;
    
    }