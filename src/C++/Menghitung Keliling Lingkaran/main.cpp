#include <iostream>
using namespace std;
int main (){
    int r,d;
    float phi=3.14,keliling;

    cout<<"==================================="<<endl;
    cout<<" Mencari Keliling Lingkaran"<<endl;
    cout<<"==================================="<<endl;
    cout<<""<<endl;
    cout<<"Masukan Jari Jari Lingkaran : ";
    cin>>r;

    d=r+r;
    keliling=phi*d;
    cout<<"Keliling Lingkaran Adalah = "<<keliling;
    return 0;
}

//#include adalah sebuah pengarah yang mengatakan untuk meletakan kode dari header file iostream kedalam program.
//using adalah deklarasi arahan / panggilan / pemberitahukan kepada kompiler untuk penggunaan deklarasi namespace dan anggota namespace
//namespace adalah penyedia metode untuk mencegah komflik nama dalam script
//int main (){  merupakan kode awal yang akan dieksekusi ketika program dijalankan.
//float berfungsi sebagai tipe data angka yg berkoma
//cout untuk mengoutputkan atau menampilkan hasil ke dalam layar
//endl merupakan suatu fungsi untuk menyisipkan karakter NewLine atau mengatur pindah baris.
//cin >>r; dibaca cin (user) akan memasukkan nilai kedalam memori r.
//return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
