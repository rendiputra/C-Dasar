#include <iostream>
using namespace std;

int main()
{
    int barang,harga,jumlah,harga1;

    cout<<"====================Program Kasir===================="<<endl;
    cout<<"=======================#Barang#======================"<<endl;
    cout<<"               ###########Kartu##########            "<<endl;
    cout<<"               #1.Telkomsel |2.Indosat  #            "<<endl;
    cout<<"               #3.Xl        |4.Simpati  #            "<<endl;
    cout<<"               ##########################            "<<endl;
    cout<<"masukan angka barang : ";
    cin>>barang;
    cout<<"\nStatus adalah = ";
    if (barang ==1)

        cout<<"Harga 50000\n";

    else if (barang ==2)
        cout<<"Harga 55000"<<endl;
    else if (barang ==3)
        cout<<"Harga 60000"<<endl;
    else if (barang ==4)
        cout<<"Harga 65000"<<endl;
    else
    cout<<"###############################ERORR#######################"<<endl;

    cout<<"Masukkan jumlah barang yang di beli : ";
        cin>>jumlah;
        harga1=jumlah*harga;
        cout<<harga1;

    return 0;
}
