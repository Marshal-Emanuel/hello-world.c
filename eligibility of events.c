#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name;
	int age;
	char school;
	printf("Enter your name:");
	scanf("%s", &name);
	printf("\nEnter your age:");
	scanf("%d", &age);
	printf("\nEnter the name of your school:");
	scanf("%s", &school);
	
	if(age>20)
	{
	
	}
	else
	{
		printf("You are not old enought to sign up for this event");
	}
	return 0;
}