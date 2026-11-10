//declear variables forinput and outputs
//Read the electricity units used in the month.
//Set the fixed service charge to 10 birr.
//Calculate the energy charge using the conditionaloperator:-
//If units are 50 orless:
 // energyCharge = units * 1.50

 //Otherwise:
  //energyCharge = (50 * 1.50) + (units-50) * 2.00)


//Calculate the total bill:
//totalBill = energyCharge +serviceCharge

//Display the energy charge, service charge, and total bill with two decimal places.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int units;
double energycharge;
const double servicecharge = 10.0;
double totalbill;

cout<< "enter electricity units used"<<endl;
cin>>units;

energycharge = (units<=50)? units*1.50 :(50 * 1.50) + ((units - 50) * 2.00);

totalbill = energycharge + servicecharge;
 cout << fixed << setprecision(2);

cout<<"energycharge = "<<energycharge<<endl;

cout<< "servicecharge = "<<servicecharge<<endl;

cout<< "totalbill = " << totalbill<<endl;


    return 0;
}
