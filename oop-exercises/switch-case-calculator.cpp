#include <iostream>

using namespace std;

int main(){
    float number1,number2;
    char Operator,input;


    do {
        cout << "Enter number1, operator and number2:";
        cin >> number1 >> Operator >> number2;

        switch (Operator) {
            case '+':
                cout << number1 << "+" << number2 << "=" << number1 + number2;
                break;
            case '-':
                cout << number1 << "-" << number2 << "=" << number1 - number2;
                break;
            case '*':
                cout << number1 << "*" << number2 << "=" << number1 * number2;
                break;
            case '/':
                if (number2 == 0) {
                    cout << number1 << "/" << number2 << "=" << "undefined";
                } else {
                    cout << number1 << "/" << number2 << "=" << number1 / number2;
                }
                break;
            default:
                cout << "You entered wrong operator.";

        }

        cout << "\nDo another (y/n)?";
        cin >> input;

    }while (input!='n');

    cout << "We would like to see you again.";

    return 0;
}
