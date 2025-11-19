#include <stdio.h>
void cryptify(char file[]);
int seed(char password[]);

int main() {
    char file[256];
    printf("Enter file path: "); //Search for file add fn
    scanf(" %s", file);
    cryptify(file);
    // int key = seed("Hello");
    // printf("%d", key);
    return 0;
}