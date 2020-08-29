#include<iostream>
using namespace std;

main(){
    for(int i=0; i<=6; i++){
        cout<<endl;
        for(int j=0; j<=i; j++)
            cout<<"*";
        for(int m=6; m>=i; m--)
            cout<<"-";
        for(int n=6; n>=i; n--)
            cout<<"-";
        for(int j=0; j<=i; j++)
            cout<<"*";

    }
    for(int i=5; i>=0; i--){
        cout<<endl;
        for(int j=0; j<=i; j++)
            cout<<"*";
        for(int m=6; m>=i; m--)
            cout<<"-";
        for(int n=6; n>=i; n--)
            cout<<"-";
        for(int j=0; j<=i; j++)
            cout<<"*";


    }



return 0;
}
