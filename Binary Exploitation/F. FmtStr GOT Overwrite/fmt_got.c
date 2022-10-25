#include<stdio.h>
#include<stdlib.h>

void win() {
	puts("\033[1;31m[+] PWNED!!!\033[0m");
	execl("/bin/sh", "sh", "-c", "/bin/sh", (char *)0);
}

void main() {
	char buff[50];
	printf("Enter String - ");
	scanf("%50s",&buff);
	printf(buff);
	exit(0);
}
