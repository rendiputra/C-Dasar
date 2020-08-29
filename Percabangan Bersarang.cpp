#include <iostream>

using namespace std;

int main()
{
    int nilai,tinggi;

    cout<<"Menentukan Jenis Kelamin"<<endl;
    cout<<"1. Laki-Laki"<<endl;
    cout<<"2. Perempuan"<<endl;
    cout<<" Masukan pilahan = ";
    cin>>nilai;
    cout<<"    "<<endl;
    cout<<"  "<<endl;
    cout<<" masuka tinggi badan ";
    cin>>tinggi;
    cout<<"tinggi badan = ";
    if (nilai >=165){
        if(tinggi >=165){
            cout<<" Tinggi badan laki laki tersebut sudah memenuhi syarat"<<endl;
        } else if (tinggi <=165){
            cout<<" Tinggi badan laki laki tersebut belum memenuhi syarat"<<endl;
        } else{
            cout<<"Kosong"<<endl;
        }
    }

    else if (nilai <=165)
        cout<<" Tinggi badan laki laki tersebut belum memenuhi syarat'"<<endl;
    else if (nilai >=165)
        cout<<"T inggi badan laki laki tersebut sudah memenuhi syarat'"<<endl;

    return 0;
}

