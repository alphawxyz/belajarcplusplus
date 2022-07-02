#include<iostream>
using namespace std;

typedef int luas,alas,tinggi; //Typedef
enum driverf1 {alonso,lecrec,verstappen,perez,tsunoda} driver; //sintaks: enum nama_enum {daftar nama} variabel
enum cryptocurrency {bitcoin,ada=5,tezos,polkadot,sandbox,telos,dogecoin} crypto;

int main()
{
    //UKuran Tipe Data
    cout<<"Ukuran Tipe Data"<<endl;
    cout<<"Ukuran char                  : "<<sizeof(char)<<endl;
    cout<<"Ukuran unsigned char         : "<<sizeof(unsigned char)<<endl;
    cout<<"Ukuran singed char           : "<<sizeof(signed char)<<endl;
    cout<<"Ukuran int                   : "<<sizeof(int)<<endl;
    cout<<"UKuran unsigned int          : "<<sizeof(unsigned int)<<endl;
    cout<<"Ukuran signed int            : "<<sizeof(signed int)<<endl;
    cout<<"Ukuran short int             : "<<sizeof(short int)<<endl;
    cout<<"UKuran unsigned short int    : "<<sizeof(unsigned short int)<<endl;
    cout<<"Ukuran signed short int      : "<<sizeof(signed short int)<<endl;
    cout<<"Ukuran long int              : "<<sizeof(long int)<<endl;
    cout<<"Ukuran signed long int       : "<<sizeof(signed long int)<<endl;
    cout<<"Ukuran unsigned long int     : "<<sizeof(unsigned long int)<<endl;
    cout<<"Ukuran float                 : "<<sizeof(float)<<endl;
    cout<<"Ukuran double                : "<<sizeof(double)<<endl;
    cout<<"Ukuran long double           : "<<sizeof(long double)<<endl;
    cout<<"Ukuran wchar_t               : "<<sizeof(wchar_t)<<endl;

    //Typedef
    cout<<"\nPenggunaan Typedef"<<endl;
    luas l;
    alas a;
    tinggi t;
    a=3;t=6;
    l=a*t;
    cout<<"Luas Segitiga                : "<<l<<endl;

    //Enum
    cout<<"\nPenggunaan Enum"<<endl;
    driver = alonso; //Sintaks variabel = daftar nama
    cout<<"Alonso   : "<<driver<<endl;   //membaca variabel
    driver = tsunoda;
    cout<<"Tsunoda  : "<<driver<<endl;
    crypto = bitcoin;
    cout<<"BITCOIN  : "<<crypto<<endl;
    crypto = ada;
    cout<<"ADA      : "<<crypto<<endl;
    crypto = tezos;
    cout<<"TEZOS    : "<<crypto<<endl;
    crypto = polkadot;
    cout<<"POLKADOT : "<<crypto<<endl;


    return 0;
}
