#include<iostream><math>

using namespace std;
main(){
    cout<<"\t\tTUTORIAL C++ \nOPERATOR ARITMATIKA & OPERATOR LOGIKA\n"<<endl;

    int a = 7;
    int b = 2;

    int hasil;


    //OPERATOR ARITMATIKA: + - * / %

    //PERTAMBAHAN
    hasil = a+b;
    cout<<a<<" + "<< b<<" = "<<hasil<<endl;

    //PENGURANGAN
    hasil = a-b;
    cout<<a<<" - "<< b<<" = "<<hasil<<endl;

    //perkalian
    hasil = a*b;
    cout<<a<<" X "<< b<<" = "<<hasil<<endl;

    //PEMBAGIAN
    hasil = a/b;
    cout<<a<<" / "<< b<<" = "<<hasil<<endl;

    //SISA BAGI HASIL
    hasil = a%b;
    cout<<a<<" MOD "<< b<<" = "<<hasil<<endl;


    int h,s,f1 =0;
    int f2 =1;
    cout<<"Masukan Batas Angka Fibonaci: ";
    cin>>s;
    cout<<"\n\n\n"<<f1<<"   ";
    for(int i=1;i<=s;i++){
        h=f1+f2;
        cout<<h<<"    ";
        f2=f1;
        f1=h;

    }
    cout<<"Kelipatan Kali\n\n";
    int k =1;
    int hasil1= 0;
    // angka ke 1
    for(int h=1; h<=11; h++){

        cout<<"\n\n  "<<h<<"  ";
        hasil = h;
        for(int j=1; j<=11; j++){
            cout<<hasil<<"   ";
            hasil=h*j;

        }
    }


    return 0;
}
