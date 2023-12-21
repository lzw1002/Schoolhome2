#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char ch;
    int count=0;
    fptr=fopen("weclome.txt","r");
    if(fptr!=NULL)
    {
        while((ch=getc(fptr) != EOF))
        {
            printf("%c",ch);
            count++;
        }
        fclose(fptr);
        printf("\nHow many characters are there in total?\n",count);
    }
    else
        printf("File opening failed!!\n");
    system("pause");
    return 0;
}