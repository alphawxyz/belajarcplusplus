#include<iostream>
using namespace std; 

extern int luasbk,d1,d2;
int alas;

#define a 5
#define t 7

int main(){
    int luasbk,d1,d2;
    d1 = 12;
    d2 = 14;
    luasbk = d1*d2/2;
    cout<<"Luas Belah Ketupat       : "<<luasbk<<endl;
    
    int luaspp,tinggi;
    alas = 3;
    tinggi = 6;
    luaspp = alas*tinggi;
    cout<<"Luas Persegi Panjang     : "<<luaspp<<endl;
    
    int luasp;
    int sisi = 4;
    luasp = sisi*sisi;
    cout<<"Luas Persegi             : "<<luasp<<endl;
    
    int luasjj;
    luasjj = a*t;
    cout<<"Luas Jajargenjang        : "<<luasjj<<endl;
    
    int luasll;
    const int p = 12;
    const int l = 6;
    luasll = 2*p*l;
    cout<<"Luas Layang - layang     : "<<luasll<<endl;
    
    return 0;
    
}
