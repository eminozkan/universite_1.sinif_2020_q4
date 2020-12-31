/*
 * Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function called circarea() that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() function that gets a radius value from the user, calls circarea(), and displays the result.
 */

#include <iostream>

using namespace std;

float circarea(int rad){
    const float PI=3.14159F;
    return (PI*rad*rad);
};

int main(){
    int rad;
    cout << "Enter radius value:";
    cin >> rad;
    cout << "Circ area =" << circarea(rad);
    return 0;
}
