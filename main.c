#include <stdio.h>
#include "crypt.h"

int main(){
    encrypt();
    int key = seed("Hello");
    printf("%d", key);
    return 0;
}