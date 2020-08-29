#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int barang,harga;

    cout<<"#####################################################"<<endl;
    cout<<"#                    PROGRAM KASIR                  #"<<endl;
    cout<<"#####################################################"<<endl;
    cout<<"#                                                   #"<<endl;
    cout<<"#              ##########################           #"<<endl;
    cout<<"#              #          Kartu         #           #"<<endl;
    cout<<"#              ##########################           #"<<endl;
    cout<<"#              #1.Telkomsel |2.Indosat  #           #"<<endl;
    cout<<"#              #3.Xl        |4.Simpati  #           #"<<endl;
    cout<<"#              ##########################           #"<<endl;
    cout<<"#                                                   #"<<endl;
    cout<<"#####################################################"<<endl;
    cout<<"masukan barang : ";
    cin>>barang;
    cout<<"Status adalah = ";
    if (barang ==1)
        cout<<"Harga 50000"<<endl;
    else if(barang ==2)
        cout<<"Harga 55000"<<endl;
    else if (barang ==3)
        cout<<"Harga 60000"<<endl;
    else if (barang ==4)
        cout<<"Harga 65000"<<endl;
        else
    cout<<"ERORR"<<endl;
    return 0;
    cout<<"Masukkan Nilai Siswa = ";
        cin>>harga;

    return 0;
}
