#include<iostream>
using namespace std;
main()
{    int a, data [8][9][10];
    cout<<"Input baris: ";
    cin>>a;
    for(int b=1; b<=a; b++){
        for(int c=1; c<=2; c++){
            if(c==1){
                cout<<"\nAwal: ";
                cin>>data[1][2][3];}
            else if(c==2){
                for(int a=1; a<=2; a++){
                    cout<<"Input data: ";
                    cin>>data[b][c][a];}
            }
        }
    }
return 0;
}

