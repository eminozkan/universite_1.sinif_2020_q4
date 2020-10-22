#include <iostream>
using namespace std;
int OBEB(int a, int b);
int main()
{
    int x,y;
    cout << "OBEB ve OKEK\'lerini almak istediginiz sayilardan:"<< endl <<
    "Birincisini giriniz:" << endl;
    cin >> x;
    cout << "Ikincisini giriniz:" << endl;
    cin >> y;
    int obeb,okek;


    okek = (x/OBEB(x,y)) * y;
    OBEB(x,y);

    cout<<"OBEB("<<x<<","<<y<<")="<<OBEB(x,y)<<endl;
    cout<<"OKEK("<<x<<","<<y<<")="<<okek<<endl;



    return 0;
}

int OBEB(int a, int b)
{
        while(a!=b)
    {
        if(a>b)
            a=a-b;
        else if(b>a)
            b=b-a;
    }

    return a;
}
