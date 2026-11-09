/*
inputs: distance,travel time,car fuel used per km and price per litre
outputs: average speed ,fuel used , fuel cost
process: 1. declare variabls to take inputs and store results
                 2. print prompt and read the input from the user
                 3. calculate the average speed, the fuel used , and the fuel cost 
                 4. print tge results from  what is calculated
                 */
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double distance, hour,minutes, fuelPerKm, pricePerLitre,Vave,fuelUsed,fuelCost;
	cout<<"Enter your total distance in km ";
	cin>>distance;
	cout<<"Enter your travel time(hour and minute separated by space) ";
	cin>>hour>>minutes;
   cout<<"Enter amount of Fuel per 100km ";
	cin>>fuelPerKm;
cout<<"Enter the amount of price per litre ";
	cin>>pricePerLitre;/*cout<<distance<<duration<<fuelPerKm<<pricePerLitre;
*/	Vave=distance/(hour+(minutes/60));
	cout<< "Avrage speed is:"<< fixed<<setprecision(2)<<Vave<<" km/hr \n";
	fuelUsed=(fuelPerKm*distance)/100;
	cout<<"You have used: "<<fuelUsed<<" L\n";
	fuelCost= pricePerLitre*fuelUsed;
	cout <<"Total Fuel Cost: "<<fuelCost<<" birr";
	return 0;
}