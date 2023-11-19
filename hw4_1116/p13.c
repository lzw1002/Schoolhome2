#include <stdio.h>
#include <stdlib.h>

void PA(const int a[][3])

int main(void)
{
    int a1[2][3]={{1,2,3},{4,5,6}};
    int a2[2][3]={1,2,3,4,5};
    int a3[2][3]={{1,2},{4}};

    printf("Value in a1 by row are:\n");
    PA(a1);

    printf("Value in a2 by row are:\n");
    PA(a2);

    printf("Value in a3 by row are:\n");
    PA(a3);
    system("pause");
    return 0;

}

void PA(const int a[][3])
{
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        putchar('\n');
    }
}