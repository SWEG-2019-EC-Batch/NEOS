/* Input:
	• distance (km)
	• hours
	• minutes
	• fuelPer100Km(L per 100 km)
	• pricePerLiter(birr)
Output:
-Average Speed(km/hr)
-fuel used(liter)
-fuel cost(birr) 
	Process:
		1. Declare variables for the distance, hours, minutes, totalHour,fuelPer100Km,pricePerLiter, fuel used, fuel cost, and average speed
		2. Prompt for and read the distance, hours, minutes,fuelPer100Km and pricePerLiter.
		3. Convert the trip time to hours: totalHour = hours + minutes / 60.0.
		4. Calculate fuel used: fuelUsed =(distance / 100.0) * fuelPer100Km
		5. Calculate fuel cost: fuelCost = fuelUsed * pricePerLiter
		6. Calculate average speed: AverageSpeed = distance / totalHour.
		7. Print average speed, fuel used, and fuel cost to two decimal places.
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


