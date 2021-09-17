// Nice Work!
#include <iostream>
#include <cstdio>

class Password {
public:
    Password() {
        char pass[10];
        get_password(pass);
    }

    void check_password(char *pass) {
        int i;
        char cipher[] = "Lkag\"Umpi#";
        for (i=0; i<10; i++) {
            if (pass[i] == (char)(cipher[i]^2)) {
                continue;
            }
            else {
                std::cout<<"Wrong Password!"<<"\n";
                exit(1);
            }
        }
        std::cout<<"Correct Password!"<<"\n";
    }

    void get_password(char *pass) {
        std::cout<<"Enter Password: ";
        fgets(pass,11,stdin);
        check_password(pass);
    }
};

int main() {
    Password p1;    
    return 0;
}