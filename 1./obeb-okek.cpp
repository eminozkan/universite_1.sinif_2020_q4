#include<iostream>

using namespace std;



int main() {
    int startnumber1, startnumber2;
    cout << "OBEB ve OKEK lerini hesaplamak istediginiz sayilari giriniz:";
    cin >> startnumber1 >> startnumber2;


   

  


    //OBEB
    int obebno1, obebno2;
    obebno1 = startnumber1;
    obebno2 = startnumber2;
    
    
    while(obebno1 % obebno2 != 0 && obebno2 % obebno1 != 0){
        if (obebno1>obebno2) {
            obebno1 = obebno1 % obebno2;
        }else{
            obebno2= obebno2 % obebno1;
        }
    }
    int obebnumbers = (obebno1 < obebno2 ? obebno1 : obebno2);

    cout << "OBEB(" << startnumber1 << "," << startnumber2 << ") = " << obebnumbers << endl;

    // OKEK
    int okekno1, okekno2;
    okekno1 = startnumber1;
    okekno2 = startnumber2;
    
    while(okekno1 != okekno2){
        if(okekno1<okekno2){
            okekno1 += startnumber1;
        }else{
            okekno2 += startnumber2;
        }
    }

    cout << "OKEK(" << startnumber1 << "," << startnumber2 << ") = " << okekno2 << endl;

    return 0;
}
