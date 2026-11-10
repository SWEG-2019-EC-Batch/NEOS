/* Problem Analysis:

Inputs:
    Distance traveled in kilometers, travel time in hours and minutes,
    fuel consumption in liters per 100 km, and fuel price per liter.

Outputs:
    Average speed in km/hr, total fuel used in liters, and total fuel cost in birr.
    All numerical outputs are displayed to two decimal places.

Process:
    1. Declare double variables for distance, fuel consumption, fuel price,
       average speed, total time, total fuel used, and fuel cost.
    2. Declare integer variables for travel time in hours and minutes.
    3. Prompt the user to enter the distance, travel time, fuel consumption,
       and fuel price.
    4. Convert the travel time into hours by dividing the minutes by 60.0
       and adding the result to the hours.
    5. Calculate average speed by dividing the distance by total time in hours.
    6. Calculate total fuel used by multiplying the distance by fuel consumption
       per 100 km and dividing by 100.
    7. Calculate fuel cost by multiplying total fuel used by the price per liter.
    8. Display average speed, total fuel used, and fuel cost to two decimal places.

*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(2);
    double distance, fuelUsedPer100km, averageSpeed, totalTimeInHour, totalFuelUsed, fuelPricePerLiter, fuelCost;
    int timeInHour, timeInMinute;
    cout << "insert distance traveled in km" << endl;
    cin >> distance;
    cout << "insert time  taken (hour and minute separated by space)" << endl;
    cin >> timeInHour >> timeInMinute;
    cout << "insert fuel used in liters per 100km" << endl;
    cin >> fuelUsedPer100km;
    cout << "insert fuel price per liter" << endl;
    cin >> fuelPricePerLiter;
    totalTimeInHour = timeInHour + timeInMinute / 60.0;
    /*calculating total time in hr for calculating average speed*/
    averageSpeed = distance / totalTimeInHour;
    totalFuelUsed = (fuelUsedPer100km / 100) * distance;
    fuelCost = fuelPricePerLiter * totalFuelUsed;
    cout << "average speed is" << " " << averageSpeed << " km/hr" << endl;
    cout << "total fuel use is" << " " << totalFuelUsed << " liters" << endl;
    cout << "fuel cost is " << fuelCost << " birr";
    return 0;
}