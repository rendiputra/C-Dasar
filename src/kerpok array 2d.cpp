#include <iostream>

using namespace std;

int main(){

     int matrix [3][2] = {{10,20},{30,40},{50,60}};

     int i,j;

     cout<<"------------------------------"
           "\n--- Tampil Matrix Ordo 3x2 ---\n"
           "------------------------------\n"
           "Menampilkan contoh matrix :\n\n";
     for(i=0;i<3;i++){
          for(j=0;j<2;j++){
               cout<<"\t"<<matrix[i][j]<<"  ";
          }
          cout<<endl;
     }

     return 0;
}
