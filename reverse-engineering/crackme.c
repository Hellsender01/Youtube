#include <stdio.h>

void main()
{
    int user;
    puts("Enter Password");
    scanf("%d",&user);
    if (user == 1337) {
        puts("Correct password.");
    }
    else {
        puts("Wrong password.");
    }
}


