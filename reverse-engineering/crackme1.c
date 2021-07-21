#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char password[] = "S3uper_S3cr3t_Pa33w0rd";
	if (argc < 2) {
		puts("Argument 1 Missing.");
		exit(1);
	}
	if (strlen(password) != strlen(argv[1])) {	
		puts("Wrong Password.");
		exit(1);
	}
	if (!(strcmp(password,argv[1]))) {
		puts("Correct Password.");
	}
	else {
		puts("Wrong Password.");
	}
	return 0;
}
