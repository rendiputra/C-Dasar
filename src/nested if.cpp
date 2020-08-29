#include <iostream>
using namespace std;
int main()

{
    int a,c;

    cout <<"\t Harga Menu \n\n";
    cout <<"-Menu\n";
    cout <<"1 : Makanan \n";
    cout <<"2 : Minuman \n";
    cout <<"masukkan menu = ";cin>>a;

    if (a == 1)
    {
        cout<<"\nMasukan harga menu: ";cin>>c;
        if (c<6000)
            cout<<"makanan tersebut Murah";
        else if (c<11000)
            cout<<"makanan tersebut Standart";
        else
            cout<<"makanan tersebut Mahal";
    }
    else if (a == 2)
    {
        cout<<"\nMasukan harga menu";cin>>c;
        if (c<3000)
            cout<<"makanan tersebut Murah";
        else if (c<5000)
            cout<<"makanan tersebut Standart";
        else
            cout<<"makanan tersebut Mahal";
    }
    else
        cout<<"Silahkan masukan menu (1-2)";

    return 0;
}
