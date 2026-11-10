//Input
// Assignment mark
// Midterm mark
// //Final exam mark
//Output
// Total course mark
// Pass or Fail
//Process

 //Declare variables for input and outputs
// Read the assignment,midterm,finalexam
 //Calculate the course totalusing:

//total = (assignment \times 0.20) + (midterm \times 0.30) + (finalExam \times 0.50)
//Use the conditional operator to determine the result:-
//If total greaterthan 50, the result is Pass.
// Otherwise, the result is Fail.

//Display the total mark.
//Display Pass or Fail.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignment;
    double midterm;
    double finalExam;
    double total;

    cout <<"enter assignment";
    cin >> assignment;

    cout << "enter midterm ";
    cin >> midterm;

    cout << "enter finalExam ";
    cin >> finalExam;

    total = assignment * 0.20
          + midterm * 0.30
          + finalExam * 0.50;
     cout << fixed << setprecision(2);

    cout << "Total = " << total << endl;

    cout<< (total >= 50 ? "Pass" : "Fail");

    return 0;
}
