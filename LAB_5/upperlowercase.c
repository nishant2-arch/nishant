#include <stdio.h>
int main(){
	char c;
	printf("enter the character: ");
	scanf("%c",&c);
	if(c>='A'&&c<='Z'){
		printf("character is uppercased ");
	}
	else if(c>='a'&&c<='z'){
		printf("character is lowercased");
	}
	else if(c>='0'&&c<='9'){
		printf("character is a number");
	}
	else{
		printf("it is a special character");
	}
	return 0;
}