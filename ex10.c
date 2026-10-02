#include <stdio.h>

int main(void) {
    char produto[] = "Mouse";
    int quantidade = 3;
    float preco = 49.90f;

    printf("APRESENTAÇÃO DE PRODUTO\n");
    printf("Produto: %s\n", produto);
    printf("Quantidade: %d\n", quantidade);
    printf("Preço: R$ %.2f\n", preco);
    return 0;
}
