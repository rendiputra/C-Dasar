#include <iostream>

using namespace std;

int main(){
     // Dengan jumlah elemen baris = 3
     // dan jumlah elemen kolom = 2
     int matrix [3][2] = {{1,2},{3,4},{5,6}};

     // Mendeklarasi variabel untuk
     // Indeks perulangan
     int i,j;

     cout<<"\t=============================="
           "\n\t=== Tampil Matrix Ordo 3x2 ===\n"
           "\t==============================\n\n";

     // Menampilkan matrik
     cout<<"\nMenampilkan contoh matrix\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<matrix[i][j]<<"  ";
          }
          cout<<endl;
     }

     return 0;
}
