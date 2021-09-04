#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int check_key(const char *key) {
  int i;

  if ( strlen(key) != 16 )
    return 1;
  for ( i = 0; i < strlen(key); i += 2 )
  {
    if ( key[i] - key[i + 1] != -1 )
    return 1;
  }
  return 0;
}

int main(int argc, char *argv[])
{
	if ( argc != 2 ) {
  		puts("[BINARY] [KEY]");
  		exit(0);
  	}
	if ( check_key(argv[1]) ) {
  		puts("Bad Serial");
  	}
	else {
  		puts("Good Serial");
  	}
	return 0;
} 

