#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nilai,hasil;
    cout<<"menentukan Status Lulus dan Tidak Lulus"<<endl;
    cout<<"masukkan nilainya = ";
    cin>>hasil;
    cout<<"Status adalah = ";
    if (hasil >=1)
        cout<<"positif";
    else
        cout<<"Negatif";
    return 0;
}

