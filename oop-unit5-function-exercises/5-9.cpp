/*
 * Repeat Exercise 8, but instead of two int variables, have the swap() function interchange two struct time values (see Exercise 6).
 */
#include <iostream>

using namespace std;

struct time{
    int hours;
    int minutes;
    int seconds;
};
void swap(time& t1,time& t2){
    time temp = t1;
    t1 = t2;
    t2=temp;
}
int main(){
    time t1{3,0,0};
    time t2{2,30,0};
    cout << "First time is=" << t1.hours << ':' << t1.minutes << ':' << t1.seconds << endl;
    cout << "Second time is=" << t2.hours << ':' << t2.minutes << ':' << t2.seconds << endl;
    swap(t1,t2);
    cout << "First time is=" << t1.hours << ':' << t1.minutes << ':' << t1.seconds << endl;
    cout << "Second time is=" << t2.hours << ':' << t2.minutes << ':' << t2.seconds << endl;


    return 0;
}
