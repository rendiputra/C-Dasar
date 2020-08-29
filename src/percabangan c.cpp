#include <iostream>
using namespace std;
int main()

{
    float usia;

    cout <<"Berapa usia anda ? :";
    cin>>usia;
    if (usia <=16)
        cout<<"\nAnda masih anak-anak";
    else if(usia<=59)
        cout<<"\nAnda sudah dewasa";
    else
        cout<<"\nAnda sudah lansia";
    return 0;
}
