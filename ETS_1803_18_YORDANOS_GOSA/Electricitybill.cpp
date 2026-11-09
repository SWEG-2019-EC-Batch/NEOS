/*
  (a) Inputs and outputs
      input  : units of electricity used in a month(kWh, whole number).
      outputs: energy charge, service charge, total bill(two decimals each).
  (b) Process
      1. Declare constants(first block = 50 units, rate for the first block = 1.50 birr, 
         rate above the block = 2.00 birr, service charge = 10.00 birr) and declare variables.
      2. Read the number of units.
      3. Compute the energy charge with the conditional operator:
         if units <= 50  -> units * 1.50
         otherwise       -> 50 * 1.50 + (units - 50) * 2.00
      4. Compute total bill = energy charge + service charge.
      5. Print the energy charge, the service charge and the total with two decimals.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int units;
    double energyCharge, serviceCharge = 10.00, totalBill;

    cout << "Enter electricity units used: ";
    cin >> units;

    energyCharge = (units <= 50) ? units * 1.50
                   : (50 * 1.50) + (units - 50) * 2.00;

    totalBill = energyCharge + serviceCharge;

    cout << fixed << setprecision(2);

    cout << "Energy Charge: " << energyCharge << " Birr" << endl;
    cout << "Service Charge: " << serviceCharge << " Birr" << endl;
    cout << "Total Bill: " << totalBill << " Birr" << endl;

    return 0;
}
