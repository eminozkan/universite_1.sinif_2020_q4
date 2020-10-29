#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Faktoriyelini almak istediginiz sayiyi giriniz.";
    cin >> a;
    int b=a;
        int result=1;
        while(b!=1){
            result=result*b;
            b=b-1;
        }
        cout <<a<<" faktoriyel = "<<result;
  return 0;
}
