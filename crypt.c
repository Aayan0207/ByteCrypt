#include <stdio.h>

int seed(char password[]) {
    unsigned long key = 5381, multiplier = 33;
    for (int i = 0; password[i] != '\0';i++) {
        key = key * multiplier + (int)password[i];  //DJB (Daniel Bernstein) Algo
    }
    return key % 256;
}

void cryptify(char file[256], char password[32]) {
    FILE* file_pointer = fopen(file, "rb+");
    if (file_pointer == NULL) { //Remove after searching thing
        printf("Invalid File Path.");
        return;
    }
    int key = seed(password);
    while (1) {
        char chunk[4096];
        size_t bytes_read = fread(&chunk, 1, sizeof(chunk), file_pointer);
        if (bytes_read == 0) {
            break;
        }
        for (size_t i = 0; i < bytes_read; i++) {
            chunk[i] ^= key;
        }
        fseek(file_pointer, -bytes_read, SEEK_CUR);
        fwrite(&chunk, 1, bytes_read, file_pointer);
        fflush(file_pointer);
    }
    fclose(file_pointer);
    return;
}

