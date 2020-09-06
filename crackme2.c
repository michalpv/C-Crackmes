#include <stdio.h>
#include <string.h>

int main() {
        char key[] = "I_YH_NJM"; // "secretpw" XOR 58
        char input[16];

        printf("Password: ");
        fgets(input, sizeof(input), stdin);

        for (int i = 0; i < strlen(input); i++) {
                input[i] ^= 58;
        }

        if (!strncmp(key, input, strlen(key))) {
                printf("You've got the correct password.\n");
        }
        else {
                printf("Not the correct password.\n");
        }
        return 0;
}