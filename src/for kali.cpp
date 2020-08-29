#include<iostream>

using namespace std;
int main()
{
    float i;

    cout<<"Pembagian 4 dari 128 samapi 1/8 :\n\n";
    for (i=512; i>=0.125; i/=2){
        cout<<i;
        cout<<"  ";
}
        cout<<endl<<endl;

return 0;
}


