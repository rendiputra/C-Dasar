#include<iostream>
using namespace std;

int main(){

char data [2][3][6] = {"1", "2", "3", "4", "5", "6"};
int i,j;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++){
            cout<<data[i][j];
        }
    cout<<"\n";
}
return 0;
}
