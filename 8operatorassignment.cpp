#include<iostream>
using namespace std; 

int main()
{
    cout<<"OPERATOR ASSIGNMENT"<<endl;
    cout<<"Terdiri dari =,+=,-=,*=,/=,%="<<endl;
    cout<<"A = 26"<<endl;

    int a = 26;
    int c;

    c = a;
    cout<<"A =  : "<<c<<endl;
    c += a;
    cout<<"C+=A : "<<c<<endl;
    c -= a;
    cout<<"C-=A : "<<c<<endl;
    c *= a;
    cout<<"C*=A : "<<c<<endl;
    c /= a;
    cout<<"C/=  : "<<c<<endl;
    c = 200;
    c %= a;
    cout<<"C%=A : "<<c<<endl;
    

    return 0;
}
