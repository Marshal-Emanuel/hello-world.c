#include<stdio.h>
int main()
{
	int i,j;
	int a[2][5];
	printf("Enter the values of the multidemensional array below\n\n");
	
	for(i=0;i<2;i++)
	{
		for(i=0;i<5;i++)
		{
			printf("Enter the values of the array [%d][%d]:",i,j);
			scanf("%d%d", &a[i][j]);
		}
	}
}