#include <stdio.h>
int main(){
	int mass,velocity,kinetic;
	printf("enter the mass: ");
	scanf("%d",&mass);
	printf("enter the velocity: ");
	scanf("%d",&velocity);
	kinetic=(mass*velocity*velocity)/2;
	printf("the kinetic energy is: %d",kinetic);
	return 0 ;
}