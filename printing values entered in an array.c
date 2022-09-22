#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("Enter the values of the array\n");
	
	for(i=0;i<5;i++)
	{
		printf("The value of the  array [%d]:", i);
		scanf("%d", &a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("The values entered in array [%d] is: %d\n", i, a[i]);
	}
}