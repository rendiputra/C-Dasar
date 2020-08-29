#include<iostream>
using namespace std;
int main()
{
    int jam=0;
    int menit=0;
    int detik=0;
    cout<<"perpangkatan 2, 1 sampai 40 :\n\n";
    for (jam=0; jam<=24; jam++){
            if (jam>24){
                jam=0;
            }
        //cout<<jam,menit,detik,"(1)";
        //cout<<"\n";
       for (menit=0; menit<=60; menit++){
            if (menit>60){
                menit=0;
                jam++;
            }
            //cout<<jam,menit,detik,"(2)";
            //cout<<"\n";
               for (detik=0; detik<=60; detik++){
                    cout<<jam,detik;
                    //cout<<jam," : ",menit," : ",detik,"(3)";
                    //cout<<"\n";
                    if (detik>60){
                    detik=0;
                    menit++;

                    }
                    //cout<<jam,menit,detik,"(3)";
                    //cout<<"\n";
            }
        }
    //cout<<jam," : ",menit," : ",detik,"(3)";

    cout<<"\n";
    }
return 0;
}



