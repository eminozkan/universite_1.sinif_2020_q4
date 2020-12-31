/*
 * Write a function called swap() that interchanges two int values passed to it by the calling program. (Note that this function swaps the values of the variables in the calling program, not those in the function.) You’ll need to decide how to pass the arguments. Create
a main() program to exercise the function.
 */
#include <iostream>

using namespace std;

inline void swap(int& n1,int& n2){
    int tempnumber=n1;
    n1=n2;
    n2=tempnumber;
}

int main(){
    int a=5;
    int b=2;
    swap(a,b);
    cout << a << endl;
    cout << b << endl;


    return 0;
}
