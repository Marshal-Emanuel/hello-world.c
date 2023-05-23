#include<stdio.h>
int main(){
	char grade;
	
	printf("select grade(A,B,C,D,E):");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case'A':
			printf("Excellent, scored 70 and above\n");
			break;
		
		case'B':
			printf("Credit, scored between 60 to 70\n");
			break;
		
		case'C':
			printf("Satisfactory, scored between 50 to 60\n");
			break;
		
		case'D':
			printf("pass, scored between 40 to 50\n");
			break;
		
		case'E':
			printf("fail, scored below 40 \n");
			break;
		
		default:
			printf("invalid results !");
			break;
	}
	return 0;
}
