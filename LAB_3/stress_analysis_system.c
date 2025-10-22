#include <stdio.h>
int main(){
	float applied_stress, material_strength,fos;
	printf("enter the applied stress (MPa): ");
	scanf("%f",&applied_stress);
	printf("enter the material yield strength (MPa): ");
	scanf("%f",&material_strength);
	fos=material_strength/applied_stress;
	if(fos>=2.0){
		printf("SAFE DESIGN !");
	}
	else if(fos<2.0&&fos>=1.5){
		printf("ACCEPTABLE WITH MONITORING !");
	}
	else{
		printf("DANGER!!-REDESIGN NEEDED");
	}
	return 0;
}