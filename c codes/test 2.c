#include<stdio.h>
int main()
{
    int marks[5];
    int i, sum=0;
    printf("Enter marks for the 5 students:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter marks for student %d:", i);
        scanf("%d",&marks[i]);
        
        sum+=marks[i];
                
    }
    printf("The sum of the marks of the students is: %d", sum);
}