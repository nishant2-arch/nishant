#include <stdio.h>
int main(){
	int a,b;
	printf("tensile strength of material a:");
	scanf("%d",&a);
	printf("tensile strength of material b:");
	scanf("%d",&b);
	if(a>b){
		printf("%d have larger tensile strength",a);
	}
	else if(a<b){
		printf("%d have larger tensile strength",b);
	}
	else{
		printf("both have same tensile strength");
	}
	return 0;
}