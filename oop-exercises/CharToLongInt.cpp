#include <iostream>
using namespace std;

int main(){
    char n1,n2,n3,n4,n5,n6;
    cout << "Enter a number:";
    cin >> n1 >> n2 >> n3 >> n4 >>n5 >>n6;

    if(n1>='0' && n1<='9'
    && n2>='0' && n2<='9'
    && n3>='0' && n3<='9'
    && n4>='0' && n4<='9'
    && n5>='0' && n5<='9'
    && n6>='0' && n6<='9') {
        long int result;
        result = ((n1-48) * 100000) + ((n2-48) * 10000) + ((n3-48)*1000) + ((n4-48)*100) + ((n5-48)*10) + (n6-48);
        cout <<"Number is:"<< result;
    }else {
        cout << "You entered wrong character";
        return -1;
    }


}
