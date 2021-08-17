#include <stdio.h>

void main() {
	int input;
	printf("Enter Input : ");
	scanf("%d",&input);
	if (input == 1234567890) {
		puts("You have cracked me! Now go and patch me!");
	}
	else {
		puts("Wrong!!!");
	}
}
