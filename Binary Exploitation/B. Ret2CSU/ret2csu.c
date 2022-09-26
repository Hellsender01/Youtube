#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

void vuln() {
	char buff[40];
	write(1,"Enter Data - ",13);
	read(0,buff,300);	
}

int main() {
	vuln();
}
