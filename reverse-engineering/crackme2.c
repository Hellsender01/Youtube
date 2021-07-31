#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char pass[] = "P@$$w0rd!2S";
	char user[30];
	int length;
	int i;
	puts("Enter Password");
	gets(user);
	length = strlen(user);
	if (length != 11) {
		puts("Wrong Password.");
		exit(0);
	}
	for (i=0;i<length;i++) {
		if (pass[i] == user[i]) {
			continue;
		}
		else {
			puts("Wrong Password.");
			exit(0);
		}
	}
	puts("Correct Password.");
	return 0;
}
