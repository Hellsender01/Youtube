#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char flag[29];

int main() {
	char pass[28] = "Pa$$w0rd_1s_0n_Th3_St4ck\0";
	char string[80];
	char password[27];
	printf("Enter Password - ");
	scanf("%27s",&password);
	if (!(strcmp(pass, password))) {
		FILE *f = fopen("flag.txt", "r");
        	if(f == NULL){
                	printf("flag file not found\n");
                	exit(1);
       		}
		fgets(flag, 30, f);
		printf("What you are looking for is here - %p\n",&flag);
        	printf("Enter String - ");
        	scanf("%79s",&string);
        	printf(string);}
	else {
		printf("Wrong Password!!! ");
		printf(password);
		exit(1);
	}
	return 0;
}
