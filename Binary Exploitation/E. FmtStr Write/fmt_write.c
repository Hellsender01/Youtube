#include<stdio.h>
#include<stdlib.h>
int target;

int main() {
	char buff[30];
	printf("Enter String - ");
	scanf("%30s",&buff);
	printf("You Entered - ");
	printf(buff);
	printf("\nValue Of Target Is - %d\n",target);
	if (target == 3) {
		FILE *f = fopen("flag.txt", "r");
		if(f == NULL){
        		printf("flag file not found\n");
        		exit(1);
		}
		    char filename[100], c;
		    c = fgetc(f);
    		    while (c != EOF) {
        	    printf ("%c", c);
	            c = fgetc(f); }
   		    fclose(f);
	}
}	
