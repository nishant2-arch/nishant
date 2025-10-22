#include <stdio.h>
int main(){
	float amplitude,frequency;
	printf("enter the vibration amplitude (mm): ");
	scanf("%f",&amplitude);
	printf("enter the frequency (Hz): ");
	scanf("%f",&frequency);
	if((amplitude>0.5)&&(frequency>=20)&&(frequency<=50)){
		printf("HIGH RISK !");
	}
	else if(amplitude>0.5||frequency>60){
		printf("MEDIUM RISK !");
	}
	else{
		printf("LOW RISK !");
	}
	return 0;
}