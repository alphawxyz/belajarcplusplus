#include<iostream>
using namespace std;

int main()
{
    cout<<"Operator Rasional"<<endl;
    cout<<"A = 5 B = 7"<<endl;
    cout<<"0 : Salah, 1 : Benar"<<endl;

    int a,b,c;
    a = 5;
    b = 7;


    c = a==b;
    cout<<"\nA==B     : "<<c<<endl;
    c = a!=b;
    cout<<"A!=B     : "<<c<<endl;
    c = a<b;
    cout<<"A<B      : "<<c<<endl; 
    c = a>b;
    cout<<"C>B      : "<<c<<endl;
    c = a<=b;
    cout<<"A<=B     : "<<c<<endl;
    c = a>=b;
    cout<<"A>=B     : "<<c<<endl;

    return 0;
}
