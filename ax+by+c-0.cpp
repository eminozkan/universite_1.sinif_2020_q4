#include <iostream>
using namespace std;
/*  ax+by+c=0
    dx+ey+f=0
    denklemlerindeki x ve y degerlerini hesaplayan bir program yaziniz.
 */
int main()
{
    //ax + by + c=0 ve dx+ey+f=0 denklemlerinde ki a, b, c, d, e, f, degerlerini al.

    int a1,b1,c1,d1,e1,f1;
    cout << "ax+by+c=0 denkleminde bulunan:" << endl;
    cout << "a sayisini giriniz:";
    cin >> a1;
    cout << "b sayisini giriniz:";
    cin >> b1;
    cout << "c sayisini giriniz:";
    cin >> c1;

    cout << "dx+ey+f=0 denkleminde bulunan:" << endl;
    cout << "d sayisini giriniz:";
    cin >> d1;
    cout << "e sayisini giriniz:";
    cin >> e1;
    cout << "f sayisini giriniz:";
    cin >> f1;

    //x in ve y nin degerlerini hesapla

    int a2, b2, c2, d2, e2, f2;
    a2 = a1*e1;
    b2 = b1*e1;
    c2 = c1*e1;
    d2 = d1*-b1;
    e2 = e1*-b1;
    f2 = f1*-b1;

    a2= a2+d2;
    b2 =b2+e2;
    c2 =c2+f2;

    //x ve y nin degerlerini ekrana yazdir.
    int var_x;
    var_x = -c2 / a2;
    cout <<"X Degeri =" <<var_x << endl;

    int var_y;
    var_y = -((a1*var_x)+c1) /b1 ;
    cout <<"Y degeri =" << var_y;
    return 0;
}