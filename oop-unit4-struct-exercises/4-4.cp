/*
 * Create a structure called employee that contains two members: an employee number
(type int) and the employee’s compensation (in dollars; type float). Ask the user to fill
in this data for three employees, store it in three variables of type struct employee, and
then display the information for each employee.
 */
#include <iostream>

using namespace std;

struct employee{
    int employeenumber;
    float compensation;
    int day;
    int month;
    int year;
};

int main(){
    employee e1;
    employee e2;
    employee e3;


    cout << "Enter employee number:";
    cin >> e1.employeenumber;
    cout << "Enter compensation:";
    cin >> e1.compensation;

    cout << "Enter employee number:";
    cin >> e2.employeenumber;
    cout << "Enter compensation:";
    cin >> e2.compensation;

    cout << "Enter employee number:";
    cin >> e3.employeenumber;
    cout << "Enter compensation:";
    cin >> e3.compensation;

    cout << "First employee's employee number:" << e1.employeenumber << "\nCompentasion =" << e1.compensation << endl;
    cout << "Second employee's employee number:" << e2.employeenumber << "\nCompentasion =" << e2.compensation<< endl;
    cout << "Third employee's employee number:" << e3.employeenumber << "\nCompentasion =" << e3.compensation << endl;
    return 0;
}
