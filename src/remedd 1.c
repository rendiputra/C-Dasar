#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nilai,hasil;
    cout<<"menentukan ganjil dan genap"<<endl<<"kangghani.com"<<endl;
    cout<<"masukkan nilainya = ";
    cin>>nilai;
    hasil=nilai%2;
    cout<<"hasilnya adalah = ";
    if (hasil==0)
        cout<<"genap";
    else
        cout<<"ganjil";
    return 0;
}
