#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char kk='+';
    char tt=' ';
   
    for(i=0;i<3;i++)
    {

        for(j=0;j<12;j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 11) 
            {
                printf("%c", kk);
            } else
            {
                printf("%c", tt);
            }
        }
        printf("\n");
    }
    
    system("pause");
}