#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int a,b,c;
    cout << "ax^2+bx+c = 0 denklemindeki;"<< endl;
    cout << "a sayisini giriniz:";
    cin >> a;
    cout << "b sayisini giriniz:";
    cin >> b;
    cout << "c sayisini giriniz:";
    cin >> c;

    float discriminant,sqrt_disc;
    discriminant = (b*b) - 4*a*c;
    sqrt_disc=sqrt(discriminant);

    if(discriminant>0) {
        float x1, x2;
        x1 = (-b - sqrt_disc) / (2 * a);
        x2 = (-b + sqrt_disc) / (2 * a);
        cout << "Denklemin birinci koku=" << x1 << endl;
        cout << "Denklemin ikinci koku=" << x2 << endl;
    }else if(discriminant==0){
        int x;
        x= (-b - sqrt_disc) / (2 * a);
        cout << "Denklemin bir koku vardir=" << x<<endl;
    }else{
        cout << "Denklemin reel sayilarda koku yoktur.";
    }


    return 0;
}
