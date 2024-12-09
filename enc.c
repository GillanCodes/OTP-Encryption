#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 1)
  {
    printf("Provide the to-be encrypted file");
  }
  else
  {
		char* secret_file_name = argv[1];
		FILE* secret_file = fopen(secret_file_name, "r");
		FILE* encrypted_file = fopen("crypt.out", "w");
		FILE* key_file = fopen("key.out", "w");

  }
}
