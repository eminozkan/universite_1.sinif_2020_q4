/*
 * Start with the power() function of Exercise 2, which works only with type double.
Create a series of overloaded functions with the same name that, in addition to double,
also work with types char, int, long, and float. Write a main() program that exercises
these overloaded functions with all argument types.
 */
#include <iostream>

using namespace std;

double power(double n,int p){
    double result = 1;

    for(int i = p; i>0 ;i--){
        result*=n;
    }
    cout << "double power=";
    return result;
}
double power(char n,int p){
    double result = 1;
    n-=48;
    for(int i = p; i>0 ;i--){
        result*=n;
    }
    cout << "char power=";
    return result;
}
double power(int n,int p){
    double result = 1;
    for(int i = p; i>0 ;i--){
        result*=n;
    }
    cout << "int power=";
    return result;
}
double power (float n,int p){
    double result = 1;

    for(int i = p; i>0 ;i--){
        result*=n;
    }
    cout << "float power=";
    return result;

}
double power(long n,int p){
    double result = 1;
    for(int i = p; i>0 ;i--){
        result*=n;
    }
    cout << "long power=";
    return result;
}
int main(){
    int n1=3;
    char n2='6';
    double n3=4;
    long n4=5;
    float n5=3;
    cout << power(n1,2) << endl;
    cout << power(n2,3) << endl;
    cout << power(n3,2) << endl;
    cout << power(n4,2) << endl;
    cout << power(n5,2) << endl;


    return 0;
}
