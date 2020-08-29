#include <iostream>
using namespace std;
int main()
{
    int angka,pilih;

    cout <<"====Selamat Datang di Program Percabngan====\n";
    cout <<"1. Identifikasi Angka\n";
    cout <<"2. Informasi \n";
    cout <<"3. Keluar \n";

    ulangi:
    cout <<"\n\nMasukan Pilihan Anda : ";cin>>pilih;

    switch(pilih)
    {
        case 1:
            cout<<"Silahkan masukkan angka : ";cin>>angka;
            if(angka<0)
            {
                if(angka%2 == 0)
                    cout<<angka<<" adalah angka negatif genap";
                else
                    cout<<angka<<" adalah angka negatif ganjil";
            }
            if(angka>0)
            {
                if(angka%2 == 0)
                    cout<<angka<<" adalah angka positif genap";
                else
                    cout<<angka<<" adalah angka positif ganjil";
            }
            else
                cout<<angka<<" adalah angka netral";
            break;

        case 2:
            cout<<"\nProgram percabangan menggunakan If dan Switch Case\n";
            cout<<"\nProgram percabangan kali ini menggunakan fungsi gabungan antara If dan Switch\n";
            break;

        case 3:

            break;

            default:
                cout<<"Pilihan yang ada masukan tidak ada di menu\n";
                goto ulangi;
    }
    goto ulangi;
    return 0;
}

