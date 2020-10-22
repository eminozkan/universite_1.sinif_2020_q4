#include <iostream>
#include <cmath>
using namespace std;
//ax²+bx+c=0 denkleminin cozum kumesini olusturan bir program yaziniz.
int main()
{
    //a b c degiskenlerini gir.

    float a,b,c,x;
    cout << "ax^2 + bx + c = 0 denklemindeki; " << endl;

    cout << "a sayisini giriniz:";
    cin >> a;

    cout << "b sayisini giriniz:";
    cin >> b;

    cout << "c sayisini giriniz:";
    cin >> c;

    //x sayisinin koklerini bul

    float diskriminant = (b*b)-4*a*c;
    float x1, x2;
    x1= (-b + sqrt(diskriminant)) /(2*a);
    x2= (-b - sqrt(diskriminant)) / (2*a);

    //x sayisinin koklerini ekrana yazdir
    cout << "Denklemin 1. koku = " << x1 << endl;
    cout << "Denklemin 2. koku = " << x2 << endl;
    return 0;
}
