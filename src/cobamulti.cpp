#include <iostream>
using namespace std;

int main()
{
     int nilai[3][3]={{78,68,84},{76,84,78},{62,88,96}};
     int a,m,n=0;
     char nama[100][100]={"1. Rendi P","2. Cahya V","3. M.Rivandi"};
    cout<<"Daftar Nilai UH PAI Semester 1 Absen 1-5 :\n";
    cout<<"------------------\n";
    cout<<"|Nama| 1 |  2 |  3 |\n";
    cout<<"------------------\n";
        for(n=0;n<3;n++)
        {
            cout<<"|"<<nama[n]<<" |";
                for(m=0;m<3;m++)
                    cout<<nilai[n][m]<<" | ";
                    cout<<"\n";
                }
    cout<<"------------------"<<endl;
    cout<<"Nama Kelompok :"<<endl<<endl;
    for (a=0;a<3;a++)
    {
        cout<<nama[a]<<endl;
    }

return 0;
}
