#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Faktoriyelini almak istediginiz sayiyi giriniz.";
    cin >> a;
    b=a;
        int toplam=1;
        while(b!=1){
            toplam=toplam*b--;
            b=b-1;
        }
        cout <<a<<" faktoriyel = "<<toplam;
  return 0;
}
