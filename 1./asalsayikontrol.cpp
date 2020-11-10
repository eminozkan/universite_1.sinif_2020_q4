#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Lutfen bir asal sayi giriniz.";
    cin >> a;
    b=2;
    if(a<=0)
        cout << "Lutfen sifirdan buyuk bir sayi giriniz.";
    else

    if(a==2)
        cout<<"Bu bir asal sayidir";
    else
    if (a==1)
        cout <<"Bu bir asal sayi degildir";
    else

        while(a!=b) {
            c = a % b;
            b = b + 1;
            if (c == 0) {
                cout << "Bu bir asal sayi degildir";
                break;
            }
            if(a==b)
                cout << "Bu bir asal sayidir";
        }

    return 0;
}


