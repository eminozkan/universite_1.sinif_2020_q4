#include <iostream>

using namespace std;

int main(){
    char d1,d2,d3,d4,d5;
    cout << "Sayi giriniz:";
    cin >> d1 >> d2 >> d3 >> d4 >> d5;

    int d_ascii;
    d_ascii=d1+d2+d3+d4+d5;



    if(d_ascii>=240 && d_ascii<=285) {
        cout << "Girdiginiz sayinin tersten yazilisi:";
        cout << d5 << d4 << d3 << d2 << d1;
        return 0;
    }else
        cout << "Hatali karakter girdiniz.";
    return -1;
}
