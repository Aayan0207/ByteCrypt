#include <stdio.h>
#include <string.h>

void encrypt(){
    char password[32];
    printf("Enter password: ");
    scanf("%s", password);

    //do encryption
}

int seed(char password[]){
    int key = 5381, multiplier = 33;
    for (int i = 0; password[i] != '\0';i++){
        key = key * multiplier + (int) password[i];
    }
    return key % 256;
}
