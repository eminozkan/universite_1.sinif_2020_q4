/*
 * Write a function that, when you call it, displays a message telling how many times it has
been called: “I have been called 3 times”, for instance. Write a main() program that calls
this function at least 10 times. Try implementing this function in two different ways.
First, use a global variable to store the count. Second, use a local static variable. Which
is more appropriate? Why can’t you use a local variable?
 */

#include <iostream>

using namespace std;

int times = 0;
void say_repeattime_staticlocalvariable(){
    static int i=0;
    i++;
    cout << "I have been called " << i << " times" << endl;
}
void say_repeattime_globalvariable(){
    times++;
    cout << "I have been called " << times << " times" << endl;
}
int main(){
    cout << "Static Local Variable" << endl;
    cout << "__________________________" << endl <<endl;
    for(int i = 0; i<10;i++){
        say_repeattime_staticlocalvariable();
    }
    cout << endl << endl << "Global Variable" << endl;
    cout << "_________________________" << endl << endl;
    for(int i = 0; i<10;i++){
        say_repeattime_globalvariable();
    }

    return 0;
}
