#include<stdio.h><iostream>
main()
{
    int s,a,o,j;
    printf("\n Sebuah pola adalah...... \n");
    for (o=0; o<=10; o++)
        {
            for (j=0; j<=o; j++)
            {
                printf ("*");
            }
        printf("\n");
        }
    for (s=11; s>=0; s--)
        {
        for (a=1; a<=s; a++)
        {
            printf("*");
        }
    printf("\n");
}
return 0;
}

