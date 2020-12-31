/*
 * Start with the program from Exercise 11 in Chapter 4, “Structures,” which adds two
struct time values. Keep the same functionality, but modify the program so that it uses
two functions. The first, time_to_secs(), takes as its only argument a structure of type
time, and returns the equivalent in seconds (type long). The second function,
secs_to_time(), takes as its only argument a time in seconds (type long), and returns a
structure of type time.
 */
#include <iostream>

using namespace std;
struct time{
    int hours;
    int minutes;
    int seconds;
};
long time_to_secons(time h1,time h2){
    return (h1.hours*3600+h1.minutes*60+h1.seconds+h2.hours*3600+h2.minutes*60+h2.seconds);
}
time secs_to_time(long seconds){
    time t1{0,0,0};
    while(seconds - 3600 >= 0){
        seconds-=3600;
        t1.hours++;
    }
    while(seconds - 60 >= 0){
        seconds-=60;
        t1.minutes++;
    }
    t1.seconds = seconds;
    return t1;
}
int main(){
    time t1;
    time t2;
    char dummy;
    cout << "Enter time(hh/mm/ss):";
    cin >> t1.hours >> dummy >> t1.minutes >> dummy >> t1.seconds;

    cout << "Enter second time (hh/mm/ss):";
    cin >> t2.hours >> dummy >> t2.minutes >> dummy >> t2.seconds;


    dummy = ':';
    t1 = secs_to_time(time_to_secons(t1,t2));
    cout << "Total time=" << t1.hours << dummy << t1.minutes << dummy << t1.seconds;





    return 0;
}
