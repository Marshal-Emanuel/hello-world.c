#include<stdio.h>
int main(){
	int num1,num2,i,square,sum;
	
	printf("Enter the minimum number:\n");
	scanf("%d",&num1);
	
	printf("Enter the maximum number:\n");
	scanf("%d",&num2);
	if (num1<num2)
	{
	for(i=num1;i<num2;i++)
	 {
		square=i*i;
		//printf("%d\t",i);
    sum+=square;
	printf("\nThe square of %d is:%d",i,square);
	 }
		printf("\nThe sum of the squares of the numbers is: %d", sum);
	}
	return 0;
	
}