#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MALLOC "1"
#define FREE "2"
#define LIST "4"
#define EDIT "3"
#define EXIT "5"

#define FREED 0
#define UNDERUSE 1

void* ptrs[100];
int used[100] = {0};
int request_size[100] = {0};
int cnt = 0;

void print_menu(){
  char *MENU[6] = {
    "Choose from the following menu:\n",
    "1. malloc chunk eg 1 20\n",
    "2. free chunk eg 2 0\n",
    "3. edit chunk content eg 3 0 AAAA\n",
    "4. list chunks\n",
    "5. exit\n"};

  for(int i = 0; i < 6; i++)
    fprintf(stderr, "%s", MENU[i]);
}

void allocate(int n){
  fprintf(stderr, "Allocating %d bytes\n", n);
  ptrs[cnt] = malloc(n);
  used[cnt] = UNDERUSE;
  request_size[cnt] = n;
  cnt++;
}

void free_chunk(int n){
  if (used[n] == FREED)
	  return;
  fprintf(stderr, "Freeing pointer %d: %p\n", n, ptrs[n]);
  free(ptrs[n]);
  used[n] = FREED;
}

void edit(int n, char *s){
  fprintf(stderr, "Editing pointer %d: %p\n", n, ptrs[n]);
  int l1 = strlen(ptrs[n]);
  int l2 = strlen(s);
  int l;
  if (l1 < l2) l = l2;
  else l = l1;
  memcpy(ptrs[n], s, l);
}

void list(){
  fprintf(stderr, "Index\tPointers\tRequested Size\tStatus\n");
  for (int i = 0; i < cnt; i++){
    fprintf(stderr, "%d\t%p\t%u\t", i, ptrs[i], request_size[i]);
    if (used[i] == UNDERUSE)
      fprintf(stderr, "Under Use\n");
    else if (used[i] == FREED)
      fprintf(stderr, "Freed\n");
  }
}

void win() {
	puts("\033[1;31m[+] PWNED!!!\033[0m");
	execl("/bin/sh", "sh", "-c", "/bin/sh", (char *)0);
}

int main(){
  char buf[100];
  char str[100];
  int n;
  setbuf(stderr, NULL);
  while (1){
    print_menu();
    read(0, buf, 90);
    if (buf[0] == '1'){
      sscanf(buf + sizeof(MALLOC), "%d", &n);
      allocate(n);
    }
    else if (buf[0] == '2'){
      sscanf(buf + sizeof(FREE), "%d", &n);
      free_chunk(n);
    }
    else if (buf[0] == '3'){
      sscanf(buf + sizeof(EDIT), "%d %[^\n]", &n, str);
      edit(n, str);
    }
    else if (buf[0] == '4')
      list();
    else if (buf[0] == '5')
      break;
    else continue;
  }
  return 0;
}
