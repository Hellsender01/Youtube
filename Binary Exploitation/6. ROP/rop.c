#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

char bin_sh[] = "/bin/sh\x00";

void callme() {
  char str[] = "ls -la";
  system(str);	
}

void init() {
  gid_t gid;
  uid_t uid;

  gid = getegid();
  uid = geteuid();

  setresgid(gid, gid, gid);
  setresuid(uid, uid, uid);
}

int main() {
	init();
	char buff[30];
	printf("Enter Data - ");
	gets(buff);
	return 0;
}
