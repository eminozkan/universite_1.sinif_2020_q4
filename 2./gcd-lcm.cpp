#include<iostream>

using namespace std;

struct numbers{
    int no1;
    int no2;
};

int main() {
    numbers startnumber;
    cout << "OBEB ve OKEK lerini hesaplamak istediginiz sayilari giriniz: ";
    cin >> startnumber.no1 >> startnumber.no2;


    numbers okek;
    okek.no1 = startnumber.no1;
    okek.no2 = startnumber.no2;

    numbers obeb;
    obeb.no1 = startnumber.no1;
    obeb.no2 = startnumber.no2;

    //OBEB
    while(obeb.no1 % obeb.no2 != 0 && obeb.no2 % obeb.no1 != 0){
        if (obeb.no1>obeb.no2) {
            obeb.no1 = obeb.no1 % obeb.no2;
        }else{
            obeb.no2= obeb.no2 % obeb.no1;
        }
    }
    int gcd = (obeb.no1 < obeb.no2 ? obeb.no1 : obeb.no2);

    cout << "OBEB(" << startnumber.no1 << "," << startnumber.no2 << ") = " << gcd << endl;

    // OKEK

    while(okek.no1 != okek.no2){
        if(okek.no1<okek.no2){
            okek.no1 += startnumber.no1;
        }else{
            okek.no2 += startnumber.no2;
        }
    }

    cout << "OKEK(" << startnumber.no1 << "," << startnumber.no2 << ") = " << okek.no2 << endl;

    return 0;
}
