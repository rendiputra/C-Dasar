#include <iostream>
using namespace std;
int main (){
    int p,l,luas;

    cout<<"==================================="<<endl;
    cout<<" Mencari Luas Persegi Panjang"<<endl;
    cout<<"==================================="<<endl;
    cout<<""<<endl;
    cout<<"Masukan Panjang Persegi Panjang : ";
    cin>>p;
    cout<<"Masukan Lebar Persegi Panjang : ";
    cin>>l;

    luas=p*l;
    cout<<"Luas Persegi Panjang Adalah = "<<luas;
    return 0;

}

//#include adalah sebuah pengarah yang mengatakan untuk meletakan kode dari header file iostream kedalam program.
//using adalah deklarasi arahan / panggilan / pemberitahukan kepada kompiler untuk penggunaan deklarasi namespace dan anggota namespace
//namespace adalah penyedia metode untuk mencegah komflik nama dalam script
//int main (){  merupakan kode awal yang akan dieksekusi ketika program dijalankan.
//cout untuk mengoutputkan atau menampilkan hasil ke dalam layar
//endl merupakan suatu fungsi untuk menyisipkan karakter NewLine atau mengatur pindah baris.
//cin >>p; dibaca cin (user) akan memasukkan nilai kedalam memori p.
//cin >>l; dibaca cin (user) akan memasukkan nilai kedalam memori l.
//return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
