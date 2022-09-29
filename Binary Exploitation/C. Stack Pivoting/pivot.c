#include <stdio.h>
#include <stdlib.h>

char bin_sh[] = "/bin/sh\x00";

void win(int arg1, int arg2) {
	if (arg1 == 0xbabecafe && arg2 == 0xcafebabe) {
		asm ("movl $59,%eax\n\t"
		     "movl $0x404040,%edi\n\t"
		     "movl $0,%esi\n\t"
		     "movl $0,%edx\n\t"
		     "syscall\n\t"
		    );
	}	
}

void vuln() {
    char buffer[0x60];
    void *pivot;
    pivot = malloc(0x1000);
    printf("Pivot To - %p\n",pivot);
    printf("Enter Data - ");
    fgets(pivot,0x100, stdin);
    printf("Pivot! Pivot! Pivot! - ");
    fgets(buffer, 0x80, stdin);
}

int main() {
    vuln();
    return 0;
}
