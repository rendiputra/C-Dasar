#include<iostream>
using namespace std;

main(){

    cout<<"\n\n  MEMBUAT POLA JAM PASIR\n\n\n";


    for(int i=0; i<=6; i++){
        cout<<endl;
        for(int j=0; j<=i; j++)
            cout<<" ";
        for(int m=6; m>=i; m--)
            cout<<"+";
        for(int n=6; n>=i; n--)
            cout<<"-";

    }
    for(int i=5; i>=0; i--){
        cout<<endl;
        for(int j=0; j<=i; j++)
            cout<<" ";
        for(int m=6; m>=i; m--)
            cout<<"+";
        for(int n=6; n>=i; n--)
            cout<<"-";


    }



return 0;
}
