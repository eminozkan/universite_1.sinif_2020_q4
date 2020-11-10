#include <iostream>
using namespace std;
//girilen iki farklı değer arasındaki asal ve asal olmayan sayıları gösteren bır program yaziniz.
int main() {
    int asal_min, b, c, asal_max;
    cout << "Aralik icin taban sayisini giriniz.";
    cin >> asal_min;
    cout << "Aralik icin tavan sayisini giriniz.";
    cin >> asal_max;

        while (asal_min != (asal_max+1)) {

            b = 2;
            if (asal_min == 2){
                cout <<asal_min<< "= Bu bir asal sayidir"<<endl;
                }
            while(asal_min!=b) {
                c = asal_min % b;
                b = b + 1;
                if (asal_min <= 0) {
                    cout <<asal_min<< "= bir asal sayi degildir."<<endl;
                    break;
                }
                if (asal_min == 1) {
                    cout <<asal_min<< "= Bu bir asal sayi degildir"<<endl;
                    break;
                }

                if (c == 0) {
                    cout <<asal_min<<"= Bu bir asal sayi degildir"<<endl;
                    break;
                }
                if(asal_min==b)
                    cout <<asal_min<< "= Bu bir asal sayidir"<<endl;

            }

            asal_min=asal_min+1;

        }
    return 0;
}

