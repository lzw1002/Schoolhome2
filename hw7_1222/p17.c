#include<stdio.h>
#include<stdlib.h>
#define MAx 80

int main(void)
{
    FILE *fptr;
    char str[MAx];
    int bytes;
    fptr=fopen("output.txt","r");
    while (!feof(fptr))
    {
        bytes=fread(str,sizeof(char),MAx-1,fptr);
        str[bytes]='\0';
        printf("%s\n",str);
    }
    fclose(fptr);
    system("pause");
    return 0;

}