#include <stdio.h>

int main() {
    // Usando ponteiros para acessar e modificar variáveis
    int x = 10;
    int *ptr = &x; // ptr aponta para x

    printf("1. Acessando o valor de x usando um ponteiro: %d\n", *ptr);

    *ptr = 20; // Modificando o valor de x através do ponteiro

    printf("2. Modificando o valor de x usando um ponteiro: %d\n", x);

    // Usando ponteiros para trabalhar com arrays
    int arr[] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr; // arr_ptr aponta para o primeiro elemento de arr

    printf("3. Acessando elementos de um array usando um ponteiro:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *arr_ptr);
        arr_ptr++; // Avança o ponteiro para o próximo elemento
    }

    return 0;
}
