#include <stdio.h>
#include <stdlib.h>

void sta(void);
void aut(void);

int main(void)
{
    printf("Frist call to each function :\n");
    sta();
    aut();

    printf("\n\nSecond call to each function:\n");
    sta();
    aut();
    printf("\n");
    system("pause");
    return 0;
    
}

void sta(void)
{
    static int array1[3];
    int i;
    printf("\nValues on entering staticArryInit:\n");

    for(i=0;i<3;i++)
        printf("array[%d] = %d   ",i ,array1[i]);

    printf("\nValues on exiting staticArrayInit:\n");

    for(i=0;i<3;i++)
        printf("array1[%d] = %d   ",i, array1[i]+=5);

}

void aut(void)
{
 int array2[3]={1,2,3};
 int i;

 printf("\n\nValues onentering automicArrayInit:\n");

 for(i=0;i<3;i++)
    printf("array2[%d] =%d   ",i, array2[i]);
    
printf("\nValues on exiting automicArrayInit:\n");
for(i=0;i<3;i++)
     printf("array2[%d] =%d   ",i, array2[i]+=5);
}