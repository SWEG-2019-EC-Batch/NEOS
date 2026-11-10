//input
//distance(km)
//travel time in minutes
//travel time in hours
//fuel use(l/100km)
//price per liter (birr)
//outputs
//average speed(km/h)
//fuelused(l)
//fuelcost(birr)


//1.declear variables for inputs and outputs
//2.Read  distance,travel time in hours and minutes,fueluse, price per liter.
//3.Convert travel time into hours
//4.totalTime = hours + {minutes}/60
//5.calculate average speed,fuelused,fuelcost

//6.averageSpeed = {distance} / {totalTime}}

//7.fuelUsed = {distance} *{fuelUse}/100


//8.fuelCost = {fuelUsed} * {pricePerLiter}


//9.Display average speed, fuel used, and fuel cost with two decimal places.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double distance;
    int hours, minutes;
    double fuelUse;
    double pricePerLiter;

    double totalTime;
    double averageSpeed;
    double fuelUsed;
    double fuelCost;

    cout << "Enter distance (km) ";
    cin >> distance;

    cout << "Enter hours ";
    cin >> hours;

    cout << "Enter minutes: ";
    cin >> minutes;

    cout << "Enter fuel use (liters per 100 km) ";
    cin >> fuelUse;

    cout << "Enter price per liter (birr) ";
    cin >> pricePerLiter;

    totalTime = hours + (double)minutes / 60;

    averageSpeed = distance / totalTime;

    fuelUsed = (distance * fuelUse) / 100;

    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average speed = " << averageSpeed << " km/h" << endl;
    cout << "Fuel used = " << fuelUsed << " liters" << endl;
    cout << "Fuel cost = " << fuelCost << " birr" << endl;
    return 0;
}
