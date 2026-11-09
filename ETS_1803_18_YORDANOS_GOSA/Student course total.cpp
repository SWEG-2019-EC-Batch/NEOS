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
