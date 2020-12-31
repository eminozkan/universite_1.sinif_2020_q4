/*
 * Create a structure called Volume that uses three variables of type Distance (from the
ENGLSTRC example) to model the volume of a room. Initialize a variable of type Volume
to specific dimensions, then calculate the volume it represents, and print out the result.
To calculate the volume, convert each dimension from a Distance variable to a variable
of type float representing feet and fractions of a foot, and then multiply the resulting
three numbers
 */
#include <iostream>

using namespace std;

struct distances{
    int feet;
    float inches;
};
struct room{
    distances d1;
    distances d2;
    distances d3;
};
int main(){
    room vol;
    cout << "Envolumeter feet of first length:";
    cin >> vol.d1.feet;
    cout << "Enter inches of first length:";
    cin >> vol.d1.inches;

    cout << "Enter feet of second length:";
    cin >> vol.d2.feet;
    cout << "Enter inches of second length:";
    cin >> vol.d2.inches;

    cout << "Enter feet of third length:";
    cin >> vol.d3.feet;
    cout << "Enter inches of third length:";
    cin >> vol.d3.inches;

    float d1 = vol.d1.feet + vol.d1.inches/12;
    float d2 = vol.d2.feet + vol.d2.inches/12;
    float d3 = vol.d3.feet + vol.d3.inches/12;

    vol.d3.feet*=vol.d1.feet*vol.d2.feet;
    cout << "Volume equals to =" << d1*d2*d3 << "foot^3";
    return 0;
}
