#include <stdio.h>
#include <stdlib.h>

#define size 5

void modifyarray(int b[],int Size);
void modifyelement(int e);

int main(void)
{
    int a[size]={0,1,2,3,4};
    int i;

    printf("Effects of passing entire array by reference:\n\nThe""values of the orignal array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%3d",a[i]);
    }
    putchar('\n');

    modifyarray(a,size);
    printf("The values of the modified array are:\n");
    for(i=0;i<size;i++)
        printf("%3d",a[i]);
    printf("\n\nEffects of passing array element""by value :\n\nThe value of a[3] is %d\n",a[3]);
    modifyelement(a[3]);
    printf("The value of a[3] is %d\n",a[3]);

    system("pause");
    return 0;
}
void modifyarray(int b[],int Size)
{
    int j;

    for(j=0;j<size;j++)
        b[j]*=2;
}

void modifyelement(int e)
{
    printf("Value in modityelement is %d\n",e*=2);
}