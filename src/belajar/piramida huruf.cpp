#include<iostream>
using namespace std;

main()
{
    cout<<"APLIKASI PIRAMIDA HURUF\n\n";

    int baris,spasi,abc,cba;
    char hur = 'A';

    // i adalah baris
    for (baris=1; baris<=6; baris++)
    {
        //cout<<"\t";
        //
        for (spasi=6;spasi>=baris;spasi--)
            cout<<" ";
        for (abc=1;abc<=baris;abc++)
            cout<<hur++;
            hur--;
        for (cba=1;cba<baris;cba++)
            cout<<--hur;

        cout<<endl;
        hur='A';
    }

return 0;
}
