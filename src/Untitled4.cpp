#include <iostream>
using namespace std;

int main()
{
    int i;

    cout<<""<<endl;
    cout<<"Masukkan angka = ";
    cin>>i;
    cout<<"";
    if (i >0)
        cout<<" anda memasukan bilangan positif'"<<endl;

    else if(i <0)
        cout<<"anda memasukan bilangan Negatif'"<<endl;
    else if (i =0)
        cout<<"anda memasukan bilangan Netral'"<<endl;

        cout<<"bilangan tersebut adalah  "<<( i );

    return 0;
}

