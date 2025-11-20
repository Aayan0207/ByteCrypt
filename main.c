#include <stdio.h>
#include <string.h>
void cryptify(char file[], char password[]);
int seed(char password[]);

int main(int argc, char* argv[]) {
    printf("    ____        __       ______                 __ \n   / __ )__  __/ /____  / ____/______  ______  / /_\n  / __  / / / / __/ _ \\/ /   / ___/ / / / __ \\/ __/\n / /_/ / /_/ / /_/  __/ /___/ /  / /_/ / /_/ / /_  \n/_____/\\__, /\\__/\\___/\\____/_/   \\__, / .___/\\__/  \n      /____/                    /____/_/           \n");
    if (argc != 3) {
        printf("\x1B[31mUsage: program.exe <file_path> <password>\x1B[0m");
        return 0;
    }
    char file[256], password[32];
    strcpy(file, argv[1]);
    strcpy(password, argv[2]);
    cryptify(file, password);
    return 0;
}