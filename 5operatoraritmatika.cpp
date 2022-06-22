#include<iostream>
using namespace std;

int main()
{
    int a,b,c; 
    a = 8;
    b = 10;
    cout<<"OPERATOR ARITMATIKA"<<endl;
    cout<<"Terdiri dari + - * / % ++ --"<<endl;
    cout<<"A = 8, B = 10"<<endl;
    c = a+b; 
    cout<<"\nA + B    : "<<c<<endl;
    c = a-b; 
    cout<<"A - B    : "<<c<<endl;
    c = a*b; 
    cout<<"A * B    : "<<c<<endl;
    c = a/b; 
    cout<<"A / B    : "<<c<<endl;
    c = a%b; 
    cout<<"A % B    : "<<c<<endl;
    c = a++;
    cout<<"A++      : "<<c<<endl;
    c = a--;
    cout<<"A--      : "<<c<<endl;   

    return 0;
}
