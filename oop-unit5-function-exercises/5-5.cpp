/*
 * Write a function called hms_to_secs() that takes three int values—for hours, minutes,
and seconds—as arguments, and returns the equivalent time in seconds (type long).
Create a program that exercises this function by repeatedly obtaining a time value in
hours, minutes, and seconds from the user (format 12:59:59), calling the function, and
displaying the value of seconds it returns.
 */
#include <iostream>

using namespace std;

long secs(int hours,int minutes, int seconds){
    return (hours*3600+minutes*60+seconds);
}


int main(){
    do {
        int hours, minutes, seconds;
        char dummy;
        cout << "Enter time (hh/mm/ss)" << "\nto exit type -1:";
        cin >> hours;
        if(hours == -1){
            break;
        }
        cin >> dummy >> minutes >> dummy >> seconds;

        cout <<"Total secs="<< secs(hours, minutes, seconds) << endl;

    }while (true);
    return 0;
}
