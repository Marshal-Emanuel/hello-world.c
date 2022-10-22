#include <stdio.h>
int main()
{
	float numbers[5];
	int i,a=0,b=0;
	printf("\nInput the first number:");
	scanf("%f",&numbers[0]);
	printf("\nInput the second number:");
	scanf("%f",&numbers[1]);
	printf("\nInput the third number:");
	scanf("%f",&numbers[2]);
	printf("\nInput the fourth number:");
	scanf("%f",&numbers[3]);
	printf("\nInput the fifth number:");
	scanf("%f",&numbers[4]);
	for(i=0;i<5;i++)
	{
		if(numbers[i]>0)
		{
			a++;
		}
		else if(numbers[i]<0)
		{
			b++;
		}
	}
	printf("\nNumber of positive numbers:%d",a);
	printf("\nNumber of negative numbers:%d",b);
	printf("\n");
	
	return 0;
}
