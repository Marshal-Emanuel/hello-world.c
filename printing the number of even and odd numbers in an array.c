#include<stdio.h>
 int main()
 {
 	int i;
 	int a[10];
	int even=0, odd=0;
	
	printf("Enter the values into the array below");
	
	for(i=0;i<10;i++)
	{
		printf("\nEnter the value of array [%d]:", i);
		scanf("%d", &a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
	printf("There are [%d] even numbers", even);
	printf("There are [%d] odd numbers", odd);
 }