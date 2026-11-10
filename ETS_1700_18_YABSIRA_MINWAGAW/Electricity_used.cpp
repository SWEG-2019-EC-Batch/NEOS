/* inputs: electricity unit in kwh
      output: energy charge, service fee and total charge 
      procedure: 1. declar variables to accept inputs and results(the electricity unit,energy charge,service charge and total charge)
                 2. define fixed values (service charge)
                 3.  print prompt and read inputs
                 4. decide wether the unit is less than 50 and if it is true simply multiply it with 1.5 but if it is greater than 50 multiply every unit greater than 50 
                 5. calculate the total using the above decision and add the fixed service fee  */

#include <iostream>
#include<iomanip>
using namespace std;
int main(){
 double elec_units, energy_charge,total_charge;
 const double serviceFee=10;
 cout<<"please enter your Electricity reading(KWH): ";
 cin>>elec_units;
 (elec_units<=50)?(energy_charge=elec_units*1.5):energy_charge=50*1.5+(elec_units-50)*2;
 total_charge= energy_charge+serviceFee;
 cout<<"your Energy Charge is "<<fixed<<setprecision(2)<<energy_charge<<"\n";
 cout<<"Service Fee "<<serviceFee<<fixed<<setprecision(2)<<"\n";
 cout<<"Your Total bill is  "<<total_charge<<fixed<<setprecision(2)<<"\n"; 
 return 0;
}