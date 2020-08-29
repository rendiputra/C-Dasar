
#include <iostream>

using namespace std;

int main(){
     int deret;

     cout<<"\t== Program Deret Angka (Do-While) ==\n\n";
     cout<<"Banyak deret Angka yang akan ditampilkan : ";
     cin>>deret;
     cout<<endl;

     do{
          cout<<deret<<"  ";


          deret--;
     }while(deret>0);

     cout<<"\t\n\n== Deret Selesai Ditampilkan ==\n";

     return 0;
}
