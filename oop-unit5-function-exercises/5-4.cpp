/*
 * Write a function that takes two Distance values as arguments and returns the larger one.
Include a main() program that accepts two Distance values from the user, compares
them, and displays the larger. (See the RETSTRC program for hints.)
 */

#include <iostream>

using namespace std;

struct distances{
    int feet;
    float inches;
};
void print_larger_distance(const distances& d1, const distances& d2){
    float distance1=d1.feet+d1.inches/12;
    float distance2=d2.feet+d2.inches/12;
    if (distance1 > distance2){
        cout << "\n Larger Volume is =" << distance1 << endl;
    }else{
        cout << "\n Larger Volume is =" << distance2 << endl;
    }
};

int main(){
    distances d1;
    distances d2;
    cout << "Enter feet of first distance:";
    cin >> d1.feet;
    cout << "Enter inches of first distance:";
    cin >> d1.inches;

    cout << "Enter feet of second distance:";
    cin >> d2.feet;
    cout << "Enter inches of second distance:";
    cin >> d2.inches;

    print_larger_distance(d1,d2);

    return 0;
}
