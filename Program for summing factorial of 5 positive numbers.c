#include<stdio.h>
int factorial(int num1,int num2,int num3,int num4,int num5);
int main()
{
	//initializion of integers
	int a,b,c,d,e,f,g;
	
	printf(" ::Enter positive numbers to successfuly complete the program::\n        ::You have only 3 attempts to make::\n");
	
	printf("\n        !!Don't enter 0 or number greater than 12!!\n");
	//program prompts the user to enter 5 numbers	
	printf("\nEnter the first number:\n");
	scanf("%d", &a);
	
	printf("Enter the second number:\n");
	scanf("%d", &b);
	
	printf("Enter the third number:\n");
	scanf("%d", &c);
	
	printf("Enter the fourth number:\n");
	scanf("%d", &d);
	
	printf("Enter the fifth number:\n");
	scanf("%d", &e);
	
	if((a<=12)||(b<=12)||(c<=12)||(d<=12)||(e<=12))
	{
 	    //If any number entered is '0' the program exits
   	    if((a==0)||(b==0)||(c==0)||(d==0)||(e==0)||(a>12)||(b>12)||(c>12)||(d>12)||(e>12))
        {   
	       printf("\n!!Enter a number greater or less than 0 and less than 13!!\n");
 		   return 0;
		} 
        printf("\nThe positive integers entered are:");
	
        //1st attempt
        //program prints positive number entered
   	    if(a>0)
   	    {
    	    printf("%d\t",a);
 	    }
   	    if(b>0)
  	    {
    		printf("%d\t",b);
 	    }
   	    if(c>0)
   	    {
        	printf("%d\t",c);
  	    }
        if(d>0)
  	    {
    		printf("%d\t",d);
 	    }
  	    if(e>0)
  	    {
     		printf("%d\t",e);
        }
	
  	    if((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0))
  	    {
    		printf("\nYou have succesfuly completed the positivity test:)\n");
        }
        else
        {
    		printf("\n::You have 2 attempts left::\n");
 	    }
    	 
        //negative number are printed	
   	    if((a<0)||(b<0)||(c<0)||(d<0)||(e<0))
   	    {
	        printf("Replace the values of the following values with positive numbers:");
	
            if(a<0)
            {
	     	   	printf("%d\t",a);
	        }
	        if(b<0)
		    {
	     	 	printf("%d\t",b);
	        }
	        if(c<0)
	        {
	     	 	printf("%d\t",c);
	        }
	        if(d<0)
            {
	        	printf("%d\t",d);
            }
	        if(e<0)
   	        {
	            printf("%d\t",e);	
	        }
   	        printf("\n");
	     
	        //for re-entering the negative numbers
	        //2nd attempt
	        if(a<0)
	        {
	     	    scanf("%d", &a);
	        }
	        if(b<0)
	        {
	         	scanf("%d", &b);
	        }
	        if(c<0)
	        {
	        	scanf("%d", &c);
            }
	        if(d<0)
	        {
	        	scanf("%d", &d);
	        }
	        if(e<0)
     	    {
	        	scanf("%d", &e);
            }
             
   	        //If any number entered is '0' the program exits
	        if((a==0)||(b==0)||(c==0)||(d==0)||(e==0)||(a>12)||(b>12)||(c>12)||(d>12)||(e>12))
	        {
	        	 printf("\n!!Enter a number greater or less than 0 and less than 13!!\n");
	        	 return 0;
	        }
	
	        if((a>0)&&(b>0)&&(c>0)&&(d>0)&&(d>0))
	        {
	         	 printf("\nYou have succesfuly completed the positivity test:)\n");
	        }
           else
            {
	        	 printf("\nFollow the instructions and enter the positive number!!!!\n::You have 1 attempt left::\n");
	        }
	         
	         //for re-entering the negative numbers numbers
	         //3rd attempt 
	
             if((a<0)||(b<0)||(c<0)||(d<0)||(e<0))
             {	
	        	if(a<0)
		        {
	            	scanf("%d", &a);
         	    }
        	    if(b<0)
        	    {
	            	scanf("%d", &b);
             	}
             	if(c<0)
             	{
             		scanf("%d", &c);
             	}
             	if(d<0)
            	{
        	    	scanf("%d", &d);
         	    }
        	    if(e<0)
        	    {
        	    	scanf("%d", &e);
        	    }
	         	//If any number entered is '0' the program exits
	            if((a==0)||(b==0)||(c==0)||(d==0)||(e==0)||(a>12)||(b>12)||(c>12)||(d>12)||(e>12))
            	{
            		printf("\n!!Enter a number greater or less than 0 and less than 13!!\n");
       	        	return 0;
               	}
            	if((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0))
             	{
             		printf("\nYou have succesfuly completed the positivity test:)\n");
            	}
             	else
            	{
            		printf("\nYou are out of chances,,try again later :)\n");
            		return 0;
             	}
            }
		    printf("\nThe results are:%d %d %d %d %d\n",a,b,c,d,e); 
		 		 
	    }
			 
	} 
	else
	{
		printf("\nEnter number less than 13\n");
		return 0;
	}
	
	f=factorial(a,b,c,d,e);
	return 0;
	
}
int factorial(int num1,int num2,int num3,int num4,int num5)
{
	int z,fact=1;
	for(z=1;z<=num1;z++)	
    	fact=fact*z;	
		{
        	printf("Factorial of %d is:%d\n",num1,fact);
		}
	int y,fact1=1;
	for(y=1;y<=num2;y++)	
    	fact1=fact1*y;
		{
        	printf("Factorial of %d is:%d\n",num2,fact1);
		}
	int x,fact2=1;
	for(x=1;x<=num3;x++)	
    	fact2=fact2*x;	
		{
        	printf("Factorial of %d is:%d\n",num3,fact2);
		}
	int w,fact3=1;
	for(w=1;w<=num4;w++)	
    	fact3=fact3*w;	
		{
        	printf("Factorial of %d is:%d\n",num4,fact3);
		}
	int v,fact4=1;
	for(v=1;v<=num5;v++)
    	fact4=fact4*v;	
		{
        	printf("Factorial of %d is:%d\n",num5,fact4);
		}
	int sum;	
	sum=fact+fact1+fact2+fact3+fact4;
	{
    	printf("The sum of the factorial values is:%d\n", sum);
	}
}