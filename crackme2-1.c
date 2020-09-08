#include <stdio.h>
#include <string.h>

void XORcode(char *input) {
	for (int i = 0; i < strlen(input); i++) {
		input[i] ^= 58; // 58 decimal = ":" ascii
	}
}

int main(int argc, char *argv[]) {
	if (argc == 1) {
		printf("Usage: %s <password>\n", argv[0]);
		return 0;
	}
	XORcode(argv[1]);
	if (!strncmp(argv[1], "KM_HNC0", strlen(argv[1]))) {
		printf("Correct password\n");
		return 0;
	}
	else {
		printf("Incorrect password\n");
		return 1;
	}
}
