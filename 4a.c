//1905622 - NITISH KUMAR SONTHALIA
//STRUCTURE STATIC
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percentage;
};
int main(){
    printf("\nEnter number of student : ");
    int n;
    scanf("%d",&n);
    struct student S[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of student");
        printf("\nEnter name : ");
        scanf("%s",S[i].name);
        printf("\nEnter Roll Number : ");
        scanf("%d",&S[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter marks of subject %d: ",j+1);
            scanf("%f",&S[i].marks[j]);
        }
    }

    int t;

    for (int i = 0; i < n; i++)
    {
        t=0;
         for (int j = 0; j < 5; j++)
        {
           t=t+S[i].marks[j];
        }
        S[i].total=t;
        S[i].percentage=t/5;
    }
    for (int i = 0; i < n; i++){
        printf("\nThe details of student");
        printf("\nName : %s ",S[i].name);
        printf("\nRoll Number :%d ",S[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("\nMarks of subject %d :%0.2f ",j+1,S[i].marks[j]);
        }
        printf("\nTotal : %0.2f ",S[i].total);
        printf("\nPercentage :%0.2f ",S[i].percentage);
    }
}