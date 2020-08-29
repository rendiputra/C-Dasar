#include <iostream>
using namespace std;
int main()
{
     int nilai[5][3]={{78,68,84},{76,84,78},{62,88,96},{60,78,4},{68,80,78}};
int m,n=0;
char name[55][11] = {"1.| Amin ","2.| Iman ", "3.| Umar","4.| Eko  ", "5.| Oki  "};
    cout<<"Daftar Nilai Ulangan Harian PEMDASSemester 1  :\n";
    cout<<"----------------------------\n";

    cout<<"|No| Nama  | UH1| UH2| UH3|\n";

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
