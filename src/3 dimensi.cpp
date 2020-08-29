
#include <iostream>
using namespace std;

int main(){
   int n, data[30][30][30];
   cout<<"Input banyak baris = ";cin>>n;
   for(int i=1;i<=n;i++){
       for(int k=1;k<=2;k++){
         if(k==1){
             cout<<"input Awal : ";cin>>data[i][0][k];
         }else if(k==2){
              for(int j=1;j<=2;j++){
                 cout<<"Input data : ";
                 cin>>data[i][j][k];
             }
         }
      }
   }

   cout<<"\nHasil : "<<endl;
   for(int i=1;i<=n;i++){
       for(int k=1;k<=2;k++){
         if(k==1){
             cout<<k<<". "<<data[i][0][k]<<endl;
         }else if(k==2){
              for(int j=1;j<=2;j++){
                 cout<<"   - "<<data[i][j][k]<<endl;
             }
         }
      }
   }

return 0;
}
