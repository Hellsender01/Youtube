#include<stdio.h>

int main() {
	char buff[30];
	char str[100];
	printf("Enter String - ");
	fgets(str,99,stdin);
	printf(str);
	printf("Enter Data - ");
	gets(buff);
	return 0;
}
