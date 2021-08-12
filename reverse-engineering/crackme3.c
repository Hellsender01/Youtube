#include <stdio.h>

int check_key(int key) {
	if (((key-100)*2)%100 == 0) {
		return 1;
	return 0;
	}
}

int main() {
	int key,return_value;
	printf("Enter Key: ");
	scanf("%d",&key);
	return_value = check_key(key);
	if (return_value == 1) {
		puts("Correct Key! Now Keygen Me.");
	}
	else {
		puts("Wrong Key!");
	}
}
