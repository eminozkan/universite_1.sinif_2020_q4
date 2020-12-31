/*
 12. Revise the four-function fraction calculator from Exercise 12, Chapter 4, so that it uses
functions for each of the four arithmetic operations. They can be called fadd(), fsub(),
fmul(), and fdiv(). Each of these functions should take two arguments of type struct
fraction, and return an argument of the same type.
 */

#include <iostream>

using namespace std;

struct fraction{
    int numerator;
    int denominator;
};
fraction fadd(fraction f1,fraction f2){
    return {f1.numerator * f2.denominator + f2.numerator * f1.denominator, f1.denominator * f2.denominator};
}
fraction fsub(fraction f1, fraction f2){
    return {f1.numerator * f2.denominator - f2.numerator * f1.denominator, f1.denominator * f2.denominator};
}
fraction fmul(fraction f1, fraction f2){
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}
fraction fdiv(fraction f1, fraction f2){
    return {f1.numerator * f2.denominator, f1.denominator * f2.numerator};
}

int main(){
    fraction f1 ={0,0};
    fraction f2 ={0,0};
    fraction result ={0,0};
    char slash;
    char i;

    cout << "Enter fractions:";
    cin >> f1.numerator >> slash >> f1.denominator >> i >> f2.numerator >> slash >> f2.denominator;

    if(f1.denominator == 0 || f2.denominator == 0){
        cout << "Denominators can't be equal to zero!";
        return -1;
    }
    switch (i) {
        case '+':
            result = fadd(f1,f2);
            cout <<"Result is = " << result.numerator << slash << result.denominator << endl;
            break;
        case '-':
            result = fsub(f1,f2);
            cout <<"Result is =" << result.numerator << slash << result.denominator << endl;
            break;
        case '*':
            result = fmul(f1,f2);
            cout <<"Result is =" << result.numerator << slash << result.denominator << endl;
            break;
        case '/':
            result = fdiv(f1,f2);
            cout <<"Result is =" << result.numerator << slash << result.denominator << endl;
            break;
        default:
            cout << "Wrong operator";

    }


    return 0;
}
