#include<iostream>
using namespace std;

extern int luassgt,alas,tinggi;
int sisi; //Variabel global

int main()
{
    int luassgt,alas,tinggi;
    alas = 7;
    tinggi = 15;
    luassgt = alas*tinggi;
    cout<<"Luas Segitiga        : "<<luassgt<<endl;

    int luasp;
    sisi = 7;
    luasp = sisi*sisi;
    cout<<"Luas Persegi         : "<<luasp<<endl;

    int luaspp,panjang,lebar; //variabel lokal
    panjang = 10;
    lebar = 4;
    luaspp = panjang*lebar;
    cout<<"Luas Persegi Panjang : "<<luaspp<<endl;

    return 0;
}
