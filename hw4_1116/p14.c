#include <stdio.h>
#include <stdlib.h>
#define student 3
#define exams 4

int minmun(const int grades[][exams],int pupils,int tests);
int maxmun(const int grades[][exams],int pupils,int tests);
double average(const int allgrades[],int tests);
void PA(const int grades[][exams],int pupils,int tests);

int main(void)
{
    int s;
    const int STgrades[student][exams]={{77,68,86,73},{96,87,89,78},{70,90,86,81}};

    printf("The array is :\n");
    PA(STgrades,student,exams);

    printf("\n\nLowest grade: %d\nHighest grade: %d\n",minmun(STgrades,student,exams),maxmun(STgrades,student,exams));
    for(s=0;s<student;s++)
    {
        printf("The average grade for student %d is %.2f\n",s,average(STgrades[s],exams));
    }
    system("pause");
    return 0;
}

void PA(const int grades[][exams],int pupils,int tests)
{
    int i,j;
    printf("                  [0]  [1]   [2]   [3]");


    for(i=0;i<pupils;i++)
    {
        printf("\nStudenGrades[%d] ",i);
        for(j=0;j<tests;j++)
        {
            printf("%5d",grades[i][j]);
        }
    }
}

int minmun(const int grades[][exams],int pupils,int tests)
{
    int i,j;
    int lowgrade=100;

    for(i=0;i<pupils;i++)
    {
        for(j=0;j<tests;j++)
        {
            if(grades[i][j]<lowgrade)
            {
                lowgrade=grades[i][j];
            }
        }
    }
    return lowgrade;
}

int maxmun(const int grades[][exams],int pupils,int tests)
{
    int i,j;
    int highgrade=0;

    for(i=0;i<pupils;i++)
    {
        for(j=0;j<tests;j++)
        {
            if(grades[i][j]>highgrade)
            {
            highgrade=grades[i][j];
            }
        }
    }
    return highgrade;
}

double average(const int allgrades[],int tests)
{
    int i;
    int total=0;
    for(i=0;i<tests;i++)
    {
        total+=allgrades[i];
    }
    return (double)total/tests;
}