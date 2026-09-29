#include <stdio.h>

int main() {
    int pass;

    printf("Enter password: ");
    scanf("%d", &pass);

    while (pass != 69) {
        printf("Incorrect! Try again: ");
        scanf("%d", &pass);
    }

    printf("Access granted!");
    return 0;
}
