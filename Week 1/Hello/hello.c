#include <stdio.h>

int main(void) {
    char name[15];
    printf("Enter your first name: ");
    scanf("%s", name);
    printf("Hello, %s\n", name);
}