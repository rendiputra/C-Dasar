#include <iostream>
using namespace std;
int main()
{
cout<<"Nama-Nama Mahasiswa D4 ITB \n";
char name[90][60] = {"1. Al Bahri","2. Andri Arisandi", "3. Andri Setia Permana",
"4. Anggrelia Pradina Kisyand", "5. Anjas Permana Kumbara","6. Arina Primardiani", "7. Avinta Putri Agistasari",
"8. Bastoni"};
for (int i = 0; i<8; i++)
{
cout << name[i] << endl;
}

return (0);
}
