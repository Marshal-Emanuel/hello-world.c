#include<stdio.h>
int factrl(int)
int main()
{
	//initialization of integers
	signed int num1, num2, num3, num4, num5;
	int i,fact1=1,fact2=1,fact3=1,fact4=1,fact5=1,sum;
	//program promts user to enter 5 numbers
	//1st attempt
	printf(" ::Enter positive numbers to successfuly complete the program::\n        ::You have only 3 attempts to make::\n\n");
	printf("            !! Don't enter 0 or a number greater than 12!!\n\n");	

	printf("Enter the first number:");
	scanf("%d", &num1);
	printf("\nEnter the second number:");
	scanf("%d", &num2);
	printf("\nEnter the third number");
	scanf("%d", &num3);
	printf("\nEnter the fourth numben:");
	scanf("%d", &num4);
	printf("\nEnter the fifth number:");
	scanf("%d", &num5);
	
	//if the number entered is '0', the program exits
	if(((num1==0)||(num2==0)||(num3==0)||(num4==0)||(num5==0))||((num1>12)||(num2>12)||(num3>12)||(num4>12)||(num5>12)))
	{
		printf("!!Try again and enter a number greater than 0 and less than 13!!");
		return 0;
	}
	
	printf("\n\nThe positive integers entered are:");
	//program prints the positve entered numbers
	if(num1>0)
	{
		printf("%d\t", num1);
	}
	if(num2>0)
	{
		printf("%d\t", num2);
	}
	if(num3>0)
	{
		printf("%d\t", num3);
	}
	if(num4>0)
	{
		printf("%d\t", num4);
	}
	if(num5>0)
	{
		printf("%d\t", num5);
	}
	//if the user enters all the values as positive, the program prints either of the statements respectively
	if((num1>0)&&(num2>0)&&(num3>0)&&(num4>0)&&(num5>0))
	{
		printf("\nYou have succesfuly completed the positivity test:)\n");
	}
	else
	{
		printf("\n\nYou have 2 attempts left\n");
	}
	//if either of the values is negative, the program prints out the negative values  to be replaced
	if((num1<0)||(num2<0)||(num3<0)||(num4<0)||(num5<0))
	{
	   	 printf("\nReplace the values of the following numbers with positive numbers:");
	
      	 if(num1<0)
         {
		   	printf("%d\t", num1);
		 }
	     if(num2<0)
		 {
		 	printf("%d\t", num2);
		 }
	     if(num3<0)
		 {
		 	printf("%d\t", num3);
		 }
	     if(num4<0)
         {
		  	printf("%d\t", num4);
         }
	     if(num5<0)
		 {
		    printf("%d\t", num5);	
		 }
   	     printf("\n");
	     
	     //The program promts the user to replace the negative values
	     //2nd attempt
	     
	     if(num1<0)
	     {
	     	printf("replace the first number");
		    scanf("%d", &num1);
	     }
	     if(num2<0)
	     {
	     	printf("replace the second number");
			 scanf("%d", &num2);
	     	
	     }
	     if(num3<0)
	     {
	     	printf("replace the third number");
	    	scanf("%d", &num3);
	    	
         }
	     if(num4<0)
	     {
  		    printf("replace the fourth number");
			scanf("%d", &num4);
	    
	     }
	     if(num5<0)
     	 {
	    	printf("replace the fifth number");
			scanf("%d", &num5);
	    	
         }
         
         //if the number entered is '0', the program exits
	if((num1==0)||(num2==0)||(num3==0)||(num4==0)||(num5==0)||((num1>12)||(num2>12)||(num3>12)||(num4>12)||(num5>12)))
	{
		printf("!!Enter a number greater than 0 and less than 13!!");
		return 0;
	}
	
	   //The program prints either of the statements depending on the condition
	     if((num1>0)&&(num2>0)&&(num3>0)&&(num4>0)&&(num5>0))
	     {
	    	printf("\nYou have succesfully completed the positivity test :)\n");
	     }
   	     else
	     {
	    	printf("\nFollow the instructions and enter the positive number!!!!\n::You have 1 attempt left::\n");
	     }
	     //The program checks whether there is any negative number and promts the user to re-enter the numbers incase there is any negative
		 //3rd  and last attempt 
	         if((num1<0)||(num2<0)||(num3<0)||(num4<0)||(num5<0))
         {	
	     	if(num1<0)
		    {
	        	scanf("%d", &num1);
         	}
        	if(num2<0)
        	{
	        	scanf("%d", &num2);
        	}
        	if(num3<0)
         	{
        		scanf("%d", &num3);
        	}
         	if(num4<0)
        	{
        		scanf("%d", &num4);
         	}
        	if(num5<0)
        	{
        		scanf("%d", &num5);
        	}
        	
        	//if the number entered is '0', the program exits
	if((num1==0)||(num2==0)||(num3==0)||(num4==0)||(num5==0)||((num1>12)||(num2>12)||(num3>12)||(num4>12)||(num5>12)))
	{
		printf("!!Enter a number greater than 0 and less than 13!!");
		return 0;
	}
	
	
	   //if the user enters all numbers as positive at the last attempt, the program moves to the nest phase, otherwise, it returns 0
        	if((num1>0)&&(num2>0)&&(num3>0)&&(num4>0)&&(num5>0))
        	{
         		printf("\nYou have succesfully completed the positivity test :)\n");
        	}
        	else
         	{
        		printf("\nYou are out of chances,,try again later :(\n");
         	}
		 }
		 //program prints out all the entered numbers
		 printf("The values entred are: %d %d %d %d %d\n",num1,num2,num3,num4,num5);  
	}
	//if all the numbers entered are positive , the program calculates the factorial of the entered numbers and their sum
	if((num1>0)&&(num2>0)&&(num3>0)&&(num4>0)&&(num5>0))
{//for loop used to increament the value of i 
	for(i=1;i<=num1;i++)
	{
		fact1=fact1*i;
	}
		printf("the factorial of 1st number is:%d\n", fact1);
		
		
	for(i=1;i<=num2;i++)
	{
		fact2=fact2*i;
	}
		printf("the factorial of 2nd number is:%d\n", fact2);
		
		
	for(i=1;i<=num3;i++)
	{
		fact3=fact3*i;
	}
		printf("the factorial of 3rd number is:%d\n", fact3);
		
	for(i=1;i<=num4;i++)
	{
		fact4=fact4*i;
	}
		printf("the factorial of 4th number is:%d\n", fact4);
		
	for(i=1;i<=num5;i++)
	{
		fact5=fact5*i;
	}
		printf("the factorial of 5th number is:%d\n", fact5);
		
	sum=fact1+fact2+fact3+fact4+fact5;
	printf("The sum of the factorial values is:%d\n", sum);				
}	
	return 0;

}