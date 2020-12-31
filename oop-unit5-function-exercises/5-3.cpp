/*
 * Write a function called zeroSmaller() that is passed two int arguments by reference
and then sets the smaller of the two numbers to 0. Write a main() program to exercise
this function.
 */
#include <iostream>

using namespace std;

void zeroSmaller(int& n1, int& n2){
    n1 < n2 ? n1=0 : n2=0;

}

int main(){
    int number1,number2;
    cout << "Enter number 1:";
    cin >> number1;

    cout << "Enter number 2:";
    cin >> number2;

    zeroSmaller(number1,number2);
    cout <<"Number1 =" << number1 << '\t';
    cout <<"Number2 =" << number2 << endl;

    return 0;
}
