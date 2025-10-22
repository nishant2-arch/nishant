#include <stdio.h>
int main(){
	int units;
	float bill;
	printf("enter the units consumed: ");
	scanf("%d",&units);
	if(units<=100){
		bill=units*1.5;
		
	}
	else if(units>100&&units<=200){
		bill=(units-100)*2+(100*1.5);
		
	}
	else if(units>200&&units<=300){
		bill=(units-200)*3+(100*2)+(100*1.5);
		
	}
	else{
		bill=(units-300)*5+(100*3)+(100*2)+(100*1.5);
		
	}
	printf("total bill= %f",bill);
	return 0;
}