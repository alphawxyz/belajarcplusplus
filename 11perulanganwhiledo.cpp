#include<iostream>
using namespace std;

int main()
{
    cout<<"Perulangan Do While"<<endl;
    cout<<"\nContoh 1"<<endl;
    int a = 12;
    do
    {
        cout<<"Nilai A  : "<<a<<endl;
        a = a+1;
    } while (a < 18);

    cout<<"\nContoh 2"<<endl;
    int b = 13;
    do
    {
        cout<<"Nilai B  : "<<b<<endl;
        b = b+2;
    } while (b < 20);

    return 0;
    
}
