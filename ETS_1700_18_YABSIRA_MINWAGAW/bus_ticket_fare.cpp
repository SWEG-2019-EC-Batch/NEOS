#include <iostream>
#include <iomanip>
using namespace std;
int main(){
     float baseFare,bagWeight,rate;
     const short int WEIGHT_LIMIT=20;
     short int choice;
     cout<<"correct"<<endl;
     cout<<"--------AVAILABLE ROUTES--------"<<endl;
     cout<<"1. From Addis to BahirDar"<<endl;
     cout<<"2. From Addis to Adama"<<endl;
     cout<<"3. From Addis to Debrezeit"<<endl;
     cout<<"4. From Addis to Mojo"<<endl;
     cout<<"5. From Addis to Hawassa"<<endl;
     cout<<"select from(1-5)"<<endl;
     cin>>choice;
      switch(choice){
        case 1: baseFare=7500;
        break;
        case 2: baseFare=200;
        break;
        case 3: baseFare=150;
        break;
        case 4: baseFare=300;
        break;
        case 5: baseFare=1500;
        break;
        default: cout <<"Nothing selected!"<<endl;
        return 0;
      }
    // cout<<"Enter the Base Fare in ETB: "<<endl;
     //cin>>baseFare;
     cout<<"Enter your bag weight in kg: "<<endl;
     cin>>bagWeight;
     cout<<"Enter Rate per a kilogram  ETB/kg: "<<endl;
     cin>>rate;
     float extraCost=0;

     if (bagWeight>WEIGHT_LIMIT){
         extraCost = (bagWeight-WEIGHT_LIMIT)*rate;
         }
         float total;
         short int age;
         char isStud;
         float Discount=0;
         cout<< "Entre your Age: "<<endl;
         cin>>age;
         cout<<"Are you student(Y/N): ";
         cin>>isStud;
   
           if (age <=0 || age >120){
               cout << "invalid age number";
           return 0;
           }
           if (isStud=='Y'){
               if (age <=12){
                 Discount = baseFare * 0.65; 
                  }
                 else if (age>=60){
               Discount =baseFare*0.40;
                  }
                else {
                  Discount=baseFare*0.15;
                }
           }
                  else {
                      if (age<=12){
                          Discount = baseFare*0.5;
                          }
                          else if (age >= 60){
                              Discount = baseFare*0.25;
                          }
                  }
   total = (baseFare-Discount)+ extraCost;
   cout <<"Discount: ETB "<<Discount<<endl;
   cout<<"Base fare: ETB "<<baseFare<<endl;
   cout<<"Extra cost: ETB "<<extraCost<<endl;
   cout << "Your Total: ETB "<<total<<endl;
  return 0;
 }