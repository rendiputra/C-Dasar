#include<iostream>

using namespace std;

main()
{

    cout<<"\t\tAplikasi Angka Fibbonaci:\n\n";

    int ang1=0,
        ang2=1,
        angDin,
        digit;

    cout<<"Ingin Berapa angka yang ditampilkan ?:";
    cin>>digit;
    cout<<ang1<<"  "<<ang2;

    for(int i=0; i<=digit; i++){
        angDin = ang1 + ang2;
        cout<<"  "<<angDin;
        ang1 = ang2;
        ang2 = angDin;
    }


return 0;
}
