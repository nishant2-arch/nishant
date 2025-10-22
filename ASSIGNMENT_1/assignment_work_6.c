#include <stdio.h>
int main(){
	int num;
	printf("enter a number: ");
	scanf("%d",&num);
	if(num%5==0&&num%11==0){
		printf("%d is divisible",num);
	}
	else{
		printf("%d is not divisible",num);
	}
	return 0;
}