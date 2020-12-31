/*
 * Add a variable of type enum etype (see Exercise 6), and another variable of type struct
date (see Exercise 5) to the employee class of Exercise 4. Organize the resulting program so that the user enters four items of information for each of three employees: an
employee number, the employee’s compensation, the employee type, and the date of first
employment. The program should store this information in three variables of type
employee, and then display their contents.
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


enum etype{
        laborer,
        secretary,
        manager,
        accountant,
        executive,
        researcher
};
int main(){
        employee e1;
        employee e2;
        employee e3;

        cout << "Enter first employee's number:";
        cin >> e1.employeenumber;
        cout << "Enter first employee's compensation:";
        cin >> e1.compensation;
        char dateslash;
        cout << "Enter first employee's date of first employment:";
        cin >> e1.day >> dateslash >> e1.month >> dateslash >> e1.year;
        char inputofe1;
        cout << "Enter employee type(first letter only) \nlaborer,secretary,manager,\naccountant, executive, researcher:";
        cin >> inputofe1;

        cout << "Enter second employee's number:";
        cin >> e2.employeenumber;
        cout << "Enter second employee's compensation:";
        cin >> e2.compensation;
        cout << "Enter second employee's date of first employment:";
        cin >> e2.day >> dateslash >> e2.month >> dateslash >> e2.year;
        char inputofe2;
        cout << "Enter employee type(first letter only) \nlaborer,secretary,manager,\naccountant, executive, researcher:";
        cin >> inputofe2;

        cout << "Enter third employee's number:";
        cin >> e3.employeenumber;
        cout << "Enter third employee's compensation:";
        cin >> e3.compensation;
        cout << "Enter third employee's date of first employment:";
        cin >> e3.day >> dateslash >> e3.month >> dateslash >> e3.year;
        char inputofe3;
        cout << "Enter employee type(first letter only) \nlaborer,secretary,manager,\naccountant, executive, researcher:";
        cin >> inputofe3;

    int etype;
        switch (inputofe1) {
            case 'l':
                etype=laborer;
                break;
            case 's':
                etype=secretary;
                break;
            case 'm':
                etype=manager;
                break;
            case 'a':
                etype=accountant;
                break;
            case 'e':
                etype=executive;
                break;
            case 'r':
                etype=researcher;
                break;
            default:
                cout << "Wrong letter!";
                break;
        }
        cout << "First Employee \nEmployee number:" << e1.employeenumber << "\nEmployee Compensation:" << e1.compensation;
        cout << "\nFirst Employment date:" << e1.day << dateslash << e1.month << dateslash << e1.year << endl;
        switch (etype) {
            case laborer:
                cout << "Employee type is laborer.";
                break;
            case secretary:
                cout << "Employee type is secretary.";
                break;
            case manager:
                cout << "Employee type is manager.";
                break;
            case accountant:
                cout << "Employee type is accountant.";
                break;
            case executive:
                cout << "Employee type is executive.";
                break;
            case researcher:
                cout << "Employee type is researcher.";
                break;
        }
    switch (inputofe2) {
        case 'l':
            etype=laborer;
            break;
        case 's':
            etype=secretary;
            break;
        case 'm':
            etype=manager;
            break;
        case 'a':
            etype=accountant;
            break;
        case 'e':
            etype=executive;
            break;
        case 'r':
            etype=researcher;
            break;
        default:
            cout << "Wrong letter!";
            break;
    }
    cout << "\nSecond Employee \nEmployee number:" << e1.employeenumber << "\nEmployee Compensation:" << e1.compensation;
    cout << "\nFirst Employment date:" << e1.day << dateslash << e1.month << dateslash << e1.year << endl;
    switch (etype) {
        case laborer:
            cout << "Employee type is laborer.";
            break;
        case secretary:
            cout << "Employee type is secretary.";
            break;
        case manager:
            cout << "Employee type is manager.";
            break;
        case accountant:
            cout << "Employee type is accountant.";
            break;
        case executive:
            cout << "Employee type is executive.";
            break;
        case researcher:
            cout << "Employee type is researcher.";
            break;
    }

    switch (inputofe3) {
        case 'l':
            etype=laborer;
            break;
        case 's':
            etype=secretary;
            break;
        case 'm':
            etype=manager;
            break;
        case 'a':
            etype=accountant;
            break;
        case 'e':
            etype=executive;
            break;
        case 'r':
            etype=researcher;
            break;
        default:
            cout << "Wrong letter!";
            break;
    }
    cout << "\nThird Employee \nEmployee number:" << e1.employeenumber << "\nEmployee Compensation:" << e1.compensation;
    cout << "\nFirst Employment date:" << e1.day << dateslash << e1.month << dateslash << e1.year << endl;
    switch (etype) {
        case laborer:
            cout << "Employee type is laborer.";
            break;
        case secretary:
            cout << "Employee type is secretary.";
            break;
        case manager:
            cout << "Employee type is manager.";
            break;
        case accountant:
            cout << "Employee type is accountant.";
            break;
        case executive:
            cout << "Employee type is executive.";
            break;
        case researcher:
            cout << "Employee type is researcher.";
            break;
    }
        return 0;
    }
