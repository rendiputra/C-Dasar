#include <iostream>
using namespace std;

int main()
{
     int nilai[5][3]={{78,68,84},{76,84,78},{62,88,96},{60,78,46},{68,80,78}};
     int m,n=0;
     char name[55][11] = {"1.|Rendi P","2.|M.Hanif", "3.|G.Damar",
     "4.|Gerry  ", "5.|Paijo  "};
    cout<<"Daftar Nilai UH PAI Semester 1 Absen 1-5 :\n";
    cout<<"----------------------------\n";
    cout<<"|No|  Nama  | 1  |  2 |  3 |\n";
    cout<<"----------------------------\n";
        for(n=0;n<5;n++)
        {
            cout<<"|"<<name[n]<<" | ";
                for(m=0;m<3;m++)
                    cout<<nilai[n][m]<<" | ";
                    cout<<"\n";
                }
    cout<<"----------------------------";
return 0;
}

