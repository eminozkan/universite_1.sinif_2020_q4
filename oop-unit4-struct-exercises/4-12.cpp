/*
 * Revise the four-function fraction calculator program of Exercise 12 in Chapter 3 so that
each fraction is stored internally as a variable of type struct fraction, as discussed in
Exercise 8 in this chapter.
 */

#include <iostream>

using namespace std;

struct fraction{
    int numerator;
    int denominator;

};

int main(){
    fraction f1;
    fraction f2;
    fraction result;
    char Operator;
    char slash;
    cout << "Enter fractions:";
    cin >> f1.numerator >> slash >> f1.denominator >> Operator >> f2.numerator >> slash >> f2.denominator;

    if (f1.denominator ==0 || f2.denominator ==0){
        cout << "Denominators can't be equal to 0";
        return -1;
    }
    switch (Operator) {
        case '+':
            result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
            result.denominator = f1.denominator * f2.denominator;
            cout << result.numerator << slash << result.denominator;
            break;
        case '-':
            result.numerator = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
            result.denominator = f1.denominator * f2.denominator;
            cout << result.numerator << slash << result.denominator;
            break;
        case '*':
            result.numerator = f1.numerator *f2.numerator;
            result.denominator = f1.denominator*f2.denominator;
            cout << result.numerator << slash << result.denominator;
            break;
        case '/':
            result.numerator=f1.numerator * f2.denominator;
            result.denominator= f1.denominator*f2.numerator;
            cout << result.numerator << slash << result.denominator;
            break;
        default:
            cout << "Please enter right operator(+,-,*,/)";
    }
    return 0;
}
