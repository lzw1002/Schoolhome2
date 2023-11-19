#include <stdio.h>
#include <stdlib.h>
#define sss 100

int finalans(const int array[],int key,int size);

int main(void)
{
    int a[sss];
    int x,searchkey,element;

    for(x=0;x<sss;x++)
    {
        a[x]=2*x;
    }

    printf("Enter integer seach key:\n");
    scanf("%d",&searchkey);

    element=finalans(a,searchkey,sss);

    if(element != -1)
    {
        printf("Found value in element %d\n", element);
    }
    else
    {
        printf("Value not found\n");
    }
    system("pause");
    return 0;
}


int finalans(const int array[],int key,int size)
{
    int n;
    for(n=0;n<size;++n)
    {
        if(array[n] == key)
        {
            return n;
        }
    }
    return -1;
}