#include <iostream>
using namespace std;
int main()
{
    int nilai;
    mulai:
    bacainput(&input);

    if(!input_valid(input)) goto mulai;

  return 0;

    cout<<"menentukan Status Nilai Siswa"<<endl;
    cout<<"Masukkan Umur = ";
    cin>>nilai;
    cout<<"Umur Tersebut temasuk golongan = ";
    if (nilai >=150){
        cout<<"KUBURAN !/n"<<endl;}
    else if (nilai >=40){
        cout<<"golongan 'LanSia (Lanjut Usia'"<<endl;}
    else if(nilai >=20){
        cout<<"golongan 'Dewasa'"<<endl;}
    else if (nilai >=15){
        cout<<"golongan 'Remaja'"<<endl;}
        else if (nilai >0){
        cout<<"golongan 'Anak-Anak'"<<endl;}
    else{
        cout<<"FATALITY ERROR '404'"<<endl;}
    return 0;
}
