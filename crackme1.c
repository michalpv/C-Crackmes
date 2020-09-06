#include <stdio.h>
#include <string.h>

int passCheck(char *pass) {
        char key[] = "admin_password";
        return !strncmp(key, pass, strlen(key));
}

void admin() {
        printf("Hello administrator.\n");
}

int main() {
        char input[16];

        printf("Enter your password: ");
        fgets(input, sizeof(input), stdin);

        if (passCheck(input) == 1) {
                admin();
        }
        else {
                printf("Login failed.\n");
        }
        return 0;
}