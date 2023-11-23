#include<stdio.h>

int max(int a[],int size)
{
    if(size==1)
    {
        return a[0];
    }
    int maxnum=max(a+1,size-1);

    return (a[0]>maxnum) ? a[0]:maxnum;
}
int main()
{
    int a[]={5,9,6,3,2};
    int size=sizeof(a) / sizeof(a[0]);
    printf("Array: {");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
        if(i<size-1)
        {
            printf(", ");
        }
    }
    printf("}\n");
    printf("Maximum Element in the Array: %d\n",max(a,size));
    return 0;
}