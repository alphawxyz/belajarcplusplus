#include<iostream>
using namespace std; 

int main()
{
    cout<<"OPERATOR ARITMATIKA,RASIONAL,LOGIKA,ASSIGNMENT"<<endl;
    cout<<"\nOPERATOR ARITMATIKA"<<endl;
    cout<<"Terdiri dari +,-,*,/,%,++,--"<<endl;
    cout<<"A = 3,B = 4";
    int a = 3;
    int b = 4;
    int c;
    c = a+b;
    cout<<"A+B  : "<<c<<endl;
    c = a-b;
    cout<<"A-B  : "<<c<<endl;
    c = a*b;
    cout<<"A*B  : "<<c<<endl;
    c = a/b;
    cout<<"A/B  : "<<c<<endl;
    c = a%b;
    cout<<"A%B  : "<<c<<endl;
    c = a++;
    cout<<"A++  : "<<c<<endl;
    c = a--;
    cout<<"A--  : "<<c<<endl;

    cout<<"\nOPERATOR RASIONAL"<<endl;
    cout<<"Terdiri dari ==,!=,<,>,<=,>="<<endl;
    cout<<"D = 5,E = 6"<<endl;
    int d = 5;
    int e = 6;
    int f;
    f = d==e;
    cout<<"D==E     : "<<f<<endl;
    f = d!=e;
    cout<<"D!=E     : "<<f<<endl;
    f = d<e;
    cout<<"D<E      : "<<f<<endl;
    f = d>e;
    cout<<"D>E      : "<<f<<endl;
    f = d<=e;
    cout<<"D<=E     : "<<f<<endl;
    f = d>=e;
    cout<<"D>=E     : "<<f<<endl;

    cout<<"\nOPERATOR LOGIKA"<<endl;
    cout<<"Terdiri dari &&,!,||"<<endl;
    cout<<"G = 2,H = 7"<<endl;
    int g = 2;
    int h = 7;
    int i;
    i = g&&h;
    cout<<"G&&H     : "<<i<<endl;
    i = !(g&&h);
    cout<<"!(G&&h)  : "<<i<<endl;
    i = g||h;
    cout<<"G||H     : "<<i<<endl;
    
    cout<<"\nOPERATOR ASSIGNMENT"<<endl;
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
