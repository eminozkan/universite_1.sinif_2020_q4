/*
 * Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ Programming
Basics.” This program stores the numerator and denominator of two fractions before
adding them, and may also store the answer, which is also a fraction. Modify the program so that all fractions are stored in variables of type struct fraction, whose two
members are the fraction’s numerator and denominator (both type int). All fractionrelated data should be stored in structures of this type.
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
    char slash;
    cout << "Enter first fraction for adding to fraction (a/b):";
    cin >> f1.numerator >> slash >>f1.denominator;

    cout << "Enter second fraction(a/b):";
    cin >> f2.numerator >> slash >> f2.denominator;

    result.numerator= f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    result.denominator= f1.denominator * f2.denominator;

    cout << "Result is=" << result.numerator << slash << result.denominator;

    return 0;
}
