#include<iostream>
using namespace std; 

int main()
{
    cout<<"OPEARTOR LOGIKA"<<endl;
    cout<<"\nTerdiri dari &&,!,||"<<endl;
    cout<<"A = 3,B = 5"<<endl;

    int a = 3;
    int b = 5;
    int c;

    c = a&&b;
    cout<<"A&&B     : "<<c<<endl;
    c = !(a&&b);
    cout<<"!(A&&B)  : "<<c<<endl;
    c = a||b;
    cout<<"A||B     : "<<c<<endl;

    return 0;
}
