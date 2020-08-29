#include<iostream>

using namespace std;

int main(){
    int a =6;
    int  b= 3;

    int hasil;
    // OPerator +, -, *, /, %

    //PERTAMBAHAN
    hasil = a+b;
    cout<<a<<" + "<< b <<" = "<< hasil<<endl<<endl;

    // PENGURANGAN
    hasil = a-b;
    cout<<a<<" - "<< b <<" = " <<hasil<<endl<<endl;

    // PERKALIAN
    hasil = a * b;
    cout<<a<< " * " <<b << " = " <<hasil <<endl<<endl;

    //PEMBAGIAN
    hasil = a / b;
    cout <<a <<" / " <<b <<" = " <<hasil<<endl<<endl;

    // SISA BAGI
    hasil = a % b;
    cout << a <<" MOD "<< b <<" = "<< hasil;

    //ANGKA FIBONACI

    cout<<"\n\nANGKA FIBONACI"<<endl;
    int h, f1 = 0;
    int f2 = 1;
    int batas;
    cin>>batas;
    cout << f1<< "  " <<"  "  << f2<<"    ";
    for (int i=1; i<=batas; i++){
        h = f1 + f2;
        cout <<h<<"    ";
        f1 = f2;
        f2 = h;

    }
    //OPERATOR LOGIKA
    cout<<"\n\nOPERATOR LOGIKA\n\n";
    int a1= 4;
    int a2= 6;

    bool hasil1;


    // AND harus bilangan yang bernilai true semua maka menghasilkan true
    hasil1 = (a1 == 3) and (a2 == 6);
    cout<< hasil1<<endl;

    // OR setidaknya bernilai true maka akan mengahasilkan true
    hasil1 = (a1 == 3) or (a2 == 6);
    cout<< hasil1;

    return 0;
}
