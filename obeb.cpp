#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Bir sayi giriniz:";
    cin>>x;
    cout<<"Bir sayi daha giriniz:";
    cin>>y;
    int a,b;
    a=x;
    b=y;
     while(a!=b)
    {
        if(a>b)
            a=a-b;
        else if(b>a)
            b=b-a;
    }
    cout<<"OBEB("<<x<<","<<y<<")="<<b<<endl;

}
