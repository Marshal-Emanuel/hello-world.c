#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name;
	int age;
	char school;
	printf("Enter your name:);
	scanf("%s", name);
	printf("\nEnter your age:");
	scanf("%d", &age);
	printf("\nEnter the name of your school:");
	scanf("%c", school);
	
	if(age>18)
	{
	printf("We would like to thank %s of %s signing up for the event.");
	}
	else
	{
		printf("You are not old enought to sign up for the event");
	}
	return 0;
}