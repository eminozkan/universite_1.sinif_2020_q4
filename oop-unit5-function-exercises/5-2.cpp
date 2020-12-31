/*
 * Raising a number n to a power p is the same as multiplying n by itself p times. Write a
function called power() that takes a double value for n and an int value for p, and
returns the result as a double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. Write a main() function that gets values from the user to test this function.
 */

#include <iostream>

using namespace std;

double power(double n,int p){
    double result = 1;

    for(int i = p; i>0 ;i--){
        result*=n;
    }

    return result;
}

int main(){
    int n,p;
    cout << "Enter base number:";
    cin >> n;
    cout << "Enter power of base number:";
    cin >> p;

    cout << n<<"^" <<p << '=' << power(n,p);

    return 0;
}
