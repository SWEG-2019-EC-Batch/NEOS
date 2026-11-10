//Input
// Assignment mark
// Midterm mark
// //Final exam mark
//Output
// Total course mark
// Pass or Fail
//Process

 //1.Declare variables for input and outputs
// 2.Read the assignment,midterm,finalexam
 //3.Calculate the course totalusing:

//4.total = (assignment \times 0.20) + (midterm \times 0.30) + (finalExam \times 0.50)
//5.Use the conditional operator to determine the result:-
//6.If total greaterthan 50, the result is Pass.
// 7.Otherwise, the result is Fail.

//8.Display the total mark.
//9.Display Pass or Fail.

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
