#include<iostream>
using namespace std;
main(){

  int x,y,hasil;
    cout<<"==================================="<<endl;
    cout<<" Kalkulator Sederhana"<<endl;
    cout<<"==================================="<<endl;
    cout<<""<<endl;
    cout<<"Pertambahan"<<endl;

    cout<<"Masukan Angka Pertama : ";
    cin>>x;
    cout<<"Masukan Angka Kedua : ";
    cin>>y;
    a:
    cout<<endl;
    cout<<"==================================="<<endl;

    {
     hasil = x+y;
     cout<<"Hasil "<<x<<" + "<<y<<" = "<<hasil<<endl;
    }


     cout<<"==================================="<<endl;
     cout<<""<<endl;
    return 0;
}

//#include adalah sebuah pengarah yang mengatakan untuk meletakan kode dari header file iostream kedalam program.
//using adalah deklarasi arahan / panggilan / pemberitahukan kepada kompiler untuk penggunaan deklarasi namespace dan anggota namespace
//namespace adalah penyedia metode untuk mencegah komflik nama dalam script
//int main (){  merupakan kode awal yang akan dieksekusi ketika program dijalankan.
//cout untuk mengoutputkan atau menampilkan hasil ke dalam layar
//endl merupakan suatu fungsi untuk menyisipkan karakter NewLine atau mengatur pindah baris.
//cin >>x; dibaca cin (user) akan memasukkan nilai kedalam memori x.
//cin >>y; dibaca cin (user) akan memasukkan nilai kedalam memori y.
//return 0 dalam main() menyatakan bahwa program berakhir dengan normal.


