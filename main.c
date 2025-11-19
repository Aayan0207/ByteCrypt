#include <stdio.h>
#include <string.h>
void cryptify(char file[], char password[]);
int seed(char password[]);

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: program.exe <file_path> <password>");
        return 0;
    }
    char file[256], password[32];
    strcpy(file, argv[1]);
    strcpy(password, argv[2]);
    cryptify(file, password);
    return 0;
}