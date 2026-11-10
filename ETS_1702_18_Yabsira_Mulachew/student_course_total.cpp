/* Problem Analysis:

Inputs:
    Student's assignment, midterm, and final marks (each out of 100).

Outputs:
    Total course mark (one decimal place) and the word "Pass" or "Fail".

Process:
    1. Declare double variables for assignment, midterm, final marks, and total mark.
    2. Declare a string variable to store the student's pass status.
    3. Prompt the user to enter the assignment, midterm, and final marks.
    4. Calculate the weighted assignment mark (20%), midterm mark (30%), and final mark (50%).
    5. Add the three weighted marks to calculate the total course mark.
    6. Use the conditional operator to determine whether the student passed or failed.
    7. Display the total course mark to one decimal place and the pass status.

*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    cout<<fixed<<setprecision(1);
    double midterm, assignment, final, totalResult;
    cout<<"insert assignment mark"<<endl;
    cin>>assignment;
    cout<<"insert midterm mark"<<endl;
    cin>>midterm;
    cout<<"insert final mark"<<endl;
    cin>>final;
    midterm = (midterm/100)*30;
    assignment = (assignment/100)*20;
    final =(final/100)*50;
    totalResult=midterm+assignment+final;
    string result = (totalResult>=50) ? "pass":"fail";
    cout<<"your total mark out of 100 is"<<"\t"<<totalResult<<endl;
    cout<<result;
    return 0;
}