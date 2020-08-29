#include <iostream>
using namespace std;
int main (){
    int r;
    float phi=3.14,luas;

    cout<<"==================================="<<endl;
    cout<<" Mencari Luas Lingkaran"<<endl;
    cout<<"==================================="<<endl;
    cout<<""<<endl;
    cout<<"Masukan Jari Jari Lingkaran : ";
    cin>>r;

    luas=phi*r*r;
    cout<<"Luas Lingkaran Adalah = "<<luas;
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
