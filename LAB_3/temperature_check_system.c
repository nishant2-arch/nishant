#include <stdio.h>
int main(){
	int temp;
	printf("enter the machine temperature: ");
	scanf("%d",&temp);
	if(60<temp&&temp<=80){
		printf("machine temperature is safe!");
	}
	else{
		printf("machine temperature is at warning level!");
	}
	return 0;
}