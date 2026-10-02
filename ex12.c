#include <stdio.h>

int main(void) {
    int primeiro, segundo;
    printf("Primeiro número: ");
    scanf("%d", &primeiro);
    printf("Segundo número: ");
    scanf("%d", &segundo);

    if (primeiro > segundo) {
        printf("Maior: %d\n", primeiro);
    } else if (segundo > primeiro) {
        printf("Maior: %d\n", segundo);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}

