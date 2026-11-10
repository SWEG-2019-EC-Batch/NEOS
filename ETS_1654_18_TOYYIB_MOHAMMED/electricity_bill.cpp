//input
//electricity units used
//outputs
//energychargy
//servicecharge
//totalbill

//1.declear variables forinput and outputs
//2.Read the electricity units used in the month.
//3.Set the fixed service charge to 10 birr.
//4.Calculate the energy charge using the conditionaloperator:-
//5.If units are 50 orless:
 //6. energyCharge = units * 1.50

 //7.Otherwise:
  //energyCharge = (50 * 1.50) + (units-50) * 2.00)


//8.Calculate the total bill:
//9.totalBill = energyCharge +serviceCharge

//10.Display the energy charge, service charge, and total bill with two decimal places.


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
