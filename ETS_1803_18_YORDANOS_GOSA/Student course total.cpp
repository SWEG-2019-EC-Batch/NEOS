/* Input
Assignment mark (out of 100).
Midterm mark (out of 100).
Final exam mark (out of 100).
 Processing
Calculate the course total using the given percentagesDetermine the result using the conditional operator:
total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50)
If total ≥ 50, the result is Pass.
If total < 50, the result is Fail.
 Output
Course total (one decimal place).
Student result (Pass or Fail).*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double assignment, midterm, finalMark, total;
    string result;

    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final mark: ";
    cin >> finalMark;

    total = (assignment * 0.20) + (midterm * 0.30) + (finalMark * 0.50);

    result = (total >= 50) ? "Pass" : "Fail";

    cout << fixed << setprecision(1);

    cout << "Total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
