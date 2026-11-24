#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float ticketPrice, bagWeight, extraRate;
    const short int WEIGHT_LIMIT = 20;
    short int choice, age;
    char isStudent;
    float extraCost = 0, discountAmount = 0, finalFare;

    cout << "AVAILABLE BUS DESTINATIONS" << endl;
    cout << "1. Addis Ababa to Gondar" << endl;
    cout << "2. Addis Ababa to Dire Dawa" << endl;
    cout << "3. Addis Ababa to Jimma" << endl;
    cout << "4. Addis Ababa to Dessie" << endl;
    cout << "5. Addis Ababa to Hawassa" << endl;

    cout << "\nEnter your preferred route (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            ticketPrice = 1200;
            break;

        case 2:
            ticketPrice = 450;
            break;

        case 3:
            ticketPrice = 800;
            break;

        case 4:
            ticketPrice = 650;
            break;

        case 5:
            ticketPrice = 1800;
            break;

        default:
            cout << "Invalid route selection!" << endl;
            return 0;
    }

    cout << "Enter your baggage weight (kg): ";
    cin >> bagWeight;

    cout << "Enter extra luggage fee per kg (ETB): ";
    cin >> extraRate;

    if (bagWeight > WEIGHT_LIMIT) {
        extraCost = (bagWeight - WEIGHT_LIMIT) * extraRate;
    }

    cout << "Enter passenger age: ";
    cin >> age;

    if (age <= 0 || age > 120) {
        cout << "Invalid age entered!" << endl;
        return 0;
    }

    cout << "Are you a student? (Y/N): ";
    cin >> isStudent;

    if (isStudent == 'Y' || isStudent == 'y') {
        if (age <= 12) {
            discountAmount = ticketPrice * 0.65;
        }
        else if (age >= 60) {
            discountAmount = ticketPrice * 0.40;
        }
        else {
            discountAmount = ticketPrice * 0.15;
        }
    }
    else {
        if (age <= 12) {
            discountAmount = ticketPrice * 0.50;
        }
        else if (age >= 60) {
            discountAmount = ticketPrice * 0.25;
        }
    }

    finalFare = ticketPrice - discountAmount + extraCost;

    cout << fixed << setprecision(2);

    cout << "\nTICKET PAYMENT DETAILS" << endl;
    cout << "Selected Ticket Price: ETB " << ticketPrice << endl;
    cout << "Extra Luggage Fee: ETB " << extraCost << endl;
    cout << "Discount Amount: ETB " << discountAmount << endl;
    cout << "Total Amount to Pay: ETB " << finalFare << endl;

    return 0;
}