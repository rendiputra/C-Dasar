#include <iostream>
using namespace std;
int main(){
    int s,luas;

    cout<<"==================================="<<endl;
    cout<<" Mencari Luas Persegi"<<endl;
    cout<<"==================================="<<endl;
    cout<<""<<endl;
    cout<<"Masukan Sisi Persegi : ";
    cin>>s;

    luas=s*s;
    cout<<"Luas Persegi Adalah = "<<luas;
    return 0;

}

//#include adalah sebuah pengarah yang mengatakan untuk meletakan kode dari header file iostream kedalam program.
//using adalah deklarasi arahan / panggilan / pemberitahukan kepada kompiler untuk penggunaan deklarasi namespace dan anggota namespace
//namespace adalah penyedia metode untuk mencegah komflik nama dalam script
//int main (){  merupakan kode awal yang akan dieksekusi ketika program dijalankan.
//cout untuk mengoutputkan atau menampilkan hasil ke dalam layar
//endl merupakan suatu fungsi untuk menyisipkan karakter NewLine atau mengatur pindah baris.
//cin >>s; dibaca cin (user) akan memasukkan nilai kedalam memori s.
//return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
