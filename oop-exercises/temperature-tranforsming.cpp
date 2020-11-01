#include <iostream>

using namespace std;

int main(){
    int convertNumber;
    float fahren,celsius;
    char input;
    do {

        cout << "Type 1 to convert Fahrenheit to Celsius,"<<"\n     "<<"2 to convert Celsius to Fahrenheit:";
        cin >> convertNumber;

            if (convertNumber == 1) {
                cout << "Enter temperature in Fahrenheit:";
                cin >> fahren;
                celsius = ((fahren - 32) * 5 / 9);
                cout << "In Celsius that's:" << ' ' << celsius;
            } else if (convertNumber == 2) {
                cout << "Enter temperature in Celcius:";
                cin >> celsius;
                fahren = (celsius * 9 / 5 + 32);
                cout << "In Fahrenheit that's:" << ' ' << fahren;
            }

        cout << "\nDo you want to try again (y/n):";
        cin >> input;
    }while (input!='n');
    cout << "We'd like to see you again :)";
    return 0;
}
