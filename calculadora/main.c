#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char const *argv[]){
    //setlocale(LC_ALL, "Portuguese");  
    int operacao;
    float n1,n2, resultado;

    printf("Soma [1] ");
    printf("Subtraá∆o [2] ");
    printf("Multiplicaá∆o [3] ");
    printf("Divis∆o[4]\n");
    scanf("%d", &operacao);

    printf("Numero 1:\n");
    scanf("%f", &n1);

    printf("Numero 2:\n");
    scanf("%f", &n2);

    switch (operacao){
        case 1:
            resultado = n1 + n2;
            printf("Soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = n1 - n2;
            printf("Subtraá∆o: %.2f\n", resultado);
            break;
        case 3:
            resultado = n1 * n2;
            printf("Multiplicaá∆o: %.2f\n", resultado);
            break;
        case 4:
            if (n2 != 0)
            {
                resultado = n1/n2;
                printf("Divis∆o: %.2f\n", resultado);
                
            } else {
                printf("Divis∆o por zero n∆o pode!");
            }
            break;
    }

    return 0;
}
