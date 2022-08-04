#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

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
	puts("Enter Data - ");
	gets(buff);
	return 0;
}
