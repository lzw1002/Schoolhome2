#include <stdio.h>
#include <stdlib.h>
#define a 10

int main(void)
{
    int s[a],j;
    for(j=0;j<a;j++)
        s[j]=2+2*j;
    printf("%s%13s\n","Element","Value");

    for(j=0;j<a;j++)
        printf("%7d%13d\n",j,s[j]);
    system("pause");
    return 0;
    
}