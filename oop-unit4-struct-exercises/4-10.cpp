/*
 *  Create a structure called sterling that stores money amounts in the old-style British
system discussed in Exercises 8 and 11 in Chapter 3, “Loops and Decisions.” The members could be called pounds, shillings, and pence, all of type int. The program should
ask the user to enter a money amount in new-style decimal pounds (type double), convert it to the old-style system, store it in a variable of type struct sterling, and then
display this amount in pounds-shillings-pence format.
 */

#include <iostream>

using namespace std;

struct oldmonetarysystem{
    int pounds;
    int shillings;
    int pence;

};

int main(){
    oldmonetarysystem m1;
    double decimalpounds;
    cout << "Enter money amount in decimal pounds:";
    cin >> decimalpounds;

    m1.pounds = int(decimalpounds);
    float remaining = decimalpounds - m1.pounds;
    remaining*=20;

    m1.shillings = (int) remaining;
    remaining = remaining - m1.shillings;

    m1.pence = remaining *12;

    cout << "\x9c" << m1.pounds << '.' << m1.shillings << '.' << m1.pence << endl;



    return 0;
}
