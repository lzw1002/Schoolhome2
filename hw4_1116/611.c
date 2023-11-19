#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int array[],int size);
int main(void)
{
    int date[]={4,5,3,0,1,8,7,9,6,2};
    int size=sizeof(date)/sizeof(date[0]);

    printf("Orignal array: ");
    for(int i=0;i<size;i++)
    {
        printf("%d", date[i]);
    }
    printf("\n");

    bubbleSort(date,size);

     printf("Sorted array: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", date[i]);
    }
    printf("\n");

    return 0;
}

void bubbleSort(int array[], int size)
{
    bool swapped;

    for(int pass=1;pass<size;pass++)
    {
        swapped = false;

        for(int i=0;i<size-pass;i++)
        {
            if(array[i]>array[i+1])
            {

                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;

                swapped = true;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}