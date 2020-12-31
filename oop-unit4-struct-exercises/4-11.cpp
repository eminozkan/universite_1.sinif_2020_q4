/*
 * Use the time structure from Exercise 9, and write a program that obtains two time values from the user in 12:59:59 format, stores them in struct time variables, converts
each one to seconds (type int), adds these quantities, converts the result back to hoursminutes-seconds, stores the result in a time structure, and finally displays the result in
12:59:59 format.
 */
#include <iostream>

using namespace std;
struct time{
    int hours;
    int minutes;
    int seconds;
};

int main(){
    time t1;
    time t2;
    time result={0,0,0};
    char dummy;
    cout << "Enter first time (hh:mm:ss):";
    cin >> t1.hours >> dummy >> t1.minutes >> dummy >> t1.seconds;

    cout << "Enter second time (hh:mm:ss):";
    cin >> t2.hours >> dummy >> t2.minutes >> dummy >> t2.seconds;

    long totalseconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds + t2.hours*3600 + t2.minutes *60 +t2.seconds;
    while(totalseconds - 3600 >= 0){
        result.hours++;
        totalseconds-=3600;
    }
    while(totalseconds - 60 >= 0){
        result.minutes++;
        totalseconds-=60;
    }
    cout << "Total time=" << result.hours << dummy << result.minutes << dummy << totalseconds;

    return 0;
}
