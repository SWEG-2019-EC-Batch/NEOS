/*
Inputs:
- Variables: assignment, midterm, final
- Constant: `PASS_MARK`

Output:
- Total (one decimal place)
- Word: Pass or Fail
Process:
1. Declare the variables: `assignment`, `midterm`, `final`, and `total`.
2. Declare constant `PASS_MARK`.
3. Prompt for the values of the variables.
4. Read the assignment, midterm, and final marks.
5. Calculate the total: `total = assignment * 0.2 + midterm * 0.3 + final * 0.5`.
6. Declare a string variable called `result`. Use the conditional operator to set it to `"Pass"` if `total >= PASS_MARK`, otherwise `"Fail"`.
7. Set the output precision to one decimal place using `<iomanip>`, then print the total.
8. Print the pass/fail result. */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
double assignment;
double midterm;
double final;
const double PASS_MARK = 50.0;
cout<<"please enter your assignment mark: ";
cin>>assignment;
cout<<"please enter your midterm mark: ";
cin>>midterm;
cout<<"please enter your final mark: ";
cin>>final;
double total;
total = assignment*0.2 + midterm*0.3 + final*0.5;
string result;
result = (total>=PASS_MARK)?"Pass":"Fail";
cout << fixed << setprecision(1);
cout <<"your total mark is: "<<total<<endl;
cout<<"pass/fail: "<<result;
return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

}
