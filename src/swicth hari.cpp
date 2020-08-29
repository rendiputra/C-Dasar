#include <iostream>
using namespace std;
int main()

{
    int pil;

    cout <<"Daftar nama hari dalam satu minggu\n";
    cout <<"-Menu\n";
    cout <<"1 : Senin \n";
    cout <<"2 : Selasa \n";
    cout <<"3 : Rabu \n";
    cout <<"4 : Kamis \n";
    cout <<"5 : Jumat \n";
    cout <<"6 : Sabtu \n";
    cout <<"7 : Minggu \n";

    ulangi:
    cout <<"\n\nSilahkan masukkan pilihan Anda : ";cin>>pil;
    switch(pil)
    {
        case 1:
            cout<<"Hari Ke 1 Adalah Hari Senin";
            break;

            case 2:
            cout<<"Hari Ke 2 Adalah Hari Selasa";
            break;

            case 3:
            cout<<"Hari Ke 3 Adalah Hari Rabu";
            break;

            case 4:
            cout<<"Hari Ke 4 Adalah Hari Kamis";
            break;

            case 5:
            cout<<"Hari Ke 5 Adalah Hari Jumat";
            break;

            case 6:
            cout<<"Hari Ke 6 Adalah Hari Sabtu";
            break;

            case 7:
            cout<<"Hari Ke 7 Adalah Hari Minggu";
            break;

            default:
                cout<<"Pilihan yang ada masukan tidak tersedia didaftar nama hari dalam satu minggu\n";
                goto ulangi;
    }
    goto ulangi;
    return 0;
}
