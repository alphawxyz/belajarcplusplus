#include<iostream>
using namespace std; 

int main()
{
    cout<<"Perulangan For"<<endl;
    cout<<"\nContoh 1"<<endl;
    for (int a = 14; a < 20; a++)
    {
        cout<<"Nilai A  : "<<a<<endl;
    }
    cout<<"\nContoh 2"<<endl;
    for (int b = 12; b < 18; b++)
    {
        cout<<"Nilai B  : "<<b<<endl;
        b=b+2;
    }
    
    return 0;
}
