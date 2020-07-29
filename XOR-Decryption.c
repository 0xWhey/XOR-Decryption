#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {	
	char* key = "INSERT KEY";
	char* data_encrypted = "INSERT DATA";
	char* data_decrypted = malloc(200);

	for (int i = 0; i < 100; i++) {
		data_decrypted[i] = data_encrypted[i] ^ key[(i + 2) % 50];
	}

	printf("Decrypted data -> %s \n", data_decrypted);
	return 1;
}