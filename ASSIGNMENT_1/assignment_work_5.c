#include <stdio.h>
int main(){
	int n,sum;
	printf("enter the number: ");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	printf("sum of first natural numbers is: %d",sum);
	return 0;
}