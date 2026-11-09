/*Inputs
Distance (km)
Travel time (hours)
Trave time (minutes)
Fuel consumption (liters per 100km)
price per liter (birr)

Outputs
Average speed (km/h)
Fuel used(liters)
Fuel cost(birr)

Process
Read Distance (km),Travel time (hours),Trave time (minutes),Fuel consumption (liters per 100km),price per liter (birr)
Convert travel time into hours
calculate average speed
calculate fuel used
calculate fuel cost*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance, fuelRate, pricePerLiter;
    double time, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;
    cout << "Enter distance in km: ";
    cin >> distance;
 cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;
 cout << "Enter fuel use (L per 100 km): ";
    cin >> fuelRate;
  cout << "Enter price per liter: ";
    cin >> pricePerLiter;

    time = hours + (minutes / 60.0);

    averageSpeed = distance / time;
    fuelUsed = (distance * fuelRate) / 100;
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
