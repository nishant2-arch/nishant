#include <stdio.h>
int main(){
	float num1,num2,func;
	char optr;
	printf("enter an operator (+,-,/,x): ");
	scanf("%c",&optr);
	printf("enter the first number: ");
	scanf("%f",&num1);
	printf("enter the second number: ");
	scanf("%f",&num2);
	switch(optr){
		case '+':
			func=num1+num2;
			printf("%f+%f=%f",num1,num2,func);
			break;
		case '-':
			func=num1-num2;
			printf("%f-%f=%f",num1,num2,func);
			break;
		case '/':
			func=num1/num2;
			printf("%f/%f=%f",num1,num2,func);
			break;
		case 'x':
			func=num1*num2;
			printf("%fx%f=%f",num1,num2,func);
			break;
	}
	return 0;

	
}