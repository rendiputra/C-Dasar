#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,d,e,f,g,h;
    cout<<"Masukan nilai a :";cin>>a;
    cout<<"Masukan nilai b :";cin>>b;

    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=pow(a,b);
    h=sqrt(a);

    cout<<"\nHasil nilai penjumlahan " <<a<<" dan "<<b<<" adalah "<<c<<endl;
    cout<<"\nHasil nilai pengurangan " <<a<<" dan "<<b<<" adalah "<<d<<endl;
    cout<<"\nHasil nilai perkalian " <<a<<" dan "<<b<<" adalah "<<e<<endl;
    cout<<"\nHasil nilai pembagian " <<a<<" dan "<<b<<" adalah "<<f<<endl;
    cout<<"\nHasil nilai "<<a<<"dipangkatkan dengan " <<a<<" dan "<<b<<" adalah "<<g<<endl;
    cout<<"\nHasil nilai akar pangkat 2 dari " <<a<<" adalah "<<h<<endl;

    return 0;
}
