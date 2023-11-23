#include<stdio.h>
#include<stdlib.h>
#define SIZE 10


void bubbleSort(int  array[],const int size);

int main(void)
{
    int a[SIZE]={2,6,4,8,10,12,89,68,45,37};
    int i;
    printf("Date items in original order\n");
    for(i=0;i<SIZE;i++)
        printf("%4d",a[i]);

    bubbleSort(a,SIZE);

    printf("\nDate items in ascending order\n");

    for(i=0;i<SIZE;i++)
        printf("%4d",a[i]);
        
    system("pause");
    return 0;    
}

void bubbleSort(int  array[],const int size)
{
    void swap(int *element1Ptr,int *element2Ptr);
    int pass,i;
    for(pass=0;pass<size-1;pass++)
    {
        for(i=1;i<size-1;i++)
        {
            if(array[i]>array[i+1])
            {
                swap(&array[i],&array[i+1]);
            }
        }
    }
}

void swap(int *element1Ptr,int *element2Ptr)
{
    int temp=*element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=temp;
}