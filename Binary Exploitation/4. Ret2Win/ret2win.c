#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void win() {
	puts("\033[1;31m[+] PWNED!!!\033[0m");
	execl("/bin/sh", "sh", "-c", "/bin/sh", (char *)0);
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
	int number = 8;
	char buff[30];
	printf("Enter Your Name - ");
	gets(buff);
	printf("Value Of Number Is - %x\n",number);
	return 0;
}
