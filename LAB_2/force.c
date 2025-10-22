#include <stdio.h>
int main(){
	int mass,acceleration,force;
	printf("enter the mass :");
	scanf("%d",&mass);
	printf("enter the acceleration :");
	scanf("%d",&acceleration);
	force=mass*acceleration;
	printf("the force is : %d",force);
	return 0;
}