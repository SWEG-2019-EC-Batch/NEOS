/* Input:
- variables:-units 
-Constants:
	- SERVICE_CHARGE = 10.00
	- FIRST_50_CHARGE = 1.50
	- ABOVE_50_CHARGE = 2.00
Output:
• Energy charge
• Service charge
• Total bill (two decimal places)
Process:
	1. Declare the variable units and above50Units.
	2. Declare the constants SERVICE_CHARGE, FIRST_50_CHARGE,, and ABOVE_50_CHARGE.
	3. Prompt the user to enter their monthly electricity usage, then read units.
	4. Declare variable and Calculate the units above 50 using the conditional operator: above50Units = (units > 50) ? units - 50 : 0.
	5. Declare variable and Calculate the energy charge: energyCharge = (units - above50Units) * FIRST_50_CHARGE + above50Units * ABOVE_50_CHARGE.
	6. Declare variable and Calculate the total bill: totalBill = energyCharge + SERVICE_CHARGE.
   7.    Print the energy charge, service charge, and total bill to two decimal places.
*/	
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
double distance;
int hours;
int minutes;
double totalHour;
double fuelPer100Km;
double pricePerLiter;
double fuelUsed;
double fuelCost;
double averageSpeed;
cout<<"Enter the distance traveled: ";
cin>>distance;
cout<<"Enter the hours and minutes traveled separated by space : ";
cin>>hours>>minutes;
cout<<"Enter the fuel needed for 100km travel: ";
cin>>fuelPer100Km;
cout<<"Enter the fuel price per Liter: ";
cin>>pricePerLiter;
totalHour = hours + minutes / 60.0;
fuelUsed = (distance / 100.0) * fuelPer100Km;
fuelCost = fuelUsed * pricePerLiter;
averageSpeed =  distance / totalHour;
cout << fixed << setprecision(2);
cout << "Your Average speed is: "<<averageSpeed<<"km/hr"<<endl;
cout << "Your travel fuel use is: "<<fuelUsed<<"Liter"<<endl;
cout << "Your Fuel cost is: "<<fuelCost<<"BIRR"<<endl;
return 0;}


