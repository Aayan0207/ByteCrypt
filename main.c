#include <stdio.h>
#include <string.h>
void cryptify(char file[]);
int seed(char password[]);

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: program.exe <file_path>");
        return 0;
    }
    char file[256];
    strcpy(file, argv[1]);
    cryptify(file);
    return 0;
}